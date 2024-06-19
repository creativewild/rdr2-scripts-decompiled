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
	Player plLocal_14 = 0;
	Player plLocal_15 = 0;
	Ped pedLocal_16 = 0;
	Object obLocal_17 = 0;
	Object obLocal_18 = 0;
	Volume volLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	BOOL bLocal_32 = 0;
	BOOL bLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	var uLocal_37 = 24;
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
	AnimScene ansLocal_135 = 0;
	char* sLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	float fLocal_140 = 0f;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144 = 0;
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
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 60;
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
	var uLocal_181 = 1;
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
	var uLocal_194 = 11;
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
	var uLocal_327 = 1097859072;
	var uLocal_328 = 1101004800;
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
	var uLocal_355 = 4;
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
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 24;
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
	var uLocal_492 = 0;
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
	var uLocal_525 = 1084227584;
	var uLocal_526 = 5;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 5;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 5;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 5;
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
	var uLocal_585 = 5;
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
	var uLocal_601 = 5;
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
	var uLocal_620 = -1;
	var uLocal_621 = 0;
	var uLocal_622 = -1;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = -1;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 1073741824;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 1;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 1106247680;
	var uLocal_646 = 1067450368;
	var uLocal_647 = 0;
	var uLocal_648 = 1092616192;
	var uLocal_649 = 1112014848;
	var uLocal_650 = 1106247680;
	var uLocal_651 = 1101529088;
	var uLocal_652 = 1101004800;
	var uLocal_653 = 1084227584;
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
	var uLocal_680 = 1;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 570;
	var uLocal_684 = 1065353216;
	var uLocal_685 = -1082130432;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 3;
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
	var uLocal_702 = -1;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 2;
	var uLocal_707 = 1;
	var uLocal_708 = 1;
	var uLocal_709 = 1;
	var uLocal_710 = 0;
	var uLocal_711 = 1;
	var uLocal_712 = 2;
	var uLocal_713 = 2;
	var uLocal_714 = 3;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 3;
	var uLocal_718 = 1;
	var uLocal_719 = 3;
	var uLocal_720 = 3;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = -589165916;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 1;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
	var uScriptParam_96 = 0;
	var uScriptParam_97 = 0;
	var uScriptParam_98 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x625F2701 ^0x625F2701
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_21 = { 1861.0359f, -1829.2471f, 42.2005f };
	fLocal_24 = 126.18f;
	uLocal_25 = { 1870.9325f, -1843.0376f, 41.5359f };
	uLocal_28 = { 1868.2831f, -1846.9951f, 41.5664f };
	fLocal_31 = 252.5205f;
	fLocal_140 = 10f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		TASK::CLEAR_PED_TASKS(uScriptParam_0.f_1, true, false);
		func_1(&uScriptParam_0, &uLocal_146, false);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2(&uScriptParam_0, &uLocal_146))
	{
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x98 Hash - 0x8B448C01 ^0x1AB2F916
{
	func_3(uParam0, sParam1);

	if (!bParam2)
		func_4(*uParam0, -2147483642);
	else
		func_5(*uParam0, -2147483648, false, 12);

	if (func_6(uParam0->f_1, 0))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 389, false);

	func_7(*uParam0, 51, true);

	if (func_8(*uParam0))
	{
		func_9(*uParam0, false, false, true, -1082130432, true, true, false, false, false, false);
		Global_1360165[*uParam0 /*1157*/].f_69 = 234527101;
	}

	if (!bParam2)
		if (func_10(uParam0->f_10))
			func_11(uParam0->f_10, false, 2);

	if (func_12(uParam0->f_25))
		func_13(&(uParam0->f_25), true, true);

	if (func_12(uParam0->f_26))
		func_13(&(uParam0->f_26), true, true);

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(uParam0->f_50)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_50)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_50));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
		func_14(&(sParam1->f_35));

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_18))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_18);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_19, false);
		func_15(uParam0->f_18);
		VOLUME::DELETE_VOLUME(uParam0->f_18);
	}

	if (func_16(531))
		func_17(531);

	if (func_18(sParam1->f_471))
		Global_1391438.f_594 = sParam1->f_471;

	if (sParam1->f_472 != -1)
		func_19(*uParam0, sParam1->f_472);

	Global_40.f_6563.f_274[uParam0->f_13 /*20*/].f_12 = 0;

	if (!bParam2)
		if (uParam0->f_78.f_15)
			func_20(&(Global_1391438.f_493));
		else if (Global_1391438.f_7[0 /*99*/].f_9 == uParam0->f_9)
			func_20(&Global_1391438.f_7[0 /*99*/]);
		else
			func_20(&Global_1391438.f_7[1 /*99*/]);
	else if (Global_1391438.f_7[0 /*99*/].f_9 == uParam0->f_9)
		Global_1391438.f_7[0 /*99*/].f_7 = 1;
	else
		Global_1391438.f_7[1 /*99*/].f_7 = 1;

	return;
}

BOOL func_2(var uParam0, const char* sParam1) // Position - 0x28E Hash - 0xCFB2F30 ^0x8C942E46
{
	int i;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num;

	if (uParam0->f_27 < 4)
	{
		flag = uParam0->f_27 > 0;
	
		if (func_21(uParam0, &flag2, flag, true, false, true))
		{
			if (func_22(uParam0, sParam1) || func_23(uParam0))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
				func_1(uParam0, sParam1, flag2);
				return true;
			}
		}
	}

	if (uParam0->f_27 > 0)
		func_24(uParam0, sParam1);

	switch (uParam0->f_27)
	{
		case 0:
			if (func_21(uParam0, &flag3, false, true, false, true))
			{
				func_1(uParam0, sParam1, flag3);
				return true;
			}
		
			if (func_25() == func_26())
				uParam0->f_27 = 1;
			break;
	
		case 1:
			if (func_27())
				Global_1391438.f_311[uParam0->f_12] = 1;
		
			if (func_28(&(uParam0->f_31), 16))
			{
				uParam0->f_27 = 7;
				return true;
			}
		
			if (func_29(uParam0, sParam1) && func_30(uParam0, sParam1))
			{
				func_31(uParam0, sParam1);
				uParam0->f_27 = 2;
			}
			break;
	
		case 2:
			if (func_32(uParam0))
			{
				Global_1391438.f_311[uParam0->f_12] = 0;
				Global_1360165[*uParam0 /*1157*/].f_69 = uParam0->f_8;
				func_33(*uParam0, false, false, false);
			
				if (!func_34(531))
					func_35(531, false);
			
				uParam0->f_27 = 3;
			}
			break;
	
		case 3:
			if (!func_28(&(uParam0->f_31), 2))
			{
				if (func_28(&(uParam0->f_31), 262144))
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
					{
						if (func_36(uParam0))
						{
							func_37(&(uParam0->f_31), 2, true);
							func_37(&(uParam0->f_31), 262144, false);
							func_38(&(uParam0->f_75));
						}
					}
					else
					{
						func_37(&(uParam0->f_31), 2, true);
					}
				}
			}
			else if (func_39(&(uParam0->f_75)) && func_40(&(uParam0->f_75)) > (float)sParam1->f_16)
			{
				if (sParam1->f_16 < 600)
					sParam1->f_16 = sParam1->f_16 * 2;
				else
					sParam1->f_16 = 600;
			
				func_37(&(uParam0->f_31), 2, false);
			}
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
				if (uParam0->f_9 == joaat("HAI_HOME_ROBBERY_01"))
					if (func_42(func_41(i), Global_36, true) < 50f)
						func_43(&(sParam1->f_35), &(sParam1->f_17), true, true);
				else
					func_43(&(sParam1->f_35), &(sParam1->f_17), false, true);
		
			if (func_44(uParam0, sParam1))
			{
				func_45(16384);
				Global_1360165[*uParam0 /*1157*/].f_69 = 234527101;
				uParam0->f_27 = 4;
			}
			else if (!func_46(uParam0->f_25, true))
			{
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 1) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_1, -1))
					uParam0->f_27 = 2;
			}
			break;
	
		case 4:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
		
			if (func_28(&(uParam0->f_31), 16384) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
			{
				Global_1391438.f_209 = { *uParam0 };
				func_48(&(Global_1391438.f_5), 64, true);
			}
		
			if (func_49(uParam0->f_10))
				func_50(uParam0->f_10);
		
			if (!func_51(uParam0->f_10))
			{
				func_52(uParam0->f_10, true, false);
				func_53(&Global_1935630, 256);
			}
		
			if (!func_54(uParam0, sParam1))
				return false;
		
			if (func_55())
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
				{
					Global_1391438.f_209 = { *uParam0 };
					func_48(&(Global_1391438.f_5), 64, true);
				}
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sParam1->f_35.f_156))
				{
					num = func_56(uParam0->f_8);
				
					if (num != -1)
						func_57(num, sParam1->f_35.f_156);
				
					if (!_IS_NULL_VECTOR(sParam1->f_375))
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sParam1->f_35.f_156, sParam1->f_375, 0f, 0f, sParam1->f_378, 2);
				}
			
				if (!_IS_NULL_VECTOR(uParam0->f_21) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_2, -1))
					func_59(uParam0->f_2, uParam0->f_21, uParam0->f_24, 2, 1073741824);
			
				func_60(&(sParam1->f_473), uParam0->f_1);
				func_61(uParam0, sParam1);
				uParam0->f_27 = 5;
			}
			break;
	
		case 5:
			if (func_61(uParam0, sParam1))
			{
				if (func_28(&(uParam0->f_31), 16384))
				{
					Global_1360165[*uParam0 /*1157*/].f_69 = 234527101;
				
					for (i = 0; i < 27; i = i + 1)
					{
						if (func_63(&(uParam0->f_3), func_62(i)))
							if (func_8(i))
								func_9(i, false, false, false, -1082130432, true, true, false, false, false, false);
					}
				
					func_64(16384);
					uParam0->f_27 = 7;
				}
				else
				{
					for (i = 0; i < 27; i = i + 1)
					{
						if (func_63(&(uParam0->f_3), func_62(i)))
						{
							if (uParam0->f_9 != joaat("HAI_FIVE_FINGER_FILLET_01") && uParam0->f_9 != joaat("HAI_FIVE_FINGER_FILLET_02") && uParam0->f_9 != joaat("HAI_DOMINOES_01"))
								func_65(i, false);
						
							if (func_8(i))
								func_9(i, false, false, false, -1082130432, true, true, false, false, false, false);
						}
					}
				
					Global_1360165[*uParam0 /*1157*/].f_69 = 234527101;
					uParam0->f_27 = 7;
				}
			}
		
			PED::SET_IK_TARGET(uParam0->f_1, 1, Global_35, 21030, 0f, 0f, 0f, 8, -1, -1);
			break;
	
		case 7:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
		
			if (func_66(uParam0, sParam1))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
				{
					func_67("Player accepted invite for ", 1, 1);
					func_1(uParam0, sParam1, false);
					func_48(&(Global_1391438.f_5), 128, true);
					return true;
				}
				else
				{
					Global_1391438.f_209 = { *uParam0 };
					func_48(&(Global_1391438.f_5), 64, true);
				}
			}
			break;
	}

	return false;
}

void func_3(var uParam0, var uParam1) // Position - 0x857 Hash - 0x77D4DE17 ^0x1ADE8828
{
	if (func_8(3))
		func_9(3, false, 0, true, -1082130432, true, true, false, false, false, false);

	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_17);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_68());
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_69());

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_135))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_135);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_19))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_19);
		VOLUME::DELETE_VOLUME(volLocal_19);
	}

	func_70(plLocal_14, *uParam0, true, 0, false);
	return;
}

void func_4(int iParam0, int iParam1) // Position - 0x8C6 Hash - 0xC51AA19 ^0x73186BF3
{
	if (!func_71(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_140 = Global_1360165[iParam0 /*1157*/].f_140 - Global_1360165[iParam0 /*1157*/].f_140 && iParam1;
	Global_1360165[iParam0 /*1157*/].f_141 = Global_1360165[iParam0 /*1157*/].f_141 - Global_1360165[iParam0 /*1157*/].f_141 && iParam1;
	return;
}

int func_5(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x925 Hash - 0xC4851E36 ^0xA22D3B6E
{
	if (!func_71(iParam0))
		return 0;

	if (!bParam2)
		if (func_72(iParam0, iParam1, false))
			return 0;

	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 = Global_1360165[iParam0 /*1157*/].f_140 || iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 = Global_1360165[iParam0 /*1157*/].f_141 || iParam1;
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		func_73(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, false);
	}

	return 1;
}

BOOL func_6(Ped pedParam0, int iParam1) // Position - 0x9B3 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_74(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_74(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_74(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_74(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_74(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_74(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_74(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_74(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

void func_7(int iParam0, int iParam1, BOOL bParam2) // Position - 0xAB2 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_75(iParam0))
			return;

	func_76(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_8(int iParam0) // Position - 0xAEC Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_71(iParam0))
		return false;

	if (!func_77(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_9(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0xB20 Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_71(iParam0))
		return;

	if (func_77(iParam0))
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_78(iParam0, 56, true);
		func_79(&(Global_1359489.f_40), true);
	}

	func_80(iParam0, false);
	func_81(iParam0, 4, false);
	func_82(iParam0);
	func_83(iParam0);
	func_7(iParam0, 37, true);
	flag = func_6(Global_1360165[iParam0 /*1157*/], 0);
	persChar = func_84(iParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);

	if (func_85(iParam0, 64, true))
		func_7(iParam0, 64, true);

	if (bParam3)
	{
		func_7(iParam0, 33, true);
		func_7(iParam0, 34, true);
		func_86(iParam0, 1056964608, -1, 1061158912);
		func_33(iParam0, true, true, false);
	
		if (bParam6)
			func_78(iParam0, 30, true);
	
		if (bParam7)
		{
			func_78(iParam0, 35, true);
		
			if (bParam8)
				func_78(iParam0, 62, true);
		}
	
		if (flag)
		{
			func_87(iParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_7(iParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
	
		func_78(iParam0, 33, true);
		func_33(iParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = iParam4;
			func_79(&(Global_1360165[iParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_88(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_78(iParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			func_89(iParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);

	if (func_85(iParam0, 45, true))
		func_7(iParam0, 45, true);

	func_90(iParam0, 16, true);
	func_7(iParam0, 44, true);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_6(func_91(iParam0), 0))
			func_70(0, iParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_10(int iParam0) // Position - 0xDD5 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_92(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

void func_11(int iParam0, BOOL bParam1, int iParam2) // Position - 0xE40 Hash - 0x9DD22E7 ^0x9DD22E7
{
	int num;

	if (!func_93(iParam0))
	{
		!bParam1;
		return;
	}

	if (!func_51(iParam0) && !func_10(iParam0))
	{
		!bParam1;
		return;
	}

	func_94(iParam0) == 0;

	if (iParam2 == 2 && !func_51(iParam0))
		iParam2 = -1;

	if (func_92(iParam0) == 3 || func_92(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_94(iParam0)))
	{
		func_96(func_95(iParam0), func_94(iParam0), iParam2);
	
		if (!func_93(Global_1572864.f_8) && !func_97(0, true, false) && !func_98(Global_1935630, 32768))
		{
			num = func_99(iParam0);
		
			if (num != -1)
			{
				func_100(false);
			}
			else if (func_95(iParam0) == 8)
			{
				num = func_101();
			
				if (num != -1)
					func_100(false);
			}
		}
	}

	func_102(iParam0, 0);

	if (func_103(0) == iParam0)
	{
		func_104(true);
		func_105(false);
		func_106(1);
	}

	func_107(iParam0, true);
	func_108(iParam0);
	return;
}

BOOL func_12(int iParam0) // Position - 0xF65 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_13(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFA4 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_12(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_109(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_110(num);
	*iParam0 = 0;
	return;
}

void func_14(var uParam0) // Position - 0xFF8 Hash - 0x530C41A5 ^0xA4657900
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);

	return;
}

void func_15(Volume volParam0) // Position - 0x1013 Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_111(volumeCoords, 0);
	return;
}

BOOL func_16(int iParam0) // Position - 0x103B Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_112(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_17(int iParam0) // Position - 0x105F Hash - 0xAD18F8AE ^0xAD18F8AE
{
	int num;
	int num2;

	func_112(iParam0, &num, &num2);
	func_113(num, num2);
	return;
}

BOOL func_18(int iParam0) // Position - 0x1079 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

void func_19(int iParam0, Hash hParam1) // Position - 0x1085 Hash - 0xA2CBCCA2 ^0xA2CBCCA2
{
	int num;
	BOOL flag;

	if (!func_75(iParam0))
		return;

	if (!func_114(hParam1))
		return;

	num = -1;
	flag = false;

	if (func_115(iParam0, hParam1, &num, &flag))
	{
		if (flag)
			func_116(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
	
		if (num != -1)
			func_117(iParam0, num);
	}

	return;
}

void func_20(Any* panParam0) // Position - 0x10E1 Hash - 0x487B60C5 ^0x7CA15CD6
{
	var src;

	src.f_9 = -589165916;
	src.f_78.f_11 = 1;
	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 99);
	return;
}

BOOL func_21(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x110A Hash - 0xF273C911 ^0x49B24576
{
	if (Global_1391438.f_1)
		return true;

	uParam0->f_98 = uParam0->f_98 + 1;

	if (uParam0->f_98 < 10)
		return false;

	uParam0->f_98 = 0;

	if (func_97(0, true, true) && !func_51(uParam0->f_10))
		return true;

	if (bParam4)
		if (func_77(*uParam0) && !func_118(*uParam0, Global_1391438.f_206[0], false) && !func_118(*uParam0, Global_1391438.f_206[1], false))
			return true;

	if (func_119() != 1)
		return true;

	if (func_85(*uParam0, 29, true))
		return true;

	if (!func_6(Global_35, 0))
		return true;

	if (bParam2)
		if (!func_6(func_41(*uParam0), 0))
			*uParam1 = 1;

	if (uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_01") || uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_02"))
		if (func_120(1) < 10)
			return true;

	if (func_6(uParam0->f_1, 0) && PED::_GET_IS_PED_IN_DISPUTE_WITH_PED(uParam0->f_1, Global_35))
		return true;

	if (func_121())
		return true;

	if (bParam3)
	{
		if (func_25() != func_26())
			*uParam1 = 1;
	
		if (!_IS_NULL_VECTOR(uParam0->f_14) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_14, true) > 200f)
			*uParam1 = 1;
	}

	if (!func_122(&(uParam0->f_78)) && !uParam0->f_78.f_15 && !func_123(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), true) && !func_123(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), true))
	{
		func_67("Time window expired for ", 0, 1);
		func_67(" - Cancelling launch.", 1, 0);
		*uParam1 = 0;
		return true;
	}

	if (bParam5)
	{
		if (!_IS_NULL_VECTOR(uParam0->f_14))
		{
			if (func_124(uParam0->f_14, 6f, 4, 1))
			{
				func_67("A lock volume now blocks ", 0, 1);
				func_67(" - Cancelling launch.", 1, 0);
				*uParam1 = 0;
				return true;
			}
		}
	}

	if (*uParam1)
		return true;

	return false;
}

int func_22(var uParam0, const char* sParam1) // Position - 0x130F Hash - 0xCB2BDDA ^0xCBAA5BD3
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_135) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_135, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(ansLocal_135, "pblQuickExit"))
		{
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_135, "pblQuickExit") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_135, "pblQuickExit"))
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_135, "pblQuickExit", true);
		}
		else if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_135) > 0.98f)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
			return 1;
		}
	}
	else
	{
		return 1;
	}

	return 0;
}

int func_23(var uParam0) // Position - 0x1385 Hash - 0x7F288D05 ^0x3B7CA92D
{
	if (Global_1391438.f_1)
		return 1;

	if (func_85(*uParam0, 29, true))
		return 1;

	return 0;
}

int func_24(var uParam0, const char* sParam1) // Position - 0x13AC Hash - 0xECE28E69 ^0xC634DF2B
{
	var args;
	var unk25;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && func_42(uParam0->f_1, Global_36, true) < 8f)
	{
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
		args.f_7 = 500;
		args.f_3 = uParam0->f_1;
		args.f_4 = 14283;
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &args);
	}

	if (uParam0->f_27 > 2)
		func_125(uParam0);

	if (uParam0->f_27 == 5)
	{
		func_126(uParam0);
		func_127(ansLocal_135);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_18))
			OBJECT::DELETE_OBJECT(&obLocal_18);
	
		if (!bLocal_32)
		{
			if (func_6(plLocal_15, 0))
			{
				func_128(plLocal_15, joaat("META_OUTFIT_WARM_WEATHER"));
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plLocal_15, uLocal_28, fLocal_31, true, false, true);
				func_129(plLocal_15, joaat("weapon_rifle_boltaction_bill"), 1, false, false, false, false, 1056964608, 1065353216, -1, false, false, false, false);
				WEAPON::_HIDE_PED_WEAPONS(plLocal_15, 2, true);
				TASK::TASK_STAND_STILL(plLocal_15, -1);
				TASK::TASK_LOOK_AT_ENTITY(plLocal_15, uParam0->f_1, -1, 0, 51, 0);
				func_9(3, false, false, false, 120f, true, true, false, false, false, false);
				bLocal_32 = true;
			}
		}
	}

	if (uParam0->f_27 == 5 || uParam0->f_27 == 7)
	{
		if (!bLocal_33)
		{
			if (func_130(&(sParam1->f_35), uParam0->f_1, 0, 0, true, true))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk25, "CHRC1_P1", 24);
				func_131(&uLocal_37, unk25, false, -1, false, false);
				PED::FORCE_PED_MOTION_STATE(uParam0->f_1, joaat("MotionState_Walk"), false, 1, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_1, uLocal_25, 1f, -1, 1f, 8193, 1193033728);
				PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
				bLocal_33 = true;
			}
		}
	
		if (!bLocal_34)
		{
			if (func_130(&(sParam1->f_35), Global_35, 0, 0, true, true))
			{
				func_132(joaat("MotionState_Walk"), 2000, false, 1, true, 0, false, false);
				bLocal_34 = true;
			}
		}
	}

	return 1;
}

int func_25() // Position - 0x159D Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_26() // Position - 0x15AB Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_27() // Position - 0x15BB Hash - 0x340E4DFD ^0xEE72B432
{
	return func_133(512);
}

BOOL func_28(var uParam0, int iParam1) // Position - 0x15CA Hash - 0x1A05E0F5 ^0x1A05E0F5
{
	if (*uParam0 && iParam1 != false)
		return true;

	return false;
}

int func_29(var uParam0, const char* sParam1) // Position - 0x15E1 Hash - 0x7F8DC976 ^0xAA52DAF6
{
	switch (uParam0->f_28)
	{
		case 0:
			uParam0->f_28 = 1;
			break;
	
		case 1:
			if (func_134(uParam0))
			{
				PED::_RESERVE_AMBIENT_PEDS(func_135(uParam0->f_3));
				uParam0->f_6 = 1;
				uParam0->f_28 = 2;
			}
			break;
	
		case 2:
			if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				func_137(*uParam0, func_136());
				uParam0->f_1 = func_138(*uParam0, false, 0, 0, 0, 0, 0, false, 1, true, false, false, 0, 0, false, false, false, true, true, true, false, false, true, false, true);
			
				if (func_6(uParam0->f_1, 0))
				{
					func_78(*uParam0, 51, true);
					uParam0->f_28 = 3;
				}
			}
			break;
	
		case 3:
			func_139(uParam0, sParam1);
			uParam0->f_28 = 4;
			break;
	
		case 4:
			if (func_140(uParam0))
				uParam0->f_28 = 5;
			break;
	
		case 5:
			if (func_141(uParam0, sParam1))
				uParam0->f_28 = 6;
			break;
	
		case 6:
			return 1;
	}

	return 0;
}

int func_30(var uParam0, const char* sParam1) // Position - 0x16D6 Hash - 0x7AD84FB0 ^0xB37876CF
{
	func_37(&(uParam0->f_31), 16384, true);
	return 1;
}

void func_31(var uParam0, const char* sParam1) // Position - 0x16EB Hash - 0x42ABD254 ^0x9C3D1C5D
{
	Ped ped;

	ped = func_41(*uParam0);

	if (func_6(ped, 0))
	{
		func_143(&sParam1->f_534[0 /*17*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(uParam0->f_8), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
		func_144(&(sParam1->f_473), &(sParam1->f_534), 0, Global_1391438.f_308[uParam0->f_12], 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		func_145(&(sParam1->f_473), 15);
		sParam1->f_552.f_3 = Global_35;
		sParam1->f_552.f_8 = 4;
		sParam1->f_552.f_19 = 4;
		sParam1->f_552.f_21 = 4;
		sParam1->f_552.f_17 = 4;
		sParam1->f_552.f_18 = 4;
		sParam1->f_552.f_7 = 0;
		PED::SET_PED_CONFIG_FLAG(ped, 259, true);
	
		if (sParam1->f_472 != -1)
			func_146(*uParam0, sParam1->f_472, 0, 0);
	}

	return;
}

BOOL func_32(var uParam0) // Position - 0x17BA Hash - 0x3430EB46 ^0x22C8B9B4
{
	BOOL flag;
	var entityCoords;
	var taskSequenceId;

	if (!func_6(uParam0->f_1, 0))
		return false;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
		if (!func_147(uParam0))
			return false;

	flag = !_IS_NULL_VECTOR(uParam0->f_21);

	if (flag && !func_148(uParam0->f_21, 1, 0, 4))
	{
		if (!func_6(uParam0->f_2, 0))
		{
			uParam0->f_2 = func_149(*uParam0, true, true, 0, 0, 1, true, true, flag, uParam0->f_21, uParam0->f_21.f_1, uParam0->f_21.f_2, uParam0->f_24, false, false, false, false);
			return false;
		}
		else
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true, false) };
		
			if (!func_150(entityCoords, uParam0->f_21, 1f, false))
			{
				if (!func_151(uParam0->f_2, 1116471296, -1082130432, -1082130432, -1082130432) && !CAM::IS_SPHERE_VISIBLE(uParam0->f_21, 5f))
				{
					func_59(uParam0->f_2, uParam0->f_21, uParam0->f_24, 2, 1073741824);
					return false;
				}
			
				if (!func_152(uParam0->f_2, SCRIPT_TASK_PERFORM_SEQUENCE))
				{
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_21, 1f, -1, 1048576000, 0, uParam0->f_24);
					func_153(0, joaat("world_animal_horse_grazing"), -1, true, 0, -1082130432);
					func_154(uParam0->f_2, &taskSequenceId, 0, 0, true, true);
				}
			}
		}
	}

	if (func_155(&(Global_1391438.f_5), 4096))
		if (!func_156(32768) && CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_IN(500);

	uParam0->f_30 = 0;
	return true;
}

void func_33(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1946 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_75(iParam0))
		return;

	if (bParam1)
	{
		func_7(iParam0, 50, true);
		func_7(iParam0, 48, true);
		func_7(iParam0, 49, true);
		func_7(iParam0, 51, true);
		func_7(iParam0, 52, true);
		func_7(iParam0, 54, true);
		func_7(iParam0, 55, true);
	}
	else
	{
		func_78(iParam0, 50, true);
		func_78(iParam0, 48, true);
		func_78(iParam0, 49, true);
		func_78(iParam0, 51, true);
	
		if (bParam3)
			func_78(iParam0, 54, true);
		else
			func_7(iParam0, 54, true);
	
		if (!bParam2)
		{
			func_78(iParam0, 52, true);
		
			if (bParam3)
				func_78(iParam0, 55, true);
		}
		else
		{
			func_7(iParam0, 52, true);
		
			if (!bParam3)
				func_7(iParam0, 55, true);
		}
	}

	return;
}

BOOL func_34(int iParam0) // Position - 0x1A18 Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_157() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_35(int iParam0, BOOL bParam1) // Position - 0x1A5D Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_112(iParam0, &num, &num2);

	if (!func_158(iParam0, num, num2, bParam1))
		return;

	func_159(num, num2);
	return;
}

BOOL func_36(var uParam0) // Position - 0x1A8A Hash - 0x5C6E3FDC ^0xE3DF1E20
{
	if (!func_6(uParam0->f_1, 0))
		return false;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
	{
		if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(uParam0->f_1, func_160(uParam0)) && !func_28(&(uParam0->f_31), 64) && !STREAMING::_0x99F92061EFE908BA() && !func_98(Global_1935630, 16384) && uParam0->f_6)
		{
			uParam0->f_6 = 0;
			func_37(&(uParam0->f_31), 64, true);
			PED::_GIVE_PED_HASH_COMMAND(uParam0->f_1, func_160(uParam0), 0.5f);
		}
		else if (func_28(&(uParam0->f_31), 64))
		{
			if (!func_152(uParam0->f_1, SCRIPT_TASK_PLAY_ANIM))
			{
				func_37(&(uParam0->f_31), 64, false);
				return true;
			}
		}
	}

	return false;
}

void func_37(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1B48 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*uParam0 = *uParam0 || iParam1;
	else
		*uParam0 = *uParam0 - *uParam0 && iParam1;

	return;
}

void func_38(var uParam0) // Position - 0x1B6E Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_161(uParam0, 0f);
	return;
}

BOOL func_39(var uParam0) // Position - 0x1B7D Hash - 0x5001E582 ^0x5001E582
{
	return func_162(*uParam0, 1);
}

float func_40(var uParam0) // Position - 0x1B8D Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_39(uParam0))
		return uParam0->f_1;

	if (func_163(uParam0))
		return uParam0->f_2;

	return func_164() - uParam0->f_1;
}

Ped func_41(int iParam0) // Position - 0x1BC2 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_75(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

int func_42(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1BFC Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_43(var uParam0, const char* sParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1C24 Hash - 0x96493DD3 ^0x13CAE656
{
	var unk;
	int num;
	var playbackListName;
	int flags;
	BOOL flag;
	int i;
	var string2;

	if (bParam3)
	{
		uParam0->f_223 = uParam0->f_223 + 1;
	
		if (uParam0->f_223 < 10)
			return func_165(uParam0, 256) && !func_165(uParam0, 4194304);
	
		uParam0->f_223 = 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	func_166(uParam0, sParam1);

	if (!func_165(uParam0, 64))
	{
		if (!_IS_NULL_VECTOR(func_167(uParam0)))
		{
			func_168(uParam0, 64);
		}
		else
		{
			unk = { func_169(uParam0) };
		
			if (!_IS_NULL_VECTOR(unk))
				func_170(uParam0, unk);
		}
	
		return false;
	}

	num = func_42(Global_35, func_167(uParam0), true);

	if (func_165(uParam0, 128) || func_165(uParam0, 256))
	{
		if (num >= func_171(uParam0) && !bParam2 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_172();
				uParam0->f_241 = 0;
			}
		
			func_173(uParam0);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
		
			func_174(uParam0);
			func_175(uParam0, 128, true);
			func_175(uParam0, 256, true);
			func_175(uParam0, 4096, true);
			func_175(uParam0, 32768, true);
			func_175(uParam0, 16777216, true);
		}
	}
	else if (num <= func_176(uParam0) || bParam2)
	{
		if (!func_165(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
			{
				func_176(uParam0) >= func_171(uParam0);
				playbackListName = { func_177(uParam0) };
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&playbackListName))
					func_178(uParam0);
			
				playbackListName = { func_177(uParam0) };
				flags = 256;
			
				if (!func_165(uParam0, 1))
					flags = flags | 2048;
			
				uParam0->f_156 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), flags, &playbackListName, false, true);
				func_179(uParam0, 0, false, 0, 0);
				func_168(uParam0, 128);
			}
		}
	}

	if (func_165(uParam0, 128))
	{
		if (func_165(uParam0, 256) && !func_165(uParam0, 4194304))
			return true;
	
		func_180(uParam0);
	
		if (!uParam0->f_241)
		{
			if (func_181())
			{
				func_182(4096);
				uParam0->f_241 = 1;
			}
		}
	
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
		{
			flag = true;
			string2 = { func_183(uParam0) };
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_174[i /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_174[i /*9*/], &string2))
					{
						if (!uParam0->f_174[i /*9*/].f_8)
						{
							uParam0->f_174[i /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_156, &uParam0->f_174[i /*9*/]);
							flag = false;
						}
						else if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_156, &uParam0->f_174[i /*9*/]))
						{
							flag = false;
						}
					}
				}
			}
		
			if (!func_165(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_156, &string2))
				{
					if (!func_165(uParam0, 16777216))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_156, &string2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_156, &string2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_156, &string2))
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_156, &string2);
					
						func_168(uParam0, 16777216);
					}
				
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_156, &string2))
						flag = false;
				}
			}
		
			if (!flag)
				return false;
		
			func_168(uParam0, 256);
			func_175(uParam0, 4194304, true);
			return true;
		}
	}

	return false;
}

BOOL func_44(var uParam0, const char* sParam1) // Position - 0x1FA3 Hash - 0xD1200504 ^0xD038A4CD
{
	int num;
	int num2;
	Entity outEntity;

	if (Global_1359489.f_672)
	{
		Global_1359489.f_672 = 0;
		return true;
	}

	if (func_133(4))
		return false;

	num = func_184(&(uParam0->f_1), &(sParam1->f_473), 3.75f, &(sParam1->f_534), 0f, 3, 1, "", 1, 0, 4, 2, -1082130432);

	if (func_185())
		if (func_12(sParam1->f_534[0 /*17*/].f_6))
			func_186(sParam1->f_534[0 /*17*/].f_6, false, false);

	if (func_187(Global_35, uParam0->f_1, true, true) > sParam1->f_379)
		if (func_12(sParam1->f_534[0 /*17*/].f_6))
			func_186(sParam1->f_534[0 /*17*/].f_6, false, false);

	num2 = num;

	switch (num2)
	{
		case 0:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
			return true;
	
		default:
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity) == uParam0->f_1)
				if (!func_28(&(uParam0->f_31), 2))
					func_37(&(uParam0->f_31), 262144, true);
			break;
	}

	return false;
}

void func_45(int iParam0) // Position - 0x20C7 Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_157())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 || iParam0;
			break;
	}

	return;
}

BOOL func_46(int iParam0, BOOL bParam1) // Position - 0x20F3 Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_12(iParam0))
		return false;

	num = func_109(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[num /*18*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1945188[num /*18*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[num /*18*/].f_3);
}

void func_47(var uParam0, int* piParam1, var uParam2, float fParam3, int iParam4, char* sParam5) // Position - 0x214A Hash - 0x2B5B995F ^0x3C92D0A
{
	int num;
	BOOL isStringNullOrEmpty;
	BOOL flag;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(piParam1->f_21, 0))
		return;

	func_188(piParam1, *uParam0, piParam1->f_56, 0);
	num = iParam4 >= 0f ? iParam4 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false));
	func_190(piParam1, fParam3);
	func_191(uParam0, piParam1, uParam2, num);
	func_192(piParam1);

	if (MISC::IS_BIT_SET(piParam1->f_21, 20))
	{
		isStringNullOrEmpty = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_193(piParam1, uParam2, uParam0, isStringNullOrEmpty, sParam5, num);
	
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			flag = true;
		
			if (!MISC::IS_BIT_SET(*piParam1, 12))
				flag = func_194(piParam1, uParam0);
		
			if (flag && !MISC::IS_BIT_SET(*piParam1, 13))
				func_195(piParam1);
		}
	}

	return;
}

void func_48(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2229 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_49(int iParam0) // Position - 0x224F Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_196(iParam0) == 0;
}

