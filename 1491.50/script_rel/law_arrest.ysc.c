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
	var uLocal_15 = 0;
	Volume volLocal_16 = 0;
	Volume volLocal_17 = 0;
	Volume volLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	ScrHandle shLocal_24 = 0;
	ScrHandle shLocal_25 = 0;
	BOOL bLocal_26 = 0;
	BOOL bLocal_27 = 0;
	BOOL bLocal_28 = 0;
	int iLocal_29 = 0;
	BOOL bLocal_30 = 0;
	BOOL bLocal_31 = 0;
	BOOL bLocal_32 = 0;
	BOOL bLocal_33 = 0;
	var uLocal_34 = 0;
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	BOOL bLocal_37 = 0;
	BOOL bLocal_38 = 0;
	BOOL bLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	Ped pedLocal_43 = 0;
	Ped pedLocal_44 = 0;
	var uLocal_45 = 1;
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
	var uLocal_58 = 35;
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
	var uLocal_479 = 1097859072;
	var uLocal_480 = 1101004800;
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
	var uLocal_507 = 4;
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
	var uLocal_575 = 20;
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
	var uLocal_776 = 5;
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
	var uLocal_827 = 4;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = -1;
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
	var uLocal_848 = -1;
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
	var uLocal_859 = -1;
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
	var uLocal_870 = -1;
	var uLocal_871 = 0;
	var uLocal_872 = 4;
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
	var uLocal_913 = 4;
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
	var uLocal_1082 = 1;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 24;
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
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
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
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	eStackSize essLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 7;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 7;
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
	var uScriptParam_40 = 10000;
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
	var uScriptParam_58 = 1;
	var uScriptParam_59 = 34;
	var uScriptParam_60 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3CE49CEF ^0x25E32A13
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 15;
	iLocal_21 = 20;
	iLocal_22 = 6;
	iLocal_23 = 5000;
	shLocal_24 = -1;
	shLocal_25 = -1;
	bLocal_32 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&uScriptParam_0, true);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2(&uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}

	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::CLEAR_FOCUS();
		STREAMING::LOAD_SCENE_STOP();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0, BOOL bParam1) // Position - 0x63 Hash - 0x16E42618 ^0x56DEDD43
{
	if (bParam1)
		func_3(uParam0, bParam1);

	func_4(&uLocal_45);
	func_5(true);
	func_6();

	if (func_7(7))
		func_8(&Global_1835011[7 /*74*/], 8192);

	Global_1934266.f_60 = 0;
	return;
}

BOOL func_2(var uParam0) // Position - 0xA5 Hash - 0xAFCA626 ^0x838EA11C
{
	int i;
	int num;

	switch (iLocal_1189)
	{
		case 0:
			func_9();
			func_10();
			PED::_0x9851DE7AEC10B4E1(func_11(PLAYER::PLAYER_ID()), 500f, 1, 0);
			func_12(func_11(PLAYER::PLAYER_ID()), 500f, false);
			func_13(func_11(PLAYER::PLAYER_ID()), 500f, false, false, false, false, false);
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			func_14(uParam0->f_60);
			func_15(true);
			Global_1934266.f_60 = 1;
			shLocal_24 = shLocal_24;
			shLocal_25 = shLocal_25;
			Global_1934266.f_61 = 1;
			func_16(0);
			func_17(true);
			func_18(false);
			func_19(false, true);
			func_20(false);
			func_21();
			func_22();
			func_23();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			iLocal_19 = func_24(uParam0->f_60);
			func_25(&iLocal_1189, 1);
			break;
	
		case 1:
			if (func_26(uParam0->f_60))
				func_25(&iLocal_1189, 2);
			break;
	
		case 2:
			if (func_27(uParam0) && func_28(uParam0->f_60, &uLocal_45))
			{
				bLocal_28 = true;
				func_29(uLocal_45.f_970);
			}
		
			LAW::SET_PLAYER_ARRESTED_IN_REGION(PLAYER::PLAYER_ID(), func_30(uParam0->f_60, true, true));
		
			for (i = 0; i < func_31(uParam0->f_60); i = i + 1)
			{
				func_32(uParam0->f_60, i);
			}
		
			func_33(uParam0);
			func_34(1);
			func_35(&uLocal_45);
			func_36();
		
			if (bLocal_28)
			{
				func_25(&iLocal_1189, 3);
			}
			else
			{
				func_37();
				func_25(&iLocal_1189, 8);
			}
			break;
	
		case 3:
			bLocal_32 = true;
			bLocal_38 = false;
			LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			func_38(&uLocal_45);
			func_39(&uLocal_45);
		
			if (func_40(uLocal_45.f_970))
				func_41(&uLocal_45);
		
			if (func_42(uLocal_45.f_970))
			{
				func_37();
				func_43();
			}
			else
			{
				iLocal_29 = 1;
			}
		
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
			func_44(uParam0);
			func_45();
			func_25(&iLocal_1189, 4);
			break;
	
		case 4:
			func_46(uLocal_45.f_970);
		
			if (bLocal_32)
			{
				func_47();
				PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
				num = func_48(&uLocal_45);
			
				if (num == 3 && !bLocal_38 && Global_1310720.f_5 < MISC::GET_GAME_TIMER() - 2000)
				{
					func_49();
					func_50();
					func_5(false);
					AUDIO::_SET_AUDIO_SCENESET("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
					bLocal_38 = true;
				}
			
				if (num == 5)
				{
					AUDIO::_SET_AUDIO_SCENESET("Fade_To_Gameplay", "Arrest_Fail_Respawn_Scenes");
				
					if (uLocal_45.f_970 == 5 || uLocal_45.f_970 == 4)
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(Global_35);
				
					if (uLocal_45.f_970 == 4)
						if (!func_51(11))
							uLocal_45.f_1007 = 1;
				
					func_52(uParam0);
					bLocal_32 = false;
				}
			}
			else
			{
				func_53(&uLocal_45);
			
				if (func_40(uLocal_45.f_970))
				{
					func_54();
					func_25(&iLocal_1189, 5);
				}
				else
				{
					func_54();
					func_25(&iLocal_1189, 6);
				}
			}
			break;
	
		case 5:
			if (!bLocal_35)
			{
				if (!bLocal_37)
				{
					func_55(&uLocal_45);
					func_56(true, 1114636288, 1117847552, 1116602368);
					func_57(&uLocal_45, &uLocal_1090);
					func_58(&uLocal_45);
					func_59(false);
				
					if (uLocal_45.f_1007)
						func_60(&uLocal_45, &uLocal_1090);
				
					bLocal_37 = true;
				}
			
				func_61();
				bLocal_33 = true;
				uLocal_40 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
				essLocal_1188 = func_62();
				shLocal_25 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_35, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1);
			
				if (func_63(&uLocal_45))
					shLocal_24 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_EXPLOSION"), uLocal_40, -1082130432, 50f, 50f, -1082130432, -1082130432, -1, -1);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_5(true);
				LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
				LAW::_0x22741652985C84D0(PLAYER::PLAYER_ID(), func_30(func_62(), true, true));
				LAW::_REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE(PLAYER::PLAYER_ID(), joaat("LAW_JAILBREAK_VALENTINE"));
				LAW::_SET_LAW_DISABLED(false);
				LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), false);
				func_64(true);
			
				if (!bLocal_31)
				{
					LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("crime_jail_break"), 0, 0, true);
					LAW::_CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS(uLocal_40, func_65(func_30(essLocal_1188, true, true)));
					bLocal_31 = true;
				}
			
				func_64(false);
				bLocal_35 = true;
			}
		
			if (bLocal_33)
			{
				func_66(&uLocal_45);
			}
			else
			{
				bLocal_35 = false;
				func_67(&uLocal_45, &uLocal_1090);
				func_25(&iLocal_1189, 10);
			}
		
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_68(&uLocal_45);
				func_25(&iLocal_1189, 10);
			}
			break;
	
		case 6:
			func_69(&uLocal_45, &uLocal_1090);
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
			func_25(&iLocal_1189, 7);
			break;
	
		case 7:
			if (func_70(&uLocal_45))
				func_25(&iLocal_1189, 10);
			break;
	
		case 8:
			func_43();
			PED::_RESERVE_AMBIENT_PEDS(1);
		
			while (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() < 1)
			{
				BUILTIN::WAIT(0);
			}
		
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			func_49();
			func_50();
			AUDIO::_SET_AUDIO_SCENESET("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
			func_44(uParam0);
			func_45();
			func_5(false);
			func_25(&iLocal_1189, 9);
			break;
	
		case 9:
			if (!func_71(&uLocal_1054, uParam0->f_60))
			{
				func_72();
				PED::SET_PED_RESET_FLAG(Global_35, 103, true);
			}
			else if (CLOCK::GET_CLOCK_HOURS() >= iLocal_21 || CLOCK::GET_CLOCK_HOURS() < iLocal_22)
			{
				func_72();
				CLOCK::ADD_TO_CLOCK_TIME(0, iLocal_20, 0);
				return false;
			}
			else
			{
				func_25(&iLocal_1189, 10);
			}
			break;
	
		case 10:
			if (func_3(uParam0, false))
			{
				func_1(uParam0, false);
				TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
			
				if (iLocal_29 == 0)
				{
					if (!bLocal_28)
					{
						func_73(true);
					}
					else
					{
						func_74();
						func_73(false);
					}
				
					Global_40.f_11956 = 0;
					iLocal_29 = 1;
				}
			
				if (!uLocal_45.f_1005)
					if (bLocal_36)
						return true;
				else
					func_25(&iLocal_1189, 11);
			}
			break;
	
		case 11:
			if (uLocal_45.f_949 == func_62())
			{
			}
			else
			{
				func_68(&uLocal_45);
			}
		
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
				func_68(&uLocal_45);
		
			if (CAM::IS_SCREEN_FADING_OUT())
				func_68(&uLocal_45);
		
			if (!uLocal_45.f_1005)
				return true;
			break;
	}

	return false;
}

BOOL func_3(var uParam0, BOOL bParam1) // Position - 0x6C1 Hash - 0x98B76CF8 ^0x417707C
{
	switch (iLocal_1192)
	{
		case 0:
			func_52(uParam0);
			func_75();
			func_16(1);
		
			if (func_42(uLocal_45.f_970))
				if (!func_76(275))
					func_77(275, false);
		
			func_78(6, 16384);
			func_78(7, 16384);
		
			if (bLocal_28)
			{
				PED::INSTANTLY_FILL_PED_POPULATION();
				func_79(&iLocal_1192, 1);
			}
			else
			{
				func_79(&iLocal_1192, 2);
			}
		
			if (bParam1)
				func_3(uParam0, bParam1);
			break;
	
		case 1:
			func_80(&uLocal_45);
			func_81(&(uLocal_45.f_950));
			func_82();
			func_56(false, 1114636288, 1117847552, 1116602368);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, true);
			Global_1934266.f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
			func_86(uParam0);
			func_82();
			func_56(false, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_34(0);
			func_59(true);
			func_15(false);
			func_89(&uLocal_45);
		
			if (!bLocal_39)
				func_90(false, -1);
		
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				uLocal_45.f_1005 = 0;
				bLocal_36 = true;
				return true;
			}
		
			if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
			{
				bLocal_36 = true;
				return true;
			}
			break;
	
		case 2:
			PED::_UNRESERVE_AMBIENT_PEDS(1);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, true);
			Global_1934266.f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
			PED::INSTANTLY_FILL_PED_POPULATION();
			func_82();
			func_56(false, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_91(12, 0, 0, 0, 0, false, 1065353216, false);
			func_34(0);
			func_59(true);
			func_15(false);
			func_79(&iLocal_1192, 3);
		
			if (bParam1)
				func_3(uParam0, bParam1);
			break;
	
		case 3:
			if (!bLocal_39)
				func_90(false, -1);
		
			if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
			{
				bLocal_36 = true;
			
				if (func_92(uParam0))
					return true;
			}
			break;
	}

	return false;
}

void func_4(var uParam0) // Position - 0x8D2 Hash - 0x3C3A3B83 ^0xDC425BAD
{
	if (uParam0->f_1001 > 0)
	{
		ENTITY::_0x20FAEE47427A4497();
		PED::_UNRESERVE_AMBIENT_PEDS(uParam0->f_1001);
	}

	return;
}

void func_5(BOOL bParam0) // Position - 0x8F0 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_93(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_94(&Global_1935630, 4194304);
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

void func_6() // Position - 0x993 Hash - 0x54676713 ^0x4D1CC793
{
	Global_1347477.f_6 = 0;
	return;
}

BOOL func_7(eStackSize essParam0) // Position - 0x9A2 Hash - 0x1D38F5CA ^0xC923C5D1
{
	eStackSize i;

	if (!func_95(essParam0))
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

void func_8(int iParam0, int iParam1) // Position - 0xA46 Hash - 0x53A96DDB ^0x308B6379
{
	iParam0->f_63 = iParam0->f_63 || iParam1;
	return;
}

void func_9() // Position - 0xA59 Hash - 0xAF1EE79B ^0xAF1EE79B
{
	int num;

	num = func_96();

	if (func_97(num))
		Global_1934266.f_317[num] = func_98();

	return;
}

void func_10() // Position - 0xA7F Hash - 0x7410A530 ^0x8A6A0CD
{
	int num;

	num = func_99();

	if (func_100(Global_1934266.f_63) && Global_1934266.f_63 != num)
		uLocal_45.f_1002 = func_101(Global_1934266.f_63);
	else
		uLocal_45.f_1002 = LAW::GET_BOUNTY(PLAYER::PLAYER_ID());

	return;
}

Vector3 func_11(Player plParam0) // Position - 0xAC7 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_12(float fParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0xADB Hash - 0xDCCB3575 ^0xAC48C8F6
{
	int num;

	num = 16384;

	if (bParam4)
		num = num | 524288;

	MISC::CLEAR_AREA(fParam0, fParam3, num);
	return;
}

void func_13(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xB02 Hash - 0xDCA0A629 ^0x65C02C4D
{
	int num;

	num = 8;

	if (bParam4)
		num = num | 72;

	if (bParam5)
		num = num | 131072;

	if (bParam6)
		num = num | 24;

	if (bParam7)
		num = num | 40;

	if (bParam8)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

int func_14(int iParam0) // Position - 0xB5A Hash - 0x92D44B6E ^0xF59105D7
{
	switch (iParam0)
	{
		case 78:
			if (!func_102(6, 16384))
			{
				func_103(6, 16384);
				func_104(6);
			}
		
			if (!func_102(7, 16384))
			{
				func_103(7, 16384);
				func_104(7);
			}
		
			if (func_102(6, 16384) && func_102(7, 16384))
				return 1;
			break;
	}

	return 0;
}

int func_15(BOOL bParam0) // Position - 0xBC4 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_105(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_16(int iParam0) // Position - 0xBF1 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1905944.f_5694 = iParam0;
	return;
}

void func_17(BOOL bParam0) // Position - 0xC02 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_18(BOOL bParam0) // Position - 0xC12 Hash - 0x7210634F ^0x7210634F
{
	if (func_106() != -1)
		return;

	bParam0;
	return;
}

void func_19(BOOL bParam0, BOOL bParam1) // Position - 0xC2A Hash - 0x18E05A16 ^0x18E05A16
{
	if (func_106() != -1)
		return;

	bParam0;
	func_107();

	if (bParam1)
		func_108(-1);

	return;
}

void func_20(BOOL bParam0) // Position - 0xC50 Hash - 0x54FF212 ^0x54FF212
{
	if (func_106() != -1)
		return;

	bParam0;
	func_109();
	return;
}

void func_21() // Position - 0xC6C Hash - 0x9C49A1F2 ^0x606CC0F
{
	if (func_110(282))
		func_111(282);

	if (func_110(281))
		func_111(281);

	if (func_110(263))
		func_111(263);

	if (func_110(264))
		func_111(264);

	if (func_110(272))
		func_111(272);

	return;
}

void func_22() // Position - 0xCC9 Hash - 0xD5F6C619 ^0xC3E341CE
{
	var unk;
	int i;

	if (!func_112())
		if (func_113(&unk))
			func_114();

	if (func_115())
	{
		func_116(joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), Global_35, false, true);
	
		for (i = 0; i < 29; i = i + 1)
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, i, false);
		}
	}

	return;
}

void func_23() // Position - 0xD1A Hash - 0x510AF8E4 ^0x9A983BF2
{
	PED::_SET_PED_DIRT_CLEANED(Global_35, 0f, -1, true, true);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
	return;
}

int func_24(var uParam0) // Position - 0xD6A Hash - 0x464B5280 ^0x464B5280
{
	return func_118(uParam0, 0, 3, func_117());
}

void func_25(var uParam0, int iParam1) // Position - 0xD7E Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_26(var uParam0) // Position - 0xD8B Hash - 0xE24FC8B0 ^0xE24FC8B0
{
	if (!func_119(iLocal_19))
	{
		iLocal_19 = func_24(uParam0);
		return false;
	}

	if (func_120(iLocal_19))
		return true;

	if (!func_121(iLocal_19))
	{
		func_122(iLocal_19, true);
	}
	else
	{
		func_94(&Global_1935630, 128);
		func_123(iLocal_19, true, false);
	}

	return false;
}

int func_27(var uParam0) // Position - 0xDDD Hash - 0xC957D752 ^0xD2772567
{
	if (uParam0->f_60 == 76 || uParam0->f_60 == 26 || uParam0->f_60 == 105 || uParam0->f_60 == 78 || uParam0->f_60 == 38 || uParam0->f_60 == 5)
		return 1;

	return 0;
}

int func_28(eStackSize essParam0, var uParam1) // Position - 0xE34 Hash - 0xA5FBF184 ^0xA5FBF184
{
	int num;
	int num2;

	uParam1->f_970 = -1;

	if (!func_124(essParam0))
		return 0;

	if (func_125(essParam0))
		return 0;

	num = func_127(func_126(essParam0));

	if (!func_100(num))
		return 0;

	func_128(essParam0, &num2, uParam1);

	if (func_129(num2))
	{
		uParam1->f_970 = num2;
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

void func_29(int iParam0) // Position - 0xE9E Hash - 0x5745781B ^0xC3E60D7F
{
	if (!func_129(iParam0))
		return;

	MISC::SET_BIT(&(Global_40.f_11182), iParam0);
	return;
}

Hash func_30(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEBF Hash - 0x460680B1 ^0xEA5BF9A6
{
	int num;

	switch (essParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (essParam0 == func_133())
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			break;
	
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
	
		case 22:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_PRONGHORN_RANCH");
		
			if (func_132(Global_1835011[59 /*74*/].f_1, true))
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			else
				return joaat("LAW_REGION_BIG_VALLEY");
			break;
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 32:
			return joaat("LAW_REGION_SISIKA");
	
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 37:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_BEECHERS_HOPE");
		
			if (func_132(Global_1347702[9 /*49*/].f_15, true))
				return joaat("LAW_REGION_BEECHERS_HOPE");
			else if (func_131(45))
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			else
				return joaat("LAW_REGION_GREAT_PLAINS");
			break;
	
		case 38:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_131(45))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 56:
			return joaat("LAW_REGION_WAPITI");
	
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 61:
			return joaat("LAW_REGION_MANICATO");
	
		case 65:
			return joaat("LAW_REGION_CORNWALL");
	
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 76:
			if (func_130(essParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
	
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
	
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 105:
			if (func_130(essParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 110:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_MANZANITA_POST");
		
			if (func_131(45))
				return joaat("LAW_REGION_MANZANITA_POST");
			else
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			break;
	
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 127:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_131(45))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_126(essParam0);
	
		if (num != -1)
			return func_134(num, bParam1);
	}

	return 0;
}

int func_31(int iParam0) // Position - 0x11E1 Hash - 0x12F5DA1B ^0x12F5DA1B
{
	switch (iParam0)
	{
		case 5:
			return 2;
	
		case 26:
			return 2;
	
		case 38:
			return 2;
	
		case 76:
			return 2;
	
		case 78:
			return 2;
	
		case 105:
			return 1;
	
		case 115:
			return 6;
	}

	return 0;
}

void func_32(var uParam0, int iParam1) // Position - 0x124D Hash - 0xDC5FA333 ^0xDC5FA333
{
	func_136(func_135(uParam0, iParam1));
	return;
}

void func_33(var uParam0) // Position - 0x1262 Hash - 0x995EF9BD ^0xB66B8E38
{
	switch (uParam0->f_60)
	{
		case 5:
			func_12(2503.2722f, -1306.9355f, 48.9537f, 2f, false);
			break;
	
		case 26:
			func_12(-1811.578f, -353.199f, 161.4108f, 4f, false);
			break;
	
		case 38:
			func_12(-764.9592f, -1263.4924f, 44.1678f, 3.5f, false);
			break;
	
		case 76:
			func_12(-272.9033f, 808.8414f, 119.3715f, 4f, false);
			break;
	
		case 78:
			func_12(2902.0574f, 1311.1494f, 44.9349f, 3f, false);
			break;
	
		case 105:
			func_12(1355.627f, -1302.07f, 77.7605f, 3f, false);
			break;
	}

	return;
}

void func_34(int iParam0) // Position - 0x132C Hash - 0x29A8F290 ^0x64CD603A
{
	Global_1396116.f_139 = iParam0;
	return;
}

void func_35(var uParam0) // Position - 0x133C Hash - 0x1D50774B ^0x8E243344
{
	func_137(uParam0);
	func_138(volLocal_16, false, 114688, 0);
	return;
}

void func_36() // Position - 0x1356 Hash - 0xD4ABC353 ^0xA2192E76
{
	Global_1347477.f_6 = 1;
	return;
}

void func_37() // Position - 0x1365 Hash - 0xBF43CAA2 ^0xC63B2906
{
	int num;

	num = func_99();

	if (func_100(Global_1934266.f_63) && Global_1934266.f_63 != num)
	{
		func_139(Global_1934266.f_63);
		func_140(Global_1934266.f_63);
		func_141(Global_1934266.f_63, 0);
		func_140(num);
	}
	else
	{
		func_139(Global_1934266.f_63);
		func_140(Global_1934266.f_63);
	}

	LAW::CLEAR_WANTED_SCORE(PLAYER::PLAYER_ID());
	return;
}

void func_38(var uParam0) // Position - 0x13D2 Hash - 0x5588F6F6 ^0x5588F6F6
{
	switch (uParam0->f_970)
	{
		case 1:
			uParam0->f_1003 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO3_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.95392f, 807.91315f, 121.94877f, 0f, 0f, 9.543586f, 10.134852f, 10.820038f, 7.605244f, "JBO3_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -269.002f, 806.5345f, 118.2811f, 1, -270.53f, 791.97f, 117.58f, 220.6354f, 0);
			func_142(uParam0, 0, "DUTCH", -269.002f, 806.5345f, 118.2811f, 1, -271.82f, 791.26f, 117.59f, 202.4148f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -268.18f, 793.36f, 117.53f, 203.3375f, 0);
			break;
	
		case 2:
			uParam0->f_1003 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO7_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.95392f, 807.91315f, 121.94877f, 0f, 0f, 9.543586f, 10.134852f, 10.820038f, 7.605244f, "JBO7_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -262.9f, 819.2f, 119.5f, 1, -266.4f, 818.8f, 119.5f, 154.3179f, "HORSE_01");
			func_142(uParam0, 0, "Dutch", -268.8f, 815.9f, 119.5f, 1, -265.8f, 814.1f, 119.5f, 165.487f, "Horse_01^1");
			func_143(uParam0, Global_35, "ARTHUR", -272.7f, 811.4f, 119.5f, 1, -269.9f, 819.3f, 119.5f, 186.387f, "Horse_01^2");
			break;
	
		case 3:
			uParam0->f_1003 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO2_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.7853f, 805.78064f, 119.086266f, 0f, 0f, 11.782786f, 42.17782f, 34.874664f, 15.874776f, "JBO2_Restrictions");
			func_142(uParam0, 0, "Dutch", -274.8124f, 800.249f, 118.3808f, 1, -294.5992f, 819.6844f, 118.2036f, 272.9581f, 0);
			func_143(uParam0, Global_35, "ARTHUR", -272.7505f, 811.0136f, 118.38f, 1, -303.235f, 793.9093f, 118.1267f, 5.5524f, 0);
			break;
	
		case 4:
			uParam0->f_1003 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO5_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 165.12f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO5_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -1803.529f, -344.7994f, 163.5501f, 1, -1793.58f, -367.07f, 160.21f, 216.8521f, 0);
			func_142(uParam0, 1, "JohnMarston", -1803.529f, -344.7994f, 163.5501f, 1, -1791.94f, -364.9f, 160.64f, 202.8108f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -1795.35f, -369.44f, 159.86f, 210.9395f, 0);
			break;
	
		case 5:
			uParam0->f_1003 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO9_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 163.953f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO9_Restrictions");
			func_143(uParam0, Global_35, "JOHN", -1810.3772f, -351.2475f, 161.4798f, 0, 0f, 0f, 0f, 0f, 0);
			break;
	
		case 6:
			uParam0->f_1003 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO1_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.7238f, -1304.6234f, 78.07324f, 0f, 0f, -20.000002f, 15.452114f, 22.1697f, 6.84831f, "JBO1_Restrictions");
			func_142(uParam0, 0, "DUTCH", 1352.8713f, -1299.1927f, 75.6088f, 1, 1348.682f, -1311.3071f, 76.5695f, 85.1549f, "Horse_01^1");
			func_143(uParam0, Global_35, "arthur", 1354.8915f, -1301.4601f, 77.1865f, 1, 1350.86f, -1309.55f, 76.71f, 85.1549f, "Horse_01");
			break;
	
		case 7:
			uParam0->f_1003 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO4_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.9263f, 1312.6659f, 45.85957f, 0f, 0f, -18.928082f, 21.62638f, 10.55981f, 7.126882f, "JBO4_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2916.1826f, 1308.5968f, 44.59514f, 1, 2911.2773f, 1303.3856f, 43.7005f, 158.1667f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2916.5269f, 1312.0219f, 44.4304f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			break;
	
		case 8:
			uParam0->f_1003 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO6_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.9263f, 1312.6659f, 45.85957f, 0f, 0f, -18.928082f, 21.62638f, 10.55981f, 7.126882f, "JBO6_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", 2913.348f, 1309.5898f, 43.5983f, 1, 2911.9182f, 1304.0911f, 43.5851f, 163.1755f, "Horse_01");
			func_143(uParam0, Global_35, "ARTHUR", 2902.42f, 1312.0244f, 43.9416f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			func_144(uParam0, joaat("s_m_m_ambientlawrural_01"), "S_M_M_AMBIENTLAWRURAL_01", 2916.5269f, 1312.0219f, 44.4304f, joaat("asb_law_deputies"));
			func_144(uParam0, joaat("s_m_m_ambientlawrural_01"), "S_M_M_AMBIENTLAWRURAL_01^1", 2913.348f, 1309.5898f, 43.5983f, joaat("asb_law_deputies"));
			break;
	
		case 9:
			uParam0->f_1003 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO11_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-759.32684f, -1267.945f, 44.014263f, 0f, 0f, 0f, 21.59153f, 12.848688f, 6.995106f, "JBO11_Restrictions");
			func_142(uParam0, 13, "AbigailRoberts", -751.2921f, -1269.1589f, 42.3344f, 1, -751.6697f, -1266.6746f, 42.3642f, 351.0406f, "Horse_01");
			func_143(uParam0, Global_35, "JOHN", -762.8563f, -1263.7772f, 42.8484f, 1, -752.6035f, -1276.8042f, 42.4938f, 88.8295f, 0);
			break;
	
		case 10:
			uParam0->f_1003 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO8_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.0942f, -1308.998f, 48.548115f, 0f, 0f, 0f, 40.589928f, 17.280905f, 9.483007f, "JB10_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2529.1606f, -1307.1628f, 48.2126f, 1, 2522.1555f, -1316.7493f, 47.8753f, 77.2207f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2512.1929f, -1308.456f, 47.9537f, 1, 2522.2205f, -1302.5536f, 48.0213f, 93.0952f, 0);
			break;
	
		case 11:
			uParam0->f_1003 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_984), "JBO10_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.0942f, -1308.998f, 48.548115f, 0f, 0f, 0f, 40.589928f, 17.280905f, 9.483007f, "JB10_Restrictions");
			func_143(uParam0, Global_35, "John", 2503.2776f, -1306.9938f, 47.9537f, 0, 0f, 0f, 0f, 0f, 0);
			break;
	}

	return;
}

void func_39(var uParam0) // Position - 0x1BA1 Hash - 0x9183BB7E ^0xD606F088
{
	int num;

	if (uParam0->f_998 > 0 || uParam0->f_999 > 0 || uParam0->f_1000 > 0)
	{
		if (uParam0->f_950.f_18)
			num = 1;
	
		uParam0->f_1001 = uParam0->f_998 + uParam0->f_999 + (uParam0->f_1000 * 2) + num;
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_1001);
	}

	return;
}

BOOL func_40(int iParam0) // Position - 0x1BFE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 2:
		case 4:
		case 6:
			return true;
	}

	return false;
}

void func_41(var uParam0) // Position - 0x1C28 Hash - 0x9A5EC4D8 ^0xC6EBA901
{
	func_145(uParam0);
	func_138(volLocal_17, false, 2048, 0);
	return;
}

BOOL func_42(int iParam0) // Position - 0x1C41 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
			return false;
	}

	return true;
}

void func_43() // Position - 0x1C83 Hash - 0x6C24F698 ^0x6C24F698
{
	func_139(func_99());
	return;
}

void func_44(var uParam0) // Position - 0x1C93 Hash - 0xC98EB677 ^0x70EB9B93
{
	switch (uParam0->f_60)
	{
		case 5:
			volLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2521.4023f, -1300.2227f, 47.53965f, 0f, 0f, 0f, 23.759466f, 61.340233f, 26.76055f, "volClearScriptWagons");
			break;
	
		case 26:
			func_136(883);
			func_136(884);
			func_146(883, 32);
			func_146(884, 32);
			volLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1795.7384f, -362.12396f, 163.68158f, 0f, 0f, -23.815125f, 51.100437f, 45.750847f, 22.93521f, "volClearScriptWagons");
			break;
	
		case 38:
			volLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-747.7532f, -1267.985f, 42.28417f, 0f, 0f, 0f, 19.363478f, 27.392546f, 21.491964f, "volClearScriptWagons");
			break;
	
		case 76:
			func_136(32);
			func_146(32, 32);
			volLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-270.6571f, 785.237f, 118.20274f, 0f, 0f, 11.433844f, 44.26319f, 53.83985f, 21.443115f, "volClearScriptWagons");
			break;
	
		case 78:
			volLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2910.4243f, 1294.8514f, 43.971592f, 0f, 0f, -20.000172f, 44.69428f, 76.72396f, 18.230143f, "volClearScriptWagons");
			break;
	
		case 105:
			volLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1347.6268f, -1309.5333f, 76.47682f, 0f, 0f, -19.9999f, 64.975174f, 24.372221f, 16.813635f, "volClearScriptWagons");
			break;
	
		case 120:
			break;
	}

	return;
}

void func_45() // Position - 0x1E26 Hash - 0x80D9611E ^0xD5B583B3
{
	ItemSet itemSet;
	int itemsetSize;
	int i;
	Vehicle vehicleIndexFromEntityIndex;

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_18))
	{
		itemSet = ITEMSET::CREATE_ITEMSET(true);
		ENTITY::_GET_ENTITIES_IN_VOLUME(volLocal_18, itemSet, 2);
		itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemSet);
	
		if (itemsetSize > 0)
		{
			for (i = 0; i < itemsetSize; i = i + 1)
			{
				vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet)));
			
				if (ENTITY::DOES_ENTITY_EXIST(vehicleIndexFromEntityIndex))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(vehicleIndexFromEntityIndex, true, true);
					VEHICLE::DELETE_VEHICLE(&vehicleIndexFromEntityIndex);
				}
			}
		}
	}

	return;
}

void func_46(int iParam0) // Position - 0x1E92 Hash - 0xADEC368F ^0xD89631E4
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (!func_147(0, 16384))
				func_148(0, 16384, true);
		
			if (!func_147(7, 16384))
				func_148(7, 16384, true);
			break;
	
		case 4:
			if (!func_147(1, 16384))
				func_148(1, 16384, true);
		
			if (!func_147(7, 16384))
				func_148(7, 16384, true);
			break;
	
		case 6:
			if (!func_147(0, 16384))
				func_148(0, 16384, true);
			break;
	
		case 8:
			if (!func_147(7, 16384))
				func_148(7, 16384, true);
			break;
	}

	return;
}

void func_47() // Position - 0x1F4A Hash - 0x8E8ABCD2 ^0xBF2A3C59
{
	Hash weaponHash;
	int i;

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = func_149(Global_35, i, false, true);
	
		if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			func_150(weaponHash);
	}

	return;
}

int func_48(var uParam0) // Position - 0x1F98 Hash - 0xDDF063E1 ^0xDDF063E1
{
	switch (uParam0->f_969)
	{
		case 0:
			if (func_151(uParam0))
				uParam0->f_969 = 1;
			break;
	
		case 1:
			func_152(uParam0);
			func_153(uParam0);
			func_154(uParam0);
			func_155(uParam0);
			uParam0->f_969 = 2;
			break;
	
		case 2:
			AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", uParam0->f_1003);
		
			if (func_156(uParam0))
				uParam0->f_969 = 3;
			break;
	
		case 3:
			if (func_63(uParam0))
				func_157(uParam0);
		
			if (uParam0->f_1006 == 0)
				if (func_158(uParam0))
					uParam0->f_969 = 4;
			break;
	
		case 4:
			func_159(uParam0);
		
			if (uParam0->f_1003)
				AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
		
			uParam0->f_969 = 5;
			break;
	
		case 5:
			break;
	}

	return uParam0->f_969;
}

void func_49() // Position - 0x2076 Hash - 0x12FD943F ^0x7714E643
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}

	return;
}

void func_50() // Position - 0x2099 Hash - 0x31885132 ^0xE1BFCA93
{
	func_93(&Global_1935630, 4096);
	func_160();
	func_161(0, false);
	func_162();
	func_163(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_164(0);
	Global_1310720.f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720.f_4 = 0;
	Global_1310720.f_6 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_8 = 1;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	func_165(0);
	func_166(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_5(true);
	func_167(false);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");

	return;
}

BOOL func_51(int iParam0) // Position - 0x219C Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_132(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_52(var uParam0) // Position - 0x21FB Hash - 0xCD0FE6A3 ^0x7F08A41A
{
	Ped ped;
	int scenarioPointPedIsUsing;

	if (bLocal_30)
		return;

	func_168();
	func_169(&(uParam0->f_43));
	func_169(&(uParam0->f_46));
	func_169(&(uParam0->f_49));
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);

	if (bLocal_28)
	{
		func_16(1);
		func_75();
		func_170(&uLocal_45);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	
		if (!func_40(uLocal_45.f_970))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	
		if (CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_IN(iLocal_23);
	
		if (!func_76(288))
			func_77(288, false);
	}
	else
	{
		ped = PLAYER::PLAYER_PED_ID();
	
		if (ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::IS_ENTITY_DEAD(ped))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(ped, false);
		
			if (TASK::_0x9FF5F9B24E870748(ped))
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
		
			scenarioPointPedIsUsing = TASK::_GET_SCENARIO_POINT_PED_IS_USING(ped, true);
		
			if (TASK::DOES_SCENARIO_POINT_EXIST(scenarioPointPedIsUsing))
				TASK::TASK_USE_SCENARIO_POINT(ped, scenarioPointPedIsUsing, 0, 1, false, false, 0, false, -1082130432, false);
		
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(ped, false, false), uParam0->f_30, false) > 2f)
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(ped, uParam0->f_30, uParam0->f_33, false, false, true);
		}
	}

	AUDIO::_STOP_AUDIO_SCENESET("Arrest_Fail_Respawn_Scenes");
	Global_1934266.f_61 = 0;
	bLocal_30 = true;
	return;
}

void func_53(var uParam0) // Position - 0x231C Hash - 0x4F8EB67E ^0x39E04E54
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(395506985, true, 0f, false, false, 1f, false, false);
			func_171(joaat("door_val_jail_cell_01"), true, 0f, false, false, 1f, false, false);
			func_171(joaat("DOOR_VAL_JAIL_CELL_02"), true, 0f, false, false, 1f, false, false);
			func_171(joaat("DOOR_VAL_JAIL_CELL_03"), true, 0f, false, false, 1f, false, false);
			func_171(1988748538, true, 0f, false, false, 1f, false, false);
			break;
	
		case 3:
			func_171(joaat("door_val_jail_cell_01"), true, 0f, false, false, 1f, false, false);
			func_171(joaat("DOOR_VAL_JAIL_CELL_02"), true, 0f, false, false, 1f, false, false);
			func_171(joaat("DOOR_VAL_JAIL_CELL_03"), true, 0f, false, false, 1f, false, false);
			break;
	
		case 4:
		case 5:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(joaat("DOOR_STR_JAILPOST_INT_1"), true, 0f, false, false, 1f, false, false);
			func_171(902070893, true, 0f, false, false, 1f, false, false);
			func_171(1821044729, true, 0f, true, false, 1f, true, true);
			func_171(1514359658, true, 0f, false, false, 1f, false, false);
			break;
	
		case 6:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(1614494720, true, 0f, false, false, 1f, false, false);
			func_171(349074475, true, 0f, false, false, 1f, false, false);
			func_171(1878514758, true, 0f, false, false, 1f, false, false);
			break;
	
		case 8:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-2082598623, true, 0f, false, false, 1f, false, false);
			func_171(1657401918, true, 0f, false, false, 1f, false, false);
			func_171(1502928852, true, 0f, false, false, 1f, false, false);
			break;
	
		case 9:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-473782212, true, 0f, false, false, 1f, false, false);
			func_171(-884246706, true, 0f, false, false, 1f, false, false);
			func_171(joaat("DOOR_BLA_JAIL_INT_1"), true, 0f, false, false, 1f, false, false);
			func_171(-1779971138, true, 0f, false, false, 1f, false, false);
			func_171(-1484165375, true, 0f, false, false, 1f, false, false);
			break;
	}

	return;
}

void func_54() // Position - 0x252C Hash - 0x9303F4C1 ^0x51EADFE1
{
	WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(Global_35, true);
	return;
}

void func_55(var uParam0) // Position - 0x253C Hash - 0x47C8A557 ^0xBC72E6C2
{
	Vector3 entityCoords;
	ItemSet itemSet;
	int itemsetSize;
	int i;
	int num;
	ScrHandle indexedItemInItemset;
	Ped pedFromIndexedItem;
	var unk3;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	itemSet = ITEMSET::CREATE_ITEMSET(true);
	LAW::_0x0C392DB374655176(entityCoords, func_172(&(uParam0->f_970)), itemSet);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemSet);

	if (itemsetSize > 0)
	{
		for (i = 0; i < itemsetSize; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
			pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(indexedItemInItemset);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedFromIndexedItem) && !PED::IS_PED_DEAD_OR_DYING(pedFromIndexedItem, true))
			{
				if (num < 4)
				{
					unk3 = { func_173(&(uParam0->f_970), num) };
				
					if (!_IS_NULL_VECTOR(unk3))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedFromIndexedItem, true, true);
						func_175(pedFromIndexedItem, unk3, 2, 1073741824);
					}
				
					num = num + 1;
				}
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return;
}

