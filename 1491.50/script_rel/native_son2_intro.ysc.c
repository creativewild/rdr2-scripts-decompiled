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
	ItemSet isLocal_14 = 0;
	ePedType eptLocal_15 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_16 = PED_TYPE_PLAYER_0;
	Hash hLocal_17 = 0;
	Hash hLocal_18 = 0;
	Hash hLocal_19 = 0;
	Hash hLocal_20 = 0;
	Hash hLocal_21 = 0;
	Hash hLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	BOOL bLocal_33 = 0;
	int iLocal_34 = 0;
	AnimScene ansLocal_35 = 0;
	AnimScene ansLocal_36 = 0;
	AnimScene ansLocal_37 = 0;
	AnimScene ansLocal_38 = 0;
	Vehicle veLocal_39 = 0;
	Object obLocal_40 = 0;
	Object obLocal_41 = 0;
	Object obLocal_42 = 0;
	Object obLocal_43 = 0;
	Object obLocal_44 = 0;
	Ped pedLocal_45 = 0;
	Ped pedLocal_46 = 0;
	Ped pedLocal_47 = 0;
	var uLocal_48 = 3;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	Ped pedLocal_52 = 0;
	Volume volLocal_53 = 0;
	Volume volLocal_54 = 0;
	Volume volLocal_55 = 0;
	Volume volLocal_56 = 0;
	Volume volLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 24;
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
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 5;
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
	var uLocal_186 = 2;
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
	var uLocal_197 = 5;
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
	var uLocal_213 = 1;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 5;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 20;
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
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 20;
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
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 20;
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
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 20;
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
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 20;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
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
	var uLocal_555 = 1;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 1;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 1;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 1;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 1;
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
	var uLocal_590 = 1;
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
	var uLocal_603 = 35;
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
	var uLocal_1024 = 1097859072;
	var uLocal_1025 = 1101004800;
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
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 4;
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
	var uLocal_1123 = 35;
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
	var uLocal_1134 = -1569615261;
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
	var uLocal_1147 = -1569615261;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = -1569615261;
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
	var uLocal_1173 = -1569615261;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = -1569615261;
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
	var uLocal_1199 = -1569615261;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = -1569615261;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = -1569615261;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = -1569615261;
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
	var uLocal_1251 = -1569615261;
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
	var uLocal_1264 = -1569615261;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = -1569615261;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = -1569615261;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = -1569615261;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = -1569615261;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = -1569615261;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = -1569615261;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = -1569615261;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = -1569615261;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = -1569615261;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = -1569615261;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = -1569615261;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = -1569615261;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = -1569615261;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = -1569615261;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = -1569615261;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = -1569615261;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = -1569615261;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = -1569615261;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = -1569615261;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = -1569615261;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = -1569615261;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = -1569615261;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = -1569615261;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = -1569615261;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 1;
	var uLocal_1595 = 30;
	var uLocal_1596 = -1;
	var uLocal_1597 = 0;
	var uLocal_1598 = 1;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 1065353216;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 1065353216;
	var uLocal_1612 = 1;
	var uLocal_1613 = 0;
	var uLocal_1614 = -1;
	var uLocal_1615 = 0;
	var uLocal_1616 = 1;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 1065353216;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 1065353216;
	var uLocal_1630 = 1;
	var uLocal_1631 = 0;
	var uLocal_1632 = -1;
	var uLocal_1633 = 0;
	var uLocal_1634 = 1;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 1065353216;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 1065353216;
	var uLocal_1648 = 1;
	var uLocal_1649 = 0;
	var uLocal_1650 = -1;
	var uLocal_1651 = 0;
	var uLocal_1652 = 1;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 1065353216;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 1065353216;
	var uLocal_1666 = 1;
	var uLocal_1667 = 0;
	var uLocal_1668 = -1;
	var uLocal_1669 = 0;
	var uLocal_1670 = 1;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 1065353216;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 1065353216;
	var uLocal_1684 = 1;
	var uLocal_1685 = 0;
	var uLocal_1686 = -1;
	var uLocal_1687 = 0;
	var uLocal_1688 = 1;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 1065353216;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 1065353216;
	var uLocal_1702 = 1;
	var uLocal_1703 = 0;
	var uLocal_1704 = -1;
	var uLocal_1705 = 0;
	var uLocal_1706 = 1;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 1065353216;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 1065353216;
	var uLocal_1720 = 1;
	var uLocal_1721 = 0;
	var uLocal_1722 = -1;
	var uLocal_1723 = 0;
	var uLocal_1724 = 1;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 1065353216;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 1065353216;
	var uLocal_1738 = 1;
	var uLocal_1739 = 0;
	var uLocal_1740 = -1;
	var uLocal_1741 = 0;
	var uLocal_1742 = 1;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 1065353216;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 1065353216;
	var uLocal_1756 = 1;
	var uLocal_1757 = 0;
	var uLocal_1758 = -1;
	var uLocal_1759 = 0;
	var uLocal_1760 = 1;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 1065353216;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 1065353216;
	var uLocal_1774 = 1;
	var uLocal_1775 = 0;
	var uLocal_1776 = -1;
	var uLocal_1777 = 0;
	var uLocal_1778 = 1;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 1065353216;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 1065353216;
	var uLocal_1792 = 1;
	var uLocal_1793 = 0;
	var uLocal_1794 = -1;
	var uLocal_1795 = 0;
	var uLocal_1796 = 1;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 1065353216;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 1065353216;
	var uLocal_1810 = 1;
	var uLocal_1811 = 0;
	var uLocal_1812 = -1;
	var uLocal_1813 = 0;
	var uLocal_1814 = 1;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 1065353216;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 1065353216;
	var uLocal_1828 = 1;
	var uLocal_1829 = 0;
	var uLocal_1830 = -1;
	var uLocal_1831 = 0;
	var uLocal_1832 = 1;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 1065353216;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 1065353216;
	var uLocal_1846 = 1;
	var uLocal_1847 = 0;
	var uLocal_1848 = -1;
	var uLocal_1849 = 0;
	var uLocal_1850 = 1;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 1065353216;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 1065353216;
	var uLocal_1864 = 1;
	var uLocal_1865 = 0;
	var uLocal_1866 = -1;
	var uLocal_1867 = 0;
	var uLocal_1868 = 1;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 1065353216;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 1065353216;
	var uLocal_1882 = 1;
	var uLocal_1883 = 0;
	var uLocal_1884 = -1;
	var uLocal_1885 = 0;
	var uLocal_1886 = 1;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 1065353216;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 1065353216;
	var uLocal_1900 = 1;
	var uLocal_1901 = 0;
	var uLocal_1902 = -1;
	var uLocal_1903 = 0;
	var uLocal_1904 = 1;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 1065353216;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 1065353216;
	var uLocal_1918 = 1;
	var uLocal_1919 = 0;
	var uLocal_1920 = -1;
	var uLocal_1921 = 0;
	var uLocal_1922 = 1;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 1065353216;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 1065353216;
	var uLocal_1936 = 1;
	var uLocal_1937 = 0;
	var uLocal_1938 = -1;
	var uLocal_1939 = 0;
	var uLocal_1940 = 1;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 1065353216;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 1065353216;
	var uLocal_1954 = 1;
	var uLocal_1955 = 0;
	var uLocal_1956 = -1;
	var uLocal_1957 = 0;
	var uLocal_1958 = 1;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 1065353216;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 1065353216;
	var uLocal_1972 = 1;
	var uLocal_1973 = 0;
	var uLocal_1974 = -1;
	var uLocal_1975 = 0;
	var uLocal_1976 = 1;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 1065353216;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 1065353216;
	var uLocal_1990 = 1;
	var uLocal_1991 = 0;
	var uLocal_1992 = -1;
	var uLocal_1993 = 0;
	var uLocal_1994 = 1;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 1065353216;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 1065353216;
	var uLocal_2008 = 1;
	var uLocal_2009 = 0;
	var uLocal_2010 = -1;
	var uLocal_2011 = 0;
	var uLocal_2012 = 1;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 1065353216;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 1065353216;
	var uLocal_2026 = 1;
	var uLocal_2027 = 0;
	var uLocal_2028 = -1;
	var uLocal_2029 = 0;
	var uLocal_2030 = 1;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 1065353216;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 1065353216;
	var uLocal_2044 = 1;
	var uLocal_2045 = 0;
	var uLocal_2046 = -1;
	var uLocal_2047 = 0;
	var uLocal_2048 = 1;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 1065353216;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 1065353216;
	var uLocal_2062 = 1;
	var uLocal_2063 = 0;
	var uLocal_2064 = -1;
	var uLocal_2065 = 0;
	var uLocal_2066 = 1;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 1065353216;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 1065353216;
	var uLocal_2080 = 1;
	var uLocal_2081 = 0;
	var uLocal_2082 = -1;
	var uLocal_2083 = 0;
	var uLocal_2084 = 1;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 1065353216;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 1065353216;
	var uLocal_2098 = 1;
	var uLocal_2099 = 0;
	var uLocal_2100 = -1;
	var uLocal_2101 = 0;
	var uLocal_2102 = 1;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 1065353216;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 1065353216;
	var uLocal_2116 = 1;
	var uLocal_2117 = 0;
	var uLocal_2118 = -1;
	var uLocal_2119 = 0;
	var uLocal_2120 = 1;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 1065353216;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 1065353216;
	var uLocal_2134 = 1;
	var uLocal_2135 = 0;
	var uLocal_2136 = 8;
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
	var uLocal_2392 = 0;
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
	var uLocal_2413 = 0;
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
	var uLocal_2435 = 0;
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
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 8;
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
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = -1;
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
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = -1;
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
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = -1;
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
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = -1;
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
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = -1;
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
	var uLocal_2596 = -1;
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
	var uLocal_2618 = -1;
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
	var uLocal_2640 = -1;
	var uLocal_2641 = 0;
	var uLocal_2642 = 11;
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
	var uLocal_2680 = 0;
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
	var uLocal_2715 = 0;
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
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
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
	var uLocal_2753 = 2;
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
	var uLocal_2788 = 2;
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
	var uLocal_2805 = -1;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = -1;
	var uLocal_2809 = -1082130432;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
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
	var uLocal_2891 = 24;
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
	var uLocal_2942 = 0;
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
	var uLocal_2976 = 0;
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
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = -1;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 1084227584;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x2270E9CA ^0x69F863F
{
	BOOL flag;
	var unk;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	eptLocal_15 = joaat("cs_paytah");
	eptLocal_16 = joaat("a_m_m_wapwarriors_01");
	hLocal_17 = joaat("utilliwag");
	hLocal_18 = joaat("p_ladle02x");
	hLocal_19 = joaat("p_cs_bucket01x");
	hLocal_20 = joaat("p_cs_vegsack_up");
	hLocal_21 = joaat("p_bombswitchopen01x");
	hLocal_22 = joaat("p_dynamitecrate02x");
	uLocal_23 = { 68.36246f, 1067.573f, 194.34872f };
	uLocal_26 = { 73.45761f, 1065.7041f, 194.92583f };
	uLocal_29 = { 95.1526f, 1046.145f, 200.5018f };
	fLocal_32 = -30.74f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (func_1(iLocal_162))
			func_2(&Global_1935630, 32768);
	
		func_3(&iLocal_162, 1);
	}

	func_4(&uScriptParam_0, &iLocal_162);

	while (!func_5(&iLocal_162, 1))
	{
		if (_STOPWATCH_IS_INITIALIZED(&iLocal_162) != 10)
		{
			if (_STOPWATCH_IS_INITIALIZED(&iLocal_162) == 3 || _STOPWATCH_IS_INITIALIZED(&iLocal_162) == 4 && !func_7(&iLocal_162) || _STOPWATCH_IS_INITIALIZED_0(&(iLocal_162.f_958)) > 0)
			{
				func_9(&iLocal_162, func_5(&iLocal_162, 67108864));
				flag = true;
			}
		
			if (!flag && func_10(&iLocal_162) && func_5(&iLocal_162, 65536))
				func_9(&iLocal_162, true);
		}
	
		if (_STOPWATCH_IS_INITIALIZED(&iLocal_162) >= 3 && _STOPWATCH_IS_INITIALIZED(&iLocal_162) <= 7)
			func_11(&iLocal_162);
	
		if (_STOPWATCH_IS_INITIALIZED(&iLocal_162) >= 5 && _STOPWATCH_IS_INITIALIZED(&iLocal_162) <= 7 && !func_5(&iLocal_162, 4096) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_162.f_428.f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_162.f_428.f_444, false) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iLocal_162.f_428.f_444))
		{
			TEXT_LABEL_COPY(&unk, { func_12(iLocal_162) }, 4);
			func_13(unk, &(iLocal_162.f_428));
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
	
		switch (_STOPWATCH_IS_INITIALIZED(&iLocal_162))
		{
			case 0:
				if (func_10(&iLocal_162))
					func_16(&iLocal_162);
			
				if (!func_10(&iLocal_162) || func_5(&iLocal_162, 65536))
					if (func_27(&iLocal_162))
						func_17(&iLocal_162, 1);
				break;
		
			case 1:
				if (func_10(&iLocal_162))
					func_16(&iLocal_162);
			
				if (func_28(&iLocal_162))
					func_17(&iLocal_162, 2);
				break;
		
			case 2:
				if (func_10(&iLocal_162))
					func_16(&iLocal_162);
			
				if (func_29(&iLocal_162))
				{
					if (!func_7(&iLocal_162) || func_10(&iLocal_162))
					{
						if (!func_30(iLocal_162.f_2889))
							iLocal_162.f_2889 = func_32(func_31(iLocal_162));
					
						func_22(iLocal_162.f_2889, 4);
						func_25(&iLocal_162, 8192);
					}
				
					if (func_10(&iLocal_162))
					{
						func_33(&iLocal_162);
						func_17(&iLocal_162, 9);
					}
					else
					{
						func_17(&iLocal_162, 3);
					}
				}
				break;
		
			case 3:
				if (!func_5(&iLocal_162, 8192))
				{
					if (_STOPWATCH_IS_INITIALIZED_0(&(iLocal_162.f_958)) != 3)
					{
					}
					else
					{
						func_22(iLocal_162.f_2889, 4);
						func_25(&iLocal_162, 8192);
					}
				}
			
				func_39(&iLocal_162);
			
				if (func_40(func_32(Global_1835011[iLocal_162 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&iLocal_162) || func_42(&iLocal_162, 32768))
				{
					func_34(&iLocal_162);
					func_15(&iLocal_162);
					func_17(&iLocal_162, 4);
					func_19(&(iLocal_162.f_2890), false);
				}
				else if (func_10(&iLocal_162) && !func_1(iLocal_162))
				{
					if (!func_18(&(iLocal_162.f_2899)))
						func_19(&(iLocal_162.f_2899), false);
				
					if (!func_20(&iLocal_162))
					{
						if (func_21(&(iLocal_162.f_2899)) >= 1f)
						{
							func_22(iLocal_162.f_2889, 2097152);
							func_23(&iLocal_162);
							func_24(&iLocal_162);
							func_17(&iLocal_162, 10);
						}
					}
					else
					{
						if (!func_5(&iLocal_162, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&iLocal_162, 536870912);
						}
					
						func_26(&(iLocal_162.f_2899));
					}
				}
				break;
		
			case 4:
				func_43(&iLocal_162);
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
			
				if (func_44(&iLocal_162) || func_42(&iLocal_162, 32768) && !func_5(&iLocal_162, 268435456))
				{
					func_35(&iLocal_162);
				
					if (!func_5(&iLocal_162, 256))
					{
						func_36(&iLocal_162);
						func_38(&iLocal_162);
					
						if (!func_45(Global_1935630, 524288) || func_42(&iLocal_162, 524288))
						{
							func_37(iLocal_162);
							func_17(&iLocal_162, 7);
						}
						else
						{
							func_17(&iLocal_162, 6);
						}
					}
					else
					{
						func_37(iLocal_162);
						func_17(&iLocal_162, 5);
					}
				}
				break;
		
			case 5:
				func_46(&iLocal_162);
				func_47(&iLocal_162);
			
				if (func_48(&(iLocal_162.f_2884)) >= func_49(&iLocal_162))
				{
					func_36(&iLocal_162);
					func_38(&iLocal_162);
					func_26(&(iLocal_162.f_2884));
				
					if (!func_42(&iLocal_162, 524288))
					{
						func_37(iLocal_162);
						func_17(&iLocal_162, 7);
					}
					else
					{
						func_17(&iLocal_162, 6);
					}
				}
				break;
		
			case 6:
				if (!func_18(&(iLocal_162.f_2906)))
					func_19(&(iLocal_162.f_2906), false);
			
				if (func_50(&(iLocal_162.f_428)) == 4 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_162.f_428.f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iLocal_162.f_428.f_444))
				{
					func_37(iLocal_162);
					func_17(&iLocal_162, 7);
				}
				else if (func_48(&(iLocal_162.f_2906)) >= 5f)
				{
					func_37(iLocal_162);
					func_17(&iLocal_162, 7);
				}
				break;
		
			case 7:
				func_51(&iLocal_162);
			
				if (func_52(&iLocal_162))
					func_17(&iLocal_162, 10);
				break;
		
			case 8:
				if (func_14(&iLocal_162))
				{
					func_15(&iLocal_162);
					func_16(&iLocal_162);
					func_17(&iLocal_162, 0);
				}
				else if (!func_10(&iLocal_162))
				{
					if (!func_18(&(iLocal_162.f_2899)))
						func_19(&(iLocal_162.f_2899), false);
				
					if (!func_20(&iLocal_162))
					{
						if (func_21(&(iLocal_162.f_2899)) >= 1f)
						{
							func_22(iLocal_162.f_2889, 2097152);
							func_23(&iLocal_162);
							func_24(&iLocal_162);
							func_17(&iLocal_162, 10);
						}
					}
					else
					{
						if (!func_5(&iLocal_162, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&iLocal_162, 536870912);
						}
					
						func_26(&(iLocal_162.f_2899));
					}
				}
				break;
		
			case 9:
				if (func_16(&iLocal_162))
				{
					func_34(&iLocal_162);
					func_15(&iLocal_162);
					func_35(&iLocal_162);
				
					if (!func_5(&iLocal_162, 256))
					{
						func_36(&iLocal_162);
						func_37(iLocal_162);
						func_38(&iLocal_162);
						func_17(&iLocal_162, 7);
					}
					else
					{
						func_17(&iLocal_162, 5);
					}
				}
				break;
		
			case 10:
				if (func_3(&iLocal_162, false))
					func_25(&iLocal_162, 1);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1(int iParam0) // Position - 0x6D6 Hash - 0xD5951AE9 ^0xC73DF07C
{
	int num;

	num = func_32(func_31(iParam0));

	if (!func_30(num))
		return false;

	return func_40(num, 1024);
}

void func_2(int iParam0, int iParam1) // Position - 0x701 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_3(var uParam0, BOOL bParam1) // Position - 0x716 Hash - 0x83D9E26D ^0x83D9E26D
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

int func_4(var uParam0, var uParam1) // Position - 0x831 Hash - 0x6E877716 ^0x25C61399
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

BOOL func_5(var uParam0, int iParam1) // Position - 0x8D9 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

int _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x8EA Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

BOOL func_7(var uParam0) // Position - 0x8F6 Hash - 0x2D68F052 ^0x7E4DF6CE
{
	if (func_5(uParam0, 16))
		return false;

	return func_5(uParam0, 524288);
}

int _STOPWATCH_IS_INITIALIZED_0(var uParam0) // Position - 0x917 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_9(var uParam0, BOOL bParam1) // Position - 0x923 Hash - 0x48E44D60 ^0x444D467F
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

BOOL func_10(var uParam0) // Position - 0xA2F Hash - 0xADFEF8AD ^0xA05CE8F4
{
	if (func_5(uParam0, 65536))
		return true;

	if (!func_79(&Global_1835011[*uParam0 /*74*/]))
		return true;

	return false;
}

void func_11(var uParam0) // Position - 0xA61 Hash - 0x2C379910 ^0x585E0D32
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

Vector3 func_12(int iParam0) // Position - 0xAEE Hash - 0x8AE4EC3E ^0x47915066
{
	var unk;

	if (!func_81(iParam0))
		return unk;

	return Global_1835011[iParam0 /*74*/].f_9;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xB13 Hash - 0x2BF27CF2 ^0x62AA2C
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

BOOL func_14(var uParam0) // Position - 0x120F Hash - 0x3FD87CD2 ^0x7707316B
{
	func_25(uParam0, 262144);

	if (func_106(uParam0))
	{
		func_25(uParam0, 65536);
		return true;
	}

	return false;
}

void func_15(var uParam0) // Position - 0x1239 Hash - 0x6B5AE749 ^0xB084BC07
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

BOOL func_16(var uParam0) // Position - 0x12E7 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_17(var uParam0, int iParam1) // Position - 0x12F0 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

BOOL func_18(var uParam0) // Position - 0x12FE Hash - 0x5001E582 ^0x5001E582
{
	return func_113(*uParam0, 1);
}

void func_19(var uParam0, BOOL bParam1) // Position - 0x130E Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_18(uParam0))
		func_26(uParam0);

	return;
}

BOOL func_20(var uParam0) // Position - 0x132E Hash - 0x1E493342 ^0x72D067EE
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

float func_21(var uParam0) // Position - 0x13AC Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_18(uParam0))
		return 0f;

	if (func_118(uParam0))
		return uParam0->f_2;

	return func_119() - uParam0->f_1;
}

void func_22(int iParam0, int iParam1) // Position - 0x13DE Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_30(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

void func_23(var uParam0) // Position - 0x140A Hash - 0xE490C58 ^0xE490C58
{
	func_120(&(uParam0->f_428));
	return;
}

void func_24(var uParam0) // Position - 0x141B Hash - 0xD464DAA4 ^0xD464DAA4
{
	func_121(&(uParam0->f_958), uParam0->f_958);
	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x1431 Hash - 0xC0B306E4 ^0x7C256AD9
{
	uParam0->f_2 = uParam0->f_2 || iParam1;

	if (iParam1 == 65536)
	{
		func_109(&Global_1935630, 32768);
		func_107(*uParam0);
	}

	return;
}

void func_26(var uParam0) // Position - 0x1460 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_122(uParam0, 0f);
	return;
}

BOOL func_27(var uParam0) // Position - 0x146F Hash - 0xBBBF39DA ^0x6EE8C37A
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

BOOL func_28(var uParam0) // Position - 0x15A5 Hash - 0xECFC24F7 ^0x3A0F4A4C
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

BOOL func_29(var uParam0) // Position - 0x15ED Hash - 0xDB2A01B4 ^0xDB2A01B4
{
	BOOL flag;

	flag = true;

	if (!func_137(ansLocal_35))
		flag = false;

	if (!func_137(ansLocal_36))
		flag = false;

	if (!func_137(ansLocal_37))
		flag = false;

	if (!flag)
		return false;

	func_131(uParam0, Global_35, "ARTHUR", 0, 0, true);
	func_131(uParam0, pedLocal_45, "dutch", 0, 0, true);
	func_131(uParam0, pedLocal_46, "EagleFlies", 0, 0, true);
	func_131(uParam0, pedLocal_47, "PAYTAH", 0, 0, true);
	func_131(uParam0, uLocal_48[0], "A_M_M_WAPWARRIORS_01", 0, 0, true);
	func_131(uParam0, uLocal_48[1], "A_M_M_WAPWARRIORS_01^1", 0, 0, true);
	func_131(uParam0, uLocal_48[2], "A_M_M_WAPWARRIORS_01^2", 0, 0, true);
	func_138(uParam0, veLocal_39, "UTILLIWAG", 0, 0, true, false);
	func_138(uParam0, obLocal_40, "p_ladle02x", 0, 0, true, false);
	func_138(uParam0, obLocal_41, "p_cs_bucket01x", 0, 0, true, false);
	func_138(uParam0, obLocal_42, "p_cs_vegsack_up", 0, 0, true, false);
	func_138(uParam0, obLocal_43, "p_cs_detonator01x", 0, 0, true, false);
	func_138(uParam0, obLocal_44, "p_dynamiteCrate02x", 0, 0, true, false);
	func_139(uParam0, Global_35, false);
	func_139(uParam0, pedLocal_45, false);
	func_139(uParam0, pedLocal_46, false);
	func_139(uParam0, pedLocal_47, false);
	func_139(uParam0, uLocal_48[0], false);
	func_139(uParam0, uLocal_48[1], false);
	func_139(uParam0, uLocal_48[2], false);
	func_139(uParam0, veLocal_39, false);
	func_139(uParam0, obLocal_40, false);
	func_139(uParam0, obLocal_41, false);
	func_139(uParam0, obLocal_42, false);
	func_139(uParam0, obLocal_43, false);
	func_139(uParam0, obLocal_44, false);
	func_141(&(uParam0->f_428), &func_140);
	return true;
}

BOOL func_30(int iParam0) // Position - 0x177C Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

int func_31(int iParam0) // Position - 0x179B Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_81(iParam0))
		return 0;

	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_32(int iParam0) // Position - 0x17BB Hash - 0x6B3238EF ^0x6B3238EF
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

void func_33(var uParam0) // Position - 0x17FC Hash - 0xCB18FF6A ^0x66639F66
{
	var scriptName;

	TEXT_LABEL_COPY(&scriptName, { func_142(*uParam0) }, 3);
	SCRIPTS::REQUEST_SCRIPT(&scriptName);
	return;
}

void func_34(var uParam0) // Position - 0x1816 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_35(var uParam0) // Position - 0x181E Hash - 0x83855E48 ^0x18FFB4E2
{
	func_56(uParam0);
	func_2(&Global_1935630, 32768);
	func_143(uParam0);
	func_26(&(uParam0->f_2884));

	if (func_144())
		func_145();

	if (func_42(uParam0, 524288))
		func_109(&Global_1935630, 524288);
	else if (!func_42(uParam0, 32768))
		Global_43805 = uParam0->f_958.f_1684;

	func_146(&(uParam0->f_428), &(uParam0->f_958));

	if (func_5(uParam0, 262144))
		if (func_147(&(Global_1835011[*uParam0 /*74*/].f_29), 4))
			CLOCK::SET_CLOCK_TIME(func_148(4), 0, 0);
		else if (func_147(&(Global_1835011[*uParam0 /*74*/].f_29), 2))
			CLOCK::SET_CLOCK_TIME(func_148(2), 0, 0);
		else if (func_147(&(Global_1835011[*uParam0 /*74*/].f_29), 8))
			CLOCK::SET_CLOCK_TIME(func_148(8), 0, 0);
		else if (func_147(&(Global_1835011[*uParam0 /*74*/].f_29), 16))
			CLOCK::SET_CLOCK_TIME(func_148(16), 0, 0);
		else if (func_147(&(Global_1835011[*uParam0 /*74*/].f_29), 32))
			CLOCK::SET_CLOCK_TIME(func_148(32), 0, 0);

	return;
}

void func_36(var uParam0) // Position - 0x194A Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_37(int iParam0) // Position - 0x1952 Hash - 0x1B8AD279 ^0xAD8E3F31
{
	int num;
	const char* name;

	if (func_149(iParam0))
		return;

	num = func_32(func_31(iParam0));

	if (!func_30(num))
		return;

	func_22(num, 2048);
	Global_1835011[iParam0 /*74*/].f_71 = 0;
	name = func_150(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&name))
	{
		HUD::SET_MISSION_NAME(true, &name);
		MISC::_0x1096603B519C905F(&name);
	}

	return;
}

void func_38(var uParam0) // Position - 0x19B2 Hash - 0x1A9741E5 ^0x2BC1F7E8
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
						func_151(&(uParam0->f_428), &(uParam0->f_958));
	
		TEXT_LABEL_COPY(&unk4, { unk }, 4);
		func_13(unk4, &(uParam0->f_428));
	}

	return;
}