int func_50(int iParam0) // Position - 0x225F Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_49(iParam0))
		return -1;

	if (func_157() != -1)
	{
		num2 = func_197(iParam0);
	
		if (num2 >= 0)
		{
			func_198(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_199(num, true);
			func_198(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_197(iParam0);
	
		if (num2 >= 0)
		{
			func_198(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_93(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_199(i, true);
					func_198(iParam0, true);
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

BOOL func_51(int iParam0) // Position - 0x237B Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_196(iParam0);
	return num == 3 || num == 4;
}

void func_52(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2399 Hash - 0x9F2D2B44 ^0xC32EBA43
{
	int num;
	int num2;

	if (!func_93(iParam0))
		return;

	if (!func_10(iParam0))
		return;

	num = func_95(iParam0);

	if (bParam1)
	{
		if (func_94(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_94(iParam0)))
		{
		}
		else
		{
			if (num == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
				func_201(func_200(iParam0));
		
			if (func_157() != false)
				STATS::STATSTRACKER_DEED_STARTED(func_94(iParam0), 0);
			else
				STATS::STATSTRACKER_DEED_STARTED(func_94(iParam0), Global_265073.f_73815.f_208.f_12);
		}
	}

	func_202(iParam0);

	if (!func_93(func_103(0)))
	{
		func_102(iParam0, 3);
		func_104(bParam2);
	
		if (func_157() == -1)
		{
			if (bParam2 == false)
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		
			func_105(true);
		}
	
		func_203(iParam0, -1);
	
		if (bParam1 && !func_156(2))
			func_204(&Global_0, 1024);
	
		if (func_157() == -1)
		{
			func_205(&(Global_1347343.f_11), 536870912);
			func_206(2);
			Global_1357515 = -1;
		
			if (num == 1)
				func_207(false);
		
			if (num == 1 || num == 8)
				func_208(false);
		}
	
		if (func_157() == -1)
		{
			num2 = func_99(iParam0);
		
			if (num2 != -1)
			{
				num2 = func_101();
			
				switch (num2)
				{
					case 0:
						func_209(0);
						break;
				
					case 1:
						func_209(1);
						break;
				
					case 2:
						func_209(2);
						break;
				
					case 3:
						func_209(3);
						break;
				
					case 4:
						func_209(4);
						break;
				
					case 5:
						func_209(5);
						break;
				
					case 6:
						func_209(5);
						break;
				
					case 7:
						func_209(7);
						break;
				
					case 8:
						func_209(8);
						break;
				}
			}
			else if (num == 1)
			{
				switch (func_200(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_209(11);
						break;
				}
			}
			else if (num == 8)
			{
				switch (func_200(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_209(11);
						break;
				
					default:
						num2 = func_101();
					
						if (num2 != -1)
						{
							switch (num2)
							{
								case 0:
									func_210(0);
									break;
							
								case 1:
									func_210(1);
									break;
							
								case 2:
									func_210(2);
									break;
							
								case 3:
									func_210(3);
									break;
							
								case 4:
									func_210(4);
									break;
							
								case 5:
									func_210(5);
									break;
							
								case 6:
									func_210(5);
									break;
							
								case 7:
									func_210(7);
									break;
							
								case 8:
									func_210(8);
									break;
							
								default:
									break;
							}
						}
						break;
				}
			}
		}
	
		func_106(true);
	}
	else
	{
		func_203(iParam0, -1);
		func_102(iParam0, 4);
	}

	func_107(iParam0, false);
	return;
}

void func_53(int iParam0, int iParam1) // Position - 0x26AC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_54(var uParam0, const char* sParam1) // Position - 0x26BD Hash - 0x93EFA36C ^0x19A449DE
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "CAMCH_CROB2_LI", 24);

	if (!func_39(&uLocal_141))
		func_38(&uLocal_141);

	if (!ENTITY::DOES_ENTITY_EXIST(plLocal_15) && func_40(&uLocal_141) < 2f)
	{
		plLocal_15 = func_138(3, true, 1, 0, 0, 0, 0, false, 1, false, false, true, 0, 0, true, false, false, true, true, true, false, false, true, false, true);
		return false;
	}

	switch (iLocal_145)
	{
		case 0:
			if (func_131(&uLocal_37, unk, false, -1, false, false))
				iLocal_145 = 1;
			break;
	
		case 1:
			if (!func_211(&unk))
			{
				iLocal_145 = 5;
				return true;
			}
			break;
	
		case 5:
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		
			return true;
	}

	return false;
}

BOOL func_55() // Position - 0x2777 Hash - 0xBD01CDB7 ^0x5546DB5B
{
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_152(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_DISMOUNT_ANIMAL))
			TASK::TASK_DISMOUNT_ANIMAL(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0);
	
		return false;
	}

	return true;
}

int func_56(int iParam0) // Position - 0x27AD Hash - 0xE1D6BB0D ^0xE1D6BB0D
{
	switch (iParam0)
	{
		case -2036347356:
		case -1341684320:
			return 2;
	
		case -1567081107:
			return 1;
	
		case -1511391406:
			return 3;
	
		default:
		
	}

	return -1;
}

void func_57(int iParam0, var uParam1) // Position - 0x27E2 Hash - 0x35128648 ^0x5C115A46
{
	Global_1899528.f_61.f_4 = uParam1;
	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x27F4 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_59(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x281E Hash - 0xF46E0F16 ^0xED4BA72A
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(veParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(veParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	veParam0 == func_212(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_213(veParam0))
		if (func_214(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
			PHYSICS::_UNHITCH_HORSE(veParam0);

	if (func_74(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_59(vehiclePedIsIn, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_59(mount, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_74(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(veParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0), false, true);

	if (func_74(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(veParam0, vParam1, fParam4, true, func_74(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(veParam0, vParam1, fParam4, true, func_74(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(veParam0, false);
		}
	}
	else if (func_74(iParam5, 129))
	{
		if (func_74(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veParam0, vParam1, func_74(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(veParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(veParam0, vParam1, fParam4, true, func_74(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_74(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0), pedCrouchMovement, 0, false);
	
		if (func_213(veParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_74(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0) == Global_35 && !func_74(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

void func_60(int* piParam0, Ped pedParam1) // Position - 0x2AA0 Hash - 0xB681DEC4 ^0xA2DFB439
{
	if (MISC::IS_BIT_SET(piParam0->f_21, 20))
		MISC::CLEAR_BIT(&(piParam0->f_21), 20);

	if (MISC::IS_BIT_SET(piParam0->f_21, 0))
		MISC::CLEAR_BIT(&(piParam0->f_21), 0);

	MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
	func_215(piParam0, &pedParam1, 0);
	func_216(&pedParam1);
	func_217(piParam0, false);

	if (MISC::IS_BIT_SET(piParam0->f_21, 3))
		func_218(piParam0, false);

	func_219(piParam0);
	func_220(piParam0, pedParam1);
	func_221(piParam0);
	func_222(piParam0);
	return;
}

BOOL func_61(var uParam0, const char* sParam1) // Position - 0x2B23 Hash - 0xA5A65933 ^0xA353F600
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
		return func_223(sParam1);
	else
		return true;

	return false;
}

int func_62(int iParam0) // Position - 0x2B48 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

BOOL func_63(var uParam0, int iParam1) // Position - 0x2B57 Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_64(int iParam0) // Position - 0x2B67 Hash - 0xE0643F2A ^0xE0643F2A
{
	switch (func_157())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 - Global_1357549.f_1494 && iParam0;
			break;
	}

	return;
}

int func_65(int iParam0, BOOL bParam1) // Position - 0x2B9B Hash - 0x710FE6A ^0xFD7EC211
{
	int i;
	Ped playerPed;

	if (!func_71(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
		return 0;

	if (func_224(iParam0, false))
	{
		func_225(iParam0, true);
		return 1;
	}

	if (!func_226())
		return 0;

	if (bParam1)
		func_227(iParam0, false, "Adding to Group");

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489[i] == -1)
		{
			Global_1359489[i] = iParam0;
			break;
		}
	}

	func_225(iParam0, true);
	Global_1359489.f_15 = func_228(true);
	func_78(iParam0, 32, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_companion_group"));
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], BF_0xD36BCE94, true);
	PED::_SET_PED_COMBAT_BEHAVIOUR(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);

	if (COMPANION::_GET_COMPANION_ACTIVITY(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_41(iParam0), COMPANION::_GET_COMPANION_ACTIVITY(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_41(iParam0), Global_1391438.f_414.f_37);
	}

	PED::_0x89E59DBD15E21177(func_229(), 0);
	func_230(iParam0);
	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	playerPed.f_12 = 3;
	playerPed.f_3 = Global_1360165[iParam0 /*1157*/];
	playerPed.f_7 = func_25();
	playerPed.f_8 = 0;
	playerPed.f_11 = 10;
	playerPed.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_CREATE_AI_MEMORY(&playerPed, 17);
	return 1;
}

BOOL func_66(var uParam0, const char* sParam1) // Position - 0x2D27 Hash - 0x6565581A ^0x6565581A
{
	return true;
}

void func_67(char* sParam0, int iParam1, int iParam2) // Position - 0x2D30 Hash - 0xA614141D ^0xA614141D
{
	return;
}

Hash func_68() // Position - 0x2D38 Hash - 0x9F572D68 ^0x8056FD2C
{
	return joaat("p_barrel010x");
}

Hash func_69() // Position - 0x2D45 Hash - 0x11DC3931 ^0xB2383863
{
	return WEAPON::_GET_WEAPONTYPE_MODEL(joaat("weapon_melee_knife"));
}

void func_70(Player plParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x2D56 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_75(iParam1))
		return;

	player = func_91(iParam1);

	if (func_231(iParam1))
		if (!func_232(iParam1))
			return;

	func_7(iParam1, 39, true);
	func_233(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_233(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_233(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_78(iParam1, 43, true);
		}
	
		if (bParam4)
			func_234(iParam1, false, true, true, true);
	}

	return;
}

BOOL func_71(int iParam0) // Position - 0x2DF8 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_72(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2E17 Hash - 0x9ED60A40 ^0xCA8A0302
{
	int num;

	if (!func_75(iParam0))
		return false;

	if (!func_235(iParam0))
		return false;

	if (func_236(iParam0, -2147483648))
		return true;

	if (func_236(iParam0, 1073741824))
		return true;

	num = func_237(iParam1);

	if (num < Global_1360165[iParam0 /*1157*/].f_22)
		return true;

	if (num == Global_1360165[iParam0 /*1157*/].f_22)
	{
		if (bParam2)
			return true;
	
		if (!func_236(iParam0, iParam1))
			return true;
	}

	return false;
}

void func_73(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x2EA5 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_238(*uParam0);
	i = func_239(*uParam0);
	num2 = func_240(*uParam0);
	j = func_241(*uParam0);
	k = func_242(*uParam0);
	l = func_243(*uParam0);

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

	for (m = func_244(i, num); num2 > m; m = func_244(i, num))
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

	func_245(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x302D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_75(int iParam0) // Position - 0x303C Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_76(int iParam0, var uParam1, var uParam2) // Position - 0x3048 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_77(int iParam0) // Position - 0x3065 Hash - 0xDA629583 ^0xDA629583
{
	return func_246(iParam0, 16, true);
}

void func_78(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3076 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_75(iParam0))
			return;

	func_76(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_79(var uParam0, BOOL bParam1) // Position - 0x30B0 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_39(uParam0))
		func_38(uParam0);

	return;
}

void func_80(int iParam0, BOOL bParam1) // Position - 0x30D0 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_75(iParam0))
		return;

	if (bParam1)
		if (func_247(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_81(iParam0, 1, false);

	func_81(iParam0, 16, bParam1);
	return;
}

void func_81(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3112 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_75(iParam0))
		return;

	func_248(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_82(int iParam0) // Position - 0x313A Hash - 0x7895582D ^0x7895582D
{
	func_81(iParam0, 8, false);
	return;
}

void func_83(int iParam0) // Position - 0x314B Hash - 0x8577BCFD ^0x8577BCFD
{
	func_78(iParam0, 36, true);
	return;
}

PersChar func_84(int iParam0, BOOL bParam1) // Position - 0x315C Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_71(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_249(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

BOOL func_85(int iParam0, int iParam1, BOOL bParam2) // Position - 0x319B Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_75(iParam0))
			return false;

	func_76(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x31D6 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_71(iParam0))
	{
		ped = func_41(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_250(iParam0);
		}
	}

	if (func_85(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_41(iParam0), 137, true);

	return;
}

void func_87(int iParam0, BOOL bParam1) // Position - 0x3228 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_75(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_41(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_41(iParam0), 204, false);

	return;
}

void func_88(var uParam0) // Position - 0x325F Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_89(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3275 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_71(iParam0))
		return;

	if (func_77(iParam0))
	{
		if (!func_8(iParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_85(iParam0, 32, true))
		if (!bParam2)
			return;

	char = func_84(iParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_41(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_251(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_78(iParam0, 2, true);
	}
	else
	{
		func_252(iParam0);
		func_78(iParam0, 1, true);
	}

	return;
}

void func_90(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3383 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_71(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Player func_91(int iParam0) // Position - 0x33BF Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_71(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

int func_92(int iParam0) // Position - 0x33FF Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_253(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_93(int iParam0) // Position - 0x3440 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

Hash func_94(int iParam0) // Position - 0x3473 Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_95(int iParam0) // Position - 0x349E Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_93(iParam0))
		return 0;

	return func_255(func_254(iParam0));
}

void func_96(int iParam0, Hash hParam1, int iParam2) // Position - 0x34BE Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_157() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

BOOL func_97(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x34F6 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_256())
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
		num = func_200(Global_1898164.f_1[0 /*5*/]);
	
		if (func_257(num) && func_258(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_93(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_98(int iParam0, int iParam1) // Position - 0x36FA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_99(int iParam0) // Position - 0x3709 Hash - 0xF4AFA201 ^0x156AC308
{
	int num;
	int num2;

	switch (func_95(iParam0))
	{
		case 1:
			num = func_200(iParam0);
			return func_259(num);
	
		case 8:
			num2 = func_200(iParam0);
		
			if (func_258(Global_1347702[num2 /*49*/].f_12, 1))
				return func_260(num2);
			break;
	}

	return -1;
}

void func_100(BOOL bParam0) // Position - 0x3764 Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1898077.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_157() != -1)
		num = 1;

	if (Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13 && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_261(num, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = num;
		Global_1898077.f_8 = func_262();
		Global_1898077.f_9 = func_263(Global_1894899.f_2);
		func_264(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}

	Global_1898077.f_2 = 0;
	return;
}

int func_101() // Position - 0x3822 Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_265(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_265(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_265(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_265(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_265(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_265(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_265(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

void func_102(int iParam0, int iParam1) // Position - 0x38E5 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_93(iParam0))
		return;

	func_266(iParam0, iParam1);
	return;
}

int func_103(int iParam0) // Position - 0x3902 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_104(BOOL bParam0) // Position - 0x3914 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_267(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_53(&Global_1935630, 4194304);
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

int func_105(BOOL bParam0) // Position - 0x39B7 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_268(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_106(BOOL bParam0) // Position - 0x39E4 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

void func_107(int iParam0, BOOL bParam1) // Position - 0x39F7 Hash - 0x7075D2FF ^0xF0E29EF6
{
	if (func_157() != -1)
		return;

	if (func_103(0) != iParam0)
		return;

	if (func_269(iParam0))
		if (bParam1)
			func_270(-525676072);
		else
			func_271(-525676072);

	return;
}

int func_108(int iParam0) // Position - 0x3A3A Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_273(func_272(iParam0));
}

int func_109(int iParam0) // Position - 0x3A4C Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_110(int iParam0) // Position - 0x3A56 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_274(iParam0))
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

void func_111(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x3B09 Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_150(vector, uParam0, 2f, true))
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

void func_112(int iParam0, var uParam1, var uParam2) // Position - 0x3B8D Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

void func_113(int iParam0, int iParam1) // Position - 0x3BA9 Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_114(Hash hParam0) // Position - 0x3BCD Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_115(int iParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x3BD9 Hash - 0xA3491953 ^0xA3491953
{
	*uParam3 = 0;
	*uParam2 = 0;

	if (func_275(iParam0, hParam1))
		*uParam3 = 1;

	if (func_276(iParam0, hParam1, uParam2))
		return true;

	*uParam2 = -1;
	return *uParam3;
}

void func_116(int iParam0, Hash hParam1) // Position - 0x3C10 Hash - 0x17B7C696 ^0x30CAEE41
{
	Ped ped;

	ped = func_41(iParam0);

	if (func_6(ped, 0) && func_277(iParam0, *hParam1) && PED::_0x7C8AA850617651D9(ped, *hParam1))
		func_278(iParam0, *hParam1);

	if (!func_6(ped, 0) || !func_277(iParam0, *hParam1) || !PED::_0x7C8AA850617651D9(ped, *hParam1))
		func_279(hParam1);

	return;
}

void func_117(int iParam0, int iParam1) // Position - 0x3C86 Hash - 0x77637161 ^0xE627420E
{
	int i;

	func_116(iParam0, &Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]);

	if (func_114(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]))
		return;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < iParam1)
		{
		}
		else if (i < 9 && func_114(Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/]))
		{
			Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/] = Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/];
			Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/].f_1 = Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/].f_1;
			Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/].f_2 = Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/].f_2;
			func_281(iParam0, i, func_280(iParam0, i + 1));
			func_279(&Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/]);
			func_281(iParam0, i + 1, false);
		}
	}

	return;
}

BOOL func_118(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3D9F Hash - 0x474EF427 ^0x8F3489DA
{
	if (!func_71(iParam0))
		return false;

	if (!func_77(iParam0))
		return false;

	if (!SCRIPTS::IS_THREAD_ACTIVE(iParam1, bParam2))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == iParam1;
}

int func_119() // Position - 0x3DE1 Hash - 0xC5B83CF5 ^0xC3CA9E16
{
	return Global_40.f_4283.f_4;
}

int func_120(int iParam0) // Position - 0x3DF1 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_121() // Position - 0x3DFD Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

BOOL func_122(var uParam0) // Position - 0x3E0B Hash - 0x772B1EC8 ^0xDFCF97F2
{
	return func_282(&(uParam0->f_17), CLOCK::GET_CLOCK_HOURS());
}

BOOL func_123(int iParam0, BOOL bParam1) // Position - 0x3E1F Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_283(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

BOOL func_124(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x3E5E Hash - 0xE63199E6 ^0x5F324E69
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return false;

	unk = 4;
	unk6 = 4;
	unk6[0] = 16384;
	unk6[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(uParam0, fParam3, &unk, &unk6, iParam5);
}

void func_125(var uParam0) // Position - 0x3E9E Hash - 0xA4AAD835 ^0x48D7F053
{
	int num;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_19))
	{
		volLocal_19 = VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_14, 0f, 0f, 0f, 2.5f, 2.5f, 3f);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_19, 0, 0, 0, -1, -1, 0);
	}

	switch (iLocal_144)
	{
		case 0:
			func_128(uParam0->f_1, joaat("META_OUTFIT_WARM_WEATHER"));
			STREAMING::REQUEST_MODEL(func_68(), false);
			STREAMING::REQUEST_MODEL(func_69(), false);
			HUD::TEXT_BLOCK_REQUEST("CHRC1A");
			HUD::TEXT_BLOCK_REQUEST("CMCR2AU");
			iLocal_144 = 1;
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(func_68()) && STREAMING::HAS_MODEL_LOADED(func_69()) && HUD::TEXT_BLOCK_IS_LOADED("CHRC1A") && HUD::TEXT_BLOCK_IS_LOADED("CMCR2AU"))
			{
				func_284(&uLocal_37, Global_35, "ARTHUR", false);
				func_284(&uLocal_37, uParam0->f_1, "MICAH_BELL", false);
				iLocal_144 = 2;
			}
			break;
	
		case 2:
			ansLocal_135 = ANIMSCENE::_CREATE_ANIM_SCENE(func_285(), 0, 0, false, true);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_135))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(obLocal_18))
					obLocal_18 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_69(), func_286(), true, true, false, true);
			
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_135, "w_melee_knife05", obLocal_18, 0);
			
				if (!ENTITY::DOES_ENTITY_EXIST(obLocal_17))
					obLocal_17 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_68(), func_286(), true, true, false, true);
			
				ENTITY::SET_ENTITY_ROTATION(obLocal_17, func_287(), 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(obLocal_17, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_135, "MicahBell", uParam0->f_1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_135, "ARTHUR", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_135);
				iLocal_144 = 3;
			}
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_135, true, false))
			{
				sLocal_136 = "pblEnter";
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_135, sLocal_136);
				iLocal_144 = 4;
			}
			break;
	
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_135, sLocal_136))
			{
				func_288();
				sLocal_136 = "pblIdle";
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_135, sLocal_136);
				iLocal_144 = 5;
			}
			break;
	
		case 5:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_135) > 0.98f && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_135, sLocal_136))
			{
				func_288();
				iLocal_144 = 6;
			}
			break;
	
		case 6:
			if (!func_39(&uLocal_137) || func_40(&uLocal_137) > fLocal_140)
			{
				num = func_289(uParam0->f_1, Global_35, 1060437492);
			
				if (num != 1)
				{
					if (func_42(uParam0->f_1, Global_36, true) < 10f && func_42(uParam0->f_1, Global_36, true) > 3f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam0->f_1, Global_35, 17) && iLocal_145 < 1 && !bLocal_35)
					{
						switch (num)
						{
							case 0:
								sLocal_136 = "pblBeckonForward_Gesture";
								break;
						
							case 2:
								sLocal_136 = "pblBeckonRight_Gesture";
								break;
						
							case 3:
								sLocal_136 = "pblBeckonLeft_Gesture";
								break;
						}
					
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_135, sLocal_136);
						bLocal_35 = true;
						iLocal_144 = 7;
					}
				}
			}
			break;
	
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_135, sLocal_136))
			{
				func_288();
				sLocal_136 = "pblIdle";
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_135, sLocal_136);
				iLocal_144 = 8;
			}
			break;
	
		case 8:
			if (!func_39(&uLocal_137))
				func_38(&uLocal_137);
		
			fLocal_140 = fLocal_140 * 2f;
			iLocal_144 = 5;
			break;
	}

	return;
}

void func_126(var uParam0) // Position - 0x419F Hash - 0xF6014E50 ^0x5192705D
{
	var unk;
	int num;

	if (bLocal_36)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(plLocal_14))
		plLocal_14 = func_290(&uLocal_20, *uParam0, true, true, 0, 0, 1, true, false, 0, 0, 0, 0, false, false, false, true, false);

	if (!ENTITY::DOES_ENTITY_EXIST(plLocal_14))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_16))
	{
		num.f_10 = 7;
		num = 1;
		num.f_1 = 1;
		num.f_2 = 0;
		num.f_6 = { 1728.8419f, -769.0228f, 41.0667f };
		num.f_9 = 42.0669f;
		pedLocal_16 = func_291(&unk, &num);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_16))
		{
			if (func_6(pedLocal_16, 1))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedLocal_16, 48, true);
				TASK::TASK_STAND_STILL(pedLocal_16, -1);
			}
		}
	
		return;
	}

	if (!func_292(*uParam0, 256))
	{
		func_293(*uParam0, plLocal_14, true);
		return;
	}

	if (func_6(plLocal_14, 0))
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plLocal_14, uLocal_21, fLocal_24, true, false, true);

	bLocal_36 = true;
	return;
}

void func_127(AnimScene ansParam0) // Position - 0x4287 Hash - 0x6C1ECE58 ^0x5BCB2EB2
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansParam0, false))
			ANIMSCENE::_DELETE_ANIM_SCENE(ansParam0);

	return;
}

void func_128(Player plParam0, Hash hParam1) // Position - 0x42A8 Hash - 0xEA1C858E ^0x57A3AA54
{
	if (!ENTITY::IS_ENTITY_DEAD(plParam0))
	{
		if (func_294(plParam0, hParam1))
		{
			if (func_295(plParam0, hParam1))
			{
				if (func_296(plParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(plParam0, "metaped_outfit_request"), plParam0, true, false);
					func_297(plParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(plParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(plParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(plParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(plParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(plParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(plParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(plParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(plParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(plParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(plParam0, 9);
		}
	}

	return;
}

Hash func_129(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x4352 Hash - 0xAB9CFACB ^0x8DB6D77C
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
				
					if (func_298(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_298(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_157() == -1 && !func_299(weaponHash))
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
		if (pedParam0 != Global_35 && func_298(weaponHash))
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

BOOL func_130(var uParam0, Ped pedParam1, const char* sParam2, Hash hParam3, BOOL bParam4, BOOL bParam5) // Position - 0x46FE Hash - 0x3D537E86 ^0x3D537E86
{
	return func_303(uParam0, pedParam1, sParam2, hParam3, bParam4, bParam5);
}

BOOL func_131(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4716 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_304(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_132(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4770 Hash - 0xC61CF035 ^0xF8646415
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

BOOL func_133(int iParam0) // Position - 0x4824 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_157())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

BOOL func_134(var uParam0) // Position - 0x484F Hash - 0x8835C4F2 ^0x510E810B
{
	int i;

	if (func_97(36866, false, true))
		return false;

	if (func_28(&(uParam0->f_31), 8))
	{
		for (i = 0; i < 27; i = i + 1)
		{
			if (func_63(&(uParam0->f_3), func_62(i)))
				if (!func_305(i) && !func_8(i))
					return false;
		}
	}

	return true;
}

int func_135(BOOL bParam0) // Position - 0x48B4 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_306(&flag, -2147483648);
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

int func_136() // Position - 0x48F4 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_137(int iParam0, int iParam1) // Position - 0x4902 Hash - 0x8EBE6337 ^0xEB351FE
{
	int num;

	num = func_307(iParam0, iParam1);

	if (Global_40.f_4942[iParam0 /*60*/].f_3 == num && Global_1360165[iParam0 /*1157*/].f_63 == num && CLOCK::GET_CLOCK_HOURS() >= 6)
		func_309(iParam0, func_308(iParam0, iParam1, true, true), false);

	return;
}

Player func_138(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24) // Position - 0x4955 Hash - 0x79A2D2D9 ^0x5019CC83
{
	int num;
	BOOL flag;
	int num2;
	int i;

	if (!func_71(iParam0))
		return 0;

	num = iParam3;
	num.f_1 = iParam4;
	num.f_2 = iParam5;

	if (Global_1572864.f_13 || Global_1572864.f_14 || Global_1572864.f_8 != 0 || Global_1391438.f_5 & 8 != 0)
		flag = true;

	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_85(iParam0, 2, true))
				func_7(iParam0, 2, true);
		
			if (func_246(iParam0, 16, true))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_78(iParam0, 29, true);
						return 0;
					}
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_9(iParam0, false, false, true, -1082130432, true, true, false, false, false, false);
					}
				
					return 0;
				}
				else if (func_6(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
		
			if (func_6(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
					if (bParam1)
						func_227(iParam0, true, "Stealing, but companion is a ragdoll");
					else
						return 0;
			
				func_78(iParam0, 44, true);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_310(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_78(iParam0, 44, true);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_310(iParam0, 1);
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
		
			if (!func_85(iParam0, 44, false))
				func_78(iParam0, 44, false);
		
			if (func_311(iParam0, num, iParam13, false, true, bParam17, bParam20, -1, 1, false))
				func_310(iParam0, 2);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
		
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
		
			func_7(iParam0, 18, true);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_33(iParam0, bParam9, true, false);
		
			if (bParam22)
				func_312(iParam0, false, false, true);
		
			func_7(iParam0, 33, true);
			func_7(iParam0, 34, true);
			func_7(iParam0, 29, true);
		
			if (!_IS_NULL_VECTOR(num) && bParam7)
				func_310(iParam0, 3);
			else if (iParam13 != 0)
				func_310(iParam0, 4);
			else
				func_310(iParam0, 5);
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
						func_227(iParam0, true, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
			
				num2 = 2;
			
				if (bParam10)
					num2 = num2 | 4;
			
				func_59(Global_1360165[iParam0 /*1157*/], num, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
			
				return 0;
			}
		
			if (iParam13 != 0)
				func_310(iParam0, 4);
			else
				func_310(iParam0, 5);
			break;
	
		case 4:
			if (iParam13 != 0 || flag)
			{
				if (flag)
					if (iParam13 == 0)
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
			
				if (func_313(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_309(iParam0, iParam13, false);
						func_314(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, true);
					
						if (func_85(iParam0, 25, false))
							func_7(iParam0, 25, false);
					
						func_78(iParam0, 66, false);
						func_310(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_310(iParam0, 5);
				}
			
				func_78(iParam0, 28, true);
			}
			else
			{
				func_310(iParam0, 5);
			}
			break;
	
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
				func_310(iParam0, 6);
			break;
	
		case 6:
			if (func_6(Global_1360165[iParam0 /*1157*/], 0))
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
					func_315(iParam0);
			
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_316(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
		
			func_310(iParam0, 7);
			[[fallthrough]];
	
		case 7:
			func_33(iParam0, bParam9, bParam15, false);
			func_81(iParam0, 4, bParam11);
			func_83(iParam0);
		
			if (bParam20)
				func_317(Global_1360165[iParam0 /*1157*/]);
		
			func_318(iParam0, Global_1360165[iParam0 /*1157*/]);
		
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
		
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_310(iParam0, 0);
			func_319(iParam0, 16, true);
			func_7(iParam0, 44, true);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}

	return 0;
}

void func_139(var uParam0, const char* sParam1) // Position - 0x4FC5 Hash - 0x27EC7FFA ^0x67E34384
{
	var unk;
	var unk2;
	var unk7;
	var unk8;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
		func_320(MISC::GET_HASH_KEY(&(uParam0->f_34)), 1, 0, 0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_67)))
		if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_67)))
			HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_67));

	HUD::TEXT_BLOCK_REQUEST("CMPI");
	unk2 = Global_1359489.f_21;
	unk2.f_2 = 429892159;
	unk2.f_3 = func_321(func_136());

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk2.f_1), &unk2))
	{
		unk2.f_3 = uParam0->f_9;
	
		if (func_322(unk2, -972717455, &unk, false))
			sParam1->f_471 = unk;
	
		unk2.f_3 = uParam0->f_9;
	
		if (func_322(unk2, -1140954353, &unk7, false))
			sParam1->f_472 = unk7;
		else
			sParam1->f_472 = -1;
	
		unk2.f_3 = uParam0->f_9;
		unk2.f_4 = joaat("INVITE");
	
		if (func_323(unk2, -2047775528, &(sParam1->f_17), false))
			if (func_324(unk2, -1102408038, &(sParam1->f_375), false))
				func_325(unk2, -1750702392, &(sParam1->f_378), false);
	}

	if (MISC::ARE_STRINGS_EQUAL(&(sParam1->f_17), "CASEN_DRNK1"))
		func_326(&(sParam1->f_35), "CASEN_DRNK1");

	if (MISC::ARE_STRINGS_EQUAL(&(sParam1->f_17), "CAHSH_FSH3"))
		func_326(&(sParam1->f_35), "CAHSH_FSH3");

	if (MISC::ARE_STRINGS_EQUAL(&(sParam1->f_17), "PRHM6_INT"))
	{
		func_168(&(sParam1->f_35), 8388608);
	
		if (func_136() == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk8, "HorseshoeCamp", 64);
			func_326(&(sParam1->f_35), &unk8);
			func_168(&(sParam1->f_35), 134217728);
		}
		else if (func_136() == 2)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk8, "ClemensCamp", 64);
			func_327(&(sParam1->f_35), unk8);
		}
	}

	return;
}

BOOL func_140(var uParam0) // Position - 0x5174 Hash - 0x56CAADDF ^0xD70664A0
{
	BOOL flag;

	flag = true;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
		if (!func_328(MISC::GET_HASH_KEY(&(uParam0->f_34))))
			flag = false;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_67)))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_67)))
			flag = false;

	if (!HUD::TEXT_BLOCK_IS_LOADED("CMPI"))
		flag = false;

	!flag;
	return flag;
}

BOOL func_141(var uParam0, const char* sParam1) // Position - 0x51D0 Hash - 0x59F9AFA ^0x85B37948
{
	BOOL num;
	Hash hashKey;
	var unk;
	int i;

	num = 1;

	if (func_18(sParam1->f_471))
	{
		if (Global_1391438.f_594 == sParam1->f_471)
			Global_1391438.f_594 = func_329();
	
		if (!STREAMING::IS_IPL_ACTIVE_HASH(sParam1->f_471))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(sParam1->f_471, Global_36) || func_155(&(Global_1391438.f_5), 8) || func_156(32768) || CAM::IS_SCREEN_FADED_OUT())
				STREAMING::REQUEST_IPL_HASH(sParam1->f_471);
			else
				num = 0;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
		{
			hashKey = MISC::GET_HASH_KEY(&(uParam0->f_34));
			uParam0->f_33 = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_14, hashKey, 1f, 0, false);
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
			{
				uParam0->f_33 = func_330(hashKey, uParam0->f_14, uParam0->f_17, 2f, -1f, false);
				num = 0;
			}
		}
	}

	!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17));
	func_331(&(sParam1->f_35), PLAYER::PLAYER_PED_ID(), sParam1, 0, 0, false);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_332(i, &(uParam0->f_3)))
			if (func_333(uParam0, &unk, i))
				if (func_6(func_41(i), 0))
					func_331(&(sParam1->f_35), func_41(i), &unk, 0, 0, false);
	}

	func_334(&(sParam1->f_35), 50f);
	func_335(&(sParam1->f_35), 75f);

	if (!_IS_NULL_VECTOR(sParam1->f_375))
		func_170(&(sParam1->f_35), sParam1->f_375);

	return num;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x5359 Hash - 0xA17D549C ^0x906904
{
	switch (iParam0)
	{
		case -2036347356:
			return "ACT_POKER_PROMPT";
	
		case -1739349092:
			return "ACT_RETURN_PROMPT";
	
		case -1700356309:
			return "ACT_BLACKJACK_PROMPT";
	
		case -1670940721:
			return "ACT_BANK_PROMPT";
	
		case -1567081107:
			return "ACT_DOMINOES_PROMPT";
	
		case -1511391406:
			return "ACT_FFF_CAMP_PROMPT";
	
		case -1341684320:
			return "ACT_POKER_CAMP_PROMPT";
	
		case -919476462:
			return "ACT_COACH_PROMPT";
	
		case -301635006:
			return "ACT_MISSION_PROMPT";
	
		case 380107708:
			return "ACT_TRAIN_PROMPT";
	
		case 565221344:
			return "ACT_HOMEROB_PROMPT";
	
		case 654481153:
			return "ACT_FISHING_PROMPT";
	
		case 754620122:
			return "ACT_RUSTLING_PROMPT";
	
		case 1523333387:
			return "ACT_CRAPS_PROMPT";
	
		case 1744128959:
			return "ACT_HIDEOUT_PROMPT";
	
		case 1784895540:
			return "ACT_HUNTING_PROMPT";
	
		default:
		
	}

	return "ACT_INVALID_PROMPT";
}

void func_143(int* piParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x543D Hash - 0x77C6B9D1 ^0xC3EDC08A
{
	piParam0->f_5 = sParam1;
	piParam0->f_7 = iParam3;
	piParam0->f_8 = iParam6;
	piParam0->f_13 = iParam2;
	piParam0->f_15 = iParam8;
	piParam0->f_11 = iParam4;
	piParam0->f_12 = iParam5;

	if (bParam7)
	{
		if (func_12(piParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*piParam0, 1))
				func_336(piParam0->f_6, piParam0->f_5, piParam0->f_14, false);
			else
				func_337(piParam0->f_6, piParam0->f_5, false);
		
			func_186(piParam0->f_6, false, true);
		}
		else
		{
			MISC::SET_BIT(piParam0, 14);
		}
	
		MISC::SET_BIT(piParam0, 0);
	}
	else
	{
		func_338(piParam0, piParam0->f_5);
	
		if (!MISC::IS_BIT_SET(*piParam0, 13))
			MISC::SET_BIT(piParam0, 0);
	}

	MISC::SET_BIT(piParam0, 15);
	return;
}