void func_56(BOOL bParam0, int iParam1, int iParam2, int iParam3) // Position - 0x25FC Hash - 0x1BC52729 ^0xDEA59EBD
{
	if (bParam0)
	{
		MISC::_SET_DISPATCH_MIN_SPAWN_DISTANCE(iParam1);
		MISC::_SET_DISPATCH_MAX_SPAWN_DISTANCE(iParam2);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(iParam3);
	}
	else
	{
		MISC::_RESET_DISPATCH_MIN_SPAWN_DISTANCE();
		MISC::_RESET_DISPATCH_MAX_SPAWN_DISTANCE();
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
	}

	return;
}

void func_57(var uParam0, var uParam1) // Position - 0x262A Hash - 0xF5FA13E7 ^0xCF3F2E21
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", false);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", false);
			func_177(uParam1, Global_35, "ARTHUR", false);
			break;
	
		case 4:
			func_177(uParam1, func_176(uParam0, 1), "JOHN", false);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", false);
			func_177(uParam1, Global_35, "ARTHUR", false);
			break;
	
		case 6:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", false);
			func_177(uParam1, Global_35, "ARTHUR", false);
			break;
	}

	return;
}

void func_58(var uParam0) // Position - 0x26DD Hash - 0x94D71660 ^0xE2E4BCE2
{
	switch (uParam0->f_970)
	{
		case 2:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_14);
			PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), joaat("support"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 7), -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 0), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), joaat("support"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 0), -1415276238, false, 1, false);
			break;
	
		case 4:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_14);
			PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), joaat("support"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			func_178(func_176(uParam0, 1));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 1), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 1), joaat("support"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 1), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 1), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 1), true);
			break;
	
		case 6:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_14);
			PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156, true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), joaat("support"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			break;
	}

	return;
}

void func_59(BOOL bParam0) // Position - 0x29FE Hash - 0x7248E6C9 ^0xFE629142
{
	int i;
	int j;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
	
		for (i = 0; i <= 4; i = i + 1)
		{
			func_103(i, 4096);
		
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[i /*373*/].f_1))
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[i /*373*/].f_1, false);
		}
	}
	else
	{
		for (j = 0; j <= 4; j = j + 1)
		{
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[j /*373*/].f_1))
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[j /*373*/].f_1, true);
		}
	
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}

	if (func_106() == -1)
		Global_1430221.f_1 = !bParam0;

	return;
}

void func_60(var uParam0, var uParam1) // Position - 0x2A9F Hash - 0x98C0727C ^0x23A7A36C
{
	var unk;
	const char* str;

	unk = { func_180(uParam0) };
	str = func_181(unk);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		func_182(uParam1, unk, false, -1, false, false);

	return;
}

void func_61() // Position - 0x2AD4 Hash - 0xD15F181E ^0x894CE0C4
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[i /*638*/].f_635, false))
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1396257[i /*638*/].f_635, 1);
	}

	return;
}

eStackSize func_62() // Position - 0x2B14 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_63(var uParam0) // Position - 0x2B22 Hash - 0x5D269FBD ^0x5D269FBD
{
	switch (uParam0->f_970)
	{
		case 2:
		case 6:
			return true;
	}

	return false;
}

void func_64(BOOL bParam0) // Position - 0x2B49 Hash - 0x5874EDAC ^0x2CB9F676
{
	if (bParam0)
	{
	}

	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(DT_BikerBackup, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(DT_PoliceRiders, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(DT_PoliceAutomobile, bParam0);
	return;
}

Hash func_65(Hash hParam0) // Position - 0x2B6F Hash - 0x77880703 ^0x63B8DA41
{
	switch (hParam0)
	{
		case joaat("LAW_REGION_BAYOU_NWA"):
			return joaat("LAW_WILDERNESS_BAYOU_NWA");
	
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
			return joaat("LAW_WILDERNESS_CUMBERLAND_FOREST");
	
		case joaat("LAW_REGION_RHODES"):
			return joaat("LAW_LOCAL_RHODES");
	
		case joaat("LAW_REGION_MANZANITA_POST"):
			return joaat("LAW_LOCAL_MANZANITA_POST");
	
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
			return joaat("LAW_WILDERNESS_GREAT_PLAINS_MAINGAME");
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
			return joaat("LAW_WILDERNESS_OLD_MAP_MAINGAME");
	
		case joaat("LAW_REGION_VALENTINE"):
			return joaat("LAW_LOCAL_VALENTINE");
	
		case joaat("LAW_REGION_HEARTLANDS"):
			return joaat("LAW_WILDERNESS_HEARTLANDS");
	
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
			return joaat("LAW_LOCAL_RHODES_LOCKDOWN");
	
		case joaat("LAW_REGION_GREAT_PLAINS"):
			return joaat("LAW_WILDERNESS_GREAT_PLAINS");
	
		case joaat("LAW_REGION_GRIZZLIES"):
			return joaat("LAW_WILDERNESS_GRIZZLIES");
	
		case joaat("LAW_REGION_LAGRAS"):
			return joaat("LAW_LOCAL_LAGRAS");
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
			return joaat("LAW_WILDERNESS_OLD_MAP");
	
		case joaat("LAW_REGION_CORNWALL"):
			return joaat("LAW_LOCAL_CORNWALL");
	
		case joaat("LAW_REGION_TALL_TREES"):
			return joaat("LAW_WILDERNESS_TALL_TREES");
	
		case joaat("LAW_REGION_STRAWBERRY"):
			return joaat("LAW_LOCAL_STRAWBERRY");
	
		case joaat("LAW_REGION_BEECHERS_HOPE"):
			return joaat("LAW_LOCAL_BEECHERS_HOPE");
	
		case joaat("LAW_REGION_ARMADILLO"):
			return joaat("LAW_LOCAL_ARMADILLO");
	
		case joaat("LAW_REGION_CALIGA_HALL"):
			return joaat("LAW_LOCAL_CALIGA_HALL");
	
		case 0:
			return 0;
	
		case joaat("LAW_REGION_MANICATO"):
			return joaat("LAW_LOCAL_MANICATO");
	
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
			return joaat("LAW_WILDERNESS_TALL_TREES_MAINGAME");
	
		case joaat("LAW_REGION_FORT_WALLACE"):
			return joaat("LAW_LOCAL_FORT_WALLACE");
	
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
			return joaat("LAW_LOCAL_VALENTINE_LOCKDOWN");
	
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
			return joaat("LAW_WILDERNESS_BLUEGILL_MARSH");
	
		case joaat("LAW_REGION_GUAMA"):
			return joaat("LAW_WILDERNESS_GUAMA");
	
		case joaat("LAW_REGION_BUTCHER_CREEK"):
			return -1354053979;
	
		case joaat("LAW_REGION_SISIKA"):
			return joaat("LAW_LOCAL_SISIKA");
	
		case joaat("LAW_REGION_AGUASDULCES"):
			return joaat("LAW_LOCAL_AGUASDULCES");
	
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
			return joaat("LAW_LOCAL_MACFARLANES_RANCH");
	
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
			return joaat("LAW_LOCAL_PRONGHORN_RANCH");
	
		case joaat("LAW_REGION_THIEVES_LANDING"):
			return -726295943;
	
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
			return joaat("LAW_LOCAL_BRAITHWAITE_MANOR");
	
		case joaat("LAW_REGION_BIG_VALLEY"):
			return joaat("LAW_WILDERNESS_BIG_VALLEY");
	
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
			return joaat("LAW_WILDERNESS_ROANOKE_RIDGE");
	
		case joaat("LAW_REGION_SAINT_DENIS_RURAL"):
			return joaat("LAW_LOCAL_SAINT_DENIS_RURAL");
	
		case joaat("LAW_REGION_EMERALD_RANCH"):
			return joaat("LAW_LOCAL_EMERALD_RANCH");
	
		case joaat("LAW_REGION_SAINT_DENIS"):
			return joaat("LAW_LOCAL_SAINT_DENIS");
	
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return joaat("LAW_WILDERNESS_SCARLETT_MEADOWS");
	
		case joaat("LAW_REGION_BLACKWATER"):
			return joaat("LAW_LOCAL_BLACKWATER");
	
		case joaat("LAW_REGION_VAN_HORN"):
			return 570252687;
	
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
			return joaat("LAW_LOCAL_THIEVES_LANDING_MAINGAME");
	
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return joaat("LAW_LOCAL_RIDGEWOOD_FARM");
	
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return joaat("LAW_LOCAL_BLACKWATER_MAINGAME");
	
		case joaat("LAW_REGION_ANNESBURG"):
			return -438365419;
	
		case joaat("LAW_REGION_WAPITI"):
			return joaat("LAW_LOCAL_WAPITI");
	
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return 718118376;
	
		default:
		
	}

	return 0;
}

void func_66(var uParam0) // Position - 0x2E0E Hash - 0xEDC58722 ^0x73ABFFA0
{
	func_183();

	if (!func_130(essLocal_1188))
		func_184(essLocal_1188, true, 350);

	if (func_185(uParam0) && !LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		bLocal_33 = false;

	return;
}

void func_67(var uParam0, var uParam1) // Position - 0x2E4A Hash - 0x98C0727C ^0x23A7A36C
{
	var unk;
	const char* str;

	unk = { func_186(uParam0) };
	str = func_181(unk);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		func_182(uParam1, unk, false, -1, false, false);

	return;
}

void func_68(var uParam0) // Position - 0x2E7F Hash - 0x375779A0 ^0xE37FBE44
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_171(395506985, false, 0f, false, false, 1f, false, false);
			func_171(1988748538, false, 0f, false, false, 1f, false, false);
			uParam0->f_1005 = 0;
			break;
	
		case 4:
		case 5:
			func_171(joaat("DOOR_STR_JAILPOST_INT_1"), false, 0f, false, false, 1f, false, false);
			func_171(902070893, false, 0f, false, false, 1f, false, false);
			func_171(1821044729, false, 0f, false, false, 1f, false, false);
			func_171(1514359658, false, 0f, false, false, 1f, false, false);
			uParam0->f_1005 = 0;
			break;
	
		case 6:
			func_171(1614494720, false, 0f, false, false, 1f, false, false);
			func_171(349074475, false, 0f, false, false, 1f, false, false);
			uParam0->f_1005 = 0;
			break;
	
		case 8:
			func_171(-2082598623, false, 0f, false, false, 1f, false, false);
			func_171(1657401918, true, 0f, false, false, 1f, false, false);
			uParam0->f_1005 = 0;
			break;
	
		case 9:
			func_171(-473782212, false, 0f, false, false, 1f, false, false);
			func_171(-884246706, false, 0f, false, false, 1f, false, false);
			uParam0->f_1005 = 0;
			break;
	}

	return;
}

void func_69(var uParam0, var uParam1) // Position - 0x2FA9 Hash - 0x98C0727C ^0x23A7A36C
{
	var unk;
	const char* str;

	unk = { func_187(uParam0) };
	str = func_181(unk);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		func_182(uParam1, unk, false, -1, false, false);

	return;
}

BOOL func_70(var uParam0) // Position - 0x2FDE Hash - 0xF2A9B489 ^0xF2A9B489
{
	var unk;
	Vector3 vector;

	if (func_188(unk) == -1)
		vector = { 224.566f, 171.2736f, 96.9528f };
	else
		vector = { func_189(func_133(), true) };

	switch (uParam0->f_970)
	{
		case 1:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), false, 1f, 20000);
				func_190(func_176(uParam0, 7), func_179(uParam0, 7), false, 1f, 20000);
				uParam0->f_1008 = 1;
			}
		
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 0), 1.75f, vector, 0);
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 7), 1.75f, vector, 0);
				return true;
			}
			break;
	
		case 3:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), false, 1f, 20000);
				uParam0->f_1008 = 1;
			}
		
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 0), 1.25f, vector, 0);
				return true;
			}
			break;
	
		case 5:
		case 11:
			return true;
	
		case 7:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 5), 1.25f, vector, 0);
				return true;
			}
			break;
	
		case 8:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 7), 1.75f, vector, 0);
				return true;
			}
			break;
	
		case 9:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 13), 1.25f, vector, 0);
				return true;
			}
			break;
	
		case 10:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 5), 1f, vector, 0);
				return true;
			}
			break;
	}

	return false;
}

BOOL func_71(var uParam0, var uParam1) // Position - 0x31AC Hash - 0x4E957250 ^0xDE8C0B18
{
	switch (uParam0->f_26)
	{
		case 0:
			func_192(uParam0, uParam1);
			func_193(uParam0, 1);
			break;
	
		case 1:
			func_193(uParam0, 2);
			break;
	
		case 2:
			if (func_194(uParam0))
				func_193(uParam0, 4);
			break;
	
		case 4:
			if (func_195(uParam0))
				func_193(uParam0, 7);
			break;
	
		case 5:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_25))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_25);
		
			if (CAM::HAS_LETTER_BOX())
				CAM::_FORCE_LETTER_BOX_THIS_UPDATE();
		
			func_193(uParam0, 7);
			break;
	
		case 7:
			return true;
	}

	return false;
}

void func_72() // Position - 0x3255 Hash - 0x221E018B ^0xC277B282
{
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE"));
	return;
}

void func_73(BOOL bParam0) // Position - 0x3266 Hash - 0x7D507176 ^0xD0FE7A5D
{
	float value;
	int num;
	int num2;

	value = (float)uLocal_45.f_1002 * 0.2f;
	num = uLocal_45.f_1002 - BUILTIN::ROUND(value);

	if (bParam0)
	{
		num2 = func_196(1);
	
		if (num2 >= num)
			func_197(num, 0, 0, true, 1);
		else
			func_197(num2, 0, 0, true, 1);
	}

	return;
}

void func_74() // Position - 0x32B4 Hash - 0x48182E9E ^0x77542144
{
	Global_40.f_11182.f_1 = func_198();
	return;
}

void func_75() // Position - 0x32C8 Hash - 0x2CF8B3D8 ^0x24840858
{
	if (func_199(543))
		func_200(543);

	return;
}

BOOL func_76(int iParam0) // Position - 0x32E1 Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_106() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_77(int iParam0, BOOL bParam1) // Position - 0x3326 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_201(iParam0, &num, &num2);

	if (!func_202(iParam0, num, num2, bParam1))
		return;

	func_203(num, num2);
	return;
}

void func_78(int iParam0, BOOL bParam1) // Position - 0x3353 Hash - 0x1A79E98B ^0x1A79E98B
{
	if (!func_204(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] - Global_40.f_11029[iParam0 /*5*/] && bParam1;
	return;
}

void func_79(var uParam0, int iParam1) // Position - 0x338A Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_80(var uParam0) // Position - 0x3397 Hash - 0x147FF4C9 ^0xA056EFE8
{
	int i;

	for (i = 0; i < uParam0->f_1000; i = i + 1)
	{
		func_205(&uParam0->f_868[i /*20*/]);
	
		if (uParam0->f_868[i /*20*/].f_19)
			func_206(&uParam0->f_868[i /*20*/]);
	}

	return;
}

void func_81(var uParam0) // Position - 0x33DD Hash - 0xD117560C ^0x1AFD3C62
{
	if (!uParam0->f_18)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, false);
		func_207(uParam0->f_2, false);
	}

	return;
}

void func_82() // Position - 0x340D Hash - 0xC9992D9D ^0x1EF5CB03
{
	MISC::_RESET_DISPATCH_MIN_SPAWN_DISTANCE();
	MISC::_RESET_DISPATCH_MAX_SPAWN_DISTANCE();
	MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
	return;
}

void func_83(int iParam0) // Position - 0x3421 Hash - 0xE8486AFC ^0xE8486AFC
{
	func_93(&Global_1935630, 128);

	if (!func_119(iParam0))
		return;

	if (func_121(iParam0) || func_120(iParam0))
		func_208(iParam0, false, 2);

	return;
}

void func_84() // Position - 0x345D Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_209(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_210(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_85(int iParam0, int iParam1, BOOL bParam2) // Position - 0x34D0 Hash - 0x2EAA804C ^0x50C02423
{
	int num;

	num = iParam0 * 1000;

	if (num + MISC::GET_GAME_TIMER() > Global_1327479.f_4)
	{
		func_211(iParam0, iParam1, bParam2);
	}
	else
	{
		num = num / 2;
	
		if (num + MISC::GET_GAME_TIMER() > Global_1327479.f_5)
			Global_1327479.f_5 = MISC::GET_GAME_TIMER() + num;
	}

	return;
}

void func_86(var uParam0) // Position - 0x351F Hash - 0x2FEE31C7 ^0xD63AC7CD
{
	switch (uParam0->f_60)
	{
		case 26:
			func_212(883);
			func_213(883, 32);
			func_212(884);
			func_213(884, 32);
			break;
	
		case 76:
			func_212(32);
			func_213(32, 32);
			break;
	}

	return;
}

void func_87() // Position - 0x3573 Hash - 0x7B15B94B ^0x7B15B94B
{
	func_214(volLocal_16);
	func_215(volLocal_16);
	return;
}

void func_88() // Position - 0x3587 Hash - 0xF69B2CF6 ^0xF69B2CF6
{
	func_214(volLocal_17);
	return;
}

void func_89(var uParam0) // Position - 0x3595 Hash - 0x7D594B54 ^0xA650AB03
{
	switch (uParam0->f_970)
	{
		case 2:
			if (!func_216(145))
			{
				func_217(145);
				func_218(146);
				func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_walla", 145, 0, 1, false, 0);
			}
			break;
	
		case 6:
			if (!func_216(143))
			{
				func_217(143);
				func_218(144);
				func_219(1353.2368f, -1302.4719f, 77.547f, "rho_sheriff_int_JBO1_01", 143, 0, 1, false, 0);
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, true);
			}
			break;
	}

	return;
}

void func_90(BOOL bParam0, int iParam1) // Position - 0x362F Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_220(&Global_0, 8);

	if (!func_221() || func_106() != -1)
		return;

	func_220(&Global_0, 1);
	return;
}

void func_91(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x3675 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_106() != -1)
		return;

	if (Global_36616 && func_222(iParam1) != false)
		return;

	num = func_223(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_224(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
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
			func_225(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_224(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

BOOL func_92(var uParam0) // Position - 0x3774 Hash - 0xD4241884 ^0xA980E007
{
	var unk;
	var unk5;
	int num;

	unk = { func_226(uParam0->f_60) };
	unk5 = { func_227(uParam0->f_60) };
	num = 60000;

	switch (iLocal_1191)
	{
		case 0:
			func_228(Global_35, joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), false);
			func_168();
			uParam0->f_42 = MISC::GET_GAME_TIMER();
			func_229(&iLocal_1191, 1);
			break;
	
		case 1:
			if (func_230(uParam0) || uParam0->f_42 + num < MISC::GET_GAME_TIMER())
				func_229(&iLocal_1191, 3);
			break;
	
		case 3:
			func_175(pedLocal_43, unk, 2, 1073741824);
			func_175(pedLocal_44, unk5, 2, 1073741824);
		
			if (!func_125(uParam0->f_60))
			{
				func_231(pedLocal_43, unk, 5f, false);
				func_231(pedLocal_44, unk5, 5f, false);
			}
		
			if (func_232(uParam0))
				if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
					func_229(&iLocal_1191, 4);
			break;
	
		case 4:
			if (func_233(uParam0))
			{
				if (func_234(uParam0))
				{
					if (func_235(pedLocal_43, 0))
						func_207(pedLocal_43, false);
				
					if (func_235(pedLocal_44, 0))
						func_207(pedLocal_44, false);
				
					return true;
				}
			}
			break;
	}

	return false;
}

void func_93(int iParam0, int iParam1) // Position - 0x38A2 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_94(int iParam0, int iParam1) // Position - 0x38B7 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_95(int iParam0) // Position - 0x38C8 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

int func_96() // Position - 0x38DE Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_97(int iParam0) // Position - 0x38EC Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

Hash func_98() // Position - 0x3902 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_99() // Position - 0x390E Hash - 0x4228A1C2 ^0xDB228237
{
	return Global_1934266.f_4;
}

BOOL func_100(int iParam0) // Position - 0x391C Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

Hash func_101(int iParam0) // Position - 0x3931 Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_100(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

BOOL func_102(int iParam0, BOOL bParam1) // Position - 0x396B Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_204(iParam0))
		return false;

	return Global_40.f_11029[iParam0 /*5*/] && bParam1 != false;
}

void func_103(int iParam0, BOOL bParam1) // Position - 0x3990 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_204(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] || bParam1;
	return;
}

int func_104(int iParam0) // Position - 0x39BC Hash - 0x781E8327 ^0x9B5B7D3D
{
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(Global_1425371[iParam0 /*373*/].f_1);
		Global_1425371[iParam0 /*373*/].f_1 = 0;
	}

	return 1;
}

BOOL func_105(int iParam0) // Position - 0x39F2 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_236(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_106() // Position - 0x3A41 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_107() // Position - 0x3A4F Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_108(int iParam0) // Position - 0x3A57 Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_106() != -1)
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

void func_109() // Position - 0x3A94 Hash - 0xACDE207 ^0x2B185001
{
	PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(PLAYER::PLAYER_ID(), true);

	if (func_131(47))
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), true);
	else
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), false);

	return;
}

BOOL func_110(int iParam0) // Position - 0x3AC3 Hash - 0x854AC499 ^0x54AC68DD
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1905944.f_22[iParam0 /*9*/].f_1;

	return false;
}

void func_111(int iParam0) // Position - 0x3AEB Hash - 0xC32B5228 ^0xC32B5228
{
	if (!func_110(iParam0))
		return;

	func_17(true);
	return;
}

BOOL func_112() // Position - 0x3B05 Hash - 0xA767DBD8 ^0xA767DBD8
{
	return bLocal_26;
}

BOOL func_113(var uParam0) // Position - 0x3B0F Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_237(81053684))
		if (func_238(uParam0))
			return true;
	else if (func_239(-525676072, uParam0))
		if (func_238(uParam0))
			return true;

	return false;
}

int func_114() // Position - 0x3B54 Hash - 0x68C03105 ^0x68C03105
{
	Hash hash;

	if (!func_240())
		return 0;

	if (!func_238(&hash))
		return 0;

	if (!func_241(hash))
		return 0;

	return func_242(hash, 0);
}

BOOL func_115() // Position - 0x3B8B Hash - 0x57137198 ^0x57137198
{
	if (!bLocal_26)
	{
		bLocal_26 = true;
		return true;
	}

	return false;
}

int func_116(int iParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3BA4 Hash - 0x94B629C6 ^0x94B629C6
{
	return func_243(iParam0, pedParam1, bParam2, bParam3);
}

Hash func_117() // Position - 0x3BB8 Hash - 0x9F572D68 ^0x4BCF5ACE
{
	return -683745558;
}

int func_118(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x3BC5 Hash - 0x71EF3E96 ^0x557A7961
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

	if (num2 >= func_244())
		num2 = func_244();

	flag = func_245(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_246(num5) == flag)
				return num5;
		
			if (func_246(num5) == false)
				return func_247(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_246(num5) == flag)
				return num5;
		
			if (func_246(num5) == false)
				return func_247(num3, num4, iParam2, i, hParam3);
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
				return func_247(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

BOOL func_119(int iParam0) // Position - 0x3E80 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_120(int iParam0) // Position - 0x3EB3 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_248(iParam0);
	return num == 3 || num == 4;
}

BOOL func_121(int iParam0) // Position - 0x3ED1 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_249(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

void func_122(int iParam0, BOOL bParam1) // Position - 0x3F3C Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_119(iParam0))
		return;

	if (!func_250(iParam0))
		return;

	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_251(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_252(iParam0), func_253(iParam0), func_254(iParam0), func_251(iParam0), Global_36);
		}
	}

	func_255(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_123(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3FAD Hash - 0x9F2D2B44 ^0xC32EBA43
{
	int num;
	int num2;

	if (!func_119(iParam0))
		return;

	if (!func_121(iParam0))
		return;

	num = func_252(iParam0);

	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_251(iParam0)))
		{
		}
		else
		{
			if (num == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
				func_256(func_253(iParam0));
		
			if (func_106() != false)
				STATS::STATSTRACKER_DEED_STARTED(func_251(iParam0), 0);
			else
				STATS::STATSTRACKER_DEED_STARTED(func_251(iParam0), Global_265073.f_73815.f_208.f_12);
		}
	}

	func_257(iParam0);

	if (!func_119(func_258(0)))
	{
		func_255(iParam0, 3);
		func_5(bParam2);
	
		if (func_106() == -1)
		{
			if (bParam2 == false)
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		
			func_15(true);
		}
	
		func_259(iParam0, -1);
	
		if (bParam1 && !func_260(2))
			func_220(&Global_0, 1024);
	
		if (func_106() == -1)
		{
			func_261(&(Global_1347343.f_11), 536870912);
			func_262(2);
			Global_1357515 = -1;
		
			if (num == 1)
				func_263(false);
		
			if (num == 1 || num == 8)
				func_264(false);
		}
	
		if (func_106() == -1)
		{
			num2 = func_265(iParam0);
		
			if (num2 != -1)
			{
				num2 = func_266();
			
				switch (num2)
				{
					case 0:
						func_267(0);
						break;
				
					case 1:
						func_267(1);
						break;
				
					case 2:
						func_267(2);
						break;
				
					case 3:
						func_267(3);
						break;
				
					case 4:
						func_267(4);
						break;
				
					case 5:
						func_267(5);
						break;
				
					case 6:
						func_267(5);
						break;
				
					case 7:
						func_267(7);
						break;
				
					case 8:
						func_267(8);
						break;
				}
			}
			else if (num == 1)
			{
				switch (func_253(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_267(11);
						break;
				}
			}
			else if (num == 8)
			{
				switch (func_253(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_267(11);
						break;
				
					default:
						num2 = func_266();
					
						if (num2 != -1)
						{
							switch (num2)
							{
								case 0:
									func_268(0);
									break;
							
								case 1:
									func_268(1);
									break;
							
								case 2:
									func_268(2);
									break;
							
								case 3:
									func_268(3);
									break;
							
								case 4:
									func_268(4);
									break;
							
								case 5:
									func_268(5);
									break;
							
								case 6:
									func_268(5);
									break;
							
								case 7:
									func_268(7);
									break;
							
								case 8:
									func_268(8);
									break;
							
								default:
									break;
							}
						}
						break;
				}
			}
		}
	
		func_269(true);
	}
	else
	{
		func_259(iParam0, -1);
		func_255(iParam0, 4);
	}

	func_270(iParam0, false);
	return;
}

BOOL func_124(eStackSize essParam0) // Position - 0x42C1 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_125(eStackSize essParam0) // Position - 0x42D7 Hash - 0x6430C01F ^0xD1700991
{
	if (!func_124(essParam0))
		return false;

	return func_271(essParam0, 16777216);
}

int func_126(eStackSize essParam0) // Position - 0x42F8 Hash - 0x224FC50D ^0x224FC50D
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
	else if (essParam0 <= 115)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

int func_127(int iParam0) // Position - 0x43F4 Hash - 0xA08D7C4E ^0xA08D7C4E
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

int func_128(eStackSize essParam0, var uParam1, var uParam2) // Position - 0x44AF Hash - 0xE95C6D6D ^0xE95C6D6D
{
	int num;

	*uParam1 = -1;

	if (!func_272())
		return 0;

	if (!func_273(essParam0, &num, uParam2))
		return 0;

	if (func_274(num))
		return 0;

	if (!func_275(num))
		return 0;

	if (!func_276(num))
		return 0;

	if (!func_277(&num))
		return 0;

	*uParam1 = num;
	return 1;
}

BOOL func_129(int iParam0) // Position - 0x4516 Hash - 0xE7558FF0 ^0xE7558FF0
{
	return iParam0 != -1;
}

BOOL func_130(eStackSize essParam0) // Position - 0x4522 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_124(essParam0))
		return false;

	return func_271(essParam0, 33554432);
}

BOOL func_131(int iParam0) // Position - 0x4543 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_278(iParam0))
		return false;

	return func_279(iParam0);
}

BOOL func_132(int iParam0, BOOL bParam1) // Position - 0x455F Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_248(iParam0))
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

eStackSize func_133() // Position - 0x4590 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

Hash func_134(int iParam0, BOOL bParam1) // Position - 0x45A0 Hash - 0x9CC4908E ^0xB6CFBFA0
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
	
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
	
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
	
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
	
		case 4:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_131(45))
				return joaat("LAW_REGION_GREAT_PLAINS");
			else
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			break;
	
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 8:
			return joaat("LAW_REGION_GUAMA");
	
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
	
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
	
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
	
		case 12:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_131(45))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_106() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_131(45))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

int func_135(int iParam0, int iParam1) // Position - 0x471A Hash - 0x25D84CF8 ^0x366468F
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					num = 281;
					break;
			
				case 1:
					num = 282;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					num = 499;
					break;
			
				case 1:
					num = 500;
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					num = 511;
					break;
			
				case 1:
					num = 512;
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					num = 25;
					break;
			
				case 1:
					num = 26;
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					num = 430;
					break;
			
				case 1:
					num = 431;
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					num = 127;
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					num = 364;
					break;
			
				case 1:
					num = 363;
					break;
			
				case 2:
					num = 362;
					break;
			
				case 3:
					num = 361;
					break;
			
				case 4:
					num = 360;
					break;
			
				case 5:
					num = 359;
					break;
			}
			break;
	}

	num == -1;
	return num;
}

int func_136(int iParam0) // Position - 0x4897 Hash - 0x1B19432F ^0x9C562F71
{
	Ped perscharPedIndex;

	if (!func_280(iParam0))
		return 0;

	if (!func_282(func_281(iParam0)))
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
		return 0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_283(iParam0))))
			return 1;

	perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_283(iParam0));

	if (ENTITY::DOES_ENTITY_EXIST(perscharPedIndex))
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(perscharPedIndex))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex, true, true);

	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_283(iParam0));
	return 1;
}

void func_137(var uParam0) // Position - 0x4920 Hash - 0x9D2801D1 ^0x62EB9FFE
{
	if (VOLUME::DOES_VOLUME_EXIST(volLocal_16))
		return;

	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			volLocal_16 = VOLUME::CREATE_VOLUME_BOX(-268.8677f, 792.1881f, 118.70106f, 0f, 0f, 7.124719f, 35.467896f, 40.30593f, 9.127473f);
			break;
	
		case 4:
			volLocal_16 = VOLUME::CREATE_VOLUME_BOX(-1799.7673f, -355.932f, 164.82846f, 0f, 0f, 0f, 29.400404f, 39.853523f, 15.19435f);
			break;
	
		case 6:
			volLocal_16 = VOLUME::CREATE_VOLUME_BOX(1354.0382f, -1312.0033f, 76.545494f, 0f, 0f, -20.45403f, 23.790813f, 16.568846f, 6.591243f);
			break;
	}

	return;
}

void func_138(Volume volParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x49E3 Hash - 0x7DD4FFB2 ^0xDC686551
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	func_284(volParam0, bParam1);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam2, iParam3, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam2, iParam3, 0, -1, -1, 2);
	return;
}

void func_139(int iParam0) // Position - 0x4A1C Hash - 0xE1F6E7F0 ^0xF6BF71B1
{
	eStackSize i;
	int j;

	VOLUME::_0x748C5F51A18CB8F0(false);

	if (!func_100(iParam0))
		return;

	func_285(iParam0, false);

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_124(i))
		{
			if (func_286(func_30(i, true, true)) == iParam0)
			{
				func_287(i, false);
				func_184(i, false, 350);
			}
		}
	}

	for (j = 0; j < 17; j = j + 1)
	{
		if (func_97(j))
			if (func_127(j) == iParam0)
				func_288(j, false);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

void func_140(int iParam0) // Position - 0x4AAE Hash - 0x53B9F48A ^0x53B9F48A
{
	if (!func_100(iParam0))
		return;

	func_141(iParam0, 0);
	return;
}

void func_141(int iParam0, Hash hParam1) // Position - 0x4ACA Hash - 0xD17081FC ^0x9A5CA5C0
{
	int maxWantedLevel;

	if (!func_100(iParam0))
		return;

	maxWantedLevel = func_289();

	if (hParam1 > maxWantedLevel)
		hParam1 = maxWantedLevel;

	PLAYER::_SET_MAX_WANTED_LEVEL_2(maxWantedLevel);

	if (iParam0 == func_99())
		LAW::SET_BOUNTY(PLAYER::PLAYER_ID(), hParam1);

	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_358[iParam0 /*12*/] != hParam1)
		{
			func_290(iParam0, hParam1);
			func_291(iParam0);
		}
	
		Global_40.f_358[iParam0 /*12*/] = hParam1;
	
		if (!func_292(iParam0, 4))
			if (Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
				func_293(iParam0, true);
		else if (Global_40.f_358[iParam0 /*12*/] == 0)
			func_293(iParam0, false);
	
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/] = hParam1;
	return;
}

void func_142(var uParam0, int iParam1, char* sParam2, float fParam3, float fParam4, float fParam5, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, const char* sParam11) // Position - 0x4B8A Hash - 0xA0867FC9 ^0xDC7B8E51
{
	if (uParam0->f_1000 < 4)
	{
		uParam0->f_868[uParam0->f_1000 /*20*/].f_1 = iParam1;
		uParam0->f_868[uParam0->f_1000 /*20*/].f_4 = { func_294(sParam2) };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_12 = { fParam3 };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_19 = iParam6;
		uParam0->f_868[uParam0->f_1000 /*20*/].f_15 = { fParam7 };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_18 = fParam10;
	
		if (!MISC::IS_STRING_NULL(sParam11))
			uParam0->f_868[uParam0->f_1000 /*20*/].f_8 = { func_294(sParam11) };
	
		uParam0->f_1000 = uParam0->f_1000 + 1;
	}

	return;
}

void func_143(var uParam0, Ped pedParam1, char* sParam2, float fParam3, float fParam4, float fParam5, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, const char* sParam11) // Position - 0x4C35 Hash - 0xA78CB911 ^0xAB38ADD2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	uParam0->f_950 = ENTITY::GET_ENTITY_MODEL(pedParam1);
	uParam0->f_950.f_1 = pedParam1;
	uParam0->f_950.f_3 = { func_294(sParam2) };
	uParam0->f_950.f_11 = { fParam3 };
	uParam0->f_950.f_18 = iParam6;
	uParam0->f_950.f_14 = { fParam7 };
	uParam0->f_950.f_17 = fParam10;

	if (!MISC::IS_STRING_NULL(sParam11))
		uParam0->f_950.f_7 = { func_294(sParam11) };

	return;
}

void func_144(var uParam0, int iParam1, char* sParam2, float fParam3, float fParam4, float fParam5, int iParam6) // Position - 0x4CB2 Hash - 0x9270C752 ^0x5DAC49FA
{
	if (uParam0->f_998 < 4)
	{
		uParam0->f_782[uParam0->f_998 /*11*/] = iParam1;
		uParam0->f_782[uParam0->f_998 /*11*/].f_2 = { func_294(sParam2) };
		uParam0->f_782[uParam0->f_998 /*11*/].f_6 = { fParam3 };
		uParam0->f_782[uParam0->f_998 /*11*/].f_9 = iParam6;
		uParam0->f_998 = uParam0->f_998 + 1;
	}

	return;
}

void func_145(var uParam0) // Position - 0x4D17 Hash - 0xB551FCC1 ^0x7A0F965E
{
	if (VOLUME::DOES_VOLUME_EXIST(volLocal_17))
		return;

	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			volLocal_17 = func_295(76);
			break;
	
		case 4:
			volLocal_17 = func_295(26);
			break;
	
		case 6:
			volLocal_17 = func_295(105);
			break;
	}

	return;
}

void func_146(int iParam0, BOOL bParam1) // Position - 0x4D75 Hash - 0x61515A20 ^0x61515A20
{
	if (func_106() != -1)
		return;

	if (!func_280(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

BOOL func_147(int iParam0, eStackSize essParam1) // Position - 0x4DA6 Hash - 0x38B100BB ^0xDF2FD6DF
{
	return Global_40.f_4942[iParam0 /*60*/].f_5 && essParam1 > false;
}

void func_148(int iParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x4DBF Hash - 0x45FC5048 ^0xD1D3120
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
				func_296(iParam0);
				func_297(iParam0, false);
				break;
		}
	
		func_298(iParam0, essParam1);
	
		if (func_299(essParam1, &hash))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_300(Global_1360165[iParam0 /*1157*/], hash))
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], hash);
			
				PED::_EQUIP_META_PED_OUTFIT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
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
				func_296(iParam0);
				func_297(iParam0, true);
				break;
		}
	
		func_301(iParam0, essParam1);
		func_302(iParam0, Global_1360165[iParam0 /*1157*/], true);
	}

	return;
}

Hash func_149(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4F18 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

void func_150(Hash hParam0) // Position - 0x4F3E Hash - 0x452F6FEB ^0x9AFB0A30
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

BOOL func_151(var uParam0) // Position - 0x4F77 Hash - 0xA1E34E83 ^0xA1E34E83
{
	uParam0->f_1004 = 0;

	if (!func_303(uParam0))
		return false;

	if (!func_304(uParam0))
		return false;

	if (!func_305(&(uParam0->f_950)))
		return false;

	if (!func_306(uParam0))
		return false;

	if (!func_307(uParam0))
		return false;

	if (!func_308(uParam0))
		return false;

	if (!func_309(uParam0))
		return false;

	return true;
}

void func_152(var uParam0) // Position - 0x4FEB Hash - 0xF1CBA1E3 ^0xF1CBA1E3
{
	func_310(uParam0);
	func_311(uParam0);
	func_312(uParam0);
	func_313(uParam0);
	func_314(uParam0);
	func_315(uParam0);
	func_316(uParam0);
	return;
}

void func_153(var uParam0) // Position - 0x501D Hash - 0xC3FF5F57 ^0xC3FF5F57
{
	var unk;

	unk = { func_317(uParam0) };
	func_318(uParam0, &unk);
	return;
}

void func_154(var uParam0) // Position - 0x5038 Hash - 0x9CE809DF ^0xC9D6626C
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_973))
		uParam0->f_4 = uParam0->f_973;

	return;
}

void func_155(var uParam0) // Position - 0x5055 Hash - 0x8589B411 ^0x2FCCBAE0
{
	char* str;

	str = func_319(uParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		func_318(uParam0, str);
		func_320(uParam0, str, false);
	}

	return;
}

BOOL func_156(var uParam0) // Position - 0x5080 Hash - 0x8050A5D5 ^0x8050A5D5
{
	if (func_321(uParam0, &(uParam0->f_984), true, true))
		return true;

	return false;
}

void func_157(var uParam0) // Position - 0x509D Hash - 0x26AD143E ^0x94767347
{
	switch (uParam0->f_970)
	{
		case 2:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.64f)
			{
				if (func_216(145))
				{
					func_217(146);
					func_218(145);
					func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_wallb", 146, 0, 1, false, 0);
				}
			}
			break;
	
		case 6:
			uParam0->f_975 = "rho_sheriff_int_explosion";
			uParam0->f_974 = INTERIOR::GET_INTERIOR_AT_COORDS(1353.2368f, -1302.4719f, 77.547f);
		
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.33f)
			{
				if (func_216(143))
				{
					func_217(144);
					func_218(143);
					func_219(1353.2368f, -1302.4719f, 77.547f, "rho_sheriff_int_JBO1_02", 144, 0, 1, false, 0);
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, 0);
				}
			}
			break;
	}

	return;
}