void func_39(var uParam0) // Position - 0x1A66 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_40(int iParam0, int iParam1) // Position - 0x1A6E Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_30(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

BOOL func_41(var uParam0) // Position - 0x1A90 Hash - 0x59A3B5E7 ^0x59A3B5E7
{
	Ped mount;

	func_152();

	if (func_153(Global_35) < 190f)
		if (func_91(Global_35, uLocal_23, 35f, true, false))
			if (func_154(pedLocal_45, 0.2f, 0.8f, 0.1f, 0.9f))
				if (!func_18(&uLocal_61) || func_21(&uLocal_61) > 10f)
					if (func_155(&uLocal_64, "NTS2_00_CALL", pedLocal_45, Global_35, 0, false, 1, true))
						func_26(&uLocal_61);

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		func_156(Global_35, uLocal_23, &uLocal_58, 40f, 30f, 20f, 15f, 0.5f, true, 0, 1, 1, true);
	}
	else if (func_157(Global_35))
	{
		func_156(Global_35, uLocal_23, &uLocal_58, 1112014848, 25f, 15f, 5f, 0.5f, true, 0, 1, 1, true);
		mount = PED::GET_MOUNT(Global_35);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_52) || ENTITY::DOES_ENTITY_EXIST(mount) && pedLocal_52 != mount)
			pedLocal_52 = mount;
	}
	else if (func_91(Global_35, uLocal_23, 5f, true, true))
	{
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_56, true);
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), pedLocal_45, "NTS2_INTRO", ENTITY::GET_ENTITY_COORDS(pedLocal_46, true, false), 0, 0);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		ANIMSCENE::START_ANIM_SCENE(ansLocal_38);
		return true;
	}

	return false;
}

BOOL func_42(var uParam0, int iParam1) // Position - 0x1BFE Hash - 0xE749F1D9 ^0xE749F1D9
{
	return func_63(&(uParam0->f_958), iParam1);
}

void func_43(var uParam0) // Position - 0x1C11 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_44(var uParam0) // Position - 0x1C19 Hash - 0x1DE74EA7 ^0x3C233F9B
{
	var unk;

	CAM::_REQUEST_LETTER_BOX_OVERTIME(1000, -1, false, 17, true, false);
	CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, true);
	func_158(true, true, true, true, true, true, true);

	if (func_159(pedLocal_52, 0))
		if (!func_160(pedLocal_52, SCRIPT_TASK_STAND_STILL))
			TASK::TASK_STAND_STILL(pedLocal_52, -1);

	if (func_160(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		func_161(joaat("MotionState_Walk"), 2000, false, 1, true, 0, false, false);
	}
	else if (func_162())
	{
		if (!func_160(Global_35, -208384378))
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), Global_36, 1f, 1);
	}
	else if (func_163(&unk))
	{
		func_164();
	}

	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansLocal_38, false) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(ansLocal_38))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		PED::_0x9851DE7AEC10B4E1(uLocal_23, 15f, 1, 1);
		return true;
	}

	return false;
}

BOOL func_45(int iParam0, int iParam1) // Position - 0x1D0D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_46(var uParam0) // Position - 0x1D1C Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_47(var uParam0) // Position - 0x1D24 Hash - 0x459AE2FC ^0x7FCFE727
{
	if (!func_5(uParam0, 33554432) && !func_42(uParam0, 524288) && !func_42(uParam0, 32768))
	{
		if (func_165(&(uParam0->f_958)))
		{
			func_166(&(uParam0->f_958), false, false);
			func_25(uParam0, 33554432);
		}
	}

	return;
}

float func_48(var uParam0) // Position - 0x1D80 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_18(uParam0))
		return uParam0->f_1;

	if (func_118(uParam0))
		return uParam0->f_2;

	return func_119() - uParam0->f_1;
}

float func_49(var uParam0) // Position - 0x1DB5 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_2887;
}

int func_50(var uParam0) // Position - 0x1DC2 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_51(var uParam0) // Position - 0x1DCD Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_52(var uParam0) // Position - 0x1DD5 Hash - 0x277B5DDC ^0x1F100BD7
{
	var unk;
	BOOL flag;

	unk = { func_12(*uParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
	{
		if (func_149(*uParam0))
			return true;
	
		return false;
	}

	flag = func_167();

	if (flag)
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);

	if (!func_5(uParam0, 32))
	{
		if (func_167())
			func_25(uParam0, 32);
		else if (func_48(&(uParam0->f_2884)) >= 60f)
			return true;
	}
	else
	{
		if (!func_167())
			return true;
	
		if (!func_5(uParam0, 4096))
			if (func_149(*uParam0))
				func_25(uParam0, 4096);
			else
				func_111(uParam0);
		else if (!func_149(*uParam0))
			return true;
	}

	return false;
}

BOOL func_53(var uParam0) // Position - 0x1E95 Hash - 0xFD109762 ^0x4F1CD3CD
{
	PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volLocal_54);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	iLocal_34 = 0;
	func_168(volLocal_53);
	func_168(volLocal_55);
	func_168(volLocal_54);
	func_168(volLocal_57);
	func_168(volLocal_56);
	func_169(uParam0, 0, pedLocal_45, false, false, true, false);
	func_169(uParam0, 26, pedLocal_46, false, false, true, false);
	func_170(&pedLocal_47, false, true, true);
	func_170(&uLocal_48[0], false, true, true);
	func_170(&uLocal_48[1], false, true, true);
	func_170(&uLocal_48[2], false, true, true);
	func_171(obLocal_41);
	func_171(obLocal_43);
	func_171(obLocal_44);
	func_171(obLocal_40);
	func_171(obLocal_42);
	func_172();
	return true;
}

void func_54(var uParam0) // Position - 0x1F38 Hash - 0x3BACEE7F ^0x78661F61
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_426))
		func_173(uParam0->f_426);

	return;
}

void func_55(var uParam0) // Position - 0x1F55 Hash - 0xB0D02BD0 ^0xD08373B5
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_425))
	{
		func_174(&(uParam0->f_427), uParam0->f_425, false);
	
		if (PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(uParam0->f_425))
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(uParam0->f_425);
	
		func_66(uParam0, 512);
		func_60(*uParam0);
		VOLUME::DELETE_VOLUME(uParam0->f_425);
	}

	return;
}

void func_56(var uParam0) // Position - 0x1FA9 Hash - 0xE2CC04A7 ^0x2A331FD5
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
				func_169(uParam0, stackSize, ped, false, flag, !flag2, false);
			}
		}
	}

	return;
}

void func_57(var uParam0) // Position - 0x2032 Hash - 0x4DD6AE05 ^0xF30F3284
{
	func_175(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
	return;
}

int func_58(var uParam0) // Position - 0x2075 Hash - 0xE1806B8B ^0x92A87595
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

void func_59(int iParam0) // Position - 0x20EC Hash - 0x7B2832AA ^0x5B57D776
{
	if (!func_81(iParam0))
		return;

	Global_1835011[iParam0 /*74*/].f_58 = 0;
	Global_1835011[iParam0 /*74*/].f_59 = 0;
	Global_1835011[iParam0 /*74*/].f_60 = 0;
	return;
}

void func_60(int iParam0) // Position - 0x2122 Hash - 0x4260FC74 ^0xBC5A0A21
{
	if (!func_81(iParam0))
		return;

	Global_1835011[iParam0 /*74*/].f_61 = 0;
	return;
}

void func_61(BOOL bParam0) // Position - 0x2142 Hash - 0xAD1429D0 ^0xAD1429D0
{
	if (bParam0)
		Global_1945188.f_865 = Global_1945188.f_865 - Global_1945188.f_865 & 2;
	else
		Global_1945188.f_865 = Global_1945188.f_865 | 2;

	func_176(bParam0);
	return;
}

void func_62() // Position - 0x2180 Hash - 0x4AC3BB62 ^0x697E6320
{
	eStackSize i;
	eStackSize stackSize;
	Ped ped;

	if (!func_177())
		return;

	func_178();

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
			else if (func_179(ped))
			{
				PED::SET_PED_CONFIG_FLAG(ped, 230, true);
			}
		}
	}

	return;
}

BOOL func_63(var uParam0, int iParam1) // Position - 0x21E5 Hash - 0x6B2D4FF8 ^0x6B2D4FF8
{
	return uParam0->f_1664 && iParam1 != false;
}

void func_64(var uParam0) // Position - 0x21F7 Hash - 0xD2C7E52D ^0xD2F1F334
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

void func_65(var uParam0, BOOL bParam1) // Position - 0x22B2 Hash - 0x42AB6152 ^0x293FEC39
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

void func_66(var uParam0, int iParam1) // Position - 0x2373 Hash - 0xA4EAD31F ^0x77D45044
{
	uParam0->f_2 = uParam0->f_2 - uParam0->f_2 && iParam1;
	return;
}

void func_67(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x238B Hash - 0x7990926B ^0xBD6909E0
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
	return;
}

void func_68() // Position - 0x239D Hash - 0xAF223956 ^0x1583E805
{
	int num;

	if (func_180(Global_1898437) && func_181(Global_1898437) == 1)
	{
		num = func_182(Global_1898437);
	
		if (func_81(num) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[num /*74*/].f_22)) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1835011[num /*74*/].f_22))) > 0)
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1835011[num /*74*/].f_22), 1);
	}

	return;
}

int func_69(var uParam0) // Position - 0x240D Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

void func_70(var uParam0) // Position - 0x2416 Hash - 0xC3FF5F57 ^0xC3FF5F57
{
	var unk;

	unk = { func_183(uParam0) };
	func_184(uParam0, &unk);
	return;
}

void func_71(var uParam0) // Position - 0x2431 Hash - 0xE456CD42 ^0xE26B403C
{
	var name;
	var name2;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_425))
	{
		TEXT_LABEL_ASSIGN_STRING(&name, func_185(), 64);
		TEXT_LABEL_APPEND_STRING(&name, "_NO_AMBIENT_CONTENT", 64);
		uParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_186(*uParam0), 0f, 0f, 0f, 5f, 5f, 5f, &name);
		func_187(uParam0, uParam0->f_425, 0);
		func_188(*uParam0, uParam0->f_425);
	}

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_426))
	{
		TEXT_LABEL_ASSIGN_STRING(&name2, func_185(), 64);
		TEXT_LABEL_APPEND_STRING(&name2, "_NO_SCRIPT_CONTENT", 64);
		uParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_186(*uParam0), 0f, 0f, 0f, 25f, 25f, 25f, &name2);
		func_189(uParam0, uParam0->f_426);
	}

	return;
}

void func_72(int iParam0) // Position - 0x24D0 Hash - 0xA1813BF8 ^0x43F7F42C
{
	var textBlock;

	textBlock = { func_190(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		HUD::TEXT_BLOCK_REQUEST(&textBlock);

	return;
}

void func_73(int iParam0) // Position - 0x24F3 Hash - 0xA1813BF8 ^0x43F7F42C
{
	var textBlock;

	textBlock = { func_191(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		HUD::TEXT_BLOCK_REQUEST(&textBlock);

	return;
}

BOOL func_74(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2516 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_192())
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
		num = func_182(Global_1898164.f_1[0 /*5*/]);
	
		if (func_193(num) && func_194(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_180(Global_1898164.f_1[0 /*5*/]))
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

void func_75(var uParam0, int iParam1) // Position - 0x271A Hash - 0xB961644E ^0xB961644E
{
	func_96(&(uParam0->f_428), iParam1);
	return;
}

void func_76(var uParam0) // Position - 0x272D Hash - 0x1CCC9FAE ^0x1CCC9FAE
{
	func_195(&(uParam0->f_428), &(uParam0->f_958));
	return;
}

BOOL func_77(var uParam0, const char* sParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2743 Hash - 0xB6AB086B ^0x5535D393
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
				func_196(uParam0, unk);
		}
	
		return false;
	}

	num = func_197(Global_35, func_89(uParam0), true);

	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if (num >= func_198(uParam0) && !bParam2 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_199();
				uParam0->f_529 = 0;
			}
		
			func_200(uParam0);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
		
			func_201(uParam0);
			func_103(uParam0, 128, true);
			func_103(uParam0, 256, true);
			func_103(uParam0, 4096, true);
			func_103(uParam0, 32768, true);
			func_103(uParam0, 16777216, true);
		}
	}
	else if (num <= func_202(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				func_202(uParam0) >= func_198(uParam0);
				playbackListName = { func_203(uParam0) };
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&playbackListName))
					func_204(uParam0);
			
				playbackListName = { func_203(uParam0) };
				flags = 256;
			
				if (!func_83(uParam0, 1))
					flags = flags | 2048;
			
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), flags, &playbackListName, false, true);
				func_205(uParam0, 0, false, 0, 0);
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
			if (func_206())
			{
				func_207(4096);
				uParam0->f_529 = 1;
			}
		}
	
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			flag = true;
			string2 = { func_183(uParam0) };
		
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

void func_78(int iParam0, int iParam1) // Position - 0x2ADF Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_30(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 - Global_1898346[iParam0 /*6*/].f_1 && iParam1;
	return;
}

BOOL func_79(int iParam0) // Position - 0x2B16 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_147(&(iParam0->f_29), 62))
	{
		switch (func_208())
		{
			case 1:
				if (!func_147(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_147(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_147(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_147(&(iParam0->f_29), 32))
					if (func_147(&(iParam0->f_29), 2))
						if (func_210(func_209()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

Ped func_80(int iParam0) // Position - 0x2BC0 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_211(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_81(int iParam0) // Position - 0x2BEC Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

void func_82(var uParam0, const char* sParam1) // Position - 0x2C02 Hash - 0x46501464 ^0xE9B4EB71
{
	int num;

	if (func_83(uParam0, 8192))
		return;

	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		num = MISC::_0x94E8CA3DEE952789(sParam1, "@");
	
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
			TEXT_LABEL_COPY(&(uParam0->f_440), { func_212("cutscene@", MISC::_0x5B4A8121A47D844D(num - 1), true, 63) }, 4);
	
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		TEXT_LABEL_COPY(&(uParam0->f_440), { func_212("cutscene@", sParam1, true, 63) }, 4);
	}

	func_96(uParam0, 8192);
	return;
}

BOOL func_83(var uParam0, int iParam1) // Position - 0x2C7C Hash - 0x718DD1EF ^0x5F4D390E
{
	return uParam0->f_8 && iParam1 != false;
}

void func_84(var uParam0) // Position - 0x2C8D Hash - 0xFCCC8B7D ^0xB8745C5D
{
	BOOL flag;
	int currentMessage;
	BOOL flag2;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444) || func_83(uParam0, 512))
	{
		if (!func_213(uParam0->f_501, 128))
			func_214();
	
		return;
	}

	if (func_99(uParam0, Global_35, 4) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_215(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_215(Global_35)) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_213(uParam0->f_501, 128))
			func_214();
	
		return;
	}

	flag = true;
	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);

	if (currentMessage != 0)
		if (func_216(currentMessage))
			if (func_217(Global_43801, false))
				flag = false;

	flag2 = false;

	if (func_213(uParam0->f_501, 512))
		flag2 = true;

	if (func_218(flag, flag2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_214();
	}

	return;
}

void func_85(var uParam0, char* sParam1) // Position - 0x2D9A Hash - 0xA419EFA1 ^0x99DB3BF
{
	var unk;
	var unk9;

	if (func_50(uParam0) == 2 && func_219(uParam0->f_500, 16384) || func_83(uParam0, 268435456))
	{
		unk = { func_183(uParam0) };
		func_220(uParam0, &unk);
	}

	func_221(uParam0, sParam1);

	if (func_83(uParam0, 131072))
		func_222(uParam0, false);

	if (func_223())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_224();
	}

	if (func_225())
		func_226(true);

	func_205(uParam0, 0, false, 0, 0);
	TEXT_LABEL_ASSIGN_STRING(&unk9, sParam1, 32);
	func_227(uParam0, unk9);
	func_93(true, false);
	func_200(uParam0);

	if (func_228() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_215(Global_35)))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	if (func_87(uParam0, 1))
		uParam0->f_436(uParam0);

	func_229(uParam0);
	func_230(uParam0, true);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	TEXT_LABEL_ASSIGN_STRING(&Global_43802, sParam1, 24);
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x2EA2 Hash - 0x77441219 ^0x1DE6F6A1
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
	return;
}

BOOL func_87(var uParam0, int iParam1) // Position - 0x2EB7 Hash - 0x6B2D4FF8 ^0x6B2D4FF8
{
	return uParam0->f_439 && iParam1 != false;
}

void func_88(var uParam0) // Position - 0x2EC9 Hash - 0xC673333B ^0xFC27ADE6
{
	if (!func_83(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		func_231(uParam0);
		func_230(uParam0, false);
	
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
	
		func_96(uParam0, 32768);
	}

	return;
}

Vector3 func_89(var uParam0) // Position - 0x2F2A Hash - 0xD2D3D44D ^0x694345D8
{
	return uParam0->f_5;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2F38 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_91(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2F62 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_232(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

void func_92(BOOL bParam0) // Position - 0x2FBD Hash - 0x70653DE9 ^0x49B958F9
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	return;
}

void func_93(BOOL bParam0, BOOL bParam1) // Position - 0x2FF1 Hash - 0xBAE5AEB2 ^0x9ABFBA0B
{
	if (func_233())
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);

	if (bParam0)
		if (func_234())
			func_235(true);

	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, bParam1, false);
	return;
}

void func_94(var uParam0) // Position - 0x3020 Hash - 0x952B4E7E ^0x1403561A
{
	var unk;

	if (!func_83(uParam0, 4))
	{
		if (func_219(uParam0->f_500, 16384))
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	
		unk = { func_236(uParam0) };
	
		if (!func_219(uParam0->f_500, 524288))
			func_237(&(uParam0->f_512));
	
		func_238(&(uParam0->f_500), 0, 2, unk, unk.f_1, unk.f_2, false);
		func_239(uParam0, 0f, 0f, 0f);
		func_240(uParam0);
		func_241(uParam0);
		func_242(uParam0, 0f, 0f, 0f, 0, false);
		func_243(uParam0);
		func_96(uParam0, 4);
		func_244(uParam0, false);
		func_245(&(Global_1946054.f_1497), Global_35, true, 64, true, true, true);
	
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_513)))
			CAM::_CAM_DESTROY(&(uParam0->f_513));
	}

	return;
}

BOOL func_95(var uParam0, BOOL bParam1) // Position - 0x30E1 Hash - 0x8D7BC112 ^0x47036BD8
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
		func_244(uParam0, true);
		return true;
	}

	return false;
}

void func_96(var uParam0, int iParam1) // Position - 0x316F Hash - 0x53A96DDB ^0x69C93C85
{
	uParam0->f_8 = uParam0->f_8 || iParam1;
	return;
}

int func_97(var uParam0) // Position - 0x3182 Hash - 0xF7D2A495 ^0x426C6775
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
		return -1;

	return BUILTIN::FLOOR(ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_444) * 1000f);
}

int func_98(var uParam0) // Position - 0x31BF Hash - 0xF7D2A495 ^0xF4909E0
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
		return -1;

	return BUILTIN::FLOOR(ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_444) * 1000f);
}

BOOL func_99(var uParam0, Ped pedParam1, int iParam2) // Position - 0x31FC Hash - 0xC6E5AF5F ^0x4744F9B8
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1 && func_246(&uParam0->f_13[i /*12*/], iParam2))
			return true;
	}

	return false;
}

BOOL func_100(var uParam0) // Position - 0x324E Hash - 0x3CCCD36D ^0x3C3A8A88
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

void func_101(var uParam0) // Position - 0x32AB Hash - 0xCD2CB56 ^0x848D9CDE
{
	if (func_83(uParam0, 1073741824) && !func_83(uParam0, 524288) && func_83(uParam0, 512) && CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(1000);

	return;
}

void func_102(var uParam0) // Position - 0x32F2 Hash - 0x795EBF5D ^0x531CDFF2
{
	if (!func_83(uParam0, 536870912))
	{
		func_244(uParam0, true);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_199();
		func_96(uParam0, 536870912);
	}

	if (func_83(uParam0, 524288))
		CAM::DO_SCREEN_FADE_OUT(0);

	func_247(uParam0);
	func_86(uParam0, 1);
	func_201(uParam0);
	func_248(uParam0);
	func_249(uParam0);
	func_250(uParam0, 4);
	func_204(uParam0);
	func_222(uParam0, true);
	func_200(uParam0);
	func_251(&(uParam0->f_1));

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);

	func_252(!func_213(uParam0->f_501, 128));

	if (!func_213(uParam0->f_501, 128))
		func_214();

	return;
}

void func_103(var uParam0, int iParam1, BOOL bParam2) // Position - 0x33C6 Hash - 0x4C22909C ^0xA24D6B06
{
	uParam0->f_8 = uParam0->f_8 - uParam0->f_8 && iParam1;

	if (iParam1 == 512 && bParam2 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_444);

	return;
}

void func_104(var uParam0, int iParam1) // Position - 0x3413 Hash - 0xFE5D8273 ^0x73A78C82
{
	if (Global_1935630.f_12)
		return;

	func_253(2000);
	Global_16 = false;
	func_254();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_213(*uParam0, 8));

	if (!func_213(*uParam0, 1))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);

	if (func_213(*uParam0, 2) || func_213(*uParam0, 4))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_213(*uParam0, 16))
		func_61(true);

	if (func_213(*uParam0, 32))
	{
		func_255(Global_35, -383172193, 0, 1742327865, false, true, false, false, true, false);
		func_256(joaat("kit_bandana"), false);
	}

	func_245(&(Global_1946054.f_1497), Global_35, true, 49217, true, true, true);

	if (Global_1359489.f_16 & 4194304 != 0)
		Global_1359489.f_16 = Global_1359489.f_16 - Global_1359489.f_16 & 4194304;

	*uParam0 = 0;
	return;
}

void func_105() // Position - 0x3524 Hash - 0xD4ABC353 ^0xB5896EA9
{
	Global_1935630.f_52 = 1;
	return;
}

BOOL func_106(var uParam0) // Position - 0x3533 Hash - 0xF077D70E ^0x7B568537
{
	BOOL isPedOnFoot;
	int num;
	float offsetFromEntityGivenWorldCoords;

	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);

	if (!isPedOnFoot && func_5(uParam0, 1048576))
	{
		func_66(uParam0, 1048576);
		return false;
	}

	if (!func_5(uParam0, 8388608))
	{
		if (BUILTIN::VDIST2(func_186(*uParam0), Global_36) < 10f * 10f)
		{
			func_25(uParam0, 8388608);
			func_19(&(uParam0->f_2890), false);
		}
		else
		{
			return false;
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
			offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, func_186(*uParam0)) };
		
			if (offsetFromEntityGivenWorldCoords > 0f)
				num = 262144;
		
			if (func_257(Global_35, &(uParam0->f_421), 0, SPC_LEAVE_CAMERA_CONTROL_ON, num, 1084227584, 100, 0, 0))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_422, true, 0))
	{
		return true;
	}
	else if (BUILTIN::VDIST2(func_186(*uParam0), Global_36) < 2.5f * 2.5f)
	{
		return true;
	}
	else if (!func_5(uParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_186(*uParam0), 1f, 20000, 1048576000, 0, 1193033728);
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, SPC_LEAVE_CAMERA_CONTROL_ON, false);
		PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MotionState_Walk"), false, 1, false);
	
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_3, -1, 0, 51, 0);
	
		func_25(uParam0, 2097152);
	}

	if (func_18(&(uParam0->f_2890)))
		if (func_48(&(uParam0->f_2890)) >= 15f)
			return true;

	return false;
}

void func_107(int iParam0) // Position - 0x3709 Hash - 0xB7DA3075 ^0x9010CBC
{
	int num;

	num = func_32(func_31(iParam0));

	if (!func_30(num))
		return;

	func_22(num, 1024);
	return;
}

void func_108(BOOL bParam0) // Position - 0x3733 Hash - 0x5D1342E6 ^0x2E0382D7
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