void func_144(int* piParam0, var uParam1, int iParam2, Blip blParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x54F0 Hash - 0xF8050B94 ^0xD2FFB28E
{
	piParam0->f_57 = { 0f, 0f, 0f };
	func_339(piParam0, blParam3, 0);
	func_340(uParam1, iParam2);
	func_341(piParam0, iParam4);

	if (!MISC::IS_BIT_SET(piParam0->f_21, 0))
		MISC::SET_BIT(&(piParam0->f_21), 0);

	if (iParam5 > -1f)
		func_342(piParam0, iParam5);

	if (iParam6 == 1)
		func_145(piParam0, 17);

	if (iParam7 == 1)
		func_145(piParam0, 16);

	if (iParam8 == 1)
		func_145(piParam0, 15);

	if (iParam9 == 1)
		func_145(piParam0, 13);

	if (iParam10 == 1)
		func_145(piParam0, 12);

	if (iParam11 == 1)
		func_145(piParam0, 11);

	if (iParam12 == 1)
		func_145(piParam0, 8);

	if (iParam13 == 1)
		func_145(piParam0, 10);

	if (iParam14 == 1)
		func_145(piParam0, 9);

	if (iParam15 == 1)
		func_145(piParam0, 18);

	if (iParam16 == 1)
		func_145(piParam0, 20);

	if (iParam17 == 1)
		func_145(piParam0, 19);

	return;
}

void func_145(int* piParam0, int iParam1) // Position - 0x55E7 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

int func_146(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x55F7 Hash - 0xF2D31527 ^0xF2D31527
{
	int num;

	if (!func_71(iParam0))
		return 0;

	func_343(iParam0);
	num = -1;

	if (!func_344(iParam0, hParam1, &num, true, iParam2, iParam3))
		return 0;

	!func_345(iParam0, hParam1);
	return 1;
}

BOOL func_147(var uParam0) // Position - 0x563A Hash - 0x47B3C18A ^0x82A29E9A
{
	Ped pedUsingScenarioPoint;
	var taskSequenceId;

	switch (uParam0->f_30)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_18))
			{
				uParam0->f_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_14, 0f, 0f, uParam0->f_17, func_346(uParam0), "Activity Start Pos");
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_18, 0, 0, 0, -1, -1, 0);
				MISC::_CLEAR_VOLUME_AREA(uParam0->f_18, 16384);
				uParam0->f_19 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_18, false, 15);
				uParam0->f_20 = func_347(uParam0->f_18, "Activity", true, 0, 0, false, -1082130432);
			}
		
			if (func_348(&(uParam0->f_18), uParam0->f_3))
				return false;
		
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 389, true);
		
			if (func_349(uParam0))
			{
				uParam0->f_30 = 3;
			}
			else if (func_350(uParam0->f_9))
			{
			}
			else
			{
				uParam0->f_30 = 1;
			}
			break;
	
		case 1:
			pedUsingScenarioPoint = TASK::_GET_PED_USING_SCENARIO_POINT(uParam0->f_33);
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 1) && pedUsingScenarioPoint != uParam0->f_1)
			{
				if (!TASK::IS_PED_EXITING_SCENARIO(uParam0->f_1, false))
					TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
			
				return false;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedUsingScenarioPoint) || pedUsingScenarioPoint == uParam0->f_1)
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
				uParam0->f_30 = 2;
			}
			break;
	
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_STAND_STILL(0, 1000);
			TASK::TASK_USE_SCENARIO_POINT(0, uParam0->f_33, 0, -1, true, false, 0, false, -1082130432, false);
			func_154(uParam0->f_1, &taskSequenceId, 0.1f, 0.2f, true, true);
			uParam0->f_30 = 4;
			break;
	
		case 3:
			if (func_349(uParam0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_1, false, true);
				func_59(uParam0->f_1, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_33, true), 0f, 2, 1073741824);
				TASK::TASK_USE_SCENARIO_POINT(uParam0->f_1, uParam0->f_33, 0, -1, false, true, 0, false, -1082130432, false);
				uParam0->f_30 = 5;
			}
			break;
	
		case 4:
			if (func_349(uParam0))
				uParam0->f_30 = 3;
			else if (PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_1, uParam0->f_33) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 0))
				uParam0->f_30 = 5;
			break;
	
		case 5:
			return true;
	}

	return false;
}

BOOL func_148(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x5851 Hash - 0x3F4C1B1 ^0x898E9E6F
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

Player func_149(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16) // Position - 0x589E Hash - 0x98448E34 ^0x98448E34
{
	var unk;
	Player player;

	if (!func_75(iParam0))
		return 0;

	player = func_290(&unk, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, bParam16);

	if (!ENTITY::DOES_ENTITY_EXIST(player))
		return 0;

	if (bParam6)
		if (!ENTITY::IS_ENTITY_DEAD(player) && PED::IS_PED_READY_TO_RENDER(player))
			return player;
	else
		return player;

	return 0;
}

BOOL func_150(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x5914 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

BOOL func_151(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x5969 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_42(pedParam0, Global_36, true);

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

BOOL func_152(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x59F2 Hash - 0xBA023B92 ^0x16E0B707
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

void func_153(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4, int iParam5) // Position - 0x5A4B Hash - 0x5050B938 ^0x5BDC33E5
{
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(pedParam0, hParam1, iParam2, bParam3, hParam4, iParam5, false);
	return;
}

void func_154(Ped pedParam0, int* piParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x5A64 Hash - 0xAB850FC2 ^0x2509CA9B
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

BOOL func_155(int iParam0, int iParam1) // Position - 0x5ABD Hash - 0x1A05E0F5 ^0x1A05E0F5
{
	if (*iParam0 && iParam1 != false)
		return true;

	return false;
}

BOOL func_156(int iParam0) // Position - 0x5AD4 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_157() // Position - 0x5AE7 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_158(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5AF5 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_351(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_352(iParam0))
		return false;

	if (func_353(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_354(iParam0, 1) || func_156(32768))
		if (!func_354(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_355())
		return false;

	return true;
}

void func_159(int iParam0, int iParam1) // Position - 0x5B97 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

Hash func_160(var uParam0) // Position - 0x5BBB Hash - 0xCBBA453F ^0x3D7EAB07
{
	int num;

	num = func_289(uParam0->f_1, Global_35, 1060437492);

	switch (num)
	{
		case 0:
			return -700479906;
	
		case 1:
			return -1156705763;
	
		case 2:
			return -630705751;
	
		case 3:
			return -630213949;
	
		default:
		
	}

	return -700479906;
}

void func_161(var uParam0, float fParam1) // Position - 0x5C1A Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_164() - fParam1;
	func_356(uParam0, 1);
	func_357(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_162(int iParam0, int iParam1) // Position - 0x5C40 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_163(var uParam0) // Position - 0x5C4F Hash - 0x39705408 ^0x39705408
{
	return func_162(*uParam0, 2);
}

float func_164() // Position - 0x5C5F Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_165(var uParam0, int iParam1) // Position - 0x5C91 Hash - 0x718DD1EF ^0x5F4D390E
{
	return uParam0->f_8 && iParam1 != false;
}

void func_166(var uParam0, const char* sParam1) // Position - 0x5CA2 Hash - 0x8E45B2D4 ^0xF6C525EA
{
	int num;

	if (func_165(uParam0, 8192))
		return;

	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		num = MISC::_0x94E8CA3DEE952789(sParam1, "@");
	
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
			TEXT_LABEL_COPY(&(uParam0->f_152), { func_358("cutscene@", MISC::_0x5B4A8121A47D844D(num - 1), true, 63) }, 4);
	
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		TEXT_LABEL_COPY(&(uParam0->f_152), { func_358("cutscene@", sParam1, true, 63) }, 4);
	}

	func_168(uParam0, 8192);
	return;
}

Vector3 func_167(var uParam0) // Position - 0x5D20 Hash - 0xD2D3D44D ^0x694345D8
{
	return uParam0->f_5;
}

void func_168(var uParam0, int iParam1) // Position - 0x5D2E Hash - 0x53A96DDB ^0x69C93C85
{
	uParam0->f_8 = uParam0->f_8 || iParam1;
	return;
}

Vector3 func_169(var uParam0) // Position - 0x5D41 Hash - 0x38891BF2 ^0xE8A85808
{
	var unk;
	var position;
	var rotation;
	var matrix;

	TEXT_LABEL_COPY(&unk, { func_359(uParam0) }, 8);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_157))
	{
		uParam0->f_157 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_157, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_157, func_360(Global_35), &matrix, false, 0, 2))
			position = { matrix };
		else
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_157, &position, &rotation, 2);
	
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_157);
		return position;
	}

	return 0f, 0f, 0f;
}

void func_170(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x5DC4 Hash - 0x2559B2A1 ^0x79D637E0
{
	if (_IS_NULL_VECTOR(fParam1))
		return;

	uParam0->f_5 = { fParam1 };
	return;
}

float func_171(var uParam0) // Position - 0x5DE4 Hash - 0xD73B9827 ^0x42DBF834
{
	return uParam0->f_147;
}

void func_172() // Position - 0x5DF0 Hash - 0xFA72027F ^0xFA72027F
{
	int num;

	Global_1946054.f_858 = Global_1946054.f_858 - 1;

	if (Global_1946054.f_858 <= 0)
	{
		num = 35;
		func_361(num);
	}

	return;
}

void func_173(var uParam0) // Position - 0x5E1F Hash - 0xF96695D3 ^0x73501C9A
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_174[i /*9*/]) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_156, &uParam0->f_174[i /*9*/]) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_156, &uParam0->f_174[i /*9*/]))
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_156, &uParam0->f_174[i /*9*/]);
	
		uParam0->f_174[i /*9*/].f_8 = 0;
	}

	return;
}

void func_174(var uParam0) // Position - 0x5EB0 Hash - 0x8073496 ^0x6EC7F710
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_165(uParam0, 16))
		{
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_362(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, false);
		}
	}

	if (func_165(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_175(uParam0, 8, true);
	}

	uParam0->f_4 = 0;
	func_175(uParam0, 16, true);
	return;
}

void func_175(var uParam0, int iParam1, BOOL bParam2) // Position - 0x5F17 Hash - 0x5B7784D4 ^0x9B62D08D
{
	uParam0->f_8 = uParam0->f_8 - uParam0->f_8 && iParam1;

	if (iParam1 == 512 && bParam2 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_156))
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_156);

	return;
}

float func_176(var uParam0) // Position - 0x5F61 Hash - 0xD73B9827 ^0x65AF0015
{
	return uParam0->f_146;
}

struct<8> func_177(var uParam0) // Position - 0x5F6D Hash - 0x2A5E80CA ^0x28BC0015
{
	return uParam0->f_158;
}

void func_178(var uParam0) // Position - 0x5F7C Hash - 0xA1CFA37E ^0xA1CFA37E
{
	var unk;

	unk = { func_363() };
	func_326(uParam0, &unk);
	return;
}

void func_179(var uParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x5F95 Hash - 0x444CF639 ^0xB97B3688
{
	if (func_165(uParam0, 16))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_364(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_365());
		func_168(uParam0, 8);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_366(uParam0, uParam0->f_4, false, true);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_168(uParam0, 16);
	}

	return;
}

void func_180(var uParam0) // Position - 0x6035 Hash - 0xF5EDCA0C ^0x5573908C
{
	if (!func_165(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_156, false))
	{
		func_367(uParam0);
		func_368(uParam0, false);
	
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_156, true))
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_156);
	
		func_168(uParam0, 32768);
	}

	return;
}

BOOL func_181() // Position - 0x6092 Hash - 0xAE743BBD ^0xB1C5A13D
{
	return Global_1946054.f_1497 != Global_1946054.f_2163.f_1;
}

void func_182(int iParam0) // Position - 0x60AB Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_369(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_361(num);
	return;
}

struct<8> func_183(var uParam0) // Position - 0x60EF Hash - 0x34F395B4 ^0x4D7F9139
{
	var unk;

	unk = { func_370(uParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		unk = { func_371() };

	return unk;
}

int func_184(var uParam0, int* piParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, Volume volParam9, int iParam10, int iParam11, int iParam12) // Position - 0x6119 Hash - 0x66907D63 ^0x41228033
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
	int taskFlag;
	int taskFlag2;
	BOOL flag8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_372(&iParam8);
		num = -1;
		flag = false;
		flag2 = volParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(volParam9) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam9, false, 0);
		flag3 = iParam8 & 32 != 0;
		flag4 = iParam8 & 524288 != 0;
		flag5 = iParam8 & 16777216 != 0;
		flag6 = iParam8 & 16777216 != 0;
		flag7 = AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0);
		num2 = iParam12 >= 0f ? iParam12 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false));
		func_47(uParam0, piParam1, uParam3, fParam2, num2, sParam7);
	
		if (!(iParam8 & 2097152 != 0))
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
	
		if (iParam8 & 8388608 != 0)
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
	
		if (flag5)
			flag = AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35);
	
		if (flag7 || flag5 && flag)
			func_38(&(piParam1->f_13));
	
		if (func_373(*uParam0, piParam1, uParam3))
			return -1;
	
		switch (piParam1->f_2)
		{
			case 0:
				if (flag2)
				{
					if (func_374(uParam0, piParam1, uParam3, fParam2, iParam8, sParam7, iParam11, num2))
					{
						piParam1->f_1 = -1;
						piParam1->f_2 = 1;
						return func_184(uParam0, piParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, iParam12);
					}
				}
				break;
		
			case 1:
				if (!flag2 || !(num2 <= fParam2 + 5f))
				{
					func_216(uParam0);
					piParam1->f_2 = 0;
					return -1;
				}
			
				if (!(iParam8 & 33554432 != 0))
					if (iParam8 & 18 != 0)
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
							func_375(*uParam0, true, true);
					else if (func_376(piParam1, 22))
						func_375(*uParam0, false, true);
			
				if (func_377(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_378(uParam0, true, piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_379(iParam8);
					func_380(piParam1, uParam3);
				
					if (func_381(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, false))
					{
						if (piParam1->f_2 != 2 && piParam1->f_2 != 3)
						{
							if (piParam1->f_1 > -1 && piParam1->f_1 < *uParam3)
								if (MISC::IS_BIT_SET(uParam3->[piParam1->f_1 /*17*/], 20))
									func_382(uParam3);
						
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
					func_383(piParam1, uParam3, num2);
				
					if (func_384(*uParam0, piParam1, uParam3))
						return piParam1->f_1;
				
					if (MISC::IS_BIT_SET(*piParam1, 1))
					{
						func_385(uParam3, 0, false, true, true);
						MISC::CLEAR_BIT(piParam1, 1);
					}
				}
				break;
		
			case 2:
				if (func_377(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_386(*uParam0, piParam1, uParam3, fParam2, iParam5, iParam6, iParam10, flag3);
					func_381(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, true);
					func_378(uParam0, func_377(uParam0, iParam8, volParam9, false), piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_379(iParam8);
				}
				else if (MISC::IS_BIT_SET(*piParam1, 1))
				{
					if (!flag4)
						func_385(uParam3, 0, false, true, true);
				
					func_387(piParam1, 1);
				}
			
				func_383(piParam1, uParam3, num2);
			
				if (func_391(uParam0, piParam1, fParam4, flag6))
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
				if (func_377(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_386(*uParam0, piParam1, uParam3, fParam2, iParam5, iParam6, iParam10, flag3);
					func_381(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, true);
					func_378(uParam0, func_377(uParam0, iParam8, volParam9, false), piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_379(iParam8);
					func_380(piParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*piParam1, 1))
				{
					func_385(uParam3, 0, false, true, true);
					func_387(piParam1, 1);
				}
			
				if (MISC::IS_BIT_SET(piParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_152(Global_35, SCRIPT_TASK_DISMOUNT_ANIMAL) && !func_152(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE))
						{
							taskFlag = 0;
						
							if (func_289(Global_35, *uParam0, 1f) == 3)
								taskFlag = 131072;
							else
								taskFlag = 262144;
						
							piParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, taskFlag, 0, 0, 0, 0);
						}
					}
					else if (!PED::IS_PED_ON_MOUNT(Global_35) && func_6(piParam1->f_28, 0) && func_388(Global_35, piParam1->f_28, piParam1->f_29, true) && !func_152(piParam1->f_28, 518218985) && !func_152(piParam1->f_28, SCRIPT_TASK_PERFORM_SEQUENCE))
					{
						TASK::TASK_SMART_FLEE_PED(piParam1->f_28, Global_35, piParam1->f_29 + 3f, -1, 2304, 1f, 0);
						piParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_152(Global_35, SCRIPT_TASK_LEAVE_ANY_VEHICLE) && !func_152(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE))
						{
							taskFlag2 = 0;
						
							if (func_289(Global_35, *uParam0, 1f) == 3)
								taskFlag2 = 131072;
							else
								taskFlag2 = 262144;
						
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, taskFlag2);
						}
					}
					else if (!(MISC::IS_BIT_SET(*piParam1, 12) || func_194(piParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*piParam1, 13) || func_195(piParam1)))
					{
					}
					else if (!func_389(piParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_38(&(piParam1->f_18));
							flag8 = iParam8 & 128 != 0;
						
							if (flag8)
								func_390(uParam3, false, false);
						
							piParam1->f_2 = 4;
						}
					
						if (piParam1->f_2 != 2 && piParam1->f_2 != 4)
						{
							num = piParam1->f_1;
						
							if (num != -1)
								piParam1->f_1 = -1;
						
							return num;
						}
					}
				}
				break;
		
			case 4:
				if (func_391(uParam0, piParam1, fParam4, flag6))
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
			func_392(piParam1, uParam3);
			MISC::SET_BIT(piParam1, 3);
		}
	}

	return -1;
}

BOOL func_185() // Position - 0x680A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1327590.f_19745;
}

void func_186(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6819 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_12(iParam0))
		return;

	num = func_109(iParam0);

	if (bParam1)
	{
		func_393(iParam0, 4);
		func_394(num, true);
		func_395(num, true);
	}
	else
	{
		func_396(iParam0, 4);
		func_395(num, false);
	}

	return;
}

float func_187(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6868 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false), bParam2);
}

int func_188(int* piParam0, Ped pedParam1, Blip blParam2, int iParam3) // Position - 0x68B0 Hash - 0xA7EE39AE ^0x5DE05935
{
	if (!func_6(pedParam1, 0))
		return 0;

	if (!MISC::IS_BIT_SET(piParam0->f_21, 16))
		return 0;

	if (!MAP::DOES_BLIP_EXIST(blParam2) && MISC::IS_BIT_SET(piParam0->f_21, 16))
		return 0;

	if (!MISC::IS_BIT_SET(piParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(pedParam1, blParam2);
		MISC::SET_BIT(&(piParam0->f_21), 17);
	}

	if (!MISC::IS_BIT_SET(piParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(pedParam1, blParam2))
			MAP::_0xBB68D4D3CA3DE402(pedParam1, iParam3);
	
		MISC::SET_BIT(&(piParam0->f_21), 18);
	}

	if (MISC::IS_BIT_SET(piParam0->f_21, 17) && MISC::IS_BIT_SET(piParam0->f_21, 18))
		return 1;

	return 0;
}

var func_189(BOOL bParam0, var uParam1, var uParam2) // Position - 0x696C Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_190(int* piParam0, float fParam1) // Position - 0x6983 Hash - 0x300C52EF ^0xAFFC615
{
	if (!MISC::IS_BIT_SET(*piParam0, 14))
		piParam0->f_26 = fParam1;

	return;
}

void func_191(var uParam0, int* piParam1, var uParam2, int iParam3) // Position - 0x699E Hash - 0xCEAE2B84 ^0xD8F7303F
{
	int num;
	int num2;
	BOOL flag;
	BOOL isPedInAnyVehicle;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		return;

	func_397(uParam0, piParam1);
	num = iParam3 >= 0f ? iParam3 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false));

	if (num <= piParam1->f_26 || MISC::IS_BIT_SET(piParam1->f_21, 20))
	{
		func_380(piParam1, uParam2);
		func_398(piParam1);
		func_399(piParam1);
	
		if (!MISC::IS_BIT_SET(*piParam1, 17))
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), piParam1->f_27);
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), piParam1->f_27);
	
		func_400(false);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	
		if (!MISC::IS_BIT_SET(piParam1->f_21, 2))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(piParam1->f_35))
			{
				piParam1->f_35 = VOLUME::CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, piParam1->f_26, piParam1->f_26, 20f);
			}
			else
			{
				func_401(piParam1->f_35, 0, 0);
				MISC::SET_BIT(&(piParam1->f_21), 2);
			}
		}
	
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*piParam1, 16) || PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*piParam1, 15))
		{
			num2 = 0;
		
			if (func_289(Global_35, *uParam0, 1f) == 3)
				num2 = 131072;
			else
				num2 = 262144;
		
			if (PED::IS_PED_ON_MOUNT(Global_35))
				piParam1->f_28 = PED::GET_MOUNT(Global_35);
		
			flag = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*piParam1, 16) || PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*piParam1, 15) && !STREAMING::_0x99F92061EFE908BA();
			isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			func_402(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), flag, piParam1->f_30, piParam1->f_31, piParam1->f_32, isPedInAnyVehicle ? piParam1->f_33 : piParam1->f_34, 0, 1, false, num2);
		}
		else if (MISC::IS_BIT_SET(*piParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35) && func_6(piParam1->f_28, 0) && func_388(Global_35, piParam1->f_28, piParam1->f_26 + 1.75f, true) && !func_152(piParam1->f_28, 518218985) && !func_152(piParam1->f_28, SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			TASK::CLEAR_PED_TASKS(piParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(piParam1->f_28, Global_36, piParam1->f_26 + 1.75f, -1, 256, 0.101f);
			piParam1->f_28 = 0;
		}
	}

	return;
}

void func_192(int* piParam0) // Position - 0x6C60 Hash - 0x2BBA2BA8 ^0x951668B1
{
	if (MISC::IS_BIT_SET(*piParam0, 7))
	{
		if (MISC::IS_BIT_SET(piParam0->f_21, 3))
			func_218(piParam0, false);
	
		return;
	}

	if (MISC::IS_BIT_SET(piParam0->f_21, 3))
	{
		func_79(&(piParam0->f_22), false);
	
		if (piParam0->f_25 == 0f || func_403(&(piParam0->f_22), piParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1955830.f_1), 5);
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
		
			if (!MISC::IS_BIT_SET(piParam0->f_21, 4))
				MISC::SET_BIT(&(piParam0->f_21), 4);
		}
	}

	return;
}

void func_193(int* piParam0, var uParam1, var uParam2, BOOL bParam3, char* sParam4, int iParam5) // Position - 0x6CF1 Hash - 0xDE8B6FD0 ^0x471AA8E7
{
	int num;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
		return;

	num = iParam5 >= 0f ? iParam5 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam2, true, false));

	if (num >= piParam0->f_26 + 0.5f && MISC::IS_BIT_SET(piParam0->f_21, 20) && MISC::IS_BIT_SET(*piParam0, 18))
	{
		if (!func_152(Global_35, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY))
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *uParam2, 5000, -1082130432, -1082130432, -1082130432);
	
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}

	if (MISC::IS_BIT_SET(piParam0->f_21, 5))
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);

	PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	if (bParam3 == false)
		func_404(piParam0, uParam1, uParam2, sParam4);

	if (!MISC::IS_BIT_SET(piParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *uParam2, "ForcedILO", 0f, 0f, 0f, *uParam2, 0);
		MISC::SET_BIT(&(piParam0->f_21), 5);
	}

	return;
}

BOOL func_194(int* piParam0, var uParam1) // Position - 0x6DE5 Hash - 0xBD57CED5 ^0xC83A9923
{
	var unk;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
		return 1;

	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_152(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(piParam0->f_21, 19) && MISC::IS_BIT_SET(piParam0->f_21, 4))
		{
			unk = { piParam0->f_57 };
			piParam0->f_57 = { func_405(*uParam1, Global_35, 2.5f) };
			piParam0->f_57 = { piParam0->f_57 + Global_36 };
			piParam0->f_57.f_2 = piParam0->f_57.f_2 + 3f;
			func_406(piParam0->f_60, piParam0->f_57);
			piParam0->f_57 = { unk };
			MISC::SET_BIT(&(piParam0->f_21), 19);
		}
	
		return 1;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_152(Global_35, -208384378))
	{
		if (func_407(Global_35))
			piParam0->f_60 = func_408();
		else
			piParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(piParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, piParam0->f_60, Global_36, 1073741824, 9);
		}
	}

	return 0;
}