BOOL func_158(var uParam0) // Position - 0x517A Hash - 0xD567A7D9 ^0x88473ACE
{
	switch (uParam0->f_971)
	{
		case 0:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
					uParam0->f_971 = 1;
				}
			}
			break;
	
		case 1:
			if (func_322(uParam0->f_970))
				func_323(uParam0);
		
			func_324(uParam0);
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
		
			if (!ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
			{
				if (func_325(uParam0))
				{
					func_326(uParam0->f_444);
					uParam0->f_971 = 3;
				}
			}
			else
			{
				uParam0->f_971 = 2;
			}
			break;
	
		case 2:
			CAM::DO_SCREEN_FADE_OUT(0);
		
			if (func_327(uParam0->f_970, uParam0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
				func_328(true);
				uParam0->f_971 = 3;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_159(var uParam0) // Position - 0x5270 Hash - 0x454234A5 ^0x454234A5
{
	func_329(uParam0);
	func_330(uParam0);
	func_331(uParam0);

	if (!func_40(uParam0->f_970))
	{
		func_80(uParam0);
		func_81(&(uParam0->f_950));
	}

	func_332(uParam0);
	func_333(uParam0);
	return;
}

void func_160() // Position - 0x52B2 Hash - 0x8CBEB066 ^0xDF7EC571
{
	Player player;
	BOOL flag;
	var crimeType;
	int i;
	Hash crimeType2;
	int num;

	player = func_334();
	flag = !func_335(Global_1935630, 4194304) || Global_1935630.f_17 > 0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (flag)
		{
			Global_1935630.f_13 = LAW::ARE_WITNESSES_ACTIVE(player) || LAW::_ARE_INVESTIGATORS_ACTIVE(player, false, 0);
			Global_1935630.f_15 = LAW::_0x148E7AC8141C9E64(player);
			Global_1935630.f_14 = LAW::_0x9945A3E2528A02E8(player);
			Global_1935630.f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630.f_17 = LAW::GET_WANTED_SCORE(player);
			Global_1935630.f_26 = LAW::_0x9D5C9A5A3321B128(player);
			Global_1935630.f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(player), 0);
			Global_1935630.f_18 = LAW::IS_LAW_INCIDENT_ACTIVE(player);
		
			if (Global_1935630.f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&crimeType);
				Global_1935630.f_19 = crimeType.f_10;
				Global_1935630.f_23 = crimeType.f_11 == 6;
			}
		
			Global_1935630.f_20 = -1;
		
			for (i = 0; i < 24; i = i + 1)
			{
				if (LAW::GET_PLAYER_REGISTERED_CRIME(player, i, &crimeType2))
				{
					if (crimeType2.f_10)
					{
						num = LAW::_0xDAEFDFDB2AEECE37(crimeType2, 0);
					
						if (num > Global_1935630.f_20)
							Global_1935630.f_20 = num;
					}
				}
			}
		}
		else
		{
			func_336();
		}
	}

	if (Global_1935630.f_40 != 0)
		Global_1935630.f_41 = Global_1935630.f_40;

	Global_1935630.f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(player, true);
	Global_1935630.f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);

	if (!Global_1935630.f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630.f_44), false, 0, false);
		Global_1935630.f_40 = PED::GET_MOUNT(Global_35);
	
		if (Global_1572887.f_12 == -1 && Global_1935630 & 262144 != 0)
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
	
		if (Global_1572887.f_12 != -1)
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		else if (Global_1935630 & 65536 != 0)
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	
		if (Global_1572887.f_12 == -1)
		{
			if (!func_131(9))
				PED::SET_PED_RESET_FLAG(Global_35, 135, true);
		
			if (!func_131(14))
				PED::SET_PED_RESET_FLAG(Global_35, 144, true);
		
			if (!func_131(36))
				HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
		
			if (CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
				HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if (CAM::IS_SCREEN_FADED_OUT() && func_337() && !func_338(0, false, true))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
		
			if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE")))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_BOAT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_BOAT_ATTACK2"), false);
			}
		
			if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE"), false);
		}
	}
	else
	{
		if (func_106() == -1 && CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	
		Global_1935630.f_44 = 0;
		Global_1935630.f_40 = 0;
	}

	return;
}

void func_161(int iParam0, BOOL bParam1) // Position - 0x55E6 Hash - 0x9D46840B ^0xDAAD5146
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

void func_162() // Position - 0x5657 Hash - 0x94D147DC ^0x94D147DC
{
	if (func_106() != -1)
		return;

	func_109();
	return;
}

void func_163(float fParam0, float fParam1, float fParam2) // Position - 0x566E Hash - 0xB20C33B1 ^0x8BCEF44A
{
	Global_40.f_9.f_7 = { fParam0 };
	return;
}

void func_164(int iParam0) // Position - 0x5683 Hash - 0x33B51C79 ^0xD9769E91
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
	return;
}

void func_165(int iParam0) // Position - 0x569D Hash - 0x29A8F290 ^0x870EAF89
{
	Global_1310720.f_9 = iParam0;
	return;
}

void func_166(int iParam0) // Position - 0x56AD Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1310720.f_10 = iParam0;
	return;
}

int func_167(BOOL bParam0) // Position - 0x56BD Hash - 0xE318106C ^0x60090061
{
	if (!bParam0 && func_105(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), true, 0);
		return 0;
	}

	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

void func_168() // Position - 0x56F6 Hash - 0xBD0B723 ^0x3289AE95
{
	if (!func_339())
	{
		if (func_112())
		{
			func_340(1);
			func_341();
			WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(Global_35, true);
		}
	}

	return;
}

void func_169(var uParam0) // Position - 0x571F Hash - 0x46B3830A ^0x717D457A
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

void func_170(var uParam0) // Position - 0x5735 Hash - 0xEDF5DFB4 ^0xB83E78FE
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_973))
		VOLUME::DELETE_VOLUME(uParam0->f_973);

	return;
}

void func_171(Hash hParam0, BOOL bParam1, float fParam2, BOOL bParam3, BOOL bParam4, float fParam5, BOOL bParam6, BOOL bParam7) // Position - 0x5752 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_342(hParam0, false, false);

	if (func_343(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam2, bParam6);
	
		if (fParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, fParam5);
	
		if (bParam3)
			func_344(hParam0, fParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_345(hParam0, true);
			else
				func_346(hParam0, true);
		else
			func_347(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_348())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

float func_172(var uParam0) // Position - 0x57DD Hash - 0xAC208D5C ^0xAC208D5C
{
	switch (*uParam0)
	{
		case 1:
		case 2:
			return 200f;
	
		case 4:
			return 200f;
	
		case 6:
			return 200f;
	}

	return 200f;
}

struct<4> func_173(var uParam0, int iParam1) // Position - 0x582C Hash - 0xC49CF56A ^0xAD762AAA
{
	var unk;

	switch (*uParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					unk = { -272.4783f, 809.284f, 118.3711f };
					unk.f_3 = 103.992f;
					break;
			
				case 1:
					unk = { -274.1379f, 808.532f, 118.3723f };
					unk.f_3 = 87.475f;
					break;
			
				case 2:
					unk = { -309.8212f, 780.2781f, 117.7613f };
					unk.f_3 = 7.6015f;
					break;
			
				case 3:
					unk = { -320.2737f, 799.5449f, 116.8817f };
					unk.f_3 = 279.7465f;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					unk = { -276.9078f, 809.5782f, 118.3781f };
					unk.f_3 = 287.1772f;
					break;
			
				case 1:
					unk = { -309.8212f, 780.2781f, 117.7613f };
					unk.f_3 = 7.6015f;
					break;
			
				case 2:
					unk = { -292.2865f, 747.412f, 117.2355f };
					unk.f_3 = 156.9073f;
					break;
			
				case 3:
					unk = { -313.3065f, 726.3862f, 119.6276f };
					unk.f_3 = 34.53f;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					unk = { -1812.4242f, -352.8654f, 160.4154f };
					unk.f_3 = 56.8545f;
					break;
			
				case 1:
					unk = { -1815.8329f, -353.5223f, 160.4529f };
					unk.f_3 = 316.3524f;
					break;
			
				case 2:
					unk = { -1805.5743f, -426.7131f, 157.7882f };
					unk.f_3 = 347.183f;
					break;
			
				case 3:
					unk = { -1775.7137f, -438.922f, 153.9937f };
					unk.f_3 = 217.3517f;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					unk = { 1358.3746f, -1303.4175f, 76.7606f };
					unk.f_3 = 196.0932f;
					break;
			
				case 1:
					unk = { 1330.1267f, -1367.8386f, 79.504f };
					unk.f_3 = 72.4056f;
					break;
			
				case 2:
					unk = { 1362.7461f, -1268.7908f, 76.9478f };
					unk.f_3 = 162.3188f;
					break;
			
				case 3:
					unk = { 1238.9897f, -1309.5988f, 75.9094f };
					unk.f_3 = 113.614f;
					break;
			}
			break;
	
		default:
			unk = { 0f, 0f, 0f };
			unk.f_3 = 0f;
			break;
	}

	return unk;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x5AE4 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_175(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x5B0E Hash - 0xF73E422B ^0x72D662B4
{
	func_349(pedParam0, uParam1, uParam1.f_3, iParam5, iParam6);
	return;
}

Ped func_176(var uParam0, int iParam1) // Position - 0x5B28 Hash - 0xDB12FCF8 ^0x1E62A154
{
	int i;

	for (i = 0; i < uParam0->f_1000; i = i + 1)
	{
		if (uParam0->f_868[i /*20*/].f_1 == iParam1)
			return uParam0->f_868[i /*20*/].f_2;
	}

	return 0;
}

void func_177(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x5B65 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_350(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_178(Ped pedParam0) // Position - 0x5BC2 Hash - 0x2F295C2F ^0xB547DA02
{
	if (PED::DOES_GROUP_EXIST(iLocal_14) && ENTITY::DOES_ENTITY_EXIST(pedParam0))
		func_351(&pedParam0, &iLocal_14, false, true, true, true, false);

	return;
}

Ped func_179(var uParam0, int iParam1) // Position - 0x5BEB Hash - 0xDB12FCF8 ^0xA647E8DF
{
	int i;

	for (i = 0; i < uParam0->f_1000; i = i + 1)
	{
		if (uParam0->f_868[i /*20*/].f_1 == iParam1)
			return uParam0->f_868[i /*20*/].f_3;
	}

	return 0;
}

Vector3 func_180(var uParam0) // Position - 0x5C28 Hash - 0xFE564DD ^0xECE94DCC
{
	var unk;

	switch (uParam0->f_970)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO3_COMEON", 24);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO7_COMEON", 24);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO5_COMEON", 24);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO1_COMEON", 24);
			break;
	
		default:
			TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
			break;
	}

	return unk;
}

const char* func_181(var uParam0, var uParam1, var uParam2) // Position - 0x5C8E Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_182(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x5CA2 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_352(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_183() // Position - 0x5CFC Hash - 0x408CAC50 ^0x874AA7F1
{
	POPULATION::_0xF45E46DEECF7DF6E(6144, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	return;
}

void func_184(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x5D30 Hash - 0x20ACD3AE ^0xBADD8DC6
{
	Volume volume;
	BOOL flag;
	int num;
	int num2;

	if (!func_124(essParam0))
		return;

	if (func_125(essParam0) && !bParam1)
		return;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_5))
		volume = Global_1888801[essParam0 /*35*/].f_5;
	else
		volume = func_295(essParam0);

	flag = func_271(essParam0, 33554432);

	if (bParam1)
	{
		num = func_353(essParam0);
	
		if (iParam2 > num || !func_355(func_354(essParam0)))
		{
			func_356(essParam0, func_98());
			func_357(essParam0, iParam2);
		}
	
		if (!flag)
		{
			func_358(essParam0, 33554432);
		
			if (VOLUME::DOES_VOLUME_EXIST(volume))
			{
				if (essParam0 == 38)
					num2 = 0;
				else
					num2 = 1;
			
				PATHFIND::_0xF2A2177AC848B3A8(volume, 0, num2);
			}
		}
	}
	else if (flag)
	{
		func_359(essParam0, 33554432);
		func_356(essParam0, -15);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			PATHFIND::_0xF2A2177AC848B3A8(volume, 1, 1);
	}

	func_360(essParam0);
	return;
}

BOOL func_185(var uParam0) // Position - 0x5E2C Hash - 0xA528584F ^0xA528584F
{
	switch (uParam0->f_970)
	{
		case 2:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10f && func_361(Global_35, func_176(uParam0, 7)) < 10f)
				return true;
			break;
	
		case 4:
			if (func_361(Global_35, func_176(uParam0, 1)) < 10f && func_361(Global_35, func_176(uParam0, 7)) < 10f)
				return true;
			break;
	
		case 6:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10f)
				return true;
			break;
	}

	return false;
}

Vector3 func_186(var uParam0) // Position - 0x5EDE Hash - 0xFE564DD ^0x11847EE4
{
	var unk;

	switch (uParam0->f_970)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO3_LOSTTHEM", 24);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO7_LOSTTHEM", 24);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO5_LOSTTHEM", 24);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO1_LOSTTHEM", 24);
			break;
	
		default:
			TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
			break;
	}

	return unk;
}

Vector3 func_187(var uParam0) // Position - 0x5F44 Hash - 0xFE564DD ^0xB0F5CCC6
{
	var unk;

	switch (uParam0->f_970)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO3_BANT", 24);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO7_BANT", 24);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO5_SPLIT", 24);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO1_BANT", 24);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO4_HBANT", 24);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBO8_HBANT", 24);
			break;
	
		default:
			TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);
			break;
	}

	return unk;
}

int func_188(int iParam0) // Position - 0x5FCC Hash - 0xFE841B01 ^0xFE841B01
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 4:
			return 5;
	
		case 9:
			return 3;
	
		case 22:
			return 7;
	
		case 37:
			return 8;
	
		case 43:
			return 0;
	
		case 58:
			return 4;
	
		case 71:
			return 1;
	
		case 79:
			return 6;
	
		case 98:
			return 2;
	
		default:
		
	}

	return -1;
}

Vector3 func_189(eStackSize essParam0, BOOL bParam1) // Position - 0x6042 Hash - 0x5496E9AE ^0xF55F17AE
{
	Vector3 volumeCoords;
	var groundZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_124(essParam0))
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

int func_190(Ped pedParam0, Ped pedParam1, BOOL bParam2, float fParam3, int iParam4) // Position - 0x60A2 Hash - 0x99BADE6B ^0xD51681E1
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
					TASK::TASK_MOUNT_ANIMAL(pedParam0, pedParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}

	return 0;
}

BOOL func_191(var uParam0) // Position - 0x6106 Hash - 0xD760CE43 ^0xB50B5C69
{
	int i;

	for (i = 0; i < uParam0->f_1000; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_868[i /*20*/].f_2))
			if (!PED::IS_PED_FULLY_ON_MOUNT(uParam0->f_868[i /*20*/].f_2, true))
				return false;
	}

	return true;
}

int func_192(var uParam0, var uParam1) // Position - 0x6152 Hash - 0xCC4D4248 ^0x41B4FF17
{
	func_362(uParam0, uParam1);
	uParam0->f_26 = 0;
	return 0;
}

void func_193(var uParam0, int iParam1) // Position - 0x6169 Hash - 0x4F8BE4B5 ^0x960AD775
{
	uParam0->f_26 = iParam1;
	return;
}

BOOL func_194(var uParam0) // Position - 0x6177 Hash - 0x6705111A ^0x835E82EA
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_25, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_25, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_25, true, false))
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_25);
		
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_25, true, false))
			{
				CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_25, "ARTHUR", Global_35, 0);
				CAM::DO_SCREEN_FADE_IN(240);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_25);
				return true;
			}
		}
	}

	return false;
}

BOOL func_195(var uParam0) // Position - 0x61F4 Hash - 0x7CD0A817 ^0x8334172C
{
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);

	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_25) > 0.85f)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			return true;
		}
	}

	return false;
}

int func_196(int iParam0) // Position - 0x622C Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_197(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x6238 Hash - 0x144F6B91 ^0x144F6B91
{
	func_363(iParam0);

	if (bParam3)
		func_364(iParam0, sParam1, iParam2);

	return;
}

Hash func_198() // Position - 0x6255 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_199(int iParam0) // Position - 0x6261 Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_201(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_200(int iParam0) // Position - 0x6285 Hash - 0xAD18F8AE ^0xAD18F8AE
{
	int num;
	int num2;

	func_201(iParam0, &num, &num2);
	func_365(num, num2);
	return;
}

void func_201(int iParam0, var uParam1, var uParam2) // Position - 0x629F Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_202(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x62BB Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_366(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_367(iParam0))
		return false;

	if (func_368(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_369(iParam0, 1) || func_260(32768))
		if (!func_369(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_370())
		return false;

	return true;
}

void func_203(int iParam0, int iParam1) // Position - 0x635D Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_204(int iParam0) // Position - 0x6381 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

void func_205(var uParam0) // Position - 0x63A0 Hash - 0x9C52D6E1 ^0x31220DA4
{
	if (func_371(uParam0->f_1))
		func_372(uParam0->f_1, false, 0, true, -1082130432, true, true, false, false, false, false);

	return;
}

void func_206(var uParam0) // Position - 0x63C9 Hash - 0x8829A0F2 ^0x57FA3990
{
	if (func_373(uParam0->f_1))
		func_374(uParam0->f_3, uParam0->f_1, true, 0, false);

	return;
}

void func_207(Ped pedParam0, BOOL bParam1) // Position - 0x63EB Hash - 0x81317C0D ^0xF96B5C1C
{
	int num;
	int idOfThisThread;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_375(pedParam0))
		return;

	num = func_376(pedParam0);

	if (num == -1)
		return;

	if (num >= 7)
		return;

	func_377(num);
	func_378(num);
	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	num2 = func_379(num);

	if (!bParam1)
	{
		if (idOfThisThread != num2)
			return;
	
		if (!func_380(num))
			return;
	}

	func_381(num);
	PED::SET_PED_KEEP_TASK(pedParam0, true);

	if (bParam1 && func_106() == -1)
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	return;
}

void func_208(int iParam0, BOOL bParam1, int iParam2) // Position - 0x64A5 Hash - 0x9DD22E7 ^0x9DD22E7
{
	int num;

	if (!func_119(iParam0))
	{
		!bParam1;
		return;
	}

	if (!func_120(iParam0) && !func_121(iParam0))
	{
		!bParam1;
		return;
	}

	func_251(iParam0) == 0;

	if (iParam2 == 2 && !func_120(iParam0))
		iParam2 = -1;

	if (func_249(iParam0) == 3 || func_249(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_251(iParam0)))
	{
		func_382(func_252(iParam0), func_251(iParam0), iParam2);
	
		if (!func_119(Global_1572864.f_8) && !func_338(0, true, false) && !func_335(Global_1935630, 32768))
		{
			num = func_265(iParam0);
		
			if (num != -1)
			{
				func_383(false);
			}
			else if (func_252(iParam0) == 8)
			{
				num = func_266();
			
				if (num != -1)
					func_383(false);
			}
		}
	}

	func_255(iParam0, 0);

	if (func_258(0) == iParam0)
	{
		func_5(true);
		func_15(false);
		func_269(1);
	}

	func_270(iParam0, true);
	func_384(iParam0);
	return;
}

BOOL func_209(int iParam0) // Position - 0x65CA Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_210(int iParam0) // Position - 0x65E0 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

void func_211(int iParam0, int iParam1, BOOL bParam2) // Position - 0x65F0 Hash - 0xD61623D0 ^0x48AE56A
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_385(iParam0, iParam1, bParam2);
	return;
}

int func_212(int iParam0) // Position - 0x660C Hash - 0x6CAA09A1 ^0xEFF07F60
{
	if (!func_280(iParam0))
		return 0;

	if (!func_282(func_281(iParam0)))
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
		return 0;

	PERSCHAR::_0x4F81EAD1DE8FA19B(func_283(iParam0));
	return 1;
}

void func_213(int iParam0, BOOL bParam1) // Position - 0x6651 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_106() != -1)
		return;

	if (!func_280(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_214(Volume volParam0) // Position - 0x668A Hash - 0xB0DC8502 ^0xD594F1EE
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volParam0);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volParam0);
	return;
}

void func_215(Volume volParam0) // Position - 0x66AF Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_216(int iParam0) // Position - 0x66C6 Hash - 0x9F0262CB ^0x768EF4F2
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_1934765.f_30[num2], offset);
}

void func_217(int iParam0) // Position - 0x66F0 Hash - 0x5D737F18 ^0xF5C40353
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_1934765.f_21[num2], offset);
	return;
}

void func_218(int iParam0) // Position - 0x671A Hash - 0x5D737F18 ^0x9B30D331
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_1934765.f_21[num2], offset);
	return;
}

void func_219(float fParam0, float fParam1, float fParam2, char* sParam3, int iParam4, Hash hParam5, int iParam6, BOOL bParam7, Interior inParam8) // Position - 0x6744 Hash - 0x7ABBCC2 ^0x7D75B17A
{
	BOOL flag;

	flag = func_386(iParam4);

	if (!INTERIOR::IS_VALID_INTERIOR(inParam8))
		if (hParam5 != 0)
			inParam8 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(fParam0, hParam5);
		else
			inParam8 = INTERIOR::GET_INTERIOR_AT_COORDS(fParam0);

	if (INTERIOR::IS_VALID_INTERIOR(inParam8))
	{
		if (func_216(iParam4) != flag || INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inParam8, sParam3) != flag)
		{
			if (func_387(inParam8, iParam6, bParam7))
			{
				if (flag)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(inParam8, sParam3, 0);
					func_388(iParam4);
				
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(inParam8, 1);
						INTERIOR::_0xFE2B3D5500B1B2E4(inParam8, 1);
					}
				}
				else
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(inParam8, sParam3, true);
					func_389(iParam4);
				
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(inParam8, 0);
						INTERIOR::_0xFE2B3D5500B1B2E4(inParam8, 0);
					}
				}
			}
		}
	}

	return;
}

void func_220(Hash hParam0, int iParam1) // Position - 0x67FC Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_221() // Position - 0x680F Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_222(int iParam0) // Position - 0x682E Hash - 0xA05361F6 ^0xF8A0FD3E
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

int func_223(int iParam0) // Position - 0x6944 Hash - 0xC25EDEC0 ^0x47BF4274
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

void func_224(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x6A2B Hash - 0x9A51185A ^0x32BF962B
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

	num = func_390();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_391(iParam0);
	
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

	if (func_131(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_392())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_393(Global_40.f_11095.f_35, num4, num3);
	num2 = func_390();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_394(num2);
		func_396(func_395(), false, 4000);
		func_397(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_398(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_400(func_399(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_223(14))
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
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_400(func_399(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_223(4))
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
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_399(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_403(10, 1);

	return;
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x6DD0 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

struct<4> func_226(int iParam0) // Position - 0x6E2F Hash - 0x8198D477 ^0x78998390
{
	var unk;
	BOOL flag;

	unk = { 0f, 0f, 0f };
	unk.f_3 = 0f;

	if (!func_124(iParam0))
		return unk;

	if (func_125(iParam0))
		flag = true;

	switch (iParam0)
	{
		case 5:
			if (!flag)
			{
				unk = { 2525.45f, -1310.37f, 49.07f };
				unk.f_3 = 266.56f;
			}
			else
			{
				unk = { 2147.36f, -1336.09f, 42.96f };
				unk.f_3 = 352f;
			}
		
			func_404(&unk, 50, 10, false);
			return unk;
	
		case 26:
			if (!flag)
			{
				unk = { -1805.89f, -344.45f, 164.65f };
				unk.f_3 = 99f;
			}
			else
			{
				unk = { -1706.68f, -450.12f, 150f };
				unk.f_3 = 295.67f;
			}
		
			func_404(&unk, 50, 10, false);
			return unk;
	
		case 38:
			if (!flag)
			{
				unk = { -751.16f, -1267.38f, 43.32f };
				unk.f_3 = 115.96f;
			}
			else
			{
				unk = { -1065.66f, -1211.78f, 63.78f };
				unk.f_3 = 178.78f;
			}
		
			func_404(&unk, 50, 10, false);
			return unk;
	
		case 76:
			if (!flag)
			{
				unk = { -279.45f, 789.98f, 118.63f };
				unk.f_3 = 165.4f;
			}
			else
			{
				unk = { -108f, 586.45f, 114.08f };
				unk.f_3 = 164.78f;
			}
		
			func_404(&unk, 50, 10, false);
			return unk;
	
		case 78:
			if (!flag)
			{
				unk = { 2918.7f, 1321.6f, 44.3f };
				unk.f_3 = 69.27f;
			}
			else
			{
				unk = { 2821.36f, 1121.52f, 48.54f };
				unk.f_3 = 79.23f;
			}
		
			func_404(&unk, 50, 10, false);
			return unk;
	
		case 105:
			if (!flag)
			{
				unk = { 1344.9f, -1307.3f, 76.6f };
				unk.f_3 = 343.68f;
			}
			else
			{
				unk = { 1155.33f, -1155.41f, 71.29f };
				unk.f_3 = 156.78f;
			}
		
			func_404(&unk, 50, 10, false);
			return unk;
	
		case 115:
			unk = { -5525.004f, -2923.18f, -2.0688f };
			unk.f_3 = 114.01f;
			func_404(&unk, 50, 10, false);
			return unk;
	}

	return unk;
}

struct<4> func_227(int iParam0) // Position - 0x70CB Hash - 0xD3800DF3 ^0x3B53F8DA
{
	var unk;
	eStackSize stackSize;

	unk = { 0f, 0f, 0f };
	unk.f_3 = 0f;

	if (!func_124(iParam0))
		return unk;

	stackSize = func_405();
	func_406(stackSize, &unk, &(unk.f_3));
	return unk;
}

void func_228(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x7107 Hash - 0xA82A3275 ^0xA82A3275
{
	func_407(pedParam0, iParam1, bParam2, true);
	return;
}

void func_229(var uParam0, int iParam1) // Position - 0x711B Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_230(var uParam0) // Position - 0x7128 Hash - 0x1406FEB0 ^0x71F63FD3
{
	var unk;
	var unk5;
	int num;
	int num2;

	unk = { func_226(uParam0->f_60) };
	unk5 = { func_227(uParam0->f_60) };
	num = 0;
	num2 = 0;

	if (func_408(0))
	{
		iLocal_1194.f_10 = 0;
		iLocal_1194 = 1;
		iLocal_1194.f_5 = 1;
		iLocal_1194.f_1 = 1;
		iLocal_1194.f_6 = { unk };
		iLocal_1194.f_9 = unk.f_3;
		pedLocal_43 = func_409(&iLocal_1193, &iLocal_1194);
	
		if (iLocal_1193 == 2)
			num = 1;
	}
	else
	{
		num = 1;
	}

	if (func_408(1))
	{
		iLocal_1206.f_10 = 1;
		iLocal_1206 = 1;
		iLocal_1206.f_1 = 1;
		iLocal_1206.f_5 = 1;
		iLocal_1206.f_6 = { unk5 };
		iLocal_1206.f_9 = unk5.f_3;
		pedLocal_44 = func_409(&iLocal_1205, &iLocal_1206);
	
		if (iLocal_1205 == 2)
			num2 = 1;
	}
	else
	{
		num2 = 1;
	}

	if (num && num2)
		return true;

	return false;
}

int func_231(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Position - 0x71FB Hash - 0x85829C29 ^0x3D50948E
{
	Hash scenarioType;
	int scenario;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	func_12(vParam1, fParam4, false);
	TASK::CLEAR_PED_TASKS(pedParam0, true, false);
	scenarioType = joaat("PROP_HitchingPost");
	scenario = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, scenarioType, fParam4, 1, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
		TASK::TASK_USE_SCENARIO_POINT(pedParam0, scenario, 0, -1, true, bParam5, scenarioType, false, -1082130432, false);
	else
		TASK::TASK_STAND_STILL(pedParam0, -1);

	return 1;
}

BOOL func_232(var uParam0) // Position - 0x727F Hash - 0x387129C ^0xF797360
{
	Vector3 vector;

	switch (iLocal_1190)
	{
		case 0:
			switch (uParam0->f_60)
			{
				case 5:
					vector = { 2514.3f, -1308.8f, 48.7f };
					break;
			
				case 26:
					vector = { -1808.2f, -350.1f, 164.4f };
					break;
			
				case 38:
					vector = { -758.5f, -1269.2f, 43.8f };
					break;
			
				case 76:
					vector = { -275.5043f, 805f, 118.3801f };
					break;
			
				case 78:
					vector = { 2910.3f, 1310.8f, 44.4f };
					break;
			
				case 105:
					vector = { 1359.6f, -1304.5f, 77.3f };
					break;
			
				case 115:
					vector = { -5528.7236f, -2929.566f, -1.3609f };
					break;
			}
		
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
		
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vector, uParam0->f_33, false, true, false, false);
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				func_410(&iLocal_1190, 1);
			}
			break;
	
		case 1:
			if (!PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()))
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
					PLAYER::STOP_PLAYER_TELEPORT();
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				func_410(&iLocal_1190, 2);
			}
			break;
	
		case 2:
			func_411(1, 0);
			func_412();
		
			switch (func_413(func_62()))
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 8:
					if (!func_414(func_62()) && uParam0->f_41 + 6000 > MISC::GET_GAME_TIMER())
					{
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_27, 0f, 0f, 0f);
						func_410(&iLocal_1190, 3);
					}
					break;
			}
			break;
	
		case 3:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				STREAMING::LOAD_SCENE_START(uParam0->f_27, BUILTIN::COS(uParam0->f_33 + 90f), BUILTIN::SIN(uParam0->f_33 + 90f), 0f, 500f, 4);
				uParam0->f_41 = MISC::GET_GAME_TIMER();
			}
			else if (!STREAMING::IS_LOAD_SCENE_LOADED())
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
					func_410(&iLocal_1190, 4);
			}
			else
			{
				func_410(&iLocal_1190, 4);
			}
			break;
	
		case 4:
			if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				STREAMING::CLEAR_FOCUS();
				STREAMING::LOAD_SCENE_STOP();
			}
		
			return true;
	}

	return false;
}

BOOL func_233(var uParam0) // Position - 0x74E6 Hash - 0xC6CC92C8 ^0x2644B075
{
	Vector3 vector;
	Vector3 vector2;
	float fov;

	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(240);
		return true;
	}
	else
	{
		switch (uParam0->f_60)
		{
			case 5:
				vector = { 2526.214f, -1321.6029f, 51.8709f };
				vector2 = { -1.1109f, 0f, 21.3832f };
				fov = 37.7527f;
				break;
		
			case 26:
				vector = { -1794.4388f, -342.4006f, 166.2039f };
				vector2 = { -2.2206f, 0f, 146.2695f };
				fov = 37.7527f;
				break;
		
			case 38:
				vector = { -745.5821f, -1255.0269f, 46.204f };
				vector2 = { -3.8931f, 0f, 158.8413f };
				fov = 37.7527f;
				break;
		
			case 76:
				vector = { -260.7436f, 793.9495f, 121.5746f };
				vector2 = { -2.9074f, 0f, 80.7498f };
				fov = 37.7527f;
				break;
		
			case 78:
				vector = { 2911.8835f, 1297.4161f, 46.0857f };
				vector2 = { -0.2822f, 0f, -12.0966f };
				fov = 37.7527f;
				break;
		
			case 105:
				vector = { 1365.147f, -1320.5552f, 79.1558f };
				vector2 = { -3.2928f, 0f, 44.6132f };
				fov = 37.7527f;
				break;
		
			case 115:
				vector = { -5530.495f, -2941.7427f, 0.393f };
				vector2 = { -6.1555f, 0f, -32.786f };
				fov = 51.282f;
				break;
		}
	
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vector, vector2, fov, true, 2);
	}

	return false;
}

BOOL func_234(var uParam0) // Position - 0x7692 Hash - 0xE0EA1095 ^0x2B65528F
{
	Vector3 vector;

	if (!func_415(&(uParam0->f_52)))
		func_416(&(uParam0->f_52), false);

	switch (uParam0->f_60)
	{
		case 5:
			vector = { 2519.2559f, -1308.5896f, 48.9806f };
			break;
	
		case 26:
			vector = { -1803.1954f, -352.7251f, 164.1432f };
			break;
	
		case 38:
			vector = { -752.4509f, -1269.7418f, 43.3936f };
			break;
	
		case 76:
			vector = { -274.6761f, 797.9018f, 118.9569f };
			break;
	
		case 78:
			vector = { 2914.5479f, 1309.3776f, 44.3854f };
			break;
	
		case 105:
			vector = { 1357.7285f, -1311.5249f, 76.9169f };
			break;
	
		case 115:
			vector = { -5526.7065f, -2933.7214f, -1.9662f };
			break;
	}

	if (!uParam0->f_57)
	{
		if (TASK::IS_PED_STILL(Global_35))
		{
			uParam0->f_57 = 1;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vector, 1f, 20000, 1048576000, 0, 1193033728);
		}
	}

	if (func_417(Global_36, vector, 1f, false) || func_418(&(uParam0->f_52)) >= 10f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_419(uParam0);
		return true;
	}

	return false;
}

BOOL func_235(Player plParam0, int iParam1) // Position - 0x77EB Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (plParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(plParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_420(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(plParam0))
			return 0;

	if (func_420(num, 2))
		if (PED::IS_PED_HOGTIED(plParam0))
			return 0;

	if (func_420(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(plParam0, 11, false))
			return 0;

	if (func_420(num, 16))
		if (!PED::IS_PED_ON_MOUNT(plParam0) && !PED::IS_PED_IN_ANY_VEHICLE(plParam0, false))
			return 0;

	if (func_420(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(plParam0))
			return 0;

	if (func_420(num, 64))
		if (PED::IS_PED_INCAPACITATED(plParam0))
			return 0;

	if (func_420(num, 128))
		if (PED::IS_PED_RAGDOLL(plParam0))
			return 0;

	if (func_420(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(plParam0))
			return 0;

	return 1;
}

int func_236(int iParam0, int iParam1) // Position - 0x78EA Hash - 0xEA82FE59 ^0xEA82FE59
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

Hash func_237(Hash hParam0) // Position - 0x9112 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_422(func_421(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_238(var uParam0) // Position - 0x9141 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_239(81053684, uParam0))
		return true;

	if (func_239(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_239(Hash hParam0, var uParam1) // Position - 0x916E Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_422(func_421(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_423(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

BOOL func_240() // Position - 0x91E5 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_241(Hash hParam0) // Position - 0x91F4 Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_424())
		return false;

	if (!func_425(hParam0, 0))
		return false;

	if (!func_426(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

int func_242(Hash hParam0, int iParam1) // Position - 0x922B Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_427(hParam0);

	if (func_428(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_113(&hash))
			if (flag)
				interactionAnimHash = func_429();
			else
				interactionAnimHash = func_430();
		else if (func_420(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_431();
		else
			interactionAnimHash = func_432();
	else if (func_238(&hash))
		if (func_428(hash, -1303648999))
			interactionAnimHash = func_429();
		else
			interactionAnimHash = func_430();
	else if (flag)
		interactionAnimHash = func_431();
	else
		interactionAnimHash = func_432();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

int func_243(int iParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x92FE Hash - 0x6B9FDD6A ^0x28D5E082
{
	int num;

	if (Global_1946054.f_2535.f_1 >= 5)
		return 0;

	if (!func_433(iParam0))
		return 0;

	if (!bParam3)
		return 1;

	num = func_434(iParam0);
	return func_435(pedParam1, num, bParam2, true);
}

int func_244() // Position - 0x9342 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_245(int iParam0, int iParam1, int iParam2) // Position - 0x935D Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

BOOL func_246(int iParam0) // Position - 0x9383 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_247(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x93C1 Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_436(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_244())
		return -1;

	flag = func_245(iParam0, iParam1, iParam2);
	num = iParam3;
	func_437(num, 0);
	func_438(num, 0);
	func_439(num, 0);
	func_440(num, 0);
	func_441(num, flag);

	if (hParam4 != 0)
		func_442(num, hParam4);

	return num;
}

int func_248(int iParam0) // Position - 0x9460 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_119(iParam0))
		return -1;

	return func_249(iParam0);
}

int func_249(int iParam0) // Position - 0x947C Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_443(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_250(int iParam0) // Position - 0x94BD Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_248(iParam0) == 0;
}

Hash func_251(int iParam0) // Position - 0x94CD Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_252(int iParam0) // Position - 0x94F8 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_119(iParam0))
		return 0;

	return func_444(func_246(iParam0));
}

int func_253(int iParam0) // Position - 0x9518 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_119(iParam0))
		return -1;

	return func_445(func_246(iParam0));
}

int func_254(int iParam0) // Position - 0x9538 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_119(iParam0))
		return -1;

	return func_446(func_246(iParam0));
}

void func_255(int iParam0, int iParam1) // Position - 0x9558 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_119(iParam0))
		return;

	func_437(iParam0, iParam1);
	return;
}

void func_256(int iParam0) // Position - 0x9575 Hash - 0x353ECB1E ^0x7492E51F
{
	const char* str;
	Hash hashKey;
	Vector3 vector;
	var unk3;
	var unk11;
	Any any;

	if (!func_95(iParam0))
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

void func_257(int iParam0) // Position - 0x962D Hash - 0x84E45CF3 ^0x84E45CF3
{
	if (!func_119(iParam0))
		return;

	func_438(iParam0, func_447(iParam0) + 1);
	return;
}

int func_258(int iParam0) // Position - 0x9650 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_259(int iParam0, int iParam1) // Position - 0x9662 Hash - 0xD0889B29 ^0xA908D477
{
	int num;

	num = func_448(iParam0);

	if (num >= 0)
		return num;

	if (Global_1898164.f_162 >= 32)
		return -1;

	num = Global_1898164.f_162;
	func_449(iParam0, num);
	Global_1898164.f_162 = Global_1898164.f_162 + 1;

	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
		return num;

	func_450(num, iParam1);
	return iParam1;
}

BOOL func_260(int iParam0) // Position - 0x96CF Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_261(int iParam0, int iParam1) // Position - 0x96E2 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_262(int iParam0) // Position - 0x96F7 Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_263(BOOL bParam0) // Position - 0x9715 Hash - 0xB3088780 ^0xB3088780
{
	func_451(bParam0);
	func_452(bParam0);
	func_453(bParam0);
	func_454(bParam0);
	func_455(bParam0);
	func_456(bParam0);
	func_457(bParam0);
	func_458(bParam0);
	return;
}

void func_264(BOOL bParam0) // Position - 0x974D Hash - 0x9114E741 ^0x8984E174
{
	if (func_106() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_77(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_77(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_459(1, bParam0, true);
	func_460();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

int func_265(int iParam0) // Position - 0x97BB Hash - 0xF4AFA201 ^0x156AC308
{
	int num;
	int num2;

	switch (func_252(iParam0))
	{
		case 1:
			num = func_253(iParam0);
			return func_461(num);
	
		case 8:
			num2 = func_253(iParam0);
		
			if (func_462(Global_1347702[num2 /*49*/].f_12, 1))
				return func_463(num2);
			break;
	}

	return -1;
}

int func_266() // Position - 0x9816 Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_132(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_132(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_132(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_132(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_132(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_132(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_132(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

void func_267(int iParam0) // Position - 0x98D9 Hash - 0x72B3FC21 ^0x3909C54
{
	int num;

	num = 0;

	if (func_106() != -1)
		num = 1;

	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = num;
	func_464(Global_1898077.f_7, Global_1898077.f_3);
	return;
}

void func_268(int iParam0) // Position - 0x991D Hash - 0x6D69048D ^0xDB432840
{
	int num;

	if (Global_1898077.f_1 == 2)
		return;

	num = 0;

	if (func_106() != -1)
		num = 1;

	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = num;
	func_465(Global_1898077.f_7, Global_1898077.f_4);
	return;
}

void func_269(BOOL bParam0) // Position - 0x996E Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

void func_270(int iParam0, BOOL bParam1) // Position - 0x9981 Hash - 0x7075D2FF ^0xF0E29EF6
{
	if (func_106() != -1)
		return;

	if (func_258(0) != iParam0)
		return;

	if (func_466(iParam0))
		if (bParam1)
			func_467(-525676072);
		else
			func_468(-525676072);

	return;
}

BOOL func_271(eStackSize essParam0, BOOL bParam1) // Position - 0x99C4 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL func_272() // Position - 0x99F7 Hash - 0x19A2CD1B ^0x5C4204EC
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 0);
		return false;
	}

	return true;
}

BOOL func_273(eStackSize essParam0, var uParam1, var uParam2) // Position - 0x9A1E Hash - 0x168FCFCC ^0xF18DCFFE
{
	int num;
	int num2;

	*uParam1 = -1;
	num = 3000;
	num2 = 5000;

	if (!func_124(essParam0))
		return false;

	if (!func_469(essParam0))
		return false;

	uParam2->f_1002 < num;

	switch (essParam0)
	{
		case 5:
			if (uParam2->f_1002 >= num && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("Player_Zero"))
			{
				*uParam1 = 10;
				return true;
			}
			else if (uParam2->f_1002 >= num)
			{
				*uParam1 = 11;
				return true;
			}
			break;
	
		case 26:
			if (uParam2->f_1002 >= num && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("Player_Zero"))
			{
				*uParam1 = 4;
				return true;
			}
			else if (uParam2->f_1002 >= num)
			{
				*uParam1 = 5;
				return true;
			}
			break;
	
		case 38:
			if (uParam2->f_1002 >= num)
			{
				*uParam1 = 9;
				return true;
			}
			break;
	
		case 76:
			if (uParam2->f_1002 >= num && !MISC::IS_BIT_SET(Global_40.f_11182, 3))
			{
				*uParam1 = 3;
				return true;
			}
			else if (uParam2->f_1002 >= num && !MISC::IS_BIT_SET(Global_40.f_11182, 1))
			{
				*uParam1 = 1;
				return true;
			}
			else if (uParam2->f_1002 >= num2 && !MISC::IS_BIT_SET(Global_40.f_11182, 2))
			{
				*uParam1 = 2;
				return true;
			}
			break;
	
		case 78:
			if (uParam2->f_1002 >= num && !MISC::IS_BIT_SET(Global_40.f_11182, 7))
			{
				*uParam1 = 7;
				return true;
			}
			else if (uParam2->f_1002 >= num && !MISC::IS_BIT_SET(Global_40.f_11182, 8))
			{
				*uParam1 = 8;
				return true;
			}
			break;
	
		case 105:
			if (uParam2->f_1002 >= num2)
			{
				*uParam1 = 6;
				return true;
			}
			break;
	}

	return false;
}

BOOL func_274(int iParam0) // Position - 0x9BF3 Hash - 0x2E2499CE ^0x6991FF5A
{
	if (!func_129(iParam0))
		return false;

	return MISC::IS_BIT_SET(Global_40.f_11182, iParam0);
}

BOOL func_275(int iParam0) // Position - 0x9C15 Hash - 0xE325C1D4 ^0xE325C1D4
{
	if (!func_129(iParam0))
		return false;

	if (!func_470())
		return false;

	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_471(7) && func_471(0))
				return true;
			break;
	
		case 3:
			if (func_471(0))
				return true;
			break;
	
		case 4:
			if (func_471(7) && func_471(1))
				return true;
			break;
	
		case 5:
			return true;
	
		case 6:
			if (func_471(0))
				return true;
			break;
	
		case 7:
			if (func_471(5))
				return true;
			break;
	
		case 8:
			if (func_471(7))
				return true;
			break;
	
		case 9:
			if (func_471(13))
				return true;
			break;
	
		case 10:
			if (func_471(5))
				return true;
			break;
	
		case 11:
			return true;
	}

	return false;
}

BOOL func_276(int iParam0) // Position - 0x9D1D Hash - 0xF939EDC9 ^0x7170FD05
{
	Hash entityModel;

	if (!func_129(iParam0))
		return false;

	if (Global_1935630.f_12)
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(Global_35);

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return func_472(entityModel);
	
		case 4:
			return func_472(entityModel);
	
		case 5:
			return !func_472(entityModel);
	
		case 6:
			return func_472(entityModel);
	
		case 7:
		case 8:
			return func_472(entityModel);
	
		case 9:
			return !func_472(entityModel);
	
		case 10:
			return func_472(entityModel);
	
		case 11:
			return !func_472(entityModel);
	}

	return false;
}

BOOL func_277(var uParam0) // Position - 0x9DF7 Hash - 0x982C64F8 ^0x54842A41
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 12) && !MISC::IS_BIT_SET(Global_40.f_11182, *uParam0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return true;
	}

	if (MISC::IS_BIT_SET(Global_40.f_11182, *uParam0) && !MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return false;
	}

	if (MISC::IS_BIT_SET(Global_40.f_11182, *uParam0) && MISC::IS_BIT_SET(Global_40.f_11182, 12) && !MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return false;
	}

	if (!MISC::IS_BIT_SET(Global_40.f_11182, 13) && MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return false;
	}

	if (MISC::IS_BIT_SET(Global_40.f_11182, 12) && MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::CLEAR_BIT(&(Global_40.f_11182), 13);
		MISC::CLEAR_BIT(&(Global_40.f_11182), 12);
		return false;
	}

	return true;
}

