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
	BOOL bLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 16;
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
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	Entity eLocal_41 = 0;
	Entity eLocal_42 = 0;
	char* sLocal_43 = 0;
	var uLocal_44 = 4;
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
	var uLocal_80 = 16;
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
	Any anLocal_97 = 0;
	var uLocal_98 = 16;
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
	Any anLocal_115 = 0;
	Any anLocal_116 = 0;
	Any anLocal_117 = 0;
	Any anLocal_118 = 0;
	Volume volLocal_119 = 0;
	Volume volLocal_120 = 0;
	Volume volLocal_121 = 0;
	var uLocal_122 = 4;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	Volume volLocal_127 = 0;
	Volume volLocal_128 = 0;
	Volume volLocal_129 = 0;
	Volume volLocal_130 = 0;
	Volume volLocal_131 = 0;
	Volume volLocal_132 = 0;
	Volume volLocal_133 = 0;
	Volume volLocal_134 = 0;
	Volume volLocal_135 = 0;
	var uLocal_136 = 4;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	AnimScene ansLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	AnimScene ansLocal_153 = 0;
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
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = -1;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 1097859072;
	var uLocal_184 = 1000;
	var uLocal_185 = 1067450368;
	var uLocal_186 = 5000;
	var uLocal_187 = 42;
	var uLocal_188 = 1103626240;
	var uLocal_189 = 1077936128;
	var uLocal_190 = 1106247680;
	var uLocal_191 = 1103101952;
	var uLocal_192 = 1097859072;
	var uLocal_193 = 1103626240;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = -1;
	var uLocal_205 = 0;
	var uLocal_206 = 1;
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
	var uLocal_224 = 8;
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
	var uLocal_251 = 1176256512;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 20;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
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
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = -1082130432;
	var uLocal_281 = 0;
	var uLocal_282 = 4;
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
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
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
	var uLocal_327 = 1;
	var uLocal_328 = 1;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1;
	var uLocal_346 = -1;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 1176256512;
	var uLocal_358 = 16;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 41788943;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 1;
	var uLocal_373 = 1;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 623901053;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 41788943;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 1;
	var uLocal_405 = 1;
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
	var uLocal_422 = 623901053;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 41788943;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 1;
	var uLocal_437 = 1;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 623901053;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 41788943;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 1;
	var uLocal_469 = 1;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
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
	var uLocal_486 = 623901053;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 41788943;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 1;
	var uLocal_501 = 1;
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
	var uLocal_518 = 623901053;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 41788943;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 1;
	var uLocal_533 = 1;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 623901053;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 41788943;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 1;
	var uLocal_565 = 1;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
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
	var uLocal_582 = 623901053;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 41788943;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 1;
	var uLocal_597 = 1;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 623901053;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 41788943;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 1;
	var uLocal_629 = 1;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 623901053;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 41788943;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 1;
	var uLocal_661 = 1;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 623901053;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 41788943;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 1;
	var uLocal_693 = 1;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 623901053;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 41788943;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 1;
	var uLocal_725 = 1;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 623901053;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 41788943;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 1;
	var uLocal_757 = 1;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 623901053;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 41788943;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 1;
	var uLocal_789 = 1;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 623901053;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 41788943;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 1;
	var uLocal_821 = 1;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 623901053;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 41788943;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 1;
	var uLocal_853 = 1;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 623901053;
	var uLocal_871 = 3;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = -1;
	var uLocal_882 = 1;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = -1;
	var uLocal_894 = 1;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = -1;
	var uLocal_906 = 1;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = -1;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 2;
	var uLocal_917 = 1;
	var uLocal_918 = 1;
	var uLocal_919 = 1;
	var uLocal_920 = 0;
	var uLocal_921 = 1;
	var uLocal_922 = 2;
	var uLocal_923 = 2;
	var uLocal_924 = 3;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 3;
	var uLocal_928 = 1;
	var uLocal_929 = 3;
	var uLocal_930 = 3;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	float fLocal_942 = 0f;
	BOOL bLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	var uLocal_946 = 16;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 1112014848;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 9;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 1;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 24;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = -1082130432;
	var uLocal_1152 = -1082130432;
	var uLocal_1153 = 1103626240;
	var uLocal_1154 = -1067450368;
	var uLocal_1155 = 1097859072;
	var uLocal_1156 = 1073741824;
	var uLocal_1157 = 4000;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 1073741824;
	int iLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	int iLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 2;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	Hash hLocal_1211 = 0;
	Hash hLocal_1212 = 0;
	BOOL bLocal_1213 = 0;
	BOOL bLocal_1214 = 0;
	float fLocal_1215 = 0f;
	float fLocal_1216 = 0f;
	float fLocal_1217 = 0f;
	var uLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	char* sLocal_1228 = 0;
	Blip blLocal_1229 = 0;
	var uLocal_1230 = 2;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	int iLocal_1233 = 0;
	int iLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 1065353216;
	var uLocal_1268 = 1119092736;
	var uLocal_1269 = 1092616192;
	var uLocal_1270 = 1085276160;
	Interior inLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	int iLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = -1;
	var uLocal_1280 = 0;
	var uLocal_1281 = -1;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = -1;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 1073741824;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 1;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 2;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 570;
	var uLocal_1303 = 1065353216;
	var uLocal_1304 = -1082130432;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 2;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 570;
	var uLocal_1320 = 1065353216;
	var uLocal_1321 = -1082130432;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 2;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	Entity eLocal_1334 = 0;
	Entity eLocal_1335 = 0;
	Entity eLocal_1336 = 0;
	Entity eLocal_1337 = 0;
	Entity eLocal_1338 = 0;
	Entity eLocal_1339 = 0;
	Object obLocal_1340 = 0;
	Object obLocal_1341 = 0;
	Entity eLocal_1342 = 0;
	Any anLocal_1343 = 0;
	Any anLocal_1344 = 0;
	Any anLocal_1345 = 0;
	Any anLocal_1346 = 0;
	Any anLocal_1347 = 0;
	Any anLocal_1348 = 0;
	Any anLocal_1349 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void main() // Position - 0x0 Hash - 0x18692477 ^0x18692477
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_43 = "RE_RI";
	iLocal_1180 = 138;
	fLocal_1215 = 2f;
	fLocal_1216 = 5f;
	fLocal_1217 = 5f;
	sLocal_1228 = "";
	uLocal_1272 = { 2795.0842f, -1169.0167f, 46.924f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		bLocal_1214 = true;

	if (!bLocal_1214)
	{
		uLocal_161.f_3 = func_1(&iScriptParam_0);
		uLocal_161.f_43 = func_2();
		uLocal_161.f_161 = func_3(iScriptParam_0.f_2, 2);
		func_4(&uLocal_1299);
		func_5(&uLocal_161, true);
		func_6();
		iLocal_944 = func_7(iScriptParam_0, 2, false);
	}

	while (true)
	{
		func_9(bLocal_1214, &func_8, false);
	
		if (bLocal_1214)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_966)
			{
				case 0:
					if (func_10())
						iLocal_966 = 1;
					break;
			
				case 1:
					if (func_11(&uLocal_161, &iScriptParam_0, false, false, false, 1, false, true))
					{
						func_12(&uLocal_161, &uLocal_1207, &uLocal_1218);
						func_13();
						func_14();
						iLocal_966 = 3;
					}
					else if (uLocal_161.f_160)
					{
						func_8();
					}
					break;
			
				case 3:
					if (!func_15(iLocal_35, 33554432))
					{
						func_16(volLocal_127, true, false, false, false);
						func_17(&iLocal_35, 33554432);
					}
				
					if (func_18() && func_19())
					{
						if (func_20())
						{
							func_21();
							func_22(true, -1, -1);
							func_23(uLocal_161.f_51, &uLocal_871, 0, false, 0, -1, false);
							ENTITY::SET_ENTITY_VISIBLE(uLocal_871[0 /*12*/].f_8, false);
							func_24();
							iLocal_966 = 4;
						}
					}
					else
					{
						if (!func_25(&uLocal_939))
							func_26(&uLocal_939);
						else if (func_27(&uLocal_939) > 15f)
							func_8();
					
						if (func_28(&uLocal_161, &uLocal_98, false, false, 1, false, true, true, false, 0, 0, 0, 0) || func_29(Global_35, volLocal_129, true, 0))
							func_8();
					}
					break;
			
				case 4:
					if (!func_30(&uLocal_161, &uLocal_98, iLocal_944, false, false, false, true, false))
						func_8();
				
					if (!uLocal_161.f_46)
					{
						if (func_31(&iLocal_34) || func_15(iLocal_34, 8192))
						{
							uLocal_161.f_46 = 1;
						
							if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, volLocal_120))
								func_17(&iLocal_34, 8192);
						
							if (func_15(iLocal_1275, 8) && !bLocal_1213)
								func_32(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", uLocal_98[0], false, 1065353216, false);
						
							func_33(true);
						
							if (!func_15(iLocal_35, 1))
								func_34();
							else if (func_15(iLocal_34, 8192) && !func_15(iLocal_34, 32))
								func_36(uLocal_98[0], Global_35, func_35("DESTROYED"), 0, -1082130432, 0, false, 0, 2, true, true, 291934926, true, false, 0);
						
							if (iLocal_965 < 12)
							{
								func_37();
								func_38(&uLocal_80[0]);
								iLocal_965 = 12;
							}
						}
					}
				
					if (func_39())
					{
						uLocal_161.f_50 = 1;
						func_8();
					}
				
					if (func_28(&uLocal_161, &uLocal_98, true, true, false, false, true, true, false, 0, 0, 0, 0))
						func_8();
					break;
			}
		
			BUILTIN::WAIT(uLocal_161.f_158);
		}
	}

	return;
}

var func_1(var uParam0) // Position - 0x306 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

int func_2() // Position - 0x311 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_3(BOOL bParam0, int iParam1) // Position - 0x31F Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

void func_4(var uParam0) // Position - 0x32E Hash - 0xD875BDAD ^0xE429A8CB
{
	func_40(&uParam0->[0 /*17*/], "BEAT_GRT_POS", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
	func_40(&uParam0->[1 /*17*/], "BEAT_GRT_NEG", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, 0);
	return;
}

void func_5(var uParam0, BOOL bParam1) // Position - 0x366 Hash - 0xC2881B02 ^0x427AACB9
{
	func_41(&(uParam0->f_5));

	if (uParam0->f_161)
		func_42("BEAT_LAUNCHED", 4000, false, true, 0, 0, -1, -1, 0);

	MAP::ALLOW_SONAR_BLIPS(bParam1);
	return;
}

void func_6() // Position - 0x395 Hash - 0xB5F0CB46 ^0x396A7645
{
	func_43(&(uLocal_161.f_5), true);
	func_44(&(uLocal_161.f_5), true);
	func_45(&(uLocal_161.f_5), false);
	func_46(&(uLocal_161.f_5), 3f);
	func_47(&(uLocal_161.f_5), 2000);
	return;
}

int func_7(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3CC Hash - 0x32CB1944 ^0x32CB1944
{
	if (bParam2)
		return func_48(iParam0) % iParam1;

	return func_49(iParam0) % iParam1;
}

void func_8() // Position - 0x3F1 Hash - 0x1136D582 ^0x1136D582
{
	int i;

	if (func_50("RE_RI_OBJ_RETURN", true) || func_50("RE_RI_OBJ_KILL", true))
		func_51();

	func_37();
	func_52(&uLocal_1299, 0, false, true, false);
	func_22(false, -1, -1);
	func_53(false);
	func_54();
	func_33(true);

	if (INTERIOR::IS_VALID_INTERIOR(inLocal_1271))
		INTERIOR::UNPIN_INTERIOR(inLocal_1271);

	if (func_15(iLocal_34, 16384))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);

	if (!func_15(iLocal_34, 67108864))
		uLocal_161.f_45 = 0;
	else
		func_55();

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_871[0 /*12*/].f_8))
		OBJECT::DELETE_OBJECT(&(uLocal_871[0 /*12*/].f_8));

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_120))
	{
		if (func_29(Global_35, volLocal_120, true, 0))
			func_56();
	
		EVENT::_0x56B3410626A473E7(&anLocal_97);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_120);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_127);
		VOLUME::DELETE_VOLUME(volLocal_120);
		VOLUME::DELETE_VOLUME(volLocal_127);
	}

	func_57(volLocal_130);
	func_57(volLocal_131);
	func_57(volLocal_133);
	func_57(volLocal_134);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_115))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_115, false);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_116))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_116, false);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_117))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_117, false);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_117))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_118, false);

	for (i = 0; i < 16; i = i + 1)
	{
		if (func_58(uLocal_98[i], 0, true))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_98[i], false);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_98[0]))
	{
		if (func_59(uLocal_98[0], false))
		{
			func_60(uLocal_98[0]);
			func_61(iLocal_1180, false, true, false, false);
		}
	}

	if (bLocal_15)
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(287));
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(288));
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(286));
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(298));
	}

	func_60(Global_35);

	if (func_63(uLocal_1208[0]))
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[0], 0);

	if (func_63(uLocal_1208[1]))
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[1], 0);

	if (func_63(hLocal_1211))
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_1211, 0);

	if (func_63(hLocal_1212))
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_1212, 0);

	if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_42))
		ENTITY::_UNPIN_MAP_ENTITY(eLocal_42);

	if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_41))
		ENTITY::_UNPIN_MAP_ENTITY(eLocal_41);

	func_64(&uLocal_161, &uLocal_98, &uLocal_80, iLocal_944, uLocal_1207, uLocal_1218, false, true, false, true);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(BOOL bParam0, function funcParam1, BOOL bParam2) // Position - 0x648 Hash - 0x2918F7D1 ^0xA0B76DCB
{
	if (bParam0)
		if (!func_65(bParam2) || CAM::IS_SCREEN_FADED_OUT())
			funcParam1();

	return;
}

BOOL func_10() // Position - 0x66C Hash - 0x11A51142 ^0x64D0B46B
{
	switch (iLocal_964)
	{
		case 0:
			if (func_66(&uLocal_161))
			{
				func_67();
				func_68(&uLocal_358);
				func_69();
				func_70(&uLocal_967);
				func_71();
				func_72();
				func_73(&uLocal_871);
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_human_smoke"), 15, 0, joaat("world_human_smoke_male_a"));
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_human_twnrec_scrub_blood_floor_bucket"), 15, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("p_door_new_saloon02x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_candlelamp01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_glass01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_bottlejd01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_bottlewine03x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_whiskeyglass01x"), false);
				STREAMING::REQUEST_MODEL(joaat("s_inv_whiskey01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_sal_shelfset04x"), false);
				iLocal_964 = 1;
			}
			break;
	
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_candlelamp01x")))
				return false;
		
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_glass01x")))
				return false;
		
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlejd01x")))
				return false;
		
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlewine03x")))
				return false;
		
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_whiskeyglass01x")))
				return false;
		
			if (!STREAMING::HAS_MODEL_LOADED(joaat("s_inv_whiskey01x")))
				return false;
		
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_sal_shelfset04x")))
				return false;
		
			if (!func_74(&uLocal_963, sLocal_43))
				return false;
		
			if (!func_75(&uLocal_44))
				return false;
		
			if (!func_76(&uLocal_871))
				return false;
		
			if (!func_77(&uLocal_358))
				return false;
		
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_door_new_saloon02x")))
				return false;
		
			if (!func_78())
				return false;
		
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("world_human_smoke"), false))
				return false;
		
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("world_human_twnrec_scrub_blood_floor_bucket"), false))
				return false;
		
			return true;
	}

	return false;
}

BOOL func_11(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x82B Hash - 0xB132D6EC ^0x3A978286
{
	float radius;

	if (bParam6 || func_79(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), true, bParam3, bParam4))
	{
		if (bParam6 || func_80(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				radius = 7f;
			
				if (func_81(uParam0->f_3, 1))
					radius = 20f;
			
				MISC::CLEAR_AREA(uParam0->f_51, radius, 2097152);
			}
		
			if (iParam5 == 1)
				func_82(uParam0, -1, 0, bParam7);
		
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5f);
		
			if (bParam2)
				uParam0->f_51.f_3 = func_83(uParam0->f_51);
		
			return true;
		}
	}

	return false;
}

void func_12(var uParam0, var uParam1, var uParam2) // Position - 0x8DD Hash - 0x33024A20 ^0xD502F23C
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
	}

	return;
}

void func_13() // Position - 0x902 Hash - 0xADD6A0E5 ^0xC6C72DC0
{
	uLocal_77 = { 2796.746f, -1167.4049f, 46.92401f };
	uLocal_122[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.3833f, -1169.7013f, 48.649635f, 0f, 0f, 149.96957f, 7.680243f, 7.442864f, 4.887091f, "volFront");
	uLocal_122[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2797.6895f, -1164.0298f, 48.649635f, 0f, 0f, 149.96957f, 7.593349f, 5.83218f, 4.887091f, "volBack");
	uLocal_122[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2802.1575f, -1166.2229f, 48.649635f, 0f, 0f, 149.96957f, 2.432765f, 5.624192f, 4.887091f, "volHall");
	uLocal_122[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2799.7952f, -1169.9197f, 48.649635f, 0f, 0f, 149.96957f, 2.878195f, 2.828049f, 4.887091f, "volBackRoom");
	volLocal_120 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.799f, -1167.807f, 49.224f, 0f, 0f, 150f, 10.315f, 13.684f, 5.096f, "m_volStore");
	func_16(volLocal_120, true, false, false, false);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_120, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_120, 0, 0, 0, -1, -1, 0);
	anLocal_115 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volLocal_120, false, 15);
	volLocal_121 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.1365f, -1173.1902f, 48.025803f, 0f, 0f, -29.661898f, 2.388672f, 2.484698f, 2.493898f, "m_volShopDoor");
	volLocal_127 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2792.137f, -1175.6572f, 47.097992f, 0f, 0f, -30.959118f, 9.80044f, 4.089561f, 4.642987f, "m_volStoreSidewalk");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_127, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_127, 0, 0, -156825994, -1, -1, 2);
	anLocal_116 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volLocal_127, false, 15);
	volLocal_128 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2787.507f, -1182.0519f, 46.8672f, 0f, 0f, 0f, 0.5f, 0.5f, 1f, "m_volRoad");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_128, 0, 0, 0, -1, -1, 0);
	anLocal_117 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volLocal_128, false, 15);
	volLocal_119 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2787.7053f, -1182.1898f, 46.85251f, 0f, 0f, 0f, 1f, 1f, 1f, "m_volHorseCartAcrossStreet");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_119, 0, 0, 0, -1, -1, 0);
	anLocal_118 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volLocal_119, false, 15);
	volLocal_130 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.9187f, -1172.5526f, 48.876797f, 0f, 0f, -29.661894f, 1.878804f, 0.624271f, 2.500972f, "m_volWindow");
	volLocal_129 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.019f, -1180.614f, 47.098f, 0f, 0f, -30.959f, 17f, 13f, 10f, "m_volCallover");
	volLocal_132 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.978f, -1173.951f, 48.026f, 0f, 0f, -29.662f, 3.144f, 2.232f, 2.494f, "m_volSidewalk");
	volLocal_133 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), uLocal_161.f_51, 0f, 0f, 0f, 2f, 2f, 2f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(volLocal_133, true);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_133, false);
	volLocal_134 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), 2793.7502f, -1174.1163f, 46.88817f, 0f, 0f, 0f, 3.5f, 3.5f, 3.5f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(volLocal_134, true);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_134, false);
	anLocal_97 = EVENT::_0x18E93EBFC1FCFA48(volLocal_120, true, true);

	if (iLocal_944 == 0)
	{
		volLocal_135 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volOpeningDialogue");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_135, VOLUME::CREATE_VOLUME_BOX(2821.3496f, -1173.793f, 48.026f, 0f, 0f, 5.789957f, 58.594593f, 23.872925f, 10.707943f));
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_135, VOLUME::CREATE_VOLUME_BOX(2801.2732f, -1187.0732f, 48.026f, 0f, 0f, -75.61369f, 87.07604f, 26.246477f, 10.707943f));
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_135, VOLUME::CREATE_VOLUME_BOX(2758.4888f, -1185.2479f, 48.026f, 0f, 0f, -117.67754f, 67.965546f, 26.246477f, 10.707943f));
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_135, VOLUME::CREATE_VOLUME_BOX(2758.7458f, -1161.8297f, 48.026f, 0f, 0f, -31f, 64.310036f, 14.15442f, 10.707943f));
	}

	return;
}

void func_14() // Position - 0xCF2 Hash - 0x41D357A7 ^0xD56E262C
{
	uLocal_358[0 /*32*/].f_6 = { 2792.286f, -1174.7947f, 46.89715f };
	uLocal_358[0 /*32*/].f_9 = 155.2901f;
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_358[0 /*32*/].f_23), "0312_U_M_M_NbxBartender_02", 64);
	func_84(&(uLocal_358[0 /*32*/].f_22));
	uLocal_358[1 /*32*/].f_6 = { 2793.7397f, -1176.1918f, 46.86639f };
	uLocal_358[1 /*32*/].f_9 = 268.4264f;

	if (iLocal_944 == 0)
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_358[1 /*32*/].f_23), "0878_A_M_M_Civ_Poor_Asian_AVOID_02", 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_358[1 /*32*/].f_23), "0950_A_M_M_Guard_White_AGGRESSIVE_05", 64);

	func_84(&(uLocal_358[1 /*32*/].f_22));
	uLocal_358[2 /*32*/].f_6 = { 2797.8464f, -1167.7495f, 46.924f };
	uLocal_358[2 /*32*/].f_9 = 226.8494f;
	func_84(&(uLocal_358[2 /*32*/].f_22));
	uLocal_358[3 /*32*/].f_6 = { 2793.0115f, -1166.6573f, 46.93268f };
	uLocal_358[3 /*32*/].f_9 = 209.8502f;
	func_84(&(uLocal_358[3 /*32*/].f_22));
	func_85(&(uLocal_358[3 /*32*/].f_22));
	func_86(&(uLocal_358[3 /*32*/].f_22));
	uLocal_358[4 /*32*/].f_6 = { 2790.8154f, -1169.8367f, 46.924f };
	uLocal_358[4 /*32*/].f_9 = 63.8435f;
	func_84(&(uLocal_358[4 /*32*/].f_22));
	uLocal_358[5 /*32*/].f_6 = { 2793.9424f, -1167.316f, 47.97197f };
	uLocal_358[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	func_84(&(uLocal_358[5 /*32*/].f_22));
	func_86(&(uLocal_358[5 /*32*/].f_22));
	uLocal_358[6 /*32*/].f_6 = { 2795.7693f, -1164.2742f, 46.924f };
	uLocal_358[6 /*32*/].f_9 = 91.8245f;
	func_84(&(uLocal_358[6 /*32*/].f_22));
	func_86(&(uLocal_358[6 /*32*/].f_22));
	uLocal_358[7 /*32*/].f_6 = { 2799.9739f, -1164.8418f, 46.92401f };
	uLocal_358[7 /*32*/].f_9 = 81.9027f;
	func_84(&(uLocal_358[7 /*32*/].f_22));
	uLocal_358[8 /*32*/].f_6 = { 2802.033f, -1166.7819f, 46.92401f };
	uLocal_358[8 /*32*/].f_9 = 71.2798f;
	func_84(&(uLocal_358[8 /*32*/].f_22));
	uLocal_358[9 /*32*/].f_6 = { 2802.6785f, -1164.2649f, 46.924f };
	uLocal_358[9 /*32*/].f_9 = 71.2798f;
	func_84(&(uLocal_358[9 /*32*/].f_22));
	uLocal_358[10 /*32*/].f_6 = { 2799.45f, -1169.8073f, 46.924f };
	uLocal_358[10 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	func_84(&(uLocal_358[10 /*32*/].f_22));
	func_86(&(uLocal_358[10 /*32*/].f_22));
	uLocal_358[11 /*32*/].f_6 = { 2799.6738f, -1169.3939f, 46.924f };
	uLocal_358[11 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	func_84(&(uLocal_358[11 /*32*/].f_22));
	func_86(&(uLocal_358[11 /*32*/].f_22));
	uLocal_358[12 /*32*/].f_6 = { 2800.0183f, -1169.7731f, 46.924f };
	uLocal_358[12 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	func_84(&(uLocal_358[12 /*32*/].f_22));
	func_86(&(uLocal_358[12 /*32*/].f_22));
	uLocal_358[13 /*32*/].f_6 = { 2800.355f, -1169.263f, 46.924f };
	uLocal_358[13 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	func_84(&(uLocal_358[13 /*32*/].f_22));
	func_86(&(uLocal_358[13 /*32*/].f_22));
	uLocal_358[14 /*32*/].f_6 = { 2799.8193f, -1170.5857f, 46.924f };
	uLocal_358[14 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	func_84(&(uLocal_358[14 /*32*/].f_22));
	func_86(&(uLocal_358[14 /*32*/].f_22));
	uLocal_358[15 /*32*/].f_6 = { 2800.6106f, -1169.2933f, 46.924f };
	uLocal_358[15 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	func_84(&(uLocal_358[15 /*32*/].f_22));
	func_86(&(uLocal_358[15 /*32*/].f_22));
	return;
}

BOOL func_15(int iParam0, int iParam1) // Position - 0x1107 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_16(Volume volParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1116 Hash - 0x9D3A6700 ^0x8105FFC1
{
	int num;

	num = 2442122;

	if (bParam1)
		num = num | 1;

	if (bParam2)
		num = num | 72;

	if (bParam3)
		num = num | 6;

	if (bParam4)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_17(var uParam0, int iParam1) // Position - 0x115C Hash - 0xF55E891F ^0xF55E891F
{
	func_87(uParam0, iParam1);
	return;
}

int func_18() // Position - 0x116C Hash - 0xB3393B0A ^0xB3393B0A
{
	if (func_58(uLocal_98[0], 0, true))
		return 1;

	if (func_88(iLocal_1180, false))
		uLocal_98[0] = func_89(iLocal_1180, false, false, false, true, true);

	if (!func_58(uLocal_98[0], 0, true))
	{
		func_90(iLocal_1180, true, uLocal_358[0 /*32*/].f_6, uLocal_358[0 /*32*/].f_6.f_1, uLocal_358[0 /*32*/].f_6.f_2, false);
		return 0;
	}

	return 0;
}

int func_19() // Position - 0x11DF Hash - 0x99D14A64 ^0x95BE946D
{
	switch (iLocal_37)
	{
		case 0:
			eLocal_41 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_door_new_saloon02x"), 2793.192f, -1173.657f, 46.924f, 5);
			eLocal_42 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_door_new_saloon02x"), 2794.293f, -1174.435f, 46.924f, 5);
			iLocal_37 = iLocal_37 + 1;
			break;
	
		case 1:
			if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_42) && ENTITY::IS_MAP_ENTITY_PINNED(eLocal_41))
			{
				uLocal_1230[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(eLocal_41));
				uLocal_1230[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(eLocal_42));
				iLocal_37 = iLocal_37 + 1;
			}
			break;
	
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1230[0]))
			{
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1230[1]))
			{
			}
		
			iLocal_37 = iLocal_37 + 1;
			return 1;
	
		case 3:
			return 1;
	}

	return 0;
}

BOOL func_20() // Position - 0x12BA Hash - 0x57CD00B6 ^0xC88B3D37
{
	switch (iLocal_1206)
	{
		case 0:
			iLocal_1206 = 1;
			break;
	
		case 1:
			if (!func_91(uLocal_161.f_51, uLocal_161.f_51.f_3, &uLocal_358, &uLocal_98, true, 0, -1, true))
				return false;
		
			iLocal_1206 = 6;
			break;
	
		case 6:
			return true;
	}

	return false;
}

int func_21() // Position - 0x1314 Hash - 0xC3326AAB ^0x28E863DA
{
	int i;

	if (func_58(uLocal_98[0], 0, true))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_98[0]);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_98[0], true);
		func_92(uLocal_98[0], &(uLocal_358[0 /*32*/].f_23), false);
	
		if (VOLUME::DOES_VOLUME_EXIST(volLocal_133))
			PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_133, uLocal_98[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
	
		if (func_58(uLocal_98[1], 0, true))
		{
			PED::_SET_PED_INTERACTION_PERSONALITY(uLocal_98[1], joaat("aggressive"));
			func_93(uLocal_98[1], true);
			func_94(uLocal_98[1], true, true);
		}
	
		for (i = 0; i < 16; i = i + 1)
		{
			if (func_58(uLocal_98[i], 0, true) && i != 1)
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_98[i], uLocal_358[i /*32*/].f_6, uLocal_358[i /*32*/].f_9, true, false, true);
		
			if (uLocal_98[i] != uLocal_98[0] && uLocal_98[i] != uLocal_98[1])
			{
				if (func_58(uLocal_98[i], 0, true))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_98[i], "RAT_INFESTATION_RATS_GROUP", 0);
					func_95(uLocal_98[i], joaat("honor_event_kill_vermin"));
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_98[i], true);
				}
			}
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_358[i /*32*/].f_23)))
				func_92(uLocal_98[i], &(uLocal_358[i /*32*/].f_23), false);
		}
	
		func_96();
		func_97(uLocal_98[0], &uLocal_161, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_98[1]))
			func_97(uLocal_98[1], &uLocal_161, false);
	
		return 1;
	}

	return 0;
}

void func_22(BOOL bParam0, int iParam1, int iParam2) // Position - 0x1494 Hash - 0x125B69C2 ^0x691A1A94
{
	int i;

	for (i = 0; i < 16; i = i + 1)
	{
		if (i >= 2 && i != iParam1 && i != iParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_98[i]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_98[i], bParam0);
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_98[i], bParam0);
			}
		}
	}

	if (bParam0)
	{
	}

	return;
}

int func_23(Vector3 vParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x14F7 Hash - 0xAF0AE2FF ^0xAF0AE2FF
{
	int i;
	Vector3 vector;
	int num;
	Vector3 offsetFromEntityInWorldCoords;
	int num2;
	var entityCoords;

	num = 1;

	if (iParam7 < 0 || iParam7 >= *uParam3)
		iParam7 = *uParam3 - 1;

	for (i = iParam6; i <= iParam7; i = i + 1)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST(uParam3->[i /*12*/].f_8))
		{
		}
		else if (uParam3->[i /*12*/].f_7 != 0 && !func_15(uParam3->[i /*12*/].f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam3->[i /*12*/].f_7))
			{
				num = 0;
			}
			else
			{
				if (uParam3->[i /*12*/].f_9 != -1)
				{
					num2 = uParam3->[i /*12*/].f_9;
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam3->[num2 /*12*/].f_8, uParam3->[i /*12*/]) };
				
					if (func_15(uParam3->[i /*12*/].f_11, 64))
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false);
					else
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false, true);
				
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam3->[i /*12*/].f_8, uParam3->[num2 /*12*/].f_8, 0, uParam3->[i /*12*/], uParam3->[i /*12*/].f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_15(uParam3->[i /*12*/].f_11, 8))
						offsetFromEntityInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, iParam4, uParam3->[i /*12*/]) };
					else
						offsetFromEntityInWorldCoords = { uParam3->[i /*12*/] };
				
					if (!func_15(uParam3->[i /*12*/].f_11, 128))
						func_98(&offsetFromEntityInWorldCoords, uParam3->[i /*12*/].f_10);
				
					if (func_15(uParam3->[i /*12*/].f_11, 64))
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false);
					else
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false, true);
				
					if (_IS_NULL_VECTOR(uParam3->[i /*12*/].f_4))
						vector = { 0f, 0f, uParam3->[i /*12*/].f_3 };
					else
						vector = { uParam3->[i /*12*/].f_4 };
				
					if (func_15(uParam3->[i /*12*/].f_11, 4))
						vector.f_2 = func_100(vector.f_2 + iParam4);
				
					ENTITY::SET_ENTITY_ROTATION(uParam3->[i /*12*/].f_8, vector, 2, true);
				
					if (!func_15(uParam3->[i /*12*/].f_11, 128))
						if (uParam3->[i /*12*/].f_10)
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam3->[i /*12*/].f_8, false);
				}
			
				if (func_15(uParam3->[i /*12*/].f_11, 2))
					ENTITY::FREEZE_ENTITY_POSITION(uParam3->[i /*12*/].f_8, true);
			
				if (func_15(uParam3->[i /*12*/].f_11, 32))
					ENTITY::SET_ENTITY_VISIBLE(uParam3->[i /*12*/].f_8, false);
			
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam3->[i /*12*/].f_8, true);
					PHYSICS::ACTIVATE_PHYSICS(uParam3->[i /*12*/].f_8);
				}
			
				ENTITY::_SET_ENTITY_FADE_IN(uParam3->[i /*12*/].f_8);
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam3->[i /*12*/].f_8, true, false) };
			}
		}
	}

	return num;
}

void func_24() // Position - 0x17D6 Hash - 0x6B45EF5C ^0xF951FF8A
{
	if (iLocal_944 == 0)
	{
		ansLocal_145 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_145.f_4, 0, "PBL_Intro_Idle", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_145, uLocal_161.f_51, 0f, 0f, -30f, 2);
	
		if (func_58(uLocal_98[0], 0, true))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145, "barman", uLocal_98[0], 0);
	
		if (func_58(uLocal_98[1], 0, true))
		{
			TASK::CLEAR_PED_TASKS(uLocal_98[1], true, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145, "man", uLocal_98[1], 0);
		}
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(ansLocal_145.f_4))
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_145, true, false))
				ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_145);
	}

	return;
}

BOOL func_25(var uParam0) // Position - 0x186F Hash - 0x5001E582 ^0x5001E582
{
	return func_101(*uParam0, 1);
}

void func_26(var uParam0) // Position - 0x187F Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_102(uParam0, 0f);
	return;
}

float func_27(var uParam0) // Position - 0x188E Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_25(uParam0))
		return uParam0->f_1;

	if (func_103(uParam0))
		return uParam0->f_2;

	return func_104() - uParam0->f_1;
}

BOOL func_28(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12) // Position - 0x18C3 Hash - 0x3F99189C ^0xFF0D8C95
{
	float num;
	var unk;

	num = 0f;

	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
			if (func_105())
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
			else if (func_106(uParam0->f_3))
			{
				num = 250f;
			}
			else if (func_81(uParam0->f_3, 131072))
			{
				num = 70f;
				num = num + 10f;
			}
			else if (func_81(uParam0->f_3, 1) && iParam12 == 0)
			{
				num = 215f;
				num = num + 20f;
			
				if (uParam0->f_48)
					num = num - 80f;
			}
			else if (func_81(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_107(Global_36, uParam0->f_51) > num)
					return true;
			}
			else
			{
				unk = { iParam9, iParam10, iParam11 };
			
				if (func_107(Global_36, unk) > num)
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

BOOL func_29(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x1B36 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_30(var uParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1B6C Hash - 0xD61D6695 ^0x584D21AC
{
	BOOL flag;
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;

	flag = false;
	firstEntityPedIsCarrying = 0;
	pedIndexFromEntityIndex = 0;

	if (!uParam0->f_186)
		func_108(uParam0, iParam2);

	uParam0->f_1 = uParam0->f_1 % 4;
	func_109(uParam0, uParam1);

	if (bParam4)
	{
		if (uParam0->f_48 && !(uParam0->f_5 & 16384 != 0))
		{
			if (uParam0->f_5.f_1 & 256 != 0)
				func_110(&(uParam0->f_5));
		
			func_111(&(uParam0->f_5), 16384);
		}
	}

	if (!uParam0->f_48 && !func_112(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_114(&(uParam0->f_121));
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
				
					func_115(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
	
		case 2:
			if (!func_116(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
				flag = true;
			break;
	
		case 3:
			break;
	}

	if (func_81(uParam0->f_3, 128))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->[0]) && !PED::IS_PED_INJURED(uParam1->[0]) && uParam0->f_3 != 49)
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82(uParam1->[0])))
				func_117(uParam0, uParam1->[0]);
	
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

BOOL func_31(var uParam0) // Position - 0x1D6F Hash - 0x321A05E9 ^0xB50B24A
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_98[0]))
	{
		if (func_118(uLocal_98[0], 0, &(uLocal_161.f_5), &uLocal_1181, 0, 0))
		{
			func_17(uParam0, 1);
			return true;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_98[1]))
		if (func_118(uLocal_98[1], 0, &(uLocal_161.f_5), &uLocal_1181, 0, 0))
			return true;

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_120))
		if (func_29(Global_35, volLocal_120, true, 0))
			if (bLocal_943)
				return true;
		else if (func_119())
			return true;

	if (func_15(iLocal_34, 131072))
		return true;

	return false;
}

void func_32(int iParam0, int iParam1, int iParam2, char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x1E0B Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_120() != -1)
		return;

	if (Global_36616 && func_121(iParam1) != false)
		return;

	num = func_122(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_123(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
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
			func_124(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_123(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

void func_33(BOOL bParam0) // Position - 0x1F0A Hash - 0x2A4CB408 ^0x55ABE3D2
{
	if (bParam0)
	{
		if (func_15(iLocal_34, 128))
		{
			PED::CLEAR_PED_NON_CREATION_AREA();
			func_125(&iLocal_34, 128);
		}
	}
	else if (!func_15(iLocal_34, 128))
	{
		PED::SET_PED_NON_CREATION_AREA(2784.866f, -1179.4386f, 40.3084f, 2808.7708f, -1155.4501f, 50.432f);
		func_17(&iLocal_34, 128);
	}

	return;
}

void func_34() // Position - 0x1F67 Hash - 0x78DA74F3 ^0xD924CF42
{
	var taskSequenceId;

	PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(uLocal_98[0], Global_36, 3);
	TASK::_0x2E1D6D87346BB7D2(uLocal_98[0], Global_35, 0, 0);

	if (!func_126(uLocal_98[0]))
	{
		func_127(uLocal_98[0], 0);
	
		if (!func_15(iLocal_34, 32))
		{
			func_36(uLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
			func_17(&iLocal_34, 32);
		}
	
		TASK::TASK_SMART_FLEE_PED(uLocal_98[0], Global_35, 500f, -1, 0, 1077936128, 0);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2795.5923f, -1164.5543f, 46.924f, 2f, 20000, 1048576000, 0, 1193033728);
		TASK::TASK_COWER(0, -1, Global_35, 0);
		func_128(uLocal_98[0], &taskSequenceId, 0, 0, true, true);
	}

	return;
}

const char* func_35(char* sParam0) // Position - 0x203F Hash - 0xB499CF13 ^0xA48F81B
{
	var unk;
	var unk9;

	unk9 = { func_129(sParam0) };

	if (iLocal_944 == 0)
		TEXT_LABEL_ASSIGN_STRING(&unk, "RE_RI_NBX_V1_", 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk, "RE_RI_NBX_V2_", 64);

	TEXT_LABEL_APPEND_STRING(&unk, &unk9, 64);
	return func_130(unk);
}

BOOL func_36(Ped pedParam0, Ped pedParam1, const char* sParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, int iParam14) // Position - 0x207B Hash - 0x943CD13D ^0x943CD13D
{
	return func_131(pedParam0, pedParam1, sParam2, sParam3, iParam4, iParam5, bParam6, iParam7, iParam8, bParam9, bParam10, iParam11, false, bParam12, bParam13, iParam14) >= 0;
}

void func_37() // Position - 0x20A8 Hash - 0x45C7491C ^0x45C7491C
{
	func_38(&blLocal_1229);
	return;
}

void func_38(Blip* pblParam0) // Position - 0x20B7 Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*pblParam0))
		MAP::REMOVE_BLIP(pblParam0);

	return;
}

BOOL func_39() // Position - 0x20CF Hash - 0xE66DDD97 ^0x957A1714
{
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();

	if (iLocal_965 > 2)
	{
		if (iLocal_944 == 0)
			func_138();
	
		func_139();
		func_140();
	}

	if (!func_15(iLocal_34, 262144))
		if (iLocal_965 <= 8)
			func_141(Global_35, uLocal_98[0], 5f, &uLocal_14, 0, true, false);
		else
			func_142();

	if (iLocal_965 > 0)
	{
		func_143();
		func_144();
		func_145();
	}

	switch (iLocal_965)
	{
		case 0:
			if (func_146())
			{
				if (iLocal_944 == 0)
				{
					ANIMSCENE::START_ANIM_SCENE(ansLocal_145);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_145, "PBL_Intro_Idle", true);
				}
			
				func_147();
				func_148();
				func_33(false);
				func_149();
				func_92(uLocal_98[0], &(uLocal_358[0 /*32*/].f_23), false);
				iLocal_965 = 1;
			}
			break;
	
		case 1:
			if (iLocal_944 == 0)
			{
				if (func_150(&uLocal_161, &uLocal_355, 1077936128, 1114636288, 35f, 1500, 5.5f, 2f, 1, 0, false, -1082130432, true, 1, false))
				{
					if (func_151(0, 1, uLocal_98[0], true) && func_151(0, 1, uLocal_98[1], true))
					{
						func_22(false, 4, 5);
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_145, "PBL_Intro_Action", true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_145, "BOOL_Intro", true, false);
						func_114(&(uLocal_161.f_121));
						iLocal_965 = 2;
					}
				}
				else if (func_152(Global_35, uLocal_98[0], true, true) < 60f)
				{
					func_153();
				}
			}
			else if (func_150(&uLocal_161, &uLocal_355, 1077936128, 50f, 35f, 1500, 5.5f, 1065353216, 1, 0, false, -1082130432, true, 0, false))
			{
				func_22(false, 4, 5);
				func_114(&(uLocal_161.f_121));
				iLocal_965 = 2;
			}
			break;
	
		case 2:
			if (func_154())
			{
				func_96();
				func_155(&uLocal_1182, 2f);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_145))
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_145, "barman", uLocal_98[0]);
			
				func_156();
				iLocal_965 = 3;
			}
			break;
	
		case 3:
			if (func_29(Global_35, volLocal_129, true, 0) && !func_157())
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_80[0]))
					func_158();
			
				iLocal_965 = 4;
			}
			break;
	
		case 4:
			if (func_159(&uLocal_161, 1f, 40f / 2f, 10f, 1, 0, true, -1082130432, true, 1125515264, false, false) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_98[0]))
			{
				if (func_160())
				{
				}
			
				func_161();
				func_162();
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);
			
				if (func_152(Global_35, uLocal_98[0], true, true) > 5f)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_98[0], uLocal_136[0 /*2*/], "close_callover_f_barman", Global_35, -1, 4f, -4f, 67108864, 0, false, false, -1082130432, 0, 65536, -1082130432);
					func_163();
				}
			
				iLocal_965 = 5;
			}
			break;
	
		case 5:
			func_162();
		
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], "close_callover_f_barman", 1))
			{
				if (func_152(Global_35, uLocal_98[0], true, true) < 13f && func_151(0, 1, uLocal_98[0], true))
				{
					func_164();
					func_165(volLocal_120, joaat("p_masonjarmoonshine01x"), false);
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);
					iLocal_965 = 6;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], -1162159953, true) != 1)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_98[0], uLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108865, 0, false, false, -1082130432, 0, 65536, -1082130432);
				}
			}
			break;
	
		case 6:
			func_162();
		
			if (func_15(iLocal_34, 67108864))
				func_56();
		
			if (func_166())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], -1162159953, true) != 1 && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], "interact_01_barman", 1) && !func_29(Global_35, volLocal_120, true, 0))
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_98[0], uLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108864, 0, false, false, -1082130432, 0, 65536, -1082130432);
			
				if (func_15(iLocal_1275, 8))
				{
					uLocal_161.f_44 = 1;
					func_167();
					MAP::REMOVE_BLIP(&uLocal_80[0]);
					iLocal_965 = 8;
					break;
				}
			
				if (func_15(iLocal_1275, 16))
				{
					uLocal_161.f_44 = 1;
					func_167();
					MAP::REMOVE_BLIP(&uLocal_80[0]);
					iLocal_965 = 7;
					break;
				}
			
				func_168();
			
				if (func_15(iLocal_1275, 32))
				{
					func_167();
					MAP::REMOVE_BLIP(&uLocal_80[0]);
					iLocal_965 = 7;
				}
			}
			break;
	
		case 7:
			func_169();
		
			if (func_151(-2f, 1, Global_35, true) || func_15(iLocal_34, 65536))
			{
				func_170();
				iLocal_965 = 14;
			}
			break;
	
		case 8:
			if (func_15(iLocal_1275, 1024))
			{
				func_171(true);
				func_167();
				MAP::REMOVE_BLIP(&uLocal_80[0]);
				iLocal_965 = 7;
				break;
			}
		
			if (func_15(iLocal_1275, 16))
				func_171(true);
		
			func_172();
			func_173();
			func_174();
			func_175();
			func_176();
		
			if (!func_15(iLocal_34, 262144))
				if (func_29(Global_35, volLocal_120, true, 0))
					func_142();
		
			if (func_177() && func_178(Global_35, uLocal_1194, true) > 2f)
			{
				func_37();
				func_179(uLocal_98[0], &uLocal_80[0], joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_OBJECTIVE"), BLIP_HIGHER, "BLIP_BARTENDER");
				func_180("RE_RI_OBJ_RETURN", 7500, 0, 0, -1, -1, 0);
				iLocal_965 = 9;
			}
			else if (func_15(iLocal_34, 2))
			{
				if (!func_15(iLocal_34, 134217728))
				{
					if (func_151(-1f, 1, 0, false))
					{
						func_38(&uLocal_80[0]);
						func_181();
						func_180("RE_RI_OBJ_KILL", 7500, 0, 0, -1, -1, 0);
						func_17(&iLocal_34, 134217728);
					}
				}
			}
			break;
	
		case 9:
			func_172();
			func_174();
			func_176();
		
			if (func_178(Global_35, uLocal_1194, true) < 1f)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_121, true, 0))
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_871[0 /*12*/].f_8, true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON, false);
					func_17(&iLocal_34, 16384);
					iLocal_965 = 10;
				}
			}
			else
			{
				func_173();
			}
			break;
	
		case 10:
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			ANIMSCENE::START_ANIM_SCENE(ansLocal_145.f_1);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Window_Idle", true);
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			func_182("RE_RI_OBJ_RETURN", true);
			func_51();
		
			if (func_15(iLocal_34, 512) || func_15(iLocal_34, 256))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Reward_Avg", true);
				uLocal_967.f_75 = func_183(joaat("REWARD_BEAT_LARGE"), false, -1);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Reward_Good", true);
				uLocal_967.f_75 = func_183(joaat("REWARD_BEAT_HUGE"), false, -1);
			}
		
			if (iLocal_944 == 1)
				uLocal_967.f_75 = uLocal_967.f_75 * 2;
		
			iLocal_965 = 11;
			break;
	
		case 11:
			func_184();
		
			if (func_15(iLocal_34, 16384))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("endsinwalk")) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, ansLocal_145.f_1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_871[0 /*12*/].f_8))
						OBJECT::DELETE_OBJECT(&(uLocal_871[0 /*12*/].f_8));
				
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					func_38(&uLocal_80[0]);
					func_185(&uLocal_967);
					func_186();
					func_187(33, Global_35);
					func_32(12, 0, 0, "RE_HONOR_HELPED_STRANGER", uLocal_98[0], false, 1065353216, false);
					func_188(uLocal_98[0], 3);
					EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(2796.864f, -1168.9099f, 46.924f, 5f, false);
					LAW::_0x61B98367D93F012F(PLAYER::PLAYER_ID());
					volLocal_131 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), 2793.7705f, -1174.1443f, 46.88809f, 0f, 0f, 0f, 1f, 1f, 1f);
					func_171(true);
					bLocal_1213 = true;
					func_125(&iLocal_34, 16384);
				}
				else
				{
					CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
				}
			}
		
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_145.f_1, false))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_98[0], uLocal_77, 1f, 20000, 1048576000, 0, 1193033728);
				func_189(&(uLocal_161.f_5), true);
				iLocal_965 = 13;
			}
			break;
	
		case 12:
			func_22(false, -1, -1);
			func_175();
		
			if (func_15(iLocal_34, 8192))
			{
			}
			else if (!func_15(iLocal_34, 32))
			{
				func_36(uLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				func_17(&iLocal_34, 32);
			}
		
			if (func_15(iLocal_34, 16384))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_125(&iLocal_34, 16384);
			}
		
			if (func_58(uLocal_98[0], 0, true) && !func_15(iLocal_35, 1))
			{
				if (func_126(uLocal_98[0]))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_98[0], 315, false);
					PED::SET_PED_CONFIG_FLAG(uLocal_98[0], 146, false);
					PED::SET_PED_CONFIG_FLAG(uLocal_98[0], 178, true);
				
					if (uLocal_161.f_5.f_10 != 0)
						LAW::_LAW_WITNESS_RESPONSE_TASK(uLocal_98[0], Global_35, uLocal_161.f_5.f_10, Global_36, joaat("crime_threaten"));
					else
						LAW::_LAW_WITNESS_RESPONSE_TASK(uLocal_98[0], Global_35, uLocal_98[0], Global_36, joaat("crime_threaten"));
				}
			}
		
			if (func_58(uLocal_98[1], 0, true))
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_98[1], Global_35, 500f, -1, 0, 1077936128, 0);
				PED::SET_PED_KEEP_TASK(uLocal_98[1], true);
			}
		
			uLocal_161.f_50 = 1;
			iLocal_965 = 14;
			break;
	
		case 13:
			if (func_190())
				iLocal_965 = 14;
			break;
	
		case 14:
			func_169();
			func_191();
			func_175();
		
			if (func_15(iLocal_35, 1))
				func_174();
		
			if (func_15(iLocal_34, 8192))
			{
				if (!func_15(iLocal_34, 1048576))
				{
					if (func_151(-3f, 1, uLocal_98[0], false))
					{
						if (!func_15(iLocal_34, 32))
						{
							func_36(uLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, false, 0, 2, true, true, 291934926, true, false, 0);
							func_17(&iLocal_34, 32);
						}
					
						func_192(joaat("crime_vandalism"));
					}
				}
			}
			else
			{
				if (func_178(Global_35, uLocal_161.f_51, true) > 25f && !func_29(Global_35, volLocal_120, true, 0) && !func_29(Global_35, volLocal_121, true, 0) && func_193())
					return true;
			
				if (func_15(iLocal_34, 1))
				{
					if (!func_15(iLocal_34, 1048576))
					{
						if (func_151(-3f, 1, 0, false))
						{
							if (!func_15(iLocal_34, 32))
							{
								func_36(uLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, false, 0, 2, true, true, 291934926, true, false, 0);
								func_17(&iLocal_34, 32);
							}
						
							func_192(joaat("crime_assault"));
						}
					}
				}
				else
				{
					if (func_15(iLocal_34, 65536))
					{
						if (!func_15(iLocal_34, 4))
						{
							if (func_151(0, 1, uLocal_98[0], true))
							{
								if (uLocal_161.f_98[0] < 20f)
									func_36(Global_35, uLocal_98[0], func_35("BOREDNOW"), 0, -1082130432, 0, false, 0, 2, true, true, 291934926, true, false, 0);
							
								func_17(&iLocal_34, 4);
							}
						}
					}
				
					func_194(&uLocal_98[0], 0, Global_35, true, 0, 0, 0, true);
				}
			}
			break;
	}

	return false;
}

void func_40(int* piParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x2C29 Hash - 0x77C6B9D1 ^0xC3EDC08A
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
		if (func_195(piParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*piParam0, 1))
				func_196(piParam0->f_6, piParam0->f_5, piParam0->f_14, false);
			else
				func_197(piParam0->f_6, piParam0->f_5, false);
		
			func_198(piParam0->f_6, false, true);
		}
		else
		{
			MISC::SET_BIT(piParam0, 14);
		}
	
		MISC::SET_BIT(piParam0, 0);
	}
	else
	{
		func_199(piParam0, piParam0->f_5);
	
		if (!MISC::IS_BIT_SET(*piParam0, 13))
			MISC::SET_BIT(piParam0, 0);
	}

	MISC::SET_BIT(piParam0, 15);
	return;
}

void func_41(var uParam0) // Position - 0x2CDC Hash - 0xD2F4094 ^0xD2F4094
{
	func_43(uParam0, false);
	func_200(uParam0, false);
	func_189(uParam0, true);
	func_201(uParam0, true);
	func_202(uParam0, false);
	func_203(uParam0, true);
	func_204(uParam0, true, true, true);
	return;
}

int func_42(char* sParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x2D17 Hash - 0xA0C3ED00 ^0x48A9B53F
{
	const char* str;

	if (bParam2)
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);

	if (Global_1572887.f_12 != -1)
		return func_205(sParam0, iParam1, 0, 0, 1, true);

	str = func_206(iParam8, sParam0, iParam4, iParam5, iParam6, iParam7);

	if (bParam3)
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(str);

	return func_205(str, iParam1, 0, 0, 1, true);
}

void func_43(var uParam0, BOOL bParam1) // Position - 0x2D6D Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_207(&(uParam0->f_1), 16384);
	else
		func_111(&(uParam0->f_1), 16384);

	return;
}

void func_44(var uParam0, BOOL bParam1) // Position - 0x2D93 Hash - 0xB272A69C ^0x2A37F53B
{
	if (bParam1)
		func_207(&(uParam0->f_1), 4);
	else
		func_111(&(uParam0->f_1), 4);

	return;
}

void func_45(var uParam0, BOOL bParam1) // Position - 0x2DB5 Hash - 0x97140DD8 ^0xA3B87048
{
	if (bParam1)
		func_207(&(uParam0->f_1), 1024);
	else
		func_111(&(uParam0->f_1), 1024);

	return;
}

void func_46(var uParam0, float fParam1) // Position - 0x2DDB Hash - 0x4F8BE4B5 ^0x3B01A701
{
	uParam0->f_23 = fParam1;
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0x2DE9 Hash - 0x4F8BE4B5 ^0x896E5CBE
{
	uParam0->f_18 = iParam1;
	return;
}

int func_48(int iParam0) // Position - 0x2DF7 Hash - 0x69AF6CF8 ^0x4EA5F9C3
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_49(int iParam0) // Position - 0x2E0A Hash - 0xBDF95F4C ^0xB611BAAC
{
	return Global_17504.f_42[iParam0 /*8*/];
}

BOOL func_50(char* sParam0, BOOL bParam1) // Position - 0x2E1B Hash - 0x19376378 ^0xBD65197F
{
	var unk;

	unk.f_1 = sParam0;
	return func_208(UIFEED::_0x4E88A65968A55C78(&unk, bParam1));
}

void func_51() // Position - 0x2E35 Hash - 0xCE5FB49E ^0x1685AE95
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	return;
}

void func_52(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2E41 Hash - 0x5EBCB35A ^0x47D35D05
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (bParam3)
		{
			if (func_195(uParam0->[i /*17*/].f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0->[i /*17*/], 11))
				{
				}
				else
				{
					func_209(&(uParam0->[i /*17*/].f_6), true, true);
				
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

void func_53(BOOL bParam0) // Position - 0x2EE8 Hash - 0xEB8F48EC ^0x4320029F
{
	if (bParam0)
	{
		EVENT::_0xB6F4825153920582();
		LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("crime_vandalism"), 0, 0, -1);
		PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		if (!func_15(iLocal_34, 64))
		{
			LAW::_ENABLE_DISPATCH_LAW_2(false);
			LAW::_ENABLE_DISPATCH_LAW(false);
			func_17(&iLocal_34, 64);
		}
	}
	else if (func_15(iLocal_34, 64))
	{
		LAW::_ENABLE_DISPATCH_LAW_2(true);
		LAW::_ENABLE_DISPATCH_LAW(true);
		func_125(&iLocal_34, 64);
	}

	return;
}

void func_54() // Position - 0x2F4F Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

void func_55() // Position - 0x2F63 Hash - 0xE2A73CD0 ^0xF44E472D
{
	int num;
	int num2;

	if (!func_15(iLocal_34, 1073741824))
	{
		num2 = 6;
		num = func_210();
		func_211(&num, 0, 0, num2, 0, 0, 0, false);
		func_212(33, 53, num);
		func_213(9, joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"), 1, 977356591, num2);
		func_17(&iLocal_34, 1073741824);
	}

	return;
}

void func_56() // Position - 0x2FB9 Hash - 0x4E8E0CB4 ^0xCC8267D
{
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[0]) != 0)
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[0], 0);

	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[1]) != 0)
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[1], 0);

	return;
}

void func_57(Volume volParam0) // Position - 0x2FF3 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_58(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x300A Hash - 0x41649F50 ^0x41649F50
{
	iParam1 = iParam1 | 1;

	if (bParam2)
		iParam1 = iParam1 | 2;

	return func_214(pedParam0, iParam1);
}

BOOL func_59(Ped pedParam0, BOOL bParam1) // Position - 0x302B Hash - 0xCF2C7801 ^0x9E207E26
{
	int num;

	num = func_215(pedParam0, 0, 954 - 1, true);

	if (num == -1)
		return false;

	if (!func_216(num) && bParam1)
		return false;

	return func_217(num, 1);
}

void func_60(Ped pedParam0) // Position - 0x3068 Hash - 0x4E202C34 ^0x2E8F8C15
{
	TASK::TASK_CLEAR_LOOK_AT(pedParam0);
	PED::_0xAAC0EE3B4999ABB5(pedParam0, 0);
	return;
}

void func_61(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x307D Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_218(iParam0))
		return;

	if (!func_217(iParam0, true))
		return;

	if (!func_217(iParam0, 2))
		return;

	if (!bParam4 && !func_216(iParam0) && func_219(iParam0))
		return;

	func_220(iParam0, 1);
	func_221(iParam0);

	if (func_223(func_222(iParam0)))
	{
		persChar = func_62(iParam0);
	
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
	
		func_220(iParam0, 16);
	}

	if (func_217(iParam0, 128) && !bParam3)
		func_224(iParam0, false);

	return;
}

PersChar func_62(int iParam0) // Position - 0x3169 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_218(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

BOOL func_63(Hash hParam0) // Position - 0x3189 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_64(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3195 Hash - 0x99CD546B ^0x33A9D88
{
	int i;
	Ped mount;
	int num;
	BOOL flag;
	Hash value;
	var buffer;
	int num2;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(uParam0->f_3)))
		MISC::_0x1096603B519C905F("");

	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
	
		if (!uParam0->f_45 && !uParam0->f_44)
			func_226(uParam0->f_3, 524288);
	}

	if (func_58(PLAYER::PLAYER_PED_ID(), 0, true))
	{
		mount = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		num = uParam0->f_98;
	
		for (i = 0; i < *uParam1; i = i + 1)
		{
			flag = bParam8 && DECORATOR::DECOR_EXIST_ON(uParam1->[i], "pedRoam_bInPedRoam");
		
			if (func_58(uParam1->[i], 0, false))
			{
				func_227(uParam1->[i], flag);
			
				if (func_228(uParam0, &uParam1->[i]))
					func_229(&uParam1->[i]);
			}
		
			if (!uParam0->f_50)
			{
				if (func_58(uParam1->[i], 0, true))
				{
					if (bParam9)
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1->[i]))
							PED::SET_PED_STEALTH_MOVEMENT(uParam1->[i], false, 0, 0);
						else if (PED::GET_PED_CROUCH_MOVEMENT(uParam1->[i]))
							PED::_SET_PED_CROUCH_MOVEMENT(uParam1->[i], false, 0, false);
				
					if (!flag)
						if (!bParam6)
							func_231(uParam1->[i], 1073741824, i < num ? uParam0->f_98[i] : -1f, mount, false);
						else
							TASK::TASK_WANDER_STANDARD(uParam1->[i], 1193033728, 0);
				}
			}
		}
	}

	if (bParam7)
		func_232(uParam0);

	func_233(uParam0);

	if (!uParam0->f_186)
		func_108(uParam0, iParam3);

	if (uParam0->f_186)
	{
		value = func_234(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(value, "%u", &buffer);
		num2 = 0;
	
		if (!uParam0->f_48)
			num2 = 2;
		else if (!uParam0->f_44)
			num2 = 1;
	
		func_235(7, value, num2);
		uParam0->f_186 = 0;
	}

	return;
}

BOOL func_65(BOOL bParam0) // Position - 0x336A Hash - 0xF47E9C1D ^0x9C835404
{
	int causeOfMostRecentForceCleanup;

	causeOfMostRecentForceCleanup = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();

	if (bParam0)
		return true;

	if (func_236(causeOfMostRecentForceCleanup))
		return false;

	if (func_237(causeOfMostRecentForceCleanup, 1) || func_237(causeOfMostRecentForceCleanup, 2))
		return true;

	return false;
}

BOOL func_66(var uParam0) // Position - 0x33AA Hash - 0x4252B2F0 ^0x75EABCE5
{
	int numPeds;
	int num;

	numPeds = func_238(uParam0->f_3);
	num = func_239(true);

	if (num > 0)
		numPeds = numPeds + num;

	PED::_RESERVE_AMBIENT_PEDS(numPeds);

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= numPeds)
		return true;

	return false;
}

void func_67() // Position - 0x33E7 Hash - 0xFEA6C841 ^0xC505FC38
{
	int i;

	if (iLocal_944 == 0)
	{
		iLocal_16 = 9 - 2;
		uLocal_358[1 /*32*/].f_1 = joaat("re_ratinfestation_males_01");
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_358[1 /*32*/].f_23), "0878_A_M_M_Civ_Poor_Asian_AVOID_02", 64);
		uLocal_358[1 /*32*/].f_3 = -754402027;
	}
	else
	{
		iLocal_16 = 14;
	}

	for (i = 2; i <= (2 + iLocal_16) - 1; i = i + 1)
	{
		uLocal_358[i /*32*/].f_1 = joaat("a_c_rat_01");
		func_84(&(uLocal_358[i /*32*/].f_22));
		func_240(&(uLocal_358[i /*32*/].f_22));
	}

	return;
}

void func_68(var uParam0) // Position - 0x346A Hash - 0xF3514F1D ^0xB87BBECA
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_241(&(uParam0->[i /*32*/].f_1));
		func_241(&(uParam0->[i /*32*/].f_12));
	}

	return;
}

void func_69() // Position - 0x349E Hash - 0x97F9DE4E ^0x625A468E
{
	uLocal_136[0 /*2*/] = "script_re@rat_infestation";
	uLocal_136[0 /*2*/].f_1 = "wait_idle_barman";
	func_242(uLocal_136[0 /*2*/], &uLocal_44);
	uLocal_136[1 /*2*/] = "creatures_mammal@rat@normal@idle";
	uLocal_136[1 /*2*/].f_1 = "idle";
	func_242(uLocal_136[1 /*2*/], &uLocal_44);
	uLocal_136[2 /*2*/] = "AI_GESTURES@GEN_MALE@STANDING@SPEAKER";
	uLocal_136[2 /*2*/].f_1 = "confused_punctuate_f_002";
	func_242(uLocal_136[2 /*2*/], &uLocal_44);
	return;
}

void func_70(var uParam0) // Position - 0x3503 Hash - 0xDEFEDD94 ^0x5B15717B
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), func_35("THANKS"), 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), func_35("REWARD"), 64);

	if (func_243())
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_54), func_35("WLCM_JHN"), 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_54), func_35("WLCM_ART"), 64);

	uParam0->f_78 = 0;
	uParam0->f_79 = 1;
	uParam0->f_72 = func_244(uLocal_161.f_3);
	return;
}

void func_71() // Position - 0x3563 Hash - 0xEE5219E9 ^0xD17ED023
{
	ansLocal_145.f_4 = "script@beat@town@ratInfestation@saloon";
	ansLocal_145.f_5 = "script@beat@town@ratInfestation@saloonWindow";
	ansLocal_153.f_4 = "script@beat@town@ratInfestation@rat";
	ansLocal_153.f_5 = "script@beat@town@ratInfestation@rat_2";
	ansLocal_153.f_6 = "script@beat@town@ratInfestation@rat_3";
	return;
}

void func_72() // Position - 0x3593 Hash - 0x94A9775A ^0x5C8DEB1B
{
	uLocal_871[0 /*12*/].f_7 = joaat("p_foldedbills01x");
	return;
}

void func_73(var uParam0) // Position - 0x35A8 Hash - 0xA34578F0 ^0x719CFC63
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*12*/].f_7 != 0)
			STREAMING::REQUEST_MODEL(uParam0->[i /*12*/].f_7, false);
	}

	return;
}

BOOL func_74(var uParam0, char* sParam1) // Position - 0x35DD Hash - 0x6565581A ^0x6565581A
{
	return true;
}

BOOL func_75(var uParam0) // Position - 0x35E6 Hash - 0xFD4169FE ^0xC670F8AE
{
	BOOL flag;
	int i;

	flag = true;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->[i /*8*/]))
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&uParam0->[i /*8*/]))
				flag = false;
	}

	if (!flag)
		return false;

	return true;
}

BOOL func_76(var uParam0) // Position - 0x362F Hash - 0x27522974 ^0x9B1E640
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*12*/].f_7 != 0)
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->[i /*12*/].f_7))
				return false;
	}

	return true;
}

BOOL func_77(var uParam0) // Position - 0x366C Hash - 0x57DE44A3 ^0x57DE44A3
{
	int i;
	BOOL flag;

	flag = false;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!func_245(&uParam0->[i /*32*/]))
			flag = true;
	}

	return !flag;
}

BOOL func_78() // Position - 0x369F Hash - 0x3CF15848 ^0x6B742C7
{
	if (INTERIOR::IS_VALID_INTERIOR(inLocal_1271))
	{
		return INTERIOR::IS_INTERIOR_READY(inLocal_1271);
	}
	else
	{
		inLocal_1271 = INTERIOR::GET_INTERIOR_AT_COORDS(2798.7693f, -1165.3717f, 48.24032f);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_1271);
	}

	return false;
}

BOOL func_79(int iParam0, var uParam1, BOOL bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x36DC Hash - 0x8023D598 ^0x6E2465E1
{
	int value;
	float num;
	float num2;
	BOOL flag;
	BOOL flag2;

	if (uParam4.f_6 > -1)
	{
		*uParam1 = { func_246(iParam0, uParam4.f_6) };
		uParam1->f_4 = uParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_247(iParam0, uParam1, bParam2, bParam12, false);
		*uParam3 = 0;
		return true;
	}

	switch (uParam1->f_9)
	{
		case 0:
			if (func_112(iParam0, 128))
			{
				if (!func_248(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return false;
				}
			}
			else
			{
				func_249(iParam0, &num, &num2, &value, false);
				flag2 = false;
				*uParam1 = { func_250(&flag2, iParam0, num2, num) };
			
				if (flag2)
				{
					*uParam11 = 1;
					return false;
				}
			
				if (_IS_NULL_VECTOR(*uParam1))
					return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			
				uParam1->f_4 = func_252(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
			
				if (func_3(uParam4.f_2, 8))
				{
					func_247(iParam0, uParam1, false, bParam12, false);
					*uParam3 = 0;
					return true;
				}
			
				func_253(uParam1);
			}
		
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
	
		case 1:
			if (func_254(uParam1, uParam3, uParam11, bParam2, bParam13))
				if (!bParam13 && func_255(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
					uParam1->f_9 = 2;
				else
					uParam1->f_9 = 5;
			break;
	
		case 2:
			if (func_112(iParam0, 128))
			{
				if (!func_256(uParam1, &flag))
				{
					if (flag)
						return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				
					return false;
				}
			}
			else
			{
				func_249(iParam0, &num, &num2, &value, false);
			
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(value))
					if (!func_253(uParam1))
						return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					else
						uParam1->f_9 = 3;
				else
					uParam1->f_9 = 3;
			}
		
			*uParam3 = 0;
			break;
	
		case 3:
			if (func_257(iParam0, uParam4.f_1, uParam1, uParam4, bParam14))
			{
				func_247(iParam0, uParam1, bParam2, bParam12, false);
				*uParam3 = 0;
				return true;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
	
		case 5:
			if (uParam1->f_8 < 12)
				uParam1->f_9 = 0;
			break;
	}

	if (bParam2)
		func_42("BEAT_SCAN", 2000, false, true, 0, 0, -1, -1, 0);

	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_42("BEAT_FAIL", 4000, false, true, 0, 0, -1, -1, 0);
		}
	
		*uParam11 = 1;
	}

	return false;
}

BOOL func_80(var uParam0, int iParam1) // Position - 0x3973 Hash - 0xA7B02427 ^0x63682AA8
{
	if (func_81(iParam1, 256))
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_259(iParam1, func_258(uParam0), &(uParam0->f_172)))
			if (func_58(Global_35, 0, true))
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);

	return true;
}

BOOL func_81(int iParam0, int iParam1) // Position - 0x39C5 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_260(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

void func_82(var uParam0, int iParam1, Entity eParam2, BOOL bParam3) // Position - 0x39E8 Hash - 0x48BC18FC ^0x4DA48EDA
{
	if (uParam0->f_176)
		return;

	if (iParam1 != -1)
		func_261(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, (float)iParam1, (float)iParam1, 5f, "Custom Sized Ambient Avoidance");
	else if (func_81(uParam0->f_3, 1) && !func_81(uParam0->f_3, 32))
		func_261(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	else if (func_81(uParam0->f_3, 2) && !func_81(uParam0->f_3, 32))
		func_261(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	else
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);

	if (bParam3)
		func_262(uParam0->f_171, 1);

	if (func_81(uParam0->f_3, 1))
	{
		func_261(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * { 3.5f, 3.5f, 3.5f }, "Predator Stay Out");
		func_263(uParam0->f_174, 0, 262144, false, false);
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

float func_83(var uParam0, var uParam1, var uParam2) // Position - 0x3B31 Hash - 0x3F535152 ^0x974D5F01
{
	float dx;

	dx = { Global_36 - uParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
}

void func_84(var uParam0) // Position - 0x3B51 Hash - 0xCF51B75C ^0xCF51B75C
{
	func_17(uParam0, 2);
	return;
}

void func_85(var uParam0) // Position - 0x3B60 Hash - 0x7A1F391A ^0x7A1F391A
{
	func_17(uParam0, 1);
	return;
}

void func_86(var uParam0) // Position - 0x3B6F Hash - 0x94A3B327 ^0x94A3B327
{
	func_17(uParam0, 128);
	return;
}

void func_87(var uParam0, int iParam1) // Position - 0x3B7F Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_88(int iParam0, BOOL bParam1) // Position - 0x3B90 Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_218(iParam0))
		return false;

	if (func_217(iParam0, true) && !func_216(iParam0) && func_219(iParam0))
		return false;

	if (!func_217(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_264(iParam0, false))
			return false;

	return true;
}

Ped func_89(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x3BF0 Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_88(iParam0, true))
		return 0;

	if (func_223(func_222(iParam0)))
	{
		persChar = func_62(iParam0);
	
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

	if (bParam4 && !func_216(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_265(iParam0, true);
	func_266(iParam0);

	if (bParam3)
		func_265(iParam0, 16);

	!bParam2;
	return ped;
}

int func_90(int iParam0, BOOL bParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x3CAD Hash - 0x4673E62 ^0xCF31A97
{
	var unk;
	Entity entity;

	if (!func_218(iParam0))
		return 0;

	if (!func_223(func_222(iParam0)))
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		func_267(iParam0, false);
		return 0;
	}

	unk = { uParam2, uParam3, uParam4 };

	if (!func_264(iParam0, false))
		if (bParam1)
			if (!func_268(iParam0))
				return 0;
		else
			return 0;

	if (!_IS_NULL_VECTOR(unk))
		PERSCHAR::_0x59C7AD6FEA2AC449(func_62(iParam0), unk);

	if (bParam5)
		entity = PERSCHAR::_0x08FC896D2CB31FCC(func_62(iParam0), false);
	else
		entity = PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_62(iParam0), false);

	if (!_IS_NULL_VECTOR(unk))
		PERSCHAR::_0xBB68908CD11AEBDC(func_62(iParam0));

	if (ENTITY::DOES_ENTITY_EXIST(entity))
		return 1;

	return 0;
}

BOOL func_91(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x3D7E Hash - 0x32B5A95D ^0x32B5A95D
{
	int i;

	if (*uParam4 != *uParam5)
		return false;

	if (iParam7 < 0 || iParam7 >= *uParam4)
		iParam7 = 0;

	if (iParam8 < 0 || iParam8 >= *uParam4)
		iParam8 = *uParam4 - 1;

	for (i = iParam7; i <= iParam8; i = i + 1)
	{
		if (func_269() || !func_270(&uParam4->[i /*32*/], &uParam5->[i], uParam0, fParam3, bParam6, bParam9))
			return false;
	}

	return true;
}

void func_92(Ped pedParam0, const char* sParam1, BOOL bParam2) // Position - 0x3E04 Hash - 0x9639E259 ^0x31ABA23C
{
	if (bParam2 || func_58(pedParam0, 0, false))
	{
		DECORATOR::DECOR_SET_BOOL(pedParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedParam0, sParam1);
	}

	return;
}

void func_93(Ped pedParam0, BOOL bParam1) // Position - 0x3E33 Hash - 0xA7D77622 ^0xA8F11233
{
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), pedParam0, 3, 2, bParam1);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), pedParam0, 4, 2, bParam1);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), pedParam0, 7, 2, bParam1);
	return;
}

void func_94(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3E65 Hash - 0x1F6BF127 ^0x12733F97
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

void func_95(Entity eParam0, int iParam1) // Position - 0x3EB3 Hash - 0x9F3718A3 ^0xC5D96668
{
	BOOL _int;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "honor_block"))
			_int = DECORATOR::DECOR_GET_INT(eParam0, "honor_block");
	
		_int = _int || func_121(iParam1);
		DECORATOR::DECOR_SET_INT(eParam0, "honor_block", _int);
	}

	return;
}

void func_96() // Position - 0x3EF5 Hash - 0x542A4A72 ^0x82536D73
{
	int i;

	for (i = 0; i < 16; i = i + 1)
	{
		if (func_58(uLocal_98[i], 0, true) && i >= 2)
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_98[i], 301, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_98[i], 317, false);
			PLAYER::_0xCB0B9506BC91E441(uLocal_98[i], 2);
			PED::GET_PED_CONFIG_FLAG(uLocal_98[i], 317, true);
		}
	}

	return;
}

int func_97(Entity eParam0, var uParam1, BOOL bParam2) // Position - 0x3F60 Hash - 0xC0251106 ^0xC6402AFA
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(eParam0))
		return 0;

	if (func_271(eParam0, &(uParam1->f_121)))
	{
		uParam1->f_120 = uParam1->f_120 + 1;
		return 1;
	}

	return 0;
}

void func_98(var uParam0, BOOL bParam1) // Position - 0x3F98 Hash - 0x48E1E2DA ^0xDFE370FB
{
	var unk;

	unk = { *uParam0 };
	unk.f_2 = unk.f_2 + 5f;

	if (bParam1)
	{
		if (!func_272(&unk, 50, 10, false))
		{
		}
		else
		{
			*uParam0 = { unk };
		}
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x3FD0 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_100(float fParam0) // Position - 0x3FFA Hash - 0x309400ED ^0x309400ED
{
	float num;

	num = fParam0;

	if (fParam0 < 0f)
		num = num + 360f;
	else if (fParam0 >= 360f)
		num = num - 360f;

	return num;
}

BOOL func_101(int iParam0, int iParam1) // Position - 0x4032 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_102(var uParam0, float fParam1) // Position - 0x4041 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_104() - fParam1;
	func_273(uParam0, 1);
	func_274(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_103(var uParam0) // Position - 0x4067 Hash - 0x39705408 ^0x39705408
{
	return func_101(*uParam0, 2);
}

float func_104() // Position - 0x4077 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_105() // Position - 0x40A9 Hash - 0xFF37E121 ^0x13C690C8
{
	if (!func_275(Global_1395482.f_1))
		return false;

	return func_276(Global_1395482.f_1, 32);
}

BOOL func_106(int iParam0) // Position - 0x40CF Hash - 0x9E5480A7 ^0x9E5480A7
{
	if (func_81(iParam0, 1))
		return false;

	return 1 == func_277(iParam0) || 2 == func_277(iParam0);
}

float func_107(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x40FB Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_108(var uParam0, int iParam1) // Position - 0x4119 Hash - 0xBFCD3EF3 ^0x8EE98928
{
	var unk;
	Hash hash;

	unk = { func_278(uParam0) };
	hash = func_234(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, hash, unk);

	if (STATS::STATSTRACKER_IS_INITIALIZED(hash))
		uParam0->f_186 = 1;

	return;
}

void func_109(var uParam0, var uParam1) // Position - 0x4163 Hash - 0x213CA44 ^0x4305D77A
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

void func_110(var uParam0) // Position - 0x41C4 Hash - 0x6672DAD ^0x6672DAD
{
	func_189(uParam0, true);
	func_279(uParam0, 20);
	return;
}

void func_111(int iParam0, int iParam1) // Position - 0x41DB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_112(int iParam0, int iParam1) // Position - 0x41EC Hash - 0x5F43695 ^0x71726655
{
	if (!func_260(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_1 && iParam1 != false;
}

void func_113(var uParam0, var uParam1, int iParam2, Blip* pblParam3) // Position - 0x4211 Hash - 0x7B34B5CF ^0x1E92F3D2
{
	if (!func_260(iParam2))
		return;

	if (*uParam1)
		return;

	if (func_280())
		func_281(1);

	func_282(iParam2, uParam0->f_43);
	func_283(iParam2, false, 0, false, false);

	if (func_284(iParam2) != -1)
		MISC::_SET_WEATHER_TYPE_FROZEN(true);

	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(uParam0->f_3));

	if (MAP::DOES_BLIP_EXIST(*pblParam3))
		MAP::REMOVE_BLIP(pblParam3);

	func_285(uParam0, true, false);
	*uParam1 = 1;
	return;
}

void func_114(var uParam0) // Position - 0x4292 Hash - 0xDA7BC560 ^0xF375F766
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i /*9*/].f_7 = 0f;
		uParam0->[i /*9*/].f_8 = 0f;
	}

	return;
}

void func_115(var uParam0, int iParam1, float fParam2) // Position - 0x42C0 Hash - 0x81430847 ^0xEF772964
{
	BOOL flag;
	float num;

	flag = false;

	if (uParam0->f_178 && func_286())
		flag = true;

	if (!uParam0->f_48 && !func_112(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_114(&(uParam0->f_121));
			return;
		}
	
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
			if (!func_29(Global_35, uParam0->f_173, true, 0))
				return;
	
		num = func_287(uParam0, flag);
		func_288(&uParam0->f_121[iParam1 /*9*/], num, 1082130432, 0, 90f, false, uParam0->f_98[iParam1]);
	
		if (func_289(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_114(&(uParam0->f_121));
		}
	}

	return;
}

BOOL func_116(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x439C Hash - 0x677A2EA8 ^0x854614DB
{
	float num;
	float num2;
	int num3;

	num = 30f;
	num2 = 150f;

	if (func_81(uParam2->f_3, 1))
		num2 = 150f;
	else
		num2 = 70f;

	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
			if (func_290())
				num = 15f;
	
		if (func_291(uParam2, num))
			*uParam1 = 1;
	}

	if (!uParam2->f_48)
	{
		if (!bParam3 && func_292(PLAYER::PLAYER_ID(), true, false, true))
			return false;
	
		if (!func_291(uParam2, num2))
			if (!func_293(Global_1310750[uParam2->f_3 /*111*/].f_38))
				return false;
	
		if (!func_294(uParam2->f_3, 2) && func_295(2))
			return false;
	
		if (func_81(iParam0, 4194304) || func_81(iParam0, 33554432))
			if (func_296(true))
				return false;
	}

	if (func_297(Global_35))
		return false;

	if (func_298(0, true, true) && !func_299(iParam0))
		return false;

	if (!*uParam1 && func_81(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_300(Global_35, false))
			return false;
	
		if (Global_16)
			return false;
	
		if (func_292(PLAYER::PLAYER_ID(), true, false, true))
			return false;
	
		if (func_301())
			return false;
	
		num3 = func_302(func_2());
	
		if (func_303(num3))
			if (func_304(Global_36, num3))
				return false;
	
		if (func_305(Global_36) && !uParam2->f_161)
			return false;
	
		if (!uParam2->f_48)
			if (func_306(&(uParam2->f_91), 0, 1084227584, true, true))
				return false;
	}

	return true;
}

void func_117(var uParam0, Entity eParam1) // Position - 0x4570 Hash - 0xB2C008B7 ^0x4C61CF35
{
	float scaleX;
	float num;
	Volume volume;

	if (func_307(uParam0->f_51))
	{
		func_308(uParam0->f_51, 0);
		scaleX = func_309(uParam0->f_3);
		volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, scaleX, scaleX, scaleX, func_310());
		num = !func_81(uParam0->f_3, 1) ? 20f : -1f;
		uParam0->f_51.f_11 = func_312(volume, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam0->f_3), true, eParam1, 8, false, num);
	}

	return;
}

BOOL func_118(Ped pedParam0, Entity eParam1, int iParam2, var uParam3, int iParam4, int iParam5) // Position - 0x45E5 Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > iParam2->f_5)
		func_313(iParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			iParam2->f_12 = iParam5;
		else
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(iParam2->f_1 & 128 != 0))
		{
			if (func_314(pedParam0, iParam2))
			{
				*uParam3 = 128;
				func_315(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(iParam2->f_1 & 8 != 0))
			{
				if (func_316(pedParam0, iParam2))
				{
					*uParam3 = 8;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_317(pedParam0, eParam1, iParam2))
				{
					*uParam3 = 8;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		
			if (*iParam2 & 32 != 0)
			{
				if (func_318(pedParam0, iParam2))
				{
					*uParam3 = 64;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_292(PLAYER::PLAYER_ID(), false, true, iParam2->f_1 & 524288 == 0))
		{
			if (!(iParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_315(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_319(iParam2, 1065353216))
			{
				if (!(iParam2->f_1 & 4 != 0))
				{
					if (func_320(Global_35, pedParam0, iParam2))
					{
						*uParam3 = 4;
						func_315(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			
				if (!(iParam2->f_1 & 256 != 0))
				{
					if (func_321(Global_35, pedParam0, iParam2))
					{
						*uParam3 = 256;
						func_315(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 16 != 0))
		{
			if (iParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_322(Global_35, pedParam0, iParam2, false))
				{
					*uParam3 = 16;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_322(Global_35, pedParam0, iParam2, true))
			{
				*uParam3 = 16;
				func_315(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_323(pedParam0, iParam2))
				{
					*uParam3 = 32;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_324(&pedParam0, iParam2))
				{
					*uParam3 = 4096;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam2->f_1 & 2 != 0))
			{
				if (func_325(iParam2, 4000))
				{
					if (func_326(pedParam0, Global_1935630.f_41, *iParam2 & 128 != 0, false, *iParam2 & 256 != 0) && func_327(iParam2, pedParam0) && func_328(iParam2, pedParam0))
					{
						*uParam3 = 2;
						func_315(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 2 != 0))
		{
			if (iParam2->f_12 < 4f)
			{
				if (func_326(pedParam0, Global_1935630.f_41, *iParam2 & 128 != 0, true, *iParam2 & 256 != 0) && func_327(iParam2, pedParam0) && func_328(iParam2, pedParam0))
				{
					*uParam3 = 2;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_329(pedParam0, Global_1935630.f_41))
							{
								func_330();
								*uParam3 = 2;
								func_315(pedParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_329(pedParam0, Global_1935630.f_41))
						{
							func_330();
							*uParam3 = 2;
							func_315(pedParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (iParam2->f_12 < 10f)
			{
				if (func_331(iParam2, pedParam0) || iParam2->f_9 > 0 && func_332() - iParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_330();
						*uParam3 = 2;
						func_315(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_333())
					{
						if (func_329(pedParam0, Global_1935630.f_42))
						{
							func_330();
							*uParam3 = 2;
							func_315(pedParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 1024 != 0))
		{
			if (func_334(iParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_315(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!(iParam2->f_1 & 2048 != 0))
			{
				if (func_335(pedParam0, eParam1, iParam2))
				{
					*uParam3 = 2048;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_336(pedParam0, iParam2))
					{
						*uParam3 = 8192;
						func_315(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*iParam2 & 64 != 0)
			{
				if (func_337(pedParam0, iParam2))
				{
					*uParam3 = 32768;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_338(iParam2, 4000))
				{
					if (func_339(&pedParam0, iParam2))
					{
						*uParam3 = 512;
						func_315(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_340(pedParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_315(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(iParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_341(iParam2, pedParam0))
			{
				*uParam3 = 1;
				func_315(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_119() // Position - 0x4C0E Hash - 0x27A679CA ^0x46B22585
{
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"), 2791.884f, -1173.4327f, 48.86314f, 5.25f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_window_smashed"), 2791.884f, -1173.4327f, 48.86314f, 5.25f))
		return true;

	return false;
}

BOOL func_120() // Position - 0x4C5E Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_121(int iParam0) // Position - 0x4C6C Hash - 0xA05361F6 ^0xF8A0FD3E
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

int func_122(int iParam0) // Position - 0x4D82 Hash - 0xC25EDEC0 ^0x47BF4274
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

void func_123(int iParam0, BOOL bParam1, int iParam2, int iParam3, char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4E69 Hash - 0x9A51185A ^0xAFBC4112
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

	num = func_342();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_343(iParam0);
	
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

	if (func_344(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_243())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_345(Global_40.f_11095.f_35, num4, num3);
	num2 = func_342();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_346(num2);
		func_348(func_347(), false, 4000);
		func_349(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_350(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_352(func_351(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_122(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_352(func_351(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_122(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_351(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_355(10, 1);

	return;
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x520E Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

void func_125(var uParam0, int iParam1) // Position - 0x526D Hash - 0xF55E891F ^0xF55E891F
{
	func_356(uParam0, iParam1);
	return;
}

BOOL func_126(Ped pedParam0) // Position - 0x527D Hash - 0xA2EC8B4E ^0xA2EC8B4E
{
	if (func_29(pedParam0, volLocal_120, true, 0) || func_29(pedParam0, volLocal_121, true, 0))
		return true;

	return false;
}

void func_127(Ped pedParam0, int iParam1) // Position - 0x52A7 Hash - 0xE24D77D2 ^0x28B420EC
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(pedParam0, iParam1);
	return;
}

void func_128(Ped pedParam0, int* piParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x52BF Hash - 0xAB850FC2 ^0x2509CA9B
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

struct<8> func_129(char* sParam0) // Position - 0x5318 Hash - 0x8E82EE3 ^0x8E82EE3
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
	return unk;
}

const char* func_130(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x532B Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_131(Ped pedParam0, Ped pedParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, int iParam15) // Position - 0x533F Hash - 0xD668806E ^0x3A7B5575
{
	BOOL flag;
	float num;
	int num2;
	const char* str;

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
		if (func_290())
			iParam4 = 50f;
		else
			iParam4 = 75f;

	if (bParam9)
		if (pedParam0 != Global_35 && pedParam1 != Global_35)
			if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
				if (func_357(pedParam0, true, true) > iParam4)
					return -1;

	flag = pedParam0 == pedParam1 || pedParam1 == 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0) || iParam11 == 1718175949 || bParam9 == false)
	{
		if (!flag)
			num = func_152(pedParam0, pedParam1, true, true);
	
		if (flag || bParam7 || num < iParam4 || bParam9 == false)
		{
			func_26(&uLocal_0);
		
			if (!flag && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					TASK::TASK_LOOK_AT_ENTITY(pedParam0, pedParam1, 7500, 0, 51, 0);
			
				if (func_358(pedParam0, pedParam1, num, bParam13))
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
				num2 = func_359(pedParam0, sParam2, iParam11, pedParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15) ? 1 : -1;
			}
		
			if (num2 >= 0)
			{
			}
		
			return num2;
		}
	}

	return -1;
}

void func_132() // Position - 0x5530 Hash - 0x7C264E74 ^0xE7FE4B3A
{
	if (uLocal_161.f_46)
	{
		func_53(false);
		return;
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_120))
		if (func_29(Global_35, volLocal_120, true, 0))
			if (!func_292(PLAYER::PLAYER_ID(), true, false, true))
				func_53(true);
		else
			func_53(false);

	return;
}

void func_133() // Position - 0x557A Hash - 0x6B140315 ^0x999E77DB
{
	int i;
	int num;

	if (iLocal_965 > 0)
	{
		for (i = 2; i <= 15; i = i + 1)
		{
			if (uLocal_358[i /*32*/].f_1 != 0)
			{
				if (!func_58(uLocal_98[i], 0, true))
				{
					num = num + 1;
				}
				else if (!func_126(uLocal_98[i]))
				{
					func_361(uLocal_98[i], false, false);
					num = num + 1;
				}
			}
		}
	
		iLocal_1220 = num;
	}

	return;
}

void func_134() // Position - 0x55E7 Hash - 0xDC506AB6 ^0xF038CEF0
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(10)))
		func_36(uLocal_98[0], uLocal_98[1], func_35("IGNORE"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(11)))
	{
		func_36(uLocal_98[0], uLocal_98[0], func_35("FRUSTRATED"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
		func_363(1891783641, uLocal_98[0], true);
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(12)))
	{
		func_36(uLocal_98[0], uLocal_98[0], func_35("WORRY"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
		func_363(1891783641, uLocal_98[0], true);
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(13)))
		func_36(uLocal_98[0], uLocal_98[0], func_35("ANGER"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(14)))
	{
		func_163();
	
		if (iLocal_944 == 1 && !func_15(iLocal_34, 268435456))
			func_36(uLocal_98[0], Global_35, func_35("CALL_LONG_ALT"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
		else
			func_36(uLocal_98[0], Global_35, func_35("CALL_LONG"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
	
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(15)))
	{
		func_163();
		func_36(uLocal_98[0], Global_35, func_35("CALL_SHORT"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);
	}

	if (!func_15(iLocal_34, 67108864) && !func_15(iLocal_35, 16777216))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(16)) || func_15(iLocal_34, 268435456) && ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], "interact_01_barman", 1))
		{
			if (!func_15(iLocal_34, 268435456))
				func_36(uLocal_98[0], Global_35, func_35("EXPLAIN"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
			else if (func_364(0))
				func_36(uLocal_98[0], Global_35, func_35("EXPLAIN_SICK"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
			else
				func_36(uLocal_98[0], Global_35, func_35("EXPLAIN_ALT"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
		
			IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);
			func_163();
			func_17(&iLocal_35, 16777216);
		}
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(17)) && !func_15(iLocal_34, 67108864))
	{
		if (!func_15(iLocal_34, 268435456))
			func_36(uLocal_98[0], Global_35, func_35("NEED_HELP"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
		else if (func_364(0))
			func_36(uLocal_98[0], Global_35, func_35("NEED_HELP_SICK"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
		else
			func_36(uLocal_98[0], Global_35, func_35("NEED_HELP_ALT"), "", -1f, 0, false, 0, 1, true, false, 291934926, true, false, 0);
	
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);
		func_17(&iLocal_34, 67108864);
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(20)) && func_151(-2f, 1, uLocal_98[0], false))
		func_36(uLocal_98[0], Global_35, func_35("HASNT_STARTED"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(21)))
		func_36(uLocal_98[0], Global_35, func_35("DEAD_POSITIVE_A"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(22)))
		func_36(uLocal_98[0], Global_35, func_35("DEAD_POSITIVE_B"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(23)))
		func_36(uLocal_98[0], Global_35, func_35("DAMAGE_A"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(24)))
		func_36(uLocal_98[0], Global_35, func_35("DAMAGE_B"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	if (iLocal_944 == 0)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], -2034435946))
			func_36(uLocal_98[0], Global_35, func_35("THANKS_BEST"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
	else if (iLocal_944 == 1 && !func_364(0))
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], 1422968249))
			func_36(uLocal_98[0], Global_35, func_35("THANKS_BEST"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], 983934627))
		func_36(uLocal_98[0], Global_35, func_35("THANKS_BEST_SICK"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, func_362(25)))
		if (iLocal_944 == 1)
			func_36(Global_35, uLocal_98[0], func_35("WELCOME_BEST"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
		else if (func_243())
			func_36(Global_35, uLocal_98[0], func_35("WELCOME_BEST_JHN"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
		else
			func_36(Global_35, uLocal_98[0], func_35("WELCOME_BEST_ART"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);

	if (iLocal_944 == 0)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], 1545820527))
			func_36(uLocal_98[0], Global_35, func_35("THANKS_OK"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
	else if (iLocal_944 == 1 && !func_364(0))
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], 1328225310))
			func_36(uLocal_98[0], Global_35, func_35("THANKS_OK"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], -1504940390))
		func_36(uLocal_98[0], Global_35, func_35("THANKS_OK_SICK"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, func_362(26)))
		if (func_243())
			func_36(Global_35, uLocal_98[0], func_35("WELCOME_OK_JHN"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
		else if (iLocal_944 == 0 || iLocal_944 == 1 && !func_364(0))
			func_36(Global_35, uLocal_98[0], func_35("WELCOME_OK_ART"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);
		else
			func_36(Global_35, uLocal_98[0], func_35("WELCOME_OK_ART_SICK"), 0, -1082130432, 0, false, 1, 2, false, false, -553575591, true, false, 0);

	return;
}

void func_135() // Position - 0x5DCE Hash - 0xC5341B09 ^0x245376F7
{
	if (!func_63(uLocal_1208[0]))
		uLocal_1208[0] = func_365(-1334037078, false, false);

	if (!func_63(uLocal_1208[1]))
		uLocal_1208[1] = func_365(-1641377529, false, false);

	if (!func_63(hLocal_1211))
		hLocal_1211 = func_365(-3907007, false, false);

	if (!func_63(hLocal_1212))
		hLocal_1212 = func_365(-74215266, false, false);

	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hLocal_1211))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hLocal_1211) != 1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_1211, 1);

	if (!uLocal_161.f_46)
	{
		if (iLocal_965 <= 6 && !func_15(iLocal_34, 67108864) || iLocal_965 > 13 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_120, true, 0))
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_1208[0]))
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[0]) != 1)
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[0], 1);
		
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_1208[1]))
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[1]) != 1)
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[1], 1);
		
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hLocal_1212))
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hLocal_1212) != 1)
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_1212, 1);
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_120, true, 0))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_1208[0]))
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[0]) != 0)
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[0], 0);
	
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uLocal_1208[1]))
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[1]) != 0)
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[1], 0);
	}

	return;
}

void func_136() // Position - 0x5F67 Hash - 0x66D10BE1 ^0x4FF3C552
{
	if (!func_15(iLocal_35, 262144))
	{
		if (iLocal_965 >= 6)
		{
			if (!func_15(iLocal_35, 131072))
			{
				func_366();
			}
			else if (func_367())
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(ansLocal_145.f_1, "barman", &uLocal_1182, true, "PBL_Window_Idle", 2) && ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(ansLocal_145.f_1, "plr", &uLocal_1194, true, "PBL_Reward_Good", 2))
				{
					func_17(&iLocal_35, 262144);
				}
				else
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Window_Idle"))
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Window_Idle");
				
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Reward_Good"))
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Reward_Good");
				}
			}
		}
	}

	return;
}

void func_137() // Position - 0x6019 Hash - 0xC56D9E3E ^0x3BC26D65
{
	if (func_15(iLocal_1275, 256))
		return;

	if (uLocal_161.f_46)
	{
		func_368(&uLocal_1278, &uLocal_1299);
		func_17(&iLocal_1275, 256);
		return;
	}

	if (iLocal_1277 > 0)
		if (func_15(iLocal_1275, 4))
			if (iLocal_965 == 6 && !func_15(iLocal_1275, 8) && !func_15(iLocal_1275, 16) && !func_15(iLocal_1275, 32))
				iLocal_1276 = func_370(&uLocal_98[0], &uLocal_1278, 20f, &uLocal_1299, &(uLocal_161.f_192), 0f, 1, 0, "", func_369(2, 0, 0), 0, 0, 2, 0, -1082130432, false);
			else
				iLocal_1276 = func_370(&uLocal_98[0], &uLocal_1278, 20f, &uLocal_1299, &(uLocal_161.f_192), 0f, 1, 0, "", func_369(3, false, false), 0, 0, 2, 0, -1082130432, false);

	switch (iLocal_1277)
	{
		case 0:
			func_40(&uLocal_1299[0 /*17*/], func_371(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
			func_40(&uLocal_1299[1 /*17*/], func_371(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, 0);
			func_372(&uLocal_1299[0 /*17*/], false, false);
			func_372(&uLocal_1299[1 /*17*/], false, false);
			func_17(&iLocal_1275, 4);
			iLocal_1277 = 1;
			break;
	
		case 1:
			if (func_15(iLocal_34, 8) || func_29(Global_35, volLocal_120, true, 0))
			{
				func_373(&uLocal_1278, 0);
				func_40(&uLocal_1299[0 /*17*/], func_371(4), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
				func_40(&uLocal_1299[1 /*17*/], func_371(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, 0);
				func_372(&uLocal_1299[0 /*17*/], true, false);
				func_372(&uLocal_1299[1 /*17*/], true, false);
				iLocal_1277 = 2;
			}
			break;
	
		case 2:
			if (!func_15(iLocal_1275, 32))
			{
				if (func_29(Global_35, volLocal_120, true, 0))
					iLocal_1276 = 0;
			
				switch (iLocal_1276)
				{
					case 0:
						func_127(uLocal_98[0], 500);
						func_373(&uLocal_1278, 0);
						func_372(&uLocal_1299[0 /*17*/], false, false);
						func_372(&uLocal_1299[1 /*17*/], false, false);
					
						if (func_243())
							if (func_374(uLocal_161.f_3, 0) == 1 && iLocal_944 == 1 && func_15(iLocal_34, 268435456))
								func_36(Global_35, uLocal_98[0], func_35("YES_JHN_AGAIN"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
							else
								func_36(Global_35, uLocal_98[0], func_35("YES_JHN"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
						else if (func_374(uLocal_161.f_3, 0) == 1 && iLocal_944 == 1)
							func_36(Global_35, uLocal_98[0], func_35("YES_ART_AGAIN"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
						else
							func_36(Global_35, uLocal_98[0], func_35("YES_ART"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
					
						func_17(&iLocal_1275, 8);
						func_26(&uLocal_1256);
						iLocal_1277 = 3;
						break;
				
					case 1:
						func_373(&uLocal_1278, 0);
						func_372(&uLocal_1299[0 /*17*/], false, false);
						func_372(&uLocal_1299[1 /*17*/], false, false);
					
						if (func_243())
							func_36(Global_35, uLocal_98[0], func_35("NO_JHN"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
						else
							func_36(Global_35, uLocal_98[0], func_35("NO_ART"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
					
						func_17(&iLocal_1275, 16);
						iLocal_1277 = 4;
						break;
				}
			}
			else
			{
				func_373(&uLocal_1278, 0);
				func_372(&uLocal_1299[0 /*17*/], false, false);
				func_372(&uLocal_1299[1 /*17*/], false, false);
				iLocal_1277 = 4;
			}
			break;
	
		case 3:
			if (!func_15(iLocal_34, 16777216))
			{
				if (!func_15(iLocal_1275, 512))
				{
					if (!func_15(iLocal_1275, 4096))
					{
						func_375(true);
					}
					else if (func_27(&uLocal_1256) > 10f)
					{
						if (!func_29(Global_35, volLocal_120, true, 0) && !func_29(Global_35, volLocal_121, true, 0) && !func_376(PLAYER::PLAYER_ID(), &uLocal_98[0]))
						{
							func_372(&uLocal_1299[1 /*17*/], true, false);
							func_17(&iLocal_1275, 512);
						}
					}
				}
				else
				{
					func_377();
				
					if (func_15(iLocal_34, 65536))
					{
						func_372(&uLocal_1299[1 /*17*/], false, false);
						func_26(&uLocal_1256);
						func_125(&iLocal_1275, 4096);
						iLocal_1277 = 4;
					}
					else
					{
						switch (iLocal_1276)
						{
							case 0:
								break;
						
							case 1:
								func_372(&uLocal_1299[1 /*17*/], false, false);
								func_36(Global_35, uLocal_98[0], func_35("CHANGE_MIND"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
								func_17(&iLocal_1275, 16);
								func_17(&iLocal_1275, 1024);
								func_26(&uLocal_1256);
								func_125(&iLocal_1275, 4096);
								iLocal_1277 = 4;
								break;
						}
					}
				}
			}
			else
			{
				func_368(&uLocal_1278, &uLocal_1299);
				iLocal_1277 = 10;
			}
			break;
	
		case 4:
			if (!func_15(iLocal_1275, 4096))
			{
				func_375(false);
			}
			else if (func_15(iLocal_35, 1048576) || func_15(iLocal_34, 4))
			{
				func_26(&uLocal_1256);
				iLocal_1277 = 5;
			}
			break;
	
		case 5:
			if (!func_15(iLocal_1275, 4096))
			{
				func_375(false);
			}
			else
			{
				func_372(&uLocal_1299[0 /*17*/], true, false);
				func_372(&uLocal_1299[1 /*17*/], true, false);
				iLocal_1277 = 6;
			}
			break;
	
		case 6:
			switch (iLocal_1276)
			{
				case 0:
					func_36(Global_35, uLocal_98[0], func_35("POST_QUIT_PLY_POS"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
					func_372(&uLocal_1299[0 /*17*/], false, false);
					func_372(&uLocal_1299[1 /*17*/], false, false);
					func_26(&uLocal_1256);
					iLocal_1277 = 7;
					break;
			
				case 1:
					func_36(Global_35, uLocal_98[0], func_35("POST_QUIT_PLY_NEG"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
					func_372(&uLocal_1299[0 /*17*/], false, false);
					func_372(&uLocal_1299[1 /*17*/], false, false);
					func_26(&uLocal_1256);
					iLocal_1277 = 8;
					break;
			}
			break;
	
		case 7:
			if (func_27(&uLocal_1256) > 3f && func_151(0, 1, Global_35, true))
			{
				if (iLocal_944 == 0)
					func_36(uLocal_98[0], Global_35, func_35("GOODBYE_POS"), "", -1f, 0, false, 0, 2, false, false, 291934926, true, false, 0);
				else
					func_36(uLocal_98[0], Global_35, "GENERIC_YES", "", -1f, 2, false, 0, 2, false, false, 291934926, true, false, 0);
			
				iLocal_1277 = 9;
			}
			break;
	
		case 8:
			if (func_27(&uLocal_1256) > 3f && func_151(0, 1, Global_35, true))
			{
				func_36(uLocal_98[0], Global_35, func_35("GOODBYE_NEG"), "", -1f, 0, false, 0, 2, false, false, 1506116031, true, false, 0);
				iLocal_1277 = 9;
			}
			break;
	
		case 9:
			break;
	}

	return;
}

void func_138() // Position - 0x6759 Hash - 0x733D45A8 ^0xBC7E3F88
{
	var taskSequenceId;

	if (iLocal_944 != 0)
		return;

	if (!func_15(iLocal_34, 16))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[1], joaat("endsinwalk")))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_145))
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_145, "man", uLocal_98[1]);
		
			PED::FORCE_PED_MOTION_STATE(uLocal_98[1], joaat("MotionState_Walk"), false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2790.0938f, -1186.8667f, 46.58545f, 1f, 20000, 5f, 524289, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2799.1028f, -1192.1556f, 46.13103f, 1f, 20000, 5f, 524289, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2801.4624f, -1196.941f, 46.23405f, 1f, 20000, 5f, 524289, 1193033728);
			TASK::TASK_SMART_FLEE_COORD(0, uLocal_161.f_51, 100f, -1, 0, 1f);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			func_128(uLocal_98[1], &taskSequenceId, 0, 0, true, true);
			func_17(&iLocal_34, 16);
		}
	}

	return;
}

void func_139() // Position - 0x6853 Hash - 0xAB30BB4A ^0xE1AF378C
{
	if (func_15(iLocal_1275, 8))
	{
		if (func_29(Global_35, volLocal_120, true, 0))
		{
			if (func_378(&(uLocal_161.f_5), 256))
			{
				func_189(&(uLocal_161.f_5), false);
				func_47(&(uLocal_161.f_5), 6000);
			}
		}
		else if (!func_378(&(uLocal_161.f_5), 256))
		{
			func_189(&(uLocal_161.f_5), true);
			func_47(&(uLocal_161.f_5), 2000);
		}
	}

	return;
}

void func_140() // Position - 0x68BD Hash - 0xE6A1DC20 ^0x7B54E08D
{
	if (uLocal_161.f_46)
		func_379(true);
	else if (func_15(iLocal_1275, 8))
		if (func_126(Global_35))
			func_379(false);
		else
			func_379(true);

	return;
}

int func_141(Ped pedParam0, Ped pedParam1, float fParam2, var uParam3, Volume volParam4, BOOL bParam5, BOOL bParam6) // Position - 0x68F7 Hash - 0x24749270 ^0x24749270
{
	if (!func_58(pedParam0, 0, true) || !func_58(pedParam1, 0, true))
		return 0;

	if (func_380(pedParam0, pedParam1, true) <= fParam2 * fParam2 || func_381(pedParam0, volParam4, 0, true))
	{
		if (!*uParam3)
		{
			TASK::TASK_LOOK_AT_ENTITY(pedParam0, pedParam1, -1, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(pedParam1, pedParam0, -1, 0, 51, 0);
			PED::_0xAAC0EE3B4999ABB5(pedParam0, pedParam1);
			*uParam3 = 1;
		}
	
		if (bParam6)
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
	
		if (bParam5)
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedParam0, 1f);
	}
	else if (*uParam3)
	{
		TASK::TASK_CLEAR_LOOK_AT(pedParam0);
		TASK::TASK_CLEAR_LOOK_AT(pedParam1);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), true);
		PED::_0xAAC0EE3B4999ABB5(pedParam0, 0);
		*uParam3 = 0;
	}

	return *uParam3;
}

void func_142() // Position - 0x69B7 Hash - 0x682E5C96 ^0x42B43876
{
	if (!func_15(iLocal_34, 262144))
	{
		func_60(uLocal_98[0]);
		func_60(Global_35);
		func_17(&iLocal_34, 262144);
	}

	return;
}

void func_143() // Position - 0x69E7 Hash - 0xFE40BB9F ^0x5D55012
{
	if (func_15(iLocal_35, 2097152))
		return;

	switch (iLocal_38)
	{
		case 0:
			ansLocal_153 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_153.f_4, 0, "pbl_Rat", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_153, 2801.41f, -1168.59f, 48.19f, 0f, 0f, 0f, 2);
		
			if (func_58(uLocal_98[3], 0, true))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153, "A_C_RAT_01", uLocal_98[3], 0);
		
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_153);
			anLocal_1343 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_candlelamp01x"), 2791.268f, -1168.8657f, 48.06049f, 5);
			iLocal_38 = iLocal_38 + 1;
			break;
	
		case 1:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_1343))
			{
				eLocal_1334 = ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_1343);
			
				if (eLocal_1334 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153, "candle", eLocal_1334, 0);
					anLocal_1344 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_glass01x"), 2791.3828f, -1168.2098f, 47.99231f, 5);
					iLocal_38 = iLocal_38 + 1;
				}
			}
			break;
	
		case 2:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_1344))
			{
				eLocal_1335 = ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_1344);
			
				if (eLocal_1335 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153, "glass01", eLocal_1335, 0);
					anLocal_1345 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_glass01x"), 2791.3982f, -1168.19f, 48.09696f, 5);
					iLocal_38 = iLocal_38 + 1;
				}
			}
			break;
	
		case 3:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_1345))
			{
				eLocal_1336 = ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_1345);
			
				if (eLocal_1336 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153, "glass02", eLocal_1336, 0);
					anLocal_1346 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_glass01x"), 2791.3982f, -1168.19f, 48.09696f, 5);
					iLocal_38 = iLocal_38 + 1;
				}
			}
			break;
	
		case 4:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_1346))
			{
				eLocal_1337 = ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_1346);
			
				if (eLocal_1337 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153, "glass03", eLocal_1337, 0);
					anLocal_1347 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_glass01x"), 2791.2693f, -1168.4445f, 47.98463f, 5);
					iLocal_38 = iLocal_38 + 1;
				}
			}
			break;
	
		case 5:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_1347))
			{
				eLocal_1338 = ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_1347);
			
				if (eLocal_1338 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153, "glass04", eLocal_1338, 0);
					anLocal_1348 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_glass01x"), 2791.2036f, -1168.5558f, 47.99098f, 5);
					iLocal_38 = iLocal_38 + 1;
				}
			}
			break;
	
		case 6:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_1348))
			{
				eLocal_1339 = ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_1348);
			
				if (eLocal_1339 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153, "glass05", eLocal_1339, 0);
					iLocal_38 = iLocal_38 + 1;
				}
			}
			break;
	
		case 7:
			break;
	
		case 8:
			func_17(&iLocal_35, 2097152);
			break;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(ansLocal_153.f_4))
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_153, true, false))
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_153);

	return;
}

void func_144() // Position - 0x6C99 Hash - 0xF6E3FBD1 ^0x3EC5F924
{
	if (func_15(iLocal_35, 4194304))
		return;

	switch (iLocal_39)
	{
		case 0:
			ansLocal_153.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_153.f_5, 0, "pblWindowAction1", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_153.f_1, 2801.41f, -1168.59f, 48.2f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_1, "breakoutLoop1", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_1, "breakoutLoop2", false, false);
		
			if (func_58(uLocal_98[5], 0, true))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153.f_1, "RAT", uLocal_98[5], 0);
		
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_153.f_1);
			iLocal_39 = iLocal_39 + 1;
			break;
	
		case 1:
			obLocal_1340 = OBJECT::CREATE_OBJECT(joaat("p_whiskeyglass01x"), 2794.2634f, -1165.7072f, 47.99822f, true, true, false, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153.f_1, "GLASS", obLocal_1340, 0);
			iLocal_39 = iLocal_39 + 1;
			break;
	
		case 2:
			func_17(&iLocal_35, 4194304);
			break;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(ansLocal_153.f_5))
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_153.f_1, true, false))
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_153.f_1);

	return;
}

void func_145() // Position - 0x6DB1 Hash - 0xF6E3FBD1 ^0x5CFB395B
{
	if (func_15(iLocal_35, 8388608))
		return;

	switch (iLocal_40)
	{
		case 0:
			ansLocal_153.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_153.f_6, 0, "pblAll", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_153.f_2, 2801.41f, -1168.59f, 48.2f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_2, "breakoutLoop1", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_2, "breakoutLoop2", false, false);
		
			if (func_58(uLocal_98[4], 0, true))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153.f_2, "RAT", uLocal_98[4], 0);
		
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_153.f_2);
			iLocal_40 = iLocal_40 + 1;
			break;
	
		case 1:
			obLocal_1341 = OBJECT::CREATE_OBJECT(joaat("p_glass01x"), 2796.5974f, -1171.8298f, 47.97153f, true, true, false, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_153.f_2, "GLASS", obLocal_1341, 0);
			iLocal_40 = iLocal_40 + 1;
			break;
	
		case 2:
			anLocal_1349 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_chair27x"), 2797.3167f, -1170.7666f, 47.97153f, 5);
			iLocal_40 = iLocal_40 + 1;
			break;
	
		case 3:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_1349))
			{
				eLocal_1342 = ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_1349);
			
				if (eLocal_1342 != 0)
					func_17(&iLocal_35, 8388608);
			}
			break;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(ansLocal_153.f_6))
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_153.f_2, true, false))
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_153.f_2);

	return;
}

BOOL func_146() // Position - 0x6F0F Hash - 0x8D3FC307 ^0x689644C1
{
	switch (iLocal_944)
	{
		case 0:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_145, true, false))
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145, "PBL_Intro_Idle") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145, "PBL_Intro_Action"))
					return true;
				else
					func_382();
			break;
	
		case 1:
			return true;
	}

	return false;
}

void func_147() // Position - 0x6F6C Hash - 0xFFF997EB ^0x6B98C539
{
	PersChar persChar;
	PersChar persChar2;
	PersChar persChar3;
	PersChar persChar4;
	Ped perscharPedIndex;
	Ped perscharPedIndex2;
	Ped perscharPedIndex3;
	Ped perscharPedIndex4;
	Entity entity;

	persChar = func_62(287);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
	{
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (perscharPedIndex == 0 || func_29(perscharPedIndex, volLocal_120, true, 0) || ENTITY::IS_ENTITY_OCCLUDED(perscharPedIndex))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(persChar);
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(perscharPedIndex, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&perscharPedIndex);
		}
	}

	persChar2 = func_62(288);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar2))
	{
		perscharPedIndex2 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar2);
	
		if (perscharPedIndex2 == 0 || func_29(perscharPedIndex2, volLocal_120, true, 0) || ENTITY::IS_ENTITY_OCCLUDED(perscharPedIndex2))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar2);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(persChar2);
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex2, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex2, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(perscharPedIndex2, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&perscharPedIndex2);
		}
	}

	persChar3 = func_62(286);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar3))
	{
		perscharPedIndex3 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar3);
		entity = func_383(PERSCHAR::_0xF8DE7154F7D1458F(persChar3));
	
		if (perscharPedIndex3 == 0 && entity == 0 || func_29(perscharPedIndex3, volLocal_120, true, 0) && entity == 0 || ENTITY::IS_ENTITY_OCCLUDED(entity) || ENTITY::IS_ENTITY_OCCLUDED(perscharPedIndex3) && entity == 0 || ENTITY::IS_ENTITY_OCCLUDED(entity))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar3);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(persChar3);
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex3, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex3, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(perscharPedIndex3, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&perscharPedIndex3);
		
			if (ENTITY::DOES_ENTITY_EXIST(entity))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, false);
				VEHICLE::_0xC399CC89FBA05DA0(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entity), true);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&entity);
			}
		}
	}

	persChar4 = func_62(298);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar4))
	{
		perscharPedIndex4 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar4);
	
		if (perscharPedIndex4 == 0 || func_29(perscharPedIndex4, volLocal_120, true, 0) || ENTITY::IS_ENTITY_OCCLUDED(perscharPedIndex4))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar4);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(persChar4);
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex4, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex4, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(perscharPedIndex4, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&perscharPedIndex4);
		}
	}

	bLocal_15 = true;
	return;
}

void func_148() // Position - 0x7183 Hash - 0x776B2079 ^0x776B2079
{
	if (iLocal_944 == 0)
	{
		uLocal_17[0] = 0;
		uLocal_17[1] = 0;
		uLocal_17[2] = 1;
		uLocal_17[3] = 1;
		uLocal_17[4] = 1;
		uLocal_17[5] = 1;
		uLocal_17[6] = 1;
		uLocal_17[7] = 1;
		uLocal_17[8] = 1;
		uLocal_17[9] = 1;
		uLocal_17[10] = 0;
		uLocal_17[11] = 0;
		uLocal_17[12] = 0;
		uLocal_17[13] = 0;
		uLocal_17[14] = 0;
		uLocal_17[15] = 0;
	}
	else
	{
		uLocal_17[0] = 0;
		uLocal_17[1] = 0;
		uLocal_17[2] = 1;
		uLocal_17[3] = 1;
		uLocal_17[4] = 1;
		uLocal_17[5] = 1;
		uLocal_17[6] = 1;
		uLocal_17[7] = 1;
		uLocal_17[8] = 1;
		uLocal_17[9] = 1;
		uLocal_17[10] = 1;
		uLocal_17[11] = 1;
		uLocal_17[12] = 1;
		uLocal_17[13] = 1;
		uLocal_17[14] = 1;
		uLocal_17[15] = 1;
	}

	return;
}

void func_149() // Position - 0x7265 Hash - 0xD05875D9 ^0xCB4F6B60
{
	uLocal_908.f_3 = Global_35;
	uLocal_908 = { 0f, 0f, 0f };
	uLocal_908.f_8 = 4;
	uLocal_908.f_4 = 21030;
	uLocal_908.f_20 = 4;
	uLocal_908.f_19 = 4;
	uLocal_908.f_22 = 4;
	uLocal_908.f_21 = 4;
	uLocal_908.f_17 = 4;
	uLocal_908.f_18 = 4;
	uLocal_908.f_7 = -1;
	uLocal_908.f_13 = 2;
	return;
}

BOOL func_150(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, BOOL bParam12, int iParam13, BOOL bParam14) // Position - 0x72BB Hash - 0x4294AD0C ^0xBA495DFF
{
	float num;

	func_384(Global_35, uParam0->f_51, uParam1, 0f, false, 0);
	num = 0f;

	if (func_385(uParam1, iParam5))
		if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			num = ENTITY::GET_ENTITY_SPEED(Global_35) * iParam7;
		else
			num = ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6;

	if (func_159(uParam0, iParam2, 1114636288, fParam4 + num, iParam8, iParam9, bParam10, iParam11, bParam12, 1125515264, bParam14, true))
		return true;

	return false;
}

BOOL func_151(int iParam0, int iParam1, Ped pedParam2, BOOL bParam3) // Position - 0x7343 Hash - 0xB3C0CD06 ^0xC991EBC
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(pedParam2))
		if (!func_386(pedParam2, true))
			return true;
		else
			return false;

	if (func_387(iParam0))
		return false;

	return true;
}

float func_152(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x737F Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

void func_153() // Position - 0x73C7 Hash - 0x7664ED02 ^0xA0A71AB5
{
	if (iLocal_1219 >= 7 || iLocal_944 == 1 || !VOLUME::DOES_VOLUME_EXIST(volLocal_135))
		return;

	if (func_381(Global_35, volLocal_135, 0, true))
	{
		if (!func_15(iLocal_35, 1024))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(0)))
			{
				func_36(uLocal_98[0], uLocal_98[1], func_35("DENY"), "", -1f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
				func_363(1891783641, uLocal_98[0], true);
				func_17(&iLocal_35, 1024);
				iLocal_1219 = iLocal_1219 + 1;
			}
		}
	
		if (!func_15(iLocal_35, 2048))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(1)))
			{
				func_36(uLocal_98[0], uLocal_98[1], func_35("CLOSED"), "", -1f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
				func_363(1891783641, uLocal_98[0], true);
				iLocal_1219 = iLocal_1219 + 1;
				func_17(&iLocal_35, 2048);
			}
		}
	
		if (!func_15(iLocal_35, 4096))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(2)))
			{
				func_36(uLocal_98[0], uLocal_98[1], func_35("NOT_SURE"), "", -1f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
				func_363(1891783641, uLocal_98[0], true);
				iLocal_1219 = iLocal_1219 + 1;
				func_17(&iLocal_35, 4096);
			}
		}
	
		if (!func_15(iLocal_35, 8192))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(3)))
			{
				func_36(uLocal_98[0], uLocal_98[1], func_35("SORRY"), "", -1f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
				func_363(1891783641, uLocal_98[0], true);
				iLocal_1219 = iLocal_1219 + 1;
				func_17(&iLocal_35, 8192);
			}
		}
	
		if (!func_15(iLocal_35, 16384))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[1], func_362(4)))
			{
				func_36(uLocal_98[1], uLocal_98[0], func_35("CONFUSED"), "", -1f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
				func_363(1891783641, uLocal_98[1], true);
				iLocal_1219 = iLocal_1219 + 1;
				func_17(&iLocal_35, 16384);
			}
		}
	
		if (!func_15(iLocal_35, 32768))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[1], func_362(5)))
			{
				func_36(uLocal_98[1], uLocal_98[0], func_35("CLOSED_WHEN"), "", -1f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
				func_363(1891783641, uLocal_98[1], true);
				iLocal_1219 = iLocal_1219 + 1;
				func_17(&iLocal_35, 32768);
			}
		}
	
		if (!func_15(iLocal_35, 65536))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[1], func_362(6)))
			{
				func_36(uLocal_98[1], uLocal_98[0], func_35("ANGRY"), "", -1f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
				func_363(1891783641, uLocal_98[1], true);
				iLocal_1219 = iLocal_1219 + 1;
				func_17(&iLocal_35, 65536);
			}
		}
	}

	return;
}

BOOL func_154() // Position - 0x76CE Hash - 0x2EDE71C ^0xD52AA8A4
{
	float num;

	if (iLocal_944 == 1)
		return true;

	func_388();
	func_138();
	num = func_389(ansLocal_145);

	if (num >= 0.99f || num == -1f || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], -816493370) && uLocal_161.f_98[0] < 5f)
		return true;

	return false;
}

int func_155(var uParam0, float fParam1) // Position - 0x772D Hash - 0x68ED3666 ^0xD16E7DA4
{
	Vector3 vector;
	var groundZ;

	vector = { *uParam0 };
	vector.f_2 = vector.f_2 + fParam1;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false))
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	return 0;
}

void func_156() // Position - 0x7761 Hash - 0xFAFD12A5 ^0xB9E68044
{
	var taskSequenceId;

	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], uLocal_136[0 /*2*/].f_1, 4f, -4f, -1, 0, 0, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "IDLE_LINE_01_BARMAN", 4f, -4f, -1, 0, 0, false, 0, false, 0, false);

	if (func_390())
		TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], uLocal_136[0 /*2*/].f_1, 1090519040, -1056964608, -1, 0, 0, false, 0, false, 0, false);

	TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "IDLE_LINE_02_BARMAN", 4f, -4f, -1, 0, 0, false, 0, false, 0, false);

	if (func_390())
		TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], uLocal_136[0 /*2*/].f_1, 1090519040, -1056964608, -1, 0, 0, false, 0, false, 0, false);

	TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "IDLE_LINE_04_BARMAN", 4f, -4f, -1, 0, 0, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], uLocal_136[0 /*2*/].f_1, 4f, -4f, -1, 1, 0, false, 0, false, 0, false);
	func_128(uLocal_98[0], &taskSequenceId, 0, 0, true, true);
	return;
}

BOOL func_157() // Position - 0x7864 Hash - 0xDC8A6DF0 ^0xCEF49D57
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1228))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], sLocal_1228, 1) || func_391(uLocal_98[0], "bCanBreakout", 1067030938))
			return true;

	return false;
}

void func_158() // Position - 0x78A9 Hash - 0xF01055D0 ^0x948F0540
{
	func_179(uLocal_98[0], &uLocal_80[0], joaat("BLIP_STYLE_FRIENDLY"), 0, BLIP_HIGHER, "BLIP_BARTENDER");
	return;
}

BOOL func_159(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0x78CA Hash - 0x690C47C ^0xACEB3BAC
{
	int i;
	BOOL flag;
	int num;
	float num2;
	float num3;

	flag = false;
	num = func_287(uParam0, flag);
	num2 = num;
	!bParam11 && num < fParam3;

	if (iParam5 > 0f)
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > iParam5)
			return false;

	if (iParam7 > 0f)
		if (MISC::ABSF(Global_36.f_2 - uParam0->f_51.f_2) >= iParam7)
			return false;

	if (uParam0->f_178 && func_286())
	{
		flag = true;
		num2 = flag ? iParam9 : num;
	}

	if (uParam0->f_48 && !bParam10 || !VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))
	{
		if (iParam4 > 1)
		{
			for (i = 0; i < uParam0->f_121; i = i + 1)
			{
				func_288(&uParam0->f_121[i /*9*/], num2, 1082130432, 1, 90f, false, 0);
			}
		}
		else
		{
			func_288(&uParam0->f_121[0 /*9*/], num2, 1082130432, 1, 90f, false, 0);
		}
	
		if (func_289(&(uParam0->f_121), iParam4, iParam1))
		{
			func_114(&(uParam0->f_121));
		
			if (uParam0->f_186)
				STATS::STATSTRACKER_DEED_STARTED(func_234(uParam0->f_3, uParam0->f_185), 0);
		
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
						func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
				}
			
				func_114(&(uParam0->f_121));
			
				if (uParam0->f_186)
					STATS::STATSTRACKER_DEED_STARTED(func_234(uParam0->f_3, uParam0->f_185), 0);
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_160() // Position - 0x7ACF Hash - 0xB54AE9E6 ^0x7341ADF
{
	if (func_374(107, 0) == 1 || func_374(107, 1) == 1)
		if (func_243())
			if (func_392(107, 0) == joaat("cs_johnmarston") || func_392(107, 1) == joaat("cs_johnmarston"))
				return true;
		else if (func_392(107, 0) != joaat("cs_johnmarston") || func_392(107, 1) != joaat("cs_johnmarston"))
			return true;

	return false;
}

void func_161() // Position - 0x7B4B Hash - 0x94265253 ^0xDFC2E4E7
{
	if (iLocal_944 == 0)
		if (func_243())
			func_393(uLocal_161.f_3, 9, 7, 0, joaat("cs_johnmarston"));
		else
			func_393(uLocal_161.f_3, 9, 7, 0, 0);
	else if (func_374(107, 0) == 1 || func_374(107, 1) == 1)
		if (func_243())
			if (func_392(uLocal_161.f_3, 9) == joaat("cs_johnmarston"))
				func_17(&iLocal_34, 268435456);
		else
			func_17(&iLocal_34, 268435456);

	return;
}

void func_162() // Position - 0x7BD5 Hash - 0x91716B32 ^0xE5998497
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_145))
		return;

	if (iLocal_944 == 0)
		if (!ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(ansLocal_145, "man"))
			ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_145);

	return;
}

void func_163() // Position - 0x7C05 Hash - 0xCF099928 ^0xB64C53C7
{
	if (!func_15(iLocal_34, 33554432))
	{
		func_363(1891783641, uLocal_98[0], true);
		func_17(&iLocal_34, 33554432);
	}

	return;
}

void func_164() // Position - 0x7C36 Hash - 0xED928200 ^0xC2D3A905
{
	var taskSequenceId;

	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, uLocal_136[0 /*2*/], "interact_01_barman", Global_35, -1, 4f, -4f, 67108864, 0, false, false, -1082130432, 0, 65536, -1082130432);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, uLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108865, 0, false, false, -1082130432, 0, 65536, -1082130432);
	func_128(uLocal_98[0], &taskSequenceId, 0, 0, true, true);
	return;
}

void func_165(Volume volParam0, Hash hParam1, BOOL bParam2) // Position - 0x7CB1 Hash - 0xB4D85109 ^0xA26EF18C
{
	int entitiesInVolume;
	int i;
	ScrHandle indexedItemInItemset;
	ItemSet itemSet;

	entitiesInVolume = 0;
	itemSet = ITEMSET::CREATE_ITEMSET(false);

	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
	{
		entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam0, itemSet, 3);
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		
			if (ENTITY::DOES_ENTITY_EXIST(MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset)))
				if (ENTITY::GET_ENTITY_MODEL(MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset)) == hParam1)
					OBJECT::SET_OBJECT_TARGETTABLE(MISC::_GET_OBJECT_FROM_INDEXED_ITEM(indexedItemInItemset), bParam2);
		}
	}

	ITEMSET::_CLEAR_ITEMSET(itemSet);
	return;
}

BOOL func_166() // Position - 0x7D22 Hash - 0x588E16A ^0xAD249930
{
	if (func_15(iLocal_34, 8) || func_15(iLocal_34, 67108864) && func_29(Global_35, volLocal_120, true, 0))
		return true;

	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], "interact_01_barman", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], "interact_01_barman", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_98[0], uLocal_136[0 /*2*/], "interact_01_barman") > 0.7f)
	{
		func_17(&iLocal_34, 8);
		return true;
	}

	return false;
}

void func_167() // Position - 0x7DB4 Hash - 0x9DF3D523 ^0x5E26E93
{
	CAM::_0x88544C0E3291DCAE(true);
	func_54();
	return;
}

void func_168() // Position - 0x7DC5 Hash - 0xD33509E3 ^0x5C0F5BA4
{
	float num;

	if (func_15(iLocal_1275, 32))
		return;

	if (!func_15(iLocal_34, 524288))
	{
		func_26(&uLocal_1238);
		func_17(&iLocal_34, 524288);
	}
	else if (uLocal_161.f_98[0] < 15f)
	{
		if (func_103(&uLocal_1238))
		{
			func_394(&uLocal_1238);
		}
		else
		{
			num = func_27(&uLocal_1238);
		
			if (num > 20f)
			{
				func_17(&iLocal_1275, 32);
			}
			else if (num > 10f && !func_15(iLocal_1275, 8192))
			{
				func_36(uLocal_98[0], Global_35, "TAKE_YOUR_TIME_WARY", 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				func_17(&iLocal_1275, 8192);
			}
		}
	}
	else if (!func_103(&uLocal_1238))
	{
		func_395(&uLocal_1238);
	}

	return;
}

void func_169() // Position - 0x7EA1 Hash - 0x6E1AB8DE ^0x436D4284
{
	if (func_126(Global_35))
		func_56();
	else if (!uLocal_161.f_46)
		func_171(false);

	return;
}

void func_170() // Position - 0x7EC7 Hash - 0x116BE626 ^0x187190D6
{
	var taskSequenceId;

	func_37();
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);

	if (func_15(iLocal_1275, 1024))
		func_36(uLocal_98[0], Global_35, func_35("CHANGE_MIND"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
	else if (func_15(iLocal_34, 65536))
		func_36(uLocal_98[0], Global_35, func_35("ABANDON"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
	else
		func_36(uLocal_98[0], Global_35, func_35("NO_RESPONSE"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);

	iLocal_1233 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_human_smoke"), 2789.3772f, -1172.2966f, 47.1749f, 161.6934f, 0, 0, false);
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);

	if (!func_15(iLocal_34, 65536))
		TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "INTERACT_03_BARMAN", 4f, -4f, -1, 0, 0, false, 0, false, 0, false);
	else
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 4000, -1082130432, -1082130432, -1082130432);

	TASK::TASK_USE_SCENARIO_POINT(0, iLocal_1233, "WORLD_HUMAN_SMOKE_MALE_A", -1, true, false, joaat("world_human_smoke"), false, -1082130432, false);
	func_128(uLocal_98[0], &taskSequenceId, 0, 0, true, true);
	PED::SET_PED_KEEP_TASK(uLocal_98[0], true);
	func_17(&iLocal_35, 1048576);
	return;
}

void func_171(BOOL bParam0) // Position - 0x802A Hash - 0xBF0F21BA ^0xC2973D
{
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[0]) != 1)
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[0], 1);

	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uLocal_1208[1]) != 1)
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uLocal_1208[1], 1);

	if (bParam0)
		func_55();

	return;
}

void func_172() // Position - 0x806D Hash - 0xE97ED0E1 ^0x9F080B16
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i))
		{
			case joaat("EVENT_ENTITY_BROKEN"):
			case 2145012826:
				func_396(i);
				break;
		}
	}

	return;
}

void func_173() // Position - 0x80AD Hash - 0x82396AE1 ^0xB3417919
{
	if (func_29(Global_35, volLocal_120, true, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_121, true, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(2793.6204f, -1174.031f, 46.92401f, 1.5f))
			{
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(uLocal_1208[0]) != 0f)
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(uLocal_1208[0], 0f, true);
			
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(uLocal_1208[1]) != 0f)
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(uLocal_1208[1], 0f, true);
			}
		}
	}

	return;
}

void func_174() // Position - 0x8124 Hash - 0x4A6B854 ^0x4A6B854
{
	var taskSequenceId;
	float num;

	func_397();
	func_398();

	switch (iLocal_945)
	{
		case 0:
			if (iLocal_965 == 8)
			{
				if (!func_15(iLocal_34, 2) && func_151(0, 1, Global_35, true))
				{
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uLocal_98[0], &uLocal_908);
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				
					if (!func_29(Global_35, volLocal_120, true, 0))
						TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "interact_02_barman", 4f, -4f, -1, 67108864, 0, false, 0, false, 0, false);
				
					if (!func_29(Global_35, volLocal_132, true, 0))
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_1182, 1f, 20000, 0.25f, 0, uLocal_1182.f_3.f_2);
				
					TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "window_idle_barman", 2f, -4f, -1, 0, 0, false, 0, false, 0, false);
					func_128(uLocal_98[0], &taskSequenceId, 0, 0, true, true);
					func_36(uLocal_98[0], Global_35, func_35("ENTER"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
					func_17(&iLocal_34, 2);
					func_56();
					iLocal_945 = 1;
				}
			}
			break;
	
		case 1:
			if (!func_15(iLocal_35, 16))
				if (func_178(uLocal_98[0], uLocal_1182, true) < 1f || func_29(Global_35, volLocal_132, true, 0))
					iLocal_945 = 2;
			break;
	
		case 2:
			if (!func_15(iLocal_35, 16))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_145.f_1, true, false))
				{
					if (func_29(Global_35, volLocal_120, true, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) != 1)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_98[0]))
							{
								TASK::CLEAR_PED_TASKS(uLocal_98[0], true, false);
								TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_98[0], uLocal_136[0 /*2*/], "window_idle_barman", uLocal_1182, 0f, 0f, uLocal_1182.f_3.f_2, 4f, -4f, -1, 1, 0, 2, 0, 0);
								func_26(&uLocal_1235);
								func_17(&iLocal_35, 16);
								iLocal_945 = 3;
							}
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], SCRIPT_TASK_PLAY_ANIM, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], -1162159953, true) != 1)
							if (func_178(uLocal_98[0], uLocal_1182, true) > 1.5f && !func_29(Global_35, volLocal_132, true, 0))
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) != 1)
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_98[0], uLocal_1182, 1f, 20000, 0.25f, 0, uLocal_1182.f_3.f_2);
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY, true) != 1 && !PED::IS_PED_FACING_PED(uLocal_98[0], Global_35, 10f))
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_98[0], Global_35, -1, -1082130432, -1082130432, -1082130432);
					
						if (!func_15(iLocal_34, 32768))
						{
							if (iLocal_1220 == 0)
							{
								num = func_399();
							
								if (num > 20f)
								{
									if (func_29(Global_35, volLocal_120, true, 0) || PED::IS_PED_FACING_PED(uLocal_98[0], Global_35, 5f))
									{
										func_36(uLocal_98[0], Global_35, func_35("HASNT_STARTED"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
										func_17(&iLocal_34, 32768);
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 3:
			if (iLocal_1220 == 0 && func_29(Global_35, volLocal_120, true, 0))
			{
				if (!func_15(iLocal_34, 32768))
				{
					num = func_399();
				
					if (num > 20f)
					{
						func_17(&iLocal_34, 32768);
						iLocal_945 = 4;
					}
				}
			}
			break;
	
		case 4:
			func_400(uLocal_136[0 /*2*/], "window_line_01_barman", true, false, false);
			iLocal_945 = 3;
			break;
	
		case 5:
			func_400(uLocal_136[0 /*2*/], "window_line_02_barman", true, false, false);
			iLocal_945 = 3;
			break;
	
		case 6:
			func_400(uLocal_136[0 /*2*/], "window_line_03_barman", true, false, false);
			iLocal_945 = 3;
			break;
	
		case 7:
			if (func_151(0, 1, uLocal_98[0], true))
			{
				func_36(uLocal_98[0], Global_35, func_35("DEAD_POSITIVE_C"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				iLocal_945 = 3;
			}
			break;
	
		case 8:
			if (func_151(0, 1, uLocal_98[0], true))
			{
				func_36(uLocal_98[0], Global_35, func_35("DEAD_POSITIVE_D"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				iLocal_945 = 3;
			}
			break;
	
		case 9:
			if (func_151(0, 1, uLocal_98[0], true))
			{
				func_400(uLocal_136[0 /*2*/], "window_line_04_barman", true, false, false);
				iLocal_945 = 3;
			}
			break;
	
		case 10:
			if (func_151(0, 1, uLocal_98[0], true))
			{
				func_400(uLocal_136[0 /*2*/], "window_line_05_barman", true, false, false);
				iLocal_945 = 3;
			}
			break;
	
		case 11:
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_145.f_1, "window_idle", true) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], "window_idle_barman", 1))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_145.f_1, false))
				{
					func_127(uLocal_98[0], 250);
					ANIMSCENE::START_ANIM_SCENE(ansLocal_145.f_1);
				
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_98[0], ansLocal_145.f_1))
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145.f_1, "barman", uLocal_98[0], 0);
				}
			
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_GET_THE_LAW", true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_145.f_1, "BOOL_Window", true, false);
				func_17(&iLocal_35, 1);
				iLocal_945 = 12;
			}
			else
			{
				iLocal_945 = 13;
			}
			break;
	
		case 12:
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(ansLocal_145.f_1, "barman") || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], joaat("endsinwalk")) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_98[0], ansLocal_145.f_1))
			{
				TASK::_0x2E1D6D87346BB7D2(uLocal_98[0], Global_35, 0, 0);
				TASK::TASK_SMART_FLEE_PED(uLocal_98[0], Global_35, 500f, -1, 256, 2f, 0);
				iLocal_945 = 16;
			}
			else if (!func_15(iLocal_34, 32))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(27)))
				{
					func_36(uLocal_98[0], Global_35, func_35("DESTROYED"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
					func_17(&iLocal_34, 32);
				}
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(28)))
			{
				func_36(uLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				func_17(&iLocal_34, 32);
			}
			break;
	
		case 14:
			func_125(&iLocal_35, 16);
		
			if (!func_15(iLocal_34, 536870912))
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "window_line_06_barman", 1090519040, -1056964608, -1, 0, 0, false, 0, false, 0, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_128(uLocal_98[0], &taskSequenceId, 0, 0, true, true);
				func_36(uLocal_98[0], Global_35, func_35("LEAVE_EARLY"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				func_17(&iLocal_34, 536870912);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_98[0], Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
		
			if (func_25(&uLocal_1259))
			{
				if (func_27(&uLocal_1259) > 10f)
					func_102(&uLocal_1259, 10f);
			
				func_395(&uLocal_1259);
			}
			else
			{
				func_26(&uLocal_1259);
			}
		
			iLocal_945 = 15;
			break;
	
		case 15:
			if (func_29(Global_35, volLocal_120, true, 0))
			{
				func_125(&iLocal_34, 2048);
				iLocal_945 = 2;
			}
			else if (func_103(&uLocal_1259))
			{
				func_394(&uLocal_1259);
			}
			else if (!func_25(&uLocal_1259))
			{
				func_26(&uLocal_1259);
			}
			else if (func_27(&uLocal_1259) > 20f && func_151(0, 1, uLocal_98[0], true))
			{
				func_17(&iLocal_34, 65536);
			}
			break;
	
		case 16:
			break;
	}

	return;
}

void func_175() // Position - 0x890B Hash - 0x30D66619 ^0x30D66619
{
	int num;

	if (func_177())
		return;

	func_401();
	func_402();
	func_403();
	func_404();
	iLocal_1227 = func_405();

	if (iLocal_1227 == 0)
		return;

	num = iLocal_1227;

	if (func_58(uLocal_98[iLocal_1227], 0, true))
	{
		switch (num)
		{
			case 2:
				func_406(uLocal_98[2], &uLocal_946[2], 2);
				break;
		
			case 3:
				func_406(uLocal_98[3], &uLocal_946[3], 3);
				break;
		
			case 4:
				func_406(uLocal_98[4], &uLocal_946[4], 4);
				break;
		
			case 5:
				func_406(uLocal_98[5], &uLocal_946[5], 5);
				break;
		
			case 6:
				func_406(uLocal_98[6], &uLocal_946[6], 6);
				break;
		
			case 7:
				func_406(uLocal_98[7], &uLocal_946[7], 7);
				break;
		
			case 8:
				func_406(uLocal_98[8], &uLocal_946[8], 8);
				break;
		
			case 9:
				func_406(uLocal_98[9], &uLocal_946[9], 9);
				break;
		
			case 10:
				func_406(uLocal_98[10], &uLocal_946[10], 10);
				break;
		
			case 11:
				func_406(uLocal_98[11], &uLocal_946[11], 11);
				break;
		
			case 12:
				func_406(uLocal_98[12], &uLocal_946[12], 12);
				break;
		
			case 13:
				func_406(uLocal_98[13], &uLocal_946[13], 13);
				break;
		
			case 14:
				func_406(uLocal_98[14], &uLocal_946[14], 14);
				break;
		
			case 15:
				func_406(uLocal_98[15], &uLocal_946[15], 15);
				break;
		}
	}
	else
	{
		func_407(iLocal_1227);
	}

	iLocal_1227 = iLocal_1227 + 1;

	if (iLocal_944 == 0)
		if (iLocal_1227 >= 10)
			iLocal_1227 = 2;
	else if (iLocal_1227 >= 16)
		iLocal_1227 = 2;

	return;
}

void func_176() // Position - 0x8B05 Hash - 0xCC7A88FD ^0x6A52D920
{
	if (func_29(Global_35, volLocal_120, true, 0))
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);

	return;
}

BOOL func_177() // Position - 0x8B27 Hash - 0x69977796 ^0x5F6BB0B8
{
	int i;

	if (func_15(iLocal_34, 16777216))
		return true;

	for (i = 2; i <= 15; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_98[i]))
			if (ENTITY::IS_ENTITY_IN_VOLUME(uLocal_98[i], volLocal_120, true, 0))
				if (func_58(uLocal_98[i], 0, true))
					return false;
	}

	func_17(&iLocal_34, 16777216);
	return true;
}

float func_178(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x8B91 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), fParam1, bParam4);
}

void func_179(Entity eParam0, Blip* pblParam1, Hash hParam2, Hash hParam3, eBlipSprite ebsParam4, char* sParam5) // Position - 0x8BB9 Hash - 0x9A16E8A0 ^0xD3AFCA17
{
	Blip blipFromEntity;

	if (!ENTITY::IS_ENTITY_DEAD(eParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*pblParam1))
			MAP::REMOVE_BLIP(pblParam1);
	
		blipFromEntity = MAP::GET_BLIP_FROM_ENTITY(eParam0);
	
		if (MAP::DOES_BLIP_EXIST(blipFromEntity))
			MAP::REMOVE_BLIP(&blipFromEntity);
	
		*pblParam1 = MAP::BLIP_ADD_FOR_ENTITY(hParam2, eParam0);
	
		if (hParam3 != 0)
			MAP::BLIP_ADD_MODIFIER(*pblParam1, hParam3);
	
		if (ebsParam4 != BLIP_HIGHER)
			MAP::SET_BLIP_SPRITE(*pblParam1, ebsParam4, true);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*pblParam1, sParam5);
	}

	return;
}

void func_180(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8C33 Hash - 0xBD495172 ^0xBD495172
{
	func_42(sParam0, iParam1, false, true, iParam2, iParam3, iParam4, iParam5, iParam6);
	return;
}

void func_181() // Position - 0x8C50 Hash - 0x298EB0AA ^0x23272C51
{
	if (!MAP::DOES_BLIP_EXIST(blLocal_1229))
		func_408(&blLocal_1229, volLocal_120, joaat("BLIP_STYLE_AREA"));

	return;
}

void func_182(char* sParam0, BOOL bParam1) // Position - 0x8C71 Hash - 0x97C09C39 ^0xE9895930
{
	var unk;
	int feedMessage;

	unk.f_1 = sParam0;
	feedMessage = UIFEED::_0x4E88A65968A55C78(&unk, bParam1);

	if (func_409(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, false);

	return;
}

int func_183(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x8C99 Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_410(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_411(hash, 0) && func_412(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_184() // Position - 0x8D5E Hash - 0x412E1D81 ^0x5E8F48F0
{
	ItemSet itemset;
	int i;
	Vector3 offsetFromEntityInWorldCoords;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;

	if (func_15(iLocal_35, 524288))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
	i = 0;

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset);
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
			PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, true);
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, (float)-1 + i, 0f) };
			func_155(&offsetFromEntityInWorldCoords, 1f);
			ENTITY::SET_ENTITY_COORDS(entityFromItem, offsetFromEntityInWorldCoords, false, true, true, true);
		}
	}

	func_17(&iLocal_35, 524288);
	return;
}

void func_185(var uParam0) // Position - 0x8DF5 Hash - 0x47348EE5 ^0x13F6BCC4
{
	int num;

	if (uParam0->f_75 != 0)
		func_413(uParam0->f_75, false, 1065353216, 1, 0, 0, 1, 752097756);
	else if (uParam0->f_70 != 0)
		func_414(uParam0->f_70, false, 1065353216, 1, 0, 0, false, -1);

	if (func_411(uParam0->f_74, 0))
		func_415(uParam0->f_74, 1, false, 0, 0, 752097756, 0, 0, 0, 0);

	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			num = func_416() + uParam0->f_72;
			func_417(num);
		}
		else
		{
			func_418(uParam0->f_72, 1);
		}
	}

	if (uParam0->f_73 != 9)
		func_32(uParam0->f_73, 0, 0, 0, 0, false, 1065353216, false);

	return;
}

void func_186() // Position - 0x8EA5 Hash - 0xBE1AB8C3 ^0xD00DE178
{
	if (func_243())
		func_393(uLocal_161.f_3, iLocal_944, 1, 0, joaat("cs_johnmarston"));
	else
		func_393(uLocal_161.f_3, iLocal_944, 1, 0, 0);

	return;
}

int func_187(int iParam0, Ped pedParam1) // Position - 0x8ED7 Hash - 0x1D215F5B ^0x1EAF74BE
{
	Ped ped;
	int num;

	if (!func_419(iParam0))
		return 0;

	if (!func_420(iParam0, &ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (func_120() == -1)
		num = Global_1914319.f_3[iParam0 /*446*/].f_10;
	else
		num = Global_1051260.f_48[iParam0 /*78*/].f_16;

	func_422(ped, pedParam1, func_421(num), 0, 10);
	return 1;
}

void func_188(Entity eParam0, int iParam1) // Position - 0x8F44 Hash - 0x16D4F9BD ^0xFA2587DC
{
	int value;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		value = func_122(iParam1);
		DECORATOR::DECOR_SET_INT(eParam0, "honor_bank", MISC::ABSI(value));
	}

	return;
}

void func_189(var uParam0, BOOL bParam1) // Position - 0x8F6E Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_207(&(uParam0->f_1), 256);
	else
		func_111(&(uParam0->f_1), 256);

	return;
}

BOOL func_190() // Position - 0x8F94 Hash - 0x1EA58B0C ^0x34D3D324
{
	switch (iLocal_1222)
	{
		case 0:
			if (func_151(0, 1, 0, false))
			{
				func_57(volLocal_131);
				func_36(uLocal_98[0], Global_35, func_35("STORE_POST"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				iLocal_1234 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_human_twnrec_scrub_blood_floor_bucket"), uLocal_1272, 355.7023f, 0, 0, false);
				iLocal_1222 = iLocal_1222 + 1;
			}
			break;
	
		case 1:
			if (func_178(uLocal_98[0], uLocal_1272, false) < 2f)
			{
				TASK::TASK_USE_SCENARIO_POINT(uLocal_98[0], iLocal_1234, 0, -1, true, false, 0, false, -1082130432, false);
				iLocal_1222 = iLocal_1222 + 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_98[0], SCRIPT_TASK_ANY, true) != 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_98[0], uLocal_1272, 1f, 20000, 1048576000, 0, 1193033728);
			}
			break;
	
		case 2:
			if (func_151(0, 1, 0, false))
			{
				func_36(uLocal_98[0], Global_35, func_35("STORE_CLEAN"), 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				iLocal_1222 = iLocal_1222 + 1;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_191() // Position - 0x90CC Hash - 0x49C17395 ^0x95DDD60C
{
	float num;

	if (uLocal_161.f_46 || !func_15(iLocal_1275, 16))
		return;

	if (uLocal_161.f_98[0] < 3f)
	{
		if (!func_25(&uLocal_936))
		{
			func_26(&uLocal_936);
			fLocal_942 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
		}
		else
		{
			num = func_27(&uLocal_936);
		
			if (num < fLocal_942)
			{
				func_194(&uLocal_98[0], 0, Global_35, true, 0, 0, 0, true);
			}
			else if (num >= fLocal_942 * 2f)
			{
				fLocal_942 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
				func_26(&uLocal_936);
			}
		}
	}

	return;
}

void func_192(Hash hParam0) // Position - 0x915A Hash - 0x4ADD6F08 ^0xD5AC472
{
	if (func_15(iLocal_34, 1048576))
		return;

	if (func_58(uLocal_98[0], 0, true))
	{
		func_423(true);
		LAW::_ENABLE_DISPATCH_LAW_2(true);
		PED::SET_PED_CONFIG_FLAG(uLocal_98[0], 146, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_98[0], 148, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_98[0], 315, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_98[0], 146, true);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), hParam0, 0, 0, 0, false, 0, 0, 0);
		PED::_0xC6C4E15CF7D52FEA(uLocal_98[0], 1000f);
		LAW::_ADD_WITNESS_RESPONSE(PLAYER::PLAYER_ID(), hParam0, uLocal_98[0]);
		LAW::_LAW_WITNESS_RESPONSE_TASK(uLocal_98[0], Global_35, uLocal_98[0], Global_36, hParam0);
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), hParam0, 0, 0, true);
		func_17(&iLocal_34, 1048576);
	}
	else
	{
		func_423(true);
		LAW::_ENABLE_DISPATCH_LAW_2(true);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), hParam0, 0, 0, 0, false, 0, 0, 0);
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), hParam0, 0, 0, true);
		func_17(&iLocal_34, 1048576);
	}

	return;
}

BOOL func_193() // Position - 0x924E Hash - 0x1D6C9180 ^0xF56981BB
{
	if (func_58(uLocal_98[0], 0, true))
		if (uLocal_161.f_98[0] < 50f && ENTITY::IS_ENTITY_OCCLUDED(uLocal_98[0]))
			return true;
	else
		return true;

	return false;
}

void func_194(var uParam0, int iParam1, Ped pedParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x928E Hash - 0xE8CF37FA ^0x9197FD43
{
	var args;

	if (pedParam2 == 0)
		pedParam2 = Global_35;

	args.f_4 = -1;
	args.f_8 = 2;
	args.f_9 = 1;
	args.f_10 = 1;
	args.f_11 = 1;
	args.f_13 = 1;
	args.f_14 = 2;
	args.f_15 = 2;
	args.f_16 = 3;
	args.f_19 = 3;
	args.f_20 = 1;
	args.f_21 = 3;
	args.f_22 = 3;
	args.f_4 = 21030;
	args.f_3 = pedParam2;
	args.f_8 = 4;

	if (bParam7)
	{
		args.f_17 = 4;
		args.f_18 = 1;
	}
	else
	{
		args.f_17 = 0;
		args.f_18 = 0;
	}

	args.f_19 = 4;
	args.f_20 = 2;
	args.f_21 = 4;
	args.f_22 = 3;
	args = { iParam4, iParam5, iParam6 };
	args.f_12 = 0;
	args.f_9 = 1;
	args.f_10 = 1;
	args.f_11 = 1;

	if (bParam3)
		func_17(&(args.f_5), 1);

	args.f_13 = 0;
	args.f_7 = iParam1;
	func_125(&(args.f_5), 1);

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &args);

	return;
}

BOOL func_195(int iParam0) // Position - 0x9388 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_196(int iParam0, const char* sParam1, var uParam2, BOOL bParam3) // Position - 0x93C7 Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_195(iParam0))
		return;

	num = func_424(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, uParam2));
	return;
}

void func_197(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0x9417 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_195(iParam0))
		return;

	num = func_424(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

void func_198(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9460 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_195(iParam0))
		return;

	num = func_424(iParam0);

	if (bParam1)
	{
		func_425(iParam0, 4);
		func_426(num, true);
		func_427(num, true);
	}
	else
	{
		func_428(iParam0, 4);
		func_427(num, false);
	}

	return;
}

void func_199(int* piParam0, const char* sParam1) // Position - 0x94AF Hash - 0x94802979 ^0xDA357E7D
{
	if (func_195(piParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		func_197(piParam0->f_6, sParam1, true);

	piParam0->f_5 = sParam1;
	func_429(piParam0, 1);
	return;
}

void func_200(var uParam0, BOOL bParam1) // Position - 0x94E6 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_207(&(uParam0->f_1), 2048);
	else
		func_111(&(uParam0->f_1), 2048);

	return;
}

void func_201(var uParam0, BOOL bParam1) // Position - 0x950C Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_111(uParam0, 16);
	}
	else
	{
		func_207(uParam0, 67108864);
		func_207(uParam0, 16);
	}

	return;
}

void func_202(var uParam0, BOOL bParam1) // Position - 0x9537 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_207(&(uParam0->f_1), 128);
	else
		func_111(&(uParam0->f_1), 128);

	return;
}

void func_203(var uParam0, BOOL bParam1) // Position - 0x955B Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_111(uParam0, 256);
	else
		func_207(uParam0, 256);

	return;
}

void func_204(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x957D Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_111(uParam0, 268435456);
	else
		func_207(uParam0, 268435456);

	if (!bParam2)
		func_111(uParam0, 1073741824);
	else
		func_207(uParam0, 1073741824);

	if (!bParam3)
		func_111(uParam0, 536870912);
	else
		func_207(uParam0, 536870912);

	return;
}

int func_205(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x95E2 Hash - 0x8EBD6187 ^0x42F0F0AC
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

const char* func_206(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x961D Hash - 0xAAA10C27 ^0x5F94E968
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

	return MISC::VAR_STRING(2, func_430(sParam1));
}

void func_207(int iParam0, int iParam1) // Position - 0x9692 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_208(int iParam0) // Position - 0x96A7 Hash - 0x10B6ADF3 ^0x5434DDBE
{
	int messageState;

	messageState = 6;

	if (func_409(iParam0))
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);

	return messageState != 6;
}

void func_209(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x96C7 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_195(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_424(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_431(num);
	*uParam0 = 0;
	return;
}

int func_210() // Position - 0x971B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x9727 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_432(*iParam0);
	i = func_433(*iParam0);
	num2 = func_434(*iParam0);
	j = func_435(*iParam0);
	k = func_436(*iParam0);
	l = func_437(*iParam0);

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

	for (m = func_438(i, num); num2 > m; m = func_438(i, num))
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

	func_439(iParam0, l, k, j, num2, i, num);
	return;
}

void func_212(int iParam0, int iParam1, int iParam2) // Position - 0x98AF Hash - 0xAF953F5E ^0x2FFE3B3F
{
	if (iParam2 == -15 || !func_440(iParam1))
		return;

	if (Global_1914319.f_3[iParam0 /*446*/].f_4 != -15)
		if (func_441(iParam2, Global_1914319.f_3[iParam0 /*446*/].f_4))
			Global_1914319.f_3[iParam0 /*446*/].f_4 = iParam2;
	else
		Global_1914319.f_3[iParam0 /*446*/].f_4 = iParam2;

	return;
}

int func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x991A Hash - 0xFE0658C6 ^0xFE0658C6
{
	int i;
	int num;
	int num2;
	int j;

	if (!func_442(iParam0))
		return 0;

	num2 = func_443(iParam1);

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_40.f_11206[iParam0 /*26*/][i /*5*/] == iParam1)
		{
			if (func_444(Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_1, 1) > func_444(iParam3, 1))
				return 1;
		
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_1 = iParam3;
		
			if (iParam4 > 0)
			{
				num = func_210();
				func_211(&num, 0, 0, iParam4, 0, 0, 0, false);
			}
			else
			{
				num = -15;
			}
		
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_4 = num;
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_3 = num2;
			func_445(iParam0, iParam1, true);
			Global_1935183.f_24 = 1;
			return 1;
		}
	}

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_40.f_11206[iParam0 /*26*/][i /*5*/] == joaat("TSTAG_NO_TAGS"))
		{
			Global_40.f_11206[iParam0 /*26*/][i /*5*/] = iParam1;
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_1 = iParam3;
		
			if (iParam4 > 0)
			{
				num = func_210();
				func_211(&num, 0, 0, iParam4, 0, 0, 0, false);
			}
			else
			{
				num = -15;
			}
		
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_4 = num;
			Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_3 = num2;
			func_445(iParam0, iParam1, true);
			Global_1935183.f_24 = 1;
		
			if (func_446(num2))
			{
				for (j = 0; j < 5; j = j + 1)
				{
					if (Global_40.f_11206[iParam0 /*26*/][j /*5*/].f_3 == num2 && Global_40.f_11206[iParam0 /*26*/][j /*5*/] != iParam1)
					{
						if (Global_40.f_11206[iParam0 /*26*/][j /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON") || Global_40.f_11206[iParam0 /*26*/][j /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS") && iParam1 == joaat("TSTAG_LOCKDOWN_SALOON") || iParam1 == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"))
							return 0;
					
						func_447(iParam0, &Global_40.f_11206[iParam0 /*26*/][j /*5*/]);
					}
				}
			}
		
			return 1;
		}
	}

	return 0;
}

BOOL func_214(Ped pedParam0, int iParam1) // Position - 0x9B63 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_15(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_15(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_15(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_15(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_15(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_15(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_15(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_15(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

int func_215(Ped pedParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x9C62 Hash - 0x32945A99 ^0xFCA9036B
{
	PersChar perscharIndexFromPedIndex;
	int i;
	int num;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) && !bParam3)
		return -1;

	perscharIndexFromPedIndex = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedParam0);

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(perscharIndexFromPedIndex))
		return -1;

	i = iParam1;

	for (i = iParam1; i <= iParam2; i = i + 1)
	{
		num = i;
	
		if (func_222(num) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(num)))
			if (func_62(num) == perscharIndexFromPedIndex)
				return num;
	}

	return -1;
}

BOOL func_216(int iParam0) // Position - 0x9CDC Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_218(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

BOOL func_217(int iParam0, BOOL bParam1) // Position - 0x9D01 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_120() != -1)
		return false;

	if (!func_218(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_218(int iParam0) // Position - 0x9D2F Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_219(int iParam0) // Position - 0x9D46 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_218(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_220(int iParam0, BOOL bParam1) // Position - 0x9D6A Hash - 0x452DF11A ^0x452DF11A
{
	if (func_120() != -1)
		return;

	if (!func_218(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_221(int iParam0) // Position - 0x9DA3 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_218(iParam0))
		return;

	ped = func_448(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

Hash func_222(int iParam0) // Position - 0x9DE7 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_218(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_223(Hash hParam0) // Position - 0x9E05 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_224(int iParam0, BOOL bParam1) // Position - 0x9E11 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_218(iParam0))
		return 0;

	if (!func_217(iParam0, 2))
		return 0;

	if (func_222(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
		return 1;

	if (func_217(iParam0, true) && !bParam1)
	{
		func_265(iParam0, 128);
		return 1;
	}

	func_220(iParam0, 129);
	func_221(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_62(iParam0));
	func_449(iParam0, 0);
	return 1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x9E94 Hash - 0xA17D549C ^0x5D795B7F
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

void func_226(int iParam0, int iParam1) // Position - 0xA499 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_260(iParam0))
		return;

	Global_1310750[iParam0 /*111*/].f_1 = Global_1310750[iParam0 /*111*/].f_1 || iParam1;
	return;
}

void func_227(Ped pedParam0, BOOL bParam1) // Position - 0xA4C5 Hash - 0x2A900A38 ^0xFC5FB2DC
{
	if (func_58(pedParam0, 0, true))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, false);
		func_450(pedParam0, 1088421888, false, 0);
	
		if (!bParam1)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedParam0);
	}

	return;
}

BOOL func_228(var uParam0, var uParam1) // Position - 0xA4F9 Hash - 0xBF8144AC ^0x3F2252D9
{
	if (func_81(uParam0->f_3, 16777216))
		if (func_451(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
			return true;

	return false;
}

void func_229(var uParam0) // Position - 0xA535 Hash - 0xA0076B4D ^0x9D87EFDF
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
	return;
}

var func_230(BOOL bParam0, var uParam1, var uParam2) // Position - 0xA55A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_231(Ped pedParam0, int iParam1, float fParam2, Ped pedParam3, BOOL bParam4) // Position - 0xA571 Hash - 0x1DF80F9B ^0x67406EEB
{
	int taskSequenceId;
	Ped mount;
	float num;

	if (!Global_1935630.f_12 && !bParam4 || func_58(pedParam0, 0, true))
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
				func_452(&pedParam0);
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

void func_232(var uParam0) // Position - 0xA66D Hash - 0xAF255EC8 ^0x37A19009
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_453(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}

	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}

	func_454(uParam0);
	func_455(uParam0);
	func_456(uParam0);

	if (!func_457(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
	
		func_308(uParam0->f_51, 0);
	}

	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));

	if (uParam0->f_48)
		func_54();

	if (!func_458(uParam0->f_3) && !func_81(uParam0->f_3, 256))
		func_459(uParam0->f_3, true, 0, 15, 0, 0, false, true);

	func_57(uParam0->f_173);
	func_57(uParam0->f_172);
	return;
}

void func_233(var uParam0) // Position - 0xA750 Hash - 0x2F9D6A60 ^0x3708209
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
		MAP::REMOVE_BLIP(&(uParam0->f_181));

	return;
}

Hash func_234(int iParam0, int iParam1) // Position - 0xA76B Hash - 0x8D239183 ^0xE724C28D
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

void func_235(int iParam0, Hash hParam1, int iParam2) // Position - 0xBCBF Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_120() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

BOOL func_236(int iParam0) // Position - 0xBCF7 Hash - 0x2C18052C ^0x62C3E8A9
{
	if (func_237(iParam0, 1) && func_237(iParam0, 2) && func_237(iParam0, 8) && func_237(iParam0, 512))
		return true;

	return false;
}

BOOL func_237(int iParam0, int iParam1) // Position - 0xBD35 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_238(int iParam0) // Position - 0xBD44 Hash - 0x899A1C9C ^0x899A1C9C
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

int func_239(BOOL bParam0) // Position - 0xC4B2 Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_460(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_461(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_461(), i);
	
		if (func_462(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

void func_240(var uParam0) // Position - 0xC512 Hash - 0xF7A88D56 ^0xB58DFCA
{
	func_17(uParam0, 4096);
	return;
}

void func_241(var uParam0) // Position - 0xC523 Hash - 0x197772DE ^0x4AD0E944
{
	if (*uParam0 != 0)
		STREAMING::REQUEST_MODEL(*uParam0, false);

	return;
}

void func_242(char* sParam0, var uParam1) // Position - 0xC53A Hash - 0x9084F1D0 ^0xBD3F936C
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1->[i /*8*/]))
		{
			TEXT_LABEL_ASSIGN_STRING(&uParam1->[i /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT(&uParam1->[i /*8*/]);
			return;
		}
	}

	return;
}

BOOL func_243() // Position - 0xC57A Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_120() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_244(int iParam0) // Position - 0xC59F Hash - 0x6972B668 ^0x6972B668
{
	switch (iParam0)
	{
		case 0:
			return 60;
	
		case 1:
			return 50;
	
		case 2:
			return 30;
	
		case 3:
			return 60;
	
		case 4:
			return 60;
	
		case 10:
			return 50;
	
		case 14:
			return 50;
	
		case 27:
			return 50;
	
		case 28:
			return 60;
	
		case 31:
			return 50;
	
		case 32:
			return 50;
	
		case 33:
			return 50;
	
		case 34:
			return 50;
	
		case 37:
			return 30;
	
		case 38:
			return 30;
	
		case 39:
			return 30;
	
		case 40:
			return 30;
	
		case 45:
			return 50;
	
		case 48:
			return 50;
	
		case 49:
			return 50;
	
		case 50:
			return 50;
	
		case 54:
			return 60;
	
		case 62:
			return 50;
	
		case 79:
			return 50;
	
		case 80:
			return 50;
	
		case 82:
			return 50;
	
		case 87:
			return 50;
	
		case 90:
			return 50;
	
		case 97:
			return 30;
	
		case 100:
			return 30;
	
		case 102:
			return 30;
	
		case 106:
			return 60;
	
		case 107:
			return 60;
	
		case 109:
			return 50;
	
		case 115:
			return 50;
	
		case 119:
			return 50;
	
		default:
		
	}

	return 0;
}

BOOL func_245(var uParam0) // Position - 0xC743 Hash - 0xF8C02D7D ^0xAA915B43
{
	if (!func_463(uParam0->f_1))
		return false;

	if (uParam0->f_12 != 0)
		if (!func_463(uParam0->f_12))
			return false;

	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_META_PED_OUTFIT(uParam0->f_1, uParam0->f_3);
		
			if (!PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_5))
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
		
			return false;
		}
		else if (!PED::_HAS_META_PED_OUTFIT_LOADED(uParam0->f_5))
		{
			return false;
		}
	}

	return true;
}

Vector3 func_246(int iParam0, int iParam1) // Position - 0xC7C8 Hash - 0x9696C39F ^0x9696C39F
{
	int num;

	if (iParam1 < 0)
		return 0f, 0f, 0f;

	if (!func_260(iParam0))
		return 0f, 0f, 0f;

	if (func_464(iParam0) == 0)
		return 0f, 0f, 0f;

	num = func_465(iParam0) + iParam1;

	if (num >= 892)
		return 0f, 0f, 0f;

	return Global_1310750.f_13358[num /*3*/];
}

void func_247(int iParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC822 Hash - 0x79FC1C47 ^0x25B46574
{
	Volume volume;
	var unk;
	float scaleX;

	if (func_81(iParam0, 32))
	{
		if (func_466(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				unk = { func_467(Global_35, &(uParam1->f_12)) };
			
				if (!_IS_NULL_VECTOR(unk))
					*uParam1 = { unk };
			}
		}
	}

	if (bParam2)
		func_468(uParam1, bParam2);

	if (bParam3)
	{
		scaleX = func_309(iParam0);
		volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, scaleX, scaleX, scaleX, func_310());
	
		if (func_469(Global_1310750[iParam0 /*111*/], 33554432))
			func_312(volume, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0), true, 0, 2, false, -1082130432);
		else
			func_312(volume, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0), true, 0, 8, false, -1082130432);
	
		if (func_81(iParam0, 1))
			func_470(*uParam1 + { 1f, 0f, 0f }, 25f, "Beat Inner", true, 0, 32, false, -1082130432);
	}

	func_471(iParam0);
	return;
}

BOOL func_248(int iParam0, var uParam1) // Position - 0xC913 Hash - 0x51F812E1 ^0x357A2C8B
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
			func_472(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[i /*3*/]);
	}

	if (func_112(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		num2 = BUILTIN::TO_FLOAT(func_473(iParam0));
		num = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		num2 = BUILTIN::TO_FLOAT(func_473(iParam0));
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

void func_249(int iParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xCA16 Hash - 0x7B5F9071 ^0xA25921EE
{
	switch (func_474(iParam0))
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
			if (!func_81(iParam0, 1))
				func_112(iParam0, 2);
		
			func_475(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = *uParam1 * *uParam1;
			*uParam2 = *uParam2 * *uParam2;
			*uParam3 = *uParam3 * *uParam3;
			break;
	
		case 2:
			func_476(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = *uParam1 * *uParam1;
			*uParam2 = *uParam2 * *uParam2;
			*uParam3 = *uParam3 * *uParam3;
			break;
	
		case 3:
			func_476(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = 7f;
			*uParam2 = *uParam2 * *uParam2;
			*uParam3 = *uParam3 * *uParam3;
			break;
	
		default:
			break;
	}

	if (func_106(iParam0))
		*uParam2 = 40000f;

	return;
}

Vector3 func_250(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xCB23 Hash - 0x88677FEE ^0x88677FEE
{
	int i;
	var unk;
	Vector3 vector;
	float num;
	float num2;

	num = 999999.9f;
	num2 = 0f;
	*uParam0 = 1;

	for (i = 0; i < func_464(iParam1); i = i + 1)
	{
		if (!func_477(iParam1, i))
		{
			vector = { func_246(iParam1, i) };
		
			if (!_IS_NULL_VECTOR(vector))
			{
				num2 = BUILTIN::VDIST(Global_36, vector);
			
				if (func_255(num2, iParam1))
					*uParam0 = 0;
			
				if (num2 < num)
				{
					if (func_478(iParam1, vector, fParam2, fParam3))
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

BOOL func_251(var uParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4, int iParam5) // Position - 0xCBD8 Hash - 0x493C8535 ^0x6F995FC8
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_42("BEAT_FAIL", 5000, false, true, 0, 0, -1, -1, 0);
		}
	
		*uParam2 = 1;
	}

	*uParam1 = iParam5;
	uParam0->f_8 = uParam0->f_8 + 1;
	return 0;
}

int func_252(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xCC1C Hash - 0x79583E95 ^0x35D8D668
{
	int i;
	var unk;

	for (i = 0; i < func_464(iParam0); i = i + 1)
	{
		unk = { func_246(iParam0, i) };
	
		if (func_479(unk, uParam1, 1056964608, true))
			return i;
	}

	return -1;
}

BOOL func_253(var uParam0) // Position - 0xCC62 Hash - 0xB70AAE9C ^0x7192DF25
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

BOOL func_254(var uParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xCCB1 Hash - 0x185C7FE7 ^0x640802AD
{
	int i;
	int num;
	var unk;
	var unk4;
	Vector3 closestPointOnLine;

	unk = { *uParam0 };
	func_384(Global_35, *uParam0, &(uParam0->f_37), 1061158912, false, 0);

	if (func_385(&(uParam0->f_37), 500))
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
						num = func_480(uParam0);
					
						if (num > -1 && num < 8)
							*uParam0 = { uParam0->f_12[num /*3*/] };
					}
				
					uParam0->f_8 = 0;
					return true;
				}
			}
		}
	}

	return func_251(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

BOOL func_255(float fParam0, int iParam1) // Position - 0xCDB8 Hash - 0x4BA08F51 ^0x4BA08F51
{
	float num;
	float num2;
	var unk;
	float num3;

	num3 = fParam0 * fParam0;
	func_249(iParam1, &num, &num2, &unk, true);

	if (num3 > num2)
		return false;

	if (func_81(iParam1, 1))
		if (num3 < num)
			return false;

	return true;
}

BOOL func_256(var uParam0, var uParam1) // Position - 0xCDF7 Hash - 0x39F65BB5 ^0x3A5365C9
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

BOOL func_257(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10) // Position - 0xCE33 Hash - 0x98165477 ^0x98165477
{
	if (func_481(iParam0, *uParam2))
		return false;

	if (!func_482(iParam0, uParam2))
		return false;

	if (!func_483(uParam3))
		return false;

	if (bParam10)
		if (!func_484(*uParam2, Global_35))
			return false;

	return true;
}

var func_258(var uParam0) // Position - 0xCE85 Hash - 0x92708AC8 ^0xE929F4
{
	return uParam0->f_51.f_4;
}

BOOL func_259(int iParam0, int iParam1, var uParam2) // Position - 0xCE93 Hash - 0xBF4CD0FC ^0x1A627BCE
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

BOOL func_260(int iParam0) // Position - 0xD005 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_261(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0xD01B Hash - 0x3A05F50D ^0x6A8E2731
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, sParam10);
	return;
}

void func_262(Volume volParam0, int iParam1) // Position - 0xD038 Hash - 0x28736565 ^0xF0314607
{
	if (func_485(volParam0))
		return;

	if (func_486(volParam0) == iParam1)
		return;

	if (Global_36602 >= 10)
		Global_36602 = 0;

	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = volParam0;
	Global_36602 = Global_36602 + 1;
	return;
}

void func_263(Volume volParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD084 Hash - 0xD12D9D38 ^0xF831EF48
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);

	if (bParam3)
		func_207(&iParam1, 8192);

	if (bParam4)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, volParam0);

	return;
}

BOOL func_264(int iParam0, BOOL bParam1) // Position - 0xD0FF Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_120() != -1)
		return false;

	if (!func_218(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_448(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_62(iParam0));
}

void func_265(int iParam0, BOOL bParam1) // Position - 0xD157 Hash - 0x61515A20 ^0x61515A20
{
	if (func_120() != -1)
		return;

	if (!func_218(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_266(int iParam0) // Position - 0xD188 Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_218(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

int func_267(int iParam0, BOOL bParam1) // Position - 0xD1AB Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_218(iParam0))
		return 0;

	if (!func_217(iParam0, 2))
		return 0;

	if (func_217(iParam0, 32) && !bParam1)
	{
		func_449(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_222(iParam0)));
	
		if (func_120() == -1)
		{
			if (func_217(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_62(iParam0));
				func_220(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_62(iParam0));
		}
	
		return 0;
	}

	if (!func_487(iParam0) && func_120() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		func_220(iParam0, 128);
		return 1;
	}

	func_449(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_222(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(iParam0));

	if (func_217(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_62(iParam0));
		func_220(iParam0, 2048);
	}

	return 1;
}

BOOL func_268(int iParam0) // Position - 0xD296 Hash - 0x365567CB ^0x68796F4
{
	if (!func_218(iParam0))
		return false;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_62(iParam0));
	
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_62(iParam0), false)))
			return false;
	}

	return true;
}

BOOL func_269() // Position - 0xD2DC Hash - 0xC6750215 ^0x75F33C87
{
	int i;

	for (i = 0; i < Global_1899517; i = i + 1)
	{
		if (Global_1899517[i] == SCRIPTS::GET_ID_OF_THIS_THREAD())
			return true;
	}

	return false;
}

BOOL func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6, BOOL bParam7) // Position - 0xD30D Hash - 0xA6A4B1AF ^0x5B2536F7
{
	BOOL flag;
	BOOL flag2;
	var unk;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				unk = { func_488(uParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				unk.f_3 = func_489(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_490(uParam0->f_12, uParam0, unk, unk.f_3, true, true, uParam0->f_14, false, true);
			
				if (func_491(uParam0->f_1, 1))
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
						func_95(uParam0->f_11, 0);
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
		
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				flag = ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13;
			
				if (flag)
				{
					unk = { func_488(uParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					unk.f_3 = func_489(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					flag2 = bParam6 || func_492(&(uParam0->f_22));
					unk = { func_488(uParam2, fParam5, uParam0->f_6, flag2) };
					unk.f_3 = func_489(fParam5, uParam0->f_9, flag2);
				}
			
				*uParam1 = func_490(uParam0->f_1, uParam0, unk, unk.f_3, bParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, false, true);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
			
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (flag)
						func_493(*uParam1, uParam0->f_11, true, -1, true);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
						func_92(*uParam1, &(uParam0->f_23), false);
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
		
			return false;
		}
	}

	return true;
}

BOOL func_271(Entity eParam0, var uParam1) // Position - 0xD4C8 Hash - 0x7126C33E ^0x1B005C67
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->[i /*9*/].f_6))
		{
			uParam1->[i /*9*/].f_6 = eParam0;
			return true;
		}
	}

	return false;
}

BOOL func_272(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xD503 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_494(*uParam0, 0f, 0f, 0f))
		return true;

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
		return true;
	}

	if (flag && flag2)
		return false;

	uParam0->f_2 = groundZ;
	return true;
}

void func_273(var uParam0, int iParam1) // Position - 0xD5FA Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_274(var uParam0, int iParam1) // Position - 0xD60B Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_275(int iParam0) // Position - 0xD620 Hash - 0xE97E1B38 ^0xE97E1B38
{
	return iParam0 > -1 && iParam0 < 7;
}

BOOL func_276(int iParam0, int iParam1) // Position - 0xD635 Hash - 0xA5D7750C ^0xB8419359
{
	if (!func_275(iParam0))
		return false;

	return Global_1395482.f_2[iParam0] && iParam1 != false;
}

int func_277(int iParam0) // Position - 0xD65A Hash - 0x69AF6CF8 ^0x64DBA37A
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

Vector3 func_278(var uParam0) // Position - 0xD66D Hash - 0xD2D3D44D ^0xF8F7C98B
{
	return uParam0->f_51;
}

void func_279(var uParam0, int iParam1) // Position - 0xD67B Hash - 0x4F8BE4B5 ^0x8254350D
{
	uParam0->f_21 = iParam1;
	return;
}

BOOL func_280() // Position - 0xD689 Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

void func_281(int iParam0) // Position - 0xD697 Hash - 0xA805A06D ^0x74AB3C0C
{
	if (iParam0 >= Global_1935436)
		return;

	Global_1935436.f_1 = iParam0;
	return;
}

void func_282(int iParam0, int iParam1) // Position - 0xD6B3 Hash - 0x7E43089A ^0xCEBF7A08
{
	float num;

	if (MISC::GET_RANDOM_EVENT_FLAG())
		return;

	Global_17504.f_3 = Global_17504.f_3 + 1;
	Global_17504.f_42[iParam0 /*8*/].f_1 = Global_17504.f_42[iParam0 /*8*/].f_1 + 1;

	if (func_81(iParam0, 2))
		func_496(iParam0, func_495(iParam1));
	else
		func_498(iParam0, func_497());

	num = 1f + (BUILTIN::TO_FLOAT(Global_17504.f_42[iParam0 /*8*/].f_1 / 2) * 0.1f);

	if (num > 2f)
		num = 2f;
	else if (num < 1f)
		num = 1f;

	func_499(iParam0, Global_1310750[iParam0 /*111*/].f_36, num, true, false);
	func_500(iParam0, false);
	func_501(iParam0);
	func_502(true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);

	if (!MISC::GET_MISSION_FLAG())
		MISC::SET_RANDOM_EVENT_FLAG(true);

	AUDIO::CLEAR_CONVERSATION_HISTORY();
	Global_1310750[iParam0 /*111*/].f_110 = Global_1310750[iParam0 /*111*/].f_110 | 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;

	if (!func_81(iParam0, 16))
		func_283(iParam0, false, 0, false, false);

	return;
}

void func_283(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD7C6 Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_503() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_260(num) && !func_81(num, iParam2) && !bParam3 || !func_299(num) && !bParam4 || !func_504(num))
			if (num != iParam0)
				func_505(i);
	}

	return;
}

int func_284(int iParam0) // Position - 0xD854 Hash - 0x7647021A ^0xB4AA498
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_285(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD866 Hash - 0xE0E5FF1A ^0x8D6C182B
{
	if (uParam0->f_177 != -1 || func_469(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
			if (func_81(uParam0->f_3, 1073741824))
				func_506(2, -1, 0, 0, 0);
			else
				func_506(1, -1, 0, 0, 0);
		else if (bParam1)
			if (uParam0->f_45)
				func_506(8, -1, 0, 0, 0);
	
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_507(1, uParam0->f_177))
				{
					func_508(16, uParam0->f_177);
					func_509(1, uParam0->f_177);
				}
			
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_510(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || bParam1 && uParam0->f_45)
	{
		func_506(8, -1, 0, 0, 0);
	}

	return;
}

int func_286() // Position - 0xD92F Hash - 0xD8BA0FE1 ^0x4030E2B7
{
	if (func_511(Global_1935630.f_44))
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					return 1;
		else if (func_512())
			return 1;

	return 0;
}

float func_287(var uParam0, BOOL bParam1) // Position - 0xD979 Hash - 0x27A584A2 ^0xFE2A3AEB
{
	float num;

	if (uParam0->f_119 == -1f)
	{
		if (func_81(uParam0->f_3, 1024))
			num = 95f;
		else if (func_81(uParam0->f_3, 2048))
			num = 80f;
		else if (func_81(uParam0->f_3, 4096))
			num = 65f;
		else if (func_81(uParam0->f_3, 8192))
			num = 55f;
		else if (func_81(uParam0->f_3, 16384))
			num = 30f;
		else
			num = 85f;
	
		if (func_81(uParam0->f_3, 1))
		{
		}
		else if (func_81(uParam0->f_3, 2))
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

int func_288(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, BOOL bParam5, int iParam6) // Position - 0xDA4B Hash - 0x8C72EC05 ^0x8FA21912
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
			else if (func_513(uParam0, num, fParam1 * fParam1, iParam3))
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
				
					if (func_514(uParam0, num, fParam1 * fParam1, iParam3))
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
		uParam0->f_7 = func_104() - uParam0->f_8;
	else
		uParam0->f_7 = 0f;

	return 1;
}

BOOL func_289(var uParam0, int iParam1, int iParam2) // Position - 0xDBE2 Hash - 0x893D31A1 ^0xDA62DD5F
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

	if (num2 < iParam2)
		return false;

	func_114(uParam0);
	return true;
}

BOOL func_290() // Position - 0xDC70 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_2() != -1;
}

BOOL func_291(var uParam0, float fParam1) // Position - 0xDC8B Hash - 0x80205ABE ^0xB640424F
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

BOOL func_292(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDCC8 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_515(bParam1, bParam2, bParam3);

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

BOOL func_293(BOOL bParam0) // Position - 0xDDFD Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (bParam0 == -1)
		return true;

	if (bParam0 == false)
		return false;

	num = func_435(func_210());

	if (func_3(bParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_3(bParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_3(bParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_3(bParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_3(bParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_3(bParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_3(bParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_3(bParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_3(bParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_3(bParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_3(bParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_3(bParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_3(bParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_3(bParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_3(bParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_3(bParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_3(bParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

BOOL func_294(int iParam0, int iParam1) // Position - 0xE051 Hash - 0x1A1F1B7C ^0x1A1F1B7C
{
	return func_284(iParam0) && iParam1 != false;
}

BOOL func_295(int iParam0) // Position - 0xE064 Hash - 0x290561B5 ^0x29D965DD
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

	if (iParam0 & 1 == 1 && func_516(unk))
		return true;

	if (iParam0 & 2 == 2 && func_517(unk))
		return true;

	if (iParam0 & 4 == 4 && func_518(unk))
		return true;

	if (iParam0 & 8 == 8 && func_519(unk))
		return true;

	if (iParam0 & 16 == 16 && func_520(unk))
		return true;

	if (iParam0 & 32 == 32 && func_521(unk))
		return true;

	if (iParam0 & 64 == 64 && func_522(unk))
		return true;

	return false;
}

BOOL func_296(BOOL bParam0) // Position - 0xE156 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_523(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_297(Ped pedParam0) // Position - 0xE170 Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_298(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE258 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_524())
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
		num = func_525(Global_1898164.f_1[0 /*5*/]);
	
		if (func_526(num) && func_527(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_528(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_299(int iParam0) // Position - 0xE45C Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_260(iParam0))
		return false;

	if (func_529(64) && func_530(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_300(Ped pedParam0, BOOL bParam1) // Position - 0xE494 Hash - 0xBBE426EF ^0x74780662
{
	Interior interiorFromEntity;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0) || !bParam1)
		{
			interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(pedParam0);
		
			if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
			{
				if (func_531(interiorFromEntity) || func_532(interiorFromEntity))
					return false;
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_301() // Position - 0xE4E7 Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

int func_302(int iParam0) // Position - 0xE4F7 Hash - 0x595F92D5 ^0x595F92D5
{
	if (!func_533(iParam0))
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

BOOL func_303(int iParam0) // Position - 0xE53E Hash - 0x4461E3A8 ^0x4461E3A8
{
	if (iParam0 <= -1 || iParam0 >= 4)
		return false;

	return true;
}

BOOL func_304(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0xE55C Hash - 0x510575F5 ^0x8B25D6BB
{
	if (!func_303(iParam3))
		return false;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);

	return false;
}

BOOL func_305(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xE599 Hash - 0x1CB9D2F ^0xEA327BD4
{
	float radius;

	if (_IS_NULL_VECTOR(vParam0))
		return false;

	radius = func_290() ? 6f : 22f;
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, radius, 1, 0, 16384);
}

BOOL func_306(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE5CF Hash - 0xA1926892 ^0x535607FE
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
						func_26(uParam0);
					
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
		func_26(uParam0);
		return true;
	}

	if (!bParam4)
	{
		if (!func_25(uParam0))
			return false;
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			return true;
	
		if (!func_534(uParam0, iParam2))
			return true;
	
		if (func_25(uParam0))
			func_535(uParam0);
	}

	return false;
}

BOOL func_307(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xE697 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

void func_308(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xE6B1 Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_479(vector, uParam0, 2f, true))
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

float func_309(int iParam0) // Position - 0xE735 Hash - 0xC1155EB7 ^0x5F9E502C
{
	if (!func_260(iParam0))
		return 0f;

	if (!func_536(iParam0))
		return 0f;

	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_310() // Position - 0xE763 Hash - 0x306ACA3A ^0x9878908D
{
	return "unnamed";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0xE76F Hash - 0xA17D549C ^0x5619E224
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

Volume func_312(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, float fParam6) // Position - 0xED74 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_470(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, fParam6);
	return volume;
}

void func_313(int iParam0, BOOL bParam1, int iParam2) // Position - 0xEDB8 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_537(iParam2);

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
		iParam0->f_10 = 0;

	iParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		iParam0->f_13 = Global_1935630.f_44;
	else
		iParam0->f_13 = func_538(0);

	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
				if (!(*iParam0 & 33554432 != 0))
					if (iParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_111(iParam0, 33554432);
					else if (!(*iParam0 & 8192 != 0))
						if (func_296(true))
							func_111(iParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_296(true) || *iParam0 & 8192 != 0)
					func_207(iParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(iParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_539(iParam0))
				iParam0->f_15 = func_332();
		}
		else if (iParam0->f_15 > 0)
		{
			if (func_332() - iParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}

	iParam0->f_6 = iParam0->f_6 + 1;

	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7 = iParam0->f_7 + 1;
	
		if (iParam0->f_7 > 4)
			iParam0->f_7 = 0;
	}

	func_540(iParam0);
	return;
}

BOOL func_314(Ped pedParam0, int iParam1) // Position - 0xEF83 Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_541(pedParam0, iParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_542(pedParam0, pedIndexFromEntityIndex) <= func_543(iParam1))
				return true;
			break;
	}

	return false;
}

void func_315(Ped pedParam0, int iParam1, int iParam2) // Position - 0xF05B Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		iParam1->f_10 = pedParam0;

	if (func_544(iParam2, 1, 1, 1, 0))
		func_111(iParam1, 2048);

	iParam1->f_16 = iParam2;
	func_545(iParam1, true);
	func_54();
	return;
}

BOOL func_316(Ped pedParam0, int iParam1) // Position - 0xF098 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_546(pedParam0, !(*iParam1 & 268435456 != 0), !(*iParam1 & 536870912 != 0), !(*iParam1 & 1073741824 != 0), 0, false))
		{
			if (iParam1->f_12 < 5f)
				num = 95f;
			else if (iParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_547(iParam1);
		
			if (func_548(iParam1, pedParam0, num, num2))
			{
				if (iParam1->f_2 == 0)
					iParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - iParam1->f_2;
				num4 = func_549(iParam1);
			
				if (iParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_545(iParam1, true);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_545(iParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_317(Ped pedParam0, Entity eParam1, int iParam2) // Position - 0xF17F Hash - 0x899101A2 ^0xBCA80002
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

	if (func_550(eParam1, !(*iParam2 & 268435456 != 0), !(*iParam2 & 536870912 != 0), !(*iParam2 & 1073741824 != 0), 0))
	{
		if (iParam2->f_12 < 5f)
			num = 95f;
		else if (iParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_547(iParam2);
	
		if (func_548(iParam2, pedParam0, num, num2))
		{
			if (iParam2->f_2 == 0)
				iParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2 > func_549(iParam2))
				{
					func_545(iParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_318(Ped pedParam0, int iParam1) // Position - 0xF255 Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_541(pedParam0, iParam1, pedIndexFromEntityIndex))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3 > func_549(iParam1))
		{
			customDistance = func_547(iParam1);
		
			if (iParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_319(int iParam0, int iParam1) // Position - 0xF35E Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_332();
	num2 = num - iParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_320(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0xF395 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_551(iParam2);
		
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
			if (func_328(iParam2, pedParam1))
			{
				func_545(iParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_321(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0xF49C Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (iParam2->f_12 < (float)func_552(iParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_328(iParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_545(iParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_322(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0xF507 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_553(iParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, iParam2->f_22))
				{
					func_545(iParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, iParam2->f_27))
				{
					func_545(iParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &outCoords, false, false);
				
					if (func_554(pedParam1, entityCoords, outCoords))
					{
						func_545(iParam2, true);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, iParam2->f_22))
				{
					func_545(iParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &outCoords2, false, false);
				
					if (func_554(pedParam1, entityCoords, outCoords2))
					{
						func_545(iParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_323(Ped pedParam0, int iParam1) // Position - 0xF64F Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *iParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_541(pedParam0, iParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_555(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_556(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						iParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_557(iParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_558(iParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_559(iParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_324(var uParam0, int iParam1) // Position - 0xF82F Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_325(int iParam0, int iParam1) // Position - 0xF8A7 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_332();
	num2 = num - iParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_326(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF8D6 Hash - 0x8119700D ^0x42D5A76B
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
		if (func_560(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_561(entity2, pedParam0))
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

int func_327(int iParam0, Ped pedParam1) // Position - 0xFA5C Hash - 0x42A83B1F ^0xF28BF1D8
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", iParam0->f_5);
	else if (iParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_328(int iParam0, Ped pedParam1) // Position - 0xFAAC Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_562(iParam0))
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

BOOL func_329(Ped pedParam0, Ped pedParam1) // Position - 0xFB49 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_152(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_330() // Position - 0xFB96 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_331(int iParam0, Ped pedParam1) // Position - 0xFB9E Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_563(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			iParam0->f_9 = func_332();
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
						if (func_178(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								iParam0->f_9 = func_332();
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

int func_332() // Position - 0xFC5F Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_333() // Position - 0xFC7D Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_332() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_334(int iParam0, Ped pedParam1) // Position - 0xFCCA Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_543(iParam0);

	if (iParam0->f_12 > func_564(iParam0) && iParam0->f_12 > num)
		return false;

	num3 = func_565(pedParam1);
	num2 = func_566(iParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (iParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, iParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, iParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, iParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_335(Ped pedParam0, Entity eParam1, int iParam2) // Position - 0xFDE6 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (iParam2->f_12 > 4f)
		return false;

	flag = *iParam2 & 256 != 0;
	flag2 = *iParam2 & 524288 != 0;
	flag3 = *iParam2 & 128 != 0;
	return func_567(pedParam0, eParam1, flag, flag3, iParam2->f_12, flag2);
}

BOOL func_336(Ped pedParam0, int iParam1) // Position - 0xFE2E Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*iParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*iParam1 & 33554432 != 0)
	{
		if (func_568(pedParam0, iParam1, true))
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
					if (!func_569(iParam1, pedParam0))
						if (func_178(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_337(Ped pedParam0, int iParam1) // Position - 0x10088 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_364(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_338(int iParam0, int iParam1) // Position - 0x100C1 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_332();
	num2 = num - iParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_339(var uParam0, int iParam1) // Position - 0x100F0 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_340(Ped pedParam0, int iParam1) // Position - 0x10104 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (iParam1->f_4 == 0)
		iParam1->f_4 = func_332();
	else if (func_332() - iParam1->f_4 > func_570(iParam1))
		return func_571(pedParam0, iParam1, false, -1082130432);

	return false;
}

BOOL func_341(int iParam0, Ped pedParam1) // Position - 0x10151 Hash - 0x2978E171 ^0xF7AAD626
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

int func_342() // Position - 0x101A5 Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_572();

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

int func_343(int iParam0) // Position - 0x102B8 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_120() != -1)
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

BOOL func_344(int iParam0) // Position - 0x1035D Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_573(iParam0))
		return false;

	return func_574(iParam0);
}

int func_345(int iParam0, int iParam1, int iParam2) // Position - 0x10379 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_346(int iParam0) // Position - 0x1039E Hash - 0xEE599357 ^0xEE599357
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

Hash func_347() // Position - 0x10455 Hash - 0xA46C8CCA ^0x71ABACD2
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

void func_348(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x105AD Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_575(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_576(hParam0);
	return;
}

void func_349(int iParam0) // Position - 0x105D9 Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_577(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_350(BOOL bParam0) // Position - 0x1063D Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_578(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_579(i, &hash, &num))
			{
				if (!func_411(hash, 0))
				{
				}
				else
				{
					unlockHash = func_580(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_581(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_342() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_342() >= 160;
					else
						flag = num == func_582();
				
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

struct<2> func_351(int iParam0) // Position - 0x106FE Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_352(var uParam0, var uParam1, int iParam2) // Position - 0x1070E Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x1071E Hash - 0xA17D549C ^0x2A83DFF6
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

int func_354(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x10868 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_583(sParam0, sParam1, hParam2);
	return num2;
}

int func_355(int iParam0, int iParam1) // Position - 0x108CB Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_584(iParam0))
		return 0;

	if (!func_585())
		return 0;

	if (!func_586(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

void func_356(var uParam0, int iParam1) // Position - 0x10926 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_357(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1093B Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return -1f;

	return func_152(Global_35, pedParam0, bParam1, bParam2);
}

BOOL func_358(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x10964 Hash - 0x3576CBF5 ^0xBF0EF05A
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

BOOL func_359(Ped pedParam0, const char* sParam1, int iParam2, Ped pedParam3, BOOL bParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1099D Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_587(pedParam0, &str);
}

var func_360(BOOL bParam0, var uParam1, var uParam2) // Position - 0x109E4 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_361(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x109FB Hash - 0xC26AC0FE ^0xFF80BBA5
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

Hash func_362(int iParam0) // Position - 0x10A37 Hash - 0xBB2588CF ^0x1E31AC10
{
	switch (iLocal_944)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -835911159;
			
				case 1:
					return -239426822;
			
				case 2:
					return 2062284241;
			
				case 3:
					return 1391603815;
			
				case 4:
					return 1261664333;
			
				case 5:
					return 1340138956;
			
				case 6:
					return -2023012722;
			
				case 7:
					return 770895521;
			
				case 8:
					return 193948615;
			
				case 9:
					return -1637869902;
			
				case 10:
					return 607609997;
			
				case 11:
					return -1551970008;
			
				case 12:
					return 90170334;
			
				case 13:
					return 1923663917;
			
				case 14:
					return -2054049802;
			
				case 15:
					return -646838161;
			
				case 16:
					return -584496966;
			
				case 17:
					return 1303876790;
			
				case 18:
					return -849543827;
			
				case 19:
					return 558196059;
			
				case 20:
					return -1503521451;
			
				case 21:
					return 1766689619;
			
				case 22:
					return -836872973;
			
				case 23:
					return 2119991082;
			
				case 24:
					return 1823595477;
			
				case 25:
					if (func_243())
						return 1710800346;
					else
						return -920878148;
					break;
			
				case 26:
					if (func_243())
						return 251419705;
					else
						return -932459019;
					break;
			
				case 27:
					return 1437497331;
			
				case 28:
					return 1086036713;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					return -357535812;
			
				case 1:
					return -719497186;
			
				case 2:
					return -1383488703;
			
				case 3:
					return -700147833;
			
				case 4:
					return -1365423608;
			
				case 5:
					return 1197613306;
			
				case 6:
					return -888114428;
			
				case 7:
					return 526634380;
			
				case 8:
					return -1840420869;
			
				case 9:
					return 1877924238;
			
				case 10:
					return -1163092522;
			
				case 11:
					return 194852930;
			
				case 12:
					return -1725526833;
			
				case 13:
					return 1853146033;
			
				case 14:
					return 1762573504;
			
				case 15:
					return 1336977289;
			
				case 16:
					if (!func_15(iLocal_34, 268435456))
						return -474238259;
					else if (func_364(0))
						return -474238259;
					else
						return 157403391;
					break;
			
				case 17:
					return 101739314;
			
				case 18:
					return -854755896;
			
				case 19:
					return -563585625;
			
				case 20:
					return 1829891480;
			
				case 21:
					return -1049231860;
			
				case 22:
					return -1876092037;
			
				case 23:
					return -2069287102;
			
				case 24:
					return -1341225460;
			
				case 25:
					return 248935820;
			
				case 26:
					if (func_243())
						return 1963982468;
					else
						return 1805689030;
					break;
			
				case 27:
					return -1802744252;
			
				case 28:
					return 783207280;
			}
			break;
	}

	return -1;
}

void func_363(Hash hParam0, Entity eParam1, BOOL bParam2) // Position - 0x10EA8 Hash - 0xBB4883AB ^0xC0C4A2D7
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}

	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(hParam0, eParam1);
	return;
}

BOOL func_364(int iParam0) // Position - 0x10EC7 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_243())
		return false;

	return func_588(Global_1347702[58 /*49*/].f_15, true);
}

Hash func_365(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10EE9 Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

void func_366() // Position - 0x10F8D Hash - 0x10DCB1C4 ^0xD34EC930
{
	if (!func_15(iLocal_35, 131072))
	{
		ansLocal_145.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_145.f_5, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_145.f_1, uLocal_161.f_51, 0f, 0f, -30f, 2);
	
		if (func_58(uLocal_98[0], 0, true))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145.f_1, "barman", uLocal_98[0], 0);
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145.f_1, "plr", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145.f_1, "MONEY", uLocal_871[0 /*12*/].f_8, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145.f_1, "R_Door", uLocal_1230[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_145.f_1, "L_Door", uLocal_1230[1], 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(ansLocal_145.f_5))
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_145.f_1, true, false))
				ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_145.f_1);
	
		func_17(&iLocal_35, 131072);
	}

	return;
}

BOOL func_367() // Position - 0x11060 Hash - 0x26C1CD18 ^0xD747C94F
{
	switch (iLocal_944)
	{
		case 0:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_145.f_1, true, false))
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Window_Idle") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Reward_Avg") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Reward_Good") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_GET_THE_LAW"))
					return true;
				else
					func_589();
			break;
	
		case 1:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_145.f_1, true, false))
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Window_Idle") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Reward_Avg") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_145.f_1, "PBL_Reward_Good"))
					return true;
				else
					func_589();
			break;
	}

	return false;
}

void func_368(int* piParam0, var uParam1) // Position - 0x1112D Hash - 0xC7765EDD ^0x9C4E31FE
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
	func_590(piParam0, uParam1, true);
	func_52(uParam1, 0, true, true, false);
	MISC::COPY_SCRIPT_STRUCT(piParam0, &src, 21);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i /*17*/], &src2, 17);
	}

	return;
}

BOOL func_369(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x111BE Hash - 0x56789741 ^0x56789741
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

int func_370(var uParam0, int* piParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, BOOL bParam9, Volume volParam10, int iParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15) // Position - 0x11258 Hash - 0x15BBEDC ^0x6EBAE1FD
{
	BOOL flag;
	int num;

	flag = bParam9;
	func_591(&flag);

	if (func_3(flag, 16) && !bParam15)
		bParam9 = bParam9 | 8388608;

	num = func_592(uParam0, piParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, bParam9, volParam10, iParam11, iParam12, iParam14);

	if (!func_3(flag, 134217728))
		func_593(piParam1, uParam3, uParam0);

	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*piParam1, 25))
		{
			if (MISC::IS_BIT_SET(*piParam1, 24))
			{
				if (!func_594(558))
					func_595(558, false);
			
				MISC::SET_BIT(piParam1, 24);
				MISC::SET_BIT(piParam1, 25);
			}
		}
	}

	return num;
}

char* func_371(int iParam0) // Position - 0x11304 Hash - 0x39EFF7C1 ^0x49DFAB36
{
	if (func_596(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
		
			case 1:
				return "GREET_NEG";
		
			case 2:
				return "GREET_SPOS";
		
			case 3:
				return "GREET_SNEG";
		
			case 4:
				return "GREET_ACC";
		
			case 5:
				return "GREET_REJ";
		
			case 6:
				return "BEAT_GRT_NEG";
		
			case 7:
				return "INTERACT_GREET";
		
			case 8:
				return "INTERACT_DEFUSE";
		
			case 9:
				return "INTERACT_LET_GO";
		
			case 10:
				return "INTERACT_INSULT";
		
			case 11:
				return "INTERACT_THREATEN";
		
			case 12:
				return "INTERACT_ROB";
		
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
		
			case 14:
				return "INTERACT_ROB_ACCEPT";
		
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
		
			case 16:
				return "INTERACT_STOP_WITNESS";
		
			case 17:
				return "INTERACT_STOP_VEHICLE";
		
			case 18:
				return "INTERACT_STOP_HORSE";
		
			case 19:
				return "INTERACT_REQUEST_RIDE";
		
			case 20:
				return "INTERACT_STEAL_HORSE";
		
			case 21:
				return "INTERACT_STEAL_VEHICLE";
		
			case 22:
				return "INTERACT_HORSE";
		
			case 23:
				return "INTERACT_CALLOUT";
		
			case 24:
				return "INTERACT_QUESTION";
		
			case 25:
				return "INTERACT_ENCOURAGE";
		
			case 26:
				return "INTERACT_INTERVENE";
		
			case 27:
				return "INTERACT_CONFRONT";
		
			case 28:
				return "RE_INTER_TRUTH";
		
			case 29:
				return "RE_INTER_LIE";
		
			case 30:
				return "INTERACT_QUIT";
		
			case 31:
				return "RE_INTER_DIRECT";
		
			case 32:
				return "INTERACT_SCOLD";
		
			case 33:
				return "INTERACT_PRAISE";
		
			case 34:
				return "INTERACT_ASSIST";
		
			case 35:
				return "INTERACT_MISLEAD";
		
			case 36:
				return "INTERACT_ASK";
		
			case 37:
				return "INTERACT_DEMAND";
		
			default:
			
		}
	}

	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_372(int* piParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1150E Hash - 0xAC8CE43 ^0x1A2D07F
{
	if (bParam1 && !func_597(piParam0, 13))
		func_598(piParam0, 0);
	else
		func_429(piParam0, 0);

	if (func_195(piParam0->f_6))
		if (bParam2)
			func_209(&(piParam0->f_6), false, true);

	return;
}

void func_373(Any* panParam0, int iParam1) // Position - 0x11554 Hash - 0x5F94E6 ^0xC34AEB03
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = 0;
	func_535(&(panParam0->f_18));
	return;
}

int func_374(int iParam0, int iParam1) // Position - 0x11572 Hash - 0x9143B8CE ^0x9143B8CE
{
	int num;

	if (iParam0 != -1)
		num = func_599(iParam0, iParam1);

	if (num != 0)
		return num;

	return 0;
}

void func_375(BOOL bParam0) // Position - 0x11599 Hash - 0xE4DD5D93 ^0x1235B113
{
	if (!func_376(PLAYER::PLAYER_ID(), &uLocal_98[0]))
	{
		func_368(&uLocal_1278, &uLocal_1299);
		func_40(&uLocal_1299[0 /*17*/], func_371(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
	
		if (bParam0)
			func_40(&uLocal_1299[1 /*17*/], func_371(6), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, 0);
		else
			func_40(&uLocal_1299[1 /*17*/], func_371(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, 0);
	
		func_372(&uLocal_1299[0 /*17*/], false, false);
		func_372(&uLocal_1299[1 /*17*/], false, false);
		func_17(&iLocal_1275, 4096);
	}

	return;
}

BOOL func_376(Player plParam0, var uParam1) // Position - 0x11638 Hash - 0x4D019A2E ^0x2A746C20
{
	var outEntity;

	outEntity = *uParam1;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(plParam0, &outEntity, false, false))
		return true;

	return false;
}

void func_377() // Position - 0x11657 Hash - 0xA7477D55 ^0xA7477D55
{
	if (func_126(Global_35))
		if (func_600(&uLocal_1299[1 /*17*/], true, false))
			func_372(&uLocal_1299[1 /*17*/], false, false);
	else if (!func_600(&uLocal_1299[1 /*17*/], true, false))
		func_372(&uLocal_1299[1 /*17*/], true, false);

	return;
}

BOOL func_378(var uParam0, int iParam1) // Position - 0x116A3 Hash - 0xAFE5A1C8 ^0x84E720FE
{
	if (func_601(iParam1))
	{
		return !(uParam0->f_1 && iParam1 != false);
	}
	else
	{
		switch (iParam1)
		{
			case 32:
				return func_3(*uParam0, 8);
		
			case 64:
				return func_3(*uParam0, 32);
		
			case 512:
				return func_3(*uParam0, 1048576);
		
			case 4096:
				return func_3(*uParam0, 262144);
		
			case 8192:
				return func_3(*uParam0, 16);
		
			case 32768:
				return func_3(*uParam0, 64);
		
			case 65536:
				return func_3(*uParam0, 1024);
		
			case 262144:
				return func_3(*uParam0, 4);
		
			default:
			
		}
	}

	return false;
}

void func_379(BOOL bParam0) // Position - 0x11761 Hash - 0x395E289F ^0x3C20EC10
{
	if (bParam0)
	{
		if (!func_15(iLocal_34, -2147483648))
		{
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_98[0], true);
			func_17(&iLocal_34, -2147483648);
		}
	}
	else if (func_15(iLocal_34, -2147483648))
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_98[0], false);
		func_125(&iLocal_34, -2147483648);
	}

	return;
}

float func_380(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x117B8 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_107(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

BOOL func_381(Ped pedParam0, Volume volParam1, int iParam2, BOOL bParam3) // Position - 0x1180F Hash - 0x425E360D ^0xB9BEF16F
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, true, 0);
}

void func_382() // Position - 0x11843 Hash - 0x787608A5 ^0x872FED69
{
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145, "PBL_Intro_Idle");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145, "PBL_Intro_Action");
	return;
}

Entity func_383(Ped pedParam0) // Position - 0x11861 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

void func_384(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x1186B Hash - 0xE8FB625A ^0xDE619FF9
{
	int num;

	num = bParam6 ? iParam7 : BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));

	if (!uParam4->f_1)
	{
		if (num < uParam4->f_2 || func_484(vParam1, pedParam0) && ENTITY::GET_ENTITY_SPEED(pedParam0) > iParam5)
		{
			*uParam4 = func_332();
			uParam4->f_2 = func_178(pedParam0, vParam1, true);
			uParam4->f_1 = 1;
		}
	}
	else if (num > uParam4->f_2 || !func_484(vParam1, pedParam0) && ENTITY::GET_ENTITY_SPEED(pedParam0) > iParam5)
	{
		*uParam4 = func_332();
		uParam4->f_2 = func_178(pedParam0, vParam1, true);
		uParam4->f_1 = 0;
	}

	return;
}

BOOL func_385(var uParam0, int iParam1) // Position - 0x1191F Hash - 0x932A1FE ^0xF74179EF
{
	if (uParam0->f_1 == 1)
		return func_332() - *uParam0 >= iParam1;

	return false;
}

BOOL func_386(Ped pedParam0, BOOL bParam1) // Position - 0x1193E Hash - 0xDF64D629 ^0x407E21C2
{
	if (func_58(pedParam0, 0, true))
		return AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedParam0) || bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0);

	return false;
}

BOOL func_387(float fParam0) // Position - 0x1196E Hash - 0x7997973A ^0x7997973A
{
	if (func_602(true))
		return true;

	if (func_25(&uLocal_0) && !func_603(&uLocal_0, 7.5f + fParam0))
		return true;

	return false;
}

void func_388() // Position - 0x119A4 Hash - 0xC81BF32E ^0x6BB797EC
{
	if (!func_15(iLocal_34, 2097152))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(7)))
		{
			func_363(1891783641, uLocal_98[0], true);
			func_36(uLocal_98[0], uLocal_98[1], func_35("NOT_OPEN"), "", 75f, 0, false, 0, 1, false, true, 291934926, true, false, 0);
			func_17(&iLocal_34, 2097152);
		}
	}

	if (!func_15(iLocal_34, 4194304))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[1], func_362(8)))
		{
			func_363(1891783641, uLocal_98[0], true);
			func_36(uLocal_98[1], uLocal_98[0], func_35("PRE_LEAVE"), "", 75f, 0, false, 0, 1, false, true, 291934926, true, false, 0);
			func_17(&iLocal_34, 4194304);
		}
	}

	if (!func_15(iLocal_34, 8388608))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_98[0], func_362(9)))
		{
			func_363(1891783641, uLocal_98[0], true);
			func_36(uLocal_98[0], uLocal_98[1], func_35("CUSTOMER_LEAVE"), "", 75f, 0, false, 0, 1, false, false, 291934926, true, false, 0);
			func_17(&iLocal_34, 8388608);
		}
	}

	return;
}

float func_389(AnimScene ansParam0) // Position - 0x11ADA Hash - 0x7CBBDA30 ^0xB0DD078D
{
	float animScenePhase;

	animScenePhase = -1f;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansParam0, false))
		animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(ansParam0);

	return animScenePhase;
}

BOOL func_390() // Position - 0x11B07 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

BOOL func_391(Entity eParam0, char* sParam1, int iParam2) // Position - 0x11B28 Hash - 0xCAF5C11F ^0x729911B2
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
		if (!ENTITY::IS_ENTITY_DEAD(eParam0))
			if (ENTITY::HAS_ANIM_EVENT_FIRED(eParam0, MISC::GET_HASH_KEY(sParam1)))
				return true;

	return false;
}

int func_392(int iParam0, int iParam1) // Position - 0x11B57 Hash - 0x6553AF7 ^0xBB4A9387
{
	int num;

	num = func_604(iParam0, iParam1);

	if (num != -1)
		return Global_17504.f_1003[num /*6*/].f_3;

	return 0;
}

void func_393(int iParam0, int iParam1, int iParam2, Entity eParam3, Hash hParam4) // Position - 0x11B7F Hash - 0x4DE67A6D ^0x8A9F566F
{
	Hash entityModel;

	if (eParam3 != 0)
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(eParam3);
	
		if (entityModel != 0)
		{
			func_605(iParam0, iParam1, entityModel);
			func_607(iParam0, iParam1, func_606(eParam3));
		}
	}
	else if (hParam4 != 0)
	{
		func_605(iParam0, iParam1, hParam4);
		func_607(iParam0, iParam1, func_606(eParam3));
	}

	func_608(iParam0, iParam1, iParam2);
	func_610(iParam0, iParam1, func_609(true));
	func_611(iParam0, iParam1, func_210());
	return;
}

void func_394(var uParam0) // Position - 0x11BFA Hash - 0x104B2E99 ^0xE5DC1BE8
{
	!func_25(uParam0);

	if (func_103(uParam0))
	{
		uParam0->f_1 = func_104() - uParam0->f_2;
		uParam0->f_2 = 0f;
		func_274(uParam0, 2);
	}

	return;
}

void func_395(var uParam0) // Position - 0x11C2E Hash - 0x2B2F09DF ^0x183AF97A
{
	!func_25(uParam0);

	if (!func_103(uParam0))
	{
		uParam0->f_2 = func_104() - uParam0->f_1;
		func_273(uParam0, 2);
	}

	return;
}

void func_396(int iParam0) // Position - 0x11C5E Hash - 0x2003A876 ^0xFD2761CB
{
	struct<9> eventData;
	var entityCoords;

	if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 9))
	{
		if (!func_15(iLocal_34, 131072))
			if (VOLUME::IS_POINT_IN_VOLUME(volLocal_130, eventData.f_6))
				func_17(&iLocal_34, 131072);
	
		if (ENTITY::GET_ENTITY_TYPE(eventData) == 1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(volLocal_120) && func_29(Global_35, volLocal_120, true, 0))
			{
				if (!func_29(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData), volLocal_120, true, 0) && !func_612(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData), &uLocal_98))
				{
					if (eventData.f_1 == func_383(Global_35))
					{
						bLocal_943 = true;
						entityCoords = { ENTITY::GET_ENTITY_COORDS(eventData, true, false) };
					}
				}
			}
		
			return;
		}
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(2791.55f, -1167.62f, 47.9797f, eventData.f_6, true) <= 0.3f || MISC::GET_DISTANCE_BETWEEN_COORDS(2790.95f, -1168.47f, 47.5391f, eventData.f_6, true) <= 0.3f)
			return;
	
		if (!VOLUME::IS_POINT_IN_VOLUME(volLocal_120, eventData.f_6))
			return;
	
		if (eventData.f_1 != func_383(Global_35))
			return;
	
		if (ENTITY::GET_ENTITY_TYPE(eventData) == 0)
			if (eventData.f_6.f_2 < 47.05f)
				return;
	
		if (ENTITY::GET_ENTITY_TYPE(eventData) == 3)
			if (eventData.f_6.f_2 < 47f)
				return;
	
		iLocal_1221 = iLocal_1221 + 1;
	}

	return;
}

void func_397() // Position - 0x11DBC Hash - 0x8466D34F ^0x110FA30F
{
	if (func_613())
	{
		switch (iLocal_36)
		{
			case 0:
				if (iLocal_1220 > 3)
				{
					iLocal_36 = iLocal_36 + 1;
				}
				else if (iLocal_1220 > 1 && iLocal_1220 <= 3)
				{
					if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2f || func_614() && !func_15(iLocal_35, 32))
					{
						func_17(&iLocal_35, 32);
						iLocal_945 = 5;
						iLocal_36 = iLocal_36 + 1;
					}
				}
				break;
		
			case 1:
				if (iLocal_1220 > 5)
				{
					iLocal_36 = iLocal_36 + 1;
				}
				else if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2f || func_614() && !func_15(iLocal_35, 64))
				{
					if (iLocal_1220 > 3 && iLocal_1220 <= 5)
					{
						func_17(&iLocal_35, 64);
						iLocal_945 = 6;
						iLocal_36 = iLocal_36 + 1;
					}
				}
				break;
		
			case 2:
				if (iLocal_1220 > 7)
				{
					iLocal_36 = iLocal_36 + 1;
				}
				else if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2f || func_614() && !func_15(iLocal_35, 128))
				{
					if (iLocal_1220 > 5 && iLocal_1220 <= 7)
					{
						func_17(&iLocal_35, 128);
						iLocal_945 = 7;
						iLocal_36 = iLocal_36 + 1;
					}
				}
				break;
		
			case 3:
				if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2f || func_614() && !func_15(iLocal_35, 256))
				{
					if (iLocal_1220 > 7 && iLocal_1220 != iLocal_16)
					{
						func_17(&iLocal_35, 256);
						iLocal_945 = 8;
						iLocal_36 = iLocal_36 + 1;
					}
				}
				break;
		
			case 4:
				break;
		}
	
		if (!func_15(iLocal_34, 256))
		{
			if (iLocal_1221 > 3)
			{
				func_17(&iLocal_34, 256);
				iLocal_945 = 9;
			}
		}
		else if (!func_15(iLocal_34, 512))
		{
			if (iLocal_1221 > 5)
			{
				func_17(&iLocal_34, 512);
				iLocal_945 = 10;
			}
		}
		else if (iLocal_1221 > 12)
		{
			func_17(&iLocal_34, 8192);
			func_51();
			iLocal_945 = 11;
		}
	}

	return;
}

void func_398() // Position - 0x11FB8 Hash - 0xB5BD8F89 ^0x2F2CB38D
{
	if (uLocal_161.f_46 == 1)
		return;

	func_615();

	if (!func_15(iLocal_34, 2048))
	{
		if (func_15(iLocal_34, 4096))
		{
			if (!func_29(Global_35, volLocal_120, true, 0))
			{
				func_17(&iLocal_34, 2048);
				iLocal_945 = 14;
			}
		}
	}

	return;
}

float func_399() // Position - 0x12006 Hash - 0xDDD4F2DB ^0xDDD4F2DB
{
	if (!func_25(&uLocal_1235))
		func_26(&uLocal_1235);

	return func_27(&uLocal_1235);
}

void func_400(const char* sParam0, char* sParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12027 Hash - 0x82226B55 ^0x49AC6F89
{
	var taskSequenceId;

	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);

	if (bParam3)
		if (bParam4)
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam0, sParam1, Global_35, -1, 4f, -4f, 67108865, 0, false, false, -1082130432, 0, 65536, -1082130432);
		else
			TASK::TASK_PLAY_ANIM(0, sParam0, sParam1, 4f, -4f, -1, 67108880, 0, false, 0, false, 0, false);
	else
		TASK::TASK_PLAY_ANIM(0, sParam0, sParam1, 4f, -4f, -1, 0, 0, false, 0, false, 0, false);

	if (bParam2)
		TASK::TASK_PLAY_ANIM(0, uLocal_136[0 /*2*/], "window_idle_barman", 4f, -4f, -1, 1, 0, false, 0, false, 0, false);
	else
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_98[0], uLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108865, 0, false, false, -1082130432, 0, 65536, -1082130432);

	func_128(uLocal_98[0], &taskSequenceId, 0, 0, true, true);
	return;
}

void func_401() // Position - 0x12107 Hash - 0x76A2E315 ^0x8BBCB53A
{
	int i;

	for (i = 0; i < 16; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_98[i]))
			if (uLocal_946[i] == 10)
				if (!func_29(uLocal_98[i], uLocal_122[0], true, 0))
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_98[i], 2.5f);
			else if (uLocal_946[i] == 11)
				if (!func_29(uLocal_98[i], uLocal_122[1], true, 0))
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_98[i], 2.5f);
			else if (uLocal_946[i] == 12)
				if (!func_29(uLocal_98[i], uLocal_122[2], true, 0))
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_98[i], 2.5f);
	}

	return;
}

void func_402() // Position - 0x121C5 Hash - 0x7218D8B9 ^0xEE5BEDB5
{
	if (!func_15(iLocal_34, 1024))
	{
		if (func_29(Global_35, volLocal_120, true, 0))
		{
			func_22(false, -1, -1);
			func_17(&iLocal_34, 1024);
		}
	}

	return;
}

void func_403() // Position - 0x121F8 Hash - 0x9697C9BA ^0x9697C9BA
{
	if (!func_15(iLocal_35, 4))
		if (func_15(iLocal_35, 2) && func_15(iLocal_35, 8))
			if (iLocal_1220 > iLocal_16 - 2)
				func_17(&iLocal_35, 4);

	return;
}

void func_404() // Position - 0x12233 Hash - 0xF127FA80 ^0x97F8DA11
{
	Ped ped;

	if (!func_25(&uLocal_1253))
	{
		func_26(&uLocal_1253);
	}
	else if (func_27(&uLocal_1253) > fLocal_1216)
	{
		ped = func_616(1084227584);
	
		if (ped != 0)
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(ped, "SQUEAK", false);
			func_26(&uLocal_1253);
			fLocal_1216 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 10f);
		}
	}

	return;
}

int func_405() // Position - 0x1228E Hash - 0xC876C780 ^0xC876C780
{
	int i;

	i = -1;

	for (i = iLocal_1227; i <= 15; i = i + 1)
	{
		if (uLocal_17[i] == 1)
			return i;
	}

	i = 2;

	for (i = 2; i <= 15; i = i + 1)
	{
		if (uLocal_17[i] == 1)
			return i;
	}

	return 2;
}

void func_406(Ped pedParam0, var uParam1, int iParam2) // Position - 0x122E3 Hash - 0xFACF8E9D ^0xFACF8E9D
{
	if (!func_58(pedParam0, 0, true))
		return;

	switch (*uParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 2:
					*uParam1 = 1;
					break;
			
				case 3:
					*uParam1 = 2;
					break;
			
				case 4:
					*uParam1 = 4;
					break;
			
				case 5:
					*uParam1 = 3;
					break;
			
				case 6:
				case 7:
				case 8:
					func_617(pedParam0, uLocal_122[1], 0, 0, 0);
					*uParam1 = 7;
					break;
			
				case 9:
					func_617(pedParam0, uLocal_122[2], 0, 0, 0);
					*uParam1 = 8;
					break;
			
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					*uParam1 = 9;
					break;
			}
			break;
	
		case 1:
			if (func_618(pedParam0))
			{
				func_617(pedParam0, uLocal_122[0], 0, 0, 0);
				*uParam1 = 6;
			}
			break;
	
		case 2:
			if (func_619(pedParam0))
			{
				func_620(pedParam0, uLocal_122[1], false, false);
				func_617(pedParam0, uLocal_122[1], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
	
		case 3:
			if (func_621(pedParam0))
			{
				func_620(pedParam0, uLocal_122[1], false, false);
				func_617(pedParam0, uLocal_122[1], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
	
		case 4:
			if (func_622(pedParam0))
			{
				func_620(pedParam0, uLocal_122[0], false, false);
				func_617(pedParam0, uLocal_122[0], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
	
		case 5:
			if (func_623(pedParam0))
			{
				if (iParam2 % 4 == 0 || iParam2 % 4 == 1)
				{
					func_620(pedParam0, uLocal_122[0], false, false);
					func_617(pedParam0, uLocal_122[0], 0f, 0f, 0);
					*uParam1 = 10;
				}
				else if (iParam2 % 4 == 2)
				{
					func_620(pedParam0, uLocal_122[1], false, false);
					func_617(pedParam0, uLocal_122[1], 0f, 0f, 0);
					*uParam1 = 11;
				}
				else
				{
					func_620(pedParam0, uLocal_122[2], false, false);
					func_617(pedParam0, uLocal_122[2], 0f, 0f, 0);
					*uParam1 = 12;
				}
			}
			else
			{
				func_624(pedParam0, iParam2);
			}
			break;
	
		case 6:
			if (func_625(pedParam0, 1073741824))
				*uParam1 = 10;
		
			func_624(pedParam0, iParam2);
			break;
	
		case 7:
			if (func_625(pedParam0, 1073741824))
				*uParam1 = 11;
		
			func_624(pedParam0, iParam2);
			break;
	
		case 8:
			if (func_625(pedParam0, 1073741824))
				*uParam1 = 12;
		
			func_624(pedParam0, iParam2);
			break;
	
		case 9:
			if (func_626())
			{
				if (iParam2 % 3 == 0)
					func_627(pedParam0, uLocal_122[0]);
				else if (iParam2 % 3 == 1)
					func_627(pedParam0, uLocal_122[1]);
				else
					func_627(pedParam0, uLocal_122[2]);
			
				func_26(&uLocal_933);
				*uParam1 = 5;
			}
			break;
	
		case 10:
			if (func_29(pedParam0, uLocal_122[0], true, 0))
			{
				if (func_625(pedParam0, 1073741824))
				{
					if (func_390())
					{
						func_620(pedParam0, uLocal_122[1], false, false);
						func_617(pedParam0, uLocal_122[1], 0, 0, 0);
						*uParam1 = 11;
					}
					else
					{
						func_620(pedParam0, uLocal_122[2], false, false);
						func_617(pedParam0, uLocal_122[2], 0, 0, 0);
						*uParam1 = 12;
					}
				}
			}
		
			if (func_15(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(pedParam0, false);
				func_628(pedParam0, volLocal_120, uLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
		
			func_624(pedParam0, iParam2);
			break;
	
		case 11:
			if (func_29(pedParam0, uLocal_122[1], true, 0))
			{
				if (func_625(pedParam0, 1073741824))
				{
					if (func_390())
					{
						func_620(pedParam0, uLocal_122[0], false, false);
						func_617(pedParam0, uLocal_122[0], 0, 0, 0);
						*uParam1 = 10;
					}
					else
					{
						func_620(pedParam0, uLocal_122[2], false, false);
						func_617(pedParam0, uLocal_122[2], 0, 0, 0);
						*uParam1 = 12;
					}
				}
			}
		
			if (func_15(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(pedParam0, false);
				func_628(pedParam0, volLocal_120, uLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
		
			func_624(pedParam0, iParam2);
			break;
	
		case 12:
			if (func_29(pedParam0, uLocal_122[2], true, 0))
			{
				if (func_625(pedParam0, 1073741824))
				{
					if (func_390())
					{
						func_620(pedParam0, uLocal_122[0], false, false);
						func_617(pedParam0, uLocal_122[0], 0, 0, 0);
						*uParam1 = 10;
					}
					else
					{
						func_620(pedParam0, uLocal_122[1], false, false);
						func_617(pedParam0, uLocal_122[1], 0, 0, 0);
						*uParam1 = 11;
					}
				}
			}
		
			if (func_15(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(pedParam0, false);
				func_628(pedParam0, volLocal_120, uLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
		
			func_624(pedParam0, iParam2);
			break;
	
		case 13:
			func_624(pedParam0, iParam2);
			break;
	
		case 14:
			break;
	}

	return;
}

void func_407(int iParam0) // Position - 0x127C6 Hash - 0x87674FFC ^0x87674FFC
{
	uLocal_17[iParam0] = 0;
	return;
}

void func_408(Blip* pblParam0, Volume volParam1, Hash hParam2) // Position - 0x127D5 Hash - 0xC0B96180 ^0xD62E4A6
{
	if (MAP::DOES_BLIP_EXIST(*pblParam0))
		MAP::REMOVE_BLIP(pblParam0);

	*pblParam0 = MAP::_BLIP_ADD_FOR_VOLUME(hParam2, volParam1);
	return;
}

BOOL func_409(int iParam0) // Position - 0x127F8 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_410(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x12804 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_411(hParam0, 0))
		return false;

	num = func_581(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_629(hParam0, 1))
			return false;

	return func_630(hParam0, false, bParam2) >= iParam1;
}

BOOL func_411(Hash hParam0, int iParam1) // Position - 0x1286E Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_412(Hash hParam0, Hash hParam1) // Position - 0x12888 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_413(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, int iParam6, Hash hParam7) // Position - 0x128B9 Hash - 0x63AC4944 ^0x63AC4944
{
	if (!bParam1)
		func_631(iParam0, sParam4, iParam5);

	func_632(iParam0, bParam1, iParam2, iParam3, hParam7);
	return;
}

int func_414(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x128DF Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_183(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_631(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_632(num, bParam1, iParam2, iParam3, hash);
	return num;
}

int func_415(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x12926 Hash - 0x11449F01 ^0x11449F01
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

	if (!func_411(hParam0, 0))
		return 0;

	if (!func_633(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_634(hParam0, &value, iParam1))
		return 0;

	func_635(hParam0, bParam2);
	lootTableKey = 0;

	if (func_630(hParam0, false, false) == 0)
	{
		if (func_636(hParam0))
		{
			hash = func_637(hParam0);
			collectableSubcategory = func_638(hash);
			num = func_639(collectableSubcategory) + 1;
			func_640(hash);
		
			if (func_641(38))
				func_595(483, false);
			else
				func_595(482, false);
		
			if (num == func_642(collectableSubcategory))
			{
				func_415(func_643(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_585() && func_644(4))
				{
					if (func_585() && func_645(38) || func_641(38))
					{
						func_647(38, func_643(collectableSubcategory), 0, 0, func_646(), false, -1, false);
						func_648(2);
					}
					else
					{
						func_647(38, func_643(collectableSubcategory), 0, 0, func_646(), false, -1, false);
						func_648(1);
					}
				}
			}
			else if (func_585() && func_644(4))
			{
				if (func_585() && func_645(38) || func_641(38))
				{
					func_647(38, 0, 0, 0, func_646(), false, -1, false);
					func_648(2);
				}
				else
				{
					func_647(38, 0, 0, 0, func_646(), false, -1, false);
					func_648(1);
				}
			}
		
			if (func_585() && func_644(4))
				if (!Global_1914319.f_17376)
					if (func_585() && func_645(38) || func_641(38))
						func_649(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_649(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_581(hParam0) == joaat("CLOTHING"))
		if (!func_412(hParam0, 866047851) && !func_412(hParam0, -1979000645) && !func_412(hParam0, 1248798204))
			flag = true;

	if (func_650(hParam0, 8388608) && !func_344(28))
		func_651(28);

	if (!flag)
	{
		if (func_412(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_652(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_654(func_653(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_120() == -1)
						func_655(ammoTypeForWeapon);
				
					if (func_656(false) && func_657(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_658(hParam0, value, hParam5);
					
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
					if (func_120() == -1)
						func_655(hParam0);
				
					if (func_656(false) && func_657(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_658(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_581(hParam0) == joaat("WEAPON"))
		{
			if (!func_659(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_581(hParam0) == joaat("AMMO") && func_660(hParam0))
		{
			if (!func_661(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_412(hParam0, 866047851))
		{
			func_662(hParam0);
		}
		else if (func_412(hParam0, 2000026003))
		{
			func_663(hParam0);
		}
		else if (func_412(hParam0, -103750053))
		{
			func_352(func_664(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_352(func_665(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_412(hParam0, -121341956) && !func_412(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_588(Global_1835011[4 /*74*/].f_1, true))
					func_595(498, false);
		
			if (func_412(hParam0, -2017733358) || func_412(hParam0, -1369131378))
				func_666(hParam0);
		}
		else if (func_412(hParam0, -136654233))
		{
			if (func_412(hParam0, -1021472396))
			{
			}
		}
		else if (func_412(hParam0, -1466706512) && func_412(hParam0, 1147021565))
		{
			func_595(484, false);
		}
		else if (func_412(hParam0, 1147021565) && func_412(hParam0, -524514947))
		{
		}
		else if (func_412(hParam0, 554195525))
		{
		}
		else if (func_412(hParam0, 589988438))
		{
			if (func_667())
			{
				func_414(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_412(hParam0, 787083290) && func_412(hParam0, 949916894))
		{
			func_668(hParam0);
		}
		else if (func_412(hParam0, -1718133314))
		{
			func_669(hParam0);
		}
		else if (func_412(hParam0, -1738650224))
		{
			func_670(hParam0);
		}
		else if (func_412(hParam0, -1112814642) && func_412(hParam0, 949916894))
		{
			func_671(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_412(hParam0, 1841149704))
		{
			func_672();
		}
		else if (func_412(hParam0, 606799272))
		{
			func_673(hParam0, iParam1);
			func_674(hParam0);
		}
		else if (func_412(hParam0, -1112814642) && func_412(hParam0, -1697809989))
		{
			func_675(hParam0, 0, false, false);
		}
		else if (func_412(hParam0, -2017733358) || func_412(hParam0, -1369131378))
		{
			func_666(hParam0);
		}
		else if (func_412(hParam0, -1921346699))
		{
			if (func_120() != -1)
				return 0;
		
			func_676(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_412(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_410(471514780, 1, false))
						func_415(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_410(526074061, 1, false))
						func_415(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_410(-967317137, 1, false))
						func_415(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_410(670273567, 1, false))
						func_415(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_410(215778062, 1, false))
						func_415(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_410(-1045488665, 1, false))
						func_415(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_412(hParam0, -839724752) && func_650(hParam0, 4))
		{
			if (!func_641(42))
				func_677(hParam0);
		}
		else if (func_412(hParam0, 1399091007))
		{
			func_678(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_412(hParam0, 1248798204))
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
				func_415(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_120() == -1)
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
					func_696(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_696(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_696(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_686(499813453, joaat("treasure_hunt_loot_01"), false);
				func_687(499813453, false);
				func_688(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_686(390004462, joaat("treasure_hunt_loot_17"), false);
				func_687(390004462, false);
				func_692(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_686(6410548, joaat("treasure_hunt_loot_23"), false);
				func_687(6410548, false);
				func_693(8);
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
				func_686(6410548, joaat("treasure_hunt_loot_22"), false);
				func_687(6410548, false);
				func_693(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_651(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_679(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_680(&hash3, false))
					func_657(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_696(594, 1934060482, true, true);
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
					func_696(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_595(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_686(6410548, joaat("treasure_hunt_loot_21"), false);
				func_687(6410548, false);
				func_693(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_595(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_415(func_697(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_415(func_698(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_696(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_686(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_687(-220219788, false);
				func_690(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_344(1))
					func_595(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_686(666607663, joaat("treasure_hunt_loot_07"), false);
				func_687(666607663, false);
				func_689(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_695(241, func_694(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_686(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_687(-220219788, false);
				func_690(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_695(242, func_694(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_595(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_695(240, func_694(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_686(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_687(-220219788, false);
				func_690(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_686(390004462, joaat("treasure_hunt_loot_16"), false);
				func_687(390004462, false);
				func_692(1);
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
				func_686(499813453, joaat("treasure_hunt_loot_03"), false);
				func_687(499813453, false);
				func_688(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_686(666607663, joaat("treasure_hunt_loot_06"), false);
				func_687(666607663, false);
				func_689(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_686(218622660, joaat("treasure_hunt_loot_14"), false);
				func_687(218622660, false);
				func_691(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_686(666607663, joaat("treasure_hunt_loot_05"), false);
				func_687(666607663, false);
				func_689(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_120() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_679(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_686(218622660, joaat("treasure_hunt_loot_13"), false);
				func_687(218622660, false);
				func_691(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_686(6410548, joaat("treasure_hunt_loot_20"), false);
				func_687(6410548, false);
				func_693(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_595(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_595(491, false);
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
				func_686(499813453, joaat("treasure_hunt_loot_02"), false);
				func_687(499813453, false);
				func_688(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_595(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_681();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_682();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_683();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_684();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_685();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_686(390004462, joaat("treasure_hunt_loot_18"), false);
				func_687(390004462, false);
				func_692(4);
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash4 = hParam0;
		func_699(&hash4);
	
		if (!func_700(hash4, value, hParam5))
			return 0;
		else if (!func_656(false))
			return 1;
	
		if (func_581(hParam0) == joaat("CLOTHING"))
			func_701(hParam0);
	
		if (func_412(hParam0, -1979000645))
			func_702(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_656(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_415(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_703(lootTableKey, 0);
		}
	}

	statId = { func_704(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_705(hParam0);

	if (iParam6 > 0f)
	{
		if (func_412(hParam0, -839724752))
			func_706(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_707(hParam0, value, false, flag3, 0);
	}

	return 1;
}

int func_416() // Position - 0x13BBE Hash - 0xF0AA04BD ^0x32A5DDEA
{
	if (func_120() != -1)
		return 0;

	return func_708(joaat("FAME"));
}

void func_417(int iParam0) // Position - 0x13BDB Hash - 0xB3660874 ^0xDC5A8616
{
	var statId;

	if (func_120() != -1)
		return;

	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		statId = { func_351(joaat("FAME")) };
		STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	}

	return;
}

void func_418(int iParam0, int iParam1) // Position - 0x13C1E Hash - 0xC0A0CA7A ^0xC0A0CA7A
{
	var unk;
	int num;

	if (func_120() != -1)
		return;

	if (func_709(&unk))
		return;

	num = iParam1;

	if (func_710())
		num = 0;

	func_711(iParam0, num);
	return;
}

BOOL func_419(int iParam0) // Position - 0x13C53 Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

BOOL func_420(int iParam0, var uParam1) // Position - 0x13C69 Hash - 0x3651FB70 ^0xFA6F4E3D
{
	if (!func_419(iParam0))
		return false;

	if (func_120() != -1)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_19))
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
		else
			return false;
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	else
		return false;

	return true;
}

int func_421(int iParam0) // Position - 0x13CE7 Hash - 0x1B961576 ^0x33F87547
{
	switch (iParam0)
	{
		case 0:
			return 10074;
	
		case 2:
			return 10076;
	
		case 3:
			return 10077;
	
		case 6:
			return 10034;
	
		case 7:
			return 10040;
	
		case 8:
			return 10041;
	
		case 13:
			return 10042;
	
		case 14:
			return 10043;
	
		case 15:
			return 10043;
	
		case 17:
			return 10044;
	
		case 18:
			return 10050;
	
		case 19:
			return 10051;
	
		case 20:
			return 10052;
	
		case 21:
			return 10053;
	
		case 22:
			return 10000;
	
		case 23:
			return 10025;
	
		case 24:
			return 10026;
	
		case 25:
			return 10096;
	
		case 26:
			return 10098;
	
		case 27:
			return 10101;
	
		case 28:
			return 10102;
	
		case 29:
			return 10103;
	
		case 30:
			return 10104;
	
		case 31:
			return 10105;
	
		case 36:
			return 10005;
	
		case 37:
			return 10006;
	
		case 38:
			return 10008;
	
		case 39:
			return 10011;
	
		case 40:
			return 10012;
	
		case 41:
			return 10013;
	
		case 42:
			return 10014;
	
		case 43:
			return 10016;
	
		case 44:
			return 10017;
	
		case 45:
			return 10018;
	
		case 46:
			return 10020;
	
		case 47:
			return 10019;
	
		case 48:
			return 10113;
	
		case 49:
			return 10114;
	
		case 50:
			return 10115;
	
		case 55:
			return 10116;
	
		case 60:
			return 10028;
	
		case 61:
			return 10031;
	
		case 62:
			return 10031;
	
		case 65:
			return 10032;
	
		case 68:
			return 10058;
	
		case 69:
			return 10059;
	
		case 72:
			return 10061;
	
		case 73:
			return 10064;
	
		case 74:
			return 10065;
	
		case 75:
			return 10066;
	
		case 76:
			return 10067;
	
		case 77:
			return 10068;
	
		case 78:
			return 10069;
	
		case 79:
			return 10118;
	
		case 82:
			return 10088;
	
		case 85:
			return 10090;
	
		case 86:
			return 10090;
	
		case 88:
			return 10047;
	
		case 89:
			return 10047;
	
		case 90:
			return 10107;
	
		case 91:
			return 10108;
	
		case 92:
			return 10117;
	
		case 95:
			return 10111;
	
		case 99:
			return 10119;
	
		case 100:
			return 10120;
	
		case 102:
			return 10060;
	
		case 103:
			return 10063;
	
		case 106:
			return 10036;
	
		case 107:
			return 10038;
	
		case 109:
			return 10007;
	
		case 110:
			return 10010;
	
		case 112:
			return 10097;
	
		case 114:
			return 10027;
	
		case 116:
			return 10085;
	
		case 120:
			return 10071;
	
		case 128:
			return 10078;
	
		case 129:
			return 10079;
	
		case 130:
			return 10080;
	
		case 131:
			return 10081;
	
		case 132:
			return 10092;
	
		case 133:
			return 10093;
	
		case 134:
			return 10094;
	
		case 135:
			return 10095;
	
		case 137:
			return 10054;
	
		case 138:
			return 10055;
	
		case 139:
			return 10056;
	
		case 140:
			return 10057;
	
		case 141:
			return 10001;
	
		case 142:
			return 10002;
	
		case 143:
			return 10003;
	
		case 144:
			return 10004;
	
		case 145:
			return 10021;
	
		case 146:
			return 10022;
	
		case 147:
			return 10023;
	
		case 148:
			return 10024;
	
		default:
		
	}

	return 0;
}

void func_422(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1416C Hash - 0xBC43D1 ^0xEDC98A60
{
	Ped args;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		args.f_14 = pedParam0;
		args = pedParam1;
		args.f_12 = 14;
		args.f_8 = iParam3;
		args.f_11 = iParam4;
		args.f_13 = iParam2;
		MISC::_CREATE_AI_MEMORY(&args, 17);
	}

	return;
}

void func_423(BOOL bParam0) // Position - 0x141A7 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_712(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_713(&Global_1935630, 4194304);
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

int func_424(int iParam0) // Position - 0x1424A Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_425(int iParam0, int iParam1) // Position - 0x14254 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_426(int iParam0, BOOL bParam1) // Position - 0x14287 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_714(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_427(int iParam0, BOOL bParam1) // Position - 0x142DF Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_428(int iParam0, int iParam1) // Position - 0x14308 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_429(int* piParam0, int iParam1) // Position - 0x14330 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

char* func_430(char* sParam0) // Position - 0x14340 Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

void func_431(int iParam0) // Position - 0x1434A Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_715(iParam0))
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

int func_432(int iParam0) // Position - 0x143FD Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_433(int iParam0) // Position - 0x14422 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_434(int iParam0) // Position - 0x14435 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_435(int iParam0) // Position - 0x14448 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_436(int iParam0) // Position - 0x1445B Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_437(int iParam0) // Position - 0x1446D Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_438(int iParam0, int iParam1) // Position - 0x1447F Hash - 0x893AC59E ^0x893AC59E
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

void func_439(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x14519 Hash - 0xA65AB937 ^0xA65AB937
{
	func_716(uParam0, iParam6);
	func_717(uParam0, iParam5);
	func_718(uParam0, iParam4);
	func_719(uParam0, iParam3);
	func_720(uParam0, iParam2);
	func_721(uParam0, iParam1);
	return;
}

BOOL func_440(int iParam0) // Position - 0x14551 Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

BOOL func_441(int iParam0, int iParam1) // Position - 0x14567 Hash - 0x9E6AAD4C ^0x9E6AAD4C
{
	if (!func_722(iParam1) || !func_722(iParam0))
		return true;

	return iParam0 >= iParam1;
}

BOOL func_442(int iParam0) // Position - 0x1458F Hash - 0xDC21AF4A ^0xDC21AF4A
{
	if (iParam0 != -1)
		return true;

	return false;
}

int func_443(int iParam0) // Position - 0x145A2 Hash - 0xF2AD082D ^0xF2AD082D
{
	int num;
	int num2;
	int num3;
	int i;

	num = func_723(iParam0, 1);

	for (i = 0; i < 5; i = i + 1)
	{
		num2 = func_723(func_724(i), 1);
		num3 = func_723(func_725(i), 1);
	
		if (num >= num2)
			if (num <= num3)
				return i;
	}

	return 0;
}

int func_444(int iParam0, int iParam1) // Position - 0x145F3 Hash - 0xBF7FA2DD ^0xBF7FA2DD
{
	switch (iParam0)
	{
		case -2120502580:
			return 5;
	
		case -1784359682:
			return 1;
	
		case -518918701:
			return 3;
	
		case 820723243:
			return 0;
	
		case 977356591:
			return 4;
	
		case 1461274691:
			return 6;
	
		case 1710500858:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_445(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1465A Hash - 0x88A8BC14 ^0x92E91E3F
{
	int num;
	int offset;

	if (!func_442(iParam0))
		return;

	func_726(iParam1, &num, &offset);

	if (bParam2)
		MISC::SET_BIT(&Global_1935183.f_73[iParam0 /*7*/][num], offset);
	else
		MISC::CLEAR_BIT(&Global_1935183.f_73[iParam0 /*7*/][num], offset);

	return;
}

BOOL func_446(int iParam0) // Position - 0x146AA Hash - 0xEAD034BC ^0xEAD034BC
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
			return false;
	
		default:
		
	}

	return false;
}

void func_447(int iParam0, int iParam1) // Position - 0x146ED Hash - 0x221022A3 ^0xD0167AC9
{
	if (!func_442(iParam0))
		return;

	if (*iParam1 == joaat("TSTAG_NO_TAGS"))
		return;

	func_445(iParam0, *iParam1, false);
	func_727(iParam1);
	Global_1935183.f_24 = 1;
	return;
}

Ped func_448(int iParam0) // Position - 0x14727 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_62(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_449(int iParam0, PersChar pchParam1) // Position - 0x14755 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_218(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

int func_450(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14776 Hash - 0xBCA3D59C ^0x5144AEE5
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

int func_451(Ped pedParam0) // Position - 0x14842 Hash - 0xB2D81349 ^0xACC293B5
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

void func_452(Ped* ppedParam0) // Position - 0x14897 Hash - 0xC4826352 ^0x8AD0FF3C
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

void func_453(Volume volParam0) // Position - 0x148F6 Hash - 0x530B7370 ^0x1B8FEE27
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == volParam0)
			Global_36581[i /*2*/].f_1 = 3;
	}

	return;
}

void func_454(var uParam0) // Position - 0x14927 Hash - 0x829F032E ^0x83C94E6F
{
	if (func_195(uParam0->f_162))
		func_209(&(uParam0->f_162), true, true);

	if (func_195(uParam0->f_163))
		func_209(&(uParam0->f_163), true, true);

	if (func_195(uParam0->f_164))
		func_209(&(uParam0->f_164), true, true);

	if (func_195(uParam0->f_165))
		func_209(&(uParam0->f_165), true, true);

	return;
}

void func_455(var uParam0) // Position - 0x14983 Hash - 0x3D92A68F ^0x8B2A00A3
{
	if (uParam0->f_170)
		func_728();

	return;
}

void func_456(var uParam0) // Position - 0x14996 Hash - 0x407D6713 ^0x758D9866
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_729(32);
		func_459(uParam0->f_3, true, 0, 0, 2, 0, false, true);
	}

	return;
}

BOOL func_457(var uParam0) // Position - 0x149C4 Hash - 0xEBDBCDAB ^0xF2CDCAC0
{
	if (func_730(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_731(uParam0->f_3);
		func_285(uParam0, false, true);
		func_732(uParam0->f_3, uParam0->f_51.f_5, false, uParam0->f_43, -1);
		func_733(false, 0);
		return true;
	}

	return false;
}

BOOL func_458(int iParam0) // Position - 0x14A13 Hash - 0xBC0CCBA5 ^0x80D3F3F5
{
	if (!func_260(iParam0))
		return true;

	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_459(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x14A36 Hash - 0x4654DD91 ^0x21FEF3E7
{
	int num;

	num = iParam2 + (60 * iParam3) + (3600 * iParam4) + (86400 * iParam5);

	if (func_277(iParam0) == 1 && bParam7)
		return;

	if (bParam6)
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > num)
			return;

	if (bParam1 || bParam6 || func_120() != -1)
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;

	Global_17504.f_42[iParam0 /*8*/].f_4 = Global_17504.f_42[iParam0 /*8*/].f_4 + num;
	return;
}

int func_460(BOOL bParam0) // Position - 0x14AC2 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_356(&flag, -2147483648);
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

int func_461() // Position - 0x14B02 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_462(Ped pedParam0) // Position - 0x14B12 Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_120() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

BOOL func_463(Hash hParam0) // Position - 0x14B6B Hash - 0x82E4B908 ^0x3015C835
{
	if (hParam0 != 0)
		if (!STREAMING::HAS_MODEL_LOADED(hParam0))
			return false;

	return true;
}

int func_464(int iParam0) // Position - 0x14B88 Hash - 0xB05A3A35 ^0xB05A3A35
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

int func_465(int iParam0) // Position - 0x15059 Hash - 0x8AE2E06E ^0x8AE2E06E
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
			return 690;
	
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
			return &func_3;
	
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

BOOL func_466(int iParam0, int iParam1, var uParam2) // Position - 0x155CC Hash - 0x3B647C0A ^0x3B647C0A
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

Vector3 func_467(Ped pedParam0, var uParam1) // Position - 0x1740A Hash - 0xB0BFFF53 ^0x9AD2F52E
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

void func_468(var uParam0, BOOL bParam1) // Position - 0x174A0 Hash - 0xBA402171 ^0xBF5CA847
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_DEBUG_PINK"), *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
	
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_42("BEAT_GLB", 5500, false, true, 0, 0, -1, -1, 0);
		}
	
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}

	return;
}

BOOL func_469(int iParam0, int iParam1) // Position - 0x1750D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Volume func_470(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x1751C Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_307(vParam0))
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

	func_734(volume, bParam8);
	return volume;
}

void func_471(int iParam0) // Position - 0x175D6 Hash - 0xD881DF8C ^0xD881DF8C
{
	if (!func_260(iParam0))
		return;

	func_735(iParam0);
	return;
}

void func_472(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0x175F1 Hash - 0x912E4F98 ^0x969385B6
{
	if (iParam1 != 0)
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, iParam1.f_1, iParam1, iParam1.f_2);
	else if (iParam1.f_1 != -1)
		TASK::_0x19BC99C678FBA139(*uParam0, iParam1.f_1, iParam1.f_2);

	return;
}

int func_473(int iParam0) // Position - 0x1762A Hash - 0x4D5A23C7 ^0x6BC264F8
{
	if (func_112(iParam0, 2))
		return 200;

	if (func_112(iParam0, 4))
		return 70;

	if (func_112(iParam0, 32))
		return 400;

	return 110;
}

int func_474(int iParam0) // Position - 0x1766C Hash - 0x5571AD25 ^0x28C348FE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (func_81(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
			if (func_497() == 8)
				return 3;
	
		flag = func_81(iParam0, 2);
		flag2 = func_81(iParam0, 1);
		flag3 = flag && flag2;
	
		if (flag3)
			if (!func_290())
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

void func_475(var uParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x176E9 Hash - 0x69FD87A7 ^0xFA55EAB1
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

	if (func_112(iParam3, 2097152))
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

void func_476(var uParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x1774A Hash - 0x5B9E1B5D ^0x5B9E1B5D
{
	if (bParam4)
		*uParam1 = 240f;
	else
		*uParam1 = 215f;

	*uParam0 = 110f;

	if (func_112(iParam3, 2))
	{
		*uParam0 = *uParam0 + 60f;
		*uParam1 = *uParam1 + 60f;
		*uParam2 = BUILTIN::CEIL(*uParam0 + 110f);
	}
	else if (func_112(iParam3, 2097152))
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

BOOL func_477(int iParam0, int iParam1) // Position - 0x177D8 Hash - 0xF9A148C7 ^0x33F71210
{
	int num;
	int num2;
	int offset;

	num = func_465(iParam0) + iParam1;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17504.f_12[num2], offset);
}

BOOL func_478(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5) // Position - 0x17808 Hash - 0xC11DEB21 ^0xC11DEB21
{
	float num;

	if (_IS_NULL_VECTOR(vParam1))
		return false;

	if (func_481(iParam0, vParam1))
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

	if (func_106(iParam0))
		fParam4 = 40000f;

	if (num < fParam4 && num > fParam5)
		return true;
	else if (iParam0 == 42 || iParam0 == 110)
		return true;

	return false;
}

BOOL func_479(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x1788D Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

int func_480(var uParam0) // Position - 0x178E2 Hash - 0xB9E1544A ^0x15F341F8
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

BOOL func_481(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1794C Hash - 0xEFFA36C2 ^0xA1A519CB
{
	int num;

	if (!func_81(iParam0, 1))
		num = 1;

	if (func_736(uParam1, 0, 0, num))
		return true;

	if (func_81(iParam0, 33554432))
		if (func_737(uParam1, 200f, 1, 0))
			return true;

	return false;
}

BOOL func_482(int iParam0, var uParam1) // Position - 0x1799A Hash - 0x389075FF ^0x18787A41
{
	BOOL num;
	var groundZ;
	int num2;
	var unk;

	num = 1;

	if (func_112(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, uParam1->f_2 + 40f, &groundZ, false))
			return false;
	
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, uParam1->f_2 + 40f, 129, &groundZ, &num2, &unk))
			if (num2 == 1619704960)
				return false;
	}

	if (func_81(iParam0, 1) && !func_81(iParam0, 2))
		if (func_81(iParam0, 4096) || func_81(iParam0, 2048))
			if (func_738(*uParam1))
				num = 0;

	return num;
}

BOOL func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x17A40 Hash - 0x6E6B24DB ^0x6E6B24DB
{
	var unk;

	unk = func_1(&uParam0);

	if (!func_739())
		return false;

	return true;
}

BOOL func_484(var uParam0, var uParam1, var uParam2, Ped pedParam3) // Position - 0x17A5D Hash - 0xA4E464AC ^0x3D58FE5B
{
	var entityForwardVector;

	if (ENTITY::IS_ENTITY_DEAD(pedParam3))
		return false;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam3) };
	return func_740(entityForwardVector, uParam0) > func_740(entityForwardVector, ENTITY::GET_ENTITY_COORDS(pedParam3, true, false));
}

BOOL func_485(Volume volParam0) // Position - 0x17A99 Hash - 0x1D6344D9 ^0x1D6344D9
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == volParam0)
			return true;
	}

	return false;
}

int func_486(Volume volParam0) // Position - 0x17AC5 Hash - 0x67695E3A ^0xB4A144D5
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == volParam0)
			return Global_36581[Global_36602 /*2*/].f_1;
	}

	return 3;
}

BOOL func_487(int iParam0) // Position - 0x17AFA Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_218(iParam0))
		return false;

	if (!func_217(iParam0, 2))
		return false;

	return true;
}

Vector3 func_488(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Vector3 vParam4, var uParam5, var uParam6, BOOL bParam7) // Position - 0x17B20 Hash - 0x9F1BCC60 ^0xC6CA26EE
{
	if (bParam7)
		return vParam4;

	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vParam4);
}

float func_489(float fParam0, float fParam1, BOOL bParam2) // Position - 0x17B42 Hash - 0x286E3D53 ^0x286E3D53
{
	if (bParam2)
		return fParam1;

	return func_100(fParam0 + fParam1);
}

Ped func_490(ePedType eptParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x17B5D Hash - 0x47E48E23 ^0x9C690AB0
{
	Ped animal;

	if (bParam6)
		func_741(&vParam2, uParam1->f_22);

	if (!bParam7 && func_742(uParam1))
	{
		animal = PED::_CREATE_META_PED_OUTFIT_PED(uParam1->f_5, vParam2, fParam5, true, true, bParam9, bParam10);
	
		if (!ENTITY::DOES_ENTITY_EXIST(animal))
			animal = func_743(eptParam0, vParam2, fParam5, true, true, 0, true, bParam8, true, false, false, false, false);
		else if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam1->f_5))
			PED::_RELEASE_META_PED_OUTFIT_REQUEST(uParam1->f_5);
	}
	else
	{
		animal = func_743(eptParam0, vParam2, fParam5, true, true, 0, true, bParam8, true, false, false, false, false);
	}

	if (ENTITY::IS_ENTITY_DEAD(animal))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(animal, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(animal, true);
	
		if (uParam1->f_10)
			if (PED::IS_PED_HUMAN(animal))
				PED::_0x0FB1BA7FF73B41E1(animal, uParam1->f_4, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_744(animal))
			func_92(animal, &(uParam1->f_23), false);
	
		if (func_744(animal))
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(animal, 48, true);
		else
			PED::SET_PED_CONFIG_FLAG(animal, 307, true);
	
		if (func_745(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(animal, true);
			PED::SET_PED_TO_RAGDOLL(animal, 1000, 1000, 1, false, false, 0);
			PED::SET_PED_CONFIG_FLAG(animal, 186, !func_746(&(uParam1->f_22)));
			func_361(animal, func_747(&(uParam1->f_22)), false);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(animal);
		}
	
		if (func_748(&(uParam1->f_22)))
			ENTITY::FREEZE_ENTITY_POSITION(animal, true);
	
		if (func_749(&(uParam1->f_22)))
			func_750(animal, true);
	
		ENTITY::_SET_ENTITY_FADE_IN(animal);
		PED::SET_PED_CONFIG_FLAG(animal, 6, func_751(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(animal, 393, true);
	
		if (!func_15(uParam1->f_22, 8192))
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(animal, true);
	
		if (!func_744(animal))
		{
			func_753(animal, !func_752(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(animal, 4, func_754(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(animal, 297, !func_755(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(animal, 317, !func_755(&(uParam1->f_22)));
		
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(animal, uParam1->f_31);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(animal))
	{
		if (PED::IS_PED_HUMAN(animal))
		{
			DECORATOR::DECOR_SET_BOOL(animal, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(animal, "bBeatCriminal", *uParam1 == 22);
		}
	}

	return animal;
}

BOOL func_491(int iParam0, BOOL bParam1) // Position - 0x17DA0 Hash - 0x1B7BDACD ^0x1B7BDACD
{
	if (func_756(iParam0) != -1)
		return true;

	switch (iParam0)
	{
		case joaat("g_m_m_unicriminals_02"):
		case joaat("g_m_m_unicriminals_01"):
			return bParam1;
	
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("g_m_m_uniswamp_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_492(var uParam0) // Position - 0x17DF2 Hash - 0xAC57C5B9 ^0xAC57C5B9
{
	return func_15(*uParam0, 32);
}

int func_493(Ped pedParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x17E03 Hash - 0x32B863AB ^0xCE62541D
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	if (PED::GET_MOUNT(pedParam0) != pedParam1)
	{
		PED::SET_PED_ONTO_MOUNT(pedParam0, pedParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(pedParam1, bParam2);
	}

	return 1;
}

BOOL func_494(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x17E48 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

int func_495(int iParam0) // Position - 0x17E71 Hash - 0x9AB9F96F ^0x9AB9F96F
{
	int num;

	if (iParam0 == -1)
		num = func_609(true);
	else
		num = func_757(iParam0);

	return num;
}

void func_496(int iParam0, int iParam1) // Position - 0x17E93 Hash - 0xE9433ECB ^0xE9433ECB
{
	int num;
	int num2;
	int num3;

	if (iParam1 != 0)
	{
		num = func_758(iParam1);
		num2 = 17 + num;
		num3 = func_759(iParam0, num2);
	
		if (num3 < 0)
			return;
	
		Global_17504.f_2205[num3 /*2*/] = Global_17504.f_2205[num3 /*2*/] + 1;
	}

	return;
}

int func_497() // Position - 0x17ED9 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_498(int iParam0, int iParam1) // Position - 0x17EE7 Hash - 0x15F195C0 ^0x37AF2A09
{
	int num;

	if (iParam1 != -1 && !func_112(iParam0, 8192))
	{
		num = func_759(iParam0, iParam1);
	
		if (num < 0)
			return;
	
		Global_17504.f_2205[num /*2*/] = Global_17504.f_2205[num /*2*/] + 1;
	}

	return;
}

void func_499(int iParam0, int iParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17F2E Hash - 0x191FF204 ^0x191FF204
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

	func_459(iParam0, bParam3, BUILTIN::ROUND(num * fParam2), BUILTIN::ROUND(num2 * fParam2), BUILTIN::ROUND(num3 * fParam2), BUILTIN::ROUND(num4 * fParam2), bParam4, true);
	return;
}

void func_500(int iParam0, BOOL bParam1) // Position - 0x180E6 Hash - 0xB8C09A38 ^0xD807977
{
	int num;

	num = 1;

	if (bParam1)
		num = 3;

	if (func_81(iParam0, 262144))
		if (Global_1392135.f_3 == -1)
			func_760(262144, num, 0, true);

	if (func_81(iParam0, 128))
		func_760(128, num, 0, true);
	else if (func_81(iParam0, 524288))
		func_760(524288, num, 0, true);
	else if (func_81(iParam0, 536870912))
		func_760(536870912, num, 0, true);
	else if (func_81(iParam0, 4194304))
		func_760(4194304, num, 0, true);
	else if (func_81(iParam0, 8388608))
		func_760(8388608, num, 0, true);

	return;
}

void func_501(int iParam0) // Position - 0x181A3 Hash - 0x35E7E2B5 ^0x4442269A
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
	return;
}

int func_502(BOOL bParam0) // Position - 0x181BF Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_761(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

int func_503() // Position - 0x181EC Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_504(int iParam0) // Position - 0x181FB Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_260(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_505(int iParam0) // Position - 0x1821B Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_260(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_762(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_506(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x18284 Hash - 0xB8B96884 ^0x900FE21
{
	int value;

	func_763(&Global_1393447, 1);
	func_764();
	func_765();
	func_766(BUILTIN::TO_FLOAT(200) / 3f);

	if (iParam0 != 8)
	{
		Global_1392135.f_54 = func_332() / 1000;
	
		if (Global_1392135.f_1 & 4 != 0)
			Global_1392135.f_1 = Global_1392135.f_1 - Global_1392135.f_1 & 4;
	
		func_767();
	
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_760(16777216, 2, 0, true);
				value = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_760(16777216, 0, 0, true);
				value = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_760(16777216, 5, 0, true);
				value = BUILTIN::FLOOR(900f);
			}
		
			Global_1392135.f_4 = Global_1392135.f_54 + value;
		}
		else
		{
			func_768(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = Global_1392135.f_54 + iParam2 + (iParam3 * 60) + (iParam4 * 3600);
		}
	
		func_769(BUILTIN::TO_FLOAT(value), true, false);
	}
	else
	{
		func_769(BUILTIN::TO_FLOAT(200) / 3f, true, false);
	}

	return;
}

BOOL func_507(BOOL bParam0, int iParam1) // Position - 0x183AB Hash - 0xBAC14BAA ^0xBAC14BAA
{
	return Global_40.f_9571[iParam1 /*10*/] && bParam0 != false;
}

void func_508(int iParam0, int iParam1) // Position - 0x183C2 Hash - 0x68C00EA5 ^0x4607FFAD
{
	Global_1392050[iParam1 /*14*/].f_1 = Global_1392050[iParam1 /*14*/].f_1 - Global_1392050[iParam1 /*14*/].f_1 && iParam0;
	return;
}

void func_509(BOOL bParam0, int iParam1) // Position - 0x183EC Hash - 0x5413482E ^0x5413482E
{
	Global_40.f_9571[iParam1 /*10*/] = Global_40.f_9571[iParam1 /*10*/] || bParam0;
	return;
}

int func_510(int iParam0) // Position - 0x1840B Hash - 0xD3B1E9F ^0x62D04092
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

BOOL func_511(Hash hParam0) // Position - 0x1847A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_512() // Position - 0x18495 Hash - 0xD633F8EC ^0x62F958FD
{
	return Global_1935630.f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE();
}

BOOL func_513(var uParam0, float fParam1, float fParam2, int iParam3) // Position - 0x184B2 Hash - 0xFF2AE664 ^0x8523ACBA
{
	if (fParam1 > fParam2)
		return false;

	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
		return false;

	return true;
}

BOOL func_514(var uParam0, float fParam1, float fParam2, int iParam3) // Position - 0x184D7 Hash - 0x4CB19BDC ^0x782951FA
{
	if (func_513(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
			uParam0->f_8 = func_104() - 0.02f;
	
		return true;
	}

	uParam0->f_8 = 0f;
	return false;
}

BOOL func_515(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x18512 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_516(int iParam0) // Position - 0x185B0 Hash - 0x5000025C ^0x5000025C
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

BOOL func_517(int iParam0) // Position - 0x185E9 Hash - 0x5000025C ^0x5000025C
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

BOOL func_518(int iParam0) // Position - 0x1862E Hash - 0x5000025C ^0x5000025C
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

BOOL func_519(int iParam0) // Position - 0x18661 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("Fog"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_520(int iParam0) // Position - 0x1867C Hash - 0x5000025C ^0x5000025C
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

BOOL func_521(int iParam0) // Position - 0x186A3 Hash - 0x5000025C ^0x5000025C
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

BOOL func_522(int iParam0) // Position - 0x186C4 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("sandstorm"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_523(BOOL bParam0, var uParam1, var uParam2) // Position - 0x186DF Hash - 0x2A9340EF ^0xAD765E32
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

BOOL func_524() // Position - 0x187A6 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_525(int iParam0) // Position - 0x187F9 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_528(iParam0))
		return -1;

	return func_771(func_770(iParam0));
}

BOOL func_526(int iParam0) // Position - 0x18819 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_527(int iParam0, int iParam1) // Position - 0x1882F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_528(int iParam0) // Position - 0x1883E Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_529(int iParam0) // Position - 0x18871 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_530(int iParam0) // Position - 0x18885 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_81(iParam0, Global_1310750.f_16072 | 64);
}

int func_531(Interior inParam0) // Position - 0x1889D Hash - 0xE90CFCF7 ^0xD86E30BD
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

int func_532(Interior inParam0) // Position - 0x188F8 Hash - 0xE90CFCF7 ^0xD86E30BD
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

BOOL func_533(int iParam0) // Position - 0x18977 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_534(var uParam0, float fParam1) // Position - 0x1898D Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_25(uParam0))
		return false;

	if (func_27(uParam0) > fParam1)
		return true;

	return false;
}

void func_535(var uParam0) // Position - 0x189B4 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_536(int iParam0) // Position - 0x189CA Hash - 0xF7D08AFF ^0x65644DC
{
	return Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40)) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0;
}

void func_537(int iParam0) // Position - 0x18A05 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_772();

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
			func_773(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_538(int iParam0) // Position - 0x18B71 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_539(int iParam0) // Position - 0x18B84 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_120() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_774(iParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_774(iParam0);

	if (ped == 0)
		return false;

	if (func_566(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	iParam0->f_14 = ped;
	return true;
}

void func_540(int iParam0) // Position - 0x18C1E Hash - 0x256C27DD ^0x256C27DD
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
		func_775(iParam0);

	return;
}

BOOL func_541(Ped pedParam0, int iParam1, Ped pedParam2) // Position - 0x18C45 Hash - 0x7FBD27D8 ^0x4C0BB7C4
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
		num2 = func_566(pedParam2);
	else
		num2 = func_565(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_566(pedParam0);
	else
		num = func_565(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_3(*iParam1, 8388608))
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

float func_542(Ped pedParam0, Ped pedParam1) // Position - 0x18D3E Hash - 0xF9959663 ^0xF9959663
{
	return func_152(pedParam0, pedParam1, true, true);
}

float func_543(int iParam0) // Position - 0x18D50 Hash - 0xD73B9827 ^0xDE12990D
{
	return iParam0->f_26;
}

BOOL func_544(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18D5C Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_545(int iParam0, BOOL bParam1) // Position - 0x18DC1 Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_111(iParam0, 134217728);
	else
		func_207(iParam0, 134217728);

	return;
}

BOOL func_546(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x18DE7 Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_152(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_776(ped, 0)))
			if (func_777(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_547(int iParam0) // Position - 0x18F47 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return iParam0->f_17;
}

BOOL func_548(int iParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x18F53 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (iParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_3(*iParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*iParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_549(int iParam0) // Position - 0x18FB4 Hash - 0xD73B9827 ^0x372EC0B
{
	return iParam0->f_18;
}

BOOL func_550(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x18FC0 Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_776(ped, 0)))
			if (func_778(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_551(int iParam0) // Position - 0x19082 Hash - 0xD73B9827 ^0x9F7F0764
{
	return iParam0->f_23;
}

int func_552(int iParam0) // Position - 0x1908E Hash - 0xD73B9827 ^0x303D0BA3
{
	return iParam0->f_21;
}

int func_553(int iParam0) // Position - 0x1909A Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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

	if (*iParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_554(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x191D7 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_779(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_555(Ped pedParam0) // Position - 0x1921A Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_780(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_556(Ped pedParam0) // Position - 0x19280 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_557(int iParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x192AC Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_297(pedParam1))
			return false;

	num = 5f;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_558(int iParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x192F3 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_297(pedParam1))
			return false;

	num = 10f;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_559(int iParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x1933E Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_297(pedParam1))
		return false;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_560(Ped pedParam0, var uParam1) // Position - 0x193B7 Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_561(Ped pedParam0, Ped pedParam1) // Position - 0x19404 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_781(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_562(int iParam0) // Position - 0x1944C Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*iParam0 & 2 != 0);
}

BOOL func_563(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1945C Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_178(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_564(int iParam0) // Position - 0x19488 Hash - 0xD73B9827 ^0x4905FA06
{
	return iParam0->f_24;
}

int func_565(Ped pedParam0) // Position - 0x19494 Hash - 0xEB445B10 ^0xF7A3A318
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_566(Ped pedParam0) // Position - 0x194EC Hash - 0x6E063231 ^0x92DCEFB4
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_567(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x1955C Hash - 0x89708384 ^0x6760E23F
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
			if (func_560(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_152(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_152(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_568(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x196CC Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_523(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_569(iParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_569(iParam1, ped2))
					if (func_178(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_569(int iParam0, Ped pedParam1) // Position - 0x197BA Hash - 0x27FC2906 ^0xE14D2AE8
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

int func_570(int iParam0) // Position - 0x19830 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return iParam0->f_20;
}

BOOL func_571(Ped pedParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1983C Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (iParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = iParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

int func_572() // Position - 0x198B7 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

BOOL func_573(int iParam0) // Position - 0x198C7 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_574(int iParam0) // Position - 0x198DA Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_575(int iParam0, BOOL bParam1) // Position - 0x19904 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_782(bParam1);

	return;
}

void func_576(Hash hParam0) // Position - 0x1991F Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_577(int iParam0) // Position - 0x19932 Hash - 0x8FB6A40C ^0xAC20D20F
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

BOOL func_578(var uParam0) // Position - 0x19A53 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_783(23, &unk))
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

BOOL func_579(int iParam0, var uParam1, var uParam2) // Position - 0x19A9B Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_783(23, &unk))
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

Hash func_580(Hash hParam0) // Position - 0x19B1B Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_581(Hash hParam0) // Position - 0x19B25 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_411(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

int func_582() // Position - 0x19B50 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_342();

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

void func_583(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x19B9F Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_584(int iParam0) // Position - 0x19BD0 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_585() // Position - 0x19BEF Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_586(int iParam0, var uParam1, var uParam2) // Position - 0x19C0E Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_584(iParam0))
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

BOOL func_587(Ped pedParam0, Any* panParam1) // Position - 0x19DDD Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_588(int iParam0, BOOL bParam1) // Position - 0x19DED Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_784(iParam0))
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

void func_589() // Position - 0x19E1E Hash - 0x489F6F3D ^0x8585030A
{
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Window_Idle");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Reward_Avg");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_Reward_Good");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_145.f_1, "PBL_GET_THE_LAW");
	return;
}

void func_590(int* piParam0, var uParam1, BOOL bParam2) // Position - 0x19E5A Hash - 0x6F91FC09 ^0xBA0ABE9A
{
	if (piParam0->f_3 > -1 && piParam0->f_3 < *uParam1)
	{
		func_209(&(uParam1->[piParam0->f_3 /*17*/].f_6), true, true);
	
		if (bParam2)
			func_373(piParam0, 0);
	}

	return;
}

void func_591(var uParam0) // Position - 0x19E94 Hash - 0x9DBECFB8 ^0xE52A4E97
{
	if (*uParam0 & 1 != 0)
		*uParam0 = *uParam0 | 64 | 16 | 16777216;

	return;
}

int func_592(var uParam0, int* piParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, BOOL bParam8, Volume volParam9, int iParam10, int iParam11, int iParam12) // Position - 0x19EB7 Hash - 0x66907D63 ^0x41228033
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
		func_591(&bParam8);
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
			func_26(&(piParam1->f_13));
	
		if (func_785(*uParam0, piParam1, uParam3))
			return -1;
	
		switch (piParam1->f_2)
		{
			case 0:
				if (flag2)
				{
					if (func_786(uParam0, piParam1, uParam3, fParam2, bParam8, sParam7, iParam11, num2))
					{
						piParam1->f_1 = -1;
						piParam1->f_2 = 1;
						return func_592(uParam0, piParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, iParam12);
					}
				}
				break;
		
			case 1:
				if (!flag2 || !(num2 <= fParam2 + 5f))
				{
					func_787(uParam0);
					piParam1->f_2 = 0;
					return -1;
				}
			
				if (!(bParam8 & 33554432 != 0))
					if (bParam8 & 18 != 0)
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
							func_788(*uParam0, true, true);
					else if (func_789(piParam1, 22))
						func_788(*uParam0, false, true);
			
				if (func_790(uParam0, bParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_791(uParam0, true, piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4);
					func_792(bParam8);
				
					if (func_793(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, false))
					{
						if (piParam1->f_2 != 2 && piParam1->f_2 != 3)
						{
							if (piParam1->f_1 > -1 && piParam1->f_1 < *uParam3)
								if (MISC::IS_BIT_SET(uParam3->[piParam1->f_1 /*17*/], 20))
									func_794(uParam3);
						
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
					func_795(piParam1, uParam3, num2);
				
					if (func_796(*uParam0, piParam1, uParam3))
						return piParam1->f_1;
				
					if (MISC::IS_BIT_SET(*piParam1, 1))
					{
						func_52(uParam3, 0, false, true, true);
						MISC::CLEAR_BIT(piParam1, 1);
					}
				}
				break;
		
			case 2:
				if (func_790(uParam0, bParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_798(*uParam0, piParam1, uParam3, fParam2, iParam5, iParam6, iParam10, flag3);
					func_793(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, true);
					func_791(uParam0, func_790(uParam0, bParam8, volParam9, false), piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4);
					func_792(bParam8);
				}
				else if (MISC::IS_BIT_SET(*piParam1, 1))
				{
					if (!flag4)
						func_52(uParam3, 0, false, true, true);
				
					func_799(piParam1, 1);
				}
			
				func_795(piParam1, uParam3, num2);
			
				if (func_797(uParam0, piParam1, fParam4, flag6))
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
				if (func_797(uParam0, piParam1, fParam4, flag6))
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
			func_368(piParam1, uParam3);
			MISC::SET_BIT(piParam1, 3);
		}
	}

	return -1;
}

void func_593(int* piParam0, var uParam1, var uParam2) // Position - 0x1A2FB Hash - 0xDBBC4BAB ^0x6BF91575
{
	int num;
	const char* str;
	int num2;

	num = func_800(piParam0);

	if (num != -1)
	{
		str = uParam1->[num /*17*/].f_13;
		num2 = uParam1->[num /*17*/].f_15;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
			func_36(Global_35, *uParam2, str, "", -1082130432, num2, false, 0, 1, true, true, 291934926, true, false, 0);
	}

	return;
}

BOOL func_594(int iParam0) // Position - 0x1A352 Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_120() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_595(int iParam0, BOOL bParam1) // Position - 0x1A397 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_801(iParam0, &num, &num2);

	if (!func_802(iParam0, num, num2, bParam1))
		return;

	func_803(num, num2);
	return;
}

BOOL func_596(int iParam0) // Position - 0x1A3C4 Hash - 0xC8BD200F ^0xC8BD200F
{
	if (iParam0 > -1 && iParam0 < 38)
		return true;

	return false;
}

BOOL func_597(int* piParam0, int iParam1) // Position - 0x1A3E2 Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

void func_598(int* piParam0, int iParam1) // Position - 0x1A3F3 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

int func_599(int iParam0, int iParam1) // Position - 0x1A403 Hash - 0x6553AF7 ^0xD4E9B96B
{
	int num;

	num = func_604(iParam0, iParam1);

	if (num != -1)
		return Global_17504.f_1003[num /*6*/].f_1;

	return 0;
}

BOOL func_600(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A42B Hash - 0xF608DF72 ^0xE590CA68
{
	if (!bParam1 || func_195(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
				return true;
		
			if (func_804(uParam0->f_6, bParam1))
				return true;
		}
	}

	return false;
}

BOOL func_601(int iParam0) // Position - 0x1A46E Hash - 0x90A8253B ^0x90A8253B
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 16384:
		case 131072:
			return true;
	
		case 32:
		case 64:
		case 512:
		case 4096:
		case 8192:
		case 32768:
		case 65536:
		case 262144:
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_602(BOOL bParam0) // Position - 0x1A4F9 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

BOOL func_603(var uParam0, float fParam1) // Position - 0x1A507 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_534(uParam0, fParam1))
	{
		func_535(uParam0);
		return true;
	}

	return false;
}

int func_604(int iParam0, int iParam1) // Position - 0x1A525 Hash - 0xEE99B1EA ^0xEE99B1EA
{
	int i;
	int num;

	num = func_805(iParam0, iParam1);

	for (i = 0; i < Global_17504.f_1003; i = i + 1)
	{
		if (Global_17504.f_1003[i /*6*/] == num)
			return i;
	}

	return -1;
}

void func_605(int iParam0, int iParam1, Hash hParam2) // Position - 0x1A563 Hash - 0xB458AB6F ^0x6F0FA395
{
	int num;

	num = func_806(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_3 = hParam2;
	return;
}

int func_606(Entity eParam0) // Position - 0x1A583 Hash - 0xE168A08C ^0xB9C577AC
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	num = ENTITY::GET_ENTITY_MODEL(eParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	PED::_0xCB1A3864C524F784(eParam0, num);
	return num;
}

void func_607(int iParam0, int iParam1, int iParam2) // Position - 0x1A5B0 Hash - 0xB458AB6F ^0xE3BF6241
{
	int num;

	num = func_806(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_2 = iParam2;
	return;
}

void func_608(int iParam0, int iParam1, int iParam2) // Position - 0x1A5D0 Hash - 0xB458AB6F ^0xD4DBC17E
{
	int num;

	num = func_806(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_1 = iParam2;
	return;
}

int func_609(BOOL bParam0) // Position - 0x1A5F0 Hash - 0xDFBCBF0F ^0xDFBCBF0F
{
	int num;

	if (bParam0)
		num = func_807(1, false, false);
	else
		num = func_2();

	return func_757(num);
}

void func_610(int iParam0, int iParam1, int iParam2) // Position - 0x1A615 Hash - 0xB458AB6F ^0x77FE2C80
{
	int num;

	num = func_806(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_4 = iParam2;
	return;
}

void func_611(int iParam0, int iParam1, int iParam2) // Position - 0x1A635 Hash - 0xB458AB6F ^0xEDF56BCB
{
	int num;

	num = func_806(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_5 = iParam2;
	return;
}

BOOL func_612(Ped pedParam0, var uParam1) // Position - 0x1A655 Hash - 0xDC7D3FF5 ^0xDC7D3FF5
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (pedParam0 == uParam1->[i])
			return true;
	}

	return false;
}

BOOL func_613() // Position - 0x1A681 Hash - 0xF05F1909 ^0x861DB105
{
	if (func_58(uLocal_98[0], 0, true))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_98[0], uLocal_136[0 /*2*/], "window_idle_barman", 1))
			return true;

	return false;
}

BOOL func_614() // Position - 0x1A6B2 Hash - 0x6C4E12F6 ^0xAB96C8B8
{
	Ped meleeTar;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		meleeTar = PED::GET_MELEE_TARGET_FOR_PED(Global_35);
	
		if (meleeTar != 0 && meleeTar != uLocal_98[0] && meleeTar != uLocal_98[1])
			if (func_612(meleeTar, &uLocal_98))
				return true;
	}

	return false;
}

int func_615() // Position - 0x1A703 Hash - 0xD322882D ^0xC8017C9C
{
	if (func_15(iLocal_34, 4096))
	{
		return 1;
	}
	else if (func_29(Global_35, volLocal_120, true, 0))
	{
		func_17(&iLocal_34, 4096);
		return 1;
	}

	return 0;
}

Ped func_616(int iParam0) // Position - 0x1A73A Hash - 0xE75AA4C0 ^0xE75AA4C0
{
	int i;

	for (i = 0; i < 16; i = i + 1)
	{
		if (i >= 2)
			if (func_58(uLocal_98[i], 0, true))
				if (func_152(uLocal_98[i], Global_35, false, true) <= iParam0)
					return uLocal_98[i];
	}

	return 0;
}

void func_617(Ped pedParam0, Volume volParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1A789 Hash - 0xC9F6E1EF ^0x636693AA
{
	if (func_58(pedParam0, 0, true) && VOLUME::DOES_VOLUME_EXIST(volParam1))
		TASK::TASK_WANDER_IN_VOLUME(pedParam0, volParam1, iParam2, iParam3, iParam4);

	return;
}

BOOL func_618(Ped pedParam0) // Position - 0x1A7B5 Hash - 0x402FAEB7 ^0x688C9962
{
	if (!func_15(iLocal_35, 8))
	{
		if (func_29(Global_35, uLocal_122[0], true, 0) && CAM::IS_SPHERE_VISIBLE(uLocal_358[2 /*32*/].f_6, 3f) || func_178(Global_35, uLocal_161.f_51, true) >= 2f)
		{
			func_808(pedParam0, true, 2792.425f, -1167.9894f, 46.91565f);
			func_17(&iLocal_35, 8);
			func_809(&uLocal_1262);
			func_114(&(uLocal_161.f_121));
		}
	}
	else if (func_58(pedParam0, 0, true))
	{
		if (func_178(pedParam0, 2792.425f, -1167.9894f, 46.91565f, true) < 1f)
			return true;
	}

	return false;
}

BOOL func_619(Ped pedParam0) // Position - 0x1A85F Hash - 0xAE3C2D16 ^0xA7455CD
{
	switch (iLocal_1223)
	{
		case 0:
			func_810(ansLocal_153, "pbl_Rat");
			iLocal_1223 = iLocal_1223 + 1;
			break;
	
		case 1:
			if (func_811(ansLocal_153, "pbl_Rat"))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_98[3], 2792.1226f, -1166.4628f, 47.97344f, true, false, true, true);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_153, "pbl_Rat", true);
				ANIMSCENE::START_ANIM_SCENE(ansLocal_153);
				iLocal_1223 = iLocal_1223 + 1;
			}
			break;
	
		case 2:
			if (func_29(Global_35, uLocal_122[0], true, 0) && func_15(iLocal_35, 8) && !ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (!func_25(&uLocal_1241))
				{
					func_26(&uLocal_1241);
				}
				else if (func_27(&uLocal_1241) > 1f || func_152(Global_35, pedParam0, true, true) < 3f || func_546(pedParam0, true, true, true, 0, false))
				{
					func_26(&uLocal_1241);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153, "bool_intro", true, false);
					iLocal_1223 = iLocal_1223 + 1;
				}
			}
			break;
	
		case 3:
			if (func_29(Global_35, uLocal_122[0], true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_153, "s_P3_Eat", true))
				{
					if (func_27(&uLocal_1241) > 10f || func_152(Global_35, pedParam0, true, true) < 3f || func_27(&uLocal_1241) > 3f && func_546(pedParam0, true, true, true, 0, false))
					{
						func_26(&uLocal_1241);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153, "bool_middle", true, false);
						iLocal_1223 = iLocal_1223 + 1;
					}
				}
			}
			break;
	
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_153, "s_P5_Eat", true))
			{
				func_17(&iLocal_35, 2);
				iLocal_1223 = iLocal_1223 + 1;
			}
			break;
	
		case 5:
			if (func_625(pedParam0, 1073741824))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam0, ansLocal_153))
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_153, "A_C_RAT_01", pedParam0);
			
				iLocal_1223 = iLocal_1223 + 1;
				return true;
			}
			break;
	
		case 6:
			return true;
	}

	return false;
}

void func_620(Ped pedParam0, Volume volParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AA68 Hash - 0xEF921894 ^0x49514371
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(pedParam0, bParam3);
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(pedParam0, volParam1, bParam2, bParam3, false);
	}

	return;
}

BOOL func_621(Ped pedParam0) // Position - 0x1AA8F Hash - 0xC4BE0409 ^0xE8EDB754
{
	switch (iLocal_1224)
	{
		case 0:
			func_810(ansLocal_153.f_1, "pblWindowAction1");
			iLocal_1224 = iLocal_1224 + 1;
			break;
	
		case 1:
			if (func_811(ansLocal_153.f_1, "pblWindowAction1"))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_153.f_1, "pblWindowAction1", true);
				ANIMSCENE::START_ANIM_SCENE(ansLocal_153.f_1);
				iLocal_1224 = iLocal_1224 + 1;
			}
			break;
	
		case 2:
			if (func_29(Global_35, uLocal_122[0], true, 0) && func_15(iLocal_35, 8) && !ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (func_152(Global_35, pedParam0, true, true) < 3f || func_546(pedParam0, true, true, true, 0, false))
				{
					func_26(&uLocal_1244);
					fLocal_1217 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_1, "breakoutLoop1", true, false);
					iLocal_1224 = iLocal_1224 + 1;
				}
			}
			break;
	
		case 3:
			if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_153.f_1, "loop2", true))
				{
					if (func_625(pedParam0, 0.5f))
					{
						func_26(&uLocal_1244);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_1, "breakoutLoop2", true, false);
					
						if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam0, ansLocal_153))
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_153, "A_C_RAT_01", pedParam0);
					
						iLocal_1224 = 5;
					}
					else if (func_27(&uLocal_1244) > fLocal_1217)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_1, "breakoutLoop1", false, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_1, "breakoutLoop2", true, false);
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_153.f_1, "pblWindowAction2", true);
						func_26(&uLocal_1244);
						fLocal_1217 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f);
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_153.f_1, "pblWindowAction1");
						iLocal_1224 = iLocal_1224 + 1;
					}
				}
			}
			break;
	
		case 4:
			if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_153.f_1, "loop2", true) || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ANY, true) != 1)
				{
					if (func_625(pedParam0, 0.75f))
					{
						func_26(&uLocal_1244);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_1, "breakoutLoop1", true, false);
					
						if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam0, ansLocal_153))
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_153, "A_C_RAT_01", pedParam0);
					
						TASK::TASK_GO_STRAIGHT_TO_COORD(pedParam0, 2795.7722f, -1164.1003f, 46.92804f, 2f, 20000, 1193033728, 1056964608, 0);
						iLocal_1224 = 5;
					}
				}
			}
			break;
	
		case 5:
			return true;
	}

	return false;
}

BOOL func_622(Ped pedParam0) // Position - 0x1ACDE Hash - 0xC4BE0409 ^0x7FCE593E
{
	switch (iLocal_1225)
	{
		case 0:
			func_810(ansLocal_153.f_2, "pblAll");
			iLocal_1225 = iLocal_1225 + 1;
			break;
	
		case 1:
			if (func_811(ansLocal_153.f_2, "pblAll"))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_153.f_2, "pblAll", true);
				ANIMSCENE::START_ANIM_SCENE(ansLocal_153.f_2);
				iLocal_1225 = iLocal_1225 + 1;
			}
			break;
	
		case 2:
			if (func_29(Global_35, uLocal_122[0], true, 0) && func_15(iLocal_35, 8) && !ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (!func_25(&uLocal_1247))
				{
					func_26(&uLocal_1247);
				}
				else if (func_27(&uLocal_1247) > 1f || func_152(Global_35, pedParam0, true, true) < 3f || func_546(pedParam0, true, true, true, 0, false))
				{
					func_26(&uLocal_1247);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_2, "breakoutLoop1", true, false);
					iLocal_1225 = iLocal_1225 + 1;
				}
			}
			break;
	
		case 3:
			if (func_29(Global_35, uLocal_122[0], true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_153.f_2, "ledgeLoop2", true))
				{
					if (func_625(pedParam0, 1073741824) || func_546(pedParam0, true, true, true, 0, false))
					{
						func_26(&uLocal_1247);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_153.f_2, "breakoutLoop2", true, false);
						iLocal_1225 = iLocal_1225 + 1;
					}
				}
			}
			break;
	
		case 4:
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam0, ansLocal_153.f_2))
			{
				if (func_58(pedParam0, 0, true))
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(pedParam0, eLocal_1342, true);
			
				if (func_812(2797.275f, -1169.0425f, 46.92398f, true) > 1.5f)
					TASK::TASK_GO_STRAIGHT_TO_COORD(pedParam0, 2797.275f, -1169.0425f, 46.92398f, 2f, 20000, 1193033728, 1056964608, 0);
				else
					TASK::TASK_GO_STRAIGHT_TO_COORD(pedParam0, 2795.733f, -1166.9276f, 46.924f, 2f, 20000, 1193033728, 1056964608, 0);
			
				iLocal_1225 = iLocal_1225 + 1;
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_153.f_2) > 0.9f)
			{
				if (!func_15(iLocal_35, 512) && func_58(pedParam0, 0, true))
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(pedParam0, eLocal_1342, true);
			}
			break;
	
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ANY, true) != 1)
			{
				iLocal_1225 = iLocal_1225 + 1;
				return true;
			}
			break;
	
		case 6:
			return true;
	}

	return false;
}

BOOL func_623(Ped pedParam0) // Position - 0x1AF52 Hash - 0x35F75157 ^0xD862E2D5
{
	if (func_29(pedParam0, uLocal_122[3], true, 0) || !func_29(pedParam0, volLocal_120, true, 0))
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ANY, true) != 1 || func_625(pedParam0, 1073741824))
		return true;

	return true;
}

void func_624(Ped pedParam0, int iParam1) // Position - 0x1AFA6 Hash - 0x34CF3C9E ^0x5253E7A
{
	if (func_25(&uLocal_933))
	{
		if (func_27(&uLocal_933) > 10f && !func_623(pedParam0))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(2792.515f, -1167.56f, 46.9323f, 0.5f))
				{
					ENTITY::SET_ENTITY_COORDS(pedParam0, 2792.515f, -1167.56f, 46.9323f, true, false, true, true);
					func_26(&uLocal_933);
				}
				else if (!CAM::IS_SPHERE_VISIBLE(2803.3887f, -1164.7474f, 46.924f, 0.5f))
				{
					ENTITY::SET_ENTITY_COORDS(pedParam0, 2803.3887f, -1164.7474f, 46.924f, true, false, true, true);
					func_26(&uLocal_933);
				}
			}
		}
	}

	return;
}

BOOL func_625(Ped pedParam0, int iParam1) // Position - 0x1B058 Hash - 0x46625AC5 ^0x7D3F72A8
{
	if (VOLUME::DOES_VOLUME_EXIST(uLocal_122[3]))
		if (func_29(pedParam0, uLocal_122[3], true, 0))
			return false;

	if (func_152(Global_35, pedParam0, true, true) < iParam1 || PED::IS_EVENT_IN_QUEUE(pedParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")) || Global_1935630.f_25 && func_777(pedParam0, 1050253722, 1060320051, 0, 1061158912) && !ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
		return true;

	return false;
}

BOOL func_626() // Position - 0x1B0DA Hash - 0x23C3BABC ^0x23C3BABC
{
	if (func_29(Global_35, uLocal_122[0], true, 0))
	{
		if (!func_25(&uLocal_1250))
			func_26(&uLocal_1250);
	
		if (func_27(&uLocal_1250) > fLocal_1215)
			if (CAM::IS_SPHERE_VISIBLE(2797.9666f, -1169.832f, 46.924f, 1f))
				return true;
	}

	return false;
}

void func_627(Ped pedParam0, Volume volParam1) // Position - 0x1B12F Hash - 0x5EEC91EA ^0x9CF80A1B
{
	var taskSequenceId;
	int randomIntInRange;

	ENTITY::FREEZE_ENTITY_POSITION(pedParam0, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, 2798.641f, -1170.2449f, 46.92616f, 71.7293f, true, false, true);
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(2798.0603f, -1169.8945f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2797.5579f, -1169.4639f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2796.951f, -1169.2123f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2796.873f, -1169.0891f, 46.924f);

	if (VOLUME::DOES_VOLUME_EXIST(volParam1))
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	
		if (volParam1 == uLocal_122[0])
		{
			if (randomIntInRange % 3 == 0)
			{
				TASK::TASK_EXTEND_ROUTE(2792.5833f, -1170.9258f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2790.4202f, -1170.1002f, 46.924f);
			}
			else if (randomIntInRange % 3 == 1)
			{
				TASK::TASK_EXTEND_ROUTE(2795.596f, -1167.3223f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2793.38f, -1166.1147f, 46.9323f);
			}
			else
			{
				TASK::TASK_EXTEND_ROUTE(2794.16f, -1169.1915f, 46.924f);
			}
		}
		else if (volParam1 == uLocal_122[1])
		{
			if (randomIntInRange % 3 == 0)
			{
				TASK::TASK_EXTEND_ROUTE(2797.1099f, -1166.5435f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.7698f, -1165.3472f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2794.9287f, -1164.0925f, 46.924f);
			}
			else if (randomIntInRange % 3 == 1)
			{
				TASK::TASK_EXTEND_ROUTE(2797.1099f, -1166.5435f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.7698f, -1165.3472f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2795.6455f, -1164.2931f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.4705f, -1162.0261f, 46.924f);
			}
			else if (randomIntInRange % 3 == 2)
			{
				TASK::TASK_EXTEND_ROUTE(2797.5293f, -1166.8693f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.8752f, -1163.5024f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.1497f, -1162.5647f, 46.924f);
			}
			else
			{
				TASK::TASK_EXTEND_ROUTE(2797.5293f, -1166.8693f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2798.3562f, -1166.6509f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.4138f, -1167.2653f, 46.924f);
			}
		}
		else if (volParam1 == uLocal_122[2])
		{
			TASK::TASK_EXTEND_ROUTE(2797.5293f, -1166.8693f, 46.924f);
			TASK::TASK_EXTEND_ROUTE(2798.3562f, -1166.6509f, 46.924f);
			TASK::TASK_EXTEND_ROUTE(2801.381f, -1167.2462f, 46.924f);
		
			if (func_390())
				TASK::TASK_EXTEND_ROUTE(2803.236f, -1164.6722f, 46.924f);
		}
	
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 1.5f, 0, 1f, 1f, 1193033728);
		func_620(pedParam0, volParam1, false, false);
	}
	else
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 1.5f, 0, 1f, 1f, 1193033728);
		func_620(pedParam0, volLocal_120, false, false);
	}

	func_128(pedParam0, &taskSequenceId, 0, 0, true, true);

	if (iLocal_1226 < 2)
		fLocal_1215 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.6f);
	else
		fLocal_1215 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);

	iLocal_1226 = iLocal_1226 + 1;
	func_26(&uLocal_1250);
	return;
}

void func_628(Ped pedParam0, Volume volParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1B44E Hash - 0x72D0EABA ^0x5D2A6B20
{
	var taskSequenceId;

	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);

	if (_IS_NULL_VECTOR(vParam2))
		if (func_390())
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 5f, -1, 0, 2.5f, 0);
		else
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 5f, -1, 0, 1.75f, 0);
	else
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, 1f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f), 524288, 1193033728);

	TASK::TASK_WANDER_IN_VOLUME(0, volParam1, iParam5, iParam6, iParam7);
	func_128(pedParam0, &taskSequenceId, 0.1f, 5f, true, true);
	return;
}

BOOL func_629(Hash hParam0, int iParam1) // Position - 0x1B4CD Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_411(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_813(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_814("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_815(&unk, i, num, num2))
			{
			}
			else if (!func_511(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_816(num);
				return true;
			}
		}
	
		func_816(num);
	}

	return false;
}

int func_630(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B575 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_411(hParam0, 0))
		return 0;

	num = func_581(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_813(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_817(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

void func_631(int iParam0, const char* sParam1, int iParam2) // Position - 0x1B5F7 Hash - 0x4DF85B80 ^0x2514ABD3
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_354(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_632(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x1B638 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_819())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_354(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_820(num);
			func_821(num, 0, 0);
		}
	
		func_354(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_352(func_351(joaat("CAREER_CASH")), value);
	}

	return;
}

BOOL func_633(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1B714 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_120() == -1)
	{
		if (func_822(hParam0) && func_823(hParam0))
		{
			func_824(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_634(Hash hParam0, var uParam1, int iParam2) // Position - 0x1B76B Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_825(hParam0, uParam1);
	unk = { func_826(hParam0, false, true) };
	num = func_827(hParam0, &unk, false, false);
	num2 = func_828(hParam0, false);

	if (num > 1 && !func_829() && num2 + iParam2 >= num)
		if (func_412(hParam0, -2051813666))
			func_595(583, true);
		else
			func_595(582, false);

	if (func_830(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_635(Hash hParam0, BOOL bParam1) // Position - 0x1B807 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_831(hParam0, -949239683))
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

BOOL func_636(Hash hParam0) // Position - 0x1B8B3 Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_120() != -1)
		return false;

	return func_637(hParam0) != 0;
}

Hash func_637(Hash hParam0) // Position - 0x1B8CF Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_832(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_833(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_638(Hash hParam0) // Position - 0x1B90B Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_639(Hash hParam0) // Position - 0x1B919 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_832(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_638(collectableItemHash))
			if (func_410(func_833(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_640(Hash hParam0) // Position - 0x1B966 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_834(48);
	func_733(false, -1);
	return;
}

BOOL func_641(int iParam0) // Position - 0x1B981 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_120() != -1)
		return false;

	return func_588(Global_1347702[iParam0 /*49*/].f_15, true);
}

int func_642(Hash hParam0) // Position - 0x1B9A4 Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_643(Hash hParam0) // Position - 0x1B9B7 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_644(int iParam0) // Position - 0x1B9CA Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_120() != -1)
		return false;

	return func_588(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_645(int iParam0) // Position - 0x1B9ED Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_120() != -1)
		return false;

	if (!func_526(iParam0))
		return false;

	return func_835(Global_1347702[iParam0 /*49*/].f_15);
}

int func_646() // Position - 0x1BA1D Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_410(func_836(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_647(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x1BA52 Hash - 0x2D6CF941 ^0xF8A58ADF
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
		
			if (func_585() && func_645(38) || func_641(38))
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
			if (func_585() && func_645(39) || func_641(39))
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
			if (func_585() && func_645(41) || func_641(41))
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
			num = func_837(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_585() && func_645(49) || func_641(49))
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
			num = func_837(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_838(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_839(iParam0, hash, hash2);
	func_840(iParam0, hash, unk, str5, str4);
	func_841(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_842(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_843(iParam0, hash, hash2, iParam6);
	func_844(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_648(int iParam0) // Position - 0x1BE8F Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_649(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x1BEA6 Hash - 0xD806FABF ^0xD56823B8
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
		
			if (func_585() && func_645(38) || func_641(38))
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
		
			if (func_585() && func_645(39) || func_641(39))
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
		
			if (func_585() && func_645(49) || func_641(49))
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
		if (func_585() && func_645(38) || func_641(38))
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
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_847(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(func_643(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_585() && func_645(39) || func_641(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_585() && func_645(49) || func_641(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

BOOL func_650(Hash hParam0, int iParam1) // Position - 0x1C455 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_411(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

void func_651(int iParam0) // Position - 0x1C474 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_573(iParam0))
		return;

	func_848(iParam0);
	func_849(iParam0);
	return;
}

Hash func_652(Hash hParam0) // Position - 0x1C495 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_411(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_653(Hash hParam0, BOOL bParam1) // Position - 0x1C4C0 Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_411(hash, 0))
		if (bParam1)
			if (func_850(hash) || func_851(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_654(Hash hParam0, BOOL bParam1) // Position - 0x1C646 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_411(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_655(Hash hParam0) // Position - 0x1C672 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_511(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_656(BOOL bParam0) // Position - 0x1C6AC Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_120() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_818(bParam0));
}

BOOL func_657(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x1C6CA Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_826(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_852(398 + i, 1);
		
			if (func_853(hParam0, &unk, hash, false))
			{
				if (func_854(hParam0, &unk6, hash))
				{
					unk28 = { func_855(hParam0, unk, hash, false) };
					func_856(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_656(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_658(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_857(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_658(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1C81C Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_660(hParam0))
		return false;

	if (!func_656(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_659(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1C857 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_654(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_120() == -1)
		{
			func_655(weaponHash);
		
			if (hParam1 == 1248274121)
				func_858(weaponHash);
		}
	
		if (!func_830(hParam0, &unk, 1, false, false))
		{
			func_824(hParam0, 1, false, uParam2, hParam1);
			num = func_859(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_657(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_657(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_657(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_243())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_860(weaponHash))
				{
					func_657(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_657(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_861(Global_35, 2, false, true);
			
				if (func_511(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_344(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_511(weaponHash2) && func_344(24))
					if (!func_657(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_657(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_657(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_595(480, true);

	return true;
}

BOOL func_660(Hash hParam0) // Position - 0x1CA63 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_661(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x1CA71 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_660(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_511(weaponTypeFromAmmoType))
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

	if (func_410(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_695(func_862(hParam0), func_694(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_120() == -1)
			if (func_588(Global_1835011[14 /*74*/].f_1, true))
				func_595(416, false);

	if (num == 0)
		return false;

	if (func_656(false))
	{
		if (func_658(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_700(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_662(Hash hParam0) // Position - 0x1CBBA Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_863() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_864(Global_35, hParam0, &unk))
			func_679(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_685();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_685();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_683();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_681();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_685();
			break;
	}

	return;
}

void func_663(Hash hParam0) // Position - 0x1CCC1 Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_866();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_683();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_865();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_681();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_684();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_682();
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
			func_685();
			break;
	}

	return;
}

struct<2> func_664(int iParam0) // Position - 0x1CEAC Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

struct<2> func_665(int iParam0, int iParam1) // Position - 0x1CEBE Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_666(Hash hParam0) // Position - 0x1CED4 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_412(hParam0, -2017733358);

	if (func_867() < 3)
		if (flag)
			if (func_869(func_868(hParam0), hParam0))
				func_695(79, func_694(func_868(hParam0)), true);
			else
				func_695(78, func_694(func_868(hParam0)), true);
		else
			func_695(80, func_694(func_870(hParam0)), true);

	return;
}

BOOL func_667() // Position - 0x1CF41 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_871(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_871(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_871(joaat("document_arthur_high_bounty_1"), 400) || func_871(joaat("document_arthur_high_bounty_2"), 400) || func_871(joaat("document_arthur_has_poster_1"), 400) || func_871(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

void func_668(Hash hParam0) // Position - 0x1CFB7 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_647(43, 0, 0, joaat("exotic_stage_01"), func_876(1), false, -1, false);
			func_877(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_647(39, 0, 0, 0, 0, false, 1, false);
			func_649(39, 0, 0, 0, 0, -1, 0);
			func_873(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_647(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_649(51, 0, 0, 0, 0, -1, 0);
			func_872(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_647(43, 0, 0, joaat("exotic_stage_02"), func_876(2), false, -1, false);
			func_877(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_647(43, 0, 0, joaat("exotic_stage_03"), func_876(4), false, -1, false);
			func_877(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_647(49, 0, 0, 0, 0, false, 1, false);
			func_649(49, 0, 0, 0, 0, -1, 0);
			func_875(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_647(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_649(51, 0, 0, 0, 0, -1, 0);
			func_872(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_647(41, 0, 0, 0, 0, false, 1, false);
			func_649(41, 0, 0, 0, 0, -1, 0);
			func_874(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_647(43, 0, 0, joaat("exotic_stage_05"), func_876(16), false, -1, false);
			func_877(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_647(43, 0, 0, joaat("exotic_stage_04"), func_876(8), false, -1, false);
			func_877(8);
			break;
	}

	return;
}

void func_669(Hash hParam0) // Position - 0x1D14D Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_878() == 1)
	{
		if (func_641(39))
		{
			func_595(342, false);
		}
		else
		{
			func_595(343, false);
			func_873(1);
		}
	}

	if (func_878() >= 30)
		func_595(344, false);

	func_647(39, 0, 0, 0, 0, false, -1, false);
	func_649(39, 0, 0, func_878(), 30, 1, 0);
	return;
}

void func_670(Hash hParam0) // Position - 0x1D1AC Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_879() == 1)
	{
		if (func_641(49))
		{
			func_595(409, false);
		}
		else
		{
			func_595(410, false);
			func_875(1);
		}
	}

	if (func_879() >= 10)
		func_595(411, false);

	func_647(49, 0, 0, 0, 0, false, -1, false);
	func_649(49, 0, 0, func_879(), 10, 1, 0);
	return;
}

void func_671(Hash hParam0) // Position - 0x1D20B Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_595(438, false);
			func_880(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_647(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_649(51, 0, 0, num, func_837(joaat("taxidermy_order_05"), 20), 1, 0);
			func_872(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_880(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_647(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_649(51, 0, 0, num, func_837(joaat("taxidermy_order_04"), 20), 1, 0);
			func_872(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_880(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_647(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_649(51, 0, 0, num, func_837(joaat("taxidermy_order_03"), 20), 1, 0);
			func_872(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_595(437, false);
			func_595(440, false);
			func_880(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_647(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_649(51, 0, 0, num, func_837(joaat("taxidermy_order_01"), 20), 1, 0);
			func_872(1);
			func_881(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_880(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_647(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_649(51, 0, 0, num, func_837(joaat("taxidermy_order_02"), 20), 1, 0);
			func_872(8);
			break;
	
		default:
			func_595(439, false);
			break;
	}

	return;
}

void func_672() // Position - 0x1D3F9 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_673(Hash hParam0, int iParam1) // Position - 0x1D41D Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_120() == -1)
	{
		if (!func_641(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_595(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_595(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_595(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_595(400, false);
		}
		else if (func_412(hParam0, 412399755))
		{
			func_882(joaat("exotic_stage_01"));
		
			if (func_883() == 0)
			{
				func_733(false, 10);
				num2 = func_884(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_885(hParam0) < func_886(hParam0))
					{
						func_647(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_649(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_641(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_595(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_595(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_595(401, false);
		}
		else if (func_412(hParam0, 709057512))
		{
			func_882(joaat("exotic_stage_02"));
		
			if (func_883() == 1)
			{
				func_733(false, 10);
				num2 = func_884(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_885(hParam0) < func_886(hParam0))
					{
						func_647(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_649(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_641(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_595(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_595(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_595(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_595(398, false);
		}
		else if (func_412(hParam0, -1478961327))
		{
			func_882(joaat("exotic_stage_03"));
		
			if (func_883() == 2)
			{
				func_733(false, 10);
				num2 = func_884(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_887(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_888(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_834(48);
					}
				
					if (func_885(hParam0) < func_886(hParam0))
					{
						func_647(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_649(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_885(hParam0) < func_886(hParam0))
					{
						func_647(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_649(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_641(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_595(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_595(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_595(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_595(406, false);
		}
		else if (func_412(hParam0, -1238404098))
		{
			func_882(joaat("exotic_stage_04"));
		
			if (func_883() == 3)
			{
				func_733(false, 10);
				num2 = func_884(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_885(hParam0) < func_886(hParam0))
					{
						func_647(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_649(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_641(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_595(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_595(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_595(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_595(403, false);
		}
		else if (func_412(hParam0, 1160548794))
		{
			func_882(joaat("exotic_stage_05"));
		
			if (func_883() == 4)
			{
				func_733(false, 10);
				num2 = func_884(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_885(hParam0) < func_886(hParam0))
					{
						func_647(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_649(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_674(Hash hParam0) // Position - 0x1D936 Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_887(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_888(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_834(48);
		}
	}

	return;
}

void func_675(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D976 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_410(func_889(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_890(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_891(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_676(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x1D9D6 Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_120() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_414(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_414(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_414(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_414(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_414(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_414(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_414(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_892())
				func_414(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_414(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_414(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_414(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_414(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_414(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_414(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_414(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_414(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_414(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_414(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_414(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_414(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_414(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_414(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_677(Hash hParam0) // Position - 0x1DDAE Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_641(41))
		func_595(363, false);
	else
		func_595(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_893(joaat("legendary_fish_02"));
			func_894(joaat("legendary_fishing_spot_02"));
			func_895(joaat("legendary_fishing_spot_02"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_893(joaat("legendary_fish_06"));
			func_894(joaat("legendary_fishing_spot_06"));
			func_895(joaat("legendary_fishing_spot_06"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_893(joaat("legendary_fish_13"));
			func_894(joaat("legendary_fishing_spot_13"));
			func_895(joaat("legendary_fishing_spot_13"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_893(joaat("legendary_fish_03"));
			func_894(joaat("legendary_fishing_spot_03"));
			func_895(joaat("legendary_fishing_spot_03"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_893(joaat("legendary_fish_08"));
			func_894(joaat("legendary_fishing_spot_08"));
			func_895(joaat("legendary_fishing_spot_08"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_893(joaat("legendary_fish_12"));
			func_894(joaat("legendary_fishing_spot_12"));
			func_895(joaat("legendary_fishing_spot_12"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_893(joaat("legendary_fish_05"));
			func_894(joaat("legendary_fishing_spot_05"));
			func_895(joaat("legendary_fishing_spot_05"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_893(joaat("legendary_fish_04"));
			func_894(joaat("legendary_fishing_spot_04"));
			func_895(joaat("legendary_fishing_spot_04"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_893(joaat("legendary_fish_14"));
			func_894(joaat("legendary_fishing_spot_14"));
			func_895(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_893(joaat("legendary_fish_09"));
			func_894(joaat("legendary_fishing_spot_09"));
			func_895(joaat("legendary_fishing_spot_09"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_893(joaat("legendary_fish_07"));
			func_894(joaat("legendary_fishing_spot_07"));
			func_895(joaat("legendary_fishing_spot_07"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_893(joaat("legendary_fish_01"));
			func_894(joaat("legendary_fishing_spot_01"));
			func_895(joaat("legendary_fishing_spot_01"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_893(joaat("legendary_fish_11"));
			func_894(joaat("legendary_fishing_spot_11"));
			func_895(joaat("legendary_fishing_spot_11"));
			func_733(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_893(joaat("legendary_fish_10"));
			func_894(joaat("legendary_fishing_spot_10"));
			func_895(joaat("legendary_fishing_spot_10"));
			func_733(false, 10);
			break;
	}

	return;
}

void func_678(Hash hParam0, var uParam1) // Position - 0x1E02D Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_896(hParam0, uParam1, &unk);
	return;
}

int func_679(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x1E03F Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_826(hParam1, true, false) };
		iParam3 = func_897(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_899(hParam1, hParam2, func_898(iParam3, 1), bParam4, bParam9))
		return 0;

	func_900(true, func_120() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_902(32768) && hParam1 != Global_1946054.f_57[func_898(iParam3, 1) /*11*/])
			{
				func_903();
				func_901(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_898(iParam3, 1) /*11*/])
				func_901(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_901(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_904(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_901(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_905(0);
			func_906(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_901(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_680(var uParam0, BOOL bParam1) // Position - 0x1E1AE Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_861(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_861(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_814("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_815(&unk, i, num, num2))
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
	
		func_816(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_681() // Position - 0x1E277 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_682() // Position - 0x1E291 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_683() // Position - 0x1E2C6 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_684() // Position - 0x1E2E2 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_685() // Position - 0x1E2FC Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_907();
	func_908();
	func_909();
	return;
}

void func_686(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1E313 Hash - 0x968DA278 ^0x43D407E7
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

void func_687(int iParam0, BOOL bParam1) // Position - 0x1E6EB Hash - 0x922C415B ^0x2DF21E31
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
	func_845(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_688(int iParam0) // Position - 0x1E802 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_689(int iParam0) // Position - 0x1E81D Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_690(int iParam0) // Position - 0x1E838 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_691(int iParam0) // Position - 0x1E853 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_692(int iParam0) // Position - 0x1E86E Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_693(int iParam0) // Position - 0x1E889 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

Hash func_694(Hash hParam0) // Position - 0x1E8A4 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_411(hParam0, 0))
		return 0;

	return hParam0;
}

void func_695(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x1E8BD Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_801(iParam0, &num, &num2);

	if (!func_802(iParam0, num, num2, bParam2))
		return;

	if (!func_910(iParam0, 1024))
		return;

	func_803(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_696(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1E91D Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_801(iParam0, &num, &num2);

	if (!func_802(iParam0, num, num2, bParam2))
		return;

	if (!func_910(iParam0, 1024))
		return;

	func_803(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_697() // Position - 0x1E998 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_832())
		return func_698();

	endRange = func_832() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_832(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_911(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_833(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_698() // Position - 0x1EA12 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_832());
	return func_833(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_699(var uParam0) // Position - 0x1EA35 Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_700(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1EA8A Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_411(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_826(hParam0, false, true) };
	unk6 = { func_855(hParam0, unk, unk.f_4, false) };
	return func_912(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_701(Hash hParam0) // Position - 0x1EAD9 Hash - 0x90E372CB ^0xEE55522E
{
	int num;
	Hash hash;
	Hash hash2;

	if (func_120() != -1)
		return;

	switch (func_652(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_901(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			num = func_914(hParam0);
		
			if (func_915(num))
				func_916(num, num >= 0 && num <= 5, true);
			else
				func_901(30, hParam0, 0, 0, false);
		
			if (func_917() == -2125499975 || func_917() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_901(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_917() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_901(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_918(-525676072, false))
				if (func_919(-525676072, &hash))
					func_901(33, hash, 0, 0, false);
		
			func_901(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_913(81053684, false) <= 0)
				func_901(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_920(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_679(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_651(24);
	
		if (func_680(&hash2, false))
			func_657(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_702(Hash hParam0) // Position - 0x1ECAB Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_412(hParam0, 943695443))
		func_921(0, hParam0);
	else if (func_412(hParam0, -2096528786))
		func_921(1, hParam0);
	else if (func_412(hParam0, -1094167013))
		func_921(2, hParam0);
	else if (func_412(hParam0, 1936654645))
		func_921(3, hParam0);
	else if (func_412(hParam0, 1306489306))
		func_921(4, hParam0);
	else if (func_412(hParam0, 435762317))
		func_921(5, hParam0);
	else if (func_412(hParam0, 1259363210))
		func_921(6, hParam0);
	else if (func_412(hParam0, 881398259))
		func_921(7, hParam0);
	else if (func_412(hParam0, -541549214))
		func_921(8, hParam0);
	else if (func_412(hParam0, 130796156))
		func_921(-1, hParam0);

	return;
}

int func_703(Hash hParam0, int iParam1) // Position - 0x1EDA1 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_922(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_923(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_704(Hash hParam0) // Position - 0x1EDCA Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_411(hParam0, 0))
		return unk;

	if (func_412(hParam0, -305066475))
		if (func_120() == -1)
			if (func_412(hParam0, -537818634))
				return func_351(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_351(joaat("deadeye_items"));
	else if (func_412(hParam0, -537818634))
		return func_351(joaat("medicine_items"));

	if (func_412(hParam0, 2084895747))
		return func_351(joaat("lock_breaker_items"));

	return unk3;
}

void func_705(Hash hParam0) // Position - 0x1EE5E Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_120() == -1)
				if (func_588(Global_1835011[4 /*74*/].f_1, true))
					func_595(109, true);
			break;
	}

	return;
}

void func_706(Hash hParam0, int iParam1) // Position - 0x1EE97 Hash - 0x3053C451 ^0xB3C28AB6
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(func_924(0));
	func_354(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_926(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_707(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1EED7 Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_411(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_927())
	{
		func_928(hParam0, iParam1, bParam2, iParam4);
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
		if (bParam3 || iParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_650(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_581(hParam0);
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
	else if (!func_930(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_931(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_694(hParam0)), num), num5);

	if (iParam1 == 1 || func_412(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_694(hParam0));

	func_354(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

int func_708(int iParam0) // Position - 0x1F12C Hash - 0x7AAD0EAA ^0x7F622D62
{
	var unk;
	var statId;

	statId = { func_351(iParam0) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

BOOL func_709(var uParam0) // Position - 0x1F149 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_932(81053684))
		if (func_933(uParam0))
			return true;
	else if (func_934(-525676072, uParam0))
		if (func_933(uParam0))
			return true;

	return false;
}

BOOL func_710() // Position - 0x1F18E Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

void func_711(int iParam0, int iParam1) // Position - 0x1F1AA Hash - 0x6845F46B ^0x1C6B4958
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

	if (func_120() != -1)
		return;

	value = func_416();

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
	num2 = func_345(BUILTIN::CEIL((num4 / num5) * 100f), 0, 100);
	num3 = func_345(BUILTIN::CEIL((num6 / num5) * 100f), 0, 100);

	if (num3 - num2 == 0)
		return;

	iParam1 & 0;

	if (value3 < 1000)
	{
		if (!func_935())
		{
			func_936(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (value3 >= 1000 && value3 < 2000)
	{
		if (!func_937())
		{
			func_936(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (value3 >= 2000 && value3 < 3000)
	{
		if (!func_938())
		{
			func_936(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_939())
	{
		func_936(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}

	func_352(func_351(joaat("FAME")), value2);
	num7 = func_416();
	AUDIO::_0x078F77FD1A43EAB3(value, num7);
	return;
}

void func_712(int iParam0, int iParam1) // Position - 0x1F344 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_713(int iParam0, int iParam1) // Position - 0x1F359 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_714(int iParam0, int iParam1) // Position - 0x1F36A Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_715(int iParam0) // Position - 0x1F38B Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_714(iParam0, 2);
}

void func_716(var uParam0, int iParam1) // Position - 0x1F39A Hash - 0xD05180BA ^0x39589262
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

void func_717(var uParam0, int iParam1) // Position - 0x1F420 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_718(var uParam0, int iParam1) // Position - 0x1F45C Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_433(*uParam0);
	num2 = func_432(*uParam0);

	if (iParam1 < 1 || iParam1 > func_438(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_719(var uParam0, int iParam1) // Position - 0x1F4AF Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_720(var uParam0, int iParam1) // Position - 0x1F4EA Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_721(var uParam0, int iParam1) // Position - 0x1F523 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_722(int iParam0) // Position - 0x1F55B Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_437(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_436(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_435(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_432(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_433(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_434(iParam0);

	if (num6 < 1 || num6 > func_438(num5, num4))
		return false;

	return true;
}

int func_723(int iParam0, int iParam1) // Position - 0x1F637 Hash - 0x92F844D4 ^0x92F844D4
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
	
		case -1910231185:
			return 27;
	
		case joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"):
			return 30;
	
		case -1751068532:
			return 19;
	
		case joaat("TSTAG_NO_TAGS"):
			return 0;
	
		case -1403291038:
			return 13;
	
		case joaat("TSTAG_VAL_MUD3_ACTIVE_RIDE_TO_VAL"):
			return 28;
	
		case -1132827806:
			return 18;
	
		case -1066004925:
			return 36;
	
		case -586199837:
			return 23;
	
		case -529686691:
			return 20;
	
		case joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"):
			return 29;
	
		case joaat("TSTAG_LOCKDOWN"):
			return 9;
	
		case -415041951:
			return 3;
	
		case joaat("TSTAG_FLOW_PRE_BOUNTY_1"):
			return 15;
	
		case joaat("TSTAG_FIRST_VISIT"):
			return 1;
	
		case -115118166:
			return 8;
	
		case joaat("TSTAG_ENDLESS_SUMMER"):
			return 4;
	
		case 0:
			return 38;
	
		case 508286680:
			return 5;
	
		case joaat("TSTAG_LOCKDOWN_SALOON"):
			return 11;
	
		case 623901469:
			return 16;
	
		case joaat("TSTAG_VAL_MUD4_ACTIVE_WALK_WITH_JOHN"):
			return 31;
	
		case joaat("TSTAG_RHD_FEUD1_ACTIVE"):
			return 25;
	
		case 1274330613:
			return 22;
	
		case joaat("TSTAG_VAL_MUD5_ACTIVE_STEALTH_EXIT"):
			return 34;
	
		case 1398684735:
			return 26;
	
		case 1556254948:
			return 2;
	
		case joaat("TSTAG_RAIN"):
			return 6;
	
		case joaat("TSTAG_LOCKDOWN_PARTIAL"):
			return 10;
	
		case 1598344177:
			return 21;
	
		case joaat("TSTAG_VAL_MUD5_ACTIVE"):
			return 33;
	
		case joaat("TSTAG_VAL_MUD4_ACTIVE_GO_TO_SALOON"):
			return 32;
	
		case joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE"):
			return 35;
	
		case 1763394652:
			return 17;
	
		case joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"):
			return 12;
	
		case joaat("TSTAG_RHD_SADIE1_ACTIVE"):
			return 24;
	
		case 1843135693:
			return 7;
	
		case 1869671285:
			return 37;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_724(int iParam0) // Position - 0x1F7FD Hash - 0xFD9AE53B ^0xA6E37739
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
	
		case 1:
			return 508286680;
	
		case 2:
			return -115118166;
	
		case 3:
			return 1274330613;
	
		case 4:
			return -1993529370;
	
		default:
		
	}

	return joaat("TSTAG_NO_TAGS");
}

int func_725(int iParam0) // Position - 0x1F858 Hash - 0xFD9AE53B ^0x43C3E16E
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
	
		case 1:
			return 1843135693;
	
		case 2:
			return -1403291038;
	
		case 3:
			return -1066004925;
	
		case 4:
			return 1598344177;
	
		default:
		
	}

	return joaat("TSTAG_NO_TAGS");
}

int func_726(int iParam0, var uParam1, var uParam2) // Position - 0x1F8B3 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_723(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_727(int iParam0) // Position - 0x1F8D5 Hash - 0xBD519485 ^0xCB9095DB
{
	var unk;

	unk = joaat("TSTAG_NO_TAGS");
	unk.f_1 = 820723243;
	unk.f_2 = 1;
	*iParam0 = { unk };
	return;
}

void func_728() // Position - 0x1F900 Hash - 0x61914A97 ^0x61914A97
{
	func_940(23);
	return;
}

void func_729(int iParam0) // Position - 0x1F90E Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1310750.f_16035 = Global_1310750.f_16035 || iParam0;
	return;
}

int func_730(var uParam0) // Position - 0x1F927 Hash - 0x807355BA ^0xBFAB5B0E
{
	if (uParam0->f_46 && uParam0->f_48)
		if (uParam0->f_5.f_16 != 16384)
			return 1;

	return 0;
}

void func_731(var uParam0) // Position - 0x1F950 Hash - 0x3755F799 ^0x3755F799
{
	int num;

	num = func_941(uParam0);

	if (num != 0)
		func_942(-1, 24, 0, num);

	return;
}

void func_732(int iParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x1F970 Hash - 0x89238B4B ^0x5A516E98
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
		return;

	if (Global_17504.f_42[iParam0 /*8*/] == 0)
		func_352(func_351(joaat("unique_beats_completed")), 1);

	Global_17504.f_4 = Global_17504.f_4 + 1;
	Global_17504.f_42[iParam0 /*8*/] = Global_17504.f_42[iParam0 /*8*/] + 1;
	Global_1310750[iParam0 /*111*/].f_110 = Global_1310750[iParam0 /*111*/].f_110 | 8;

	if (func_81(iParam0, 2))
		func_943(iParam0, func_495(iParam3));

	if (func_81(iParam0, 1))
	{
		if (iParam4 == -1)
			iParam4 = func_497();
	
		func_944(iParam0, iParam4);
	}

	if (iParam1 >= 0 && !func_112(iParam0, 65536))
	{
		func_945(iParam0, iParam1);
		func_946(iParam0, func_246(iParam0, iParam1));
		func_729(128);
	}

	func_499(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216, false, false);
	func_500(iParam0, true);

	if (!bParam2)
	{
		func_729(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_947(524288);
	}

	if (func_948(iParam0) != 0)
		if (Global_17504.f_42[iParam0 /*8*/] >= func_948(iParam0))
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;

	return;
}

void func_733(BOOL bParam0, int iParam1) // Position - 0x1FABC Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_949(&Global_0, 8);

	if (!func_585() || func_120() != -1)
		return;

	func_949(&Global_0, 1);
	return;
}

int func_734(Volume volParam0, BOOL bParam1) // Position - 0x1FB02 Hash - 0xEA796703 ^0x695D7925
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

void func_735(int iParam0) // Position - 0x1FB6A Hash - 0x2BEB9110 ^0x79428EC6
{
	Global_17504.f_2 = Global_17504.f_2 + 1;
	Global_17504.f_42[iParam0 /*8*/].f_3 = Global_17504.f_42[iParam0 /*8*/].f_3 + 1;
	Global_1310750[iParam0 /*111*/].f_110 = Global_1310750[iParam0 /*111*/].f_110 | 2;
	return;
}

BOOL func_736(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1FBAC Hash - 0x3F4C1B1 ^0x898E9E6F
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

BOOL func_737(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x1FBF9 Hash - 0x43EBD5CA ^0x361FC829
{
	if (_IS_NULL_VECTOR(vParam0))
		return false;

	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, fParam3, iParam5, iParam4, 16384);
}

BOOL func_738(var uParam0, var uParam1, var uParam2) // Position - 0x1FC21 Hash - 0x69B14B2C ^0x69B14B2C
{
	int i;

	for (i = 0; i < Global_1310750.f_16043; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(Global_1310750.f_16043[i /*3*/]))
			if (func_107(uParam0, Global_1310750.f_16043[i /*3*/]) < 2500f)
				return true;
	}

	return false;
}

BOOL func_739() // Position - 0x1FC79 Hash - 0x9517651C ^0x9517651C
{
	int num;
	int num2;

	num = func_950(func_2());

	if (num == 8)
	{
		num2 = func_302(func_2());
	
		if (func_304(Global_36, num2))
			return false;
	}

	if (func_951(func_609(false)))
		return false;

	if (func_952())
		return false;

	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

float func_740(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1FCD9 Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

int func_741(var uParam0, var uParam1) // Position - 0x1FCFA Hash - 0xC63A2C96 ^0xC63A2C96
{
	var unk;

	unk = { *uParam0 };

	if (func_953(&uParam1))
		return 1;

	if (!func_272(&unk, 1, 10, false))
		return 0;

	*uParam0 = { unk };
	return 1;
}

BOOL func_742(var uParam0) // Position - 0x1FD32 Hash - 0xC5B2EF0 ^0x1EAF0B5A
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
		if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			if (PED::_HAS_META_PED_OUTFIT_LOADED(uParam0->f_5))
				return true;

	return false;
}

Ped func_743(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1FD61 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_954(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_744(Ped pedParam0) // Position - 0x1FDA3 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_745(var uParam0) // Position - 0x1FDD5 Hash - 0x2804AB82 ^0x2804AB82
{
	return func_15(*uParam0, 4);
}

BOOL func_746(var uParam0) // Position - 0x1FDE5 Hash - 0xD809D5C9 ^0xD809D5C9
{
	return func_15(*uParam0, 64);
}

BOOL func_747(var uParam0) // Position - 0x1FDF6 Hash - 0xBAFF7F7F ^0xBAFF7F7F
{
	return func_15(*uParam0, 8);
}

BOOL func_748(var uParam0) // Position - 0x1FE07 Hash - 0x96B217E8 ^0x96B217E8
{
	return func_15(*uParam0, 128);
}

BOOL func_749(var uParam0) // Position - 0x1FE18 Hash - 0x60C72534 ^0x94AAAA38
{
	return func_15(*uParam0, 2048);
}

void func_750(Ped pedParam0, BOOL bParam1) // Position - 0x1FE2A Hash - 0xB65F767E ^0x8BE8F46F
{
	PED::SET_PED_CONFIG_FLAG(pedParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 178, bParam1);
	return;
}

BOOL func_751(var uParam0) // Position - 0x1FE47 Hash - 0x60C72534 ^0x4197186B
{
	return func_15(*uParam0, 1024);
}

BOOL func_752(var uParam0) // Position - 0x1FE59 Hash - 0x60C72534 ^0x6E7B9433
{
	return func_15(*uParam0, 256);
}

void func_753(Ped pedParam0, BOOL bParam1) // Position - 0x1FE6B Hash - 0x222D5B39 ^0x78E3B102
{
	PED::SET_PED_CONFIG_FLAG(pedParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 148, !bParam1);
	return;
}

BOOL func_754(var uParam0) // Position - 0x1FE89 Hash - 0x60C72534 ^0xCBAC4B4F
{
	return func_15(*uParam0, 512);
}

BOOL func_755(var uParam0) // Position - 0x1FE9B Hash - 0x60C72534 ^0xF53D5B27
{
	return func_15(*uParam0, 4096);
}

int func_756(int iParam0) // Position - 0x1FEAD Hash - 0xAB2D95E1 ^0xAB2D95E1
{
	switch (iParam0)
	{
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			return 3;
	
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
			return 0;
	
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			return 4;
	
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			return 5;
	
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 2;
	
		case joaat("g_m_m_uniinbred_01"):
			return 1;
	}

	return -1;
}

int func_757(int iParam0) // Position - 0x1FF81 Hash - 0x899A1C9C ^0x899A1C9C
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

int func_758(int iParam0) // Position - 0x20136 Hash - 0xF81FC77E ^0xDB0C7945
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

int func_759(int iParam0, int iParam1) // Position - 0x2015F Hash - 0xCBC1F512 ^0x9659E844
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

void func_760(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x201AA Hash - 0xB7DFAC0B ^0xE8A27630
{
	int i;
	int num;

	for (i = 0; i < 120; i = i + 1)
	{
		num = 0;
	
		if (func_469(Global_1310750[i /*111*/], iParam0))
		{
			if (!func_458(i))
				num = 1;
			else if (iParam0 == 16777216)
				if (func_955(i) < func_956(iParam1))
					num = 1;
		
			func_499(i, iParam1, 1f, num || iParam2, bParam3);
		}
	}

	return;
}

BOOL func_761(int iParam0) // Position - 0x2021A Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_957(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_762(int iParam0) // Position - 0x20269 Hash - 0x3D0B339A ^0xB87B2B3D
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

void func_763(var uParam0, int iParam1) // Position - 0x202F6 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_764() // Position - 0x20309 Hash - 0x52492FF9 ^0xA2D9D9EC
{
	int i;

	for (i = 3; i <= 5; i = i + 1)
	{
		if (!func_958(i, 128))
			func_959(i, 4096);
	}

	return;
}

void func_765() // Position - 0x20338 Hash - 0x3868EDBD ^0x9E3E5EA5
{
	int i;

	for (i = 0; i <= 2; i = i + 1)
	{
		if (!func_958(i, 128) && func_958(i, 1))
			func_959(i, 4096);
	}

	return;
}

void func_766(float fParam0) // Position - 0x20373 Hash - 0xF0148F71 ^0x8D35552C
{
	int num;

	num = BUILTIN::FLOOR(fParam0 * 1000f);

	if (Global_1393237.f_3 < MISC::GET_GAME_TIMER() + num)
		Global_1393237.f_3 = MISC::GET_GAME_TIMER() + num;

	return;
}

void func_767() // Position - 0x203A6 Hash - 0xA00912CF ^0xF6ECFE01
{
	int i;

	for (i = 0; i < 120; i = i + 1)
	{
		if (func_81(i, 16777216))
			if (!func_960(i))
				func_961(i, 4096);
	}

	return;
}

void func_768(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x203E2 Hash - 0xE914DE80 ^0x3F75BDDD
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
			func_459(92, true, num5, num4, num3, 0, true, true);
			func_459(99, true, num5, num4, num3, 0, true, true);
			func_459(44, true, num5, num4, num3, 0, true, true);
			func_459(12, true, num5, num4, num3, 0, true, true);
			func_459(64, true, num5, num4, num3, 0, true, true);
			break;
	
		case 1:
			func_459(5, true, num5, num4, num3, 0, true, true);
			func_459(6, true, num5, num4, num3, 0, true, true);
			func_459(13, true, num5, num4, num3, 0, true, true);
			func_459(25, true, num5, num4, num3, 0, true, true);
			func_459(29, true, num5, num4, num3, 0, true, true);
			func_459(46, true, num5, num4, num3, 0, true, true);
			func_459(67, true, num5, num4, num3, 0, true, true);
			func_459(9, true, num5, num4, num3, 0, true, true);
			break;
	
		case 2:
			func_459(3, true, num5, num4, num3, 0, true, true);
			func_459(11, true, num5, num4, num3, 0, true, true);
			func_459(18, true, num5, num4, num3, 0, true, true);
			func_459(92, true, num5, num4, num3, 0, true, true);
			func_459(95, true, num5, num4, num3, 0, true, true);
			func_459(96, true, num5, num4, num3, 0, true, true);
			func_459(101, true, num5, num4, num3, 0, true, true);
			func_459(51, true, num5, num4, num3, 0, true, true);
			break;
	
		case 3:
			func_459(53, true, num5, num4, num3, 0, true, true);
			func_459(54, true, num5, num4, num3, 0, true, true);
			func_459(52, true, num5, num4, num3, 0, true, true);
			func_459(12, true, num5, num4, num3, 0, true, true);
			func_459(56, true, num5, num4, num3, 0, true, true);
			break;
	
		case 4:
			func_459(70, true, num5, num4, num3, 0, true, true);
			func_459(63, true, num5, num4, num3, 0, true, true);
			func_459(35, true, num5, num4, num3, 0, true, true);
			break;
	
		case 5:
			func_459(117, true, num5, num4, num3, 0, true, true);
			func_459(75, true, num5, num4, num3, 0, true, true);
			func_459(76, true, num5, num4, num3, 0, true, true);
			func_459(64, true, num5, num4, num3, 0, true, true);
			func_459(15, true, num5, num4, num3, 0, true, true);
			func_459(108, true, num5, num4, num3, 0, true, true);
			func_459(12, true, num5, num4, num3, 0, true, true);
			break;
	}

	return;
}

void func_769(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2068F Hash - 0x34E92140 ^0x216EC835
{
	float num;
	float num2;
	BOOL flag;

	num = func_104();
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

BOOL func_770(int iParam0) // Position - 0x206E2 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_771(BOOL bParam0) // Position - 0x20720 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_772() // Position - 0x20733 Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_962())
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

void func_773(Any* panParam0, int iParam1) // Position - 0x20789 Hash - 0x787BB1AC ^0x11099E69
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

Ped func_774(int iParam0) // Position - 0x20834 Hash - 0xF229F24F ^0x47381422
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

	if (iParam0->f_6 == 3)
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

void func_775(int iParam0) // Position - 0x208DC Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_207(iParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_111(iParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_776(Ped pedParam0, int iParam1) // Position - 0x20941 Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_777(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x20958 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_778(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), iParam1, iParam2, iParam3, iParam4))
			return true;

	return false;
}

BOOL func_778(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x20986 Hash - 0xBF2250D5 ^0x34592C3E
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

BOOL func_779(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x209D0 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_780(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x20A11 Hash - 0x1D055735 ^0x5D260F19
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

int func_781(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x20A8A Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_782(BOOL bParam0) // Position - 0x20ACC Hash - 0x970FE035 ^0x92589DF6
{
	func_963(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_783(int iParam0, var uParam1) // Position - 0x20AFF Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_964(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_784(int iParam0) // Position - 0x20B2C Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_528(iParam0))
		return -1;

	return func_965(iParam0);
}

BOOL func_785(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x20B48 Hash - 0x84A3184B ^0x2FCA8561
{
	if (piParam1->f_11 != 0)
	{
		if (func_966(pedParam0, piParam1))
		{
			if (!func_3(piParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);
				func_52(uParam2, 0, false, true, false);
				func_111(&(piParam1->f_10), 1);
			}
		
			return true;
		}
		else if (func_3(piParam1->f_10, 1))
		{
			func_967(uParam2);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 178, false);
			func_207(&(piParam1->f_10), 1);
		}
	}

	return false;
}

BOOL func_786(var uParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4, char* sParam5, Hash hParam6, int iParam7) // Position - 0x20BF2 Hash - 0x95336F37 ^0x42E85BA7
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
		flag = func_3(bParam4, 32);
		func_590(piParam1, uParam2, false);
		prompt = func_968(*uParam0, piParam1, uParam2, fParam3, flag);
	
		if (flag)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
	
		func_52(uParam2, 0, false, true, false);
		num = 0;
	
		if (!func_3(bParam4, 16))
			num = num | 8;
	
		if (func_3(bParam4, 2048))
			num = num | 4;
	
		if (func_3(bParam4, 32768))
			num = num | 128;
	
		if (func_3(bParam4, 4096))
			num = num | 16;
	
		if (func_3(bParam4, 8388608) || func_3(bParam4, 8192))
			num = num | 256;
	
		if (func_3(bParam4, 4194304))
			num = num | 64;
	
		if (func_3(bParam4, 268435456))
			num = num | 8192;
	
		if (func_789(piParam1, 4))
		{
			num = num | 1024;
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
	
		if (!func_789(piParam1, 26))
			num = num | 32768;
	
		if (func_3(bParam4, 67108864))
			num = num | 16384;
	
		if (piParam1->f_6 < -1 || piParam1->f_6 > -1 && piParam1->f_6 > 3)
			piParam1->f_6 = -1;
	
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &text, fParam3, fParam3, num, piParam1->f_7, piParam1->f_8, prompt, false, piParam1->f_6))
		{
			if (hParam6 == 2)
				hParam6 = func_969(uParam0);
		
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
		
			if (func_3(bParam4, 268435456))
			{
				num2 = func_970(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
			
				if (num2 > -1)
					func_971(piParam1, &uParam2->[num2 /*17*/]);
			}
		
			if (func_789(piParam1, 23))
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
		
			if (func_3(bParam4, 2) || func_3(bParam4, 16))
				func_788(*uParam0, true, true);
			else
				func_788(*uParam0, false, true);
		
			return true;
		}
	}

	return false;
}

void func_787(var uParam0) // Position - 0x20EE3 Hash - 0x43696AC2 ^0x4C06F87D
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}

	return;
}

void func_788(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x20F09 Hash - 0x61822EFB ^0x98C55DC1
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 317, bParam1);

	return;
}

BOOL func_789(int* piParam0, int iParam1) // Position - 0x20F2F Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_790(var uParam0, BOOL bParam1, Volume volParam2, BOOL bParam3) // Position - 0x20F40 Hash - 0x89673EF ^0xD8D31C9
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
	
		if (func_972(*uParam0, bParam3, flag3, flag4))
			return true;
	}

	return false;
}

void func_791(var uParam0, BOOL bParam1, int* piParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, BOOL bParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0x20FA4 Hash - 0x3FED85C6 ^0x1A53C527
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
		
			func_973(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(bParam10, 32), true, false);
			MISC::SET_BIT(piParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*piParam2, 1))
	{
		MISC::CLEAR_BIT(piParam2, 1);
	}

	return;
}

void func_792(BOOL bParam0) // Position - 0x21019 Hash - 0x5A9B862A ^0x7ECCD484
{
	if (func_3(bParam0, 4))
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

	if (func_3(bParam0, 16384))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RELOAD"), false);

	if (func_3(bParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	}

	return;
}

BOOL func_793(var uParam0, int* piParam1, int iParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, BOOL bParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x210C6 Hash - 0x25A0EB38 ^0x81C1ECF6
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

	num = func_974(1);
	isBitSet = MISC::IS_BIT_SET(*piParam1, 2);
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = bParam10 & 128 != 0;
	flag5 = bParam10 & 64 != 0;
	flag6 = bParam10 & 512 != 0;
	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);
	isPedInjured = PED::IS_PED_INJURED(*uParam0);
	flag7 = PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_975(Global_35) || func_976(Global_35) || func_977(Global_35);
	num2 = -1f;

	if (func_25(&(piParam1->f_13)))
		num2 = func_27(&(piParam1->f_13));

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (uParam4->[i /*17*/].f_8 != iParam12)
			iParam12 = uParam4->[i /*17*/].f_8;
	
		flag2 = func_195(uParam4->[i /*17*/].f_6);
		func_978(*uParam0, &uParam4->[i /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
	
		if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 20))
			flag = true;
	
		if (func_979(*uParam0, piParam1, &uParam4->[i /*17*/], flag2, fParam3, iParam2, iParam7, iParam8, bParam14, bParam16, bParam17, isPedOnFoot, isPedInjured, bParam15, num2, flag7, num))
		{
			if (!bParam18 && !flag3)
			{
				if (func_980(iParam12, uParam4->[i /*17*/].f_6))
				{
					if (!flag5)
						func_52(uParam4, 0, false, true, bParam5);
				
					if (flag4)
						func_981(uParam4, false, false);
				
					if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 11))
						func_590(piParam1, uParam4, MISC::IS_BIT_SET(*piParam1, 6));
				
					piParam1->f_1 = i;
					flag3 = true;
					piParam1->f_9 = MISC::IS_BIT_SET(uParam4->[piParam1->f_1 /*17*/], 16);
				
					if (!piParam1->f_9)
						MISC::SET_BIT(piParam1, 0);
				
					if (!isBitSet)
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_11))
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_12))
								TASK::TASK_PLAY_ANIM(Global_35, uParam4->[i /*17*/].f_11, uParam4->[i /*17*/].f_12, 4f, -4f, -1, 67108880, 0, false, 0, false, 0, false);
				
					if (func_982(piParam1, fParam6, piParam1->f_9))
					{
						func_26(&(piParam1->f_18));
					
						if (flag4)
							func_981(uParam4, false, false);
					
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
		func_983(piParam1, iParam2);

	return flag3;
}

void func_794(var uParam0) // Position - 0x2131E Hash - 0x14F6CB16 ^0xBB9D41ED
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

void func_795(int* piParam0, var uParam1, int iParam2) // Position - 0x21371 Hash - 0x9063AD98 ^0x85323D11
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_984(&uParam1->[i /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1->[i /*17*/], 20))
			{
				func_983(piParam0, iParam2);
				return;
			}
		}
	}

	return;
}

BOOL func_796(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x213B4 Hash - 0xEB1F3A6C ^0xB0CA3802
{
	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_985(pedParam0))
			{
				piParam1->f_1 = piParam1->f_3;
				func_986(piParam1, 0);
				func_590(piParam1, uParam2, func_789(piParam1, 6));
				return true;
			}
		}
	}

	return false;
}

BOOL func_797(var uParam0, int* piParam1, float fParam2, BOOL bParam3) // Position - 0x2140C Hash - 0x384F04E1 ^0xEB00389B
{
	if (piParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
			return false;
	
		piParam1->f_9 = 0;
		MISC::SET_BIT(piParam1, 0);
	
		if (fParam2 > 0f)
		{
			func_26(&(piParam1->f_18));
			return false;
		}
		else if (func_25(&(piParam1->f_18)))
		{
			func_535(&(piParam1->f_18));
			return false;
		}
	}

	if (!func_25(&(piParam1->f_18)))
		return true;

	if (fParam2 > 0f && bParam3)
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			return false;

	return func_603(&(piParam1->f_18), fParam2);
}

void func_798(Ped pedParam0, int* piParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x214B6 Hash - 0x415C2438 ^0x87B17E4A
{
	int num;

	if (piParam1->f_5 < 0 || piParam1->f_5 > *uParam2 - 1)
		piParam1->f_5 = 0;

	num = piParam1->f_5;
	func_978(pedParam0, &uParam2->[num /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	piParam1->f_5 = piParam1->f_5 + 1;
	return;
}

void func_799(int* piParam0, int iParam1) // Position - 0x21502 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

int func_800(int* piParam0) // Position - 0x21512 Hash - 0x9D272BC9 ^0x9C060578
{
	if (func_789(piParam0, 0))
	{
		if (func_987(piParam0))
		{
			func_799(piParam0, 0);
			return piParam0->f_1;
		}
	}

	return -1;
}

void func_801(int iParam0, var uParam1, var uParam2) // Position - 0x2153C Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_802(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x21558 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_988(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_989(iParam0))
		return false;

	if (func_990(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_910(iParam0, 1) || func_991(32768))
		if (!func_910(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_992())
		return false;

	return true;
}

void func_803(int iParam0, int iParam1) // Position - 0x215FA Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_804(int iParam0, BOOL bParam1) // Position - 0x2161E Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_195(iParam0))
		return false;

	return !func_714(iParam0, 4);
}

int func_805(int iParam0, int iParam1) // Position - 0x21643 Hash - 0x706CAB3F ^0x706CAB3F
{
	if (!func_260(iParam0))
		return -1;

	return iParam0 + (120 * iParam1);
}

int func_806(int iParam0, int iParam1) // Position - 0x21661 Hash - 0x992397AB ^0x992397AB
{
	int i;
	int num;

	num = func_805(iParam0, iParam1);

	for (i = 0; i < Global_17504.f_1003; i = i + 1)
	{
		if (Global_17504.f_1003[i /*6*/] == num || Global_17504.f_1003[i /*6*/] == -1)
		{
			Global_17504.f_1003[i /*6*/] = num;
			return i;
		}
	}

	return -1;
}

int func_807(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x216BE Hash - 0x47D4E9C ^0x4AEFF628
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
				if (!bParam1 || func_993(i))
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

void func_808(Ped pedParam0, BOOL bParam1, float fParam2, float fParam3, float fParam4) // Position - 0x2174B Hash - 0x1CCC544D ^0x2DBDCD64
{
	var taskSequenceId;

	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(2794.9438f, -1166.6428f, 46.91581f);
	TASK::TASK_EXTEND_ROUTE(2793.5325f, -1166.1489f, 46.9157f);
	TASK::TASK_EXTEND_ROUTE(fParam2);

	if (bParam1)
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 2f, 0, 1056964608, 1084227584, 1193033728);
	else
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 2f, 2, 1056964608, 1084227584, 1193033728);

	func_128(pedParam0, &taskSequenceId, 0, 0, true, true);
	return;
}

void func_809(var uParam0) // Position - 0x217CB Hash - 0xAE869BC0 ^0x21E297C5
{
	func_535(uParam0);
	func_994(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
	return;
}

void func_810(AnimScene ansParam0, char* sParam1) // Position - 0x217E7 Hash - 0x87472910 ^0x8E91C7E1
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(ansParam0, sParam1))
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansParam0, sParam1);

	return;
}

BOOL func_811(AnimScene ansParam0, char* sParam1) // Position - 0x2180D Hash - 0x2272DD70 ^0x86477165
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansParam0, true, false))
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansParam0, sParam1))
				return true;
			else
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansParam0, sParam1);

	return false;
}

float func_812(float fParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0x21845 Hash - 0xBEF31EF9 ^0xBEF31EF9
{
	return func_178(Global_35, fParam0, bParam3);
}

Hash func_813(Hash hParam0, int iParam1) // Position - 0x2185A Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_411(hParam0, 0))
		return 0;

	num = func_581(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_412(hParam0, 1399091007))
	{
		func_896(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_814(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x218D4 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_818(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_815(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x218FB Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_816(int iParam0) // Position - 0x21936 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_817(Hash hParam0, BOOL bParam1) // Position - 0x21957 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_995(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_997(&unk, func_996(false));

	if (!func_998(&unk, &num, &num2, false))
		return 0;

	func_816(num);
	return num2;
}

int func_818(BOOL bParam0) // Position - 0x219B5 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_120() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_819() // Position - 0x219F6 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_863())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_820(int iParam0) // Position - 0x21A0D Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_999(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_821(int iParam0, const char* sParam1, int iParam2) // Position - 0x21A41 Hash - 0x56940320 ^0x7F490076
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_819())
		func_354(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_354(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_822(Hash hParam0) // Position - 0x21AAD Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_581(hParam0) == joaat("WEAPON");
}

BOOL func_823(Hash hParam0) // Position - 0x21AC1 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_120() != -1)
		return false;

	if (func_650(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_830(hParam0, &unk, 1, false, false);

	return func_410(hParam0, 1, false);
}

void func_824(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x21B05 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_581(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_654(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_851(weaponHash))
	{
		if (func_120() == -1)
			func_655(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_630(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_707(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_825(Hash hParam0, var uParam1) // Position - 0x21BAC Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_412(hParam0, 58855631))
	{
		func_1000(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_826(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21BDA Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_1001(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_581(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_1004(hParam0, -1823706425))
			{
				unk = { func_855(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_1004(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_855(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_1003(bParam1) };
		
			switch (func_652(hParam0))
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
				unk = { func_855(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_996(bParam1) };
		
			if (bParam2 && func_1002(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_853(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_853(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_854(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_1005(unk, &unk28, bParam1, false))
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

int func_827(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x21E97 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_411(hParam0, 0))
		return 0;

	if (!func_656(false))
		bParam2 = true;

	if (bParam2 || !func_1006(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_818(bParam3), hParam0);
}

int func_828(Hash hParam0, BOOL bParam1) // Position - 0x21EE5 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_660(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(bParam1), hParam0, false);
}

BOOL func_829() // Position - 0x21F0F Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_120() != -1)
		return false;

	if (!func_585())
		return false;

	if (!func_588(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[2 /*74*/].f_1, true) && func_588(Global_1347702[120 /*49*/].f_15, true) && !func_588(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[37 /*74*/].f_1, true) && !func_588(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[57 /*74*/].f_1, true) && !func_588(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[26 /*74*/].f_1, true) && !func_588(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_588(Global_1835011[62 /*74*/].f_1, true) && func_588(Global_1835011[63 /*74*/].f_1, true) && !func_588(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[75 /*74*/].f_1, true) && !func_588(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_588(Global_1835011[76 /*74*/].f_1, true) && !func_588(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[40 /*74*/].f_1, true) && func_588(Global_1835011[41 /*74*/].f_1, true) && !func_588(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[62 /*74*/].f_1, true) && func_588(Global_1835011[63 /*74*/].f_1, true) && !func_588(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_588(Global_1835011[65 /*74*/].f_1, true) && func_588(Global_1835011[66 /*74*/].f_1, true) && !func_588(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_830(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22155 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_1007(&hParam0);

	if (!func_411(hParam0, 0))
		return 0;

	if (!func_656(false))
		bParam3 = true;

	if (func_822(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_996(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_853(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_854(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_1002(hParam0, true))
				if (!func_853(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_854(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_1008(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_827(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_1006(hParam0))
		inventoryItemCountWithItemid = func_1009(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_831(Hash hParam0, int iParam1) // Position - 0x2229A Hash - 0x7A1C2599 ^0xFF9B5634
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

int func_832() // Position - 0x222E4 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_833(Hash hParam0) // Position - 0x222F6 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_834(int iParam0) // Position - 0x22304 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_120() != -1)
		return;

	num = func_1010(iParam0);
	value = func_1011(iParam0);

	if (Global_1347477.f_117 || !func_344(31) || !func_1012(num))
		return;

	if (value <= 0f)
		return;

	if (func_1013(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_1014(num, Global_40.f_11095.f_11[num] + value, false);
	func_354(MISC::VAR_STRING(6, func_1015(iParam0), value), "itemtype_textures", func_1016(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

BOOL func_835(int iParam0) // Position - 0x22403 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_784(iParam0);
	return num == 3 || num == 4;
}

Hash func_836(int iParam0) // Position - 0x22421 Hash - 0xB8EC44B7 ^0x693BD882
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

int func_837(Hash hParam0, int iParam1) // Position - 0x224DA Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_783(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_838(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x22509 Hash - 0xF20034E5 ^0x4BF6ABE
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_646() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1017(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1018(), 12);
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
			else if (func_878() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1019(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_878(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_837(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1020(), 13);
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
			else if (func_879() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1021(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_879(), 10);
			break;
	}

	return sParam3;
}

BOOL func_839(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x227F6 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_840(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x228A3 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_841(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x228CF Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_842(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x2291E Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_1022(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_410(hash, 1, false) || func_1024(func_1023(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(func_1022(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(func_1022(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_878() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1025(i)), func_1025(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1019() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1025(i)), func_1025(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1025(i)), func_1025(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_889(iParam3, func_1026(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_885(hash) - iParam7 >= func_837(iParam3, func_1027(i));
				else
					flag = func_885(hash) >= func_837(iParam3, func_1027(i));
			else if (hParam4 == hash)
				flag = func_885(hash) + iParam7 >= func_837(iParam3, func_1027(i));
			else
				flag = func_885(hash) >= func_837(iParam3, func_1027(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_1029(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_879() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1031(i)), func_1031(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1021() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1031(i)), func_1031(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1031(i)), func_1031(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_889(iParam3, func_1026(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_885(hash) - iParam7 >= 1;
				else
					flag = func_1032(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_1032(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1033(hash)), func_1033(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_843(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x22C93 Hash - 0x3C34F826 ^0xC32C5DE6
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
		if (func_1020() >= 13)
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

BOOL func_844(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x22D9C Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_528(func_1034(0)) && func_1035(0) == 1 || func_1035(0) == 8 || func_1035(0) == 6)
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

int func_845(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x22E3A Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x22EB1 Hash - 0xA17D549C ^0xD61F2DE1
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

int func_847(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x22F5F Hash - 0xB88D7AA5 ^0x36259347
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

void func_848(int iParam0) // Position - 0x22FC0 Hash - 0x48EBE6BD ^0x358C7E90
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

void func_849(int iParam0) // Position - 0x22FFA Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_585() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_595(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_585() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_595(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_585() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_595(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_585() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_595(589, false);
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
			func_1036(true);
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
			func_1037(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1037(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1037(3);
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
		
			if (func_120() == -1)
			{
				if (!func_920(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1044(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_243())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_410(hash, 1, false))
						func_700(hash, 1, 752097756);
				
					func_679(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_1038(true);
			break;
	
		case 34:
			func_1039(true);
			break;
	
		case 35:
			func_1040(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_1041(false);
			break;
	
		case 38:
			func_1042(false);
			break;
	
		case 39:
			func_1043(false);
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
			func_1045();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_120() == -1)
				if (!func_410(1013902307, 1, false))
					func_700(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_120() == -1)
				if (!func_410(786809402, 1, false))
					func_700(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_120() == -1)
			{
				if (!func_410(1013902307, 1, false))
					func_700(1013902307, 1, 752097756);
			
				if (!func_410(142640135, 1, false))
					func_700(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_120() == -1)
			{
				if (!func_410(786809402, 1, false))
					func_700(786809402, 1, 752097756);
			
				if (!func_410(-518019409, 1, false))
					func_700(-518019409, 1, 752097756);
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

BOOL func_850(Hash hParam0) // Position - 0x23622 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_851(Hash hParam0) // Position - 0x2364A Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

Hash func_852(int iParam0, int iParam1) // Position - 0x23672 Hash - 0xEA82FE59 ^0xEA82FE59
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

BOOL func_853(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x26143 Hash - 0x4285A587 ^0x4285A587
{
	return func_1009(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_854(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x2615B Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_1046(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_855(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x2617C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_411(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_818(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_856(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x261AD Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_1047(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1005(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_656(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_818(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_857(Hash hParam0, int iParam1) // Position - 0x2623D Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_1048(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_858(Hash hParam0) // Position - 0x26285 Hash - 0x708BD33E ^0xBC0EC088
{
	char* propertyName;
	char* propertyName2;
	int value;

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
	value = func_210();
	func_211(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_859(Hash hParam0) // Position - 0x26354 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_1049(hParam0))
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

BOOL func_860(Hash hParam0) // Position - 0x263D0 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_861(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x263E2 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_862(Hash hParam0) // Position - 0x26408 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_344(50))
			{
				if (!func_344(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_344(51))
			{
				if (!func_344(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_863() // Position - 0x26474 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_864(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x26485 Hash - 0x4FC4FA99 ^0x540DBE26
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

	if (!func_411(hParam1, 0))
		return false;

	if (func_581(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_120() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_652(hParam1) == -999503751)
		return true;

	num = func_1050(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_412(hParam1, 866047851))
	{
		num2 = func_898(num, 1);
	
		if (func_1051(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
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
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_412(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_934(1868067663, &unk))
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
			num5 = func_1052(componentHash, num, metaPedType, isMP);
			num4 = func_1052(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
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
			hash = func_652(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
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
			hash = func_652(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_412(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_1053(Global_1946054.f_1497.f_1[num2 /*3*/]))
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

void func_865() // Position - 0x26795 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_866() // Position - 0x267B6 Hash - 0xDC6E219D ^0xBD2A18DD
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

int func_867() // Position - 0x2680B Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_410(func_1054(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_868(Hash hParam0) // Position - 0x2683D Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_869(int iParam0, Hash hParam1) // Position - 0x268D3 Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_410(hash, 1, false) && func_410(hash2, 1, false))
		return true;

	return false;
}

Hash func_870(Hash hParam0) // Position - 0x26A34 Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_871(Hash hParam0, int iParam1) // Position - 0x26AFB Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_1055(hParam0);

	if (num != -15)
	{
		func_211(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_1056(num, true);
	}

	return false;
}

void func_872(int iParam0) // Position - 0x26B2D Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_873(int iParam0) // Position - 0x26B48 Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_874(int iParam0) // Position - 0x26B63 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_875(int iParam0) // Position - 0x26B7E Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_876(int iParam0) // Position - 0x26B99 Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_885(hash);
	num3 = func_885(hash2);
	num4 = func_885(hash3);
	num6 = func_886(hash);
	num7 = func_886(hash2);
	num8 = func_886(hash3);

	if (iParam0 != 2)
	{
		num5 = func_885(hash4);
		num9 = func_886(hash4);
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

void func_877(int iParam0) // Position - 0x26D0C Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_878() // Position - 0x26D27 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1057(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_879() // Position - 0x26D60 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_880(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x26D72 Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_1032(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1032(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1032(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_1032(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1032(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1032(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash) && func_1032(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_1032(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1032(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1032(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash) && func_1032(hash2) && func_1032(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_1032(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1032(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1032(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_1032(hash) && func_1032(hash2) && func_1032(hash3) && func_1032(hash4))
			return true;
	}

	return false;
}

void func_881(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x27237 Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_1060();
			func_1058(iParam0);
			break;
	
		case -1925798111:
			func_1058(-1925798111);
			func_1059(-919512195);
			func_1059(420709909);
			func_1059(1703426636);
			break;
	
		case -1838352012:
			func_1059(-1674179981);
			func_1059(-1835851517);
			func_1058(-1838352012);
			break;
	
		case -1835851517:
			func_1059(-1674179981);
			func_1059(-1838352012);
			func_1058(-1835851517);
			break;
	
		case -1738165526:
			func_1058(-1738165526);
			func_1059(0);
			func_1059(473295046);
			break;
	
		case -1717960576:
			func_1059(210001842);
			func_1058(-1717960576);
			break;
	
		case -1674179981:
			func_1059(-1835851517);
			func_1059(-1838352012);
			func_1058(-1674179981);
			break;
	
		case -1612662716:
			func_1059(1822001510);
			func_1058(-1612662716);
			break;
	
		case -1414537028:
			func_1059(38162571);
			func_1059(1350391819);
			func_1059(54073871);
			func_1058(-1414537028);
			break;
	
		case -1311865656:
			func_1058(-1311865656);
			func_1059(1509509592);
			func_1059(-959357075);
			func_1059(405586984);
			break;
	
		case -1271608261:
			func_1059(-150493654);
			func_1059(1846061697);
			func_1059(-1145519186);
			func_1058(-1271608261);
			break;
	
		case -1223121209:
			func_1058(-1223121209);
			func_1059(630808005);
			break;
	
		case -1145519186:
			func_1059(-150493654);
			func_1059(-1271608261);
			func_1059(1846061697);
			func_1058(-1145519186);
			break;
	
		case -1124061431:
			func_1059(198200492);
			func_1058(-1124061431);
			func_1059(52706132);
			func_1059(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_1058(-1080627546);
			else
				func_1059(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1059(-538889627);
			func_1059(-538880323);
			func_1059(-1056767524);
			func_1058(iParam0);
			break;
	
		case -959357075:
			func_1058(-959357075);
			func_1059(1509509592);
			func_1059(405586984);
			func_1059(-1311865656);
			break;
	
		case -919512195:
			func_1058(-919512195);
			func_1059(-1925798111);
			func_1059(420709909);
			func_1059(1703426636);
			break;
	
		case -664252410:
			func_1059(2019386373);
			func_1059(2109952320);
			func_1058(-664252410);
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
			func_1061();
			func_1058(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_1058(-524145696);
			else
				func_1059(-524145696);
		
			func_1059(1626481264);
			func_1059(282809459);
			break;
	
		case -502324015:
			func_1059(1497516462);
			func_1059(2016141805);
			func_1059(1010885152);
			func_1058(-502324015);
			break;
	
		case -434590080:
			func_1059(1376646519);
			func_1059(931649776);
			func_1059(1743048395);
			func_1059(449774763);
			func_1058(-434590080);
			break;
	
		case -404698347:
			func_1059(1306158345);
			func_1059(1952610440);
			func_1059(-223469678);
			func_1059(1517904467);
			func_1058(-404698347);
			break;
	
		case -259123672:
			func_1059(198200492);
			func_1059(-1124061431);
			func_1059(52706132);
			func_1058(-259123672);
			break;
	
		case -223469678:
			func_1059(1306158345);
			func_1059(1952610440);
			func_1059(-404698347);
			func_1059(1517904467);
			func_1058(-223469678);
			break;
	
		case -150493654:
			func_1059(-1271608261);
			func_1059(1846061697);
			func_1059(-1145519186);
			func_1058(-150493654);
			break;
	
		case 0:
			func_1058(0);
			func_1059(473295046);
			func_1059(-1738165526);
			break;
	
		case 38162571:
			func_1059(-1414537028);
			func_1059(1350391819);
			func_1059(54073871);
			func_1058(38162571);
			break;
	
		case 52706132:
			func_1059(198200492);
			func_1059(-1124061431);
			func_1058(52706132);
			func_1059(-259123672);
			break;
	
		case 54073871:
			func_1059(-1414537028);
			func_1059(38162571);
			func_1059(1350391819);
			func_1058(54073871);
			break;
	
		case 198200492:
			func_1058(198200492);
			func_1059(-1124061431);
			func_1059(52706132);
			func_1059(-259123672);
			break;
	
		case 210001842:
			func_1059(-1717960576);
			func_1058(210001842);
			break;
	
		case 280705402:
			func_1059(1766284049);
			func_1059(1926308480);
			func_1058(280705402);
			break;
	
		case 282809459:
			func_1058(282809459);
			func_1059(1626481264);
			func_1059(-524145696);
			break;
	
		case 405586984:
			func_1058(405586984);
			func_1059(1509509592);
			func_1059(-959357075);
			func_1059(-1311865656);
			break;
	
		case 420709909:
			func_1058(420709909);
			func_1059(-919512195);
			func_1059(-1925798111);
			func_1059(1703426636);
			break;
	
		case 439465264:
			if (func_761(1609506757))
				if (bParam1)
					func_1058(439465264);
				else
					func_1059(439465264);
			break;
	
		case 449774763:
			func_1059(1376646519);
			func_1059(931649776);
			func_1059(-434590080);
			func_1059(1743048395);
			func_1058(449774763);
			break;
	
		case 473295046:
			func_1058(473295046);
			func_1059(0);
			func_1059(-1738165526);
			break;
	
		case 630808005:
			func_1058(630808005);
			func_1059(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_1058(885203519);
			else
				func_1059(885203519);
			break;
	
		case 931649776:
			func_1059(1376646519);
			func_1059(-434590080);
			func_1059(1743048395);
			func_1059(449774763);
			func_1058(931649776);
			break;
	
		case 932909855:
			func_1058(932909855);
			func_1059(2051822093);
			break;
	
		case 1010885152:
			func_1059(1497516462);
			func_1059(2016141805);
			func_1058(1010885152);
			func_1059(-502324015);
			break;
	
		case 1306158345:
			func_1059(1952610440);
			func_1059(-223469678);
			func_1059(-404698347);
			func_1059(1517904467);
			func_1058(1306158345);
			break;
	
		case 1350391819:
			func_1059(-1414537028);
			func_1059(38162571);
			func_1059(54073871);
			func_1058(1350391819);
			break;
	
		case 1376646519:
			func_1059(931649776);
			func_1059(-434590080);
			func_1059(1743048395);
			func_1059(449774763);
			func_1058(1376646519);
			break;
	
		case 1453909576:
			func_1058(1453909576);
			func_1059(1643531967);
			break;
	
		case 1497516462:
			func_1058(1497516462);
			func_1059(2016141805);
			func_1059(1010885152);
			func_1059(-502324015);
			break;
	
		case 1509509592:
			func_1058(1509509592);
			func_1059(405586984);
			func_1059(-959357075);
			func_1059(-1311865656);
			break;
	
		case 1517904467:
			func_1059(1306158345);
			func_1059(1952610440);
			func_1059(-223469678);
			func_1059(-404698347);
			func_1058(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_1059(439465264);
				func_1058(1609506757);
			}
			else
			{
				func_1059(1609506757);
				func_1059(439465264);
			}
			break;
	
		case 1626481264:
			func_1058(1626481264);
			func_1059(-524145696);
			func_1059(282809459);
			break;
	
		case 1643531967:
			func_1058(1643531967);
			func_1059(1453909576);
			break;
	
		case 1703426636:
			func_1058(1703426636);
			func_1059(-919512195);
			func_1059(-1925798111);
			func_1059(420709909);
			break;
	
		case 1743048395:
			func_1059(1376646519);
			func_1059(931649776);
			func_1059(-434590080);
			func_1059(449774763);
			func_1058(1743048395);
			break;
	
		case 1766284049:
			func_1059(280705402);
			func_1059(1926308480);
			func_1058(1766284049);
			break;
	
		case 1822001510:
			func_1059(-1612662716);
			func_1058(1822001510);
			break;
	
		case 1846061697:
			func_1059(-150493654);
			func_1059(-1271608261);
			func_1059(-1145519186);
			func_1058(1846061697);
			break;
	
		case 1926308480:
			func_1059(1766284049);
			func_1059(280705402);
			func_1058(1926308480);
			break;
	
		case 1952610440:
			func_1059(1306158345);
			func_1059(-223469678);
			func_1059(-404698347);
			func_1059(1517904467);
			func_1058(1952610440);
			break;
	
		case 2016141805:
			func_1059(1497516462);
			func_1058(2016141805);
			func_1059(1010885152);
			func_1059(-502324015);
			break;
	
		case 2019386373:
			func_1059(-664252410);
			func_1059(2109952320);
			func_1058(2019386373);
			break;
	
		case 2051822093:
			func_1058(2051822093);
			func_1059(932909855);
			break;
	
		case 2109952320:
			func_1059(2019386373);
			func_1059(-664252410);
			func_1058(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_761(iParam0))
					func_1058(iParam0);
			else if (func_761(iParam0))
				func_1059(iParam0);
			break;
	}

	return;
}

void func_882(Hash hParam0) // Position - 0x27D5A Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_1062(hParam0))
		func_1064(func_1063(hParam0));

	return;
}

int func_883() // Position - 0x27D76 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_1062(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_884(Hash hParam0, int iParam1, int iParam2) // Position - 0x27DAE Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_885(hash);
	num3 = func_885(hash2);
	num4 = func_885(hash3);
	num6 = func_886(hash);
	num7 = func_886(hash2);
	num8 = func_886(hash3);

	if (iParam2 != 2)
	{
		num5 = func_885(hash4);
		num9 = func_886(hash4);
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

int func_885(Hash hParam0) // Position - 0x27FC1 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_410(hParam0, 1, false))
		num = func_630(hParam0, false, false);

	return num;
}

int func_886(Hash hParam0) // Position - 0x27FE0 Hash - 0x899A1C9C ^0x899A1C9C
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

int func_887(Hash hParam0) // Position - 0x280D2 Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_888(Hash hParam0, int iParam1) // Position - 0x280E0 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_889(Hash hParam0, int iParam1) // Position - 0x280F0 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_783(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_890(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2811F Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_889(hParam1, 5) || hParam0 == func_889(hParam1, 6) || hParam0 == func_889(hParam1, 7) || hParam0 == func_889(hParam1, 8) || hParam0 == func_889(hParam1, 9))
	{
		func_880(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_647(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_649(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_891(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x281A1 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_889(hParam1, 5) || hParam0 == func_889(hParam1, 6) || hParam0 == func_889(hParam1, 7) || hParam0 == func_889(hParam1, 8) || hParam0 == func_889(hParam1, 9))
	{
		if (func_880(hParam1, hParam0, &num, false, 0, false))
		{
			func_647(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_649(51, 0, 0, num, func_837(hParam1, 20), 1, 0);
		}
		else
		{
			func_647(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_649(51, 0, 0, num, func_837(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_892() // Position - 0x28262 Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_835(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_893(Hash hParam0) // Position - 0x2828B Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_894(Hash hParam0) // Position - 0x2829A Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_1065(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_895(Hash hParam0) // Position - 0x282B3 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_896(Hash hParam0, var uParam1, var uParam2) // Position - 0x282C2 Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_897(var uParam0) // Position - 0x284CE Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_1066(i, 1);
	}

	return -358215195;
}

int func_898(int iParam0, int iParam1) // Position - 0x28509 Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_899(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x286DA Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_1067();

	if (iParam2 == 39)
	{
		unk = { func_826(hParam0, true, false) };
		iParam2 = func_898(func_897(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_412(hParam0, 866047851) && func_1051(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_902(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_1068(func_1066(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_1069(iParam2);
	func_1070(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_1071(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1071(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_1072(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_1073(hParam0, iParam2, hParam1, func_120() != -1);

	if (bParam4)
		func_1074(&(Global_1946054.f_1378), true, 3);
	else
		func_1074(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_1075(func_1066(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_900(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x288E7 Hash - 0x5AF76643 ^0x5AF76643
{
	func_1076(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_901(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x28900 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_1077(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_1078(num);
	return;
}

BOOL func_902(BOOL bParam0) // Position - 0x28932 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_903() // Position - 0x28943 Hash - 0xB6203BF0 ^0x217DD714
{
	func_1079(&(Global_1946054.f_2776));
	func_1080(32768);
	func_1075(1108822547, 8, 6);
	return;
}

int func_904(int iParam0) // Position - 0x2896A Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_898(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_905(int iParam0) // Position - 0x289CE Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_1081(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_1082(num);
	return;
}

void func_906(int iParam0, int iParam1, int iParam2) // Position - 0x28A12 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_1082(num);
	return;
}

float func_907() // Position - 0x28A32 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_1083())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_1084(2);

	if (Global_1347477.f_119)
		return func_1084(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1085();
	num3 = func_1086();
	num4 = func_1087();
	num5 = func_1088();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1089());
	num8 = func_1084(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1090(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1091(3, num9, num9 > 100f);
	return func_1092(num8, -100f, 100f);
}

float func_908() // Position - 0x28B5B Hash - 0x951B1CCC ^0x7B312694
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

	if (func_1083())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_1084(1);

	if (Global_1347477.f_119)
		return func_1084(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1085();
	num3 = func_1086();
	num4 = func_1087();
	num5 = func_1088();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1089());
	num8 = func_1084(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1090(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1091(2, num9, num9 > 100f);
	return func_1092(num8, -100f, 100f);
}

float func_909() // Position - 0x28C84 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_1083())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_1084(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_1093())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_1094())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_1084(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1085();
	num3 = func_1086();
	num4 = func_1087();
	num5 = func_1088();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1089());
	num8 = func_1084(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1090(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1091(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_1084(0);

	return func_1092(num8, -100f, 100f);
}

BOOL func_910(int iParam0, int iParam1) // Position - 0x28E2B Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_911(Hash hParam0) // Position - 0x28E44 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_912(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x28E54 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_411(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_830(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_656(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_818(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_913(int iParam0, BOOL bParam1) // Position - 0x28EB6 Hash - 0x6C404ADF ^0x7D516F33
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
				return func_1095();
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

int func_914(Hash hParam0) // Position - 0x28F45 Hash - 0x9830D1FB ^0x9830D1FB
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

BOOL func_915(int iParam0) // Position - 0x29358 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

void func_916(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29377 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_915(iParam0))
		return;

	if (func_1096(iParam0))
		return;

	if (!func_1097(iParam0))
		func_1098(iParam0, true, false);

	hash = func_1099(iParam0);

	if (hash != 0 && !(iParam0 >= 0 && iParam0 <= 5))
		if (func_1100(iParam0, 512))
			func_901(30, hash, 0, 0, false);

	if (!func_1101() && !bParam1 && !func_298(0, false, true))
		func_1102(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_1103(iParam0, 6);

	if (bParam2)
		if (!func_298(0, false, true))
			func_733(true, 4);

	return;
}

int func_917() // Position - 0x2943D Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_918(int iParam0, BOOL bParam1) // Position - 0x2944B Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_913(iParam0, false) < func_1104(iParam0, bParam1);
}

BOOL func_919(Hash hParam0, var uParam1) // Position - 0x29463 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_652(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_920(int iParam0) // Position - 0x294A7 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_898(iParam0, 1) /*3*/] != Global_1946054.f_57[func_898(iParam0, 1) /*11*/];
}

void func_921(int iParam0, Hash hParam1) // Position - 0x294DF Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_412(hParam1, 130796156))
	{
		func_1105(hParam1, false);
	}
	else if (func_412(hParam1, 930141731))
	{
		func_1105(hParam1, true);
		func_1106(iParam0);
	}

	return;
}

void func_922(var uParam0, int iParam1) // Position - 0x2951A Hash - 0x84556899 ^0xA18AFCFA
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

int func_923(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x295FB Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_1107(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_1108(anParam2, hParam0, num);
	return 1;
}

var func_924(int iParam0) // Position - 0x29664 Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x29676 Hash - 0xA17D549C ^0x5C7C7065
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

Hash func_926(Hash hParam0) // Position - 0x2974D Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_1109(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_927() // Position - 0x29777 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_928(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x29784 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_929(BOOL bParam0, var uParam1, var uParam2) // Position - 0x297EE Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_930(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x29805 Hash - 0x92B705D3 ^0xB783F681
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

const char* func_931(const char* sParam0, int iParam1) // Position - 0x298F8 Hash - 0x9E99F03 ^0x9B19503D
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

Hash func_932(Hash hParam0) // Position - 0x29912 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_898(func_1110(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_933(var uParam0) // Position - 0x29941 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_934(81053684, uParam0))
		return true;

	if (func_934(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_934(Hash hParam0, var uParam1) // Position - 0x2996E Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_898(func_1110(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_652(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

BOOL func_935() // Position - 0x299E5 Hash - 0x977C1DDD ^0xC3E256B5
{
	return Global_1347398.f_1 == 0;
}

void func_936(int iParam0) // Position - 0x299F5 Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1347398.f_1 = iParam0;
	return;
}

BOOL func_937() // Position - 0x29A05 Hash - 0xED2BCA69 ^0xC0192F0A
{
	return Global_1347398.f_1 == 1000;
}

BOOL func_938() // Position - 0x29A17 Hash - 0xED2BCA69 ^0x7BC9E36A
{
	return Global_1347398.f_1 == 2000;
}

BOOL func_939() // Position - 0x29A29 Hash - 0xED2BCA69 ^0xC3B8992
{
	return Global_1347398.f_1 == 3000;
}

void func_940(int iParam0) // Position - 0x29A3B Hash - 0x4A1A3440 ^0xAE5E6967
{
	int i;

	if (func_120() != -1)
		return;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_214(func_1111(i), 0))
			if (PED::IS_PED_GROUP_MEMBER(func_1111(i), func_461(), true))
				func_1112(i, iParam0);
	}

	return;
}

int func_941(int iParam0) // Position - 0x29A89 Hash - 0x25F13EA4 ^0x25F13EA4
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

void func_942(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x29AC0 Hash - 0xF543C309 ^0x6A5F3FAF
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
					if (func_1113() > Global_32074.f_2697.f_6[i /*6*/].f_5)
						Global_32074.f_2697.f_6[i /*6*/].f_5 = func_1113();
				
					func_211(&(Global_32074.f_2697.f_6[i /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, false);
					func_207(&(Global_1415419.f_19[i /*12*/].f_11), 2);
				}
			}
		}
	}

	return;
}

void func_943(int iParam0, int iParam1) // Position - 0x29B60 Hash - 0xDBB0D96F ^0x1E9C29F0
{
	int num;
	int num2;
	int num3;

	if (iParam1 != 0)
	{
		num = func_758(iParam1);
		num2 = 17 + num;
		num3 = func_759(iParam0, num2);
	
		if (num3 < 0)
			return;
	
		Global_17504.f_2205[num3 /*2*/].f_1 = Global_17504.f_2205[num3 /*2*/].f_1 + 1;
	}

	return;
}

void func_944(int iParam0, int iParam1) // Position - 0x29BAA Hash - 0x3FB921A0 ^0xF693CD04
{
	int num;

	if (iParam1 != -1 && !func_112(iParam0, 8192))
	{
		num = func_759(iParam0, iParam1);
	
		if (num < 0)
			return;
	
		Global_17504.f_2205[num /*2*/].f_1 = Global_17504.f_2205[num /*2*/].f_1 + 1;
	}

	return;
}

void func_945(int iParam0, int iParam1) // Position - 0x29BF5 Hash - 0x9419F4C5 ^0x12847282
{
	int num;
	int num2;
	int offset;

	num = func_465(iParam0) + iParam1;
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_17504.f_12[num2], offset);
	return;
}

void func_946(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x29C25 Hash - 0xA47606A9 ^0x52E0FD9B
{
	int i;
	int num;
	var unk;

	if (func_81(iParam0, 512))
		uParam1 = { Global_36 };

	if (_IS_NULL_VECTOR(uParam1))
		return;

	if (!func_260(iParam0))
		return;

	num = -1;

	for (i = 0; i < Global_17504.f_2084; i = i + 1)
	{
		unk = { Global_17504.f_2084[i /*5*/] };
	
		if (_IS_NULL_VECTOR(unk))
			if (num < 0)
				num = i;
		else if (Global_17504.f_2084[i /*5*/].f_3 == iParam0)
			if (func_479(unk, uParam1, 1f, true))
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

void func_947(int iParam0) // Position - 0x29D72 Hash - 0xAD8FB48F ^0xAD8FB48F
{
	int i;

	for (i = 0; i < 120; i = i + 1)
	{
		func_961(i, iParam0);
	}

	return;
}

int func_948(int iParam0) // Position - 0x29D95 Hash - 0xE3B13A88 ^0xE3B13A88
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

void func_949(Hash hParam0, int iParam1) // Position - 0x2A23C Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

int func_950(int iParam0) // Position - 0x2A24F Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_533(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_20;
}

BOOL func_951(int iParam0) // Position - 0x2A26F Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16074 && iParam0 != false;
}

BOOL func_952() // Position - 0x2A283 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

BOOL func_953(var uParam0) // Position - 0x2A293 Hash - 0x5001E582 ^0x5001E582
{
	return func_15(*uParam0, 1);
}

void func_954(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2A2A3 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_1114(eptParam1))
		{
			func_1115(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_1116(pedParam0, 0, true);
	
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
			func_1117(pedParam0, false);
			flag = true;
		}
	
		func_1118(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_955(int iParam0) // Position - 0x2A384 Hash - 0xA8723863 ^0xEBF84F39
{
	if (func_260(iParam0))
		return Global_17504.f_42[iParam0 /*8*/].f_4;

	return 0;
}

int func_956(int iParam0) // Position - 0x2A3A4 Hash - 0x2117305A ^0x2117305A
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

int func_957(int iParam0, int iParam1) // Position - 0x2A551 Hash - 0x8FA0E29 ^0xC3F68E87
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

BOOL func_958(int iParam0, int iParam1) // Position - 0x2B66A Hash - 0xB179A71 ^0xB7E8A74F
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1 != false;
}

void func_959(int iParam0, int iParam1) // Position - 0x2B69D Hash - 0x64E216F2 ^0x314CECED
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return;

	Global_1393237.f_11[iParam0 /*30*/].f_10 = Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1;
	return;
}

BOOL func_960(int iParam0) // Position - 0x2B6D9 Hash - 0x5000025C ^0x5000025C
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

void func_961(int iParam0, int iParam1) // Position - 0x2B706 Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_260(iParam0))
		return;

	Global_1310750[iParam0 /*111*/].f_1 = Global_1310750[iParam0 /*111*/].f_1 - Global_1310750[iParam0 /*111*/].f_1 && iParam1;
	return;
}

BOOL func_962() // Position - 0x2B73D Hash - 0x50F36DAB ^0xF55A49EF
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

void func_963(BOOL bParam0) // Position - 0x2B76E Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_964(int iParam0) // Position - 0x2B781 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_965(int iParam0) // Position - 0x2B797 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_1119(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_966(Ped pedParam0, int* piParam1) // Position - 0x2B7D8 Hash - 0xFB53563C ^0x22205B46
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
		if (PED::IS_PED_IN_COMBAT(pedParam0, func_1120(flag2 && !flag, Global_35, 0)))
			return true;

	return false;
}

void func_967(var uParam0) // Position - 0x2B850 Hash - 0xBF3B7066 ^0xBF3B7066
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_984(&uParam0->[i /*17*/]))
			func_598(&uParam0->[i /*17*/], 14);
	}

	return;
}

Prompt func_968(Ped pedParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x2B885 Hash - 0xAAA1EE43 ^0x1865183
{
	int num;

	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		num = piParam1->f_3;
		uParam2->[num /*17*/].f_8 = 6;
		func_1121(pedParam0, &uParam2->[num /*17*/], fParam3, 3, 0, 6, bParam4, false);
	
		if (func_195(uParam2->[num /*17*/].f_6))
		{
			func_598(&uParam2->[num /*17*/], 11);
			return Global_1945188[uParam2->[num /*17*/].f_6 /*18*/].f_3;
		}
	}

	return 0;
}

int func_969(var uParam0) // Position - 0x2B8F5 Hash - 0x642E71C7 ^0x2B612313
{
	int num;
	int num2;

	num = func_451(*uParam0);
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

int func_970(var uParam0, int iParam1) // Position - 0x2B973 Hash - 0x2E6C9ADE ^0xD0DFC5BC
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_7 == iParam1)
			return i;
	}

	return -1;
}

void func_971(int* piParam0, int* piParam1) // Position - 0x2B9A2 Hash - 0xFCEC0C12 ^0x65EC5F60
{
	if (!func_789(piParam0, 23))
	{
		if (piParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_598(piParam1, 19);
			func_986(piParam0, 23);
			func_1122(piParam1, 2);
		}
	}

	return;
}

BOOL func_972(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2B9DF Hash - 0x8E7018BE ^0x1BA834FB
{
	Entity outEntity;

	outEntity = 0;

	if (func_1123(16))
		return Global_1935630.f_58 == pedParam0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(outEntity))
			{
				if (ENTITY::IS_ENTITY_A_PED(outEntity))
				{
					func_1124(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
				
					if (Global_1935630.f_58 == pedParam0)
						return true;
				}
			}
		}
	}

	return false;
}

void func_973(Ped pedParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x2BA54 Hash - 0x1F7F43A4 ^0x1F7F43A4
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		func_1121(pedParam0, &uParam1->[i /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
	
		if (bParam8)
			MISC::CLEAR_BIT(&uParam1->[i /*17*/], 14);
	}

	return;
}

int func_974(int iParam0) // Position - 0x2BA99 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_975(Ped pedParam0) // Position - 0x2BAA5 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_1125(pedParam0, 4) || func_1125(pedParam0, 5);
}

BOOL func_976(Ped pedParam0) // Position - 0x2BAC1 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_1125(pedParam0, 7);
}

BOOL func_977(Ped pedParam0) // Position - 0x2BAD0 Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_1125(pedParam0, 6);
}

void func_978(Ped pedParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x2BADF Hash - 0x28F375A9 ^0x20CFE665
{
	if (MISC::IS_BIT_SET(*piParam1, 14))
	{
		if (func_984(piParam1))
		{
			MISC::CLEAR_BIT(piParam1, 14);
			func_1121(pedParam0, piParam1, fParam2, iParam3, iParam4, iParam5, bParam6, false);
		}
	}

	return;
}

BOOL func_979(Ped pedParam0, int* piParam1, int* piParam2, BOOL bParam3, float fParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, float fParam14, BOOL bParam15, int iParam16) // Position - 0x2BB17 Hash - 0x9E28CA55 ^0x9E28CA55
{
	BOOL flag;
	BOOL flag2;

	flag = bParam3;

	if (bParam3)
	{
		flag2 = false;
	
		if (func_1126(piParam1, piParam2, pedParam0, bParam9, bParam10, iParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
			flag2 = true;
	
		if (func_804(piParam2->f_6, false))
		{
			if (flag2)
			{
				func_198(piParam2->f_6, false, true);
				flag = false;
			}
		}
		else if (!flag2)
		{
			func_198(piParam2->f_6, true, true);
			flag = false;
		}
	
		if (bParam8)
			func_1127(piParam2->f_6, pedParam0, 0, true, -1);
	}

	return flag;
}

BOOL func_980(int iParam0, int iParam1) // Position - 0x2BB95 Hash - 0xFED1B5B5 ^0xFED1B5B5
{
	if (iParam0 == 4 || iParam0 == 6 || iParam0 == 5)
	{
		if (func_1128(iParam1, true))
			return true;
	}
	else if (func_1129(iParam1, true))
	{
		func_1130(iParam1, true);
		return true;
	}

	return false;
}

void func_981(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2BBDF Hash - 0x6249DB64 ^0x6249DB64
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_372(&uParam0->[i /*17*/], bParam1, bParam2);
	}

	return;
}

BOOL func_982(int* piParam0, float fParam1, BOOL bParam2) // Position - 0x2BC09 Hash - 0xD16C56E3 ^0xCC194231
{
	if (piParam0->f_2 != 3)
		if (bParam2 || fParam1 > 0f)
			return true;

	return false;
}

void func_983(int* piParam0, int iParam1) // Position - 0x2BC2D Hash - 0xCA0C813A ^0x642D602A
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

BOOL func_984(int* piParam0) // Position - 0x2BC6A Hash - 0xA750EC1D ^0xA62AC3E5
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(piParam0->f_5))
		return true;

	return false;
}

BOOL func_985(Ped pedParam0) // Position - 0x2BC83 Hash - 0x38F1F494 ^0xD89820BA
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

void func_986(int* piParam0, int iParam1) // Position - 0x2BD01 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

BOOL func_987(int* piParam0) // Position - 0x2BD11 Hash - 0x3DD78BEA ^0xF17C3771
{
	if (piParam0->f_1 > -1)
		return true;

	return false;
}

BOOL func_988(int iParam0, int iParam1) // Position - 0x2BD26 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_120() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_989(int iParam0) // Position - 0x2BD59 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_120() != -1)
		if (func_910(iParam0, 4))
			return false;
	else if (func_910(iParam0, 2))
		return false;

	return true;
}

BOOL func_990(int iParam0) // Position - 0x2BD89 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_910(iParam0, 65536) && !func_910(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_910(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_910(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_991(int iParam0) // Position - 0x2BE35 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_992() // Position - 0x2BE48 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_993(int iParam0) // Position - 0x2BE57 Hash - 0x14DDF3C9 ^0xAD14D790
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] & 32 != 0;

	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

void func_994(var uParam0, int iParam1) // Position - 0x2BEA0 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

struct<18> func_995(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2BEB5 Hash - 0x84700F53 ^0xB9E7AA96
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

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

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

struct<4> func_996(BOOL bParam0) // Position - 0x2BF87 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_818(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_855(923904168, func_1001(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_855(923904168, func_1001(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_855(923904168, func_1001(bParam0), -740156546, false);
}

void func_997(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2C020 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_998(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x2C03B Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_818(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

void func_999(int iParam0) // Position - 0x2C060 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_351(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_1000(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x2C093 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_411(hParam0, 0))
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

struct<4> func_1001(BOOL bParam0) // Position - 0x2C0E1 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_855(joaat("character"), func_1131(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_1002(Hash hParam0, BOOL bParam1) // Position - 0x2C0FD Hash - 0x62864AB ^0xBC339691
{
	if (func_652(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_344(24);
		else
			return true;

	return false;
}

struct<4> func_1003(BOOL bParam0) // Position - 0x2C136 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_818(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_855(271701509, func_1001(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_855(271701509, func_1001(bParam0), 12999093, false);
}

BOOL func_1004(Hash hParam0, Hash hParam1) // Position - 0x2C19A Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_652(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_1005(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2C1F9 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_818(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_1006(Hash hParam0) // Position - 0x2C229 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_1132(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_1007(var uParam0) // Position - 0x2C245 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_411(*uParam0, 0))
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

BOOL func_1008(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x2C2C1 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_411(hParam0, 0))
		return false;

	unk = { func_826(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_852(398 + i, 1);
	
		if (func_853(hParam0, &unk, hash, false))
		{
			flag = func_854(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_1009(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x2C355 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_411(hParam0, 0))
		return 0;

	guid = { func_855(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_818(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_1010(int iParam0) // Position - 0x2C39D Hash - 0x92F940EE ^0x92F940EE
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

float func_1011(int iParam0) // Position - 0x2C3F1 Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_1133(iParam0);
	
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
			return func_1133(iParam0);
	
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
			return func_1133(iParam0);
	
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

BOOL func_1012(int iParam0) // Position - 0x2C6BF Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_344(18);
	
		case 1:
			return func_344(19);
	
		case 2:
			return func_344(20);
	
		default:
		
	}

	return true;
}

int func_1013(int iParam0) // Position - 0x2C6FD Hash - 0xBCE241D5 ^0x339AC097
{
	return func_1134(Global_40.f_11095.f_11[iParam0]);
}

void func_1014(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2C715 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_120() != -1)
		return;

	if (Global_1347477.f_117 || !func_344(31))
		return;

	num = func_1013(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_1013(iParam0);

	if (func_1135(iParam0) && func_1136(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_1137(num2, fParam1);
		
			if (fParam1 > (float)func_1138(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_595(func_1139(iParam0), false);
				
					func_1140(iParam0, num3, num4);
					func_1141(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_1015(int iParam0) // Position - 0x2C817 Hash - 0xEB40D7A4 ^0xA7ECE274
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_1016(int iParam0) // Position - 0x2C823 Hash - 0x21FAF347 ^0xAF7D8F21
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

int func_1017() // Position - 0x2C85E Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_1142(Global_40.f_12019);
}

int func_1018() // Position - 0x2C870 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_836(i);
	
		if (func_410(hash, 1, false) || func_1024(func_1023(hash)))
			num = num + 1;
	}

	return num;
}

int func_1019() // Position - 0x2C8B9 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1143(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_1020() // Position - 0x2C8F2 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_1029(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_1021() // Position - 0x2C92B Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_1022(int iParam0) // Position - 0x2C93D Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_1023(Hash hParam0) // Position - 0x2C9F6 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_1024(BOOL bParam0) // Position - 0x2CA8C Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_1025(int iParam0) // Position - 0x2CA9F Hash - 0x2EAAD390 ^0xE78779A8
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

int func_1026(int iParam0) // Position - 0x2CAD8 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_1027(int iParam0) // Position - 0x2CB1D Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(Hash hParam0) // Position - 0x2CB66 Hash - 0xA17D549C ^0xBBF4150A
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

BOOL func_1029(Hash hParam0) // Position - 0x2CC72 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(Hash hParam0) // Position - 0x2CC82 Hash - 0xA17D549C ^0x1D413C99
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

char* func_1031(int iParam0) // Position - 0x2CD3D Hash - 0x2EAAD390 ^0x9DE34F70
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

BOOL func_1032(Hash hParam0) // Position - 0x2CD76 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_1144(hParam0) && func_410(hParam0, 1, false))
		return 1;
	else if (func_1145(hParam0) && func_1146(hParam0))
		return 1;

	return 0;
}

char* func_1033(Hash hParam0) // Position - 0x2CDB4 Hash - 0xCE702073 ^0x7ECF6709
{
	if (!func_411(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_694(hParam0));
}

int func_1034(int iParam0) // Position - 0x2CDD6 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_1035(int iParam0) // Position - 0x2CDE8 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1036(BOOL bParam0) // Position - 0x2CDFC Hash - 0xB584A39F ^0xFC4CA802
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

void func_1037(int iParam0) // Position - 0x2CE3A Hash - 0x2EDDC601 ^0xD5F96979
{
	Any itemContextByIndex;

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

void func_1038(BOOL bParam0) // Position - 0x2CEA8 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_1039(BOOL bParam0) // Position - 0x2CEE2 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_1040(BOOL bParam0) // Position - 0x2CF1C Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_1041(BOOL bParam0) // Position - 0x2CF56 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_1042(BOOL bParam0) // Position - 0x2CF79 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_1043(BOOL bParam0) // Position - 0x2CFBB Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_1044(int iParam0) // Position - 0x2CFFD Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_898(iParam0, 1) /*3*/];
}

void func_1045() // Position - 0x2D025 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1147();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_655(joaat("weapon_revolver_cattleman_john"));
		func_700(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_655(joaat("weapon_melee_knife_john"));
		func_700(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_1046(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x2D09D Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_818(false);
	*panParam1 = { func_855(hParam0, func_996(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_1047(Hash hParam0) // Position - 0x2D0E2 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_1048(int iParam0, int iParam1) // Position - 0x2D0F8 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_1049(Hash hParam0) // Position - 0x2D10E Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_1050(Hash hParam0) // Position - 0x2D11C Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_826(hParam0, true, false) };
	return func_897(unk.f_4);
}

int func_1051(Hash hParam0) // Position - 0x2D138 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_412(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_412(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_412(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_412(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_412(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_412(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

int func_1052(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2D289 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_898(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_902(524288))
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

BOOL func_1053(Hash hParam0) // Position - 0x2D2F4 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

Hash func_1054(int iParam0) // Position - 0x2D337 Hash - 0xB8EC44B7 ^0xD4FF48D5
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

int func_1055(Hash hParam0) // Position - 0x2D4B4 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_1148(hParam0, -1);
}

BOOL func_1056(int iParam0, BOOL bParam1) // Position - 0x2D4C3 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_1149(func_210(), iParam0, bParam1);
}

BOOL func_1057(Hash hParam0) // Position - 0x2D4D7 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_1058(int iParam0) // Position - 0x2D4E7 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_957(iParam0, 1);
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

void func_1059(int iParam0) // Position - 0x2D580 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_957(iParam0, 1);
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

void func_1060() // Position - 0x2D606 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_1059(-939420910);
	func_1059(-1187950766);
	func_1059(356365161);
	func_1059(753127042);
	func_1059(-2038424081);
	func_1059(1884271742);
	func_1059(459290420);
	return;
}

void func_1061() // Position - 0x2D64D Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_1059(704802028);
	func_1059(588987611);
	func_1059(2008888900);
	func_1059(1649996811);
	func_1059(227918160);
	func_1059(168171957);
	func_1059(1193080109);
	func_1059(-491981251);
	func_1059(-639037538);
	func_1059(-618620429);
	return;
}

BOOL func_1062(Hash hParam0) // Position - 0x2D6AF Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_1063(Hash hParam0) // Position - 0x2D6BF Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_1064(int iParam0) // Position - 0x2D704 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_1065(Hash hParam0) // Position - 0x2D71F Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_1066(int iParam0, int iParam1) // Position - 0x2D72F Hash - 0xE1D12727 ^0xA46110B3
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

void func_1067() // Position - 0x2D97E Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_1068(int iParam0) // Position - 0x2D9C5 Hash - 0x65A082AE ^0x65A082AE
{
	func_1075(iParam0, 8, 6);
	return;
}

void func_1069(int iParam0) // Position - 0x2D9D6 Hash - 0x20214C72 ^0x20214C72
{
	func_1150(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_1070(int iParam0, int iParam1) // Position - 0x2D9EB Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_1151(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_1071(Hash hParam0, int iParam1, int iParam2) // Position - 0x2DA02 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_1072(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2DA15 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_652(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_1152(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_1070(num2, num3);
	}

	if (func_920(-1586649372) && func_1152(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_1070(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_1153(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_1153(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_1070(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_1070(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1070(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_1053(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_412(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1070(num2, num3);
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
						func_1070(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_1070(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_652(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_1070(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_1053(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_652(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_1070(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_1153(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_1153(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1070(num2, num3);
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
						func_1070(num2, num3);
				}
			}
		
			func_1153(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_412(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1070(num2, num3);
			}
			break;
	
		case 1868067663:
			func_1153(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1070(num2, num3);
			}
			break;
	}

	switch (func_652(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_652(uParam0->f_1[num2 /*3*/]) || func_412(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1070(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_652(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1070(num2, num3);
			}
			break;
	}

	return;
}

Hash func_1073(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x2E059 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_1154(0);

	if (hParam2 != 0 && func_1155(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_1156(hParam0, func_1066(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_1074(var uParam0, BOOL bParam1, int iParam2) // Position - 0x2E09F Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_120() != -1;
	flag2 = func_1154(0);

	if (func_902(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_1066(num, 1);
		
			if (func_1157(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_1157(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_1052(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_1158(uParam0);

	if (num3 > 0)
	{
		if (!func_902(524288))
		{
			func_1077(524288);
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
				num5 = func_1066(num, 1);
			
				if (func_1157(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_1157(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_1052(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_1070(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_1080(524288);

	return;
}

void func_1075(int iParam0, int iParam1, int iParam2) // Position - 0x2E2BC Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_898(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_898(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_898(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_1076(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2E2FB Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_1159(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_120() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_1160(2, Global_26796.f_776) || Global_1946054.f_1497 != func_1099(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_1099(Global_40.f_7729);
				Global_1946054.f_1378 = func_1099(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1161(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_1162(false, true);

	return;
}

void func_1077(BOOL bParam0) // Position - 0x2E41A Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_1078(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2E42D Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_1163(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_1164(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_1077(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_1163(iParam0))
				return;
		
			func_1164(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_1077(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_906(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_1079(var uParam0) // Position - 0x2E639 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_1080(BOOL bParam0) // Position - 0x2E697 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_1081(int iParam0, int iParam1) // Position - 0x2E6AF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_1082(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2E6BE Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_1163(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_1163(20))
				return;
		}
	}

	func_1164(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_1077(8);
	return;
}

BOOL func_1083() // Position - 0x2E7C2 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_1084(int iParam0) // Position - 0x2E7DE Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_1085() // Position - 0x2E7F0 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_1165(13);
	num2 = func_1166(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_1086() // Position - 0x2E833 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_1087() // Position - 0x2E84E Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_863())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_1088() // Position - 0x2E86D Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_1089() // Position - 0x2E8AF Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_1090(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2E8BD Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_1167(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_1091(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2E909 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_1167(iParam0, 2, false, false);
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

float func_1092(float fParam0, float fParam1, float fParam2) // Position - 0x2EA4F Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_1093() // Position - 0x2EA76 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_1165(12) <= -99f;
}

BOOL func_1094() // Position - 0x2EA8A Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_1165(12) >= 99f;
}

int func_1095() // Position - 0x2EA9E Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_652(hash) == -999503751)
			if (func_1168() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_1096(int iParam0) // Position - 0x2EAEF Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_915(iParam0))
		return false;

	if (func_1100(iParam0, 4))
		return true;

	return false;
}

BOOL func_1097(int iParam0) // Position - 0x2EB14 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_915(iParam0))
		return false;

	if (func_1100(iParam0, 2))
		return true;

	return false;
}

void func_1098(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2EB39 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_915(iParam0))
		return;

	if (!func_1097(iParam0))
	{
		func_1103(iParam0, 2);
	
		if (bParam2)
			if (!func_298(0, false, true))
				func_733(true, 4);
	
		if (!func_1101() && !bParam1 && !func_298(0, false, true))
			func_1102(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1169(iParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_1099(int iParam0) // Position - 0x2EBAE Hash - 0xB8EC44B7 ^0xE877E9C4
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

BOOL func_1100(int iParam0, BOOL bParam1) // Position - 0x2F0E3 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_915(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

BOOL func_1101() // Position - 0x2F108 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_1102(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x2F128 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_1103(int iParam0, BOOL bParam1) // Position - 0x2F163 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_915(iParam0))
		return;

	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] || bParam1;
	return;
}

int func_1104(int iParam0, BOOL bParam1) // Position - 0x2F18F Hash - 0x14DDA26B ^0xFFF4A8D0
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

void func_1105(Hash hParam0, BOOL bParam1) // Position - 0x2F232 Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_1170(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_651(50);
			else
				func_651(48);
			break;
	
		case 1:
			if (bParam1)
				func_651(51);
			else
				func_651(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_1171(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_681();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_681();
			}
			break;
	
		case 3:
			func_651(24);
		
			if (bParam1)
			{
				if (!func_1171(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_681();
				}
			}
			break;
	}

	return;
}

void func_1106(int iParam0) // Position - 0x2F311 Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1172(0))
				num = num + 1;
		
			if (func_1172(2))
				num = num + 1;
		
			if (func_1172(4))
				num = num + 1;
		
			if (!func_1173(16))
			{
				if (num == 1)
				{
					func_1174();
					func_595(456, true);
					func_1175(16);
				}
			}
		
			if (!func_1173(32))
			{
				if (num >= 3)
				{
					func_1174();
					func_595(456, true);
					func_1175(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_1172(1))
				num = num + 1;
		
			if (func_1172(3))
				num = num + 1;
		
			if (func_1172(7))
				num = num + 1;
		
			if (!func_1173(1))
			{
				if (num == 1)
				{
					func_1176();
					func_595(457, true);
					func_1175(1);
				}
			}
		
			if (!func_1173(2))
			{
				if (num >= 3)
				{
					func_1176();
					func_595(457, true);
					func_1175(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_1172(5))
				num = num + 1;
		
			if (func_1172(6))
				num = num + 1;
		
			if (func_1172(8))
				num = num + 1;
		
			if (!func_1173(4))
			{
				if (num == 1)
				{
					func_1177();
					func_595(455, true);
					func_1175(4);
				}
			}
		
			if (!func_1173(8))
			{
				if (num >= 3)
				{
					func_1177();
					func_595(455, true);
					func_1175(8);
				}
			}
			break;
	}

	return;
}

void func_1107(var uParam0) // Position - 0x2F4A8 Hash - 0x2CE00B72 ^0x958A4727
{
	func_922(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_922(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_922(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_1108(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x2F4E2 Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_1178(anParam0))
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
BOOL func_1109(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x2F583 Hash - 0x92B705D3 ^0xB783F681
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

int func_1110(Hash hParam0) // Position - 0x2F679 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_897(outSlotId);
}

Ped func_1111(int iParam0) // Position - 0x2F69C Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_1179(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_1112(int iParam0, int iParam1) // Position - 0x2F6D6 Hash - 0xA6154E40 ^0x4D846014
{
	Ped ped;

	if (!func_1180(iParam0))
		return;

	ped = Global_1360165[iParam0 /*1157*/];

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (!ENTITY::IS_ENTITY_DEAD(ped))
			DECORATOR::DECOR_SET_INT(ped, "companion_manager_command", iParam1);

	return;
}

int func_1113() // Position - 0x2F716 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_1114(ePedType eptParam0) // Position - 0x2F722 Hash - 0x5000025C ^0x5000025C
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

void func_1115(Ped pedParam0, Hash hParam1) // Position - 0x2FB75 Hash - 0xEA1C858E ^0x3306D355
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_1181(pedParam0, hParam1))
		{
			if (func_1182(pedParam0, hParam1))
			{
				if (func_1183(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_1184(pedParam0);
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

void func_1116(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x2FC1F Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_1117(Ped pedParam0, BOOL bParam1) // Position - 0x2FC4F Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_1118(Ped pedParam0, int iParam1) // Position - 0x2FC94 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_1119(int iParam0) // Position - 0x2FCBB Hash - 0x6EC15CF9 ^0xE613EBE0
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

Ped func_1120(BOOL bParam0, Ped pedParam1, Ped pedParam2) // Position - 0x2FD3C Hash - 0xCF32FBA5 ^0xCF32FBA5
{
	if (bParam0)
		return pedParam1;

	return pedParam2;
}

void func_1121(Ped pedParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2FD50 Hash - 0x9E5AD4FF ^0xCE9B419A
{
	const char* str;
	int num;

	if (func_195(piParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*piParam1, 11))
			return;
	
		func_209(&(piParam1->f_6), false, true);
	}

	if (!func_195(piParam1->f_6) && !MISC::IS_BIT_SET(*piParam1, 4))
	{
		str = piParam1->f_5;
	
		if (func_984(piParam1))
		{
			if (piParam1->f_8 != iParam5)
				iParam5 = piParam1->f_8;
		
			piParam1->f_6 = func_1185(str, piParam1->f_7, pedParam0, piParam1->f_9, iParam4, false, 0, iParam5, fParam2, piParam1->f_2, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), piParam1->f_10, false);
		
			if (func_195(piParam1->f_6))
			{
				if (!bParam6)
				{
					num = -1;
					func_1127(piParam1->f_6, pedParam0, 0, true, num);
				}
				else
				{
					func_1186(piParam1->f_6, 17, true, true);
				}
			
				if (MISC::IS_BIT_SET(*piParam1, 1))
					if (MISC::IS_BIT_SET(*piParam1, 3))
						func_1187(piParam1->f_6, str, piParam1->f_16, piParam1->f_14, true);
					else
						func_196(piParam1->f_6, str, piParam1->f_14, true);
			
				if (MISC::IS_BIT_SET(*piParam1, 10))
					func_1186(piParam1->f_6, 16, true, true);
			
				if (!MISC::IS_BIT_SET(*piParam1, 0) || MISC::IS_BIT_SET(*piParam1, 13))
					func_198(piParam1->f_6, false, true);
				else
					func_198(piParam1->f_6, true, true);
			}
		}
	}

	return;
}

void func_1122(int* piParam0, int iParam1) // Position - 0x2FEA7 Hash - 0xF6A14047 ^0x2BDBE9DA
{
	if (!func_597(piParam0, 19))
	{
		if (piParam0->f_9 != iParam1)
		{
			piParam0->f_9 = iParam1;
			func_598(piParam0, 14);
		}
	}

	return;
}

BOOL func_1123(BOOL bParam0) // Position - 0x2FED2 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_1124(BOOL bParam0) // Position - 0x2FEE2 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_1125(Ped pedParam0, int iParam1) // Position - 0x2FEF3 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_1126(int* piParam0, int* piParam1, Ped pedParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, float fParam9, BOOL bParam10, int iParam11) // Position - 0x2FF32 Hash - 0x99448FD3 ^0x2F09ABA3
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

void func_1127(int iParam0, Ped pedParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x3006E Hash - 0x8A4F30F0 ^0xE1CE78DB
{
	int num;

	if (bParam3 && !func_195(iParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	num = func_424(iParam0);
	func_1186(iParam0, 18, false, true);
	func_1186(iParam0, 17, false, true);

	if (iParam4 == -1)
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(pedParam1);

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam4, iParam2);
	return;
}

BOOL func_1128(int iParam0, BOOL bParam1) // Position - 0x300D3 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_195(iParam0))
		return false;

	num = func_424(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_1129(int iParam0, BOOL bParam1) // Position - 0x3012B Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_195(iParam0))
		return false;

	num = func_424(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_1130(int iParam0, BOOL bParam1) // Position - 0x3015E Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_195(iParam0))
		return;

	num = func_424(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

struct<4> func_1131() // Position - 0x30190 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_1132(Hash hParam0, Hash hParam1) // Position - 0x3019C Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_1133(int iParam0) // Position - 0x301B6 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_1010(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_1134(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_1188(num7) - func_1188(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_1134(float fParam0) // Position - 0x30220 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_1135(int iParam0) // Position - 0x302AC Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_1136(int iParam0) // Position - 0x302E5 Hash - 0xB8632262 ^0xB8632262
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

int func_1137(float fParam0, float fParam1) // Position - 0x30364 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_1134(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_1188(num));
	num3 = BUILTIN::TO_FLOAT(func_1188(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_1138(int iParam0) // Position - 0x303D7 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_1189(iParam0, &num))
		return func_1188(num);

	switch (iParam0)
	{
		case 0:
			if (func_1190())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_1190())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_1190())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_1139(int iParam0) // Position - 0x30463 Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_1140(int iParam0, int iParam1, int iParam2) // Position - 0x30495 Hash - 0x29688DE6 ^0x6B46CE8A
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

	num = num + func_1191(iParam0);
	str3 = func_1193(func_1192(num, iParam2));
	str5 = func_1194(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_1195(iParam0));
	num2 = func_1196(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_1197(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_845(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_1198(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_1141(int iParam0, int iParam1) // Position - 0x3058D Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

int func_1142(BOOL bParam0) // Position - 0x305A6 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_1143(Hash hParam0) // Position - 0x305CB Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_1144(Hash hParam0) // Position - 0x305DB Hash - 0xB8632262 ^0xB8632262
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

int func_1145(Hash hParam0) // Position - 0x30682 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_1146(Hash hParam0) // Position - 0x306BB Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_1199(&entity, 0, i, &model) && !func_1199(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_1200(entity, &model);
		
			if (func_411(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_1147() // Position - 0x30727 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_1201(Global_35, &unk);
	unk31 = { func_1001(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1202(false);
	func_1203(7);
	func_1204(joaat("kit_bandana"), true, true, false);

	if (func_917() == 1160113249)
	{
		func_1204(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_1204(-361635024, true, true, true);
	}

	func_1205(Global_35, &unk);
	return;
}

int func_1148(Hash hParam0, int iParam1) // Position - 0x307B0 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_818(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_716(&num, year);
	func_717(&num, month);
	func_718(&num, day);
	func_719(&num, hour);
	func_720(&num, minute);
	func_721(&num, second);
	return num;
}

BOOL func_1149(int iParam0, int iParam1, BOOL bParam2) // Position - 0x30815 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_722(iParam1) || !func_722(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_1150(int iParam0, int iParam1) // Position - 0x30842 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_1206(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1206(&iParam0->f_2[i /*2*/], 1))
					func_1207(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_1151(int iParam0, int iParam1, int iParam2) // Position - 0x3096E Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_1208(iParam0, 1))
		func_1209(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_1152(int iParam0, int iParam1) // Position - 0x309B5 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_1153(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x309CE Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_1070(num2, num);
	
		if (bParam1)
			func_1070(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_1070(num3, num);
	}

	return;
}

BOOL func_1154(int iParam0) // Position - 0x30ABA Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_917();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_1155(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x30AE0 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_1156(Hash hParam0, int iParam1, var uParam2) // Position - 0x30B24 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_1157(int iParam0, int iParam1) // Position - 0x30B35 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_898(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_1158(var uParam0) // Position - 0x30B53 Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_1159(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x30B9E Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_120() == -1)
		func_1210(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_1211(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_1160(BOOL bParam0, int iParam1) // Position - 0x30C14 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_120() == -1)
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

void func_1161(int iParam0, BOOL bParam1, int iParam2) // Position - 0x30C91 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_1212(&(Global_1946054.f_1378), iParam0);
	func_1213(2, iParam0, 6);

	if (bParam1)
		func_1162(false, true);

	return;
}

void func_1162(BOOL bParam0, BOOL bParam1) // Position - 0x30CB9 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_1214(0);

	if (bParam0)
	{
		func_1077(8);
		func_1077(512);
	}
	else
	{
		func_1077(8);
		func_1077(16);
	}

	return;
}

BOOL func_1163(int iParam0) // Position - 0x30CEC Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_1164(int iParam0) // Position - 0x30D01 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_1165(int iParam0) // Position - 0x30D21 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1166(float fParam0) // Position - 0x30D35 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_1167(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x30D50 Hash - 0xC24B5846 ^0x9BEF0447
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

Hash func_1168() // Position - 0x30DF7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_1169(int iParam0) // Position - 0x30E06 Hash - 0xCCDB3731 ^0xD6404214
{
	Hash hash;

	hash = func_1099(iParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_1033(hash);
}

int func_1170(Hash hParam0) // Position - 0x30E29 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_1215(hParam0))
		num = 0;
	else if (func_1216(hParam0))
		num = 1;
	else if (func_1217(hParam0))
		num = 2;
	else if (func_1218(hParam0))
		num = 3;

	return num;
}

BOOL func_1171(int iParam0) // Position - 0x30E6C Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_410(func_1219(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_1172(int iParam0) // Position - 0x30EAC Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_410(func_1220(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_1173(int iParam0) // Position - 0x30EEB Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_1174() // Position - 0x30EFE Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_120() != -1)
		return;

	func_700(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_1013(1);
	func_1140(1, num, 0);
	return;
}

void func_1175(int iParam0) // Position - 0x30F30 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_1176() // Position - 0x30F47 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_120() != -1)
		return;

	func_700(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_1013(2);
	func_1140(2, num, 0);
	return;
}

void func_1177() // Position - 0x30F79 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_120() != -1)
		return;

	func_700(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_1013(0);
	func_1140(0, num, 0);
	return;
}

BOOL func_1178(Any anParam0) // Position - 0x30FAB Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_1179(int iParam0) // Position - 0x30FE1 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

BOOL func_1180(int iParam0) // Position - 0x30FED Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_1181(Ped pedParam0, Hash hParam1) // Position - 0x3100C Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_1182(Ped pedParam0, Hash hParam1) // Position - 0x3103A Hash - 0xA54F3032 ^0xD99E8DE7
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

BOOL func_1183(Ped pedParam0, Hash hParam1) // Position - 0x3108B Hash - 0xA54F3032 ^0xD99E8DE7
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_1181(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_1184(Ped pedParam0) // Position - 0x310FD Hash - 0x446F1BDD ^0xFB472001
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

// Unhandled jump detected. Output should be considered invalid
int func_1185(const char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x3111B Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_714(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
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
		func_1221(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_1186(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x311F2 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_195(iParam0))
		return;

	num = func_424(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_1187(int iParam0, const char* sParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3123D Hash - 0x3019E4B2 ^0x1E9F9706
{
	int num;

	if (bParam4 && !func_195(iParam0))
		return;

	num = func_424(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(10, sParam1, uParam2, uParam3));
	return;
}

int func_1188(int iParam0) // Position - 0x31290 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_1189(int iParam0, var uParam1) // Position - 0x31306 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_1190() // Position - 0x3130F Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_1191(int iParam0) // Position - 0x31318 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_1192(int iParam0, int iParam1) // Position - 0x3137A Hash - 0xD5391B76 ^0x6E36ADAF
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

const char* func_1193(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x313AC Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1194(int iParam0) // Position - 0x313C0 Hash - 0x2EAAD390 ^0x11B18989
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

char* func_1195(int iParam0) // Position - 0x313F9 Hash - 0x2EAAD390 ^0x86AAEC4A
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

int func_1196(int iParam0) // Position - 0x31432 Hash - 0x21FAF347 ^0x467E3BE5
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

int func_1197(int iParam0) // Position - 0x3146D Hash - 0x5163992 ^0x5163992
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

int func_1198(int iParam0) // Position - 0x3149C Hash - 0x21FAF347 ^0xA8C8F0DA
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

BOOL func_1199(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x314D7 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_1222(iParam1) && !func_1223(iParam1))
		ped = func_1224(iParam1);
	else
		return false;

	func_1225(uParam3);
	num = func_1226(iParam2);

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

void func_1200(Entity eParam0, var uParam1) // Position - 0x31576 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_1227(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_1228(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_1201(Ped pedParam0, Any* panParam1) // Position - 0x315C0 Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_511(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_1202(BOOL bParam0) // Position - 0x31625 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_411(hash, 0))
			func_1229(hash, false, bParam0);
	
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

void func_1203(int iParam0) // Position - 0x316BE Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_120() == -1)
	{
		func_1230(352481484);
	
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
	
		if (func_652(hash) != -999503751)
			func_1231(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_1232(hash, false))
			func_1233(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_1204(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x318AE Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_1234(hParam0))
		return;

	hash = func_652(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_1235(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_1235(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_1235(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_1235(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_1235(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_1235(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_1236(0))
	{
		func_1237(hParam0, true);
	
		if (func_917() == 1160113249)
			func_1237(func_1236(-2125499975), false);
		else
			func_1237(func_1236(1160113249), false);
	}

	func_1238();

	if (func_1239(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_818(false), hParam0, 0);

	func_1233(hParam0, bParam3);

	if (bParam2)
		func_1162(false, false);

	return;
}

void func_1205(Ped pedParam0, var uParam1) // Position - 0x31A14 Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_851(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

BOOL func_1206(var uParam0, int iParam1) // Position - 0x31ABD Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1207(var uParam0, int iParam1, int iParam2) // Position - 0x31ACE Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1208(int iParam0, int iParam1) // Position - 0x31AE1 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_1209(int iParam0, int iParam1) // Position - 0x31AF2 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_1210(Hash hParam0, int iParam1, int iParam2) // Position - 0x31B05 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1211(Hash hParam0, int iParam1, int iParam2) // Position - 0x31B60 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1212(var uParam0, int iParam1) // Position - 0x31BCA Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_120() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_1210(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_1211(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_1213(BOOL bParam0, int iParam1, int iParam2) // Position - 0x31C65 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_120() == -1)
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

void func_1214(int iParam0) // Position - 0x31CED Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_1215(Hash hParam0) // Position - 0x31CFE Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_411(hParam0, 0))
		return false;

	if (func_412(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_1216(Hash hParam0) // Position - 0x31D28 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_411(hParam0, 0))
		return false;

	if (func_412(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_1217(Hash hParam0) // Position - 0x31D52 Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_411(hParam0, 0))
		return false;

	if (func_412(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_1218(Hash hParam0) // Position - 0x31D7C Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_411(hParam0, 0))
		return false;

	if (func_412(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_1219(int iParam0, int iParam1) // Position - 0x31DA6 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_1240(iParam0);
	
		case 1:
			return func_1241(iParam0);
	
		case 2:
			return func_1242(iParam0);
	
		case 3:
			return func_1243(iParam0);
	}

	return 0;
}

Hash func_1220(int iParam0, int iParam1) // Position - 0x31DFF Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_1244(iParam0);
	
		case 1:
			return func_1245(iParam0);
	
		case 2:
			return func_1246(iParam0);
	
		case 3:
			return func_1247(iParam0);
	
		case 4:
			return func_1248(iParam0);
	
		case 5:
			return func_1249(iParam0);
	
		case 6:
			return func_1250(iParam0);
	
		case 7:
			return func_1251(iParam0);
	
		case 8:
			return func_1252(iParam0);
	}

	return 0;
}

void func_1221(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x31EB2 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = pedParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
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
	func_426(iParam0, true);
	func_427(iParam0, true);
	func_428(iParam0, 128);
	return;
}

BOOL func_1222(int iParam0) // Position - 0x32158 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_1253(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_1223(int iParam0) // Position - 0x32190 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_1253(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_1222(iParam0))
		return false;

	ped = func_1224(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_1224(int iParam0) // Position - 0x321E4 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_1253(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_1225(var uParam0) // Position - 0x32210 Hash - 0x6843C143 ^0xA531F0D1
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

int func_1226(int iParam0) // Position - 0x322B7 Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_1227(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x322EF Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_1228(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x32364 Hash - 0xF684EE16 ^0xD8F147D7
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

void func_1229(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3238D Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_652(hParam0))
	{
		case -2061583405:
			flag = func_1254(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_1254(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_1254(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_1254(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_1254(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_1254(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_1238();

	if (bParam1)
		func_1162(false, false);

	return;
}

void func_1230(int iParam0) // Position - 0x3245A Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_995(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_998(&unk, &num, &num2, false))
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
	
		func_816(num);
	}

	return;
}

void func_1231(var uParam0, Hash hParam1, int iParam2) // Position - 0x32524 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_1255(iParam2, *uParam0);
	func_1256(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_1232(Hash hParam0, BOOL bParam1) // Position - 0x3255A Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_826(hParam0, false, false) };
	guid = { func_855(hParam0, unk, unk.f_4, false) };

	if (func_1009(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_818(false), &guid, bParam1);
	return true;
}

void func_1233(Hash hParam0, BOOL bParam1) // Position - 0x325A6 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_826(hParam0, false, false) };
	guid = { func_855(hParam0, unk, unk.f_4, false) };

	if (func_1009(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_818(false), &guid, bParam1);
	return;
}

BOOL func_1234(Hash hParam0) // Position - 0x325F0 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_120() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_1235(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x32619 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_1257(hash, &unk))
		return 0;

	if (bParam3 && !func_1232(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_652(hParam0) != -999503751)
		func_1231(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_1236(int iParam0) // Position - 0x326C1 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_917();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_1237(Hash hParam0, BOOL bParam1) // Position - 0x326EC Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_826(hParam0, false, false) };
	guid = { func_855(hParam0, unk, unk.f_4, false) };

	if (func_1009(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_818(false), &guid);
	return 1;
}

void func_1238() // Position - 0x32738 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_120() == -1)
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

BOOL func_1239(Hash hParam0) // Position - 0x3286E Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1259(func_1258(hParam0));
}

Hash func_1240(int iParam0) // Position - 0x32880 Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_1241(int iParam0) // Position - 0x3290F Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_1242(int iParam0) // Position - 0x3299E Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_1243(int iParam0) // Position - 0x32A2D Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_1244(int iParam0) // Position - 0x32ABC Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_1245(int iParam0) // Position - 0x32B05 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_1246(int iParam0) // Position - 0x32B4E Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_1247(int iParam0) // Position - 0x32B97 Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_1248(int iParam0) // Position - 0x32BE0 Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_1249(int iParam0) // Position - 0x32C29 Hash - 0x51E02475 ^0x25F7B61
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

Hash func_1250(int iParam0) // Position - 0x32C72 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_1251(int iParam0) // Position - 0x32CBB Hash - 0x51E02475 ^0x50FB5131
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

Hash func_1252(int iParam0) // Position - 0x32D04 Hash - 0x51E02475 ^0x8656D204
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

int func_1253(int iParam0) // Position - 0x32D4D Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_1254(Hash hParam0, int iParam1) // Position - 0x32D66 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_1257(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_652(hParam0) != -999503751)
			func_1260(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_652(hParam0) != -999503751)
		func_1260(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_1232(hParam0, true);
	return 1;
}

void func_1255(int iParam0, int iParam1) // Position - 0x32E4C Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1256(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x32E65 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_1261(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_898(func_1050(hParam1), 1);
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
		func_1262(uParam0);

	return;
}

BOOL func_1257(Hash hParam0, var uParam1) // Position - 0x32EC1 Hash - 0x4A27386E ^0xBC93C855
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

int func_1258(Hash hParam0) // Position - 0x32F01 Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_1259(int iParam0) // Position - 0x32F51 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_1260(int iParam0, int iParam1, int iParam2) // Position - 0x32F69 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_1263(iParam1);
	func_1264(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_1265(&(iParam0->f_26), num2);
	
		if (func_1266(iParam0->f_26, &num))
			func_1267(num, num2);
	}

	return;
}

void func_1261(var uParam0) // Position - 0x32FB2 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1268(&(uParam0->f_3));
	return;
}

void func_1262(var uParam0) // Position - 0x32FD0 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_1269(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_1263(int iParam0) // Position - 0x32FF1 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1264(int iParam0, int iParam1) // Position - 0x33008 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_1265(var uParam0, int iParam1) // Position - 0x33050 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_1261(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_1266(int iParam0, var uParam1) // Position - 0x33081 Hash - 0xE231A73F ^0x924E070C
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

void func_1267(int iParam0, int iParam1) // Position - 0x330C5 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1268(var uParam0) // Position - 0x330DE Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_1269(var uParam0, Any anParam1, int iParam2) // Position - 0x3310A Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_1270(func_917());

	if (*uParam0)
		func_1268(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_120() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_1270(int iParam0) // Position - 0x33141 Hash - 0xB4860741 ^0xB4860741
{
	if (func_120() == -1)
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