BOOL func_195(int* piParam0) // Position - 0x6F04 Hash - 0xB5FD23FF ^0x77BEC308
{
	BOOL flag;

	if (MISC::IS_BIT_SET(*piParam0, 13))
		return true;

	if (MISC::IS_BIT_SET(piParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}

	if (MISC::IS_BIT_SET(piParam0->f_21, 6))
	{
		if (func_298(func_409(Global_35, 0, true, false)) || func_298(func_409(Global_35, 1, true, false)))
		{
			MISC::CLEAR_BIT(&(piParam0->f_21), 6);
			MISC::CLEAR_BIT(&(piParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}

	if (!MISC::IS_BIT_SET(piParam0->f_21, 7))
	{
		if (!func_298(func_409(Global_35, 0, true, false)) && !func_298(func_409(Global_35, 1, true, false)))
		{
			func_88(&(piParam0->f_52));
			MISC::SET_BIT(&(piParam0->f_21), 7);
			MISC::SET_BIT(&(piParam0->f_21), 6);
			return true;
		}
		else if (func_298(func_409(Global_35, 0, true, false)) || func_298(func_409(Global_35, 1, true, false)) && !func_152(Global_35, SCRIPT_TASK_SWAP_WEAPON) && !func_152(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_79(&(piParam0->f_52), false);
			MISC::SET_BIT(&(piParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(piParam0->f_21, 7))
	{
		flag = func_410(&(piParam0->f_52)) >= 1.5f;
	
		if (!func_298(func_409(Global_35, 0, true, false)) && !func_298(func_409(Global_35, 1, true, false)) || flag)
		{
			func_88(&(piParam0->f_52));
			MISC::SET_BIT(&(piParam0->f_21), 6);
			return true;
		}
	}

	return false;
}

int func_196(int iParam0) // Position - 0x70D8 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_93(iParam0))
		return -1;

	return func_92(iParam0);
}

int func_197(int iParam0) // Position - 0x70F4 Hash - 0x6B3238EF ^0x6B3238EF
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

void func_198(int iParam0, BOOL bParam1) // Position - 0x7135 Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_93(iParam0))
		return;

	if (!func_49(iParam0))
		return;

	if (bParam1)
	{
		if (func_94(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_94(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_95(iParam0), func_200(iParam0), func_411(iParam0), func_94(iParam0), Global_36);
		}
	}

	func_102(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_199(int iParam0, BOOL bParam1) // Position - 0x71A6 Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_254(Global_1898330[iParam0]);
		func_412(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

int func_200(int iParam0) // Position - 0x7207 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_93(iParam0))
		return -1;

	return func_413(func_254(iParam0));
}

void func_201(int iParam0) // Position - 0x7227 Hash - 0x353ECB1E ^0x7492E51F
{
	const char* str;
	Hash hashKey;
	Vector3 vector;
	var unk3;
	var unk11;
	Any any;

	if (!func_414(iParam0))
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

void func_202(int iParam0) // Position - 0x72DF Hash - 0x84E45CF3 ^0x84E45CF3
{
	if (!func_93(iParam0))
		return;

	func_416(iParam0, func_415(iParam0) + 1);
	return;
}

int func_203(int iParam0, int iParam1) // Position - 0x7302 Hash - 0xD0889B29 ^0xA908D477
{
	int num;

	num = func_272(iParam0);

	if (num >= 0)
		return num;

	if (Global_1898164.f_162 >= 32)
		return -1;

	num = Global_1898164.f_162;
	func_417(iParam0, num);
	Global_1898164.f_162 = Global_1898164.f_162 + 1;

	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
		return num;

	func_418(num, iParam1);
	return iParam1;
}

void func_204(Hash hParam0, int iParam1) // Position - 0x736F Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_205(int iParam0, int iParam1) // Position - 0x7382 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_206(int iParam0) // Position - 0x7397 Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_207(BOOL bParam0) // Position - 0x73B5 Hash - 0xB3088780 ^0xB3088780
{
	func_419(bParam0);
	func_420(bParam0);
	func_421(bParam0);
	func_422(bParam0);
	func_423(bParam0);
	func_424(bParam0);
	func_425(bParam0);
	func_426(bParam0);
	return;
}

void func_208(BOOL bParam0) // Position - 0x73ED Hash - 0x9114E741 ^0x8984E174
{
	if (func_157() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_35(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_35(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_427(1, bParam0, true);
	func_428();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_209(int iParam0) // Position - 0x745B Hash - 0x72B3FC21 ^0x3909C54
{
	int num;

	num = 0;

	if (func_157() != -1)
		num = 1;

	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = num;
	func_429(Global_1898077.f_7, Global_1898077.f_3);
	return;
}

void func_210(int iParam0) // Position - 0x749F Hash - 0x6D69048D ^0xDB432840
{
	int num;

	if (Global_1898077.f_1 == 2)
		return;

	num = 0;

	if (func_157() != -1)
		num = 1;

	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = num;
	func_430(Global_1898077.f_7, Global_1898077.f_4);
	return;
}

BOOL func_211(const char* sParam0) // Position - 0x74F0 Hash - 0xD6E12BEB ^0xEA2A5D7A
{
	return AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0);
}

Ped func_212(Ped pedParam0) // Position - 0x74FE Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_213(Ped pedParam0) // Position - 0x7508 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_214(Ped pedParam0) // Position - 0x753A Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

int func_215(int* piParam0, var uParam1, int iParam2) // Position - 0x757C Hash - 0xDF990E30 ^0x2E9B9C78
{
	if (!ENTITY::DOES_ENTITY_EXIST(piParam0->f_60) || !func_6(*uParam1, 0))
		return 1;

	if (ENTITY::IS_ENTITY_ON_SCREEN(piParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(piParam0->f_60) && iParam2 == 0)
		return 0;

	if (_IS_NULL_VECTOR(piParam0->f_57))
		func_431(piParam0, uParam1);

	func_406(piParam0->f_60, piParam0->f_57);
	piParam0->f_57 = { 0f, 0f, 0f };
	piParam0->f_60 = 0;
	return 0;
}

void func_216(var uParam0) // Position - 0x75FB Hash - 0x43696AC2 ^0x4C06F87D
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}

	return;
}

void func_217(int* piParam0, BOOL bParam1) // Position - 0x7621 Hash - 0x62A0A33D ^0xABD3BF66
{
	*piParam0 = 0;
	piParam0->f_1 = -1;
	piParam0->f_2 = 0;
	func_88(&(piParam0->f_18));

	if (bParam1)
	{
		piParam0->f_21 = 0;
		piParam0->f_25 = 0f;
		piParam0->f_26 = 30f;
		piParam0->f_27 = 1.25f;
		piParam0->f_29 = 10f;
		piParam0->f_30 = 50f;
		piParam0->f_31 = 30f;
		piParam0->f_32 = 21f;
		piParam0->f_33 = 20f;
		piParam0->f_34 = 5f;
		piParam0->f_28 = 0;
		piParam0->f_60 = 0;
		piParam0->f_57 = { 0f, 0f, 0f };
		piParam0->f_55 = 0;
		func_88(&(piParam0->f_22));
		func_88(&(piParam0->f_37));
		func_88(&(piParam0->f_40));
		func_88(&(piParam0->f_43));
		func_88(&(piParam0->f_49));
		func_88(&(piParam0->f_52));
		func_221(piParam0);
		func_222(piParam0);
	
		if (MAP::DOES_BLIP_EXIST(piParam0->f_56))
			MAP::REMOVE_BLIP(&(piParam0->f_56));
	}

	return;
}

void func_218(int* piParam0, BOOL bParam1) // Position - 0x76F9 Hash - 0x2BFBDE8B ^0x2E27223
{
	if (!MISC::IS_BIT_SET(*piParam0, 7))
		if (bParam1)
			CAM::_FORCE_LETTER_BOX_THIS_UPDATE();
		else
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);

	if (MISC::IS_BIT_SET(piParam0->f_21, 3))
		MISC::CLEAR_BIT(&(piParam0->f_21), 3);

	if (MISC::IS_BIT_SET(piParam0->f_21, 4))
		MISC::CLEAR_BIT(&(piParam0->f_21), 4);

	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
	return;
}

void func_219(int* piParam0) // Position - 0x7757 Hash - 0xEA7F3270 ^0x9E09620
{
	if (MISC::IS_BIT_SET(piParam0->f_21, 5))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		MISC::CLEAR_BIT(&(piParam0->f_21), 5);
	}

	func_432();
	return;
}

void func_220(int* piParam0, Ped pedParam1) // Position - 0x7781 Hash - 0x171D4488 ^0xFB72586B
{
	Blip blipFromEntity;

	if (!func_6(pedParam1, 0))
		return;

	blipFromEntity = MAP::GET_BLIP_FROM_ENTITY(pedParam1);

	if (!MAP::DOES_BLIP_EXIST(blipFromEntity))
		if (MAP::DOES_BLIP_EXIST(piParam0->f_56))
			blipFromEntity = piParam0->f_56;
		else
			return;

	if (MISC::IS_BIT_SET(piParam0->f_21, 16))
		MISC::CLEAR_BIT(&(piParam0->f_21), 16);

	if (MISC::IS_BIT_SET(piParam0->f_21, 17))
		MISC::CLEAR_BIT(&(piParam0->f_21), 17);

	if (MISC::IS_BIT_SET(piParam0->f_21, 18))
		MISC::CLEAR_BIT(&(piParam0->f_21), 18);

	if (MAP::_0x3CB8859F04763C78(pedParam1, blipFromEntity))
		MAP::_0x44813684F72B563C(pedParam1, blipFromEntity);

	if (piParam0->f_55 != 0)
		piParam0->f_55 = 0;

	return;
}

void func_221(int* piParam0) // Position - 0x7825 Hash - 0xE11CABA8 ^0x85B5F443
{
	if (MISC::IS_BIT_SET(piParam0->f_21, 2) && VOLUME::DOES_VOLUME_EXIST(piParam0->f_35))
	{
		func_433(piParam0->f_35);
		func_434(piParam0->f_35);
		MISC::CLEAR_BIT(&(piParam0->f_21), 2);
	}

	return;
}

void func_222(int* piParam0) // Position - 0x785F Hash - 0xA356DEF0 ^0x20081EEF
{
	func_434(piParam0->f_36);
	return;
}

BOOL func_223(const char* sParam0) // Position - 0x786F Hash - 0x3AD0FC ^0xE11B0735
{
	var unk;

	if (!_IS_NULL_VECTOR(sParam0->f_375) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(sParam0->f_35.f_156))
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sParam0->f_35.f_156, sParam0->f_375, 0f, 0f, sParam0->f_378, 2);

	TEXT_LABEL_COPY(&unk, { sParam0->f_17 }, 4);

	if (func_435(unk, &(sParam0->f_35)))
		return 1;

	return 0;
}

BOOL func_224(int iParam0, BOOL bParam1) // Position - 0x78CF Hash - 0xF6905B76 ^0x4F37D8F8
{
	Ped ped;

	ped = func_41(iParam0);

	if (bParam1)
		if (!func_6(ped, 0))
			return false;

	return PED::IS_PED_GROUP_MEMBER(ped, func_229(), true);
}

void func_225(int iParam0, BOOL bParam1) // Position - 0x78FE Hash - 0x6749A4DF ^0xA0D5EA05
{
	Ped ped;
	int playerGroup;

	ped = Global_1360165[iParam0 /*1157*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_71(iParam0))
		return;

	playerGroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());

	if (PED::IS_PED_GROUP_MEMBER(ped, playerGroup, false))
		return;

	COMPANION::_ACTIVATE_COMPANION_ANALYSIS(func_229());
	PED::SET_PED_CONFIG_FLAG(ped, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(ped, playerGroup);

	if (bParam1)
		func_436(iParam0, true, Global_35);

	return;
}

BOOL func_226() // Position - 0x7979 Hash - 0xB9EF58B7 ^0xB9EF58B7
{
	return func_228(true) < 3;
}

void func_227(int iParam0, BOOL bParam1, char* sParam2) // Position - 0x7988 Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_41(iParam0);

	if (!func_71(iParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

int func_228(BOOL bParam0) // Position - 0x79CF Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_135(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_229(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_229(), i);
	
		if (func_437(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

int func_229() // Position - 0x7A2F Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_230(int iParam0) // Position - 0x7A3F Hash - 0x6AEDC7B3 ^0x6AEDC7B3
{
	int num;
	int num2;

	if (func_71(iParam0))
	{
		num = 0;
		num2 = 0;
	
		switch (iParam0)
		{
			case 2:
				func_438(&num, 1);
				break;
		
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_438(&num, 8);
				func_438(&num, 5);
				func_438(&num2, 4);
				func_438(&num2, 0);
				break;
		
			case 14:
				func_438(&num, 8);
				func_438(&num2, 4);
				func_438(&num2, 5);
				func_438(&num2, 0);
				break;
		}
	
		COMPANION::_ADD_COMPANION_FLAG(func_41(iParam0), num);
		COMPANION::_REMOVE_COMPANION_FLAG(func_41(iParam0), num2);
	}

	return;
}

BOOL func_231(int iParam0) // Position - 0x7AFC Hash - 0x6410553A ^0x46627D03
{
	if (!func_75(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_232(int iParam0) // Position - 0x7B48 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_75(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_233(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7B70 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_75(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_234(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7BD5 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_75(iParam0))
		return 0;

	mount = func_91(iParam0);

	if (func_6(mount, 0))
	{
		if (func_6(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_231(iParam0) || func_232(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_439(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_440(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_441(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_442(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_442(iParam0, false));
					func_443(iParam0);
				}
			}
			else
			{
				if (func_246(iParam0, 32768, true))
				{
					persChar = func_442(iParam0, false);
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
		if (func_6(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_246(iParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_441(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_442(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_442(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_441(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_444(iParam0, 0);
	return 1;
}

BOOL func_235(int iParam0) // Position - 0x7D86 Hash - 0x8230F59D ^0x236A0FDB
{
	if (!func_75(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_140 != 0 || Global_1360165[iParam0 /*1157*/].f_141 != 0)
		return true;

	return false;
}

BOOL func_236(int iParam0, int iParam1) // Position - 0x7DC4 Hash - 0x981D3D03 ^0xFA6AD872
{
	if (!func_75(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_140 && iParam1 != false)
		return true;

	if (Global_1360165[iParam0 /*1157*/].f_141 && iParam1 != false)
		return true;

	return false;
}

int func_237(int iParam0) // Position - 0x7E07 Hash - 0x7A7437C7 ^0x7A7437C7
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
	
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
	
		case 2:
		case 64:
			return 3;
	
		case 4:
		case 8:
		case 128:
			return 2;
	
		case 512:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_238(int iParam0) // Position - 0x7E80 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_239(int iParam0) // Position - 0x7EA5 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_240(int iParam0) // Position - 0x7EB8 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_241(int iParam0) // Position - 0x7ECB Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_242(int iParam0) // Position - 0x7EDE Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_243(int iParam0) // Position - 0x7EF0 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_244(int iParam0, int iParam1) // Position - 0x7F02 Hash - 0x893AC59E ^0x893AC59E
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

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7F9C Hash - 0xA65AB937 ^0xA65AB937
{
	func_446(uParam0, iParam6);
	func_447(uParam0, iParam5);
	func_448(uParam0, iParam4);
	func_449(uParam0, iParam3);
	func_450(uParam0, iParam2);
	func_451(uParam0, iParam1);
	return;
}

BOOL func_246(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7FD4 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_75(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

BOOL func_247(int iParam0, int iParam1) // Position - 0x7FFE Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_248(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8010 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

void func_249(int iParam0) // Position - 0x8036 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_75(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_452(iParam0);
	
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

void func_250(int iParam0) // Position - 0x809E Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_71(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_41(iParam0)))
		{
			func_319(iParam0, 67108864, true);
			func_7(iParam0, 19, true);
		}
	}

	return;
}

float func_251(int iParam0) // Position - 0x80D1 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_75(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_252(int iParam0) // Position - 0x80F2 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_41(iParam0);
	persChar = func_84(iParam0, false);
	func_453(iParam0, ped);

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

int func_253(int iParam0) // Position - 0x814C Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_254(int iParam0) // Position - 0x81CD Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_255(BOOL bParam0) // Position - 0x820B Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_256() // Position - 0x8218 Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_257(int iParam0) // Position - 0x826B Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_258(int iParam0, int iParam1) // Position - 0x8281 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_259(int iParam0) // Position - 0x8290 Hash - 0xEE599357 ^0xEE599357
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

int func_260(int iParam0) // Position - 0x8497 Hash - 0xBC835308 ^0xBC835308
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

void func_261(int iParam0, var uParam1) // Position - 0x859F Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_262() // Position - 0x85BA Hash - 0xD5B66211 ^0x9B76C225
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

int func_263(int iParam0) // Position - 0x861F Hash - 0x6761E6A0 ^0x6761E6A0
{
	switch (iParam0)
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
	
		case 128:
			return 123;
	
		default:
		
	}

	return 0;
}

void func_264(var uParam0, var uParam1, var uParam2) // Position - 0x8A34 Hash - 0xD64E984D ^0x9D3A2521
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	unk.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &unk, 3, 3);
	return;
}

BOOL func_265(int iParam0, BOOL bParam1) // Position - 0x8A55 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_196(iParam0))
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

void func_266(int iParam0, int iParam1) // Position - 0x8A86 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_454(iParam0);
	else
		func_455(iParam0, iParam1);

	func_456();
	return;
}

void func_267(int iParam0, int iParam1) // Position - 0x8ACE Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_268(int iParam0) // Position - 0x8AE3 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_457(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_269(int iParam0) // Position - 0x8B32 Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_93(iParam0))
		return false;

	switch (func_95(iParam0))
	{
		case 1:
			switch (func_200(iParam0))
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
			switch (func_200(iParam0))
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

void func_270(int iParam0) // Position - 0x8C0B Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_458(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_459(item) == iParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_461(func_460(iParam0), 6);
	return;
}

void func_271(int iParam0) // Position - 0x8C5F Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_458(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_459(item) == iParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_462(func_460(iParam0), 6);
	return;
}

int func_272(int iParam0) // Position - 0x8CB4 Hash - 0xBA803397 ^0x906286B5
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

int func_273(int iParam0) // Position - 0x8CFC Hash - 0xD83A1109 ^0x154A194E
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
	func_418(iParam0, Global_1898164.f_162);
	return 1;
}

BOOL func_274(int iParam0) // Position - 0x8D6B Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_463(iParam0, 2);
}

BOOL func_275(int iParam0, Hash hParam1) // Position - 0x8D7A Hash - 0xBEA460B2 ^0x349C488E
{
	return Global_40.f_4942[iParam0 /*60*/].f_8 == hParam1;
}

BOOL func_276(int iParam0, Hash hParam1, var uParam2) // Position - 0x8D91 Hash - 0x74D89BFB ^0x3D78CCFD
{
	*uParam2 = 0;

	while (*uParam2 < 10)
	{
		if (Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/] == hParam1)
			return true;
	
		*uParam2 = *uParam2 + 1;
	}

	*uParam2 = -1;
	return false;
}

BOOL func_277(int iParam0, Hash hParam1) // Position - 0x8DCF Hash - 0x5D778EC2 ^0x5D778EC2
{
	int num;

	if (!func_75(iParam0))
		return false;

	if (func_275(iParam0, hParam1))
		return func_464(iParam0);

	num = -1;

	if (func_276(iParam0, hParam1, &num))
		return func_280(iParam0, num);

	return false;
}

void func_278(int iParam0, Hash hParam1) // Position - 0x8E15 Hash - 0xF1187F65 ^0x333D752B
{
	Ped ped;

	ped = func_41(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		PED::_0x2B4CE170DE09F346(ped, hParam1);

	func_465(iParam0, hParam1, false);
	return;
}

void func_279(Hash hParam0) // Position - 0x8E42 Hash - 0xE2CD9F47 ^0x1C91C1C5
{
	*hParam0 = 0;
	hParam0->f_1 = -15;
	hParam0->f_2 = 0;
	return;
}

BOOL func_280(int iParam0, int iParam1) // Position - 0x8E5A Hash - 0xADADEF61 ^0x3239C349
{
	if (!func_75(iParam0) || iParam1 < 0 || iParam1 >= 10)
		return false;

	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1);
}

void func_281(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8E97 Hash - 0xA6162D2D ^0xECEEA1D5
{
	if (!func_75(iParam0) || iParam1 < 0 || iParam1 >= 10)
		return;

	if (bParam2)
		if (!MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
			MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
	else if (MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
		MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);

	return;
}

BOOL func_282(var uParam0, int iParam1) // Position - 0x8F18 Hash - 0x548DEB5E ^0x26E590C3
{
	return *uParam0 && BUILTIN::SHIFT_LEFT(1, iParam1) != false;
}

BOOL func_283(int iParam0) // Position - 0x8F2D Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_466(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

void func_284(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x8F51 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_467(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

char* func_285() // Position - 0x8FAE Hash - 0x306ACA3A ^0x10545F3A
{
	return "script@common@cnv_camp@camch@crob2@crob2_loop_calls_leadin";
}

Vector3 func_286() // Position - 0x8FBA Hash - 0x21158019 ^0x21158019
{
	return 1867.34f, -1861.64f, 42.02f;
}

Vector3 func_287() // Position - 0x8FD1 Hash - 0x21158019 ^0x21158019
{
	return 0.41f, 0.09f, -1.32f;
}

void func_288() // Position - 0x8FE8 Hash - 0x4C9C4451 ^0x66001A56
{
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_135, sLocal_136, true);

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_135, false))
		ANIMSCENE::START_ANIM_SCENE(ansLocal_135);

	ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(ansLocal_135, sLocal_136);
	return;
}

int func_289(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x9013 Hash - 0x175892DC ^0xF10F49E5
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	return func_468(pedParam0, entityCoords, iParam2);
}

Player func_290(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17) // Position - 0x9033 Hash - 0x9338D9C0 ^0x2F425F02
{
	Player player;

	if (!func_75(iParam1))
		return 0;

	player = func_91(iParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(player) || !func_6(player, 0) || bParam3 && !func_232(iParam1))
	{
		if (bParam2)
		{
			if (func_440(iParam1, true) != 0)
			{
				player = func_469(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, bParam17);
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

	if (ENTITY::DOES_ENTITY_EXIST(player) && func_6(player, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_470(iParam1, player);
		func_471(iParam1, bParam13, bParam14, true);
		return player;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}

	return 0;
}

Ped func_291(var uParam0, var uParam1) // Position - 0x910A Hash - 0x6747FB46 ^0x33F721B4
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

	uParam1->f_10 = func_472(uParam1->f_10);

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

	flag = func_473();

	if (*uParam1)
	{
		if (flag && !func_265(Global_1835011[4 /*74*/].f_1, true))
		{
			if (func_474(5))
			{
				func_475(5);
				func_476(5);
				func_477(0);
				func_478(0);
			}
		}
	}

	if (func_479(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_265(Global_1835011[37 /*74*/].f_1, true) && !func_265(Global_1835011[43 /*74*/].f_1, true))
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_265(Global_1835011[43 /*74*/].f_1, true) && !func_265(Global_1835011[44 /*74*/].f_1, true))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	num = uParam1->f_10;
	mount = func_480(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_481(num))
	{
		flag2 = true;
	
		if (func_482(num))
			flag3 = true;
	
		if (func_483(num))
			flag4 = true;
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag4 && !uParam1->f_5)
			{
				func_484(uParam1->f_10);
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
			if (!func_474(0) && func_474(1))
			{
				func_485(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_486())
				func_487();
		
			func_477(0);
			func_478(0);
			func_488(uParam1->f_6);
		}
	}

	if (!func_481(uParam1->f_10))
	{
		if (*uParam1)
		{
			if (func_489(uParam1->f_10) == 0 || func_490(uParam1->f_10) == 0 || func_491(uParam1->f_10) == 0)
				func_492(uParam1->f_10);
		
			func_493(uParam1->f_10);
			func_494(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
	
		*uParam0 = 1;
		return 0;
	}

	num = uParam1->f_10;
	mount = func_480(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_481(num))
	{
		flag2 = true;
	
		if (func_482(num))
			flag3 = true;
	
		if (func_483(num))
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

	if (func_495(uParam1->f_10))
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
		
			unk = { func_496(uParam1->f_10) };
			unk3 = { func_497() };
			func_498(mount, &unk, &unk3, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
			PED::SET_PED_CONFIG_FLAG(mount, 186, false);
		}
	}

	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return mount;
	}

	if (!func_499(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
		func_500(uParam1->f_10);
	
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

	func_501(uParam1->f_10);

	if (func_499(uParam1->f_10))
	{
		num2 = func_502(uParam1->f_10);
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

BOOL func_292(int iParam0, int iParam1) // Position - 0x957F Hash - 0x63F6278D ^0x98AA8E70
{
	if (!func_75(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1 != false;
}

BOOL func_293(int iParam0, Player plParam1, BOOL bParam2) // Position - 0x95A7 Hash - 0xB5B0CDA5 ^0xA3D20AE
{
	int num;

	if (!func_75(iParam0))
		return false;

	if (func_292(iParam0, 256))
		return true;

	num = 0;

	if (bParam2)
		num = 256;

	if (!func_6(plParam1, num))
		return false;

	PED::_EQUIP_META_PED_OUTFIT(plParam1, func_503(iParam0));
	PED::_UPDATE_PED_VARIATION(plParam1, false, true, true, true, false);
	func_233(iParam0, 256, true);
	return true;
}

BOOL func_294(Ped pedParam0, Hash hParam1) // Position - 0x960C Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_295(Ped pedParam0, Hash hParam1) // Position - 0x963A Hash - 0xA54F3032 ^0xDB280E72
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

BOOL func_296(Ped pedParam0, Hash hParam1) // Position - 0x968B Hash - 0xA54F3032 ^0xDB280E72
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_294(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_297(Ped pedParam0) // Position - 0x96FD Hash - 0x446F1BDD ^0x534256FE
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_298(Hash hParam0) // Position - 0x971B Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_299(Hash hParam0) // Position - 0x9736 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

int func_300(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x975E Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_504(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_505(398 + i, 1);
		
			if (func_506(hParam0, &unk, hash, false))
			{
				if (func_507(hParam0, &unk6, hash))
				{
					unk28 = { func_508(hParam0, unk, hash, false) };
					func_509(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_510(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_511(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_512(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_301(Player plParam0, var uParam1, var uParam2) // Position - 0x98B0 Hash - 0x236D39D4 ^0x39F583A
{
	BOOL flag;
	Hash entityModel;

	flag = true;
	entityModel = ENTITY::GET_ENTITY_MODEL(plParam0);

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
		
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(plParam0) == joaat("rel_gang_dutchs"))
				flag = false;
			break;
	}

	if (flag)
		PED::SET_PED_CONFIG_FLAG(plParam0, 361, true);

	return;
}

BOOL func_302(Hash hParam0) // Position - 0x9AC7 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

BOOL func_303(var uParam0, Entity eParam1, const char* sParam2, Hash hParam3, BOOL bParam4, BOOL bParam5) // Position - 0x9AD9 Hash - 0xFA6F6AA8 ^0x26D90E38
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return 0;

	if (bParam4 && ENTITY::IS_ENTITY_DEAD(eParam1))
		return 0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		sParam2 = func_513(eParam1);

	if (hParam3 == 0)
		hParam3 = ENTITY::GET_ENTITY_MODEL(eParam1);

	MISC::IS_STRING_NULL_OR_EMPTY(sParam2);

	if (!func_514(uParam0, eParam1, 4))
	{
		if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_156, sParam2))
		{
			func_515(uParam0, eParam1, 4);
			return 1;
		}
		else if (bParam5 && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_156, sParam2))
		{
			func_515(uParam0, eParam1, 4);
			return 1;
		}
	}

	return 0;
}

void func_304(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x9B77 Hash - 0xFDACD718 ^0x658C9335
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

BOOL func_305(int iParam0) // Position - 0x9BC9 Hash - 0x261B98DE ^0x261B98DE
{
	return func_246(iParam0, 4, true);
}

void func_306(var uParam0, int iParam1) // Position - 0x9BD9 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_307(int iParam0, int iParam1) // Position - 0x9BEE Hash - 0xF578F01A ^0xAC123A5D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
			return -445211559;
	
		case 3:
		case 4:
		case 18:
			return 1744281750;
	
		case 11:
			return -946772361;
	
		case 13:
		case 14:
			if (iParam1 == 7 || iParam1 == 8)
				return -1205468859;
		
			return -445211559;
	
		default:
		
	}

	return 0;
}

int func_308(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9CB1 Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_75(iParam0))
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
					if (func_265(Global_1835011[4 /*74*/].f_1, true))
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
					if (func_516(num, 9, 11))
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
					if (func_265(Global_1347702[63 /*49*/].f_15, true) || func_51(Global_1347702[63 /*49*/].f_15))
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
					if (func_516(num, 9, 12))
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
					if (!func_265(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_246(18, 134217728, true))
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
					if (func_516(num, 9, 11))
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
					if (func_265(Global_1347702[134 /*49*/].f_15, true) || func_51(Global_1347702[134 /*49*/].f_15))
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
					if (func_265(Global_1835011[38 /*74*/].f_1, true))
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
					if (func_516(num, 9, 11))
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
					if (func_123(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_265(Global_1347702[1 /*49*/].f_15, true))
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

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_41(iParam0)))
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

	if (!func_313(iParam0, num2))
		num2 = Global_40.f_4942[iParam0 /*60*/].f_3;

	return num2;
}

void func_309(int iParam0, int iParam1, BOOL bParam2) // Position - 0xAA99 Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_71(iParam0))
		return;

	if (!func_313(iParam0, iParam1))
		return;

	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_78(iParam0, 25, true);

	return;
}

void func_310(int iParam0, int iParam1) // Position - 0xAAD9 Hash - 0x61FF61E0 ^0x2C6117ED
{
	if (!func_75(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
	return;
}

BOOL func_311(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0xAAFB Hash - 0x5B7A656E ^0x3AAC2B26
{
	if (!func_75(iParam0))
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
					iParam4 = func_308(iParam0, iParam9, bParam7, true);
				else if (Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59 && func_10(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_51(Global_1360165[iParam0 /*1157*/].f_4.f_2))
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				else
					iParam4 = func_308(iParam0, Global_40.f_4283, bParam7, true);
			
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_517(Global_1360165[iParam0 /*1157*/].f_63))
					if (!func_518(iParam0, false))
						func_78(iParam0, 25, false);
			}
		
			Global_1360165[iParam0 /*1157*/].f_4 = { func_519(iParam0, iParam4, uParam1, bParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
		
			if (!bParam6)
				func_7(iParam0, 44, true);
		
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
			[[fallthrough]];
	
		case 2:
			if (!func_6(func_41(iParam0), 0))
				return false;
		
			if (bParam5 && bParam10)
				if (!func_6(func_91(iParam0), 0))
					return false;
		
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
			[[fallthrough]];
	
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

void func_312(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xACE4 Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_71(iParam0))
		return;

	if (bParam1)
		func_520(iParam0, bParam3);
	else
		func_521(iParam0, bParam3);

	if (bParam2)
		func_522(iParam0, bParam3);
	else
		func_523(iParam0, bParam3);

	return;
}

BOOL func_313(int iParam0, int iParam1) // Position - 0xAD29 Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_71(iParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_524(iParam0, iParam1);
	return flag;
}

void func_314(int iParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0xAD68 Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_525(iParam2))
		{
			hash = func_526(iParam2, -1);
		
			if (func_294(pedParam1, hash))
			{
				if (func_295(pedParam1, hash))
				{
					if (func_296(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_297(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_527(iParam0, pedParam1, false);
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
			func_78(iParam0, 66, false);
	}

	return;
}

void func_315(int iParam0) // Position - 0xAE3E Hash - 0x73C1F6C ^0x73C1F6C
{
	func_528(iParam0);
	func_529(iParam0, false);
	return;
}

void func_316(Ped pedParam0, int iParam1) // Position - 0xAE53 Hash - 0x7F605CB ^0x28CA17AF
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

BOOL func_317(Ped pedParam0) // Position - 0xAEAE Hash - 0x4E8A039F ^0x9F8FB293
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

void func_318(int iParam0, Ped pedParam1) // Position - 0xAF2C Hash - 0x9D727A3E ^0xB12CD64B
{
	if (!func_75(iParam0))
		return;

	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_129(pedParam1, joaat("weapon_revolver_cattleman_sadie"), false, false, 2, true, false, 1056964608, 1065353216, -1, false, false, false, false);
				func_129(pedParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), false, false, 3, true, true, 1056964608, 1065353216, -1, false, true, false, false);
			}
			break;
	}

	return;
}

void func_319(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAFA6 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_71(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

int func_320(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAFD7 Hash - 0x4C6F92F6 ^0x312B6988
{
	return STREAMING::_REQUEST_SCENARIO_TYPE(hParam0, iParam1, iParam2, iParam3);
}

int func_321(int iParam0) // Position - 0xAFEB Hash - 0xB8EC44B7 ^0x1FC50412
{
	switch (iParam0)
	{
		case 0:
			return joaat("CC_COLTER");
	
		case 1:
			return joaat("CC_HORSESHOE_OVERLOOK");
	
		case 2:
			return joaat("CC_CLEMENS_POINT");
	
		case 3:
			return joaat("CC_SHADY_BELLE");
	
		case 4:
			return joaat("CC_GUARMA");
	
		case 5:
			return joaat("CC_LAKAY");
	
		case 6:
			return joaat("CC_BEAVER_HOLLOW");
	
		case 7:
			return joaat("CC_PRONGHORN_RANCH");
	
		case 8:
			return joaat("CC_BEECHERS_HOPE");
	
		default:
		
	}

	return 991030100;
}

BOOL func_322(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0xB07E Hash - 0x6EB69AE6 ^0xE9AB1EC1
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

BOOL func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, BOOL bParam7) // Position - 0xB0AE Hash - 0x75EEBFEF ^0xA888E94A
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

BOOL func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0xB0D4 Hash - 0x75EEBFEF ^0x20737992
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

int func_325(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float* pfParam6, BOOL bParam7) // Position - 0xB0FA Hash - 0x75EEBFEF ^0x896914A8
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

void func_326(var uParam0, const char* sParam1) // Position - 0xB120 Hash - 0x33E0130D ^0x1BD61AE9
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_158), sParam1, 64);
	return;
}

void func_327(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xB13C Hash - 0x5562A11D ^0x144C4646
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
		return;

	uParam0->f_166 = { uParam1 };
	return;
}

BOOL func_328(Hash hParam0) // Position - 0xB15C Hash - 0xF47DA3FB ^0x3523541A
{
	return STREAMING::_HAS_SCENARIO_TYPE_LOADED(hParam0, false);
}

int func_329() // Position - 0xB16B Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

int func_330(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0xB174 Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, fParam5, fParam6, bParam7);
}

void func_331(var uParam0, Ped pedParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xB18E Hash - 0x9240AF10 ^0x9240AF10
{
	func_530(uParam0, pedParam1, sParam2, iParam3, iParam4, bParam5);
	return;
}

BOOL func_332(int iParam0, var uParam1) // Position - 0xB1A6 Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_71(iParam0))
		return false;

	num = func_62(iParam0);
	return *uParam1 && num != false;
}

BOOL func_333(var uParam0, char* sParam1, int iParam2) // Position - 0xB1CC Hash - 0x64FAEF0B ^0xCA2E0BC7
{
	var unk;

	unk = Global_1359489.f_21;
	unk.f_1 = 0;
	unk.f_2 = 429892159;
	unk.f_3 = func_321(func_136());

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 13127246;
		unk.f_3 = uParam0->f_9;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_3 = func_531(iParam2);
		
			if (func_323(unk, 443199092, sParam1, false))
				return true;
		}
	}

	return false;
}

void func_334(var uParam0, float fParam1) // Position - 0xB242 Hash - 0x4F8BE4B5 ^0xF8B7BE9E
{
	uParam0->f_146 = fParam1;
	return;
}

void func_335(var uParam0, float fParam1) // Position - 0xB250 Hash - 0x4F8BE4B5 ^0x88E0C538
{
	uParam0->f_147 = fParam1;
	return;
}

void func_336(int iParam0, const char* sParam1, var uParam2, BOOL bParam3) // Position - 0xB25E Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_12(iParam0))
		return;

	num = func_109(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, uParam2));
	return;
}

void func_337(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0xB2AE Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_12(iParam0))
		return;

	num = func_109(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

void func_338(int* piParam0, const char* sParam1) // Position - 0xB2F7 Hash - 0x94802979 ^0xDA357E7D
{
	if (func_12(piParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		func_337(piParam0->f_6, sParam1, true);

	piParam0->f_5 = sParam1;
	func_532(piParam0, 1);
	return;
}

void func_339(int* piParam0, Blip blParam1, int iParam2) // Position - 0xB32E Hash - 0xC38A988B ^0x6946F580
{
	if (MAP::DOES_BLIP_EXIST(blParam1))
	{
		piParam0->f_56 = blParam1;
	
		if (!MISC::IS_BIT_SET(piParam0->f_21, 16))
			MISC::SET_BIT(&(piParam0->f_21), 16);
	}
	else if (MISC::IS_BIT_SET(piParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(piParam0->f_21), 16);
	}

	if (iParam2 != 0)
		piParam0->f_55 = iParam2;

	if (MISC::IS_BIT_SET(piParam0->f_21, 17))
		MISC::CLEAR_BIT(&(piParam0->f_21), 17);

	if (MISC::IS_BIT_SET(piParam0->f_21, 18))
		MISC::CLEAR_BIT(&(piParam0->f_21), 18);

	return;
}

void func_340(var uParam0, int iParam1) // Position - 0xB3B1 Hash - 0xABD431B6 ^0xFF994DFF
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (i == iParam1)
			if (!MISC::IS_BIT_SET(uParam0->[i /*17*/], 12))
				MISC::SET_BIT(&uParam0->[i /*17*/], 12);
		else if (MISC::IS_BIT_SET(uParam0->[i /*17*/], 12))
			MISC::CLEAR_BIT(&uParam0->[i /*17*/], 12);
	}

	return;
}

void func_341(int* piParam0, int iParam1) // Position - 0xB40E Hash - 0x66A717B ^0x3215FABF
{
	func_88(&(piParam0->f_22));
	piParam0->f_25 = iParam1;
	return;
}

void func_342(int* piParam0, int iParam1) // Position - 0xB424 Hash - 0x183230CC ^0x883705D6
{
	if (!MISC::IS_BIT_SET(*piParam0, 14))
	{
		piParam0->f_26 = iParam1;
		MISC::SET_BIT(piParam0, 14);
	}

	return;
}

void func_343(int iParam0) // Position - 0xB447 Hash - 0xFD8725A9 ^0x22D0EE31
{
	int i;

	if (!func_71(iParam0))
		return;

	func_533(iParam0, false, &(Global_40.f_4942[iParam0 /*60*/].f_8));

	for (i = 0; i < 10; i = i + 1)
	{
		func_533(iParam0, false, &Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/]);
	}

	return;
}

BOOL func_344(int iParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, int iParam5) // Position - 0xB499 Hash - 0x61E9D2FB ^0x61E9D2FB
{
	int num;
	int num2;
	int num3;

	if (bParam3)
	{
		if (func_276(iParam0, hParam1, uParam2))
		{
			if (iParam4 > 0 || iParam5 > 0)
			{
				num = func_534();
				func_73(&num, 0, iParam4, iParam5, 0, 0, 0, true);
				Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = num;
			}
			else
			{
				Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = -15;
			}
		
			return true;
		}
	}

	*uParam2 = 0;
	*uParam2 = 0;

	while (*uParam2 < 10)
	{
		if (!func_114(Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/]))
		{
			num2 = -15;
		
			if (iParam4 > 0 || iParam5 > 0)
			{
				num2 = func_534();
				func_73(&num2, 0, iParam4, iParam5, 0, 0, 0, true);
			}
		
			Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/] = hParam1;
			Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = num2;
			Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_2 = 0;
			return true;
		}
	
		*uParam2 = *uParam2 + 1;
	}

	func_117(iParam0, 0);
	*uParam2 = 9;
	num3 = -15;

	if (iParam4 > 0 || iParam5 > 0)
	{
		num3 = func_534();
		func_73(&num3, 0, iParam4, iParam5, 0, 0, 0, true);
	}

	Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/] = hParam1;
	Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = num3;
	Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_2 = 0;
	return true;
}

BOOL func_345(int iParam0, Hash hParam1) // Position - 0xB61E Hash - 0x8531031E ^0x8531031E
{
	Ped ped;
	int num;
	var unk;

	if (!func_75(iParam0))
		return 0;

	if (func_535(iParam0, hParam1))
		return 0;

	ped = func_41(iParam0);

	if (!func_6(ped, 0))
		return 0;

	num = -1;

	if (!func_115(iParam0, hParam1, &num, &unk))
		return 0;

	func_277(iParam0, hParam1);

	if (!func_72(iParam0, 512, false))
		func_5(iParam0, 512, false, -1);

	if (PED::_0x1E017404784AA6A3(ped, hParam1))
	{
		func_465(iParam0, hParam1, true);
		return 1;
	}

	return 0;
}

Vector3 func_346(var uParam0) // Position - 0xB6B2 Hash - 0x9B0F3089 ^0x4735DE7C
{
	switch (uParam0->f_9)
	{
		case joaat("HAI_FISHING_01"):
			return 3.5f, 3.5f, 3f;
	
		case joaat("HAI_RUSTLING_02"):
			return 4.5f, 4.5f, 3f;
	}

	return 3f, 3f, 3f;
}

Volume func_347(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0xB6F5 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_536(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

BOOL func_348(var uParam0, var uParam1) // Position - 0xB739 Hash - 0x6147E0EA ^0xAECD99A9
{
	BOOL num;
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_332(i, &uParam1))
		{
		}
		else if (func_537(i))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(func_41(i), *uParam0, true, 0))
				num = 1;
		}
	}

	return num;
}

BOOL func_349(var uParam0) // Position - 0xB782 Hash - 0xFC62744D ^0xD016A193
{
	BOOL num;

	if (Global_1359489.f_672)
		return true;

	num = 1;

	if (func_251(*uParam0) < 100f)
		num = 0;

	if (BUILTIN::VDIST2(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_33, true)) < 100f)
		num = 0;

	if (func_151(uParam0->f_1, 1116471296, -1082130432, -1082130432, -1082130432) || CAM::IS_SPHERE_VISIBLE(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_33, true), 3f))
		num = 0;

	return num;
}

BOOL func_350(int iParam0) // Position - 0xB804 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("HAI_BANK_ROBBERY_01"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_351(int iParam0, int iParam1) // Position - 0xB81F Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_157() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_352(int iParam0) // Position - 0xB852 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_157() != -1)
		if (func_354(iParam0, 4))
			return false;
	else if (func_354(iParam0, 2))
		return false;

	return true;
}

BOOL func_353(int iParam0) // Position - 0xB882 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_354(iParam0, 65536) && !func_354(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_354(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_354(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_354(int iParam0, int iParam1) // Position - 0xB92E Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_355() // Position - 0xB947 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

void func_356(var uParam0, int iParam1) // Position - 0xB956 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_357(var uParam0, int iParam1) // Position - 0xB967 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

struct<8> func_358(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0xB97C Hash - 0xB13D7CEF ^0x4DD40A33
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

struct<4> func_359(var uParam0) // Position - 0xBA33 Hash - 0x612706C5 ^0x32E7E918
{
	return uParam0->f_152;
}

char* func_360(Ped pedParam0) // Position - 0xBA41 Hash - 0xDC22D902 ^0x8335BF5A
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
	return func_538(entityModel);
}

void func_361(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xBA8E Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_539(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_539(20))
				return;
		}
	}

	func_540(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_541(8);
	return;
}

void func_362(var uParam0) // Position - 0xBB92 Hash - 0xA0536A87 ^0xE1A3FD9C
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);

	return;
}

struct<8> func_363() // Position - 0xBBAE Hash - 0x964AA7CC ^0xC052966C
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NormalStart", 64);
	return unk;
}

BOOL func_364(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0xBBC3 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

char* func_365() // Position - 0xBBEC Hash - 0x306ACA3A ^0x6AD9DDE4
{
	return "unnamed";
}

void func_366(var uParam0, Volume volParam1, BOOL bParam2, BOOL bParam3) // Position - 0xBBF8 Hash - 0x7AEE4E7D ^0x4CE819C0
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

void func_367(var uParam0) // Position - 0xBC37 Hash - 0x5F57B079 ^0x7D8DB897
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
		return;

	for (i = 0; i < 11; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_542(&uParam0->f_13[i /*12*/], 2))
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, &(uParam0->f_13[i /*12*/].f_1)))
				func_543(&uParam0->f_13[i /*12*/], 1);
	}

	return;
}

void func_368(var uParam0, BOOL bParam1) // Position - 0xBCBD Hash - 0x8FB42144 ^0x2507202
{
	int i;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < 11; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_542(&uParam0->f_13[i /*12*/], 2))
		{
			if (func_542(&uParam0->f_13[i /*12*/], 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, &(uParam0->f_13[i /*12*/].f_1)))
			{
				func_544(uParam0, &(uParam0->f_13[i /*12*/].f_1), uParam0->f_13[i /*12*/], uParam0->f_13[i /*12*/].f_9);
			
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[i /*12*/]))
				{
					pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]);
				
					if (pedIndexFromEntityIndex != Global_35 && !func_542(&uParam0->f_13[i /*12*/], 16))
						func_545(pedIndexFromEntityIndex);
				}
			}
		}
	}

	return;
}

BOOL func_369(int iParam0, int iParam1) // Position - 0xBD92 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

struct<8> func_370(var uParam0) // Position - 0xBDA1 Hash - 0x2A5E80CA ^0x726AD207
{
	return uParam0->f_166;
}

struct<8> func_371() // Position - 0xBDB0 Hash - 0x964AA7CC ^0x77D30DD
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MultiStart", 64);
	return unk;
}

void func_372(var uParam0) // Position - 0xBDC5 Hash - 0x9DBECFB8 ^0xE52A4E97
{
	if (*uParam0 & 1 != 0)
		*uParam0 = *uParam0 | 64 | 16 | 16777216;

	return;
}

BOOL func_373(Ped pedParam0, int* piParam1, var uParam2) // Position - 0xBDE8 Hash - 0x84A3184B ^0x2FCA8561
{
	if (piParam1->f_11 != 0)
	{
		if (func_546(pedParam0, piParam1))
		{
			if (!func_547(piParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);
				func_385(uParam2, 0, false, true, false);
				func_548(&(piParam1->f_10), 1);
			}
		
			return true;
		}
		else if (func_547(piParam1->f_10, 1))
		{
			func_549(uParam2);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 178, false);
			func_550(&(piParam1->f_10), 1);
		}
	}

	return false;
}