BOOL func_278(int iParam0) // Position - 0x9F15 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_279(int iParam0) // Position - 0x9F28 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_280(int iParam0) // Position - 0x9F52 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

Hash func_281(int iParam0) // Position - 0x9F69 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_280(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_282(Hash hParam0) // Position - 0x9F87 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

PersChar func_283(int iParam0) // Position - 0x9F93 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_280(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_284(Volume volParam0, BOOL bParam1) // Position - 0x9FB3 Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_285(int iParam0, BOOL bParam1) // Position - 0x9FD6 Hash - 0xB1C1C6D6 ^0xB1C1C6D6
{
	int i;

	if (!func_100(iParam0))
		return;

	if (func_292(iParam0, 2) && !bParam1)
		return;

	if (bParam1)
		func_473(iParam0, 1);
	else
		func_474(iParam0, 1);

	func_475(iParam0, bParam1);

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_127(i) == iParam0)
			func_288(i, false);
	}

	return;
}

int func_286(Hash hParam0) // Position - 0xA043 Hash - 0x4BF152B5 ^0x4BF152B5
{
	switch (hParam0)
	{
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
	
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
	
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
	
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
	
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
	}

	return -1;
}

void func_287(eStackSize essParam0, BOOL bParam1) // Position - 0xA1A5 Hash - 0x28F0F3B1 ^0xD4160260
{
	BOOL flag;

	if (!func_124(essParam0))
		return;

	flag = func_271(essParam0, 67108864);

	if (bParam1)
	{
		if (!flag && func_413(essParam0) == 1 && essParam0 != 120 && essParam0 != 92)
		{
			func_476(essParam0, func_98());
			func_358(essParam0, 67108864);
		}
	}
	else if (flag)
	{
		func_359(essParam0, 67108864);
		func_476(essParam0, -15);
	}

	func_477(essParam0);
	return;
}

void func_288(int iParam0, BOOL bParam1) // Position - 0xA22A Hash - 0xCE05C781 ^0xCE05C781
{
	if (!func_97(iParam0))
		return;

	if (bParam1)
	{
		func_478(iParam0, true);
	}
	else
	{
		if (func_479(iParam0))
			return;
	
		func_480(iParam0, 1);
	}

	func_481(iParam0, bParam1);
	return;
}

int func_289() // Position - 0xA269 Hash - 0x9FDB78D4 ^0x1A910A01
{
	int num;

	if (func_106() == false)
		return -1;

	num = func_266();

	if (num == -1)
		return 150000;

	if (num <= 1)
		return 30000;

	if (num == 2 && !func_51(24))
		return 50000;

	return 150000;
}

void func_290(int iParam0, Hash hParam1) // Position - 0xA2C3 Hash - 0xA1045AC8 ^0xC1F49224
{
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyAmbarino"), hParam1);
			break;
	
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyNewHanover"), hParam1);
			break;
	
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyLemoyne"), hParam1);
			break;
	
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyWestElizabeth"), hParam1);
			break;
	
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateBountyNewAustin"), hParam1);
			break;
	
		default:
			break;
	}

	return;
}

void func_291(int iParam0) // Position - 0xA33A Hash - 0x509FA638 ^0x5EC2540B
{
	Hash hash;

	hash = func_482(iParam0);

	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelAmbarino"), hash);
			break;
	
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelNewHanover"), hash);
			break;
	
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelLemoyne"), hash);
			break;
	
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelWestElizabeth"), hash);
			break;
	
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("StateWantedLevelNewAustin"), hash);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_292(int iParam0, int iParam1) // Position - 0xA3B9 Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_100(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

void func_293(int iParam0, BOOL bParam1) // Position - 0xA401 Hash - 0xC5A7FE19 ^0xC5A7FE19
{
	if (!func_100(iParam0))
		return;

	if (bParam1)
		func_473(iParam0, 4);
	else
		func_474(iParam0, 4);

	func_483(iParam0, bParam1);
	return;
}

struct<4> func_294(char* sParam0) // Position - 0xA434 Hash - 0x7297014D ^0x7297014D
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 32);
	return unk;
}

Volume func_295(eStackSize essParam0) // Position - 0xA446 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_124(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_3;
}

void func_296(eStackSize essParam0) // Position - 0xA466 Hash - 0x83966A8E ^0x24FDDDED
{
	func_298(essParam0, 1);
	func_298(essParam0, MICRO);
	func_298(essParam0, 256);
	func_298(essParam0, MINI);
	func_298(essParam0, 1024);
	func_298(essParam0, 2048);
	func_298(essParam0, 4096);
	func_298(essParam0, 65536);
	func_298(essParam0, 16384);
	func_298(essParam0, 262144);
	func_298(essParam0, 524288);
	func_298(essParam0, 1048576);
	func_298(essParam0, 2097152);
	func_298(essParam0, 32768);
	func_298(essParam0, 131072);
	func_298(essParam0, 134217728);
	func_298(essParam0, 1073741824);
	return;
}

void func_297(eStackSize essParam0, BOOL bParam1) // Position - 0xA50F Hash - 0xA7580A6E ^0xA1E1743A
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

void func_298(int iParam0, eStackSize essParam1) // Position - 0xA582 Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = Global_40.f_4942[iParam0 /*60*/].f_5 - Global_40.f_4942[iParam0 /*60*/].f_5 && essParam1;
	return;
}

BOOL func_299(eStackSize essParam0, var uParam1) // Position - 0xA5B2 Hash - 0x4931B454 ^0x57CF147
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

BOOL func_300(Ped pedParam0, Hash hParam1) // Position - 0xA728 Hash - 0x902FAF7B ^0x852CA371
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

void func_301(int iParam0, eStackSize essParam1) // Position - 0xA756 Hash - 0x5D6920FA ^0x923FA356
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = Global_40.f_4942[iParam0 /*60*/].f_5 || essParam1;
	return;
}

void func_302(eStackSize essParam0, Ped pedParam1, BOOL bParam2) // Position - 0xA779 Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1 > 0 && func_300(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4096 > 0 && func_300(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MICRO > 0 && func_300(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 256 > 0 && func_300(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & MINI > 0 && func_300(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1024 > 0 && func_300(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2048 > 0 && func_300(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & -2147483648 > 0 && func_300(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 65536 > 0 && func_300(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16384 > 0 && func_300(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 262144 > 0 && func_300(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 524288 > 0 && func_300(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1048576 > 0 && func_300(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 2097152 > 0 && func_300(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 32768 > 0 && func_300(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 131072 > 0 && func_300(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 4194304 > 0 && func_300(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8388608 > 0 && func_300(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 16777216 > 0 && func_300(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 33554432 > 0 && func_300(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 67108864 > 0 && func_300(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 134217728 > 0 && func_300(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 268435456 > 0 && func_300(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 536870912 > 0 && func_300(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 1073741824 > 0 && func_300(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[essParam0 /*60*/].f_5 & 8192 > 0 && func_300(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_57 = 1;

	return;
}

BOOL func_303(var uParam0) // Position - 0xAD57 Hash - 0xB48BDC80 ^0xB48BDC80
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < uParam0->f_1000; i = i + 1)
	{
		if (!func_484(&uParam0->f_868[i /*20*/]))
			num = 0;
	}

	return num;
}

BOOL func_304(var uParam0) // Position - 0xAD8E Hash - 0x1DDCD265 ^0xA1383039
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < uParam0->f_1000; i = i + 1)
	{
		if (uParam0->f_868[i /*20*/].f_19)
			if (!func_485(&uParam0->f_868[i /*20*/]))
				num = 0;
	}

	return num;
}

BOOL func_305(var uParam0) // Position - 0xADD3 Hash - 0xF806AE76 ^0x840BAA83
{
	int num;
	int num2;

	if (!uParam0->f_18)
		return true;

	if (func_235(uParam0->f_2, 0))
	{
		return true;
	}
	else
	{
		num2.f_10 = 7;
		num2.f_1 = 1;
		num2 = 1;
		num2.f_5 = 1;
		num2.f_6 = { uParam0->f_14 };
		uParam0->f_2 = func_409(&num, &num2);
	
		if (num == 1)
			return true;
	
		func_349(uParam0->f_2, uParam0->f_14, uParam0->f_17, 2, 1073741824);
		TASK::TASK_STAND_STILL(uParam0->f_2, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
	}

	return false;
}

BOOL func_306(var uParam0) // Position - 0xAE5D Hash - 0xB48BDC80 ^0xB48BDC80
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < uParam0->f_999; i = i + 1)
	{
		if (!func_486(&uParam0->f_827[i /*10*/]))
			num = 0;
	}

	return num;
}

BOOL func_307(var uParam0) // Position - 0xAE94 Hash - 0x48BB9E4D ^0x48BB9E4D
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < uParam0->f_998; i = i + 1)
	{
		if (!func_487(&uParam0->f_782[i /*11*/], &(uParam0->f_1004), uParam0))
			num = 0;
	}

	return num;
}

BOOL func_308(var uParam0) // Position - 0xAED2 Hash - 0x48BB9E4D ^0x48BB9E4D
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < uParam0->f_996; i = i + 1)
	{
		if (!func_488(&uParam0->f_530[i /*10*/], &(uParam0->f_1004), uParam0))
			num = 0;
	}

	return num;
}

BOOL func_309(var uParam0) // Position - 0xAF10 Hash - 0x9701F13F ^0x9701F13F
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < uParam0->f_997; i = i + 1)
	{
		if (!func_489(&uParam0->f_731[i /*10*/], &(uParam0->f_1004)))
			num = 0;
	}

	return num;
}

void func_310(var uParam0) // Position - 0xAF4C Hash - 0xBE32C9A9 ^0x10D286D7
{
	int i;

	for (i = 0; i < uParam0->f_1000; i = i + 1)
	{
		func_490(uParam0, uParam0->f_868[i /*20*/].f_2, &(uParam0->f_868[i /*20*/].f_4), 0, 0, false);
	
		if (uParam0->f_868[i /*20*/].f_19 && !MISC::IS_STRING_NULL_OR_EMPTY(func_491(uParam0->f_868[i /*20*/].f_8)))
			func_490(uParam0, uParam0->f_868[i /*20*/].f_3, &(uParam0->f_868[i /*20*/].f_8), 0, 0, false);
	}

	return;
}

void func_311(var uParam0) // Position - 0xAFD4 Hash - 0xE92EC7D ^0xE1BF1676
{
	int i;

	for (i = 0; i < uParam0->f_999; i = i + 1)
	{
		func_490(uParam0, uParam0->f_827[i /*10*/].f_2, &(uParam0->f_827[i /*10*/].f_3), 0, 0, false);
	}

	return;
}

void func_312(var uParam0) // Position - 0xB011 Hash - 0xE92EC7D ^0xF9A4E100
{
	int i;

	for (i = 0; i < uParam0->f_998; i = i + 1)
	{
		func_490(uParam0, uParam0->f_782[i /*11*/].f_1, &(uParam0->f_782[i /*11*/].f_2), 0, 0, false);
	}

	return;
}

void func_313(var uParam0) // Position - 0xB04E Hash - 0xE92EC7D ^0xF9A4E100
{
	int i;

	for (i = 0; i < uParam0->f_996; i = i + 1)
	{
		func_492(uParam0, uParam0->f_530[i /*10*/].f_1, &(uParam0->f_530[i /*10*/].f_2), 0, 0, false);
	}

	return;
}

void func_314(var uParam0) // Position - 0xB08B Hash - 0x69769BE9 ^0x1A518934
{
	func_490(uParam0, uParam0->f_950.f_1, &(uParam0->f_950.f_3), 0, 0, false);
	return;
}

void func_315(var uParam0) // Position - 0xB0AA Hash - 0xE54D4A20 ^0xFB47EB89
{
	if (uParam0->f_950.f_18 && !MISC::IS_STRING_NULL_OR_EMPTY(func_491(uParam0->f_950.f_7)))
		func_490(uParam0, uParam0->f_950.f_2, &(uParam0->f_950.f_7), 0, 0, false);

	return;
}

void func_316(var uParam0) // Position - 0xB0EA Hash - 0xE92EC7D ^0xF9A4E100
{
	int i;

	for (i = 0; i < uParam0->f_997; i = i + 1)
	{
		func_492(uParam0, uParam0->f_731[i /*10*/].f_1, &(uParam0->f_731[i /*10*/].f_2), 0, 0, false);
	}

	return;
}

struct<8> func_317(var uParam0) // Position - 0xB127 Hash - 0x34F395B4 ^0x4D7F9139
{
	var unk;

	unk = { func_493(uParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		unk = { func_494() };

	return unk;
}

void func_318(var uParam0, char* sParam1) // Position - 0xB151 Hash - 0x25E063BB ^0x16263A15
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_446), sParam1, 64);
	return;
}

char* func_319(var uParam0) // Position - 0xB16E Hash - 0xC810BAE2 ^0xB43385DD
{
	switch (uParam0->f_970)
	{
		case 10:
			return "PL1_Hosea_Left";
	}

	return "";
}

void func_320(var uParam0, char* sParam1, BOOL bParam2) // Position - 0xB195 Hash - 0x77539CD1 ^0x7EE21A9
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	if (func_495(uParam0, sParam1))
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_462[i /*9*/]))
		{
			if (!func_496(uParam0, sParam1) || func_497(uParam0, 8388608))
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_462[i /*9*/], sParam1, 64);
			
				if (!bParam2)
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1))
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
					else
						func_498(uParam0, 4194304);
				else
					func_498(uParam0, 4194304);
			
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

BOOL func_321(var uParam0, const char* sParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB261 Hash - 0xB6AB086B ^0x5535D393
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
			return func_497(uParam0, 256) && !func_497(uParam0, 4194304);
	
		uParam0->f_511 = 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	func_499(uParam0, sParam1);

	if (!func_497(uParam0, 64))
	{
		if (!_IS_NULL_VECTOR(func_500(uParam0)))
		{
			func_498(uParam0, 64);
		}
		else
		{
			unk = { func_501(uParam0) };
		
			if (!_IS_NULL_VECTOR(unk))
				func_502(uParam0, unk);
		}
	
		return false;
	}

	num = func_503(Global_35, func_500(uParam0), true);

	if (func_497(uParam0, 128) || func_497(uParam0, 256))
	{
		if (num >= func_504(uParam0) && !bParam2 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_505();
				uParam0->f_529 = 0;
			}
		
			func_506(uParam0);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
		
			func_507(uParam0);
			func_508(uParam0, 128, true);
			func_508(uParam0, 256, true);
			func_508(uParam0, 4096, true);
			func_508(uParam0, 32768, true);
			func_508(uParam0, 16777216, true);
		}
	}
	else if (num <= func_509(uParam0) || bParam2)
	{
		if (!func_497(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				func_509(uParam0) >= func_504(uParam0);
				playbackListName = { func_510(uParam0) };
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&playbackListName))
					func_511(uParam0);
			
				playbackListName = { func_510(uParam0) };
				flags = 256;
			
				if (!func_497(uParam0, 1))
					flags = flags | 2048;
			
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), flags, &playbackListName, false, true);
				func_512(uParam0, 0, false, 0, 0);
				func_498(uParam0, 128);
			}
		}
	}

	if (func_497(uParam0, 128))
	{
		if (func_497(uParam0, 256) && !func_497(uParam0, 4194304))
			return true;
	
		func_513(uParam0);
	
		if (!uParam0->f_529)
		{
			if (func_514())
			{
				func_515(4096);
				uParam0->f_529 = 1;
			}
		}
	
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			flag = true;
			string2 = { func_317(uParam0) };
		
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
		
			if (!func_497(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &string2))
				{
					if (!func_497(uParam0, 16777216))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, &string2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &string2) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_444, &string2))
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &string2);
					
						func_498(uParam0, 16777216);
					}
				
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &string2))
						flag = false;
				}
			}
		
			if (!flag)
				return false;
		
			func_498(uParam0, 256);
			func_508(uParam0, 4194304, true);
			return true;
		}
	}

	return false;
}

BOOL func_322(int iParam0) // Position - 0xB5FD Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 3:
		case 7:
		case 10:
			return true;
	}

	return false;
}

void func_323(var uParam0) // Position - 0xB627 Hash - 0xFCCC8B7D ^0xB8745C5D
{
	BOOL flag;
	int currentMessage;
	BOOL flag2;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444) || func_497(uParam0, 512))
	{
		if (!func_516(uParam0->f_501, 128))
			func_517();
	
		return;
	}

	if (func_518(uParam0, Global_35, 4) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_519(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_519(Global_35)) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_516(uParam0->f_501, 128))
			func_517();
	
		return;
	}

	flag = true;
	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);

	if (currentMessage != 0)
		if (func_520(currentMessage))
			if (func_521(Global_43801, false))
				flag = false;

	flag2 = false;

	if (func_516(uParam0->f_501, 512))
		flag2 = true;

	if (func_522(flag, flag2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_517();
	}

	return;
}

void func_324(var uParam0) // Position - 0xB734 Hash - 0xC94D2968 ^0xC94D2968
{
	float num;

	switch (uParam0->f_970)
	{
		case 1:
			num = 0.85f;
			break;
	
		case 2:
			num = 0.75f;
			break;
	
		case 3:
			num = 0.67f;
			break;
	
		case 4:
			num = 0.84f;
			break;
	
		case 5:
			num = 0.77f;
			break;
	
		case 6:
			num = 0.85f;
			break;
	
		case 7:
			num = 0.69f;
			break;
	
		case 8:
			num = 0.71f;
			break;
	
		case 9:
			num = 0.57f;
			break;
	
		case 10:
			num = 0.72f;
			break;
	
		case 11:
			num = 0.88f;
			break;
	}

	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > num)
	{
		func_228(Global_35, joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), false);
		func_54();
	}

	return;
}

BOOL func_325(var uParam0) // Position - 0xB817 Hash - 0x3F3467F ^0xA0BDD185
{
	int num;

	num = 1;

	switch (uParam0->f_970)
	{
		case 1:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(joaat("MotionState_Walk"), 1000, false, 1, false, -96.63f, false, false);
				return true;
			}
		
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.96f)
			{
				if (num == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(0), func_176(uParam0, 0));
					func_190(func_176(uParam0, 0), func_179(uParam0, 0), false, 2f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), false, 2f, 20000);
					num = num + 1;
				}
			}
		
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
				return true;
			break;
	
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT())
				CAM::DO_SCREEN_FADE_IN(0);
		
			if (func_523(uParam0, Global_35, 0, 0, true, true))
				return true;
			break;
	
		case 3:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(joaat("MotionState_Walk"), 2000, false, 1, true, 0, false, false);
				return true;
			}
			break;
	
		case 4:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(joaat("MotionState_Run"), 2000, false, 1, false, -152.8f, false, false);
				return true;
			}
		
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.96f)
			{
				if (num == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(1), func_176(uParam0, 1));
					func_190(func_176(uParam0, 1), func_179(uParam0, 1), false, 2f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), false, 2f, 20000);
					num = num + 1;
				}
			}
		
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
				return true;
			break;
	
		case 5:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(joaat("MotionState_Walk"), 1000, false, 1, true, 0, false, false);
				return true;
			}
			break;
	
		case 6:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
				return true;
		
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.935f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, "DUTCH", func_176(uParam0, 0));
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), false, 1.5f, 20000);
			}
			break;
	
		case 7:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(joaat("MotionState_Walk"), 2000, false, 1, true, 0, false, false);
				return true;
			}
			break;
	
		case 8:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
				return true;
			break;
	
		case 9:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(joaat("MotionState_Walk"), 2000, false, 1, true, 0, false, false);
				return true;
			}
			break;
	
		case 10:
			if (CAM::IS_SCREEN_FADED_OUT())
				CAM::DO_SCREEN_FADE_IN(0);
		
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(joaat("MotionState_Walk"), 2000, false, 1, true, 0, false, false);
				return true;
			}
			break;
	
		case 11:
			if (func_523(uParam0, Global_35, 0, 0, true, true))
			{
				func_524(-1415276238, 2000, false, 1, true, 0, false, false);
				return true;
			}
			break;
	}

	return false;
}

void func_326(AnimScene ansParam0) // Position - 0xBB6D Hash - 0x6C1ECE58 ^0x5BCB2EB2
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansParam0, false))
			ANIMSCENE::_DELETE_ANIM_SCENE(ansParam0);

	return;
}

BOOL func_327(int iParam0, var uParam1) // Position - 0xBB8E Hash - 0x3B49BE44 ^0x3B49BE44
{
	Vector3 vector;
	float heading;

	switch (iParam0)
	{
		case 3:
			vector = { -292.2816f, 800.4503f, 119.2814f };
			heading = 96.96f;
			break;
	
		case 7:
			vector = { 2916.061f, 1311.5382f, 44.2142f };
			heading = -54.69f;
			break;
	
		case 10:
			vector = { 2518.2932f, -1305.4604f, 48.9726f };
			heading = -8.52f;
			break;
	}

	switch (uParam1->f_972)
	{
		case 0:
			PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vector, heading, false, true, false, false);
			uParam1->f_972 = 1;
			break;
	
		case 1:
			if (PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()))
				uParam1->f_972 = 2;
			break;
	
		case 2:
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				return true;
			break;
	}

	return false;
}

void func_328(BOOL bParam0) // Position - 0xBC63 Hash - 0x7DD02EA1 ^0x8B13D37A
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);

	Global_43800 = -1;
	TEXT_LABEL_ASSIGN_STRING(&Global_43802, "", 24);
	Global_16 = false;

	if (bParam0)
		func_517();

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	return;
}

void func_329(var uParam0) // Position - 0xBCA8 Hash - 0x8C28A37B ^0xE1C5DF24
{
	int i;

	for (i = 0; i < uParam0->f_998; i = i + 1)
	{
		if (uParam0->f_782[i /*11*/].f_10)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_782[i /*11*/]);
	}

	return;
}

void func_330(var uParam0) // Position - 0xBCE1 Hash - 0x8C28A37B ^0xB5125186
{
	int i;

	for (i = 0; i < uParam0->f_996; i = i + 1)
	{
		if (uParam0->f_530[i /*10*/].f_9)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_530[i /*10*/]);
	}

	return;
}

void func_331(var uParam0) // Position - 0xBD1A Hash - 0x3879D1E9 ^0x14599BCA
{
	int i;

	for (i = 0; i < uParam0->f_997; i = i + 1)
	{
		if (uParam0->f_731[i /*10*/].f_9)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::_GET_WEAPONTYPE_MODEL(uParam0->f_731[i /*10*/]));
	}

	return;
}

void func_332(var uParam0) // Position - 0xBD57 Hash - 0x826EB0B7 ^0x826EB0B7
{
	int i;

	for (i = 0; i < uParam0->f_999; i = i + 1)
	{
		func_526(&uParam0->f_827[i /*10*/]);
	}

	return;
}

void func_333(var uParam0) // Position - 0xBD82 Hash - 0xCC8CDACA ^0x2B6785AC
{
	int i;

	for (i = 0; i < uParam0->f_996; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_530[i /*10*/].f_1) && uParam0->f_530[i /*10*/].f_9)
			OBJECT::DELETE_OBJECT(&(uParam0->f_530[i /*10*/].f_1));
	}

	return;
}

Player func_334() // Position - 0xBDD1 Hash - 0x7C4697AC ^0xA40D3BD2
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1224589.f_3;
		Global_36 = { Global_1224589.f_11 };
		return Global_1224589.f_5;
	}

	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

BOOL func_335(int iParam0, int iParam1) // Position - 0xBE1F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_336() // Position - 0xBE2E Hash - 0xA6EF402A ^0xAE403A6B
{
	Global_1935630.f_13 = 0;
	Global_1935630.f_14 = 0;
	Global_1935630.f_26 = 0;
	Global_1935630.f_15 = 0;
	Global_1935630.f_16 = 0;
	Global_1935630.f_17 = 0;
	Global_1935630.f_18 = 0;
	Global_1935630.f_19 = -1;
	Global_1935630.f_20 = -1;
	Global_1935630.f_21 = -1;
	Global_1935630.f_23 = 0;
	return;
}

BOOL func_337() // Position - 0xBE83 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_106() != -1)
		return false;

	if (!func_221())
		return false;

	if (!func_132(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[2 /*74*/].f_1, true) && func_132(Global_1347702[120 /*49*/].f_15, true) && !func_132(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[37 /*74*/].f_1, true) && !func_132(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[57 /*74*/].f_1, true) && !func_132(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[26 /*74*/].f_1, true) && !func_132(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_132(Global_1835011[62 /*74*/].f_1, true) && func_132(Global_1835011[63 /*74*/].f_1, true) && !func_132(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[75 /*74*/].f_1, true) && !func_132(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_132(Global_1835011[76 /*74*/].f_1, true) && !func_132(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[40 /*74*/].f_1, true) && func_132(Global_1835011[41 /*74*/].f_1, true) && !func_132(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[62 /*74*/].f_1, true) && func_132(Global_1835011[63 /*74*/].f_1, true) && !func_132(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_132(Global_1835011[65 /*74*/].f_1, true) && func_132(Global_1835011[66 /*74*/].f_1, true) && !func_132(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_338(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC0CA Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_527())
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
		num = func_253(Global_1898164.f_1[0 /*5*/]);
	
		if (func_528(num) && func_462(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_119(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_339() // Position - 0xC2CE Hash - 0xA767DBD8 ^0xA767DBD8
{
	return bLocal_27;
}

void func_340(BOOL bParam0) // Position - 0xC2D8 Hash - 0x28DF00E8 ^0x28DF00E8
{
	bLocal_27 = bParam0;
	return;
}

int func_341() // Position - 0xC2E4 Hash - 0xCD5F4132 ^0xCD5F4132
{
	if (bLocal_26)
		return 1;

	return 0;
}

Hash func_342(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC2F9 Hash - 0xEC5804B5 ^0x15A1D925
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

BOOL func_343(Hash hParam0) // Position - 0xC39D Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_529(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_344(Hash hParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC3B8 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_343(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam1, bParam3);
	}

	return;
}

void func_345(Hash hParam0, BOOL bParam1) // Position - 0xC3F0 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_343(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_346(Hash hParam0, BOOL bParam1) // Position - 0xC41E Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_343(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_347(Hash hParam0, BOOL bParam1) // Position - 0xC44C Hash - 0x4844A91D ^0x50E23246
{
	if (func_343(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_348() // Position - 0xC47A Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_349(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) // Position - 0xC483 Hash - 0xF46E0F16 ^0xED4BA72A
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

	pedParam0 == func_530(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_531(pedParam0))
		if (func_532(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_420(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_349(vehiclePedIsIn, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_349(mount, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_420(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_420(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_420(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_420(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_420(iParam5, 129))
	{
		if (func_420(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_420(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, iParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_420(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_420(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_531(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_420(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_420(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

BOOL func_350(var uParam0, Ped pedParam1, char* sParam2) // Position - 0xC705 Hash - 0xFB1C2C0E ^0x6794528D
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

void func_351(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC783 Hash - 0x124090B1 ^0x6D30AFF8
{
	if (!PED::DOES_GROUP_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
		return;

	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);

	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *uParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *uParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, bParam5);
	}

	PED::_0x97C475212B327666(*uParam1, bParam6);
	return;
}

void func_352(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC7EE Hash - 0xFDACD718 ^0x658C9335
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

int func_353(eStackSize essParam0) // Position - 0xC840 Hash - 0x34D87891 ^0x34D87891
{
	int num;
	int num2;
	int num3;

	if (!func_124(essParam0))
		return 0;

	num = func_533(essParam0);

	if (num == -1)
		return -1;

	num2 = func_534(func_354(essParam0));
	num3 = num - num2;

	if (num3 < 0)
		num3 = 0;

	return num3;
}

Hash func_354(eStackSize essParam0) // Position - 0xC886 Hash - 0xA8797BF3 ^0x5BC8C068
{
	if (!func_124(essParam0))
		return -15;

	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/].f_1;

	return Global_1058888.f_40545[essParam0 /*11*/].f_1;
}

BOOL func_355(Hash hParam0) // Position - 0xC8C3 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_535(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_536(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_537(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_538(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_539(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_540(hParam0);

	if (num6 < 1 || num6 > func_541(num5, num4))
		return false;

	return true;
}

void func_356(eStackSize essParam0, Hash hParam1) // Position - 0xC99F Hash - 0x7388F0C5 ^0x4D727BFF
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_1 = hParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_1 = hParam1;
	return;
}

void func_357(eStackSize essParam0, int iParam1) // Position - 0xC9D0 Hash - 0x3B089601 ^0x668F51A1
{
	if (!func_124(essParam0))
		return;

	if (iParam1 < 0)
		return;

	Global_23118[essParam0 /*11*/].f_3 = iParam1;
	return;
}

void func_358(eStackSize essParam0, BOOL bParam1) // Position - 0xC9F9 Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] || bParam1;

	return;
}

void func_359(eStackSize essParam0, BOOL bParam1) // Position - 0xCA3C Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] - Global_23118[essParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] - Global_1058888.f_40545[essParam0 /*11*/] && bParam1;
	return;
}

void func_360(eStackSize essParam0) // Position - 0xCA95 Hash - 0x115C5CF0 ^0x115C5CF0
{
	if (!func_124(essParam0))
		return;

	if (func_130(essParam0) && func_542(essParam0))
		func_544(func_543(essParam0));
	else
		func_545(func_543(essParam0));

	return;
}

float func_361(Ped pedParam0, Ped pedParam1) // Position - 0xCAD5 Hash - 0xF9959663 ^0xF9959663
{
	return func_546(pedParam0, pedParam1, true, true);
}

int func_362(var uParam0, int iParam1) // Position - 0xCAE7 Hash - 0x8685DB52 ^0x6450F183
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(Global_35);

	switch (iParam1)
	{
		case 5:
			if (func_472(entityModel))
				if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(7), "PBL_1"))
					return 1;
			else if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(8), "PBL_1"))
				return 1;
			break;
	
		case 26:
			if (func_472(entityModel))
				if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(9), "PBL_1"))
					return 1;
			else if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(10), "PBL_1"))
				return 1;
			break;
	
		case 38:
			if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(6), "PBL_1"))
				return 1;
			break;
	
		case 76:
			if (func_472(entityModel))
				if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(0), "PBL_1"))
					return 1;
			else if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(1), "PBL_1"))
				return 1;
			break;
	
		case 78:
			if (func_472(entityModel))
				if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(4), "PBL_1"))
					return 1;
			else if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(5), "PBL_1"))
				return 1;
			break;
	
		case 105:
			if (func_472(entityModel))
				if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(2), "PBL_1"))
					return 1;
			else if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(3), "PBL_1"))
				return 1;
			break;
	
		case 115:
			if (func_548(&(uParam0->f_25), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(11), "PBL_1"))
				return 1;
			break;
	}

	return 0;
}