void func_109(int iParam0, int iParam1) // Position - 0x37D6 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_110(int iParam0) // Position - 0x37E7 Hash - 0x4A1A3440 ^0xAE5E6967
{
	eStackSize i;

	if (func_258() != -1)
		return;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_159(func_259(i), 0))
			if (PED::IS_PED_GROUP_MEMBER(func_259(i), func_260(), true))
				func_261(i, iParam0);
	}

	return;
}

void func_111(var uParam0) // Position - 0x3835 Hash - 0x6215D6B9 ^0xC793DEB6
{
	if (Global_1935630.f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		func_108(false);
		func_65(uParam0, true);
	}

	func_262(true, 0, true);
	return;
}

void func_112(BOOL bParam0) // Position - 0x3861 Hash - 0x6D9C7C2F ^0xEFFA22A7
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
	func_263(0f);
	Global_1935436.f_11 = 1;

	if (func_264())
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	else
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
		func_265();

	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);

	return;
}

BOOL func_113(int iParam0, int iParam1) // Position - 0x391B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_114(eStackSize essParam0) // Position - 0x392A Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_115(eStackSize essParam0) // Position - 0x3949 Hash - 0xDA629583 ^0xDA629583
{
	return func_266(essParam0, 16, true);
}

BOOL func_116(eStackSize essParam0) // Position - 0x395A Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_114(essParam0))
		return false;

	if (!func_115(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

BOOL func_117(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x398E Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_197(pedParam0, Global_36, true);

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

BOOL func_118(var uParam0) // Position - 0x3A17 Hash - 0x39705408 ^0x39705408
{
	return func_113(*uParam0, 2);
}

float func_119() // Position - 0x3A27 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_120(var uParam0) // Position - 0x3A59 Hash - 0xEDF5DFB4 ^0xAE1B7E7A
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);

	return;
}

void func_121(var uParam0, var uParam1) // Position - 0x3A76 Hash - 0x5F6D01C3 ^0x5F6D01C3
{
	func_267(uParam0, 4);
	func_268(uParam0, 10);
	func_269(uParam0, uParam1);
	return;
}

void func_122(var uParam0, float fParam1) // Position - 0x3A96 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_119() - fParam1;
	func_270(uParam0, 1);
	func_271(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_123(int iParam0, ItemSet isParam1, ItemSet isParam2, ItemSet isParam3) // Position - 0x3ABC Hash - 0x68078886 ^0xC044E3DC
{
	if (!func_81(iParam0))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(isParam1) || !ITEMSET::IS_ITEMSET_VALID(isParam2) || !ITEMSET::IS_ITEMSET_VALID(isParam3))
		return;

	!func_272(iParam0);
	Global_1835011[iParam0 /*74*/].f_58 = isParam1;
	Global_1835011[iParam0 /*74*/].f_59 = isParam2;
	Global_1835011[iParam0 /*74*/].f_60 = isParam3;
	return;
}

Vector3 func_124(var uParam0) // Position - 0x3B26 Hash - 0x1BDFA5C4 ^0x1BDFA5C4
{
	return func_89(&(uParam0->f_428));
}

Vector3 func_125(var uParam0) // Position - 0x3B37 Hash - 0xC8CA6991 ^0x9DE3152C
{
	var unk;
	var position;
	var rotation;
	var matrix;

	TEXT_LABEL_COPY(&unk, { func_273(uParam0) }, 8);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_215(Global_35), &matrix, false, 0, 2))
			position = { matrix };
		else
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &position, &rotation, 2);
	
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return position;
	}

	return 0f, 0f, 0f;
}

Vector3 func_126(int iParam0) // Position - 0x3BC1 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_186(iParam0);
}

void func_127(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3BCF Hash - 0x11E48EAB ^0x11E48EAB
{
	func_196(&(uParam0->f_428), uParam1);
	return;
}

BOOL func_128(var uParam0) // Position - 0x3BE4 Hash - 0xEC59DD93 ^0xEC59DD93
{
	BOOL flag;

	func_274();
	flag = true;

	if (!func_275(uParam0))
		flag = false;

	if (!func_276(uParam0))
		flag = false;

	if (!func_277())
		flag = false;

	if (!func_278())
		flag = false;

	if (!func_279())
		flag = false;

	if (!func_280())
		flag = false;

	if (!func_281(&ansLocal_35, "script@story@nts2@leadin@int@base", 1))
		flag = false;

	if (!func_281(&ansLocal_36, "script@story@nts2@leadin@int@background_peds", 1))
		flag = false;

	if (!func_281(&ansLocal_37, "script@story@nts2@leadin@int@prop_place", 1))
		flag = false;

	if (!func_281(&ansLocal_38, "script@story@nts2@leadin@int@leadin", 0))
		flag = false;

	if (!flag)
		return false;

	if (!func_282())
		return false;

	func_283();
	func_284();
	func_285();
	func_286(&volLocal_53, 36.14273f, 1096.6523f, 175f, 0f, 0f, 0f, 450f, 350f, 75f, "NTS2_BlockAmbient");
	func_287(&volLocal_54, uLocal_26, 0f, 0f, 0f, 1f, 1f, 2f, "NTS2_BlockPath");
	func_288(&volLocal_57, uLocal_23, 0f, 0f, 0f, 17.5f, 17.5f, 17.5f, "MUD3B_INT - CUTSCENE");
	func_289(&(uParam0->f_428), volLocal_57, false, true);
	func_242(&(uParam0->f_428), uLocal_29, fLocal_32, true);
	volLocal_55 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), uLocal_26, 0f, 0f, 0f, 1f, 1f, 2f);
	volLocal_56 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), 67.423f, 1070.24f, 195.479f, 0f, 0f, 23.603f, 8.827f, 0.45f, 4.899f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_56, false);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_55, true);
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volLocal_54, 7);
	func_189(uParam0, volLocal_53);
	func_25(uParam0, 2);
	func_25(uParam0, 16);
	func_25(uParam0, 2048);
	return true;
}

void func_129(var uParam0) // Position - 0x3D9B Hash - 0x50FD6012 ^0x5C8E94AF
{
	if (!ITEMSET::IS_ITEMSET_VALID(isLocal_14))
		isLocal_14 = ITEMSET::CREATE_ITEMSET(true);

	return;
}

void func_130(var uParam0) // Position - 0x3DB4 Hash - 0x4DD6AE05 ^0xF30F3284
{
	func_175(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
	return;
}

void func_131(var uParam0, Ped pedParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3DF7 Hash - 0x82689B8E ^0x82689B8E
{
	func_138(uParam0, pedParam1, sParam2, iParam3, iParam4, bParam5, false);
	return;
}

void func_132(var uParam0) // Position - 0x3E10 Hash - 0x6254ECC0 ^0x4456B255
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
	
		if (!func_290(&unk))
			return;
	
		func_291(uParam0, unk, 0);
		func_25(uParam0, 524288);
	}

	return;
}

void func_133(var uParam0) // Position - 0x3E73 Hash - 0xDECB73AA ^0xDECB73AA
{
	if (func_202(&(uParam0->f_428)) != 15f || func_198(&(uParam0->f_428)) != 20f)
		return;

	switch (*uParam0)
	{
		case 31:
			func_292(&(uParam0->f_428), 50f);
			func_293(&(uParam0->f_428), 75f);
			break;
	
		case 34:
			func_292(&(uParam0->f_428), 35f);
			func_293(&(uParam0->f_428), 50f);
			break;
	
		case 62:
			func_292(&(uParam0->f_428), 25f);
			func_293(&(uParam0->f_428), 30f);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_134(var uParam0) // Position - 0x3F20 Hash - 0x4CAB5FDE ^0x94139C79
{
	return func_294(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

BOOL func_135(var uParam0, BOOL bParam1) // Position - 0x3F63 Hash - 0x668AF7F9 ^0x2C83E00
{
	eStackSize stackSize;

	if (func_5(uParam0, 2))
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	stackSize = func_295(*uParam0);

	if (!func_114(stackSize))
		return true;

	uParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(func_259(stackSize));
	return func_296(uParam0, stackSize, &(uParam0->f_3), bParam1, true, uParam0->f_2903, uParam0->f_2903.f_1, uParam0->f_2903.f_2, 0, 0, false, false, false);
}

BOOL func_136(int iParam0, BOOL bParam1) // Position - 0x3FD0 Hash - 0x94D41262 ^0xA3FAE854
{
	BOOL num;
	var label;
	var unk8;

	num = 1;
	TEXT_LABEL_COPY(&label, { func_190(iParam0) }, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk8, HUD::_GET_LABEL_TEXT_2(&label), 64);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk8))
		if (!func_297(iParam0))
			num = 0;

	if (!bParam1)
	{
		TEXT_LABEL_COPY(&label, { func_191(iParam0) }, 8);
		TEXT_LABEL_ASSIGN_STRING(&unk8, HUD::_GET_LABEL_TEXT_2(&label), 64);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk8))
			if (!func_298(iParam0))
				num = 0;
	}

	return num;
}

BOOL func_137(AnimScene ansParam0) // Position - 0x403E Hash - 0x6101F303 ^0x5F8569D0
{
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansParam0, false))
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansParam0, true, false))
				ANIMSCENE::START_ANIM_SCENE(ansParam0);
	else
		return true;

	return false;
}

void func_138(var uParam0, Object obParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x4073 Hash - 0x9BD375D2 ^0x9BD375D2
{
	func_299(&(uParam0->f_428), obParam1, sParam2, iParam3, iParam4, bParam6);
	func_300(uParam0, obParam1, sParam2);

	if (bParam5)
		func_301(uParam0, obParam1);

	return;
}

void func_139(var uParam0, Object obParam1, BOOL bParam2) // Position - 0x40A5 Hash - 0x326B058E ^0x60290EA9
{
	if (!ENTITY::DOES_ENTITY_EXIST(obParam1))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
		Global_43616 = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_IN_ITEMSET(obParam1, Global_43616))
		ITEMSET::ADD_TO_ITEMSET(obParam1, Global_43616);

	if (bParam2)
		DECORATOR::DECOR_SET_BOOL(obParam1, func_302(), true);

	return;
}

void func_140(var uParam0) // Position - 0x40F8 Hash - 0xCB9D98D1 ^0x9A14B9E3
{
	int clockHours;

	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (clockHours >= 21 || clockHours < 5)
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_444, "bNight", true, false);
	else if (clockHours == 20)
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_444, "bEvening", true, false);

	return;
}

void func_141(var uParam0, int iParam1) // Position - 0x4140 Hash - 0x5D51AA95 ^0x5D51AA95
{
	uParam0->f_436 = iParam1;
	func_303(uParam0, 1);
	return;
}

struct<4> func_142(int iParam0) // Position - 0x4156 Hash - 0x6D11454D ^0xB12E3BC9
{
	var unk;

	if (!func_81(iParam0))
		return unk;

	return Global_1835011[iParam0 /*74*/].f_3;
}

void func_143(var uParam0) // Position - 0x417B Hash - 0x70AF85D1 ^0xF30741F3
{
	var unk;
	int i;

	func_304(&(uParam0->f_428)) > 15;

	for (i = 0; i < 15; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428.f_13[i /*12*/]))
			Global_43619[i /*12*/] = { uParam0->f_428.f_13[i /*12*/] };
		else
			Global_43619[i /*12*/] = { unk };
	}

	return;
}

BOOL func_144() // Position - 0x41E0 Hash - 0x5976C0FC ^0x467B462C
{
	return func_305(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_145() // Position - 0x41F0 Hash - 0x8DA4BA54 ^0x8DA4BA54
{
	if (func_144())
	{
		Global_18 = false;
		Global_43884 = 0;
	
		if (!func_167())
			func_61(true);
	}

	return;
}

void func_146(var uParam0, var uParam1) // Position - 0x4214 Hash - 0x4D904C7 ^0x7235D696
{
	var unk;

	if (func_63(uParam1, 32768))
	{
		unk = { func_183(uParam0) };
		func_220(uParam0, &unk);
	
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
		
			if (_IS_NULL_VECTOR(uParam0->f_505))
				uParam0->f_505 = { func_306(uParam1, uParam1->f_1684) };
		
			if (_IS_NULL_VECTOR(uParam0->f_502))
			{
				uParam0->f_502 = { func_306(uParam1, uParam1->f_1684) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = uParam0->f_502.f_2 + 0.5f;
			}
		}
	
		if (func_63(uParam1, 268435456))
			func_307(&(uParam0->f_500), 16384);
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_308(uParam1, 524288);
	}

	if (func_309(uParam1, 128))
		func_96(uParam0, 32);

	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
	
		if (uParam1->f_1684 >= 0 && func_310(&uParam1->f_1016[uParam1->f_1684 /*41*/], 256))
			func_307(&(uParam0->f_500), 524288);
	}

	if (*uParam1 == 0 && CAM::_IS_CAMERA_AVAILABLE(&(uParam1->f_1692)))
		MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_513), &(uParam1->f_1692), 16);

	return;
}

BOOL func_147(var uParam0, int iParam1) // Position - 0x4379 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_148(int iParam0) // Position - 0x4399 Hash - 0x86FFCEDA ^0x86FFCEDA
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

BOOL func_149(int iParam0) // Position - 0x43F4 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_311(Global_1835011[iParam0 /*74*/].f_1);
}

const char* func_150(int iParam0) // Position - 0x4420 Hash - 0xBDAEC5FF ^0xCF2E1D60
{
	const char* str;

	if (!func_81(iParam0))
		return str;

	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_151(var uParam0, var uParam1) // Position - 0x4441 Hash - 0x8FE20AD3 ^0xDE446A76
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
		return 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
			{
				func_220(uParam0, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}

	return 0;
}

void func_152() // Position - 0x44DB Hash - 0x389B7A32 ^0x322EDCB5
{
	if (func_159(Global_35, 0))
	{
		if (bLocal_33)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_312(6);
				bLocal_33 = false;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bLocal_33 = true;
		}
	}

	return;
}

float func_153(Ped pedParam0) // Position - 0x4516 Hash - 0x490ABF38 ^0x5FA5B4C8
{
	var entityCoords;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };

	return entityCoords.f_2;
}

BOOL func_154(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x4537 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_313(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_155(var uParam0, char* sParam1, Ped pedParam2, Ped pedParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x4565 Hash - 0x825CDE54 ^0x3C4EDF1C
{
	var unk;
	BOOL flag;

	pedParam3 = pedParam3;
	iParam4 = iParam4;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam2) && func_314(pedParam2, pedParam3, true, true) < 70f || bParam5)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 24);
	
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(pedParam2, pedParam3, 7000, 0, 51, 0);
		
			if (func_314(pedParam2, pedParam3, true, true) < 25f)
				TASK::TASK_LOOK_AT_ENTITY(pedParam3, pedParam2, 7000, 0, 51, 0);
		}
	
		if (iParam4 > 0)
			flag = true;
	
		func_26(&uLocal_0);
	
		if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
			if (func_315(sParam1))
				return true;
		else if (func_316(uParam0, unk, flag, iParam4, false, false))
			return true;
	}

	return false;
}

int func_156(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0x4618 Hash - 0x76A08862 ^0x6A7EDE1E
{
	int i;
	Ped mount;
	Vehicle vehiclePedIsIn;
	Ped pedInDraftHarness;
	float num;

	func_317(pedParam0, uParam1, false, iParam5, fParam6, fParam7, fParam8, iParam12, iParam13, bParam14, 0);
	mount = PED::GET_MOUNT(pedParam0);

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);

	num = func_197(pedParam0, uParam1, true);

	if (!func_18(uParam4))
		if (num <= fParam8)
			if (ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
				func_19(uParam4, false);
	else if (bParam10 && num > fParam8)
		func_251(uParam4);

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
		
			if (!ENTITY::IS_ENTITY_DEAD(mount) && !func_160(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
			{
				if (PED::IS_PED_ON_MOUNT(pedParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(pedParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && !func_160(pedParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(pedParam0, 0, 0);
					return 1;
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

	return 0;
}

BOOL func_157(Ped pedParam0) // Position - 0x47D7 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_158(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x47F2 Hash - 0x25DC51B ^0x2C9FE3CE
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

	func_318(false);

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

BOOL func_159(Ped pedParam0, int iParam1) // Position - 0x4928 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_319(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_319(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_319(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_319(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_319(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_319(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_319(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_319(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

BOOL func_160(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x4A27 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

void func_161(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4A50 Hash - 0xC61CF035 ^0xF8646415
{
	float speed;

	if (Global_1935630.f_12)
		return;

	speed = 1f;

	switch (hParam0)
	{
		case joaat("MotionState_Idle"):
		case joaat("MotionState_Crouch_Idle"):
			speed = 0f;
			break;
	
		case -1415276238:
		case 1823606944:
			speed = 1.5f;
			break;
	
		case joaat("MotionState_Sprint"):
			speed = 3f;
			break;
	
		case joaat("MotionState_Walk"):
		case joaat("MotionState_Crouch_Walk"):
			break;
	
		case joaat("MotionState_Run"):
		case joaat("MotionState_Crouch_Run"):
			speed = 2f;
			break;
	}

	PED::FORCE_PED_MOTION_STATE(Global_35, hParam0, bParam2, iParam3, false);

	if (bParam4)
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), speed, iParam1, ENTITY::GET_ENTITY_HEADING(Global_35), bParam6, bParam7);
	else
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), speed, iParam1, iParam5, bParam6, bParam7);

	return;
}

BOOL func_162() // Position - 0x4B04 Hash - 0x5A8ACC64 ^0x692AB1B6
{
	return ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35));
}

BOOL func_163(var uParam0) // Position - 0x4B17 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_320(81053684))
		if (func_321(uParam0))
			return true;
	else if (func_322(-525676072, uParam0))
		if (func_321(uParam0))
			return true;

	return false;
}

int func_164() // Position - 0x4B5C Hash - 0x68C03105 ^0x68C03105
{
	Hash hash;

	if (!func_323())
		return 0;

	if (!func_321(&hash))
		return 0;

	if (!func_324(hash))
		return 0;

	return func_325(hash, 0);
}

BOOL func_165(var uParam0) // Position - 0x4B93 Hash - 0xAA225417 ^0xEBFC9AC8
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
						entityId = { func_326(uParam0, uParam0->f_3[j /*13*/].f_2) };
					
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

void func_166(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4C94 Hash - 0x19C13D4E ^0x60116C62
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
				else if (func_63(uParam0, 32768) && func_327(&uParam0->f_1522[i /*10*/], 128))
				{
					func_328(uParam0->f_1522[i /*10*/].f_8, 10000, 1, -1, false);
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

BOOL func_167() // Position - 0x4DA4 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

void func_168(Volume volParam0) // Position - 0x4DC0 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_169(var uParam0, eStackSize essParam1, Ped pedParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x4DD7 Hash - 0x277B3662 ^0x2E25C4D2
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (!func_114(essParam1))
		return;

	func_329(pedParam2);

	if (bParam4)
		func_330(uParam0, pedParam2, 0);

	if (!bParam6)
	{
		if (!func_5(uParam0, 4194304))
		{
			bParam6 = func_331(&Global_1835011[*uParam0 /*74*/], 1024);
			flag = func_331(&Global_1835011[*uParam0 /*74*/], 65536);
		}
	}

	func_332(essParam1, bParam3, bParam4, bParam5, -1082130432, true, true, bParam6, flag, false, false);
	return;
}

void func_170(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4E5F Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_171(Object obParam0) // Position - 0x4ECD Hash - 0xF954AE4E ^0x44ABC329
{
	if (ENTITY::DOES_ENTITY_EXIST(obParam0))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(obParam0, false))
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obParam0);

	return;
}

void func_172() // Position - 0x4EEE Hash - 0x8CF15F1 ^0xB48606B9
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_39))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_39, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_39, true);
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_39, false);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_39);
		}
	}

	return;
}

void func_173(Volume volParam0) // Position - 0x4F1D Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_333(volumeCoords, 0);
	return;
}

void func_174(var uParam0, Volume volParam1, BOOL bParam2) // Position - 0x4F45 Hash - 0x2EB65318 ^0x737362FB
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

void func_175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12) // Position - 0x4F7D Hash - 0x4B672E42 ^0x6C5B61A2
{
	int i;
	int j;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_334(&uParam0->[i /*3*/]))
			if (func_335(uParam0->[i /*3*/].f_2, iParam12))
				func_336(&uParam0->[i /*3*/]);
	}

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_337(&uParam1->[i /*5*/]))
			if (func_335(uParam1->[i /*5*/].f_4, iParam12))
				func_338(&uParam1->[i /*5*/]);
	}

	for (i = 0; i < *uParam2; i = i + 1)
	{
		if (func_339(&uParam2->[i /*3*/]))
			if (func_335(uParam2->[i /*3*/].f_2, iParam12))
				func_340(&uParam2->[i /*3*/]);
	}

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (func_341(&uParam3->[i /*3*/]))
			if (func_335(uParam3->[i /*3*/].f_2, iParam12))
				func_342(&uParam3->[i /*3*/]);
	}

	if (func_335(uParam4->f_1, iParam12))
		func_343(uParam4);

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_344(&uParam5->[i /*67*/]))
			if (func_335(uParam5->[i /*67*/].f_3, iParam12))
				func_345(&uParam5->[i /*67*/]);
	}

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_344(&uParam5->[i /*67*/]))
		{
			for (j = 0; j < 20; j = j + 1)
			{
				if (func_346(&uParam5->[i /*67*/].f_4[j /*3*/]))
					if (func_335(uParam5->[i /*67*/].f_4[j /*3*/].f_2, iParam12))
						func_347(&uParam5->[i /*67*/].f_4[j /*3*/], uParam5->[i /*67*/].f_1);
			}
		}
	}

	for (i = 0; i < *uParam6; i = i + 1)
	{
		if (func_348(&uParam6->[i /*4*/]))
			if (func_335(uParam6->[i /*4*/].f_3, iParam12))
				func_349(&uParam6->[i /*4*/]);
	}

	for (i = 0; i < *uParam7; i = i + 1)
	{
		if (func_350(&uParam7->[i /*5*/]))
			if (func_335(uParam7->[i /*5*/].f_4, iParam12))
				func_351(&uParam7->[i /*5*/]);
	}

	for (i = 0; i < *uParam8; i = i + 1)
	{
		if (func_352(&uParam8->[i /*3*/]))
			if (func_335(uParam8->[i /*3*/].f_2, iParam12))
				func_353(&uParam8->[i /*3*/]);
	}

	for (i = 0; i < *uParam9; i = i + 1)
	{
		if (func_354(&uParam9->[i /*3*/]))
			if (func_335(uParam9->[i /*3*/].f_2, iParam12))
				func_355(&uParam9->[i /*3*/]);
	}

	for (i = 0; i < *uParam10; i = i + 1)
	{
		if (func_356(&uParam10->[i /*4*/]))
			if (func_335(uParam10->[i /*4*/].f_3, iParam12))
				func_357(&uParam10->[i /*4*/]);
	}

	for (i = 0; i < *uParam11; i = i + 1)
	{
		if (func_358(&uParam11->[i /*3*/]))
			if (func_335(uParam11->[i /*3*/].f_2, iParam12))
				func_359(&uParam11->[i /*3*/]);
	}

	return;
}

void func_176(BOOL bParam0) // Position - 0x52C8 Hash - 0x70EE66C ^0x88F73934
{
	Global_1935496.f_18 = !bParam0;
	return;
}

BOOL func_177() // Position - 0x52D9 Hash - 0x9B720BCA ^0x99D774A5
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[i /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[i /*6*/].f_1, false) && Global_43806[i /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD() && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(Global_43806[i /*6*/], "pl_breakout") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_43806[i /*6*/], "pl_breakout"))
			return true;
	}

	return false;
}

void func_178() // Position - 0x5355 Hash - 0x7A8E89A ^0xC1ACE39F
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[i /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[i /*6*/].f_1, false) && Global_43806[i /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD() && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(Global_43806[i /*6*/], "pl_breakout") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_43806[i /*6*/], "pl_breakout"))
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Global_43806[i /*6*/], "pl_breakout", true);
	}

	return;
}

BOOL func_179(Ped pedParam0) // Position - 0x53DC Hash - 0x570B88CE ^0x1868A37B
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

BOOL func_180(int iParam0) // Position - 0x543A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_181(int iParam0) // Position - 0x546D Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_180(iParam0))
		return 0;

	return func_361(func_360(iParam0));
}

int func_182(int iParam0) // Position - 0x548D Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_180(iParam0))
		return -1;

	return func_362(func_360(iParam0));
}

struct<8> func_183(var uParam0) // Position - 0x54AD Hash - 0x34F395B4 ^0x4D7F9139
{
	var unk;

	unk = { func_363(uParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		unk = { func_364() };

	return unk;
}

void func_184(var uParam0, const char* sParam1) // Position - 0x54D7 Hash - 0x25E063BB ^0x16263A15
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_446), sParam1, 64);
	return;
}

char* func_185() // Position - 0x54F4 Hash - 0x306ACA3A ^0x83C20090
{
	return "unnamed";
}

Vector3 func_186(int iParam0) // Position - 0x5500 Hash - 0xACD6F870 ^0xDE230469
{
	if (func_365(iParam0))
		return func_366(iParam0);

	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_187(var uParam0, Volume volParam1, int iParam2) // Position - 0x5526 Hash - 0x366C12BA ^0x33183664
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	uParam0->f_425 = volParam1;
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volParam1, 15);
	func_66(uParam0, 512);
	uParam0->f_427 = func_367(volParam1, 0, false, 0);
	return;
}

void func_188(int iParam0, Volume volParam1) // Position - 0x557B Hash - 0x8F213D8E ^0x152F2000
{
	if (!func_81(iParam0))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	!func_272(iParam0);
	Global_1835011[iParam0 /*74*/].f_61 = volParam1;
	return;
}