BOOL func_374(var uParam0, int* piParam1, var uParam2, float fParam3, int iParam4, char* sParam5, Hash hParam6, int iParam7) // Position - 0xBE92 Hash - 0x95336F37 ^0x42E85BA7
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
		flag = func_547(iParam4, 32);
		func_551(piParam1, uParam2, false);
		prompt = func_552(*uParam0, piParam1, uParam2, fParam3, flag);
	
		if (flag)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
	
		func_385(uParam2, 0, false, true, false);
		num = 0;
	
		if (!func_547(iParam4, 16))
			num = num | 8;
	
		if (func_547(iParam4, 2048))
			num = num | 4;
	
		if (func_547(iParam4, 32768))
			num = num | 128;
	
		if (func_547(iParam4, 4096))
			num = num | 16;
	
		if (func_547(iParam4, 8388608) || func_547(iParam4, 8192))
			num = num | 256;
	
		if (func_547(iParam4, 4194304))
			num = num | 64;
	
		if (func_547(iParam4, 268435456))
			num = num | 8192;
	
		if (func_376(piParam1, 4))
		{
			num = num | 1024;
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
	
		if (!func_376(piParam1, 26))
			num = num | 32768;
	
		if (func_547(iParam4, 67108864))
			num = num | 16384;
	
		if (piParam1->f_6 < -1 || piParam1->f_6 > -1 && piParam1->f_6 > 3)
			piParam1->f_6 = -1;
	
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &text, fParam3, fParam3, num, piParam1->f_7, piParam1->f_8, prompt, false, piParam1->f_6))
		{
			if (hParam6 == 2)
				hParam6 = func_553(uParam0);
		
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
		
			if (func_547(iParam4, 268435456))
			{
				num2 = func_554(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
			
				if (num2 > -1)
					func_555(piParam1, &uParam2->[num2 /*17*/]);
			}
		
			if (func_376(piParam1, 23))
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
		
			if (func_547(iParam4, 2) || func_547(iParam4, 16))
				func_375(*uParam0, true, true);
			else
				func_375(*uParam0, false, true);
		
			return true;
		}
	}

	return false;
}

void func_375(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC184 Hash - 0x61822EFB ^0x98C55DC1
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 317, bParam1);

	return;
}

BOOL func_376(int* piParam0, int iParam1) // Position - 0xC1AA Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_377(var uParam0, int iParam1, Volume volParam2, BOOL bParam3) // Position - 0xC1BB Hash - 0x89673EF ^0xD8D31C9
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
	
		if (func_556(*uParam0, bParam3, flag3, flag4))
			return true;
	}

	return false;
}

void func_378(var uParam0, BOOL bParam1, int* piParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0xC21F Hash - 0x3FED85C6 ^0x1A53C527
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
		
			func_557(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_547(iParam10, 32), true, false);
			MISC::SET_BIT(piParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*piParam2, 1))
	{
		MISC::CLEAR_BIT(piParam2, 1);
	}

	return;
}

void func_379(int iParam0) // Position - 0xC294 Hash - 0x5A9B862A ^0x7ECCD484
{
	if (func_547(iParam0, 4))
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

	if (func_547(iParam0, 16384))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RELOAD"), false);

	if (func_547(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	}

	return;
}

int func_380(int* piParam0, var uParam1) // Position - 0xC341 Hash - 0x79DA1C70 ^0xA5B017F4
{
	int num;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	num = 0;

	if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL")) || func_558() || func_559() || func_560())
		num = 1;

	if (num == 1)
		func_38(&(piParam0->f_46));

	if (func_39(&(piParam0->f_46)) && !func_403(&(piParam0->f_46), 0.25f))
		func_561(uParam1);

	if (num == 1)
		return 0;

	return 1;
}

BOOL func_381(var uParam0, int* piParam1, int iParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0xC3F0 Hash - 0x25A0EB38 ^0x81C1ECF6
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
	BOOL isStringNullOrEmpty;

	num = func_120(1);
	isBitSet = MISC::IS_BIT_SET(*piParam1, 2);
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = iParam10 & 128 != 0;
	flag5 = iParam10 & 64 != 0;
	flag6 = iParam10 & 512 != 0;
	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);
	isPedInjured = PED::IS_PED_INJURED(*uParam0);
	flag7 = PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_562(Global_35) || func_563(Global_35) || func_564(Global_35);
	num2 = -1f;

	if (func_39(&(piParam1->f_13)))
		num2 = func_40(&(piParam1->f_13));

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (uParam4->[i /*17*/].f_8 != iParam12)
			iParam12 = uParam4->[i /*17*/].f_8;
	
		flag2 = func_12(uParam4->[i /*17*/].f_6);
		func_565(*uParam0, &uParam4->[i /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
	
		if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 20))
			flag = true;
	
		if (func_566(*uParam0, piParam1, &uParam4->[i /*17*/], flag2, fParam3, iParam2, iParam7, iParam8, bParam14, bParam16, bParam17, isPedOnFoot, isPedInjured, bParam15, num2, flag7, num))
		{
			if (!bParam18 && !flag3)
			{
				if (func_567(iParam12, uParam4->[i /*17*/].f_6))
				{
					if (!flag5)
						func_385(uParam4, 0, false, true, bParam5);
				
					if (flag4)
						func_390(uParam4, false, false);
				
					if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 11))
						func_551(piParam1, uParam4, MISC::IS_BIT_SET(*piParam1, 6));
				
					piParam1->f_1 = i;
					flag3 = true;
					piParam1->f_9 = MISC::IS_BIT_SET(uParam4->[piParam1->f_1 /*17*/], 16);
				
					if (!piParam1->f_9)
						MISC::SET_BIT(piParam1, 0);
				
					if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 12) || MISC::IS_BIT_SET(*piParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*piParam1, 19))
						{
							func_568(piParam1, uParam4, uParam0, fParam3, sParam9);
							isStringNullOrEmpty = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_193(piParam1, uParam4, uParam0, isStringNullOrEmpty, sParam9, iParam2);
						}
					
						if (!MISC::IS_BIT_SET(*piParam1, 7))
							MISC::SET_BIT(&(piParam1->f_21), 3);
					
						MISC::SET_BIT(&(piParam1->f_21), 20);
					}
				
					if (MISC::IS_BIT_SET(piParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
							piParam1->f_2 = 3;
					
						if (!MISC::IS_BIT_SET(*piParam1, 13))
							if (func_298(func_409(Global_35, 0, true, false)) || func_298(func_409(Global_35, 1, true, false)))
								piParam1->f_2 = 3;
					
						if (!MISC::IS_BIT_SET(*piParam1, 12))
							if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
								piParam1->f_2 = 3;
					}
				
					if (!isBitSet)
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_11))
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_12))
								TASK::TASK_PLAY_ANIM(Global_35, uParam4->[i /*17*/].f_11, uParam4->[i /*17*/].f_12, 4f, -4f, -1, 67108880, 0, false, 0, false, 0, false);
				
					if (func_569(piParam1, fParam6, piParam1->f_9))
					{
						func_38(&(piParam1->f_18));
					
						if (flag4)
							func_390(uParam4, false, false);
					
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
		func_570(piParam1, iParam2);

	return flag3;
}

void func_382(var uParam0) // Position - 0xC735 Hash - 0x14F6CB16 ^0xBB9D41ED
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

void func_383(int* piParam0, var uParam1, int iParam2) // Position - 0xC788 Hash - 0x9063AD98 ^0x85323D11
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_571(&uParam1->[i /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1->[i /*17*/], 20))
			{
				func_570(piParam0, iParam2);
				return;
			}
		}
	}

	return;
}

BOOL func_384(Ped pedParam0, int* piParam1, var uParam2) // Position - 0xC7CB Hash - 0xEB1F3A6C ^0xB0CA3802
{
	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_572(pedParam0))
			{
				piParam1->f_1 = piParam1->f_3;
				func_145(piParam1, 0);
				func_551(piParam1, uParam2, func_376(piParam1, 6));
				return true;
			}
		}
	}

	return false;
}

void func_385(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC823 Hash - 0x5EBCB35A ^0x47D35D05
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (bParam3)
		{
			if (func_12(uParam0->[i /*17*/].f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0->[i /*17*/], 11))
				{
				}
				else
				{
					func_13(&(uParam0->[i /*17*/].f_6), true, true);
				
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

void func_386(Ped pedParam0, int* piParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xC8CE Hash - 0x415C2438 ^0x87B17E4A
{
	int num;

	if (piParam1->f_5 < 0 || piParam1->f_5 > *uParam2 - 1)
		piParam1->f_5 = 0;

	num = piParam1->f_5;
	func_565(pedParam0, &uParam2->[num /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	piParam1->f_5 = piParam1->f_5 + 1;
	return;
}

void func_387(int* piParam0, int iParam1) // Position - 0xC91A Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

BOOL func_388(Ped pedParam0, Entity eParam1, float fParam2, BOOL bParam3) // Position - 0xC92A Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(eParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

BOOL func_389(int* piParam0) // Position - 0xC972 Hash - 0xA03858BA ^0x13CCB4D5
{
	var unk;
	BOOL flag;

	if (MISC::IS_BIT_SET(piParam0->f_21, 8) || MISC::IS_BIT_SET(*piParam0, 11))
		return true;

	if (!MISC::IS_BIT_SET(piParam0->f_21, 9))
	{
		if (func_573(&unk))
		{
			func_79(&(piParam0->f_37), false);
			MISC::SET_BIT(&(piParam0->f_21), 9);
			func_574();
		}
		else
		{
			func_79(&(piParam0->f_37), false);
			MISC::SET_BIT(&(piParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(piParam0->f_21, 9))
	{
		flag = func_410(&(piParam0->f_37)) >= 1.5f;
	
		if (!func_573(&unk) || func_574() || flag)
		{
			if (flag)
				func_575();
		
			MISC::SET_BIT(&(piParam0->f_21), 8);
			return true;
		}
	}

	return false;
}

void func_390(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCA36 Hash - 0x6249DB64 ^0x6249DB64
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_576(&uParam0->[i /*17*/], bParam1, bParam2);
	}

	return;
}

BOOL func_391(var uParam0, int* piParam1, float fParam2, BOOL bParam3) // Position - 0xCA60 Hash - 0x384F04E1 ^0xEB00389B
{
	if (piParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
			return false;
	
		piParam1->f_9 = 0;
		MISC::SET_BIT(piParam1, 0);
	
		if (fParam2 > 0f)
		{
			func_38(&(piParam1->f_18));
			return false;
		}
		else if (func_39(&(piParam1->f_18)))
		{
			func_88(&(piParam1->f_18));
			return false;
		}
	}

	if (!func_39(&(piParam1->f_18)))
		return true;

	if (fParam2 > 0f && bParam3)
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			return false;

	return func_577(&(piParam1->f_18), fParam2);
}

void func_392(int* piParam0, var uParam1) // Position - 0xCB0A Hash - 0xC7765EDD ^0x9C4E31FE
{
	int i;
	var src;
	var src2;

	src.f_1 = -1;
	src.f_3 = -1;
	src.f_6 = -1;
	src.f_12 = 1073741824;
	src.f_16 = 1;
	src.f_26 = 1106247680;
	src.f_27 = 1067450368;
	src.f_29 = 1092616192;
	src.f_30 = 1112014848;
	src.f_31 = 1106247680;
	src.f_32 = 1101529088;
	src.f_33 = 1101004800;
	src.f_34 = 1084227584;
	src2.f_2 = 570;
	src2.f_3 = 1065353216;
	src2.f_4 = -1082130432;
	src2.f_9 = 3;
	func_60(piParam0, 0);
	func_551(piParam0, uParam1, true);
	func_385(uParam1, 0, true, true, false);
	MISC::COPY_SCRIPT_STRUCT(piParam0, &src, 61);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i /*17*/], &src2, 17);
	}

	return;
}

void func_393(int iParam0, int iParam1) // Position - 0xCBF2 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_394(int iParam0, BOOL bParam1) // Position - 0xCC25 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_463(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_395(int iParam0, BOOL bParam1) // Position - 0xCC7D Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_396(int iParam0, int iParam1) // Position - 0xCCA6 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_397(var uParam0, int* piParam1) // Position - 0xCCCE Hash - 0x1A11F53A ^0xF8D10B1C
{
	if (MISC::IS_BIT_SET(*piParam1, 21))
	{
		func_222(piParam1);
		return;
	}

	if (VOLUME::DOES_VOLUME_EXIST(piParam1->f_36) || !func_6(*uParam0, 0))
		return;

	piParam1->f_36 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(piParam1->f_36, true);
	return;
}

int func_398(int* piParam0) // Position - 0xCD35 Hash - 0x68B6753A ^0x6FE18497
{
	BOOL flag;

	if (MISC::IS_BIT_SET(*piParam0, 8))
		return 1;

	func_578(64);

	if (MISC::IS_BIT_SET(piParam0->f_21, 14))
	{
		if (func_298(func_409(Global_35, 0, true, false)) && func_409(Global_35, 0, true, false) == joaat("weapon_kit_camera"))
		{
			MISC::CLEAR_BIT(&(piParam0->f_21), 14);
			MISC::CLEAR_BIT(&(piParam0->f_21), 15);
			return 0;
		}
	
		return 1;
	}

	if (!MISC::IS_BIT_SET(piParam0->f_21, 15))
	{
		if (func_298(func_409(Global_35, 0, true, false)) && func_409(Global_35, 0, true, false) == joaat("weapon_kit_camera") && !func_152(Global_35, SCRIPT_TASK_SWAP_WEAPON) && !func_152(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_79(&(piParam0->f_49), false);
			MISC::SET_BIT(&(piParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(piParam0->f_21, 15))
	{
		flag = func_410(&(piParam0->f_49)) >= 1.5f;
	
		if (!func_298(func_409(Global_35, 0, true, false)) || flag)
		{
			func_579(false);
			func_88(&(piParam0->f_49));
			MISC::SET_BIT(&(piParam0->f_21), 14);
			return 1;
		}
	}

	return 0;
}

int func_399(int* piParam0) // Position - 0xCE82 Hash - 0x236201C7 ^0x400B6F0
{
	BOOL flag;

	if (MISC::IS_BIT_SET(*piParam0, 10))
		return 1;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);

	if (MISC::IS_BIT_SET(piParam0->f_21, 12))
	{
		if (Global_1357517)
		{
			MISC::CLEAR_BIT(&(piParam0->f_21), 12);
			MISC::CLEAR_BIT(&(piParam0->f_21), 13);
			return 0;
		}
	
		return 1;
	}

	if (!MISC::IS_BIT_SET(piParam0->f_21, 13))
	{
		if (Global_1357517)
			Global_1357516 = 0;
	
		func_79(&(piParam0->f_40), false);
		MISC::SET_BIT(&(piParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(piParam0->f_21, 13))
	{
		flag = func_410(&(piParam0->f_40)) >= 1.5f;
	
		if (!Global_1357517 || flag)
		{
			func_88(&(piParam0->f_40));
			MISC::SET_BIT(&(piParam0->f_21), 12);
			return 1;
		}
	}

	return 0;
}

void func_400(BOOL bParam0) // Position - 0xCF49 Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_580(4);

	func_580(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

void func_401(Volume volParam0, int iParam1, int iParam2) // Position - 0xCF6B Hash - 0xC6F1DCA5 ^0x51E95F4A
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1, iParam2, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1, iParam2, 0, -1, -1, 2);
	return;
}

void func_402(Ped pedParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0xCF9C Hash - 0x5F6A3245 ^0x98C6E7C9
{
	Ped mount;
	Vehicle vehiclePedIsIn;
	Ped pedInDraftHarness;
	int num;
	int i;

	bParam4;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return;

	if (func_364(uParam1, 0f, 0f, 0f))
		return;

	if (fParam5 < 0f || fParam6 < 0f || fParam7 < 0f || fParam8 < 0f)
		return;

	if (!(fParam5 > fParam6) || !(fParam5 > fParam7) || !(fParam5 > fParam8) || !(fParam6 > fParam7) || !(fParam6 > fParam8) || !(fParam7 > fParam8))
		return;

	mount = PED::GET_MOUNT(pedParam0);

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);

	num = func_42(pedParam0, uParam1, true);

	if (num <= fParam5 && num > fParam6 && num > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, 1.75f);
	
		if (func_581() && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsIn))
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
		
			if (!ENTITY::IS_ENTITY_DEAD(mount) && !func_582(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
				TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam12, 0, 0, 0, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && !func_582(pedParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
				TASK::TASK_LEAVE_ANY_VEHICLE(pedParam0, 0, iParam12);
		}
	}

	return;
}

BOOL func_403(var uParam0, float fParam1) // Position - 0xD2D9 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_39(uParam0))
		return false;

	if (func_40(uParam0) > fParam1)
		return true;

	return false;
}

void func_404(int* piParam0, var uParam1, var uParam2, char* sParam3) // Position - 0xD300 Hash - 0x6F7457C7 ^0x274103B
{
	int groupId;
	int i;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		groupId = HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*uParam2, piParam0->f_26, 3, 1, 0, sParam3, 0);
	
		for (i = 0; i < *uParam1; i = i + 1)
		{
			if (!func_12(uParam1->[i /*17*/].f_6) || func_583(uParam1->[i /*17*/].f_6) == 0)
			{
			}
			else
			{
				HUD::_UI_PROMPT_SET_GROUP(func_583(uParam1->[i /*17*/].f_6), groupId, 0);
			}
		}
	}

	return;
}

Vector3 func_405(Entity eParam0, Ped pedParam1, float fParam2) // Position - 0xD380 Hash - 0x25E28F4B ^0x8B6AE653
{
	return func_584(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), ENTITY::GET_ENTITY_COORDS(pedParam1, true, false), fParam2);
}

void func_406(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xD39E Hash - 0x7F1CACD5 ^0x5E3DA144
{
	Vector3 vector;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		vector = { vParam1 };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false))
			ENTITY::SET_ENTITY_COORDS(eParam0, vector, true, false, true, true);
		else
			ENTITY::SET_ENTITY_COORDS(eParam0, vParam1, true, false, true, true);
	}

	return;
}

BOOL func_407(Ped pedParam0) // Position - 0xD3E6 Hash - 0x4156E789 ^0x33933065
{
	ItemSet itemset;
	int itemsetSize;
	int num;
	var unk;
	Entity entity;
	Hash entityCarryConfig;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return false;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	itemsetSize == 0;
	ITEMSET::DESTROY_ITEMSET(itemset);

	for (i = 0; i < 4; i = i + 1)
	{
		num = func_585(i);
	
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
					return true;
			}
		}
	}

	return false;
}

Entity func_408() // Position - 0xD4AE Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

Hash func_409(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD4BD Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	Hash weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

float func_410(var uParam0) // Position - 0xD4E3 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_39(uParam0))
		return 0f;

	if (func_163(uParam0))
		return uParam0->f_2;

	return func_164() - uParam0->f_1;
}

int func_411(int iParam0) // Position - 0xD515 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_93(iParam0))
		return -1;

	return func_586(func_254(iParam0));
}

void func_412(BOOL bParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xD535 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_255(bParam0);
	*hParam1 = func_413(bParam0);
	*iParam2 = func_586(bParam0);
	return;
}

int func_413(BOOL bParam0) // Position - 0xD558 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_414(int iParam0) // Position - 0xD56B Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

int func_415(int iParam0) // Position - 0xD581 Hash - 0x6A809E0B ^0xD5C1247E
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_2;

	return -1;
}

void func_416(int iParam0, int iParam1) // Position - 0xD5A0 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_417(int iParam0, int iParam1) // Position - 0xD5C0 Hash - 0xCE0BB2C4 ^0x23B010DC
{
	var unk;

	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { unk };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = func_254(iParam0);
		func_412(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}

	return;
}

void func_418(int iParam0, int iParam1) // Position - 0xD63E Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_587(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_587(i, i + 1);
		}
	}

	if (func_93(Global_1898164.f_1[0 /*5*/]))
		func_102(Global_1898164.f_1[0 /*5*/], 3);

	return;
}

void func_419(BOOL bParam0) // Position - 0xD6B4 Hash - 0xABC71D04 ^0x7FAB5AFE
{
	int i;

	for (i = 0; i < 153; i = i + 1)
	{
		if (Global_1914319.f_15936[i /*6*/].f_5)
			Global_1914319.f_15936[i /*6*/].f_5 = 0;
	
		func_588(&Global_1914319.f_15936[i /*6*/], bParam0);
	}

	return;
}

void func_420(BOOL bParam0) // Position - 0xD6FE Hash - 0x75A38704 ^0x669CA416
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_588(&Global_1934051.f_23[i], bParam0);
	}

	return;
}

void func_421(BOOL bParam0) // Position - 0xD729 Hash - 0xEE9EF61F ^0x6F45D5CB
{
	int i;

	for (i = 0; i < 33; i = i + 1)
	{
		func_588(&Global_1899778.f_34[i], bParam0);
		Global_1899778[i] = 0;
	}

	return;
}

void func_422(BOOL bParam0) // Position - 0xD75D Hash - 0x990D8E53 ^0x990D8E53
{
	func_588(&Global_1955864, bParam0);
	return;
}

void func_423(BOOL bParam0) // Position - 0xD76F Hash - 0x44C39101 ^0xB6988EF7
{
	func_588(&(Global_1415412.f_3), bParam0);
	return;
}

void func_424(BOOL bParam0) // Position - 0xD783 Hash - 0x15F28904 ^0x5BE4C56F
{
	if (func_589(Global_1934051.f_33))
		func_590(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));

	func_588(&(Global_1934051.f_33), bParam0);
	return;
}

void func_425(BOOL bParam0) // Position - 0xD7B2 Hash - 0xB1376D99 ^0x20D49D2D
{
	int i;
	Hash hash;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = func_592(func_591(i));
	
		if (hash != 0)
			func_590(Global_1934051[i /*2*/], hash);
	
		if (Global_1934051[i /*2*/].f_1)
			Global_1934051[i /*2*/].f_1 = 0;
	
		func_588(&Global_1934051[i /*2*/], bParam0);
	}

	return;
}

void func_426(BOOL bParam0) // Position - 0xD813 Hash - 0x2B0F2EE5 ^0xCD361E26
{
	int i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		func_593(i, -1);
		func_594(i, 0);
		func_595(i, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
		{
			if (bParam0)
				MAP::SET_RADAR_ZOOM(Global_36308[i]);
		
			MAP::REMOVE_BLIP(&Global_36308[i]);
		}
	}

	return;
}

void func_427(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD86D Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_428() // Position - 0xD89D Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_596();
	func_597();
	func_598();
	return;
}

void func_429(var uParam0, var uParam1) // Position - 0xD8B4 Hash - 0x852438A3 ^0xED82E692
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &unk, 2, 2);
	return;
}

void func_430(var uParam0, var uParam1) // Position - 0xD8CF Hash - 0x3F2FCA40 ^0x9574484A
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &unk, 2, 2);
	return;
}

void func_431(int* piParam0, var uParam1) // Position - 0xD8EA Hash - 0xF9F03F66 ^0x83B523C
{
	if (!func_6(*uParam1, 0))
		return;

	piParam0->f_57 = { func_405(*uParam1, Global_35, piParam0->f_26) };
	piParam0->f_57 = { piParam0->f_57 + Global_36 };
	piParam0->f_57.f_2 = piParam0->f_57.f_2 + 10f;
	return;
}

void func_432() // Position - 0xD939 Hash - 0x9DF3D523 ^0x5E26E93
{
	CAM::_0x88544C0E3291DCAE(true);
	func_599();
	return;
}

void func_433(Volume volParam0) // Position - 0xD94A Hash - 0xB0DC8502 ^0xD594F1EE
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volParam0);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volParam0);
	return;
}

void func_434(Volume volParam0) // Position - 0xD96F Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_435(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xD986 Hash - 0x2BF27CF2 ^0x62AA2C
{
	int num;

	func_166(uParam4, &uParam0);

	if (func_165(uParam4, 2) && !func_165(uParam4, 67108864))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SKIP_CUTSCENE"), false);

	if (func_600(uParam4) != 1)
		func_601(uParam4);

	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);

	switch (func_600(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_156, false))
				{
					func_602(uParam4, &uParam0);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_156))
				{
					func_603(uParam4, 4);
					return false;
				}
				else if (func_604(uParam4, 2))
				{
					uParam4->f_149(uParam4);
				}
			
				func_603(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && func_165(uParam4, 134217728))
				{
				}
				else
				{
					func_605(uParam4);
				}
			
				func_38(&(uParam4->f_1));
				func_603(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				func_180(uParam4);
			
				if (!func_39(&(uParam4->f_1)))
				{
					func_79(&(uParam4->f_1), false);
				}
				else if (func_40(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				
					func_603(uParam4, 4);
				}
			}
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (func_43(uParam4, &uParam0, true, true))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
					{
						func_603(uParam4, 4);
					}
					else if (!_IS_NULL_VECTOR(func_167(uParam4)) && !func_606(Global_35, func_167(uParam4), 100f, true, true))
					{
						func_607(true);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_167(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_40(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				
					func_603(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_608(true, false);
					func_602(uParam4, &uParam0);
					func_603(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_40(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
			
				func_603(uParam4, 4);
			}
			break;
	
		case 3:
			func_609(uParam4);
		
			if (func_604(uParam4, 2))
				uParam4->f_149(uParam4);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_156, false) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_156) || func_165(uParam4, 512))
			{
				if (!func_165(uParam4, 1024) && func_610(uParam4, true))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
			
				if (!func_165(uParam4, 512))
				{
					func_38(&(uParam4->f_1));
					func_168(uParam4, 512);
					func_603(uParam4, 4);
				}
				else if (func_165(uParam4, 524288))
				{
					CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN();
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_601(uParam4);
			}
		
			if (func_165(uParam4, 524288))
			{
				if ((float)MISC::ABSI(func_611(uParam4) - func_612(uParam4)) <= 2f)
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_156))
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			
				if (func_514(uParam4, Global_35, 4))
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT() && func_612(uParam4) > 5000)
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			}
		
			if (func_613(uParam4))
			{
				!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156);
				func_614(uParam4);
				func_615(uParam4);
				return true;
			}
			else
			{
				if (func_165(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_156))
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_156);
					
						func_38(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
						func_168(uParam4, 512);
						func_175(uParam4, 67108864, true);
						func_603(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if (!func_165(uParam4, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_156) && CAM::IS_SCREEN_FADED_OUT() && func_612(uParam4) <= 5000 && func_612(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
			
				if (!func_165(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_616(&(uParam4->f_213), 0);
					func_168(uParam4, 536870912);
				}
			
				if (func_612(uParam4) >= 5000 && func_612(uParam4) <= func_611(uParam4) - 5000)
					func_617();
			}
			break;
	
		case 4:
			if (func_165(uParam4, 524288))
				ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
		
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						func_168(uParam4, 1073741824);
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, true);
					
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, true, false);
					
						return false;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(uParam4->f_156))
					{
						return false;
					}
				}
			
				if (num == 0)
				{
					uParam4->f_150(!func_604(uParam4, 4), uParam4);
				
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
					
						func_603(uParam4, 3);
					}
					else if (func_40(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
					
						func_603(uParam4, 3);
					}
				}
			
				if (func_600(uParam4) == 3)
					if (func_165(uParam4, 524288))
						CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	
		case 5:
			func_603(uParam4, 4);
			break;
	
		case 6:
			if (func_613(uParam4))
			{
				func_614(uParam4);
				func_615(uParam4);
				return true;
			}
			break;
	}

	return false;
}

void func_436(int iParam0, BOOL bParam1, Ped pedParam2) // Position - 0xE05A Hash - 0xD8E274A1 ^0xE4E6335F
{
	Ped ped;

	if (!func_71(iParam0))
		return;

	if (!func_537(iParam0))
		return;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (bParam1 && ENTITY::IS_ENTITY_DEAD(pedParam2))
		return;

	ped = func_41(iParam0);

	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(pedParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, true);
	}

	PED::SET_PED_CONFIG_FLAG(ped, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_0x07A6E531, bParam1);

	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(ped, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0));
		PED::_SET_PED_COMBAT_BEHAVIOUR(ped, -1972074710);
		PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(ped);
	
		if (!func_619())
			PED::_0x9A4AC116CC1EEE14(Global_35);
	}

	return;
}

BOOL func_437(Ped pedParam0) // Position - 0xE13C Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_157() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

void func_438(var uParam0, int iParam1) // Position - 0xE195 Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