void func_363(int iParam0) // Position - 0xCCA0 Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_196(1) < iParam0)
		iParam0 = func_196(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_399(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_364(int iParam0, const char* sParam1, int iParam2) // Position - 0xCCDE Hash - 0xA31E0DC ^0x6D56BD2B
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_402(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

void func_365(int iParam0, int iParam1) // Position - 0xCD1F Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_366(int iParam0, int iParam1) // Position - 0xCD43 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_106() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_367(int iParam0) // Position - 0xCD76 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_106() != -1)
		if (func_369(iParam0, 4))
			return false;
	else if (func_369(iParam0, 2))
		return false;

	return true;
}

BOOL func_368(int iParam0) // Position - 0xCDA6 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_369(iParam0, 65536) && !func_369(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_369(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_369(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_369(int iParam0, int iParam1) // Position - 0xCE52 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_370() // Position - 0xCE6B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_371(eStackSize essParam0) // Position - 0xCE7A Hash - 0xDA629583 ^0xDA629583
{
	return func_549(essParam0, 16, true);
}

void func_372(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0xCE8B Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_550(essParam0))
		return;

	if (func_371(essParam0))
		if (Global_1360165[essParam0 /*1157*/].f_129 != 0 && Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_551(essParam0, 56, true);
		func_416(&(Global_1359489.f_40), true);
	}

	func_552(essParam0, false);
	func_553(essParam0, 4, false);
	func_554(essParam0);
	func_555(essParam0);
	func_556(essParam0, 37, true);
	flag = func_235(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_557(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_558(essParam0, 64, true))
		func_556(essParam0, 64, true);

	if (bParam3)
	{
		func_556(essParam0, 33, true);
		func_556(essParam0, 34, true);
		func_559(essParam0, 1056964608, -1, 1061158912);
		func_560(essParam0, true, true, false);
	
		if (bParam6)
			func_551(essParam0, 30, true);
	
		if (bParam7)
		{
			func_551(essParam0, 35, true);
		
			if (bParam8)
				func_551(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_561(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_556(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_551(essParam0, 33, true);
		func_560(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_416(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_562(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_551(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_563(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_558(essParam0, 45, true))
		func_556(essParam0, 45, true);

	func_564(essParam0, 16, true);
	func_556(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_235(func_565(essParam0), 0))
			func_374(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_373(eStackSize essParam0) // Position - 0xD140 Hash - 0x6410553A ^0x46627D03
{
	if (!func_566(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

void func_374(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xD18C Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_566(essParam1))
		return;

	player = func_565(essParam1);

	if (func_373(essParam1))
		if (!func_567(essParam1))
			return;

	func_556(essParam1, 39, true);
	func_568(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_568(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_568(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_551(essParam1, 43, true);
		}
	
		if (bParam4)
			func_569(essParam1, false, true, true, true);
	}

	return;
}

BOOL func_375(Ped pedParam0) // Position - 0xD22E Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_376(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_376(Ped pedParam0) // Position - 0xD26C Hash - 0xD44AE303 ^0xA29D7F05
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

void func_377(int iParam0) // Position - 0xD2B1 Hash - 0x4CB73698 ^0x4CB73698
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_571(iParam0, 32);
	func_572();
	return;
}

void func_378(int iParam0) // Position - 0xD2DF Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_379(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_381(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_381(iParam0);

	return;
}

int func_379(int iParam0) // Position - 0xD32D Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

BOOL func_380(int iParam0) // Position - 0xD35B Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_381(int iParam0) // Position - 0xD389 Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

void func_382(int iParam0, Hash hParam1, int iParam2) // Position - 0xD3C1 Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_106() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

void func_383(BOOL bParam0) // Position - 0xD3F9 Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1898077.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_106() != -1)
		num = 1;

	if (Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13 && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_573(num, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = num;
		Global_1898077.f_8 = func_574();
		Global_1898077.f_9 = func_575(Global_1894899.f_2);
		func_576(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}

	Global_1898077.f_2 = 0;
	return;
}

int func_384(int iParam0) // Position - 0xD4B7 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_577(func_448(iParam0));
}

void func_385(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD4C9 Hash - 0x4464293B ^0x680D2F86
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

BOOL func_386(int iParam0) // Position - 0xD54E Hash - 0x9F0262CB ^0xFDED62A1
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_1934765.f_21[num2], offset);
}

BOOL func_387(Interior inParam0, int iParam1, BOOL bParam2) // Position - 0xD578 Hash - 0x38FA218 ^0xD9C8FE4A
{
	if (bParam2)
		if (!INTERIOR::IS_INTERIOR_READY(inParam0))
			return false;

	if (iParam1 || Global_1934765.f_271)
		return true;

	return INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW() != inParam0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != inParam0 || CAM::IS_SCREEN_FADED_OUT();
}

void func_388(int iParam0) // Position - 0xD5C9 Hash - 0x5D737F18 ^0x13EB3A26
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_1934765.f_30[num2], offset);
	return;
}

void func_389(int iParam0) // Position - 0xD5F3 Hash - 0x5D737F18 ^0x5B384D3B
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_1934765.f_30[num2], offset);
	return;
}

int func_390() // Position - 0xD61D Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_578();

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

int func_391(int iParam0) // Position - 0xD730 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_106() != -1)
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

BOOL func_392() // Position - 0xD7D5 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_106() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_393(int iParam0, int iParam1, int iParam2) // Position - 0xD7FA Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_394(int iParam0) // Position - 0xD81F Hash - 0xEE599357 ^0xEE599357
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

Hash func_395() // Position - 0xD8D6 Hash - 0xA46C8CCA ^0x71ABACD2
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

void func_396(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xDA2E Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_580(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_581(hParam0);
	return;
}

void func_397(int iParam0) // Position - 0xDA5A Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_582(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_398(BOOL bParam0) // Position - 0xDABE Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_583(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_584(i, &hash, &num))
			{
				if (!func_425(hash, 0))
				{
				}
				else
				{
					unlockHash = func_585(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_586(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_390() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_390() >= 160;
					else
						flag = num == func_587();
				
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

struct<2> func_399(int iParam0) // Position - 0xDB7F Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_400(var uParam0, var uParam1, int iParam2) // Position - 0xDB8F Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xDB9F Hash - 0xA17D549C ^0x5E203621
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

int func_402(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xDCEB Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_588(sParam0, sParam1, hParam2);
	return num2;
}

int func_403(int iParam0, int iParam1) // Position - 0xDD4E Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_589(iParam0))
		return 0;

	if (!func_221())
		return 0;

	if (!func_590(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

int func_404(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xDDA9 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_591(*uParam0, 0f, 0f, 0f))
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

eStackSize func_405() // Position - 0xDEA0 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

int func_406(eStackSize essParam0, var uParam1, var uParam2) // Position - 0xDEAE Hash - 0x2D8DF8DC ^0x2D8DF8DC
{
	switch (essParam0)
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
			return 0;
	}

	return 1;
}

int func_407(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDFCA Hash - 0x422D47B4 ^0x422D47B4
{
	int num;

	if (!func_592(iParam1))
		return 0;

	if (!bParam3)
		return 1;

	num = func_434(iParam1);
	return func_593(pedParam0, num, bParam2, bParam2);
}

BOOL func_408(int iParam0) // Position - 0xDFFE Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_594(iParam0) == 0)
		return false;

	return true;
}

Ped func_409(var uParam0, var uParam1) // Position - 0xE031 Hash - 0x6747FB46 ^0x33F721B4
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

	uParam1->f_10 = func_570(uParam1->f_10);

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

	flag = func_221();

	if (*uParam1)
	{
		if (flag && !func_132(Global_1835011[4 /*74*/].f_1, true))
		{
			if (func_408(5))
			{
				func_595(5);
				func_596(5);
				func_597(0);
				func_598(0);
			}
		}
	}

	if (func_599(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_132(Global_1835011[37 /*74*/].f_1, true) && !func_132(Global_1835011[43 /*74*/].f_1, true))
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_132(Global_1835011[43 /*74*/].f_1, true) && !func_132(Global_1835011[44 /*74*/].f_1, true))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	num = uParam1->f_10;
	mount = func_600(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_601(num))
	{
		flag2 = true;
	
		if (func_602(num))
			flag3 = true;
	
		if (func_603(num))
			flag4 = true;
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag4 && !uParam1->f_5)
			{
				func_604(uParam1->f_10);
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
			if (!func_408(0) && func_408(1))
			{
				func_605(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_606())
				func_607();
		
			func_597(0);
			func_598(0);
			func_608(uParam1->f_6);
		}
	}

	if (!func_601(uParam1->f_10))
	{
		if (*uParam1)
		{
			if (func_609(uParam1->f_10) == 0 || func_610(uParam1->f_10) == 0 || func_594(uParam1->f_10) == 0)
				func_611(uParam1->f_10);
		
			func_612(uParam1->f_10);
			func_613(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
	
		*uParam0 = 1;
		return 0;
	}

	num = uParam1->f_10;
	mount = func_600(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_601(num))
	{
		flag2 = true;
	
		if (func_602(num))
			flag3 = true;
	
		if (func_603(num))
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

	if (func_614(uParam1->f_10))
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
		
			unk = { func_615(uParam1->f_10) };
			unk3 = { func_616() };
			func_617(mount, &unk, &unk3, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
			PED::SET_PED_CONFIG_FLAG(mount, 186, false);
		}
	}

	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return mount;
	}

	if (!func_380(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
		func_618(uParam1->f_10);
	
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

	func_378(uParam1->f_10);

	if (func_380(uParam1->f_10))
	{
		num2 = func_379(uParam1->f_10);
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

void func_410(var uParam0, int iParam1) // Position - 0xE4A6 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_411(BOOL bParam0, int iParam1) // Position - 0xE4B3 Hash - 0x79C7FE3F ^0x6329E121
{
	BOOL flag;

	if (func_619())
		if (func_620(255))
			if (!func_621(36, 255))
				return;

	flag = bParam0;

	if (!bParam0)
	{
		if (func_124(Global_1894899.f_2) && func_414(Global_1894899.f_2))
		{
			func_622(Global_1894899.f_2, 0);
		
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_623(16);
			}
		}
		else if (func_124(Global_1894899.f_2) && !func_271(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}

	if (bParam0)
	{
		!CAM::IS_SCREEN_FADED_OUT();
		Global_1894899.f_7 = 0;
		func_624(16);
		func_625();
	
		if (flag)
			func_624(true);
	}

	return;
}

void func_412() // Position - 0xE571 Hash - 0x23A2FC3A ^0x23A2FC3A
{
	func_624(8);
	return;
}

int func_413(eStackSize essParam0) // Position - 0xE57F Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_124(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

BOOL func_414(eStackSize essParam0) // Position - 0xE59F Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_124(essParam0))
		return false;

	return func_271(essParam0, 8);
}

BOOL func_415(var uParam0) // Position - 0xE5BD Hash - 0x5001E582 ^0x5001E582
{
	return func_626(*uParam0, 1);
}

void func_416(var uParam0, BOOL bParam1) // Position - 0xE5CD Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_415(uParam0))
		func_627(uParam0);

	return;
}

BOOL func_417(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0xE5ED Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

float func_418(var uParam0) // Position - 0xE642 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_415(uParam0))
		return uParam0->f_1;

	if (func_628(uParam0))
		return uParam0->f_2;

	return func_629() - uParam0->f_1;
}

int func_419(var uParam0) // Position - 0xE677 Hash - 0xF847F1C2 ^0xBD27EDFF
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(*uParam0, false);
	}
	else
	{
		return 1;
	}

	return 0;
}

BOOL func_420(int iParam0, int iParam1) // Position - 0xE6AF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_421(Hash hParam0) // Position - 0xE6BE Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_630(outSlotId);
}

int func_422(int iParam0, int iParam1) // Position - 0xE6E1 Hash - 0x9D981F95 ^0x9D981F95
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

Hash func_423(Hash hParam0) // Position - 0xE8B2 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_425(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_424() // Position - 0xE8DD Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_631())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_425(Hash hParam0, int iParam1) // Position - 0xE927 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_426(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xE941 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_425(hParam0, 0))
		return false;

	num = func_586(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_632(hParam0, 1))
			return false;

	return func_633(hParam0, false, bParam2) >= iParam1;
}

BOOL func_427(Hash hParam0) // Position - 0xE9AB Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_238(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_428(Hash hParam0, Hash hParam1) // Position - 0xE9D5 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_429() // Position - 0xEA06 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_634())
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

Hash func_430() // Position - 0xEA5D Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_634())
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

Hash func_431() // Position - 0xEAB4 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_634())
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

Hash func_432() // Position - 0xEB0B Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_634())
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

BOOL func_433(int iParam0) // Position - 0xEB62 Hash - 0x504F2E56 ^0x65F96397
{
	int num;
	int num2;
	BOOL flag;
	int num3;

	num3 = -961687407;

	if (func_106() == -1)
		num3 = 1444744190;

	num3.f_1 = iParam0;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
		return false;

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, -2008906477))
		return false;

	flag = func_635(iParam0);

	if (func_636(num, &num2))
		func_637(num2, flag);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, -2008906477))
		{
		}
		else if (!func_636(num, &num2))
		{
		}
		else
		{
			func_637(num2, flag);
		}
	}

	return true;
}

int func_434(int iParam0) // Position - 0xEC07 Hash - 0x64371996 ^0x2772BBB4
{
	var unk;
	int num;

	num = -961687407;

	if (func_106() == -1)
		num = 1444744190;

	num.f_1 = iParam0;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return 0;

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &num, -624749060))
		return 0;

	return func_638(unk);
}

int func_435(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEC5F Hash - 0x1B9A208C ^0x22FAC859
{
	if (iParam1 == 0)
		iParam1 = -1;

	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(pedParam0))
			func_639(13, iParam1, 0, 0, false);
		else
			func_639(13, iParam1, 1, pedParam0, false);
	
		return 1;
	}

	!func_640(false);
	func_641(&(Global_1946054.f_1497), pedParam0, true, iParam1, true, bParam3, true);
	return 1;
}

BOOL func_436(int iParam0) // Position - 0xECBB Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_437(int iParam0, int iParam1) // Position - 0xECD1 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_642(iParam0);
	else
		func_643(iParam0, iParam1);

	func_644();
	return;
}

void func_438(int iParam0, int iParam1) // Position - 0xED19 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_439(int iParam0, int iParam1) // Position - 0xED39 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_440(int iParam0, int iParam1) // Position - 0xED59 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_441(int iParam0, BOOL bParam1) // Position - 0xED79 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_442(int iParam0, Hash hParam1) // Position - 0xEDA4 Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

int func_443(int iParam0) // Position - 0xEDD3 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_444(BOOL bParam0) // Position - 0xEE54 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_445(BOOL bParam0) // Position - 0xEE61 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_446(BOOL bParam0) // Position - 0xEE74 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

int func_447(int iParam0) // Position - 0xEE88 Hash - 0x6A809E0B ^0xD5C1247E
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_2;

	return -1;
}

int func_448(int iParam0) // Position - 0xEEA7 Hash - 0xBA803397 ^0x906286B5
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

void func_449(int iParam0, int iParam1) // Position - 0xEEEF Hash - 0xCE0BB2C4 ^0x23B010DC
{
	var unk;

	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { unk };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = func_246(iParam0);
		func_645(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}

	return;
}

void func_450(int iParam0, int iParam1) // Position - 0xEF6D Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_646(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_646(i, i + 1);
		}
	}

	if (func_119(Global_1898164.f_1[0 /*5*/]))
		func_255(Global_1898164.f_1[0 /*5*/], 3);

	return;
}

void func_451(BOOL bParam0) // Position - 0xEFE3 Hash - 0xABC71D04 ^0x7FAB5AFE
{
	int i;

	for (i = 0; i < 153; i = i + 1)
	{
		if (Global_1914319.f_15936[i /*6*/].f_5)
			Global_1914319.f_15936[i /*6*/].f_5 = 0;
	
		func_647(&Global_1914319.f_15936[i /*6*/], bParam0);
	}

	return;
}

void func_452(BOOL bParam0) // Position - 0xF02D Hash - 0x75A38704 ^0x669CA416
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_647(&Global_1934051.f_23[i], bParam0);
	}

	return;
}

void func_453(BOOL bParam0) // Position - 0xF058 Hash - 0xEE9EF61F ^0x6F45D5CB
{
	int i;

	for (i = 0; i < 33; i = i + 1)
	{
		func_647(&Global_1899778.f_34[i], bParam0);
		Global_1899778[i] = 0;
	}

	return;
}

void func_454(BOOL bParam0) // Position - 0xF08C Hash - 0x990D8E53 ^0x990D8E53
{
	func_647(&Global_1955864, bParam0);
	return;
}

void func_455(BOOL bParam0) // Position - 0xF09E Hash - 0x44C39101 ^0xB6988EF7
{
	func_647(&(Global_1415412.f_3), bParam0);
	return;
}

void func_456(BOOL bParam0) // Position - 0xF0B2 Hash - 0x15F28904 ^0x5BE4C56F
{
	if (func_648(Global_1934051.f_33))
		func_649(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));

	func_647(&(Global_1934051.f_33), bParam0);
	return;
}

void func_457(BOOL bParam0) // Position - 0xF0E1 Hash - 0xB1376D99 ^0x20D49D2D
{
	int i;
	Hash hash;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = func_651(func_650(i));
	
		if (hash != 0)
			func_649(Global_1934051[i /*2*/], hash);
	
		if (Global_1934051[i /*2*/].f_1)
			Global_1934051[i /*2*/].f_1 = 0;
	
		func_647(&Global_1934051[i /*2*/], bParam0);
	}

	return;
}

void func_458(BOOL bParam0) // Position - 0xF142 Hash - 0x2B0F2EE5 ^0xCD361E26
{
	int i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		func_652(i, -1);
		func_653(i, 0);
		func_654(i, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
		{
			if (bParam0)
				MAP::SET_RADAR_ZOOM(Global_36308[i]);
		
			MAP::REMOVE_BLIP(&Global_36308[i]);
		}
	}

	return;
}

void func_459(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF19C Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_460() // Position - 0xF1CC Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_655();
	func_656();
	func_657();
	return;
}

int func_461(int iParam0) // Position - 0xF1E3 Hash - 0xEE599357 ^0xEE599357
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

BOOL func_462(int iParam0, int iParam1) // Position - 0xF3EA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_463(int iParam0) // Position - 0xF3F9 Hash - 0xBC835308 ^0xBC835308
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

void func_464(int iParam0, var uParam1) // Position - 0xF501 Hash - 0x852438A3 ^0xED82E692
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &num, 2, 2);
	return;
}

void func_465(int iParam0, var uParam1) // Position - 0xF51C Hash - 0x3F2FCA40 ^0x9574484A
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &num, 2, 2);
	return;
}

BOOL func_466(int iParam0) // Position - 0xF537 Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_119(iParam0))
		return false;

	switch (func_252(iParam0))
	{
		case 1:
			switch (func_253(iParam0))
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
			switch (func_253(iParam0))
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

void func_467(int iParam0) // Position - 0xF610 Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_658(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_423(item) == iParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_660(func_659(iParam0), 6);
	return;
}

void func_468(int iParam0) // Position - 0xF664 Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_658(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_423(item) == iParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_661(func_659(iParam0), 6);
	return;
}

BOOL func_469(eStackSize essParam0) // Position - 0xF6B9 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 5:
		case 26:
		case 38:
		case 76:
		case 78:
		case 105:
			return true;
	}

	return false;
}

BOOL func_470() // Position - 0xF6F5 Hash - 0xC2D762CB ^0xC2D762CB
{
	if (func_408(0) || func_408(1))
		return true;

	return false;
}

BOOL func_471(eStackSize essParam0) // Position - 0xF715 Hash - 0xC545BAB7 ^0xC545BAB7
{
	if (!func_662(essParam0, false, false))
		return false;

	return true;
}

BOOL func_472(Hash hParam0) // Position - 0xF72E Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 1;
	}

	return 0;
}

void func_473(int iParam0, int iParam1) // Position - 0xF74C Hash - 0x8CE59BC2 ^0x8A418101
{
	if (!func_100(iParam0))
		return;

	!func_292(iParam0, iParam1);

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = Global_40.f_358[iParam0 /*12*/].f_5 || iParam1;
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/].f_5 = Global_1058888.f_42196[iParam0 /*12*/].f_5 || iParam1;
	return;
}

void func_474(int iParam0, int iParam1) // Position - 0xF7B6 Hash - 0x51AEA24 ^0x983B9297
{
	if (!func_100(iParam0))
		return;

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = Global_40.f_358[iParam0 /*12*/].f_5 - Global_40.f_358[iParam0 /*12*/].f_5 && iParam1;
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/].f_5 = Global_1058888.f_42196[iParam0 /*12*/].f_5 - Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1;
	return;
}

void func_475(int iParam0, BOOL bParam1) // Position - 0xF831 Hash - 0x49678002 ^0x49678002
{
	if (!func_100(iParam0))
		return;

	if (bParam1)
		func_544(func_663(iParam0));
	else
		func_545(func_663(iParam0));

	return;
}

void func_476(eStackSize essParam0, Hash hParam1) // Position - 0xF862 Hash - 0x7388F0C5 ^0x866A1FF3
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_2 = hParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_2 = hParam1;
	return;
}

void func_477(eStackSize essParam0) // Position - 0xF893 Hash - 0x1C686B36 ^0x1C686B36
{
	if (!func_124(essParam0))
		return;

	if (func_664(essParam0))
		func_665(essParam0);
	else
		func_666(essParam0);

	return;
}

void func_478(int iParam0, BOOL bParam1) // Position - 0xF8C0 Hash - 0xA4B8C237 ^0x935EEB2B
{
	if (!func_97(iParam0))
		return;

	!func_667(iParam0, bParam1);

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = Global_40.f_431[iParam0] || bParam1;
		return;
	}

	Global_1058888.f_42269[iParam0] = Global_1058888.f_42269[iParam0] || bParam1;
	return;
}

BOOL func_479(int iParam0) // Position - 0xF922 Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_97(iParam0))
		return false;

	return func_667(iParam0, 2);
}

void func_480(int iParam0, BOOL bParam1) // Position - 0xF93F Hash - 0x6F253A8 ^0x120830DC
{
	if (!func_97(iParam0))
		return;

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = Global_40.f_431[iParam0] - Global_40.f_431[iParam0] && bParam1;
		return;
	}

	Global_1058888.f_42269[iParam0] = Global_1058888.f_42269[iParam0] - Global_1058888.f_42269[iParam0] && bParam1;
	return;
}

void func_481(int iParam0, BOOL bParam1) // Position - 0xF9AE Hash - 0xE581BD06 ^0xE581BD06
{
	Hash hash;

	if (!func_97(iParam0))
		return;

	if (iParam0 == 8)
		return;

	hash = func_668(iParam0);

	if (bParam1)
		func_544(hash);
	else
		func_545(hash);

	return;
}

Hash func_482(int iParam0) // Position - 0xF9E9 Hash - 0x8DA5EC9 ^0xB635C20
{
	if (!func_100(iParam0))
		return 0;

	if (Global_40.f_358[iParam0 /*12*/].f_5 & 2 != 0)
		return 5;

	if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
		return func_669(Global_40.f_358[iParam0 /*12*/]);

	return 0;
}

void func_483(int iParam0, BOOL bParam1) // Position - 0xFA45 Hash - 0x72FD8224 ^0x427C5AB
{
	if (bParam1)
		MAP::_MAP_ENABLE_REGION_BLIP(func_670(iParam0), joaat("BLIP_STYLE_WANTED_REGION"));
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_670(iParam0), joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_670(iParam0), joaat("BLIP_STYLE_WANTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(func_670(iParam0));

	return;
}

BOOL func_484(var uParam0) // Position - 0xFA95 Hash - 0x8AA3C032 ^0x17A5859F
{
	if (!func_671(uParam0->f_1))
	{
		uParam0->f_2 = func_672(uParam0->f_1, true, 0, uParam0->f_12, uParam0->f_12.f_1, uParam0->f_12.f_2, 0, true, 0, false, false, true, 0, 0, false, false, false, true, true, true, false, false, true, false, true);
	
		if (func_235(uParam0->f_2, 0))
			return true;
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_485(var uParam0) // Position - 0xFAF2 Hash - 0x463E3275 ^0xF04117BF
{
	int num;

	if (func_235(uParam0->f_3, 0))
		return true;

	if (!func_567(uParam0->f_1))
	{
		uParam0->f_3 = func_673(&num, uParam0->f_1, true, true, 0, 0, 0, true, false, 0, 0, 0, 0, false, false, false, true, false);
	
		if (func_235(uParam0->f_3, 0) && num == 2)
		{
			if (!_IS_NULL_VECTOR(uParam0->f_15))
			{
				func_349(uParam0->f_3, uParam0->f_15, uParam0->f_18, 2, 1073741824);
				TASK::TASK_STAND_STILL(uParam0->f_3, -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			}
		
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_486(var uParam0) // Position - 0xFB8D Hash - 0xD53F7A11 ^0xA874712F
{
	if (!func_674(uParam0->f_1, false))
		func_675(uParam0->f_1, true, false, false, true, true);

	if (!ENTITY::IS_ENTITY_DEAD(func_676(uParam0->f_1)))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_676(uParam0->f_1), true);
		PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 168, false);
		PERSCHAR::_0x6759BEE6762E140B(func_283(uParam0->f_1));
	}
	else
	{
		return false;
	}

	uParam0->f_2 = func_676(uParam0->f_1);
	return true;
}

BOOL func_487(var uParam0, var uParam1, var uParam2) // Position - 0xFBFC Hash - 0xD05D01C4 ^0x2E586D97
{
	var unk;
	var unk17;
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		return true;

	if (*uParam1)
		return false;

	unk = 15;
	unk17 = 1;
	unk17[0] = Global_35;
	num = func_677(&unk, &unk17, 15, uParam0->f_6, 1101004800, false, true, true, uParam0->f_9, true, false, -1082130432, false, false);

	for (i = 0; i < num; i = i + 1)
	{
		if (!func_678(uParam2, unk[i]))
		{
			if (*uParam0 == ENTITY::GET_ENTITY_MODEL(unk[i]))
			{
				uParam0->f_1 = unk[i];
				PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(uParam0->f_1, joaat("law"));
				return true;
			}
		}
	}

	STREAMING::REQUEST_MODEL(*uParam0, false);

	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = func_679(*uParam0, uParam0->f_6, 0, true, true, 0, true, true, true, false, false, false, false);
		PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(uParam0->f_1, joaat("law"));
		uParam0->f_10 = 1;
		*uParam1 = 1;
		return true;
	}

	return false;
}

BOOL func_488(var uParam0, var uParam1, var uParam2) // Position - 0xFCEE Hash - 0xB91E8685 ^0x3CDAE2CB
{
	var unk;
	var unk10;
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		return true;

	if (*uParam1)
		return false;

	unk = 8;
	unk10 = 1;
	unk10[0] = *uParam0;
	num = func_680(&unk, &unk10, 8, uParam0->f_6, 1101004800);

	for (i = 0; i < num; i = i + 1)
	{
		if (!func_681(uParam2, unk[i]))
		{
			uParam0->f_1 = unk[i];
			return true;
		}
	}

	STREAMING::REQUEST_MODEL(*uParam0, false);

	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(*uParam0, uParam0->f_6, true, true, false, true);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}

	return false;
}

BOOL func_489(var uParam0, var uParam1) // Position - 0xFD9F Hash - 0x8AD825EC ^0x7C1A02E3
{
	Hash weapontypeModel;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		return true;

	if (*uParam1)
		return false;

	weapontypeModel = WEAPON::_GET_WEAPONTYPE_MODEL(*uParam0);
	STREAMING::REQUEST_MODEL(weapontypeModel, false);

	if (STREAMING::HAS_MODEL_LOADED(weapontypeModel))
	{
		uParam0->f_1 = WEAPON::_CREATE_WEAPON_OBJECT(*uParam0, 100, uParam0->f_6, true, 1065353216);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}

	return false;
}

void func_490(var uParam0, Entity eParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xFE00 Hash - 0x9240AF10 ^0x9240AF10
{
	func_492(uParam0, eParam1, sParam2, iParam3, iParam4, bParam5);
	return;
}

const char* func_491(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xFE18 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_492(var uParam0, Entity eParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xFE2C Hash - 0x37E325FF ^0x56E9093A
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
		sParam2 = func_682(eParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam1))
		{
		}
	
		return;
	}

	num = func_683(uParam0, eParam1);

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
		entity = func_684(uParam0, sParam2);
	
		if (ENTITY::DOES_ENTITY_EXIST(entity) && entity != eParam1)
			func_685(uParam0, entity);
	}

	if (num == -1)
		num = func_686(uParam0);

	if (num != -1)
	{
		uParam0->f_13[num /*12*/] = eParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13[num /*12*/].f_1), sParam2, 64);
		uParam0->f_13[num /*12*/].f_9 = iParam3;
		uParam0->f_13[num /*12*/].f_10 = iParam4;
	
		if (bParam5)
			func_687(&uParam0->f_13[num /*12*/], 2);
		else
			func_688(&uParam0->f_13[num /*12*/], 2);
	}

	return;
}

struct<8> func_493(var uParam0) // Position - 0xFF7B Hash - 0xDB13DC73 ^0xDB13DC73
{
	return uParam0->f_454;
}

struct<8> func_494() // Position - 0xFF8B Hash - 0x964AA7CC ^0xE1895A8
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MultiStart", 64);
	return unk;
}

BOOL func_495(var uParam0, char* sParam1) // Position - 0xFFA0 Hash - 0xA68E0030 ^0xA87ABB5F
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

BOOL func_496(var uParam0, char* sParam1) // Position - 0xFFF1 Hash - 0xA33B6CAB ^0x1E3C5A6D
{
	var string2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	string2 = { func_317(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &string2);
}

BOOL func_497(var uParam0, int iParam1) // Position - 0x1001A Hash - 0x718DD1EF ^0x5F4D390E
{
	return uParam0->f_8 && iParam1 != false;
}

void func_498(var uParam0, int iParam1) // Position - 0x1002B Hash - 0x53A96DDB ^0x69C93C85
{
	uParam0->f_8 = uParam0->f_8 || iParam1;
	return;
}

void func_499(var uParam0, const char* sParam1) // Position - 0x1003E Hash - 0x8E45B2D4 ^0xCB400FD7
{
	int num;

	if (func_497(uParam0, 8192))
		return;

	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		num = MISC::_0x94E8CA3DEE952789(sParam1, "@");
	
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
			TEXT_LABEL_COPY(&(uParam0->f_440), { func_689("cutscene@", MISC::_0x5B4A8121A47D844D(num - 1), true, 63) }, 4);
	
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		TEXT_LABEL_COPY(&(uParam0->f_440), { func_689("cutscene@", sParam1, true, 63) }, 4);
	}

	func_498(uParam0, 8192);
	return;
}

Vector3 func_500(var uParam0) // Position - 0x100BE Hash - 0xD2D3D44D ^0x694345D8
{
	return uParam0->f_5;
}

Vector3 func_501(var uParam0) // Position - 0x100CC Hash - 0xC8CA6991 ^0x9DE3152C
{
	var unk;
	var position;
	var rotation;
	var matrix;

	TEXT_LABEL_COPY(&unk, { func_690(uParam0) }, 8);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_519(Global_35), &matrix, false, 0, 2))
			position = { matrix };
		else
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &position, &rotation, 2);
	
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return position;
	}

	return 0f, 0f, 0f;
}

void func_502(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x10156 Hash - 0x2559B2A1 ^0x79D637E0
{
	if (_IS_NULL_VECTOR(uParam1))
		return;

	uParam0->f_5 = { uParam1 };
	return;
}

float func_503(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x10176 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_504(var uParam0) // Position - 0x1019E Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_435;
}

void func_505() // Position - 0x101AB Hash - 0xFA72027F ^0xFA72027F
{
	int num;

	Global_1946054.f_858 = Global_1946054.f_858 - 1;

	if (Global_1946054.f_858 <= 0)
	{
		num = 35;
		func_691(num);
	}

	return;
}

void func_506(var uParam0) // Position - 0x101DA Hash - 0x56A63D83 ^0x32CB1163
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

void func_507(var uParam0) // Position - 0x10275 Hash - 0x8073496 ^0x6EC7F710
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_497(uParam0, 16))
		{
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_692(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, false);
		}
	}

	if (func_497(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_508(uParam0, 8, true);
	}

	uParam0->f_4 = 0;
	func_508(uParam0, 16, true);
	return;
}

void func_508(var uParam0, int iParam1, BOOL bParam2) // Position - 0x102DC Hash - 0x4C22909C ^0xA24D6B06
{
	uParam0->f_8 = uParam0->f_8 - uParam0->f_8 && iParam1;

	if (iParam1 == 512 && bParam2 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_444);

	return;
}

float func_509(var uParam0) // Position - 0x10329 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_434;
}

struct<8> func_510(var uParam0) // Position - 0x10336 Hash - 0xDB13DC73 ^0xDB13DC73
{
	return uParam0->f_446;
}

void func_511(var uParam0) // Position - 0x10346 Hash - 0xA1CFA37E ^0xA1CFA37E
{
	var unk;

	unk = { func_693() };
	func_318(uParam0, &unk);
	return;
}

void func_512(var uParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x1035F Hash - 0x444CF639 ^0xB97B3688
{
	if (func_497(uParam0, 16))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_591(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_694());
		func_498(uParam0, 8);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_695(uParam0, uParam0->f_4, false, true);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_498(uParam0, 16);
	}

	return;
}

void func_513(var uParam0) // Position - 0x103FF Hash - 0xC673333B ^0xFC27ADE6
{
	if (!func_497(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		func_696(uParam0);
		func_697(uParam0, false);
	
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
	
		func_498(uParam0, 32768);
	}

	return;
}

BOOL func_514() // Position - 0x10460 Hash - 0xAE743BBD ^0xB1C5A13D
{
	return Global_1946054.f_1497 != Global_1946054.f_2163.f_1;
}

void func_515(int iParam0) // Position - 0x10479 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_698(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_691(num);
	return;
}

BOOL func_516(int iParam0, int iParam1) // Position - 0x104BD Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_517() // Position - 0x104CC Hash - 0xF2FB1A38 ^0xF2FB1A38
{
	if (func_699(Global_43801))
		func_700(&Global_43801, false, false);

	return;
}

BOOL func_518(var uParam0, Ped pedParam1, int iParam2) // Position - 0x104E7 Hash - 0xC6E5AF5F ^0x4744F9B8
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1 && func_701(&uParam0->f_13[i /*12*/], iParam2))
			return true;
	}

	return false;
}

char* func_519(Ped pedParam0) // Position - 0x10539 Hash - 0xA235395 ^0x18EA51AD
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
	return func_702(entityModel);
}

BOOL func_520(int iParam0) // Position - 0x10587 Hash - 0x531420D5 ^0x3A11B780
{
	int messageState;

	if (func_703(iParam0))
	{
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return messageState == 4 || messageState == 0 || messageState == 3 || messageState == 5 || messageState == 2;
	}

	return false;
}

BOOL func_521(int iParam0, BOOL bParam1) // Position - 0x105D0 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_699(iParam0))
		return false;

	return !func_704(iParam0, 4);
}

BOOL func_522(BOOL bParam0, BOOL bParam1) // Position - 0x105F5 Hash - 0xDB63BA21 ^0xEF8B5D3C
{
	if (!func_699(Global_43801))
	{
		Global_43801 = func_705("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("LONG_TIMED_EVENT"), false);
		Global_1945188[Global_43801 /*18*/].f_16 = Global_23[3];
		func_706(Global_43801, false, true);
		func_707(Global_43801, 6, true);
	
		if (bParam1)
			func_707(Global_43801, 14, true);
	}
	else
	{
		if (!func_521(Global_43801, false))
			func_708(Global_43801, true, true);
	
		if (func_709(Global_43801, true) != 0f && bParam0)
			func_706(Global_43801, true, true);
		else
			func_706(Global_43801, false, true);
	
		return func_710(Global_43801, true);
	}

	return false;
}

BOOL func_523(var uParam0, Ped pedParam1, const char* sParam2, Hash hParam3, BOOL bParam4, BOOL bParam5) // Position - 0x106B3 Hash - 0x3D537E86 ^0x3D537E86
{
	return func_711(uParam0, pedParam1, sParam2, hParam3, bParam4, bParam5);
}

void func_524(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x106CB Hash - 0xC61CF035 ^0xF8646415
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

char* func_525(int iParam0) // Position - 0x1077F Hash - 0xAA03543E ^0xCC8CC8C7
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
	
		case 1:
			return "JOHN";
	
		case 2:
			return "JavierEscuella";
	
		case 3:
			return "BILLWILLIAMSON";
	
		case 4:
			return "UNCLE";
	
		case 5:
			return "HOSEA";
	
		case 6:
			return "MICAHBELL";
	
		case 7:
			return "CharlesSmith";
	
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
			return "AbigailRoberts";
	
		case 14:
			return "JACK";
	
		case 15:
			return "MARYBETH";
	
		case 16:
			return "MOLLY";
	
		case 17:
			return "MrPearson";
	
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
			return "EAGLE_FLIES";
	
		default:
		
	}

	return "Companion unknown";
}

void func_526(var uParam0) // Position - 0x108F0 Hash - 0x1CF19DA6 ^0xC130B67
{
	if (func_674(uParam0->f_1, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_676(uParam0->f_1)))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_676(uParam0->f_1), false);
			PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 234, true);
			PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 168, true);
		}
	
		func_712(uParam0->f_1, false, true, false, false);
		PERSCHAR::_0x6759BEE6762E140B(func_283(uParam0->f_1));
	}

	return;
}

BOOL func_527() // Position - 0x10957 Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_528(int iParam0) // Position - 0x109AA Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_529(Hash hParam0) // Position - 0x109C0 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

Ped func_530(Ped pedParam0) // Position - 0x109CC Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_531(Ped pedParam0) // Position - 0x109D6 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_532(Ped pedParam0) // Position - 0x10A08 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

int func_533(eStackSize essParam0) // Position - 0x10A4A Hash - 0x43E7FC98 ^0x22D1E5E4
{
	if (!func_124(essParam0))
		return 0;

	if (func_125(essParam0))
		return -1;

	return Global_23118[essParam0 /*11*/].f_3;
}

int func_534(Hash hParam0) // Position - 0x10A79 Hash - 0x308FE976 ^0xD461FEB6
{
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	float value7;
	int num;

	if (!func_355(hParam0))
		return 0;

	func_713(hParam0, &value, &value2, &value3, &value4, &value5, &value6);
	value7 = (BUILTIN::TO_FLOAT(value) / 60f) + BUILTIN::TO_FLOAT(value2) + (BUILTIN::TO_FLOAT(value3) * 60f) + (BUILTIN::TO_FLOAT(value4) * 24f * 60f) + (BUILTIN::TO_FLOAT(value5) * 30.4375f * 24f * 60f) + (BUILTIN::TO_FLOAT(value6) * 365.25f * 24f * 60f);
	num = BUILTIN::ROUND(value7);
	return num;
}

int func_535(Hash hParam0) // Position - 0x10B12 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 0) & 63;
}

int func_536(Hash hParam0) // Position - 0x10B24 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_537(Hash hParam0) // Position - 0x10B36 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_538(Hash hParam0) // Position - 0x10B49 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(hParam0, 26) & 31 * MISC::IS_BIT_SET(hParam0, 31) ? -1 : 1) + 1898;
}

int func_539(Hash hParam0) // Position - 0x10B6E Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 22) & 15;
}

int func_540(Hash hParam0) // Position - 0x10B81 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 17) & 31;
}

int func_541(int iParam0, int iParam1) // Position - 0x10B94 Hash - 0x893AC59E ^0x893AC59E
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

BOOL func_542(eStackSize essParam0) // Position - 0x10C2E Hash - 0xAFA6364 ^0xAFA6364
{
	if (!func_124(essParam0))
		return 0;

	switch (essParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return 1;
	}

	return 0;
}

