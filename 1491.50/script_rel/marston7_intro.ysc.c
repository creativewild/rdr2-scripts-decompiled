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
	Ped pedLocal_18 = 0;
	Ped pedLocal_19 = 0;
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	Vehicle veLocal_34 = 0;
	Vehicle veLocal_35 = 0;
	Object obLocal_36 = 0;
	Object obLocal_37 = 0;
	Object obLocal_38 = 0;
	Object obLocal_39 = 0;
	Object obLocal_40 = 0;
	Object obLocal_41 = 0;
	Object obLocal_42 = 0;
	Object obLocal_43 = 0;
	var uLocal_44 = 6;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	Volume volLocal_51 = 0;
	Volume volLocal_52 = 0;
	Volume volLocal_53 = 0;
	Volume volLocal_54 = 0;
	Any anLocal_55 = 0;
	ePedType eptLocal_56 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_57 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_58 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_59 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_60 = PED_TYPE_PLAYER_0;
	Hash hLocal_61 = 0;
	Hash hLocal_62 = 0;
	Hash hLocal_63 = 0;
	Hash hLocal_64 = 0;
	Hash hLocal_65 = 0;
	Hash hLocal_66 = 0;
	Hash hLocal_67 = 0;
	Hash hLocal_68 = 0;
	Hash hLocal_69 = 0;
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
	BOOL bLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 5;
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
	var uLocal_113 = 2;
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
	var uLocal_124 = 5;
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
	var uLocal_140 = 1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 5;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 20;
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
	var uLocal_218 = 20;
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
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 20;
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
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 20;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
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
	var uLocal_372 = 0;
	var uLocal_373 = 0;
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
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
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
	var uLocal_419 = 20;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
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
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
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
	var uLocal_482 = 1;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 1;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 1;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 1;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 1;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 1;
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
	var uLocal_517 = 1;
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
	var uLocal_530 = 35;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
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
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
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
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
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
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
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
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
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
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
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
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
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
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
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
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
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
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
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
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
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
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
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
	var uLocal_893 = 0;
	var uLocal_894 = 0;
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
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
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
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 1097859072;
	var uLocal_952 = 1101004800;
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
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
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
	var uLocal_979 = 4;
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
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 35;
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
	var uLocal_1061 = -1569615261;
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
	var uLocal_1074 = -1569615261;
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
	var uLocal_1087 = -1569615261;
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
	var uLocal_1100 = -1569615261;
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
	var uLocal_1113 = -1569615261;
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
	var uLocal_1126 = -1569615261;
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
	var uLocal_1139 = -1569615261;
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
	var uLocal_1151 = 0;
	var uLocal_1152 = -1569615261;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = -1569615261;
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
	var uLocal_1178 = -1569615261;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
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
	var uLocal_1191 = -1569615261;
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
	var uLocal_1204 = -1569615261;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = -1569615261;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = -1569615261;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = -1569615261;
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
	var uLocal_1256 = -1569615261;
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
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = -1569615261;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = -1569615261;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = -1569615261;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = -1569615261;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = -1569615261;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1569615261;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = -1569615261;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = -1569615261;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = -1569615261;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1569615261;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = -1569615261;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = -1569615261;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = -1569615261;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = -1569615261;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = -1569615261;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = -1569615261;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = -1569615261;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = -1569615261;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = -1569615261;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 1;
	var uLocal_1522 = 30;
	var uLocal_1523 = -1;
	var uLocal_1524 = 0;
	var uLocal_1525 = 1;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 1065353216;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 1065353216;
	var uLocal_1539 = 1;
	var uLocal_1540 = 0;
	var uLocal_1541 = -1;
	var uLocal_1542 = 0;
	var uLocal_1543 = 1;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 1065353216;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 1065353216;
	var uLocal_1557 = 1;
	var uLocal_1558 = 0;
	var uLocal_1559 = -1;
	var uLocal_1560 = 0;
	var uLocal_1561 = 1;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 1065353216;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 1065353216;
	var uLocal_1575 = 1;
	var uLocal_1576 = 0;
	var uLocal_1577 = -1;
	var uLocal_1578 = 0;
	var uLocal_1579 = 1;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 1065353216;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 1065353216;
	var uLocal_1593 = 1;
	var uLocal_1594 = 0;
	var uLocal_1595 = -1;
	var uLocal_1596 = 0;
	var uLocal_1597 = 1;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 1065353216;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 1065353216;
	var uLocal_1611 = 1;
	var uLocal_1612 = 0;
	var uLocal_1613 = -1;
	var uLocal_1614 = 0;
	var uLocal_1615 = 1;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 1065353216;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 1065353216;
	var uLocal_1629 = 1;
	var uLocal_1630 = 0;
	var uLocal_1631 = -1;
	var uLocal_1632 = 0;
	var uLocal_1633 = 1;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 1065353216;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 1065353216;
	var uLocal_1647 = 1;
	var uLocal_1648 = 0;
	var uLocal_1649 = -1;
	var uLocal_1650 = 0;
	var uLocal_1651 = 1;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 1065353216;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 1065353216;
	var uLocal_1665 = 1;
	var uLocal_1666 = 0;
	var uLocal_1667 = -1;
	var uLocal_1668 = 0;
	var uLocal_1669 = 1;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 1065353216;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 1065353216;
	var uLocal_1683 = 1;
	var uLocal_1684 = 0;
	var uLocal_1685 = -1;
	var uLocal_1686 = 0;
	var uLocal_1687 = 1;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 1065353216;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 1065353216;
	var uLocal_1701 = 1;
	var uLocal_1702 = 0;
	var uLocal_1703 = -1;
	var uLocal_1704 = 0;
	var uLocal_1705 = 1;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 1065353216;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 1065353216;
	var uLocal_1719 = 1;
	var uLocal_1720 = 0;
	var uLocal_1721 = -1;
	var uLocal_1722 = 0;
	var uLocal_1723 = 1;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 1065353216;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 1065353216;
	var uLocal_1737 = 1;
	var uLocal_1738 = 0;
	var uLocal_1739 = -1;
	var uLocal_1740 = 0;
	var uLocal_1741 = 1;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 1065353216;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 1065353216;
	var uLocal_1755 = 1;
	var uLocal_1756 = 0;
	var uLocal_1757 = -1;
	var uLocal_1758 = 0;
	var uLocal_1759 = 1;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 1065353216;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 1065353216;
	var uLocal_1773 = 1;
	var uLocal_1774 = 0;
	var uLocal_1775 = -1;
	var uLocal_1776 = 0;
	var uLocal_1777 = 1;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 1065353216;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 1065353216;
	var uLocal_1791 = 1;
	var uLocal_1792 = 0;
	var uLocal_1793 = -1;
	var uLocal_1794 = 0;
	var uLocal_1795 = 1;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 1065353216;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 1065353216;
	var uLocal_1809 = 1;
	var uLocal_1810 = 0;
	var uLocal_1811 = -1;
	var uLocal_1812 = 0;
	var uLocal_1813 = 1;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 1065353216;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 1065353216;
	var uLocal_1827 = 1;
	var uLocal_1828 = 0;
	var uLocal_1829 = -1;
	var uLocal_1830 = 0;
	var uLocal_1831 = 1;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 1065353216;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 1065353216;
	var uLocal_1845 = 1;
	var uLocal_1846 = 0;
	var uLocal_1847 = -1;
	var uLocal_1848 = 0;
	var uLocal_1849 = 1;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 1065353216;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 1065353216;
	var uLocal_1863 = 1;
	var uLocal_1864 = 0;
	var uLocal_1865 = -1;
	var uLocal_1866 = 0;
	var uLocal_1867 = 1;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 1065353216;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 1065353216;
	var uLocal_1881 = 1;
	var uLocal_1882 = 0;
	var uLocal_1883 = -1;
	var uLocal_1884 = 0;
	var uLocal_1885 = 1;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 1065353216;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 1065353216;
	var uLocal_1899 = 1;
	var uLocal_1900 = 0;
	var uLocal_1901 = -1;
	var uLocal_1902 = 0;
	var uLocal_1903 = 1;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 1065353216;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 1065353216;
	var uLocal_1917 = 1;
	var uLocal_1918 = 0;
	var uLocal_1919 = -1;
	var uLocal_1920 = 0;
	var uLocal_1921 = 1;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 1065353216;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 1065353216;
	var uLocal_1935 = 1;
	var uLocal_1936 = 0;
	var uLocal_1937 = -1;
	var uLocal_1938 = 0;
	var uLocal_1939 = 1;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 1065353216;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 1065353216;
	var uLocal_1953 = 1;
	var uLocal_1954 = 0;
	var uLocal_1955 = -1;
	var uLocal_1956 = 0;
	var uLocal_1957 = 1;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 1065353216;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 1065353216;
	var uLocal_1971 = 1;
	var uLocal_1972 = 0;
	var uLocal_1973 = -1;
	var uLocal_1974 = 0;
	var uLocal_1975 = 1;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 1065353216;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 1065353216;
	var uLocal_1989 = 1;
	var uLocal_1990 = 0;
	var uLocal_1991 = -1;
	var uLocal_1992 = 0;
	var uLocal_1993 = 1;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 1065353216;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 1065353216;
	var uLocal_2007 = 1;
	var uLocal_2008 = 0;
	var uLocal_2009 = -1;
	var uLocal_2010 = 0;
	var uLocal_2011 = 1;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 1065353216;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 1065353216;
	var uLocal_2025 = 1;
	var uLocal_2026 = 0;
	var uLocal_2027 = -1;
	var uLocal_2028 = 0;
	var uLocal_2029 = 1;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 1065353216;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 1065353216;
	var uLocal_2043 = 1;
	var uLocal_2044 = 0;
	var uLocal_2045 = -1;
	var uLocal_2046 = 0;
	var uLocal_2047 = 1;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 1065353216;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 1065353216;
	var uLocal_2061 = 1;
	var uLocal_2062 = 0;
	var uLocal_2063 = 8;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 8;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = -1;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = -1;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = -1;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = -1;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = -1;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = -1;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = -1;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = -1;
	var uLocal_2568 = 0;
	var uLocal_2569 = 11;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 2;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 2;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = -1;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = -1;
	var uLocal_2736 = -1082130432;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 24;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = -1;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 1084227584;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x9B2894B2 ^0xA2B5D12C
{
	BOOL flag;
	var unk;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	eptLocal_56 = joaat("cs_albertcakeesquire");
	eptLocal_57 = joaat("cs_mrdevon");
	eptLocal_58 = joaat("cs_mrwayne");
	eptLocal_59 = joaat("a_m_m_blwlaborer_01");
	eptLocal_60 = joaat("a_m_m_blwlaborer_02");
	hLocal_61 = joaat("wagon02x");
	hLocal_62 = joaat("wagon02x");
	hLocal_63 = joaat("p_lumber09_piece01x");
	hLocal_64 = joaat("p_pen01x");
	hLocal_65 = joaat("p_amb_clipboard_01");
	hLocal_66 = joaat("p_cs_book03x");
	hLocal_67 = joaat("p_cs_catalogue01x");
	hLocal_68 = joaat("p_cs_letter03x");
	hLocal_69 = joaat("p_cigarbox01x");
	uLocal_73 = { -865.0912f, -1307.0156f, 42.0141f };
	uLocal_76 = { -869.7763f, -1313.8593f, 42.01419f };
	uLocal_79 = { -837.813f, -1328.8369f, 0f };
	uLocal_82 = { -849.022f, -1331.5187f, 0f };
	uLocal_85 = { -848.9402f, -1318.9666f, 0f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (func_1(iLocal_89))
			func_2(&Global_1935630, 32768);
	
		func_3(&iLocal_89, 1);
	}

	func_4(&uScriptParam_0, &iLocal_89);

	while (!func_5(&iLocal_89, 1))
	{
		if (_STOPWATCH_IS_INITIALIZED(&iLocal_89) != 10)
		{
			if (_STOPWATCH_IS_INITIALIZED(&iLocal_89) == 3 || _STOPWATCH_IS_INITIALIZED(&iLocal_89) == 4 && !func_7(&iLocal_89) || _STOPWATCH_IS_INITIALIZED_0(&(iLocal_89.f_958)) > 0)
			{
				func_9(&iLocal_89, func_5(&iLocal_89, 67108864));
				flag = true;
			}
		
			if (!flag && func_10(&iLocal_89) && func_5(&iLocal_89, 65536))
				func_9(&iLocal_89, true);
		}
	
		if (_STOPWATCH_IS_INITIALIZED(&iLocal_89) >= 3 && _STOPWATCH_IS_INITIALIZED(&iLocal_89) <= 7)
			func_11(&iLocal_89);
	
		if (_STOPWATCH_IS_INITIALIZED(&iLocal_89) >= 5 && _STOPWATCH_IS_INITIALIZED(&iLocal_89) <= 7 && !func_5(&iLocal_89, 4096) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_89.f_428.f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_89.f_428.f_444, false) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iLocal_89.f_428.f_444))
		{
			TEXT_LABEL_COPY(&unk, { func_12(iLocal_89) }, 4);
			func_13(unk, &(iLocal_89.f_428));
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
	
		switch (_STOPWATCH_IS_INITIALIZED(&iLocal_89))
		{
			case 0:
				if (func_10(&iLocal_89))
					func_16(&iLocal_89);
			
				if (!func_10(&iLocal_89) || func_5(&iLocal_89, 65536))
					if (func_27(&iLocal_89))
						func_17(&iLocal_89, 1);
				break;
		
			case 1:
				if (func_10(&iLocal_89))
					func_16(&iLocal_89);
			
				if (func_28(&iLocal_89))
					func_17(&iLocal_89, 2);
				break;
		
			case 2:
				if (func_10(&iLocal_89))
					func_16(&iLocal_89);
			
				if (func_29(&iLocal_89))
				{
					if (!func_7(&iLocal_89) || func_10(&iLocal_89))
					{
						if (!func_30(iLocal_89.f_2889))
							iLocal_89.f_2889 = func_32(func_31(iLocal_89));
					
						func_22(iLocal_89.f_2889, 4);
						func_25(&iLocal_89, 8192);
					}
				
					if (func_10(&iLocal_89))
					{
						func_33(&iLocal_89);
						func_17(&iLocal_89, 9);
					}
					else
					{
						func_17(&iLocal_89, 3);
					}
				}
				break;
		
			case 3:
				if (!func_5(&iLocal_89, 8192))
				{
					if (_STOPWATCH_IS_INITIALIZED_0(&(iLocal_89.f_958)) != 3)
					{
					}
					else
					{
						func_22(iLocal_89.f_2889, 4);
						func_25(&iLocal_89, 8192);
					}
				}
			
				func_39(&iLocal_89);
			
				if (func_40(func_32(Global_1835011[iLocal_89 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&iLocal_89) || func_42(&iLocal_89, 32768))
				{
					func_34(&iLocal_89);
					func_15(&iLocal_89);
					func_17(&iLocal_89, 4);
					func_19(&(iLocal_89.f_2890), false);
				}
				else if (func_10(&iLocal_89) && !func_1(iLocal_89))
				{
					if (!func_18(&(iLocal_89.f_2899)))
						func_19(&(iLocal_89.f_2899), false);
				
					if (!func_20(&iLocal_89))
					{
						if (func_21(&(iLocal_89.f_2899)) >= 1f)
						{
							func_22(iLocal_89.f_2889, 2097152);
							func_23(&iLocal_89);
							func_24(&iLocal_89);
							func_17(&iLocal_89, 10);
						}
					}
					else
					{
						if (!func_5(&iLocal_89, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&iLocal_89, 536870912);
						}
					
						func_26(&(iLocal_89.f_2899));
					}
				}
				break;
		
			case 4:
				func_43(&iLocal_89);
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
			
				if (func_44(&iLocal_89) || func_42(&iLocal_89, 32768) && !func_5(&iLocal_89, 268435456))
				{
					func_35(&iLocal_89);
				
					if (!func_5(&iLocal_89, 256))
					{
						func_36(&iLocal_89);
						func_38(&iLocal_89);
					
						if (!func_45(Global_1935630, 524288) || func_42(&iLocal_89, 524288))
						{
							func_37(iLocal_89);
							func_17(&iLocal_89, 7);
						}
						else
						{
							func_17(&iLocal_89, 6);
						}
					}
					else
					{
						func_37(iLocal_89);
						func_17(&iLocal_89, 5);
					}
				}
				break;
		
			case 5:
				func_46(&iLocal_89);
				func_47(&iLocal_89);
			
				if (func_48(&(iLocal_89.f_2884)) >= func_49(&iLocal_89))
				{
					func_36(&iLocal_89);
					func_38(&iLocal_89);
					func_26(&(iLocal_89.f_2884));
				
					if (!func_42(&iLocal_89, 524288))
					{
						func_37(iLocal_89);
						func_17(&iLocal_89, 7);
					}
					else
					{
						func_17(&iLocal_89, 6);
					}
				}
				break;
		
			case 6:
				if (!func_18(&(iLocal_89.f_2906)))
					func_19(&(iLocal_89.f_2906), false);
			
				if (func_50(&(iLocal_89.f_428)) == 4 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_89.f_428.f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iLocal_89.f_428.f_444))
				{
					func_37(iLocal_89);
					func_17(&iLocal_89, 7);
				}
				else if (func_48(&(iLocal_89.f_2906)) >= 5f)
				{
					func_37(iLocal_89);
					func_17(&iLocal_89, 7);
				}
				break;
		
			case 7:
				func_51(&iLocal_89);
			
				if (func_52(&iLocal_89))
					func_17(&iLocal_89, 10);
				break;
		
			case 8:
				if (func_14(&iLocal_89))
				{
					func_15(&iLocal_89);
					func_16(&iLocal_89);
					func_17(&iLocal_89, 0);
				}
				else if (!func_10(&iLocal_89))
				{
					if (!func_18(&(iLocal_89.f_2899)))
						func_19(&(iLocal_89.f_2899), false);
				
					if (!func_20(&iLocal_89))
					{
						if (func_21(&(iLocal_89.f_2899)) >= 1f)
						{
							func_22(iLocal_89.f_2889, 2097152);
							func_23(&iLocal_89);
							func_24(&iLocal_89);
							func_17(&iLocal_89, 10);
						}
					}
					else
					{
						if (!func_5(&iLocal_89, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&iLocal_89, 536870912);
						}
					
						func_26(&(iLocal_89.f_2899));
					}
				}
				break;
		
			case 9:
				if (func_16(&iLocal_89))
				{
					func_34(&iLocal_89);
					func_15(&iLocal_89);
					func_35(&iLocal_89);
				
					if (!func_5(&iLocal_89, 256))
					{
						func_36(&iLocal_89);
						func_37(iLocal_89);
						func_38(&iLocal_89);
						func_17(&iLocal_89, 7);
					}
					else
					{
						func_17(&iLocal_89, 5);
					}
				}
				break;
		
			case 10:
				if (func_3(&iLocal_89, false))
					func_25(&iLocal_89, 1);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1(int iParam0) // Position - 0x714 Hash - 0xD5951AE9 ^0xC73DF07C
{
	int num;

	num = func_32(func_31(iParam0));

	if (!func_30(num))
		return false;

	return func_40(num, 1024);
}

void func_2(int iParam0, int iParam1) // Position - 0x73F Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_3(var uParam0, BOOL bParam1) // Position - 0x754 Hash - 0x83D9E26D ^0x83D9E26D
{
	uParam0->f_2902 = bParam1;

	if (!func_53(uParam0) && !bParam1)
		return false;

	func_54(uParam0);
	func_55(uParam0);
	func_56(uParam0);
	func_57(uParam0);
	func_58(uParam0);
	func_59(*uParam0);
	func_60(*uParam0);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_5);

	if (!Global_1935630.f_12)
		TASK::TASK_CLEAR_LOOK_AT(Global_35);

	if (func_5(uParam0, 1024))
	{
		func_61(true);
		func_2(&Global_1935630, 32768);
	}
	else
	{
		func_62();
	}

	if (bParam1)
	{
		if (func_63(&(uParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	
		func_64(&(uParam0->f_958));
	}

	func_65(uParam0, false);

	if (func_5(uParam0, 536870912))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		func_66(uParam0, 536870912);
	}

	if (bParam1)
		func_67(true, false, false);

	if (func_5(uParam0, -2147483648))
		func_68();

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_4(var uParam0, var uParam1) // Position - 0x86F Hash - 0x6E877716 ^0x25C61399
{
	var unk;

	*uParam1 = *uParam0;
	PED::_RESERVE_AMBIENT_PEDS(10);
	uParam1->f_2889 = func_32(func_31(*uParam0));
	func_69(uParam1);

	if (func_10(uParam1))
	{
		func_70(&(uParam1->f_428));
		func_71(uParam1);
		func_25(uParam1, 16777216);
		func_17(uParam1, 8);
	}
	else
	{
		func_17(uParam1, 0);
	}

	if (!func_5(uParam1, 1073741824))
	{
		func_72(*uParam1);
		func_73(*uParam1);
	}

	unk = { func_12(*uParam1) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		func_25(uParam1, 134217728);

	func_19(&(uParam1->f_2896), false);
	return 1;
}

BOOL func_5(var uParam0, int iParam1) // Position - 0x917 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

int _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x928 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

BOOL func_7(var uParam0) // Position - 0x934 Hash - 0x2D68F052 ^0x7E4DF6CE
{
	if (func_5(uParam0, 16))
		return false;

	return func_5(uParam0, 524288);
}

int _STOPWATCH_IS_INITIALIZED_0(var uParam0) // Position - 0x955 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_9(var uParam0, BOOL bParam1) // Position - 0x961 Hash - 0x48E44D60 ^0x444D467F
{
	var unk;

	if (!CAM::IS_SCREEN_FADED_OUT() && !func_5(uParam0, 4))
	{
		if (func_48(&(uParam0->f_2896)) <= 0.5f)
			return;
	
		func_26(&(uParam0->f_2896));
	
		if (func_74(0, false, true) && !func_5(uParam0, 65536) && !func_40(uParam0->f_2889, 1024))
			return;
	}

	if (func_5(uParam0, 128))
		return;

	if (func_5(uParam0, 134217728))
	{
		if (!func_5(uParam0, 16777216))
		{
			func_75(uParam0, 16);
		
			if (func_7(uParam0))
				func_76(uParam0);
		
			func_25(uParam0, 16777216);
		}
	
		unk = { func_12(*uParam0) };
	
		if (func_77(&(uParam0->f_428), &unk, bParam1, false))
			if (!func_40(uParam0->f_2889, 128))
				func_22(uParam0->f_2889, 128);
		else if (func_40(uParam0->f_2889, 128))
			func_78(uParam0->f_2889, 128);
	}

	return;
}

BOOL func_10(var uParam0) // Position - 0xA6D Hash - 0xADFEF8AD ^0xA05CE8F4
{
	if (func_5(uParam0, 65536))
		return true;

	if (!func_79(&Global_1835011[*uParam0 /*74*/]))
		return true;

	return false;
}

void func_11(var uParam0) // Position - 0xA9F Hash - 0x2C379910 ^0x585E0D32
{
	Ped ped;

	if (!func_18(&(uParam0->f_2893)))
		func_19(&(uParam0->f_2893), false);

	if (func_48(&(uParam0->f_2893)) >= 1f)
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_425))
		{
			ped = func_80(7);
		
			if (!ENTITY::IS_ENTITY_DEAD(ped))
			{
				if (!func_5(uParam0, 512))
				{
					PED::_ADD_PED_STAY_OUT_VOLUME(ped, uParam0->f_425);
					func_25(uParam0, 512);
				}
			}
			else if (func_5(uParam0, 512))
			{
				func_66(uParam0, 512);
			}
		}
	
		func_26(&(uParam0->f_2893));
	}

	return;
}

Vector3 func_12(int iParam0) // Position - 0xB2C Hash - 0x8AE4EC3E ^0x47915066
{
	var unk;

	if (!func_81(iParam0))
		return unk;

	return Global_1835011[iParam0 /*74*/].f_9;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xB51 Hash - 0x2BF27CF2 ^0x62AA2C
{
	int num;

	func_82(uParam4, &uParam0);

	if (func_83(uParam4, 2) && !func_83(uParam4, 67108864))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SKIP_CUTSCENE"), false);

	if (func_50(uParam4) != 1)
		func_84(uParam4);

	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);

	switch (func_50(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false))
				{
					func_85(uParam4, &uParam0);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
				{
					func_86(uParam4, 4);
					return 0;
				}
				else if (func_87(uParam4, 2))
				{
					uParam4->f_437(uParam4);
				}
			
				func_86(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && func_83(uParam4, 134217728))
				{
				}
				else
				{
					func_70(uParam4);
				}
			
				func_26(&(uParam4->f_1));
				func_86(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				func_88(uParam4);
			
				if (!func_18(&(uParam4->f_1)))
				{
					func_19(&(uParam4->f_1), false);
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				
					func_86(uParam4, 4);
				}
			}
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (func_77(uParam4, &uParam0, true, true))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
					{
						func_86(uParam4, 4);
					}
					else if (!_IS_NULL_VECTOR(func_89(uParam4)) && !func_91(Global_35, func_89(uParam4), 100f, true, true))
					{
						func_92(true);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_89(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				
					func_86(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_93(true, false);
					func_85(uParam4, &uParam0);
					func_86(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_48(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
			
				func_86(uParam4, 4);
			}
			break;
	
		case 3:
			func_94(uParam4);
		
			if (func_87(uParam4, 2))
				uParam4->f_437(uParam4);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444) || func_83(uParam4, 512))
			{
				if (!func_83(uParam4, 1024) && func_95(uParam4, true))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
			
				if (!func_83(uParam4, 512))
				{
					func_26(&(uParam4->f_1));
					func_96(uParam4, 512);
					func_86(uParam4, 4);
				}
				else if (func_83(uParam4, 524288))
				{
					CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN();
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_84(uParam4);
			}
		
			if (func_83(uParam4, 524288))
			{
				if ((float)MISC::ABSI(func_97(uParam4) - func_98(uParam4)) <= 2f)
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			
				if (func_99(uParam4, Global_35, 4))
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT() && func_98(uParam4) > 5000)
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			}
		
			if (func_100(uParam4))
			{
				!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444);
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (func_83(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_444);
					
						func_26(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
						func_96(uParam4, 512);
						func_103(uParam4, 67108864, true);
						func_86(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if (!func_83(uParam4, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444) && CAM::IS_SCREEN_FADED_OUT() && func_98(uParam4) <= 5000 && func_98(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
			
				if (!func_83(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_104(&(uParam4->f_501), 0);
					func_96(uParam4, 536870912);
				}
			
				if (func_98(uParam4) >= 5000 && func_98(uParam4) <= func_97(uParam4) - 5000)
					func_105();
			}
			break;
	
		case 4:
			if (func_83(uParam4, 524288))
				ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
		
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						func_96(uParam4, 1073741824);
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, true);
					
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, true, false);
					
						return 0;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(uParam4->f_444))
					{
						return 0;
					}
				}
			
				if (num == 0)
				{
					uParam4->f_438(!func_87(uParam4, 4), uParam4);
				
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
					
						func_86(uParam4, 3);
					}
					else if (func_48(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
					
						func_86(uParam4, 3);
					}
				}
			
				if (func_50(uParam4) == 3)
					if (func_83(uParam4, 524288))
						CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	
		case 5:
			func_86(uParam4, 4);
			break;
	
		case 6:
			if (func_100(uParam4))
			{
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			break;
	}

	return 0;
}

BOOL func_14(var uParam0) // Position - 0x124D Hash - 0x3FD87CD2 ^0x7707316B
{
	func_25(uParam0, 262144);

	if (func_106(uParam0))
	{
		func_25(uParam0, 65536);
		return true;
	}

	return false;
}

void func_15(var uParam0) // Position - 0x1277 Hash - 0x6B5AE749 ^0xB084BC07
{
	if (!func_5(uParam0, 131072))
	{
		if (!func_5(uParam0, 2048) && !func_7(uParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32 | 256, false);
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
		}
	
		func_107(*uParam0);
		func_25(uParam0, 1024);
		func_108(false);
		func_109(&Global_1935630, 32768);
		func_110(2);
		func_111(uParam0);
		func_112(true);
		func_59(*uParam0);
		func_60(*uParam0);
		func_33(uParam0);
	
		if (!func_5(uParam0, -2147483648))
			func_68();
	
		func_58(uParam0);
		func_25(uParam0, 131072);
	}

	return;
}

BOOL func_16(var uParam0) // Position - 0x1325 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_17(var uParam0, int iParam1) // Position - 0x132E Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

BOOL func_18(var uParam0) // Position - 0x133C Hash - 0x5001E582 ^0x5001E582
{
	return func_113(*uParam0, 1);
}

void func_19(var uParam0, BOOL bParam1) // Position - 0x134C Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_18(uParam0))
		func_26(uParam0);

	return;
}

BOOL func_20(var uParam0) // Position - 0x136C Hash - 0x1E493342 ^0x72D067EE
{
	eStackSize i;
	eStackSize stackSize;
	Ped ped;

	for (i = 0; i < 27; i = i + 1)
	{
		stackSize = i;
	
		if (func_114(stackSize) && func_115(stackSize))
		{
			ped = Global_1360165[i /*1157*/];
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
				if (func_116(stackSize))
					if (func_117(ped, 1116471296, -1082130432, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

float func_21(var uParam0) // Position - 0x13EA Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_18(uParam0))
		return 0f;

	if (func_118(uParam0))
		return uParam0->f_2;

	return func_119() - uParam0->f_1;
}

void func_22(int iParam0, int iParam1) // Position - 0x141C Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_30(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

void func_23(var uParam0) // Position - 0x1448 Hash - 0xE490C58 ^0xE490C58
{
	func_120(&(uParam0->f_428));
	return;
}

void func_24(var uParam0) // Position - 0x1459 Hash - 0xD464DAA4 ^0xD464DAA4
{
	func_121(&(uParam0->f_958), uParam0->f_958);
	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x146F Hash - 0xC0B306E4 ^0x7C256AD9
{
	uParam0->f_2 = uParam0->f_2 || iParam1;

	if (iParam1 == 65536)
	{
		func_109(&Global_1935630, 32768);
		func_107(*uParam0);
	}

	return;
}

void func_26(var uParam0) // Position - 0x149E Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_122(uParam0, 0f);
	return;
}

BOOL func_27(var uParam0) // Position - 0x14AD Hash - 0xBBBF39DA ^0x6EE8C37A
{
	var unk;
	Vector3 vector;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
		uParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_6))
		uParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_7))
		uParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);

	func_123(*uParam0, uParam0->f_5, uParam0->f_6, uParam0->f_7);

	if (_IS_NULL_VECTOR(func_124(uParam0)))
	{
		unk = { func_12(*uParam0) };
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		{
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_428.f_440), "cutscene@", 32);
			TEXT_LABEL_APPEND_STRING(&(uParam0->f_428.f_440), &unk, 32);
			vector = { func_125(&(uParam0->f_428)) };
		
			if (!_IS_NULL_VECTOR(vector))
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vector, func_126(*uParam0), true) >= 10f)
					func_127(uParam0, func_126(*uParam0));
				else
					func_127(uParam0, vector);
			else
				return false;
		}
	}

	if (!func_128(uParam0))
		return false;

	uParam0->f_55.f_1 = 67108863;
	uParam0->f_55 = 2;
	uParam0->f_55 = 1;
	func_71(uParam0);
	func_129(uParam0);
	func_130(uParam0);
	func_131(uParam0, Global_35, 0, 0, 0, true);
	func_132(uParam0);
	func_133(uParam0);
	return true;
}

BOOL func_28(var uParam0) // Position - 0x15E4 Hash - 0xECFC24F7 ^0x3A0F4A4C
{
	BOOL num;

	num = 1;

	if (!func_134(uParam0))
		num = 0;

	if (!func_135(uParam0, false))
		num = 0;

	if (!func_5(uParam0, 1073741824) && !func_136(*uParam0, false))
		num = 0;

	return num;
}

BOOL func_29(var uParam0) // Position - 0x162C Hash - 0xFC8F428A ^0xFC8F428A
{
	func_131(uParam0, Global_35, "JOHN", 0, 0, true);
	func_131(uParam0, pedLocal_14, "AlbertCakeEsquire", 0, 0, true);
	func_137(&(uParam0->f_428), obLocal_36, "p_pen01x", 1, 0, false);
	func_138(uParam0, obLocal_37, "p_pen01x");
	func_139(uParam0, obLocal_38, "p_amb_clipboard_01", 1, 0, true, false);
	func_137(&(uParam0->f_428), obLocal_39, "p_cs_book03x", 1, 0, false);
	func_138(uParam0, obLocal_40, "p_cs_book03x");
	func_139(uParam0, obLocal_41, "p_cs_catalogue01x", 1, 0, true, false);
	func_139(uParam0, obLocal_42, "P_CS_LETTER03X", 1, 0, true, false);
	func_139(uParam0, obLocal_43, "p_cigarbox01x", 1, 0, true, false);
	func_131(uParam0, pedLocal_15, "CharlesSmith", 0, 0, true);
	func_131(uParam0, pedLocal_16, "A_M_M_BLWLABORER_01", 0, 0, true);
	func_131(uParam0, pedLocal_17, "A_M_M_BLWLABORER_01^1", 0, 0, true);
	func_131(uParam0, pedLocal_18, "MRDEVON", 0, 0, true);
	func_131(uParam0, pedLocal_19, "MRWAYNE", 0, 0, true);
	func_131(uParam0, uLocal_27[1], "HORSE_01", 0, 0, true);
	func_131(uParam0, uLocal_27[0], "Horse_01^1", 0, 0, true);
	func_131(uParam0, uLocal_20[0], "Horse_01^2", 0, 0, true);
	func_131(uParam0, uLocal_20[1], "Horse_01^3", 0, 0, true);
	func_139(uParam0, veLocal_34, "wagon02x^1", 0, 0, true, false);
	func_139(uParam0, veLocal_35, "wagon02x", 0, 0, true, false);
	func_139(uParam0, uLocal_44[0], "p_lumber09_piece01x", 0, 0, true, false);
	func_139(uParam0, uLocal_44[1], "p_lumber09_piece01x^1", 0, 0, true, false);
	func_139(uParam0, uLocal_44[2], "p_lumber09_piece01x^2", 0, 0, true, false);
	func_139(uParam0, uLocal_44[3], "p_lumber09_piece01x^3", 0, 0, true, false);
	func_139(uParam0, uLocal_44[4], "p_lumber09_piece01x^4", 0, 0, true, false);
	func_139(uParam0, uLocal_44[5], "p_lumber09_piece01x^5", 0, 0, true, false);
	return true;
}

BOOL func_30(int iParam0) // Position - 0x17DF Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

int func_31(int iParam0) // Position - 0x17FE Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_81(iParam0))
		return 0;

	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_32(int iParam0) // Position - 0x181E Hash - 0x6B3238EF ^0x6B3238EF
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

void func_33(var uParam0) // Position - 0x185F Hash - 0xCB18FF6A ^0x66639F66
{
	var scriptName;

	TEXT_LABEL_COPY(&scriptName, { func_140(*uParam0) }, 3);
	SCRIPTS::REQUEST_SCRIPT(&scriptName);
	return;
}

void func_34(var uParam0) // Position - 0x1879 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_35(var uParam0) // Position - 0x1881 Hash - 0x83855E48 ^0x18FFB4E2
{
	func_56(uParam0);
	func_2(&Global_1935630, 32768);
	func_141(uParam0);
	func_26(&(uParam0->f_2884));

	if (func_142())
		func_143();

	if (func_42(uParam0, 524288))
		func_109(&Global_1935630, 524288);
	else if (!func_42(uParam0, 32768))
		Global_43805 = uParam0->f_958.f_1684;

	func_144(&(uParam0->f_428), &(uParam0->f_958));

	if (func_5(uParam0, 262144))
		if (func_145(&(Global_1835011[*uParam0 /*74*/].f_29), 4))
			CLOCK::SET_CLOCK_TIME(func_146(4), 0, 0);
		else if (func_145(&(Global_1835011[*uParam0 /*74*/].f_29), 2))
			CLOCK::SET_CLOCK_TIME(func_146(2), 0, 0);
		else if (func_145(&(Global_1835011[*uParam0 /*74*/].f_29), 8))
			CLOCK::SET_CLOCK_TIME(func_146(8), 0, 0);
		else if (func_145(&(Global_1835011[*uParam0 /*74*/].f_29), 16))
			CLOCK::SET_CLOCK_TIME(func_146(16), 0, 0);
		else if (func_145(&(Global_1835011[*uParam0 /*74*/].f_29), 32))
			CLOCK::SET_CLOCK_TIME(func_146(32), 0, 0);

	return;
}

void func_36(var uParam0) // Position - 0x19AD Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_37(int iParam0) // Position - 0x19B5 Hash - 0x1B8AD279 ^0xAD8E3F31
{
	int num;
	const char* name;

	if (func_147(iParam0))
		return;

	num = func_32(func_31(iParam0));

	if (!func_30(num))
		return;

	func_22(num, 2048);
	Global_1835011[iParam0 /*74*/].f_71 = 0;
	name = func_148(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&name))
	{
		HUD::SET_MISSION_NAME(true, &name);
		MISC::_0x1096603B519C905F(&name);
	}

	return;
}

void func_38(var uParam0) // Position - 0x1A15 Hash - 0x1A9741E5 ^0x2BC1F7E8
{
	var unk;
	var unk4;

	unk = { func_12(*uParam0) };

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_428.f_444, true, false))
	{
		Global_43800 = uParam0->f_428.f_444;
	}
	else
	{
		if (func_63(&(uParam0->f_958), 8))
			if (!func_63(&(uParam0->f_958), 131072))
				if (!func_63(&(uParam0->f_958), 32768))
					if (!func_5(uParam0, 8))
						func_149(&(uParam0->f_428), &(uParam0->f_958));
	
		TEXT_LABEL_COPY(&unk4, { unk }, 4);
		func_13(unk4, &(uParam0->f_428));
	}

	return;
}

int func_39(var uParam0) // Position - 0x1AC9 Hash - 0xED07495D ^0xED07495D
{
	func_150(true);
	func_151();

	if (func_152(Global_35, 0))
	{
		if (func_153(Global_35, -871.9804f, -1315.1531f, 42.01369f, &uLocal_70, 17.5f, 12.5f, 7.5f, 5f, 4f, true, 1, 1, 1, true))
			func_154(&uLocal_70);
	
		if (func_155(Global_35, volLocal_51, 0, true) || func_155(Global_35, volLocal_52, 0, true))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
	}

	func_156(uParam0, true);
	return 0;
}

BOOL func_40(int iParam0, int iParam1) // Position - 0x1B61 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_30(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

BOOL func_41(var uParam0) // Position - 0x1B83 Hash - 0x3FAFCBCF ^0x3FAFCBCF
{
	if (func_7(uParam0))
	{
		func_158(&(uParam0->f_958), func_157(uParam0), uParam0->f_958, false);
		return func_159(uParam0);
	}

	if (func_5(uParam0, 64))
		return false;

	return func_160(uParam0);
}

BOOL func_42(var uParam0, int iParam1) // Position - 0x1BC8 Hash - 0xE749F1D9 ^0xE749F1D9
{
	return func_63(&(uParam0->f_958), iParam1);
}

void func_43(var uParam0) // Position - 0x1BDB Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_44(var uParam0) // Position - 0x1BE3 Hash - 0x62EFFC31 ^0x62EFFC31
{
	if (func_7(uParam0))
		return func_158(&(uParam0->f_958), func_157(uParam0), uParam0->f_958, false);

	return func_106(uParam0);
}

BOOL func_45(int iParam0, int iParam1) // Position - 0x1C12 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_46(var uParam0) // Position - 0x1C21 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_47(var uParam0) // Position - 0x1C29 Hash - 0x459AE2FC ^0x7FCFE727
{
	if (!func_5(uParam0, 33554432) && !func_42(uParam0, 524288) && !func_42(uParam0, 32768))
	{
		if (func_161(&(uParam0->f_958)))
		{
			func_162(&(uParam0->f_958), false, false);
			func_25(uParam0, 33554432);
		}
	}

	return;
}

float func_48(var uParam0) // Position - 0x1C85 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_18(uParam0))
		return uParam0->f_1;

	if (func_118(uParam0))
		return uParam0->f_2;

	return func_119() - uParam0->f_1;
}

float func_49(var uParam0) // Position - 0x1CBA Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_2887;
}

int func_50(var uParam0) // Position - 0x1CC7 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_51(var uParam0) // Position - 0x1CD2 Hash - 0x1CFC9810 ^0x1CFC9810
{
	if (func_163())
	{
		func_164(&obLocal_37);
		func_164(&obLocal_40);
	}

	return;
}

BOOL func_52(var uParam0) // Position - 0x1CED Hash - 0x277B5DDC ^0x1F100BD7
{
	var unk;
	BOOL flag;

	unk = { func_12(*uParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
	{
		if (func_147(*uParam0))
			return true;
	
		return false;
	}

	flag = func_163();

	if (flag)
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);

	if (!func_5(uParam0, 32))
	{
		if (func_163())
			func_25(uParam0, 32);
		else if (func_48(&(uParam0->f_2884)) >= 60f)
			return true;
	}
	else
	{
		if (!func_163())
			return true;
	
		if (!func_5(uParam0, 4096))
			if (func_147(*uParam0))
				func_25(uParam0, 4096);
			else
				func_111(uParam0);
		else if (!func_147(*uParam0))
			return true;
	}

	return false;
}

BOOL func_53(var uParam0) // Position - 0x1DAD Hash - 0xD916F462 ^0xD916F462
{
	func_165(uParam0, 7, pedLocal_15, false, true, true, false);
	func_166(volLocal_51);
	func_166(volLocal_52);
	func_166(volLocal_53);
	func_167(&pedLocal_14, true, false, true);
	func_168(&pedLocal_18);
	func_168(&pedLocal_19);
	func_168(&pedLocal_16);
	func_168(&pedLocal_17);
	func_164(&obLocal_36);
	func_164(&obLocal_37);
	func_164(&obLocal_38);
	func_164(&obLocal_39);
	func_164(&obLocal_40);
	func_164(&obLocal_41);
	func_164(&obLocal_42);
	func_164(&obLocal_43);
	func_169(&uLocal_44);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_55))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_55, false);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_34))
		if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(veLocal_34))
			VEHICLE::DELETE_VEHICLE(&veLocal_34);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_35))
		if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(veLocal_35))
			VEHICLE::DELETE_VEHICLE(&veLocal_35);

	return true;
}

void func_54(var uParam0) // Position - 0x1E6C Hash - 0x3BACEE7F ^0x78661F61
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_426))
		func_170(uParam0->f_426);

	return;
}

void func_55(var uParam0) // Position - 0x1E89 Hash - 0xB0D02BD0 ^0xD08373B5
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_425))
	{
		func_171(&(uParam0->f_427), uParam0->f_425, false);
	
		if (PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(uParam0->f_425))
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(uParam0->f_425);
	
		func_66(uParam0, 512);
		func_60(*uParam0);
		VOLUME::DELETE_VOLUME(uParam0->f_425);
	}

	return;
}

void func_56(var uParam0) // Position - 0x1EDD Hash - 0xE2CC04A7 ^0x2A331FD5
{
	BOOL flag;
	BOOL flag2;
	eStackSize i;
	eStackSize stackSize;
	Ped ped;

	flag = func_40(uParam0->f_2889, 2097152);
	flag2 = func_5(uParam0, 1024);

	for (i = 0; i < 27; i = i + 1)
	{
		stackSize = i;
	
		if (!func_114(stackSize))
		{
		}
		else if (!func_115(stackSize))
		{
		}
		else if (!func_116(stackSize))
		{
		}
		else
		{
			ped = Global_1360165[i /*1157*/];
		
			if (!ENTITY::DOES_ENTITY_EXIST(ped))
			{
			}
			else
			{
				func_165(uParam0, stackSize, ped, false, flag, !flag2, false);
			}
		}
	}

	return;
}

void func_57(var uParam0) // Position - 0x1F66 Hash - 0x4DD6AE05 ^0xF30F3284
{
	func_172(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
	return;
}

int func_58(var uParam0) // Position - 0x1FA9 Hash - 0xE1806B8B ^0x92A87595
{
	int i;
	Entity entityFromItem;
	Object objectIndexFromEntityIndex;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
		return 0;

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(uParam0->f_5); i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, uParam0->f_5));
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(entityFromItem))
		{
			objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(entityFromItem);
			EVENT::_0xA86B0EE9B39D15D6(&objectIndexFromEntityIndex);
		}
		else if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
		{
			ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem));
		}
	}

	ITEMSET::DESTROY_ITEMSET(uParam0->f_5);
	return 1;
}

void func_59(int iParam0) // Position - 0x2020 Hash - 0x7B2832AA ^0x5B57D776
{
	if (!func_81(iParam0))
		return;

	Global_1835011[iParam0 /*74*/].f_58 = 0;
	Global_1835011[iParam0 /*74*/].f_59 = 0;
	Global_1835011[iParam0 /*74*/].f_60 = 0;
	return;
}

void func_60(int iParam0) // Position - 0x2056 Hash - 0x4260FC74 ^0xBC5A0A21
{
	if (!func_81(iParam0))
		return;

	Global_1835011[iParam0 /*74*/].f_61 = 0;
	return;
}

void func_61(BOOL bParam0) // Position - 0x2076 Hash - 0xAD1429D0 ^0xAD1429D0
{
	if (bParam0)
		Global_1945188.f_865 = Global_1945188.f_865 - Global_1945188.f_865 & 2;
	else
		Global_1945188.f_865 = Global_1945188.f_865 | 2;

	func_173(bParam0);
	return;
}

void func_62() // Position - 0x20B4 Hash - 0x4AC3BB62 ^0x697E6320
{
	eStackSize i;
	eStackSize stackSize;
	Ped ped;

	if (!func_174())
		return;

	func_175();

	for (i = 0; i < 27; i = i + 1)
	{
		stackSize = i;
	
		if (!func_114(stackSize))
		{
		}
		else
		{
			ped = Global_1360165[i /*1157*/];
		
			if (!ENTITY::DOES_ENTITY_EXIST(ped))
			{
			}
			else if (func_176(ped))
			{
				PED::SET_PED_CONFIG_FLAG(ped, 230, true);
			}
		}
	}

	return;
}

BOOL func_63(var uParam0, int iParam1) // Position - 0x2119 Hash - 0x6B2D4FF8 ^0x6B2D4FF8
{
	return uParam0->f_1664 && iParam1 != false;
}

void func_64(var uParam0) // Position - 0x212B Hash - 0xD2C7E52D ^0xD2F1F334
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[i /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2));
			
				if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2), false, true);
			
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2) != Global_35)
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2), true);
			}
		}
	}

	return;
}

void func_65(var uParam0, BOOL bParam1) // Position - 0x21E6 Hash - 0x42AB6152 ^0x293FEC39
{
	int i;
	Ped pedIndexFromEntityIndex;

	if (!bParam1 && !ITEMSET::IS_ITEMSET_VALID(uParam0->f_2888))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_2888))
		uParam0->f_2888 = ITEMSET::CREATE_ITEMSET(true);

	LAW::_0x522F74636DF10201(PLAYER::GET_PLAYER_INDEX(), uParam0->f_2888);

	if (ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2888) <= 0)
		LAW::_0xDA1A9ADC4E3D4B16(uParam0->f_2888, true, false);

	if (ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2888) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_2888);
		return;
	}

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2888); i = i + 1)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, uParam0->f_2888)));
	
		if (!ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
			PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex, 148, bParam1);
	}

	ITEMSET::DESTROY_ITEMSET(uParam0->f_2888);
	return;
}

void func_66(var uParam0, int iParam1) // Position - 0x22A7 Hash - 0xA4EAD31F ^0x77D45044
{
	uParam0->f_2 = uParam0->f_2 - uParam0->f_2 && iParam1;
	return;
}

void func_67(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x22BF Hash - 0x7990926B ^0xBD6909E0
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
	return;
}

void func_68() // Position - 0x22D1 Hash - 0xAF223956 ^0x1583E805
{
	int num;

	if (func_177(Global_1898437) && func_178(Global_1898437) == 1)
	{
		num = func_179(Global_1898437);
	
		if (func_81(num) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[num /*74*/].f_22)) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1835011[num /*74*/].f_22))) > 0)
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1835011[num /*74*/].f_22), 1);
	}

	return;
}

int func_69(var uParam0) // Position - 0x2341 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

void func_70(var uParam0) // Position - 0x234A Hash - 0xC3FF5F57 ^0xC3FF5F57
{
	var unk;

	unk = { func_180(uParam0) };
	func_181(uParam0, &unk);
	return;
}

void func_71(var uParam0) // Position - 0x2365 Hash - 0x23343251 ^0x6EC06CEA
{
	var name;
	var name2;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_425))
	{
		TEXT_LABEL_ASSIGN_STRING(&name, func_182(), 64);
		TEXT_LABEL_APPEND_STRING(&name, "_NO_AMBIENT_CONTENT", 64);
		uParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_183(*uParam0), 0f, 0f, 0f, 5f, 5f, 5f, &name);
		func_184(uParam0, uParam0->f_425, 0);
		func_185(*uParam0, uParam0->f_425);
	}

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_426))
	{
		TEXT_LABEL_ASSIGN_STRING(&name2, func_182(), 64);
		TEXT_LABEL_APPEND_STRING(&name2, "_NO_SCRIPT_CONTENT", 64);
		uParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_183(*uParam0), 0f, 0f, 0f, 25f, 25f, 25f, &name2);
		func_186(uParam0, uParam0->f_426);
	}

	return;
}

void func_72(int iParam0) // Position - 0x2406 Hash - 0xA1813BF8 ^0x43F7F42C
{
	var textBlock;

	textBlock = { func_187(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		HUD::TEXT_BLOCK_REQUEST(&textBlock);

	return;
}

void func_73(int iParam0) // Position - 0x2429 Hash - 0xA1813BF8 ^0x43F7F42C
{
	var textBlock;

	textBlock = { func_188(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		HUD::TEXT_BLOCK_REQUEST(&textBlock);

	return;
}

BOOL func_74(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x244C Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_189())
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
		num = func_179(Global_1898164.f_1[0 /*5*/]);
	
		if (func_190(num) && func_191(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_177(Global_1898164.f_1[0 /*5*/]))
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

void func_75(var uParam0, int iParam1) // Position - 0x2650 Hash - 0xB961644E ^0xB961644E
{
	func_96(&(uParam0->f_428), iParam1);
	return;
}

void func_76(var uParam0) // Position - 0x2663 Hash - 0x1CCC9FAE ^0x1CCC9FAE
{
	func_192(&(uParam0->f_428), &(uParam0->f_958));
	return;
}

BOOL func_77(var uParam0, const char* sParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2679 Hash - 0xB6AB086B ^0x5535D393
{
	var unk;
	float num;
	var playbackListName;
	int flags;
	BOOL flag;
	int i;
	var string2;

	if (bParam3)
	{
		uParam0->f_511 = uParam0->f_511 + 1;
	
		if (uParam0->f_511 < 10)
			return func_83(uParam0, 256) && !func_83(uParam0, 4194304);
	
		uParam0->f_511 = 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	func_82(uParam0, sParam1);

	if (!func_83(uParam0, 64))
	{
		if (!_IS_NULL_VECTOR(func_89(uParam0)))
		{
			func_96(uParam0, 64);
		}
		else
		{
			unk = { func_125(uParam0) };
		
			if (!_IS_NULL_VECTOR(unk))
				func_193(uParam0, unk);
		}
	
		return false;
	}

	num = func_194(Global_35, func_89(uParam0), true);

	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if (num >= func_195(uParam0) && !bParam2 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_196();
				uParam0->f_529 = 0;
			}
		
			func_197(uParam0);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
		
			func_198(uParam0);
			func_103(uParam0, 128, true);
			func_103(uParam0, 256, true);
			func_103(uParam0, 4096, true);
			func_103(uParam0, 32768, true);
			func_103(uParam0, 16777216, true);
		}
	}
	else if (num <= func_199(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				func_199(uParam0) >= func_195(uParam0);
				playbackListName = { func_200(uParam0) };
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&playbackListName))
					func_201(uParam0);
			
				playbackListName = { func_200(uParam0) };
				flags = 256;
			
				if (!func_83(uParam0, 1))
					flags = flags | 2048;
			
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), flags, &playbackListName, false, true);
				func_202(uParam0, 0, false, 0, 0);
				func_96(uParam0, 128);
			}
		}
	}

	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, 4194304))
			return true;
	
		func_88(uParam0);
	
		if (!uParam0->f_529)
		{
			if (func_203())
			{
				func_204(4096);
				uParam0->f_529 = 1;
			}
		}
	
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			flag = true;
			string2 = { func_180(uParam0) };
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_462[i /*9*/], &string2))
					{
						if (!uParam0->f_462[i /*9*/].f_8)
						{
							uParam0->f_462[i /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &uParam0->f_462[i /*9*/]);
							flag = false;
						}
						else if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &uParam0->f_462[i /*9*/]))
						{
							flag = false;
						}
					}
				}
			}
		
			if (!func_83(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &string2))
				{
					if (!func_83(uParam0, 16777216))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, &string2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &string2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_444, &string2))
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &string2);
					
						func_96(uParam0, 16777216);
					}
				
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &string2))
						flag = false;
				}
			}
		
			if (!flag)
				return false;
		
			func_96(uParam0, 256);
			func_103(uParam0, 4194304, true);
			return true;
		}
	}

	return false;
}

void func_78(int iParam0, int iParam1) // Position - 0x2A15 Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_30(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 - Global_1898346[iParam0 /*6*/].f_1 && iParam1;
	return;
}

BOOL func_79(int iParam0) // Position - 0x2A4C Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_145(&(iParam0->f_29), 62))
	{
		switch (func_205())
		{
			case 1:
				if (!func_145(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_145(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_145(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_145(&(iParam0->f_29), 32))
					if (func_145(&(iParam0->f_29), 2))
						if (func_207(func_206()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

Ped func_80(int iParam0) // Position - 0x2AF6 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_208(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_81(int iParam0) // Position - 0x2B22 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

void func_82(var uParam0, const char* sParam1) // Position - 0x2B38 Hash - 0x46501464 ^0xCBF683BB
{
	int num;

	if (func_83(uParam0, 8192))
		return;

	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		num = MISC::_0x94E8CA3DEE952789(sParam1, "@");
	
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
			TEXT_LABEL_COPY(&(uParam0->f_440), { func_209("cutscene@", MISC::_0x5B4A8121A47D844D(num - 1), true, 63) }, 4);
	
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		TEXT_LABEL_COPY(&(uParam0->f_440), { func_209("cutscene@", sParam1, true, 63) }, 4);
	}

	func_96(uParam0, 8192);
	return;
}

BOOL func_83(var uParam0, int iParam1) // Position - 0x2BB2 Hash - 0x718DD1EF ^0x5F4D390E
{
	return uParam0->f_8 && iParam1 != false;
}

void func_84(var uParam0) // Position - 0x2BC3 Hash - 0xFCCC8B7D ^0xB8745C5D
{
	BOOL flag;
	int currentMessage;
	BOOL flag2;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444) || func_83(uParam0, 512))
	{
		if (!func_210(uParam0->f_501, 128))
			func_211();
	
		return;
	}

	if (func_99(uParam0, Global_35, 4) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_212(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_212(Global_35)) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_210(uParam0->f_501, 128))
			func_211();
	
		return;
	}

	flag = true;
	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);

	if (currentMessage != 0)
		if (func_213(currentMessage))
			if (func_214(Global_43801, false))
				flag = false;

	flag2 = false;

	if (func_210(uParam0->f_501, 512))
		flag2 = true;

	if (func_215(flag, flag2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_211();
	}

	return;
}

void func_85(var uParam0, char* sParam1) // Position - 0x2CD0 Hash - 0xA419EFA1 ^0x99DB3BF
{
	var unk;
	var unk9;

	if (func_50(uParam0) == 2 && func_216(uParam0->f_500, 16384) || func_83(uParam0, 268435456))
	{
		unk = { func_180(uParam0) };
		func_217(uParam0, &unk);
	}

	func_218(uParam0, sParam1);

	if (func_83(uParam0, 131072))
		func_219(uParam0, false);

	if (func_220())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_221();
	}

	if (func_222())
		func_223(true);

	func_202(uParam0, 0, false, 0, 0);
	TEXT_LABEL_ASSIGN_STRING(&unk9, sParam1, 32);
	func_224(uParam0, unk9);
	func_93(true, false);
	func_197(uParam0);

	if (func_225() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_212(Global_35)))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	if (func_87(uParam0, 1))
		uParam0->f_436(uParam0);

	func_226(uParam0);
	func_227(uParam0, true);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	TEXT_LABEL_ASSIGN_STRING(&Global_43802, sParam1, 24);
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x2DD8 Hash - 0x77441219 ^0x1DE6F6A1
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
	return;
}

BOOL func_87(var uParam0, int iParam1) // Position - 0x2DED Hash - 0x6B2D4FF8 ^0x6B2D4FF8
{
	return uParam0->f_439 && iParam1 != false;
}

void func_88(var uParam0) // Position - 0x2DFF Hash - 0xC673333B ^0xFC27ADE6
{
	if (!func_83(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		func_228(uParam0);
		func_227(uParam0, false);
	
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
	
		func_96(uParam0, 32768);
	}

	return;
}

Vector3 func_89(var uParam0) // Position - 0x2E60 Hash - 0xD2D3D44D ^0x694345D8
{
	return uParam0->f_5;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2E6E Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_91(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2E98 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_229(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

void func_92(BOOL bParam0) // Position - 0x2EF3 Hash - 0x70653DE9 ^0x49B958F9
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	return;
}

void func_93(BOOL bParam0, BOOL bParam1) // Position - 0x2F27 Hash - 0xBAE5AEB2 ^0x9ABFBA0B
{
	if (func_230())
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);

	if (bParam0)
		if (func_231())
			func_232(true);

	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, bParam1, false);
	return;
}

void func_94(var uParam0) // Position - 0x2F56 Hash - 0x952B4E7E ^0x2809A33C
{
	var unk;

	if (!func_83(uParam0, 4))
	{
		if (func_216(uParam0->f_500, 16384))
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	
		unk = { func_233(uParam0) };
	
		if (!func_216(uParam0->f_500, 524288))
			func_234(&(uParam0->f_512));
	
		func_235(&(uParam0->f_500), 0, 2, unk, unk.f_1, unk.f_2, false);
		func_236(uParam0, 0f, 0f, 0f);
		func_237(uParam0);
		func_238(uParam0);
		func_239(uParam0, 0f, 0f, 0f, 0, false);
		func_240(uParam0);
		func_96(uParam0, 4);
		func_241(uParam0, false);
		func_242(&(Global_1946054.f_1497), Global_35, true, 64, true, true, true);
	
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_513)))
			CAM::_CAM_DESTROY(&(uParam0->f_513));
	}

	return;
}

BOOL func_95(var uParam0, BOOL bParam1) // Position - 0x3017 Hash - 0x8D7BC112 ^0xD7D079FE
{
	if (func_83(uParam0, 262144))
		return false;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return false;

	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, "ExportCamera"))
		return false;

	if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, "ExportCamera") || ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_444, "ExportCamera") && bParam1 || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444))
	{
		func_96(uParam0, 262144);
		func_241(uParam0, true);
		return true;
	}

	return false;
}

void func_96(var uParam0, int iParam1) // Position - 0x30A5 Hash - 0x53A96DDB ^0x69C93C85
{
	uParam0->f_8 = uParam0->f_8 || iParam1;
	return;
}

int func_97(var uParam0) // Position - 0x30B8 Hash - 0xF7D2A495 ^0x426C6775
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
		return -1;

	return BUILTIN::FLOOR(ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_444) * 1000f);
}

int func_98(var uParam0) // Position - 0x30F5 Hash - 0xF7D2A495 ^0xF4909E0
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
		return -1;

	return BUILTIN::FLOOR(ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_444) * 1000f);
}

BOOL func_99(var uParam0, Ped pedParam1, int iParam2) // Position - 0x3132 Hash - 0xC6E5AF5F ^0x4744F9B8
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1 && func_243(&uParam0->f_13[i /*12*/], iParam2))
			return true;
	}

	return false;
}

BOOL func_100(var uParam0) // Position - 0x3184 Hash - 0x3CCCD36D ^0x3C3A8A88
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return true;

	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_444, false))
	{
		if (func_83(uParam0, 524288))
			ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
	
		return true;
	}

	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444) && func_83(uParam0, 1048576))
		return true;

	return false;
}

void func_101(var uParam0) // Position - 0x31E1 Hash - 0xCD2CB56 ^0x848D9CDE
{
	if (func_83(uParam0, 1073741824) && !func_83(uParam0, 524288) && func_83(uParam0, 512) && CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(1000);

	return;
}

void func_102(var uParam0) // Position - 0x3228 Hash - 0x795EBF5D ^0x531CDFF2
{
	if (!func_83(uParam0, 536870912))
	{
		func_241(uParam0, true);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_196();
		func_96(uParam0, 536870912);
	}

	if (func_83(uParam0, 524288))
		CAM::DO_SCREEN_FADE_OUT(0);

	func_244(uParam0);
	func_86(uParam0, 1);
	func_198(uParam0);
	func_245(uParam0);
	func_246(uParam0);
	func_247(uParam0, 4);
	func_201(uParam0);
	func_219(uParam0, true);
	func_197(uParam0);
	func_154(&(uParam0->f_1));

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);

	func_248(!func_210(uParam0->f_501, 128));

	if (!func_210(uParam0->f_501, 128))
		func_211();

	return;
}

void func_103(var uParam0, int iParam1, BOOL bParam2) // Position - 0x32FC Hash - 0x4C22909C ^0xA24D6B06
{
	uParam0->f_8 = uParam0->f_8 - uParam0->f_8 && iParam1;

	if (iParam1 == 512 && bParam2 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_444);

	return;
}

void func_104(var uParam0, int iParam1) // Position - 0x3349 Hash - 0xFE5D8273 ^0x73A78C82
{
	if (Global_1935630.f_12)
		return;

	func_249(2000);
	Global_16 = false;
	func_250();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_210(*uParam0, 8));

	if (!func_210(*uParam0, 1))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);

	if (func_210(*uParam0, 2) || func_210(*uParam0, 4))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_210(*uParam0, 16))
		func_61(true);

	if (func_210(*uParam0, 32))
	{
		func_251(Global_35, -383172193, 0, 1742327865, false, true, false, false, true, false);
		func_252(joaat("kit_bandana"), false);
	}

	func_242(&(Global_1946054.f_1497), Global_35, true, 49217, true, true, true);

	if (Global_1359489.f_16 & 4194304 != 0)
		Global_1359489.f_16 = Global_1359489.f_16 - Global_1359489.f_16 & 4194304;

	*uParam0 = 0;
	return;
}

void func_105() // Position - 0x345A Hash - 0xD4ABC353 ^0xB5896EA9
{
	Global_1935630.f_52 = 1;
	return;
}

BOOL func_106(var uParam0) // Position - 0x3469 Hash - 0xF077D70E ^0x7B568537
{
	BOOL isPedOnFoot;
	int num;
	float offsetFromEntityGivenWorldCoords;

	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);

	if (!isPedOnFoot && func_5(uParam0, 1048576))
	{
		func_66(uParam0, 1048576);
		return 0;
	}

	if (!func_5(uParam0, 8388608))
	{
		if (BUILTIN::VDIST2(func_183(*uParam0), Global_36) < 10f * 10f)
		{
			func_25(uParam0, 8388608);
			func_19(&(uParam0->f_2890), false);
		}
		else
		{
			return 0;
		}
	}

	if (!func_5(uParam0, 1048576))
	{
		if (isPedOnFoot)
		{
			func_25(uParam0, 1048576);
		}
		else
		{
			num = 131072;
			offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, func_183(*uParam0)) };
		
			if (offsetFromEntityGivenWorldCoords > 0f)
				num = 262144;
		
			if (func_253(Global_35, &(uParam0->f_421), 0, SPC_LEAVE_CAMERA_CONTROL_ON, num, 1084227584, 100, 0, 0))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_422, true, 0))
	{
		return 1;
	}
	else if (BUILTIN::VDIST2(func_183(*uParam0), Global_36) < 2.5f * 2.5f)
	{
		return 1;
	}
	else if (!func_5(uParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_183(*uParam0), 1f, 20000, 1048576000, 0, 1193033728);
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, SPC_LEAVE_CAMERA_CONTROL_ON, false);
		PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MotionState_Walk"), false, 1, false);
	
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_3, -1, 0, 51, 0);
	
		func_25(uParam0, 2097152);
	}

	if (func_18(&(uParam0->f_2890)))
		if (func_48(&(uParam0->f_2890)) >= 15f)
			return 1;

	return 0;
}

void func_107(int iParam0) // Position - 0x363F Hash - 0xB7DA3075 ^0x9010CBC
{
	int num;

	num = func_32(func_31(iParam0));

	if (!func_30(num))
		return;

	func_22(num, 1024);
	return;
}

void func_108(BOOL bParam0) // Position - 0x3669 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_2(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_109(&Global_1935630, 4194304);
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

void func_109(int iParam0, int iParam1) // Position - 0x370C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_110(int iParam0) // Position - 0x371D Hash - 0x4A1A3440 ^0xAE5E6967
{
	eStackSize i;

	if (func_254() != -1)
		return;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(func_255(i), 0))
			if (PED::IS_PED_GROUP_MEMBER(func_255(i), func_256(), true))
				func_257(i, iParam0);
	}

	return;
}

void func_111(var uParam0) // Position - 0x376B Hash - 0x6215D6B9 ^0xC793DEB6
{
	if (Global_1935630.f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		func_108(false);
		func_65(uParam0, true);
	}

	func_258(true, 0, true);
	return;
}

void func_112(BOOL bParam0) // Position - 0x3797 Hash - 0x6D9C7C2F ^0xEFFA22A7
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
	func_259(0f);
	Global_1935436.f_11 = 1;

	if (func_260())
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	else
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
		func_261();

	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);

	return;
}

BOOL func_113(int iParam0, int iParam1) // Position - 0x3852 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_114(eStackSize essParam0) // Position - 0x3861 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_115(eStackSize essParam0) // Position - 0x3880 Hash - 0xDA629583 ^0xDA629583
{
	return func_262(essParam0, 16, true);
}

BOOL func_116(eStackSize essParam0) // Position - 0x3891 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_114(essParam0))
		return false;

	if (!func_115(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

BOOL func_117(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x38C5 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_194(pedParam0, Global_36, true);

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

BOOL func_118(var uParam0) // Position - 0x394E Hash - 0x39705408 ^0x39705408
{
	return func_113(*uParam0, 2);
}

float func_119() // Position - 0x395E Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_120(var uParam0) // Position - 0x3990 Hash - 0xEDF5DFB4 ^0xAE1B7E7A
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);

	return;
}

void func_121(var uParam0, int iParam1) // Position - 0x39AD Hash - 0x5F6D01C3 ^0x5F6D01C3
{
	func_263(uParam0, 4);
	func_264(uParam0, 10);
	func_265(uParam0, iParam1);
	return;
}

void func_122(var uParam0, float fParam1) // Position - 0x39CD Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_119() - fParam1;
	func_266(uParam0, 1);
	func_267(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_123(int iParam0, ItemSet isParam1, ItemSet isParam2, ItemSet isParam3) // Position - 0x39F3 Hash - 0x68078886 ^0xC044E3DC
{
	if (!func_81(iParam0))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(isParam1) || !ITEMSET::IS_ITEMSET_VALID(isParam2) || !ITEMSET::IS_ITEMSET_VALID(isParam3))
		return;

	!func_268(iParam0);
	Global_1835011[iParam0 /*74*/].f_58 = isParam1;
	Global_1835011[iParam0 /*74*/].f_59 = isParam2;
	Global_1835011[iParam0 /*74*/].f_60 = isParam3;
	return;
}

Vector3 func_124(var uParam0) // Position - 0x3A5D Hash - 0x1BDFA5C4 ^0x1BDFA5C4
{
	return func_89(&(uParam0->f_428));
}

Vector3 func_125(var uParam0) // Position - 0x3A6E Hash - 0xC8CA6991 ^0x9DE3152C
{
	var unk;
	var position;
	var rotation;
	var matrix;

	TEXT_LABEL_COPY(&unk, { func_269(uParam0) }, 8);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_212(Global_35), &matrix, false, 0, 2))
			position = { matrix };
		else
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &position, &rotation, 2);
	
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return position;
	}

	return 0f, 0f, 0f;
}

Vector3 func_126(int iParam0) // Position - 0x3AF8 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_183(iParam0);
}

void func_127(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3B06 Hash - 0x11E48EAB ^0x11E48EAB
{
	func_193(&(uParam0->f_428), uParam1);
	return;
}

BOOL func_128(var uParam0) // Position - 0x3B1B Hash - 0x523DA023 ^0x523DA023
{
	func_150(false);

	if (!func_270() || !func_156(uParam0, false) || !func_271(uParam0) || !func_272() || !func_273() || !func_274() || !func_275())
		return false;

	func_276(&volLocal_51, -866.697f, -1304.256f, 42.009f, 0f, 0f, 0f, 30.926f, 30.054f, 17.5f, "MAR7_INT-CUTSCENE");
	func_276(&volLocal_52, -879.994f, -1297.136f, 42.009f, 0f, 0f, 0f, 8.385f, 15.888f, 17.5f, "MAR7_INT-PARKOUR");
	volLocal_53 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), -861.8502f, -1313.613f, 42.01474f, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f);
	volLocal_54 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), -871.9804f, -1315.1531f, 43.01369f, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_53, true);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_54, false);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(volLocal_54, true);
	func_277(&(uParam0->f_428), volLocal_51, false, true);
	func_239(&(uParam0->f_428), -889.06805f, -1293.7816f, 42.50362f, 0f, true);
	anLocal_55 = func_278(volLocal_51, 0, false, 0);
	func_25(uParam0, 2);
	func_279(uParam0, pedLocal_14, true);
	func_280(0.85f);
	return true;
}

int func_129(var uParam0) // Position - 0x3C8A Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

void func_130(var uParam0) // Position - 0x3C93 Hash - 0x4DD6AE05 ^0xF30F3284
{
	func_172(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
	return;
}

void func_131(var uParam0, Ped pedParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3CD6 Hash - 0x82689B8E ^0x82689B8E
{
	func_139(uParam0, pedParam1, sParam2, iParam3, iParam4, bParam5, false);
	return;
}

void func_132(var uParam0) // Position - 0x3CEF Hash - 0x6254ECC0 ^0x4456B255
{
	var unk;

	unk = { func_12(*uParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return;

	if (func_7(uParam0))
		return;

	if (!func_5(uParam0, 16384))
	{
		func_25(uParam0, 16384);
	
		if (!func_281(&unk))
			return;
	
		func_282(uParam0, unk, 0);
		func_25(uParam0, 524288);
	}

	return;
}

void func_133(var uParam0) // Position - 0x3D52 Hash - 0xDECB73AA ^0xDECB73AA
{
	if (func_199(&(uParam0->f_428)) != 15f || func_195(&(uParam0->f_428)) != 20f)
		return;

	switch (*uParam0)
	{
		case 31:
			func_283(&(uParam0->f_428), 50f);
			func_284(&(uParam0->f_428), 75f);
			break;
	
		case 34:
			func_283(&(uParam0->f_428), 35f);
			func_284(&(uParam0->f_428), 50f);
			break;
	
		case 62:
			func_283(&(uParam0->f_428), 25f);
			func_284(&(uParam0->f_428), 30f);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_134(var uParam0) // Position - 0x3DFF Hash - 0x4CAB5FDE ^0x94139C79
{
	return func_285(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

BOOL func_135(var uParam0, BOOL bParam1) // Position - 0x3E42 Hash - 0x668AF7F9 ^0x2C83E00
{
	eStackSize stackSize;

	if (func_5(uParam0, 2))
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	stackSize = func_286(*uParam0);

	if (!func_114(stackSize))
		return true;

	uParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(func_255(stackSize));
	return func_287(uParam0, stackSize, &(uParam0->f_3), bParam1, true, uParam0->f_2903, uParam0->f_2903.f_1, uParam0->f_2903.f_2, 0, 0, false, false, false);
}

BOOL func_136(int iParam0, BOOL bParam1) // Position - 0x3EAF Hash - 0xD12F2026 ^0xFD6D81DE
{
	BOOL num;
	var label;
	var unk8;

	num = 1;
	TEXT_LABEL_COPY(&label, { func_187(iParam0) }, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk8, HUD::_GET_LABEL_TEXT_2(&label), 64);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk8))
		if (!func_288(iParam0))
			num = 0;

	if (!bParam1)
	{
		TEXT_LABEL_COPY(&label, { func_188(iParam0) }, 8);
		TEXT_LABEL_ASSIGN_STRING(&unk8, HUD::_GET_LABEL_TEXT_2(&label), 64);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk8))
			if (!func_289(iParam0))
				num = 0;
	}

	return num;
}

void func_137(var uParam0, Object obParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3F1C Hash - 0x37E325FF ^0x56E9093A
{
	int num;
	Object object;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(obParam1))
		return;

	if (iParam3 == 0 && ENTITY::IS_ENTITY_DEAD(obParam1) && !bParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obParam1))
		{
		}
	
		return;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		sParam2 = func_290(obParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(obParam1))
		{
		}
	
		return;
	}

	num = func_291(uParam0, obParam1);

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
		object = func_292(uParam0, sParam2);
	
		if (ENTITY::DOES_ENTITY_EXIST(object) && object != obParam1)
			func_293(uParam0, object);
	}

	if (num == -1)
		num = func_294(uParam0);

	if (num != -1)
	{
		uParam0->f_13[num /*12*/] = obParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13[num /*12*/].f_1), sParam2, 64);
		uParam0->f_13[num /*12*/].f_9 = iParam3;
		uParam0->f_13[num /*12*/].f_10 = iParam4;
	
		if (bParam5)
			func_295(&uParam0->f_13[num /*12*/], 2);
		else
			func_296(&uParam0->f_13[num /*12*/], 2);
	}

	return;
}

void func_138(var uParam0, Object obParam1, char* sParam2) // Position - 0x406C Hash - 0x6D9EF6A2 ^0x6D9EF6A2
{
	func_297(&(uParam0->f_958), obParam1, sParam2, false);
	return;
}

void func_139(var uParam0, Vehicle veParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x4082 Hash - 0x9BD375D2 ^0x9BD375D2
{
	func_137(&(uParam0->f_428), veParam1, sParam2, iParam3, iParam4, bParam6);
	func_138(uParam0, veParam1, sParam2);

	if (bParam5)
		func_298(uParam0, veParam1);

	return;
}

struct<4> func_140(int iParam0) // Position - 0x40B4 Hash - 0x6D11454D ^0xB12E3BC9
{
	var unk;

	if (!func_81(iParam0))
		return unk;

	return Global_1835011[iParam0 /*74*/].f_3;
}

void func_141(var uParam0) // Position - 0x40D9 Hash - 0x70AF85D1 ^0xF30741F3
{
	var unk;
	int i;

	func_299(&(uParam0->f_428)) > 15;

	for (i = 0; i < 15; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428.f_13[i /*12*/]))
			Global_43619[i /*12*/] = { uParam0->f_428.f_13[i /*12*/] };
		else
			Global_43619[i /*12*/] = { unk };
	}

	return;
}

BOOL func_142() // Position - 0x413E Hash - 0x5976C0FC ^0x467B462C
{
	return func_300(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_143() // Position - 0x414E Hash - 0x8DA4BA54 ^0x8DA4BA54
{
	if (func_142())
	{
		Global_18 = false;
		Global_43884 = 0;
	
		if (!func_163())
			func_61(true);
	}

	return;
}

void func_144(var uParam0, var uParam1) // Position - 0x4172 Hash - 0x4D904C7 ^0x7235D696
{
	var unk;

	if (func_63(uParam1, 32768))
	{
		unk = { func_180(uParam0) };
		func_217(uParam0, &unk);
	
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
		
			if (_IS_NULL_VECTOR(uParam0->f_505))
				uParam0->f_505 = { func_301(uParam1, uParam1->f_1684) };
		
			if (_IS_NULL_VECTOR(uParam0->f_502))
			{
				uParam0->f_502 = { func_301(uParam1, uParam1->f_1684) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = uParam0->f_502.f_2 + 0.5f;
			}
		}
	
		if (func_63(uParam1, 268435456))
			func_302(&(uParam0->f_500), 16384);
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_303(uParam1, 524288);
	}

	if (func_304(uParam1, 128))
		func_96(uParam0, 32);

	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
	
		if (uParam1->f_1684 >= 0 && func_305(&uParam1->f_1016[uParam1->f_1684 /*41*/], 256))
			func_302(&(uParam0->f_500), 524288);
	}

	if (*uParam1 == 0 && CAM::_IS_CAMERA_AVAILABLE(&(uParam1->f_1692)))
		MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_513), &(uParam1->f_1692), 16);

	return;
}

BOOL func_145(var uParam0, int iParam1) // Position - 0x42D7 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_146(int iParam0) // Position - 0x42F7 Hash - 0x86FFCEDA ^0x86FFCEDA
{
	if (iParam0 & 36 == 4)
		return 6;
	else if (iParam0 & 34 == 4)
		return 5;
	else if (iParam0 & 12 == 8)
		return 12;
	else if (iParam0 & 24 == 16)
		return 18;
	else if (iParam0 & 48 == 32)
		return 0;

	return 0;
}

BOOL func_147(int iParam0) // Position - 0x4352 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_306(Global_1835011[iParam0 /*74*/].f_1);
}

const char* func_148(int iParam0) // Position - 0x437E Hash - 0xBDAEC5FF ^0xCF2E1D60
{
	const char* str;

	if (!func_81(iParam0))
		return str;

	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_149(var uParam0, var uParam1) // Position - 0x439F Hash - 0x8FE20AD3 ^0xDE446A76
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
		return 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
			{
				func_217(uParam0, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}

	return 0;
}

void func_150(BOOL bParam0) // Position - 0x4439 Hash - 0xD10E044C ^0x5C3584D8
{
	if (bParam0)
		func_307(471442861, true, 1f, true, false, 0, true, false);
	else
		func_307(471442861, true, 0f, true, false, 0, true, false);

	func_307(752949299, true, 0f, false, false, 0, true, false);
	func_307(1538487767, true, 0f, false, false, 0, true, false);
	func_307(410623597, true, 0f, false, false, 0, true, false);
	func_307(1333038182, true, 0f, false, false, 0, true, false);
	return;
}

void func_151() // Position - 0x44A9 Hash - 0x5509B993 ^0x3BF9CD7E
{
	if (func_152(Global_35, 0))
	{
		if (bLocal_88)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_308(1);
				bLocal_88 = false;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bLocal_88 = true;
		}
	}

	return;
}

BOOL func_152(Ped pedParam0, int iParam1) // Position - 0x44E4 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_309(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_309(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_309(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_309(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_309(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_309(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_309(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_309(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

BOOL func_153(Ped pedParam0, float fParam1, float fParam2, float fParam3, var uParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0x45E3 Hash - 0x76A08862 ^0x6A7EDE1E
{
	int i;
	Ped mount;
	Vehicle vehiclePedIsIn;
	Ped pedInDraftHarness;
	float num;

	func_310(pedParam0, fParam1, false, fParam5, fParam6, fParam7, fParam8, iParam12, iParam13, bParam14, 0);
	mount = PED::GET_MOUNT(pedParam0);

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);

	num = func_194(pedParam0, fParam1, true);

	if (!func_18(uParam4))
		if (num <= fParam8)
			if (ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
				func_19(uParam4, false);
	else if (bParam10 && num > fParam8)
		func_154(uParam4);

	if (func_18(uParam4))
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
	
		if (func_48(uParam4) >= fParam9)
		{
			if (pedParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(mount) && !func_311(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
			{
				if (PED::IS_PED_ON_MOUNT(pedParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(pedParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && !func_311(pedParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
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

void func_154(var uParam0) // Position - 0x47A2 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_155(Ped pedParam0, Volume volParam1, int iParam2, BOOL bParam3) // Position - 0x47B8 Hash - 0x425E360D ^0xB9BEF16F
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, true, 0);
}

BOOL func_156(var uParam0, BOOL bParam1) // Position - 0x47EC Hash - 0x4D290A4C ^0x108E5679
{
	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_36))
	{
		STREAMING::REQUEST_MODEL(hLocal_64, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_64))
		{
			obLocal_36 = OBJECT::CREATE_OBJECT(hLocal_64, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_36, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_36, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_36, true);
			
				if (bParam1)
					func_137(&(uParam0->f_428), obLocal_36, "p_pen01x", 1, 0, false);
			}
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_37))
	{
		STREAMING::REQUEST_MODEL(hLocal_64, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_64))
		{
			obLocal_37 = OBJECT::CREATE_OBJECT(hLocal_64, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_37, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_37, true);
			
				if (bParam1)
					func_138(uParam0, obLocal_37, "p_pen01x");
			}
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_38))
	{
		STREAMING::REQUEST_MODEL(hLocal_65, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_65))
		{
			obLocal_38 = OBJECT::CREATE_OBJECT(hLocal_65, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_38, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_38, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_38, true);
			
				if (bParam1)
					func_139(uParam0, obLocal_38, "p_amb_clipboard_01", 1, 0, true, false);
			}
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_39))
	{
		STREAMING::REQUEST_MODEL(hLocal_66, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_66))
		{
			obLocal_39 = OBJECT::CREATE_OBJECT(hLocal_66, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_39))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_39, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_39, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_39, true);
			
				if (bParam1)
					func_137(&(uParam0->f_428), obLocal_39, "p_cs_book03x", 1, 0, false);
			}
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_40))
	{
		STREAMING::REQUEST_MODEL(hLocal_66, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_66))
		{
			obLocal_40 = OBJECT::CREATE_OBJECT(hLocal_66, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_40))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_40, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_40, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_40, true);
			
				if (bParam1)
					func_138(uParam0, obLocal_40, "p_cs_book03x");
			}
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_41))
	{
		STREAMING::REQUEST_MODEL(hLocal_67, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_67))
		{
			obLocal_41 = OBJECT::CREATE_OBJECT(hLocal_67, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_41))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_41, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_41, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_41, true);
			
				if (bParam1)
					func_139(uParam0, obLocal_41, "p_cs_catalogue01x", 1, 0, true, false);
			}
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_42))
	{
		STREAMING::REQUEST_MODEL(hLocal_68, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_68))
		{
			obLocal_42 = OBJECT::CREATE_OBJECT(hLocal_68, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_42))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_42, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_42, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_42, true);
			
				if (bParam1)
					func_139(uParam0, obLocal_42, "P_CS_LETTER03X", 1, 0, true, false);
			}
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_43))
	{
		STREAMING::REQUEST_MODEL(hLocal_69, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_69))
		{
			obLocal_43 = OBJECT::CREATE_OBJECT(hLocal_69, uLocal_76, true, true, false, false, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_43))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_43, true);
				ENTITY::SET_ENTITY_COLLISION(obLocal_43, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_43, true);
			
				if (bParam1)
					func_139(uParam0, obLocal_43, "p_cigarbox01x", 1, 0, true, false);
			}
		}
	
		return false;
	}

	return true;
}

struct<4> func_157(var uParam0) // Position - 0x4B01 Hash - 0xBD3347D6 ^0xBD3347D6
{
	return uParam0->f_2880;
}

BOOL func_158(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6) // Position - 0x4B10 Hash - 0xDC5ABFED ^0x648CB452
{
	BOOL flag;
	BOOL isFirstPersonCameraActive;
	BOOL flag2;
	BOOL isValidInterior;
	Interior interiorAtCoords;

	if (func_63(uParam0, 32768))
		return 1;

	if (_STOPWATCH_IS_INITIALIZED_0(uParam0) >= 3)
	{
		uParam0->f_1896 = func_312(PLAYER::GET_PLAYER_INDEX(), false, false, true);
		uParam0->f_1897 = PED::IS_PED_FULLY_ON_MOUNT(Global_35, true);
		uParam0->f_1899 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
	
		if (uParam0->f_1897)
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
				uParam0->f_1898 = Global_1935630.f_40;
			else
				uParam0->f_1898 = PED::GET_MOUNT(Global_35);
	
		if (uParam0->f_1899)
			uParam0->f_1901 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
	
		uParam0->f_1902 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_313(uParam0);
	}

	if (_STOPWATCH_IS_INITIALIZED_0(uParam0) < 10)
	{
		if (_STOPWATCH_IS_INITIALIZED_0(uParam0) == 3)
		{
			func_314(uParam0, iParam5, bParam6);
		}
		else if (_STOPWATCH_IS_INITIALIZED_0(uParam0) > 3)
		{
			if (func_315(uParam0) == 0)
			{
				if (!func_63(uParam0, 524288))
				{
					func_316(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_263(uParam0, 4);
					func_264(uParam0, 10);
					func_265(uParam0, iParam5);
					return 1;
				}
			}
		
			if (!func_63(uParam0, 67108864) && !Global_1935630.f_12)
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		
			if (!func_305(&uParam0->f_1016[uParam0->f_1684 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
		
			CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
			func_317(false);
			func_318();
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
		
			if (uParam0->f_1684 >= 0)
			{
				if (!func_305(&uParam0->f_1016[uParam0->f_1688 /*41*/], 32768))
					HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			
				if (func_319(uParam0, uParam0->f_1684))
					if (func_320(uParam0) < 7 && uParam0->f_1688 >= 0)
						func_321(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216);
				else if (uParam0->f_1688 >= 0)
					func_321(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216);
			
				func_322(uParam0);
			}
		}
	}

	flag = func_323(uParam0, iParam5, bParam6);
	isFirstPersonCameraActive = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);

	if (flag)
	{
		if (!func_63(uParam0, 268435456) && isFirstPersonCameraActive && !func_63(uParam0, 262144))
		{
			isValidInterior = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902);
		
			if (uParam0->f_1684 >= 0)
			{
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[uParam0->f_1684 /*41*/].f_1);
			
				if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords) && isValidInterior && interiorAtCoords == uParam0->f_1902)
					flag2 = true;
			}
		
			if (!isValidInterior || flag2)
			{
				func_324(uParam0, 131072);
				func_324(uParam0, 268435456);
			}
		}
	
		if (func_304(uParam0, 64) || uParam0->f_1684 >= 0 && !func_305(&uParam0->f_1016[uParam0->f_1684 /*41*/], 524288))
		{
			if (CAM::GET_LETTER_BOX_RATIO() > 0f || func_315(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			}
		}
	}

	if (_STOPWATCH_IS_INITIALIZED_0(uParam0) == 3 || func_63(uParam0, 131072))
	{
		func_325(uParam0);
	
		if (!func_63(uParam0, 262144))
		{
			if (flag && func_63(uParam0, 65536) || func_63(uParam0, 131072))
			{
				func_324(uParam0, 32768);
				func_263(uParam0, 4);
				func_264(uParam0, 10);
				uParam0->f_1769 = 1;
				func_265(uParam0, iParam5);
				return 1;
			}
		}
	}

	if (_STOPWATCH_IS_INITIALIZED_0(uParam0) >= 3)
	{
		func_326(uParam0, iParam5);
		func_327(uParam0);
	
		if (!func_328(uParam0, 1))
			func_329(uParam0);
	
		func_330(uParam0);
	}

	switch (_STOPWATCH_IS_INITIALIZED_0(uParam0))
	{
		case 0:
			func_331(uParam0, uParam1, iParam5);
			break;
	
		case 1:
			func_332(uParam0);
			break;
	
		case 2:
			func_333(uParam0);
			break;
	
		case 3:
			if (func_334(uParam0))
			{
				func_110(2);
				func_321(uParam0, uParam0->f_1016[uParam0->f_1684 /*41*/].f_27, uParam0->f_1345[uParam0->f_1684 /*22*/].f_1, 1065353216);
				func_26(&(uParam0->f_1872));
				func_263(uParam0, 1);
				func_335();
				func_264(uParam0, 5);
			}
			break;
	
		case 5:
		case 6:
		case 8:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
		
			if (!func_63(uParam0, 67108864))
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
		
			if (_STOPWATCH_IS_INITIALIZED_0(uParam0) == 5)
			{
				if (func_336(uParam0))
				{
					func_263(uParam0, 2);
					func_264(uParam0, 6);
				}
			}
		
			if (_STOPWATCH_IS_INITIALIZED_0(uParam0) == 6)
			{
				if (func_337(uParam0))
				{
					func_263(uParam0, 3);
					func_264(uParam0, 8);
				}
			}
		
			if (uParam0->f_1685 >= 0 || func_21(&(uParam0->f_1872)) >= 15f)
			{
				if (func_338(uParam0, iParam5))
				{
					if (func_339(uParam0))
					{
						uParam0->f_1685 = func_340(uParam0);
						func_26(&(uParam0->f_1872));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_263(uParam0, 6);
						func_264(uParam0, 9);
					}
					else
					{
						func_263(uParam0, 4);
						func_264(uParam0, 10);
						func_265(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
	
		case 9:
			if (func_338(uParam0, iParam5))
			{
				func_265(uParam0, iParam5);
				func_264(uParam0, 10);
				return 1;
			}
			break;
	
		case 10:
			return 1;
	}

	return 0;
}

BOOL func_159(var uParam0) // Position - 0x50FC Hash - 0x1C410021 ^0x1C410021
{
	return func_334(&(uParam0->f_958));
}

BOOL func_160(var uParam0) // Position - 0x510D Hash - 0x396BFA19 ^0x9045C8D3
{
	float num;
	Volume volume;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		volume = uParam0->f_423;
		num = 10f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		volume = uParam0->f_424;
		num = 15f;
	}
	else
	{
		volume = uParam0->f_422;
		num = 5f;
	}

	if (VOLUME::DOES_VOLUME_EXIST(volume))
	{
		if (func_341(Global_35, volume, true, 0))
		{
			func_25(uParam0, 8388608);
			return 1;
		}
	}

	if (BUILTIN::VDIST2(func_183(*uParam0), Global_36) < num * num)
	{
		func_25(uParam0, 8388608);
		return 1;
	}

	return 0;
}

BOOL func_161(var uParam0) // Position - 0x51A3 Hash - 0xAA225417 ^0xEBFC9AC8
{
	int i;
	AnimScene animScene;
	int j;
	var entityId;

	for (i = 0; i < 30; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/].f_17 == 0 && uParam0->f_475[i /*18*/].f_2 == 9 && uParam0->f_475[i /*18*/].f_4 >= 0)
		{
			animScene = uParam0->f_1522[uParam0->f_475[i /*18*/].f_4 /*10*/].f_8;
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene) && ANIMSCENE::IS_ANIM_SCENE_LOADED(animScene, true, false))
			{
				for (j = 0; j < 35; j = j + 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[j /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[j /*13*/].f_2))
					{
						entityId = { func_342(uParam0, uParam0->f_3[j /*13*/].f_2) };
					
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(animScene, &entityId))
							if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[j /*13*/].f_2, animScene) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[j /*13*/].f_2, -1))
								return true;
					}
				}
			}
		}
	}

	return false;
}

void func_162(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x52A4 Hash - 0x19C13D4E ^0x60116C62
{
	int i;
	BOOL flag;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[i /*10*/].f_8))
		{
			if (bParam1)
			{
				flag = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[i /*10*/].f_8);
			
				if (!flag && !bParam2)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[i /*10*/].f_8, "pl_breakout") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_1522[i /*10*/].f_8, "pl_breakout") && !uParam0->f_1769)
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_1522[i /*10*/].f_8, "pl_breakout", true);
				}
				else if (func_63(uParam0, 32768) && func_343(&uParam0->f_1522[i /*10*/], 128))
				{
					func_344(uParam0->f_1522[i /*10*/].f_8, 10000, 1, -1, false);
				}
				else
				{
					if (bParam2)
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[i /*10*/].f_8);
				
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[i /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1522[i /*10*/].f_8, 0);
			}
		}
	}

	return;
}

BOOL func_163() // Position - 0x53B4 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

void func_164(Object* pobParam0) // Position - 0x53D0 Hash - 0x93C0E130 ^0xADF3BC31
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		return;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pobParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pobParam0, true, false);

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pobParam0, false))
		return;

	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
		ENTITY::DETACH_ENTITY(*pobParam0, true, true);

	OBJECT::DELETE_OBJECT(pobParam0);
	return;
}

void func_165(var uParam0, eStackSize essParam1, Ped pedParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5422 Hash - 0x277B3662 ^0x2E25C4D2
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (!func_114(essParam1))
		return;

	func_345(pedParam2);

	if (bParam4)
		func_346(uParam0, pedParam2, 0);

	if (!bParam6)
	{
		if (!func_5(uParam0, 4194304))
		{
			bParam6 = func_347(&Global_1835011[*uParam0 /*74*/], 1024);
			flag = func_347(&Global_1835011[*uParam0 /*74*/], 65536);
		}
	}

	func_348(essParam1, bParam3, bParam4, bParam5, -1082130432, true, true, bParam6, flag, false, false);
	return;
}

void func_166(Volume volParam0) // Position - 0x54AA Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_167(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x54C1 Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_168(Ped* ppedParam0) // Position - 0x552F Hash - 0xC4826352 ^0x8AD0FF3C
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

void func_169(var uParam0) // Position - 0x558E Hash - 0xFC33AEC5 ^0xFC33AEC5
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		func_164(&uParam0->[i]);
	}

	return;
}

void func_170(Volume volParam0) // Position - 0x55B9 Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_349(volumeCoords, 0);
	return;
}

void func_171(var uParam0, Volume volParam1, BOOL bParam2) // Position - 0x55E1 Hash - 0x2EB65318 ^0x737362FB
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volParam1);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volParam1);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*uParam0))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);

	return;
}

void func_172(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12) // Position - 0x5619 Hash - 0x4B672E42 ^0x6C5B61A2
{
	int i;
	int j;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_350(&uParam0->[i /*3*/]))
			if (func_351(uParam0->[i /*3*/].f_2, iParam12))
				func_352(&uParam0->[i /*3*/]);
	}

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_353(&uParam1->[i /*5*/]))
			if (func_351(uParam1->[i /*5*/].f_4, iParam12))
				func_354(&uParam1->[i /*5*/]);
	}

	for (i = 0; i < *uParam2; i = i + 1)
	{
		if (func_355(&uParam2->[i /*3*/]))
			if (func_351(uParam2->[i /*3*/].f_2, iParam12))
				func_356(&uParam2->[i /*3*/]);
	}

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (func_357(&uParam3->[i /*3*/]))
			if (func_351(uParam3->[i /*3*/].f_2, iParam12))
				func_358(&uParam3->[i /*3*/]);
	}

	if (func_351(uParam4->f_1, iParam12))
		func_359(uParam4);

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_360(&uParam5->[i /*67*/]))
			if (func_351(uParam5->[i /*67*/].f_3, iParam12))
				func_361(&uParam5->[i /*67*/]);
	}

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_360(&uParam5->[i /*67*/]))
		{
			for (j = 0; j < 20; j = j + 1)
			{
				if (func_362(&uParam5->[i /*67*/].f_4[j /*3*/]))
					if (func_351(uParam5->[i /*67*/].f_4[j /*3*/].f_2, iParam12))
						func_363(&uParam5->[i /*67*/].f_4[j /*3*/], uParam5->[i /*67*/].f_1);
			}
		}
	}

	for (i = 0; i < *uParam6; i = i + 1)
	{
		if (func_364(&uParam6->[i /*4*/]))
			if (func_351(uParam6->[i /*4*/].f_3, iParam12))
				func_365(&uParam6->[i /*4*/]);
	}

	for (i = 0; i < *uParam7; i = i + 1)
	{
		if (func_366(&uParam7->[i /*5*/]))
			if (func_351(uParam7->[i /*5*/].f_4, iParam12))
				func_367(&uParam7->[i /*5*/]);
	}

	for (i = 0; i < *uParam8; i = i + 1)
	{
		if (func_368(&uParam8->[i /*3*/]))
			if (func_351(uParam8->[i /*3*/].f_2, iParam12))
				func_369(&uParam8->[i /*3*/]);
	}

	for (i = 0; i < *uParam9; i = i + 1)
	{
		if (func_370(&uParam9->[i /*3*/]))
			if (func_351(uParam9->[i /*3*/].f_2, iParam12))
				func_371(&uParam9->[i /*3*/]);
	}

	for (i = 0; i < *uParam10; i = i + 1)
	{
		if (func_372(&uParam10->[i /*4*/]))
			if (func_351(uParam10->[i /*4*/].f_3, iParam12))
				func_373(&uParam10->[i /*4*/]);
	}

	for (i = 0; i < *uParam11; i = i + 1)
	{
		if (func_374(&uParam11->[i /*3*/]))
			if (func_351(uParam11->[i /*3*/].f_2, iParam12))
				func_375(&uParam11->[i /*3*/]);
	}

	return;
}

void func_173(BOOL bParam0) // Position - 0x5964 Hash - 0x70EE66C ^0x88F73934
{
	Global_1935496.f_18 = !bParam0;
	return;
}

BOOL func_174() // Position - 0x5975 Hash - 0x9B720BCA ^0x99D774A5
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[i /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[i /*6*/].f_1, false) && Global_43806[i /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD() && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(Global_43806[i /*6*/], "pl_breakout") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_43806[i /*6*/], "pl_breakout"))
			return true;
	}

	return false;
}

void func_175() // Position - 0x59F1 Hash - 0x7A8E89A ^0xC1ACE39F
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[i /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[i /*6*/].f_1, false) && Global_43806[i /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD() && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(Global_43806[i /*6*/], "pl_breakout") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_43806[i /*6*/], "pl_breakout"))
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Global_43806[i /*6*/], "pl_breakout", true);
	}

	return;
}

BOOL func_176(Ped pedParam0) // Position - 0x5A78 Hash - 0x570B88CE ^0x1868A37B
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[i /*6*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43806[i /*6*/], false) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam0, Global_43806[i /*6*/]))
			return true;
	}

	return false;
}

BOOL func_177(int iParam0) // Position - 0x5AD6 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_178(int iParam0) // Position - 0x5B09 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_177(iParam0))
		return 0;

	return func_377(func_376(iParam0));
}

int func_179(int iParam0) // Position - 0x5B29 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_177(iParam0))
		return -1;

	return func_378(func_376(iParam0));
}

struct<8> func_180(var uParam0) // Position - 0x5B49 Hash - 0x34F395B4 ^0x4D7F9139
{
	var unk;

	unk = { func_379(uParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		unk = { func_380() };

	return unk;
}

void func_181(var uParam0, const char* sParam1) // Position - 0x5B73 Hash - 0x25E063BB ^0x16263A15
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_446), sParam1, 64);
	return;
}

char* func_182() // Position - 0x5B90 Hash - 0x306ACA3A ^0x8ECF802C
{
	return "unnamed";
}

Vector3 func_183(int iParam0) // Position - 0x5B9C Hash - 0xACD6F870 ^0xDE230469
{
	if (func_381(iParam0))
		return func_382(iParam0);

	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_184(var uParam0, Volume volParam1, int iParam2) // Position - 0x5BC2 Hash - 0x366C12BA ^0x33183664
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	uParam0->f_425 = volParam1;
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volParam1, 15);
	func_66(uParam0, 512);
	uParam0->f_427 = func_278(volParam1, 0, false, 0);
	return;
}

void func_185(int iParam0, Volume volParam1) // Position - 0x5C17 Hash - 0x8F213D8E ^0x152F2000
{
	if (!func_81(iParam0))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	!func_268(iParam0);
	Global_1835011[iParam0 /*74*/].f_61 = volParam1;
	return;
}

void func_186(var uParam0, Volume volParam1) // Position - 0x5C4F Hash - 0x5750941F ^0xB5ADF4FC
{
	var unk;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	uParam0->f_426 = volParam1;
	func_383(volParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, func_182(), 64);
	func_384(volParam1, &unk, true, 0, 0, false, -1082130432);
	return;
}

struct<2> func_187(int iParam0) // Position - 0x5C8B Hash - 0x49479BE1 ^0x49479BE1
{
	var unk;

	TEXT_LABEL_COPY(&unk, { func_148(iParam0) }, 2);
	return unk;
}

struct<2> func_188(int iParam0) // Position - 0x5CA2 Hash - 0xAC0867E9 ^0xD14045CC
{
	var unk;

	unk = { func_187(iParam0) };
	TEXT_LABEL_APPEND_STRING(&unk, "AUD", 16);
	return unk;
}

BOOL func_189() // Position - 0x5CC0 Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_190(int iParam0) // Position - 0x5D13 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_191(int iParam0, int iParam1) // Position - 0x5D29 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_192(var uParam0, var uParam1) // Position - 0x5D38 Hash - 0xB353E28A ^0x2F5BCD55
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[i /*41*/].f_30)))
			func_385(uParam0, &(uParam1->f_1016[i /*41*/].f_30), true);
	}

	return;
}

void func_193(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x5D78 Hash - 0x2559B2A1 ^0x79D637E0
{
	if (_IS_NULL_VECTOR(fParam1))
		return;

	uParam0->f_5 = { fParam1 };
	return;
}

int func_194(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x5D98 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_195(var uParam0) // Position - 0x5DC0 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_435;
}

void func_196() // Position - 0x5DCD Hash - 0xFA72027F ^0xFA72027F
{
	int num;

	Global_1946054.f_858 = Global_1946054.f_858 - 1;

	if (Global_1946054.f_858 <= 0)
	{
		num = 35;
		func_386(num);
	}

	return;
}

void func_197(var uParam0) // Position - 0x5DFC Hash - 0x56A63D83 ^0x32CB1163
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &uParam0->f_462[i /*9*/]) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, &uParam0->f_462[i /*9*/]))
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &uParam0->f_462[i /*9*/]);
	
		uParam0->f_462[i /*9*/].f_8 = 0;
	}

	return;
}

void func_198(var uParam0) // Position - 0x5E97 Hash - 0x8073496 ^0x6EC7F710
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_387(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, false);
		}
	}

	if (func_83(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_103(uParam0, 8, true);
	}

	uParam0->f_4 = 0;
	func_103(uParam0, 16, true);
	return;
}

float func_199(var uParam0) // Position - 0x5EFE Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_434;
}

struct<8> func_200(var uParam0) // Position - 0x5F0B Hash - 0xDB13DC73 ^0xDB13DC73
{
	return uParam0->f_446;
}

void func_201(var uParam0) // Position - 0x5F1B Hash - 0xA1CFA37E ^0xA1CFA37E
{
	var unk;

	unk = { func_388() };
	func_181(uParam0, &unk);
	return;
}

void func_202(var uParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x5F34 Hash - 0x444CF639 ^0xB97B3688
{
	if (func_83(uParam0, 16))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_389(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_182());
		func_96(uParam0, 8);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_277(uParam0, uParam0->f_4, false, true);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_96(uParam0, 16);
	}

	return;
}

BOOL func_203() // Position - 0x5FD4 Hash - 0xAE743BBD ^0xB1C5A13D
{
	return Global_1946054.f_1497 != Global_1946054.f_2163.f_1;
}

void func_204(int iParam0) // Position - 0x5FED Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_390(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_386(num);
	return;
}

int func_205() // Position - 0x6031 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

Hash func_206() // Position - 0x603D Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_207(Hash hParam0) // Position - 0x6049 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_208(int iParam0) // Position - 0x605C Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

struct<8> func_209(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0x6075 Hash - 0xB13D7CEF ^0x4DD40A33
{
	int lengthOfLiteralString;
	int lengthOfLiteralString2;
	var unk;
	var unk9;
	var unk17;

	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (lengthOfLiteralString >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_0x806862E5D266CF38(sParam0, lengthOfLiteralString - iParam3, lengthOfLiteralString), 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);

	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);

	if (lengthOfLiteralString2 >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk9, HUD::_0x806862E5D266CF38(sParam1, lengthOfLiteralString2 - iParam3, lengthOfLiteralString2), 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk9, sParam1, 64);

	lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&unk9);

	if (bParam2)
		if (lengthOfLiteralString + lengthOfLiteralString2 >= iParam3)
			TEXT_LABEL_ASSIGN_STRING(&unk9, HUD::_0x806862E5D266CF38(&unk9, lengthOfLiteralString, lengthOfLiteralString2), 64);
	else if (lengthOfLiteralString + lengthOfLiteralString2 >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_0x806862E5D266CF38(&unk, lengthOfLiteralString2, lengthOfLiteralString), 64);

	unk17 = { unk };
	TEXT_LABEL_APPEND_STRING(&unk17, &unk9, 64);
	return unk17;
}

BOOL func_210(int iParam0, int iParam1) // Position - 0x612C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_211() // Position - 0x613B Hash - 0xF2FB1A38 ^0xF2FB1A38
{
	if (func_391(Global_43801))
		func_392(&Global_43801, false, false);

	return;
}

char* func_212(Ped pedParam0) // Position - 0x6156 Hash - 0xA235395 ^0x2FD19B28
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
	return func_393(entityModel);
}

BOOL func_213(int iParam0) // Position - 0x61A4 Hash - 0x531420D5 ^0x3A11B780
{
	int messageState;

	if (func_394(iParam0))
	{
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return messageState == 4 || messageState == 0 || messageState == 3 || messageState == 5 || messageState == 2;
	}

	return false;
}

BOOL func_214(int iParam0, BOOL bParam1) // Position - 0x61ED Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_391(iParam0))
		return false;

	return !func_395(iParam0, 4);
}

BOOL func_215(BOOL bParam0, BOOL bParam1) // Position - 0x6212 Hash - 0xDB63BA21 ^0x6DF2BFFF
{
	if (!func_391(Global_43801))
	{
		Global_43801 = func_396("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("LONG_TIMED_EVENT"), false);
		Global_1945188[Global_43801 /*18*/].f_16 = Global_23[3];
		func_397(Global_43801, false, true);
		func_398(Global_43801, 6, true);
	
		if (bParam1)
			func_398(Global_43801, 14, true);
	}
	else
	{
		if (!func_214(Global_43801, false))
			func_399(Global_43801, true, true);
	
		if (func_400(Global_43801, true) != 0f && bParam0)
			func_397(Global_43801, true, true);
		else
			func_397(Global_43801, false, true);
	
		return func_401(Global_43801, true);
	}

	return false;
}

BOOL func_216(int iParam0, int iParam1) // Position - 0x62D0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_217(var uParam0, const char* sParam1) // Position - 0x62DF Hash - 0xD359B1E0 ^0x32AEA5DC
{
	int i;
	var unk;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		return;

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, sParam1))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, &uParam0->f_462[i /*9*/]))
		{
			unk = { uParam0->f_446 };
			uParam0->f_462[i /*9*/] = { unk };
		}
	}

	func_181(uParam0, sParam1);
	func_103(uParam0, 2097152, true);
	func_96(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1, true);
	return;
}

void func_218(var uParam0, char* sParam1) // Position - 0x63A6 Hash - 0xEBF6CAFB ^0xB90E227B
{
	if (!func_83(uParam0, 32) || func_402(uParam0) || func_83(uParam0, 268435456) && !func_83(uParam0, 65536))
		func_302(&(uParam0->f_500), 256);

	return;
}

void func_219(var uParam0, BOOL bParam1) // Position - 0x63F3 Hash - 0xA338CC7 ^0xAFB97042
{
	var weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, 9, false))
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, bParam1);

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, 7, false))
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, bParam1);

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, 8, false))
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 8, bParam1);

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, 10, false))
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 10, bParam1);

	return;
}

BOOL func_220() // Position - 0x6465 Hash - 0x35A4808D ^0x7E542F56
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_player_journal")) > 0;
}

void func_221() // Position - 0x6478 Hash - 0x9198443F ^0xEDA86CC9
{
	int i;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();

	for (i = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID(); SCRIPTS::DOES_THREAD_EXIST(i); i = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID())
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(i) == joaat("doc_player_journal"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(i, 1);
			return;
		}
	}

	return;
}

BOOL func_222() // Position - 0x64CA Hash - 0x3CA1BB47 ^0x6A0D5C15
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	return false;
}

void func_223(BOOL bParam0) // Position - 0x64E4 Hash - 0x9AA8C616 ^0xCCF3BF7F
{
	if (func_222())
		Global_1357509 = 1;

	func_403(joaat("camera_item"));

	if (bParam0 && Global_1935630.f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}

	return;
}

void func_224(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6535 Hash - 0xBAB7BE58 ^0xBAB7BE58
{
	uParam0->f_440 = { uParam1 };
	return;
}

BOOL func_225() // Position - 0x6548 Hash - 0xBA0B7E94 ^0x198E4494
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
		return true;

	return false;
}

void func_226(var uParam0) // Position - 0x656C Hash - 0xB9A4813D ^0x4EB23AD7
{
	int i;
	var unk;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]))
			func_404(uParam0, &uParam0->f_462[i /*9*/]);
	}

	unk = { func_388() };
	func_404(uParam0, &unk);
	unk = { func_180(uParam0) };
	func_404(uParam0, &unk);
	return;
}

void func_227(var uParam0, BOOL bParam1) // Position - 0x65CA Hash - 0x360C8D66 ^0x4FD9930
{
	int i;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_243(&uParam0->f_13[i /*12*/], 2))
		{
			if (func_243(&uParam0->f_13[i /*12*/], 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[i /*12*/].f_1)))
			{
				func_405(uParam0, &(uParam0->f_13[i /*12*/].f_1), uParam0->f_13[i /*12*/], uParam0->f_13[i /*12*/].f_9);
			
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[i /*12*/]))
				{
					pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]);
				
					if (pedIndexFromEntityIndex != Global_35 && !func_243(&uParam0->f_13[i /*12*/], 16))
						func_406(pedIndexFromEntityIndex);
				}
			}
		}
	}

	return;
}

void func_228(var uParam0) // Position - 0x66A0 Hash - 0x44F320D ^0x91B8DCFF
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		return;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_243(&uParam0->f_13[i /*12*/], 2))
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[i /*12*/].f_1)))
				func_295(&uParam0->f_13[i /*12*/], 1);
	}

	return;
}

float func_229(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x6729 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_230() // Position - 0x6747 Hash - 0x497997A3 ^0xEB2F5273
{
	return func_394(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

BOOL func_231() // Position - 0x6758 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_232(BOOL bParam0) // Position - 0x6778 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

Vector3 func_233(var uParam0) // Position - 0x6788 Hash - 0xBDA8105E ^0xBDA8105E
{
	return uParam0->f_502;
}

void func_234(var uParam0) // Position - 0x6797 Hash - 0xC68D2F1F ^0xFC9AB41F
{
	Hash hash;

	if (func_407(&hash))
	{
		if (func_408(hash, 0))
		{
			if (func_409(hash) == -525676072)
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("MASKS_LARGE"), 0);
				func_251(Global_35, -2065815962, 0, 1108822547, false, true, false, false, false, false);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("neckwear"), 0);
			}
		
			if (!func_408(*uParam0, 0))
				*uParam0 = hash;
		}
	}

	return;
}

void func_235(var uParam0, eSetPlayerControlFlags espcfParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x6807 Hash - 0x3C079E71 ^0x58721EE9
{
	ItemSet itemset;
	BOOL flag;
	int i;
	Vector3 offsetFromEntityInWorldCoords;
	ScrHandle indexedItemInItemset;
	Object* entityFromItem;
	BOOL flag2;
	Ped mount;

	if (Global_1935630.f_12)
		return;

	Global_16 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_410(0, false);
		func_411(-1);
	}

	func_92(true);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);

	if (!func_216(*uParam0, 32))
		espcfParam1 = espcfParam1 | SPC_REMOVE_EXPLOSIONS;

	if (!func_216(*uParam0, 64))
		espcfParam1 = espcfParam1 | SPC_REMOVE_FIRES;

	if (!func_216(*uParam0, 128))
		espcfParam1 = espcfParam1 | SPC_REMOVE_PROJECTILES;

	if (func_216(*uParam0, 131072))
		espcfParam1 = espcfParam1 | SPC_PREVENT_EVERYBODY_BACKOFF;

	if (!func_216(*uParam0, 32768))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam1, true);

	if (!func_216(*uParam0, 1))
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL, 0);

	if (!func_216(*uParam0, 65536))
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);

	if (!func_216(*uParam0, 4) && !func_216(*uParam0, 2))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_216(*uParam0, 2048))
		func_412(false, false);

	if (func_216(*uParam0, 8))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	if (func_216(*uParam0, 256))
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);

	if (func_216(*uParam0, 8192))
		func_413();

	if (!func_216(*uParam0, 262144))
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	if (!func_216(*uParam0, 512))
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);

	if (!func_216(*uParam0, 1024))
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
	
		if (!func_216(*uParam0, 16))
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
						if (func_414() == entityFromItem)
							flag2 = true;
				
					offsetFromEntityInWorldCoords = vParam3;
					offsetFromEntityInWorldCoords.f_1 = uParam4;
					offsetFromEntityInWorldCoords.f_2 = uParam5;
				
					if (_IS_NULL_VECTOR(offsetFromEntityInWorldCoords))
					{
						offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, (float)-1 + i, 0f) };
						func_415(&offsetFromEntityInWorldCoords, 50, 10, false);
					}
				
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, true);
					ENTITY::SET_ENTITY_COORDS(entityFromItem, offsetFromEntityInWorldCoords, false, true, true, true);
				
					if (flag2)
					{
						func_416(2);
						func_417(-1);
						func_418(offsetFromEntityInWorldCoords);
						func_420(func_419());
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

	if (!func_216(*uParam0, 4096))
		func_406(Global_35);

	if (!func_216(*uParam0, 1048576))
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);

	if (!func_216(*uParam0, 2097152))
		if (func_421() || PED::_IS_PED_DRUNK(Global_35))
			func_112(true);

	if (Global_1359489.f_16 & 4194304 == 0)
		Global_1359489.f_16 = Global_1359489.f_16 | 4194304;

	*uParam0 = 0;
	return;
}

void func_236(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x6B95 Hash - 0xB3E33ED8 ^0xB3E33ED8
{
	uParam0->f_502 = { fParam1 };
	return;
}

void func_237(var uParam0) // Position - 0x6BA8 Hash - 0x6CEFB5BE ^0xE5B7A16E
{
	BOOL flag;
	Ped lastMount;
	int num;
	Vehicle playersLastVehicle;

	if (func_83(uParam0, 2048) && !_IS_NULL_VECTOR(func_422(uParam0)))
	{
		flag = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		lastMount = PED::_GET_LAST_MOUNT(Global_35);
	
		if (!ENTITY::IS_ENTITY_DEAD(lastMount) && flag && ENTITY::IS_ENTITY_IN_VOLUME(lastMount, uParam0->f_4, true, 0) || func_83(uParam0, -2147483648) && PED::GET_MOUNT(Global_35) != lastMount)
		{
			num = 2;
		
			if (TASK::IS_PED_IN_WRITHE(lastMount))
				num = num | 32;
		
			func_424(lastMount, func_422(uParam0), func_423(uParam0), num, 1073741824);
		}
	
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle) && flag && ENTITY::IS_ENTITY_IN_VOLUME(playersLastVehicle, uParam0->f_4, true, 0) || func_83(uParam0, -2147483648) && !PED::IS_PED_IN_VEHICLE(Global_35, playersLastVehicle, true))
			func_424(playersLastVehicle, func_422(uParam0), func_423(uParam0), 2, 1073741824);
	}

	return;
}

void func_238(var uParam0) // Position - 0x6CB4 Hash - 0x12FA3EB8 ^0xDBEBE05A
{
	Vehicle vehiclePedIsUsing;
	var unk;

	if (func_83(uParam0, 268435456) && !_IS_NULL_VECTOR(func_422(uParam0)) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing))
		{
			unk = { func_422(uParam0) };
			func_424(vehiclePedIsUsing, unk, func_425(unk, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehiclePedIsUsing, false);
			ENTITY::SET_ENTITY_VELOCITY(vehiclePedIsUsing, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehiclePedIsUsing, 0f);
		}
	}

	return;
}

void func_239(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, BOOL bParam5) // Position - 0x6D3A Hash - 0x5730B1F6 ^0x27D7CDB5
{
	uParam0->f_505 = { fParam1 };
	uParam0->f_508 = iParam4;

	if (_IS_NULL_VECTOR(fParam1))
	{
		func_103(uParam0, 2048, true);
	}
	else
	{
		func_96(uParam0, 2048);
	
		if (bParam5)
			func_96(uParam0, -2147483648);
	}

	return;
}

void func_240(var uParam0) // Position - 0x6D85 Hash - 0x45D298F4 ^0x58CEE6C4
{
	int i;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[i /*12*/]) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]) != Global_35)
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]);
		
			if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[i /*12*/].f_1)))
				{
					if (!func_243(&uParam0->f_13[i /*12*/], 8))
					{
						if (func_427(func_426(pedIndexFromEntityIndex, 0, true, false)))
							if (!func_428(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(pedIndexFromEntityIndex, 0)))
								WEAPON::SET_CURRENT_PED_WEAPON(pedIndexFromEntityIndex, joaat("WEAPON_UNARMED"), true, 0, false, false);
					
						if (func_427(func_426(pedIndexFromEntityIndex, 1, true, false)))
							if (!func_428(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(pedIndexFromEntityIndex, 1)))
								WEAPON::SET_CURRENT_PED_WEAPON(pedIndexFromEntityIndex, joaat("WEAPON_UNARMED"), true, 1, false, false);
					}
				}
			}
		}
	}

	return;
}

void func_241(var uParam0, BOOL bParam1) // Position - 0x6E81 Hash - 0x5BF0A49C ^0x170505BF
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, bParam1);

	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("holsters_left"), 0);
			Global_17 = !bParam1;
		}
	}

	return;
}

void func_242(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x6EB3 Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_254() != -1;
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
		
			func_429(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_430(pedParam1, 29, isMp, true, 0);
			func_430(pedParam1, 31, isMp, true, 0);
			func_430(pedParam1, 30, isMp, true, 0);
			func_430(pedParam1, 22, isMp, true, 0);
			func_430(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_431(32768) && func_432(1108822547, 8) && func_433(10, iParam3))
		func_434(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_435(num, 1);
		
			if (func_432(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_433(num, iParam3))
				{
				}
				else if (func_432(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_432(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_430(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_436(num2, 1, 6);
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
								func_430(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_432(num2, 1))
								func_437(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_432(num2, 1))
						func_437(num2, 1, 6);
				
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

BOOL func_243(var uParam0, int iParam1) // Position - 0x71FC Hash - 0x718DD1EF ^0x4872DFB3
{
	return uParam0->f_11 && iParam1 != false;
}

void func_244(var uParam0) // Position - 0x720D Hash - 0x961A4D25 ^0xDCEB19EB
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_440), "", 32);
	func_438(uParam0);
	func_193(uParam0, 0f, 0f, 0f);
	func_439(uParam0);
	return;
}

void func_245(var uParam0) // Position - 0x7235 Hash - 0xB5AC7806 ^0xE01DFDB3
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		uParam0->f_13[i /*12*/].f_11 = 0;
	}

	return;
}

void func_246(var uParam0) // Position - 0x725B Hash - 0xBA5A1D5A ^0x2C0A2EA5
{
	uParam0->f_8 = 0;
	return;
}

void func_247(var uParam0, int iParam1) // Position - 0x7268 Hash - 0xBB77BED ^0x97F7EDBC
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		func_296(&uParam0->f_13[i /*12*/], iParam1);
	}

	return;
}

void func_248(BOOL bParam0) // Position - 0x7291 Hash - 0x7DD02EA1 ^0x509D404E
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);

	Global_43800 = -1;
	TEXT_LABEL_ASSIGN_STRING(&Global_43802, "", 24);
	Global_16 = false;

	if (bParam0)
		func_211();

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	return;
}

void func_249(int iParam0) // Position - 0x72D6 Hash - 0x7AE52724 ^0x9315F21B
{
	func_440();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
	return;
}

void func_250() // Position - 0x72F4 Hash - 0x47CA4FE0 ^0xED93DC86
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	return;
}

int func_251(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x731B Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_441(hParam1, true, false) };
		iParam3 = func_442(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_444(hParam1, hParam2, func_443(iParam3, 1), bParam4, bParam9))
		return 0;

	func_445(true, func_254() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_431(32768) && hParam1 != Global_1946054.f_57[func_443(iParam3, 1) /*11*/])
			{
				func_447();
				func_446(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_443(iParam3, 1) /*11*/])
				func_446(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_446(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_448(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_446(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_204(0);
			func_449(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_446(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_252(Hash hParam0, BOOL bParam1) // Position - 0x748A Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_441(hParam0, false, false) };
	guid = { func_450(hParam0, unk, unk.f_4, false) };

	if (func_451(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_452(false), &guid, bParam1);
	return;
}

BOOL func_253(Ped pedParam0, var uParam1, int iParam2, eSetPlayerControlFlags espcfParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x74D4 Hash - 0x6CEE72B9 ^0x4A7A32FD
{
	int taskSequenceId;
	Vehicle vehiclePedIsIn;
	Ped mount;
	BOOL isPedOnMount;
	BOOL isPedInAnyVehicle;
	int entityCoords;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	isPedOnMount = PED::IS_PED_ON_MOUNT(pedParam0);

	if (isPedOnMount)
	{
		mount = PED::GET_MOUNT(pedParam0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::IS_ENTITY_DEAD(mount))
			isPedOnMount = false;
	}

	if (!isPedOnMount)
	{
		isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true);
	
		if (isPedInAnyVehicle)
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) || ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
				isPedInAnyVehicle = false;
		}
	}

	if (func_309(*uParam1, 128))
	{
		if (!func_453(pedParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(pedParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}

	if (func_309(*uParam1, 2))
	{
		if (isPedOnMount)
		{
			if (!func_454(mount))
				return false;
		
			if (!func_453(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
			{
				if (iParam7 != 0f && iParam8 != 0f)
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
					entityCoords = iParam7;
					entityCoords.f_1 = iParam8;
				
					if (func_455(mount, entityCoords))
						iParam4 = 131072;
					else
						iParam4 = 262144;
				
					if (!func_309(*uParam1, 4))
						iParam4 = iParam4 | 32;
				}
			
				TASK::CLEAR_PED_TASKS(pedParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam4, 0, 0, 0, 0);
			}
		
			return false;
		}
		else if (func_456(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(pedParam0)) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(pedParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(pedParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(pedParam0)));
			func_457(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}

	if (func_309(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}

	if (func_309(*uParam1, 8))
	{
		if (isPedOnMount)
			if (!func_454(mount))
				return false;
	
		if (!isPedOnMount && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(pedParam0)) || isPedOnMount && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount)))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}

	if (PED::IS_PED_A_PLAYER(pedParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_456(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
	
		if (!func_456(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam3, false);
			
				if (func_456(iParam2, 8192))
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
			}
		}
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);

	if (isPedOnMount)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(mount, 0))
			return false;
	
		if (func_309(*uParam1, 2336))
		{
			!func_454(mount);
		
			if (func_458(mount, *uParam1))
			{
				func_459(uParam1, 32);
				func_459(uParam1, 256);
				func_459(uParam1, 2048);
				func_457(uParam1, 512);
				func_457(uParam1, 1024);
				func_457(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
	
		if (func_309(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
			!func_454(mount);
		
			if (TASK::IS_PED_WALKING(mount))
				return false;
			else
				func_459(uParam1, 64);
		}
	
		if (func_456(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(mount, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
	
		if (TASK::IS_PED_SPRINTING(mount) || TASK::IS_PED_RUNNING(mount) && func_456(iParam2, 1024) || func_456(iParam2, 8) && !func_309(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 1, 0, 0);
			func_457(uParam1, 32);
		}
		else if (TASK::IS_PED_RUNNING(mount) && func_456(iParam2, 4096) && !func_309(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 8, 0, 0);
			func_457(uParam1, 2048);
			func_457(uParam1, 4096);
		}
		else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount) >= 1.001f && func_456(iParam2, 32) && !func_309(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 3, 0, 0);
			func_457(uParam1, 256);
			func_457(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(mount))
		{
			TASK::TASK_STAND_STILL(mount, -1);
			func_457(uParam1, 64);
		}
		else if (!func_456(iParam2, 1))
		{
			if (!func_456(iParam2, 256))
				WEAPON::_0xB832F1A686B9B810(pedParam0, 1, 0);
		
			if (iParam7 != 0f && iParam8 != 0f)
			{
				num = iParam7;
				num.f_1 = iParam8;
				num.f_2 = Global_36.f_2;
			
				if (func_455(mount, num))
					iParam4 = 131072;
				else
					iParam4 = 262144;
			
				if (!func_309(*uParam1, 4))
					iParam4 = iParam4 | 32;
			}
		
			TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(mount, 0f);
			func_457(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(pedParam0, 1000);
			func_457(uParam1, 8);
		}
	}
	else if (isPedInAnyVehicle)
	{
		if (!func_456(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			VEHICLE::BRING_VEHICLE_TO_HALT(vehiclePedIsIn, iParam5, iParam6, false);
			func_457(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_456(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(pedParam0, 200);
		func_457(uParam1, 8);
	}

	return false;
}

BOOL func_254() // Position - 0x7A88 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

Ped func_255(eStackSize essParam0) // Position - 0x7A96 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_460(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

int func_256() // Position - 0x7AD0 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_257(eStackSize essParam0, int iParam1) // Position - 0x7AE0 Hash - 0xA6154E40 ^0xA498CCB9
{
	Ped ped;

	if (!func_114(essParam0))
		return;

	ped = Global_1360165[essParam0 /*1157*/];

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (!ENTITY::IS_ENTITY_DEAD(ped))
			DECORATOR::DECOR_SET_INT(ped, "companion_manager_command", iParam1);

	return;
}

void func_258(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x7B20 Hash - 0x1EC8ECF ^0x1D5EA1D9
{
	ItemSet itemset;
	int i;
	Entity entityFromItem;
	Ped pedIndexFromEntityIndex;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(true);

	if (PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(Global_35, itemset, iParam1) > 0)
	{
		for (i = ITEMSET::GET_ITEMSET_SIZE(itemset) - 1; i >= 0; i = i + -1)
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
		
			if (!ENTITY::IS_ENTITY_DEAD(entityFromItem) && ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
			
				if (bParam0)
				{
					if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedIndexFromEntityIndex)))
						PERSCHAR::_FORCE_DESPAWN_PERSCHAR(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedIndexFromEntityIndex));
					else
						PED::DELETE_PED(&pedIndexFromEntityIndex);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex, false, false);
				
					if (bParam2)
						TASK::_0xDF94844D474F31E5(pedIndexFromEntityIndex);
				}
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return;
}

void func_259(float fParam0) // Position - 0x7BD3 Hash - 0xD5DAF5A7 ^0xD5DAF5A7
{
	func_461(10, fParam0);
	return;
}

BOOL func_260() // Position - 0x7BE3 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_254() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_261() // Position - 0x7C09 Hash - 0xD8699E96 ^0xBED59938
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
	return;
}

BOOL func_262(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7C20 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_460(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_263(var uParam0, int iParam1) // Position - 0x7C4A Hash - 0xCFA1A9B8 ^0xCFA1A9B8
{
	uParam0->f_1683 = iParam1;
	return;
}

void func_264(var uParam0, int iParam1) // Position - 0x7C59 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

int func_265(var uParam0, int iParam1) // Position - 0x7C67 Hash - 0x2F59A919 ^0x849F5606
{
	int i;

	if (func_304(uParam0, 4))
		return 1;

	switch (iParam1)
	{
		case 1:
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HACK_RADAR_FORCE_HIDE"));
			break;
	
		default:
			if (func_142())
			{
				if (!func_63(uParam0, 524288))
					HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HACK_RADAR_FORCE_HIDE"));
			}
			break;
	}

	if (func_142())
	{
		func_303(uParam0, 512);
		func_462(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
	
		if (func_463(&uParam0->f_1016[uParam0->f_1684 /*41*/], 4))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_464(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
	
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}

	func_143();
	func_162(uParam0, true, false);
	func_64(uParam0);

	if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	func_462(uParam0, 4);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
		VOLUME::DELETE_VOLUME(uParam0->f_1875);

	if (func_304(uParam0, 8) && CAM::_IS_CAM_DATA_DICT_LOADED(func_465()))
		CAM::_UNLOAD_CAMERA_DATA_DICT(func_465());

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[i /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[i /*22*/].f_2), func_465()) && CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_1345[i /*22*/].f_2)))
			if (uParam0->f_1345[i /*22*/].f_21)
				CAM::_UNLOAD_CAMERA_DATA_DICT(&(uParam0->f_1345[i /*22*/].f_2));
	}

	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());

	if (func_63(uParam0, 524288) || iParam1 == 1)
		func_211();

	if (func_304(uParam0, 16))
		if (func_315(uParam0) == 0)
			CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692));
		else if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
			CAM::_CAM_DESTROY(&(uParam0->f_1692));

	func_466();

	if (func_304(uParam0, 32))
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
			if (VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 50f)
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
	
		if (VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(uParam0->f_1901))
			VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(uParam0->f_1901);
	}

	func_329(uParam0);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);

	return 1;
}

void func_266(var uParam0, int iParam1) // Position - 0x7EEE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_267(var uParam0, int iParam1) // Position - 0x7EFF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_268(int iParam0) // Position - 0x7F14 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_467(Global_1835011[iParam0 /*74*/].f_1);
}

struct<4> func_269(var uParam0) // Position - 0x7F40 Hash - 0xBD3347D6 ^0xBD3347D6
{
	return uParam0->f_440;
}

BOOL func_270() // Position - 0x7F4F Hash - 0xF2D44433 ^0xF30C711
{
	if (!func_152(pedLocal_14, 0))
	{
		STREAMING::REQUEST_MODEL(eptLocal_56, false);
	
		if (STREAMING::HAS_MODEL_LOADED(eptLocal_56))
			pedLocal_14 = func_468(eptLocal_56, uLocal_73, 0f, true, true, 0, true, true, true, false, false, false, false);
	
		return false;
	}

	return true;
}

BOOL func_271(var uParam0) // Position - 0x7F8E Hash - 0xEBA7C574 ^0x3428323C
{
	if (!func_287(uParam0, 7, &pedLocal_15, false, true, uLocal_79, uLocal_79.f_1, uLocal_79.f_2, 0, 0, false, false, false))
		return false;

	ENTITY::SET_ENTITY_COORDS(pedLocal_15, uLocal_79, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(pedLocal_15, true);
	return true;
}

BOOL func_272() // Position - 0x7FCE Hash - 0xD9E32312 ^0xD8A23BB
{
	if (!func_152(pedLocal_16, 0))
	{
		STREAMING::REQUEST_MODEL(eptLocal_59, false);
	
		if (STREAMING::HAS_MODEL_LOADED(eptLocal_59))
			pedLocal_16 = func_468(eptLocal_59, uLocal_79, 0, true, true, 0, true, true, true, false, false, false, false);
	
		return false;
	}

	ENTITY::FREEZE_ENTITY_POSITION(pedLocal_16, true);

	if (!func_152(pedLocal_17, 0))
	{
		STREAMING::REQUEST_MODEL(eptLocal_60, false);
	
		if (STREAMING::HAS_MODEL_LOADED(eptLocal_60))
			pedLocal_17 = func_468(eptLocal_60, uLocal_79, 0, true, true, 0, true, true, true, false, false, false, false);
	
		return false;
	}

	ENTITY::FREEZE_ENTITY_POSITION(pedLocal_17, true);
	return true;
}

BOOL func_273() // Position - 0x8052 Hash - 0xD9E32312 ^0xD8A23BB
{
	if (!func_152(pedLocal_18, 0))
	{
		STREAMING::REQUEST_MODEL(eptLocal_57, false);
	
		if (STREAMING::HAS_MODEL_LOADED(eptLocal_57))
		{
			pedLocal_18 = func_468(eptLocal_57, uLocal_79, 0, true, true, 0, true, true, true, false, false, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(pedLocal_18, true);
			ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_18, true);
		}
	
		return false;
	}

	if (!func_152(pedLocal_19, 0))
	{
		STREAMING::REQUEST_MODEL(eptLocal_58, false);
	
		if (STREAMING::HAS_MODEL_LOADED(eptLocal_58))
		{
			pedLocal_19 = func_468(eptLocal_58, uLocal_79, 0, true, true, 0, true, true, true, false, false, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(pedLocal_19, true);
			ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_19, true);
		}
	
		return false;
	}

	return true;
}

BOOL func_274() // Position - 0x80E3 Hash - 0x4F606D23 ^0x513DFF12
{
	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_34))
	{
		STREAMING::REQUEST_MODEL(hLocal_61, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_61))
		{
			veLocal_34 = VEHICLE::CREATE_VEHICLE(hLocal_61, uLocal_82, 0, true, true, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_34, true);
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_35))
	{
		STREAMING::REQUEST_MODEL(hLocal_62, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_62))
		{
			veLocal_35 = VEHICLE::CREATE_VEHICLE(hLocal_62, uLocal_85, 0, true, true, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_35, true);
		}
	
		return false;
	}

	STREAMING::REQUEST_MODEL(hLocal_63, false);

	if (!STREAMING::HAS_MODEL_LOADED(hLocal_63))
	{
		return false;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_44[0]))
		{
			uLocal_44[0] = OBJECT::CREATE_OBJECT(hLocal_63, uLocal_79, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_44[0], true);
			return false;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_44[1]))
		{
			uLocal_44[1] = OBJECT::CREATE_OBJECT(hLocal_63, uLocal_79, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_44[1], true);
			return false;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_44[2]))
		{
			uLocal_44[2] = OBJECT::CREATE_OBJECT(hLocal_63, uLocal_79, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_44[2], true);
			return false;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_44[3]))
		{
			uLocal_44[3] = OBJECT::CREATE_OBJECT(hLocal_63, uLocal_79, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_44[3], true);
			return false;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_44[4]))
		{
			uLocal_44[4] = OBJECT::CREATE_OBJECT(hLocal_63, uLocal_79, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_44[4], true);
			return false;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_44[5]))
		{
			uLocal_44[5] = OBJECT::CREATE_OBJECT(hLocal_63, uLocal_79, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_44[5], true);
			return false;
		}
	}

	if (func_469(&uLocal_20))
	{
		if (func_470(veLocal_34, hLocal_61))
			func_471(veLocal_34, &uLocal_20);
	
		return false;
	}

	if (func_469(&uLocal_27))
	{
		if (func_470(veLocal_35, hLocal_62))
			func_471(veLocal_35, &uLocal_27);
	
		return false;
	}

	VEHICLE::_DELETE_VEHICLE_LANTERNS(veLocal_34);
	VEHICLE::_DELETE_VEHICLE_LANTERNS(veLocal_35);
	VEHICLE::SET_VEHICLE_EXTRA(veLocal_34, 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(veLocal_35, 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(veLocal_34, 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(veLocal_35, 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(veLocal_34, 3, true);
	VEHICLE::SET_VEHICLE_EXTRA(veLocal_35, 3, true);
	return true;
}

BOOL func_275() // Position - 0x8308 Hash - 0xA23DB81E ^0x4DB38955
{
	HUD::TEXT_BLOCK_REQUEST("bch2aud");
	return HUD::TEXT_BLOCK_IS_LOADED("bch2aud");
}

void func_276(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0x8321 Hash - 0x3A05F50D ^0xD816AE7A
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam1, fParam4, fParam7, sParam10);
	return;
}

void func_277(var uParam0, Volume volParam1, BOOL bParam2, BOOL bParam3) // Position - 0x833E Hash - 0x7AEE4E7D ^0x4CE819C0
{
	int num;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);

	uParam0->f_4 = volParam1;
	num = 14;

	if (bParam3)
		num = num | 1;

	uParam0->f_9 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volParam1, bParam2, num);
	return;
}

Any func_278(Volume volParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x837D Hash - 0xDFB996B4 ^0xC287A71C
{
	Any any;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return any;

	func_472(volParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 2);
	any = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volParam0, bParam2, 15);
	return any;
}

void func_279(var uParam0, Ped pedParam1, BOOL bParam2) // Position - 0x83C4 Hash - 0xB21C4C5C ^0x462B8EE4
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	PED::SET_PED_CONFIG_FLAG(pedParam1, 179, bParam2);
	PED::SET_PED_CONFIG_FLAG(pedParam1, 197, bParam2);
	PED::SET_PED_CONFIG_FLAG(pedParam1, 198, bParam2);
	PED::SET_PED_CONFIG_FLAG(pedParam1, 253, bParam2);
	PED::SET_PED_CONFIG_FLAG(pedParam1, 169, bParam2);
	ENTITY::SET_ENTITY_PROOFS(pedParam1, 2, bParam2);

	if (bParam2)
		PED::SET_PED_CAN_BE_TARGETTED(pedParam1, !bParam2);

	func_298(uParam0, pedParam1);
	return;
}

void func_280(float fParam0) // Position - 0x8429 Hash - 0x9F434E95 ^0x27EA0342
{
	func_473(BUILTIN::CEIL(BUILTIN::TO_FLOAT(300) - (BUILTIN::TO_FLOAT(300) * fParam0)));
	return;
}

BOOL func_281(const char* sParam0) // Position - 0x844B Hash - 0x29A59279 ^0x5A6314BB
{
	if (DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam0)))
		return true;

	return false;
}

void func_282(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x8465 Hash - 0x841F0948 ^0x99E588B6
{
	TEXT_LABEL_COPY(&(uParam0->f_2880), { uParam1 }, 4);
	func_25(uParam0, 32768);
	func_474(&(uParam0->f_958), iParam4);
	return;
}

void func_283(var uParam0, float fParam1) // Position - 0x848E Hash - 0xCFA1A9B8 ^0xCFA1A9B8
{
	uParam0->f_434 = fParam1;
	return;
}

void func_284(var uParam0, float fParam1) // Position - 0x849D Hash - 0xCFA1A9B8 ^0xCFA1A9B8
{
	uParam0->f_435 = fParam1;
	return;
}

BOOL func_285(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12) // Position - 0x84AC Hash - 0xD95A8F5E ^0xE6E823B0
{
	int num;
	int i;
	int j;

	num = 1;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_350(&uParam0->[i /*3*/]))
			if (func_351(uParam0->[i /*3*/].f_2, iParam12))
				if (!func_475(&uParam0->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_353(&uParam1->[i /*5*/]))
			if (func_351(uParam1->[i /*5*/].f_4, iParam12))
				if (!func_476(&uParam1->[i /*5*/]))
					num = 0;
	}

	for (i = 0; i < *uParam2; i = i + 1)
	{
		if (func_355(&uParam2->[i /*3*/]))
			if (func_351(uParam2->[i /*3*/].f_2, iParam12))
				if (!func_477(&uParam2->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (func_357(&uParam3->[i /*3*/]))
			if (func_351(uParam3->[i /*3*/].f_2, iParam12))
				if (!func_358(&uParam3->[i /*3*/]))
					num = 0;
	}

	if (func_351(uParam4->f_1, iParam12))
		if (!func_359(uParam4))
			num = 0;

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_360(&uParam5->[i /*67*/]))
			if (func_351(uParam5->[i /*67*/].f_3, iParam12))
				if (func_478(&uParam5->[i /*67*/]))
					if (!func_479(&uParam5->[i /*67*/]))
						num = 0;
	}

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_360(&uParam5->[i /*67*/]))
		{
			if (func_351(uParam5->[i /*67*/].f_3, iParam12))
			{
				if (func_478(&uParam5->[i /*67*/]))
				{
					if (func_479(&uParam5->[i /*67*/]))
					{
						for (j = 0; j < 20; j = j + 1)
						{
							if (func_362(&uParam5->[i /*67*/].f_4[j /*3*/]))
								if (!func_480(&uParam5->[i /*67*/].f_4[j /*3*/], uParam5->[i /*67*/].f_1))
									num = 0;
						}
					}
					else
					{
						num = 0;
					}
				}
			}
		}
	}

	for (i = 0; i < *uParam6; i = i + 1)
	{
		if (func_364(&uParam6->[i /*4*/]))
			if (func_351(uParam6->[i /*4*/].f_3, iParam12))
				if (!func_481(&uParam6->[i /*4*/]))
					num = 0;
	}

	for (i = 0; i < *uParam7; i = i + 1)
	{
		if (func_366(&uParam7->[i /*5*/]))
			if (func_351(uParam7->[i /*5*/].f_4, iParam12))
				if (!func_482(&uParam7->[i /*5*/]))
					num = 0;
	}

	for (i = 0; i < *uParam8; i = i + 1)
	{
		if (func_368(&uParam8->[i /*3*/]))
			if (func_351(uParam8->[i /*3*/].f_2, iParam12))
				if (!func_483(&uParam8->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam9; i = i + 1)
	{
		if (func_370(&uParam9->[i /*3*/]))
			if (func_351(uParam9->[i /*3*/].f_2, iParam12))
				if (!func_484(&uParam9->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam10; i = i + 1)
	{
		if (func_372(&uParam10->[i /*4*/]))
			if (func_351(uParam10->[i /*4*/].f_3, iParam12))
				if (!func_485(&uParam10->[i /*4*/]))
					num = 0;
	}

	for (i = 0; i < *uParam11; i = i + 1)
	{
		if (func_374(&uParam11->[i /*3*/]))
			if (func_351(uParam11->[i /*3*/].f_2, iParam12))
				if (!func_486(&uParam11->[i /*3*/]))
					num = 0;
	}

	return num;
}

eStackSize func_286(int iParam0) // Position - 0x8858 Hash - 0x1C89A65E ^0x1C89A65E
{
	if (!func_81(iParam0))
		return 1;

	return func_487(iParam0);
}

BOOL func_287(var uParam0, eStackSize essParam1, var uParam2, BOOL bParam3, BOOL bParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x8878 Hash - 0xDE3125D6 ^0xDE3125D6
{
	var unk;

	if (!func_114(essParam1))
		return false;

	if (func_488(uParam0, *uParam2))
	{
		if (*uParam2 != func_489(essParam1))
		{
		}
	
		return true;
	}

	unk = { uParam5, uParam6, uParam7 };

	if (_IS_NULL_VECTOR(unk))
		unk = { func_126(*uParam0) };

	if (!func_490(essParam1, 28, true))
		func_491(essParam1, 28, true);

	*uParam2 = func_492(essParam1, true, 0, unk, unk.f_1, unk.f_2, iParam8, bParam4, 1, bParam11, false, false, 0, iParam9, true, bParam12, false, false, true, true, bParam10, false, true, false, true);

	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(*uParam2))
			return false;
	
		func_298(uParam0, *uParam2);
		func_493(uParam0, *uParam2);
		func_494(*uParam2, bParam3, bParam4, false);
	
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
		
			if (!func_453(*uParam2, SCRIPT_TASK_STAND_STILL))
				TASK::TASK_STAND_STILL(*uParam2, -1);
		}
	
		func_139(uParam0, *uParam2, 0, 0, 0, true, false);
		func_495(essParam1, false, false, true);
		func_496(essParam1);
		return true;
	}

	return false;
}

BOOL func_288(int iParam0) // Position - 0x8990 Hash - 0xADFE2C00 ^0x32F0B336
{
	var textBlock;

	textBlock = { func_187(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&textBlock))
			return false;

	return true;
}

BOOL func_289(int iParam0) // Position - 0x89BB Hash - 0xADFE2C00 ^0x32F0B336
{
	var textBlock;

	textBlock = { func_188(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&textBlock))
			return false;

	return true;
}

char* func_290(Object obParam0) // Position - 0x89E6 Hash - 0xE06C1D20 ^0x7CF7A0F3
{
	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return "";

	if (ENTITY::IS_ENTITY_A_PED(obParam0))
		return func_212(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam0));
	else if (ENTITY::IS_ENTITY_AN_OBJECT(obParam0))
		return func_497(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(obParam0));
	else if (ENTITY::IS_ENTITY_A_VEHICLE(obParam0))
		return func_498(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(obParam0));

	return "";
}

int func_291(var uParam0, Object obParam1) // Position - 0x8A4B Hash - 0xD8D08AD0 ^0x705BA6E9
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam1))
		return -1;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == obParam1)
			return i;
	}

	return -1;
}

Object func_292(var uParam0, char* sParam1) // Position - 0x8A99 Hash - 0x36449D70 ^0x8893C58B
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[i /*12*/].f_1), sParam1))
			return uParam0->f_13[i /*12*/];
	}

	return 0;
}

void func_293(var uParam0, Object obParam1) // Position - 0x8AE4 Hash - 0x833023BF ^0x3D3CC7FB
{
	var unk;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam1))
		return;

	for (i = 0; i < 35; i = i + 1)
	{
		if (uParam0->f_13[i /*12*/] == obParam1)
		{
			uParam0->f_13[i /*12*/] = { unk };
			return;
		}
	}

	return;
}

int func_294(var uParam0) // Position - 0x8B2C Hash - 0x977F3323 ^0x1DC224A5
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]))
			return i;
	}

	return -1;
}

void func_295(var uParam0, int iParam1) // Position - 0x8B5D Hash - 0x53A96DDB ^0x5EF2061
{
	uParam0->f_11 = uParam0->f_11 || iParam1;
	return;
}

void func_296(var uParam0, int iParam1) // Position - 0x8B70 Hash - 0xA4EAD31F ^0x1843FE5B
{
	uParam0->f_11 = uParam0->f_11 - uParam0->f_11 && iParam1;
	return;
}

void func_297(var uParam0, Object obParam1, char* sParam2, BOOL bParam3) // Position - 0x8B88 Hash - 0xC30FA1B5 ^0xC172D664
{
	int num;
	var src;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam1))
		return;

	func_499(uParam0);
	num = func_500(uParam0, obParam1);

	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			sParam2 = func_290(obParam1);
	
		num = func_501(uParam0, sParam2);
	
		if (num == -1)
		{
			num = func_502(uParam0);
		}
		else
		{
			src.f_10 = joaat("WEAPON_UNARMED");
			MISC::COPY_SCRIPT_STRUCT(&uParam0->f_3[num /*13*/], &src, 13);
		}
	}
	else if (num != -1)
	{
	}
	else
	{
		num = func_502(uParam0);
	}

	if (num == -1)
		return;

	uParam0->f_3[num /*13*/].f_2 = obParam1;
	uParam0->f_3[num /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(obParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[num /*13*/].f_9))
	{
		uParam0->f_3[num /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[num /*13*/].f_9, sParam2);
		uParam0->f_3[num /*13*/].f_9 = sParam2;
	}

	func_324(uParam0, 2);
	return;
}

void func_298(var uParam0, Ped pedParam1) // Position - 0x8C85 Hash - 0x47841D83 ^0x41367717
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
		return;

	if (ENTITY::IS_ENTITY_A_PED(pedParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1) == Global_35)
		return;

	if (!ITEMSET::IS_IN_ITEMSET(pedParam1, uParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(pedParam1, uParam0->f_5);
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam1), true, true);
		}
		else if (ENTITY::IS_ENTITY_A_PED(pedParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(pedIndexFromEntityIndex, "SpMissionTriggers", 0);
		
			if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(pedIndexFromEntityIndex, "ClosestScenario");
		
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(pedParam1, uParam0->f_6);
		}
	}

	return;
}

int func_299(var uParam0) // Position - 0x8D4B Hash - 0x2E4FC1F3 ^0xE8B2CC59
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < uParam0->f_13; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]))
			num = num + 1;
	}

	return num;
}

BOOL func_300(int iParam0) // Position - 0x8D82 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43884 == iParam0;
}

Vector3 func_301(var uParam0, int iParam1) // Position - 0x8D90 Hash - 0xC77CD708 ^0x10C9D8E0
{
	var unk;
	float num;
	var unk10;
	float value;

	unk = 2;

	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			num = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
			unk10 = { num.f_1, num * -1f, 0f };
			unk10 = { func_503(unk10) * { 2f, 2f, 2f } };
			unk[0 /*3*/] = { ((uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4) / { 2f, 2f, 2f }) + unk10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(unk[0 /*3*/], &(unk[0 /*3*/].f_2), false);
			unk[1 /*3*/] = { ((uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4) / { 2f, 2f, 2f }) - unk10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(unk[1 /*3*/], &(unk[1 /*3*/].f_2), false);
		
			if (!_IS_NULL_VECTOR(unk[0 /*3*/]))
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk[0 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(unk[1 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true))
					return unk[1 /*3*/];
				else
					return unk[0 /*3*/];
			break;
	
		case 1:
			value = 0f;
		
			if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
				value = (uParam0->f_1016[iParam1 /*41*/].f_12 + uParam0->f_1016[iParam1 /*41*/].f_13 + 360f) / 2f;
			else
				value = (uParam0->f_1016[iParam1 /*41*/].f_12 + uParam0->f_1016[iParam1 /*41*/].f_13) / 2f;
		
			unk[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + { 0f, BUILTIN::COS(value) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f), BUILTIN::SIN(value) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f) } };
			unk[0 /*3*/].f_2 = unk[0 /*3*/].f_2 + 10f;
			MISC::GET_GROUND_Z_FOR_3D_COORD(unk[0 /*3*/], &(unk[0 /*3*/].f_2), false);
		
			if (!_IS_NULL_VECTOR(unk[0 /*3*/]))
				return unk[0 /*3*/];
			break;
	}

	return 0f, 0f, 0f;
}

void func_302(var uParam0, int iParam1) // Position - 0x8FAF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_303(var uParam0, int iParam1) // Position - 0x8FC0 Hash - 0xB94A85A8 ^0xB94A85A8
{
	uParam0->f_1664 = uParam0->f_1664 - uParam0->f_1664 && iParam1;
	return;
}

BOOL func_304(var uParam0, int iParam1) // Position - 0x8FDB Hash - 0x4D54295E ^0x1FD812C3
{
	return uParam0->f_1666.f_1 && iParam1 != false;
}

BOOL func_305(var uParam0, int iParam1) // Position - 0x8FEF Hash - 0xBD0B8CC9 ^0xE0A10783
{
	return func_504(uParam0->f_27, iParam1);
}

BOOL func_306(int iParam0) // Position - 0x9001 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_505(iParam0);
	return num == 3 || num == 4;
}

void func_307(Hash hParam0, BOOL bParam1, float fParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x901F Hash - 0xD777F4CF ^0xBFF3124C
{
	func_506(hParam0, false, false);

	if (func_507(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_508(hParam0, fParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_509(hParam0, true);
			else
				func_510(hParam0, true);
		else
			func_511(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_512())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

void func_308(int iParam0) // Position - 0x90AA Hash - 0x36F4E0F3 ^0x36F4E0F3
{
	Global_36606 = { func_513() };
	Global_36610 = { func_513() };
	Global_36605 = iParam0;
	return;
}

BOOL func_309(int iParam0, int iParam1) // Position - 0x90C9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_310(Ped pedParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x90D8 Hash - 0x5F6A3245 ^0x98C6E7C9
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

	if (func_389(uParam1, 0f, 0f, 0f))
		return;

	if (fParam5 < 0f || fParam6 < 0f || fParam7 < 0f || fParam8 < 0f)
		return;

	if (!(fParam5 > fParam6) || !(fParam5 > fParam7) || !(fParam5 > fParam8) || !(fParam6 > fParam7) || !(fParam6 > fParam8) || !(fParam7 > fParam8))
		return;

	mount = PED::GET_MOUNT(pedParam0);

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);

	num = func_194(pedParam0, uParam1, true);

	if (num <= fParam5 && num > fParam6 && num > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, 1.75f);
	
		if (func_514() && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsIn))
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
		
			if (!ENTITY::IS_ENTITY_DEAD(mount) && !func_311(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
				TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam12, 0, 0, 0, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && !func_311(pedParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
				TASK::TASK_LEAVE_ANY_VEHICLE(pedParam0, 0, iParam12);
		}
	}

	return;
}

BOOL func_311(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x9415 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

int func_312(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x943E Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_515(bParam1, bParam2, bParam3);

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

void func_313(var uParam0) // Position - 0x9573 Hash - 0x2A7EDE58 ^0xD47FE61A
{
	BOOL flag;

	if (!func_63(uParam0, 134217728))
	{
		flag = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("bandana"));
	
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("bandana")))
			flag = false;
	
		STREAMING::REQUEST_ANIM_DICT(func_516(1));
	
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_516(1)))
			flag = false;
	
		if (flag)
			func_324(uParam0, 134217728);
	}

	return;
}

void func_314(var uParam0, int iParam1, BOOL bParam2) // Position - 0x95CF Hash - 0xE249989D ^0x5084807A
{
	float num;
	BOOL flag;
	int i;
	int num2;
	float num3;
	float num4;
	float num5;
	int num6;

	if (CAM::IS_SCREEN_FADED_OUT())
		return;

	if (Global_1935630.f_12)
		return;

	if (!func_63(uParam0, 65536))
		if (PED::IS_PED_FALLING(Global_35))
			return;

	if (Global_1430231.f_4)
		return;

	if (!func_63(uParam0, 4096) && uParam0->f_1896)
		return;

	if (!func_63(uParam0, 16777216))
		return;

	if (STREAMING::_0x99F92061EFE908BA())
		return;

	func_322(uParam0);
	func_517(uParam0, uParam0->f_1897, uParam0->f_1899);
	func_518(uParam0);

	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 > 0f && uParam0->f_1688 >= 0 && !func_91(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 + 5f, true, true) && !func_63(uParam0, 33554432) && !func_63(uParam0, 4))
		{
			func_519(uParam0, uParam0->f_1897);
			return;
		}
	}

	if (!func_63(uParam0, 4))
	{
		if (func_520(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				func_324(uParam0, 8);
				return;
			}
		}
		else
		{
			func_519(uParam0, uParam0->f_1897);
		}
	
		if (uParam0->f_1016[uParam0->f_1690 /*41*/].f_29)
		{
			num = func_521(uParam0, uParam0->f_1690);
		
			if (num < 0f || uParam0->f_1897 && num < 1f)
			{
				uParam0->f_1688 = uParam0->f_1690;
			
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					func_324(uParam0, 8);
					return;
				}
			}
			else if (num > 0f && num < 10000f)
			{
				if (uParam0->f_1689 == -1f || num <= uParam0->f_1689 || uParam0->f_1690 == uParam0->f_1688)
				{
					uParam0->f_1690 != uParam0->f_1688;
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = num;
					func_324(uParam0, 16);
				
					if (!func_63(uParam0, 32) && iParam1 != 2 && !bParam2 && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < uParam0->f_1016[uParam0->f_1688 /*41*/].f_11 + 5f)
					{
						func_522(uParam0);
						func_324(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				func_303(uParam0, 16);
			}
		}
	
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			flag = false;
		
			for (i = uParam0->f_1690 + 1; i <= 7; i = i + 1)
			{
				if (uParam0->f_1016[i /*41*/].f_29)
				{
					uParam0->f_1690 = i;
					i = 7;
					flag = true;
				}
			}
		
			if (!flag)
				uParam0->f_1690 = 0;
		}
	
		if (uParam0->f_1688 < 0)
			return;
	
		if (func_305(&uParam0->f_1016[uParam0->f_1688 /*41*/], 2) && uParam0->f_1897)
			return;
	}

	if (func_63(uParam0, 16))
	{
		num3 = func_194(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true);
	
		if (uParam0->f_1897 && num3 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f)
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
	
		num4 = func_425(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		num5 = 2f;
	
		if (MISC::ABSF(num4 - ENTITY::GET_ENTITY_HEADING(Global_35)) <= 90f)
			num5 = 1f;
	
		if (num3 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			num2 = 1;
		
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 && Global_36.f_2 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10)
				func_321(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, num5);
		
			if (uParam0->f_1899 && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5f)
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(uParam0->f_1901))
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1f, 2000, false);
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(uParam0->f_1901))
				VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(uParam0->f_1901);
		}
		else if (uParam0->f_1897 && num3 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1f);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}

	if (uParam0->f_1897 && num2 && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f || func_63(uParam0, 4))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879) && func_521(uParam0, uParam0->f_1688) < 10000f && func_63(uParam0, 16) || func_63(uParam0, 4))
		{
			if (!func_63(uParam0, 4))
				func_324(uParam0, 4);
		
			num6 = 5152;
			num6 = num6 | 32;
			num6 = num6 | 4096;
			num6 = num6 | 1;
		
			if (!func_319(uParam0, uParam0->f_1688))
				num6 = num6 | 2048;
		
			if (func_253(Global_35, &(uParam0->f_1686), num6, 0, 0, 1084227584, 100, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1686 = 0;
				func_303(uParam0, 4);
			}
		}
	}
	else if (func_63(uParam0, 4))
	{
		func_303(uParam0, 4);
	}

	return;
}

int func_315(var uParam0) // Position - 0x9BFD Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_316(var uParam0) // Position - 0x9C08 Hash - 0x31DD3BA1 ^0x69C4D341
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
		return;

	if (func_63(uParam0, 512))
		return;

	if (func_21(&(uParam0->f_1872)) < 2f)
		return;

	if (func_215(true, false))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_324(uParam0, 524288);
	}

	return;
}

void func_317(BOOL bParam0) // Position - 0x9C5E Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_523(4);

	func_523(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

void func_318() // Position - 0x9C80 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1905944.f_5695 = 1;
	return;
}

BOOL func_319(var uParam0, var uParam1) // Position - 0x9C90 Hash - 0x70AAE99F ^0x19403F76
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/].f_17 == 1 && uParam0->f_475[i /*18*/].f_2 == 4 && uParam0->f_475[i /*18*/] == uParam1)
			return true;
	}

	return false;
}

int func_320(var uParam0) // Position - 0x9CE3 Hash - 0xD73B9827 ^0x6B119A2B
{
	return uParam0->f_2;
}

void func_321(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9CEF Hash - 0x72EE5845 ^0x601C9141
{
	int num;
	int num2;

	if (func_504(iParam1, 8))
		num = num | 8;

	if (func_504(iParam1, 8192))
		num = num | 32;

	if (uParam0->f_1897)
	{
		iParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1898, 214, true);
	}

	if (uParam0->f_1896 && func_63(uParam0, 4096))
		num = num | 16;

	if (func_504(iParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		num = num | 16;

	func_524(&num2, iParam2);
	func_525(&(uParam0->f_1904), num, num2, iParam3);

	if (!Global_1935630.f_12)
	{
		if (!func_63(uParam0, 67108864))
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
	
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}

	func_526();
	func_527(uParam0, 1);
	return;
}

void func_322(var uParam0) // Position - 0x9DC8 Hash - 0x1D31964B ^0x1A4D86D8
{
	int num;
	BOOL flag;
	var string1;
	BOOL flag2;
	int num2;
	Vector3 entityCoords;
	Entity entity;
	int num3;
	int i;
	Interior interiorFromEntity;
	var unk18;
	var unk19;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	num = uParam0->f_1688;

	if (num >= 0 && !func_328(uParam0, 2))
	{
		flag = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[num /*41*/].f_1, true) <= uParam0->f_1016[num /*41*/].f_16;
		string1 = { uParam0->f_1692 };
	
		if (flag)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[num /*22*/].f_2)))
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1692), func_528(uParam0->f_1345[num /*22*/].f_2), 64);
			else
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1692), func_465(), 64);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[num /*22*/].f_10)))
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1692.f_8), func_528(uParam0->f_1345[num /*22*/].f_10), 64);
			else
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1692.f_8), func_529(), 64);
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_BEHIND"), false);
		}
	
		flag2 = !MISC::ARE_STRINGS_EQUAL(&string1, &(uParam0->f_1692)) || !MISC::ARE_STRINGS_EQUAL(&(string1.f_8), &(uParam0->f_1692.f_8));
	
		if (flag2 || !flag)
			if (CAM::_IS_CAMERA_AVAILABLE(&string1))
				CAM::_CAM_DESTROY(&string1);
	
		if (flag && !uParam0->f_1345[num /*22*/])
		{
			if (!func_530(uParam0->f_1345[num /*22*/].f_1, 8))
			{
				if (!func_530(uParam0->f_1345[num /*22*/].f_1, 8))
				{
					func_524(&num2, uParam0->f_1345[num /*22*/].f_1);
					func_531(&(uParam0->f_1904), num2);
				}
			}
			else
			{
				entityCoords = { uParam0->f_1016[num /*41*/].f_1 };
				num3 = -1;
			
				if (uParam0->f_1345[num /*22*/].f_20 >= 0)
				{
					for (i = 0; i < 35; i = i + 1)
					{
						if (uParam0->f_3[i /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2))
						{
							if (uParam0->f_1345[num /*22*/].f_20 == uParam0->f_3[i /*13*/].f_3)
							{
								entity = uParam0->f_3[i /*13*/].f_2;
								num3 = i;
								break;
							}
						}
					}
				}
			
				if (func_530(uParam0->f_1345[num /*22*/].f_1, 16) && num3 >= 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(entity))
						entity = uParam0->f_3[uParam0->f_1345[num /*22*/].f_20 /*13*/].f_2;
				
					if (!ENTITY::DOES_ENTITY_EXIST(entity) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity) == Global_35)
					{
						entityCoords.f_2 = entityCoords.f_2 + 2f;
					}
					else
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(entity, false, false) };
						interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(entity);
					
						if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity) && !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902) || interiorFromEntity != uParam0->f_1902)
						{
							if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
							{
								CAM::_CAM_DESTROY(&(uParam0->f_1692));
								func_462(uParam0, 16);
							}
						
							return;
						}
					}
				
					if (uParam0->f_1345[num /*22*/].f_18 != 0f || uParam0->f_1345[num /*22*/].f_19 != 0f)
						entityCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, func_532(Global_35, entity, 1), uParam0->f_1345[num /*22*/].f_18, 0f, uParam0->f_1345[num /*22*/].f_19) };
				}
				else if (uParam0->f_1345[num /*22*/].f_18 != 0f || uParam0->f_1345[num /*22*/].f_19 != 0f)
				{
					entityCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, func_425(Global_36, uParam0->f_1016[num /*41*/].f_1, 1), uParam0->f_1345[num /*22*/].f_18, 0f, uParam0->f_1345[num /*22*/].f_19) };
				}
			
				unk18 = uParam0->f_1016[num /*41*/].f_16;
				unk19 = uParam0->f_1016[num /*41*/].f_14;
				flag3 = func_530(uParam0->f_1345[num /*22*/].f_1, 2);
				flag4 = func_530(uParam0->f_1345[num /*22*/].f_1, 1) && !flag3;
				flag5 = func_530(uParam0->f_1345[num /*22*/].f_1, 4);
				flag6 = false;
			
				if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
				{
					CAM::_CAM_CREATE(&(uParam0->f_1692));
				
					if (CAM::IS_CINEMATIC_CAM_RENDERING())
						func_533(0, 0);
				
					flag6 = true;
					func_462(uParam0, 16);
				}
			
				if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 4))
				{
					flag6 = flag6 || uParam0->f_1708.f_16 != entity;
					flag6 = flag6 || !func_534(uParam0->f_1708.f_17, entityCoords, 1056964608, true);
					flag6 = flag6 || MISC::ABSF(uParam0->f_1708.f_20 - unk18) > 0.01f;
					flag6 = flag6 || MISC::ABSF(uParam0->f_1708.f_21 - unk19) > 0.01f;
					flag6 = flag6 || uParam0->f_1708.f_22 != flag4;
					uParam0->f_1708.f_16 = entity;
					uParam0->f_1708.f_17 = { entityCoords };
					uParam0->f_1708.f_20 = unk18;
					uParam0->f_1708.f_21 = unk19;
					uParam0->f_1708.f_22 = flag4;
				
					if (flag6)
					{
						uParam0->f_1708 = { uParam0->f_1692 };
						CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1708));
					}
				}
			
				if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 9))
				{
					flag6 = flag6 || uParam0->f_1731.f_16 != entity;
					flag6 = flag6 || !func_534(uParam0->f_1731.f_17, entityCoords, 1056964608, true);
					flag6 = flag6 || uParam0->f_1731.f_20 != !flag5;
					flag6 = flag6 || uParam0->f_1731.f_21 != flag4;
					uParam0->f_1731.f_16 = entity;
					uParam0->f_1731.f_17 = { entityCoords };
					uParam0->f_1731.f_20 = !flag5;
					uParam0->f_1731.f_21 = flag4;
				
					if (flag6)
					{
						uParam0->f_1731 = { uParam0->f_1692 };
						CAM::_0x728491FB3DFFEF99(&(uParam0->f_1731));
					}
				}
			}
		}
	}
	else
	{
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
			CAM::_CAM_DESTROY(&(uParam0->f_1692));
	
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1692), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1692.f_8), "", 64);
	}

	func_535(uParam0, 2);
	return;
}

BOOL func_323(var uParam0, int iParam1, BOOL bParam2) // Position - 0xA38E Hash - 0xB8AA09D1 ^0xB8AA09D1
{
	int num;

	if (bParam2 || iParam1 == 2)
		return 0;

	if (func_536(uParam0, &num))
	{
		func_537(uParam0, num);
		return 1;
	}

	return 0;
}

void func_324(var uParam0, int iParam1) // Position - 0xA3C1 Hash - 0x537D9C68 ^0x537D9C68
{
	uParam0->f_1664 = uParam0->f_1664 || iParam1;
	return;
}

void func_325(var uParam0) // Position - 0xA3D6 Hash - 0xF1EF36AF ^0xD4804A84
{
	int num;
	float num2;
	float distanceBetweenCoords;
	float num3;
	BOOL flag;
	float num4;
	var volumeCoords;
	Interior interiorAtCoords;

	if (func_315(uParam0) != 0)
		return;

	num = uParam0->f_1688;

	if (num < 0)
		num = 0;

	if (num >= 0)
	{
		if (Global_36.f_2 < uParam0->f_1016[num /*41*/].f_1.f_2)
			return;
	
		num2 = uParam0->f_1016[num /*41*/].f_15;
	
		if (num2 <= 0f)
			num2 = uParam0->f_1016[num /*41*/].f_14;
	
		if (num2 <= 0f)
			return;
	
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[num /*41*/].f_1, false);
		num3 = MISC::ABSF(Global_36.f_2 - uParam0->f_1016[num /*41*/].f_1.f_2);
		flag = VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875);
	
		if (flag)
		{
			volumeCoords = { VOLUME::GET_VOLUME_COORDS(uParam0->f_1875) };
			num4 = MISC::ABSF(volumeCoords.f_2 - uParam0->f_1016[num /*41*/].f_1.f_2);
		}
	
		if (distanceBetweenCoords <= num2 && num3 <= uParam0->f_1016[num /*41*/].f_10 || flag && num4 <= uParam0->f_1016[num /*41*/].f_10)
		{
			interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[num /*41*/].f_1);
		
			if (!INTERIOR::IS_VALID_INTERIOR(interiorAtCoords) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902))
			{
				func_324(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1902 == interiorAtCoords)
			{
				func_324(uParam0, 65536);
				return;
			}
		}
	
		func_303(uParam0, 65536);
	}

	return;
}

void func_326(var uParam0, int iParam1) // Position - 0xA543 Hash - 0x9118FA6F ^0x438ACC34
{
	int i;
	BOOL flag;
	int num;

	num = 0;

	if (_STOPWATCH_IS_INITIALIZED_0(uParam0) > 3)
	{
		for (i = 0; i < uParam0->f_1894; i = i + 1)
		{
			if (uParam0->f_475[i /*18*/].f_7)
			{
				func_538(uParam0, i, iParam1);
			}
			else if (uParam0->f_475[i /*18*/].f_6)
			{
				flag = func_539(uParam0, i);
			
				if (flag)
					func_540(uParam0, i, iParam1);
			}
		}
	
		if (!func_319(uParam0, uParam0->f_1684))
			func_541(uParam0, -1, false, true);
	
		return;
	}

	for (i = uParam0->f_1691; i <= uParam0->f_1894 - 1; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/].f_7)
		{
			func_538(uParam0, i, iParam1);
		}
		else if (uParam0->f_475[i /*18*/].f_6)
		{
			flag = func_539(uParam0, i);
		
			if (flag)
			{
				func_540(uParam0, i, iParam1);
				num = num + 1;
			
				if (num > 5)
				{
					if (i + 1 < 30)
						uParam0->f_1691 = i + 1;
					else
						uParam0->f_1691 = 0;
				
					return;
				}
			}
		}
	}

	return;
}

void func_327(var uParam0) // Position - 0xA654 Hash - 0x2D6560B4 ^0xCF174C5E
{
	int i;
	int itemsetSize;
	ScrHandle indexedItemInItemset;

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		itemsetSize = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1921);
	
		for (i = 0; i < itemsetSize; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, uParam0->f_1921);
		
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(indexedItemInItemset))
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset)), 184, true);
		}
	}

	return;
}

BOOL func_328(var uParam0, int iParam1) // Position - 0xA6AD Hash - 0x6B2D4FF8 ^0x6B2D4FF8
{
	return uParam0->f_1665 && iParam1 != false;
}

void func_329(var uParam0) // Position - 0xA6BF Hash - 0xE490C58 ^0xE490C58
{
	func_542(&(uParam0->f_1904));
	return;
}

void func_330(var uParam0) // Position - 0xA6D0 Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_1665 = 0;
	return;
}

void func_331(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0xA6DE Hash - 0xF90EDA2C ^0xF90EDA2C
{
	func_543(uParam0, 4);

	if (func_544(uParam0, &uParam1, iParam5))
		func_264(uParam0, 1);

	return;
}

void func_332(var uParam0) // Position - 0xA701 Hash - 0xA8653B4C ^0xE273D469
{
	if (!func_545(uParam0))
		return;

	if (!func_63(uParam0, 4194304))
	{
		func_546(uParam0);
		func_324(uParam0, 4194304);
	}

	if (func_547(uParam0))
	{
		func_548(uParam0);
		func_549(uParam0);
		func_264(uParam0, 2);
	}

	return;
}

void func_333(var uParam0) // Position - 0xA750 Hash - 0x476EAC02 ^0x476EAC02
{
	uParam0->f_1685 = -1;
	func_263(uParam0, 0);
	func_264(uParam0, 3);
	func_550(uParam0, 0);
	func_154(&(uParam0->f_1869));
	func_551(uParam0);
	func_154(&(uParam0->f_1872));
	return;
}

BOOL func_334(var uParam0) // Position - 0xA78B Hash - 0x3E0BE1C5 ^0x3E0BE1C5
{
	if (uParam0->f_1770)
		return false;

	return uParam0->f_1769;
}

void func_335() // Position - 0xA7A4 Hash - 0x34DFCE1E ^0x82FD7E0E
{
	Global_18 = true;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_336(var uParam0) // Position - 0xA7B7 Hash - 0xD11B2D8F ^0xAF993603
{
	if (uParam0->f_1684 >= 0)
		if (func_194(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, false) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_14)
			return true;
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_14 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
			return true;

	return false;
}

BOOL func_337(var uParam0) // Position - 0xA821 Hash - 0xD11B2D8F ^0x7DF32AFD
{
	if (uParam0->f_1684 >= 0)
		if (func_194(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, false) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_15)
			return true;
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_15 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
			return true;

	return false;
}

BOOL func_338(var uParam0, int iParam1) // Position - 0xA88B Hash - 0xAD745B57 ^0xE275B512
{
	float animScenePhase;
	BOOL isAnimSceneFinished;
	BOOL isAnimSceneExitingThisFrame;

	if (uParam0->f_1685 < 0)
		return true;

	switch (uParam0->f_475[uParam0->f_1685 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE, true) == 8)
			{
				return true;
			}
			else if (func_48(&(uParam0->f_1872)) >= 15f)
			{
				func_324(uParam0, 32768);
				return true;
			}
			break;
	
		case 9:
			if (!uParam0->f_1768)
			{
				if (func_48(&(uParam0->f_1872)) >= 15f)
				{
					func_324(uParam0, 32768);
					return true;
				}
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_552(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_552(uParam0), false))
					uParam0->f_1768 = 1;
			}
			else
			{
				animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_552(uParam0));
				isAnimSceneFinished = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_552(uParam0), false);
				isAnimSceneExitingThisFrame = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_552(uParam0));
				return animScenePhase >= 1f || isAnimSceneFinished || isAnimSceneExitingThisFrame;
			}
			break;
	
		case 11:
			return true;
	
		default:
			return func_48(&(uParam0->f_1872)) >= 15f;
	}

	return false;
}

BOOL func_339(var uParam0) // Position - 0xA9AD Hash - 0xC826A15F ^0x5EB78367
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/].f_17 == 2)
			return true;
	}

	return false;
}

int func_340(var uParam0) // Position - 0xA9DC Hash - 0x50F804CE ^0x820D79BE
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/].f_17 == 2 && func_553(&uParam0->f_475[i /*18*/], 4))
			return i;
	}

	return -1;
}

BOOL func_341(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0xAA20 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

struct<8> func_342(var uParam0, Object obParam1) // Position - 0xAA56 Hash - 0xD113665C ^0xD8597F27
{
	var unk;
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(obParam1))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, func_290(obParam1), 64);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		{
			num = func_554(uParam0, obParam1);
		
			if (num > 0)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "^", 64);
				TEXT_LABEL_APPEND_INT(&unk, num, 64);
			}
		}
	}

	return unk;
}

BOOL func_343(var uParam0, int iParam1) // Position - 0xAAA1 Hash - 0x718DD1EF ^0xF9145158
{
	return uParam0->f_9 && iParam1 != false;
}

void func_344(AnimScene ansParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0xAAB2 Hash - 0xFFE17847 ^0x68A7B4F3
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
		return;

	if (!bParam4)
		if (func_74(0, false, true))
			return;

	if (Global_43837 >= 5)
		return;

	for (i = 0; i < 5; i = i + 1)
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[i /*6*/]))
		{
			Global_43806[i /*6*/] = ansParam0;
			Global_43806[i /*6*/].f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_43806[i /*6*/].f_3 = iParam1;
			Global_43806[i /*6*/].f_4 = iParam2;
			Global_43806[i /*6*/].f_5 = iParam3;
			Global_43837 = Global_43837 + 1;
			return;
		}
	}

	return;
}

void func_345(Ped pedParam0) // Position - 0xAB47 Hash - 0xF249FD1D ^0xC50FDB38
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (PED::IS_PED_IN_GROUP(pedParam0))
			PED::REMOVE_PED_FROM_GROUP(pedParam0);
	
		PED::SET_PED_CAN_RAGDOLL(pedParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedParam0, true);
	}

	return;
}

void func_346(var uParam0, Ped pedParam1, const char* sParam2) // Position - 0xAB83 Hash - 0xB02DACC7 ^0xB02DACC7
{
	func_555(&(uParam0->f_428), pedParam1, sParam2);
	return;
}

BOOL func_347(int iParam0, int iParam1) // Position - 0xAB98 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

void func_348(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0xABA9 Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_114(essParam0))
		return;

	if (func_115(essParam0))
		if (Global_1360165[essParam0 /*1157*/].f_129 != 0 && Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_491(essParam0, 56, true);
		func_19(&(Global_1359489.f_40), true);
	}

	func_556(essParam0, false);
	func_557(essParam0, 4, false);
	func_558(essParam0);
	func_559(essParam0);
	func_560(essParam0, 37, true);
	flag = func_152(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_561(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_490(essParam0, 64, true))
		func_560(essParam0, 64, true);

	if (bParam3)
	{
		func_560(essParam0, 33, true);
		func_560(essParam0, 34, true);
		func_562(essParam0, 1056964608, -1, 1061158912);
		func_563(essParam0, true, true, false);
	
		if (bParam6)
			func_491(essParam0, 30, true);
	
		if (bParam7)
		{
			func_491(essParam0, 35, true);
		
			if (bParam8)
				func_491(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_564(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_560(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_491(essParam0, 33, true);
		func_563(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_19(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_154(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_491(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_565(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_490(essParam0, 45, true))
		func_560(essParam0, 45, true);

	func_566(essParam0, 16, true);
	func_560(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_152(func_567(essParam0), 0))
			func_568(0, essParam0, bParam3, 0, bParam2);

	return;
}

void func_349(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xAE5E Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_534(vector, uParam0, 2f, true))
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

BOOL func_350(var uParam0) // Position - 0xAEE2 Hash - 0x68548E72 ^0x68548E72
{
	return *uParam0 != 0;
}

BOOL func_351(int iParam0, int iParam1) // Position - 0xAEEF Hash - 0xD6EFA90F ^0xD6EFA90F
{
	int num;

	num = func_569(iParam1);
	return iParam0 && num != false;
}

void func_352(var uParam0) // Position - 0xAF06 Hash - 0xCE9A6290 ^0xF286CA0E
{
	if (!func_570(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_571(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_353(var uParam0) // Position - 0xAF2C Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_354(var uParam0) // Position - 0xAF3C Hash - 0x25B0A6DE ^0x72F31499
{
	if (!func_570(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
		
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
		
			default:
				break;
		}
	
		func_571(&(uParam0->f_3), 1);
	}

	return;
}

BOOL func_355(var uParam0) // Position - 0xAF8B Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_356(var uParam0) // Position - 0xAF9B Hash - 0xA22DA6B0 ^0x16EE41FE
{
	if (!func_570(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_571(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_357(var uParam0) // Position - 0xAFC0 Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

BOOL func_358(var uParam0) // Position - 0xAFD0 Hash - 0xBB45F689 ^0x6A44F33B
{
	if (func_570(uParam0->f_1, 2))
		return true;

	if (!func_570(uParam0->f_1, 1))
		func_572(uParam0);

	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_571(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_359(var uParam0) // Position - 0xB013 Hash - 0x628E0BDA ^0x4AB4005A
{
	if (func_570(*uParam0, 2))
		return true;

	if (!func_570(*uParam0, 1))
		func_573(uParam0);

	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_571(uParam0, 2);
		return true;
	}

	return false;
}

BOOL func_360(var uParam0) // Position - 0xB04F Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_361(var uParam0) // Position - 0xB05F Hash - 0x23BD7ECC ^0x33E0A7D4
{
	char* entityId;

	if (!func_570(uParam0->f_2, 1))
	{
		if (func_478(uParam0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				entityId = func_393(ENTITY::GET_ENTITY_MODEL(Global_35));
			
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, entityId))
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, entityId, Global_35, 0);
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_zero") && func_260())
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_three") && func_574())
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
			
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_571(&(uParam0->f_2), 1);
			}
		}
	}

	return;
}

BOOL func_362(var uParam0) // Position - 0xB11E Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_363(var uParam0, AnimScene ansParam1) // Position - 0xB12E Hash - 0xF5E93730 ^0x42495AA1
{
	if (!func_570(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansParam1, true, false))
			return;
	
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansParam1, *uParam0);
		func_571(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_364(var uParam0) // Position - 0xB165 Hash - 0x68548E72 ^0x68548E72
{
	return *uParam0 != 0;
}

void func_365(var uParam0) // Position - 0xB172 Hash - 0xA1E8590D ^0xEFF60CC2
{
	if (!func_570(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROP_SET(*uParam0);
		func_571(&(uParam0->f_2), 1);
	}

	return;
}

BOOL func_366(var uParam0) // Position - 0xB198 Hash - 0x68548E72 ^0x68548E72
{
	return *uParam0 != 0;
}

void func_367(var uParam0) // Position - 0xB1A5 Hash - 0x11C7E32E ^0x57AC62D0
{
	if (!func_570(uParam0->f_3, 1))
	{
		WEAPON::_REQUEST_WEAPON_ASSET(*uParam0, uParam0->f_1, uParam0->f_2);
		func_571(&(uParam0->f_3), 1);
	}

	return;
}

BOOL func_368(var uParam0) // Position - 0xB1D2 Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_369(var uParam0) // Position - 0xB1E2 Hash - 0xA1E8590D ^0x17E137DF
{
	if (!func_570(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_571(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_370(var uParam0) // Position - 0xB208 Hash - 0x1C63C0A9 ^0x1C63C0A9
{
	return func_575(*uParam0);
}

void func_371(var uParam0) // Position - 0xB217 Hash - 0xA22DA6B0 ^0xCD6F15BE
{
	if (!func_570(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_IPL_HASH(*uParam0);
		func_571(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_372(var uParam0) // Position - 0xB23C Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_373(var uParam0) // Position - 0xB24C Hash - 0x7949534F ^0x690C4E7
{
	if (!func_570(uParam0->f_2, 1))
	{
		AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2);
		func_571(&(uParam0->f_2), 1);
	}

	return;
}

BOOL func_374(var uParam0) // Position - 0xB279 Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_375(var uParam0) // Position - 0xB289 Hash - 0xA22DA6B0 ^0xA4C9F2CE
{
	if (!func_570(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MOVE_NETWORK_DEF(*uParam0);
		func_571(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_376(int iParam0) // Position - 0xB2AE Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_377(BOOL bParam0) // Position - 0xB2EC Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_378(BOOL bParam0) // Position - 0xB2F9 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

struct<8> func_379(var uParam0) // Position - 0xB30C Hash - 0xDB13DC73 ^0xDB13DC73
{
	return uParam0->f_454;
}

struct<8> func_380() // Position - 0xB31C Hash - 0x964AA7CC ^0xCB348F89
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MultiStart", 64);
	return unk;
}

BOOL func_381(int iParam0) // Position - 0xB331 Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

Vector3 func_382(int iParam0) // Position - 0xB361 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_383(Volume volParam0) // Position - 0xB3B3 Hash - 0x93784101 ^0x333F564B
{
	int i;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	for (i = 0; i < Global_1393237.f_11; i = i + 1)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(volParam0, Global_1393237.f_11[i /*30*/].f_3))
		{
			func_576(i, 4096, false);
			func_576(i, 131072, false);
			func_577(i, 1);
		}
	}

	return;
}

Volume func_384(Volume volParam0, var uParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0xB412 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_578(volumeCoords, volumeScale, uParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

void func_385(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0xB456 Hash - 0x77539CD1 ^0x7EE21A9
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	if (func_579(uParam0, sParam1))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]))
		{
			if (!func_580(uParam0, sParam1) || func_83(uParam0, 8388608))
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_462[i /*9*/], sParam1, 64);
			
				if (!bParam2)
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1))
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
					else
						func_96(uParam0, 4194304);
				else
					func_96(uParam0, 4194304);
			
				return;
			}
			else
			{
				return;
			}
		}
	}

	return;
}

void func_386(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xB522 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_581(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_581(20))
				return;
		}
	}

	func_582(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_429(8);
	return;
}

void func_387(var uParam0) // Position - 0xB626 Hash - 0xA0536A87 ^0xE1A3FD9C
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);

	return;
}

struct<8> func_388() // Position - 0xB642 Hash - 0x964AA7CC ^0x5E3B144D
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NormalStart", 64);
	return unk;
}

BOOL func_389(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0xB657 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_390(int iParam0, int iParam1) // Position - 0xB680 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_391(int iParam0) // Position - 0xB68F Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_392(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB6CE Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_391(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_583(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_584(num);
	*iParam0 = 0;
	return;
}

char* func_393(Hash hParam0) // Position - 0xB722 Hash - 0xE6862179 ^0x8C48457B
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

BOOL func_394(int iParam0) // Position - 0xC2AA Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_395(int iParam0, int iParam1) // Position - 0xC2B6 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

int func_396(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0xC2D7 Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_395(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_585(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

void func_397(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC35D Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_391(iParam0))
		return;

	num = func_583(iParam0);
	func_586(num, bParam1);
	return;
}

void func_398(int iParam0, int iParam1, BOOL bParam2) // Position - 0xC389 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_391(iParam0))
		return;

	num = func_583(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TYPE(Global_1945188[num /*18*/].f_3, iParam1);
	return;
}

void func_399(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC3D2 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_391(iParam0))
		return;

	num = func_583(iParam0);

	if (bParam1)
	{
		func_587(iParam0, 4);
		func_586(num, true);
		func_588(num, true);
	}
	else
	{
		func_589(iParam0, 4);
		func_588(num, false);
	}

	return;
}

float func_400(int iParam0, BOOL bParam1) // Position - 0xC421 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_391(iParam0))
		return 0f;

	num = func_583(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_401(int iParam0, BOOL bParam1) // Position - 0xC479 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_391(iParam0))
		return false;

	num = func_583(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_402(var uParam0) // Position - 0xC4D1 Hash - 0x69DF0810 ^0x1B578435
{
	var string1;
	var string2;

	string1 = { func_200(uParam0) };
	string2 = { func_180(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&string1, &string2);
}

BOOL func_403(Hash hParam0) // Position - 0xC4F7 Hash - 0x798E6037 ^0xDD3AB35C
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
		{
			func_590(i);
			return true;
		}
	}

	return false;
}

void func_404(var uParam0, const char* sParam1) // Position - 0xC537 Hash - 0xF23C2839 ^0x7A33E8E5
{
	var string1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	string1 = { func_200(uParam0) };

	if (!MISC::ARE_STRINGS_EQUAL(&string1, sParam1) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, sParam1))
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);

	return;
}

void func_405(var uParam0, const char* sParam1, Entity eParam2, int iParam3) // Position - 0xC58E Hash - 0x8115405E ^0x889845AA
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam2))
		return;

	if (iParam3 == 1)
		if (ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(uParam0->f_444, sParam1))
			iParam3 = 0;

	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, eParam2, iParam3);
	return;
}

void func_406(Ped pedParam0) // Position - 0xC5CC Hash - 0xC848742E ^0xD171C7FA
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

BOOL func_407(var uParam0) // Position - 0xC602 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_591(81053684))
		if (func_592(uParam0))
			return true;
	else if (func_593(-525676072, uParam0))
		if (func_592(uParam0))
			return true;

	return false;
}

BOOL func_408(Hash hParam0, int iParam1) // Position - 0xC647 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_409(Hash hParam0) // Position - 0xC661 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_408(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

void func_410(int iParam0, BOOL bParam1) // Position - 0xC68C Hash - 0x9D46840B ^0xDAAD5146
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

void func_411(int iParam0) // Position - 0xC6FD Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_254() != -1)
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

void func_412(BOOL bParam0, BOOL bParam1) // Position - 0xC73A Hash - 0x26C4C089 ^0x53EE9A65
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
			if (func_427(weaponHash) && WEAPON::IS_WEAPON_A_GUN(weaponHash))
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
		func_594(1);

	return;
}

void func_413() // Position - 0xC817 Hash - 0x2910738C ^0x2910738C
{
	Hash weaponHash;

	weaponHash = func_426(Global_35, 9, true, false);

	if (func_427(weaponHash))
		return;

	weaponHash = func_426(Global_35, 7, true, false);

	if (func_427(weaponHash))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 8, false, false);

	weaponHash = func_426(Global_35, 0, true, false);

	if (func_427(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_426(Global_35, 1, true, false);

	if (func_427(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_426(Global_35, 18, true, false);

	if (func_427(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_595();

	if (func_427(weaponHash))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_596(Global_35, weaponHash, 1, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
	
		return;
	}

	weaponHash = func_597(6291456, 0);

	if (func_427(weaponHash))
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_596(Global_35, weaponHash, true, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);

	return;
}

Object* func_414() // Position - 0xC992 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

int func_415(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xC9A1 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_389(*uParam0, 0f, 0f, 0f))
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

void func_416(int iParam0) // Position - 0xCA98 Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

void func_417(int iParam0) // Position - 0xCAAD Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_418(var uParam0, var uParam1, var uParam2) // Position - 0xCAC0 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

Hash func_419() // Position - 0xCAD9 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_420(Hash hParam0) // Position - 0xCAE5 Hash - 0xC20F1267 ^0x9F8567FC
{
	Global_40.f_1095.f_3054.f_2 = hParam0;
	return;
}

BOOL func_421() // Position - 0xCAFA Hash - 0x3630EC94 ^0x3630EC94
{
	return func_598() || func_599();
}

Vector3 func_422(var uParam0) // Position - 0xCB10 Hash - 0xBDA8105E ^0xBDA8105E
{
	return uParam0->f_505;
}

float func_423(var uParam0) // Position - 0xCB1F Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_508;
}

void func_424(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) // Position - 0xCB2C Hash - 0xF46E0F16 ^0xED4BA72A
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

	pedParam0 == func_600(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_601(pedParam0))
		if (func_602(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_309(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_424(vehiclePedIsIn, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_424(mount, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_309(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_309(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_309(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_309(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_309(iParam5, 129))
	{
		if (func_309(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_309(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, iParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_309(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_309(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_601(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_309(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_309(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

float func_425(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0xCDAE Hash - 0x9F66817B ^0xCA5C01B6
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

Hash func_426(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCE13 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_427(Hash hParam0) // Position - 0xCE39 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_428(var uParam0, Ped pedParam1) // Position - 0xCE54 Hash - 0x299AC54D ^0xA15A1941
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1)
			return true;
	}

	return false;
}

void func_429(BOOL bParam0) // Position - 0xCEA1 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_430(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0xCEB4 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_435(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_603(hParam4);
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

BOOL func_431(BOOL bParam0) // Position - 0xCFB1 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

BOOL func_432(int iParam0, int iParam1) // Position - 0xCFC2 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_443(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

BOOL func_433(int iParam0, int iParam1) // Position - 0xCFE0 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_434(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCFF9 Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_432(1108822547, 6))
	{
		if (bParam2)
		{
			func_430(pedParam0, num, func_254() != -1, false, 0);
			func_436(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_437(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

int func_435(int iParam0, int iParam1) // Position - 0xD0C1 Hash - 0xE1D12727 ^0xA46110B3
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

void func_436(int iParam0, int iParam1, int iParam2) // Position - 0xD310 Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_443(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_443(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

void func_437(int iParam0, int iParam1, int iParam2) // Position - 0xD33D Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_443(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_443(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_443(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_438(var uParam0) // Position - 0xD37C Hash - 0x191996BC ^0x191996BC
{
	var unk;

	uParam0->f_454 = { unk };
	return;
}

void func_439(var uParam0) // Position - 0xD391 Hash - 0xFB531B2 ^0x44C47463
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_462[i /*9*/], "", 64);
	}

	return;
}

void func_440() // Position - 0xD3BA Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1911774 = true;
	return;
}

struct<5> func_441(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD3C7 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_604(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_605(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_611(hParam0, -1823706425))
			{
				unk = { func_450(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_611(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_450(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_610(bParam1) };
		
			switch (func_409(hParam0))
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
				unk = { func_450(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_606(bParam1) };
		
			if (bParam2 && func_607(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_608(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_608(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_609(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_612(unk, &unk28, bParam1, false))
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

int func_442(var uParam0) // Position - 0xD684 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_435(i, 1);
	}

	return -358215195;
}

int func_443(int iParam0, int iParam1) // Position - 0xD6BF Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_444(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD890 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_613();

	if (iParam2 == 39)
	{
		unk = { func_441(hParam0, true, false) };
		iParam2 = func_443(func_442(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_614(hParam0, 866047851) && func_615(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_431(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_616(func_435(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_617(iParam2);
	func_618(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_619(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_619(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_620(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_621(hParam0, iParam2, hParam1, func_254() != -1);

	if (bParam4)
		func_622(&(Global_1946054.f_1378), true, 3);
	else
		func_622(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_437(func_435(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_445(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDA9D Hash - 0x5AF76643 ^0x5AF76643
{
	func_623(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_446(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0xDAB6 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_429(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_624(num);
	return;
}

void func_447() // Position - 0xDAE8 Hash - 0xB6203BF0 ^0x217DD714
{
	func_625(&(Global_1946054.f_2776));
	func_626(32768);
	func_437(1108822547, 8, 6);
	return;
}

int func_448(int iParam0) // Position - 0xDB0F Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_443(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_449(int iParam0, int iParam1, int iParam2) // Position - 0xDB73 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_386(num);
	return;
}

struct<4> func_450(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xDB93 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_408(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_452(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_451(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xDBC4 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_408(hParam0, 0))
		return 0;

	guid = { func_450(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_452(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_452(BOOL bParam0) // Position - 0xDC0C Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_254() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_453(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xDC4D Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_454(Ped pedParam0) // Position - 0xDCA6 Hash - 0xD8557B87 ^0xA36AC234
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(pedParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}

	PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedParam0, 0f);

	if (func_453(pedParam0, 1041577989))
		return false;

	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(pedParam0)))
		return true;

	return false;
}

BOOL func_455(Ped pedParam0, var uParam1, var uParam2, var uParam3) // Position - 0xDD50 Hash - 0x4FB200FB ^0x9AEFCD02
{
	var entityCoords;
	var unk3;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	unk3 = { entityCoords + ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	return func_627(entityCoords, unk3, uParam1);
}

BOOL func_456(int iParam0, int iParam1) // Position - 0xDD83 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_457(var uParam0, int iParam1) // Position - 0xDD92 Hash - 0xF55E891F ^0xF55E891F
{
	func_628(uParam0, iParam1);
	return;
}

BOOL func_458(Ped pedParam0, int iParam1) // Position - 0xDDA2 Hash - 0x8826373E ^0x6E06CE7E
{
	float scriptTaskActionTime;

	if (!func_453(pedParam0, 1041577989))
		return true;

	scriptTaskActionTime = TASK::_GET_SCRIPT_TASK_ACTION_TIME(pedParam0, 1041577989);

	if (func_309(iParam1, 32))
	{
		if (scriptTaskActionTime >= 1.85f)
			return true;
	
		return false;
	}

	if (func_309(iParam1, 256))
	{
		if (scriptTaskActionTime >= 1f)
			return true;
	
		return false;
	}

	if (func_309(iParam1, 2048))
	{
		if (scriptTaskActionTime >= 1.5f)
			return true;
	
		return false;
	}

	return true;
}

void func_459(var uParam0, int iParam1) // Position - 0xDE23 Hash - 0xF55E891F ^0xF55E891F
{
	func_629(uParam0, iParam1);
	return;
}

BOOL func_460(eStackSize essParam0) // Position - 0xDE33 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

void func_461(int iParam0, float fParam1) // Position - 0xDE3F Hash - 0x45CA0D9B ^0xCA00B2F3
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_631(1, flag, true, str);
		func_632(!flag, fParam1 < 0f, flag);
		num = func_633(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_634();
	}
	else if (iParam0 == 10)
	{
		num = func_633(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_633(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

void func_462(var uParam0, int iParam1) // Position - 0xDF15 Hash - 0x659ACE5B ^0xF162830A
{
	uParam0->f_1666.f_1 = uParam0->f_1666.f_1 || iParam1;
	return;
}

BOOL func_463(var uParam0, int iParam1) // Position - 0xDF2E Hash - 0x718DD1EF ^0xD2A89BB9
{
	return uParam0->f_26 && iParam1 != false;
}

char* func_464(int iParam0) // Position - 0xDF3F Hash - 0x2020ACF ^0x98DD4A66
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}

	return "Disabled";
}

char* func_465() // Position - 0xDF63 Hash - 0x306ACA3A ^0x367ACFB4
{
	return "default_leadin_camera";
}

void func_466() // Position - 0xDF6F Hash - 0x603315F4 ^0x107C5E3F
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("bandana"));
	STREAMING::REMOVE_ANIM_DICT(func_516(1));
	return;
}

BOOL func_467(int iParam0) // Position - 0xDF89 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_635(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

Ped func_468(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0xDFF4 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_636(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_469(var uParam0) // Position - 0xE036 Hash - 0x2CE87980 ^0x659DB8DA
{
	int i;

	for (i = 0; i <= 5; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i]))
			return false;
	}

	return true;
}

BOOL func_470(Vehicle veParam0, Hash hParam1) // Position - 0xE062 Hash - 0xF10BA36E ^0x815665EE
{
	var expected;
	int actual;
	int numDraftVehicleHarnessPed;

	numDraftVehicleHarnessPed = VEHICLE::_GET_NUM_DRAFT_VEHICLE_HARNESS_PED(hParam1);
	VEHICLE::GET_DRAFT_ANIMAL_COUNT(veParam0, &expected, &actual);
	return actual >= numDraftVehicleHarnessPed;
}

void func_471(Vehicle veParam0, var uParam1) // Position - 0xE082 Hash - 0xEF676992 ^0xF9B4F6A4
{
	int i;

	for (i = 0; i <= 5; i = i + 1)
	{
		uParam1->[i] = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, i);
	}

	return;
}

void func_472(Volume volParam0, BOOL bParam1) // Position - 0xE0AA Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_473(int iParam0) // Position - 0xE0CD Hash - 0x299A116B ^0x246DE950
{
	int num;

	if (iParam0 > 150)
		iParam0 = 150;

	iParam0 > Global_1934765.f_286 - 150;

	if (func_637(&num))
	{
		if (Global_1934765.f_275[num /*2*/].f_1 != iParam0)
		{
			Global_1934765.f_286 = Global_1934765.f_286 + Global_1934765.f_275[num /*2*/].f_1;
			Global_1934765.f_275[num /*2*/].f_1 = iParam0;
			Global_1934765.f_286 = Global_1934765.f_286 - iParam0;
			STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_638());
		}
	
		return;
	}

	num = func_639();

	if (num == -1)
		return;

	Global_1934765.f_275[num /*2*/].f_1 = iParam0;
	Global_1934765.f_275[num /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765.f_286 = Global_1934765.f_286 - iParam0;
	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_638());
	return;
}

void func_474(var uParam0, int iParam1) // Position - 0xE19A Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_475(var uParam0) // Position - 0xE1A7 Hash - 0xBB45F689 ^0x2A0151A
{
	if (func_570(uParam0->f_1, 2))
		return true;

	if (!func_570(uParam0->f_1, 1))
		func_352(uParam0);

	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_571(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_476(var uParam0) // Position - 0xE1EA Hash - 0x81A22FBD ^0x560BCA36
{
	if (func_570(uParam0->f_3, 2))
		return true;

	if (!func_570(uParam0->f_3, 1))
		func_354(uParam0);

	switch (uParam0->f_1)
	{
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_571(&(uParam0->f_3), 2);
				return true;
			}
			break;
	
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_571(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}

	return false;
}

BOOL func_477(var uParam0) // Position - 0xE26A Hash - 0xBB45F689 ^0xA82EEDBE
{
	if (func_570(uParam0->f_1, 2))
		return true;

	if (!func_570(uParam0->f_1, 1))
		func_356(uParam0);

	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_571(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_478(var uParam0) // Position - 0xE2AD Hash - 0x4763A261 ^0x3D853F54
{
	Vector3 position;
	var rotation;

	if (func_570(uParam0->f_2, 1))
		return true;

	if (!uParam0->f_66)
		return false;

	if (uParam0->f_65 <= 0f)
	{
		return true;
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
	{
		ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1, &position, &rotation, 2);
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, position, true) > uParam0->f_65)
			return false;
	
		return true;
	}

	return false;
}

BOOL func_479(var uParam0) // Position - 0xE319 Hash - 0x2427C87C ^0x36B2F4F4
{
	if (func_570(uParam0->f_2, 2))
		return true;

	if (!func_570(uParam0->f_2, 1))
		func_361(uParam0);

	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		func_571(&(uParam0->f_2), 2);
		return true;
	}

	return false;
}

BOOL func_480(var uParam0, AnimScene ansParam1) // Position - 0xE35F Hash - 0x41147E93 ^0xD471A2
{
	if (func_570(uParam0->f_1, 2))
		return true;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam1))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansParam1, true, false))
		return false;

	if (!func_570(uParam0->f_1, 1))
		func_363(uParam0, ansParam1);

	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansParam1, *uParam0))
	{
		func_571(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_481(var uParam0) // Position - 0xE3C4 Hash - 0xBB45F689 ^0x72E400CF
{
	if (func_570(uParam0->f_2, 2))
		return true;

	if (!func_570(uParam0->f_2, 1))
		func_365(uParam0);

	if (PROPSET::_HAS_PROP_SET_LOADED(*uParam0))
	{
		func_571(&(uParam0->f_2), 2);
		return true;
	}

	return false;
}

BOOL func_482(var uParam0) // Position - 0xE407 Hash - 0xBB45F689 ^0x4D63B708
{
	if (func_570(uParam0->f_3, 2))
		return true;

	if (!func_570(uParam0->f_3, 1))
		func_367(uParam0);

	if (WEAPON::_HAS_WEAPON_ASSET_LOADED(*uParam0))
	{
		func_571(&(uParam0->f_3), 2);
		return true;
	}

	return false;
}

BOOL func_483(var uParam0) // Position - 0xE44A Hash - 0xBB45F689 ^0x9398190A
{
	if (func_570(uParam0->f_1, 2))
		return true;

	if (!func_570(uParam0->f_1, 1))
		func_369(uParam0);

	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		func_571(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_484(var uParam0) // Position - 0xE48D Hash - 0xBB45F689 ^0xBECABA13
{
	if (func_570(uParam0->f_1, 2))
		return true;

	if (!func_570(uParam0->f_1, 1))
		func_371(uParam0);

	if (STREAMING::IS_IPL_ACTIVE_HASH(*uParam0))
	{
		func_571(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_485(var uParam0) // Position - 0xE4D0 Hash - 0xE08F88B3 ^0x1237832E
{
	if (func_570(uParam0->f_2, 2))
		return true;

	if (!func_570(uParam0->f_2, 1))
		func_373(uParam0);

	if (AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2))
	{
		func_571(&(uParam0->f_2), 2);
		return true;
	}

	return false;
}

BOOL func_486(var uParam0) // Position - 0xE51A Hash - 0xBB45F689 ^0xF403CE54
{
	if (func_570(uParam0->f_1, 2))
		return true;

	if (!func_570(uParam0->f_1, 1))
		func_375(uParam0);

	if (STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(*uParam0))
	{
		func_571(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

int func_487(int iParam0) // Position - 0xE55D Hash - 0x297139D9 ^0x297139D9
{
	if (!func_81(iParam0))
		return 1;

	switch (iParam0)
	{
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
	
		case 1:
		case 5:
		case 13:
			return 2;
	
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
	
		case 4:
		case 15:
		case 18:
			return 5;
	
		case 6:
			return 4;
	
		case 10:
			return 21;
	
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
	
		case 14:
			return 1;
	
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
	
		case 20:
			return 8;
	
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
	
		case 25:
			return 8;
	
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
	
		case 34:
			return 23;
	
		case 35:
			return 19;
	
		case 60:
		case 77:
			return 13;
	
		case 65:
			return 14;
	
		case 70:
			return 4;
	
		case 71:
			return 13;
	
		default:
			return 1;
	}

	return -1;
}

BOOL func_488(var uParam0, Entity eParam1) // Position - 0xE791 Hash - 0x9ADF6CEA ^0xA4B4891F
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
		return false;

	return ITEMSET::IS_IN_ITEMSET(eParam1, uParam0->f_5);
}

Ped func_489(eStackSize essParam0) // Position - 0xE7C1 Hash - 0xFBADD85B ^0xFBADD85B
{
	if (func_114(essParam0))
		return Global_1360165[essParam0 /*1157*/];

	return 0;
}

BOOL func_490(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xE7DF Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_460(essParam0))
			return false;

	func_640(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_491(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xE81A Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_460(essParam0))
			return;

	func_640(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

Ped func_492(eStackSize essParam0, BOOL bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24) // Position - 0xE854 Hash - 0x79A2D2D9 ^0x5019CC83
{
	var unk;
	BOOL flag;
	int num;
	int i;

	if (!func_114(essParam0))
		return 0;

	unk = uParam3;
	unk.f_1 = uParam4;
	unk.f_2 = uParam5;

	if (Global_1572864.f_13 || Global_1572864.f_14 || Global_1572864.f_8 != 0 || Global_1391438.f_5 & 8 != 0)
		flag = true;

	switch (Global_1360165[essParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_490(essParam0, 2, true))
				func_560(essParam0, 2, true);
		
			if (func_262(essParam0, 16, true))
			{
				if (Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_491(essParam0, 29, true);
						return 0;
					}
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[essParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_348(essParam0, false, false, true, -1082130432, true, true, false, false, false, false);
					}
				
					return 0;
				}
				else if (func_152(Global_1360165[essParam0 /*1157*/], 0))
				{
					return Global_1360165[essParam0 /*1157*/];
				}
			}
		
			if (func_152(Global_1360165[essParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[essParam0 /*1157*/]))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(Global_1360165[essParam0 /*1157*/]))
					if (bParam1)
						func_641(essParam0, true, "Stealing, but companion is a ragdoll");
					else
						return 0;
			
				func_491(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_642(essParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_491(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_642(essParam0, 1);
			}
			else
			{
				return 0;
			}
		
			[[fallthrough]];
	
		case 1:
			if (flag)
				if (iParam13 == 0)
					iParam13 = Global_40.f_4942[essParam0 /*60*/].f_4;
		
			if (!func_490(essParam0, 44, false))
				func_491(essParam0, 44, false);
		
			if (func_643(essParam0, unk, iParam13, false, true, bParam17, bParam20, -1, 1, false))
				func_642(essParam0, 2);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 171, true);
		
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
		
			func_560(essParam0, 18, true);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[essParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[essParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 130, false);
			func_563(essParam0, bParam9, true, false);
		
			if (bParam22)
				func_495(essParam0, false, false, true);
		
			func_560(essParam0, 33, true);
			func_560(essParam0, 34, true);
			func_560(essParam0, 29, true);
		
			if (!_IS_NULL_VECTOR(unk) && bParam7)
				func_642(essParam0, 3);
			else if (iParam13 != 0)
				func_642(essParam0, 4);
			else
				func_642(essParam0, 5);
			break;
	
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[essParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[essParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[essParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[essParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[essParam0 /*1157*/]))
					{
						func_641(essParam0, true, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
					}
				}
			
				num = 2;
			
				if (bParam10)
					num = num | 4;
			
				func_424(Global_1360165[essParam0 /*1157*/], unk, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[essParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[essParam0 /*1157*/], true))
					TASK::CLEAR_PED_TASKS(Global_1360165[essParam0 /*1157*/], true, false);
			
				return 0;
			}
		
			if (iParam13 != 0)
				func_642(essParam0, 4);
			else
				func_642(essParam0, 5);
			break;
	
		case 4:
			if (iParam13 != 0 || flag)
			{
				if (flag)
					if (iParam13 == 0)
						iParam13 = Global_40.f_4942[essParam0 /*60*/].f_4;
			
				if (func_644(essParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
					{
						func_645(essParam0, iParam13, false);
						func_646(essParam0, Global_1360165[essParam0 /*1157*/], iParam13, true);
					
						if (func_490(essParam0, 25, false))
							func_560(essParam0, 25, false);
					
						func_491(essParam0, 66, false);
						func_642(essParam0, 5);
						Global_1360165[essParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_642(essParam0, 5);
				}
			
				func_491(essParam0, 28, true);
			}
			else
			{
				func_642(essParam0, 5);
			}
			break;
	
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
				func_642(essParam0, 6);
			break;
	
		case 6:
			if (func_152(Global_1360165[essParam0 /*1157*/], 0))
			{
				if (bParam24)
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], true);
			
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[essParam0 /*1157*/], -1))
					{
						for (i = 0; i < 10; i = i + 1)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[essParam0 /*1157*/], i);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[essParam0 /*1157*/], i, "ALL");
						}
					
						PED::_SET_PED_DIRT_CLEANED(Global_1360165[essParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[essParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
			
				if (bParam19)
					func_647(essParam0);
			
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[essParam0 /*1157*/]);
					func_648(Global_1360165[essParam0 /*1157*/], 1);
				}
			}
		
			func_642(essParam0, 7);
			[[fallthrough]];
	
		case 7:
			func_563(essParam0, bParam9, bParam15, false);
			func_557(essParam0, 4, bParam11);
			func_559(essParam0);
		
			if (bParam20)
				func_649(Global_1360165[essParam0 /*1157*/]);
		
			func_650(essParam0, Global_1360165[essParam0 /*1157*/]);
		
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true))
				PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true);
		
			Global_40.f_4942[essParam0 /*60*/].f_4 = Global_40.f_4942[essParam0 /*60*/].f_3;
			func_642(essParam0, 0);
			func_651(essParam0, 16, true);
			func_560(essParam0, 44, true);
			Global_1360165[essParam0 /*1157*/].f_1156 = 0;
			Global_1360165[essParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[essParam0 /*1157*/];
	}

	return 0;
}

void func_493(var uParam0, Entity eParam1) // Position - 0xEEC4 Hash - 0x47841D83 ^0x16951740
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_7))
		return;

	if (ENTITY::IS_ENTITY_A_PED(eParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam1) == Global_35)
		return;

	if (!ITEMSET::IS_IN_ITEMSET(eParam1, uParam0->f_7))
		ITEMSET::ADD_TO_ITEMSET(eParam1, uParam0->f_7);

	return;
}

void func_494(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEF1C Hash - 0xD36E5344 ^0xE44BBDDC
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	if (bParam2 && !func_163() || !ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Global_43800, func_212(pedParam0)))
	{
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			PED::_REMOVE_PED_FROM_MOUNT(pedParam0, true, false);
	
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0, false, true);
	
		if (!Global_1935630.f_12)
			if (bParam1)
				ENTITY::FREEZE_ENTITY_POSITION(pedParam0, true);
	
		PED::FORCE_PED_MOTION_STATE(pedParam0, joaat("MotionState_Idle"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(pedParam0, false, 0, false);
	}

	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, joaat("rel_gang_dutchs"));
	ENTITY::SET_ENTITY_HEALTH(pedParam0, ENTITY::GET_ENTITY_MAX_HEALTH(pedParam0, false), 0);

	if (bParam3)
		func_649(pedParam0);

	return;
}

void func_495(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEFD1 Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_114(essParam0))
		return;

	if (bParam1)
		func_652(essParam0, bParam3);
	else
		func_653(essParam0, bParam3);

	if (bParam2)
		func_654(essParam0, bParam3);
	else
		func_655(essParam0, bParam3);

	return;
}

void func_496(eStackSize essParam0) // Position - 0xF016 Hash - 0xA9477085 ^0x50DAE8B3
{
	Ped ped;

	if (!func_114(essParam0))
		return;

	ped = func_255(essParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	PED::_SET_PED_DRUNKNESS(ped, false, 0f);
	return;
}

char* func_497(Object obParam0) // Position - 0xF048 Hash - 0xC6FA1349 ^0xDDD2F160
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return "";

	entityModel = ENTITY::GET_ENTITY_MODEL(obParam0);
	return func_656(entityModel);
}

char* func_498(Vehicle veParam0) // Position - 0xF06F Hash - 0x44171E98 ^0x456A2891
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

void func_499(var uParam0) // Position - 0xF19C Hash - 0xA464A779 ^0x65ED5EF
{
	int i;
	var src;

	src.f_10 = joaat("WEAPON_UNARMED");

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[i /*13*/].f_9) && ENTITY::IS_ENTITY_DEAD(uParam0->f_3[i /*13*/].f_2))
			MISC::COPY_SCRIPT_STRUCT(&uParam0->f_3[i /*13*/], &src, 13);
	}

	return;
}

int func_500(var uParam0, Object obParam1) // Position - 0xF1FB Hash - 0x197FCA3B ^0x71B5D82B
{
	int i;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2) && uParam0->f_3[i /*13*/].f_2 == obParam1)
			return i;
	}

	return -1;
}

int func_501(var uParam0, char* sParam1) // Position - 0xF241 Hash - 0x1E7A04C0 ^0xECFDB53A
{
	int i;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[i /*13*/].f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && MISC::ARE_STRINGS_EQUAL(uParam0->f_3[i /*13*/].f_9, sParam1))
			return i;
	}

	return -1;
}

int func_502(var uParam0) // Position - 0xF297 Hash - 0x75A484F1 ^0xC0750852
{
	int i;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2))
			return i;
	}

	return -1;
}

Vector3 func_503(float fParam0, var uParam1, var uParam2) // Position - 0xF2CC Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

BOOL func_504(int iParam0, int iParam1) // Position - 0xF30B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_505(int iParam0) // Position - 0xF31A Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_177(iParam0))
		return -1;

	return func_635(iParam0);
}

Hash func_506(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF336 Hash - 0xEC5804B5 ^0x15A1D925
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

BOOL func_507(Hash hParam0) // Position - 0xF3DA Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_657(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_508(Hash hParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF3F5 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_507(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam1, bParam3);
	}

	return;
}

void func_509(Hash hParam0, BOOL bParam1) // Position - 0xF42D Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_507(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_510(Hash hParam0, BOOL bParam1) // Position - 0xF45B Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_507(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_511(Hash hParam0, BOOL bParam1) // Position - 0xF489 Hash - 0x4844A91D ^0x50E23246
{
	if (func_507(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_512() // Position - 0xF4B7 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

struct<4> func_513() // Position - 0xF4C0 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_514() // Position - 0xF4CC Hash - 0x68FFA9E8 ^0x1B04A5AD
{
	if (func_254() == -1 && func_74(0, false, true))
		return Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0;

	return false;
}

int func_515(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF50A Hash - 0xC9655EC3 ^0x88C9AFE1
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

char* func_516(int iParam0) // Position - 0xF5A8 Hash - 0xE6862179 ^0xE6959ACD
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
	
		case 1:
			return "mech_inventory@clothing@mask";
	
		case 2:
			return "mech_inventory@clothing@mask";
	
		case 3:
			return "mech_inventory@clothing@mask";
	
		case 4:
			return "mech_inventory@clothing@mask";
	
		case 5:
			return "mech_inventory@clothing@mask";
	}

	return "";
}

void func_517(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF61C Hash - 0x87AE3855 ^0x8F9717D1
{
	Vector3 vector;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		if (!bParam1)
			func_658(uParam0);
		else if (bParam2)
			func_659(uParam0);
		else
			func_660(uParam0, uParam0->f_1898);
	}
	else
	{
		if (!func_63(uParam0, 1048576) && bParam1)
			func_660(uParam0, uParam0->f_1898);
		else if (!func_63(uParam0, 2097152) && bParam2)
			func_659(uParam0);
		else if (func_63(uParam0, 1048576) && !bParam1 || func_63(uParam0, 2097152) && !bParam2)
			func_658(uParam0);
	
		if (bParam1)
		{
			vector = { uParam0->f_1882 * F2V(func_661(uParam0->f_1898)) };
		
			if (!func_534(vector, VOLUME::GET_VOLUME_SCALE(uParam0->f_1875), 1056964608, true) && !_IS_NULL_VECTOR(vector))
				VOLUME::SET_VOLUME_SCALE(uParam0->f_1875, vector);
		}
	}

	return;
}

void func_518(var uParam0) // Position - 0xF722 Hash - 0x17D766C4 ^0x20455F02
{
	int i;
	Ped ped;
	Ped pedInDraftHarness;

	if (uParam0->f_1688 < 0)
		return;

	if (uParam0->f_1899 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_1901))
	{
		for (i = 0; i < 6; i = i + 1)
		{
			pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(uParam0->f_1901, i);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
				if (!ENTITY::DOES_ENTITY_EXIST(ped) || func_194(pedInDraftHarness, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < func_194(ped, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true))
					ped = pedInDraftHarness;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(ped))
			return;
	
		if (!func_63(uParam0, 8192))
			if (func_194(ped, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
				if (VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 5f)
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 5f);
			else if (!func_662(512) || func_663(2) && VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 50f)
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
	}

	return;
}

void func_519(var uParam0, BOOL bParam1) // Position - 0xF874 Hash - 0xAEC80ACE ^0xD5108EEE
{
	Entity firstEntityPedIsCarrying;
	BOOL flag;
	int i;
	BOOL flag2;
	int num;

	for (i = 0; i < 2; i = i + 1)
	{
		if (uParam0->f_1633[i /*15*/].f_11 && VOLUME::DOES_VOLUME_EXIST(uParam0->f_1633[i /*15*/].f_12))
		{
			if (!flag)
			{
				firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				flag = true;
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1898) && !uParam0->f_1633[i /*15*/].f_13)
			{
				PED::_ADD_PED_STAY_OUT_VOLUME(uParam0->f_1898, uParam0->f_1633[i /*15*/].f_12);
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_1898, 1);
				uParam0->f_1633[i /*15*/].f_13 = 1;
			}
		
			if (!bParam1)
			{
				if (uParam0->f_1687 != 0 || func_63(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				
					if (HUD::IS_RADAR_HIDDEN())
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				
					uParam0->f_1687 = 0;
					func_303(uParam0, 33554432);
				}
			
				flag2 = func_504(uParam0->f_1633[i /*15*/].f_10, 131072);
			
				if (func_155(Global_35, uParam0->f_1633[i /*15*/].f_12, 0, true))
				{
					if (uParam0->f_1688 >= 0)
					{
						func_321(uParam0, uParam0->f_1633[i /*15*/].f_10, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216);
						PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
					}
				
					if (flag2)
						func_664();
				
					func_665(uParam0, i, firstEntityPedIsCarrying, flag2);
				}
				else if (func_666(&uParam0->f_1633[i /*15*/]) != 0)
				{
					func_665(uParam0, i, firstEntityPedIsCarrying, flag2);
				}
			}
			else if (func_504(uParam0->f_1633[i /*15*/].f_10, 4))
			{
				if (uParam0->f_1688 >= 0)
				{
					if (func_194(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) > uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 && func_155(uParam0->f_1898, uParam0->f_1633[i /*15*/].f_12, 0, true) || uParam0->f_1687 != 0 || func_63(uParam0, 33554432))
					{
						num = 5152;
					
						if (func_253(Global_35, &(uParam0->f_1687), num, 0, 0, 1084227584, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1687 = 0;
							func_303(uParam0, 33554432);
						}
						else
						{
							func_324(uParam0, 33554432);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_520(var uParam0) // Position - 0xFAC4 Hash - 0x40B1DAD9 ^0xF3CFBA4F
{
	if (uParam0->f_1688 < 0)
		return false;

	if (func_63(uParam0, 33554432))
		return false;

	if (func_305(&uParam0->f_1016[uParam0->f_1688 /*41*/], 2) && uParam0->f_1897)
		return false;

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875) && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1876))
		return true;

	if (func_63(uParam0, 65536))
		return true;

	return false;
}

float func_521(var uParam0, int iParam1) // Position - 0xFB44 Hash - 0x32CD4B9C ^0x7B337939
{
	var unk;
	Vector3 vector;
	var unk6;
	var unk9;
	float distanceBetweenCoords;
	float distanceBetweenCoords2;
	float num;
	float num2;
	float distanceBetweenCoords3;

	distanceBetweenCoords3 = 10000f;

	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true);
			distanceBetweenCoords2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_4, true);
			unk = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
		
			if (func_667(&vector, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_4, unk, Global_36))
				distanceBetweenCoords3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, Global_36, true);
		
			if (distanceBetweenCoords < distanceBetweenCoords2 && distanceBetweenCoords < distanceBetweenCoords3)
				return distanceBetweenCoords;
			else if (distanceBetweenCoords2 < distanceBetweenCoords3)
				return distanceBetweenCoords2;
			else
				return distanceBetweenCoords3;
			break;
	
		case 1:
			if (Global_36.f_2 >= uParam0->f_1016[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= uParam0->f_1016[iParam1 /*41*/].f_1.f_2 + uParam0->f_1016[iParam1 /*41*/].f_10)
			{
				func_668(uParam0, iParam1, &unk6, unk9, &distanceBetweenCoords, &distanceBetweenCoords2, &num, &num2);
			
				if (num < num2)
				{
					distanceBetweenCoords3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true) - uParam0->f_1016[iParam1 /*41*/].f_11;
					distanceBetweenCoords3 < 0f;
				}
			
				if (distanceBetweenCoords < distanceBetweenCoords2 && distanceBetweenCoords < distanceBetweenCoords3)
					return distanceBetweenCoords;
				else if (distanceBetweenCoords2 < distanceBetweenCoords3)
					return distanceBetweenCoords2;
				else
					return distanceBetweenCoords3;
			}
			break;
	}

	return 10000f;
}

void func_522(var uParam0) // Position - 0xFCE8 Hash - 0xECA377F5 ^0xCD78B682
{
	int i;

	func_669(uParam0);

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0->f_1016[i /*41*/].f_29)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[i /*41*/].f_22)) && func_670(uParam0, i) && !func_463(&uParam0->f_1016[i /*41*/], 1))
			{
				if (!func_671(uParam0, &(uParam0->f_1016[i /*41*/].f_22)))
					func_672(&(uParam0->f_1771), uParam0->f_1016[i /*41*/].f_22, false, -1, true, false);
			
				func_673(&uParam0->f_1016[i /*41*/], 1);
			}
		}
	}

	return;
}

void func_523(int iParam0) // Position - 0xFD89 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

void func_524(var uParam0, int iParam1) // Position - 0xFDA2 Hash - 0xE99A472E ^0xE99A472E
{
	*uParam0 = 0;

	if (!func_530(iParam1, 8))
		if (func_530(iParam1, 1))
			*uParam0 = 1;
		else if (func_530(iParam1, 4))
			*uParam0 = 4;
		else if (func_530(iParam1, 2))
			*uParam0 = 2;

	return;
}

void func_525(char* sParam0, int iParam1, int iParam2, int iParam3) // Position - 0xFDEA Hash - 0xF379C9A0 ^0xF379C9A0
{
	func_531(sParam0, iParam2);
	func_674(iParam1, iParam3);
	return;
}

void func_526() // Position - 0xFE02 Hash - 0x88D1B502 ^0x73E48908
{
	if (MISC::IS_BIT_SET(Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(&Global_1357510, 0);
	}

	return;
}

void func_527(var uParam0, int iParam1) // Position - 0xFE22 Hash - 0x537D9C68 ^0x537D9C68
{
	uParam0->f_1665 = uParam0->f_1665 || iParam1;
	return;
}

const char* func_528(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xFE37 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_529() // Position - 0xFE4B Hash - 0x306ACA3A ^0x7AF0326A
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

BOOL func_530(int iParam0, int iParam1) // Position - 0xFE57 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_531(char* sParam0, int iParam1) // Position - 0xFE66 Hash - 0x483685B7 ^0x177E9A26
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			TEXT_LABEL_ASSIGN_STRING(sParam0, "default_leadin_camera", 64);
		
			if (func_675(iParam1, 1))
				TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			else if (func_675(iParam1, 2))
				TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			else if (func_675(iParam1, 4))
				TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
		
			CAM::_LOAD_CAMERA_DATA_DICT(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_IS_CAM_DATA_DICT_LOADED(sParam0) && !CAM::_IS_CAMERA_AVAILABLE(sParam0))
		{
			CAM::_CAM_CREATE(sParam0);
		}
	}

	return;
}

float func_532(Ped pedParam0, Entity eParam1, int iParam2) // Position - 0xFEEF Hash - 0x1516E186 ^0x4796BFA2
{
	var entityCoords;
	var entityCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(eParam1, false, false) };
	return func_425(entityCoords, entityCoords2, iParam2);
}

void func_533(int iParam0, int iParam1) // Position - 0xFF1D Hash - 0x2D5EA878 ^0x4B3C84DD
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(iParam1, 1065353216);
	return;
}

BOOL func_534(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0xFF3B Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

void func_535(var uParam0, int iParam1) // Position - 0xFF90 Hash - 0xB94A85A8 ^0xB94A85A8
{
	uParam0->f_1665 = uParam0->f_1665 - uParam0->f_1665 && iParam1;
	return;
}

BOOL func_536(var uParam0, var uParam1) // Position - 0xFFAB Hash - 0xC60794FE ^0xC60794FE
{
	float num;
	float num2;
	var unk5;
	int num3;

	if (func_63(uParam0, 4))
		return false;

	num = { 0f, 0f, 0f };

	if (uParam0->f_1688 < 0 || uParam0->f_1688 >= 8)
		return false;

	if (!uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
		return false;

	if (!func_63(uParam0, 4096) && uParam0->f_1896)
		return false;

	if (Global_1430231.f_4)
		return false;

	if (uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
	{
		if (uParam0->f_1016[uParam0->f_1688 /*41*/] == 0)
		{
			num2 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_4 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 };
			unk5 = { 0f, 0f, 0f };
			unk5 = num2.f_1;
			unk5.f_1 = num2 * -1f;
		
			if (func_667(&num, uParam0->f_1765, Global_36, unk5, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1))
			{
				num3 = 1;
			
				if (num > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1)
					if (num > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
						num3 = 0;
				else if (num < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
					num3 = 0;
			
				if (num3 == 1)
					if (num.f_1 > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_1)
						if (num.f_1 > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
							num3 = 0;
					else if (num.f_1 < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
						num3 = 0;
			
				if (num3 == 1)
					if (num.f_2 < uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 - 0.1f || num.f_2 > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10 || func_305(&uParam0->f_1016[uParam0->f_1688 /*41*/], 2) && uParam0->f_1897 || uParam0->f_1899)
						num3 = 0;
			
				if (num3 == 1)
				{
					*uParam1 = uParam0->f_1688;
					return true;
				}
			}
		}
		else if (func_63(uParam0, 8))
		{
			*uParam1 = uParam0->f_1684;
			return true;
		}
	}

	return false;
}

void func_537(var uParam0, int iParam1) // Position - 0x101F2 Hash - 0xD3E61FFE ^0xFAF29D46
{
	if (iParam1 >= 0)
	{
		uParam0->f_1016[iParam1 /*41*/].f_28 = 1;
		uParam0->f_1684 = iParam1;
		uParam0->f_1688 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1769 = 1;
	}

	return;
}

void func_538(var uParam0, int iParam1, int iParam2) // Position - 0x10225 Hash - 0x8C643353 ^0x26BA9222
{
	int i;
	float animScenePhase;

	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 4:
			func_541(uParam0, iParam1, false, false);
			break;
	
		case 9:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8);
			
				for (i = 0; i < 35; i = i + 1)
				{
					if (uParam0->f_3[i /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[i /*13*/].f_2) && uParam0->f_3[i /*13*/].f_8 > 0f && animScenePhase >= uParam0->f_3[i /*13*/].f_8 && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[i /*13*/].f_2))
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[i /*13*/].f_2, true);
				}
			
				if (func_553(&uParam0->f_475[iParam1 /*18*/], 4) && uParam0->f_475[iParam1 /*18*/].f_12 < 1f && animScenePhase >= uParam0->f_475[iParam1 /*18*/].f_12 && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
			
				if (func_553(&uParam0->f_475[iParam1 /*18*/], 64) && func_676(uParam0, iParam1, false))
					func_677(uParam0, uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
			}
			break;
	
		case 10:
			if (uParam0->f_475[iParam1 /*18*/].f_3 >= 0 && uParam0->f_475[iParam1 /*18*/].f_5 >= 0 && uParam0->f_475[iParam1 /*18*/].f_3 != uParam0->f_475[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2)))
						func_678(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
				
					if (func_553(&uParam0->f_475[iParam1 /*18*/], 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2)))
						func_678(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
				}
			}
			break;
	}

	return;
}

BOOL func_539(var uParam0, int iParam1) // Position - 0x1055D Hash - 0x410F5B0E ^0xC3246AF5
{
	if (uParam0->f_475[iParam1 /*18*/].f_1 > uParam0->f_1683)
		return 0;

	!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2);

	if (uParam0->f_1683 < 0 || uParam0->f_1683 > 6)
		return 0;

	if (uParam0->f_475[iParam1 /*18*/].f_1 == 0)
		return 1;

	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && _STOPWATCH_IS_INITIALIZED_0(uParam0) == 9)
		return 1;

	if (!func_63(uParam0, 4096) && uParam0->f_1896)
		return 0;

	if (Global_1430231.f_4)
		return 0;

	if (uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
		return 0;

	if (_STOPWATCH_IS_INITIALIZED_0(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
		return 0;

	if (_STOPWATCH_IS_INITIALIZED_0(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/].f_17 == 1 && func_320(uParam0) != 11 && func_319(uParam0, uParam0->f_1684) && uParam0->f_475[iParam1 /*18*/].f_2 != 4)
		return 0;

	if (uParam0->f_475[iParam1 /*18*/].f_2 == 9 && uParam0->f_475[iParam1 /*18*/].f_4 >= 0 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8))
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
			return 0;
		else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, func_212(Global_35)))
			if (func_343(&uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/], 4))
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
					return 0;
			else if (func_343(&uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/], 8))
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
					return 0;

	return 1;
}

void func_540(var uParam0, int iParam1, int iParam2) // Position - 0x10778 Hash - 0x4D6EAA0A ^0x8E3394B2
{
	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 4:
			func_541(uParam0, iParam1, false, false);
			break;
	
		case 5:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (func_48(&(uParam0->f_1872)) >= (float)uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_25 / 1000)
				{
					func_669(uParam0);
				
					if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
						func_672(&(uParam0->f_1771), uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22, false, -1, false, false);
					else
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22));
				
					uParam0->f_475[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			break;
	
		case 9:
			func_679(uParam0, iParam2, iParam1);
			break;
	
		case 10:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
	
		case 11:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}

	return;
}

int func_541(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x108E9 Hash - 0x2E486115 ^0x9E8CE588
{
	BOOL flag;
	int num;
	int num2;
	int num3;
	int num4;
	var unk;

	num2 = uParam0->f_1688;

	if (iParam1 >= 0)
	{
		num2 = uParam0->f_475[iParam1 /*18*/];
		num3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;
		num4 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);

	switch (func_320(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_680(uParam0, num2))
					uParam0->f_1685 = iParam1;
			
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
		
			if (!func_305(&uParam0->f_1016[num2 /*41*/], 32) && func_681() && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459)) || !func_305(&uParam0->f_1016[num2 /*41*/], 128) && uParam0->f_1899)
			{
				if (uParam0->f_1899)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 0.1f, -1, false);
				
					if (!func_63(uParam0, 8192))
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 0f);
				
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1901, 24, 1000);
					func_550(uParam0, 8);
				}
				else
				{
					func_324(uParam0, 131072);
					func_550(uParam0, 11);
				}
			}
			else if (uParam0->f_1897)
			{
				func_550(uParam0, 5);
			}
			else
			{
				func_682(uParam0);
			}
			break;
	
		case 1:
			flag = func_21(&(uParam0->f_1869)) >= 3f;
		
			if (!func_453(Global_35, SCRIPT_TASK_SWAP_WEAPON) && !func_453(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE) && func_21(&(uParam0->f_1869)) >= 2.5f || !func_427(func_426(Global_35, 0, true, false)) && !func_427(func_426(Global_35, 1, true, false)) || flag)
			{
				func_682(uParam0);
				flag;
			}
			break;
	
		case 3:
			if (!func_305(&uParam0->f_1016[num2 /*41*/], 256))
				if (func_407(&(uParam0->f_1903)))
					func_684(uParam0->f_1903, false);
		
			func_26(&(uParam0->f_1869));
			func_550(uParam0, 4);
			break;
	
		case 4:
			flag = func_21(&(uParam0->f_1869)) >= 2f;
		
			if (func_305(&uParam0->f_1016[num2 /*41*/], 256) || !func_407(&unk) || flag)
			{
				if (func_685())
				{
					func_686();
					func_550(uParam0, 10);
				}
				else
				{
					func_550(uParam0, 11);
				}
			
				flag;
			}
			break;
	
		case 5:
		case 6:
			flag = func_21(&(uParam0->f_1869)) >= 3.5f;
			num = 5664;
		
			if (func_305(&uParam0->f_1016[uParam0->f_1688 /*41*/], 512))
				num = num | 128;
		
			if (!func_319(uParam0, uParam0->f_1688))
				num = num | 2048;
		
			if (func_253(Global_35, &(uParam0->f_1686), num, 0, 0, 1084227584, 100, num3, num4))
				func_682(uParam0);
		
			if (!uParam0->f_1897 && !uParam0->f_1899 || flag)
			{
				uParam0->f_1686 = 0;
			
				if (func_320(uParam0) == 5 || iParam1 < 0)
				{
					func_682(uParam0);
				}
				else
				{
					func_683(uParam0, iParam1, bParam2);
					func_26(&(uParam0->f_1869));
					func_550(uParam0, 7);
				}
			
				flag;
			}
			break;
	
		case 7:
			flag = func_21(&(uParam0->f_1869)) >= 1f;
		
			if (func_311(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE) || flag)
			{
				func_550(uParam0, 3);
				flag;
			}
			break;
	
		case 8:
			flag = func_21(&(uParam0->f_1869)) >= 2f;
			num = 5664;
		
			if (func_305(&uParam0->f_1016[uParam0->f_1688 /*41*/], 512))
				num = num | 128;
		
			if (!func_319(uParam0, uParam0->f_1688))
				num = num | 2048;
		
			if (func_253(Global_35, &(uParam0->f_1686), num, 0, 0, 1084227584, 100, num3, num4) || flag)
			{
				uParam0->f_1686 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1901, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_550(uParam0, 9);
				flag;
			}
			break;
	
		case 9:
			if (func_21(&(uParam0->f_1869)) >= 0.75f)
			{
				if (!func_63(uParam0, 8192))
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			
				VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(uParam0->f_1901);
				func_324(uParam0, 131072);
				func_550(uParam0, 11);
			}
			break;
	
		case 10:
			flag = func_21(&(uParam0->f_1869)) >= 2f;
		
			if (func_685() || flag)
			{
				func_550(uParam0, 11);
				flag;
			}
			break;
	
		case 11:
			break;
	}

	return 0;
}

void func_542(const char* sParam0) // Position - 0x10DAB Hash - 0xC18B77C2 ^0x354EE33B
{
	if (sParam0->f_16)
	{
		CAM::_CAM_DESTROY(sParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_IS_CAM_DATA_DICT_LOADED(sParam0))
			CAM::_UNLOAD_CAMERA_DATA_DICT(sParam0);
	
		sParam0->f_16 = 0;
		TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_8), "", 64);
	}

	return;
}

void func_543(var uParam0, int iParam1) // Position - 0x10DF2 Hash - 0xC988EF2 ^0xEEB0F4F5
{
	uParam0->f_1666.f_1 = uParam0->f_1666.f_1 - uParam0->f_1666.f_1 && iParam1;
	return;
}

BOOL func_544(var uParam0, const char* sParam1, int iParam2) // Position - 0x10E13 Hash - 0x7378698E ^0xF7CF98FA
{
	BOOL flag;
	BOOL flag2;
	var unk;
	BOOL flag3;
	int num;
	int num2;
	int i;
	BOOL flag4;
	var unk14;
	int value;
	var unk22;
	int num3;
	int num4;

	flag = DATAFILE::PARSEDDATA_IS_FILE_VALID(uParam0->f_1889);

	if (!flag)
		uParam0->f_1889 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(MISC::GET_HASH_KEY(sParam1));

	flag2 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(uParam0->f_1889);

	if (!flag2)
		return false;

	func_687(uParam0);
	func_474(uParam0, iParam2);

	if (func_63(uParam0, 16384))
		func_688(uParam0);

	unk.f_10 = joaat("WEAPON_UNARMED");

	for (i = 0; i < 8; i = i + 1)
	{
		num = -1;
		func_689(uParam0, i);
	
		if (func_690(uParam0, 0))
		{
			if (func_691(uParam0, 43, &num))
			{
				if (num >= 0)
				{
					uParam0->f_1016[num /*41*/].f_27 = 0;
					func_692(uParam0, 1, &(uParam0->f_1016[num /*41*/].f_1));
					func_692(uParam0, 2, &(uParam0->f_1016[num /*41*/].f_1.f_1));
					func_692(uParam0, 3, &(uParam0->f_1016[num /*41*/].f_1.f_2));
					func_692(uParam0, 4, &(uParam0->f_1016[num /*41*/].f_11));
					func_692(uParam0, 5, &(uParam0->f_1016[num /*41*/].f_12));
					func_692(uParam0, 6, &(uParam0->f_1016[num /*41*/].f_13));
					func_692(uParam0, 7, &(uParam0->f_1016[num /*41*/].f_4));
					func_692(uParam0, 8, &(uParam0->f_1016[num /*41*/].f_4.f_1));
					func_692(uParam0, 9, &(uParam0->f_1016[num /*41*/].f_4.f_2));
					func_692(uParam0, 10, &(uParam0->f_1016[num /*41*/].f_7));
					func_692(uParam0, 11, &(uParam0->f_1016[num /*41*/].f_7.f_1));
					func_692(uParam0, 12, &(uParam0->f_1016[num /*41*/].f_7.f_2));
					func_692(uParam0, 13, &(uParam0->f_1016[num /*41*/].f_10));
					func_692(uParam0, 14, &(uParam0->f_1016[num /*41*/].f_14));
					func_692(uParam0, 15, &(uParam0->f_1016[num /*41*/].f_15));
				
					if (func_691(uParam0, 16, &num2))
						uParam0->f_1016[num /*41*/] = num2;
				
					func_692(uParam0, 19, &(uParam0->f_1016[num /*41*/].f_16));
					func_692(uParam0, 20, &(uParam0->f_1016[num /*41*/].f_17));
					func_692(uParam0, 31, &(uParam0->f_1016[num /*41*/].f_18));
				
					if (func_693(uParam0, 21, &unk14))
						TEXT_LABEL_COPY(&(uParam0->f_1016[num /*41*/].f_19), { unk14 }, 3);
				
					if (func_693(uParam0, 22, &unk14))
						TEXT_LABEL_COPY(&(uParam0->f_1016[num /*41*/].f_22), { unk14 }, 3);
				
					func_691(uParam0, 23, &(uParam0->f_1016[num /*41*/].f_25));
					func_694(uParam0, &(uParam0->f_1016[num /*41*/].f_27));
					func_693(uParam0, 35, &(uParam0->f_1016[num /*41*/].f_30));
				
					if (func_691(uParam0, 39, &num2))
						uParam0->f_1016[num /*41*/].f_39 = num2;
					else
						uParam0->f_1016[num /*41*/].f_39 = 1;
				
					if (func_692(uParam0, 40, &(uParam0->f_1016[num /*41*/].f_40)))
						func_673(&uParam0->f_1016[num /*41*/], 2);
				
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[num /*41*/].f_30)))
						uParam0->f_1016[num /*41*/].f_30 = { func_388() };
				
					uParam0->f_1016[num /*41*/].f_29 = 1;
				
					if (uParam0->f_1895 == -1 || uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 < uParam0->f_1016[num /*41*/].f_17)
						uParam0->f_1895 = num;
				}
			}
		}
	}

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0->f_1016[i /*41*/].f_29)
		{
			unk22 = { unk22 + uParam0->f_1016[i /*41*/].f_1 };
			value = value + 1;
		}
	}

	unk22 = { unk22 / F2V(BUILTIN::TO_FLOAT(value)) };
	uParam0->f_1900 = 1;

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0->f_1016[i /*41*/].f_29)
		{
			if (!func_695(unk22, uParam0->f_1016[i /*41*/].f_1, 5f, true))
			{
				uParam0->f_1900 = 0;
				break;
			}
		}
	}

	for (i = 0; i < 11; i = i + 1)
	{
		num = -1;
		func_689(uParam0, i);
	
		if (func_690(uParam0, 45))
		{
			if (func_691(uParam0, 47, &num))
			{
				if (num >= 0)
				{
					func_696(&uParam0->f_1522[num /*10*/], 2);
					func_693(uParam0, 46, &uParam0->f_1522[num /*10*/]);
				
					if (func_697(uParam0, 48, &flag4))
						if (flag4)
							func_696(&uParam0->f_1522[num /*10*/], 1);
				
					if (func_691(uParam0, 49, &num2))
						if (num2 == 1)
							func_696(&uParam0->f_1522[num /*10*/], 8);
						else if (num2 == 2)
							func_696(&uParam0->f_1522[num /*10*/], 4);
				}
			}
		}
	}

	for (i = 0; i < 35; i = i + 1)
	{
		num = -1;
		func_689(uParam0, i);
	
		if (func_690(uParam0, 50))
		{
			if (func_691(uParam0, 51, &num2))
				unk.f_1 = num2;
		
			func_691(uParam0, 43, &(unk.f_3));
		
			if (func_693(uParam0, 52, &unk14))
				TEXT_LABEL_COPY(&(unk.f_4), { unk14 }, 4);
		
			func_692(uParam0, 53, &(unk.f_8));
		
			if (func_691(uParam0, 54, &num2))
				unk.f_10 = num2;
		
			func_697(uParam0, 55, &(unk.f_11));
			func_697(uParam0, 56, &(unk.f_12));
			num3 = -1;
		
			if (func_698(uParam0, unk.f_1, &num3))
			{
				if (num3 >= 0 && num3 < 35)
				{
					uParam0->f_3[num3 /*13*/].f_3 = unk.f_3;
					uParam0->f_3[num3 /*13*/].f_4 = { unk.f_4 };
					uParam0->f_3[num3 /*13*/].f_8 = unk.f_8;
					uParam0->f_3[num3 /*13*/].f_10 = unk.f_10;
					uParam0->f_3[num3 /*13*/].f_11 = unk.f_11;
					uParam0->f_3[num3 /*13*/].f_12 = unk.f_12;
					uParam0->f_3[num3 /*13*/] = 1;
				
					if (func_699(unk.f_1))
						func_324(uParam0, 16777216);
				}
			}
		}
	}

	i = 0;
	func_689(uParam0, i);

	if (func_690(uParam0, 82))
	{
		if (func_693(uParam0, 83, &unk14))
			TEXT_LABEL_COPY(&(uParam0->f_459), { unk14 }, 4);
	
		func_693(uParam0, 84, &(uParam0->f_459.f_4));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459.f_4)))
			if (uParam0->f_459.f_15 == 1)
				uParam0->f_459.f_4 = { func_380() };
			else if (uParam0->f_459.f_15 == 2)
				uParam0->f_459.f_4 = { func_388() };
			else
				uParam0->f_459.f_4 = { func_388() };
	}

	num4 = -1;

	for (i = 0; i < 30; i = i + 1)
	{
		num = -1;
		func_689(uParam0, i);
	
		if (func_690(uParam0, 57))
		{
			if (func_691(uParam0, 43, &num))
			{
				if (num >= 0)
				{
					uParam0->f_475[num /*18*/].f_8 = 0;
					func_691(uParam0, 58, &uParam0->f_475[num /*18*/]);
				
					if (func_691(uParam0, 59, &num2))
						uParam0->f_475[num /*18*/].f_1 = func_700(num2);
				
					if (func_691(uParam0, 60, &num2))
						uParam0->f_475[num /*18*/].f_2 = func_701(num2);
				
					func_691(uParam0, 61, &(uParam0->f_475[num /*18*/].f_3));
					func_692(uParam0, 67, &(uParam0->f_475[num /*18*/].f_10));
					func_692(uParam0, 70, &(uParam0->f_475[num /*18*/].f_11));
					func_692(uParam0, 68, &(uParam0->f_475[num /*18*/].f_9));
					func_691(uParam0, 72, &(uParam0->f_475[num /*18*/].f_5));
					func_692(uParam0, 77, &(uParam0->f_475[num /*18*/].f_12));
					func_691(uParam0, 78, &(uParam0->f_475[num /*18*/].f_13));
					func_691(uParam0, 79, &(uParam0->f_475[num /*18*/].f_14));
				
					if (func_691(uParam0, 73, &num2))
						uParam0->f_475[num /*18*/].f_17 = num2;
				
					if (func_691(uParam0, 75, &num2))
					{
						uParam0->f_475[num /*18*/].f_4 = num2;
						flag3 = true;
					}
				
					func_692(uParam0, 80, &(uParam0->f_475[num /*18*/].f_15));
				
					if (func_697(uParam0, 63, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 1;
				
					if (func_697(uParam0, 81, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 512;
				
					if (func_697(uParam0, 64, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 2;
				
					if (func_697(uParam0, 66, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 16;
				
					if (func_697(uParam0, 69, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 32;
				
					if (func_697(uParam0, 65, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 4;
				
					if (func_697(uParam0, 74, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 64;
				
					if (func_697(uParam0, 71, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 128;
				
					if (func_697(uParam0, 76, &flag4))
						if (flag4)
							uParam0->f_475[num /*18*/].f_8 = uParam0->f_475[num /*18*/].f_8 | 256;
				
					if (!flag3 && uParam0->f_475[num /*18*/].f_2 == 9)
					{
						uParam0->f_475[num /*18*/].f_4 = uParam0->f_475[num /*18*/].f_3;
						uParam0->f_475[num /*18*/].f_3 = 0;
					}
				
					if (num4 == -1 || num > num4)
						num4 = num;
				
					uParam0->f_475[num /*18*/].f_16 = uParam0->f_475[num /*18*/].f_2;
					uParam0->f_475[num /*18*/].f_6 = 1;
				}
			}
		}
	}

	if (num4 < 29)
		uParam0->f_1894 = num4 + 1;

	for (i = 0; i < 8; i = i + 1)
	{
		num = -1;
		func_689(uParam0, i);
	
		if (func_690(uParam0, 85))
		{
			func_691(uParam0, 86, &num);
		
			if (num >= 0)
			{
				func_697(uParam0, 87, &uParam0->f_1345[i /*22*/]);
				func_693(uParam0, 96, &(uParam0->f_1345[i /*22*/].f_2));
				func_693(uParam0, 97, &(uParam0->f_1345[i /*22*/].f_10));
				func_692(uParam0, 93, &(uParam0->f_1345[i /*22*/].f_18));
				func_692(uParam0, 94, &(uParam0->f_1345[i /*22*/].f_19));
				func_691(uParam0, 95, &(uParam0->f_1345[i /*22*/].f_20));
				uParam0->f_1345[i /*22*/].f_1 = 0;
				func_702(uParam0, &(uParam0->f_1345[i /*22*/].f_1));
			}
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		num = -1;
		func_689(uParam0, i);
	
		if (func_690(uParam0, 98))
		{
			if (func_691(uParam0, 43, &num))
			{
				if (num >= 0)
				{
					uParam0->f_1633[num /*15*/].f_10 = 0;
					func_703(uParam0, 99, &uParam0->f_1633[num /*15*/]);
					func_703(uParam0, 100, &(uParam0->f_1633[num /*15*/].f_6));
					func_703(uParam0, 101, &(uParam0->f_1633[num /*15*/].f_3));
				
					if (func_691(uParam0, 102, &num2))
						uParam0->f_1633[num /*15*/].f_9 = num2;
				
					func_694(uParam0, &(uParam0->f_1633[num /*15*/].f_10));
					uParam0->f_1633[num /*15*/].f_11 = 1;
				}
			}
		}
	}

	DATAFILE::_PARSEDDATA_UNLOAD_FILE(uParam0->f_1889);
	func_324(uParam0, 1);
	func_324(uParam0, 16384);
	func_704(uParam0);
	return true;
}

BOOL func_545(var uParam0) // Position - 0x119C1 Hash - 0xE2E246FD ^0x717ACDCC
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_1522[i /*10*/]) && func_343(&uParam0->f_1522[i /*10*/], 2) && !func_343(&uParam0->f_1522[i /*10*/], 16) && func_705(uParam0, i))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[i /*10*/].f_8))
			{
				uParam0->f_1522[i /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&uParam0->f_1522[i /*10*/], 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[i /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[i /*10*/].f_8, false))
			{
				return false;
			}
		
			if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[i /*10*/].f_8, "pl_breakout"))
				func_696(&uParam0->f_1522[i /*10*/], 32);
		
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[i /*10*/].f_8);
			func_696(&uParam0->f_1522[i /*10*/], 16);
		}
	}

	return true;
}

void func_546(var uParam0) // Position - 0x11AC6 Hash - 0xDEFFFE22 ^0x89678B74
{
	int i;
	int flags;
	var unk;

	for (i = 0; i < 11; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_1522[i /*10*/]) && func_343(&uParam0->f_1522[i /*10*/], 2))
		{
			flags = 0;
		
			if (func_705(uParam0, i))
				flags = flags | 1;
		
			uParam0->f_1522[i /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&uParam0->f_1522[i /*10*/], flags, 0, false, true);
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, func_465(), 64);
	TEXT_LABEL_ASSIGN_STRING(&(unk.f_8), func_529(), 64);
	uParam0->f_1708 = { unk };
	uParam0->f_1731 = { unk };

	if (!func_304(uParam0, 8))
	{
		CAM::_LOAD_CAMERA_DATA_DICT(func_465());
		func_462(uParam0, 8);
	}

	for (i = 0; i < 8; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[i /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[i /*22*/].f_2), func_465()))
		{
			if (!CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_1345[i /*22*/].f_2)))
			{
				CAM::_LOAD_CAMERA_DATA_DICT(&(uParam0->f_1345[i /*22*/].f_2));
				uParam0->f_1345[i /*22*/].f_21 = 1;
			}
		}
	}

	return;
}

BOOL func_547(var uParam0) // Position - 0x11BF1 Hash - 0x4AF41662 ^0xDF22F701
{
	int i;
	BOOL flag;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 rotation;
	BOOL flag2;

	flag = true;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[i /*10*/].f_8))
		{
			if (!func_343(&uParam0->f_1522[i /*10*/], 64))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[i /*10*/].f_8, false))
				{
					func_706(uParam0, uParam0->f_1522[i /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[i /*10*/].f_8);
					flag = false;
					func_696(&uParam0->f_1522[i /*10*/], 64);
				}
				else
				{
					flag = false;
				}
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[i /*10*/].f_8, true, false))
			{
				flag = false;
			}
		}
	}

	for (i = 0; i < uParam0->f_1016; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[i /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[i /*41*/].f_19), "empty"))
		{
			HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_1016[i /*41*/].f_19));
		
			if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_1016[i /*41*/].f_19)))
				flag = false;
		}
	}

	if (func_304(uParam0, 8) && !CAM::_IS_CAM_DATA_DICT_LOADED(func_465()))
		flag = false;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[i /*22*/].f_2)) && uParam0->f_1345[i /*22*/].f_21 && !CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_1345[i /*22*/].f_2)))
			flag = false;
	}

	if (flag)
	{
		if (!_IS_NULL_VECTOR(uParam0->f_1885) || uParam0->f_1888 != 0f)
			flag2 = true;
	
		for (i = 0; i < 11; i = i + 1)
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[i /*10*/].f_8))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[i /*10*/].f_8, "pl_breakout"))
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1522[i /*10*/].f_8, "pl_breakout");
			
				if (flag2)
				{
					ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[i /*10*/].f_8, &offsetFromCoordAndHeadingInWorldCoords, &rotation, 2);
					offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(offsetFromCoordAndHeadingInWorldCoords, uParam0->f_1888, uParam0->f_1885) };
					rotation.f_2 = rotation.f_2 - uParam0->f_1888;
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[i /*10*/].f_8, offsetFromCoordAndHeadingInWorldCoords, rotation, 2);
				}
			}
		}
	
		return true;
	}

	return false;
}

void func_548(var uParam0) // Position - 0x11E3E Hash - 0x8B348C33 ^0xFC38948B
{
	int i;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[i /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !func_601(uParam0->f_3[i /*13*/].f_2) && func_427(uParam0->f_3[i /*13*/].f_10) && !func_699(uParam0->f_3[i /*13*/].f_1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(pedIndexFromEntityIndex, uParam0->f_3[i /*13*/].f_10, 0, false))
					if (func_707(uParam0->f_3[i /*13*/].f_10))
						uParam0->f_3[i /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(pedIndexFromEntityIndex, uParam0->f_3[i /*13*/].f_10, 100, false, true, 7, false, 1056964608, 1065353216, 752097756, false, 0, false);
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_3[i /*13*/].f_10))
						uParam0->f_3[i /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(pedIndexFromEntityIndex, uParam0->f_3[i /*13*/].f_10, 100, false, true, 9, false, 1056964608, 1065353216, 752097756, false, 0, false);
					else
						uParam0->f_3[i /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(pedIndexFromEntityIndex, uParam0->f_3[i /*13*/].f_10, 100, false, true, 2, true, 1056964608, 1065353216, 752097756, false, 0, false);
			
				if (uParam0->f_3[i /*13*/].f_11)
					if (func_708(pedIndexFromEntityIndex, false, 0, false) != uParam0->f_3[i /*13*/].f_10)
						WEAPON::SET_CURRENT_PED_WEAPON(pedIndexFromEntityIndex, uParam0->f_3[i /*13*/].f_10, true, 0, false, false);
			}
		}
	}

	return;
}

void func_549(var uParam0) // Position - 0x11FE5 Hash - 0x4FE91EE4 ^0xFFAD755A
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[i /*13*/].f_2) && uParam0->f_3[i /*13*/].f_12)
			func_709(&uParam0->f_3[i /*13*/]);
	}

	return;
}

void func_550(var uParam0, int iParam1) // Position - 0x1202D Hash - 0x28F4EA76 ^0x7924DFD0
{
	uParam0->f_2 = iParam1;
	func_26(&(uParam0->f_1869));
	return;
}

void func_551(var uParam0) // Position - 0x12044 Hash - 0x49584173 ^0x49584173
{
	func_710(uParam0);
	func_711(uParam0);
	return;
}

AnimScene func_552(var uParam0) // Position - 0x12058 Hash - 0x4E93C1A2 ^0xE15CCA7
{
	if (uParam0->f_1685 < 0 || uParam0->f_475[uParam0->f_1685 /*18*/].f_4 < 0)
		return -1;

	return uParam0->f_1522[uParam0->f_475[uParam0->f_1685 /*18*/].f_4 /*10*/].f_8;
}

BOOL func_553(var uParam0, int iParam1) // Position - 0x1209B Hash - 0x718DD1EF ^0x5F4D390E
{
	return uParam0->f_8 && iParam1 != false;
}

int func_554(var uParam0, Object obParam1) // Position - 0x120AC Hash - 0x8EA37FF1 ^0x91318814
{
	int num;
	int i;

	num = -1;

	if (!ENTITY::IS_ENTITY_DEAD(obParam1))
	{
		for (i = 0; i < uParam0->f_3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2))
			{
				if (ENTITY::GET_ENTITY_MODEL(obParam1) == ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2))
				{
					num = num + 1;
				
					if (obParam1 == uParam0->f_3[i /*13*/].f_2)
						return num;
				}
			}
		}
	}

	return num;
}

void func_555(var uParam0, Ped pedParam1, const char* sParam2) // Position - 0x1211A Hash - 0x6FCAA044 ^0x92A4A55D
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return;

	if (!func_428(uParam0, pedParam1))
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		sParam2 = func_712(uParam0, pedParam1);

	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, sParam2))
		if (ENTITY::IS_ENTITY_A_PED(pedParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false)) || ENTITY::IS_ENTITY_AN_OBJECT(pedParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)) || ENTITY::IS_ENTITY_A_VEHICLE(pedParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false)))
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, pedParam1);

	return;
}

void func_556(eStackSize essParam0, BOOL bParam1) // Position - 0x121D5 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_460(essParam0))
		return;

	if (bParam1)
		if (func_713(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_557(essParam0, 1, false);

	func_557(essParam0, 16, bParam1);
	return;
}

void func_557(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x12217 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_460(essParam0))
		return;

	func_714(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_558(eStackSize essParam0) // Position - 0x1223F Hash - 0x7895582D ^0x7895582D
{
	func_557(essParam0, 8, false);
	return;
}

void func_559(eStackSize essParam0) // Position - 0x12250 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_491(essParam0, 36, true);
	return;
}

void func_560(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x12261 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_460(essParam0))
			return;

	func_640(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

PersChar func_561(eStackSize essParam0, BOOL bParam1) // Position - 0x1229B Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_114(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_715(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

void func_562(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x122DA Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_114(essParam0))
	{
		ped = func_255(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_716(essParam0);
		}
	}

	if (func_490(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_255(essParam0), 137, true);

	return;
}

void func_563(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1232C Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_460(essParam0))
		return;

	if (bParam1)
	{
		func_560(essParam0, 50, true);
		func_560(essParam0, 48, true);
		func_560(essParam0, 49, true);
		func_560(essParam0, 51, true);
		func_560(essParam0, 52, true);
		func_560(essParam0, 54, true);
		func_560(essParam0, 55, true);
	}
	else
	{
		func_491(essParam0, 50, true);
		func_491(essParam0, 48, true);
		func_491(essParam0, 49, true);
		func_491(essParam0, 51, true);
	
		if (bParam3)
			func_491(essParam0, 54, true);
		else
			func_560(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_491(essParam0, 52, true);
		
			if (bParam3)
				func_491(essParam0, 55, true);
		}
		else
		{
			func_560(essParam0, 52, true);
		
			if (!bParam3)
				func_560(essParam0, 55, true);
		}
	}

	return;
}

void func_564(eStackSize essParam0, BOOL bParam1) // Position - 0x123FE Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_460(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_255(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_255(essParam0), 204, false);

	return;
}

void func_565(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12435 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_114(essParam0))
		return;

	if (func_115(essParam0))
	{
		if (!func_116(essParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_490(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_561(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_255(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_717(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_491(essParam0, 2, true);
	}
	else
	{
		func_718(essParam0);
		func_491(essParam0, 1, true);
	}

	return;
}

void func_566(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12543 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_114(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_567(eStackSize essParam0) // Position - 0x1257F Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_114(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_568(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x125BF Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_460(essParam1))
		return;

	player = func_567(essParam1);

	if (func_719(essParam1))
		if (!func_720(essParam1))
			return;

	func_560(essParam1, 39, true);
	func_721(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_721(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_721(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_491(essParam1, 43, true);
		}
	
		if (bParam4)
			func_722(essParam1, false, true, true, true);
	}

	return;
}

int func_569(int iParam0) // Position - 0x12661 Hash - 0xA18FC425 ^0xA18FC425
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	
		case 3:
			return 8;
	
		case 4:
			return 16;
	
		case 5:
			return 32;
	
		case 6:
			return 64;
	
		case 7:
			return 128;
	
		case 8:
			return 256;
	
		case 9:
			return 512;
	
		case 10:
			return 1024;
	
		case 11:
			return 2048;
	
		case 12:
			return 4096;
	
		case 13:
			return 8192;
	
		case 14:
			return 16384;
	
		case 15:
			return 32768;
	
		case 16:
			return 65536;
	
		case 17:
			return 131072;
	
		case 18:
			return 262144;
	
		case 19:
			return 1048576;
	
		case 20:
			return 2097152;
	
		case 21:
			return 4194304;
	
		case 22:
			return 8388608;
	
		case 23:
			return 16777216;
	
		case 24:
			return 33554432;
	
		case 25:
			return 524288;
	}

	return 0;
}

BOOL func_570(int iParam0, int iParam1) // Position - 0x127FA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_571(var uParam0, int iParam1) // Position - 0x12809 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_572(var uParam0) // Position - 0x1281A Hash - 0xA22DA6B0 ^0x3A3D1E32
{
	if (!func_570(uParam0->f_1, 1))
	{
		STREAMING::_0x03DDBF2D73799F9E(*uParam0);
		func_571(&(uParam0->f_1), 1);
	}

	return;
}

void func_573(var uParam0) // Position - 0x1283F Hash - 0x68EBB57D ^0x1E166DCF
{
	if (!func_570(*uParam0, 1))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_571(uParam0, 1);
	}

	return;
}

BOOL func_574() // Position - 0x1285E Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_254() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_575(int iParam0) // Position - 0x12883 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

void func_576(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1288F Hash - 0x125DC0A8 ^0x7CF66474
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return;

	if (bParam2)
	{
	}

	Global_1393237.f_11[iParam0 /*30*/].f_10 = Global_1393237.f_11[iParam0 /*30*/].f_10 || bParam1;
	return;
}

void func_577(int iParam0, int iParam1) // Position - 0x128D3 Hash - 0x3095F76B ^0x9DAA87F4
{
	if (iParam0 >= 0 && iParam0 < 6)
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;

	return;
}

Volume func_578(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x128F9 Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_723(vParam0))
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

	func_724(volume, bParam8);
	return volume;
}

BOOL func_579(var uParam0, const char* sParam1) // Position - 0x129B3 Hash - 0xA68E0030 ^0xA87ABB5F
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return true;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]) && MISC::ARE_STRINGS_EQUAL(&uParam0->f_462[i /*9*/], sParam1))
			return true;
	}

	return false;
}

BOOL func_580(var uParam0, const char* sParam1) // Position - 0x12A04 Hash - 0xDC19080A ^0x79CF59FD
{
	var string2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	string2 = { func_180(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &string2);
}

BOOL func_581(int iParam0) // Position - 0x12A2C Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_582(int iParam0) // Position - 0x12A41 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

int func_583(int iParam0) // Position - 0x12A61 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_584(int iParam0) // Position - 0x12A6B Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_725(iParam0))
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

void func_585(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x12B1E Hash - 0x1B501888 ^0x6546232B
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
	func_586(iParam0, true);
	func_588(iParam0, true);
	func_589(iParam0, 128);
	return;
}

void func_586(int iParam0, BOOL bParam1) // Position - 0x12DC4 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_395(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_587(int iParam0, int iParam1) // Position - 0x12E1C Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_588(int iParam0, BOOL bParam1) // Position - 0x12E4F Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_589(int iParam0, int iParam1) // Position - 0x12E78 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_590(int iParam0) // Position - 0x12EA0 Hash - 0xBEE7BE6F ^0x7416FECE
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 10)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
		return;

	Global_1934603[iParam0 /*16*/] = { unk };
	Global_1934603.f_161 = Global_1934603.f_161 - 1;

	if (Global_1934603.f_161 < 0)
		Global_1934603.f_161 = 0;

	return;
}

Hash func_591(Hash hParam0) // Position - 0x12F00 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_443(func_726(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_592(var uParam0) // Position - 0x12F2F Hash - 0x313F44CF ^0x6235E18A
{
	if (func_593(81053684, uParam0))
		return true;

	if (func_593(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_593(Hash hParam0, var uParam1) // Position - 0x12F5C Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_443(func_726(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_409(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

void func_594(int iParam0) // Position - 0x12FD3 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

Hash func_595() // Position - 0x12FEE Hash - 0x7AE16C89 ^0x6C5D08B9
{
	if (!func_427(Global_1935630.f_45))
		return joaat("WEAPON_UNARMED");

	return Global_1935630.f_45;
}

Hash func_596(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x13012 Hash - 0xAB9CFACB ^0x8DB6D77C
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
				
					if (func_427(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_427(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_254() == -1 && !func_727(weaponHash))
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
				if (func_727(joaat("weapon_repeater_carbine")))
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
		if (pedParam0 != Global_35 && func_427(weaponHash))
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
		func_728(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_729(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_730(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

Hash func_597(int iParam0, int iParam1) // Position - 0x133BE Hash - 0xAED4FBA4 ^0xAED4FBA4
{
	var unk;

	return func_731(&unk, iParam0, iParam1);
}

BOOL func_598() // Position - 0x133D0 Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1935436 == 1;
}

BOOL func_599() // Position - 0x133DE Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

Ped func_600(Ped pedParam0) // Position - 0x133EC Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_601(Ped pedParam0) // Position - 0x133F6 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_602(Ped pedParam0) // Position - 0x13428 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

Hash func_603(Hash hParam0) // Position - 0x1346A Hash - 0xBBE66644 ^0xEC72F4B4
{
	Hash hash;

	hash = func_409(hParam0);

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

struct<4> func_604(BOOL bParam0) // Position - 0x1349F Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_450(joaat("character"), func_513(), joaat("SLOTID_NONE"), bParam0);
}

int func_605(Hash hParam0) // Position - 0x134BB Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_408(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_606(BOOL bParam0) // Position - 0x134E6 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_452(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_450(923904168, func_604(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_450(923904168, func_604(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_450(923904168, func_604(bParam0), -740156546, false);
}

BOOL func_607(Hash hParam0, BOOL bParam1) // Position - 0x1357B Hash - 0x62864AB ^0xBC339691
{
	if (func_409(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_732(24);
		else
			return true;

	return false;
}

BOOL func_608(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x135B4 Hash - 0x4285A587 ^0x4285A587
{
	return func_451(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_609(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x135CC Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_733(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_610(BOOL bParam0) // Position - 0x135ED Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_452(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_450(271701509, func_604(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_450(271701509, func_604(bParam0), 12999093, false);
}

BOOL func_611(Hash hParam0, Hash hParam1) // Position - 0x13651 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_409(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_612(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x136B0 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_452(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

void func_613() // Position - 0x136E0 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

BOOL func_614(Hash hParam0, Hash hParam1) // Position - 0x13727 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

int func_615(Hash hParam0) // Position - 0x13758 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_614(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_614(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_614(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_614(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_614(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_614(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_616(int iParam0) // Position - 0x138A9 Hash - 0x65A082AE ^0x65A082AE
{
	func_437(iParam0, 8, 6);
	return;
}

void func_617(int iParam0) // Position - 0x138BA Hash - 0x20214C72 ^0x20214C72
{
	func_734(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_618(int iParam0, int iParam1) // Position - 0x138CF Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_735(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_619(Hash hParam0, int iParam1, int iParam2) // Position - 0x138E6 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_620(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x138F9 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_409(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_433(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_618(num2, num3);
	}

	if (func_736(-1586649372) && func_433(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_618(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_737(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_737(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_618(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_618(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_618(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_738(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_614(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_618(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_618(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_618(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_409(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_618(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_738(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_409(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_618(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_737(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_737(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_618(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (hParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_618(num2, num3);
				}
			}
		
			func_737(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_614(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_618(num2, num3);
			}
			break;
	
		case 1868067663:
			func_737(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_618(num2, num3);
			}
			break;
	}

	switch (func_409(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_409(hParam0->f_1[num2 /*3*/]) || func_614(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_618(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_409(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_618(num2, num3);
			}
			break;
	}

	return;
}

Hash func_621(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x13F3D Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_739(0);

	if (hParam2 != 0 && func_740(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_741(hParam0, func_435(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_622(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x13F83 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_254() != -1;
	flag2 = func_739(0);

	if (func_431(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_435(num, 1);
		
			if (func_432(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_432(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_742(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_743(hParam0);

	if (num3 > 0)
	{
		if (!func_431(524288))
		{
			func_429(524288);
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
				num5 = func_435(num, 1);
			
				if (func_432(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_432(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_742(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_618(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_626(524288);

	return;
}

void func_623(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x141A4 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_744(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_254() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_745(2, Global_26796.f_776) || Global_1946054.f_1497 != func_746(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_746(Global_40.f_7729);
				Global_1946054.f_1378 = func_746(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_747(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_748(false, true);

	return;
}

void func_624(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x142C3 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_581(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_582(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_429(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_581(iParam0))
				return;
		
			func_582(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_429(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_449(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_625(var uParam0) // Position - 0x144CF Hash - 0x7C3D914C ^0xB1998A7B
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

void func_626(BOOL bParam0) // Position - 0x1452D Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_627(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x14545 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

void func_628(var uParam0, int iParam1) // Position - 0x1456E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_629(var uParam0, int iParam1) // Position - 0x1457F Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

var func_630(BOOL bParam0, var uParam1, var uParam2) // Position - 0x14594 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_631(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x145AB Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_632(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x145EF Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_749(0, 1, bParam0, bParam1);
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

int func_633(int iParam0) // Position - 0x146E7 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

void func_634() // Position - 0x1470B Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_750();
	func_751();
	func_752();
	return;
}

int func_635(int iParam0) // Position - 0x14722 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_753(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_636(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x14763 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_754(eptParam1))
		{
			func_755(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_756(pedParam0, 0, true);
	
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
			func_757(pedParam0, false);
			flag = true;
		}
	
		func_758(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_637(var uParam0) // Position - 0x14844 Hash - 0xB9A83C95 ^0x1D119752
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[i /*2*/], false) && Global_1934765.f_275[i /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = i;
			return true;
		}
	}

	return false;
}

float func_638() // Position - 0x14890 Hash - 0xC6C7E40 ^0x14F37B93
{
	return func_759(150f, BUILTIN::TO_FLOAT(Global_1934765.f_286)) / BUILTIN::TO_FLOAT(300);
}

int func_639() // Position - 0x148B4 Hash - 0x7DC7EE6A ^0xA1EBC045
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[i /*2*/], false))
			return i;
	}

	return -1;
}

int func_640(int iParam0, var uParam1, var uParam2) // Position - 0x148E8 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_641(eStackSize essParam0, BOOL bParam1, char* sParam2) // Position - 0x14905 Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_255(essParam0);

	if (!func_114(essParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

void func_642(eStackSize essParam0, int iParam1) // Position - 0x1494C Hash - 0x61FF61E0 ^0x2C6117ED
{
	if (!func_460(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_11 = iParam1;
	return;
}

BOOL func_643(eStackSize essParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0x1496E Hash - 0x5B7A656E ^0x3AAC2B26
{
	if (!func_460(essParam0))
		return false;

	switch (Global_1360165[essParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("def_comp_brain"));
		
			Global_1360165[essParam0 /*1157*/].f_3 = 1;
			[[fallthrough]];
	
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				return false;
		
			if (Global_1359489.f_9 != -1)
				return false;
		
			Global_1359489.f_9 = essParam0;
		
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
					iParam4 = func_760(essParam0, iParam9, bParam7, true);
				else if (Global_1360165[essParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[essParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[essParam0 /*60*/].f_59 && func_467(Global_1360165[essParam0 /*1157*/].f_4.f_2) || func_306(Global_1360165[essParam0 /*1157*/].f_4.f_2))
					iParam4 = Global_1360165[essParam0 /*1157*/].f_4.f_1;
				else
					iParam4 = func_760(essParam0, Global_40.f_4283, bParam7, true);
			
				if (Global_1360165[essParam0 /*1157*/].f_63 != iParam4 && func_761(Global_1360165[essParam0 /*1157*/].f_63))
					if (!func_762(essParam0, false))
						func_491(essParam0, 25, false);
			}
		
			Global_1360165[essParam0 /*1157*/].f_4 = { func_763(essParam0, iParam4, uParam1, bParam5, bParam6, bParam8, Global_40.f_4942[essParam0 /*60*/].f_59, bParam11) };
		
			if (!bParam6)
				func_560(essParam0, 44, true);
		
			Global_1360165[essParam0 /*1157*/].f_3 = 2;
			[[fallthrough]];
	
		case 2:
			if (!func_152(func_255(essParam0), 0))
				return false;
		
			if (bParam5 && bParam10)
				if (!func_152(func_567(essParam0), 0))
					return false;
		
			Global_1360165[essParam0 /*1157*/].f_3 = 3;
			[[fallthrough]];
	
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_644(eStackSize essParam0, int iParam1) // Position - 0x14B57 Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_114(essParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_764(essParam0, iParam1);
	return flag;
}

void func_645(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x14B96 Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_114(essParam0))
		return;

	if (!func_644(essParam0, iParam1))
		return;

	Global_40.f_4942[essParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_491(essParam0, 25, true);

	return;
}

void func_646(eStackSize essParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x14BD6 Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_765(iParam2))
		{
			hash = func_766(iParam2, -1);
		
			if (func_767(pedParam1, hash))
			{
				if (func_768(pedParam1, hash))
				{
					if (func_769(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_770(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_771(essParam0, pedParam1, false);
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
			func_491(essParam0, 66, false);
	}

	return;
}

void func_647(eStackSize essParam0) // Position - 0x14CAC Hash - 0x73C1F6C ^0x73C1F6C
{
	func_772(essParam0);
	func_773(essParam0, false);
	return;
}

void func_648(Ped pedParam0, int iParam1) // Position - 0x14CC1 Hash - 0x7F605CB ^0x28CA17AF
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

BOOL func_649(Ped pedParam0) // Position - 0x14D1C Hash - 0x4E8A039F ^0x9F8FB293
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

void func_650(eStackSize essParam0, Ped pedParam1) // Position - 0x14D9A Hash - 0x9D727A3E ^0xB12CD64B
{
	if (!func_460(essParam0))
		return;

	switch (essParam0)
	{
		case 11:
			if (Global_40.f_4942[essParam0 /*60*/].f_3 == -1341683964)
			{
				func_596(pedParam1, joaat("weapon_revolver_cattleman_sadie"), false, false, 2, true, false, 1056964608, 1065353216, -1, false, false, false, false);
				func_596(pedParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), false, false, 3, true, true, 1056964608, 1065353216, -1, false, true, false, false);
			}
			break;
	}

	return;
}

void func_651(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14E14 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_114(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_652(eStackSize essParam0, BOOL bParam1) // Position - 0x14E45 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_460(essParam0))
		return;

	ped = func_255(essParam0);
	func_774(ped);
	func_491(essParam0, 60, true);

	if (bParam1)
		func_775(essParam0);

	return;
}

void func_653(eStackSize essParam0, BOOL bParam1) // Position - 0x14E7C Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_460(essParam0))
		return;

	ped = func_255(essParam0);
	func_776(ped);
	func_560(essParam0, 60, true);

	if (bParam1)
		func_777(essParam0);

	return;
}

void func_654(eStackSize essParam0, BOOL bParam1) // Position - 0x14EB3 Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_460(essParam0))
		return;

	ped = func_255(essParam0);
	func_778(ped);

	if (essParam0 == 14)
		func_779(ped);

	func_491(essParam0, 61, true);

	if (bParam1)
		func_780(essParam0);

	return;
}

void func_655(eStackSize essParam0, BOOL bParam1) // Position - 0x14EF7 Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_460(essParam0))
		return;

	ped = func_255(essParam0);
	func_781(ped);
	func_560(essParam0, 61, true);

	if (bParam1)
		func_782(essParam0);

	return;
}

char* func_656(Hash hParam0) // Position - 0x14F2E Hash - 0xE6862179 ^0x3C930DAB
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

BOOL func_657(Hash hParam0) // Position - 0x15FDD Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_658(var uParam0) // Position - 0x15FE9 Hash - 0xC120EC26 ^0x27847E6
{
	float minimum;
	float maximum;
	Vector3 vector;

	func_166(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &minimum, &maximum);
	minimum = minimum * 0.35f;
	maximum = maximum * 0.35f;
	vector = { maximum - minimum };
	vector = { vector * { 0.5f, 0.5f, 0.5f } };
	uParam0->f_1875 = VOLUME::CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vector);

	if (!Global_1935630.f_12)
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_1875, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);

	func_303(uParam0, 1048576);
	func_303(uParam0, 2097152);
	return;
}

void func_659(var uParam0) // Position - 0x16080 Hash - 0x6577CF7D ^0xCB0B07E
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;
	var minimum;
	var maximum;
	Vector3 vector;
	var unk7;
	int i;
	Ped pedInDraftHarness;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);

	if (!STREAMING::IS_MODEL_VALID(entityModel))
		return;

	func_166(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(entityModel, &minimum, &maximum);
	vector = { maximum - minimum };
	vector = { vector * { 0.9f, 0.9f, 0.9f } };

	if (VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsUsing))
	{
		i = 0;
	
		for (i = 0; i < 6; i = i + 1)
		{
			pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(vehiclePedIsUsing), i);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(pedInDraftHarness), &minimum, &maximum);
				unk7 = { maximum - minimum };
				unk7 = { unk7 * { 0.9f, 0.9f, 0.9f } };
				break;
			}
		}
	
		vector.f_1 = vector.f_1 + (unk7.f_1 / 2f);
	}

	uParam0->f_1875 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(vehiclePedIsUsing, true, false), ENTITY::GET_ENTITY_ROTATION(vehiclePedIsUsing, 2), vector);

	if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing))
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_1875, vehiclePedIsUsing, 0f, unk7.f_1 / 2f, 0f, 0f, 0f, 0f, 2, true);

	func_324(uParam0, 2097152);
	func_303(uParam0, 1048576);
	return;
}

void func_660(var uParam0, Ped pedParam1) // Position - 0x16199 Hash - 0xB06B36E ^0x8A3CD518
{
	Hash entityModel;
	var minimum;
	var maximum;
	Vector3 vector;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam1);

	if (!STREAMING::IS_MODEL_VALID(entityModel))
		return;

	func_166(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(entityModel, &minimum, &maximum);
	uParam0->f_1882 = { maximum - minimum };
	vector = { uParam0->f_1882 * F2V(func_661(pedParam1)) };
	uParam0->f_1875 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(pedParam1, true, false), 0f, 0f, 0f, vector);

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_1875, pedParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, true);

	func_324(uParam0, 1048576);
	func_303(uParam0, 2097152);
	return;
}

float func_661(Ped pedParam0) // Position - 0x16239 Hash - 0x310B7B6C ^0xF3314E53
{
	if (TASK::IS_PED_SPRINTING(pedParam0))
		return 1f;

	if (TASK::IS_PED_RUNNING(pedParam0))
		return 0.9f;

	if (TASK::IS_PED_WALKING(pedParam0))
		return 0.8f;

	return 0.7f;
}

BOOL func_662(int iParam0) // Position - 0x1627E Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_254())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

BOOL func_663(int iParam0) // Position - 0x162A9 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_254())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

void func_664() // Position - 0x162D4 Hash - 0x3C4FB117 ^0x9BA96F20
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
	return;
}

void func_665(var uParam0, int iParam1, Entity eParam2, BOOL bParam3) // Position - 0x162FD Hash - 0x2C68431A ^0x29BECF38
{
	switch (func_666(&uParam0->f_1633[iParam1 /*15*/]))
	{
		case 0:
			if (!bParam3)
				return;
		
			if (!func_504(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
			{
				if (func_407(&(uParam0->f_1903)))
				{
					func_684(uParam0->f_1903, false);
					func_783(&uParam0->f_1633[iParam1 /*15*/], 2);
				}
			}
			break;
	
		case 1:
			if (!func_504(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
				if (!func_784())
					func_783(&uParam0->f_1633[iParam1 /*15*/], 0);
			else
				func_783(&uParam0->f_1633[iParam1 /*15*/], 0);
			break;
	
		case 2:
			if (!func_785())
				func_783(&uParam0->f_1633[iParam1 /*15*/], 0);
			break;
	}

	return;
}

int func_666(var uParam0) // Position - 0x163CD Hash - 0xD73B9827 ^0x62D87830
{
	return uParam0->f_14;
}

BOOL func_667(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x163D9 Hash - 0x69C2658A ^0x69C2658A
{
	var unk;
	var unk4;
	float value;
	float num;
	float num2;

	unk = { uParam4 - uParam1 };
	unk4 = { uParam1 - uParam10 };
	value = func_786(uParam7, unk);
	num = -func_786(uParam7, unk4);

	if (MISC::ABSF(value) < 1E-08f)
		return false;

	num2 = num / value;
	*uParam0 = { uParam1 + ({ num2, num2, num2 } * unk) };

	if (num2 < 0f || num2 > 1f)
		return false;

	return true;
}

void func_668(var uParam0, int iParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x16459 Hash - 0x6A773471 ^0xCE8C1844
{
	Vector3 vector;
	var unk3;
	var unk16;
	var unk29;
	float volumeScale;
	Vector3 volumeCoords;
	int i;
	int num;
	var unk38;
	float num2;

	if (!func_787(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + { 0f, BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11, BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11 } };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + { 0f, BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11, BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11 } };
	}
	else
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + { 0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18, (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18 } };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + { 0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18, (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18 } };
	}

	vector = { Global_36 };

	if (uParam0->f_1897 && VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875) && func_91(uParam0->f_1898, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_17, true, true))
	{
		unk3 = 4;
		unk16 = 4;
		unk29 = 4;
		volumeScale = { VOLUME::GET_VOLUME_SCALE(uParam0->f_1875) };
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(uParam0->f_1875) };
		unk3[0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), volumeScale / 2f, volumeScale.f_1 / 2f, 0f) };
		unk3[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), volumeScale / 2f, -volumeScale.f_1 / 2f, 0f) };
		unk3[2 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), -volumeScale / 2f, volumeScale.f_1 / 2f, 0f) };
		unk3[3 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), -volumeScale / 2f, -volumeScale.f_1 / 2f, 0f) };
		unk16[0 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, unk3[0 /*3*/], unk3[1 /*3*/], true) };
		unk16[1 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, unk3[0 /*3*/], unk3[2 /*3*/], true) };
		unk16[2 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, unk3[3 /*3*/], unk3[1 /*3*/], true) };
		unk16[3 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, unk3[3 /*3*/], unk3[2 /*3*/], true) };
		unk29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, unk16[0 /*3*/], true);
		unk29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, unk16[1 /*3*/], true);
		unk29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, unk16[2 /*3*/], true);
		unk29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, unk16[3 /*3*/], true);
		num = 0;
	
		for (i = 1; i <= 3; i = i + 1)
		{
			if (unk29[i] < unk29[num])
				num = i;
		}
	
		vector = { unk16[num /*3*/] };
	}

	*uParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, *uParam2, true);
	*uParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, vParam3, true);
	*uParam8 = func_425(uParam0->f_1016[iParam1 /*41*/].f_1, vector, 0);

	if (*uParam8 < uParam0->f_1016[iParam1 /*41*/].f_12)
		*uParam8 = *uParam8 + 360f;

	if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
		*uParam9 = uParam0->f_1016[iParam1 /*41*/].f_13 + 360f;
	else
		*uParam9 = uParam0->f_1016[iParam1 /*41*/].f_13;

	if (*uParam8 < *uParam9)
	{
		unk38 = { uParam0->f_1016[iParam1 /*41*/].f_1 };
		unk38.f_2 = Global_36.f_2;
		uParam0->f_1876 = { unk38 + { 0f, BUILTIN::COS(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_11, BUILTIN::SIN(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_11 } };
		num2 = 0f;
		uParam0->f_1879 = { unk38 + { 0f, (BUILTIN::COS(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + num2, (BUILTIN::SIN(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + num2 } };
	}

	return;
}

void func_669(var uParam0) // Position - 0x16936 Hash - 0x7C37F9FC ^0x468CB9EE
{
	int i;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (uParam0->f_3[i /*13*/].f_1 != 0)
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[i /*13*/].f_4)))
				func_788(&(uParam0->f_1771), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2), &(uParam0->f_3[i /*13*/].f_4), false);
	}

	return;
}

BOOL func_670(var uParam0, int iParam1) // Position - 0x169BE Hash - 0x863EF868 ^0xAF66834E
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (8 == uParam0->f_475[i /*18*/].f_2 && uParam0->f_475[i /*18*/] == iParam1)
			return true;
	}

	return false;
}

BOOL func_671(var uParam0, const char* sParam1) // Position - 0x16A00 Hash - 0xA8A159A8 ^0x1A1470EB
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0->f_1016[i /*41*/].f_29)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[i /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[i /*41*/].f_22), sParam1) && func_463(&uParam0->f_1016[i /*41*/], 1))
				return true;
	}

	return false;
}

BOOL func_672(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x16A77 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_789(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_673(var uParam0, int iParam1) // Position - 0x16AD1 Hash - 0x53A96DDB ^0x5D0D073D
{
	uParam0->f_26 = uParam0->f_26 || iParam1;
	return;
}

void func_674(int iParam0, int iParam1) // Position - 0x16AE4 Hash - 0xBF4EFB52 ^0x1406135A
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1);
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1);

	if (!func_790(iParam0, 8))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);

	if (!func_790(iParam0, 4))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RELOAD"), false);

	if (!func_790(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
	}

	if (!func_790(iParam0, 128))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_COVER"), false);

	if (!func_790(iParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	}

	if (!func_790(iParam0, 64))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DUCK"), false);

	if (!(func_791(17) && func_194(Global_35, Global_1835011[17 /*74*/].f_18, false) < 10f))
		if (!func_790(iParam0, 2048))
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);

	if (!func_790(iParam0, 4096))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!func_790(iParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
	
		if (!func_790(iParam0, 8))
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
	
		if (!func_790(iParam0, 32))
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
	}

	return;
}

BOOL func_675(int iParam0, int iParam1) // Position - 0x16C9D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_676(var uParam0, int iParam1, BOOL bParam2) // Position - 0x16CAC Hash - 0x8087C902 ^0x562AA6AF
{
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 0 && _STOPWATCH_IS_INITIALIZED_0(uParam0) == 3)
	{
		bParam2;
		return 1;
	}

	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && _STOPWATCH_IS_INITIALIZED_0(uParam0) == 9)
	{
		bParam2;
		return 1;
	}

	if (uParam0->f_475[iParam1 /*18*/].f_17 == 1 && _STOPWATCH_IS_INITIALIZED_0(uParam0) > 3 && _STOPWATCH_IS_INITIALIZED_0(uParam0) < 9)
	{
		bParam2;
		return 1;
	}

	return 0;
}

void func_677(var uParam0, AnimScene ansParam1, var uParam2, var uParam3) // Position - 0x16D39 Hash - 0xD2CBF6CE ^0x3079964C
{
	int i;
	var entityId;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2))
		{
			TEXT_LABEL_ASSIGN_STRING(&entityId, uParam0->f_3[i /*13*/].f_9, 64);
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&entityId))
				entityId = { func_342(uParam0, uParam0->f_3[i /*13*/].f_2) };
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&entityId) && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(ansParam1, &entityId))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2);
			
				if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex) && pedIndexFromEntityIndex != Global_35)
					func_678(pedIndexFromEntityIndex, Global_35, uParam2, uParam3);
			}
		}
	}

	return;
}

void func_678(Ped pedParam0, Ped pedParam1, var uParam2, var uParam3) // Position - 0x16DEE Hash - 0x704770AE ^0xFFE3A1B1
{
	var args;

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
	args.f_3 = pedParam1;
	args.f_4 = 14283;
	args.f_14 = uParam2;
	args.f_15 = uParam3;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(pedParam0, &args);
	return;
}

void func_679(var uParam0, int iParam1, int iParam2) // Position - 0x16E68 Hash - 0x1A1426CF ^0x5AAACB7
{
	int num;
	Vector3 position;
	Vector3 rotation;
	var matrix;
	float num2;
	int i;
	var matrix2;

	if (uParam0->f_475[iParam2 /*18*/].f_4 < 0)
		return;

	num = uParam0->f_475[iParam2 /*18*/].f_4;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[num /*10*/].f_8))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[num /*10*/].f_8, true, false))
		{
			func_706(uParam0, uParam0->f_1522[num /*10*/].f_8);
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[num /*10*/].f_8, &position, &rotation, 2);
		
			if (func_343(&uParam0->f_1522[num /*10*/], 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1522[num /*10*/].f_8, func_212(Global_35), &matrix, false, 0, 2))
				{
					num2 = func_425(position, Global_36, 1) - func_425(position, matrix, 1);
					rotation.f_2 = rotation.f_2 + num2;
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[num /*10*/].f_8, position, rotation, 2);
				}
			}
		
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[num /*10*/].f_8, func_212(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0)
			{
				if (_STOPWATCH_IS_INITIALIZED_0(uParam0) > 3 && !func_305(&uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/], 16) && !func_305(&uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/], 32768))
					func_792(uParam0, true);
			
				if (uParam0->f_1899)
				{
					if (func_305(&uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/], 128))
					{
					}
					else
					{
						func_324(uParam0, 131072);
						return;
					}
				}
			}
		
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1522[num /*10*/].f_8, false))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[num /*10*/].f_8, "b_PlayerArthur"))
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1522[num /*10*/].f_8, "b_PlayerArthur", !func_574(), false);
			
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1522[num /*10*/].f_8);
			
				if (uParam0->f_475[iParam2 /*18*/].f_17 == 0)
				{
					func_696(&uParam0->f_1522[num /*10*/], 128);
				
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[num /*10*/].f_8, "pl_breakout"))
						func_344(uParam0->f_1522[num /*10*/].f_8, 10000, 0, -1, false);
				}
			}
		
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1522[num /*10*/].f_8))
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1522[num /*10*/].f_8, false);
		
			if (func_553(&uParam0->f_475[iParam2 /*18*/], 4))
			{
				uParam0->f_1685 = iParam2;
			
				if (func_315(uParam0) == 0 && !CAM::HAS_LETTER_BOX() && uParam0->f_475[iParam2 /*18*/].f_17 == 1 && uParam0->f_475[iParam2 /*18*/] < 8 && !func_305(&uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/], 32768) && !func_305(&uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/], 524288))
				{
					CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
					func_462(uParam0, 64);
				}
			}
		
			for (i = 0; i < 35; i = i + 1)
			{
				if (uParam0->f_3[i /*13*/] && uParam0->f_3[i /*13*/].f_8 > 0f && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[i /*13*/].f_2))
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[i /*13*/].f_2, false);
			}
		
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[num /*10*/].f_8, func_212(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0 && !func_305(&uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/], 32768))
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1522[num /*10*/].f_8, func_212(Global_35), &matrix2, false, 0, 2) && !_IS_NULL_VECTOR(matrix2))
					func_793(uParam0, false);
		
			uParam0->f_475[iParam2 /*18*/].f_7 = 1;
		}
	}

	return;
}

BOOL func_680(var uParam0, var uParam1) // Position - 0x17234 Hash - 0x3B184D5A ^0x3B184D5A
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/] == uParam1)
		{
			if (func_553(&uParam0->f_475[i /*18*/], 4))
				return true;
		
			if (uParam0->f_475[i /*18*/].f_2 == 11)
				return true;
		}
	}

	return false;
}

BOOL func_681() // Position - 0x17287 Hash - 0x5A8ACC64 ^0x692AB1B6
{
	return ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35));
}

void func_682(var uParam0) // Position - 0x1729A Hash - 0xCA4D7661 ^0x1E51F2C9
{
	int taskSequenceId;

	if (!uParam0->f_1897)
	{
		if (func_305(&uParam0->f_1016[uParam0->f_1684 /*41*/], 8192) && PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MotionState_Crouch_Walk"), false, 0, false);
	
		if (!func_305(&uParam0->f_1016[uParam0->f_1684 /*41*/], 65536) || !func_427(func_426(Global_35, 0, true, false)) && !func_427(func_426(Global_35, 1, true, false)))
			if (func_319(uParam0, uParam0->f_1684))
				func_794(uParam0->f_1016[uParam0->f_1684 /*41*/].f_7);
	}

	if (!func_305(&uParam0->f_1016[uParam0->f_1684 /*41*/], 16) && func_427(func_426(Global_35, 0, true, false)) || func_427(func_426(Global_35, 1, true, false)))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
	
		if (func_305(&uParam0->f_1016[uParam0->f_1684 /*41*/], 65536))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
	
		func_550(uParam0, 1);
	}
	else if (!func_319(uParam0, uParam0->f_1684) && !func_328(uParam0, 4) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		func_550(uParam0, 3);
	}
	else
	{
		func_550(uParam0, 6);
	}

	return;
}

void func_683(var uParam0, int iParam1, BOOL bParam2) // Position - 0x17428 Hash - 0x1F2BCE4F ^0x1F2BCE4F
{
	float num;
	var unk;
	var unk4;
	int taskSequenceId;
	var unk20;
	int i;

	num = 0f;
	unk = { 0f, 0f, 0f };
	unk4 = 5;
	func_795(uParam0, iParam1, &unk, &num);
	func_793(uParam0, func_530(uParam0->f_1345[uParam0->f_475[iParam1 /*18*/] /*22*/].f_1, 8));
	func_26(&(uParam0->f_1869));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);

	if (uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!func_796(uParam0, uParam0->f_475[iParam1 /*18*/]))
		{
			func_673(&uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/], 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_464(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}

	func_794(unk);

	if (uParam0->f_475[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, uParam0->f_475[iParam1 /*18*/].f_15);
		func_462(uParam0, 32);
	}

	if (func_553(&uParam0->f_475[iParam1 /*18*/], 16))
	{
		func_797(uParam0, uParam0->f_475[iParam1 /*18*/], &unk4, unk, num, &unk20);
		TASK::TASK_FLUSH_ROUTE();
	
		for (i = 0; i < 5; i = i + 1)
		{
			TASK::TASK_EXTEND_ROUTE(unk4[i /*3*/]);
		}
	
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		func_798(uParam0, iParam1, bParam2, &unk4);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		func_799(uParam0, iParam1, bParam2, unk);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

int func_684(Hash hParam0, BOOL bParam1) // Position - 0x175AE Hash - 0xA79D5BF ^0xE827C189
{
	int num;

	if (!func_800())
		return 0;

	if (!func_801(hParam0))
		return 0;

	if (func_802(hParam0))
	{
		num = 0;
	
		if (func_409(hParam0) == 81053684)
			if (bParam1)
				func_457(&num, 2);
	
		return func_803(hParam0, num);
	}

	return 0;
}

BOOL func_685() // Position - 0x17602 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1357517;
}

void func_686() // Position - 0x1760E Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_1357516 = false;
	return;
}

void func_687(var uParam0) // Position - 0x1761B Hash - 0x6AAFAA72 ^0x841F1948
{
	int i;

	for (i = 0; i < 103; i = i + 1)
	{
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(uParam0->f_1889, i, func_804(i));
	}

	return;
}

void func_688(var uParam0) // Position - 0x17648 Hash - 0x2D4DF8B2 ^0xF56C6F3C
{
	int i;
	var unk;
	var unk17;
	var unk35;
	var unk76;
	var unk86;

	unk.f_15 = 1;
	unk17 = -1;
	unk17.f_2 = 1;
	unk17.f_12 = 1065353216;
	unk17.f_15 = 1065353216;
	unk17.f_16 = 1;
	unk86.f_20 = -1;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		uParam0->f_3[i /*13*/] = 0;
	}

	uParam0->f_459 = { unk };
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_459), "", 32);

	for (i = 0; i < uParam0->f_475; i = i + 1)
	{
		uParam0->f_475[i /*18*/] = { unk17 };
	}

	for (i = 0; i < uParam0->f_1522; i = i + 1)
	{
		uParam0->f_1522[i /*10*/] = { unk76 };
	}

	uParam0->f_1683 = 0;

	for (i = 0; i < uParam0->f_1016; i = i + 1)
	{
		uParam0->f_1016[i /*41*/] = { unk35 };
		uParam0->f_1345[i /*22*/] = { unk86 };
	}

	uParam0->f_1684 = -1;
	uParam0->f_1765 = { Global_36 };
	uParam0->f_1768 = 0;
	uParam0->f_1769 = 0;
	uParam0->f_1688 = -1;
	uParam0->f_1689 = -1f;
	uParam0->f_1664 = 0;
	uParam0->f_1666 = 0;
	uParam0->f_1666.f_1 = 0;
	uParam0->f_1903 = 0;

	if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
		CAM::_CAM_DESTROY(&(uParam0->f_1692));

	return;
}

void func_689(var uParam0, int iParam1) // Position - 0x177A4 Hash - 0x48393E99 ^0xAC441161
{
	uParam0->f_1889.f_1 = 0;
	uParam0->f_1889.f_3 = iParam1;
	return;
}

BOOL func_690(var uParam0, int iParam1) // Position - 0x177BD Hash - 0x9687758B ^0xB43AF6CA
{
	BOOL flag;

	uParam0->f_1889.f_2 = iParam1;
	flag = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1889.f_1), &(uParam0->f_1889));
	return flag;
}

BOOL func_691(var uParam0, int iParam1, int* piParam2) // Position - 0x177E2 Hash - 0xB51CEC78 ^0x87BA819C
{
	BOOL flag;

	uParam0->f_1889.f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam2, &(uParam0->f_1889));
	return flag;
}

BOOL func_692(var uParam0, int iParam1, float* pfParam2) // Position - 0x17802 Hash - 0xB51CEC78 ^0x1FC802AC
{
	BOOL flag;

	uParam0->f_1889.f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam2, &(uParam0->f_1889));
	return flag;
}

BOOL func_693(var uParam0, int iParam1, char* sParam2) // Position - 0x17822 Hash - 0xB51CEC78 ^0x5213D4A2
{
	BOOL flag;

	uParam0->f_1889.f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, &(uParam0->f_1889));
	return flag;
}

void func_694(var uParam0, var uParam1) // Position - 0x17842 Hash - 0x9946949B ^0x9946949B
{
	BOOL flag;

	if (func_697(uParam0, 24, &flag))
		if (flag)
			*uParam1 = *uParam1 | 4;

	if (func_697(uParam0, 25, &flag))
		if (flag)
			*uParam1 = *uParam1 | 2;

	if (func_697(uParam0, 26, &flag))
		if (flag)
			*uParam1 = *uParam1 | 8;

	if (func_697(uParam0, 27, &flag))
		if (flag)
			*uParam1 = *uParam1 | 16;

	if (func_697(uParam0, 28, &flag))
		if (flag)
			*uParam1 = *uParam1 | 32;

	if (func_697(uParam0, 29, &flag))
		if (flag)
			*uParam1 = *uParam1 | 128;

	if (func_697(uParam0, 32, &flag))
		if (flag)
			*uParam1 = *uParam1 | 256;

	if (func_697(uParam0, 33, &flag))
		if (flag)
			*uParam1 = *uParam1 | 512;

	if (func_697(uParam0, 34, &flag))
		if (flag)
			*uParam1 = *uParam1 | 8192;

	if (func_697(uParam0, 36, &flag))
		if (flag)
			*uParam1 = *uParam1 | 32768;

	if (func_697(uParam0, 37, &flag))
		if (flag)
			*uParam1 = *uParam1 | 65536;

	if (func_697(uParam0, 38, &flag))
		if (flag)
			*uParam1 = *uParam1 | 131072;

	if (func_697(uParam0, 41, &flag))
		if (flag)
			*uParam1 = *uParam1 | 262144;

	if (func_697(uParam0, 42, &flag))
		if (flag)
			*uParam1 = *uParam1 | 524288;

	return;
}

BOOL func_695(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x179CF Hash - 0x4421204 ^0x961A610F
{
	if (bParam7)
		return BUILTIN::VDIST2(vParam0, vParam3) <= fParam6 * fParam6;

	return func_229(vParam0, vParam3) <= fParam6 * fParam6;
}

void func_696(var uParam0, int iParam1) // Position - 0x17A03 Hash - 0x53A96DDB ^0xBEDE3844
{
	uParam0->f_9 = uParam0->f_9 || iParam1;
	return;
}

BOOL func_697(var uParam0, int iParam1, BOOL* pbParam2) // Position - 0x17A16 Hash - 0xB51CEC78 ^0x28C98354
{
	BOOL flag;

	uParam0->f_1889.f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(pbParam2, &(uParam0->f_1889));
	return flag;
}

BOOL func_698(var uParam0, Hash hParam1, var uParam2) // Position - 0x17A36 Hash - 0xDE74FB24 ^0x48C70EE2
{
	int i;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
		uParam0->f_1921 = ITEMSET::CREATE_ITEMSET(true);

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2))
		{
			if (func_699(hParam1) && !uParam0->f_3[i /*13*/] && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2) == Global_35)
				hParam1 = ENTITY::GET_ENTITY_MODEL(Global_35);
		
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2) == hParam1)
			{
				if (!uParam0->f_3[i /*13*/])
				{
					uParam0->f_3[i /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2);
					*uParam2 = i;
				
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921))
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921);
				
					return true;
				}
			}
		
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[i /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[i /*13*/].f_9, func_393(hParam1)))
				{
					if (!uParam0->f_3[i /*13*/])
					{
						uParam0->f_3[i /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2);
						*uParam2 = i;
					
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921))
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921);
					
						return true;
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[i /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[i /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[i /*13*/].f_9, func_656(hParam1)))
				{
					if (!uParam0->f_3[i /*13*/])
					{
						uParam0->f_3[i /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2);
						*uParam2 = i;
					
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921))
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921);
					
						return true;
					}
				}
			}
		}
		else
		{
			STREAMING::IS_MODEL_VALID(hParam1);
		}
	}

	i = 0;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[i /*13*/].f_9) && MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[i /*13*/].f_9, "^"))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && STREAMING::IS_MODEL_A_PED(hParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(func_393(hParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[i /*13*/].f_9, func_393(hParam1)))
				{
					if (!uParam0->f_3[i /*13*/])
					{
						uParam0->f_3[i /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2);
						*uParam2 = i;
					
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921))
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921);
					
						return true;
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[i /*13*/].f_2) && STREAMING::_IS_MODEL_AN_OBJECT(hParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(func_656(hParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[i /*13*/].f_9, func_656(hParam1)))
				{
					if (!uParam0->f_3[i /*13*/])
					{
						uParam0->f_3[i /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2);
						*uParam2 = i;
					
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921))
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[i /*13*/].f_2, uParam0->f_1921);
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_699(Hash hParam0) // Position - 0x17E5D Hash - 0x6FC938DF ^0x56919C64
{
	return hParam0 == joaat("Player_Zero") || hParam0 == joaat("Player_One") || hParam0 == joaat("Player_Two") || hParam0 == joaat("player_three");
}

int func_700(int iParam0) // Position - 0x17E96 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	}

	return 0;
}

int func_701(int iParam0) // Position - 0x17F02 Hash - 0xB78BCDD0 ^0xB78BCDD0
{
	switch (iParam0)
	{
		case 7:
			return 4;
	
		case 8:
			return 5;
	
		case 10:
			return 7;
	
		case 12:
			return 8;
	
		case 13:
			return 9;
	
		case 14:
			return 10;
	
		case 15:
			return 11;
	}

	return 0;
}

void func_702(var uParam0, var uParam1) // Position - 0x17F72 Hash - 0x5B4DB9F6 ^0x5B4DB9F6
{
	BOOL flag;

	if (func_697(uParam0, 88, &flag))
		if (flag)
			*uParam1 = *uParam1 | 1;

	if (func_697(uParam0, 89, &flag))
		if (flag)
			*uParam1 = *uParam1 | 2;

	if (func_697(uParam0, 90, &flag))
		if (flag)
			*uParam1 = *uParam1 | 4;

	if (func_697(uParam0, 91, &flag))
		if (flag)
			*uParam1 = *uParam1 | 8;

	if (func_697(uParam0, 92, &flag))
		if (flag)
			*uParam1 = *uParam1 | 16;

	return;
}

BOOL func_703(var uParam0, int iParam1, Vector3* pvParam2) // Position - 0x17FFE Hash - 0xB51CEC78 ^0x14A55C60
{
	BOOL flag;

	uParam0->f_1889.f_2 = iParam1;
	flag = DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam2, &(uParam0->f_1889));
	return flag;
}

void func_704(var uParam0) // Position - 0x18020 Hash - 0xD86A23E9 ^0x7D03CB55
{
	int i;
	Vector3 vector;

	if (!func_63(uParam0, 8388608))
		return;

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0->f_1016[i /*41*/].f_29)
		{
			uParam0->f_1016[i /*41*/].f_1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1016[i /*41*/].f_1, -uParam0->f_1888, uParam0->f_1885) };
			vector = { uParam0->f_1016[i /*41*/].f_7 - uParam0->f_1016[i /*41*/].f_1 };
			vector = { vector + uParam0->f_1885 };
			uParam0->f_1016[i /*41*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1016[i /*41*/].f_1, -uParam0->f_1888, vector) };
			uParam0->f_1016[i /*41*/].f_12 = uParam0->f_1016[i /*41*/].f_12 + uParam0->f_1888;
			uParam0->f_1016[i /*41*/].f_13 = uParam0->f_1016[i /*41*/].f_13 + uParam0->f_1888;
		
			if (uParam0->f_1016[i /*41*/].f_12 > 180f)
				uParam0->f_1016[i /*41*/].f_12 = -180f + (MISC::ABSF(uParam0->f_1016[i /*41*/].f_12) - 180f);
			else if (uParam0->f_1016[i /*41*/].f_12 < -180f)
				uParam0->f_1016[i /*41*/].f_12 = 180f - MISC::ABSF(uParam0->f_1016[i /*41*/].f_12) - 180f;
		
			if (uParam0->f_1016[i /*41*/].f_13 > 180f)
				uParam0->f_1016[i /*41*/].f_13 = -180f + (MISC::ABSF(uParam0->f_1016[i /*41*/].f_13) - 180f);
			else if (uParam0->f_1016[i /*41*/].f_13 < -180f)
				uParam0->f_1016[i /*41*/].f_13 = 180f - MISC::ABSF(uParam0->f_1016[i /*41*/].f_13) - 180f;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (uParam0->f_1633[i /*15*/].f_11)
		{
			uParam0->f_1633[i /*15*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1633[i /*15*/], -uParam0->f_1888, uParam0->f_1885) };
			uParam0->f_1633[i /*15*/].f_6.f_2 = uParam0->f_1633[i /*15*/].f_6.f_2 + uParam0->f_1888;
		}
	}

	func_303(uParam0, 8388608);
	return;
}

BOOL func_705(var uParam0, int iParam1) // Position - 0x18273 Hash - 0xA0C1E573 ^0xE690FDAB
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/].f_2 == 9 && uParam0->f_475[i /*18*/].f_4 == iParam1 && !func_343(&uParam0->f_1522[iParam1 /*10*/], 32) && uParam0->f_475[i /*18*/].f_1 == 0 && !func_553(&uParam0->f_475[i /*18*/], 512) || func_553(&uParam0->f_475[i /*18*/], 1))
			return true;
	}

	return false;
}

void func_706(var uParam0, AnimScene ansParam1) // Position - 0x18308 Hash - 0xFF61192A ^0x96EC2DBF
{
	int i;
	var entityId;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2))
		{
			TEXT_LABEL_ASSIGN_STRING(&entityId, uParam0->f_3[i /*13*/].f_9, 64);
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&entityId))
				entityId = { func_342(uParam0, uParam0->f_3[i /*13*/].f_2) };
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&entityId))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(ansParam1, &entityId))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam1, &entityId, uParam0->f_3[i /*13*/].f_2, 0);
				
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2) != Global_35)
						PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2), false);
				}
				else if (func_699(uParam0->f_3[i /*13*/].f_1))
				{
					if (func_574())
					{
						TEXT_LABEL_ASSIGN_STRING(&entityId, func_393(joaat("Player_Zero")), 64);
					
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(ansParam1, &entityId))
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam1, &entityId, uParam0->f_3[i /*13*/].f_2, 0);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&entityId, func_393(joaat("player_three")), 64);
					
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(ansParam1, &entityId))
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam1, &entityId, uParam0->f_3[i /*13*/].f_2, 0);
					}
				}
			}
		}
	}

	return;
}

BOOL func_707(Hash hParam0) // Position - 0x18447 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_708(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x18455 Hash - 0xDD2F88C2 ^0x29E97850
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_709(var uParam0) // Position - 0x18497 Hash - 0x891BE8FA ^0x57EC5935
{
	int i;
	Ped pedInDraftHarness;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_1))
	{
		i = 0;
	
		for (i = 0; i < 6; i = i + 1)
		{
			pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2), i);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
				PED::DELETE_PED(&pedInDraftHarness);
		}
	}

	return;
}

void func_710(var uParam0) // Position - 0x184ED Hash - 0x23B904F0 ^0xC5B77813
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		func_166(uParam0->f_1633[i /*15*/].f_12);
	}

	return;
}

void func_711(var uParam0) // Position - 0x18516 Hash - 0xA664E5E6 ^0xD5ABD26
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (uParam0->f_1633[i /*15*/].f_11)
		{
			func_166(uParam0->f_1633[i /*15*/].f_12);
		
			switch (uParam0->f_1633[i /*15*/].f_9)
			{
				case 0:
					uParam0->f_1633[i /*15*/].f_12 = VOLUME::CREATE_VOLUME_BOX(uParam0->f_1633[i /*15*/], uParam0->f_1633[i /*15*/].f_6, uParam0->f_1633[i /*15*/].f_3);
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(uParam0->f_1633[i /*15*/].f_12, 15);
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_1633[i /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
			
				case 1:
					uParam0->f_1633[i /*15*/].f_12 = VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_1633[i /*15*/], uParam0->f_1633[i /*15*/].f_6, uParam0->f_1633[i /*15*/].f_3);
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(uParam0->f_1633[i /*15*/].f_12, 15);
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_1633[i /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

const char* func_712(var uParam0, Ped pedParam1) // Position - 0x1862E Hash - 0xBCF80312 ^0xB76F0166
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return "";

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1)
			return func_805(uParam0->f_13[i /*12*/].f_1);
	}

	return "";
}

BOOL func_713(int iParam0, int iParam1) // Position - 0x18691 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_714(int iParam0, int iParam1, BOOL bParam2) // Position - 0x186A1 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

void func_715(eStackSize essParam0) // Position - 0x186C7 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_460(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_806(essParam0);
	
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

void func_716(eStackSize essParam0) // Position - 0x1872F Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_114(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_255(essParam0)))
		{
			func_651(essParam0, 67108864, true);
			func_560(essParam0, 19, true);
		}
	}

	return;
}

float func_717(eStackSize essParam0) // Position - 0x18762 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_460(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_718(eStackSize essParam0) // Position - 0x18783 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_255(essParam0);
	persChar = func_561(essParam0, false);
	func_807(essParam0, ped);

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

BOOL func_719(eStackSize essParam0) // Position - 0x187DD Hash - 0x6410553A ^0x46627D03
{
	if (!func_460(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_720(eStackSize essParam0) // Position - 0x18829 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_460(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_721(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x18851 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_460(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_722(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x188B6 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_460(essParam0))
		return 0;

	mount = func_567(essParam0);

	if (func_152(mount, 0))
	{
		if (func_152(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_719(essParam0) || func_720(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_808(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_809(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_810(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_811(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_811(essParam0, false));
					func_812(essParam0);
				}
			}
			else
			{
				if (func_262(essParam0, 32768, true))
				{
					persChar = func_811(essParam0, false);
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
		if (func_152(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_262(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_810(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_811(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_811(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_810(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_813(essParam0, 0);
	return 1;
}

BOOL func_723(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x18A67 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_724(Volume volParam0, BOOL bParam1) // Position - 0x18A81 Hash - 0xEA796703 ^0x695D7925
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

BOOL func_725(int iParam0) // Position - 0x18AE9 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_395(iParam0, 2);
}

int func_726(Hash hParam0) // Position - 0x18AF8 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_442(outSlotId);
}

BOOL func_727(Hash hParam0) // Position - 0x18B1B Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

int func_728(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x18B43 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_441(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_814(398 + i, 1);
		
			if (func_608(hParam0, &unk, hash, false))
			{
				if (func_609(hParam0, &unk6, hash))
				{
					unk28 = { func_450(hParam0, unk, hash, false) };
					func_815(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_816(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_817(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_818(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_729(Ped pedParam0, var uParam1, var uParam2) // Position - 0x18C95 Hash - 0x236D39D4 ^0x39F583A
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

BOOL func_730(Hash hParam0) // Position - 0x18EAC Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_731(Any anParam0, int iParam1, int iParam2) // Position - 0x18EBE Hash - 0xE564BF7A ^0xB6EF860A
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
	flag = func_819(iParam1, 128);

	if (func_820("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_821(&unk, i, num, num2))
			{
			}
			else if (!func_427(unk.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(unk.f_4) && !WEAPON::IS_WEAPON_BOW(unk.f_4))
			{
			}
			else if (iParam2 != 0 && unk.f_4 == iParam2)
			{
			}
			else if (!func_819(iParam1, 512) && func_733(unk.f_4, &unk15, &unk19, joaat("SLOTID_WEAPON_0")) && !unk19.f_21)
			{
			}
			else if (!flag || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, unk.f_4))
			{
				if (WEAPON::_IS_WEAPON_TWO_HANDED(unk.f_4) || func_707(unk.f_4) && !WEAPON::IS_WEAPON_SHOTGUN(unk.f_4) || func_819(iParam1, 16) && !WEAPON::_IS_WEAPON_SNIPER(unk.f_4) || func_819(iParam1, 4) && !func_707(unk.f_4) || func_819(iParam1, 8) && !WEAPON::IS_WEAPON_REPEATER(unk.f_4) || !func_819(iParam1, 8388608) && !WEAPON::IS_WEAPON_RIFLE(unk.f_4) || !func_819(iParam1, 1048576))
				{
					if (weaponHash == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &unk) > WEAPON::_0xA2091482ED42EF85(Global_35, anParam0))
					{
						weaponHash = unk.f_4;
						*anParam0 = { unk };
					}
				}
			}
		}
	
		func_822(num);
	}

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
	}
	else if (!func_819(iParam1, 512) && !func_819(iParam1, 1024))
	{
		iParam1 = iParam1 | 512;
		return func_731(anParam0, iParam1, iParam2);
	}
	else if (func_819(iParam1, 256))
	{
		weaponHash = joaat("WEAPON_UNARMED");
	}

	return weaponHash;
}

BOOL func_732(int iParam0) // Position - 0x190ED Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_823(iParam0))
		return false;

	return func_824(iParam0);
}

BOOL func_733(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x19109 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_452(false);
	*panParam1 = { func_450(hParam0, func_606(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

void func_734(int iParam0, int iParam1) // Position - 0x1914E Hash - 0x19A9221A ^0x79EEA925
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
			if (func_825(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_825(&iParam0->f_2[i /*2*/], 1))
					func_826(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_735(int iParam0, int iParam1, int iParam2) // Position - 0x1927A Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_827(iParam0, 1))
		func_828(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_736(int iParam0) // Position - 0x192C1 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_443(iParam0, 1) /*3*/] != Global_1946054.f_57[func_443(iParam0, 1) /*11*/];
}

void func_737(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x192F9 Hash - 0xE34B9CEC ^0xAFBB60FB
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

	if (hParam0->f_1[num4 /*3*/].f_1 == 1216705912 || hParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			hParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			hParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			hParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_618(num2, num);
	
		if (bParam1)
			func_618(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_618(num3, num);
	}

	return;
}

BOOL func_738(Hash hParam0) // Position - 0x193E5 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_739(int iParam0) // Position - 0x19428 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_829();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_740(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x1944E Hash - 0x3A135443 ^0x969430D9
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

BOOL func_741(Hash hParam0, int iParam1, var uParam2) // Position - 0x19492 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_742(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x194A3 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_443(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_431(524288))
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

int func_743(Hash hParam0) // Position - 0x1950E Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_744(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19559 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_254() == -1)
		func_830(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_831(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_745(BOOL bParam0, eStackSize essParam1) // Position - 0x195CF Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_254() == -1)
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

Hash func_746(eStackSize essParam0) // Position - 0x1964C Hash - 0xB8EC44B7 ^0xE877E9C4
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

void func_747(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x19B81 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_832(&(Global_1946054.f_1378), essParam0);
	func_833(2, essParam0, 6);

	if (bParam1)
		func_748(false, true);

	return;
}

void func_748(BOOL bParam0, BOOL bParam1) // Position - 0x19BA9 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_834(0);

	if (bParam0)
	{
		func_429(8);
		func_429(512);
	}
	else
	{
		func_429(8);
		func_429(16);
	}

	return;
}

char* func_749(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x19BDC Hash - 0xC24B5846 ^0x652455B5
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

float func_750() // Position - 0x19C85 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_835())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_836(2);

	if (Global_1347477.f_119)
		return func_836(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_837();
	num3 = func_838();
	num4 = func_839();
	num5 = func_840();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_841());
	num8 = func_836(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_842(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_843(3, num9, num9 > 100f);
	return func_844(num8, -100f, 100f);
}

float func_751() // Position - 0x19DAE Hash - 0x951B1CCC ^0x7B312694
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

	if (func_835())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_836(1);

	if (Global_1347477.f_119)
		return func_836(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_837();
	num3 = func_838();
	num4 = func_839();
	num5 = func_840();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_841());
	num8 = func_836(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_842(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_843(2, num9, num9 > 100f);
	return func_844(num8, -100f, 100f);
}

float func_752() // Position - 0x19ED7 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_835())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_836(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_845())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_846())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_836(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_837();
	num3 = func_838();
	num4 = func_839();
	num5 = func_840();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_841());
	num8 = func_836(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_842(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_843(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_836(0);

	return func_844(num8, -100f, 100f);
}

int func_753(int iParam0) // Position - 0x1A07E Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_754(ePedType eptParam0) // Position - 0x1A0FF Hash - 0x5000025C ^0x5000025C
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

void func_755(Ped pedParam0, Hash hParam1) // Position - 0x1A552 Hash - 0xEA1C858E ^0xA75CB9E5
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_767(pedParam0, hParam1))
		{
			if (func_768(pedParam0, hParam1))
			{
				if (func_769(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_770(pedParam0);
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

void func_756(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x1A5FC Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_757(Ped pedParam0, BOOL bParam1) // Position - 0x1A62C Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_758(Ped pedParam0, int iParam1) // Position - 0x1A671 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

float func_759(float fParam0, float fParam1) // Position - 0x1A698 Hash - 0x99935A7D ^0x99935A7D
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

int func_760(eStackSize essParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A6AF Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_460(essParam0))
		return 0;

	num = CLOCK::GET_CLOCK_HOURS() + 1;

	if (num == 25)
		num = 0;

	unk = 5;
	endRange = 0;

	switch (essParam1)
	{
		case 0:
			switch (essParam0)
			{
				case 1:
					if (func_847(Global_1835011[4 /*74*/].f_1, true))
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
			switch (essParam0)
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
					if (func_848(num, 9, 11))
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
					if (func_847(Global_1347702[63 /*49*/].f_15, true) || func_306(Global_1347702[63 /*49*/].f_15))
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
					if (func_848(num, 9, 12))
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
					if (!func_847(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_262(18, 134217728, true))
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
			switch (essParam0)
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
					if (func_848(num, 9, 11))
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
					if (func_847(Global_1347702[134 /*49*/].f_15, true) || func_306(Global_1347702[134 /*49*/].f_15))
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
			switch (essParam0)
			{
				case 2:
					if (func_847(Global_1835011[38 /*74*/].f_1, true))
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
			switch (essParam0)
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
					if (func_848(num, 9, 11))
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
			switch (essParam0)
			{
				case 4:
					if (func_849(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_847(Global_1347702[1 /*49*/].f_15, true))
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
			switch (essParam0)
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

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_255(essParam0)))
	{
		for (i = 0; i < endRange; i = i + 1)
		{
			if (unk[i] == Global_40.f_4942[essParam0 /*60*/].f_3)
			{
				flag = true;
				num2 = Global_40.f_4942[essParam0 /*60*/].f_3;
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

	if (!func_644(essParam0, num2))
		num2 = Global_40.f_4942[essParam0 /*60*/].f_3;

	return num2;
}

BOOL func_761(int iParam0) // Position - 0x1B497 Hash - 0x5000025C ^0x5000025C
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

BOOL func_762(eStackSize essParam0, BOOL bParam1) // Position - 0x1B4C4 Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_460(essParam0))
		return false;

	if (!bParam1)
		if (func_115(essParam0) || func_490(essParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[essParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[essParam0 /*1157*/].f_1, Global_1360165[essParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

struct<7> func_763(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0x1B54D Hash - 0xDA7D22BD ^0xF82EFD7F
{
	eStackSize stackSize;

	stackSize = essParam0;
	stackSize.f_1 = iParam1;
	stackSize.f_3 = { uParam2 };
	stackSize.f_2 = iParam8;
	stackSize.f_6 = 0;

	if (bParam5)
		MISC::SET_BIT(&(stackSize.f_6), 0);

	if (bParam6)
		MISC::SET_BIT(&(stackSize.f_6), 1);

	if (bParam7)
		MISC::SET_BIT(&(stackSize.f_6), 2);

	if (bParam9)
		MISC::SET_BIT(&(stackSize.f_6), 3);

	return stackSize;
}

BOOL func_764(eStackSize essParam0, int iParam1) // Position - 0x1B5B0 Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_460(essParam0))
		return false;

	func_850(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_65[num], offset);
}

BOOL func_765(int iParam0) // Position - 0x1B5E6 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

Hash func_766(int iParam0, eStackSize essParam1) // Position - 0x1B5F9 Hash - 0xE1D12727 ^0x6E706E61
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
			switch (essParam1)
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
			num = func_851(296923297, essParam1);
			return func_852(num);
	
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
			num = func_851(1237718549, essParam1);
			return func_852(num);
	
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

BOOL func_767(Ped pedParam0, Hash hParam1) // Position - 0x1BA9B Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_768(Ped pedParam0, Hash hParam1) // Position - 0x1BAC9 Hash - 0xA54F3032 ^0xAA91EB6F
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

BOOL func_769(Ped pedParam0, Hash hParam1) // Position - 0x1BB1A Hash - 0xA54F3032 ^0xAA91EB6F
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_767(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_770(Ped pedParam0) // Position - 0x1BB8C Hash - 0x446F1BDD ^0xC82FECCD
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_771(eStackSize essParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1BBAA Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1 > 0 && func_767(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4096 > 0 && func_767(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MICRO > 0 && func_767(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 256 > 0 && func_767(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MINI > 0 && func_767(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1024 > 0 && func_767(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2048 > 0 && func_767(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & -2147483648 > 0 && func_767(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 65536 > 0 && func_767(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16384 > 0 && func_767(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 262144 > 0 && func_767(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 524288 > 0 && func_767(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1048576 > 0 && func_767(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2097152 > 0 && func_767(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 32768 > 0 && func_767(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 131072 > 0 && func_767(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4194304 > 0 && func_767(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8388608 > 0 && func_767(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16777216 > 0 && func_767(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 33554432 > 0 && func_767(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 67108864 > 0 && func_767(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 134217728 > 0 && func_767(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 268435456 > 0 && func_767(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 536870912 > 0 && func_767(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1073741824 > 0 && func_767(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8192 > 0 && func_767(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_57 = 1;

	return;
}

void func_772(eStackSize essParam0) // Position - 0x1C18C Hash - 0x83966A8E ^0x24FDDDED
{
	func_853(essParam0, 1);
	func_853(essParam0, MICRO);
	func_853(essParam0, 256);
	func_853(essParam0, MINI);
	func_853(essParam0, 1024);
	func_853(essParam0, 2048);
	func_853(essParam0, 4096);
	func_853(essParam0, 65536);
	func_853(essParam0, 16384);
	func_853(essParam0, 262144);
	func_853(essParam0, 524288);
	func_853(essParam0, 1048576);
	func_853(essParam0, 2097152);
	func_853(essParam0, 32768);
	func_853(essParam0, 131072);
	func_853(essParam0, 134217728);
	func_853(essParam0, 1073741824);
	return;
}

void func_773(eStackSize essParam0, BOOL bParam1) // Position - 0x1C235 Hash - 0xA7580A6E ^0x863E8C2E
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		return;

	if (!bParam1)
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[essParam0 /*1157*/], "wearing_bandana"))
			DECORATOR::DECOR_REMOVE(Global_1360165[essParam0 /*1157*/], "wearing_bandana");
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[essParam0 /*1157*/], "wearing_bandana"))
		DECORATOR::DECOR_SET_BOOL(Global_1360165[essParam0 /*1157*/], "wearing_bandana", true);

	return;
}

void func_774(Player plParam0) // Position - 0x1C2A8 Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_854(plParam0, false))
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

void func_775(eStackSize essParam0) // Position - 0x1C2F4 Hash - 0xB1E2E498 ^0xC7EBD371
{
	Player player;

	if (!func_460(essParam0))
		return;

	if (func_809(essParam0, false) == 0)
		return;

	player = func_567(essParam0);
	func_774(player);
	func_721(essParam0, 8192, true);
	return;
}

void func_776(Player plParam0) // Position - 0x1C32F Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_854(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 0, false);
	return;
}

void func_777(eStackSize essParam0) // Position - 0x1C35C Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Player player;

	if (!func_460(essParam0))
		return;

	if (func_809(essParam0, false) == 0)
		return;

	player = func_567(essParam0);
	func_776(player);
	func_721(essParam0, 8192, false);
	return;
}

void func_778(Player plParam0) // Position - 0x1C397 Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_854(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, false);
	return;
}

void func_779(Ped pedParam0) // Position - 0x1C3CD Hash - 0x6EDA2DDB ^0x823A87C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (func_115(14))
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

void func_780(eStackSize essParam0) // Position - 0x1C44C Hash - 0xB1E2E498 ^0x545B1681
{
	Player player;

	if (!func_460(essParam0))
		return;

	if (func_809(essParam0, false) == 0)
		return;

	player = func_567(essParam0);
	func_778(player);
	func_721(essParam0, 16384, true);
	return;
}

void func_781(Player plParam0) // Position - 0x1C487 Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_854(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, true);
	return;
}

void func_782(eStackSize essParam0) // Position - 0x1C4BB Hash - 0x28CD0E89 ^0x67E48CA5
{
	Player player;

	if (!func_460(essParam0))
		return;

	if (func_809(essParam0, false) == 0)
		return;

	player = func_567(essParam0);
	func_781(player);
	func_721(essParam0, 16384, false);
	return;
}

void func_783(var uParam0, int iParam1) // Position - 0x1C4F6 Hash - 0x4F8BE4B5 ^0x4310E6A5
{
	uParam0->f_14 = iParam1;
	return;
}

BOOL func_784() // Position - 0x1C504 Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_855();
}

BOOL func_785() // Position - 0x1C510 Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_856();
}

float func_786(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1C51C Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_787(var uParam0, int iParam1) // Position - 0x1C53D Hash - 0x27ED4AFD ^0x27ED4AFD
{
	var unk;

	if (func_681())
		return true;

	if (func_407(&unk))
		return true;

	if (func_427(func_708(Global_35, false, 0, false)) && !func_305(&uParam0->f_1016[iParam1 /*41*/], 16) && !func_305(&uParam0->f_1016[iParam1 /*41*/], 64))
		return true;

	return false;
}

void func_788(var uParam0, Ped pedParam1, const char* sParam2, BOOL bParam3) // Position - 0x1C59D Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_857(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_789(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1C5FA Hash - 0xFDACD718 ^0x658C9335
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

BOOL func_790(int iParam0, int iParam1) // Position - 0x1C64C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_791(eStackSize essParam0) // Position - 0x1C65B Hash - 0x1D38F5CA ^0xC923C5D1
{
	eStackSize i;

	if (!func_81(essParam0))
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
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2 == essParam0)
							return true;
						break;
				}
			}
		}
	}

	return false;
}

void func_792(var uParam0, BOOL bParam1) // Position - 0x1C6FF Hash - 0x34798522 ^0x2CB7B22C
{
	Hash weaponHash;

	if (!func_63(uParam0, 64) && func_315(uParam0) != 0)
		return;

	if (!bParam1)
	{
		weaponHash = func_708(Global_35, false, 0, false);
	
		if (WEAPON::IS_WEAPON_VALID(weaponHash))
		{
			if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(weaponHash))
			{
				WEAPON::MAKE_PED_DROP_WEAPON(Global_35, true, 0, true, false);
				func_324(uParam0, 256);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
		}
	
		weaponHash = func_708(Global_35, false, 1, false);
	
		if (WEAPON::IS_WEAPON_VALID(weaponHash))
		{
			if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(weaponHash))
			{
				WEAPON::MAKE_PED_DROP_WEAPON(Global_35, true, 1, true, false);
				func_324(uParam0, 256);
			}
		}
	}
	else
	{
		func_858(0);
		func_858(1);
	}

	return;
}

void func_793(var uParam0, BOOL bParam1) // Position - 0x1C7AF Hash - 0x35E0B933 ^0x12591F16
{
	if (bParam1)
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32 | 256, false);
	else
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32, false);

	func_527(uParam0, 4);
	HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);

	if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);

	if (func_315(uParam0) == 0 && uParam0->f_1684 >= 0 && !func_305(&uParam0->f_1016[uParam0->f_1684 /*41*/], 524288))
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
		func_462(uParam0, 64);
	}

	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	func_859(false);

	if (func_222())
		func_223(false);

	return;
}

void func_794(var uParam0, var uParam1, var uParam2) // Position - 0x1C86F Hash - 0x142BE781 ^0xCEFD9802
{
	int duration;
	float entityHeading;

	duration = 250;

	if (func_427(func_426(Global_35, 0, true, false)) || func_427(func_426(Global_35, 1, true, false)))
		duration = 2000;

	entityHeading = ENTITY::GET_ENTITY_HEADING(Global_35);

	if (!_IS_NULL_VECTOR(uParam0))
	{
		entityHeading = func_425(Global_36, uParam0, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, duration, entityHeading, false, true);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, duration, entityHeading, true, true);
	}

	return;
}

void func_795(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0x1C8EE Hash - 0x8427A12E ^0xF1B5D9E8
{
	if (func_553(&uParam0->f_475[iParam1 /*18*/], 32))
	{
		if (func_63(uParam0, 8))
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1684 /*41*/].f_1 + func_503(Global_36 - uParam0->f_1016[uParam0->f_1684 /*41*/].f_1) };
		
			if (!func_463(&uParam0->f_1016[uParam0->f_1684 /*41*/], 2))
				*uParam3 = func_425(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			else
				*uParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
		}
		else
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 + func_503(Global_36 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1) };
		
			if (!func_463(&uParam0->f_1016[uParam0->f_1688 /*41*/], 2))
				*uParam3 = func_425(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
			else
				*uParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
		}
	}
	else
	{
		*uParam2 = { func_860(uParam0) };
	
		if (func_63(uParam0, 8))
			if (!func_463(&uParam0->f_1016[uParam0->f_1684 /*41*/], 2))
				*uParam3 = func_425(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			else
				*uParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
		else if (!func_463(&uParam0->f_1016[uParam0->f_1688 /*41*/], 2))
			*uParam3 = func_425(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		else
			*uParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
	}

	return;
}

BOOL func_796(var uParam0, var uParam1) // Position - 0x1CAA7 Hash - 0xBCB28A71 ^0xA9158D0F
{
	var matrix;
	int i;
	AnimScene animScene;

	for (i = 0; i < 30; i = i + 1)
	{
		if (uParam0->f_475[i /*18*/].f_17 == 1 && uParam0->f_475[i /*18*/].f_2 == 9 && uParam0->f_475[i /*18*/].f_4 >= 0 && uParam0->f_475[i /*18*/] == uParam1)
		{
			animScene = uParam0->f_1522[uParam0->f_475[i /*18*/].f_4 /*10*/].f_8;
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene) && ANIMSCENE::IS_ANIM_SCENE_LOADED(animScene, true, false) && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(animScene, func_212(Global_35)))
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(animScene, func_212(Global_35), &matrix, false, 0, 2))
					if (!_IS_NULL_VECTOR(matrix))
						return true;
		}
	}

	return false;
}

void func_797(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7) // Position - 0x1CB6F Hash - 0xF044DCF1 ^0x1D0FFAEF
{
	var unk;
	var unk8;
	int i;
	float value;

	func_861(&unk, 0f, Global_36 - { 1f, 0f, 0f }, -2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35)), 2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35)), 0f);
	func_861(&unk8, 1f, uParam3, -2f * BUILTIN::SIN(fParam6), 2f * BUILTIN::COS(fParam6), 0f);

	if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) >= 90f)
			value = 180f;
		else
			value = 90f;
	}
	else
	{
		value = uParam0->f_1016[iParam1 /*41*/].f_12 - uParam0->f_1016[iParam1 /*41*/].f_13;
	
		if (value >= 180f)
			value = value - 360f;
		else if (value <= -180f)
			value = value + 360f;
	
		value = value / 2f;
	
		if (uParam0->f_1016[iParam1 /*41*/].f_12 < uParam0->f_1016[iParam1 /*41*/].f_13)
			value = uParam0->f_1016[iParam1 /*41*/].f_12 + MISC::ABSF(value);
		else
			value = uParam0->f_1016[iParam1 /*41*/].f_13 + MISC::ABSF(value);
	
		if (value >= 180f)
			value = value - 360f;
		else if (value <= -180f)
			value = value + 360f;
	}

	*uParam7 = { uParam0->f_1016[iParam1 /*41*/].f_1 + { 0f, BUILTIN::COS(value) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2f), BUILTIN::SIN(value) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2f) } };

	for (i = 0; i < 5; i = i + 1)
	{
		uParam2->[i /*3*/] = { func_862(Global_36, *uParam7, uParam3, (float)i + 1 / BUILTIN::TO_FLOAT(5)) };
	}

	return;
}

void func_798(var uParam0, int iParam1, BOOL bParam2, var uParam3) // Position - 0x1CD43 Hash - 0xFDBBF8B2 ^0xA5CA9FD
{
	Vector3 vector;

	if (bParam2)
		TASK::TASK_ACHIEVE_HEADING(0, func_425(Global_36, uParam3->[0 /*3*/], 1), 0);

	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608, 1084227584, 1193033728);

	if (func_463(&uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vector = { func_863(uParam0, iParam1) };
	
		if (!_IS_NULL_VECTOR(vector))
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vector, -1);
	}

	return;
}

void func_799(var uParam0, int iParam1, BOOL bParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1CDD5 Hash - 0x8CCACFE2 ^0x8CCACFE2
{
	Vector3 vector;
	float heading;
	int flags;
	float heading2;

	vector = { func_863(uParam0, iParam1) };

	if (!_IS_NULL_VECTOR(vector))
	{
		if (bParam2)
			TASK::TASK_ACHIEVE_HEADING(0, func_425(Global_36, vParam3, 1), 0);
	
		heading = func_425(vParam3, vector, 1);
	
		if (func_463(&uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
			heading = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
	
		if (func_553(&uParam0->f_475[iParam1 /*18*/], 256))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam3, 1f, 20000, heading, 1056964608, 0);
		}
		else
		{
			flags = 4;
			flags = flags | 4194304;
			heading = heading % 360f;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 1048576000, flags, heading);
		}
	
		if (!func_463(&uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/], 4) && !func_463(&uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vector, -1);
		}
		else
		{
			TASK::TASK_ACHIEVE_HEADING(0, heading, 0);
			TASK::TASK_STAND_STILL(0, -1);
		}
	}
	else
	{
		heading2 = 40000f;
	
		if (func_463(&uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
			heading2 = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
	
		heading2 = heading2 % 360f;
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 1048576000, 5, heading2);
	}

	return;
}

BOOL func_800() // Position - 0x1CF47 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_801(Hash hParam0) // Position - 0x1CF56 Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_855())
		return false;

	if (!func_408(hParam0, 0))
		return false;

	if (!func_864(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_802(Hash hParam0) // Position - 0x1CF8D Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_865(hParam0);
}

int func_803(Hash hParam0, int iParam1) // Position - 0x1CF9B Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_866(hParam0);

	if (func_614(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_407(&hash))
			if (flag)
				interactionAnimHash = func_867();
			else
				interactionAnimHash = func_868();
		else if (func_309(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_869();
		else
			interactionAnimHash = func_870();
	else if (func_592(&hash))
		if (func_614(hash, -1303648999))
			interactionAnimHash = func_867();
		else
			interactionAnimHash = func_868();
	else if (flag)
		interactionAnimHash = func_869();
	else
		interactionAnimHash = func_870();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

char* func_804(int iParam0) // Position - 0x1D06E Hash - 0xE6862179 ^0xB784C776
{
	switch (iParam0)
	{
		case 0:
			return "leadinData/zones/zone(%i)";
	
		case 1:
			return ":x1";
	
		case 2:
			return ":y1";
	
		case 3:
			return ":z1";
	
		case 4:
			return ":x2";
	
		case 5:
			return ":y2";
	
		case 6:
			return ":z2";
	
		case 7:
			return ":edgex";
	
		case 8:
			return ":edgey";
	
		case 9:
			return ":edgez";
	
		case 10:
			return ":xhit";
	
		case 11:
			return ":yhit";
	
		case 12:
			return ":zhit";
	
		case 13:
			return ":height";
	
		case 14:
			return ":trig1";
	
		case 15:
			return ":trig2";
	
		case 16:
			return ":areaType";
	
		case 17:
			return ":moveBlend";
	
		case 18:
			return ":animBlend";
	
		case 19:
			return ":fCamZoom";
	
		case 20:
			return ":fDismount";
	
		case 21:
			return ":tlDialogueFile";
	
		case 22:
			return ":tlDialogueLabel";
	
		case 23:
			return ":iDialogueDelay";
	
		case 24:
			return ":bQuickStop";
	
		case 25:
			return ":nomount";
	
		case 26:
			return ":bAllowClimb";
	
		case 27:
			return ":bAllowWeapon";
	
		case 28:
			return ":bAllowCarry";
	
		case 29:
			return ":usevehicle";
	
		case 30:
			return ":bSwapWeapon";
	
		case 31:
			return ":fFixupBuffer";
	
		case 32:
			return ":bAllowBandana";
	
		case 33:
			return ":bPickupCarriable";
	
		case 34:
			return ":bAllowCrouch";
	
		case 35:
			return ":playlist";
	
		case 36:
			return ":bPlayerHasControl";
	
		case 37:
			return ":bStopToHolster";
	
		case 38:
			return ":bFixupPlayerEarly";
	
		case 39:
			return ":walkStopOptions";
	
		case 40:
			return ":fWalkStopHeading";
	
		case 41:
			return ":bAllowLasso";
	
		case 42:
			return ":bNoLetterbox";
	
		case 43:
			return ":index";
	
		case 44:
			return ":tele";
	
		case 45:
			return "leadinData/scenes/scene(%i)";
	
		case 46:
			return ":sceneName";
	
		case 47:
			return ":sceneIndex";
	
		case 48:
			return ":sceneRel";
	
		case 49:
			return ":sceneFoot";
	
		case 50:
			return "leadinData/entities/entity(%i)";
	
		case 51:
			return ":model";
	
		case 52:
			return ":tlVoiceID";
	
		case 53:
			return ":fVisible";
	
		case 54:
			return ":weapon";
	
		case 55:
			return ":forceinhand";
	
		case 56:
			return ":bDeleteDraftAnimals";
	
		case 57:
			return "leadinData/behaviours/behaviour(%i)";
	
		case 58:
			return ":zone";
	
		case 59:
			return ":when";
	
		case 60:
			return ":what";
	
		case 61:
			return ":who";
	
		case 62:
			return ":syncType";
	
		case 63:
			return ":loop";
	
		case 64:
			return ":pause";
	
		case 65:
			return ":master";
	
		case 66:
			return ":bezier";
	
		case 67:
			return ":bezheading";
	
		case 68:
			return ":fVisible";
	
		case 69:
			return ":useradoffset";
	
		case 70:
			return ":radoffset";
	
		case 71:
			return ":returnlook";
	
		case 72:
			return ":lookatwho";
	
		case 73:
			return ":behaviourtype";
	
		case 74:
			return ":lookatplayer";
	
		case 75:
			return ":animscene";
	
		case 76:
			return ":nonavmesh";
	
		case 77:
			return ":phaseplayerend";
	
		case 78:
			return ":lookblendin";
	
		case 79:
			return ":lookblendout";
	
		case 80:
			return ":foliagemod";
	
		case 81:
			return ":disableinitloop";
	
		case 82:
			return "leadinData/cutscenes/cutscene(%i)";
	
		case 83:
			return ":cutName";
	
		case 84:
			return ":cutPlaylist";
	
		case 85:
			return "leadinData/cameras/camera(%i)";
	
		case 86:
			return ":index";
	
		case 87:
			return ":bDisabled";
	
		case 88:
			return ":bUseRightCam";
	
		case 89:
			return ":bUseLeftCam";
	
		case 90:
			return ":bUseCenterCam";
	
		case 91:
			return ":bUseNewCam";
	
		case 92:
			return ":bFocusOnEntity";
	
		case 93:
			return ":fNewCamFocusOffsetHorz";
	
		case 94:
			return ":fNewCamFocusOffsetVert";
	
		case 95:
			return ":iNewCamLookAt";
	
		case 96:
			return ":sCameraDictionaryName";
	
		case 97:
			return ":sCameraRequestName";
	
		case 98:
			return "leadinData/prepzones/prepzone(%i)";
	
		case 99:
			return ":vOrigin";
	
		case 100:
			return ":vRotation";
	
		case 101:
			return ":vScale";
	
		case 102:
			return ":eType";
	}

	return "";
}

char* func_805(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x1D6EF Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Hash func_806(int iParam0) // Position - 0x1D703 Hash - 0xBA965109 ^0xCB1D208B
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

void func_807(eStackSize essParam0, Ped pedParam1) // Position - 0x1D8DF Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_871(pedParam1);

	return;
}

float func_808(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x1D8F9 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_229(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_809(eStackSize essParam0, BOOL bParam1) // Position - 0x1D950 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_460(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_872(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_810(eStackSize essParam0) // Position - 0x1DA95 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_567(essParam0);

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

PersChar func_811(eStackSize essParam0, BOOL bParam1) // Position - 0x1DB0B Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_460(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_873(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_812(eStackSize essParam0) // Position - 0x1DB57 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_460(essParam0))
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

void func_813(eStackSize essParam0, int iParam1) // Position - 0x1DBAA Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_460(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

Hash func_814(int iParam0, int iParam1) // Position - 0x1DBCE Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_815(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x1FD18 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_874(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_612(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_816(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_452(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_816(BOOL bParam0) // Position - 0x1FDA8 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_254() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_452(bParam0));
}

int func_817(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1FDC6 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_875(hParam0))
		return 0;

	if (!func_816(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_818(Hash hParam0, int iParam1) // Position - 0x1FE01 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_876(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

BOOL func_819(int iParam0, int iParam1) // Position - 0x1FE49 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_820(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x1FE58 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_452(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_821(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1FE7F Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_822(int iParam0) // Position - 0x1FEBA Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_823(int iParam0) // Position - 0x1FEDB Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_824(int iParam0) // Position - 0x1FEEE Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_825(var uParam0, int iParam1) // Position - 0x1FF18 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_826(var uParam0, int iParam1, int iParam2) // Position - 0x1FF29 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_827(int iParam0, int iParam1) // Position - 0x1FF3C Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_828(int iParam0, int iParam1) // Position - 0x1FF4D Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

int func_829() // Position - 0x1FF60 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_830(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x1FF6E Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_831(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x1FFC9 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_832(Hash hParam0, eStackSize essParam1) // Position - 0x20035 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_254() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_830(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_831(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_833(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x200D0 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_254() == -1)
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

void func_834(int iParam0) // Position - 0x20158 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_835() // Position - 0x20169 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_836(int iParam0) // Position - 0x20185 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_837() // Position - 0x20197 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_877(13);
	num2 = func_878(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_838() // Position - 0x201DA Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_839() // Position - 0x201F5 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_879())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_840() // Position - 0x20214 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_841() // Position - 0x20256 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_842(int iParam0, int iParam1, BOOL bParam2) // Position - 0x20264 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_749(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_843(int iParam0, float fParam1, BOOL bParam2) // Position - 0x202B0 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_749(iParam0, 2, false, false);
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

float func_844(float fParam0, float fParam1, float fParam2) // Position - 0x203F6 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_845() // Position - 0x2041D Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_877(12) <= -99f;
}

BOOL func_846() // Position - 0x20431 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_877(12) >= 99f;
}

BOOL func_847(int iParam0, BOOL bParam1) // Position - 0x20445 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_505(iParam0))
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

BOOL func_848(int iParam0, int iParam1, int iParam2) // Position - 0x20476 Hash - 0xD8381BE7 ^0xD8381BE7
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

BOOL func_849(int iParam0, BOOL bParam1) // Position - 0x2051F Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_880(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

int func_850(int iParam0, var uParam1, var uParam2) // Position - 0x2055E Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_881(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_851(int iParam0, eStackSize essParam1) // Position - 0x20580 Hash - 0x2641680 ^0x6B70222B
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

	if (essParam1 != -1)
		if (func_644(essParam1, num))
			num2 = num;

	return num2;
}

int func_852(int iParam0) // Position - 0x20657 Hash - 0xDEAE5330 ^0x7DE1135D
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

void func_853(eStackSize essParam0, eStackSize essParam1) // Position - 0x206CE Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[essParam0 /*60*/].f_5 = Global_40.f_4942[essParam0 /*60*/].f_5 - Global_40.f_4942[essParam0 /*60*/].f_5 && essParam1;
	return;
}

BOOL func_854(Ped pedParam0, BOOL bParam1) // Position - 0x206FE Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

BOOL func_855() // Position - 0x2072B Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_882())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_856() // Position - 0x20775 Hash - 0x3CA1BB47 ^0x53BEDD8B
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bandana")) > 0)
		return 1;

	return 0;
}

BOOL func_857(var uParam0, Ped pedParam1, const char* sParam2) // Position - 0x2078F Hash - 0xFB1C2C0E ^0x6794528D
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

void func_858(int iParam0) // Position - 0x2080D Hash - 0x18700B53 ^0xA392AC83
{
	Hash weaponHash;

	weaponHash = func_708(Global_35, false, iParam0, false);

	if (func_427(weaponHash))
	{
		if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(weaponHash))
			WEAPON::MAKE_PED_DROP_WEAPON(Global_35, true, iParam0, true, false);
		else if (func_707(weaponHash))
			if (func_427(func_708(Global_35, false, 7, false)) || func_427(func_708(Global_35, false, 9, false)))
				if (func_427(func_708(Global_35, false, 8, false)))
					func_883(weaponHash);
				else
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 8, false, false);
			else
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 7, false, false);
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && weaponHash != joaat("weapon_fishingrod"))
			if (func_427(func_708(Global_35, false, 7, false)) || func_427(func_708(Global_35, false, 9, false)))
				if (func_427(func_708(Global_35, false, 10, false)))
					func_883(weaponHash);
				else
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 10, false, false);
			else
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			if (iParam0 == 0)
				if (!func_427(func_708(Global_35, false, 2, false)))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 2, false, false);
				else
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
			else
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
	
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iParam0, false, false);
	}

	return;
}

void func_859(BOOL bParam0) // Position - 0x2098D Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

Vector3 func_860(var uParam0) // Position - 0x209A7 Hash - 0x5635D4CD ^0xE791861D
{
	if (func_63(uParam0, 8))
		return uParam0->f_1016[uParam0->f_1684 /*41*/].f_7;

	if (uParam0->f_1688 >= 0)
		return uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;

	return 0f, 0f, 0f;
}

void func_861(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, float fParam7) // Position - 0x209EC Hash - 0xCAC517D3 ^0xA22AB5D
{
	*uParam0 = fParam1;
	uParam0->f_4 = { uParam2 };
	uParam0->f_1 = { fParam5 };
	return;
}

Vector3 func_862(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9) // Position - 0x20A0D Hash - 0xE27EC6B ^0xE27EC6B
{
	var unk;
	var unk4;

	unk = { func_884(uParam0, uParam3, fParam9) };
	unk4 = { func_884(uParam3, uParam6, fParam9) };
	return func_884(unk, unk4, fParam9);
}

Vector3 func_863(var uParam0, int iParam1) // Position - 0x20A47 Hash - 0xC86EE5DE ^0x7AA7604
{
	int i;

	if (uParam0->f_475[iParam1 /*18*/].f_3 >= 0)
	{
		for (i = 0; i < 35; i = i + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[i /*13*/].f_2) && uParam0->f_475[iParam1 /*18*/].f_3 == uParam0->f_3[i /*13*/].f_3)
				if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3[i /*13*/].f_2) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[i /*13*/].f_2) != Global_35)
					return ENTITY::GET_ENTITY_COORDS(uParam0->f_3[i /*13*/].f_2, true, false);
		}
	}

	return 0f, 0f, 0f;
}

BOOL func_864(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x20AE1 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_408(hParam0, 0))
		return false;

	num = func_605(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_885(hParam0, 1))
			return false;

	return func_886(hParam0, false, bParam2) >= iParam1;
}

BOOL func_865(Hash hParam0) // Position - 0x20B4B Hash - 0x76026CA6 ^0xF319C9CA
{
	Hash hash;

	hash = func_409(hParam0);

	if (hash == 81053684 || hash == -525676072)
		return 1;

	return 0;
}

BOOL func_866(Hash hParam0) // Position - 0x20B79 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_592(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

Hash func_867() // Position - 0x20BA3 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_887())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_868() // Position - 0x20BFA Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_887())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_869() // Position - 0x20C51 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_887())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_870() // Position - 0x20CA8 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_887())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

void func_871(Ped pedParam0) // Position - 0x20CFF Hash - 0xE7050FE7 ^0xC764E613
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

Hash func_872(eStackSize essParam0) // Position - 0x20D67 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_460(essParam0))
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

	if (!func_460(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_873(eStackSize essParam0) // Position - 0x20E48 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_460(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_809(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

BOOL func_874(Hash hParam0) // Position - 0x20EE4 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_875(Hash hParam0) // Position - 0x20EFA Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_876(int iParam0, int iParam1) // Position - 0x20F08 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

float func_877(int iParam0) // Position - 0x20F1E Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_878(float fParam0) // Position - 0x20F32 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

BOOL func_879() // Position - 0x20F4D Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_880(int iParam0) // Position - 0x20F5E Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_888(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

int func_881(int iParam0, int iParam1) // Position - 0x20F82 Hash - 0xB7443904 ^0xB7443904
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

BOOL func_882() // Position - 0x21316 Hash - 0xFF29F962 ^0xFF29F962
{
	int num;

	num = Global_1946054.f_529[9];
	num = num + Global_1946054.f_529[4];
	num = num + Global_1946054.f_529[10];
	num = num + Global_1946054.f_529[1];
	num = num + Global_1946054.f_529[2];
	num = num + Global_1946054.f_529[6];
	num = num + Global_1946054.f_529[29];
	num = num + Global_1946054.f_529[26];
	num = num + Global_1946054.f_529[18];
	num = num + Global_1946054.f_529[19];
	return num > 0;
}

void func_883(Hash hParam0) // Position - 0x213BB Hash - 0x452F6FEB ^0x9AFB0A30
{
	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return;

	if (Global_43891)
		return;

	WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, hParam0);
	return;
}

Vector3 func_884(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x213F4 Hash - 0x4C194BC9 ^0x4C194BC9
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

BOOL func_885(Hash hParam0, int iParam1) // Position - 0x2140F Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_408(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_889(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_820("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_821(&unk, i, num, num2))
			{
			}
			else if (!func_427(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_822(num);
				return true;
			}
		}
	
		func_822(num);
	}

	return false;
}

int func_886(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x214B7 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_408(hParam0, 0))
		return 0;

	num = func_605(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_889(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_890(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_452(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_887() // Position - 0x21539 Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_707(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_707(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

int func_888(int iParam0, var uParam1, var uParam2) // Position - 0x2162F Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_891(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

Hash func_889(Hash hParam0, int iParam1) // Position - 0x21651 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_408(hParam0, 0))
		return 0;

	num = func_605(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_614(hParam0, 1399091007))
	{
		func_892(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_890(Hash hParam0, BOOL bParam1) // Position - 0x216CB Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_893(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_894(&unk, func_606(false));

	if (!func_895(&unk, &num, &num2, false))
		return 0;

	func_822(num);
	return num2;
}

int func_891(int iParam0, int iParam1) // Position - 0x21729 Hash - 0x99A93628 ^0x27AE8C83
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

void func_892(Hash hParam0, var uParam1, var uParam2) // Position - 0x22E36 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_893(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x23042 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_894(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x23114 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_895(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x2312F Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_452(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