void func_189(var uParam0, Volume volParam1) // Position - 0x55B3 Hash - 0x5750941F ^0xB5ADF4FC
{
	var unk;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	uParam0->f_426 = volParam1;
	func_368(volParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, func_185(), 64);
	func_369(volParam1, &unk, true, 0, 0, false, -1082130432);
	return;
}

struct<2> func_190(int iParam0) // Position - 0x55EF Hash - 0x49479BE1 ^0x49479BE1
{
	var unk;

	TEXT_LABEL_COPY(&unk, { func_150(iParam0) }, 2);
	return unk;
}

struct<2> func_191(int iParam0) // Position - 0x5606 Hash - 0xAC0867E9 ^0x7CE6C506
{
	var unk;

	unk = { func_190(iParam0) };
	TEXT_LABEL_APPEND_STRING(&unk, "AUD", 16);
	return unk;
}

BOOL func_192() // Position - 0x5624 Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_193(int iParam0) // Position - 0x5677 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_194(int iParam0, int iParam1) // Position - 0x568D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_195(var uParam0, var uParam1) // Position - 0x569C Hash - 0xB353E28A ^0x2F5BCD55
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[i /*41*/].f_30)))
			func_370(uParam0, &(uParam1->f_1016[i /*41*/].f_30), true);
	}

	return;
}

void func_196(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x56DC Hash - 0x2559B2A1 ^0x79D637E0
{
	if (_IS_NULL_VECTOR(fParam1))
		return;

	uParam0->f_5 = { fParam1 };
	return;
}

int func_197(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x56FC Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_198(var uParam0) // Position - 0x5724 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_435;
}

void func_199() // Position - 0x5731 Hash - 0xFA72027F ^0xFA72027F
{
	int num;

	Global_1946054.f_858 = Global_1946054.f_858 - 1;

	if (Global_1946054.f_858 <= 0)
	{
		num = 35;
		func_371(num);
	}

	return;
}

void func_200(var uParam0) // Position - 0x5760 Hash - 0x56A63D83 ^0x32CB1163
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

void func_201(var uParam0) // Position - 0x57FB Hash - 0x8073496 ^0x6EC7F710
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_372(uParam0);
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

float func_202(var uParam0) // Position - 0x5862 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_434;
}

struct<8> func_203(var uParam0) // Position - 0x586F Hash - 0xDB13DC73 ^0xDB13DC73
{
	return uParam0->f_446;
}

void func_204(var uParam0) // Position - 0x587F Hash - 0xA1CFA37E ^0xA1CFA37E
{
	var unk;

	unk = { func_373() };
	func_184(uParam0, &unk);
	return;
}

void func_205(var uParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x5898 Hash - 0x444CF639 ^0xB97B3688
{
	if (func_83(uParam0, 16))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_374(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_185());
		func_96(uParam0, 8);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_289(uParam0, uParam0->f_4, false, true);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_96(uParam0, 16);
	}

	return;
}

BOOL func_206() // Position - 0x5938 Hash - 0xAE743BBD ^0xB1C5A13D
{
	return Global_1946054.f_1497 != Global_1946054.f_2163.f_1;
}

void func_207(int iParam0) // Position - 0x5951 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_375(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_371(num);
	return;
}

int func_208() // Position - 0x5995 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

Hash func_209() // Position - 0x59A1 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_210(Hash hParam0) // Position - 0x59AD Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_211(int iParam0) // Position - 0x59C0 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

struct<8> func_212(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0x59D9 Hash - 0xB13D7CEF ^0x4DD40A33
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

BOOL func_213(int iParam0, int iParam1) // Position - 0x5A90 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_214() // Position - 0x5A9F Hash - 0xF2FB1A38 ^0xF2FB1A38
{
	if (func_376(Global_43801))
		func_377(&Global_43801, false, false);

	return;
}

char* func_215(Ped pedParam0) // Position - 0x5ABA Hash - 0xA235395 ^0x9D4D59AB
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
	return func_378(entityModel);
}

BOOL func_216(int iParam0) // Position - 0x5B08 Hash - 0x531420D5 ^0x3A11B780
{
	int messageState;

	if (func_379(iParam0))
	{
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return messageState == 4 || messageState == 0 || messageState == 3 || messageState == 5 || messageState == 2;
	}

	return false;
}

BOOL func_217(int iParam0, BOOL bParam1) // Position - 0x5B51 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_376(iParam0))
		return false;

	return !func_380(iParam0, 4);
}

BOOL func_218(BOOL bParam0, BOOL bParam1) // Position - 0x5B76 Hash - 0xDB63BA21 ^0xE1063E2D
{
	if (!func_376(Global_43801))
	{
		Global_43801 = func_381("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("LONG_TIMED_EVENT"), false);
		Global_1945188[Global_43801 /*18*/].f_16 = Global_23[3];
		func_382(Global_43801, false, true);
		func_383(Global_43801, 6, true);
	
		if (bParam1)
			func_383(Global_43801, 14, true);
	}
	else
	{
		if (!func_217(Global_43801, false))
			func_384(Global_43801, true, true);
	
		if (func_385(Global_43801, true) != 0f && bParam0)
			func_382(Global_43801, true, true);
		else
			func_382(Global_43801, false, true);
	
		return func_386(Global_43801, true);
	}

	return false;
}

BOOL func_219(int iParam0, int iParam1) // Position - 0x5C34 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_220(var uParam0, const char* sParam1) // Position - 0x5C43 Hash - 0xD359B1E0 ^0x32AEA5DC
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

	func_184(uParam0, sParam1);
	func_103(uParam0, 2097152, true);
	func_96(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1, true);
	return;
}

void func_221(var uParam0, char* sParam1) // Position - 0x5D0A Hash - 0xEBF6CAFB ^0xB90E227B
{
	if (!func_83(uParam0, 32) || func_387(uParam0) || func_83(uParam0, 268435456) && !func_83(uParam0, 65536))
		func_307(&(uParam0->f_500), 256);

	return;
}

void func_222(var uParam0, BOOL bParam1) // Position - 0x5D57 Hash - 0xA338CC7 ^0xAFB97042
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

BOOL func_223() // Position - 0x5DC9 Hash - 0x35A4808D ^0x7E542F56
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_player_journal")) > 0;
}

void func_224() // Position - 0x5DDC Hash - 0x9198443F ^0xEDA86CC9
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

BOOL func_225() // Position - 0x5E2E Hash - 0x3CA1BB47 ^0x6A0D5C15
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	return false;
}

void func_226(BOOL bParam0) // Position - 0x5E48 Hash - 0x9AA8C616 ^0xCCF3BF7F
{
	if (func_225())
		Global_1357509 = 1;

	func_388(joaat("camera_item"));

	if (bParam0 && Global_1935630.f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}

	return;
}

void func_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x5E99 Hash - 0xBAB7BE58 ^0xBAB7BE58
{
	uParam0->f_440 = { uParam1 };
	return;
}

BOOL func_228() // Position - 0x5EAC Hash - 0xBA0B7E94 ^0x198E4494
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
		return true;

	return false;
}

void func_229(var uParam0) // Position - 0x5ED0 Hash - 0xB9A4813D ^0x4EB23AD7
{
	int i;
	var unk;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]))
			func_389(uParam0, &uParam0->f_462[i /*9*/]);
	}

	unk = { func_373() };
	func_389(uParam0, &unk);
	unk = { func_183(uParam0) };
	func_389(uParam0, &unk);
	return;
}

void func_230(var uParam0, BOOL bParam1) // Position - 0x5F2E Hash - 0x360C8D66 ^0x4FD9930
{
	int i;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_246(&uParam0->f_13[i /*12*/], 2))
		{
			if (func_246(&uParam0->f_13[i /*12*/], 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[i /*12*/].f_1)))
			{
				func_390(uParam0, &(uParam0->f_13[i /*12*/].f_1), uParam0->f_13[i /*12*/], uParam0->f_13[i /*12*/].f_9);
			
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[i /*12*/]))
				{
					pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]);
				
					if (pedIndexFromEntityIndex != Global_35 && !func_246(&uParam0->f_13[i /*12*/], 16))
						func_391(pedIndexFromEntityIndex);
				}
			}
		}
	}

	return;
}

void func_231(var uParam0) // Position - 0x6004 Hash - 0x44F320D ^0x91B8DCFF
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		return;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_246(&uParam0->f_13[i /*12*/], 2))
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[i /*12*/].f_1)))
				func_392(&uParam0->f_13[i /*12*/], 1);
	}

	return;
}

float func_232(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x608D Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_233() // Position - 0x60AB Hash - 0x497997A3 ^0xEB2F5273
{
	return func_379(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

BOOL func_234() // Position - 0x60BC Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_235(BOOL bParam0) // Position - 0x60DC Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

Vector3 func_236(var uParam0) // Position - 0x60EC Hash - 0xBDA8105E ^0xBDA8105E
{
	return uParam0->f_502;
}

void func_237(var uParam0) // Position - 0x60FB Hash - 0xC68D2F1F ^0xFC9AB41F
{
	Hash hash;

	if (func_163(&hash))
	{
		if (func_393(hash, 0))
		{
			if (func_394(hash) == -525676072)
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("MASKS_LARGE"), 0);
				func_255(Global_35, -2065815962, 0, 1108822547, false, true, false, false, false, false);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("neckwear"), 0);
			}
		
			if (!func_393(*uParam0, 0))
				*uParam0 = hash;
		}
	}

	return;
}

void func_238(var uParam0, eSetPlayerControlFlags espcfParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x616B Hash - 0x3C079E71 ^0x58721EE9
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
		func_395(0, false);
		func_396(-1);
	}

	func_92(true);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);

	if (!func_219(*uParam0, 32))
		espcfParam1 = espcfParam1 | SPC_REMOVE_EXPLOSIONS;

	if (!func_219(*uParam0, 64))
		espcfParam1 = espcfParam1 | SPC_REMOVE_FIRES;

	if (!func_219(*uParam0, 128))
		espcfParam1 = espcfParam1 | SPC_REMOVE_PROJECTILES;

	if (func_219(*uParam0, 131072))
		espcfParam1 = espcfParam1 | SPC_PREVENT_EVERYBODY_BACKOFF;

	if (!func_219(*uParam0, 32768))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam1, true);

	if (!func_219(*uParam0, 1))
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL, 0);

	if (!func_219(*uParam0, 65536))
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);

	if (!func_219(*uParam0, 4) && !func_219(*uParam0, 2))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_219(*uParam0, 2048))
		func_397(false, false);

	if (func_219(*uParam0, 8))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	if (func_219(*uParam0, 256))
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);

	if (func_219(*uParam0, 8192))
		func_398();

	if (!func_219(*uParam0, 262144))
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	if (!func_219(*uParam0, 512))
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);

	if (!func_219(*uParam0, 1024))
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
	
		if (!func_219(*uParam0, 16))
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
						if (func_399() == entityFromItem)
							flag2 = true;
				
					offsetFromEntityInWorldCoords = vParam3;
					offsetFromEntityInWorldCoords.f_1 = uParam4;
					offsetFromEntityInWorldCoords.f_2 = uParam5;
				
					if (_IS_NULL_VECTOR(offsetFromEntityInWorldCoords))
					{
						offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, (float)-1 + i, 0f) };
						func_400(&offsetFromEntityInWorldCoords, 50, 10, false);
					}
				
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, true);
					ENTITY::SET_ENTITY_COORDS(entityFromItem, offsetFromEntityInWorldCoords, false, true, true, true);
				
					if (flag2)
					{
						func_401(2);
						func_402(-1);
						func_403(offsetFromEntityInWorldCoords);
						func_405(func_404());
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

	if (!func_219(*uParam0, 4096))
		func_391(Global_35);

	if (!func_219(*uParam0, 1048576))
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);

	if (!func_219(*uParam0, 2097152))
		if (func_406() || PED::_IS_PED_DRUNK(Global_35))
			func_112(true);

	if (Global_1359489.f_16 & 4194304 == 0)
		Global_1359489.f_16 = Global_1359489.f_16 | 4194304;

	*uParam0 = 0;
	return;
}

void func_239(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x64F9 Hash - 0xB3E33ED8 ^0xB3E33ED8
{
	uParam0->f_502 = { fParam1 };
	return;
}

void func_240(var uParam0) // Position - 0x650C Hash - 0x6CEFB5BE ^0xE5B7A16E
{
	BOOL flag;
	Ped lastMount;
	int num;
	Vehicle playersLastVehicle;

	if (func_83(uParam0, 2048) && !_IS_NULL_VECTOR(func_407(uParam0)))
	{
		flag = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		lastMount = PED::_GET_LAST_MOUNT(Global_35);
	
		if (!ENTITY::IS_ENTITY_DEAD(lastMount) && flag && ENTITY::IS_ENTITY_IN_VOLUME(lastMount, uParam0->f_4, true, 0) || func_83(uParam0, -2147483648) && PED::GET_MOUNT(Global_35) != lastMount)
		{
			num = 2;
		
			if (TASK::IS_PED_IN_WRITHE(lastMount))
				num = num | 32;
		
			func_409(lastMount, func_407(uParam0), func_408(uParam0), num, 1073741824);
		}
	
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle) && flag && ENTITY::IS_ENTITY_IN_VOLUME(playersLastVehicle, uParam0->f_4, true, 0) || func_83(uParam0, -2147483648) && !PED::IS_PED_IN_VEHICLE(Global_35, playersLastVehicle, true))
			func_409(playersLastVehicle, func_407(uParam0), func_408(uParam0), 2, 1073741824);
	}

	return;
}

void func_241(var uParam0) // Position - 0x6618 Hash - 0x12FA3EB8 ^0xDBEBE05A
{
	Vehicle vehiclePedIsUsing;
	var unk;

	if (func_83(uParam0, 268435456) && !_IS_NULL_VECTOR(func_407(uParam0)) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing))
		{
			unk = { func_407(uParam0) };
			func_409(vehiclePedIsUsing, unk, func_410(unk, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehiclePedIsUsing, false);
			ENTITY::SET_ENTITY_VELOCITY(vehiclePedIsUsing, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehiclePedIsUsing, 0f);
		}
	}

	return;
}

void func_242(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5) // Position - 0x669E Hash - 0x5730B1F6 ^0x27D7CDB5
{
	uParam0->f_505 = { fParam1 };
	uParam0->f_508 = fParam4;

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

void func_243(var uParam0) // Position - 0x66E9 Hash - 0x45D298F4 ^0x58CEE6C4
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
					if (!func_246(&uParam0->f_13[i /*12*/], 8))
					{
						if (func_412(func_411(pedIndexFromEntityIndex, 0, true, false)))
							if (!func_413(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(pedIndexFromEntityIndex, 0)))
								WEAPON::SET_CURRENT_PED_WEAPON(pedIndexFromEntityIndex, joaat("WEAPON_UNARMED"), true, 0, false, false);
					
						if (func_412(func_411(pedIndexFromEntityIndex, 1, true, false)))
							if (!func_413(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(pedIndexFromEntityIndex, 1)))
								WEAPON::SET_CURRENT_PED_WEAPON(pedIndexFromEntityIndex, joaat("WEAPON_UNARMED"), true, 1, false, false);
					}
				}
			}
		}
	}

	return;
}

void func_244(var uParam0, BOOL bParam1) // Position - 0x67E5 Hash - 0x5BF0A49C ^0x170505BF
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