float func_439(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0xE1AF Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_620(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_440(int iParam0, BOOL bParam1) // Position - 0xE206 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_75(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_621(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_441(int iParam0) // Position - 0xE34B Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_91(iParam0);

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

PersChar func_442(int iParam0, BOOL bParam1) // Position - 0xE3C1 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_75(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_622(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_443(int iParam0) // Position - 0xE40D Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_75(iParam0))
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

void func_444(int iParam0, int iParam1) // Position - 0xE460 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_75(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

var func_445(BOOL bParam0, var uParam1, var uParam2) // Position - 0xE484 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_446(var uParam0, int iParam1) // Position - 0xE49B Hash - 0xD05180BA ^0x39589262
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

void func_447(var uParam0, int iParam1) // Position - 0xE521 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_448(var uParam0, int iParam1) // Position - 0xE55D Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_239(*uParam0);
	num2 = func_238(*uParam0);

	if (iParam1 < 1 || iParam1 > func_244(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_449(var uParam0, int iParam1) // Position - 0xE5B0 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_450(var uParam0, int iParam1) // Position - 0xE5EB Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_451(var uParam0, int iParam1) // Position - 0xE624 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

Hash func_452(int iParam0) // Position - 0xE65C Hash - 0xBA965109 ^0xCB1D208B
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

void func_453(int iParam0, Ped pedParam1) // Position - 0xE838 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_623(pedParam1);

	return;
}

int func_454(int iParam0) // Position - 0xE852 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_253(iParam0);

	if (num < 0)
		return 0;

	return func_624(num);
}

int func_455(int iParam0, int iParam1) // Position - 0xE872 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_625(num2);
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

void func_456() // Position - 0xE9E2 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_457(int iParam0, int iParam1) // Position - 0xEA05 Hash - 0x8FA0E29 ^0xC3F68E87
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

int func_458(BOOL bParam0) // Position - 0xFB1E Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_157() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

Hash func_459(Hash hParam0) // Position - 0xFB5F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_626(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_460(int iParam0) // Position - 0xFB8A Hash - 0x497B15BA ^0x497B15BA
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

void func_461(int iParam0, int iParam1) // Position - 0xFBDA Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

void func_462(int iParam0, int iParam1) // Position - 0xFC07 Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

BOOL func_463(int iParam0, int iParam1) // Position - 0xFC28 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_464(int iParam0) // Position - 0xFC49 Hash - 0xABB41D33 ^0xABB41D33
{
	if (!func_75(iParam0))
		return 0;

	return Global_1360165[iParam0 /*1157*/].f_1154;
}

void func_465(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0xFC6B Hash - 0x60969C28 ^0x60969C28
{
	int num;

	if (!func_75(iParam0))
		return;

	if (func_275(iParam0, hParam1))
	{
		func_627(iParam0, bParam2);
		return;
	}

	num = -1;

	if (func_276(iParam0, hParam1, &num))
		func_281(iParam0, num, bParam2);

	return;
}

int func_466(int iParam0, var uParam1, var uParam2) // Position - 0xFCB0 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_628(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_467(var uParam0, Ped pedParam1, char* sParam2) // Position - 0xFCD2 Hash - 0xFB1C2C0E ^0x6794528D
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

int func_468(Entity eParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xFD50 Hash - 0x2AE5C8B1 ^0x9995651A
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
	value = func_629(entityForwardVector, unk5);

	if (MISC::ABSF(value) > iParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_630(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

Player func_469(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0xFDDF Hash - 0x8208FD10 ^0xFF758839
{
	var unk;
	PersChar persChar;
	var schedule;
	char* str;

	if (!func_75(iParam0))
		return 0;

	unk = { iParam3, iParam4, iParam5 };
	persChar = func_442(iParam0, true);

	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
		
			if (func_6(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_444(iParam0, 3);
			}
			else
			{
				if (!func_631(iParam0) && func_632(iParam0, &schedule))
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_440(iParam0, true), &schedule);
			
				func_233(iParam0, 256, false);
				func_444(iParam0, 1);
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
			
				if (!func_634(iParam0, unk, iParam6, bParam10))
					return _INVALID_PLAYER_INDEX();
			
				if (func_6(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar) != Global_1360165[iParam0 /*1157*/].f_124;
				
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_444(iParam0, 2);
				}
			}
			break;
	
		case 2:
			if (!func_6(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_444(iParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
				func_444(iParam0, 3);
			break;
	
		case 3:
			if (!func_6(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_444(iParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (bParam7)
				if (!func_293(iParam0, Global_1360165[iParam0 /*1157*/].f_124, true))
					return _INVALID_PLAYER_INDEX();
		
			if (bParam2 && !_IS_NULL_VECTOR(unk) && !func_150(unk, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608, true))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_59(Global_1360165[iParam0 /*1157*/].f_124, unk, iParam6, 2, 1073741824);
			}
		
			if (bParam1)
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					func_85(iParam0, 39, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
			
				func_78(iParam0, 39, true);
				func_233(iParam0, 8, true);
				func_233(iParam0, 64, false);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
		
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_635(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
		
			if (bParam8)
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/].f_124, 1);
		
			str = func_637(iParam0, func_636());
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
				PERSCHAR::_0x63AA2B8EB087886A(func_440(iParam0, true), MISC::GET_HASH_KEY(str));
		
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_7(iParam0, 40, false);
			func_233(iParam0, 32, false);
			func_444(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}

	return _INVALID_PLAYER_INDEX();
}

void func_470(int iParam0, Player plParam1) // Position - 0x10197 Hash - 0x6B84EB5D ^0xB01B2620
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

void func_471(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10223 Hash - 0x755A55CB ^0x755A55CB
{
	if (!func_71(iParam0))
		return;

	if (func_440(iParam0, true) == 0)
		return;

	if (bParam3)
		func_638(func_91(iParam0), 1f, false);

	if (bParam1)
		func_639(iParam0);
	else
		func_640(iParam0);

	if (bParam2)
		func_641(iParam0);
	else
		func_642(iParam0);

	return;
}

int func_472(int iParam0) // Position - 0x1027F Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_473() // Position - 0x10298 Hash - 0x65674CA9 ^0x17A1348F
{
	return 1;
}

BOOL func_474(int iParam0) // Position - 0x102B7 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_491(iParam0) == 0)
		return false;

	return true;
}

void func_475(int iParam0) // Position - 0x102EA Hash - 0xB0910AA9 ^0xD61D2BCE
{
	Ped ped;
	Hash entityModel;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_481(iParam0))
		return;

	ped = func_480(iParam0);
	func_643(iParam0);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);

	if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
		if (!func_644(entityModel))
			PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	PED::DELETE_PED(&ped);
	func_645(iParam0, 0);
	func_646(iParam0);
	return;
}

void func_476(int iParam0) // Position - 0x1036E Hash - 0x6350BD61 ^0x7F21F5C
{
	var unk;
	int i;
	int j;

	iParam0 = func_472(iParam0);

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
	func_647(&unk);
	func_648(iParam0, unk);
	func_649(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_650(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_651(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_652(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_653(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_654(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_655(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_656(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_657(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
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

void func_477(int iParam0) // Position - 0x106C0 Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_478(int iParam0) // Position - 0x106D3 Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

int func_479(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x106E8 Hash - 0x56F0811C ^0x278FB5A
{
	return func_658(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Ped func_480(int iParam0) // Position - 0x106FE Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_481(int iParam0) // Position - 0x1072A Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_472(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_482(int iParam0) // Position - 0x10762 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_481(iParam0))
		return false;

	ped = func_480(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

BOOL func_483(int iParam0) // Position - 0x107B6 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_481(iParam0))
		return false;

	ped = func_480(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return true;

	return false;
}

void func_484(int iParam0) // Position - 0x1080B Hash - 0x2692E663 ^0xF0DB5F3E
{
	Ped ped;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_481(iParam0))
		return;

	ped = func_480(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
	return;
}

void func_485(int iParam0, int iParam1) // Position - 0x10856 Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	Ped horse2;
	BOOL flag2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_659(iParam0);
	func_659(iParam0);
	func_660(iParam0, iParam1);
	func_661(iParam0, iParam1);
	func_662(iParam0, iParam1);
	horse = func_480(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		if (iParam0 == 0 || iParam0 == 1)
			func_663(horse);
	
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

	horse2 = func_480(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
	{
		if (iParam1 == 0 || iParam1 == 1)
			func_663(horse2);
	
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

	func_664();
	return;
}

BOOL func_486() // Position - 0x10978 Hash - 0x57592B8C ^0xB4B7573B
{
	Entity entity;

	entity = func_408();

	if (ENTITY::DOES_ENTITY_EXIST(entity))
		return true;

	return false;
}

void func_487() // Position - 0x10994 Hash - 0x9A84CB87 ^0x788CD227
{
	Entity entity;

	entity = func_408();

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);

	OBJECT::DELETE_OBJECT(&entity);
	func_665(0);
	return;
}

void func_488(var uParam0, var uParam1, var uParam2) // Position - 0x109CC Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

Ped func_489(int iParam0) // Position - 0x109E5 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_490(int iParam0) // Position - 0x10A18 Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_491(int iParam0) // Position - 0x10A4B Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_492(int iParam0) // Position - 0x10A7E Hash - 0x728A4C05 ^0x728A4C05
{
	var unk;
	var unk2;
	var unk3;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_666(&unk, &unk2, &unk3);
	func_667(iParam0, unk);
	func_668(iParam0, unk2);
	func_669(iParam0, unk3);
	func_670(iParam0, 1);
	func_671(iParam0, 1);
	return;
}

void func_493(int iParam0) // Position - 0x10AD1 Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_672(iParam0, 1);
	return;
}

void func_494(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10AFA Hash - 0xFEF7EAB ^0x64576AA5
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_19 = { uParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
	return;
}

BOOL func_495(int iParam0) // Position - 0x10B38 Hash - 0xBDE1A61 ^0xBDE1A61
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return func_673(iParam0, 1);
}

struct<2> func_496(int iParam0) // Position - 0x10B63 Hash - 0xC0CC9820 ^0xC0CC9820
{
	var unk;
	var unk3;
	var unk4;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	!func_674(iParam0, &unk3);
	!func_675(iParam0, &unk4);
	unk = unk3;
	unk.f_1 = unk4;
	return unk;
}

struct<6> func_497() // Position - 0x10BB3 Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_676(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_676(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_676(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_676(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_676(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_676(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

void func_498(Ped pedParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x10C35 Hash - 0x50380B5F ^0xA5E53457
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return;

	func_677(pedParam0);
	func_678(pedParam0, uParam1);
	func_679(pedParam0);
	func_680(pedParam0, uParam2);

	if (hParam3 != 0)
		func_681(pedParam0, hParam3, false);

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, true);
	return;
}

BOOL func_499(int iParam0) // Position - 0x10CA9 Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_500(int iParam0) // Position - 0x10CD7 Hash - 0x93699D3A ^0x887A14C1
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

void func_501(int iParam0) // Position - 0x10D12 Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_502(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_646(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_646(iParam0);

	return;
}

int func_502(int iParam0) // Position - 0x10D60 Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

Hash func_503(int iParam0) // Position - 0x10D8E Hash - 0x5007D79D ^0xEC52003
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

struct<5> func_504(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10D9B Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_682(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_683(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_687(hParam0, -1823706425))
			{
				unk = { func_508(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_687(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_508(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_686(bParam1) };
		
			switch (func_459(hParam0))
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
				unk = { func_508(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_684(bParam1) };
		
			if (bParam2 && func_685(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_506(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_506(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_507(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_688(unk, &unk28, bParam1, false))
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

Hash func_505(int iParam0, int iParam1) // Position - 0x11058 Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_506(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x131A2 Hash - 0x4285A587 ^0x4285A587
{
	return func_689(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_507(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x131BA Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_690(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_508(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x131DB Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_626(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_458(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_509(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x1320C Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_691(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_688(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_510(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_458(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_510(BOOL bParam0) // Position - 0x1329C Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_157() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_458(bParam0));
}

int func_511(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x132BA Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_692(hParam0))
		return 0;

	if (!func_510(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_512(Hash hParam0, int iParam1) // Position - 0x132F5 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_693(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

const char* func_513(Ped pedParam0) // Position - 0x1333D Hash - 0x8A4D030E ^0xB9B87233
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return "";

	if (ENTITY::IS_ENTITY_A_PED(pedParam0))
		return func_360(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0));
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
		return func_694(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam0));
	else if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		return func_695(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam0));

	return "";
}

BOOL func_514(var uParam0, Ped pedParam1, int iParam2) // Position - 0x133A0 Hash - 0x827F67AF ^0xB11C78E6
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1 && func_542(&uParam0->f_13[i /*12*/], iParam2))
			return true;
	}

	return false;
}

void func_515(var uParam0, Entity eParam1, int iParam2) // Position - 0x133F2 Hash - 0xEC98A017 ^0xC648F7DD
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == eParam1)
			func_543(&uParam0->f_13[i /*12*/], iParam2);
	}

	return;
}

BOOL func_516(int iParam0, int iParam1, int iParam2) // Position - 0x1343A Hash - 0xD8381BE7 ^0xD8381BE7
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

BOOL func_517(int iParam0) // Position - 0x134E3 Hash - 0x5000025C ^0x5000025C
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

BOOL func_518(int iParam0, BOOL bParam1) // Position - 0x13510 Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_75(iParam0))
		return false;

	if (!bParam1)
		if (func_77(iParam0) || func_85(iParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

struct<7> func_519(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0x13599 Hash - 0xDA7D22BD ^0xF82EFD7F
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

void func_520(int iParam0, BOOL bParam1) // Position - 0x135FC Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_75(iParam0))
		return;

	ped = func_41(iParam0);
	func_696(ped);
	func_78(iParam0, 60, true);

	if (bParam1)
		func_639(iParam0);

	return;
}

void func_521(int iParam0, BOOL bParam1) // Position - 0x13633 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_75(iParam0))
		return;

	ped = func_41(iParam0);
	func_697(ped);
	func_7(iParam0, 60, true);

	if (bParam1)
		func_640(iParam0);

	return;
}

void func_522(int iParam0, BOOL bParam1) // Position - 0x1366A Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_75(iParam0))
		return;

	ped = func_41(iParam0);
	func_698(ped);

	if (iParam0 == 14)
		func_699(ped);

	func_78(iParam0, 61, true);

	if (bParam1)
		func_641(iParam0);

	return;
}

void func_523(int iParam0, BOOL bParam1) // Position - 0x136AE Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_75(iParam0))
		return;

	ped = func_41(iParam0);
	func_700(ped);
	func_7(iParam0, 61, true);

	if (bParam1)
		func_642(iParam0);

	return;
}

BOOL func_524(int iParam0, int iParam1) // Position - 0x136E5 Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_75(iParam0))
		return false;

	func_701(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[num], offset);
}

BOOL func_525(int iParam0) // Position - 0x1371B Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

Hash func_526(int iParam0, int iParam1) // Position - 0x1372E Hash - 0xE1D12727 ^0x6E706E61
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
			num = func_702(296923297, iParam1);
			return func_703(num);
	
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
			num = func_702(1237718549, iParam1);
			return func_703(num);
	
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

void func_527(int iParam0, Ped pedParam1, BOOL bParam2) // Position - 0x13BD0 Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_294(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_294(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_294(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_294(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_294(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_294(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_294(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_294(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_294(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_294(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_294(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_294(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_294(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_294(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_294(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_294(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_294(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_294(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (*Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_294(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_294(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_294(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_294(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_294(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_294(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_294(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_294(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_57 = 1;

	return;
}

void func_528(int iParam0) // Position - 0x141B0 Hash - 0x83966A8E ^0x24FDDDED
{
	func_704(iParam0, 1);
	func_704(iParam0, 128);
	func_704(iParam0, 256);
	func_704(iParam0, 512);
	func_704(iParam0, 1024);
	func_704(iParam0, 2048);
	func_704(iParam0, 4096);
	func_704(iParam0, 65536);
	func_704(iParam0, 16384);
	func_704(iParam0, 262144);
	func_704(iParam0, 524288);
	func_704(iParam0, 1048576);
	func_704(iParam0, 2097152);
	func_704(iParam0, 32768);
	func_704(iParam0, 131072);
	func_704(iParam0, 134217728);
	func_704(iParam0, 1073741824);
	return;
}

void func_529(int iParam0, BOOL bParam1) // Position - 0x14259 Hash - 0xA7580A6E ^0xB02B4B4C
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

void func_530(var uParam0, Ped pedParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x142CC Hash - 0x37E325FF ^0x56E9093A
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
		sParam2 = func_513(pedParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		{
		}
	
		return;
	}

	num = func_705(uParam0, pedParam1);

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
		ped = func_706(uParam0, sParam2);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped) && ped != pedParam1)
			func_707(uParam0, ped);
	}

	if (num == -1)
		num = func_708(uParam0);

	if (num != -1)
	{
		uParam0->f_13[num /*12*/] = pedParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13[num /*12*/].f_1), sParam2, 64);
		uParam0->f_13[num /*12*/].f_9 = iParam3;
		uParam0->f_13[num /*12*/].f_10 = iParam4;
	
		if (bParam5)
			func_543(&uParam0->f_13[num /*12*/], 2);
		else
			func_709(&uParam0->f_13[num /*12*/], 2);
	}

	return;
}

int func_531(int iParam0) // Position - 0x1441B Hash - 0xBA965109 ^0xA95E75D8
{
	switch (iParam0)
	{
		case 0:
			return joaat("HASH_COMPANION_DUTCH");
	
		case 1:
			return joaat("HASH_COMPANION_JOHN");
	
		case 2:
			return joaat("HASH_COMPANION_JAVIER");
	
		case 3:
			return joaat("HASH_COMPANION_BILL");
	
		case 4:
			return joaat("HASH_COMPANION_UNCLE");
	
		case 5:
			return joaat("HASH_COMPANION_HOSEA");
	
		case 6:
			return joaat("HASH_COMPANION_MICAH");
	
		case 7:
			return joaat("HASH_COMPANION_CHARLES");
	
		case 8:
			return joaat("HASH_COMPANION_SEAN");
	
		case 9:
			return joaat("HASH_COMPANION_LENNY");
	
		case 10:
			return joaat("HASH_COMPANION_ODRISCOLL");
	
		case 11:
			return joaat("HASH_COMPANION_SADIE_ADLER");
	
		case 12:
			return joaat("HASH_COMPANION_DOG");
	
		case 13:
			return joaat("HASH_COMPANION_ABIGAIL");
	
		case 14:
			return joaat("HASH_COMPANION_JACK");
	
		case 15:
			return joaat("HASH_COMPANION_MARY_BETH");
	
		case 16:
			return joaat("HASH_COMPANION_MOLLY_OSHEA");
	
		case 17:
			return joaat("HASH_COMPANION_PEARSON");
	
		case 18:
			return joaat("HASH_COMPANION_STRAUSS");
	
		case 19:
			return joaat("HASH_COMPANION_SUSAN_GRIMSHAW");
	
		case 20:
			return joaat("HASH_COMPANION_KAREN");
	
		case 21:
			return joaat("HASH_COMPANION_SWANSON");
	
		case 22:
			return joaat("HASH_COMPANION_TILLY");
	
		case 23:
			return joaat("HASH_COMPANION_TRELAWNY");
	
		case 24:
			return joaat("HASH_COMPANION_CLEET");
	
		case 25:
			return joaat("HASH_COMPANION_JOE");
	
		case 26:
			return 1271180667;
	}

	return -1;
}

void func_532(int* piParam0, int iParam1) // Position - 0x145F7 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_533(int iParam0, BOOL bParam1, Hash hParam2) // Position - 0x14607 Hash - 0xE6358789 ^0x945D7794
{
	if (!func_114(*hParam2))
	{
		hParam2->f_1 = -15;
		return;
	}

	if (!func_710(iParam0, *hParam2, bParam1))
	{
		if (!hParam2->f_2)
		{
			if (func_711(iParam0, *hParam2, bParam1))
			{
			}
		}
	}

	if (hParam2->f_1 == -15 || hParam2->f_1 != -15 && !func_712(hParam2->f_1))
		return;

	func_713(iParam0, *hParam2, bParam1);
	return;
}

int func_534() // Position - 0x14681 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_535(int iParam0, Hash hParam1) // Position - 0x1468D Hash - 0xD2BE64C1 ^0xBE732642
{
	int num;
	BOOL flag;

	if (!func_75(iParam0))
		return false;

	if (!func_115(iParam0, hParam1, &num, &flag))
		return false;

	if (flag)
		return Global_40.f_4942[iParam0 /*60*/].f_8.f_2;

	return Global_40.f_4942[iParam0 /*60*/].f_11[num /*3*/].f_2;
}

Volume func_536(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x146E2 Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_714(vParam0))
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

	func_715(volume, bParam8);
	return volume;
}

BOOL func_537(int iParam0) // Position - 0x1479C Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_71(iParam0))
		if (func_6(Global_1360165[iParam0 /*1157*/], 0))
			return true;

	return false;
}

char* func_538(Hash hParam0) // Position - 0x147C3 Hash - 0xE6862179 ^0xC6C1A9C8
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

BOOL func_539(int iParam0) // Position - 0x1534B Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_540(int iParam0) // Position - 0x15360 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_541(BOOL bParam0) // Position - 0x15380 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

BOOL func_542(var uParam0, int iParam1) // Position - 0x15393 Hash - 0x718DD1EF ^0x4872DFB3
{
	return uParam0->f_11 && iParam1 != false;
}

void func_543(var uParam0, int iParam1) // Position - 0x153A4 Hash - 0x53A96DDB ^0x5EF2061
{
	uParam0->f_11 = uParam0->f_11 || iParam1;
	return;
}

void func_544(var uParam0, const char* sParam1, Entity eParam2, int iParam3) // Position - 0x153B7 Hash - 0xFA406476 ^0x6C9C939F
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam2))
		return;

	if (iParam3 == 1)
		if (ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(uParam0->f_156, sParam1))
			iParam3 = 0;

	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_156, sParam1, eParam2, iParam3);
	return;
}

void func_545(Ped pedParam0) // Position - 0x153F3 Hash - 0xC848742E ^0xD171C7FA
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

BOOL func_546(Ped pedParam0, int* piParam1) // Position - 0x15429 Hash - 0xFB53563C ^0x22205B46
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
		if (PED::IS_PED_IN_COMBAT(pedParam0, func_716(flag2 && !flag, Global_35, 0)))
			return true;

	return false;
}

BOOL func_547(int iParam0, int iParam1) // Position - 0x154A1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_548(var uParam0, int iParam1) // Position - 0x154B0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_549(var uParam0) // Position - 0x154C1 Hash - 0xBF3B7066 ^0xBF3B7066
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_571(&uParam0->[i /*17*/]))
			func_717(&uParam0->[i /*17*/], 14);
	}

	return;
}

void func_550(var uParam0, int iParam1) // Position - 0x154F6 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_551(int* piParam0, var uParam1, BOOL bParam2) // Position - 0x1550B Hash - 0x6F91FC09 ^0xBA0ABE9A
{
	if (piParam0->f_3 > -1 && piParam0->f_3 < *uParam1)
	{
		func_13(&(uParam1->[piParam0->f_3 /*17*/].f_6), true, true);
	
		if (bParam2)
			func_217(piParam0, false);
	}

	return;
}

Prompt func_552(Ped pedParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x15545 Hash - 0xAAA1EE43 ^0x1865183
{
	int num;

	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		num = piParam1->f_3;
		uParam2->[num /*17*/].f_8 = 6;
		func_718(pedParam0, &uParam2->[num /*17*/], fParam3, 3, 0, 6, bParam4, false);
	
		if (func_12(uParam2->[num /*17*/].f_6))
		{
			func_717(&uParam2->[num /*17*/], 11);
			return Global_1945188[uParam2->[num /*17*/].f_6 /*18*/].f_3;
		}
	}

	return 0;
}

int func_553(var uParam0) // Position - 0x155B5 Hash - 0x642E71C7 ^0x2B612313
{
	int num;
	int num2;

	num = func_719(*uParam0);
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

int func_554(var uParam0, int iParam1) // Position - 0x15633 Hash - 0x2E6C9ADE ^0xD0DFC5BC
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_7 == iParam1)
			return i;
	}

	return -1;
}

void func_555(int* piParam0, int* piParam1) // Position - 0x15662 Hash - 0xFCEC0C12 ^0x65EC5F60
{
	if (!func_376(piParam0, 23))
	{
		if (piParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_717(piParam1, 19);
			func_145(piParam0, 23);
			func_720(piParam1, 2);
		}
	}

	return;
}

BOOL func_556(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1569F Hash - 0x8E7018BE ^0x1BA834FB
{
	Entity outEntity;

	outEntity = 0;

	if (func_721(16))
		return Global_1935630.f_58 == pedParam0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(outEntity))
			{
				if (ENTITY::IS_ENTITY_A_PED(outEntity))
				{
					func_722(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
				
					if (Global_1935630.f_58 == pedParam0)
						return true;
				}
			}
		}
	}

	return false;
}

void func_557(Ped pedParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x15714 Hash - 0x1F7F43A4 ^0x1F7F43A4
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		func_718(pedParam0, &uParam1->[i /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
	
		if (bParam8)
			MISC::CLEAR_BIT(&uParam1->[i /*17*/], 14);
	}

	return;
}

BOOL func_558() // Position - 0x15759 Hash - 0xC24BA3AE ^0xF178BF44
{
	return Global_1935689.f_1 || Global_1935689 == 1;
}

BOOL func_559() // Position - 0x15773 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1935689.f_1;
}

BOOL func_560() // Position - 0x15781 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1357517;
}

void func_561(var uParam0) // Position - 0x1578D Hash - 0x98CA9EA3 ^0x98CA9EA3
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_717(&uParam0->[i /*17*/], 9);
	}

	return;
}

BOOL func_562(Ped pedParam0) // Position - 0x157B5 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_723(pedParam0, 4) || func_723(pedParam0, 5);
}

BOOL func_563(Ped pedParam0) // Position - 0x157D1 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_723(pedParam0, 7);
}

BOOL func_564(Ped pedParam0) // Position - 0x157E0 Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_723(pedParam0, 6);
}

void func_565(Ped pedParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x157EF Hash - 0x28F375A9 ^0x20CFE665
{
	if (MISC::IS_BIT_SET(*piParam1, 14))
	{
		if (func_571(piParam1))
		{
			MISC::CLEAR_BIT(piParam1, 14);
			func_718(pedParam0, piParam1, fParam2, iParam3, iParam4, iParam5, bParam6, false);
		}
	}

	return;
}

BOOL func_566(Ped pedParam0, int* piParam1, int* piParam2, BOOL bParam3, float fParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, float fParam14, BOOL bParam15, int iParam16) // Position - 0x15827 Hash - 0x9E28CA55 ^0x9E28CA55
{
	BOOL flag;
	BOOL flag2;

	flag = bParam3;

	if (bParam3)
	{
		flag2 = false;
	
		if (func_724(piParam1, piParam2, pedParam0, bParam9, bParam10, iParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
			flag2 = true;
	
		if (func_725(piParam2->f_6, false))
		{
			if (flag2)
			{
				func_186(piParam2->f_6, false, true);
				flag = false;
			}
		}
		else if (!flag2)
		{
			func_186(piParam2->f_6, true, true);
			flag = false;
		}
	
		if (bParam8)
			func_726(piParam2->f_6, pedParam0, 0, true, -1);
	}

	return flag;
}

BOOL func_567(int iParam0, int iParam1) // Position - 0x158A5 Hash - 0xFED1B5B5 ^0xFED1B5B5
{
	if (iParam0 == 4 || iParam0 == 6 || iParam0 == 5)
	{
		if (func_727(iParam1, true))
			return true;
	}
	else if (func_728(iParam1, true))
	{
		func_729(iParam1, true);
		return true;
	}

	return false;
}

void func_568(int* piParam0, var uParam1, var uParam2, float fParam3, char* sParam4) // Position - 0x158EF Hash - 0xF4F13B34 ^0x14283CDD
{
	func_385(uParam1, 1, true, true, false);
	func_216(uParam2);
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam2, sParam4, fParam3, 0, 8, 0, 0, 0, false, -1);
	return;
}

BOOL func_569(int* piParam0, float fParam1, BOOL bParam2) // Position - 0x1591B Hash - 0xD16C56E3 ^0xCC194231
{
	if (piParam0->f_2 != 3)
		if (bParam2 || fParam1 > 0f)
			return true;

	return false;
}

void func_570(int* piParam0, int iParam1) // Position - 0x1593F Hash - 0xCA0C813A ^0x642D602A
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

BOOL func_571(int* piParam0) // Position - 0x1597C Hash - 0xA750EC1D ^0xA62AC3E5
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(piParam0->f_5))
		return true;

	return false;
}

BOOL func_572(Ped pedParam0) // Position - 0x15995 Hash - 0x38F1F494 ^0xD89820BA
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

BOOL func_573(var uParam0) // Position - 0x15A13 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_730(81053684))
		if (func_731(uParam0))
			return true;
	else if (func_732(-525676072, uParam0))
		if (func_731(uParam0))
			return true;

	return false;
}

BOOL func_574() // Position - 0x15A58 Hash - 0x32A2B110 ^0x12FB0596
{
	Hash hash;
	int num;
	int num2;

	if (!func_733())
		return false;

	if (!func_731(&hash))
		return false;

	if (!func_734(hash))
		return false;

	num = func_735(hash);

	if (num == -358215195)
		return false;

	func_736(&num2, 1);
	return func_737(hash, num2);
}

int func_575() // Position - 0x15AAD Hash - 0xF3521A6 ^0x499ADCFE
{
	Hash hash;
	int num;

	if (!func_731(&hash))
		return 0;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	num = func_735(hash);

	if (num == -358215195)
		return 0;

	func_739(Global_1946054.f_57[func_738(num, 1) /*11*/], 8);
	func_740(26, 0, 0, 0, false);
	return 1;
}

void func_576(int* piParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15B0B Hash - 0xAC8CE43 ^0x1A2D07F
{
	if (bParam1 && !func_741(piParam0, 13))
		func_717(piParam0, 0);
	else
		func_532(piParam0, 0);

	if (func_12(piParam0->f_6))
		if (bParam2)
			func_13(&(piParam0->f_6), false, true);

	return;
}

BOOL func_577(var uParam0, float fParam1) // Position - 0x15B51 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_403(uParam0, fParam1))
	{
		func_88(uParam0);
		return 1;
	}

	return 0;
}

void func_578(int iParam0) // Position - 0x15B6F Hash - 0x3410C012 ^0xB75662EB
{
	Global_1935496.f_29 = Global_1935496.f_29 || iParam0;
	return;
}

void func_579(BOOL bParam0) // Position - 0x15B86 Hash - 0x9AA8C616 ^0xCCF3BF7F
{
	if (func_742())
		Global_1357509 = 1;

	func_743(joaat("camera_item"));

	if (bParam0 && Global_1935630.f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}

	return;
}

void func_580(int iParam0) // Position - 0x15BD7 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

BOOL func_581() // Position - 0x15BF0 Hash - 0x68FFA9E8 ^0x1B04A5AD
{
	if (func_157() == -1 && func_97(0, false, true))
		return Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0;

	return false;
}

BOOL func_582(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x15C2E Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

Prompt func_583(int iParam0) // Position - 0x15C57 Hash - 0xBFD0C370 ^0x69B2AD02
{
	int num;

	num = func_109(iParam0);

	if (num < 0 || num >= 48)
		return 0;

	return Global_1945188[num /*18*/].f_3;
}

Vector3 func_584(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x15C87 Hash - 0x676FAEB7 ^0x676FAEB7
{
	return func_744(uParam3 - uParam0) * { fParam6, fParam6, fParam6 };
}

int func_585(int iParam0) // Position - 0x15CA0 Hash - 0x79A48FAE ^0x79A48FAE
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

int func_586(BOOL bParam0) // Position - 0x15CE5 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

void func_587(int iParam0, int iParam1) // Position - 0x15CF9 Hash - 0x676FADFF ^0x1734896
{
	var unk;

	unk = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { unk };
	return;
}

void func_588(int iParam0, BOOL bParam1) // Position - 0x15D39 Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*iParam0 != -1)
	{
		func_593(*iParam0, -1);
		func_594(*iParam0, 0);
		func_595(*iParam0, 0);
	
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

BOOL func_589(int iParam0) // Position - 0x15D90 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

void func_590(int iParam0, Hash hParam1) // Position - 0x15DB9 Hash - 0x24A4BE93 ^0x70B16AB7
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], hParam1);

	return;
}

int func_591(int iParam0) // Position - 0x15DEF Hash - 0xB26DA715 ^0xB26DA715
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

Hash func_592(int iParam0) // Position - 0x15E77 Hash - 0xB8EC44B7 ^0xFC24309D
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

void func_593(int iParam0, int iParam1) // Position - 0x15F5F Hash - 0x3A863EAC ^0xECB3FAF8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_594(int iParam0, int iParam1) // Position - 0x15F8C Hash - 0x90093024 ^0xBB5CF78A
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_595(int iParam0, int iParam1) // Position - 0x15FBD Hash - 0x90093024 ^0x830112D0
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

float func_596() // Position - 0x15FEE Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_745())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_746(2);

	if (Global_1347477.f_119)
		return func_746(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_747();
	num3 = func_748();
	num4 = func_749();
	num5 = func_750();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_751());
	num8 = func_746(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_752(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_753(3, num9, num9 > 100f);
	return func_754(num8, -100f, 100f);
}

float func_597() // Position - 0x16117 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_745())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_746(1);

	if (Global_1347477.f_119)
		return func_746(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_747();
	num3 = func_748();
	num4 = func_749();
	num5 = func_750();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_751());
	num8 = func_746(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_752(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_753(2, num9, num9 > 100f);
	return func_754(num8, -100f, 100f);
}

float func_598() // Position - 0x16240 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_745())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_746(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_755())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_756())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_746(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_747();
	num3 = func_748();
	num4 = func_749();
	num5 = func_750();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_751());
	num8 = func_746(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_752(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_753(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_746(0);

	return func_754(num8, -100f, 100f);
}

void func_599() // Position - 0x163E7 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

int func_600(var uParam0) // Position - 0x163FB Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_601(var uParam0) // Position - 0x16406 Hash - 0xB37C0C01 ^0x7F00D77
{
	BOOL flag;
	int currentMessage;
	BOOL flag2;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_156, false) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_156) || func_165(uParam0, 512))
	{
		if (!func_757(uParam0->f_213, 128))
			func_758();
	
		return;
	}

	if (func_514(uParam0, Global_35, 4) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, func_360(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_156, func_360(Global_35)) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!func_757(uParam0->f_213, 128))
			func_758();
	
		return;
	}

	flag = true;
	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);

	if (currentMessage != 0)
		if (func_759(currentMessage))
			if (func_725(Global_43801, false))
				flag = false;

	flag2 = false;

	if (func_757(uParam0->f_213, 512))
		flag2 = true;

	if (func_760(flag, flag2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_156);
		func_758();
	}

	return;
}

void func_602(var uParam0, char* sParam1) // Position - 0x16509 Hash - 0xBA5BE67 ^0xE6537545
{
	var unk;
	var unk9;

	if (func_600(uParam0) == 2 && func_761(uParam0->f_212, 16384) || func_165(uParam0, 268435456))
	{
		unk = { func_183(uParam0) };
		func_762(uParam0, &unk);
	}

	func_763(uParam0, sParam1);

	if (func_165(uParam0, 131072))
		func_764(uParam0, false);

	if (func_765())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_766();
	}

	if (func_742())
		func_579(true);

	func_179(uParam0, 0, false, 0, 0);
	TEXT_LABEL_ASSIGN_STRING(&unk9, sParam1, 32);
	func_767(uParam0, unk9);
	func_608(true, false);
	func_173(uParam0);

	if (func_768() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, func_360(Global_35)))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	if (func_604(uParam0, 1))
		uParam0->f_148(uParam0);

	func_769(uParam0);
	func_368(uParam0, true);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	TEXT_LABEL_ASSIGN_STRING(&Global_43802, sParam1, 24);
	return;
}

void func_603(var uParam0, int iParam1) // Position - 0x1660C Hash - 0x77441219 ^0x1DE6F6A1
{
	*uParam0 = iParam1;
	func_38(&(uParam0->f_1));
	return;
}

BOOL func_604(var uParam0, int iParam1) // Position - 0x16621 Hash - 0x718DD1EF ^0x498B0198
{
	return uParam0->f_151 && iParam1 != false;
}

void func_605(var uParam0) // Position - 0x16632 Hash - 0xC3FF5F57 ^0xC3FF5F57
{
	var unk;

	unk = { func_183(uParam0) };
	func_326(uParam0, &unk);
	return;
}

BOOL func_606(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1664D Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_620(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

void func_607(BOOL bParam0) // Position - 0x166A8 Hash - 0x70653DE9 ^0x49B958F9
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	return;
}

void func_608(BOOL bParam0, BOOL bParam1) // Position - 0x166DC Hash - 0xBAE5AEB2 ^0x9ABFBA0B
{
	if (func_770())
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);

	if (bParam0)
		if (func_771())
			func_772(true);

	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, bParam1, false);
	return;
}

void func_609(var uParam0) // Position - 0x1670B Hash - 0xBB431F9C ^0x2FD209EF
{
	var unk;

	if (!func_165(uParam0, 4))
	{
		if (func_761(uParam0->f_212, 16384))
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	
		unk = { func_773(uParam0) };
	
		if (!func_761(uParam0->f_212, 524288))
			func_774(&(uParam0->f_224));
	
		func_775(&(uParam0->f_212), 0, 2, unk, unk.f_1, unk.f_2, false);
		func_776(uParam0, 0f, 0f, 0f);
		func_777(uParam0);
		func_778(uParam0);
		func_779(uParam0, 0f, 0f, 0f, 0, false);
		func_780(uParam0);
		func_168(uParam0, 4);
		func_781(uParam0, false);
		func_782(&(Global_1946054.f_1497), Global_35, true, 64, true, true, true);
	
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_225)))
			CAM::_CAM_DESTROY(&(uParam0->f_225));
	}

	return;
}

BOOL func_610(var uParam0, BOOL bParam1) // Position - 0x167C6 Hash - 0x17E17456 ^0x62BCB78A
{
	if (func_165(uParam0, 262144))
		return false;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		return false;

	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, "ExportCamera"))
		return false;

	if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_156, "ExportCamera") || ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_156, "ExportCamera") && bParam1 || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_156))
	{
		func_168(uParam0, 262144);
		func_781(uParam0, true);
		return true;
	}

	return false;
}

int func_611(var uParam0) // Position - 0x1684F Hash - 0xEC4CCD24 ^0x1192C53B
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_156, false))
		return -1;

	return BUILTIN::FLOOR(ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_156) * 1000f);
}

int func_612(var uParam0) // Position - 0x16889 Hash - 0xEC4CCD24 ^0x99981E0E
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_156, false))
		return -1;

	return BUILTIN::FLOOR(ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_156) * 1000f);
}

BOOL func_613(var uParam0) // Position - 0x168C3 Hash - 0x68D51644 ^0xEE23B192
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		return true;

	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_156, false))
	{
		if (func_165(uParam0, 524288))
			ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
	
		return true;
	}

	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_156) && func_165(uParam0, 1048576))
		return true;

	return false;
}

void func_614(var uParam0) // Position - 0x1691D Hash - 0xCD2CB56 ^0x848D9CDE
{
	if (func_165(uParam0, 1073741824) && !func_165(uParam0, 524288) && func_165(uParam0, 512) && CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(1000);

	return;
}

void func_615(var uParam0) // Position - 0x16964 Hash - 0xA2B20AD3 ^0x46F7D26E
{
	if (!func_165(uParam0, 536870912))
	{
		func_781(uParam0, true);
		func_616(&(uParam0->f_213), uParam0->f_224);
		func_172();
		func_168(uParam0, 536870912);
	}

	if (func_165(uParam0, 524288))
		CAM::DO_SCREEN_FADE_OUT(0);

	func_783(uParam0);
	func_603(uParam0, 1);
	func_174(uParam0);
	func_784(uParam0);
	func_785(uParam0);
	func_786(uParam0, 4);
	func_178(uParam0);
	func_764(uParam0, true);
	func_173(uParam0);
	func_88(&(uParam0->f_1));

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);

	func_787(!func_757(uParam0->f_213, 128));

	if (!func_757(uParam0->f_213, 128))
		func_758();

	return;
}

void func_616(var uParam0, int iParam1) // Position - 0x16A31 Hash - 0xFE5D8273 ^0x73A78C82
{
	if (Global_1935630.f_12)
		return;

	func_788(2000);
	Global_16 = false;
	func_789();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_757(*uParam0, 8));

	if (!func_757(*uParam0, 1))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);

	if (func_757(*uParam0, 2) || func_757(*uParam0, 4))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_757(*uParam0, 16))
		func_790(true);

	if (func_757(*uParam0, 32))
	{
		func_791(Global_35, -383172193, 0, 1742327865, false, true, false, false, true, false);
		func_792(joaat("kit_bandana"), false);
	}

	func_782(&(Global_1946054.f_1497), Global_35, true, 49217, true, true, true);

	if (Global_1359489.f_16 & 4194304 != 0)
		Global_1359489.f_16 = Global_1359489.f_16 - Global_1359489.f_16 & 4194304;

	*uParam0 = 0;
	return;
}

void func_617() // Position - 0x16B42 Hash - 0xD4ABC353 ^0xB5896EA9
{
	Global_1935630.f_52 = 1;
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x16B51 Hash - 0xA17D549C ^0x660F44FE
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
	
		case 1:
			return "JOHN";
	
		case 2:
			return "JAVIER";
	
		case 3:
			return "BILL";
	
		case 4:
			return "UNCLE";
	
		case 5:
			return "HOSEA";
	
		case 6:
			return "MICAH";
	
		case 7:
			return "CHARLES";
	
		case 8:
			return "SEAN";
	
		case 9:
			return "LENNY";
	
		case 10:
			return "KIERAN";
	
		case 11:
			return "SADIE";
	
		case 12:
			return "DOG";
	
		case 13:
			return "ABIGAIL";
	
		case 14:
			return "JACK";
	
		case 15:
			return "MARYBETH";
	
		case 16:
			return "MOLLY";
	
		case 17:
			return "PEARSON";
	
		case 18:
			return "STRAUSS";
	
		case 19:
			return "GRIMSHAW";
	
		case 20:
			return "KAREN";
	
		case 21:
			return "SWANSON";
	
		case 22:
			return "TILLY";
	
		case 23:
			return "TRELAWNY";
	
		case 24:
			return "CLEET";
	
		case 25:
			return "JOE";
	
		case 26:
			return "EAGLEFLIES";
	
		default:
		
	}

	return "Companion unknown";
}

BOOL func_619() // Position - 0x16CC4 Hash - 0x1C71B0F ^0x1C71B0F
{
	if (func_157() != -1)
		return false;

	return func_228(true) > 0;
}