Hash func_543(eStackSize essParam0) // Position - 0x10C9C Hash - 0xB8EC44B7 ^0x6E73F165
{
	switch (essParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_watsonscabin");
	
		case 30:
			return joaat("region_blu_canebreak_manor");
	
		case 31:
			return joaat("region_blu_copperhead");
	
		case 32:
			return joaat("region_blu_sisika");
	
		case 33:
			return joaat("region_cml_bacchusbridge");
	
		case 34:
			return joaat("region_cml_dino_lady");
	
		case 35:
			return joaat("region_cml_oldfortwallace");
	
		case 36:
			return joaat("region_cml_sixpointcabin");
	
		case 37:
			return joaat("region_grt_beechers");
	
		case 38:
			return joaat("region_grt_blackwater");
	
		case 39:
			return joaat("region_grt_quakers_cove");
	
		case 40:
			return joaat("region_grz_adlerranch");
	
		case 41:
			return joaat("region_grz_dead_rival");
	
		case 42:
			return joaat("region_grz_chezporter");
	
		case 43:
			return joaat("region_grz_colter");
	
		case 44:
			return joaat("region_grz_frozen_explorer");
	
		case 45:
			return joaat("region_grz_millesani_claim");
	
		case 46:
			return joaat("region_grz_mountain_man");
	
		case 47:
			return joaat("region_grz_starving_children");
	
		case 48:
			return joaat("region_grz_tempest_rim");
	
		case 49:
			return joaat("region_grz_wintermining_town");
	
		case 50:
			return joaat("region_grz_calumetravine");
	
		case 51:
			return joaat("region_gre_civil_war_bride");
	
		case 52:
			return joaat("region_grz_cohutta");
	
		case 53:
			return joaat("region_grz_gunfight");
	
		case 54:
			return joaat("region_grz_theloft");
	
		case 55:
			return joaat("region_gre_veteran");
	
		case 56:
			return joaat("region_grz_wapiti");
	
		case 57:
			return joaat("region_gua_aguasdulces");
	
		case 58:
			return joaat("region_gua_camp");
	
		case 59:
			return joaat("region_gua_cincotorres");
	
		case 60:
			return joaat("region_gua_lacapilla");
	
		case 61:
			return joaat("region_gua_manicato");
	
		case 62:
			return joaat("region_hrt_abandoned_mill");
	
		case 63:
			return joaat("region_roa_beechers_c");
	
		case 64:
			return joaat("region_hrt_carmodydell");
	
		case 65:
			return joaat("region_hrt_cornwallkerosene");
	
		case 66:
			return joaat("region_hrt_crop_farm");
	
		case 67:
			return joaat("region_hrt_cumberlandfalls");
	
		case 68:
			return joaat("region_hrt_downsranch");
	
		case 69:
			return joaat("region_hrt_emeraldranch");
	
		case 70:
			return joaat("region_hrt_grangers_hoggery");
	
		case 71:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 72:
			return joaat("region_hrt_larnedsod");
	
		case 73:
			return joaat("region_hrt_loony_cult");
	
		case 74:
			return joaat("region_hrt_luckyscabin");
	
		case 75:
			return joaat("region_hrt_swansons_station");
	
		case 76:
			return joaat("region_hrt_valentine");
	
		case 77:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 78:
			return joaat("region_roa_annesburg");
	
		case 79:
			return joaat("region_roa_beaverhollow");
	
		case 80:
			return joaat("region_roa_black_balsam_rise");
	
		case 81:
			return joaat("region_roa_brandywine_drop");
	
		case 82:
			return joaat("region_roa_butchercreek");
	
		case 83:
			return joaat("region_roa_doverhill");
	
		case 84:
			return joaat("region_roa_happy_family");
	
		case 85:
			return joaat("region_roa_isolationist");
	
		case 86:
			return joaat("region_roa_macleanshouse");
	
		case 87:
			return joaat("region_roa_mossy_flats");
	
		case 88:
			return joaat("region_roa_roanoke_valley");
	
		case 89:
			return joaat("region_roa_rockyseven");
	
		case 90:
			return joaat("region_roa_trapper");
	
		case 91:
			return joaat("region_roa_vanhornmansion");
	
		case 92:
			return joaat("region_roa_vanhornpost");
	
		case 93:
			return joaat("region_scm_braithwaitemanor");
	
		case 94:
			return joaat("region_scm_bulgerglade");
	
		case 95:
			return joaat("region_scm_caligahall");
	
		case 96:
			return joaat("region_scm_catfishjacksons");
	
		case 97:
			return joaat("region_scm_clemenscove");
	
		case 98:
			return joaat("region_scm_clemenspoint");
	
		case 99:
			return joaat("region_scm_compsons_stead");
	
		case 100:
			return joaat("region_scm_dairy_farm");
	
		case 101:
			return joaat("region_scm_horse_shop");
	
		case 102:
			return joaat("region_scm_lonniesshack");
	
		case 103:
			return joaat("region_scm_love_triangle");
	
		case 104:
			return joaat("region_scm_radleys_pasture");
	
		case 105:
			return joaat("region_scm_rhodes");
	
		case 106:
			return joaat("region_scm_slave_pen");
	
		case 107:
			return joaat("region_tal_aurora_basin");
	
		case 108:
			return joaat("region_tal_dead_settler");
	
		case 109:
			return joaat("region_tal_cochinay");
	
		case 110:
			return joaat("region_tal_manzanitapost");
	
		case 111:
			return joaat("region_tal_pacificunionrr");
	
		case 112:
			return joaat("region_tal_tannersreach");
	
		case 113:
			return joaat("region_tal_trapper");
	
		case 114:
			return joaat("region_gap_gaptooth_breach");
	
		case 115:
			return joaat("region_gap_tumbleweed");
	
		case 116:
			return joaat("region_gap_rathskeller_fork");
	
		case 117:
			return joaat("region_rio_benedict_point");
	
		case 118:
			return joaat("region_rio_fort_mercer");
	
		case 119:
			return joaat("region_rio_plain_view");
	
		case 120:
			return joaat("region_cho_armadillo");
	
		case 121:
			return joaat("region_cho_coots_chapel");
	
		case 122:
			return joaat("region_cho_don_julio_house");
	
		case 123:
			return joaat("region_cho_rileys_charge");
	
		case 124:
			return joaat("region_cho_ridgewood_farm");
	
		case 125:
			return joaat("region_cho_twin_rocks");
	
		case 126:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 127:
			return joaat("region_hen_thieves_landing");
	
		case MICRO:
			return joaat("region_centralunionrr");
	
		case 129:
			return joaat("region_gap_solomons_folly");
	
		default:
		
	}

	return 0;
}

void func_544(Hash hParam0) // Position - 0x113C8 Hash - 0x79D67CE3 ^0x8A8AA09A
{
	Hash styleHash;

	if (func_715(hParam0) == 57)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else
	{
		styleHash = joaat("BLIP_STYLE_WANTED_REGION");
	
		if (func_716(hParam0) == 4 || func_716(hParam0) == 12 || func_127(func_716(hParam0)) == 4 || func_667(func_716(hParam0), 8) && func_716(hParam0) == 2 || func_716(hParam0) == 0 || func_716(hParam0) == 10)
			styleHash = joaat("BLIP_STYLE_REGION_LOCKDOWN");
	
		MAP::_MAP_ENABLE_REGION_BLIP(hParam0, styleHash);
	}

	return;
}

void func_545(Hash hParam0) // Position - 0x11486 Hash - 0x414BF67D ^0x2E776DA
{
	if (func_715(hParam0) == 57)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-1145496915);
		MAP::_MAP_DISABLE_REGION_BLIP(-1043953850);
		MAP::_MAP_DISABLE_REGION_BLIP(-1783502982);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(hParam0);
	}

	return;
}

float func_546(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x114DC Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x11524 Hash - 0xA17D549C ^0x35ECCB77
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@jailcells@valentine";
	
		case 1:
			return "script@proc@jailcells@valentine_john";
	
		case 2:
			return "script@proc@jailcells@rhodes";
	
		case 3:
			return "script@proc@jailcells@rhodes_john";
	
		case 4:
			return "script@proc@jailcells@annesburg";
	
		case 5:
			return "script@proc@jailcells@annesburg_john";
	
		case 6:
			return "script@proc@jailcells@blackwater_john";
	
		case 7:
			return "script@proc@jailcells@saintdenis";
	
		case 8:
			return "script@proc@jailcells@saintdenis_john";
	
		case 9:
			return "script@proc@jailcells@strawberry";
	
		case 10:
			return "script@proc@jailcells@strawberry_john";
	
		case 11:
			return "script@proc@jailcells@tumbleweed_john";
	
		default:
		
	}

	return "FAIL";
}

BOOL func_548(var uParam0, char* sParam1, char* sParam2) // Position - 0x115D4 Hash - 0xEC65AA67 ^0x1D671A54
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		return false;

	return true;
}

BOOL func_549(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1160E Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_566(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

BOOL func_550(eStackSize essParam0) // Position - 0x11638 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

void func_551(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x11657 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_566(essParam0))
			return;

	func_717(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_552(eStackSize essParam0, BOOL bParam1) // Position - 0x11691 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_566(essParam0))
		return;

	if (bParam1)
		if (func_718(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_553(essParam0, 1, false);

	func_553(essParam0, 16, bParam1);
	return;
}

void func_553(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x116D3 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_566(essParam0))
		return;

	func_719(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_554(eStackSize essParam0) // Position - 0x116FB Hash - 0x7895582D ^0x7895582D
{
	func_553(essParam0, 8, false);
	return;
}

void func_555(eStackSize essParam0) // Position - 0x1170C Hash - 0x8577BCFD ^0x8577BCFD
{
	func_551(essParam0, 36, true);
	return;
}

void func_556(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1171D Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_566(essParam0))
			return;

	func_717(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

PersChar func_557(eStackSize essParam0, BOOL bParam1) // Position - 0x11757 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_550(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_720(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_558(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x11796 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_566(essParam0))
			return false;

	func_717(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_559(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x117D1 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_550(essParam0))
	{
		ped = func_721(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_722(essParam0);
		}
	}

	if (func_558(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_721(essParam0), 137, true);

	return;
}

void func_560(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x11823 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_566(essParam0))
		return;

	if (bParam1)
	{
		func_556(essParam0, 50, true);
		func_556(essParam0, 48, true);
		func_556(essParam0, 49, true);
		func_556(essParam0, 51, true);
		func_556(essParam0, 52, true);
		func_556(essParam0, 54, true);
		func_556(essParam0, 55, true);
	}
	else
	{
		func_551(essParam0, 50, true);
		func_551(essParam0, 48, true);
		func_551(essParam0, 49, true);
		func_551(essParam0, 51, true);
	
		if (bParam3)
			func_551(essParam0, 54, true);
		else
			func_556(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_551(essParam0, 52, true);
		
			if (bParam3)
				func_551(essParam0, 55, true);
		}
		else
		{
			func_556(essParam0, 52, true);
		
			if (!bParam3)
				func_556(essParam0, 55, true);
		}
	}

	return;
}

void func_561(eStackSize essParam0, BOOL bParam1) // Position - 0x118F5 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_566(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_721(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_721(essParam0), 204, false);

	return;
}

void func_562(var uParam0) // Position - 0x1192C Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_563(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x11942 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_550(essParam0))
		return;

	if (func_371(essParam0))
	{
		if (!func_671(essParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_558(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_557(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_721(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_723(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_551(essParam0, 2, true);
	}
	else
	{
		func_724(essParam0);
		func_551(essParam0, 1, true);
	}

	return;
}

void func_564(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11A50 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_550(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_565(eStackSize essParam0) // Position - 0x11A8C Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_550(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

BOOL func_566(eStackSize essParam0) // Position - 0x11ACC Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

BOOL func_567(eStackSize essParam0) // Position - 0x11AD8 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_566(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_568(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x11B00 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_566(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_569(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x11B65 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_566(essParam0))
		return 0;

	mount = func_565(essParam0);

	if (func_235(mount, 0))
	{
		if (func_235(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_373(essParam0) || func_567(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_725(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_726(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_727(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_728(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_728(essParam0, false));
					func_729(essParam0);
				}
			}
			else
			{
				if (func_549(essParam0, 32768, true))
				{
					persChar = func_728(essParam0, false);
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
		if (func_235(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_549(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_727(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_728(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_728(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_727(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_730(essParam0, 0);
	return 1;
}

int func_570(int iParam0) // Position - 0x11D16 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

void func_571(int iParam0, int iParam1) // Position - 0x11D2F Hash - 0x20A81385 ^0xDDACAB07
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 - Global_1900383[iParam0 /*45*/].f_24 && iParam1;
	return;
}

void func_572() // Position - 0x11D73 Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_601(0))
		func_731(0);

	if (func_601(1))
		func_731(1);

	if (func_601(5))
		func_731(5);

	if (func_601(6))
		func_732(6);

	return;
}

void func_573(int iParam0, var uParam1) // Position - 0x11DAF Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_574() // Position - 0x11DCA Hash - 0xD5B66211 ^0x9B76C225
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

int func_575(eStackSize essParam0) // Position - 0x11E2F Hash - 0x6761E6A0 ^0x6761E6A0
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

void func_576(int iParam0, var uParam1, var uParam2) // Position - 0x12244 Hash - 0xD64E984D ^0x9D3A2521
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	num.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &num, 3, 3);
	return;
}

int func_577(int iParam0) // Position - 0x12265 Hash - 0xD83A1109 ^0x154A194E
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
	func_450(iParam0, Global_1898164.f_162);
	return 1;
}

int func_578() // Position - 0x122D4 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_579(BOOL bParam0, var uParam1, var uParam2) // Position - 0x122E4 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_580(int iParam0, BOOL bParam1) // Position - 0x122FB Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_733(bParam1);

	return;
}

void func_581(Hash hParam0) // Position - 0x12316 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_582(int iParam0) // Position - 0x12329 Hash - 0x8FB6A40C ^0xEDC05AAC
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

BOOL func_583(var uParam0) // Position - 0x1244A Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_734(23, &unk))
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

BOOL func_584(int iParam0, var uParam1, var uParam2) // Position - 0x12492 Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_734(23, &unk))
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

Hash func_585(Hash hParam0) // Position - 0x12512 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_586(Hash hParam0) // Position - 0x1251C Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_425(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

int func_587() // Position - 0x12547 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_390();

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

void func_588(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x12596 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_589(int iParam0) // Position - 0x125C7 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_590(int iParam0, var uParam1, var uParam2) // Position - 0x125E6 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_589(iParam0))
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

BOOL func_591(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x127B5 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_592(int iParam0) // Position - 0x127DE Hash - 0x49BF3E77 ^0x5BF5F475
{
	int i;
	int j;
	var unk;

	if (Global_1946054.f_2535.f_1 <= 0)
		return false;

	if (iParam0 == 0)
	{
		Global_1946054.f_2535.f_2 = 0;
		Global_1946054.f_2535.f_1 = 0;
	
		for (i = 0; i < 5; i = i + 1)
		{
			Global_1946054.f_2535.f_43[i /*2*/] = { unk };
		}
	
		for (j = 0; j < 39; j = j + 1)
		{
			Global_1946054.f_2535.f_3[j] = false;
		}
	
		return true;
	}

	i = func_735(iParam0);

	if (i == -1)
		return false;

	Global_1946054.f_2535.f_2 = Global_1946054.f_2535.f_2 - Global_1946054.f_2535.f_2 && Global_1946054.f_2535.f_43[i /*2*/].f_1;

	for (j = 0; j < 39; j = j + 1)
	{
		if (func_736(j, Global_1946054.f_2535.f_43[i /*2*/].f_1))
			func_737(j, Global_1946054.f_2535.f_43[i /*2*/].f_1);
	}

	Global_1946054.f_2535.f_1 = Global_1946054.f_2535.f_1 - 1;
	Global_1946054.f_2535.f_43[i /*2*/] = { Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] };
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/].f_1 = 0;
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] = 0;
	return true;
}

int func_593(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1293F Hash - 0x7FA78F78 ^0x7ADD4446
{
	if (iParam1 == 0)
		iParam1 = -1;

	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(pedParam0))
			func_639(14, iParam1, 0, 0, false);
		else
			func_639(14, iParam1, 1, pedParam0, false);
	
		return 1;
	}

	!func_738(false);
	func_641(&(Global_1946054.f_1497), pedParam0, true, iParam1, true, bParam3, true);
	return 1;
}

int func_594(int iParam0) // Position - 0x1299B Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_595(int iParam0) // Position - 0x129CE Hash - 0xB0910AA9 ^0xD61D2BCE
{
	Ped ped;
	Hash entityModel;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_601(iParam0))
		return;

	ped = func_600(iParam0);
	func_739(iParam0);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);

	if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
		if (!func_740(entityModel))
			PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	PED::DELETE_PED(&ped);
	func_741(iParam0, 0);
	func_381(iParam0);
	return;
}

void func_596(int iParam0) // Position - 0x12A52 Hash - 0x7F6EE38F ^0xF5CD2369
{
	var unk;
	int i;
	int j;

	iParam0 = func_570(iParam0);

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
	func_742(&unk);
	func_743(iParam0, unk);
	func_744(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_745(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_746(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_747(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_748(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_749(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_750(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_751(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_752(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
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

void func_597(int iParam0) // Position - 0x12DA5 Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_598(int iParam0) // Position - 0x12DB8 Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

int func_599(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x12DCD Hash - 0x56F0811C ^0x278FB5A
{
	return func_753(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Ped func_600(int iParam0) // Position - 0x12DE3 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_601(int iParam0) // Position - 0x12E0F Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_570(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_602(int iParam0) // Position - 0x12E47 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_601(iParam0))
		return false;

	ped = func_600(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

BOOL func_603(int iParam0) // Position - 0x12E9B Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_601(iParam0))
		return false;

	ped = func_600(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return true;

	return false;
}

void func_604(int iParam0) // Position - 0x12EF0 Hash - 0x2692E663 ^0xF0DB5F3E
{
	Ped ped;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_601(iParam0))
		return;

	ped = func_600(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
	return;
}

void func_605(int iParam0, int iParam1) // Position - 0x12F3B Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	Ped horse2;
	BOOL flag2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_732(iParam0);
	func_732(iParam0);
	func_754(iParam0, iParam1);
	func_755(iParam0, iParam1);
	func_756(iParam0, iParam1);
	horse = func_600(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		if (iParam0 == 0 || iParam0 == 1)
			func_757(horse);
	
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

	horse2 = func_600(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
	{
		if (iParam1 == 0 || iParam1 == 1)
			func_757(horse2);
	
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

	func_572();
	return;
}

BOOL func_606() // Position - 0x1305D Hash - 0x57592B8C ^0xB4B7573B
{
	Object* p_object;

	p_object = func_758();

	if (ENTITY::DOES_ENTITY_EXIST(p_object))
		return true;

	return false;
}

void func_607() // Position - 0x13079 Hash - 0x9A84CB87 ^0x788CD227
{
	Object* p_object;

	p_object = func_758();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, true);

	OBJECT::DELETE_OBJECT(&p_object);
	func_759(0);
	return;
}

void func_608(var uParam0, var uParam1, var uParam2) // Position - 0x130B1 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

Ped func_609(int iParam0) // Position - 0x130CA Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_610(int iParam0) // Position - 0x130FD Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_611(int iParam0) // Position - 0x13130 Hash - 0x728A4C05 ^0x728A4C05
{
	var unk;
	var unk2;
	var unk3;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_760(&unk, &unk2, &unk3);
	func_761(iParam0, unk);
	func_762(iParam0, unk2);
	func_763(iParam0, unk3);
	func_764(iParam0, 1);
	func_765(iParam0, 1);
	return;
}

void func_612(int iParam0) // Position - 0x13183 Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_766(iParam0, 1);
	return;
}

void func_613(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x131AC Hash - 0xFEF7EAB ^0x64576AA5
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_19 = { uParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
	return;
}

BOOL func_614(int iParam0) // Position - 0x131EA Hash - 0xBDE1A61 ^0xBDE1A61
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return func_767(iParam0, 1);
}

struct<2> func_615(int iParam0) // Position - 0x13215 Hash - 0xC0CC9820 ^0xC0CC9820
{
	var unk;
	var unk3;
	var unk4;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	!func_768(iParam0, &unk3);
	!func_769(iParam0, &unk4);
	unk = unk3;
	unk.f_1 = unk4;
	return unk;
}

struct<6> func_616() // Position - 0x13265 Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_770(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_770(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_770(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_770(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_770(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_770(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

void func_617(Ped pedParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x132E7 Hash - 0x50380B5F ^0xA5E53457
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return;

	func_771(pedParam0);
	func_772(pedParam0, uParam1);
	func_773(pedParam0);
	func_774(pedParam0, uParam2);

	if (hParam3 != 0)
		func_775(pedParam0, hParam3, false);

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, true);
	return;
}

void func_618(int iParam0) // Position - 0x1335B Hash - 0x93699D3A ^0x887A14C1
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_619() // Position - 0x13396 Hash - 0x2C6DE8F6 ^0x14BC70A4
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1058888.f_4;
}

BOOL func_620(int iParam0) // Position - 0x133B2 Hash - 0xB1DD3D00 ^0xB1DD3D00
{
	return func_621(23, iParam0);
}

BOOL func_621(int iParam0, int iParam1) // Position - 0x133C2 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_776(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_777())
		return func_776(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_776(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

void func_622(eStackSize essParam0, int iParam1) // Position - 0x13436 Hash - 0x9642AD01 ^0xCF226DF6
{
	if (!func_124(essParam0))
		return;

	Global_1888801[essParam0 /*35*/].f_19 = iParam1;
	return;
}

void func_623(BOOL bParam0) // Position - 0x13457 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1894899 = Global_1894899 || bParam0;
	return;
}

void func_624(BOOL bParam0) // Position - 0x1346A Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1894899 = Global_1894899 - Global_1894899 && bParam0;
	return;
}

BOOL func_625() // Position - 0x13482 Hash - 0xC95201B4 ^0xF2B2F83F
{
	BOOL flag;
	eStackSize i;

	flag = false;

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_271(i, true))
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[i /*35*/].f_26)))
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[i /*35*/].f_26));
	
		if (Global_1888801[i /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[i /*35*/].f_9, false))
				if (func_106() == -1)
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[i /*35*/].f_9, 523);
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[i /*35*/].f_9))
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[i /*35*/].f_9);
			else if (func_271(i, 2))
				if (func_106() == -1)
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[i /*35*/].f_26), 523);
				else
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[i /*35*/].f_26)));
		
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[i /*35*/].f_9))
			{
				Global_1888801[i /*35*/].f_9 = 0;
				func_359(i, 11);
			}
			else
			{
				flag = true;
			}
		}
	}

	return !flag;
}

BOOL func_626(int iParam0, int iParam1) // Position - 0x1358E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_627(var uParam0) // Position - 0x1359D Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_778(uParam0, 0f);
	return;
}

BOOL func_628(var uParam0) // Position - 0x135AC Hash - 0x39705408 ^0x39705408
{
	return func_626(*uParam0, 2);
}

float func_629() // Position - 0x135BC Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_630(var uParam0) // Position - 0x135EE Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_779(i, 1);
	}

	return -358215195;
}

BOOL func_631() // Position - 0x13629 Hash - 0xFF29F962 ^0xFF29F962
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

BOOL func_632(Hash hParam0, int iParam1) // Position - 0x136CE Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_425(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_780(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_781("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_782(&unk, i, num, num2))
			{
			}
			else if (!func_783(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_784(num);
				return true;
			}
		}
	
		func_784(num);
	}

	return false;
}

int func_633(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13776 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_425(hParam0, 0))
		return 0;

	num = func_586(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_780(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_785(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_658(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_634() // Position - 0x137F8 Hash - 0x6AC5469B ^0xEA730EC
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
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_786(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_786(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

BOOL func_635(int iParam0) // Position - 0x138EE Hash - 0xB3F6CC6B ^0xF01CE5F7
{
	BOOL flag;

	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] = iParam0;
	flag = Global_1946054.f_2535.f_2 ^ -1;
	flag = flag && -flag;
	Global_1946054.f_2535.f_2 = Global_1946054.f_2535.f_2 || flag;
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/].f_1 = flag;
	Global_1946054.f_2535.f_1 = Global_1946054.f_2535.f_1 + 1;
	return flag;
}

BOOL func_636(int iParam0, var uParam1) // Position - 0x13964 Hash - 0xE33C2729 ^0xC836C608
{
	int num;

	if (iParam0 == -696754231)
	{
		num = 1742327865;
	
		if (func_423(func_787(num)) != 81053684)
			return false;
	}
	else
	{
		num = iParam0;
	}

	*uParam1 = func_422(num, 1);
	return true;
}

void func_637(int iParam0, BOOL bParam1) // Position - 0x139A5 Hash - 0xEC4C9015 ^0x310A8A97
{
	Global_1946054.f_2535.f_3[iParam0] = Global_1946054.f_2535.f_3[iParam0] || bParam1;
	return;
}

int func_638(int iParam0) // Position - 0x139CA Hash - 0xE69D9203 ^0x5667FA7E
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

void func_639(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x13B52 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_788(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_789(num);
	return;
}

BOOL func_640(BOOL bParam0) // Position - 0x13B84 Hash - 0x16801EA5 ^0xD81381B4
{
	int i;
	int num;
	int num2;

	if (Global_1946054.f_2535.f_1 <= 0)
		return false;

	for (i = 0; i < 39; i = i + 1)
	{
		num2 = func_779(i, 1);
	
		if (func_790(num2, 2))
		{
		}
		else if (Global_1946054.f_2535.f_3[i] == false)
		{
		}
		else
		{
			if (bParam0 && func_791(i) == -1)
			{
				func_792(i, 0);
				func_793(&Global_1946054.f_2589.f_2[Global_1946054.f_2589 - 1 /*2*/], 2, 6);
			}
		
			func_794(num2, 2, 6);
			num = num + 1;
		}
	}

	if (num > 0)
		return true;

	return false;
}

void func_641(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x13C26 Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_106() != -1;
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
		
			func_788(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_795(pedParam1, 29, isMp, true, 0);
			func_795(pedParam1, 31, isMp, true, 0);
			func_795(pedParam1, 30, isMp, true, 0);
			func_795(pedParam1, 22, isMp, true, 0);
			func_795(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_796(32768) && func_790(1108822547, 8) && func_797(10, iParam3))
		func_798(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_779(num, 1);
		
			if (func_790(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_797(num, iParam3))
				{
				}
				else if (func_790(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_790(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_795(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_794(num2, 1, 6);
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
								func_795(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_790(num2, 1))
								func_799(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_790(num2, 1))
						func_799(num2, 1, 6);
				
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

int func_642(int iParam0) // Position - 0x13F6F Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_443(iParam0);

	if (num < 0)
		return 0;

	return func_800(num);
}

int func_643(int iParam0, int iParam1) // Position - 0x13F8F Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_801(num2);
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

void func_644() // Position - 0x14101 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

void func_645(BOOL bParam0, eStackSize essParam1, int iParam2, int iParam3) // Position - 0x14124 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_444(bParam0);
	*essParam1 = func_445(bParam0);
	*iParam2 = func_446(bParam0);
	return;
}

void func_646(int iParam0, int iParam1) // Position - 0x14147 Hash - 0x676FADFF ^0x1734896
{
	var unk;

	unk = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { unk };
	return;
}

void func_647(int iParam0, BOOL bParam1) // Position - 0x14187 Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*iParam0 != -1)
	{
		func_652(*iParam0, -1);
		func_653(*iParam0, 0);
		func_654(*iParam0, 0);
	
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

BOOL func_648(int iParam0) // Position - 0x141DE Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

void func_649(int iParam0, Hash hParam1) // Position - 0x14207 Hash - 0x24A4BE93 ^0x70B16AB7
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], hParam1);

	return;
}

int func_650(int iParam0) // Position - 0x1423D Hash - 0xB26DA715 ^0xB26DA715
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

Hash func_651(int iParam0) // Position - 0x142C5 Hash - 0xB8EC44B7 ^0xFC24309D
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

void func_652(int iParam0, eStackSize essParam1) // Position - 0x143AD Hash - 0x3A863EAC ^0xECB3FAF8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = essParam1;
		return;
	}

	Global_42606[iParam0 /*4*/] = essParam1;
	return;
}

void func_653(int iParam0, int iParam1) // Position - 0x143DA Hash - 0x90093024 ^0xBB5CF78A
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_654(int iParam0, int iParam1) // Position - 0x1440B Hash - 0x90093024 ^0x830112D0
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

float func_655() // Position - 0x1443C Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_802())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_803(2);

	if (Global_1347477.f_119)
		return func_803(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_804();
	num3 = func_805();
	num4 = func_806();
	num5 = func_807();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_808());
	num8 = func_803(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_809(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_810(3, num9, num9 > 100f);
	return func_811(num8, -100f, 100f);
}

float func_656() // Position - 0x14565 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_802())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_803(1);

	if (Global_1347477.f_119)
		return func_803(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_804();
	num3 = func_805();
	num4 = func_806();
	num5 = func_807();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_808());
	num8 = func_803(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_809(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_810(2, num9, num9 > 100f);
	return func_811(num8, -100f, 100f);
}

float func_657() // Position - 0x1468E Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_802())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_803(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_812())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_813())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_803(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_804();
	num3 = func_805();
	num4 = func_806();
	num5 = func_807();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_808());
	num8 = func_803(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_809(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_810(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_803(0);

	return func_811(num8, -100f, 100f);
}

int func_658(BOOL bParam0) // Position - 0x14835 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_106() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_659(int iParam0) // Position - 0x14876 Hash - 0x497B15BA ^0x497B15BA
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

void func_660(int iParam0, int iParam1) // Position - 0x148C6 Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

void func_661(int iParam0, int iParam1) // Position - 0x148F3 Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

BOOL func_662(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14914 Hash - 0x9D8E22CB ^0x9D8E22CB
{
	if (!func_566(essParam0))
		return false;

	if (bParam1)
		return func_558(essParam0, 26, true);

	if (bParam2)
		if (!func_235(func_721(essParam0), 0))
			return false;

	if (!func_814(essParam0, true, false))
		return false;

	if (func_558(essParam0, 44, true))
		return false;

	return true;
}

Hash func_663(int iParam0) // Position - 0x14974 Hash - 0xD9CACD5C ^0xC1FF0F4A
{
	switch (iParam0)
	{
		case 0:
			return joaat("state_ambarino");
	
		case 1:
			return joaat("state_new_hanover");
	
		case 2:
			return joaat("state_lemoyne");
	
		case 3:
			return joaat("state_west_elizabeth");
	
		case 4:
			return joaat("state_new_austin");
	
		case 5:
			return joaat("state_guarma");
	
		default:
		
	}

	return 0;
}

BOOL func_664(eStackSize essParam0) // Position - 0x149D9 Hash - 0x6430C01F ^0x955EC0F3
{
	if (!func_124(essParam0))
		return false;

	return func_271(essParam0, 67108864);
}

void func_665(eStackSize essParam0) // Position - 0x149FA Hash - 0x23FB4E3F ^0x82E556CB
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_816(unk);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(str), joaat("BLIP_STYLE_WANTED_REGION"));
	return;
}

void func_666(eStackSize essParam0) // Position - 0x14A2E Hash - 0x9B0BA3D ^0x81129121
{
	var unk;
	const char* str;
	Hash hashKey;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_816(unk);
	hashKey = MISC::GET_HASH_KEY(str);

	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_WANTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(hashKey);

	return;
}

BOOL func_667(int iParam0, BOOL bParam1) // Position - 0x14A80 Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_97(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

Hash func_668(int iParam0) // Position - 0x14AC4 Hash - 0xB8EC44B7 ^0xCA15B31A
{
	switch (iParam0)
	{
		case 0:
			return joaat("district_bayou_nwa");
	
		case 1:
			return joaat("district_big_valley");
	
		case 2:
			return joaat("district_bluegill_marsh");
	
		case 3:
			return joaat("district_cumberland_forest");
	
		case 4:
			return joaat("district_great_plains");
	
		case 5:
			return joaat("district_grizzlies");
	
		case 6:
			return joaat("district_grizzlies_east");
	
		case 7:
			return joaat("district_grizzlies_west");
	
		case 8:
			return joaat("district_guama");
	
		case 9:
			return joaat("district_heartland");
	
		case 10:
			return joaat("district_roanoke_ridge");
	
		case 11:
			return joaat("district_scarlett_meadows");
	
		case 12:
			return joaat("district_tall_trees");
	
		case 13:
			return joaat("district_gaptooth_ridge");
	
		case 14:
			return joaat("district_rio_bravo");
	
		case 15:
			return joaat("district_cholla_springs");
	
		case 16:
			return joaat("district_hennigans_stead");
	
		default:
		
	}

	return 1776960747;
}

int func_669(Hash hParam0) // Position - 0x14BC7 Hash - 0xD38CDAEA ^0x766CC7B5
{
	int i;

	for (i = 5; i >= 1; i = i + -1)
	{
		if (hParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(i))
			return i;
	}

	return 0;
}

Hash func_670(int iParam0) // Position - 0x14BF2 Hash - 0x3A58C3FB ^0x62EF21F6
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(iParam0), 64);
	str = func_816(unk);
	return MISC::GET_HASH_KEY(str);
}

BOOL func_671(eStackSize essParam0) // Position - 0x14C15 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_550(essParam0))
		return false;

	if (!func_371(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

Ped func_672(eStackSize essParam0, BOOL bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24) // Position - 0x14C49 Hash - 0x79A2D2D9 ^0x5019CC83
{
	var unk;
	BOOL flag;
	int num;
	int i;

	if (!func_550(essParam0))
		return 0;

	unk = uParam3;
	unk.f_1 = uParam4;
	unk.f_2 = uParam5;

	if (Global_1572864.f_13 || Global_1572864.f_14 || Global_1572864.f_8 != 0 || Global_1391438.f_5 & 8 != 0)
		flag = true;

	switch (Global_1360165[essParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_558(essParam0, 2, true))
				func_556(essParam0, 2, true);
		
			if (func_549(essParam0, 16, true))
			{
				if (Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_551(essParam0, 29, true);
						return 0;
					}
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[essParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_372(essParam0, false, false, true, -1082130432, true, true, false, false, false, false);
					}
				
					return 0;
				}
				else if (func_235(Global_1360165[essParam0 /*1157*/], 0))
				{
					return Global_1360165[essParam0 /*1157*/];
				}
			}
		
			if (func_235(Global_1360165[essParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[essParam0 /*1157*/]))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(Global_1360165[essParam0 /*1157*/]))
					if (bParam1)
						func_818(essParam0, true, "Stealing, but companion is a ragdoll");
					else
						return 0;
			
				func_551(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_819(essParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_551(essParam0, 44, true);
				Global_1360165[essParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_819(essParam0, 1);
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
		
			if (!func_558(essParam0, 44, false))
				func_551(essParam0, 44, false);
		
			if (func_820(essParam0, unk, iParam13, false, true, bParam17, bParam20, -1, 1, false))
				func_819(essParam0, 2);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 171, true);
		
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
		
			func_556(essParam0, 18, true);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[essParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[essParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 130, false);
			func_560(essParam0, bParam9, true, false);
		
			if (bParam22)
				func_821(essParam0, false, false, true);
		
			func_556(essParam0, 33, true);
			func_556(essParam0, 34, true);
			func_556(essParam0, 29, true);
		
			if (!_IS_NULL_VECTOR(unk) && bParam7)
				func_819(essParam0, 3);
			else if (iParam13 != 0)
				func_819(essParam0, 4);
			else
				func_819(essParam0, 5);
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
						func_818(essParam0, true, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[essParam0 /*1157*/], true, true);
					}
				}
			
				num = 2;
			
				if (bParam10)
					num = num | 4;
			
				func_349(Global_1360165[essParam0 /*1157*/], unk, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[essParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[essParam0 /*1157*/], true))
					TASK::CLEAR_PED_TASKS(Global_1360165[essParam0 /*1157*/], true, false);
			
				return 0;
			}
		
			if (iParam13 != 0)
				func_819(essParam0, 4);
			else
				func_819(essParam0, 5);
			break;
	
		case 4:
			if (iParam13 != 0 || flag)
			{
				if (flag)
					if (iParam13 == 0)
						iParam13 = Global_40.f_4942[essParam0 /*60*/].f_4;
			
				if (func_822(essParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
					{
						func_823(essParam0, iParam13, false);
						func_824(essParam0, Global_1360165[essParam0 /*1157*/], iParam13, true);
					
						if (func_558(essParam0, 25, false))
							func_556(essParam0, 25, false);
					
						func_551(essParam0, 66, false);
						func_819(essParam0, 5);
						Global_1360165[essParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_819(essParam0, 5);
				}
			
				func_551(essParam0, 28, true);
			}
			else
			{
				func_819(essParam0, 5);
			}
			break;
	
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/]))
				func_819(essParam0, 6);
			break;
	
		case 6:
			if (func_235(Global_1360165[essParam0 /*1157*/], 0))
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
					func_825(essParam0);
			
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[essParam0 /*1157*/]);
					func_826(Global_1360165[essParam0 /*1157*/], 1);
				}
			}
		
			func_819(essParam0, 7);
			[[fallthrough]];
	
		case 7:
			func_560(essParam0, bParam9, bParam15, false);
			func_553(essParam0, 4, bParam11);
			func_555(essParam0);
		
			if (bParam20)
				func_827(Global_1360165[essParam0 /*1157*/]);
		
			func_828(essParam0, Global_1360165[essParam0 /*1157*/]);
		
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true))
				PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true);
		
			Global_40.f_4942[essParam0 /*60*/].f_4 = Global_40.f_4942[essParam0 /*60*/].f_3;
			func_819(essParam0, 0);
			func_829(essParam0, 16, true);
			func_556(essParam0, 44, true);
			Global_1360165[essParam0 /*1157*/].f_1156 = 0;
			Global_1360165[essParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[essParam0 /*1157*/];
	}

	return 0;
}

Player func_673(var uParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17) // Position - 0x152B8 Hash - 0x9338D9C0 ^0x2F425F02
{
	Player player;

	if (!func_566(essParam1))
		return 0;

	player = func_565(essParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(player) || !func_235(player, 0) || bParam3 && !func_567(essParam1))
	{
		if (bParam2)
		{
			if (func_726(essParam1, true) != 0)
			{
				player = func_830(essParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, bParam17);
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

	if (ENTITY::DOES_ENTITY_EXIST(player) && func_235(player, 0))
	{
		*uParam0 = 2;
		Global_1360165[essParam1 /*1157*/].f_70.f_2 = 0;
		func_831(essParam1, player);
		func_832(essParam1, bParam13, bParam14, true);
		return player;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}

	return 0;
}

BOOL func_674(int iParam0, BOOL bParam1) // Position - 0x1538F Hash - 0x956894C4 ^0x956894C4
{
	if (func_106() != -1)
		return false;

	if (!func_280(iParam0))
		return false;

	if (!func_833(iParam0) && bParam1)
		return false;

	return func_834(iParam0, 1);
}

Ped func_675(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x153CD Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_835(iParam0, true))
		return 0;

	if (func_282(func_281(iParam0)))
	{
		persChar = func_283(iParam0);
	
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

	if (bParam4 && !func_833(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_146(iParam0, true);
	func_836(iParam0);

	if (bParam3)
		func_146(iParam0, 16);

	!bParam2;
	return ped;
}

Ped func_676(int iParam0) // Position - 0x1548A Hash - 0xEEC501EA ^0xEEC501EA
{
	if (!func_280(iParam0))
		return 0;

	if (!func_834(iParam0, 2))
		return 0;

	if (func_282(func_281(iParam0)))
		return func_837(iParam0);

	return PED::_0xE76687023D8C8505(func_838(iParam0), 0);
}

int func_677(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, Hash hParam10, BOOL bParam11, BOOL bParam12, int iParam13, BOOL bParam14, BOOL bParam15) // Position - 0x154D0 Hash - 0x1CD7D100 ^0xAEA25770
{
	Volume volume;
	int num;

	if (iParam13 <= 0f)
		volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	else
		volume = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam13);

	num = func_839(uParam0, uParam1, iParam2, volume, bParam7, bParam8, bParam9, hParam10, bParam11, bParam12, bParam14, bParam15);
	func_215(volume);
	return num;
}

BOOL func_678(var uParam0, Entity eParam1) // Position - 0x1552E Hash - 0xA2DCAC7D ^0xAE668158
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	for (i = 0; i < uParam0->f_998; i = i + 1)
	{
		if (uParam0->f_782[i /*11*/].f_1 == eParam1)
			return true;
	}

	return false;
}

Ped func_679(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1556F Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_840(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

int func_680(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6) // Position - 0x155B1 Hash - 0x76785467 ^0x34019397
{
	Volume volume;
	int num;

	volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	num = func_841(uParam0, uParam1, volume, iParam2);
	func_215(volume);
	return num;
}

BOOL func_681(var uParam0, Entity eParam1) // Position - 0x155E2 Hash - 0xA2DCAC7D ^0xAE668158
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	for (i = 0; i < uParam0->f_996; i = i + 1)
	{
		if (uParam0->f_530[i /*10*/].f_1 == eParam1)
			return true;
	}

	return false;
}

const char* func_682(Ped pedParam0) // Position - 0x15623 Hash - 0xE06C1D20 ^0xE8DFA1B8
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return "";

	if (ENTITY::IS_ENTITY_A_PED(pedParam0))
		return func_519(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0));
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
		return func_842(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam0));
	else if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		return func_843(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam0));

	return "";
}

int func_683(var uParam0, Entity eParam1) // Position - 0x15688 Hash - 0xD8D08AD0 ^0x705BA6E9
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

Entity func_684(var uParam0, const char* sParam1) // Position - 0x156D6 Hash - 0x36449D70 ^0x8893C58B
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[i /*12*/].f_1), sParam1))
			return uParam0->f_13[i /*12*/];
	}

	return 0;
}

void func_685(var uParam0, Entity eParam1) // Position - 0x15721 Hash - 0x833023BF ^0x3D3CC7FB
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

int func_686(var uParam0) // Position - 0x15769 Hash - 0x977F3323 ^0x1DC224A5
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]))
			return i;
	}

	return -1;
}