void func_245(Hash hParam0, Ped pedParam1, BOOL bParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x6817 Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_258() != -1;
	Global_1946054.f_857 = 0;

	if (hParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(pedParam1);
	
		if (!isMp)
		{
			if (Global_1347477.f_189 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_189);
		
			if (Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 && Global_1347477.f_190 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_190);
		
			func_414(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (hParam3 == -1 || hParam3 == 8)
		{
			func_415(pedParam1, 29, isMp, true, 0);
			func_415(pedParam1, 31, isMp, true, 0);
			func_415(pedParam1, 30, isMp, true, 0);
			func_415(pedParam1, 22, isMp, true, 0);
			func_415(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_416(32768) && func_417(1108822547, 8) && func_418(10, hParam3))
		func_419(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_420(num, 1);
		
			if (func_417(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_418(num, hParam3))
				{
				}
				else if (func_417(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_417(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_415(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_421(num2, 1, 6);
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
								func_415(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_417(num2, 1))
								func_422(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_417(num2, 1))
						func_422(num2, 1, 6);
				
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

BOOL func_246(var uParam0, int iParam1) // Position - 0x6B60 Hash - 0x718DD1EF ^0x4872DFB3
{
	return uParam0->f_11 && iParam1 != false;
}

void func_247(var uParam0) // Position - 0x6B71 Hash - 0x961A4D25 ^0x7DB59012
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_440), "", 32);
	func_423(uParam0);
	func_196(uParam0, 0f, 0f, 0f);
	func_424(uParam0);
	return;
}

void func_248(var uParam0) // Position - 0x6B99 Hash - 0xB5AC7806 ^0xE01DFDB3
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		uParam0->f_13[i /*12*/].f_11 = 0;
	}

	return;
}

void func_249(var uParam0) // Position - 0x6BBF Hash - 0xBA5A1D5A ^0x2C0A2EA5
{
	uParam0->f_8 = 0;
	return;
}

void func_250(var uParam0, int iParam1) // Position - 0x6BCC Hash - 0xBB77BED ^0x97F7EDBC
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		func_425(&uParam0->f_13[i /*12*/], iParam1);
	}

	return;
}

void func_251(var uParam0) // Position - 0x6BF5 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_252(BOOL bParam0) // Position - 0x6C0B Hash - 0x7DD02EA1 ^0xBD25DDCC
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);

	Global_43800 = -1;
	TEXT_LABEL_ASSIGN_STRING(&Global_43802, "", 24);
	Global_16 = false;

	if (bParam0)
		func_214();

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	return;
}

void func_253(int iParam0) // Position - 0x6C50 Hash - 0x7AE52724 ^0x9315F21B
{
	func_426();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
	return;
}

void func_254() // Position - 0x6C6E Hash - 0x47CA4FE0 ^0xED93DC86
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	return;
}

int func_255(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x6C95 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_427(hParam1, true, false) };
		iParam3 = func_428(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_430(hParam1, hParam2, func_429(iParam3, 1), bParam4, bParam9))
		return 0;

	func_431(true, func_258() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_416(32768) && hParam1 != Global_1946054.f_57[func_429(iParam3, 1) /*11*/])
			{
				func_433();
				func_432(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_429(iParam3, 1) /*11*/])
				func_432(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_432(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_434(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_432(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_207(0);
			func_435(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_432(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_256(Hash hParam0, BOOL bParam1) // Position - 0x6E04 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_427(hParam0, false, false) };
	guid = { func_436(hParam0, unk, unk.f_4, false) };

	if (func_437(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_438(false), &guid, bParam1);
	return;
}

BOOL func_257(Ped pedParam0, var uParam1, int iParam2, eSetPlayerControlFlags espcfParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x6E4E Hash - 0x6CEE72B9 ^0x4A7A32FD
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

	if (func_319(*uParam1, 128))
	{
		if (!func_439(pedParam0, 1245594896))
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

	if (func_319(*uParam1, 2))
	{
		if (isPedOnMount)
		{
			if (!func_440(mount))
				return false;
		
			if (!func_439(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
			{
				if (iParam7 != 0f && iParam8 != 0f)
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
					entityCoords = iParam7;
					entityCoords.f_1 = iParam8;
				
					if (func_441(mount, entityCoords))
						iParam4 = 131072;
					else
						iParam4 = 262144;
				
					if (!func_319(*uParam1, 4))
						iParam4 = iParam4 | 32;
				}
			
				TASK::CLEAR_PED_TASKS(pedParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam4, 0, 0, 0, 0);
			}
		
			return false;
		}
		else if (func_442(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(pedParam0)) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(pedParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(pedParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(pedParam0)));
			func_443(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}

	if (func_319(*uParam1, 4))
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

	if (func_319(*uParam1, 8))
	{
		if (isPedOnMount)
			if (!func_440(mount))
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
		if (!func_442(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
	
		if (!func_442(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam3, false);
			
				if (func_442(iParam2, 8192))
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
			}
		}
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);

	if (isPedOnMount)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(mount, 0))
			return false;
	
		if (func_319(*uParam1, 2336))
		{
			!func_440(mount);
		
			if (func_444(mount, *uParam1))
			{
				func_445(uParam1, 32);
				func_445(uParam1, 256);
				func_445(uParam1, 2048);
				func_443(uParam1, 512);
				func_443(uParam1, 1024);
				func_443(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
	
		if (func_319(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
			!func_440(mount);
		
			if (TASK::IS_PED_WALKING(mount))
				return false;
			else
				func_445(uParam1, 64);
		}
	
		if (func_442(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(mount, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
	
		if (TASK::IS_PED_SPRINTING(mount) || TASK::IS_PED_RUNNING(mount) && func_442(iParam2, 1024) || func_442(iParam2, 8) && !func_319(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 1, 0, 0);
			func_443(uParam1, 32);
		}
		else if (TASK::IS_PED_RUNNING(mount) && func_442(iParam2, 4096) && !func_319(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 8, 0, 0);
			func_443(uParam1, 2048);
			func_443(uParam1, 4096);
		}
		else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(mount) >= 1.001f && func_442(iParam2, 32) && !func_319(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(mount, 3, 0, 0);
			func_443(uParam1, 256);
			func_443(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(mount))
		{
			TASK::TASK_STAND_STILL(mount, -1);
			func_443(uParam1, 64);
		}
		else if (!func_442(iParam2, 1))
		{
			if (!func_442(iParam2, 256))
				WEAPON::_0xB832F1A686B9B810(pedParam0, 1, 0);
		
			if (iParam7 != 0f && iParam8 != 0f)
			{
				num = iParam7;
				num.f_1 = iParam8;
				num.f_2 = Global_36.f_2;
			
				if (func_441(mount, num))
					iParam4 = 131072;
				else
					iParam4 = 262144;
			
				if (!func_319(*uParam1, 4))
					iParam4 = iParam4 | 32;
			}
		
			TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(mount, 0f);
			func_443(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(pedParam0, 1000);
			func_443(uParam1, 8);
		}
	}
	else if (isPedInAnyVehicle)
	{
		if (!func_442(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			VEHICLE::BRING_VEHICLE_TO_HALT(vehiclePedIsIn, iParam5, iParam6, false);
			func_443(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_442(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(pedParam0, 200);
		func_443(uParam1, 8);
	}

	return false;
}

BOOL func_258() // Position - 0x7402 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

Ped func_259(eStackSize essParam0) // Position - 0x7410 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_446(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

int func_260() // Position - 0x744A Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_261(eStackSize essParam0, int iParam1) // Position - 0x745A Hash - 0xA6154E40 ^0x457EB21E
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

void func_262(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x749A Hash - 0x1EC8ECF ^0x1D5EA1D9
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

void func_263(float fParam0) // Position - 0x754D Hash - 0xD5DAF5A7 ^0xD5DAF5A7
{
	func_447(10, fParam0);
	return;
}

BOOL func_264() // Position - 0x755D Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_258() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_265() // Position - 0x7583 Hash - 0xD8699E96 ^0x93630E26
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
	return;
}

BOOL func_266(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x759A Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_446(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_267(var uParam0, int iParam1) // Position - 0x75C4 Hash - 0xCFA1A9B8 ^0xCFA1A9B8
{
	uParam0->f_1683 = iParam1;
	return;
}

void func_268(var uParam0, int iParam1) // Position - 0x75D3 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

int func_269(var uParam0, int iParam1) // Position - 0x75E1 Hash - 0x2F59A919 ^0x849F5606
{
	int i;

	if (func_309(uParam0, 4))
		return 1;

	switch (iParam1)
	{
		case 1:
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HACK_RADAR_FORCE_HIDE"));
			break;
	
		default:
			if (func_144())
			{
				if (!func_63(uParam0, 524288))
					HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HACK_RADAR_FORCE_HIDE"));
			}
			break;
	}

	if (func_144())
	{
		func_308(uParam0, 512);
		func_448(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
	
		if (func_449(&uParam0->f_1016[uParam0->f_1684 /*41*/], 4))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_450(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
	
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}

	func_145();
	func_166(uParam0, true, false);
	func_64(uParam0);

	if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	func_448(uParam0, 4);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
		VOLUME::DELETE_VOLUME(uParam0->f_1875);

	if (func_309(uParam0, 8) && CAM::_IS_CAM_DATA_DICT_LOADED(func_451()))
		CAM::_UNLOAD_CAMERA_DATA_DICT(func_451());

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[i /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[i /*22*/].f_2), func_451()) && CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_1345[i /*22*/].f_2)))
			if (uParam0->f_1345[i /*22*/].f_21)
				CAM::_UNLOAD_CAMERA_DATA_DICT(&(uParam0->f_1345[i /*22*/].f_2));
	}

	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());

	if (func_63(uParam0, 524288) || iParam1 == 1)
		func_214();

	if (func_309(uParam0, 16))
		if (func_452(uParam0) == 0)
			CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692));
		else if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
			CAM::_CAM_DESTROY(&(uParam0->f_1692));

	func_453();

	if (func_309(uParam0, 32))
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
			if (VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 50f)
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
	
		if (VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(uParam0->f_1901))
			VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(uParam0->f_1901);
	}

	func_454(uParam0);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);

	return 1;
}

void func_270(var uParam0, int iParam1) // Position - 0x7868 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_271(var uParam0, int iParam1) // Position - 0x7879 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_272(int iParam0) // Position - 0x788E Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_455(Global_1835011[iParam0 /*74*/].f_1);
}

struct<4> func_273(var uParam0) // Position - 0x78BA Hash - 0xBD3347D6 ^0xBD3347D6
{
	return uParam0->f_440;
}

void func_274() // Position - 0x78C9 Hash - 0x56220BE4 ^0x71200F1C
{
	STREAMING::REQUEST_MODEL(hLocal_18, false);
	STREAMING::REQUEST_MODEL(hLocal_19, false);
	STREAMING::REQUEST_MODEL(hLocal_20, false);
	STREAMING::REQUEST_MODEL(hLocal_21, false);
	STREAMING::REQUEST_MODEL(hLocal_22, false);
	return;
}

BOOL func_275(var uParam0) // Position - 0x78F4 Hash - 0x39BE2A34 ^0xEAFF0683
{
	if (!func_319(iLocal_34, 1))
	{
		if (!func_296(uParam0, 0, &pedLocal_45, false, true, 0, 0, 0, 0, -268604689, false, false, false))
			return false;
	
		if (!PED::IS_PED_READY_TO_RENDER(pedLocal_45))
			return false;
	
		func_457(pedLocal_45, func_456(0, 2), 2, 1073741824);
		func_458(&pedLocal_45);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_45, true);
		WEAPON::GIVE_WEAPON_TO_PED(pedLocal_45, joaat("weapon_revolver_schofield_dutch"), -1, false, true, 0, false, 1056964608, 1065353216, 752097756, true, 0, false);
		WEAPON::GIVE_WEAPON_TO_PED(pedLocal_45, joaat("weapon_revolver_schofield_dutch_dualwield"), -1, false, true, 1, false, 1056964608, 1065353216, 752097756, true, 0, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(pedLocal_45, func_459(joaat("weapon_revolver_schofield_dutch")));
		func_443(&iLocal_34, 1);
	}

	return true;
}

BOOL func_276(var uParam0) // Position - 0x79B0 Hash - 0xDEB4D081 ^0x52C480A
{
	if (!func_319(iLocal_34, 2))
	{
		if (!func_296(uParam0, 26, &pedLocal_46, false, true, 0, 0, 0, 0, -268604689, false, false, false))
			return false;
	
		if (!PED::IS_PED_READY_TO_RENDER(pedLocal_46))
			return false;
	
		func_457(pedLocal_46, func_456(0, 1), 2, 1073741824);
		func_458(&pedLocal_46);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_46, true);
		WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedLocal_46, joaat("LO_EAGLE_FLIES"));
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(pedLocal_46, func_459(joaat("weapon_repeater_carbine")));
		func_443(&iLocal_34, 2);
	}

	return true;
}

BOOL func_277() // Position - 0x7A32 Hash - 0xAE583A2F ^0x6663E39C
{
	if (!func_460(&pedLocal_47, func_456(0, 3), eptLocal_15, joaat("weapon_bow"), 4, joaat("META_OUTFIT_DEFAULT")))
		return false;

	if (!func_460(&uLocal_48[0], func_456(1, 0), eptLocal_16, joaat("weapon_bow"), 8, 630925281))
		return false;

	if (!func_460(&uLocal_48[1], func_456(1, 1), eptLocal_16, joaat("weapon_bow"), 16, -36775863))
		return false;

	if (!func_460(&uLocal_48[2], func_456(1, 2), eptLocal_16, joaat("weapon_repeater_carbine"), 32, 269778132))
		return false;

	return true;
}

BOOL func_278() // Position - 0x7ACB Hash - 0xAE1A17F1 ^0x1178E9EC
{
	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_39))
	{
		STREAMING::REQUEST_MODEL(hLocal_17, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_17))
		{
			veLocal_39 = VEHICLE::CREATE_VEHICLE(hLocal_17, func_461(2, 0), func_462(2, 0), true, true, false, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_39, false);
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_39, true);
		}
	
		return false;
	}

	PROPSET::_REQUEST_PROP_SET(joaat("pg_mission_native2_01x"));

	if (!PROPSET::_HAS_PROP_SET_LOADED(joaat("pg_mission_native2_01x")))
	{
		return false;
	}
	else if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(veLocal_39))
	{
		PROPSET::_ADD_PROP_SET_FOR_VEHICLE(veLocal_39, joaat("pg_mission_native2_01x"));
		return false;
	}

	return true;
}

BOOL func_279() // Position - 0x7B4F Hash - 0x68FB0997 ^0x4E5858D4
{
	Vector3 offsetFromEntityGivenWorldCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_40))
	{
		STREAMING::REQUEST_MODEL(hLocal_18, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_18))
		{
			obLocal_40 = OBJECT::CREATE_OBJECT(hLocal_18, func_461(2, 4), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(obLocal_40, veLocal_39, false);
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_41))
	{
		STREAMING::REQUEST_MODEL(hLocal_19, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_19))
		{
			obLocal_41 = OBJECT::CREATE_OBJECT(hLocal_19, func_461(2, 3), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(obLocal_41, veLocal_39, false);
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_42))
	{
		STREAMING::REQUEST_MODEL(hLocal_20, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_20))
		{
			obLocal_42 = OBJECT::CREATE_OBJECT(hLocal_20, func_461(2, 5), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(obLocal_42, veLocal_39, false);
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_43))
	{
		STREAMING::REQUEST_MODEL(hLocal_21, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_21))
		{
			obLocal_43 = OBJECT::CREATE_OBJECT(hLocal_21, func_461(2, 1), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(obLocal_43, veLocal_39, false);
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_44))
	{
		STREAMING::REQUEST_MODEL(hLocal_22, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_22))
		{
			obLocal_44 = OBJECT::CREATE_OBJECT(hLocal_22, func_461(2, 2), true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(obLocal_44, func_462(2, 2));
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_39))
			{
				offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_39, func_461(2, 2)) };
				ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_44, veLocal_39, 0, offsetFromEntityGivenWorldCoords, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
	
		return false;
	}

	return true;
}

BOOL func_280() // Position - 0x7CAE Hash - 0xA23DB81E ^0x6A3CD121
{
	HUD::TEXT_BLOCK_REQUEST("NTS2AUD");
	return HUD::TEXT_BLOCK_IS_LOADED("NTS2AUD");
}

BOOL func_281(var uParam0, char* sParam1, int iParam2) // Position - 0x7CC7 Hash - 0x52F931EE ^0x50CC2637
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, 0, false, true);
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	else
		return true;

	return false;
}

BOOL func_282() // Position - 0x7D13 Hash - 0x25DB841D ^0x821EECF4
{
	if (PED::IS_PED_READY_TO_RENDER(pedLocal_45) && PED::IS_PED_READY_TO_RENDER(pedLocal_46) && PED::IS_PED_READY_TO_RENDER(pedLocal_47))
		return true;

	return false;
}

void func_283() // Position - 0x7D3F Hash - 0x6BBB098 ^0x1AED9EE8
{
	func_463(0, 1073741824, true);
	func_463(26, 262144, true);
	PED::_EQUIP_META_PED_OUTFIT(pedLocal_47, -972364774);
	PED::_UPDATE_PED_VARIATION(pedLocal_47, false, true, true, true, false);
	return;
}

void func_284() // Position - 0x7D73 Hash - 0xDF42E1E1 ^0x5A33DC57
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_35, "Dutch", pedLocal_45, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_35, "EagleFlies", pedLocal_46, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_35, "Paytah", pedLocal_47, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_36, "A_M_M_WAPWARRIORS_01", uLocal_48[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_36, "A_M_M_WAPWARRIORS_01^1", uLocal_48[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_36, "A_M_M_WAPWARRIORS_01^2", uLocal_48[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_36, "p_ladle02x", obLocal_40, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_37, "UTILLIWAG", veLocal_39, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_37, "p_cs_bucket01x", obLocal_41, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_37, "p_cs_vegsack_up", obLocal_42, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_37, "p_cs_detonator01x ", obLocal_43, 0);
	return;
}

void func_285() // Position - 0x7E0B Hash - 0x15D0E07B ^0x79E237CB
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "A_M_M_WAPWARRIORS_01", uLocal_48[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "A_M_M_WAPWARRIORS_01^1", uLocal_48[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "A_M_M_WAPWARRIORS_01^2", uLocal_48[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "Dutch", pedLocal_45, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "EagleFlies", pedLocal_46, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "PAYTAH", pedLocal_47, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_38, "p_ladle02x", obLocal_40, 0);
	return;
}

void func_286(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0x7E7E Hash - 0x3A05F50D ^0xD816AE7A
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam1, fParam4, fParam7, sParam10);
	return;
}

void func_287(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0x7E9B Hash - 0x3A05F50D ^0x6A8E2731
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, sParam10);
	return;
}

void func_288(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0x7EB8 Hash - 0x3A05F50D ^0xBA5EB06
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, sParam10);
	return;
}

void func_289(var uParam0, Volume volParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7ED5 Hash - 0x7AEE4E7D ^0x4CE819C0
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

BOOL func_290(const char* sParam0) // Position - 0x7F14 Hash - 0x29A59279 ^0x5A6314BB
{
	if (DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam0)))
		return true;

	return false;
}

void func_291(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x7F2E Hash - 0x841F0948 ^0x99E588B6
{
	TEXT_LABEL_COPY(&(uParam0->f_2880), { uParam1 }, 4);
	func_25(uParam0, 32768);
	func_464(&(uParam0->f_958), iParam4);
	return;
}

void func_292(var uParam0, float fParam1) // Position - 0x7F57 Hash - 0xCFA1A9B8 ^0xCFA1A9B8
{
	uParam0->f_434 = fParam1;
	return;
}

void func_293(var uParam0, float fParam1) // Position - 0x7F66 Hash - 0xCFA1A9B8 ^0xCFA1A9B8
{
	uParam0->f_435 = fParam1;
	return;
}

BOOL func_294(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12) // Position - 0x7F75 Hash - 0xD95A8F5E ^0xE6E823B0
{
	int num;
	int i;
	int j;

	num = 1;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_334(&uParam0->[i /*3*/]))
			if (func_335(uParam0->[i /*3*/].f_2, iParam12))
				if (!func_465(&uParam0->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_337(&uParam1->[i /*5*/]))
			if (func_335(uParam1->[i /*5*/].f_4, iParam12))
				if (!func_466(&uParam1->[i /*5*/]))
					num = 0;
	}

	for (i = 0; i < *uParam2; i = i + 1)
	{
		if (func_339(&uParam2->[i /*3*/]))
			if (func_335(uParam2->[i /*3*/].f_2, iParam12))
				if (!func_467(&uParam2->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (func_341(&uParam3->[i /*3*/]))
			if (func_335(uParam3->[i /*3*/].f_2, iParam12))
				if (!func_342(&uParam3->[i /*3*/]))
					num = 0;
	}

	if (func_335(uParam4->f_1, iParam12))
		if (!func_343(uParam4))
			num = 0;

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_344(&uParam5->[i /*67*/]))
			if (func_335(uParam5->[i /*67*/].f_3, iParam12))
				if (func_468(&uParam5->[i /*67*/]))
					if (!func_469(&uParam5->[i /*67*/]))
						num = 0;
	}

	for (i = 0; i < *uParam5; i = i + 1)
	{
		if (func_344(&uParam5->[i /*67*/]))
		{
			if (func_335(uParam5->[i /*67*/].f_3, iParam12))
			{
				if (func_468(&uParam5->[i /*67*/]))
				{
					if (func_469(&uParam5->[i /*67*/]))
					{
						for (j = 0; j < 20; j = j + 1)
						{
							if (func_346(&uParam5->[i /*67*/].f_4[j /*3*/]))
								if (!func_470(&uParam5->[i /*67*/].f_4[j /*3*/], uParam5->[i /*67*/].f_1))
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
		if (func_348(&uParam6->[i /*4*/]))
			if (func_335(uParam6->[i /*4*/].f_3, iParam12))
				if (!func_471(&uParam6->[i /*4*/]))
					num = 0;
	}

	for (i = 0; i < *uParam7; i = i + 1)
	{
		if (func_350(&uParam7->[i /*5*/]))
			if (func_335(uParam7->[i /*5*/].f_4, iParam12))
				if (!func_472(&uParam7->[i /*5*/]))
					num = 0;
	}

	for (i = 0; i < *uParam8; i = i + 1)
	{
		if (func_352(&uParam8->[i /*3*/]))
			if (func_335(uParam8->[i /*3*/].f_2, iParam12))
				if (!func_473(&uParam8->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam9; i = i + 1)
	{
		if (func_354(&uParam9->[i /*3*/]))
			if (func_335(uParam9->[i /*3*/].f_2, iParam12))
				if (!func_474(&uParam9->[i /*3*/]))
					num = 0;
	}

	for (i = 0; i < *uParam10; i = i + 1)
	{
		if (func_356(&uParam10->[i /*4*/]))
			if (func_335(uParam10->[i /*4*/].f_3, iParam12))
				if (!func_475(&uParam10->[i /*4*/]))
					num = 0;
	}

	for (i = 0; i < *uParam11; i = i + 1)
	{
		if (func_358(&uParam11->[i /*3*/]))
			if (func_335(uParam11->[i /*3*/].f_2, iParam12))
				if (!func_476(&uParam11->[i /*3*/]))
					num = 0;
	}

	return num;
}

eStackSize func_295(int iParam0) // Position - 0x8323 Hash - 0x1C89A65E ^0x1C89A65E
{
	if (!func_81(iParam0))
		return 1;

	return func_477(iParam0);
}

BOOL func_296(var uParam0, eStackSize essParam1, var uParam2, BOOL bParam3, BOOL bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x8343 Hash - 0xDE3125D6 ^0xDE3125D6
{
	var unk;

	if (!func_114(essParam1))
		return false;

	if (func_478(uParam0, *uParam2))
	{
		if (*uParam2 != func_479(essParam1))
		{
		}
	
		return true;
	}

	unk = { iParam5, iParam6, iParam7 };

	if (_IS_NULL_VECTOR(unk))
		unk = { func_126(*uParam0) };

	if (!func_480(essParam1, 28, true))
		func_481(essParam1, 28, true);

	*uParam2 = func_482(essParam1, true, 0, unk, unk.f_1, unk.f_2, iParam8, bParam4, 1, bParam11, false, false, 0, iParam9, true, bParam12, false, false, true, true, bParam10, false, true, false, true);

	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(*uParam2))
			return false;
	
		func_301(uParam0, *uParam2);
		func_483(uParam0, *uParam2);
		func_484(*uParam2, bParam3, bParam4, false);
	
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
		
			if (!func_439(*uParam2, SCRIPT_TASK_STAND_STILL))
				TASK::TASK_STAND_STILL(*uParam2, -1);
		}
	
		func_138(uParam0, *uParam2, 0, 0, 0, true, false);
		func_485(essParam1, false, false, true);
		func_486(essParam1);
		return true;
	}

	return false;
}

BOOL func_297(int iParam0) // Position - 0x845B Hash - 0xADFE2C00 ^0x32F0B336
{
	var textBlock;

	textBlock = { func_190(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&textBlock))
			return false;

	return true;
}

BOOL func_298(int iParam0) // Position - 0x8486 Hash - 0xADFE2C00 ^0x32F0B336
{
	var textBlock;

	textBlock = { func_191(iParam0) };

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&textBlock))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&textBlock))
			return false;

	return true;
}

void func_299(var uParam0, Entity eParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x84B1 Hash - 0x37E325FF ^0x56E9093A
{
	int num;
	Entity entity;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(eParam1))
		return;

	if (iParam3 == 0 && ENTITY::IS_ENTITY_DEAD(eParam1) && !bParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam1))
		{
		}
	
		return;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		sParam2 = func_487(eParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam1))
		{
		}
	
		return;
	}

	num = func_488(uParam0, eParam1);

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
		entity = func_489(uParam0, sParam2);
	
		if (ENTITY::DOES_ENTITY_EXIST(entity) && entity != eParam1)
			func_490(uParam0, entity);
	}

	if (num == -1)
		num = func_491(uParam0);

	if (num != -1)
	{
		uParam0->f_13[num /*12*/] = eParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13[num /*12*/].f_1), sParam2, 64);
		uParam0->f_13[num /*12*/].f_9 = iParam3;
		uParam0->f_13[num /*12*/].f_10 = iParam4;
	
		if (bParam5)
			func_392(&uParam0->f_13[num /*12*/], 2);
		else
			func_425(&uParam0->f_13[num /*12*/], 2);
	}

	return;
}

void func_300(var uParam0, Entity eParam1, const char* sParam2) // Position - 0x8600 Hash - 0x6D9EF6A2 ^0x6D9EF6A2
{
	func_492(&(uParam0->f_958), eParam1, sParam2, false);
	return;
}

void func_301(var uParam0, Entity eParam1) // Position - 0x8616 Hash - 0x47841D83 ^0x41367717
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
		return;

	if (ENTITY::IS_ENTITY_A_PED(eParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam1) == Global_35)
		return;

	if (!ITEMSET::IS_IN_ITEMSET(eParam1, uParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(eParam1, uParam0->f_5);
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(eParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(eParam1)))
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(eParam1), true, true);
		}
		else if (ENTITY::IS_ENTITY_A_PED(eParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam1);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(pedIndexFromEntityIndex, "SpMissionTriggers", 0);
		
			if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(pedIndexFromEntityIndex, "ClosestScenario");
		
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(eParam1, uParam0->f_6);
		}
	}

	return;
}

char* func_302() // Position - 0x86DC Hash - 0x306ACA3A ^0xA7F80A8A
{
	return "cutDeleteMe";
}

void func_303(var uParam0, int iParam1) // Position - 0x86E8 Hash - 0x537D9C68 ^0x537D9C68
{
	uParam0->f_439 = uParam0->f_439 || iParam1;
	return;
}

int func_304(var uParam0) // Position - 0x86FD Hash - 0x2E4FC1F3 ^0xE8B2CC59
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

BOOL func_305(int iParam0) // Position - 0x8734 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43884 == iParam0;
}

Vector3 func_306(var uParam0, int iParam1) // Position - 0x8742 Hash - 0xC77CD708 ^0x10C9D8E0
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
			unk10 = { func_493(unk10) * { 2f, 2f, 2f } };
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

void func_307(var uParam0, int iParam1) // Position - 0x8961 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_308(var uParam0, int iParam1) // Position - 0x8972 Hash - 0xB94A85A8 ^0xB94A85A8
{
	uParam0->f_1664 = uParam0->f_1664 - uParam0->f_1664 && iParam1;
	return;
}

BOOL func_309(var uParam0, int iParam1) // Position - 0x898D Hash - 0x4D54295E ^0x1FD812C3
{
	return uParam0->f_1666.f_1 && iParam1 != false;
}

BOOL func_310(var uParam0, int iParam1) // Position - 0x89A1 Hash - 0xBD0B8CC9 ^0xE0A10783
{
	return func_494(uParam0->f_27, iParam1);
}

BOOL func_311(int iParam0) // Position - 0x89B3 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_495(iParam0);
	return num == 3 || num == 4;
}

void func_312(int iParam0) // Position - 0x89D1 Hash - 0x36F4E0F3 ^0x36F4E0F3
{
	Global_36606 = { func_496() };
	Global_36610 = { func_496() };
	Global_36605 = iParam0;
	return;
}

BOOL func_313(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x89F0 Hash - 0xBF2250D5 ^0x34592C3E
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

float func_314(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8A3A Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_315(char* sParam0) // Position - 0x8A82 Hash - 0xBE6F5C67 ^0x676667C3
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}

	return false;
}