float func_620(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x16CDF Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_621(int iParam0) // Position - 0x16CFD Hash - 0xEB890713 ^0xB40CD388
{
	int num;
	int i;

	num = 0;

	if (!func_75(iParam0))
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

	if (!func_75(iParam0))
	{
		if (num != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return num;
}

PersChar func_622(int iParam0) // Position - 0x16DDE Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_75(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_440(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_623(Ped pedParam0) // Position - 0x16E7A Hash - 0xE7050FE7 ^0x978B7986
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

int func_624(int iParam0) // Position - 0x16EE2 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_625(int iParam0) // Position - 0x16F96 Hash - 0x6DD34799 ^0x352A62D8
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

BOOL func_626(Hash hParam0, int iParam1) // Position - 0x17037 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_627(int iParam0, int iParam1) // Position - 0x17051 Hash - 0xC74F1957 ^0xC74F1957
{
	if (!func_75(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_1154 = iParam1;
	return;
}

int func_628(int iParam0, int iParam1) // Position - 0x17074 Hash - 0x99A93628 ^0x27AE8C83
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

float func_629(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x18783 Hash - 0x4C6A3038 ^0xA855205
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

BOOL func_630(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x187EA Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

BOOL func_631(int iParam0) // Position - 0x18813 Hash - 0x78780946 ^0xDC2AB9A6
{
	if (!func_75(iParam0))
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

BOOL func_632(int iParam0, char* sParam1) // Position - 0x1885D Hash - 0x3BDA936C ^0xA66F8B33
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

Player _INVALID_PLAYER_INDEX() // Position - 0x18D58 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_634(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x18D61 Hash - 0x33B4669E ^0x56AD3276
{
	ePedType perscharModelName;

	if (!func_75(iParam0))
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
			perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_440(iParam0, true));
			STREAMING::REQUEST_MODEL(perscharModelName, false);
		
			if (STREAMING::HAS_MODEL_LOADED(perscharModelName))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_793(perscharModelName, uParam1, iParam4, true, true, 0, true, true, true, false, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(perscharModelName);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
	
		if (!func_6(Global_1360165[iParam0 /*1157*/].f_124, 0))
			return false;
	
		Global_1359489.f_12 = 1;
		func_233(iParam0, 256, false);
	}
	else
	{
		return false;
	}

	return true;
}

void func_635(Ped pedParam0, int iParam1) // Position - 0x18ECC Hash - 0xBC8691CC ^0x64CD07D4
{
	DECORATOR::DECOR_SET_BOOL(pedParam0, "HorseCompanion", true);
	func_795(pedParam0, func_794(iParam1));

	if (func_292(iParam1, 8))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 2);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, false);
	}

	if (ENTITY::DOES_ENTITY_EXIST(func_41(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_41(iParam1), pedParam0, false);
		PED::_0xED1C764997A86D5A(func_41(iParam1), pedParam0);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 367, true);
	}
	else
	{
		func_78(iParam1, 38, true);
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

	if (func_292(iParam1, 4096))
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
	func_471(iParam1, func_292(iParam1, 8192), func_292(iParam1, 16384), true);
	return;
}

BOOL func_636() // Position - 0x1902C Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_157() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

char* func_637(int iParam0, BOOL bParam1) // Position - 0x19051 Hash - 0xF4669507 ^0xF8578351
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

void func_638(Player plParam0, float fParam1, BOOL bParam2) // Position - 0x19174 Hash - 0x74F05B43 ^0xF2C5E074
{
	int healthAmount;

	if (!ENTITY::IS_ENTITY_DEAD(plParam0))
	{
		fParam1 = func_754(fParam1, 0f, 1f);
		healthAmount = BUILTIN::FLOOR(fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(plParam0, bParam2));
		ENTITY::SET_ENTITY_HEALTH(plParam0, healthAmount, 0);
	}

	return;
}

void func_639(int iParam0) // Position - 0x191AB Hash - 0xB1E2E498 ^0xC7EBD371
{
	Player player;

	if (!func_75(iParam0))
		return;

	if (func_440(iParam0, false) == 0)
		return;

	player = func_91(iParam0);
	func_696(player);
	func_233(iParam0, 8192, true);
	return;
}

void func_640(int iParam0) // Position - 0x191E6 Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Player player;

	if (!func_75(iParam0))
		return;

	if (func_440(iParam0, false) == 0)
		return;

	player = func_91(iParam0);
	func_697(player);
	func_233(iParam0, 8192, false);
	return;
}

void func_641(int iParam0) // Position - 0x19221 Hash - 0xB1E2E498 ^0x545B1681
{
	Player player;

	if (!func_75(iParam0))
		return;

	if (func_440(iParam0, false) == 0)
		return;

	player = func_91(iParam0);
	func_698(player);
	func_233(iParam0, 16384, true);
	return;
}

void func_642(int iParam0) // Position - 0x1925C Hash - 0x28CD0E89 ^0x67E48CA5
{
	Player player;

	if (!func_75(iParam0))
		return;

	if (func_440(iParam0, false) == 0)
		return;

	player = func_91(iParam0);
	func_700(player);
	func_233(iParam0, 16384, false);
	return;
}

void func_643(int iParam0) // Position - 0x19297 Hash - 0x5161A142 ^0x26FA799F
{
	Ped ped;
	int num;
	var unk;
	int i;
	Entity entity;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_480(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_796(i);
	
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

BOOL func_644(Hash hParam0) // Position - 0x1933D Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_797(hParam0))
		return false;

	if (!func_798())
		return true;

	return false;
}

void func_645(int iParam0, Ped pedParam1) // Position - 0x19360 Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/] = pedParam1;
	return;
}

void func_646(int iParam0) // Position - 0x1938C Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

void func_647(var uParam0) // Position - 0x193C4 Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_648(int iParam0, Hash hParam1, var uParam2) // Position - 0x193DD Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_799(iParam0, hParam1);
	!func_800(iParam0, hParam1.f_1);
	return;
}

void func_649(var uParam0) // Position - 0x19419 Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_801(&uParam0->[i /*94*/]);
	}

	return;
}

void func_650(var uParam0) // Position - 0x1943D Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_651(var uParam0) // Position - 0x1945F Hash - 0x92E3936E ^0xDB085754
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

void func_652(int iParam0) // Position - 0x194A4 Hash - 0xF98F3B32 ^0x8A036B17
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

void func_653(int iParam0, var uParam1) // Position - 0x194DA Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*uParam1 = num;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
	return;
}

void func_654(int iParam0, var uParam1) // Position - 0x194FA Hash - 0xD41D26E5 ^0x1EE19431
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

void func_655(BOOL bParam0) // Position - 0x19523 Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_656(var uParam0) // Position - 0x19534 Hash - 0x5F76BB50 ^0x40F56A0B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
	return;
}

void func_657(var uParam0) // Position - 0x1954C Hash - 0x92BF775F ^0x1739D63E
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	return;
}

int func_658(Hash hParam0) // Position - 0x1955F Hash - 0x50573299 ^0x50573299
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

void func_659(int iParam0) // Position - 0x19619 Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_472(iParam0);

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

void func_660(int iParam0, int iParam1) // Position - 0x1966A Hash - 0x7B6D7BEE ^0xF15D524D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam1 /*436*/], &Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383.f_508), 436);
	return;
}

void func_661(int iParam0, int iParam1) // Position - 0x196C9 Hash - 0x102876F9 ^0x8EA22A40
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &Global_1900383[iParam1 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam1 /*45*/], &Global_1900383[iParam0 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam0 /*45*/], &(Global_1900383.f_463), 45);
	return;
}

int func_662(int iParam0, int iParam1) // Position - 0x19711 Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_802(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_802(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_803(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_804(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_805(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

void func_663(Ped pedParam0) // Position - 0x197A4 Hash - 0xF32FB80D ^0xB662E625
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

	if (func_806(pedParam0))
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

	if (func_807(pedParam0))
	{
		num = func_808(pedParam0);
	
		if (func_809(num))
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

void func_664() // Position - 0x1990E Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_481(0))
		func_810(0);

	if (func_481(1))
		func_810(1);

	if (func_481(5))
		func_810(5);

	if (func_481(6))
		func_659(6);

	return;
}

void func_665(int iParam0) // Position - 0x1994A Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_393 = iParam0;
	return;
}

int func_666(var uParam0, var uParam1, var uParam2) // Position - 0x1995B Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_473())
	{
		if (func_811())
		{
			flag = false;
		
			if (!func_265(Global_1835011[15 /*74*/].f_1, true) && !func_812(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_813();
				*uParam1 = func_814();
				*uParam2 = func_815();
				return 1;
			}
			else
			{
				*uParam0 = func_816();
				*uParam1 = func_817();
				*uParam2 = func_818();
				return 1;
			}
		}
		else if (func_636())
		{
			if (!func_265(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_819();
				*uParam1 = func_820();
				*uParam2 = func_821();
				return 1;
			}
			else
			{
				*uParam0 = func_822();
				*uParam1 = func_823();
				*uParam2 = func_824();
				return 1;
			}
		}
	}
	else if (func_811())
	{
		*uParam0 = func_825();
		*uParam1 = func_826();
		*uParam2 = func_827();
		return 1;
	}
	else if (func_636())
	{
		*uParam0 = func_828();
		*uParam1 = func_829();
		*uParam2 = func_830();
		return 1;
	}

	return 0;
}

void func_667(int iParam0, var uParam1) // Position - 0x19A75 Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
	return;
}

void func_668(int iParam0, var uParam1) // Position - 0x19AA8 Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
	return;
}

void func_669(int iParam0, var uParam1) // Position - 0x19ADB Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
	return;
}

void func_670(int iParam0, int iParam1) // Position - 0x19B0E Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

void func_671(int iParam0, int iParam1) // Position - 0x19B41 Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Ped ped;
	int num2;
	int attributeRank;

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_489(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_666(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_831(iParam1);
	ped = func_480(iParam0);

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

void func_672(int iParam0, int iParam1) // Position - 0x19C3F Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

BOOL func_673(int iParam0, int iParam1) // Position - 0x19C78 Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

BOOL func_674(int iParam0, var uParam1) // Position - 0x19CAB Hash - 0x9604B47A ^0xC430D780
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_802(iParam0, &unk))
		return false;

	*uParam1 = func_832(unk, joaat("SLOTID_HORSE_MANE"), false);

	if (!func_626(*uParam1, 0))
		return false;

	return true;
}

BOOL func_675(int iParam0, var uParam1) // Position - 0x19CF4 Hash - 0x9604B47A ^0x406A0DCA
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_802(iParam0, &unk))
		return false;

	*uParam1 = func_832(unk, joaat("SLOTID_HORSE_TAIL"), false);

	if (!func_626(*uParam1, 0))
		return false;

	return true;
}

BOOL func_676(Hash hParam0, var uParam1) // Position - 0x19D3D Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_833(856287005, hParam0))
		return false;

	unk = { func_834() };
	*uParam1 = func_832(unk, hParam0, false);

	if (!func_626(*uParam1, 0))
		return false;

	return true;
}

void func_677(Ped pedParam0) // Position - 0x19D7F Hash - 0x4C9A12AA ^0x56351FC0
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

void func_678(Ped pedParam0, var uParam1) // Position - 0x19DC9 Hash - 0x6EA4BA5B ^0xEF2325EE
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_835(pedParam0, *uParam1);
	func_835(pedParam0, uParam1->f_1);
	return;
}

void func_679(Ped pedParam0) // Position - 0x19E0C Hash - 0x4C9A12AA ^0x5B9D01EA
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

void func_680(Ped pedParam0, var uParam1) // Position - 0x19E8A Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_835(pedParam0, *uParam1);
	func_835(pedParam0, uParam1->f_1);
	func_835(pedParam0, uParam1->f_2);
	func_835(pedParam0, uParam1->f_3);
	func_835(pedParam0, uParam1->f_4);
	func_835(pedParam0, uParam1->f_5);
	return;
}

int func_681(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x19EF5 Hash - 0x1A2B1EEB ^0x4DBC1D46
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

struct<4> func_682(BOOL bParam0) // Position - 0x19F4A Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_508(joaat("character"), func_836(), joaat("SLOTID_NONE"), bParam0);
}

int func_683(Hash hParam0) // Position - 0x19F66 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_626(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_684(BOOL bParam0) // Position - 0x19F91 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_458(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_508(923904168, func_682(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_508(923904168, func_682(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_508(923904168, func_682(bParam0), -740156546, false);
}

BOOL func_685(Hash hParam0, BOOL bParam1) // Position - 0x1A026 Hash - 0x62864AB ^0xBC339691
{
	if (func_459(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_812(24);
		else
			return true;

	return false;
}

struct<4> func_686(BOOL bParam0) // Position - 0x1A05F Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_458(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_508(271701509, func_682(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_508(271701509, func_682(bParam0), 12999093, false);
}

BOOL func_687(Hash hParam0, Hash hParam1) // Position - 0x1A0C3 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_459(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_688(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1A122 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_458(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_689(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1A152 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_626(hParam0, 0))
		return 0;

	guid = { func_508(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_458(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_690(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1A19A Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_458(false);
	*panParam1 = { func_508(hParam0, func_684(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_691(Hash hParam0) // Position - 0x1A1DF Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_692(Hash hParam0) // Position - 0x1A1F5 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_693(int iParam0, int iParam1) // Position - 0x1A203 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

char* func_694(Object obParam0) // Position - 0x1A219 Hash - 0x7C0535ED ^0x86267F45
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return "";

	entityModel = ENTITY::GET_ENTITY_MODEL(obParam0);
	return func_837(entityModel);
}

char* func_695(Vehicle veParam0) // Position - 0x1A23F Hash - 0xD474817F ^0xAC045CCD
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

void func_696(Ped pedParam0) // Position - 0x1A36A Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_838(pedParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(pedParam0, 127, false);

	if (FIRE::IS_ENTITY_ON_FIRE(pedParam0))
	{
		FIRE::STOP_ENTITY_FIRE(pedParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(pedParam0, ENTITY::GET_ENTITY_MAX_HEALTH(pedParam0, false), 0);
	}

	return;
}

void func_697(Ped pedParam0) // Position - 0x1A3B6 Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_838(pedParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(pedParam0, 0, false);
	return;
}

void func_698(Ped pedParam0) // Position - 0x1A3E3 Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_838(pedParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(pedParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(pedParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedParam0, false);
	return;
}

void func_699(Ped pedParam0) // Position - 0x1A419 Hash - 0x6EDA2DDB ^0x823A87C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (func_77(14))
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

void func_700(Ped pedParam0) // Position - 0x1A498 Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_838(pedParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(pedParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(pedParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedParam0, true);
	return;
}

int func_701(int iParam0, var uParam1, var uParam2) // Position - 0x1A4CC Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_839(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_702(int iParam0, int iParam1) // Position - 0x1A4EE Hash - 0x2641680 ^0x6B70222B
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
		if (func_313(iParam1, num))
			num2 = num;

	return num2;
}

int func_703(int iParam0) // Position - 0x1A5C5 Hash - 0xDEAE5330 ^0x7DE1135D
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

void func_704(int iParam0, int iParam1) // Position - 0x1A63C Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = Global_40.f_4942[iParam0 /*60*/].f_5 - Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1;
	return;
}

int func_705(var uParam0, Ped pedParam1) // Position - 0x1A66C Hash - 0x8DFA86E1 ^0x75C8CDA8
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

Ped func_706(var uParam0, const char* sParam1) // Position - 0x1A6BA Hash - 0x17FD83A4 ^0xB6EF1519
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[i /*12*/].f_1), sParam1))
			return uParam0->f_13[i /*12*/];
	}

	return 0;
}

void func_707(var uParam0, Ped pedParam1) // Position - 0x1A705 Hash - 0x189F639F ^0x7A674B29
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

int func_708(var uParam0) // Position - 0x1A74D Hash - 0x94F494B3 ^0x5CC98034
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]))
			return i;
	}

	return -1;
}

void func_709(var uParam0, int iParam1) // Position - 0x1A77E Hash - 0xA4EAD31F ^0x1843FE5B
{
	uParam0->f_11 = uParam0->f_11 - uParam0->f_11 && iParam1;
	return;
}

BOOL func_710(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x1A796 Hash - 0x6B75AC83 ^0x6B75AC83
{
	if (bParam2)
		return func_840(hParam1);

	return func_277(iParam0, hParam1);
}

BOOL func_711(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x1A7B7 Hash - 0x6B75AC83 ^0x6B75AC83
{
	if (bParam2)
		return func_841(hParam1);

	return func_345(iParam0, hParam1);
}

BOOL func_712(int iParam0) // Position - 0x1A7D8 Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1899515 > iParam0;
}

void func_713(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x1A7E7 Hash - 0x2CE3C411 ^0x2CE3C411
{
	if (bParam2)
		func_842(hParam1);
	else
		func_19(iParam0, hParam1);

	return;
}

BOOL func_714(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1A805 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_715(Volume volParam0, BOOL bParam1) // Position - 0x1A81F Hash - 0xEA796703 ^0x695D7925
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

Ped func_716(BOOL bParam0, Ped pedParam1, Ped pedParam2) // Position - 0x1A887 Hash - 0xCF32FBA5 ^0xCF32FBA5
{
	if (bParam0)
		return pedParam1;

	return pedParam2;
}

void func_717(int* piParam0, int iParam1) // Position - 0x1A89B Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_718(Ped pedParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1A8AB Hash - 0x9E5AD4FF ^0xCE9B419A
{
	const char* str;
	int num;

	if (func_12(piParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*piParam1, 11))
			return;
	
		func_13(&(piParam1->f_6), false, true);
	}

	if (!func_12(piParam1->f_6) && !MISC::IS_BIT_SET(*piParam1, 4))
	{
		str = piParam1->f_5;
	
		if (func_571(piParam1))
		{
			if (piParam1->f_8 != iParam5)
				iParam5 = piParam1->f_8;
		
			piParam1->f_6 = func_843(str, piParam1->f_7, pedParam0, piParam1->f_9, iParam4, false, 0, iParam5, fParam2, piParam1->f_2, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), piParam1->f_10, false);
		
			if (func_12(piParam1->f_6))
			{
				if (!bParam6)
				{
					num = -1;
					func_726(piParam1->f_6, pedParam0, 0, true, num);
				}
				else
				{
					func_844(piParam1->f_6, 17, true, true);
				}
			
				if (MISC::IS_BIT_SET(*piParam1, 1))
					if (MISC::IS_BIT_SET(*piParam1, 3))
						func_845(piParam1->f_6, str, piParam1->f_16, piParam1->f_14, true);
					else
						func_336(piParam1->f_6, str, piParam1->f_14, true);
			
				if (MISC::IS_BIT_SET(*piParam1, 10))
					func_844(piParam1->f_6, 16, true, true);
			
				if (!MISC::IS_BIT_SET(*piParam1, 0) || MISC::IS_BIT_SET(*piParam1, 13))
					func_186(piParam1->f_6, false, true);
				else
					func_186(piParam1->f_6, true, true);
			}
		}
	}

	return;
}

int func_719(Ped pedParam0) // Position - 0x1AA02 Hash - 0xB2D81349 ^0xACC293B5
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

void func_720(int* piParam0, int iParam1) // Position - 0x1AA57 Hash - 0xF6A14047 ^0x2BDBE9DA
{
	if (!func_741(piParam0, 19))
	{
		if (piParam0->f_9 != iParam1)
		{
			piParam0->f_9 = iParam1;
			func_717(piParam0, 14);
		}
	}

	return;
}

BOOL func_721(BOOL bParam0) // Position - 0x1AA82 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_722(BOOL bParam0) // Position - 0x1AA92 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_723(Ped pedParam0, int iParam1) // Position - 0x1AAA3 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_724(int* piParam0, int* piParam1, Ped pedParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, float fParam9, BOOL bParam10, int iParam11) // Position - 0x1AAE2 Hash - 0x99448FD3 ^0x2F09ABA3
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

BOOL func_725(int iParam0, BOOL bParam1) // Position - 0x1AC1C Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_12(iParam0))
		return false;

	return !func_463(iParam0, 4);
}

void func_726(int iParam0, Ped pedParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1AC41 Hash - 0x8A4F30F0 ^0xE1CE78DB
{
	int num;

	if (bParam3 && !func_12(iParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	num = func_109(iParam0);
	func_844(iParam0, 18, false, true);
	func_844(iParam0, 17, false, true);

	if (iParam4 == -1)
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(pedParam1);

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam4, iParam2);
	return;
}

BOOL func_727(int iParam0, BOOL bParam1) // Position - 0x1ACA6 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_12(iParam0))
		return false;

	num = func_109(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_728(int iParam0, BOOL bParam1) // Position - 0x1ACFE Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_12(iParam0))
		return false;

	num = func_109(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_729(int iParam0, BOOL bParam1) // Position - 0x1AD31 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_12(iParam0))
		return;

	num = func_109(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

Hash func_730(Hash hParam0) // Position - 0x1AD63 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_738(func_846(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_731(var uParam0) // Position - 0x1AD92 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_732(81053684, uParam0))
		return true;

	if (func_732(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_732(Hash hParam0, var uParam1) // Position - 0x1ADBF Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_738(func_846(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_459(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

BOOL func_733() // Position - 0x1AE36 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_734(Hash hParam0) // Position - 0x1AE45 Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_847())
		return false;

	if (!func_626(hParam0, 0))
		return false;

	if (!func_848(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

int func_735(Hash hParam0) // Position - 0x1AE7C Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_504(hParam0, true, false) };
	return func_849(unk.f_4);
}

void func_736(var uParam0, int iParam1) // Position - 0x1AE98 Hash - 0xF55E891F ^0xF55E891F
{
	func_850(uParam0, iParam1);
	return;
}

BOOL func_737(Hash hParam0, int iParam1) // Position - 0x1AEA8 Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_851(hParam0);

	if (func_852(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_573(&hash))
			if (flag)
				interactionAnimHash = func_853();
			else
				interactionAnimHash = func_854();
		else if (func_74(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_855();
		else
			interactionAnimHash = func_856();
	else if (func_731(&hash))
		if (func_852(hash, -1303648999))
			interactionAnimHash = func_853();
		else
			interactionAnimHash = func_854();
	else if (flag)
		interactionAnimHash = func_855();
	else
		interactionAnimHash = func_856();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

int func_738(int iParam0, int iParam1) // Position - 0x1AF7B Hash - 0x9D981F95 ^0x9D981F95
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

void func_739(Hash hParam0, int iParam1) // Position - 0x1B14C Hash - 0xBA32D184 ^0x5EA8C439
{
	int num;
	int num2;
	int num3;
	var unk;
	Hash hash;

	num = func_735(hParam0);
	num2 = func_738(num, 1);

	if (num2 == 39)
		return;

	if (func_857(hParam0) && func_858(hParam0))
		iParam1 = iParam1 | 64;

	if (num == 1108822547 && func_859(32768) || Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && hParam0 != Global_1946054.f_1497.f_1[num2 /*3*/])
	{
		if (func_857(Global_1946054.f_1497.f_1[num2 /*3*/]) && func_858(Global_1946054.f_1497.f_1[num2 /*3*/]))
			iParam1 = iParam1 | 32;
	
		if (Global_1946054.f_57[num2 /*11*/].f_1 > 1)
			iParam1 = iParam1 | 16;
	
		num3 = 0;
	
		switch (func_459(hParam0))
		{
			case -525676072:
				if (func_859(32768))
					func_861(func_860(num2, 1));
			
				if (func_859(32768) || func_732(-2061583405, &hash) && !func_858(hash))
					PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			
				if (func_732(81053684, &hash))
				{
					num3 = func_738(func_846(81053684), 1);
				
					if (num3 == 39)
						break;
				
					Global_1946054.f_2377[num3 /*2*/] = Global_1946054.f_57[num3 /*11*/];
				}
				break;
		
			case 81053684:
				if (func_732(-525676072, &unk))
				{
					num3 = func_738(func_846(-525676072), 1);
				
					if (num3 == 39)
						break;
				
					Global_1946054.f_2377[num3 /*2*/] = Global_1946054.f_57[num3 /*11*/];
				}
				break;
		}
	}

	Global_1946054.f_2377[num2 /*2*/] = hParam0;
	func_862(num, iParam1, 6);
	return;
}

void func_740(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x1B317 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_541(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_863(num);
	return;
}

BOOL func_741(int* piParam0, int iParam1) // Position - 0x1B349 Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_742() // Position - 0x1B35A Hash - 0x3CA1BB47 ^0x6A0D5C15
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	return false;
}

BOOL func_743(Hash hParam0) // Position - 0x1B374 Hash - 0x798E6037 ^0xDD3AB35C
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
		{
			func_864(i);
			return true;
		}
	}

	return false;
}

Vector3 func_744(float fParam0, var uParam1, var uParam2) // Position - 0x1B3B4 Hash - 0xFB6A39D2 ^0x80C9C759
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

BOOL func_745() // Position - 0x1B3F3 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_746(int iParam0) // Position - 0x1B40F Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_747() // Position - 0x1B421 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_865(13);
	num2 = func_866(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_748() // Position - 0x1B464 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_749() // Position - 0x1B47F Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_867())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_750() // Position - 0x1B49E Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_751() // Position - 0x1B4E0 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_752(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1B4EE Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_868(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_753(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1B53A Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_868(iParam0, 2, false, false);
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

float func_754(float fParam0, float fParam1, float fParam2) // Position - 0x1B680 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_755() // Position - 0x1B6A7 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_865(12) <= -99f;
}

BOOL func_756() // Position - 0x1B6BB Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_865(12) >= 99f;
}

BOOL func_757(int iParam0, int iParam1) // Position - 0x1B6CF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_758() // Position - 0x1B6DE Hash - 0xF2FB1A38 ^0xF2FB1A38
{
	if (func_12(Global_43801))
		func_13(&Global_43801, false, false);

	return;
}

BOOL func_759(int iParam0) // Position - 0x1B6F9 Hash - 0x531420D5 ^0x3A11B780
{
	int messageState;

	if (func_869(iParam0))
	{
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return messageState == 4 || messageState == 0 || messageState == 3 || messageState == 5 || messageState == 2;
	}

	return false;
}

BOOL func_760(BOOL bParam0, BOOL bParam1) // Position - 0x1B742 Hash - 0xDB63BA21 ^0xC093752B
{
	if (!func_12(Global_43801))
	{
		Global_43801 = func_870("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("LONG_TIMED_EVENT"), false);
		Global_1945188[Global_43801 /*18*/].f_16 = Global_23[3];
		func_871(Global_43801, false, true);
		func_872(Global_43801, 6, true);
	
		if (bParam1)
			func_872(Global_43801, 14, true);
	}
	else
	{
		if (!func_725(Global_43801, false))
			func_186(Global_43801, true, true);
	
		if (func_873(Global_43801, true) != 0f && bParam0)
			func_871(Global_43801, true, true);
		else
			func_871(Global_43801, false, true);
	
		return func_727(Global_43801, true);
	}

	return false;
}

BOOL func_761(int iParam0, int iParam1) // Position - 0x1B800 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_762(var uParam0, const char* sParam1) // Position - 0x1B80F Hash - 0x2418A0DB ^0xA7D7C92D
{
	int i;
	var unk;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
		return;

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_156, sParam1))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_174[i /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, &uParam0->f_174[i /*9*/]))
		{
			unk = { uParam0->f_158 };
			uParam0->f_174[i /*9*/] = { unk };
		}
	}

	func_326(uParam0, sParam1);
	func_175(uParam0, 2097152, true);
	func_168(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_156, sParam1, true);
	return;
}

void func_763(var uParam0, char* sParam1) // Position - 0x1B8CE Hash - 0x162FA556 ^0xA9384D93
{
	if (!func_165(uParam0, 32) || func_874(uParam0) || func_165(uParam0, 268435456) && !func_165(uParam0, 65536))
		func_875(&(uParam0->f_212), 256);

	return;
}

void func_764(var uParam0, BOOL bParam1) // Position - 0x1B91A Hash - 0xA338CC7 ^0xAFB97042
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

BOOL func_765() // Position - 0x1B98C Hash - 0x35A4808D ^0x7E542F56
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_player_journal")) > 0;
}

void func_766() // Position - 0x1B99F Hash - 0x9198443F ^0xEDA86CC9
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

void func_767(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1B9F1 Hash - 0x7B955CDC ^0xE7358B15
{
	uParam0->f_152 = { uParam1 };
	return;
}

BOOL func_768() // Position - 0x1BA03 Hash - 0xBA0B7E94 ^0x198E4494
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
		return true;

	return false;
}

void func_769(var uParam0) // Position - 0x1BA27 Hash - 0xBF43156 ^0x1D44D418
{
	int i;
	var unk;

	for (i = 0; i < 4; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_174[i /*9*/]))
			func_876(uParam0, &uParam0->f_174[i /*9*/]);
	}

	unk = { func_363() };
	func_876(uParam0, &unk);
	unk = { func_183(uParam0) };
	func_876(uParam0, &unk);
	return;
}

BOOL func_770() // Position - 0x1BA83 Hash - 0x497997A3 ^0xEB2F5273
{
	return func_869(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

BOOL func_771() // Position - 0x1BA94 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_772(BOOL bParam0) // Position - 0x1BAB4 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

Vector3 func_773(var uParam0) // Position - 0x1BAC4 Hash - 0xD2D3D44D ^0x3BD524C4
{
	return uParam0->f_214;
}

void func_774(var uParam0) // Position - 0x1BAD2 Hash - 0xC68D2F1F ^0xFC9AB41F
{
	Hash hash;

	if (func_573(&hash))
	{
		if (func_626(hash, 0))
		{
			if (func_459(hash) == -525676072)
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("MASKS_LARGE"), 0);
				func_791(Global_35, -2065815962, 0, 1108822547, false, true, false, false, false, false);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("neckwear"), 0);
			}
		
			if (!func_626(*uParam0, 0))
				*uParam0 = hash;
		}
	}

	return;
}

void func_775(var uParam0, eSetPlayerControlFlags espcfParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x1BB42 Hash - 0x3C079E71 ^0x58721EE9
{
	ItemSet itemset;
	BOOL flag;
	int i;
	Vector3 offsetFromEntityInWorldCoords;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;
	BOOL flag2;
	Ped mount;

	if (Global_1935630.f_12)
		return;

	Global_16 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_877(0, false);
		func_878(-1);
	}

	func_607(true);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);

	if (!func_761(*uParam0, 32))
		espcfParam1 = espcfParam1 | SPC_REMOVE_EXPLOSIONS;

	if (!func_761(*uParam0, 64))
		espcfParam1 = espcfParam1 | SPC_REMOVE_FIRES;

	if (!func_761(*uParam0, 128))
		espcfParam1 = espcfParam1 | SPC_REMOVE_PROJECTILES;

	if (func_761(*uParam0, 131072))
		espcfParam1 = espcfParam1 | SPC_PREVENT_EVERYBODY_BACKOFF;

	if (!func_761(*uParam0, 32768))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam1, true);

	if (!func_761(*uParam0, 1))
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL, 0);

	if (!func_761(*uParam0, 65536))
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);

	if (!func_761(*uParam0, 4) && !func_761(*uParam0, 2))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_761(*uParam0, 2048))
		func_879(false, false);

	if (func_761(*uParam0, 8))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	if (func_761(*uParam0, 256))
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);

	if (func_761(*uParam0, 8192))
		func_880();

	if (!func_761(*uParam0, 262144))
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	if (!func_761(*uParam0, 512))
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);

	if (!func_761(*uParam0, 1024))
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
	
		if (!func_761(*uParam0, 16))
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
						if (func_408() == entityFromItem)
							flag2 = true;
				
					offsetFromEntityInWorldCoords = vParam3;
					offsetFromEntityInWorldCoords.f_1 = uParam4;
					offsetFromEntityInWorldCoords.f_2 = uParam5;
				
					if (_IS_NULL_VECTOR(offsetFromEntityInWorldCoords))
					{
						offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, (float)-1 + i, 0f) };
						func_881(&offsetFromEntityInWorldCoords, 50, 10, false);
					}
				
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, true);
					ENTITY::SET_ENTITY_COORDS(entityFromItem, offsetFromEntityInWorldCoords, false, true, true, true);
				
					if (flag2)
					{
						func_478(2);
						func_477(-1);
						func_488(offsetFromEntityInWorldCoords);
						func_883(func_882());
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

	if (!func_761(*uParam0, 4096))
		func_545(Global_35);

	if (!func_761(*uParam0, 1048576))
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);

	if (!func_761(*uParam0, 2097152))
		if (func_884() || PED::_IS_PED_DRUNK(Global_35))
			func_885(true);

	if (Global_1359489.f_16 & 4194304 == 0)
		Global_1359489.f_16 = Global_1359489.f_16 | 4194304;

	*uParam0 = 0;
	return;
}

void func_776(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x1BED0 Hash - 0xA71191EC ^0x624DBFEA
{
	uParam0->f_214 = { fParam1 };
	return;
}

void func_777(var uParam0) // Position - 0x1BEE2 Hash - 0x6CEFB5BE ^0xE5B7A16E
{
	BOOL flag;
	Ped lastMount;
	int num;
	Vehicle playersLastVehicle;

	if (func_165(uParam0, 2048) && !_IS_NULL_VECTOR(func_886(uParam0)))
	{
		flag = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		lastMount = PED::_GET_LAST_MOUNT(Global_35);
	
		if (!ENTITY::IS_ENTITY_DEAD(lastMount) && flag && ENTITY::IS_ENTITY_IN_VOLUME(lastMount, uParam0->f_4, true, 0) || func_165(uParam0, -2147483648) && PED::GET_MOUNT(Global_35) != lastMount)
		{
			num = 2;
		
			if (TASK::IS_PED_IN_WRITHE(lastMount))
				num = num | 32;
		
			func_59(lastMount, func_886(uParam0), func_887(uParam0), num, 1073741824);
		}
	
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle) && flag && ENTITY::IS_ENTITY_IN_VOLUME(playersLastVehicle, uParam0->f_4, true, 0) || func_165(uParam0, -2147483648) && !PED::IS_PED_IN_VEHICLE(Global_35, playersLastVehicle, true))
			func_59(playersLastVehicle, func_886(uParam0), func_887(uParam0), 2, 1073741824);
	}

	return;
}

void func_778(var uParam0) // Position - 0x1BFEE Hash - 0x12FA3EB8 ^0xDBEBE05A
{
	Vehicle vehiclePedIsUsing;
	var unk;

	if (func_165(uParam0, 268435456) && !_IS_NULL_VECTOR(func_886(uParam0)) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing))
		{
			unk = { func_886(uParam0) };
			func_59(vehiclePedIsUsing, unk, func_888(unk, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehiclePedIsUsing, false);
			ENTITY::SET_ENTITY_VELOCITY(vehiclePedIsUsing, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehiclePedIsUsing, 0f);
		}
	}

	return;
}

void func_779(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, BOOL bParam5) // Position - 0x1C075 Hash - 0x76728272 ^0xD1BF7CA9
{
	uParam0->f_217 = { fParam1 };
	uParam0->f_220 = iParam4;

	if (_IS_NULL_VECTOR(fParam1))
	{
		func_175(uParam0, 2048, true);
	}
	else
	{
		func_168(uParam0, 2048);
	
		if (bParam5)
			func_168(uParam0, -2147483648);
	}

	return;
}

void func_780(var uParam0) // Position - 0x1C0BE Hash - 0x7FFA762F ^0x9690EB12
{
	int i;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < 11; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[i /*12*/]) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]) != Global_35)
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]);
		
			if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, &(uParam0->f_13[i /*12*/].f_1)))
				{
					if (!func_542(&uParam0->f_13[i /*12*/], 8))
					{
						if (func_298(func_409(pedIndexFromEntityIndex, 0, true, false)))
							if (!func_889(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(pedIndexFromEntityIndex, 0)))
								WEAPON::SET_CURRENT_PED_WEAPON(pedIndexFromEntityIndex, joaat("WEAPON_UNARMED"), true, 0, false, false);
					
						if (func_298(func_409(pedIndexFromEntityIndex, 1, true, false)))
							if (!func_889(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(pedIndexFromEntityIndex, 1)))
								WEAPON::SET_CURRENT_PED_WEAPON(pedIndexFromEntityIndex, joaat("WEAPON_UNARMED"), true, 1, false, false);
					}
				}
			}
		}
	}

	return;
}

void func_781(var uParam0, BOOL bParam1) // Position - 0x1C1B9 Hash - 0x5BF0A49C ^0x170505BF
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

void func_782(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1C1EB Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_157() != -1;
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
		
			func_541(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_890(pedParam1, 29, isMp, true, 0);
			func_890(pedParam1, 31, isMp, true, 0);
			func_890(pedParam1, 30, isMp, true, 0);
			func_890(pedParam1, 22, isMp, true, 0);
			func_890(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_859(32768) && func_891(1108822547, 8) && func_892(10, iParam3))
		func_893(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_860(num, 1);
		
			if (func_891(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_892(num, iParam3))
				{
				}
				else if (func_891(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_891(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_890(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_894(num2, 1, 6);
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
								func_890(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_891(num2, 1))
								func_895(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_891(num2, 1))
						func_895(num2, 1, 6);
				
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

void func_783(var uParam0) // Position - 0x1C534 Hash - 0x9561B7E8 ^0xC030BAB8
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_152), "", 32);
	func_896(uParam0);
	func_170(uParam0, 0f, 0f, 0f);
	func_897(uParam0);
	return;
}

void func_784(var uParam0) // Position - 0x1C55A Hash - 0x4CFEC0C6 ^0x732F0BAC
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		uParam0->f_13[i /*12*/].f_11 = 0;
	}

	return;
}

void func_785(var uParam0) // Position - 0x1C580 Hash - 0xBA5A1D5A ^0x2C0A2EA5
{
	uParam0->f_8 = 0;
	return;
}

void func_786(var uParam0, int iParam1) // Position - 0x1C58D Hash - 0x9718BD0D ^0x1F200EB4
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		func_709(&uParam0->f_13[i /*12*/], iParam1);
	}

	return;
}

void func_787(BOOL bParam0) // Position - 0x1C5B6 Hash - 0x52E0A199 ^0x70662531
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);

	Global_43800 = -1;
	TEXT_LABEL_ASSIGN_STRING(&Global_43802, "", 24);
	Global_16 = false;

	if (bParam0)
		func_758();

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	return;
}