void func_687(var uParam0, int iParam1) // Position - 0x1579A Hash - 0x53A96DDB ^0x5EF2061
{
	uParam0->f_11 = uParam0->f_11 || iParam1;
	return;
}

void func_688(var uParam0, int iParam1) // Position - 0x157AD Hash - 0xA4EAD31F ^0x1843FE5B
{
	uParam0->f_11 = uParam0->f_11 - uParam0->f_11 && iParam1;
	return;
}

struct<8> func_689(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0x157C5 Hash - 0xB13D7CEF ^0x4DD40A33
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

struct<4> func_690(var uParam0) // Position - 0x1587C Hash - 0xBD3347D6 ^0xBD3347D6
{
	return uParam0->f_440;
}

void func_691(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1588B Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_844(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_844(20))
				return;
		}
	}

	func_845(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_788(8);
	return;
}

void func_692(var uParam0) // Position - 0x1598F Hash - 0xA0536A87 ^0xE1A3FD9C
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);

	return;
}

struct<8> func_693() // Position - 0x159AB Hash - 0x964AA7CC ^0x5C4ED369
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NormalStart", 64);
	return unk;
}

char* func_694() // Position - 0x159C0 Hash - 0x306ACA3A ^0x7EBD4709
{
	return "unnamed";
}

void func_695(var uParam0, Volume volParam1, BOOL bParam2, BOOL bParam3) // Position - 0x159CC Hash - 0x7AEE4E7D ^0x4CE819C0
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

void func_696(var uParam0) // Position - 0x15A0B Hash - 0x44F320D ^0x91B8DCFF
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		return;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_701(&uParam0->f_13[i /*12*/], 2))
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[i /*12*/].f_1)))
				func_687(&uParam0->f_13[i /*12*/], 1);
	}

	return;
}

void func_697(var uParam0, BOOL bParam1) // Position - 0x15A94 Hash - 0x360C8D66 ^0x4FD9930
{
	int i;
	Ped pedIndexFromEntityIndex;

	for (i = 0; i < 35; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i /*12*/]) || func_701(&uParam0->f_13[i /*12*/], 2))
		{
			if (func_701(&uParam0->f_13[i /*12*/], 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[i /*12*/].f_1)))
			{
				func_846(uParam0, &(uParam0->f_13[i /*12*/].f_1), uParam0->f_13[i /*12*/], uParam0->f_13[i /*12*/].f_9);
			
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[i /*12*/]))
				{
					pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[i /*12*/]);
				
					if (pedIndexFromEntityIndex != Global_35 && !func_701(&uParam0->f_13[i /*12*/], 16))
						func_847(pedIndexFromEntityIndex);
				}
			}
		}
	}

	return;
}

BOOL func_698(int iParam0, int iParam1) // Position - 0x15B6A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_699(int iParam0) // Position - 0x15B79 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_700(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15BB8 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_699(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_848(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_849(num);
	*iParam0 = 0;
	return;
}

BOOL func_701(var uParam0, int iParam1) // Position - 0x15C0C Hash - 0x718DD1EF ^0x4872DFB3
{
	return uParam0->f_11 && iParam1 != false;
}

char* func_702(Hash hParam0) // Position - 0x15C1D Hash - 0xE6862179 ^0x9C0F2DEF
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

BOOL func_703(int iParam0) // Position - 0x167A4 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_704(int iParam0, int iParam1) // Position - 0x167B0 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

int func_705(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0x167D1 Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_704(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_850(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

void func_706(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16857 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_699(iParam0))
		return;

	num = func_848(iParam0);
	func_851(num, bParam1);
	return;
}

void func_707(int iParam0, int iParam1, BOOL bParam2) // Position - 0x16883 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_699(iParam0))
		return;

	num = func_848(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TYPE(Global_1945188[num /*18*/].f_3, iParam1);
	return;
}

void func_708(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x168CC Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_699(iParam0))
		return;

	num = func_848(iParam0);

	if (bParam1)
	{
		func_852(iParam0, 4);
		func_851(num, true);
		func_853(num, true);
	}
	else
	{
		func_854(iParam0, 4);
		func_853(num, false);
	}

	return;
}

float func_709(int iParam0, BOOL bParam1) // Position - 0x1691B Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_699(iParam0))
		return 0f;

	num = func_848(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_710(int iParam0, BOOL bParam1) // Position - 0x16973 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_699(iParam0))
		return false;

	num = func_848(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_711(var uParam0, Ped pedParam1, const char* sParam2, Hash hParam3, BOOL bParam4, BOOL bParam5) // Position - 0x169CB Hash - 0xFA6F6AA8 ^0x26D90E38
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (bParam4 && ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		sParam2 = func_682(pedParam1);

	if (hParam3 == 0)
		hParam3 = ENTITY::GET_ENTITY_MODEL(pedParam1);

	MISC::IS_STRING_NULL_OR_EMPTY(sParam2);

	if (!func_518(uParam0, pedParam1, 4))
	{
		if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, sParam2))
		{
			func_855(uParam0, pedParam1, 4);
			return 1;
		}
		else if (bParam5 && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_444, sParam2))
		{
			func_855(uParam0, pedParam1, 4);
			return 1;
		}
	}

	return 0;
}

void func_712(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16A6B Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_280(iParam0))
		return;

	if (!func_834(iParam0, true))
		return;

	if (!func_834(iParam0, 2))
		return;

	if (!bParam4 && !func_833(iParam0) && func_856(iParam0))
		return;

	func_213(iParam0, true);
	func_857(iParam0);

	if (func_282(func_281(iParam0)))
	{
		persChar = func_283(iParam0);
	
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
	
		func_213(iParam0, 16);
	}

	if (func_834(iParam0, 128) && !bParam3)
		func_858(iParam0, false);

	return;
}

void func_713(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x16B57 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_859(func_98(), hParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

var func_714(BOOL bParam0, var uParam1, var uParam2) // Position - 0x16B75 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_715(Hash hParam0) // Position - 0x16B8C Hash - 0xCD57912C ^0xCD57912C
{
	switch (hParam0)
	{
		case joaat("region_rio_fort_mercer"):
			return 118;
	
		case -2085163631:
			return 0;
	
		case joaat("region_bgv_hangingdog"):
			return 16;
	
		case joaat("region_grz_colter"):
			return 43;
	
		case joaat("region_tal_aurora_basin"):
			return 107;
	
		case joaat("region_grz_theloft"):
			return 54;
	
		case joaat("region_gap_solomons_folly"):
			return 129;
	
		case joaat("region_grz_tempest_rim"):
			return 48;
	
		case joaat("region_blu_copperhead"):
			return 31;
	
		case joaat("region_bay_lagras"):
			return 3;
	
		case joaat("region_gre_civil_war_bride"):
			return 51;
	
		case joaat("region_bgv_missing_husband"):
			return 18;
	
		case joaat("region_scm_love_triangle"):
			return 103;
	
		case joaat("region_scm_dairy_farm"):
			return 100;
	
		case joaat("region_gua_cincotorres"):
			return 59;
	
		case joaat("region_roa_mossy_flats"):
			return 87;
	
		case joaat("region_roa_butchercreek"):
			return 82;
	
		case joaat("region_bay_siltwaterstrand"):
			return 10;
	
		case joaat("region_hrt_grangers_hoggery"):
			return 70;
	
		case joaat("region_roa_brandywine_drop"):
			return 81;
	
		case joaat("region_scm_clemenspoint"):
			return 98;
	
		case joaat("region_cho_rileys_charge"):
			return 123;
	
		case joaat("region_grz_cohutta"):
			return 52;
	
		case joaat("region_tal_trapper"):
			return 113;
	
		case joaat("region_bay_shadybelle"):
			return 9;
	
		case joaat("region_roa_happy_family"):
			return 84;
	
		case joaat("region_hrt_larnedsod"):
			return 72;
	
		case joaat("region_cml_sixpointcabin"):
			return 36;
	
		case joaat("region_rio_benedict_point"):
			return 117;
	
		case joaat("region_bay_serial_killer"):
			return 7;
	
		case joaat("region_tal_cochinay"):
			return 109;
	
		case joaat("region_roa_macleanshouse"):
			return 86;
	
		case joaat("region_scm_slave_pen"):
			return 106;
	
		case joaat("region_grz_wapiti"):
			return 56;
	
		case joaat("region_bgv_pronghorn"):
			return 22;
	
		case joaat("region_bgv_riggs_station"):
			return 23;
	
		case joaat("region_bgv_shack"):
			return 24;
	
		case joaat("region_tal_dead_settler"):
			return 108;
	
		case joaat("region_grz_millesani_claim"):
			return 45;
	
		case joaat("region_roa_rockyseven"):
			return 89;
	
		case joaat("region_roa_doverhill"):
			return 83;
	
		case joaat("region_scm_caligahall"):
			return 95;
	
		case joaat("region_scm_rhodes"):
			return 105;
	
		case joaat("region_cho_coots_chapel"):
			return 121;
	
		case joaat("region_scm_bulgerglade"):
			return 94;
	
		case joaat("region_gre_veteran"):
			return 55;
	
		case joaat("region_roa_trapper"):
			return 90;
	
		case joaat("region_grz_gunfight"):
			return 53;
	
		case joaat("region_tal_manzanitapost"):
			return 110;
	
		case joaat("region_rio_plain_view"):
			return 119;
	
		case joaat("region_scm_radleys_pasture"):
			return 104;
	
		case joaat("region_scm_clemenscove"):
			return 97;
	
		case joaat("region_roa_roanoke_valley"):
			return 88;
	
		case joaat("region_bay_orange_plantation"):
			return 6;
	
		case joaat("region_hrt_crop_farm"):
			return 66;
	
		case joaat("region_bgv_watsonscabin"):
			return 29;
	
		case joaat("region_cho_ridgewood_farm"):
			return 124;
	
		case joaat("region_gua_camp"):
			return 58;
	
		case joaat("region_grt_beechers"):
			return 37;
	
		case joaat("region_cho_twin_rocks"):
			return 125;
	
		case joaat("region_gap_gaptooth_breach"):
			return 114;
	
		case joaat("region_grz_starving_children"):
			return 47;
	
		case joaat("region_scm_braithwaitemanor"):
			return 93;
	
		case joaat("region_scm_lonniesshack"):
			return 102;
	
		case joaat("region_bay_crawdadwillies"):
			return 0;
	
		case joaat("region_hrt_downsranch"):
			return 68;
	
		case joaat("region_hrt_valentine"):
			return 76;
	
		case joaat("region_bgv_appleseedtimber"):
			return 11;
	
		case joaat("region_roa_vanhornmansion"):
			return 91;
	
		case joaat("region_grt_quakers_cove"):
			return 39;
	
		case joaat("region_scm_compsons_stead"):
			return 99;
	
		case joaat("region_roa_annesburg"):
			return 78;
	
		case joaat("region_gap_tumbleweed"):
			return 115;
	
		case joaat("region_grz_mountain_man"):
			return 46;
	
		case joaat("region_grz_wintermining_town"):
			return 49;
	
		case joaat("region_cml_bacchusbridge"):
			return 33;
	
		case joaat("region_gua_aguasdulces"):
			return 57;
	
		case joaat("region_bgv_lonemulestead"):
			return 17;
	
		case joaat("region_bgv_fortriggs"):
			return 15;
	
		case joaat("region_bay_merkinswaller"):
			return 2;
	
		case joaat("region_cml_oldfortwallace"):
			return 35;
	
		case joaat("region_roa_black_balsam_rise"):
			return 80;
	
		case joaat("region_bgv_blackboneforest_trapper"):
			return 13;
	
		case joaat("region_roa_beechers_c"):
			return 63;
	
		case joaat("region_centralunionrr"):
			return 128;
	
		case joaat("region_hen_macfarlanes_ranch"):
			return 126;
	
		case joaat("region_bay_saint_denis"):
			return 5;
	
		case joaat("region_scm_horse_shop"):
			return 101;
	
		case joaat("region_blu_sisika"):
			return 32;
	
		case joaat("region_bgv_paintedsky"):
			return 21;
	
		case joaat("region_bgv_valley_view"):
			return 27;
	
		case joaat("region_hrt_loony_cult"):
			return 73;
	
		case joaat("region_grz_frozen_explorer"):
			return 44;
	
		case joaat("region_hen_thieves_landing"):
			return 127;
	
		case joaat("region_tal_pacificunionrr"):
			return 111;
	
		case joaat("region_hrt_abandoned_mill"):
			return 62;
	
		case joaat("region_bay_serendipity"):
			return 8;
	
		case joaat("region_bgv_dakotariver_trapper"):
			return 14;
	
		case joaat("region_roa_isolationist"):
			return 85;
	
		case joaat("region_grz_dead_rival"):
			return 41;
	
		case joaat("region_grz_calumetravine"):
			return 50;
	
		case joaat("region_cml_dino_lady"):
			return 34;
	
		case joaat("region_bgv_wallace_station"):
			return 28;
	
		case joaat("region_roa_beaverhollow"):
			return 79;
	
		case joaat("region_bgv_strawberry"):
			return 26;
	
		case joaat("region_grz_chezporter"):
			return 42;
	
		case joaat("region_blu_canebreak_manor"):
			return 30;
	
		case joaat("region_grz_adlerranch"):
			return 40;
	
		case joaat("region_scm_catfishjacksons"):
			return 96;
	
		case joaat("region_roa_vanhornpost"):
			return 92;
	
		case joaat("region_cho_armadillo"):
			return 120;
	
		case joaat("region_grt_blackwater"):
			return 38;
	
		case joaat("region_bgv_beryls_dream"):
			return 12;
	
		case joaat("region_bay_macombs_end"):
			return 1;
	
		case joaat("region_cho_don_julio_house"):
			return 122;
	
		case joaat("region_hrt_swansons_station"):
			return 75;
	
		case joaat("region_bgv_monto_rest"):
			return 19;
	
		case joaat("region_hrt_cumberlandfalls"):
			return 67;
	
		case joaat("region_hrt_carmodydell"):
			return 64;
	
		case joaat("region_gua_manicato"):
			return 61;
	
		case joaat("region_hrt_emeraldranch"):
			return 69;
	
		case joaat("region_bay_lakay"):
			return 4;
	
		case joaat("region_gua_lacapilla"):
			return 60;
	
		case joaat("region_bgv_owanjila_dam"):
			return 20;
	
		case joaat("region_hrt_cornwallkerosene"):
			return 65;
	
		case joaat("region_gap_rathskeller_fork"):
			return 116;
	
		case joaat("region_roa_aberdeenpigfarm"):
			return 77;
	
		case joaat("region_hrt_luckyscabin"):
			return 74;
	
		case joaat("region_hrt_horseshoeoverlook"):
			return 71;
	
		case joaat("region_bgv_shepherds_rise"):
			return 25;
	
		case joaat("region_tal_tannersreach"):
			return 112;
	
		default:
		
	}

	return -1;
}

int func_716(Hash hParam0) // Position - 0x17135 Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (hParam0)
	{
		case joaat("district_big_valley"):
			return 1;
	
		case joaat("district_grizzlies"):
			return 5;
	
		case joaat("district_grizzlies_east"):
			return 6;
	
		case joaat("district_cholla_springs"):
			return 15;
	
		case joaat("district_guama"):
			return 8;
	
		case joaat("district_grizzlies_west"):
			return 7;
	
		case joaat("district_rio_bravo"):
			return 14;
	
		case joaat("district_bluegill_marsh"):
			return 2;
	
		case joaat("district_scarlett_meadows"):
			return 11;
	
		case joaat("district_great_plains"):
			return 4;
	
		case joaat("district_bayou_nwa"):
			return 0;
	
		case joaat("district_roanoke_ridge"):
			return 10;
	
		case joaat("district_hennigans_stead"):
			return 16;
	
		case joaat("district_gaptooth_ridge"):
			return 13;
	
		case joaat("district_cumberland_forest"):
			return 3;
	
		case joaat("district_heartland"):
			return 9;
	
		case joaat("district_tall_trees"):
			return 12;
	
		default:
		
	}

	return -1;
}

int func_717(int iParam0, var uParam1, var uParam2) // Position - 0x171F9 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_718(int iParam0, int iParam1) // Position - 0x17216 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_719(int iParam0, int iParam1, BOOL bParam2) // Position - 0x17226 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

void func_720(eStackSize essParam0) // Position - 0x1724C Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_566(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_860(essParam0);
	
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

Ped func_721(eStackSize essParam0) // Position - 0x172B4 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_566(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_722(eStackSize essParam0) // Position - 0x172EE Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_550(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_721(essParam0)))
		{
			func_829(essParam0, 67108864, true);
			func_556(essParam0, 19, true);
		}
	}

	return;
}

float func_723(eStackSize essParam0) // Position - 0x17321 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_566(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_724(eStackSize essParam0) // Position - 0x17342 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_721(essParam0);
	persChar = func_557(essParam0, false);
	func_861(essParam0, ped);

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

float func_725(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x1739C Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_862(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_726(eStackSize essParam0, BOOL bParam1) // Position - 0x173F3 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_566(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_863(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_727(eStackSize essParam0) // Position - 0x17538 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_565(essParam0);

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

PersChar func_728(eStackSize essParam0, BOOL bParam1) // Position - 0x175AE Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_566(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_864(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_729(eStackSize essParam0) // Position - 0x175FA Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_566(essParam0))
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

void func_730(eStackSize essParam0, int iParam1) // Position - 0x1764D Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_566(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

void func_731(int iParam0) // Position - 0x17671 Hash - 0xD14C6A7D ^0x9C4D4670
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

	ped = func_600(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_767(iParam0, 64))
	{
		func_732(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_131(42);

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
				func_865(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_732(iParam0);

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
	
		if (func_866(1) < 1)
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
		func_867(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_767(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_868(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_869(entityCoords, Global_36);
	flag9 = false;

	if (num > func_870(iParam0))
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
		func_871(Global_1900383[iParam0 /*45*/].f_26);
		func_872(Global_1900383[iParam0 /*45*/].f_26);
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

	if (func_532(ped) && !isPedInWrithe)
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

	num2 = func_866(iParam0);
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

void func_732(int iParam0) // Position - 0x17DE7 Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_570(iParam0);

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

void func_733(BOOL bParam0) // Position - 0x17E38 Hash - 0x970FE035 ^0x92589DF6
{
	func_873(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_734(int iParam0, var uParam1) // Position - 0x17E6B Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_874(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_735(int iParam0) // Position - 0x17E98 Hash - 0x1AE9F3E ^0x7DFE431C
{
	int i;

	for (i = 0; i < Global_1946054.f_2535.f_1; i = i + 1)
	{
		if (Global_1946054.f_2535.f_43[i /*2*/] == iParam0)
			return i;
	}

	return -1;
}

BOOL func_736(int iParam0, BOOL bParam1) // Position - 0x17ED2 Hash - 0xFCA6ECD ^0x9191C7F8
{
	return Global_1946054.f_2535.f_3[iParam0] && bParam1 != false;
}

void func_737(int iParam0, BOOL bParam1) // Position - 0x17EEC Hash - 0x67AF033B ^0xA8AB672D
{
	Global_1946054.f_2535.f_3[iParam0] = Global_1946054.f_2535.f_3[iParam0] - Global_1946054.f_2535.f_3[iParam0] && bParam1;
	return;
}

BOOL func_738(BOOL bParam0) // Position - 0x17F1F Hash - 0x34978EE6 ^0xC8045CB0
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 39; i = i + 1)
	{
		num2 = func_779(i, 1);
	
		if (!func_790(num2, 2))
		{
		}
		else if (Global_1946054.f_2535.f_3[i] != false)
		{
		}
		else
		{
			if (bParam0 && func_791(i) == -1)
			{
				func_792(i, 0);
				func_793(&Global_1946054.f_2589.f_2[Global_1946054.f_2589 - 1 /*2*/], 2, 6);
			}
		
			func_799(num2, 3, 6);
			Global_1946054.f_2456[i /*2*/] = 0;
			Global_1946054.f_2456[i /*2*/].f_1 = 0;
			num = num + 1;
		}
	}

	return num > 0;
}

void func_739(int iParam0) // Position - 0x17FC4 Hash - 0x5161A142 ^0x26FA799F
{
	Ped ped;
	int num;
	var unk;
	int i;
	Entity entity;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_600(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_875(i);
	
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

BOOL func_740(Hash hParam0) // Position - 0x1806C Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_876(hParam0))
		return false;

	if (!func_877())
		return true;

	return false;
}

void func_741(int iParam0, Ped pedParam1) // Position - 0x1808F Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/] = pedParam1;
	return;
}

void func_742(var uParam0) // Position - 0x180BB Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_743(int iParam0, Hash hParam1, var uParam2) // Position - 0x180D4 Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_878(iParam0, hParam1);
	!func_879(iParam0, hParam1.f_1);
	return;
}

void func_744(var uParam0) // Position - 0x18110 Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_880(&uParam0->[i /*94*/]);
	}

	return;
}

void func_745(var uParam0) // Position - 0x18134 Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_746(var uParam0) // Position - 0x18156 Hash - 0x92E3936E ^0xDB085754
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

void func_747(int iParam0) // Position - 0x1819B Hash - 0xF98F3B32 ^0x8A036B17
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

void func_748(int iParam0, int iParam1) // Position - 0x181D1 Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_749(int iParam0, var uParam1) // Position - 0x181F1 Hash - 0xD41D26E5 ^0x1EE19431
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

void func_750(BOOL bParam0) // Position - 0x1821A Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_751(var uParam0) // Position - 0x1822B Hash - 0x5F76BB50 ^0x40F56A0B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
	return;
}

void func_752(var uParam0) // Position - 0x18243 Hash - 0x92BF775F ^0x1739D63E
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	return;
}

int func_753(Hash hParam0) // Position - 0x18256 Hash - 0x50573299 ^0x50573299
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

void func_754(int iParam0, int iParam1) // Position - 0x18310 Hash - 0x7B6D7BEE ^0xF15D524D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam1 /*436*/], &Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383.f_508), 436);
	return;
}

void func_755(int iParam0, int iParam1) // Position - 0x1836F Hash - 0x102876F9 ^0x8EA22A40
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &Global_1900383[iParam1 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam1 /*45*/], &Global_1900383[iParam0 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam0 /*45*/], &(Global_1900383.f_463), 45);
	return;
}

int func_756(int iParam0, int iParam1) // Position - 0x183B7 Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_881(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_881(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_882(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_883(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_884(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

void func_757(Ped pedParam0) // Position - 0x1844A Hash - 0xF32FB80D ^0xB662E625
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

	if (func_885(pedParam0))
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

	if (func_375(pedParam0))
	{
		num = func_376(pedParam0);
	
		if (func_886(num))
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

Object* func_758() // Position - 0x185B4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

void func_759(int iParam0) // Position - 0x185C3 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_393 = iParam0;
	return;
}

int func_760(var uParam0, var uParam1, var uParam2) // Position - 0x185D4 Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_221())
	{
		if (func_887())
		{
			flag = false;
		
			if (!func_132(Global_1835011[15 /*74*/].f_1, true) && !func_131(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_888();
				*uParam1 = func_889();
				*uParam2 = func_890();
				return 1;
			}
			else
			{
				*uParam0 = func_891();
				*uParam1 = func_892();
				*uParam2 = func_893();
				return 1;
			}
		}
		else if (func_392())
		{
			if (!func_132(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_894();
				*uParam1 = func_895();
				*uParam2 = func_896();
				return 1;
			}
			else
			{
				*uParam0 = func_897();
				*uParam1 = func_898();
				*uParam2 = func_899();
				return 1;
			}
		}
	}
	else if (func_887())
	{
		*uParam0 = func_900();
		*uParam1 = func_901();
		*uParam2 = func_902();
		return 1;
	}
	else if (func_392())
	{
		*uParam0 = func_903();
		*uParam1 = func_904();
		*uParam2 = func_905();
		return 1;
	}

	return 0;
}

void func_761(int iParam0, var uParam1) // Position - 0x186EE Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
	return;
}

void func_762(int iParam0, var uParam1) // Position - 0x18721 Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
	return;
}

void func_763(int iParam0, var uParam1) // Position - 0x18754 Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
	return;
}

void func_764(int iParam0, int iParam1) // Position - 0x18787 Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

void func_765(int iParam0, int iParam1) // Position - 0x187BA Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Ped ped;
	int num2;
	int attributeRank;

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_609(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_760(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_906(iParam1);
	ped = func_600(iParam0);

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

void func_766(int iParam0, int iParam1) // Position - 0x188B8 Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

BOOL func_767(int iParam0, int iParam1) // Position - 0x188F1 Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

BOOL func_768(int iParam0, var uParam1) // Position - 0x18924 Hash - 0x9604B47A ^0xC430D780
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_881(iParam0, &unk))
		return false;

	*uParam1 = func_907(unk, joaat("SLOTID_HORSE_MANE"), false);

	if (!func_425(*uParam1, 0))
		return false;

	return true;
}

BOOL func_769(int iParam0, var uParam1) // Position - 0x1896D Hash - 0x9604B47A ^0x406A0DCA
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_881(iParam0, &unk))
		return false;

	*uParam1 = func_907(unk, joaat("SLOTID_HORSE_TAIL"), false);

	if (!func_425(*uParam1, 0))
		return false;

	return true;
}

BOOL func_770(Hash hParam0, var uParam1) // Position - 0x189B6 Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_908(856287005, hParam0))
		return false;

	unk = { func_909() };
	*uParam1 = func_907(unk, hParam0, false);

	if (!func_425(*uParam1, 0))
		return false;

	return true;
}

void func_771(Ped pedParam0) // Position - 0x189F8 Hash - 0x4C9A12AA ^0x56351FC0
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

void func_772(Ped pedParam0, var uParam1) // Position - 0x18A42 Hash - 0x6EA4BA5B ^0xEF2325EE
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_910(pedParam0, *uParam1);
	func_910(pedParam0, uParam1->f_1);
	return;
}

void func_773(Ped pedParam0) // Position - 0x18A85 Hash - 0x4C9A12AA ^0x5B9D01EA
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

void func_774(Ped pedParam0, var uParam1) // Position - 0x18B03 Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_910(pedParam0, *uParam1);
	func_910(pedParam0, uParam1->f_1);
	func_910(pedParam0, uParam1->f_2);
	func_910(pedParam0, uParam1->f_3);
	func_910(pedParam0, uParam1->f_4);
	func_910(pedParam0, uParam1->f_5);
	return;
}