BOOL func_316(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x8A9E Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_497(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_317(Ped pedParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x8AF8 Hash - 0x5F6A3245 ^0x98C6E7C9
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

	if (func_374(uParam1, 0f, 0f, 0f))
		return;

	if (fParam5 < 0f || fParam6 < 0f || fParam7 < 0f || fParam8 < 0f)
		return;

	if (!(fParam5 > fParam6) || !(fParam5 > fParam7) || !(fParam5 > fParam8) || !(fParam6 > fParam7) || !(fParam6 > fParam8) || !(fParam7 > fParam8))
		return;

	mount = PED::GET_MOUNT(pedParam0);

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);

	num = func_197(pedParam0, uParam1, true);

	if (num <= fParam5 && num > fParam6 && num > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, 1.75f);
	
		if (func_498() && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsIn))
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
		
			if (!ENTITY::IS_ENTITY_DEAD(mount) && !func_160(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
				TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam12, 0, 0, 0, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && !func_160(pedParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
				TASK::TASK_LEAVE_ANY_VEHICLE(pedParam0, 0, iParam12);
		}
	}

	return;
}

void func_318(BOOL bParam0) // Position - 0x8E35 Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_499(4);

	func_499(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

BOOL func_319(int iParam0, int iParam1) // Position - 0x8E57 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_320(Hash hParam0) // Position - 0x8E66 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_429(func_500(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_321(var uParam0) // Position - 0x8E95 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_322(81053684, uParam0))
		return true;

	if (func_322(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_322(Hash hParam0, var uParam1) // Position - 0x8EC2 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_429(func_500(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_394(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

BOOL func_323() // Position - 0x8F39 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_324(Hash hParam0) // Position - 0x8F48 Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_501())
		return false;

	if (!func_393(hParam0, 0))
		return false;

	if (!func_502(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

int func_325(Hash hParam0, int iParam1) // Position - 0x8F7F Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_503(hParam0);

	if (func_504(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_163(&hash))
			if (flag)
				interactionAnimHash = func_505();
			else
				interactionAnimHash = func_506();
		else if (func_319(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_507();
		else
			interactionAnimHash = func_508();
	else if (func_321(&hash))
		if (func_504(hash, -1303648999))
			interactionAnimHash = func_505();
		else
			interactionAnimHash = func_506();
	else if (flag)
		interactionAnimHash = func_507();
	else
		interactionAnimHash = func_508();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

struct<8> func_326(var uParam0, Entity eParam1) // Position - 0x9052 Hash - 0xD113665C ^0x13D6F4A9
{
	var unk;
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(eParam1))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, func_487(eParam1), 64);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		{
			num = func_509(uParam0, eParam1);
		
			if (num > 0)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "^", 64);
				TEXT_LABEL_APPEND_INT(&unk, num, 64);
			}
		}
	}

	return unk;
}

BOOL func_327(var uParam0, int iParam1) // Position - 0x909D Hash - 0x718DD1EF ^0xF9145158
{
	return uParam0->f_9 && iParam1 != false;
}

void func_328(AnimScene ansParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x90AE Hash - 0xFFE17847 ^0x68A7B4F3
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

void func_329(Ped pedParam0) // Position - 0x9143 Hash - 0xF249FD1D ^0xC50FDB38
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

void func_330(var uParam0, Ped pedParam1, const char* sParam2) // Position - 0x917F Hash - 0xB02DACC7 ^0xB02DACC7
{
	func_510(&(uParam0->f_428), pedParam1, sParam2);
	return;
}

BOOL func_331(int iParam0, int iParam1) // Position - 0x9194 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

void func_332(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x91A5 Hash - 0xA4706F79 ^0xAF27D1D3
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
		func_481(essParam0, 56, true);
		func_19(&(Global_1359489.f_40), true);
	}

	func_511(essParam0, false);
	func_512(essParam0, 4, false);
	func_513(essParam0);
	func_514(essParam0);
	func_515(essParam0, 37, true);
	flag = func_159(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_516(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_480(essParam0, 64, true))
		func_515(essParam0, 64, true);

	if (bParam3)
	{
		func_515(essParam0, 33, true);
		func_515(essParam0, 34, true);
		func_517(essParam0, 1056964608, -1, 1061158912);
		func_518(essParam0, true, true, false);
	
		if (bParam6)
			func_481(essParam0, 30, true);
	
		if (bParam7)
		{
			func_481(essParam0, 35, true);
		
			if (bParam8)
				func_481(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_519(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_515(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_481(essParam0, 33, true);
		func_518(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_19(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_251(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_481(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_520(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_480(essParam0, 45, true))
		func_515(essParam0, 45, true);

	func_521(essParam0, 16, true);
	func_515(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_159(func_522(essParam0), 0))
			func_523(0, essParam0, bParam3, 0, bParam2);

	return;
}

void func_333(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x945A Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_524(vector, uParam0, 2f, true))
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

BOOL func_334(var uParam0) // Position - 0x94DE Hash - 0x68548E72 ^0x68548E72
{
	return *uParam0 != 0;
}

BOOL func_335(int iParam0, int iParam1) // Position - 0x94EB Hash - 0xD6EFA90F ^0xD6EFA90F
{
	int num;

	num = func_525(iParam1);
	return iParam0 && num != false;
}

void func_336(var uParam0) // Position - 0x9502 Hash - 0xCE9A6290 ^0xF286CA0E
{
	if (!func_526(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_527(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_337(var uParam0) // Position - 0x9528 Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_338(var uParam0) // Position - 0x9538 Hash - 0x25B0A6DE ^0x72F31499
{
	if (!func_526(uParam0->f_3, 1))
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
	
		func_527(&(uParam0->f_3), 1);
	}

	return;
}

BOOL func_339(var uParam0) // Position - 0x9587 Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_340(var uParam0) // Position - 0x9597 Hash - 0xA22DA6B0 ^0x16EE41FE
{
	if (!func_526(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_527(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_341(var uParam0) // Position - 0x95BC Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

BOOL func_342(var uParam0) // Position - 0x95CC Hash - 0xBB45F689 ^0x6A44F33B
{
	if (func_526(uParam0->f_1, 2))
		return true;

	if (!func_526(uParam0->f_1, 1))
		func_528(uParam0);

	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_527(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_343(var uParam0) // Position - 0x960F Hash - 0x628E0BDA ^0x4AB4005A
{
	if (func_526(*uParam0, 2))
		return true;

	if (!func_526(*uParam0, 1))
		func_529(uParam0);

	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_527(uParam0, 2);
		return true;
	}

	return false;
}

BOOL func_344(var uParam0) // Position - 0x964B Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_345(var uParam0) // Position - 0x965B Hash - 0x23BD7ECC ^0x33E0A7D4
{
	char* entityId;

	if (!func_526(uParam0->f_2, 1))
	{
		if (func_468(uParam0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				entityId = func_378(ENTITY::GET_ENTITY_MODEL(Global_35));
			
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, entityId))
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, entityId, Global_35, 0);
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_zero") && func_264())
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_three") && func_530())
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
			
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_527(&(uParam0->f_2), 1);
			}
		}
	}

	return;
}

BOOL func_346(var uParam0) // Position - 0x971A Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_347(var uParam0, AnimScene ansParam1) // Position - 0x972A Hash - 0xF5E93730 ^0x42495AA1
{
	if (!func_526(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansParam1, true, false))
			return;
	
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansParam1, *uParam0);
		func_527(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_348(var uParam0) // Position - 0x9761 Hash - 0x68548E72 ^0x68548E72
{
	return *uParam0 != 0;
}

void func_349(var uParam0) // Position - 0x976E Hash - 0xA1E8590D ^0xEFF60CC2
{
	if (!func_526(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROP_SET(*uParam0);
		func_527(&(uParam0->f_2), 1);
	}

	return;
}

BOOL func_350(var uParam0) // Position - 0x9794 Hash - 0x68548E72 ^0x68548E72
{
	return *uParam0 != 0;
}

void func_351(var uParam0) // Position - 0x97A1 Hash - 0x11C7E32E ^0x57AC62D0
{
	if (!func_526(uParam0->f_3, 1))
	{
		WEAPON::_REQUEST_WEAPON_ASSET(*uParam0, uParam0->f_1, uParam0->f_2);
		func_527(&(uParam0->f_3), 1);
	}

	return;
}

BOOL func_352(var uParam0) // Position - 0x97CE Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_353(var uParam0) // Position - 0x97DE Hash - 0xA1E8590D ^0x17E137DF
{
	if (!func_526(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_527(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_354(var uParam0) // Position - 0x9804 Hash - 0x1C63C0A9 ^0x1C63C0A9
{
	return func_531(*uParam0);
}

void func_355(var uParam0) // Position - 0x9813 Hash - 0xA22DA6B0 ^0xCD6F15BE
{
	if (!func_526(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_IPL_HASH(*uParam0);
		func_527(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_356(var uParam0) // Position - 0x9838 Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_357(var uParam0) // Position - 0x9848 Hash - 0x7949534F ^0x690C4E7
{
	if (!func_526(uParam0->f_2, 1))
	{
		AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2);
		func_527(&(uParam0->f_2), 1);
	}

	return;
}

BOOL func_358(var uParam0) // Position - 0x9875 Hash - 0x5BEBB5CC ^0x4764F1AF
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_359(var uParam0) // Position - 0x9885 Hash - 0xA22DA6B0 ^0xA4C9F2CE
{
	if (!func_526(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MOVE_NETWORK_DEF(*uParam0);
		func_527(&(uParam0->f_1), 1);
	}

	return;
}

BOOL func_360(int iParam0) // Position - 0x98AA Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_361(BOOL bParam0) // Position - 0x98E8 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_362(BOOL bParam0) // Position - 0x98F5 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

struct<8> func_363(var uParam0) // Position - 0x9908 Hash - 0xDB13DC73 ^0xDB13DC73
{
	return uParam0->f_454;
}

struct<8> func_364() // Position - 0x9918 Hash - 0x964AA7CC ^0x99075345
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MultiStart", 64);
	return unk;
}

BOOL func_365(int iParam0) // Position - 0x992D Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

Vector3 func_366(int iParam0) // Position - 0x995D Hash - 0x695A7658 ^0x6D3D4EDB
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

Any func_367(Volume volParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x99AF Hash - 0xDFB996B4 ^0xC287A71C
{
	Any any;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return any;

	func_532(volParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 2);
	any = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volParam0, bParam2, 15);
	return any;
}

void func_368(Volume volParam0) // Position - 0x99F6 Hash - 0x93784101 ^0x333F564B
{
	int i;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	for (i = 0; i < Global_1393237.f_11; i = i + 1)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(volParam0, Global_1393237.f_11[i /*30*/].f_3))
		{
			func_533(i, 4096, false);
			func_533(i, 131072, false);
			func_534(i, 1);
		}
	}

	return;
}

Volume func_369(Volume volParam0, var uParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x9A55 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_535(volumeCoords, volumeScale, uParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

void func_370(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x9A99 Hash - 0x77539CD1 ^0x7EE21A9
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	if (func_536(uParam0, sParam1))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]))
		{
			if (!func_537(uParam0, sParam1) || func_83(uParam0, 8388608))
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

void func_371(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x9B65 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_538(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_538(20))
				return;
		}
	}

	func_539(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_414(8);
	return;
}

void func_372(var uParam0) // Position - 0x9C69 Hash - 0xA0536A87 ^0xE1A3FD9C
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);

	return;
}

struct<8> func_373() // Position - 0x9C85 Hash - 0x964AA7CC ^0xB3A158BB
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NormalStart", 64);
	return unk;
}

BOOL func_374(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x9C9A Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_375(int iParam0, int iParam1) // Position - 0x9CC3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_376(int iParam0) // Position - 0x9CD2 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_377(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9D11 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_376(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_540(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_541(num);
	*iParam0 = 0;
	return;
}

char* func_378(Hash hParam0) // Position - 0x9D65 Hash - 0xE6862179 ^0x69543E4A
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

BOOL func_379(int iParam0) // Position - 0xA8ED Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_380(int iParam0, int iParam1) // Position - 0xA8F9 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

int func_381(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0xA91A Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_380(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_542(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

void func_382(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA9A0 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_376(iParam0))
		return;

	num = func_540(iParam0);
	func_543(num, bParam1);
	return;
}

void func_383(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA9CC Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_376(iParam0))
		return;

	num = func_540(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TYPE(Global_1945188[num /*18*/].f_3, iParam1);
	return;
}

void func_384(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAA15 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_376(iParam0))
		return;

	num = func_540(iParam0);

	if (bParam1)
	{
		func_544(iParam0, 4);
		func_543(num, true);
		func_545(num, true);
	}
	else
	{
		func_546(iParam0, 4);
		func_545(num, false);
	}

	return;
}

float func_385(int iParam0, BOOL bParam1) // Position - 0xAA64 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_376(iParam0))
		return 0f;

	num = func_540(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_386(int iParam0, BOOL bParam1) // Position - 0xAABC Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_376(iParam0))
		return false;

	num = func_540(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_387(var uParam0) // Position - 0xAB14 Hash - 0x69DF0810 ^0x1B578435
{
	var string1;
	var string2;

	string1 = { func_203(uParam0) };
	string2 = { func_183(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&string1, &string2);
}

BOOL func_388(Hash hParam0) // Position - 0xAB3A Hash - 0x798E6037 ^0xDD3AB35C
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
		{
			func_547(i);
			return true;
		}
	}

	return false;
}

void func_389(var uParam0, const char* sParam1) // Position - 0xAB7A Hash - 0xF23C2839 ^0x7A33E8E5
{
	var string1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	string1 = { func_203(uParam0) };

	if (!MISC::ARE_STRINGS_EQUAL(&string1, sParam1) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, sParam1))
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);

	return;
}

void func_390(var uParam0, const char* sParam1, Entity eParam2, int iParam3) // Position - 0xABD1 Hash - 0x8115405E ^0x889845AA
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam2))
		return;

	if (iParam3 == 1)
		if (ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(uParam0->f_444, sParam1))
			iParam3 = 0;

	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, eParam2, iParam3);
	return;
}

void func_391(Ped pedParam0) // Position - 0xAC0F Hash - 0xC848742E ^0xD171C7FA
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

void func_392(var uParam0, int iParam1) // Position - 0xAC45 Hash - 0x53A96DDB ^0x5EF2061
{
	uParam0->f_11 = uParam0->f_11 || iParam1;
	return;
}

BOOL func_393(Hash hParam0, int iParam1) // Position - 0xAC58 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_394(Hash hParam0) // Position - 0xAC72 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_393(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

void func_395(int iParam0, BOOL bParam1) // Position - 0xAC9D Hash - 0x9D46840B ^0xDAAD5146
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

void func_396(int iParam0) // Position - 0xAD0E Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_258() != -1)
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

void func_397(BOOL bParam0, BOOL bParam1) // Position - 0xAD4B Hash - 0x26C4C089 ^0x53EE9A65
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
			if (func_412(weaponHash) && WEAPON::IS_WEAPON_A_GUN(weaponHash))
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
		func_548(1);

	return;
}

void func_398() // Position - 0xAE28 Hash - 0x2910738C ^0x2910738C
{
	Hash weaponHash;

	weaponHash = func_411(Global_35, 9, true, false);

	if (func_412(weaponHash))
		return;

	weaponHash = func_411(Global_35, 7, true, false);

	if (func_412(weaponHash))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 8, false, false);

	weaponHash = func_411(Global_35, 0, true, false);

	if (func_412(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_411(Global_35, 1, true, false);

	if (func_412(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_411(Global_35, 18, true, false);

	if (func_412(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_549();

	if (func_412(weaponHash))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_550(Global_35, weaponHash, 1, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
	
		return;
	}

	weaponHash = func_551(6291456, 0);

	if (func_412(weaponHash))
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_550(Global_35, weaponHash, true, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);

	return;
}

Object* func_399() // Position - 0xAFA3 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

int func_400(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xAFB2 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_374(*uParam0, 0f, 0f, 0f))
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

void func_401(int iParam0) // Position - 0xB0A9 Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

void func_402(int iParam0) // Position - 0xB0BE Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_403(var uParam0, var uParam1, var uParam2) // Position - 0xB0D1 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

Hash func_404() // Position - 0xB0EA Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_405(Hash hParam0) // Position - 0xB0F6 Hash - 0xC20F1267 ^0x9F8567FC
{
	Global_40.f_1095.f_3054.f_2 = hParam0;
	return;
}

BOOL func_406() // Position - 0xB10B Hash - 0x3630EC94 ^0x3630EC94
{
	return func_552() || func_553();
}

Vector3 func_407(var uParam0) // Position - 0xB121 Hash - 0xBDA8105E ^0xBDA8105E
{
	return uParam0->f_505;
}

float func_408(var uParam0) // Position - 0xB130 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_508;
}

void func_409(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB13D Hash - 0xF46E0F16 ^0xED4BA72A
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

	pedParam0 == func_554(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_555(pedParam0))
		if (func_556(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_319(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_409(vehiclePedIsIn, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_409(mount, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_319(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_319(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_319(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_319(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_319(iParam5, 129))
	{
		if (func_319(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_319(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, iParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_319(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_319(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_555(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_319(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_319(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

float func_410(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0xB3BF Hash - 0x9F66817B ^0xCA5C01B6
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

Hash func_411(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB424 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_412(Hash hParam0) // Position - 0xB44A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_413(var uParam0, Ped pedParam1) // Position - 0xB465 Hash - 0x299AC54D ^0xA15A1941
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

void func_414(BOOL bParam0) // Position - 0xB4B2 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_415(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0xB4C5 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_420(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_557(hParam4);
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

BOOL func_416(BOOL bParam0) // Position - 0xB5C2 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

BOOL func_417(int iParam0, int iParam1) // Position - 0xB5D3 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

BOOL func_418(int iParam0, Hash hParam1) // Position - 0xB5F1 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_419(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB60A Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_417(1108822547, 6))
	{
		if (bParam2)
		{
			func_415(pedParam0, num, func_258() != -1, false, 0);
			func_421(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_422(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

int func_420(int iParam0, int iParam1) // Position - 0xB6D2 Hash - 0xE1D12727 ^0xA46110B3
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

void func_421(int iParam0, int iParam1, int iParam2) // Position - 0xB921 Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

void func_422(int iParam0, int iParam1, int iParam2) // Position - 0xB94E Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_423(var uParam0) // Position - 0xB98D Hash - 0x191996BC ^0x191996BC
{
	var unk;

	uParam0->f_454 = { unk };
	return;
}

void func_424(var uParam0) // Position - 0xB9A2 Hash - 0xFB531B2 ^0xE7A5DADA
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_462[i /*9*/], "", 64);
	}

	return;
}

void func_425(var uParam0, int iParam1) // Position - 0xB9CB Hash - 0xA4EAD31F ^0x1843FE5B
{
	uParam0->f_11 = uParam0->f_11 - uParam0->f_11 && iParam1;
	return;
}

void func_426() // Position - 0xB9E3 Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1911774 = true;
	return;
}

struct<5> func_427(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB9F0 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_558(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_559(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_565(hParam0, -1823706425))
			{
				unk = { func_436(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_565(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_436(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_564(bParam1) };
		
			switch (func_394(hParam0))
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
				unk = { func_436(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_560(bParam1) };
		
			if (bParam2 && func_561(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_562(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_562(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_563(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_566(unk, &unk28, bParam1, false))
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

int func_428(var uParam0) // Position - 0xBCAD Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_420(i, 1);
	}

	return -358215195;
}

int func_429(int iParam0, int iParam1) // Position - 0xBCE8 Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_430(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xBEB9 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_567();

	if (iParam2 == 39)
	{
		unk = { func_427(hParam0, true, false) };
		iParam2 = func_429(func_428(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_504(hParam0, 866047851) && func_568(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_416(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_569(func_420(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_570(iParam2);
	func_571(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_572(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_572(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_573(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_574(hParam0, iParam2, hParam1, func_258() != -1);

	if (bParam4)
		func_575(&(Global_1946054.f_1378), true, 3);
	else
		func_575(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_422(func_420(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_431(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC0C7 Hash - 0x5AF76643 ^0x5AF76643
{
	func_576(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_432(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0xC0E0 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_414(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_577(num);
	return;
}

void func_433() // Position - 0xC112 Hash - 0xB6203BF0 ^0x217DD714
{
	func_578(&(Global_1946054.f_2776));
	func_579(32768);
	func_422(1108822547, 8, 6);
	return;
}

int func_434(int iParam0) // Position - 0xC139 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_429(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_435(int iParam0, int iParam1, int iParam2) // Position - 0xC19D Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_371(num);
	return;
}

struct<4> func_436(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xC1BD Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_393(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_438(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_437(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xC1EE Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_393(hParam0, 0))
		return 0;

	guid = { func_436(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_438(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_438(BOOL bParam0) // Position - 0xC236 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_258() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_439(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xC277 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_440(Ped pedParam0) // Position - 0xC2D0 Hash - 0xD8557B87 ^0xA36AC234
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

	if (func_439(pedParam0, 1041577989))
		return false;

	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(pedParam0)))
		return true;

	return false;
}

BOOL func_441(Ped pedParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC37A Hash - 0x4FB200FB ^0x9AEFCD02
{
	var entityCoords;
	var unk3;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	unk3 = { entityCoords + ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	return func_580(entityCoords, unk3, uParam1);
}

BOOL func_442(int iParam0, int iParam1) // Position - 0xC3AD Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_443(var uParam0, int iParam1) // Position - 0xC3BC Hash - 0xF55E891F ^0xF55E891F
{
	func_581(uParam0, iParam1);
	return;
}

BOOL func_444(Ped pedParam0, int iParam1) // Position - 0xC3CC Hash - 0x8826373E ^0x6E06CE7E
{
	float scriptTaskActionTime;

	if (!func_439(pedParam0, 1041577989))
		return true;

	scriptTaskActionTime = TASK::_GET_SCRIPT_TASK_ACTION_TIME(pedParam0, 1041577989);

	if (func_319(iParam1, 32))
	{
		if (scriptTaskActionTime >= 1.85f)
			return true;
	
		return false;
	}

	if (func_319(iParam1, 256))
	{
		if (scriptTaskActionTime >= 1f)
			return true;
	
		return false;
	}

	if (func_319(iParam1, 2048))
	{
		if (scriptTaskActionTime >= 1.5f)
			return true;
	
		return false;
	}

	return true;
}

void func_445(var uParam0, int iParam1) // Position - 0xC44D Hash - 0xF55E891F ^0xF55E891F
{
	func_582(uParam0, iParam1);
	return;
}

BOOL func_446(eStackSize essParam0) // Position - 0xC45D Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

void func_447(int iParam0, float fParam1) // Position - 0xC469 Hash - 0x45CA0D9B ^0xE9B5F9B4
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_584(1, flag, true, str);
		func_585(!flag, fParam1 < 0f, flag);
		num = func_586(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_587();
	}
	else if (iParam0 == 10)
	{
		num = func_586(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_586(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

void func_448(var uParam0, int iParam1) // Position - 0xC53F Hash - 0x659ACE5B ^0xF162830A
{
	uParam0->f_1666.f_1 = uParam0->f_1666.f_1 || iParam1;
	return;
}

BOOL func_449(var uParam0, int iParam1) // Position - 0xC558 Hash - 0x718DD1EF ^0xD2A89BB9
{
	return uParam0->f_26 && iParam1 != false;
}

char* func_450(int iParam0) // Position - 0xC569 Hash - 0x2020ACF ^0x59722C80
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}

	return "Disabled";
}

char* func_451() // Position - 0xC58D Hash - 0x306ACA3A ^0xEDEFD01E
{
	return "default_leadin_camera";
}

int func_452(var uParam0) // Position - 0xC599 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_453() // Position - 0xC5A4 Hash - 0x603315F4 ^0x107C5E3F
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("bandana"));
	STREAMING::REMOVE_ANIM_DICT(func_588(1));
	return;
}

void func_454(var uParam0) // Position - 0xC5BE Hash - 0xE490C58 ^0xE490C58
{
	func_589(&(uParam0->f_1904));
	return;
}

BOOL func_455(int iParam0) // Position - 0xC5CF Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_590(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

struct<4> func_456(int iParam0, int iParam1) // Position - 0xC63A Hash - 0x4833EBA6 ^0x4833EBA6
{
	return func_591(iParam0, iParam1);
}

void func_457(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0xC64A Hash - 0xF73E422B ^0x72D662B4
{
	func_409(pedParam0, uParam1, uParam1.f_3, iParam5, iParam6);
	return;
}

void func_458(var uParam0) // Position - 0xC664 Hash - 0x1D528947 ^0x1396A25A
{
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0) != joaat("rel_player_ally"))
	{
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 278, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("rel_player_ally"));
	}

	return;
}

BOOL func_459(Hash hParam0) // Position - 0xC6A2 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_460(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, ePedType eptParam5, Hash hParam6, int iParam7, Hash hParam8) // Position - 0xC6CA Hash - 0x962623F6 ^0xBA289883
{
	if (!func_319(iLocal_34, iParam7))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			STREAMING::REQUEST_MODEL(eptParam5, false);
		
			if (STREAMING::HAS_MODEL_LOADED(eptParam5))
				*uParam0 = func_592(eptParam5, uParam1, uParam1.f_3, true, true, 0, true, true, true, false, false, false, false);
		
			return false;
		}
	
		if (!PED::IS_PED_READY_TO_RENDER(*uParam0))
			return false;
	
		func_458(uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 146, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 504, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	
		if (hParam8 != 0)
		{
			PED::_EQUIP_META_PED_OUTFIT(*uParam0, hParam8);
			PED::_UPDATE_PED_VARIATION(*uParam0, false, true, true, true, false);
		}
	
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, hParam6, -1, false, true, 0, false, 1056964608, 1065353216, 752097756, true, 0, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*uParam0, func_459(hParam6));
		func_443(&iLocal_34, iParam7);
	}

	return true;
}

Vector3 func_461(int iParam0, int iParam1) // Position - 0xC79C Hash - 0x1D145E52 ^0x1D145E52
{
	return func_593(iParam0, iParam1);
}

float func_462(int iParam0, int iParam1) // Position - 0xC7AC Hash - 0x33C225B6 ^0x33C225B6
{
	return func_594(iParam0, iParam1);
}

void func_463(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0xC7BC Hash - 0x45FC5048 ^0xD1D3120
{
	Hash hash;

	if (!bParam2)
	{
		switch (essParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_595(essParam0);
				func_596(essParam0, false);
				break;
		}
	
		func_597(essParam0, essParam1);
	
		if (func_598(essParam1, &hash))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			{
				if (func_599(Global_1360165[essParam0 /*1157*/], hash))
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[essParam0 /*1157*/], hash);
			
				PED::_EQUIP_META_PED_OUTFIT(Global_1360165[essParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[essParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[essParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (essParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_595(essParam0);
				func_596(essParam0, true);
				break;
		}
	
		func_600(essParam0, essParam1);
		func_601(essParam0, Global_1360165[essParam0 /*1157*/], true);
	}

	return;
}

void func_464(var uParam0, int iParam1) // Position - 0xC915 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_465(var uParam0) // Position - 0xC922 Hash - 0xBB45F689 ^0x2A0151A
{
	if (func_526(uParam0->f_1, 2))
		return true;

	if (!func_526(uParam0->f_1, 1))
		func_336(uParam0);

	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_527(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_466(var uParam0) // Position - 0xC965 Hash - 0x81A22FBD ^0x560BCA36
{
	if (func_526(uParam0->f_3, 2))
		return true;

	if (!func_526(uParam0->f_3, 1))
		func_338(uParam0);

	switch (uParam0->f_1)
	{
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_527(&(uParam0->f_3), 2);
				return true;
			}
			break;
	
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_527(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}

	return false;
}

BOOL func_467(var uParam0) // Position - 0xC9E5 Hash - 0xBB45F689 ^0xA82EEDBE
{
	if (func_526(uParam0->f_1, 2))
		return true;

	if (!func_526(uParam0->f_1, 1))
		func_340(uParam0);

	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_527(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_468(var uParam0) // Position - 0xCA28 Hash - 0x4763A261 ^0x3D853F54
{
	Vector3 position;
	var rotation;

	if (func_526(uParam0->f_2, 1))
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

BOOL func_469(var uParam0) // Position - 0xCA94 Hash - 0x2427C87C ^0x36B2F4F4
{
	if (func_526(uParam0->f_2, 2))
		return true;

	if (!func_526(uParam0->f_2, 1))
		func_345(uParam0);

	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		func_527(&(uParam0->f_2), 2);
		return true;
	}

	return false;
}

BOOL func_470(var uParam0, AnimScene ansParam1) // Position - 0xCADA Hash - 0x41147E93 ^0xD471A2
{
	if (func_526(uParam0->f_1, 2))
		return true;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam1))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansParam1, true, false))
		return false;

	if (!func_526(uParam0->f_1, 1))
		func_347(uParam0, ansParam1);

	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansParam1, *uParam0))
	{
		func_527(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_471(var uParam0) // Position - 0xCB3F Hash - 0xBB45F689 ^0x72E400CF
{
	if (func_526(uParam0->f_2, 2))
		return true;

	if (!func_526(uParam0->f_2, 1))
		func_349(uParam0);

	if (PROPSET::_HAS_PROP_SET_LOADED(*uParam0))
	{
		func_527(&(uParam0->f_2), 2);
		return true;
	}

	return false;
}

BOOL func_472(var uParam0) // Position - 0xCB82 Hash - 0xBB45F689 ^0x4D63B708
{
	if (func_526(uParam0->f_3, 2))
		return true;

	if (!func_526(uParam0->f_3, 1))
		func_351(uParam0);

	if (WEAPON::_HAS_WEAPON_ASSET_LOADED(*uParam0))
	{
		func_527(&(uParam0->f_3), 2);
		return true;
	}

	return false;
}

BOOL func_473(var uParam0) // Position - 0xCBC5 Hash - 0xBB45F689 ^0x9398190A
{
	if (func_526(uParam0->f_1, 2))
		return true;

	if (!func_526(uParam0->f_1, 1))
		func_353(uParam0);

	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		func_527(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_474(var uParam0) // Position - 0xCC08 Hash - 0xBB45F689 ^0xBECABA13
{
	if (func_526(uParam0->f_1, 2))
		return true;

	if (!func_526(uParam0->f_1, 1))
		func_355(uParam0);

	if (STREAMING::IS_IPL_ACTIVE_HASH(*uParam0))
	{
		func_527(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

BOOL func_475(var uParam0) // Position - 0xCC4B Hash - 0xE08F88B3 ^0x1237832E
{
	if (func_526(uParam0->f_2, 2))
		return true;

	if (!func_526(uParam0->f_2, 1))
		func_357(uParam0);

	if (AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2))
	{
		func_527(&(uParam0->f_2), 2);
		return true;
	}

	return false;
}

BOOL func_476(var uParam0) // Position - 0xCC95 Hash - 0xBB45F689 ^0xF403CE54
{
	if (func_526(uParam0->f_1, 2))
		return true;

	if (!func_526(uParam0->f_1, 1))
		func_359(uParam0);

	if (STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(*uParam0))
	{
		func_527(&(uParam0->f_1), 2);
		return true;
	}

	return false;
}

int func_477(int iParam0) // Position - 0xCCD8 Hash - 0x297139D9 ^0x297139D9
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

BOOL func_478(var uParam0, Entity eParam1) // Position - 0xCF0C Hash - 0x9ADF6CEA ^0xA4B4891F
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
		return false;

	return ITEMSET::IS_IN_ITEMSET(eParam1, uParam0->f_5);
}

Ped func_479(eStackSize essParam0) // Position - 0xCF3C Hash - 0xFBADD85B ^0xFBADD85B
{
	if (func_114(essParam0))
		return Global_1360165[essParam0 /*1157*/];

	return 0;
}

BOOL func_480(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xCF5A Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_446(essParam0))
			return false;

	func_602(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_481(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xCF95 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_446(essParam0))
			return;

	func_602(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

Ped func_482(eStackSize essParam0, BOOL bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24) // Position - 0xCFCF Hash - 0x79A2D2D9 ^0x5019CC83
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
			if (func_480(essParam0, 2, true))
				func_515(essParam0, 2, true);
		
			if (func_266(essParam0, 16, true))
			{
				if (Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_481(essParam0, 29, true);
						return 0;
					}
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[essParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_332(essParam0, false, false, true, -1082130432, true, true, false, false, false, false);
					}
				
					return 0;
				}
				else if (func_159(Global_1360165[essParam0 /*1157*/], 0))
				{
					return Global_1360165[essParam0 /*1157*/];
				}
			}
		
			if (func_159(Global_1360165[essParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[essParam0 /*1157*/]))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(Global_1360165[essParam0 /*1157*/]))
					if (bParam1)
						func_603(essParam0, true, "Stealing, but companion is a ragdoll");
					else
						return 0;
			
				func_481(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_604(essParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_481(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_604(essParam0, 1);
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
		
			if (!func_480(essParam0, 44, false))
				func_481(essParam0, 44, false);
		
			if (func_605(essParam0, unk, iParam13, false, true, bParam17, bParam20, -1, 1, false))
				func_604(essParam0, 2);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 171, true);
		
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
		
			func_515(essParam0, 18, true);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[essParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[essParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 130, false);
			func_518(essParam0, bParam9, true, false);
		
			if (bParam22)
				func_485(essParam0, false, false, true);
		
			func_515(essParam0, 33, true);
			func_515(essParam0, 34, true);
			func_515(essParam0, 29, true);
		
			if (!_IS_NULL_VECTOR(unk) && bParam7)
				func_604(essParam0, 3);
			else if (iParam13 != 0)
				func_604(essParam0, 4);
			else
				func_604(essParam0, 5);
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
						func_603(essParam0, true, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
					}
				}
			
				num = 2;
			
				if (bParam10)
					num = num | 4;
			
				func_409(Global_1360165[essParam0 /*1157*/], unk, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[essParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[essParam0 /*1157*/], true))
					TASK::CLEAR_PED_TASKS(Global_1360165[essParam0 /*1157*/], true, false);
			
				return 0;
			}
		
			if (iParam13 != 0)
				func_604(essParam0, 4);
			else
				func_604(essParam0, 5);
			break;
	
		case 4:
			if (iParam13 != 0 || flag)
			{
				if (flag)
					if (iParam13 == 0)
						iParam13 = Global_40.f_4942[essParam0 /*60*/].f_4;
			
				if (func_606(essParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
					{
						func_607(essParam0, iParam13, false);
						func_608(essParam0, Global_1360165[essParam0 /*1157*/], iParam13, true);
					
						if (func_480(essParam0, 25, false))
							func_515(essParam0, 25, false);
					
						func_481(essParam0, 66, false);
						func_604(essParam0, 5);
						Global_1360165[essParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_604(essParam0, 5);
				}
			
				func_481(essParam0, 28, true);
			}
			else
			{
				func_604(essParam0, 5);
			}
			break;
	
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
				func_604(essParam0, 6);
			break;
	
		case 6:
			if (func_159(Global_1360165[essParam0 /*1157*/], 0))
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
					func_609(essParam0);
			
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[essParam0 /*1157*/]);
					func_610(Global_1360165[essParam0 /*1157*/], 1);
				}
			}
		
			func_604(essParam0, 7);
			[[fallthrough]];
	
		case 7:
			func_518(essParam0, bParam9, bParam15, false);
			func_512(essParam0, 4, bParam11);
			func_514(essParam0);
		
			if (bParam20)
				func_611(Global_1360165[essParam0 /*1157*/]);
		
			func_612(essParam0, Global_1360165[essParam0 /*1157*/]);
		
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true))
				PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true);
		
			Global_40.f_4942[essParam0 /*60*/].f_4 = Global_40.f_4942[essParam0 /*60*/].f_3;
			func_604(essParam0, 0);
			func_613(essParam0, 16, true);
			func_515(essParam0, 44, true);
			Global_1360165[essParam0 /*1157*/].f_1156 = 0;
			Global_1360165[essParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[essParam0 /*1157*/];
	}

	return 0;
}

void func_483(var uParam0, Entity eParam1) // Position - 0xD63F Hash - 0x47841D83 ^0x16951740
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

void func_484(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD697 Hash - 0xD36E5344 ^0xE44BBDDC
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	if (bParam2 && !func_167() || !ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Global_43800, func_215(pedParam0)))
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
		func_611(pedParam0);

	return;
}

void func_485(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD74C Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_114(essParam0))
		return;

	if (bParam1)
		func_614(essParam0, bParam3);
	else
		func_615(essParam0, bParam3);

	if (bParam2)
		func_616(essParam0, bParam3);
	else
		func_617(essParam0, bParam3);

	return;
}

void func_486(eStackSize essParam0) // Position - 0xD791 Hash - 0xA9477085 ^0x50DAE8B3
{
	Ped ped;

	if (!func_114(essParam0))
		return;

	ped = func_259(essParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	PED::_SET_PED_DRUNKNESS(ped, false, 0f);
	return;
}

const char* func_487(Entity eParam0) // Position - 0xD7C3 Hash - 0xE06C1D20 ^0x8EBD3F94
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return "";

	if (ENTITY::IS_ENTITY_A_PED(eParam0))
		return func_215(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0));
	else if (ENTITY::IS_ENTITY_AN_OBJECT(eParam0))
		return func_618(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(eParam0));
	else if (ENTITY::IS_ENTITY_A_VEHICLE(eParam0))
		return func_619(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(eParam0));

	return "";
}

int func_488(var uParam0, Entity eParam1) // Position - 0xD828 Hash - 0xD8D08AD0 ^0x705BA6E9
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return -1;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == eParam1)
			return i;
	}

	return -1;
}

Entity func_489(var uParam0, const char* sParam1) // Position - 0xD876 Hash - 0x36449D70 ^0x8893C58B
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[i /*12*/].f_1), sParam1))
			return uParam0->f_13[i /*12*/];
	}

	return 0;
}

void func_490(var uParam0, Entity eParam1) // Position - 0xD8C1 Hash - 0x833023BF ^0x3D3CC7FB
{
	var unk;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return;

	for (i = 0; i < 35; i = i + 1)
	{
		if (uParam0->f_13[i /*12*/] == eParam1)
		{
			uParam0->f_13[i /*12*/] = { unk };
			return;
		}
	}

	return;
}

int func_491(var uParam0) // Position - 0xD909 Hash - 0x977F3323 ^0x1DC224A5
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]))
			return i;
	}

	return -1;
}

void func_492(var uParam0, Entity eParam1, const char* sParam2, BOOL bParam3) // Position - 0xD93A Hash - 0xC30FA1B5 ^0xC172D664
{
	int num;
	var src;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return;

	func_620(uParam0);
	num = func_621(uParam0, eParam1);

	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			sParam2 = func_487(eParam1);
	
		num = func_622(uParam0, sParam2);
	
		if (num == -1)
		{
			num = func_623(uParam0);
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
		num = func_623(uParam0);
	}

	if (num == -1)
		return;

	uParam0->f_3[num /*13*/].f_2 = eParam1;
	uParam0->f_3[num /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(eParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[num /*13*/].f_9))
	{
		uParam0->f_3[num /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[num /*13*/].f_9, sParam2);
		uParam0->f_3[num /*13*/].f_9 = sParam2;
	}

	func_624(uParam0, 2);
	return;
}

Vector3 func_493(float fParam0, var uParam1, var uParam2) // Position - 0xDA37 Hash - 0xFB6A39D2 ^0x80C9C759
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

BOOL func_494(int iParam0, int iParam1) // Position - 0xDA76 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_495(int iParam0) // Position - 0xDA85 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_180(iParam0))
		return -1;

	return func_590(iParam0);
}

struct<4> func_496() // Position - 0xDAA1 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

void func_497(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xDAAD Hash - 0xFDACD718 ^0x658C9335
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

BOOL func_498() // Position - 0xDAFF Hash - 0x68FFA9E8 ^0x1B04A5AD
{
	if (func_258() == -1 && func_74(0, false, true))
		return Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0;

	return false;
}

void func_499(int iParam0) // Position - 0xDB3D Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

int func_500(Hash hParam0) // Position - 0xDB56 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_428(outSlotId);
}

BOOL func_501() // Position - 0xDB79 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_625())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_502(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xDBC3 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_393(hParam0, 0))
		return false;

	num = func_559(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_626(hParam0, 1))
			return false;

	return func_627(hParam0, false, bParam2) >= iParam1;
}

BOOL func_503(Hash hParam0) // Position - 0xDC2D Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_321(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_504(Hash hParam0, Hash hParam1) // Position - 0xDC57 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_505() // Position - 0xDC88 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_628())
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

Hash func_506() // Position - 0xDCDF Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_628())
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

Hash func_507() // Position - 0xDD36 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_628())
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

Hash func_508() // Position - 0xDD8D Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_628())
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

int func_509(var uParam0, Entity eParam1) // Position - 0xDDE4 Hash - 0x8EA37FF1 ^0x91318814
{
	int num;
	int i;

	num = -1;

	if (!ENTITY::IS_ENTITY_DEAD(eParam1))
	{
		for (i = 0; i < uParam0->f_3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2))
			{
				if (ENTITY::GET_ENTITY_MODEL(eParam1) == ENTITY::GET_ENTITY_MODEL(uParam0->f_3[i /*13*/].f_2))
				{
					num = num + 1;
				
					if (eParam1 == uParam0->f_3[i /*13*/].f_2)
						return num;
				}
			}
		}
	}

	return num;
}

void func_510(var uParam0, Ped pedParam1, const char* sParam2) // Position - 0xDE52 Hash - 0x6FCAA044 ^0x92A4A55D
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return;

	if (!func_413(uParam0, pedParam1))
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		sParam2 = func_629(uParam0, pedParam1);

	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, sParam2))
		if (ENTITY::IS_ENTITY_A_PED(pedParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false)) || ENTITY::IS_ENTITY_AN_OBJECT(pedParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)) || ENTITY::IS_ENTITY_A_VEHICLE(pedParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false)))
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, pedParam1);

	return;
}

void func_511(eStackSize essParam0, BOOL bParam1) // Position - 0xDF0D Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_446(essParam0))
		return;

	if (bParam1)
		if (func_630(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_512(essParam0, 1, false);

	func_512(essParam0, 16, bParam1);
	return;
}

void func_512(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xDF4F Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_446(essParam0))
		return;

	func_631(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_513(eStackSize essParam0) // Position - 0xDF77 Hash - 0x7895582D ^0x7895582D
{
	func_512(essParam0, 8, false);
	return;
}

void func_514(eStackSize essParam0) // Position - 0xDF88 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_481(essParam0, 36, true);
	return;
}

void func_515(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xDF99 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_446(essParam0))
			return;

	func_602(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

PersChar func_516(eStackSize essParam0, BOOL bParam1) // Position - 0xDFD3 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_114(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_632(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

void func_517(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE012 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_114(essParam0))
	{
		ped = func_259(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_633(essParam0);
		}
	}

	if (func_480(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_259(essParam0), 137, true);

	return;
}

void func_518(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE064 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_446(essParam0))
		return;

	if (bParam1)
	{
		func_515(essParam0, 50, true);
		func_515(essParam0, 48, true);
		func_515(essParam0, 49, true);
		func_515(essParam0, 51, true);
		func_515(essParam0, 52, true);
		func_515(essParam0, 54, true);
		func_515(essParam0, 55, true);
	}
	else
	{
		func_481(essParam0, 50, true);
		func_481(essParam0, 48, true);
		func_481(essParam0, 49, true);
		func_481(essParam0, 51, true);
	
		if (bParam3)
			func_481(essParam0, 54, true);
		else
			func_515(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_481(essParam0, 52, true);
		
			if (bParam3)
				func_481(essParam0, 55, true);
		}
		else
		{
			func_515(essParam0, 52, true);
		
			if (!bParam3)
				func_515(essParam0, 55, true);
		}
	}

	return;
}

void func_519(eStackSize essParam0, BOOL bParam1) // Position - 0xE136 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_446(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_259(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_259(essParam0), 204, false);

	return;
}

void func_520(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE16D Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_480(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_516(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_259(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_634(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_481(essParam0, 2, true);
	}
	else
	{
		func_635(essParam0);
		func_481(essParam0, 1, true);
	}

	return;
}

void func_521(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE27B Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_114(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_522(eStackSize essParam0) // Position - 0xE2B7 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_114(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_523(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xE2F7 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_446(essParam1))
		return;

	player = func_522(essParam1);

	if (func_636(essParam1))
		if (!func_637(essParam1))
			return;

	func_515(essParam1, 39, true);
	func_638(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_638(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_638(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_481(essParam1, 43, true);
		}
	
		if (bParam4)
			func_639(essParam1, false, true, true, true);
	}

	return;
}

BOOL func_524(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0xE399 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

int func_525(int iParam0) // Position - 0xE3EE Hash - 0xA18FC425 ^0xA18FC425
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

BOOL func_526(int iParam0, int iParam1) // Position - 0xE587 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_527(var uParam0, int iParam1) // Position - 0xE596 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_528(var uParam0) // Position - 0xE5A7 Hash - 0xA22DA6B0 ^0x3A3D1E32
{
	if (!func_526(uParam0->f_1, 1))
	{
		STREAMING::_0x03DDBF2D73799F9E(*uParam0);
		func_527(&(uParam0->f_1), 1);
	}

	return;
}

void func_529(var uParam0) // Position - 0xE5CC Hash - 0x68EBB57D ^0x1E166DCF
{
	if (!func_526(*uParam0, 1))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_527(uParam0, 1);
	}

	return;
}

BOOL func_530() // Position - 0xE5EB Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_258() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_531(int iParam0) // Position - 0xE610 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

void func_532(Volume volParam0, BOOL bParam1) // Position - 0xE61C Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_533(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE63F Hash - 0x125DC0A8 ^0x7CF66474
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return;

	if (bParam2)
	{
	}

	Global_1393237.f_11[iParam0 /*30*/].f_10 = Global_1393237.f_11[iParam0 /*30*/].f_10 || bParam1;
	return;
}

void func_534(int iParam0, int iParam1) // Position - 0xE683 Hash - 0x3095F76B ^0x9DAA87F4
{
	if (iParam0 >= 0 && iParam0 < 6)
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;

	return;
}

Volume func_535(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0xE6A9 Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_640(vParam0))
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

	func_641(volume, bParam8);
	return volume;
}

BOOL func_536(var uParam0, const char* sParam1) // Position - 0xE763 Hash - 0xA68E0030 ^0xA87ABB5F
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

BOOL func_537(var uParam0, const char* sParam1) // Position - 0xE7B4 Hash - 0xDC19080A ^0x79CF59FD
{
	var string2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	string2 = { func_183(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &string2);
}

BOOL func_538(int iParam0) // Position - 0xE7DC Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_539(int iParam0) // Position - 0xE7F1 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

int func_540(int iParam0) // Position - 0xE811 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_541(int iParam0) // Position - 0xE81B Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_642(iParam0))
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

void func_542(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0xE8CE Hash - 0x1B501888 ^0x6546232B
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
	func_543(iParam0, true);
	func_545(iParam0, true);
	func_546(iParam0, 128);
	return;
}

void func_543(int iParam0, BOOL bParam1) // Position - 0xEB74 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_380(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_544(int iParam0, int iParam1) // Position - 0xEBCC Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_545(int iParam0, BOOL bParam1) // Position - 0xEBFF Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_546(int iParam0, int iParam1) // Position - 0xEC28 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_547(int iParam0) // Position - 0xEC50 Hash - 0xBEE7BE6F ^0x7416FECE
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

void func_548(int iParam0) // Position - 0xECB0 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

Hash func_549() // Position - 0xECCB Hash - 0x7AE16C89 ^0x6C5D08B9
{
	if (!func_412(Global_1935630.f_45))
		return joaat("WEAPON_UNARMED");

	return Global_1935630.f_45;
}

Hash func_550(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0xECEF Hash - 0xAB9CFACB ^0x8DB6D77C
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
				
					if (func_412(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_412(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_258() == -1 && !func_459(weaponHash))
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
				if (func_459(joaat("weapon_repeater_carbine")))
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
		if (pedParam0 != Global_35 && func_412(weaponHash))
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
		func_643(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_644(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_645(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

Hash func_551(int iParam0, int iParam1) // Position - 0xF09B Hash - 0xAED4FBA4 ^0xAED4FBA4
{
	var unk;

	return func_646(&unk, iParam0, iParam1);
}

BOOL func_552() // Position - 0xF0AD Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1935436 == 1;
}

BOOL func_553() // Position - 0xF0BB Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

Ped func_554(Ped pedParam0) // Position - 0xF0C9 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_555(Ped pedParam0) // Position - 0xF0D3 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_556(Ped pedParam0) // Position - 0xF105 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

Hash func_557(Hash hParam0) // Position - 0xF147 Hash - 0xBBE66644 ^0xEC72F4B4
{
	Hash hash;

	hash = func_394(hParam0);

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

struct<4> func_558(BOOL bParam0) // Position - 0xF17C Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_436(joaat("character"), func_496(), joaat("SLOTID_NONE"), bParam0);
}

int func_559(Hash hParam0) // Position - 0xF198 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_393(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_560(BOOL bParam0) // Position - 0xF1C3 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_438(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_436(923904168, func_558(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_436(923904168, func_558(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_436(923904168, func_558(bParam0), -740156546, false);
}

BOOL func_561(Hash hParam0, BOOL bParam1) // Position - 0xF258 Hash - 0x62864AB ^0xBC339691
{
	if (func_394(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_647(24);
		else
			return true;

	return false;
}

BOOL func_562(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xF291 Hash - 0x4285A587 ^0x4285A587
{
	return func_437(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_563(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xF2A9 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_648(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_564(BOOL bParam0) // Position - 0xF2CA Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_438(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_436(271701509, func_558(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_436(271701509, func_558(bParam0), 12999093, false);
}

BOOL func_565(Hash hParam0, Hash hParam1) // Position - 0xF32E Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_394(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_566(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xF38D Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_438(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

void func_567() // Position - 0xF3BD Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

int func_568(Hash hParam0) // Position - 0xF404 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_504(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_504(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_504(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_504(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_504(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_504(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_569(int iParam0) // Position - 0xF555 Hash - 0x65A082AE ^0x65A082AE
{
	func_422(iParam0, 8, 6);
	return;
}

void func_570(int iParam0) // Position - 0xF566 Hash - 0x20214C72 ^0x20214C72
{
	func_649(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_571(int iParam0, int iParam1) // Position - 0xF57B Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_650(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_572(Hash hParam0, int iParam1, int iParam2) // Position - 0xF592 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_573(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF5A5 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_394(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_418(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_571(num2, num3);
	}

	if (func_651(-1586649372) && func_418(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_571(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_652(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_652(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_571(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_571(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_571(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_653(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_504(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_571(num2, num3);
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
						func_571(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_571(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_394(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_571(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_653(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_394(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_571(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_652(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_652(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_571(num2, num3);
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
						func_571(num2, num3);
				}
			}
		
			func_652(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_504(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_571(num2, num3);
			}
			break;
	
		case 1868067663:
			func_652(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_571(num2, num3);
			}
			break;
	}

	switch (func_394(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_394(hParam0->f_1[num2 /*3*/]) || func_504(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_571(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_394(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_571(num2, num3);
			}
			break;
	}

	return;
}

Hash func_574(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0xFBE9 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_654(0);

	if (hParam2 != 0 && func_655(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_656(hParam0, func_420(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_575(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xFC2F Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_258() != -1;
	flag2 = func_654(0);

	if (func_416(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_420(num, 1);
		
			if (func_417(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_417(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_657(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_658(hParam0);

	if (num3 > 0)
	{
		if (!func_416(524288))
		{
			func_414(524288);
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
				num5 = func_420(num, 1);
			
				if (func_417(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_417(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_657(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_571(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_579(524288);

	return;
}

void func_576(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFE4C Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_659(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_258() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_660(2, Global_26796.f_776) || Global_1946054.f_1497 != func_661(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_661(Global_40.f_7729);
				Global_1946054.f_1378 = func_661(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_662(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_663(false, true);

	return;
}

void func_577(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xFF6B Hash - 0x3760D786 ^0x3760D786
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
		
			if (func_538(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_539(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_414(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_538(iParam0))
				return;
		
			func_539(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_414(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_435(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_578(var uParam0) // Position - 0x10205 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_579(BOOL bParam0) // Position - 0x10263 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_580(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x1027B Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

void func_581(var uParam0, int iParam1) // Position - 0x102A4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_582(var uParam0, int iParam1) // Position - 0x102B5 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

var func_583(BOOL bParam0, var uParam1, var uParam2) // Position - 0x102CA Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_584(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x102E1 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_585(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10325 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_664(0, 1, bParam0, bParam1);
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

int func_586(int iParam0) // Position - 0x1041D Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

void func_587() // Position - 0x10441 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_665();
	func_666();
	func_667();
	return;
}

char* func_588(int iParam0) // Position - 0x10458 Hash - 0xE6862179 ^0x21AFE400
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

void func_589(const char* sParam0) // Position - 0x104CC Hash - 0xC18B77C2 ^0xA458FE5B
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

int func_590(int iParam0) // Position - 0x10513 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_668(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

struct<4> func_591(int iParam0, int iParam1) // Position - 0x10554 Hash - 0x3C2FFB17 ^0xFAA3DF9B
{
	var unk;

	unk = { func_593(iParam0, iParam1) };
	unk.f_3 = func_594(iParam0, iParam1);
	return unk;
}

Ped func_592(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x10578 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_669(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

Vector3 func_593(int iParam0, int iParam1) // Position - 0x105BA Hash - 0x7CA5B2D1 ^0x7CA5B2D1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 71.4867f, 1071.3862f, 194.9133f;
			
				case 1:
					return 69.5959f, 1070.5687f, 194.997f;
			
				case 2:
					return 73.6931f, 1071.2926f, 194.7691f;
			
				case 3:
					return 67.7318f, 1069.8607f, 194.9621f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 66.0488f, 1069.1239f, 194.92f;
			
				case 1:
					return 64.3435f, 1068.1544f, 194.8585f;
			
				case 2:
					return 37.3898f, 1051.6299f, 194.0012f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 73.6514f, 1063.7181f, 195.9996f;
			
				case 1:
					return 74.0417f, 1064.5615f, 196.3311f;
			
				case 2:
					return 73.5467f, 1064.2062f, 196.4037f;
			
				case 3:
					return 73.0202f, 1065.7915f, 194.9879f;
			
				case 4:
					return 72.6557f, 1066.0667f, 194.7914f;
			
				case 5:
					return 74.2862f, 1064.7593f, 196.3966f;
			}
			break;
	}

	return 0f, 0f, 0f;
}

float func_594(int iParam0, int iParam1) // Position - 0x1075F Hash - 0xA760312B ^0xA760312B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 45.1262f;
			
				case 1:
					return 51.9844f;
			
				case 2:
					return 44.226f;
			
				case 3:
					return 54.8919f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 57.2517f;
			
				case 1:
					return 59.0996f;
			
				case 2:
					return 54.2036f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 152.0988f;
			
				case 1:
					return 66.65f;
			
				case 2:
					return 152.8f;
			
				case 3:
					return 152.8f;
			
				case 4:
					return 152.8f;
			
				case 5:
					return 152.8f;
			}
			break;
	}

	return 0f;
}

void func_595(eStackSize essParam0) // Position - 0x10880 Hash - 0x83966A8E ^0x24FDDDED
{
	func_597(essParam0, 1);
	func_597(essParam0, MICRO);
	func_597(essParam0, 256);
	func_597(essParam0, MINI);
	func_597(essParam0, 1024);
	func_597(essParam0, 2048);
	func_597(essParam0, 4096);
	func_597(essParam0, 65536);
	func_597(essParam0, 16384);
	func_597(essParam0, 262144);
	func_597(essParam0, 524288);
	func_597(essParam0, 1048576);
	func_597(essParam0, 2097152);
	func_597(essParam0, 32768);
	func_597(essParam0, 131072);
	func_597(essParam0, 134217728);
	func_597(essParam0, 1073741824);
	return;
}

void func_596(eStackSize essParam0, BOOL bParam1) // Position - 0x10929 Hash - 0xA7580A6E ^0x3FA54D5
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

void func_597(eStackSize essParam0, eStackSize essParam1) // Position - 0x1099C Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[essParam0 /*60*/].f_5 = Global_40.f_4942[essParam0 /*60*/].f_5 - Global_40.f_4942[essParam0 /*60*/].f_5 && essParam1;
	return;
}

BOOL func_598(eStackSize essParam0, var uParam1) // Position - 0x109CC Hash - 0x4931B454 ^0x57CF147
{
	switch (essParam0)
	{
		case 1:
			*uParam1 = 860729266;
			return true;
	
		case MICRO:
			*uParam1 = 1606325429;
			return true;
	
		case 256:
			*uParam1 = 1743550585;
			return true;
	
		case MINI:
			*uParam1 = 1064646155;
			return true;
	
		case 1024:
			*uParam1 = -536694793;
			return true;
	
		case 2048:
			*uParam1 = -1304053509;
			return true;
	
		case 4096:
			*uParam1 = 879715242;
			return true;
	
		case 16384:
			*uParam1 = -1100875244;
			return true;
	
		case 32768:
			*uParam1 = -1658942149;
			return true;
	
		case 65536:
			*uParam1 = -972364774;
			return true;
	
		case 131072:
			*uParam1 = -1980913856;
			return true;
	
		case 262144:
			*uParam1 = 1153596794;
			return true;
	
		case 524288:
			*uParam1 = 1016389820;
			return true;
	
		case 1048576:
			*uParam1 = -726966617;
			return true;
	
		case 2097152:
			*uParam1 = 1365901568;
			return true;
	
		case 134217728:
			*uParam1 = -1683207356;
			return true;
	
		case 1073741824:
			*uParam1 = -1712783565;
			return true;
	}

	return false;
}

BOOL func_599(Ped pedParam0, Hash hParam1) // Position - 0x10B42 Hash - 0x902FAF7B ^0x852CA371
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

void func_600(eStackSize essParam0, eStackSize essParam1) // Position - 0x10B70 Hash - 0x5D6920FA ^0x923FA356
{
	Global_40.f_4942[essParam0 /*60*/].f_5 = Global_40.f_4942[essParam0 /*60*/].f_5 || essParam1;
	return;
}

void func_601(eStackSize essParam0, Ped pedParam1, BOOL bParam2) // Position - 0x10B93 Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1 > 0 && func_599(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4096 > 0 && func_599(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MICRO > 0 && func_599(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 256 > 0 && func_599(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MINI > 0 && func_599(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1024 > 0 && func_599(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2048 > 0 && func_599(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & -2147483648 > 0 && func_599(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 65536 > 0 && func_599(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16384 > 0 && func_599(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 262144 > 0 && func_599(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 524288 > 0 && func_599(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1048576 > 0 && func_599(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2097152 > 0 && func_599(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 32768 > 0 && func_599(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 131072 > 0 && func_599(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4194304 > 0 && func_599(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8388608 > 0 && func_599(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16777216 > 0 && func_599(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 33554432 > 0 && func_599(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 67108864 > 0 && func_599(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 134217728 > 0 && func_599(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 268435456 > 0 && func_599(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 536870912 > 0 && func_599(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1073741824 > 0 && func_599(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8192 > 0 && func_599(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_57 = 1;

	return;
}

int func_602(int iParam0, var uParam1, var uParam2) // Position - 0x11171 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_603(eStackSize essParam0, BOOL bParam1, char* sParam2) // Position - 0x1118E Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_259(essParam0);

	if (!func_114(essParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

void func_604(eStackSize essParam0, int iParam1) // Position - 0x111D5 Hash - 0x61FF61E0 ^0x2C6117ED
{
	if (!func_446(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_11 = iParam1;
	return;
}

BOOL func_605(eStackSize essParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0x111F7 Hash - 0x5B7A656E ^0x3AAC2B26
{
	if (!func_446(essParam0))
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
					iParam4 = func_670(essParam0, iParam9, bParam7, true);
				else if (Global_1360165[essParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[essParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[essParam0 /*60*/].f_59 && func_455(Global_1360165[essParam0 /*1157*/].f_4.f_2) || func_311(Global_1360165[essParam0 /*1157*/].f_4.f_2))
					iParam4 = Global_1360165[essParam0 /*1157*/].f_4.f_1;
				else
					iParam4 = func_670(essParam0, Global_40.f_4283, bParam7, true);
			
				if (Global_1360165[essParam0 /*1157*/].f_63 != iParam4 && func_671(Global_1360165[essParam0 /*1157*/].f_63))
					if (!func_672(essParam0, false))
						func_481(essParam0, 25, false);
			}
		
			Global_1360165[essParam0 /*1157*/].f_4 = { func_673(essParam0, iParam4, uParam1, bParam5, bParam6, bParam8, Global_40.f_4942[essParam0 /*60*/].f_59, bParam11) };
		
			if (!bParam6)
				func_515(essParam0, 44, true);
		
			Global_1360165[essParam0 /*1157*/].f_3 = 2;
			[[fallthrough]];
	
		case 2:
			if (!func_159(func_259(essParam0), 0))
				return false;
		
			if (bParam5 && bParam10)
				if (!func_159(func_522(essParam0), 0))
					return false;
		
			Global_1360165[essParam0 /*1157*/].f_3 = 3;
			[[fallthrough]];
	
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_606(eStackSize essParam0, int iParam1) // Position - 0x113E0 Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_114(essParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_674(essParam0, iParam1);
	return flag;
}

void func_607(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1141F Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_114(essParam0))
		return;

	if (!func_606(essParam0, iParam1))
		return;

	Global_40.f_4942[essParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_481(essParam0, 25, true);

	return;
}

void func_608(eStackSize essParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x1145F Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_675(iParam2))
		{
			hash = func_676(iParam2, -1);
		
			if (func_599(pedParam1, hash))
			{
				if (func_677(pedParam1, hash))
				{
					if (func_678(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_679(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_601(essParam0, pedParam1, false);
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
			func_481(essParam0, 66, false);
	}

	return;
}

void func_609(eStackSize essParam0) // Position - 0x11535 Hash - 0x73C1F6C ^0x73C1F6C
{
	func_595(essParam0);
	func_596(essParam0, false);
	return;
}

void func_610(Ped pedParam0, int iParam1) // Position - 0x1154A Hash - 0x7F605CB ^0x28CA17AF
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

BOOL func_611(Ped pedParam0) // Position - 0x115A5 Hash - 0x4E8A039F ^0x9F8FB293
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

void func_612(eStackSize essParam0, Ped pedParam1) // Position - 0x11623 Hash - 0x9D727A3E ^0xB12CD64B
{
	if (!func_446(essParam0))
		return;

	switch (essParam0)
	{
		case 11:
			if (Global_40.f_4942[essParam0 /*60*/].f_3 == -1341683964)
			{
				func_550(pedParam1, joaat("weapon_revolver_cattleman_sadie"), false, false, 2, true, false, 1056964608, 1065353216, -1, false, false, false, false);
				func_550(pedParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), false, false, 3, true, true, 1056964608, 1065353216, -1, false, true, false, false);
			}
			break;
	}

	return;
}

void func_613(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1169D Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_114(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_614(eStackSize essParam0, BOOL bParam1) // Position - 0x116CE Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_446(essParam0))
		return;

	ped = func_259(essParam0);
	func_680(ped);
	func_481(essParam0, 60, true);

	if (bParam1)
		func_681(essParam0);

	return;
}

void func_615(eStackSize essParam0, BOOL bParam1) // Position - 0x11705 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_446(essParam0))
		return;

	ped = func_259(essParam0);
	func_682(ped);
	func_515(essParam0, 60, true);

	if (bParam1)
		func_683(essParam0);

	return;
}

void func_616(eStackSize essParam0, BOOL bParam1) // Position - 0x1173C Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_446(essParam0))
		return;

	ped = func_259(essParam0);
	func_684(ped);

	if (essParam0 == 14)
		func_685(ped);

	func_481(essParam0, 61, true);

	if (bParam1)
		func_686(essParam0);

	return;
}

void func_617(eStackSize essParam0, BOOL bParam1) // Position - 0x11780 Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_446(essParam0))
		return;

	ped = func_259(essParam0);
	func_687(ped);
	func_515(essParam0, 61, true);

	if (bParam1)
		func_688(essParam0);

	return;
}

char* func_618(Object obParam0) // Position - 0x117B7 Hash - 0xC6FA1349 ^0xFB0270CA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return "";

	entityModel = ENTITY::GET_ENTITY_MODEL(obParam0);
	return func_689(entityModel);
}

char* func_619(Vehicle veParam0) // Position - 0x117DE Hash - 0x44171E98 ^0x48D9810E
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

void func_620(var uParam0) // Position - 0x1190A Hash - 0xA464A779 ^0x65ED5EF
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

int func_621(var uParam0, Entity eParam1) // Position - 0x11969 Hash - 0x197FCA3B ^0x71B5D82B
{
	int i;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2) && uParam0->f_3[i /*13*/].f_2 == eParam1)
			return i;
	}

	return -1;
}

int func_622(var uParam0, const char* sParam1) // Position - 0x119AF Hash - 0x1E7A04C0 ^0xECFDB53A
{
	int i;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[i /*13*/].f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && MISC::ARE_STRINGS_EQUAL(uParam0->f_3[i /*13*/].f_9, sParam1))
			return i;
	}

	return -1;
}

int func_623(var uParam0) // Position - 0x11A05 Hash - 0x75A484F1 ^0xC0750852
{
	int i;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[i /*13*/].f_2))
			return i;
	}

	return -1;
}

void func_624(var uParam0, int iParam1) // Position - 0x11A3A Hash - 0x537D9C68 ^0x537D9C68
{
	uParam0->f_1664 = uParam0->f_1664 || iParam1;
	return;
}

BOOL func_625() // Position - 0x11A4F Hash - 0xFF29F962 ^0xFF29F962
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

BOOL func_626(Hash hParam0, int iParam1) // Position - 0x11AF4 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_393(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_690(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_691("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_692(&unk, i, num, num2))
			{
			}
			else if (!func_412(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_693(num);
				return true;
			}
		}
	
		func_693(num);
	}

	return false;
}

int func_627(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11B9C Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_393(hParam0, 0))
		return 0;

	num = func_559(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_690(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_694(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_438(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_628() // Position - 0x11C1E Hash - 0x6AC5469B ^0xEA730EC
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
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_695(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_695(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

const char* func_629(var uParam0, Ped pedParam1) // Position - 0x11D14 Hash - 0xBCF80312 ^0xF0A604D9
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return "";

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1)
			return func_696(uParam0->f_13[i /*12*/].f_1);
	}

	return "";
}

BOOL func_630(int iParam0, int iParam1) // Position - 0x11D77 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_631(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11D87 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

void func_632(eStackSize essParam0) // Position - 0x11DAD Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_446(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_697(essParam0);
	
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

void func_633(eStackSize essParam0) // Position - 0x11E15 Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_114(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_259(essParam0)))
		{
			func_613(essParam0, 67108864, true);
			func_515(essParam0, 19, true);
		}
	}

	return;
}

float func_634(eStackSize essParam0) // Position - 0x11E48 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_446(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_635(eStackSize essParam0) // Position - 0x11E69 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_259(essParam0);
	persChar = func_516(essParam0, false);
	func_698(essParam0, ped);

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

BOOL func_636(eStackSize essParam0) // Position - 0x11EC3 Hash - 0x6410553A ^0x46627D03
{
	if (!func_446(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_637(eStackSize essParam0) // Position - 0x11F0F Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_446(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_638(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x11F37 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_446(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_639(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x11F9C Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_446(essParam0))
		return 0;

	mount = func_522(essParam0);

	if (func_159(mount, 0))
	{
		if (func_159(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_636(essParam0) || func_637(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_699(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_700(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_701(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_702(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_702(essParam0, false));
					func_703(essParam0);
				}
			}
			else
			{
				if (func_266(essParam0, 32768, true))
				{
					persChar = func_702(essParam0, false);
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
		if (func_159(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_266(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_701(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_702(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_702(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_701(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_704(essParam0, 0);
	return 1;
}

BOOL func_640(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1214D Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_641(Volume volParam0, BOOL bParam1) // Position - 0x12167 Hash - 0xEA796703 ^0x695D7925
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

BOOL func_642(int iParam0) // Position - 0x121CF Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_380(iParam0, 2);
}

int func_643(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x121DE Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_427(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_705(398 + i, 1);
		
			if (func_562(hParam0, &unk, hash, false))
			{
				if (func_563(hParam0, &unk6, hash))
				{
					unk28 = { func_436(hParam0, unk, hash, false) };
					func_706(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_707(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_708(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_709(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_644(Ped pedParam0, var uParam1, var uParam2) // Position - 0x12330 Hash - 0x236D39D4 ^0x39F583A
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

BOOL func_645(Hash hParam0) // Position - 0x12547 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_646(Any anParam0, int iParam1, int iParam2) // Position - 0x12559 Hash - 0xE564BF7A ^0x39EC0805
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
	flag = func_710(iParam1, 128);

	if (func_691("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_692(&unk, i, num, num2))
			{
			}
			else if (!func_412(unk.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(unk.f_4) && !WEAPON::IS_WEAPON_BOW(unk.f_4))
			{
			}
			else if (iParam2 != 0 && unk.f_4 == iParam2)
			{
			}
			else if (!func_710(iParam1, 512) && func_648(unk.f_4, &unk15, &unk19, joaat("SLOTID_WEAPON_0")) && !unk19.f_21)
			{
			}
			else if (!flag || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, unk.f_4))
			{
				if (WEAPON::_IS_WEAPON_TWO_HANDED(unk.f_4) || func_695(unk.f_4) && !WEAPON::IS_WEAPON_SHOTGUN(unk.f_4) || func_710(iParam1, 16) && !WEAPON::_IS_WEAPON_SNIPER(unk.f_4) || func_710(iParam1, 4) && !func_695(unk.f_4) || func_710(iParam1, 8) && !WEAPON::IS_WEAPON_REPEATER(unk.f_4) || !func_710(iParam1, 8388608) && !WEAPON::IS_WEAPON_RIFLE(unk.f_4) || !func_710(iParam1, 1048576))
				{
					if (weaponHash == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &unk) > WEAPON::_0xA2091482ED42EF85(Global_35, anParam0))
					{
						weaponHash = unk.f_4;
						*anParam0 = { unk };
					}
				}
			}
		}
	
		func_693(num);
	}

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
	}
	else if (!func_710(iParam1, 512) && !func_710(iParam1, 1024))
	{
		iParam1 = iParam1 | 512;
		return func_646(anParam0, iParam1, iParam2);
	}
	else if (func_710(iParam1, 256))
	{
		weaponHash = joaat("WEAPON_UNARMED");
	}

	return weaponHash;
}

BOOL func_647(int iParam0) // Position - 0x12788 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_711(iParam0))
		return false;

	return func_712(iParam0);
}

BOOL func_648(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x127A4 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_438(false);
	*panParam1 = { func_436(hParam0, func_560(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

void func_649(int iParam0, int iParam1) // Position - 0x127E9 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_713(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_713(&iParam0->f_2[i /*2*/], 1))
					func_714(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_650(int iParam0, int iParam1, int iParam2) // Position - 0x12915 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_715(iParam0, 1))
		func_716(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_651(int iParam0) // Position - 0x1295C Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_429(iParam0, 1) /*3*/] != Global_1946054.f_57[func_429(iParam0, 1) /*11*/];
}

void func_652(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12994 Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_571(num2, num);
	
		if (bParam1)
			func_571(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_571(num3, num);
	}

	return;
}

BOOL func_653(Hash hParam0) // Position - 0x12A80 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_654(int iParam0) // Position - 0x12AC3 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_717();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_655(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x12AE9 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_656(Hash hParam0, int iParam1, var uParam2) // Position - 0x12B2D Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_657(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12B3E Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_429(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_416(524288))
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

int func_658(Hash hParam0) // Position - 0x12BA9 Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_659(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12BF4 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_258() == -1)
		func_718(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_719(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_660(BOOL bParam0, eStackSize essParam1) // Position - 0x12C6A Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_258() == -1)
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

Hash func_661(eStackSize essParam0) // Position - 0x12CE7 Hash - 0xB8EC44B7 ^0xE877E9C4
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

void func_662(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x1321C Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_720(&(Global_1946054.f_1378), essParam0);
	func_721(2, essParam0, 6);

	if (bParam1)
		func_663(false, true);

	return;
}

void func_663(BOOL bParam0, BOOL bParam1) // Position - 0x13244 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_722(0);

	if (bParam0)
	{
		func_414(8);
		func_414(512);
	}
	else
	{
		func_414(8);
		func_414(16);
	}

	return;
}

char* func_664(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13277 Hash - 0xC24B5846 ^0x32EB0FC4
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

float func_665() // Position - 0x13320 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_723())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_724(2);

	if (Global_1347477.f_119)
		return func_724(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_725();
	num3 = func_726();
	num4 = func_727();
	num5 = func_728();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_729());
	num8 = func_724(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_730(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_731(3, num9, num9 > 100f);
	return func_732(num8, -100f, 100f);
}

float func_666() // Position - 0x13449 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_723())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_724(1);

	if (Global_1347477.f_119)
		return func_724(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_725();
	num3 = func_726();
	num4 = func_727();
	num5 = func_728();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_729());
	num8 = func_724(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_730(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_731(2, num9, num9 > 100f);
	return func_732(num8, -100f, 100f);
}

float func_667() // Position - 0x13572 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_723())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_724(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_733())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_734())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_724(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_725();
	num3 = func_726();
	num4 = func_727();
	num5 = func_728();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_729());
	num8 = func_724(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_730(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_731(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_724(0);

	return func_732(num8, -100f, 100f);
}

int func_668(int iParam0) // Position - 0x13719 Hash - 0x6EC15CF9 ^0xE613EBE0
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

void func_669(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1379A Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_735(eptParam1))
		{
			func_736(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_737(pedParam0, 0, true);
	
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
			func_738(pedParam0, false);
			flag = true;
		}
	
		func_739(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_670(eStackSize essParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1387B Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_446(essParam0))
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
					if (func_740(Global_1835011[4 /*74*/].f_1, true))
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
					if (func_741(num, 9, 11))
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
					if (func_740(Global_1347702[63 /*49*/].f_15, true) || func_311(Global_1347702[63 /*49*/].f_15))
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
					if (func_741(num, 9, 12))
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
					if (!func_740(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_266(18, 134217728, true))
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
					if (func_741(num, 9, 11))
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
					if (func_740(Global_1347702[134 /*49*/].f_15, true) || func_311(Global_1347702[134 /*49*/].f_15))
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
					if (func_740(Global_1835011[38 /*74*/].f_1, true))
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
					if (func_741(num, 9, 11))
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
					if (func_742(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_740(Global_1347702[1 /*49*/].f_15, true))
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

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_259(essParam0)))
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

	if (!func_606(essParam0, num2))
		num2 = Global_40.f_4942[essParam0 /*60*/].f_3;

	return num2;
}

BOOL func_671(int iParam0) // Position - 0x14664 Hash - 0x5000025C ^0x5000025C
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

BOOL func_672(eStackSize essParam0, BOOL bParam1) // Position - 0x14691 Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_446(essParam0))
		return false;

	if (!bParam1)
		if (func_115(essParam0) || func_480(essParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[essParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[essParam0 /*1157*/].f_1, Global_1360165[essParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

struct<7> func_673(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0x1471A Hash - 0xDA7D22BD ^0xF82EFD7F
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

BOOL func_674(eStackSize essParam0, int iParam1) // Position - 0x1477D Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_446(essParam0))
		return false;

	func_743(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_65[num], offset);
}

BOOL func_675(int iParam0) // Position - 0x147B3 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

Hash func_676(int iParam0, eStackSize essParam1) // Position - 0x147C6 Hash - 0xE1D12727 ^0x6E706E61
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
			num = func_744(296923297, essParam1);
			return func_745(num);
	
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
			num = func_744(1237718549, essParam1);
			return func_745(num);
	
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

BOOL func_677(Ped pedParam0, Hash hParam1) // Position - 0x14C68 Hash - 0xA54F3032 ^0x7C9A9214
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

BOOL func_678(Ped pedParam0, Hash hParam1) // Position - 0x14CB9 Hash - 0xA54F3032 ^0x7C9A9214
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_599(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_679(Ped pedParam0) // Position - 0x14D2B Hash - 0x446F1BDD ^0x270221F5
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_680(Player plParam0) // Position - 0x14D49 Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_746(plParam0, false))
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

void func_681(eStackSize essParam0) // Position - 0x14D95 Hash - 0xB1E2E498 ^0xC7EBD371
{
	Player player;

	if (!func_446(essParam0))
		return;

	if (func_700(essParam0, false) == 0)
		return;

	player = func_522(essParam0);
	func_680(player);
	func_638(essParam0, 8192, true);
	return;
}

void func_682(Player plParam0) // Position - 0x14DD0 Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_746(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 0, false);
	return;
}

void func_683(eStackSize essParam0) // Position - 0x14DFD Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Player player;

	if (!func_446(essParam0))
		return;

	if (func_700(essParam0, false) == 0)
		return;

	player = func_522(essParam0);
	func_682(player);
	func_638(essParam0, 8192, false);
	return;
}

void func_684(Player plParam0) // Position - 0x14E38 Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_746(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, false);
	return;
}

void func_685(Ped pedParam0) // Position - 0x14E6E Hash - 0x6EDA2DDB ^0x823A87C9
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

void func_686(eStackSize essParam0) // Position - 0x14EED Hash - 0xB1E2E498 ^0x545B1681
{
	Player player;

	if (!func_446(essParam0))
		return;

	if (func_700(essParam0, false) == 0)
		return;

	player = func_522(essParam0);
	func_684(player);
	func_638(essParam0, 16384, true);
	return;
}

void func_687(Player plParam0) // Position - 0x14F28 Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_746(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, true);
	return;
}

void func_688(eStackSize essParam0) // Position - 0x14F5C Hash - 0x28CD0E89 ^0x67E48CA5
{
	Player player;

	if (!func_446(essParam0))
		return;

	if (func_700(essParam0, false) == 0)
		return;

	player = func_522(essParam0);
	func_687(player);
	func_638(essParam0, 16384, false);
	return;
}

char* func_689(Hash hParam0) // Position - 0x14F97 Hash - 0xE6862179 ^0xC41F105A
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

Hash func_690(Hash hParam0, int iParam1) // Position - 0x16047 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_393(hParam0, 0))
		return 0;

	num = func_559(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_504(hParam0, 1399091007))
	{
		func_747(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_691(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x160C1 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_438(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_692(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x160E8 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_693(int iParam0) // Position - 0x16123 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_694(Hash hParam0, BOOL bParam1) // Position - 0x16144 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_748(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_749(&unk, func_560(false));

	if (!func_750(&unk, &num, &num2, false))
		return 0;

	func_693(num);
	return num2;
}

BOOL func_695(Hash hParam0) // Position - 0x161A2 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

char* func_696(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x161B0 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Hash func_697(int iParam0) // Position - 0x161C4 Hash - 0xBA965109 ^0xCB1D208B
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

void func_698(eStackSize essParam0, Ped pedParam1) // Position - 0x163A0 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_751(pedParam1);

	return;
}

float func_699(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x163BA Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_232(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_700(eStackSize essParam0, BOOL bParam1) // Position - 0x16411 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_446(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_752(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_701(eStackSize essParam0) // Position - 0x16556 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_522(essParam0);

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

PersChar func_702(eStackSize essParam0, BOOL bParam1) // Position - 0x165CC Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_446(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_753(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_703(eStackSize essParam0) // Position - 0x16618 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_446(essParam0))
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

void func_704(eStackSize essParam0, int iParam1) // Position - 0x1666B Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_446(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

Hash func_705(int iParam0, int iParam1) // Position - 0x1668F Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_706(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x187DD Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_754(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_566(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_707(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_438(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_707(BOOL bParam0) // Position - 0x1886D Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_258() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_438(bParam0));
}

int func_708(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1888B Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_755(hParam0))
		return 0;

	if (!func_707(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_709(Hash hParam0, int iParam1) // Position - 0x188C6 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_756(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

BOOL func_710(int iParam0, int iParam1) // Position - 0x1890E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_711(int iParam0) // Position - 0x1891D Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_712(int iParam0) // Position - 0x18930 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_713(var uParam0, int iParam1) // Position - 0x1895A Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_714(var uParam0, int iParam1, int iParam2) // Position - 0x1896B Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_715(int iParam0, int iParam1) // Position - 0x1897E Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_716(int iParam0, int iParam1) // Position - 0x1898F Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

int func_717() // Position - 0x189A2 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_718(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x189B0 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_719(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x18A0B Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_720(Hash hParam0, eStackSize essParam1) // Position - 0x18A75 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_258() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_718(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_719(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_721(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x18B10 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_258() == -1)
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

void func_722(int iParam0) // Position - 0x18B98 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_723() // Position - 0x18BA9 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_724(int iParam0) // Position - 0x18BC5 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_725() // Position - 0x18BD7 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_757(13);
	num2 = func_758(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_726() // Position - 0x18C1A Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_727() // Position - 0x18C35 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_759())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_728() // Position - 0x18C54 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_729() // Position - 0x18C96 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_730(int iParam0, int iParam1, BOOL bParam2) // Position - 0x18CA4 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_664(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_731(int iParam0, float fParam1, BOOL bParam2) // Position - 0x18CF0 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_664(iParam0, 2, false, false);
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

float func_732(float fParam0, float fParam1, float fParam2) // Position - 0x18E36 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_733() // Position - 0x18E5D Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_757(12) <= -99f;
}

BOOL func_734() // Position - 0x18E71 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_757(12) >= 99f;
}

BOOL func_735(ePedType eptParam0) // Position - 0x18E85 Hash - 0x5000025C ^0x5000025C
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

void func_736(Ped pedParam0, Hash hParam1) // Position - 0x192D8 Hash - 0xEA1C858E ^0xD5624C9A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_599(pedParam0, hParam1))
		{
			if (func_677(pedParam0, hParam1))
			{
				if (func_678(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_679(pedParam0);
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

void func_737(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x19382 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_738(Ped pedParam0, BOOL bParam1) // Position - 0x193B2 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_739(Ped pedParam0, int iParam1) // Position - 0x193F7 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_740(int iParam0, BOOL bParam1) // Position - 0x1941E Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_495(iParam0))
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

BOOL func_741(int iParam0, int iParam1, int iParam2) // Position - 0x1944F Hash - 0xD8381BE7 ^0xD8381BE7
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

BOOL func_742(int iParam0, BOOL bParam1) // Position - 0x194F8 Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_760(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

int func_743(int iParam0, var uParam1, var uParam2) // Position - 0x19537 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_761(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_744(int iParam0, eStackSize essParam1) // Position - 0x19559 Hash - 0x2641680 ^0x6B70222B
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
		if (func_606(essParam1, num))
			num2 = num;

	return num2;
}

int func_745(int iParam0) // Position - 0x19630 Hash - 0xDEAE5330 ^0x7DE1135D
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

BOOL func_746(Ped pedParam0, BOOL bParam1) // Position - 0x196A7 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_747(Hash hParam0, var uParam1, var uParam2) // Position - 0x196D4 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_748(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x198E0 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_749(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x199B2 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_750(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x199CD Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_438(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

void func_751(Ped pedParam0) // Position - 0x199F2 Hash - 0xE7050FE7 ^0x7AB4FF3C
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

Hash func_752(eStackSize essParam0) // Position - 0x19A5A Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_446(essParam0))
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

	if (!func_446(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_753(eStackSize essParam0) // Position - 0x19B3B Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_446(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_700(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

BOOL func_754(Hash hParam0) // Position - 0x19BD7 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_755(Hash hParam0) // Position - 0x19BED Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_756(int iParam0, int iParam1) // Position - 0x19BFB Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

float func_757(int iParam0) // Position - 0x19C11 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_758(float fParam0) // Position - 0x19C25 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

BOOL func_759() // Position - 0x19C40 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_760(int iParam0) // Position - 0x19C51 Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_762(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

int func_761(int iParam0, int iParam1) // Position - 0x19C75 Hash - 0xB7443904 ^0xB7443904
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

int func_762(int iParam0, var uParam1, var uParam2) // Position - 0x1A009 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_763(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_763(int iParam0, int iParam1) // Position - 0x1A02B Hash - 0x99A93628 ^0x27AE8C83
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