void func_788(int iParam0) // Position - 0x1C5FA Hash - 0x7AE52724 ^0x9315F21B
{
	func_898();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
	return;
}

void func_789() // Position - 0x1C618 Hash - 0x47CA4FE0 ^0xED93DC86
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	return;
}

void func_790(BOOL bParam0) // Position - 0x1C63F Hash - 0xAD1429D0 ^0xAD1429D0
{
	if (bParam0)
		Global_1945188.f_865 = Global_1945188.f_865 - Global_1945188.f_865 & 2;
	else
		Global_1945188.f_865 = Global_1945188.f_865 | 2;

	func_899(bParam0);
	return;
}

int func_791(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x1C67D Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_504(hParam1, true, false) };
		iParam3 = func_849(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_900(hParam1, hParam2, func_738(iParam3, 1), bParam4, bParam9))
		return 0;

	func_901(true, func_157() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_859(32768) && hParam1 != Global_1946054.f_57[func_738(iParam3, 1) /*11*/])
			{
				func_902();
				func_740(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_738(iParam3, 1) /*11*/])
				func_740(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_740(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_903(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_740(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_182(0);
			func_904(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_740(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_792(Hash hParam0, BOOL bParam1) // Position - 0x1C7EC Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_504(hParam0, false, false) };
	guid = { func_508(hParam0, unk, unk.f_4, false) };

	if (func_689(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_458(false), &guid, bParam1);
	return;
}

Ped func_793(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1C836 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_905(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

int func_794(int iParam0) // Position - 0x1C878 Hash - 0xF239A6CA ^0xF239A6CA
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
			if (func_812(45))
				return 1;
			else
				return 2;
			break;
	
		case 11:
			if (func_812(45))
				return 2;
			else
				return 1;
			break;
	}

	return 0;
}

void func_795(Ped pedParam0, int iParam1) // Position - 0x1C913 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_796(int iParam0) // Position - 0x1C93A Hash - 0x1B64DC55 ^0x1B64DC55
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

BOOL func_797(Hash hParam0) // Position - 0x1C972 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_798() // Position - 0x1C9B4 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_799(int iParam0, Hash hParam1) // Position - 0x1C9C5 Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_802(iParam0, &unk))
		return false;

	unk30 = { func_508(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_906(unk30, 1);
}

BOOL func_800(int iParam0, Hash hParam1) // Position - 0x1CA09 Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_802(iParam0, &unk))
		return false;

	unk30 = { func_508(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_906(unk30, true);
}

void func_801(var uParam0) // Position - 0x1CA4D Hash - 0x6843C143 ^0xA531F0D1
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

BOOL func_802(int iParam0, Any* panParam1) // Position - 0x1CAF4 Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_907(iParam0))
		return false;

	hash = func_803(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_682(false) };

	if (!func_908(unk15, hash, &unk, 0, false))
		return false;

	if (!func_909(&unk, panParam1))
		return false;

	return true;
}

Hash func_803(int iParam0) // Position - 0x1CB59 Hash - 0xBD10D1A2 ^0xE9C9558B
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

BOOL func_804(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1CBC5 Hash - 0x8FC90634 ^0x533F9AFB
{
	var unk;
	var outGuid;

	if (!func_510(bParam10))
		return func_910(uParam0, uParam4, hParam8, true, bParam9, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_688(uParam0, &unk, false, false))
		return false;

	if (func_911(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_458(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_906(outGuid, true);

	return true;
}

BOOL func_805(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x1CC89 Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_510(bParam9))
		return func_912(uParam0, uParam4, iParam8, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_911(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_688(uParam0, &unk, bParam9, true) || !func_688(uParam4, &unk15, bParam9, true))
		return false;

	if (func_911(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_458(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

BOOL func_806(Ped pedParam0) // Position - 0x1CDAE Hash - 0xFE36340F ^0xA3EC499F
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_913(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_807(Ped pedParam0) // Position - 0x1CDE7 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_808(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_808(Ped pedParam0) // Position - 0x1CE25 Hash - 0xD44AE303 ^0xA29D7F05
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

BOOL func_809(int iParam0) // Position - 0x1CE6A Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

void func_810(int iParam0) // Position - 0x1CE8B Hash - 0xD14C6A7D ^0x9C4D4670
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

	ped = func_480(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_673(iParam0, 64))
	{
		func_659(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_812(42);

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
				func_914(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_659(iParam0);

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
	
		if (func_915(1) < 1)
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
		func_916(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_673(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_917(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_918(entityCoords, Global_36);
	flag9 = false;

	if (num > func_919(iParam0))
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
		func_920(Global_1900383[iParam0 /*45*/].f_26);
		func_921(Global_1900383[iParam0 /*45*/].f_26);
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

	if (func_214(ped) && !isPedInWrithe)
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

	num2 = func_915(iParam0);
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

BOOL func_811() // Position - 0x1D601 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_157() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

BOOL func_812(int iParam0) // Position - 0x1D627 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_922(iParam0))
		return false;

	return func_923(iParam0);
}

int func_813() // Position - 0x1D643 Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_814() // Position - 0x1D650 Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_815() // Position - 0x1D65D Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_816() // Position - 0x1D666 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_817() // Position - 0x1D673 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_818() // Position - 0x1D680 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_819() // Position - 0x1D689 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_820() // Position - 0x1D696 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_821() // Position - 0x1D6A3 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_822() // Position - 0x1D6AC Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_823() // Position - 0x1D6B9 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_824() // Position - 0x1D6C6 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_825() // Position - 0x1D6CF Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_826() // Position - 0x1D6DC Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_827() // Position - 0x1D6E9 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_828() // Position - 0x1D6F2 Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_829() // Position - 0x1D6FF Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_830() // Position - 0x1D70C Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_831(int iParam0) // Position - 0x1D715 Hash - 0xCC180397 ^0xCC180397
{
	if (func_924() < iParam0)
		func_925(iParam0);

	return;
}

int func_832(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x1D72C Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_926(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_833(Hash hParam0, int iParam1) // Position - 0x1D75A Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_459(hParam0);
	
		if (category != 0)
		{
			num2 = func_927(hParam0);
		
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

struct<4> func_834() // Position - 0x1D7AE Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_682(false) };
	return func_508(856287005, unk, -218846335, false);
}

void func_835(Ped pedParam0, Hash hParam1) // Position - 0x1D7D2 Hash - 0x11B41686 ^0x947A8CD3
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

struct<4> func_836() // Position - 0x1D836 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

char* func_837(Hash hParam0) // Position - 0x1D842 Hash - 0xE6862179 ^0x43A22D4D
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

BOOL func_838(Player plParam0, BOOL bParam1) // Position - 0x1E8F2 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(plParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(plParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(plParam0);

	return true;
}

int func_839(int iParam0, int iParam1) // Position - 0x1E91F Hash - 0xB7443904 ^0xB7443904
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

BOOL func_840(Hash hParam0) // Position - 0x1ECB3 Hash - 0xA23CBB08 ^0xA23CBB08
{
	int num;

	num = -1;

	if (func_928(hParam0, &num))
		return func_929(num);

	return false;
}

BOOL func_841(Hash hParam0) // Position - 0x1ECD3 Hash - 0xC7FB2999 ^0xC7FB2999
{
	int num;

	if (func_930(hParam0))
		return 0;

	if (!func_6(Global_35, 0))
		return 0;

	num = -1;

	if (!func_928(hParam0, &num))
		return 0;

	func_840(hParam0);

	if (PED::_0x1E017404784AA6A3(Global_35, hParam0))
	{
		func_931(hParam0, true);
		return 1;
	}

	return 0;
}

void func_842(Hash hParam0) // Position - 0x1ED2F Hash - 0x6D182C1C ^0x6D182C1C
{
	int num;

	if (!func_114(hParam0))
		return;

	num = -1;

	if (func_928(hParam0, &num))
		func_932(num);

	return;
}

// Unhandled jump detected. Output should be considered invalid
int func_843(const char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x1ED58 Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_463(i, 2))
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
		func_933(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_844(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1EE2F Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_12(iParam0))
		return;

	num = func_109(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_845(int iParam0, const char* sParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1EE7A Hash - 0x3019E4B2 ^0x1E9F9706
{
	int num;

	if (bParam4 && !func_12(iParam0))
		return;

	num = func_109(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(10, sParam1, uParam2, uParam3));
	return;
}

int func_846(Hash hParam0) // Position - 0x1EECD Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_849(outSlotId);
}

BOOL func_847() // Position - 0x1EEF0 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_934())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_848(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1EF3A Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_626(hParam0, 0))
		return false;

	num = func_683(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_935(hParam0, 1))
			return false;

	return func_936(hParam0, false, bParam2) >= iParam1;
}

int func_849(var uParam0) // Position - 0x1EFA4 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_860(i, 1);
	}

	return -358215195;
}

void func_850(var uParam0, int iParam1) // Position - 0x1EFDF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_851(Hash hParam0) // Position - 0x1EFF0 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_731(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_852(Hash hParam0, Hash hParam1) // Position - 0x1F01A Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_853() // Position - 0x1F04B Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_937())
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

Hash func_854() // Position - 0x1F0A2 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_937())
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

Hash func_855() // Position - 0x1F0F9 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_937())
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

Hash func_856() // Position - 0x1F150 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_937())
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

BOOL func_857(Hash hParam0) // Position - 0x1F1A7 Hash - 0x8EDDF1C2 ^0x8EDDF1C2
{
	switch (func_459(hParam0))
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

BOOL func_858(Hash hParam0) // Position - 0x1F1F8 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_938(hParam0, &unk);
}

BOOL func_859(BOOL bParam0) // Position - 0x1F208 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

int func_860(int iParam0, int iParam1) // Position - 0x1F219 Hash - 0xE1D12727 ^0xA46110B3
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

void func_861(int iParam0) // Position - 0x1F468 Hash - 0x65A082AE ^0x65A082AE
{
	func_895(iParam0, 8, 6);
	return;
}

void func_862(int iParam0, int iParam1, int iParam2) // Position - 0x1F479 Hash - 0x7CD806BE ^0xAA6614A5
{
	Global_1946054.f_2377[func_738(iParam0, 1) /*2*/].f_1 = Global_1946054.f_2377[func_738(iParam0, 1) /*2*/].f_1 || iParam1;
	return;
}

void func_863(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1F4A8 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_539(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_540(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_541(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_539(iParam0))
				return;
		
			func_540(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_541(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_904(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_864(int iParam0) // Position - 0x1F6B4 Hash - 0xBEE7BE6F ^0x7416FECE
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

float func_865(int iParam0) // Position - 0x1F714 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_866(float fParam0) // Position - 0x1F728 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

BOOL func_867() // Position - 0x1F743 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

char* func_868(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F754 Hash - 0xC24B5846 ^0xAFD0C430
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

BOOL func_869(int iParam0) // Position - 0x1F7FC Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

int func_870(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0x1F808 Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_463(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_933(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

void func_871(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F88E Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_12(iParam0))
		return;

	num = func_109(iParam0);
	func_394(num, bParam1);
	return;
}

void func_872(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1F8BA Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_12(iParam0))
		return;

	num = func_109(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TYPE(Global_1945188[num /*18*/].f_3, iParam1);
	return;
}

float func_873(int iParam0, BOOL bParam1) // Position - 0x1F903 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_12(iParam0))
		return 0f;

	num = func_109(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_874(var uParam0) // Position - 0x1F95B Hash - 0x69DF0810 ^0x1B578435
{
	var string1;
	var string2;

	string1 = { func_177(uParam0) };
	string2 = { func_183(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&string1, &string2);
}

void func_875(var uParam0, int iParam1) // Position - 0x1F981 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_876(var uParam0, const char* sParam1) // Position - 0x1F992 Hash - 0x29BD6C2E ^0x4AFAADD6
{
	var string1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	string1 = { func_177(uParam0) };

	if (!MISC::ARE_STRINGS_EQUAL(&string1, sParam1) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_156, sParam1) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_156, sParam1))
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_156, sParam1);

	return;
}

void func_877(int iParam0, BOOL bParam1) // Position - 0x1F9E6 Hash - 0x9D46840B ^0xDAAD5146
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

void func_878(int iParam0) // Position - 0x1FA57 Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_157() != -1)
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

void func_879(BOOL bParam0, BOOL bParam1) // Position - 0x1FA94 Hash - 0x26C4C089 ^0x53EE9A65
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
			if (func_298(weaponHash) && WEAPON::IS_WEAPON_A_GUN(weaponHash))
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
		func_940(1);

	return;
}

void func_880() // Position - 0x1FB71 Hash - 0x2910738C ^0x2910738C
{
	Hash weaponHash;

	weaponHash = func_409(Global_35, 9, true, false);

	if (func_298(weaponHash))
		return;

	weaponHash = func_409(Global_35, 7, true, false);

	if (func_298(weaponHash))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 8, false, false);

	weaponHash = func_409(Global_35, 0, true, false);

	if (func_298(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_409(Global_35, 1, true, false);

	if (func_298(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_409(Global_35, 18, true, false);

	if (func_298(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_941();

	if (func_298(weaponHash))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_129(Global_35, weaponHash, true, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
	
		return;
	}

	weaponHash = func_942(6291456, 0);

	if (func_298(weaponHash))
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_129(Global_35, weaponHash, true, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);

	return;
}

int func_881(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1FCEC Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_364(*uParam0, 0f, 0f, 0f))
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

int func_882() // Position - 0x1FDE3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_883(int iParam0) // Position - 0x1FDEF Hash - 0xC20F1267 ^0x9F8567FC
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
	return;
}

BOOL func_884() // Position - 0x1FE04 Hash - 0x3630EC94 ^0x3630EC94
{
	return func_943() || func_121();
}

void func_885(BOOL bParam0) // Position - 0x1FE1A Hash - 0x6D9C7C2F ^0xEFFA22A7
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
	func_944(0f);
	Global_1935436.f_11 = 1;

	if (func_811())
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	else
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
		func_945();

	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);

	return;
}

Vector3 func_886(var uParam0) // Position - 0x1FED4 Hash - 0xD2D3D44D ^0xE1790432
{
	return uParam0->f_217;
}

int func_887(var uParam0) // Position - 0x1FEE2 Hash - 0xD73B9827 ^0x36043FED
{
	return uParam0->f_220;
}

float func_888(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x1FEEE Hash - 0x9F66817B ^0xCA5C01B6
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

BOOL func_889(var uParam0, Entity eParam1) // Position - 0x1FF53 Hash - 0x27668B5B ^0x40B23F47
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == eParam1)
			return true;
	}

	return false;
}

void func_890(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x1FFA0 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_860(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_946(hParam4);
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

BOOL func_891(int iParam0, int iParam1) // Position - 0x2009F Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_738(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

BOOL func_892(int iParam0, int iParam1) // Position - 0x200BD Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_893(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x200D6 Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_891(1108822547, 6))
	{
		if (bParam2)
		{
			func_890(pedParam0, num, func_157() != -1, false, 0);
			func_894(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_895(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

void func_894(int iParam0, int iParam1, int iParam2) // Position - 0x2019E Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_738(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_738(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

void func_895(int iParam0, int iParam1, int iParam2) // Position - 0x201CB Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_738(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_738(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_738(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_896(var uParam0) // Position - 0x2020A Hash - 0xB4553D98 ^0x1C653F96
{
	var unk;

	uParam0->f_166 = { unk };
	return;
}

void func_897(var uParam0) // Position - 0x2021E Hash - 0x8C4F04B3 ^0xF3603CC5
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_174[i /*9*/], "", 64);
	}

	return;
}

void func_898() // Position - 0x20245 Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1911774 = true;
	return;
}

void func_899(BOOL bParam0) // Position - 0x20252 Hash - 0x70EE66C ^0x88F73934
{
	Global_1935496.f_18 = !bParam0;
	return;
}

BOOL func_900(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x20263 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_947();

	if (iParam2 == 39)
	{
		unk = { func_504(hParam0, true, false) };
		iParam2 = func_738(func_849(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_852(hParam0, 866047851) && func_948(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_859(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_861(func_860(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_949(iParam2);
	func_950(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_951(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_951(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_952(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_953(hParam0, iParam2, hParam1, func_157() != -1);

	if (bParam4)
		func_954(&(Global_1946054.f_1378), true, 3);
	else
		func_954(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_895(func_860(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_901(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x20470 Hash - 0x5AF76643 ^0x5AF76643
{
	func_955(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_902() // Position - 0x20489 Hash - 0xB6203BF0 ^0x217DD714
{
	func_956(&(Global_1946054.f_2776));
	func_957(32768);
	func_895(1108822547, 8, 6);
	return;
}

int func_903(int iParam0) // Position - 0x204B0 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_738(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_904(int iParam0, int iParam1, int iParam2) // Position - 0x20514 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_361(num);
	return;
}

void func_905(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x20534 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_958(eptParam1))
		{
			func_128(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_959(pedParam0, 0, true);
	
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
			func_960(pedParam0, false);
			flag = true;
		}
	
		func_795(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_906(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x20615 Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_510(false))
		return func_961(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_688(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_458(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_907(int iParam0) // Position - 0x20688 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_803(iParam0);

	if (hash == 0)
		return false;

	unk = { func_682(false) };

	if (func_962(&unk, hash, false) > 0)
		return true;

	return false;
}

BOOL func_908(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x206BD Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_458(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_909(Any* panParam0, Any* panParam1) // Position - 0x206F7 Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_458(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

int func_910(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11) // Position - 0x20726 Hash - 0x657ADCCC ^0xBBA0C366
{
	var unk;
	int num;
	int itemSlotMaxCount;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_688(uParam0, &unk, true, false))
		return -1;

	if (func_911(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	num = func_689(unk.f_4, uParam4, hParam8, false);
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

	unk15 = { func_963(&unk) };
	unk15.f_4 = { uParam4 };
	unk15.f_11 = hParam8;
	unk15.f_10 = iParam10;
	num2 = func_964(1168099063, &unk15, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_911(var uParam0, var uParam1) // Position - 0x20824 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_912(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x20865 Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_911(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_688(uParam0, &unk, true, false) || !func_688(uParam4, &unk15, true, false))
		return -1;

	if (func_911(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_963(&unk) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_963(&unk15) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
		{
			if (func_965(num, 1168099063, &unk29) && func_965(num, 1168099063, &unk46))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_966(num, 1);
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
		num = func_964(1168099063, &unk29, false);
		num = func_964(1168099063, &unk46, false);
	}

	return num;
}

BOOL func_913(Hash hParam0) // Position - 0x20A0F Hash - 0xE48228D0 ^0xE48228D0
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

void func_914(Blip blParam0) // Position - 0x20A93 Hash - 0x537CC7C9 ^0x1DD189B2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_968(func_967(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_811())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_636();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

int func_915(int iParam0) // Position - 0x20AE0 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_916(Blip blParam0, BOOL bParam1) // Position - 0x20B14 Hash - 0xD25391C3 ^0x816DFC2F
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_968(func_967(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_811())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_636())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

Ped func_917(int iParam0) // Position - 0x20B84 Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_918(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x20BB2 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_919(int iParam0) // Position - 0x20BD0 Hash - 0x9BB7FBA3 ^0xA973C68A
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

	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_489(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_915(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_915(iParam0) + 1;
	num2 = func_969(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_970(num, any, num7);
	return num8;
}

void func_920(Blip blParam0) // Position - 0x20C8A Hash - 0x9892E8C ^0x28660E03
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

void func_921(Blip blParam0) // Position - 0x20D16 Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

BOOL func_922(int iParam0) // Position - 0x20D42 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_923(int iParam0) // Position - 0x20D55 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

int func_924() // Position - 0x20D7F Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_925(int iParam0) // Position - 0x20D90 Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

BOOL func_926(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x20DA3 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_458(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_688(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

int func_927(Hash hParam0) // Position - 0x20DE7 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_626(hParam0, 0))
		return 0;

	category = func_459(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_928(Hash hParam0, var uParam1) // Position - 0x20E16 Hash - 0x5AE5648 ^0x5AE5648
{
	*uParam1 = 0;

	while (*uParam1 < 15)
	{
		if (Global_40.f_4237[*uParam1 /*3*/] == hParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	*uParam1 = -1;
	return false;
}

BOOL func_929(int iParam0) // Position - 0x20E4E Hash - 0x37B65DF4 ^0xAAF87AA1
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return MISC::IS_BIT_SET(Global_1347701, iParam0);
}

BOOL func_930(Hash hParam0) // Position - 0x20E76 Hash - 0x89B17C93 ^0xBA1AAD59
{
	int num;

	if (!func_928(hParam0, &num))
		return false;

	return Global_40.f_4237[num /*3*/].f_2;
}

void func_931(Hash hParam0, BOOL bParam1) // Position - 0x20E9A Hash - 0x84F137F ^0x84F137F
{
	int num;

	num = -1;

	if (func_928(hParam0, &num))
		func_971(num, bParam1);

	return;
}

void func_932(int iParam0) // Position - 0x20EB8 Hash - 0xDAEBBAAC ^0xDAEBBAAC
{
	int i;

	func_972(&Global_40.f_4237[iParam0 /*3*/]);

	if (func_114(Global_40.f_4237[iParam0 /*3*/]))
		return;

	for (i = 0; i < 15; i = i + 1)
	{
		if (i < iParam0)
		{
		}
		else if (i < 14 && func_114(Global_40.f_4237[i + 1 /*3*/]))
		{
			Global_40.f_4237[i /*3*/] = Global_40.f_4237[i + 1 /*3*/];
			Global_40.f_4237[i /*3*/].f_1 = Global_40.f_4237[i + 1 /*3*/].f_1;
			Global_40.f_4237[i /*3*/].f_2 = Global_40.f_4237[i + 1 /*3*/].f_2;
			func_971(i, func_929(i + 1));
			func_279(&Global_40.f_4237[i + 1 /*3*/]);
			func_971(i + 1, false);
		}
	}

	return;
}

void func_933(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x20F8D Hash - 0x1B501888 ^0x6546232B
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
	func_394(iParam0, true);
	func_395(iParam0, true);
	func_396(iParam0, 128);
	return;
}

BOOL func_934() // Position - 0x21233 Hash - 0xFF29F962 ^0xFF29F962
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

BOOL func_935(Hash hParam0, int iParam1) // Position - 0x212D8 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_626(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_973(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_974("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_975(&unk, i, num, num2))
			{
			}
			else if (!func_298(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_976(num);
				return true;
			}
		}
	
		func_976(num);
	}

	return false;
}

int func_936(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21380 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_626(hParam0, 0))
		return 0;

	num = func_683(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_973(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_977(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_458(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_937() // Position - 0x21402 Hash - 0x6AC5469B ^0xEA730EC
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
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_978(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_978(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

int func_938(Hash hParam0, var uParam1) // Position - 0x214F8 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

var func_939(BOOL bParam0, var uParam1, var uParam2) // Position - 0x21538 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_940(int iParam0) // Position - 0x2154F Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

Hash func_941() // Position - 0x2156A Hash - 0x7AE16C89 ^0x6C5D08B9
{
	if (!func_298(Global_1935630.f_45))
		return joaat("WEAPON_UNARMED");

	return Global_1935630.f_45;
}

Hash func_942(int iParam0, int iParam1) // Position - 0x2158E Hash - 0xAED4FBA4 ^0xAED4FBA4
{
	var unk;

	return func_979(&unk, iParam0, iParam1);
}

BOOL func_943() // Position - 0x215A0 Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1935436 == 1;
}

void func_944(float fParam0) // Position - 0x215AE Hash - 0xD5DAF5A7 ^0xD5DAF5A7
{
	func_980(10, fParam0);
	return;
}

void func_945() // Position - 0x215BE Hash - 0xD8699E96 ^0x4AB9C3C3
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
	return;
}

Hash func_946(Hash hParam0) // Position - 0x215D5 Hash - 0xBBE66644 ^0xEC72F4B4
{
	Hash hash;

	hash = func_459(hParam0);

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

void func_947() // Position - 0x2160A Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

int func_948(var uParam0) // Position - 0x21651 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_852(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_852(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_852(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_852(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_852(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_852(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_949(int iParam0) // Position - 0x217A2 Hash - 0x20214C72 ^0x20214C72
{
	func_981(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_950(int iParam0, int iParam1) // Position - 0x217B7 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_982(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_951(Hash hParam0, int iParam1, int iParam2) // Position - 0x217CE Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_952(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x217E1 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_459(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_892(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_950(num2, num3);
	}

	if (func_983(-1586649372) && func_892(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_950(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_984(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_984(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_950(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_950(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_950(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_985(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_852(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_950(num2, num3);
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
						func_950(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_950(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_459(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_950(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_985(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_459(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_950(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_984(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_984(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_950(num2, num3);
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
						func_950(num2, num3);
				}
			}
		
			func_984(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_852(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_950(num2, num3);
			}
			break;
	
		case 1868067663:
			func_984(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_950(num2, num3);
			}
			break;
	}

	switch (func_459(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_459(uParam0->f_1[num2 /*3*/]) || func_852(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_950(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_459(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_950(num2, num3);
			}
			break;
	}

	return;
}

Hash func_953(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x21E25 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_986(0);

	if (hParam2 != 0 && func_987(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_988(hParam0, func_860(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_954(var uParam0, BOOL bParam1, int iParam2) // Position - 0x21E6B Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_157() != -1;
	flag2 = func_986(0);

	if (func_859(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_860(num, 1);
		
			if (func_891(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_891(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_989(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_990(uParam0);

	if (num3 > 0)
	{
		if (!func_859(524288))
		{
			func_541(524288);
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
				num5 = func_860(num, 1);
			
				if (func_891(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_891(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_989(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_950(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_957(524288);

	return;
}

void func_955(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22088 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_991(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_157() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_992(2, Global_26796.f_776) || Global_1946054.f_1497 != func_993(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_993(Global_40.f_7729);
				Global_1946054.f_1378 = func_993(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_994(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_995(false, true);

	return;
}

void func_956(var uParam0) // Position - 0x221A7 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_957(BOOL bParam0) // Position - 0x22205 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_958(ePedType eptParam0) // Position - 0x2221D Hash - 0x5000025C ^0x5000025C
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

void func_959(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x22670 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_960(Ped pedParam0, BOOL bParam1) // Position - 0x226A0 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_961(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x226E5 Hash - 0x4C6CAF1 ^0xEE857D47
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

	if (!func_688(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_683(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_996(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_997(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_998(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_999(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_963(&unk) };
		unk62.f_10 = iParam4;
		num = func_964(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_962(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x227DC Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_458(bParam2), panParam0, hParam1);
}

struct<17> func_963(var uParam0) // Position - 0x227F2 Hash - 0x4CD39800 ^0x7DC5804
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

int func_964(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x22846 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_965(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_966(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_966(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_966(num, 1);
		return num;
	}

	return -1;
}

BOOL func_965(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x228CD Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_966(int iParam0, int iParam1) // Position - 0x228E4 Hash - 0x18C74423 ^0xA1132A0
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

	func_1000(iParam0, iParam1);
	return;
}

const char* func_967(int iParam0) // Position - 0x22946 Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_1001(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_1001(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_968(const char* sParam0, int iParam1) // Position - 0x229ED Hash - 0xB0CFF0C3 ^0x9D338C45
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_1002(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_969(int iParam0) // Position - 0x22A23 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_472(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_970(float fParam0, Any anParam1, float fParam2) // Position - 0x22A59 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

void func_971(int iParam0, BOOL bParam1) // Position - 0x22A6E Hash - 0x7788B703 ^0x1FD35900
{
	if (iParam0 < 0 || iParam0 >= 15)
		return;

	if (bParam1)
		if (!MISC::IS_BIT_SET(Global_1347701, iParam0))
			MISC::SET_BIT(&Global_1347701, iParam0);
	else if (MISC::IS_BIT_SET(Global_1347701, iParam0))
		MISC::CLEAR_BIT(&Global_1347701, iParam0);

	return;
}

void func_972(Hash hParam0) // Position - 0x22AC2 Hash - 0x7C565062 ^0x591867C7
{
	if (func_6(Global_35, 0) && func_840(*hParam0) && PED::_0x7C8AA850617651D9(Global_35, *hParam0))
		func_1003(*hParam0);

	if (!func_6(Global_35, 0) || !func_840(*hParam0) || !PED::_0x7C8AA850617651D9(Global_35, *hParam0))
		func_279(hParam0);

	return;
}

Hash func_973(Hash hParam0, int iParam1) // Position - 0x22B2E Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_626(hParam0, 0))
		return 0;

	num = func_683(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_852(hParam0, 1399091007))
	{
		func_1004(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_974(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x22BA8 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_458(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_975(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x22BCF Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_976(int iParam0) // Position - 0x22C0A Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_977(Hash hParam0, BOOL bParam1) // Position - 0x22C2B Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_1005(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_1006(&unk, func_684(false));

	if (!func_1007(&unk, &num, &num2, false))
		return 0;

	func_976(num);
	return num2;
}

BOOL func_978(Hash hParam0) // Position - 0x22C89 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_979(Any anParam0, int iParam1, int iParam2) // Position - 0x22C97 Hash - 0xE564BF7A ^0x5B60826F
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
	flag = func_1008(iParam1, 128);

	if (func_974("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_975(&unk, i, num, num2))
			{
			}
			else if (!func_298(unk.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(unk.f_4) && !WEAPON::IS_WEAPON_BOW(unk.f_4))
			{
			}
			else if (iParam2 != 0 && unk.f_4 == iParam2)
			{
			}
			else if (!func_1008(iParam1, 512) && func_690(unk.f_4, &unk15, &unk19, joaat("SLOTID_WEAPON_0")) && !unk19.f_21)
			{
			}
			else if (!flag || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, unk.f_4))
			{
				if (WEAPON::_IS_WEAPON_TWO_HANDED(unk.f_4) || func_978(unk.f_4) && !WEAPON::IS_WEAPON_SHOTGUN(unk.f_4) || func_1008(iParam1, 16) && !WEAPON::_IS_WEAPON_SNIPER(unk.f_4) || func_1008(iParam1, 4) && !func_978(unk.f_4) || func_1008(iParam1, 8) && !WEAPON::IS_WEAPON_REPEATER(unk.f_4) || !func_1008(iParam1, 8388608) && !WEAPON::IS_WEAPON_RIFLE(unk.f_4) || !func_1008(iParam1, 1048576))
				{
					if (weaponHash == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &unk) > WEAPON::_0xA2091482ED42EF85(Global_35, anParam0))
					{
						weaponHash = unk.f_4;
						*anParam0 = { unk };
					}
				}
			}
		}
	
		func_976(num);
	}

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
	}
	else if (!func_1008(iParam1, 512) && !func_1008(iParam1, 1024))
	{
		iParam1 = iParam1 | 512;
		return func_979(anParam0, iParam1, iParam2);
	}
	else if (func_1008(iParam1, 256))
	{
		weaponHash = joaat("WEAPON_UNARMED");
	}

	return weaponHash;
}

void func_980(int iParam0, float fParam1) // Position - 0x22EC6 Hash - 0x45CA0D9B ^0x45BBDCD7
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_1009(1, flag, true, str);
		func_1010(!flag, fParam1 < 0f, flag);
		num = func_1011(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_428();
	}
	else if (iParam0 == 10)
	{
		num = func_1011(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_1011(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

void func_981(int iParam0, int iParam1) // Position - 0x22F9C Hash - 0x19A9221A ^0x79EEA925
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
			if (func_1012(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1012(&iParam0->f_2[i /*2*/], 1))
					func_1013(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_982(int iParam0, int iParam1, int iParam2) // Position - 0x230C8 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_1014(iParam0, 1))
		func_1015(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_983(int iParam0) // Position - 0x2310F Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_738(iParam0, 1) /*3*/] != Global_1946054.f_57[func_738(iParam0, 1) /*11*/];
}

void func_984(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x23147 Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_950(num2, num);
	
		if (bParam1)
			func_950(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_950(num3, num);
	}

	return;
}

BOOL func_985(Hash hParam0) // Position - 0x23233 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_986(int iParam0) // Position - 0x23276 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_1016();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_987(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x2329C Hash - 0x3A135443 ^0x969430D9
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

BOOL func_988(Hash hParam0, int iParam1, var uParam2) // Position - 0x232E0 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_989(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x232F1 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_738(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_859(524288))
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

int func_990(var uParam0) // Position - 0x2335C Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_991(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x233A7 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_157() == -1)
		func_1017(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_1018(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_992(BOOL bParam0, int iParam1) // Position - 0x2341D Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_157() == -1)
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

Hash func_993(int iParam0) // Position - 0x2349A Hash - 0xB8EC44B7 ^0xE877E9C4
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

void func_994(int iParam0, BOOL bParam1, int iParam2) // Position - 0x239CF Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_1019(&(Global_1946054.f_1378), iParam0);
	func_1020(2, iParam0, 6);

	if (bParam1)
		func_995(false, true);

	return;
}

void func_995(BOOL bParam0, BOOL bParam1) // Position - 0x239F7 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_1021(0);

	if (bParam0)
	{
		func_541(8);
		func_541(512);
	}
	else
	{
		func_541(8);
		func_541(16);
	}

	return;
}

struct<29> func_996(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x23A2A Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_458(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_963(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_997(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x23AC3 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1022(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_966(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_966(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_966(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_998(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x23B4A Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_458(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_963(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_999(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x23BBD Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1023(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_966(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_966(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_966(num, 1);
		return num;
	}

	return -1;
}

void func_1000(int iParam0, int iParam1) // Position - 0x23C44 Hash - 0x26256B16 ^0x79A35F4E
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

BOOL func_1001(int iParam0, int iParam1) // Position - 0x23CC1 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_1024(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_1025())
		return func_1024(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_1024(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

const char* func_1002(const char* sParam0, int iParam1) // Position - 0x23D35 Hash - 0x9E99F03 ^0xC29289E9
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_1003(Hash hParam0) // Position - 0x23D4F Hash - 0xE2596597 ^0x7D9D2199
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		PED::_0x2B4CE170DE09F346(Global_35, hParam0);

	func_931(hParam0, false);
	return;
}

void func_1004(Hash hParam0, var uParam1, var uParam2) // Position - 0x23D74 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_1005(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x23F80 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_1006(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x24054 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_1007(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x2406F Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_458(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_1008(int iParam0, int iParam1) // Position - 0x24094 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_1009(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x240A3 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_1010(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x240E7 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_868(0, 1, bParam0, bParam1);
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

int func_1011(int iParam0) // Position - 0x241DF Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

BOOL func_1012(var uParam0, int iParam1) // Position - 0x24203 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1013(var uParam0, int iParam1, int iParam2) // Position - 0x24214 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1014(int iParam0, int iParam1) // Position - 0x24227 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_1015(int iParam0, int iParam1) // Position - 0x24238 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

int func_1016() // Position - 0x2424B Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_1017(Hash hParam0, int iParam1, int iParam2) // Position - 0x24259 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1018(Hash hParam0, int iParam1, int iParam2) // Position - 0x242B4 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1019(var uParam0, int iParam1) // Position - 0x2431E Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_157() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_1017(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_1018(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_1020(BOOL bParam0, int iParam1, int iParam2) // Position - 0x243B9 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_157() == -1)
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

void func_1021(int iParam0) // Position - 0x24441 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_1022(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x24452 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_1023(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x24469 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_1024(var uParam0, int iParam1, int iParam2) // Position - 0x24480 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_1025() // Position - 0x244B7 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