int func_775(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x18B6E Hash - 0x1A2B1EEB ^0x4DBC1D46
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

BOOL func_776(var uParam0, int iParam1, int iParam2) // Position - 0x18BC3 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_777() // Position - 0x18BFA Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

void func_778(var uParam0, float fParam1) // Position - 0x18C08 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_629() - fParam1;
	func_911(uParam0, 1);
	func_912(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_779(int iParam0, int iParam1) // Position - 0x18C2E Hash - 0xE1D12727 ^0xA46110B3
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

Hash func_780(Hash hParam0, int iParam1) // Position - 0x18E7D Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_425(hParam0, 0))
		return 0;

	num = func_586(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_428(hParam0, 1399091007))
	{
		func_913(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_781(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x18EF7 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_658(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_782(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18F1E Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_783(Hash hParam0) // Position - 0x18F59 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_784(int iParam0) // Position - 0x18F74 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_785(Hash hParam0, BOOL bParam1) // Position - 0x18F95 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_914(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_916(&unk, func_915(false));

	if (!func_917(&unk, &num, &num2, false))
		return 0;

	func_784(num);
	return num2;
}

BOOL func_786(Hash hParam0) // Position - 0x18FF3 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_787(int iParam0) // Position - 0x19001 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_422(iParam0, 1) /*3*/];
}

void func_788(BOOL bParam0) // Position - 0x19029 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_789(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1903C Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_844(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_845(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_788(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_844(iParam0))
				return;
		
			func_845(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_788(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_918(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_790(int iParam0, int iParam1) // Position - 0x19248 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_791(int iParam0) // Position - 0x19266 Hash - 0xFF1F880 ^0x1EBA9018
{
	int i;

	for (i = 0; i < Global_1946054.f_2589; i = i + 1)
	{
		if (Global_1946054.f_2589.f_2[i /*2*/] == iParam0)
			return i;
	}

	return -1;
}

void func_792(int iParam0, int iParam1) // Position - 0x1929E Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_919(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_793(int iParam0, int iParam1, int iParam2) // Position - 0x192B5 Hash - 0xDEDED6D0 ^0xB4D62998
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_794(int iParam0, int iParam1, int iParam2) // Position - 0x192C8 Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

void func_795(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x192F5 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_779(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_920(hParam4);
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

BOOL func_796(BOOL bParam0) // Position - 0x193F2 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

BOOL func_797(int iParam0, int iParam1) // Position - 0x19403 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_798(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1941C Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_790(1108822547, 6))
	{
		if (bParam2)
		{
			func_795(pedParam0, num, func_106() != -1, false, 0);
			func_794(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_799(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

void func_799(int iParam0, int iParam1, int iParam2) // Position - 0x194E4 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

int func_800(int iParam0) // Position - 0x19523 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_801(int iParam0) // Position - 0x195D7 Hash - 0x6DD34799 ^0x352A62D8
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

BOOL func_802() // Position - 0x19678 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_803(int iParam0) // Position - 0x19694 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_804() // Position - 0x196A6 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_921(13);
	num2 = func_922(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_805() // Position - 0x196E9 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_806() // Position - 0x19704 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_923())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_807() // Position - 0x19723 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_808() // Position - 0x19765 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_809(int iParam0, int iParam1, BOOL bParam2) // Position - 0x19773 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_924(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_810(int iParam0, float fParam1, BOOL bParam2) // Position - 0x197BF Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_924(iParam0, 2, false, false);
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

float func_811(float fParam0, float fParam1, float fParam2) // Position - 0x19905 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_812() // Position - 0x1992C Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_921(12) <= -99f;
}

BOOL func_813() // Position - 0x19940 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_921(12) >= 99f;
}

BOOL func_814(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19954 Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_566(essParam0))
		return false;

	if (func_549(essParam0, 32, true))
		return false;

	if (!func_549(essParam0, 2, true))
		return false;

	if (!func_549(essParam0, 4, true))
		return false;

	if (func_558(essParam0, 33, true))
		return false;

	if (func_371(essParam0))
		return false;

	if (func_925(essParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == essParam0)
			return false;

	return true;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(eStackSize essParam0) // Position - 0x199E1 Hash - 0xA17D549C ^0x88C09139
{
	switch (essParam0)
	{
		case -1:
			return "REGION_INVALID";
	
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
	
		case 1:
			return "REGION_BAY_MACOMBS_END";
	
		case 2:
			return "REGION_BAY_MERKINSWALLER";
	
		case 3:
			return "REGION_BAY_LAGRAS";
	
		case 4:
			return "REGION_BAY_LAKAY";
	
		case 5:
			return "REGION_BAY_SAINT_DENIS";
	
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
	
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
	
		case 8:
			return "REGION_BAY_SERENDIPITY";
	
		case 9:
			return "REGION_BAY_SHADYBELLE";
	
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
	
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
	
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
	
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
	
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
	
		case 15:
			return "REGION_BGV_FORTRIGGS";
	
		case 16:
			return "REGION_BGV_HANGINGDOG";
	
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
	
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
	
		case 19:
			return "REGION_BGV_MONTO_REST";
	
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
	
		case 21:
			return "REGION_BGV_PAINTEDSKY";
	
		case 22:
			return "REGION_BGV_PRONGHORN";
	
		case 23:
			return "REGION_BGV_RIGGS_STATION";
	
		case 24:
			return "REGION_BGV_SHACK";
	
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
	
		case 26:
			return "REGION_BGV_STRAWBERRY";
	
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
	
		case 28:
			return "REGION_BGV_WALLACE_STATION";
	
		case 29:
			return "REGION_BGV_WATSONSCABIN";
	
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
	
		case 31:
			return "REGION_BLU_COPPERHEAD";
	
		case 32:
			return "REGION_BLU_SISIKA";
	
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
	
		case 34:
			return "REGION_CML_DINO_LADY";
	
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
	
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
	
		case 37:
			return "REGION_GRT_BEECHERS";
	
		case 38:
			return "REGION_GRT_BLACKWATER";
	
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
	
		case 40:
			return "REGION_GRZ_ADLERRANCH";
	
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
	
		case 42:
			return "REGION_GRZ_CHEZPORTER";
	
		case 43:
			return "REGION_GRZ_COLTER";
	
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
	
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
	
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
	
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
	
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
	
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
	
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
	
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
	
		case 52:
			return "REGION_GRZ_COHUTTA";
	
		case 53:
			return "REGION_GRZ_GUNFIGHT";
	
		case 54:
			return "REGION_GRZ_THELOFT";
	
		case 55:
			return "REGION_GRE_VETERAN";
	
		case 56:
			return "REGION_GRZ_WAPITI";
	
		case 57:
			return "REGION_GUA_AGUASDULCES";
	
		case 58:
			return "REGION_GUA_CAMP";
	
		case 59:
			return "REGION_GUA_CINCOTORRES";
	
		case 60:
			return "REGION_GUA_LACAPILLA";
	
		case 61:
			return "REGION_GUA_MANICATO";
	
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
	
		case 63:
			return "REGION_ROA_BEECHERS_C";
	
		case 64:
			return "REGION_HRT_CARMODYDELL";
	
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
	
		case 66:
			return "REGION_HRT_CROP_FARM";
	
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
	
		case 68:
			return "REGION_HRT_DOWNSRANCH";
	
		case 69:
			return "REGION_HRT_EMERALDRANCH";
	
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
	
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
	
		case 72:
			return "REGION_HRT_LARNEDSOD";
	
		case 73:
			return "REGION_HRT_LOONY_CULT";
	
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
	
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
	
		case 76:
			return "REGION_HRT_VALENTINE";
	
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
	
		case 78:
			return "REGION_ROA_ANNESBURG";
	
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
	
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
	
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
	
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
	
		case 83:
			return "REGION_ROA_DOVERHILL";
	
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
	
		case 85:
			return "REGION_ROA_ISOLATIONIST";
	
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
	
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
	
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
	
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
	
		case 90:
			return "REGION_ROA_TRAPPER";
	
		case 91:
			return "REGION_ROA_VANHORNMANSION";
	
		case 92:
			return "REGION_ROA_VANHORNPOST";
	
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
	
		case 94:
			return "REGION_SCM_BULGERGLADE";
	
		case 95:
			return "REGION_SCM_CALIGAHALL";
	
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
	
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
	
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
	
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
	
		case 100:
			return "REGION_SCM_DAIRY_FARM";
	
		case 101:
			return "REGION_SCM_HORSE_SHOP";
	
		case 102:
			return "REGION_SCM_LONNIESSHACK";
	
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
	
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
	
		case 105:
			return "REGION_SCM_RHODES";
	
		case 106:
			return "REGION_SCM_SLAVE_PEN";
	
		case 107:
			return "REGION_TAL_AURORA_BASIN";
	
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
	
		case 109:
			return "REGION_TAL_COCHINAY";
	
		case 110:
			return "REGION_TAL_MANZANITAPOST";
	
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
	
		case 112:
			return "REGION_TAL_TANNERSREACH";
	
		case 113:
			return "REGION_TAL_TRAPPER";
	
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
	
		case 115:
			return "REGION_GAP_TUMBLEWEED";
	
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
	
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
	
		case 118:
			return "REGION_RIO_FORT_MERCER";
	
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
	
		case 120:
			return "REGION_CHO_ARMADILLO";
	
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
	
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
	
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
	
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
	
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
	
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
	
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
	
		case MICRO:
			return "REGION_CENTRALUNIONRR";
	
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
	
		default:
		
	}

	return "REGION_INVALID";
}

const char* func_816(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x1A0A6 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x1A0BA Hash - 0xA17D549C ^0xD8026B41
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
	
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
	
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
	
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
	
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
	
		case 5:
			return "LBS_GUARMA_BOUNTY";
	
		default:
		
	}

	return "LBS_INVALID_BOUNTY";
}

void func_818(eStackSize essParam0, BOOL bParam1, char* sParam2) // Position - 0x1A11C Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_721(essParam0);

	if (!func_550(essParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

void func_819(eStackSize essParam0, int iParam1) // Position - 0x1A163 Hash - 0x61FF61E0 ^0x2C6117ED
{
	if (!func_566(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_11 = iParam1;
	return;
}

BOOL func_820(eStackSize essParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0x1A185 Hash - 0x5B7A656E ^0x3AAC2B26
{
	if (!func_566(essParam0))
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
					iParam4 = func_926(essParam0, iParam9, bParam7, true);
				else if (Global_1360165[essParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[essParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[essParam0 /*60*/].f_59 && func_121(Global_1360165[essParam0 /*1157*/].f_4.f_2) || func_120(Global_1360165[essParam0 /*1157*/].f_4.f_2))
					iParam4 = Global_1360165[essParam0 /*1157*/].f_4.f_1;
				else
					iParam4 = func_926(essParam0, Global_40.f_4283, bParam7, true);
			
				if (Global_1360165[essParam0 /*1157*/].f_63 != iParam4 && func_927(Global_1360165[essParam0 /*1157*/].f_63))
					if (!func_928(essParam0, false))
						func_551(essParam0, 25, false);
			}
		
			Global_1360165[essParam0 /*1157*/].f_4 = { func_929(essParam0, iParam4, uParam1, bParam5, bParam6, bParam8, Global_40.f_4942[essParam0 /*60*/].f_59, bParam11) };
		
			if (!bParam6)
				func_556(essParam0, 44, true);
		
			Global_1360165[essParam0 /*1157*/].f_3 = 2;
			[[fallthrough]];
	
		case 2:
			if (!func_235(func_721(essParam0), 0))
				return false;
		
			if (bParam5 && bParam10)
				if (!func_235(func_565(essParam0), 0))
					return false;
		
			Global_1360165[essParam0 /*1157*/].f_3 = 3;
			[[fallthrough]];
	
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

void func_821(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A36E Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_550(essParam0))
		return;

	if (bParam1)
		func_930(essParam0, bParam3);
	else
		func_931(essParam0, bParam3);

	if (bParam2)
		func_932(essParam0, bParam3);
	else
		func_933(essParam0, bParam3);

	return;
}

BOOL func_822(eStackSize essParam0, int iParam1) // Position - 0x1A3B3 Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_550(essParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_934(essParam0, iParam1);
	return flag;
}

void func_823(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1A3F2 Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_550(essParam0))
		return;

	if (!func_822(essParam0, iParam1))
		return;

	Global_40.f_4942[essParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_551(essParam0, 25, true);

	return;
}

void func_824(eStackSize essParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x1A432 Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_935(iParam2))
		{
			hash = func_936(iParam2, -1);
		
			if (func_300(pedParam1, hash))
			{
				if (func_937(pedParam1, hash))
				{
					if (func_938(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_939(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_302(essParam0, pedParam1, false);
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
			func_551(essParam0, 66, false);
	}

	return;
}

void func_825(eStackSize essParam0) // Position - 0x1A506 Hash - 0x73C1F6C ^0x73C1F6C
{
	func_296(essParam0);
	func_297(essParam0, false);
	return;
}

void func_826(Ped pedParam0, int iParam1) // Position - 0x1A51B Hash - 0x7F605CB ^0x28CA17AF
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

BOOL func_827(Ped pedParam0) // Position - 0x1A576 Hash - 0x4E8A039F ^0x9F8FB293
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

void func_828(eStackSize essParam0, Ped pedParam1) // Position - 0x1A5F4 Hash - 0x9D727A3E ^0xB12CD64B
{
	if (!func_566(essParam0))
		return;

	switch (essParam0)
	{
		case 11:
			if (Global_40.f_4942[essParam0 /*60*/].f_3 == -1341683964)
			{
				func_940(pedParam1, joaat("weapon_revolver_cattleman_sadie"), 0, false, 2, true, false, 1056964608, 1065353216, -1, false, false, false, false);
				func_940(pedParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), false, false, 3, true, true, 1056964608, 1065353216, -1, false, true, false, false);
			}
			break;
	}

	return;
}

void func_829(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A66E Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_550(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

Player func_830(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1A69F Hash - 0x8208FD10 ^0xFF758839
{
	var unk;
	PersChar persChar;
	var schedule;
	char* str;

	if (!func_566(essParam0))
		return 0;

	unk = { iParam3, iParam4, iParam5 };
	persChar = func_728(essParam0, true);

	switch (Global_1360165[essParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[essParam0 /*1157*/].f_124 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
			Global_1360165[essParam0 /*1157*/].f_125 = 0;
		
			if (func_235(Global_1360165[essParam0 /*1157*/].f_124, 0))
			{
				func_730(essParam0, 3);
			}
			else
			{
				if (!func_941(essParam0) && func_942(essParam0, &schedule))
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_726(essParam0, true), &schedule);
			
				func_568(essParam0, 256, false);
				func_730(essParam0, 1);
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
			
				if (!func_944(essParam0, unk, iParam6, bParam10))
					return _INVALID_PLAYER_INDEX();
			
				if (func_235(Global_1360165[essParam0 /*1157*/].f_124, 0))
				{
					PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar) != Global_1360165[essParam0 /*1157*/].f_124;
				
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[essParam0 /*1157*/].f_124, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[essParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[essParam0 /*1157*/].f_124, true);
					func_730(essParam0, 2);
				}
			}
			break;
	
		case 2:
			if (!func_235(Global_1360165[essParam0 /*1157*/].f_124, 0))
			{
				func_730(essParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[essParam0 /*1157*/].f_124))
				func_730(essParam0, 3);
			break;
	
		case 3:
			if (!func_235(Global_1360165[essParam0 /*1157*/].f_124, 0))
			{
				func_730(essParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (bParam7)
				if (!func_945(essParam0, Global_1360165[essParam0 /*1157*/].f_124, true))
					return _INVALID_PLAYER_INDEX();
		
			if (bParam2 && !_IS_NULL_VECTOR(unk) && !func_417(unk, ENTITY::GET_ENTITY_COORDS(Global_1360165[essParam0 /*1157*/].f_124, true, false), 1056964608, true))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::DETACH_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_349(Global_1360165[essParam0 /*1157*/].f_124, unk, iParam6, 2, 1073741824);
			}
		
			if (bParam1)
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
				{
					func_558(essParam0, 39, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				}
			
				func_551(essParam0, 39, true);
				func_568(essParam0, 8, true);
				func_568(essParam0, 64, false);
				Global_1360165[essParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
		
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[essParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[essParam0 /*1157*/].f_124, false);
			func_946(Global_1360165[essParam0 /*1157*/].f_124, essParam0);
		
			if (bParam8)
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/].f_124, 1);
		
			str = func_947(essParam0, func_392());
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
				PERSCHAR::_0x63AA2B8EB087886A(func_726(essParam0, true), MISC::GET_HASH_KEY(str));
		
			Global_1360165[essParam0 /*1157*/].f_70 = Global_1360165[essParam0 /*1157*/].f_124;
			Global_1360165[essParam0 /*1157*/].f_124 = 0;
			func_556(essParam0, 40, false);
			func_568(essParam0, 32, false);
			func_730(essParam0, 0);
			return Global_1360165[essParam0 /*1157*/].f_70;
	}

	return _INVALID_PLAYER_INDEX();
}

void func_831(eStackSize essParam0, Player plParam1) // Position - 0x1AA56 Hash - 0x6B84EB5D ^0xB01B2620
{
	int randomIntInRange;
	int maxAttributePoints;

	switch (essParam0)
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

void func_832(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AAE2 Hash - 0x755A55CB ^0x755A55CB
{
	if (!func_550(essParam0))
		return;

	if (func_726(essParam0, true) == 0)
		return;

	if (bParam3)
		func_948(func_565(essParam0), 1f, false);

	if (bParam1)
		func_949(essParam0);
	else
		func_950(essParam0);

	if (bParam2)
		func_951(essParam0);
	else
		func_952(essParam0);

	return;
}

BOOL func_833(int iParam0) // Position - 0x1AB3E Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_280(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

BOOL func_834(int iParam0, BOOL bParam1) // Position - 0x1AB63 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_106() != -1)
		return false;

	if (!func_280(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_835(int iParam0, BOOL bParam1) // Position - 0x1AB91 Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_280(iParam0))
		return false;

	if (func_834(iParam0, true) && !func_833(iParam0) && func_856(iParam0))
		return false;

	if (!func_834(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_953(iParam0, false))
			return false;

	return true;
}

void func_836(int iParam0) // Position - 0x1ABF1 Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_280(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

Ped func_837(int iParam0) // Position - 0x1AC14 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_283(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

Hash func_838(int iParam0) // Position - 0x1AC42 Hash - 0xED567DFA ^0x7CDFEFC2
{
	if (!func_280(iParam0))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

int func_839(var uParam0, var uParam1, int iParam2, Volume volParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, Hash hParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x1AC64 Hash - 0x27EEDACD ^0xD08EAB77
{
	ItemSet itemSet;
	Ped indexedItemInItemset;
	Ped ped;
	BOOL flag;
	int num;
	int i;
	int entitiesInVolume;
	int j;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam3, itemSet, 1);

	if (entitiesInVolume > 0)
	{
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
			ped = indexedItemInItemset;
		
			if (ENTITY::DOES_ENTITY_EXIST(ped) && num < *uParam0 && num < iParam2)
			{
				if (func_954(ped, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(ped, "bIgnoreThisPed"))
				{
					if (!func_955(ped, uParam1))
					{
						flag = false;
					
						if (hParam7 != -1)
						{
							j = 0;
						
							for (j = 0; j < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(hParam7); j = j + 1)
							{
								if (PED::IS_PED_MODEL(ped, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(hParam7, j)))
								{
									flag = true;
									break;
								}
							}
						}
						else
						{
							flag = true;
						}
					
						if (flag)
						{
							if (!bParam11)
								if (!ENTITY::IS_ENTITY_DEAD(ped))
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, bParam5);
						
							uParam0->[num] = ped;
							num = num + 1;
						}
					}
				}
			}
		}
	}

	num >= iParam2 - 1 && entitiesInVolume >= iParam2;
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

void func_840(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1AD79 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_956(eptParam1))
		{
			func_957(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_958(pedParam0, 0, true);
	
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
			func_959(pedParam0, false);
			flag = true;
		}
	
		func_960(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_841(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x1AE5A Hash - 0xF4BE06E5 ^0x21E9A98D
{
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	ScrHandle handle;
	int num;
	int i;
	int j;
	int entitiesInVolume;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam2, itemSet, 3);
	entitiesInVolume >= iParam3;

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		handle = indexedItemInItemset;
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(handle))
		{
			for (j = 0; j < *uParam1; j = j + 1)
			{
				if (uParam1->[j] == 0)
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(handle) == uParam1->[j])
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
			}
		}
	
		if (num >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return iParam3;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

char* func_842(Object obParam0) // Position - 0x1AF15 Hash - 0xC6FA1349 ^0xB6421A5F
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return "";

	entityModel = ENTITY::GET_ENTITY_MODEL(obParam0);
	return func_961(entityModel);
}

char* func_843(Vehicle veParam0) // Position - 0x1AF3C Hash - 0x44171E98 ^0x71D80B1E
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

BOOL func_844(int iParam0) // Position - 0x1B069 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_845(int iParam0) // Position - 0x1B07E Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_846(var uParam0, const char* sParam1, Entity eParam2, int iParam3) // Position - 0x1B09E Hash - 0x8115405E ^0x889845AA
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam2))
		return;

	if (iParam3 == 1)
		if (ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(uParam0->f_444, sParam1))
			iParam3 = 0;

	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, eParam2, iParam3);
	return;
}

void func_847(Ped pedParam0) // Position - 0x1B0DC Hash - 0xC848742E ^0xD171C7FA
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

int func_848(int iParam0) // Position - 0x1B112 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_849(int iParam0) // Position - 0x1B11C Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_962(iParam0))
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

void func_850(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x1B1CF Hash - 0x1B501888 ^0x6546232B
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
	func_851(iParam0, true);
	func_853(iParam0, true);
	func_854(iParam0, 128);
	return;
}

void func_851(int iParam0, BOOL bParam1) // Position - 0x1B475 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_704(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_852(int iParam0, int iParam1) // Position - 0x1B4CD Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_853(int iParam0, BOOL bParam1) // Position - 0x1B500 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_854(int iParam0, int iParam1) // Position - 0x1B529 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_855(var uParam0, Ped pedParam1, int iParam2) // Position - 0x1B551 Hash - 0xA4963171 ^0x630B980A
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1)
			func_687(&uParam0->f_13[i /*12*/], iParam2);
	}

	return;
}

BOOL func_856(int iParam0) // Position - 0x1B599 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_280(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_857(int iParam0) // Position - 0x1B5BD Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_280(iParam0))
		return;

	ped = func_837(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

int func_858(int iParam0, BOOL bParam1) // Position - 0x1B601 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_280(iParam0))
		return 0;

	if (!func_834(iParam0, 2))
		return 0;

	if (func_281(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
		return 1;

	if (func_834(iParam0, true) && !bParam1)
	{
		func_146(iParam0, 128);
		return 1;
	}

	func_213(iParam0, 129);
	func_857(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_283(iParam0));
	func_963(iParam0, 0);
	return 1;
}

void func_859(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x1B684 Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_964(hParam0, hParam1, true))
	{
		num = func_539(hParam1);
		num2 = func_538(hParam0);
		num3 = func_538(hParam0) - func_538(hParam1);
		num4 = func_539(hParam0) - func_539(hParam1);
		num5 = func_540(hParam0) - func_540(hParam1);
		num6 = func_537(hParam0) - func_537(hParam1);
		num7 = func_536(hParam0) - func_536(hParam1);
		num8 = func_535(hParam0) - func_535(hParam1);
	}
	else
	{
		num = func_539(hParam0);
		num2 = func_538(hParam1);
		num3 = func_538(hParam1) - func_538(hParam0);
		num4 = func_539(hParam1) - func_539(hParam0);
		num5 = func_540(hParam1) - func_540(hParam0);
		num6 = func_537(hParam1) - func_537(hParam0);
		num7 = func_536(hParam1) - func_536(hParam0);
		num8 = func_535(hParam1) - func_535(hParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_541(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_965(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

Hash func_860(int iParam0) // Position - 0x1B886 Hash - 0xBA965109 ^0xCB1D208B
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

void func_861(eStackSize essParam0, Ped pedParam1) // Position - 0x1BA62 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_966(pedParam1);

	return;
}

float func_862(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1BA7C Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_863(eStackSize essParam0) // Position - 0x1BA9A Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_566(essParam0))
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

	if (!func_566(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_864(eStackSize essParam0) // Position - 0x1BB7B Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_566(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_726(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_865(Blip blParam0) // Position - 0x1BC17 Hash - 0x537CC7C9 ^0xC237F63F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_968(func_967(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_887())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_392();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

int func_866(int iParam0) // Position - 0x1BC64 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_867(Blip blParam0, BOOL bParam1) // Position - 0x1BC98 Hash - 0x74D2E5D1 ^0x469CFFFA
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
		else if (func_887())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_392())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

Ped func_868(int iParam0) // Position - 0x1BD0A Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_869(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1BD38 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_870(int iParam0) // Position - 0x1BD56 Hash - 0x9BB7FBA3 ^0xA973C68A
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

	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_609(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_866(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_866(iParam0) + 1;
	num2 = func_969(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_970(num, any, num7);
	return num8;
}

void func_871(Blip blParam0) // Position - 0x1BE10 Hash - 0x9892E8C ^0x28660E03
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

void func_872(Blip blParam0) // Position - 0x1BE9C Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

void func_873(BOOL bParam0) // Position - 0x1BEC8 Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_874(int iParam0) // Position - 0x1BEDB Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_875(int iParam0) // Position - 0x1BEF1 Hash - 0x1B64DC55 ^0x1B64DC55
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

BOOL func_876(Hash hParam0) // Position - 0x1BF29 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_877() // Position - 0x1BF6B Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_878(int iParam0, Hash hParam1) // Position - 0x1BF7C Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_881(iParam0, &unk))
		return false;

	unk30 = { func_971(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_972(unk30, 1);
}

BOOL func_879(int iParam0, Hash hParam1) // Position - 0x1BFC0 Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_881(iParam0, &unk))
		return false;

	unk30 = { func_971(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_972(unk30, true);
}

void func_880(var uParam0) // Position - 0x1C007 Hash - 0x6843C143 ^0xA531F0D1
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

BOOL func_881(int iParam0, Any* panParam1) // Position - 0x1C0AE Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_973(iParam0))
		return false;

	hash = func_882(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_974(false) };

	if (!func_975(unk15, hash, &unk, 0, false))
		return false;

	if (!func_976(&unk, panParam1))
		return false;

	return true;
}

Hash func_882(int iParam0) // Position - 0x1C113 Hash - 0xBD10D1A2 ^0xE9C9558B
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

BOOL func_883(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1C17F Hash - 0x8FC90634 ^0x533F9AFB
{
	var unk;
	var outGuid;

	if (!func_977(bParam10))
		return func_978(uParam0, uParam4, hParam8, true, bParam9, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_979(uParam0, &unk, false, false))
		return false;

	if (func_980(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_658(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_972(outGuid, true);

	return true;
}

BOOL func_884(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x1C243 Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_977(bParam9))
		return func_981(uParam0, uParam4, iParam8, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_980(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_979(uParam0, &unk, bParam9, true) || !func_979(uParam4, &unk15, bParam9, true))
		return false;

	if (func_980(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_658(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

BOOL func_885(Ped pedParam0) // Position - 0x1C368 Hash - 0xFE36340F ^0xB01BFB4
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_982(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_886(int iParam0) // Position - 0x1C3A1 Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

BOOL func_887() // Position - 0x1C3C2 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_106() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_888() // Position - 0x1C3E8 Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_889() // Position - 0x1C3F5 Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_890() // Position - 0x1C402 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_891() // Position - 0x1C40B Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_892() // Position - 0x1C418 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_893() // Position - 0x1C425 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_894() // Position - 0x1C42E Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_895() // Position - 0x1C43B Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_896() // Position - 0x1C448 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_897() // Position - 0x1C451 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_898() // Position - 0x1C45E Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_899() // Position - 0x1C46B Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_900() // Position - 0x1C474 Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_901() // Position - 0x1C481 Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_902() // Position - 0x1C48E Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_903() // Position - 0x1C497 Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_904() // Position - 0x1C4A4 Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_905() // Position - 0x1C4B1 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_906(int iParam0) // Position - 0x1C4BA Hash - 0xCC180397 ^0xCC180397
{
	if (func_983() < iParam0)
		func_984(iParam0);

	return;
}

int func_907(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x1C4D1 Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_985(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_908(Hash hParam0, int iParam1) // Position - 0x1C4FF Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_423(hParam0);
	
		if (category != 0)
		{
			num2 = func_986(hParam0);
		
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

struct<4> func_909() // Position - 0x1C553 Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_974(false) };
	return func_971(856287005, unk, -218846335, false);
}

void func_910(Ped pedParam0, Hash hParam1) // Position - 0x1C577 Hash - 0x11B41686 ^0x947A8CD3
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

void func_911(var uParam0, int iParam1) // Position - 0x1C5DB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_912(var uParam0, int iParam1) // Position - 0x1C5EC Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_913(Hash hParam0, var uParam1, var uParam2) // Position - 0x1C601 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_914(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1C80D Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_915(BOOL bParam0) // Position - 0x1C8DF Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_658(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_971(923904168, func_974(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_971(923904168, func_974(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_971(923904168, func_974(bParam0), -740156546, false);
}

void func_916(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1C974 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_917(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1C98F Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_658(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

void func_918(int iParam0, var uParam1, var uParam2) // Position - 0x1C9B4 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_691(num);
	return;
}

void func_919(int iParam0, int iParam1, int iParam2) // Position - 0x1C9D4 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_987(iParam0, 1))
		func_988(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

Hash func_920(Hash hParam0) // Position - 0x1CA1B Hash - 0xBBE66644 ^0xEC72F4B4
{
	int num;

	num = func_423(hParam0);

	switch (num)
	{
		case -2061583405:
			return joaat("HATS");
	
		case -525676072:
			return joaat("MASKS_LARGE");
	
		default:
		
	}

	return 0;
}

float func_921(int iParam0) // Position - 0x1CA50 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_922(float fParam0) // Position - 0x1CA64 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

BOOL func_923() // Position - 0x1CA7F Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

char* func_924(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1CA90 Hash - 0xC24B5846 ^0x804D7C8E
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

BOOL func_925(eStackSize essParam0) // Position - 0x1CB39 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[essParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

int func_926(eStackSize essParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1CB56 Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_566(essParam0))
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
					if (func_132(Global_1835011[4 /*74*/].f_1, true))
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
					if (func_990(num, 9, 11))
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
					if (func_132(Global_1347702[63 /*49*/].f_15, true) || func_120(Global_1347702[63 /*49*/].f_15))
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
					if (func_990(num, 9, 12))
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
					if (!func_132(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_549(18, 134217728, true))
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
					if (func_990(num, 9, 11))
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
					if (func_132(Global_1347702[134 /*49*/].f_15, true) || func_120(Global_1347702[134 /*49*/].f_15))
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
					if (func_132(Global_1835011[38 /*74*/].f_1, true))
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
					if (func_990(num, 9, 11))
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
					if (func_991(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_132(Global_1347702[1 /*49*/].f_15, true))
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

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_721(essParam0)))
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

	if (!func_822(essParam0, num2))
		num2 = Global_40.f_4942[essParam0 /*60*/].f_3;

	return num2;
}

BOOL func_927(int iParam0) // Position - 0x1D93E Hash - 0x5000025C ^0x5000025C
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

BOOL func_928(eStackSize essParam0, BOOL bParam1) // Position - 0x1D96B Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_566(essParam0))
		return false;

	if (!bParam1)
		if (func_371(essParam0) || func_558(essParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[essParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[essParam0 /*1157*/].f_1, Global_1360165[essParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

struct<7> func_929(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0x1D9F4 Hash - 0xDA7D22BD ^0xF82EFD7F
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

void func_930(eStackSize essParam0, BOOL bParam1) // Position - 0x1DA57 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_566(essParam0))
		return;

	ped = func_721(essParam0);
	func_992(ped);
	func_551(essParam0, 60, true);

	if (bParam1)
		func_949(essParam0);

	return;
}

void func_931(eStackSize essParam0, BOOL bParam1) // Position - 0x1DA8E Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_566(essParam0))
		return;

	ped = func_721(essParam0);
	func_993(ped);
	func_556(essParam0, 60, true);

	if (bParam1)
		func_950(essParam0);

	return;
}

void func_932(eStackSize essParam0, BOOL bParam1) // Position - 0x1DAC5 Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_566(essParam0))
		return;

	ped = func_721(essParam0);
	func_994(ped);

	if (essParam0 == 14)
		func_995(ped);

	func_551(essParam0, 61, true);

	if (bParam1)
		func_951(essParam0);

	return;
}

void func_933(eStackSize essParam0, BOOL bParam1) // Position - 0x1DB09 Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_566(essParam0))
		return;

	ped = func_721(essParam0);
	func_996(ped);
	func_556(essParam0, 61, true);

	if (bParam1)
		func_952(essParam0);

	return;
}

BOOL func_934(eStackSize essParam0, int iParam1) // Position - 0x1DB40 Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_566(essParam0))
		return false;

	func_997(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_65[num], offset);
}

BOOL func_935(int iParam0) // Position - 0x1DB76 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

Hash func_936(int iParam0, eStackSize essParam1) // Position - 0x1DB89 Hash - 0xE1D12727 ^0x6E706E61
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
			num = func_998(296923297, essParam1);
			return func_999(num);
	
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
			num = func_998(1237718549, essParam1);
			return func_999(num);
	
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

BOOL func_937(Ped pedParam0, Hash hParam1) // Position - 0x1E02B Hash - 0xA54F3032 ^0xB953F7E0
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

BOOL func_938(Ped pedParam0, Hash hParam1) // Position - 0x1E07C Hash - 0xA54F3032 ^0xB953F7E0
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_300(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_939(Ped pedParam0) // Position - 0x1E0EE Hash - 0x446F1BDD ^0xCCBF328B
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

Hash func_940(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x1E10C Hash - 0xAB9CFACB ^0x8DB6D77C
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
				
					if (func_783(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_783(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_106() == -1 && !func_1000(weaponHash))
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
				if (func_1000(joaat("weapon_repeater_carbine")))
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
		if (pedParam0 != Global_35 && func_783(weaponHash))
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
		func_1001(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_1002(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_1003(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

BOOL func_941(eStackSize essParam0) // Position - 0x1E4B8 Hash - 0x78780946 ^0xDC2AB9A6
{
	if (!func_566(essParam0))
		return false;

	switch (Global_1360165[essParam0 /*1157*/].f_127)
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

BOOL func_942(eStackSize essParam0, char* sParam1) // Position - 0x1E502 Hash - 0x3BDA936C ^0xBDB65FBF
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (essParam0)
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
			switch (essParam0)
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
			switch (essParam0)
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
			switch (essParam0)
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
			switch (essParam0)
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
			switch (essParam0)
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

Player _INVALID_PLAYER_INDEX() // Position - 0x1E9FD Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_944(eStackSize essParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x1EA06 Hash - 0x33B4669E ^0x56AD3276
{
	ePedType perscharModelName;

	if (!func_566(essParam0))
		return false;

	if (!bParam5 && !Global_1359489.f_12 || bParam5 && Global_1359489.f_13 < 8)
	{
		if (Global_1360165[essParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[essParam0 /*1157*/].f_126))
				PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[essParam0 /*1157*/].f_126);
		
			if (bParam5)
			{
				Global_1360165[essParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[essParam0 /*1157*/].f_126, false);
				Global_1359489.f_13 = Global_1359489.f_13 + 1;
			}
			else
			{
				Global_1360165[essParam0 /*1157*/].f_124 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[essParam0 /*1157*/].f_126, false);
			}
		
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[essParam0 /*1157*/].f_126);
			Global_1360165[essParam0 /*1157*/].f_125 = Global_1360165[essParam0 /*1157*/].f_125 + 1;
		}
		else
		{
			perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_726(essParam0, true));
			STREAMING::REQUEST_MODEL(perscharModelName, false);
		
			if (STREAMING::HAS_MODEL_LOADED(perscharModelName))
			{
				Global_1360165[essParam0 /*1157*/].f_124 = func_679(perscharModelName, uParam1, iParam4, true, true, 0, true, true, true, false, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(perscharModelName);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(Global_1360165[essParam0 /*1157*/].f_126);
			}
		}
	
		if (!func_235(Global_1360165[essParam0 /*1157*/].f_124, 0))
			return false;
	
		Global_1359489.f_12 = 1;
		func_568(essParam0, 256, false);
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_945(eStackSize essParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1EB71 Hash - 0xB5B0CDA5 ^0xA3D20AE
{
	int num;

	if (!func_566(essParam0))
		return false;

	if (func_1004(essParam0, 256))
		return true;

	num = 0;

	if (bParam2)
		num = 256;

	if (!func_235(pedParam1, num))
		return false;

	PED::_EQUIP_META_PED_OUTFIT(pedParam1, func_1005(essParam0));
	PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, false);
	func_568(essParam0, 256, true);
	return true;
}

void func_946(Ped pedParam0, eStackSize essParam1) // Position - 0x1EBD6 Hash - 0xBC8691CC ^0xBFC58E13
{
	DECORATOR::DECOR_SET_BOOL(pedParam0, "HorseCompanion", true);
	func_960(pedParam0, func_1006(essParam1));

	if (func_1004(essParam1, 8))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 2);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, false);
	}

	if (ENTITY::DOES_ENTITY_EXIST(func_721(essParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_721(essParam1), pedParam0, false);
		PED::_0xED1C764997A86D5A(func_721(essParam1), pedParam0);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 367, true);
	}
	else
	{
		func_551(essParam1, 38, true);
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

	if (func_1004(essParam1, 4096))
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
	func_832(essParam1, func_1004(essParam1, 8192), func_1004(essParam1, 16384), true);
	return;
}

char* func_947(eStackSize essParam0, BOOL bParam1) // Position - 0x1ED36 Hash - 0xF4669507 ^0xF1712B29
{
	switch (essParam0)
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

void func_948(Player plParam0, float fParam1, BOOL bParam2) // Position - 0x1EE5A Hash - 0x74F05B43 ^0xF2C5E074
{
	int healthAmount;

	if (!ENTITY::IS_ENTITY_DEAD(plParam0))
	{
		fParam1 = func_811(fParam1, 0f, 1f);
		healthAmount = BUILTIN::FLOOR(fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(plParam0, bParam2));
		ENTITY::SET_ENTITY_HEALTH(plParam0, healthAmount, 0);
	}

	return;
}

void func_949(eStackSize essParam0) // Position - 0x1EE91 Hash - 0xB1E2E498 ^0xC7EBD371
{
	Player player;

	if (!func_566(essParam0))
		return;

	if (func_726(essParam0, false) == 0)
		return;

	player = func_565(essParam0);
	func_992(player);
	func_568(essParam0, 8192, true);
	return;
}

void func_950(eStackSize essParam0) // Position - 0x1EECC Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Player player;

	if (!func_566(essParam0))
		return;

	if (func_726(essParam0, false) == 0)
		return;

	player = func_565(essParam0);
	func_993(player);
	func_568(essParam0, 8192, false);
	return;
}

void func_951(eStackSize essParam0) // Position - 0x1EF07 Hash - 0xB1E2E498 ^0x545B1681
{
	Player player;

	if (!func_566(essParam0))
		return;

	if (func_726(essParam0, false) == 0)
		return;

	player = func_565(essParam0);
	func_994(player);
	func_568(essParam0, 16384, true);
	return;
}

void func_952(eStackSize essParam0) // Position - 0x1EF42 Hash - 0x28CD0E89 ^0x67E48CA5
{
	Player player;

	if (!func_566(essParam0))
		return;

	if (func_726(essParam0, false) == 0)
		return;

	player = func_565(essParam0);
	func_996(player);
	func_568(essParam0, 16384, false);
	return;
}

BOOL func_953(int iParam0, BOOL bParam1) // Position - 0x1EF7D Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_106() != -1)
		return false;

	if (!func_280(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_837(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_283(iParam0));
}

BOOL func_954(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1EFD5 Hash - 0x866F5694 ^0x9EEAB7E1
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!bParam5 && !PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (PED::IS_PED_A_PLAYER(pedParam0))
		return false;

	if (bParam1)
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
			return false;

	if (bParam3 && func_1007(pedParam0))
		return false;

	if (bParam4)
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			return false;

	if (bParam2)
		if (func_1008(pedParam0, false) != -1)
			return false;

	return true;
}

BOOL func_955(Ped pedParam0, var uParam1) // Position - 0x1F061 Hash - 0xDC7D3FF5 ^0xDC7D3FF5
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (pedParam0 == uParam1->[i])
			return true;
	}

	return false;
}

BOOL func_956(ePedType eptParam0) // Position - 0x1F08D Hash - 0x5000025C ^0x5000025C
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

void func_957(Ped pedParam0, Hash hParam1) // Position - 0x1F4E0 Hash - 0xEA1C858E ^0xEDE426C1
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_300(pedParam0, hParam1))
		{
			if (func_937(pedParam0, hParam1))
			{
				if (func_938(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_939(pedParam0);
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

void func_958(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x1F588 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_959(Ped pedParam0, BOOL bParam1) // Position - 0x1F5B8 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_960(Ped pedParam0, int iParam1) // Position - 0x1F5FD Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

char* func_961(Hash hParam0) // Position - 0x1F624 Hash - 0xE6862179 ^0x700664E1
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

BOOL func_962(int iParam0) // Position - 0x206D6 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_704(iParam0, 2);
}

void func_963(int iParam0, int iParam1) // Position - 0x206E5 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_280(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
	return;
}

BOOL func_964(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x20706 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_355(hParam1) || !func_355(hParam0))
			return true;

	return hParam0 > hParam1;
}

float func_965(float fParam0, float fParam1, float fParam2) // Position - 0x20733 Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

void func_966(Ped pedParam0) // Position - 0x20775 Hash - 0xE7050FE7 ^0xCB7FE875
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

const char* func_967(int iParam0) // Position - 0x207DD Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_621(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_621(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_968(const char* sParam0, int iParam1) // Position - 0x20886 Hash - 0xB0CFF0C3 ^0x192F9EB7
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_1009(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_969(int iParam0) // Position - 0x208BC Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_570(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_970(float fParam0, Any anParam1, float fParam2) // Position - 0x208F2 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

struct<4> func_971(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x20907 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_425(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_658(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_972(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x20938 Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_977(false))
		return func_1010(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_979(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_658(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_973(int iParam0) // Position - 0x209AB Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_882(iParam0);

	if (hash == 0)
		return false;

	unk = { func_974(false) };

	if (func_1011(&unk, hash, false) > 0)
		return true;

	return false;
}

struct<4> func_974(BOOL bParam0) // Position - 0x209E0 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_971(joaat("character"), func_1012(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_975(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x209FC Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_658(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_976(Any* panParam0, Any* panParam1) // Position - 0x20A36 Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_658(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_977(BOOL bParam0) // Position - 0x20A65 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_106() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_658(bParam0));
}

int func_978(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11) // Position - 0x20A83 Hash - 0x657ADCCC ^0xBBA0C366
{
	var unk;
	int num;
	int itemSlotMaxCount;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_979(uParam0, &unk, true, false))
		return -1;

	if (func_980(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	num = func_1013(unk.f_4, uParam4, hParam8, false);
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

	unk15 = { func_1014(&unk) };
	unk15.f_4 = { uParam4 };
	unk15.f_11 = hParam8;
	unk15.f_10 = iParam10;
	num2 = func_1015(1168099063, &unk15, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_979(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x20B81 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_658(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_980(var uParam0, var uParam1) // Position - 0x20BB1 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_981(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x20BF2 Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_980(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_979(uParam0, &unk, true, false) || !func_979(uParam4, &unk15, true, false))
		return -1;

	if (func_980(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_1014(&unk) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_1014(&unk15) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
		{
			if (func_1016(num, 1168099063, &unk29) && func_1016(num, 1168099063, &unk46))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1017(num, 1);
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
		num = func_1015(1168099063, &unk29, false);
		num = func_1015(1168099063, &unk46, false);
	}

	return num;
}

BOOL func_982(Hash hParam0) // Position - 0x20D9C Hash - 0xE48228D0 ^0xE48228D0
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

int func_983() // Position - 0x20E20 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_984(int iParam0) // Position - 0x20E31 Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

BOOL func_985(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x20E44 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_658(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_979(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

int func_986(Hash hParam0) // Position - 0x20E88 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_425(hParam0, 0))
		return 0;

	category = func_423(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_987(int iParam0, int iParam1) // Position - 0x20EB7 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_988(int iParam0, int iParam1) // Position - 0x20EC8 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

var func_989(BOOL bParam0, var uParam1, var uParam2) // Position - 0x20EDB Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_990(int iParam0, int iParam1, int iParam2) // Position - 0x20EF2 Hash - 0xD8381BE7 ^0xD8381BE7
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

BOOL func_991(int iParam0, BOOL bParam1) // Position - 0x20F9B Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_1018(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

void func_992(Player plParam0) // Position - 0x20FDA Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_1019(plParam0, false))
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

void func_993(Player plParam0) // Position - 0x21026 Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_1019(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 0, false);
	return;
}

void func_994(Player plParam0) // Position - 0x21053 Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_1019(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, false);
	return;
}

void func_995(Ped pedParam0) // Position - 0x21089 Hash - 0x6EDA2DDB ^0x823A87C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (func_371(14))
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

void func_996(Player plParam0) // Position - 0x21108 Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_1019(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, true);
	return;
}

int func_997(int iParam0, var uParam1, var uParam2) // Position - 0x2113C Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_1020(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_998(int iParam0, eStackSize essParam1) // Position - 0x2115E Hash - 0x2641680 ^0x6B70222B
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
		if (func_822(essParam1, num))
			num2 = num;

	return num2;
}

int func_999(int iParam0) // Position - 0x21235 Hash - 0xDEAE5330 ^0x7DE1135D
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

BOOL func_1000(Hash hParam0) // Position - 0x212AC Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

int func_1001(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x212D4 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_1021(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_1022(398 + i, 1);
		
			if (func_1023(hParam0, &unk, hash, false))
			{
				if (func_1024(hParam0, &unk6, hash))
				{
					unk28 = { func_971(hParam0, unk, hash, false) };
					func_1025(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_977(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_1026(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_1027(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_1002(Ped pedParam0, var uParam1, var uParam2) // Position - 0x21426 Hash - 0x236D39D4 ^0x39F583A
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

BOOL func_1003(Hash hParam0) // Position - 0x2163D Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

BOOL func_1004(eStackSize essParam0, int iParam1) // Position - 0x2164F Hash - 0x63F6278D ^0x98AA8E70
{
	if (!func_566(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1 != false;
}

Hash func_1005(eStackSize essParam0) // Position - 0x21677 Hash - 0x5007D79D ^0xEC52003
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

int func_1006(eStackSize essParam0) // Position - 0x21684 Hash - 0xF239A6CA ^0xF239A6CA
{
	switch (essParam0)
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
			if (func_131(45))
				return 1;
			else
				return 2;
			break;
	
		case 11:
			if (func_131(45))
				return 2;
			else
				return 1;
			break;
	}

	return 0;
}

BOOL func_1007(Ped pedParam0) // Position - 0x2171F Hash - 0x66CDA584 ^0x67C9C44C
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_GROUP_MEMBER(pedParam0, func_1028(), true))
		return 1;

	return 0;
}

int func_1008(Ped pedParam0, BOOL bParam1) // Position - 0x21748 Hash - 0x46B9578F ^0x31193522
{
	return func_1029(pedParam0, Global_1894899.f_2, bParam1);
}

const char* func_1009(const char* sParam0, int iParam1) // Position - 0x2175E Hash - 0x9E99F03 ^0x953D5631
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1010(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x21778 Hash - 0x4C6CAF1 ^0xEE857D47
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

	if (!func_979(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_586(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_1030(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_1031(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_1032(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_1033(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_1014(&unk) };
		unk62.f_10 = iParam4;
		num = func_1015(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_1011(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x2186F Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_658(bParam2), panParam0, hParam1);
}

struct<4> func_1012() // Position - 0x21885 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_1013(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x21891 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_425(hParam0, 0))
		return 0;

	guid = { func_971(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_658(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<17> func_1014(var uParam0) // Position - 0x218D9 Hash - 0x4CD39800 ^0x7DC5804
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

int func_1015(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x2192D Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1016(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1017(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1017(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_1017(num, 1);
		return num;
	}

	return -1;
}

BOOL func_1016(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x219B4 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_1017(int iParam0, int iParam1) // Position - 0x219CB Hash - 0x18C74423 ^0xA1132A0
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

	func_1034(iParam0, iParam1);
	return;
}

BOOL func_1018(int iParam0) // Position - 0x21A2D Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_1035(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

BOOL func_1019(Ped pedParam0, BOOL bParam1) // Position - 0x21A51 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

int func_1020(int iParam0, int iParam1) // Position - 0x21A7E Hash - 0xB7443904 ^0xB7443904
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

struct<5> func_1021(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21E12 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_974(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_586(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_1038(hParam0, -1823706425))
			{
				unk = { func_971(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_1038(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_971(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_1037(bParam1) };
		
			switch (func_423(hParam0))
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
				unk = { func_971(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_915(bParam1) };
		
			if (bParam2 && func_1036(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_1023(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_1023(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_1024(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_979(unk, &unk28, bParam1, false))
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

Hash func_1022(int iParam0, int iParam1) // Position - 0x220CF Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_1023(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x2421D Hash - 0x4285A587 ^0x4285A587
{
	return func_1013(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_1024(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x24235 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_1039(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_1025(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x24256 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_1040(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_979(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_977(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_658(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_1026(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x242E6 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_1041(hParam0))
		return 0;

	if (!func_977(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_1027(Hash hParam0, int iParam1) // Position - 0x24321 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_1042(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

int func_1028() // Position - 0x24369 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_1029(Ped pedParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x24379 Hash - 0x7B4C7353 ^0x7B4C7353
{
	var unk;
	var unk2;

	if (essParam1 == -1)
		return -1;

	if (!func_1043(essParam1, &unk, &unk2, false, false))
		return -1;

	return func_1044(pedParam0, unk, unk2, bParam2);
}

struct<29> func_1030(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x243AB Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_658(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_1014(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_1031(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x24444 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1045(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1017(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1017(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_1017(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_1032(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x244CB Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_658(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_1014(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_1033(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x2453E Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1046(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1017(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1017(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_1017(num, 1);
		return num;
	}

	return -1;
}

void func_1034(int iParam0, int iParam1) // Position - 0x245C5 Hash - 0x26256B16 ^0x79A35F4E
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

int func_1035(int iParam0, var uParam1, var uParam2) // Position - 0x24642 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_1047(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_1036(Hash hParam0, BOOL bParam1) // Position - 0x24664 Hash - 0x62864AB ^0xBC339691
{
	if (func_423(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_131(24);
		else
			return true;

	return false;
}

struct<4> func_1037(BOOL bParam0) // Position - 0x2469D Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_658(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_971(271701509, func_974(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_971(271701509, func_974(bParam0), 12999093, false);
}

BOOL func_1038(Hash hParam0, Hash hParam1) // Position - 0x24701 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_423(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_1039(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x24760 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_658(false);
	*panParam1 = { func_971(hParam0, func_915(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_1040(Hash hParam0) // Position - 0x247A5 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_1041(Hash hParam0) // Position - 0x247BB Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_1042(int iParam0, int iParam1) // Position - 0x247C9 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_1043(eStackSize essParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x247DF Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_106() != -1;

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
			*uParam1 = 744;
			*uParam2 = 744;
		
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

int func_1044(Ped pedParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x24E9F Hash - 0x32945A99 ^0xFCA9036B
{
	PersChar perscharIndexFromPedIndex;
	int i;
	int num;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) && !bParam3)
		return -1;

	perscharIndexFromPedIndex = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedParam0);

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(perscharIndexFromPedIndex))
		return -1;

	i = uParam1;

	for (i = uParam1; i <= uParam2; i = i + 1)
	{
		num = i;
	
		if (func_281(num) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(num)))
			if (func_283(num) == perscharIndexFromPedIndex)
				return num;
	}

	return -1;
}

BOOL func_1045(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x24F19 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_1046(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x24F30 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

int func_1047(int iParam0, int iParam1) // Position - 0x24F47 Hash - 0x99A93628 ^0x27AE8C83
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

