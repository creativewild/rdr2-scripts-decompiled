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
	BOOL bLocal_14 = 0;
	BOOL bLocal_15 = 0;
	Hash hLocal_16 = 0;
	BOOL bLocal_17 = 0;
	BOOL bLocal_18 = 0;
	Entity eLocal_19 = 0;
	Object* pobLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	var uLocal_36 = 24;
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
	var uLocal_135 = 4;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 5;
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
	var uLocal_200 = 6;
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
	var uLocal_231 = 15;
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
	var uLocal_307 = 2;
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
	var uLocal_318 = 22;
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
	var uLocal_445 = 56;
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
	var uLocal_1018 = 2;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 8;
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
	var uLocal_1041 = 4;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 4;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 3;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
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

void main() // Position - 0x0 Hash - 0xED856DCA ^0x93A79849
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Vector3 vector;
	int num;
	int i;
	BOOL flag4;
	float num2;
	BOOL flag5;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	flag = false;
	flag2 = false;
	flag3 = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&iLocal_22, true);
		func_2(&(Global_40.f_9028.f_12), 4);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		func_1(&iLocal_22, true);
		func_2(&(Global_40.f_9028.f_12), 4);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (func_3(144))
		func_4(&(Global_40.f_9028.f_12), 1);

	if (func_5(Global_1394141.f_1326, -2147483648))
		func_2(&(Global_1394141.f_1326), -2147483648);

	iLocal_22.f_125 = uScriptParam_0.f_1;

	if (!Global_1935630.f_12)
	{
		if (func_6(Global_35, Global_1394141.f_7[iLocal_22.f_125 /*31*/].f_4, true, 0))
		{
			if (func_8(func_7(Global_35, false, 0, false)))
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		
			if (func_8(func_7(Global_35, false, 1, false)))
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
		}
	}

	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), false);

	while (true)
	{
		flag = func_6(Global_35, Global_1394141.f_7[iLocal_22.f_125 /*31*/].f_4, true, 0);
		flag2 = func_6(Global_35, iLocal_22.f_119[4], true, 0);
		flag3 = func_5(Global_1394141.f_1326, 8192);
	
		if (flag || flag2)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP_CARRIABLE"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP_CARRIABLE2"), false);
		}
	
		if (flag2)
			func_9();
		else
			func_10(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
	
		func_11(flag);
		iLocal_22.f_112 = func_12(Global_35, Global_1394141.f_7[iLocal_22.f_125 /*31*/].f_1, true);
	
		if (func_13(PLAYER::GET_PLAYER_INDEX(), true, false, true) && iLocal_22 != 9 && iLocal_22 != 10)
		{
			func_4(&(iLocal_22.f_13), 128);
			func_14(&iLocal_22, 9);
		}
	
		if (func_15(&iLocal_22, flag))
		{
			if (iLocal_22 != 9 && iLocal_22 != 10)
			{
				func_4(&(iLocal_22.f_13), 128);
				func_14(&iLocal_22, 9);
			}
		}
	
		if (iLocal_22 < 9)
		{
			if (iLocal_22.f_112 > 75f && !flag3)
			{
				func_4(&(iLocal_22.f_13), -2147483648);
				func_14(&iLocal_22, 9);
			}
		
			if (func_5(Global_1394141.f_1326, -2147483648))
			{
				func_4(&(iLocal_22.f_13), -2147483648);
				func_14(&iLocal_22, 9);
			}
		}
	
		func_16(&iLocal_22, flag);
		func_17(&iLocal_22);
	
		if (!flag)
		{
			if (func_18(iLocal_22.f_125) && !flag3 && iLocal_22 < 9)
			{
				func_4(&(iLocal_22.f_13), -2147483648);
				func_14(&iLocal_22, 9);
			}
		
			if (func_19(1) || Global_1415398.f_1)
			{
				if (!func_20(&(iLocal_22.f_135)))
				{
					func_21(&(iLocal_22.f_135));
				}
				else if (func_22(&(iLocal_22.f_135)) > 10f)
				{
					if (Global_1415398.f_1)
						Global_1415398.f_1 = 0;
				
					if (func_19(1))
						func_23(1);
				
					if (func_5(iLocal_22.f_13, 4194304))
					{
						func_24();
						POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
						func_25();
						func_2(&(iLocal_22.f_13), 4194304);
					}
				
					func_26(false);
					func_27(&(iLocal_22.f_135));
				}
			}
		}
		else
		{
			if (!func_19(1))
			{
				func_28(1);
				func_29(-1, false, 0, false, false);
				func_30();
			}
		
			if (!func_5(iLocal_22.f_13, 4194304))
			{
				func_31();
				POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
				func_32(80);
				func_4(&(iLocal_22.f_13), 4194304);
			}
		
			if (!Global_1415398.f_1)
				Global_1415398.f_1 = 1;
		
			if (func_20(&(iLocal_22.f_135)))
				func_27(&(iLocal_22.f_135));
		}
	
		func_33(&(iLocal_22.f_178), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
		func_34(&(iLocal_22.f_178), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
		func_35(&iLocal_22);
		func_36(&iLocal_22);
	
		switch (iLocal_22)
		{
			case 0:
				PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
				iLocal_22.f_12 = uScriptParam_0.f_2;
				func_2(&(Global_1394141.f_1326), 4096);
				func_37(&iLocal_22);
				func_38(&(iLocal_22.f_178));
				func_4(&(Global_1394141.f_1325), 512);
				func_4(&(Global_1394141.f_1325), 131072);
				Global_1394141.f_1331 = 0;
				Global_1394141.f_1324 = 0;
			
				if (func_39())
					func_40(&(iLocal_22.f_14), Global_35, "JOHN", false);
				else
					func_40(&(iLocal_22.f_14), Global_35, "ARTHUR", false);
			
				func_14(&iLocal_22, 1);
				break;
		
			case 1:
				if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
					return;
			
				if (func_41() && func_42() && func_43() && func_44() && func_45() && func_46(&iLocal_22))
					func_14(&iLocal_22, 2);
				break;
		
			case 2:
				if (func_47(&iLocal_22))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_22.f_128, "CURTAIN", iLocal_22.f_127, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_22.f_128);
				
					for (i = 1; i <= 5 - 1; i = i + 1)
					{
						num = i;
					
						if (!VOLUME::DOES_VOLUME_EXIST(iLocal_22.f_119[num]))
						{
							vector = { func_48(num) };
							iLocal_22.f_119[num] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vector.f_10, vector, vector.f_3, vector.f_6, vector.f_9);
						}
					}
				
					func_49(&(iLocal_22.f_984), 0);
					func_14(&iLocal_22, 3);
				}
				break;
		
			case 3:
				if (func_50(&(iLocal_22.f_984), 0))
					func_14(&iLocal_22, 4);
				break;
		
			case 4:
				if (func_51(&(iLocal_22.f_423), 0, iLocal_22.f_125))
					func_14(&iLocal_22, 5);
				break;
		
			case 5:
				if (func_52(&(iLocal_22.f_423), &(iLocal_22.f_984), 0))
					if (func_53(&(iLocal_22.f_423), 0))
						func_14(&iLocal_22, 6);
				break;
		
			case 6:
				VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[iLocal_22.f_125 /*31*/].f_4, joaat("rel_gang_dutchs"));
				func_4(&(Global_1394141.f_1326), 4096);
				BUILTIN::SETTIMERA(0);
				func_14(&iLocal_22, 7);
				break;
		
			case 7:
				flag4 = false;
			
				if (BUILTIN::TIMERA() > 30000)
				{
					flag4 = true;
					Global_1394141.f_1330 = 1;
				}
			
				if (flag || flag2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_22.f_984.f_12[1 /*2*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_22.f_984.f_12[1 /*2*/], true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_22.f_984.f_12[1 /*2*/], false))
						ANIMSCENE::START_ANIM_SCENE(iLocal_22.f_984.f_12[1 /*2*/]);
				
					if (!func_20(&(iLocal_22.f_132)))
					{
						func_21(&(iLocal_22.f_132));
					}
					else
					{
						num2 = func_22(&(iLocal_22.f_132));
					
						if (num2 > 10f)
							flag4 = true;
					
						if (num2 > 5f && !Global_1394141.f_1330)
							Global_1394141.f_1330 = 1;
					}
				}
			
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_22.f_984.f_12[1 /*2*/], false))
					func_54(&(iLocal_22.f_984), &(iLocal_22.f_423), 0);
			
				if (flag4)
				{
					func_4(&(Global_1394141.f_1325), 2);
					func_4(&(Global_1394141.f_1325), 4096);
					func_55(&iLocal_22);
					func_56();
					func_27(&(iLocal_22.f_132));
					func_14(&iLocal_22, 8);
				}
				break;
		
			case 8:
				func_54(&(iLocal_22.f_984), &(iLocal_22.f_423), 0);
				func_57(&iLocal_22);
			
				if (func_58(&iLocal_22))
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_22.f_118) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_22.f_118, false))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_22.f_118);
						func_4(&(Global_1394141.f_1325), 4);
						func_4(&(Global_1394141.f_1325), 8192);
						iLocal_22.f_984.f_19 = 1;
						Global_1394141.f_1329 = 1;
						Global_1394141.f_1332 = 48;
						func_14(&iLocal_22, 9);
					}
				}
				break;
		
			case 9:
				flag5 = func_5(iLocal_22.f_13, -2147483648);
				func_59(&iLocal_22);
				func_54(&(iLocal_22.f_984), &(iLocal_22.f_423), 0);
				func_60(&iLocal_22);
				func_61(&iLocal_22);
			
				if (func_1(&iLocal_22, flag5) && !func_62(iLocal_22.f_125))
				{
					func_63();
					func_14(&iLocal_22, 10);
				}
				break;
		
			case 10:
				func_2(&(Global_1394141.f_1326), 8192);
				func_2(&(Global_1394141.f_1326), 4096);
				func_2(&(Global_40.f_9028.f_12), 4);
				Global_1394141.f_1328 = 0;
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_1(var uParam0, BOOL bParam1) // Position - 0x859 Hash - 0x68B9509D ^0x6525E7A
{
	BOOL flag;
	BOOL flag2;
	Interior interiorAtCoords;

	flag = func_6(Global_35, Global_1394141.f_7[uParam0->f_125 /*31*/].f_4, true, 0);
	flag2 = func_6(Global_35, iLocal_22.f_119[4], true, 0);

	if (func_20(&(uParam0->f_9)))
		func_27(&(uParam0->f_9));

	Global_1394141.f_1328 = 0;
	Global_1394141.f_1330 = 0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_141))
	{
		if (CAM::IS_CAM_RENDERING(uParam0->f_141))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
		}
	
		CAM::DESTROY_CAM(uParam0->f_141, false);
	}

	INVENTORY::_INVENTORY_ENABLE_WEAPONS(func_64(false));
	func_26(false);

	if (func_5(iLocal_22.f_13, 67108864))
	{
		interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(func_65(0));
	
		if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
			INTERIOR::UNPIN_INTERIOR(interiorAtCoords);
	
		func_2(&(iLocal_22.f_13), 67108864);
	}

	if (func_5(iLocal_22.f_13, 4194304))
	{
		func_24();
		POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
		func_25();
		func_2(&(iLocal_22.f_13), 4194304);
	}

	if (Global_1415398.f_1)
		Global_1415398.f_1 = 0;

	if (func_19(1))
		func_23(1);

	if (bParam1)
	{
		if (func_66(uParam0))
		{
			func_67(&(uParam0->f_423), Global_1394141.f_7[uParam0->f_125 /*31*/].f_4);
		
			if (func_19(1))
				func_23(1);
		
			if (Global_1415398.f_1)
				Global_1415398.f_1 = 0;
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[uParam0->f_125 /*31*/].f_4) && VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[uParam0->f_125 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[uParam0->f_125 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_126, -1f);
				PED::DELETE_PED(&(uParam0->f_126));
			}
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_128))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_128);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
				OBJECT::DELETE_OBJECT(&(uParam0->f_127));
		
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		
			func_68(&(uParam0->f_984), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
			func_69(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
			func_70(&(uParam0->f_178));
			func_71();
			Global_1394141.f_1321 = 0;
			Global_1394141.f_1322 = 0;
			Global_1394141.f_1323 = 0;
		
			if (!func_5(Global_1394141.f_1326, -2147483648))
				Global_1394141.f_1327 = 0;
		
			func_72(uParam0);
			return true;
		}
	}
	else
	{
		if (func_5(uParam0->f_13, 128) && !func_5(uParam0->f_13, 32))
		{
			func_67(&(uParam0->f_423), Global_1394141.f_7[uParam0->f_125 /*31*/].f_4);
			func_4(&(uParam0->f_13), 32);
		}
	
		if (!flag)
		{
			if (func_19(1))
				func_23(1);
		
			if (Global_1415398.f_1)
				Global_1415398.f_1 = 0;
		}
	
		if (!flag && !flag2 && iLocal_22.f_112 > 17f)
		{
			if (func_66(uParam0) && !func_73(Global_36))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_126, -1f);
					PED::DELETE_PED(&(uParam0->f_126));
				}
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_128))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_128);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
					OBJECT::DELETE_OBJECT(&(uParam0->f_127));
			
				if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[uParam0->f_125 /*31*/].f_4) && VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[uParam0->f_125 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
					VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[uParam0->f_125 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
			
				func_70(&(uParam0->f_178));
				func_68(&(uParam0->f_984), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
				func_69(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
				func_71();
				func_67(&(uParam0->f_423), Global_1394141.f_7[uParam0->f_125 /*31*/].f_4);
				Global_1394141.f_1321 = 0;
				Global_1394141.f_1322 = 0;
				Global_1394141.f_1323 = 0;
			
				if (!func_5(Global_1394141.f_1326, -2147483648))
					Global_1394141.f_1327 = 0;
			
				func_72(uParam0);
				return true;
			}
		}
	}

	return false;
}

void func_2(int iParam0, int iParam1) // Position - 0xC73 Hash - 0xF55E891F ^0xF55E891F
{
	func_74(iParam0, iParam1);
	return;
}

BOOL func_3(int iParam0) // Position - 0xC83 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_75() != -1)
		return false;

	if (!func_76(iParam0))
		return false;

	return func_77(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_4(int iParam0, int iParam1) // Position - 0xCB4 Hash - 0xF55E891F ^0xF55E891F
{
	func_78(iParam0, iParam1);
	return;
}

BOOL func_5(int iParam0, int iParam1) // Position - 0xCC4 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_6(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0xCD3 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

Hash func_7(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xD09 Hash - 0xDD2F88C2 ^0x29E97850
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_8(Hash hParam0) // Position - 0xD4B Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

void func_9() // Position - 0xD66 Hash - 0x8D541C9D ^0x9EEA75C4
{
	BOOL flag;
	Hash hash;

	PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	switch (iLocal_21)
	{
		case 0:
			flag = false;
		
			if (func_79(Global_35) || func_80(Global_35))
			{
				bLocal_18 = true;
				pobLocal_20 = func_81();
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, pobLocal_20, func_82(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
				func_83(2);
				func_84(-1);
				func_85(func_82(PLAYER::GET_PLAYER_INDEX()));
				hash = func_86();
				func_87(hash);
				flag = true;
			}
			else if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				bLocal_17 = true;
				eLocal_19 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, eLocal_19, func_82(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
				flag = true;
			}
		
			if (flag)
				func_88(&iLocal_21, 1);
			break;
	
		case 1:
			func_88(&iLocal_21, 2);
			break;
	
		case 2:
			if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_79(Global_35) && !func_80(Global_35))
				func_88(&iLocal_21, 3);
			break;
	
		case 3:
			func_88(&iLocal_21, 0);
			break;
	}

	return;
}

void func_10(int iParam0) // Position - 0xE77 Hash - 0x541BA016 ^0xBDC9BDD
{
	Vector3 vector;
	Hash hash;

	if (bLocal_17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eLocal_19))
		{
			if (func_89(Global_35, eLocal_19, true, true) > 7f && !ENTITY::IS_ENTITY_ON_SCREEN(eLocal_19))
			{
				vector = { func_90(iParam0) };
				vector.f_2 = vector.f_2 - 1f;
				ENTITY::SET_ENTITY_COORDS(eLocal_19, vector, true, false, true, true);
				bLocal_17 = false;
			}
		}
		else
		{
			bLocal_17 = false;
		}
	}
	else if (bLocal_18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pobLocal_20))
		{
			if (func_89(Global_35, pobLocal_20, true, true) > 7f && !ENTITY::IS_ENTITY_ON_SCREEN(pobLocal_20))
			{
				ENTITY::SET_ENTITY_COORDS(pobLocal_20, func_90(iParam0), true, false, true, true);
				func_83(2);
				func_84(-1);
				func_85(func_90(iParam0));
				hash = func_86();
				func_87(hash);
				bLocal_18 = false;
			}
		}
		else
		{
			bLocal_18 = false;
		}
	}

	return;
}

void func_11(BOOL bParam0) // Position - 0xF3A Hash - 0x5A25F0B8 ^0x5A25F0B8
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	int scriptTaskStatus;
	int scriptTaskStatus2;

	flag = true;
	flag2 = true;
	flag3 = true;
	flag4 = true;
	flag5 = true;
	flag6 = false;

	if (func_5(Global_1394141.f_1326, 1))
	{
		flag4 = false;
		flag2 = false;
		flag5 = false;
	}

	if (func_5(Global_1394141.f_1326, 2))
		flag = false;

	if (func_5(Global_1394141.f_1326, 4))
	{
		flag3 = false;
		flag = false;
		flag2 = false;
	}

	if (func_5(Global_1394141.f_1326, 64))
		flag3 = false;

	if (func_5(Global_1394141.f_1326, 512))
		flag6 = true;

	func_91(false);

	if (bParam0)
	{
		if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_64(false), joaat("WEAPON_UNARMED"), false))
			INVENTORY::_INVENTORY_ENABLE_ITEM(func_64(false), joaat("WEAPON_UNARMED"));
	
		if (!flag)
		{
			if (!func_5(Global_1394141.f_1326, 8))
			{
				if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
				
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &hLocal_16, true, 2, false))
					{
						if (hLocal_16 != joaat("WEAPON_UNARMED") && hLocal_16 != joaat("OBJECT_1") && hLocal_16 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_64(false), hLocal_16, false))
							{
								INVENTORY::_INVENTORY_ENABLE_ITEM(func_64(false), hLocal_16);
								func_92(hLocal_16);
							}
						}
					
						if (VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
							VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
					
						func_4(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		else if (func_5(Global_1394141.f_1326, 8))
		{
			if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && flag4)
			{
				VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("rel_gang_dutchs"));
				func_2(&(Global_1394141.f_1326), 8);
			}
		}
		else
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &hLocal_16, true, 0, false))
			{
				scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(Global_35, SCRIPT_TASK_SWAP_WEAPON, true);
				scriptTaskStatus2 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true);
			
				if (hLocal_16 != joaat("WEAPON_UNARMED") && hLocal_16 != joaat("OBJECT_1") && hLocal_16 != joaat("OBJECT_2") && scriptTaskStatus != 1 && scriptTaskStatus != 0 && scriptTaskStatus2 != 1 && scriptTaskStatus2 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				
					if (PED::IS_PED_USING_ACTION_MODE(Global_35))
						PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				}
			}
		
			func_93(&hLocal_16, true);
		}
	
		if (flag4)
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
	
		if (flag2)
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	
		if (flag)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK2"), false);
		}
	
		if (flag3)
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
	
		CAM::_0x632BE8D84846FA56();
		CAM::_0x3C8F74E8FE751614();
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_COVER"), false);
	
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, true);
	
		if (flag5)
		{
			if (flag6)
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			else
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(1664736751);
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			if (flag6)
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
		
			if (!func_5(Global_1394141.f_1326, 8))
			{
				if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &hLocal_16, true, 2, false))
					{
						if (hLocal_16 != joaat("WEAPON_UNARMED") && hLocal_16 != joaat("OBJECT_1") && hLocal_16 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_64(false), hLocal_16, false))
							{
								INVENTORY::_INVENTORY_ENABLE_ITEM(func_64(false), hLocal_16);
								func_92(hLocal_16);
							}
						}
					
						if (VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
							VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
					
						func_4(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
	
		func_94();
	}
	else
	{
		func_95();
		func_93(&hLocal_16, true);
	
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
	}

	return;
}

float func_12(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x13DF Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_13(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1407 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_96(bParam1, bParam2, bParam3);

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

void func_14(var uParam0, int iParam1) // Position - 0x153C Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_15(var uParam0, BOOL bParam1) // Position - 0x1549 Hash - 0x91153EED ^0x2F9CFF6
{
	BOOL flag;
	BOOL flag2;

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		flag = false;
		flag2 = false;
	
		switch (uParam0->f_984)
		{
			case 9:
			case 11:
			case 15:
				flag = true;
				break;
		}
	
		if (flag)
		{
			if (!bParam1)
				flag2 = true;
		
			switch (uParam0->f_984)
			{
				case 9:
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1394141.f_1335, false))
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_A_Performance"))
							flag2 = true;
					break;
			
				case 11:
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1394141.f_1335, false))
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_A_Performance") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_B_Trying_To_Escape"))
							flag2 = true;
					break;
			
				case 15:
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1394141.f_1335, false))
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "pbl_FightIntro"))
							flag2 = true;
					break;
			}
		}
		else
		{
			flag2 = true;
		}
	
		if (flag2)
			return true;
	}

	return false;
}

void func_16(var uParam0, BOOL bParam1) // Position - 0x1676 Hash - 0xB6BD28EE ^0xD6D261AC
{
	if (!func_5(uParam0->f_13, 131072))
	{
		if (bParam1)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("show_crowd_sfx_start");
			func_4(&(uParam0->f_13), 131072);
		}
	}
	else if (!bParam1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("show_crowd_sfx_stop");
		func_2(&(uParam0->f_13), 131072);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_118))
		if (bParam1)
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd"))
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd", true, false);
		else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd"))
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd", false, false);

	return;
}

void func_17(var uParam0) // Position - 0x170E Hash - 0xA7637CDA ^0xDD1C1706
{
	switch (uParam0->f_8)
	{
		case 0:
			if (*uParam0 >= 6 && *uParam0 <= 8 && !func_97())
				func_98(&(uParam0->f_8), 1);
		
			if (func_6(Global_35, Global_1394141.f_7[uParam0->f_1030 /*31*/].f_4, true, 0) && !func_97() && *uParam0 >= 6)
				func_98(&(uParam0->f_8), 1);
			break;
	
		case 1:
			if (func_99(uParam0->f_125))
				func_98(&(uParam0->f_8), 2);
			break;
	
		case 2:
			if (func_97() && !func_6(Global_35, Global_1394141.f_7[uParam0->f_1030 /*31*/].f_4, true, 0))
				func_98(&(uParam0->f_8), 3);
		
			if (*uParam0 == 9 && !func_6(Global_35, Global_1394141.f_7[uParam0->f_125 /*31*/].f_4, true, 0) && !func_6(Global_35, uParam0->f_119[4], true, 0) && uParam0->f_112 > 17f)
				func_98(&(uParam0->f_8), 3);
			break;
	
		case 3:
			if (func_100(uParam0->f_125))
				func_98(&(uParam0->f_8), 0);
			break;
	}

	return;
}

BOOL func_18(int iParam0) // Position - 0x184C Hash - 0x3E922A04 ^0xA2448904
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (MISC::GET_FRAME_COUNT() % 15 == 0)
	{
		func_101(Global_40.f_9028.f_6[Global_1394141.f_7[iParam0 /*31*/].f_30], &unk, &unk2, &num, &num2, &num3, &num4);
	
		if (num >= 11 || num2 >= 1 || num3 >= 1 || num4 >= 1)
			return true;
	}

	return false;
}

BOOL func_19(int iParam0) // Position - 0x18B0 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_20(var uParam0) // Position - 0x18C4 Hash - 0x5001E582 ^0x5001E582
{
	return func_102(*uParam0, 1);
}

void func_21(var uParam0) // Position - 0x18D4 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_103(uParam0, 0f);
	return;
}

float func_22(var uParam0) // Position - 0x18E3 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_20(uParam0))
		return uParam0->f_1;

	if (func_104(uParam0))
		return uParam0->f_2;

	return func_105() - uParam0->f_1;
}

void func_23(int iParam0) // Position - 0x1918 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1310750.f_16035 = Global_1310750.f_16035 - Global_1310750.f_16035 && iParam0;
	return;
}

void func_24() // Position - 0x1939 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_25() // Position - 0x1941 Hash - 0xF2003801 ^0xAF8734D7
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_1934765.f_275[i /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765.f_286 = Global_1934765.f_286 + Global_1934765.f_275[i /*2*/].f_1;
			Global_1934765.f_275[i /*2*/] = 0;
			Global_1934765.f_275[i /*2*/].f_1 = 0;
			func_106();
			return;
		}
	}

	return;
}

void func_26(BOOL bParam0) // Position - 0x19AA Hash - 0xA32F7B01 ^0x449C7683
{
	if (bParam0)
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("shows_player_callout_scene"))
			AUDIO::START_AUDIO_SCENE("shows_player_callout_scene");
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("shows_player_callout_scene"))
		AUDIO::STOP_AUDIO_SCENE("shows_player_callout_scene");

	return;
}

void func_27(var uParam0) // Position - 0x19DE Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_28(int iParam0) // Position - 0x19F4 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1310750.f_16035 = Global_1310750.f_16035 || iParam0;
	return;
}

void func_29(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1A0D Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_107() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_108(num) && !func_109(num, iParam2) && !bParam3 || !func_110(num) && !bParam4 || !func_111(num))
			if (num != iParam0)
				func_112(i);
	}

	return;
}

void func_30() // Position - 0x1A9B Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_108(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_113(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_31() // Position - 0x1B0E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_32(int iParam0) // Position - 0x1B16 Hash - 0x299A116B ^0x246DE950
{
	int num;

	if (iParam0 > 150)
		iParam0 = 150;

	iParam0 > Global_1934765.f_286 - 150;

	if (func_114(&num))
	{
		if (Global_1934765.f_275[num /*2*/].f_1 != iParam0)
		{
			Global_1934765.f_286 = Global_1934765.f_286 + Global_1934765.f_275[num /*2*/].f_1;
			Global_1934765.f_275[num /*2*/].f_1 = iParam0;
			Global_1934765.f_286 = Global_1934765.f_286 - iParam0;
			STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_115());
		}
	
		return;
	}

	num = func_116();

	if (num == -1)
		return;

	Global_1934765.f_275[num /*2*/].f_1 = iParam0;
	Global_1934765.f_275[num /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765.f_286 = Global_1934765.f_286 - iParam0;
	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_115());
	return;
}

int func_33(var uParam0, int iParam1) // Position - 0x1BE3 Hash - 0xB82721C2 ^0x2709DA1A
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam1 == -1 || !func_5(Global_1394141.f_1325, -2147483648))
		return 1;

	i = 0;
	num = 0;
	num2 = 0;

	if (!func_5(Global_1394141.f_1325, 1))
	{
		num = func_117(iParam1);
	
		for (i = 0; i <= num - 1; i = i + 1)
		{
			num3 = i;
		
			if (func_120(&uParam0->[i /*5*/], func_118(iParam1), func_119(iParam1, num3), 1065353216))
				num2 = num2 + 1;
		}
	
		if (num2 >= num)
			func_4(&(Global_1394141.f_1325), 1);
	}

	num2 = 0;

	if (!func_5(Global_1394141.f_1325, 8))
	{
		num = func_121(iParam1);
	
		for (i = 0; i <= num - 1; i = i + 1)
		{
			num4 = i;
		
			if (func_120(&uParam0->f_31[i /*5*/], func_122(iParam1), func_123(iParam1, num4), 1065353216))
				num2 = num2 + 1;
		}
	
		if (num2 >= num)
			func_4(&(Global_1394141.f_1325), 8);
	}

	num2 = 0;

	if (!func_5(Global_1394141.f_1325, 2048))
	{
		num = func_124(iParam1);
	
		for (i = 0; i <= num - 1; i = i + 1)
		{
			num5 = i;
		
			if (func_120(&uParam0->f_107[i /*5*/], func_125(iParam1), func_126(iParam1, num5), 1065353216))
				num2 = num2 + 1;
		}
	
		if (num2 >= num)
			func_4(&(Global_1394141.f_1325), 2048);
	}

	switch (iParam1)
	{
		case 0:
			if (!func_5(Global_1394141.f_1325, 64) && func_120(&uParam0->f_118[0 /*5*/], func_127(iParam1, 0), func_128(iParam1, 0), 1065353216))
				func_4(&(Global_1394141.f_1325), 64);
		
			if (!func_5(Global_1394141.f_1325, 16384) && func_120(&uParam0->f_118[1 /*5*/], func_127(iParam1, 1), func_128(iParam1, 1), 1065353216) && func_120(&uParam0->f_118[2 /*5*/], func_127(iParam1, 2), func_128(iParam1, 2), 1065353216))
				func_4(&(Global_1394141.f_1325), 16384);
			break;
	
		case 1:
		case 2:
			num2 = 0;
		
			if (!func_5(Global_1394141.f_1325, 2097152))
			{
				num = func_129(iParam1);
			
				for (i = 0; i <= num - 1; i = i + 1)
				{
					num6 = i;
				
					if (func_120(&uParam0->f_118[i /*5*/], func_127(iParam1, 0), func_128(iParam1, num6), 1065353216))
						num2 = num2 + 1;
				}
			
				if (num2 >= num)
					func_4(&(Global_1394141.f_1325), 2097152);
			}
			break;
	}

	return 1;
}

void func_34(var uParam0, int iParam1) // Position - 0x1EA2 Hash - 0x5206E993 ^0x8838B01E
{
	BOOL flag;
	BOOL flag2;

	if (func_5(Global_1394141.f_1325, 1))
	{
		if (func_5(Global_1394141.f_1325, 2) && func_133(uParam0, func_130(uParam0), &(uParam0->f_229), func_131(uParam0), func_132(uParam0)))
			func_2(&(Global_1394141.f_1325), 2);
	
		if (func_5(Global_1394141.f_1325, 4) && func_135(uParam0, func_134(uParam0), &(uParam0->f_229), func_131(uParam0), func_132(uParam0)))
			func_2(&(Global_1394141.f_1325), 4);
	}

	if (func_5(Global_1394141.f_1325, 8))
	{
		if (func_5(Global_1394141.f_1325, 16) && func_133(&(uParam0->f_31), func_136(uParam0), &(uParam0->f_232), func_137(uParam0), func_132(uParam0)))
			func_2(&(Global_1394141.f_1325), 16);
	
		if (func_5(Global_1394141.f_1325, 32) && func_135(&(uParam0->f_31), func_138(uParam0), &(uParam0->f_232), func_137(uParam0), func_132(uParam0)))
			func_2(&(Global_1394141.f_1325), 32);
	}

	if (func_5(Global_1394141.f_1325, 2048))
	{
		if (func_5(Global_1394141.f_1325, 4096) && func_133(&(uParam0->f_107), func_139(uParam0), &(uParam0->f_235), func_140(uParam0), func_132(uParam0)))
			func_2(&(Global_1394141.f_1325), 4096);
	
		if (func_5(Global_1394141.f_1325, 8192) && func_135(&(uParam0->f_107), func_141(uParam0), &(uParam0->f_235), func_140(uParam0), func_132(uParam0)))
			func_2(&(Global_1394141.f_1325), 8192);
	}

	if (iParam1 == 0)
	{
		if (func_5(Global_1394141.f_1325, 64))
		{
			if (func_5(Global_1394141.f_1325, 128) && func_144(&uParam0->f_118[0 /*5*/], func_142(uParam0), &(uParam0->f_238), func_143(uParam0), func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 128);
		
			if (func_5(Global_1394141.f_1325, 256) && func_146(&uParam0->f_118[0 /*5*/], func_145(uParam0), &(uParam0->f_238), func_143(uParam0), func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 256);
		
			if (func_5(Global_1394141.f_1325, 512) && func_144(&uParam0->f_118[0 /*5*/], func_142(uParam0), &(uParam0->f_238), 0.5f, func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 512);
		
			if (func_5(Global_1394141.f_1325, 1024) && func_146(&uParam0->f_118[0 /*5*/], func_145(uParam0), &(uParam0->f_238), 0.5f, func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 1024);
		}
	
		if (func_5(Global_1394141.f_1325, 16384))
		{
			if (func_5(Global_1394141.f_1325, 32768) && func_149(1, 2, &(uParam0->f_118), func_147(uParam0), &(uParam0->f_241), func_148(uParam0), func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 32768);
		
			if (func_5(Global_1394141.f_1325, 65536) && func_151(1, 2, &(uParam0->f_118), func_150(uParam0), &(uParam0->f_241), func_148(uParam0), func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 65536);
		
			if (func_5(Global_1394141.f_1325, 131072) && func_149(1, 2, &(uParam0->f_118), func_147(uParam0), &(uParam0->f_241), 0.5f, func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 131072);
		
			if (func_5(Global_1394141.f_1325, 262144) && func_151(1, 2, &(uParam0->f_118), func_150(uParam0), &(uParam0->f_241), 0.5f, func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 262144);
		}
	
		if (func_5(Global_1394141.f_1325, 524288))
		{
			flag = true;
		
			if (!func_133(&(uParam0->f_31), func_136(uParam0), &(uParam0->f_232), 0.1f, func_132(uParam0)))
				flag = false;
		
			if (flag)
				func_2(&(Global_1394141.f_1325), 524288);
		}
	
		if (func_5(Global_1394141.f_1325, 1048576))
		{
			flag2 = true;
		
			if (!func_135(&(uParam0->f_31), func_138(uParam0), &(uParam0->f_232), 0.1f, func_132(uParam0)))
				flag2 = false;
		
			if (flag2)
				func_2(&(Global_1394141.f_1325), 1048576);
		}
	}

	if (iParam1 == 1 || iParam1 == 2)
	{
		if (func_5(Global_1394141.f_1325, 2097152))
		{
			if (func_5(Global_1394141.f_1325, 4194304) && func_133(&(uParam0->f_118), func_152(uParam0), &(uParam0->f_238), func_153(uParam0), func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 4194304);
		
			if (func_5(Global_1394141.f_1325, 8388608) && func_135(&(uParam0->f_118), func_154(uParam0), &(uParam0->f_238), func_153(uParam0), func_132(uParam0)))
				func_2(&(Global_1394141.f_1325), 8388608);
		}
	}

	return;
}

void func_35(var uParam0) // Position - 0x23E8 Hash - 0x848649DC ^0xA43D0AE2
{
	switch (uParam0->f_5)
	{
		case 0:
			if (func_5(uParam0->f_13, 32768))
			{
				func_155(&(uParam0->f_5), 1);
				return;
			}
		
			if (func_5(uParam0->f_13, 65536))
			{
				func_155(&(uParam0->f_5), 2);
				return;
			}
		
			if (func_5(uParam0->f_13, 512) && !func_5(uParam0->f_13, 2048))
			{
				func_155(&(uParam0->f_5), 3);
				return;
			}
		
			if (func_5(uParam0->f_13, 1024) && !func_5(uParam0->f_13, 4096))
			{
				func_155(&(uParam0->f_5), 4);
				return;
			}
			break;
	
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_113[2]))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_113[2]);
		
			uParam0->f_113[2] = 0;
			func_156(uParam0);
			func_2(&(uParam0->f_13), 32768);
			func_155(&(uParam0->f_5), 0);
			break;
	
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_113[3]))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_113[3]);
		
			uParam0->f_113[3] = 0;
			func_157(uParam0);
			func_2(&(uParam0->f_13), 65536);
			func_155(&(uParam0->f_5), 0);
			break;
	
		case 3:
			if (!func_161(&uParam0->f_113[2], &(uParam0->f_13), func_159(func_158(uParam0), 2), func_160(func_158(uParam0)), true))
				return;
		
			func_4(&(uParam0->f_13), 2048);
			func_155(&(uParam0->f_5), 0);
			break;
	
		case 4:
			if (Global_1394141.f_1324)
				if (!func_161(&uParam0->f_113[3], &(uParam0->f_13), func_159(func_158(uParam0), 3), func_162(func_158(uParam0), false), true))
					return;
			else if (!func_161(&uParam0->f_113[3], &(uParam0->f_13), func_159(func_158(uParam0), 3), func_162(func_158(uParam0), true), true))
				return;
		
			func_4(&(uParam0->f_13), 4096);
			func_155(&(uParam0->f_5), 0);
			break;
	}

	return;
}

void func_36(var uParam0) // Position - 0x25E6 Hash - 0xB9AF22D6 ^0x300CC84F
{
	BOOL isPedUsingScenarioHash;
	BOOL flag;
	BOOL flag2;

	isPedUsingScenarioHash = PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("prop_player_seat_chair_dynamic"));
	flag = func_6(Global_35, uParam0->f_119[2], true, 0);
	flag2 = func_6(Global_35, uParam0->f_119[3], true, 0);

	if (Global_36.f_2 > 51f)
		flag2 = true;

	if (func_163(36))
		isPedUsingScenarioHash = true;

	if (isPedUsingScenarioHash)
	{
		if (flag)
		{
			if (!func_5(uParam0->f_13, 8388608) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
			{
				if (CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_146)) && !CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_146)))
				{
					CAM::_CAM_CREATE(&(uParam0->f_146));
					func_4(&(uParam0->f_13), 8388608);
				}
			}
		}
	
		if (flag2)
		{
			if (!func_5(uParam0->f_13, 8388608) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
			{
				if (CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_162)) && !CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_162)))
				{
					CAM::_CAM_CREATE(&(uParam0->f_162));
					func_4(&(uParam0->f_13), 8388608);
				}
			}
		}
	}
	else
	{
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_146)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_146));
			func_2(&(uParam0->f_13), 8388608);
		}
	
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_162)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_162));
			func_2(&(uParam0->f_13), 8388608);
		}
	}

	return;
}

void func_37(var uParam0) // Position - 0x2723 Hash - 0xDCB14830 ^0x38FBC6C
{
	int num;

	num = 0;

	if (!func_5(Global_40.f_9028.f_12, 2) && func_5(Global_40.f_9028.f_12, 1) && !func_163(36))
	{
		num = 1;
		func_164(&(uParam0->f_1018), 20, 0);
		func_4(&(Global_1394141.f_1326), 16);
		func_4(&(Global_40.f_9028.f_12), 2);
	}

	if (func_165(0, false, true) && func_163(36))
	{
		uParam0->f_12 = 2;
		uParam0->f_984.f_20 = 1;
	}

	if (func_5(Global_40.f_9028.f_12, 4) && !func_5(Global_40.f_9028.f_12, 8))
	{
		uParam0->f_12 = 2;
		uParam0->f_984.f_20 = 1;
	}

	switch (uParam0->f_12)
	{
		case 0:
			func_166(&(uParam0->f_1018), 3 + num);
			func_164(&(uParam0->f_1018), 9, 0 + num);
			func_164(&(uParam0->f_1018), 12, 1 + num);
			func_164(&(uParam0->f_1018), 7, 2 + num);
			uParam0->f_1029 = Global_1394141.f_1327;
			break;
	
		case 1:
			func_166(&(uParam0->f_1018), 3 + num);
			func_164(&(uParam0->f_1018), 5, 0 + num);
			func_164(&(uParam0->f_1018), 16, 1 + num);
			func_164(&(uParam0->f_1018), 18, 2 + num);
			uParam0->f_1029 = Global_1394141.f_1327;
			break;
	
		case 2:
			func_166(&(uParam0->f_1018), 3 + num);
			func_164(&(uParam0->f_1018), 8, 0 + num);
			func_164(&(uParam0->f_1018), 14, 1 + num);
			func_164(&(uParam0->f_1018), 6, 2 + num);
			uParam0->f_1029 = Global_1394141.f_1327;
			break;
	
		case 3:
			func_166(&(uParam0->f_1018), 3 + num);
			func_164(&(uParam0->f_1018), 17, 0 + num);
			func_164(&(uParam0->f_1018), 10, 1 + num);
			func_164(&(uParam0->f_1018), 15, 2 + num);
			uParam0->f_1029 = Global_1394141.f_1327;
			break;
	
		case 4:
			func_166(&(uParam0->f_1018), 3 + num);
			func_164(&(uParam0->f_1018), 13, 0 + num);
			func_164(&(uParam0->f_1018), 19, 1 + num);
			func_164(&(uParam0->f_1018), 11, 2 + num);
			uParam0->f_1029 = Global_1394141.f_1327;
			break;
	}

	return;
}

void func_38(var uParam0) // Position - 0x296B Hash - 0xB21C7BA8 ^0x4B89965A
{
	int i;

	i = 0;

	for (i = 0; i <= 5; i = i + 1)
	{
		uParam0->[i /*5*/].f_2 = 1f;
		uParam0->[i /*5*/].f_3 = 0f;
		uParam0->[i /*5*/].f_4 = 1f;
		uParam0->[i /*5*/].f_1 = 0;
	}

	for (i = 0; i <= 14; i = i + 1)
	{
		uParam0->f_31[i /*5*/].f_2 = 1f;
		uParam0->f_31[i /*5*/].f_3 = 0f;
		uParam0->f_31[i /*5*/].f_4 = 1f;
		uParam0->f_31[i /*5*/].f_1 = 0;
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		uParam0->f_107[i /*5*/].f_2 = 1f;
		uParam0->f_107[i /*5*/].f_3 = 0f;
		uParam0->f_107[i /*5*/].f_4 = 1f;
		uParam0->f_107[i /*5*/].f_1 = 0;
	}

	for (i = 0; i <= 21; i = i + 1)
	{
		uParam0->f_118[i /*5*/].f_2 = 1f;
		uParam0->f_118[i /*5*/].f_3 = 0f;
		uParam0->f_118[i /*5*/].f_4 = 1f;
		uParam0->f_118[i /*5*/].f_1 = 0;
	}

	func_4(&(Global_1394141.f_1325), -2147483648);
	return;
}

BOOL func_39() // Position - 0x2A78 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_75() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

void func_40(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x2A9D Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_167(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

int func_41() // Position - 0x2AFA Hash - 0x74BB44B5 ^0x5035F342
{
	Interior interiorAtCoords;

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(func_65(0));

	if (!func_5(iLocal_22.f_13, 67108864))
	{
		if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(interiorAtCoords);
			func_4(&(iLocal_22.f_13), 67108864);
		}
	}
	else if (INTERIOR::IS_INTERIOR_READY(interiorAtCoords))
	{
		return 1;
	}

	return 0;
}

int func_42() // Position - 0x2B4B Hash - 0x69EE06D6 ^0x83AFD127
{
	int i;
	ePedType model;

	for (i = 0; i <= 1; i = i + 1)
	{
		model = func_168(i);
		STREAMING::REQUEST_MODEL(model, false);
	
		if (!STREAMING::HAS_MODEL_LOADED(model))
			return 0;
	}

	return 1;
}

BOOL func_43() // Position - 0x2B83 Hash - 0x590E7ED2 ^0x3BD99A53
{
	if (!func_161(&(iLocal_22.f_128), &(iLocal_22.f_13), func_169(), func_170(0), true))
		return false;

	if (!func_172(iLocal_22.f_128, func_171(1), func_169()))
		return false;

	if (!func_172(iLocal_22.f_128, func_171(2), func_169()))
		return false;

	return true;
}

BOOL func_44() // Position - 0x2BDC Hash - 0xFBBFF40F ^0x2FE35E68
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_173()))
	{
		if (HUD::_DOES_TEXT_BLOCK_EXIST(func_173()))
			HUD::TEXT_BLOCK_REQUEST(func_173());
	
		if (!HUD::TEXT_BLOCK_IS_LOADED(func_173()))
			return false;
	}

	return true;
}

BOOL func_45() // Position - 0x2C1B Hash - 0x772FAAF2 ^0xBFE7BB6B
{
	if (!func_161(&iLocal_22.f_113[0], &(iLocal_22.f_13), func_174(iLocal_22.f_12, 0), func_175(iLocal_22.f_12), true))
		return false;

	return true;
}

BOOL func_46(var uParam0) // Position - 0x2C4D Hash - 0xC07A97A5 ^0x93C6E0B3
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_146), "camera_treatments", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_146.f_8), "THEATRE_CUSTOM_TREATMENT_REQUEST", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_162), "camera_treatments", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_162.f_8), "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST", 64);
	CAM::_LOAD_CAMERA_DATA_DICT("camera_treatments");
	return true;
}

BOOL func_47(var uParam0) // Position - 0x2C85 Hash - 0x65C7373F ^0xEA3EF160
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_126))
		uParam0->f_126 = func_178(func_168(0), func_176(1), func_177(1), true, true, 0, true, true, true, false, false, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_126))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
	{
		uParam0->f_127 = OBJECT::CREATE_OBJECT(func_168(1), func_176(0), true, true, false, false, true);
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
		return false;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_126, "Default_Show_Performers_Group", -1f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_126, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 448, true);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_126, true);
		PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_126, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_126, joaat("rel_player_ally"));
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_126, 0, 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 169, true);
	}

	return true;
}

struct<11> func_48(int iParam0) // Position - 0x2D63 Hash - 0x19E1B771 ^0xA521A56C
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 2546.392f, -1311.0602f, 49.801235f };
			unk.f_3 = { 0f, 0f, -0.428209f };
			unk.f_6 = { 17.939564f, 6.905415f, 3.337901f };
			unk.f_9 = "SHOW_MC_ON_STAGE";
			unk.f_10 = joaat("volBox");
			break;
	
		case 1:
			unk = { 2546.448f, -1301.489f, 51.592f };
			unk.f_3 = { 0f, 0f, 0.496f };
			unk.f_6 = { 18.193f, 22.845f, 8.938f };
			unk.f_9 = "SHOW_MC_VOLUME_FOCUS_CAM";
			unk.f_10 = joaat("volBox");
			break;
	
		case 2:
			unk = { 2549.9749f, -1299.5873f, 48.850185f };
			unk.f_3 = { 0f, 0f, 0f };
			unk.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			unk.f_9 = "SHOW_MC_LEFT_SEATS";
			unk.f_10 = joaat("volBox");
			break;
	
		case 3:
			unk = { 2542.9114f, -1299.5873f, 48.850185f };
			unk.f_3 = { 0f, 0f, 0f };
			unk.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			unk.f_9 = "SHOW_MC_RIGHT_SEATS";
			unk.f_10 = joaat("volBox");
			break;
	
		case 4:
			unk = { 2546.5981f, -1288.2922f, 51.775307f };
			unk.f_3 = { 0f, 0f, 1.8f };
			unk.f_6 = { 9.553825f, 4.673606f, 7.770726f };
			unk.f_9 = "SHOW_MC_FRONT_BUFFER";
			unk.f_10 = joaat("volBox");
			break;
	}

	return unk;
}

void func_49(var uParam0, int iParam1) // Position - 0x2EFB Hash - 0x63DF4C14 ^0xC320F13D
{
	int i;
	int num;

	switch (iParam1)
	{
		case 0:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(56);
		
			for (i = 0; i <= 12 - 1; i = i + 1)
			{
				num = i;
			
				if (func_179(num, *uParam0))
					STREAMING::REQUEST_ANIM_DICT(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num));
			}
		
			uParam0->f_17 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			break;
	
		case 1:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(22);
			STREAMING::REQUEST_ANIM_DICT(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0));
			break;
	
		case 2:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(22);
			STREAMING::REQUEST_ANIM_DICT(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0));
			break;
	
		case 3:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(10);
			STREAMING::REQUEST_ANIM_DICT(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0));
			break;
	
		case 4:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(23);
			STREAMING::REQUEST_ANIM_DICT(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0));
			break;
	}

	return;
}

BOOL func_50(var uParam0, int iParam1) // Position - 0x2FB3 Hash - 0xA90F6824 ^0x4F8D15CD
{
	int i;
	int num;
	BOOL flag;

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	switch (iParam1)
	{
		case 0:
			flag = true;
		
			for (i = 0; i <= 12 - 1; i = i + 1)
			{
				num = i;
			
				if (func_179(num, *uParam0) && !STREAMING::HAS_ANIM_DICT_LOADED(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num)))
					flag = false;
			}
		
			if (!flag)
				return false;
		
			if (!func_182(&uParam0->f_12[1 /*2*/], func_181(1, uParam0->f_17), 0))
				return false;
		
			if (!func_182(&uParam0->f_12[0 /*2*/], func_181(0, uParam0->f_17), 0))
				return false;
			break;
	}

	return true;
}

BOOL func_51(var uParam0, int iParam1, int iParam2) // Position - 0x3058 Hash - 0x469D9B5C ^0xFBFE69BE
{
	int num;
	BOOL flag;
	int i;
	ePedType randomModelFromPopulationSet;

	num = func_183(iParam1);
	i = 0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*10*/]))
		{
			randomModelFromPopulationSet = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_184(iParam1), func_185(iParam1, i), -156825994, false, true, func_186(iParam1, i));
			flag = false;
		
			if (func_5(Global_1394141.f_1326, 16))
			{
				if (i == 4)
				{
					randomModelFromPopulationSet = joaat("u_m_m_oddfellowparticipant_01");
					flag = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (i == 5)
				{
					randomModelFromPopulationSet = joaat("u_m_m_bulletcatchvolunteer_01");
					flag = true;
				}
				else if (i == 31)
				{
					randomModelFromPopulationSet = joaat("u_m_m_cabaretfirehat_01");
					flag = true;
				}
			}
		
			if (flag)
				STREAMING::REQUEST_MODEL(randomModelFromPopulationSet, false);
		
			if (flag && !STREAMING::HAS_MODEL_LOADED(randomModelFromPopulationSet))
				return false;
		
			if (STREAMING::IS_MODEL_VALID(randomModelFromPopulationSet))
				uParam0->[i /*10*/] = func_178(randomModelFromPopulationSet, func_186(iParam1, i), func_187(iParam1, i), true, true, func_188(iParam1, i), true, true, true, false, false, false, false);
		
			return false;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*10*/]))
			return false;
	}

	return true;
}

BOOL func_52(var uParam0, var uParam1, int iParam2) // Position - 0x316F Hash - 0x8BDD24CD ^0xAC396C13
{
	int num;
	int i;

	if (!func_189(uParam1, iParam2))
		return false;

	num = func_183(iParam2);
	i = 0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (func_190(i, uParam1->f_17) && iParam2 == 0 && !uParam1->f_20)
		{
			uParam0->[i /*10*/].f_1 = 6;
			uParam0->[i /*10*/].f_2 = i;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_12[1 /*2*/], func_191(1, i, uParam1->f_17), uParam0->[i /*10*/], 0);
		}
		else if (func_192(iParam2))
		{
			uParam0->[i /*10*/].f_1 = 1;
			uParam0->[i /*10*/].f_2 = i;
			func_193(&uParam0->[i /*10*/], iParam2);
		}
		else
		{
			uParam0->[i /*10*/].f_1 = 1;
			uParam0->[i /*10*/].f_2 = i;
			func_194(&uParam0->[i /*10*/], iParam2);
		}
	}

	return true;
}

BOOL func_53(var uParam0, int iParam1) // Position - 0x3245 Hash - 0x14C3A2FD ^0x410B68E1
{
	int num;
	int i;

	num = func_183(iParam1);
	i = 0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->[i /*10*/], 301, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->[i /*10*/], 448, true);
			AUDIO::STOP_PED_SPEAKING(uParam0->[i /*10*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->[i /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->[i /*10*/], joaat("rel_player_ally"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->[i /*10*/], true);
			func_195(uParam0->[i /*10*/], 0);
		}
	}

	return true;
}

void func_54(var uParam0, var uParam1, int iParam2) // Position - 0x32D5 Hash - 0x6A7F1E78 ^0x8B64B816
{
	if (func_5(uParam0->f_18, 1) && !func_5(uParam0->f_18, 2))
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR"), 15, 0, 0);
		func_4(&(uParam0->f_18), 2);
	}

	if (func_5(uParam0->f_18, 2) && !func_5(uParam0->f_18, 4))
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR"), false))
			func_4(&(uParam0->f_18), 4);

	if (func_5(uParam0->f_18, 8) && !func_5(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_196(iParam2));
	
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_196(iParam2)))
			func_4(&(uParam0->f_18), 16);
	}

	func_197(uParam0, uParam1, iParam2);

	switch (Global_1394141.f_1332)
	{
		case 0:
			break;
	
		default:
			if (Global_1394141.f_1332 != Global_1394141.f_1333)
			{
				func_199(uParam0, uParam1, iParam2, func_198(*uParam0, uParam0->f_1, Global_1394141.f_1332));
				Global_1394141.f_1333 = Global_1394141.f_1332;
			}
			break;
	}

	return;
}

void func_55(var uParam0) // Position - 0x33DC Hash - 0x9622AF10 ^0x402ABF59
{
	switch (uParam0->f_125)
	{
		case 0:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -990515711);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1197974168);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			break;
	
		case 1:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -2040461796);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			break;
	
		case 2:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -2040461796);
			break;
	
		case 3:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -990515711);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			break;
	
		case 4:
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1197974168);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -990515711);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			break;
	}

	if (func_5(Global_40.f_9028.f_12, 1))
	{
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
	}

	return;
}

void func_56() // Position - 0x3623 Hash - 0xBBF53F6B ^0x92A876FD
{
	Global_40.f_9028.f_14 = Global_40.f_9028.f_14 + 1;
	Global_40.f_9028.f_13 = Global_40.f_9028.f_13 + 1;
	return;
}

void func_57(var uParam0) // Position - 0x364F Hash - 0xF076382 ^0x5339249E
{
	BOOL flag;

	flag = false;

	if (func_6(Global_35, uParam0->f_119[1], true, 0))
		flag = true;

	if (func_5(Global_1394141.f_1326, 1024) && uParam0->f_7 < 6)
		func_200(&(uParam0->f_7), 6);

	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 != 8)
				return;
		
			if (!flag)
				return;
		
			if (flag)
			{
				if (!CAM::DOES_CAM_EXIST(uParam0->f_141))
					uParam0->f_141 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), func_201(0), func_202(0), CAM::GET_FINAL_RENDERED_CAM_FOV(), false, 2);
			
				func_200(&(uParam0->f_7), 1);
			}
			break;
	
		case 1:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_FOCUS_CAM")))
			{
				if (!func_20(&(uParam0->f_142)))
				{
					func_21(&(uParam0->f_142));
					return;
				}
				else if (func_203(&(uParam0->f_142)) < 800)
				{
					return;
				}
			}
			else
			{
				if (func_20(&(uParam0->f_142)))
					func_27(&(uParam0->f_142));
			
				if (func_204(uParam0->f_1031[2]))
					func_205(&uParam0->f_1031[2], true, true);
			
				return;
			}
		
			if (!func_204(uParam0->f_1031[2]))
			{
				uParam0->f_1031[2] = func_206("INTERACT_LOOK", joaat("INPUT_FOCUS_CAM"), 6, 570, 570, 10, 1073741824, 0, 1065353216, false, 1, joaat("SHORT_TIMED_EVENT"), false);
			}
			else if (func_207(uParam0->f_1031[2], true))
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_141))
				{
					if (!CAM::IS_CAM_RENDERING(uParam0->f_141))
					{
						CAM::SET_CAM_ACTIVE(uParam0->f_141, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						func_205(&uParam0->f_1031[2], true, true);
						func_4(&(Global_1394141.f_1326), 512);
						func_200(&(uParam0->f_7), 2);
					}
				}
			}
			break;
	
		case 2:
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_FOCUS_CAM")))
				func_200(&(uParam0->f_7), 3);
			break;
	
		case 3:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_FOCUS_CAM")))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_2(&(Global_1394141.f_1326), 512);
				func_27(&(uParam0->f_142));
				func_200(&(uParam0->f_7), 4);
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT")))
			{
				uParam0->f_145 = uParam0->f_145 + 1;
			
				if (uParam0->f_145 > 2)
					uParam0->f_145 = 0;
			
				CAM::SET_CAM_COORD(uParam0->f_141, func_201(uParam0->f_145));
				CAM::SET_CAM_ROT(uParam0->f_141, func_202(uParam0->f_145), 2);
			}
		
			if (*uParam0 == 9 || !flag)
				func_200(&(uParam0->f_7), 6);
			break;
	
		case 4:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
		
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_FOCUS_CAM")))
				func_200(&(uParam0->f_7), 1);
			break;
	
		case 6:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		
			if (!flag)
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_141) && CAM::IS_CAM_RENDERING(uParam0->f_141))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
				}
			
				if (func_204(uParam0->f_1031[2]))
					func_205(&uParam0->f_1031[2], true, true);
			
				func_200(&(uParam0->f_7), 8);
			}
			else if (CAM::DOES_CAM_EXIST(uParam0->f_141))
			{
				if (CAM::IS_CAM_RENDERING(uParam0->f_141))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
				}
				else
				{
					CAM::DESTROY_CAM(uParam0->f_141, false);
				
					if (func_204(uParam0->f_1031[2]))
						func_205(&uParam0->f_1031[2], true, true);
				
					func_200(&(uParam0->f_7), 8);
				}
			}
		
			func_2(&(Global_1394141.f_1326), 512);
			break;
	
		case 8:
			if (!func_5(Global_1394141.f_1326, 1024))
				func_200(&(uParam0->f_7), 0);
			break;
	}

	return;
}

BOOL func_58(var uParam0) // Position - 0x3A40 Hash - 0xE45307AC ^0x62E40FD1
{
	BOOL flag;

	flag = func_6(Global_35, Global_1394141.f_7[uParam0->f_125 /*31*/].f_4, true, 0);
	func_208(uParam0);
	func_60(uParam0);
	func_209(uParam0);

	if (flag && ENTITY::DOES_ENTITY_EXIST(iLocal_22.f_126) && !ENTITY::IS_ENTITY_DEAD(iLocal_22.f_126))
	{
		switch (uParam0->f_4)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 8:
			case 9:
			case 10:
			case 11:
				PED::SET_PED_RESET_FLAG(uParam0->f_126, 261, true);
				break;
		}
	}

	switch (uParam0->f_4)
	{
		case 0:
			if (!func_20(&(iLocal_22.f_132)))
			{
				func_21(&(iLocal_22.f_132));
				func_4(&(uParam0->f_13), 33554432);
			}
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_984.f_12[1 /*2*/]) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_984.f_12[1 /*2*/], false) || func_20(&(iLocal_22.f_132)) && func_22(&(iLocal_22.f_132)) > 15f)
			{
				func_4(&(uParam0->f_13), 512);
				func_71();
				func_210(&(uParam0->f_4), 1);
			}
			break;
	
		case 1:
			uParam0->f_118 = uParam0->f_113[0];
			Global_1394141.f_1335 = uParam0->f_118;
			uParam0->f_984 = uParam0->f_1018.f_1[uParam0->f_1029];
		
			if (uParam0->f_1029 + 1 < uParam0->f_1018)
				uParam0->f_984.f_1 = uParam0->f_1018.f_1[uParam0->f_1029 + 1];
			else
				uParam0->f_984.f_1 = -1;
		
			uParam0->f_1030 = uParam0->f_1018.f_1[uParam0->f_1029];
			func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
			func_2(&(Global_1394141.f_1326), 4096);
			func_4(&(uParam0->f_13), 64);
			func_210(&(uParam0->f_4), 2);
			break;
	
		case 2:
			func_212(&(uParam0->f_126));
		
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_118, false))
			{
				return false;
			}
			else
			{
				if (func_5(uParam0->f_13, 33554432) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118) > 0.1f)
					func_2(&(uParam0->f_13), 33554432);
			
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118) > 0.5f)
					func_210(&(uParam0->f_4), 3);
			}
			break;
	
		case 3:
			func_213(uParam0->f_1030);
			func_212(&(uParam0->f_126));
		
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_118, func_214()) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_118, false))
			{
				uParam0->f_118 = uParam0->f_113[2];
				Global_1394141.f_1335 = uParam0->f_118;
				func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
				func_215(uParam0, 65536);
				func_210(&(uParam0->f_4), 4);
			}
			break;
	
		case 4:
			func_212(&(uParam0->f_126));
		
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_118, false))
			{
				return false;
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_113[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_113[0], true, false))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_113[0]);
			
				if (!func_5(uParam0->f_13, 33554432) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118) > 0.9f)
					func_4(&(uParam0->f_13), 33554432);
			
				if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_118, func_214()) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_118, false))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_126, func_176(4), func_177(4), true, false, true);
					func_210(&(uParam0->f_4), 5);
				}
			}
			break;
	
		case 5:
			if (func_216(uParam0))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_984.f_12[0 /*2*/]))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_984.f_12[0 /*2*/]);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_984.f_12[1 /*2*/]))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_984.f_12[1 /*2*/]);
			
				func_215(uParam0, 32768);
				func_2(&(uParam0->f_13), 64);
				func_210(&(uParam0->f_4), 6);
			}
			break;
	
		case 6:
			if (Global_1394141.f_1322)
			{
				func_4(&(uParam0->f_13), 256);
			
				if (!func_20(&(iLocal_22.f_129)))
					func_21(&(iLocal_22.f_129));
			
				func_27(&(iLocal_22.f_132));
				func_210(&(uParam0->f_4), 7);
			}
			break;
	
		case 7:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_113[2]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_113[2], true, false) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_113[2], false))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_113[2]);
		
			if (!func_5(uParam0->f_13, 524288) && iLocal_22.f_1029 >= 0 && func_22(&(iLocal_22.f_129)) > 30f)
			{
				if (func_163(36) || func_5(Global_40.f_9028.f_12, 4))
				{
					func_2(&(Global_40.f_9028.f_12), 4);
					func_4(&(Global_40.f_9028.f_12), 8);
				}
				else
				{
					Global_40.f_9028[Global_1394141.f_7[Global_1394141 /*31*/].f_30] = Global_40.f_9028[Global_1394141.f_7[Global_1394141 /*31*/].f_30] + 1;
				}
			
				if (func_5(Global_1394141.f_1326, 8192))
					func_2(&(Global_1394141.f_1326), 8192);
			
				func_4(&(uParam0->f_13), 524288);
			}
		
			if (!Global_1394141.f_1323)
				return false;
		
			if (!func_217(uParam0))
				return false;
		
			if (!func_20(&(iLocal_22.f_132)))
			{
				func_21(&(iLocal_22.f_132));
				return false;
			}
			else if (func_22(&(iLocal_22.f_132)) < 7f)
			{
				return false;
			}
		
			func_2(&(Global_1394141.f_1326), 4);
			func_2(&(Global_1394141.f_1326), 2);
			func_2(&(Global_1394141.f_1326), 1);
			func_27(&(iLocal_22.f_132));
		
			if (uParam0->f_125 == 15 && Global_1394141.f_1324)
			{
				iLocal_22.f_1029 = iLocal_22.f_1029 + 1;
				Global_1394141.f_1323 = 0;
				Global_1394141.f_1321 = 0;
				Global_1394141.f_1322 = 0;
				Global_1394141.f_1324 = 0;
				func_210(&(uParam0->f_4), 12);
			}
			else
			{
				func_215(uParam0, 1024);
				func_4(&(uParam0->f_13), 64);
				func_210(&(uParam0->f_4), 8);
			}
			break;
	
		case 8:
			func_212(&(uParam0->f_126));
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_113[3]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_113[3], true, false))
			{
				iLocal_22.f_1029 = iLocal_22.f_1029 + 1;
				Global_1394141.f_1323 = 0;
				Global_1394141.f_1321 = 0;
				Global_1394141.f_1322 = 0;
				Global_1394141.f_1324 = 0;
				uParam0->f_118 = uParam0->f_113[3];
				Global_1394141.f_1335 = uParam0->f_118;
				func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
			
				if (iLocal_22.f_1029 < iLocal_22.f_1018)
					func_4(&(uParam0->f_13), 512);
			
				func_210(&(uParam0->f_4), 9);
			}
			break;
	
		case 9:
			func_212(&(uParam0->f_126));
		
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_118, false))
			{
				return false;
			}
			else
			{
				if (iLocal_22.f_1029 >= iLocal_22.f_1018)
					func_218();
			
				if (func_5(uParam0->f_13, 33554432) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118) > 0.1f)
					func_2(&(uParam0->f_13), 33554432);
			
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118) > 0.98f)
				{
					if (iLocal_22.f_1029 >= iLocal_22.f_1018)
					{
						func_71();
						uParam0->f_984.f_11 = 0;
						func_210(&(uParam0->f_4), 10);
					}
					else
					{
						func_71();
						uParam0->f_984 = uParam0->f_1018.f_1[uParam0->f_1029];
						uParam0->f_1030 = uParam0->f_1018.f_1[uParam0->f_1029];
						uParam0->f_984.f_11 = 0;
						func_210(&(uParam0->f_4), 3);
					}
				}
			}
			break;
	
		case 10:
			func_212(&(uParam0->f_126));
		
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_118, func_214()) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_118, false))
			{
				uParam0->f_118 = uParam0->f_113[1];
				Global_1394141.f_1335 = uParam0->f_118;
				func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
				func_210(&(uParam0->f_4), 11);
			}
			break;
	
		case 11:
			func_212(&(uParam0->f_126));
		
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_118, func_214()))
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_126, func_176(4), func_177(4), true, false, true);
		
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_118, false) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_113[3]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_113[3], true, false))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_113[3]);
		
			if (!func_5(uParam0->f_13, 33554432) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118) > 0.9f)
				func_4(&(uParam0->f_13), 33554432);
		
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_118, false))
			{
				if (uParam0->f_12 == 4)
					func_4(&(Global_40.f_9028.f_12), 16);
			
				func_4(&(Global_1394141.f_1325), 32);
				func_4(&(Global_1394141.f_1325), 4);
				func_4(&(Global_1394141.f_1325), 128);
				func_4(&(Global_1394141.f_1325), 32768);
				Global_1394141.f_1335 = 0;
				func_210(&(uParam0->f_4), 12);
			}
			break;
	
		case 12:
			return true;
	}

	return false;
}

void func_59(var uParam0) // Position - 0x4345 Hash - 0x240F0FFC ^0xE208121A
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_141))
	{
		if (CAM::IS_CAM_RENDERING(uParam0->f_141))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
		}
	
		CAM::DESTROY_CAM(uParam0->f_141, false);
	}

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);

	func_2(&(Global_1394141.f_1326), 512);

	if (func_204(uParam0->f_1031[2]))
		func_205(&uParam0->f_1031[2], true, true);

	return;
}

void func_60(var uParam0) // Position - 0x43C3 Hash - 0x2BB4E7D9 ^0x8D08DDB
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_172(uParam0->f_128, func_171(1), func_169()))
				return;
		
			func_219(&(uParam0->f_3), 1);
			break;
	
		case 1:
			if (func_5(uParam0->f_13, 256))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_128, func_220(), uParam0->f_127, 0);
				func_221(uParam0->f_128, func_171(1), func_169());
				func_219(&(uParam0->f_3), 2);
			}
			break;
	
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_128, func_171(1)))
			{
				func_222(uParam0->f_128, func_171(2), func_169());
				func_2(&(uParam0->f_13), 256);
				func_219(&(uParam0->f_3), 3);
			}
			break;
	
		case 3:
			if (!func_172(uParam0->f_128, func_171(2), func_169()))
				return;
		
			func_219(&(uParam0->f_3), 4);
			break;
	
		case 4:
			if (Global_1394141.f_1321)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_128, func_220(), uParam0->f_127, 0);
				func_221(uParam0->f_128, func_171(2), func_169());
				func_219(&(uParam0->f_3), 5);
			}
			break;
	
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_128, func_171(2)))
			{
				func_222(uParam0->f_128, func_171(1), func_169());
				func_219(&(uParam0->f_3), 0);
			}
			break;
	
		case 6:
			if (!func_172(uParam0->f_128, func_171(4), func_169()))
				return;
		
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_128, func_220(), uParam0->f_127, 0);
			func_221(uParam0->f_128, func_171(4), func_169());
			func_219(&(uParam0->f_3), 7);
			break;
	
		case 7:
			break;
	}

	return;
}

void func_61(var uParam0) // Position - 0x456F Hash - 0x863BCF9 ^0x6408FD8C
{
	Vector3 vector;

	if (!func_5(Global_40.f_9028.f_12, 16))
		return;

	switch (uParam0->f_6)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_126))
				PED::DELETE_PED(&(uParam0->f_126));
		
			if (!func_20(&(uParam0->f_138)))
			{
				func_21(&(uParam0->f_138));
			}
			else if (func_22(&(uParam0->f_138)) > 3f)
			{
				uParam0->f_3 = 6;
			
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_119[0]))
				{
					vector = { func_48(0) };
					uParam0->f_119[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vector.f_10, vector, vector.f_3, vector.f_6, vector.f_9);
				}
			
				if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1770598824))
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1770598824, true);
			
				func_4(&(Global_1394141.f_1326), 64);
				func_223(&(uParam0->f_6), 1);
			}
			break;
	
		case 1:
			if (func_6(Global_35, uParam0->f_119[0], true, 0))
			{
				if (!func_5(uParam0->f_13, 1048576))
				{
					if (AUDIO::LOAD_STREAM(func_224(0), func_225()))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(func_226(0), AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_224(0), func_225()));
						func_4(&(uParam0->f_13), 1048576);
					}
				}
			
				if (!func_5(uParam0->f_13, 2097152) && TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
				{
					if (AUDIO::LOAD_STREAM(func_224(1), func_225()))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(func_226(1), AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_224(1), func_225()));
						func_4(&(uParam0->f_13), 2097152);
						Global_1394141.f_1332 = 49;
						func_223(&(uParam0->f_6), 2);
					}
				}
			}
			break;
	
		case 2:
			break;
	}

	return;
}

BOOL func_62(int iParam0) // Position - 0x470D Hash - 0x6491FC6C ^0x428660B
{
	int i;
	Hash hash;

	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
		return false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = Global_1394141.f_7[iParam0 /*31*/].f_7[i];
	
		if (hash != 0)
			if (func_227(hash))
				return true;
	}

	return false;
}

void func_63() // Position - 0x4764 Hash - 0xFA3971BA ^0xF8E34552
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
	INVENTORY::_INVENTORY_ENABLE_WEAPONS(func_64(false));
	func_2(&(Global_1394141.f_1326), 1);
	func_2(&(Global_1394141.f_1326), 2);
	func_2(&(Global_1394141.f_1326), 4);
	func_2(&(Global_1394141.f_1326), 64);
	func_2(&(Global_1394141.f_1326), 512);
	return;
}

int func_64(BOOL bParam0) // Position - 0x47BF Hash - 0x58DE66BA ^0xF4629DE1
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

Vector3 func_65(int iParam0) // Position - 0x4800 Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (iParam0)
	{
		case 0:
			return 2546.4814f, -1299.0151f, 48.74436f;
	
		case 1:
		case 2:
			return 2696.776f, -1353.7343f, 48.56572f;
	
		case 3:
			return -348.31757f, 698.57056f, 117.70596f;
	
		case 4:
			return -779.4891f, -1362.6176f, 45.14579f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_66(var uParam0) // Position - 0x4879 Hash - 0xD79FC51A ^0xB812797D
{
	int i;

	for (i = 0; i <= uParam0->f_1018 - 1; i = i + 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1018.f_6[i], false) && !SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(uParam0->f_1018.f_6[i]))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(uParam0->f_1018.f_6[i]);
			return false;
		}
	}

	return true;
}

void func_67(var uParam0, Volume volParam1) // Position - 0x48D5 Hash - 0xFE12DDF4 ^0x71AD09B7
{
	int num;
	int i;

	num = *uParam0;
	i = 0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*10*/]))
			if (!func_6(uParam0->[i /*10*/], volParam1, true, 0))
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->[i /*10*/]);
			else
				PED::DELETE_PED(&uParam0->[i /*10*/]);
	}

	return;
}

void func_68(var uParam0, int iParam1) // Position - 0x4930 Hash - 0xD0CCAF81 ^0xDA300683
{
	int i;

	if (func_228(iParam1) != -1)
	{
		i = 0;
	
		for (i = 0; i <= func_228(iParam1); i = i + 1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_22[i]))
				VOLUME::DELETE_VOLUME(uParam0->f_22[i]);
		}
	}

	return;
}

void func_69(int iParam0) // Position - 0x4977 Hash - 0x5AE1D4F0 ^0xE48E55C0
{
	if (func_229(iParam0))
		TASK::REMOVE_WAYPOINT_RECORDING(func_196(iParam0));

	return;
}

void func_70(var uParam0) // Position - 0x4992 Hash - 0x22732D43 ^0xFC753F50
{
	func_230(uParam0);
	func_230(&(uParam0->f_31));
	func_230(&(uParam0->f_107));
	func_230(&(uParam0->f_118));
	Global_1394141.f_1325 = 0;
	return;
}

void func_71() // Position - 0x49C0 Hash - 0x236776E1 ^0xE1F29325
{
	int num;
	int i;
	Interior interiorAtCoords;

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);

	for (i = 0; i <= 41 - 1; i = i + 1)
	{
		num = i;
	
		if (func_231(num) == 0)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_232(num)))
				if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
					if (INTERIOR::IS_INTERIOR_READY(interiorAtCoords))
						if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(interiorAtCoords, func_232(num)))
							INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, func_232(num), true);
	}

	return;
}

void func_72(var uParam0) // Position - 0x4A3F Hash - 0xEEF37EAB ^0x15A7D29
{
	int i;
	int num;

	i = 0;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		num = i;
	
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_119[num]))
			VOLUME::DELETE_VOLUME(uParam0->f_119[num]);
	}

	return;
}

BOOL func_73(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x4A7D Hash - 0xFA2BBA1 ^0xB0883B47
{
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (INTERIOR::IS_VALID_INTERIOR(interiorFromCollision))
			return true;
	}

	return false;
}

void func_74(var uParam0, int iParam1) // Position - 0x4AA9 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_75() // Position - 0x4ABE Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_76(int iParam0) // Position - 0x4ACC Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_77(int iParam0, BOOL bParam1) // Position - 0x4AE2 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_233(iParam0))
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

void func_78(var uParam0, int iParam1) // Position - 0x4B13 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_79(Ped pedParam0) // Position - 0x4B24 Hash - 0x4156E789 ^0x33933065
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
		num = func_234(i);
	
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

BOOL func_80(Ped pedParam0) // Position - 0x4BEC Hash - 0x1A9D46BF ^0x1806B677
{
	Object* p_object;
	ItemSet itemset;
	BOOL flag;
	int itemsetSize;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	p_object = func_81();

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

Object* func_81() // Position - 0x4C75 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

Vector3 func_82(Player plParam0) // Position - 0x4C84 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_83(int iParam0) // Position - 0x4C98 Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

void func_84(int iParam0) // Position - 0x4CAD Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_85(var uParam0, var uParam1, var uParam2) // Position - 0x4CC0 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

Hash func_86() // Position - 0x4CD9 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_87(Hash hParam0) // Position - 0x4CE5 Hash - 0xC20F1267 ^0x9F8567FC
{
	Global_40.f_1095.f_3054.f_2 = hParam0;
	return;
}

void func_88(var uParam0, int iParam1) // Position - 0x4CFA Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

float func_89(Ped pedParam0, Object* pobParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4D07 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pobParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pobParam1, false, false), bParam2);
}

Vector3 func_90(int iParam0) // Position - 0x4D4F Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (iParam0)
	{
		case 0:
			return 2530.9006f, -1280.5728f, 49.19497f;
	
		case 1:
		case 2:
			return 2688.5142f, -1367.6746f, 46.9404f;
	
		case 3:
			return -356.73242f, 707.2336f, 116.86087f;
	
		case 4:
			return -794.3981f, -1359.4287f, 43.75871f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_91(BOOL bParam0) // Position - 0x4DC8 Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_235(4);

	func_235(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

void func_92(Hash hParam0) // Position - 0x4DEA Hash - 0x3934F7F0 ^0xE2E63DDD
{
	if (!bLocal_15)
	{
		WEAPON::_0xD63B4BA3A02A99E0(Global_35, hParam0);
		bLocal_15 = true;
	}

	return;
}

void func_93(var uParam0, BOOL bParam1) // Position - 0x4E04 Hash - 0xC0D552FF ^0xB3A5A71D
{
	if (bLocal_15)
	{
		WEAPON::_0x404514D231DB27A0(Global_35, *uParam0);
		bLocal_15 = false;
	
		if (bParam1)
			*uParam0 = 0;
	}

	return;
}

void func_94() // Position - 0x4E27 Hash - 0xFB561F3A ^0x3BEF23F
{
	if (!bLocal_14)
	{
		INVENTORY::_INVENTORY_DISABLE_WEAPONS(func_64(false), 0);
		bLocal_14 = true;
	}

	return;
}

void func_95() // Position - 0x4E42 Hash - 0x652CA67C ^0x1A990B
{
	if (bLocal_14)
	{
		INVENTORY::_INVENTORY_ENABLE_WEAPONS(func_64(false));
		bLocal_14 = false;
	}

	return;
}

BOOL func_96(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4E5B Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_97() // Position - 0x4EF9 Hash - 0xF40DE8DC ^0x762A5DC5
{
	Entity firstEntityPedIsCarrying;

	firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);

	if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && ENTITY::GET_ENTITY_TYPE(firstEntityPedIsCarrying) == 1)
		return true;

	return false;
}

void func_98(var uParam0, int iParam1) // Position - 0x4F25 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_99(int iParam0) // Position - 0x4F32 Hash - 0x7DE9C14 ^0x40453FD8
{
	int i;
	Hash hash;

	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
		return true;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = Global_1394141.f_7[iParam0 /*31*/].f_7[i];
	
		if (hash != 0)
			if (!func_227(hash))
				func_236(hash, 0, false);
	}

	return true;
}

BOOL func_100(int iParam0) // Position - 0x4F8E Hash - 0x7DE9C14 ^0x40453FD8
{
	int i;
	Hash hash;

	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
		return true;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = Global_1394141.f_7[iParam0 /*31*/].f_7[i];
	
		if (hash != 0)
			if (!func_237(hash) && !func_238(hash))
				func_239(hash, true, 0, false, false, 0, false, false);
	}

	return true;
}

void func_101(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x4FFB Hash - 0x2BEE335D ^0x2BEE335D
{
	func_240(func_86(), hParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x5019 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_103(var uParam0, float fParam1) // Position - 0x5028 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_105() - fParam1;
	func_241(uParam0, 1);
	func_242(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_104(var uParam0) // Position - 0x504E Hash - 0x39705408 ^0x39705408
{
	return func_102(*uParam0, 2);
}

float func_105() // Position - 0x505E Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_106() // Position - 0x5090 Hash - 0x180FA0B2 ^0x7DDAC25F
{
	if (Global_1934765.f_286 > 300)
		Global_1934765.f_286 = 300;

	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_115());
	return;
}

int func_107() // Position - 0x50B7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_108(int iParam0) // Position - 0x50C6 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

BOOL func_109(int iParam0, int iParam1) // Position - 0x50DC Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_108(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_110(int iParam0) // Position - 0x50FF Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_108(iParam0))
		return false;

	if (func_19(64) && func_243(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_111(int iParam0) // Position - 0x5137 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_108(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_112(int iParam0) // Position - 0x5157 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_108(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_244(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_113(int iParam0) // Position - 0x51C0 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

BOOL func_114(var uParam0) // Position - 0x51D0 Hash - 0xB9A83C95 ^0x1D119752
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

float func_115() // Position - 0x521C Hash - 0xC6C7E40 ^0x14F37B93
{
	return func_245(150f, BUILTIN::TO_FLOAT(Global_1934765.f_286)) / BUILTIN::TO_FLOAT(300);
}

int func_116() // Position - 0x5240 Hash - 0x7DC7EE6A ^0xA1EBC045
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[i /*2*/], false))
			return i;
	}

	return -1;
}

int func_117(int iParam0) // Position - 0x5274 Hash - 0xF6A7C02B ^0xF6A7C02B
{
	switch (iParam0)
	{
		case 0:
			return 6;
	
		case 1:
			return 2;
	
		case 2:
			return 2;
	
		case 3:
			return 0;
	
		case 4:
			return 4;
	}

	return 0;
}

Hash func_118(int iParam0) // Position - 0x52C6 Hash - 0xAAD68AF2 ^0x932B637C
{
	switch (iParam0)
	{
		case 0:
			return joaat("p_lamp35x");
	
		case 1:
			return joaat("p_lampwall03x");
	
		case 2:
			return joaat("p_lampwall03x");
	
		case 3:
			return 0;
	
		case 4:
			return joaat("p_lightbulb01x");
	}

	return 0;
}

Vector3 func_119(int iParam0, int iParam1) // Position - 0x5328 Hash - 0xEA9A7255 ^0xEA9A7255
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2553.6882f, -1306.052f, 49.97987f;
			
				case 1:
					return 2539.2026f, -1306.0981f, 49.9794f;
			
				case 2:
					return 2539.1875f, -1291.6101f, 49.97276f;
			
				case 3:
					return 2543.0142f, -1290.244f, 49.95035f;
			
				case 4:
					return 2549.863f, -1290.2544f, 50.00306f;
			
				case 5:
					return 2553.6938f, -1291.6365f, 49.96515f;
			
				default:
					break;
			}
			break;
	
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.3535f, -1347.851f, 48.38391f;
			
				case 1:
					return 2702.9922f, -1353.3394f, 48.37968f;
			
				default:
					break;
			}
			break;
	
		case 3:
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -777.252f, -1367.02f, 44.965f;
			
				case 1:
					return -780.828f, -1366.866f, 45.282f;
			
				case 2:
					return -777.252f, -1358.225f, 44.965f;
			
				case 3:
					return -780.85f, -1358.394f, 45.282f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_120(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x549D Hash - 0xA7EC4DCD ^0x75B7B4EC
{
	if (uParam0->f_1 == 0)
		uParam0->f_1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(hParam1, vParam2, 7);
	else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_1))
		*uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_1));

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	uParam0->f_2 = 1f;
	return true;
}

int func_121(int iParam0) // Position - 0x54F1 Hash - 0x9D04607 ^0x9D04607
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 13;
	
		case 2:
			return 10;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

Hash func_122(int iParam0) // Position - 0x5546 Hash - 0x67684612 ^0x25640750
{
	switch (iParam0)
	{
		case 0:
			return joaat("p_stageshelllight01x");
	
		case 1:
			return joaat("p_bulb_g_stage01x");
	
		case 2:
			return joaat("p_bulb_g_stage01x");
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

Vector3 func_123(int iParam0, int iParam1) // Position - 0x55A4 Hash - 0xEA9A7255 ^0xEA9A7255
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2550.5588f, -1306.926f, 48.30644f;
			
				case 1:
					return 2549.9749f, -1306.7843f, 48.30579f;
			
				case 2:
					return 2549.3733f, -1306.6614f, 48.27742f;
			
				case 3:
					return 2548.7783f, -1306.5647f, 48.3292f;
			
				case 4:
					return 2548.1912f, -1306.501f, 48.33652f;
			
				case 5:
					return 2547.5989f, -1306.4607f, 48.33248f;
			
				case 6:
					return 2547.0117f, -1306.4392f, 48.3321f;
			
				case 7:
					return 2546.3787f, -1306.4324f, 48.32198f;
			
				case 8:
					return 2545.83f, -1306.4395f, 48.32955f;
			
				case 9:
					return 2545.2156f, -1306.4745f, 48.32186f;
			
				case 10:
					return 2544.6096f, -1306.5297f, 48.32782f;
			
				case 11:
					return 2544.0176f, -1306.6168f, 48.31695f;
			
				case 12:
					return 2543.4302f, -1306.7362f, 48.32981f;
			
				case 13:
					return 2542.867f, -1306.8843f, 48.33492f;
			
				case 14:
					return 2542.276f, -1307.0635f, 48.32477f;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2700.4321f, -1348.183f, 47.87681f;
			
				case 1:
					return 2700.377f, -1348.5137f, 47.85976f;
			
				case 2:
					return 2700.3699f, -1348.8884f, 47.8551f;
			
				case 3:
					return 2700.4343f, -1349.2566f, 47.86578f;
			
				case 4:
					return 2700.5583f, -1349.6306f, 47.84948f;
			
				case 5:
					return 2701.5422f, -1350.802f, 47.85961f;
			
				case 6:
					return 2701.878f, -1350.9857f, 47.88033f;
			
				case 7:
					return 2702.219f, -1351.1108f, 47.86714f;
			
				case 8:
					return 2702.572f, -1351.1788f, 47.87275f;
			
				case 9:
					return 2702.9624f, -1351.1809f, 47.87634f;
			
				case 10:
					return 2701.173f, -1350.579f, 47.846f;
			
				case 11:
					return 2700.92f, -1350.285f, 47.846f;
			
				case 12:
					return 2700.691f, -1349.987f, 47.846f;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2700.4321f, -1348.183f, 47.87681f;
			
				case 1:
					return 2700.377f, -1348.5137f, 47.85976f;
			
				case 2:
					return 2700.3699f, -1348.8884f, 47.8551f;
			
				case 3:
					return 2700.4343f, -1349.2566f, 47.86578f;
			
				case 4:
					return 2700.5583f, -1349.6306f, 47.84948f;
			
				case 5:
					return 2701.5422f, -1350.802f, 47.85961f;
			
				case 6:
					return 2701.878f, -1350.9857f, 47.88033f;
			
				case 7:
					return 2702.219f, -1351.1108f, 47.86714f;
			
				case 8:
					return 2702.572f, -1351.1788f, 47.87275f;
			
				case 9:
					return 2702.9624f, -1351.1809f, 47.87634f;
			
				default:
					break;
			}
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	}

	return 0f, 0f, 0f;
}

int func_124(int iParam0) // Position - 0x598C Hash - 0x325A480B ^0x325A480B
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 2;
	
		case 2:
			return 2;
	
		case 3:
			return 0;
	
		case 4:
			return 2;
	}

	return 0;
}

Hash func_125(int iParam0) // Position - 0x59DE Hash - 0xAAD68AF2 ^0xDCF4A759
{
	switch (iParam0)
	{
		case 0:
			return joaat("p_lampwall04x");
	
		case 1:
			return joaat("p_napoleonlight01x");
	
		case 2:
			return joaat("p_napoleonlight01x");
	
		case 3:
			return 0;
	
		case 4:
			return joaat("p_lampwall04x");
	}

	return 0;
}

Vector3 func_126(int iParam0, int iParam1) // Position - 0x5A40 Hash - 0x6288DC5 ^0x6288DC5
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2548.641f, -1292.5479f, 53.95758f;
			
				case 1:
					return 2544.2888f, -1292.5479f, 53.96331f;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2691.054f, -1352.816f, 52.59f;
			
				case 1:
					return 2696.695f, -1359.527f, 52.59f;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2688.867f, -1354.651f, 53.697f;
			
				case 1:
					return 2694.49f, -1361.375f, 53.697f;
			
				default:
					break;
			}
			break;
	
		case 3:
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -783.34f, -1367.153f, 45.388f;
			
				case 1:
					return -783.939f, -1360.04f, 45.325f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

Hash func_127(int iParam0, int iParam1) // Position - 0x5B60 Hash - 0xB925B99 ^0x792CDA95
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("p_stageshelllight_long01x");
			
				case 1:
					return joaat("p_stageshelllight_red01x");
			
				case 2:
					return joaat("p_stageshelllight_red01x");
			
				default:
					break;
			}
			break;
	
		case 1:
		case 2:
			return joaat("p_bulb_g_01x");
	
		case 3:
			break;
	
		case 4:
			break;
	}

	return 0;
}

Vector3 func_128(int iParam0, int iParam1) // Position - 0x5BD5 Hash - 0x23EAC636 ^0x23EAC636
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.6943f, -1306.4375f, 48.21665f;
			
				case 1:
					return 2551.421f, -1308.4922f, 48.21665f;
			
				case 2:
					return 2541.836f, -1308.4309f, 48.21665f;
			
				default:
					break;
			}
			break;
	
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2697.828f, -1347.849f, 48.061f;
			
				case 1:
					return 2697.828f, -1347.854f, 48.89f;
			
				case 2:
					return 2697.827f, -1347.856f, 49.633f;
			
				case 3:
					return 2697.825f, -1347.853f, 50.458f;
			
				case 4:
					return 2697.889f, -1347.932f, 51.201f;
			
				case 5:
					return 2698.051f, -1348.127f, 52.013f;
			
				case 6:
					return 2698.298f, -1348.42f, 52.674f;
			
				case 7:
					return 2698.682f, -1348.865f, 53.307f;
			
				case 8:
					return 2699.068f, -1349.323f, 53.747f;
			
				case 9:
					return 2699.578f, -1349.924f, 54.096f;
			
				case 10:
					return 2700.049f, -1350.493f, 54.234f;
			
				case 11:
					return 2700.6f, -1351.151f, 54.236f;
			
				case 12:
					return 2701.085f, -1351.721f, 54.095f;
			
				case 13:
					return 2701.579f, -1352.32f, 53.744f;
			
				case 14:
					return 2701.959f, -1352.784f, 53.318f;
			
				case 15:
					return 2702.34f, -1353.231f, 52.683f;
			
				case 16:
					return 2702.584f, -1353.52f, 52.034f;
			
				case 17:
					return 2702.747f, -1353.716f, 51.212f;
			
				case 18:
					return 2702.814f, -1353.797f, 50.457f;
			
				case 19:
					return 2702.818f, -1353.797f, 49.618f;
			
				case 20:
					return 2702.819f, -1353.797f, 48.896f;
			
				case 21:
					return 2702.817f, -1353.803f, 48.036f;
			
				default:
					break;
			}
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	}

	return 0f, 0f, 0f;
}

int func_129(int iParam0) // Position - 0x5E7A Hash - 0x3FB2C67 ^0x3FB2C67
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 22;
	
		case 2:
			return 22;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

float func_130(var uParam0) // Position - 0x5ECE Hash - 0xC1711080 ^0xC1711080
{
	float num;

	num = 0f;
	return num;
}

float func_131(var uParam0) // Position - 0x5EDB Hash - 0x6453E6F9 ^0x6453E6F9
{
	float num;

	num = 5f;
	return num;
}

int func_132(var uParam0) // Position - 0x5EE8 Hash - 0x8E8FC7AE ^0x8E8FC7AE
{
	int num;

	num = 10;
	return num;
}

BOOL func_133(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4) // Position - 0x5EF6 Hash - 0xE7F7CC3B ^0xE7F7CC3B
{
	int i;
	float num;

	if (!func_20(uParam2))
		func_21(uParam2);

	num = func_22(uParam2);

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		func_246(&uParam0->[i /*5*/], fParam1, num, fParam3, iParam4);
	}

	if (num >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}

	return 0;
}

float func_134(var uParam0) // Position - 0x5F51 Hash - 0x236039AD ^0x236039AD
{
	float num;

	num = 1f;
	return num;
}

BOOL func_135(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4) // Position - 0x5F5E Hash - 0xE7F7CC3B ^0xE7F7CC3B
{
	int i;
	float num;

	if (!func_20(uParam2))
		func_21(uParam2);

	num = func_22(uParam2);

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		func_247(&uParam0->[i /*5*/], fParam1, num, fParam3, iParam4);
	}

	if (num >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}

	return 0;
}

float func_136(var uParam0) // Position - 0x5FB9 Hash - 0xC1711080 ^0xC1711080
{
	float num;

	num = 0f;
	return num;
}

float func_137(var uParam0) // Position - 0x5FC6 Hash - 0x6453E6F9 ^0x6453E6F9
{
	float num;

	num = 5f;
	return num;
}

float func_138(var uParam0) // Position - 0x5FD3 Hash - 0x236039AD ^0x236039AD
{
	float num;

	num = 1f;
	return num;
}

float func_139(var uParam0) // Position - 0x5FE0 Hash - 0xC1711080 ^0xC1711080
{
	float num;

	num = 0f;
	return num;
}

float func_140(var uParam0) // Position - 0x5FED Hash - 0x6453E6F9 ^0x6453E6F9
{
	float num;

	num = 5f;
	return num;
}

float func_141(var uParam0) // Position - 0x5FFA Hash - 0x236039AD ^0x236039AD
{
	float num;

	num = 1f;
	return num;
}

float func_142(var uParam0) // Position - 0x6007 Hash - 0xC1711080 ^0xC1711080
{
	float num;

	num = 0f;
	return num;
}

float func_143(var uParam0) // Position - 0x6014 Hash - 0xEAAEEB54 ^0xEAAEEB54
{
	float num;

	num = 3f;
	return num;
}

BOOL func_144(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4) // Position - 0x6021 Hash - 0x6C1C9B04 ^0x6C1C9B04
{
	float num;

	if (!func_20(uParam2))
		func_21(uParam2);

	num = func_22(uParam2);
	func_246(uParam0, fParam1, num, fParam3, iParam4);

	if (num >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}

	return 0;
}

float func_145(var uParam0) // Position - 0x6062 Hash - 0x236039AD ^0x236039AD
{
	float num;

	num = 1f;
	return num;
}

BOOL func_146(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4) // Position - 0x606F Hash - 0x6C1C9B04 ^0x6C1C9B04
{
	float num;

	if (!func_20(uParam2))
		func_21(uParam2);

	num = func_22(uParam2);
	func_247(uParam0, fParam1, num, fParam3, iParam4);

	if (num >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}

	return 0;
}

float func_147(var uParam0) // Position - 0x60B0 Hash - 0xC1711080 ^0xC1711080
{
	float num;

	num = 0f;
	return num;
}

float func_148(var uParam0) // Position - 0x60BD Hash - 0xEAAEEB54 ^0xEAAEEB54
{
	float num;

	num = 3f;
	return num;
}

BOOL func_149(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6) // Position - 0x60CA Hash - 0x8B5B4DA7 ^0x8B5B4DA7
{
	int num;
	int num2;
	float num3;
	int i;

	num = iParam0;
	num2 = iParam1;

	if (num > num2)
		return 1;

	if (!func_20(uParam4))
		func_21(uParam4);

	num3 = func_22(uParam4);

	for (i = num; i <= num2; i = i + 1)
	{
		func_246(&uParam2->[i /*5*/], fParam3, num3, fParam5, iParam6);
	}

	if (num3 >= fParam5)
	{
		func_27(uParam4);
		return 1;
	}

	return 0;
}

float func_150(var uParam0) // Position - 0x6136 Hash - 0x236039AD ^0x236039AD
{
	float num;

	num = 1f;
	return num;
}

BOOL func_151(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6) // Position - 0x6143 Hash - 0x8B5B4DA7 ^0x8B5B4DA7
{
	int num;
	int num2;
	float num3;
	int i;

	num = iParam0;
	num2 = iParam1;

	if (num > num2)
		return 1;

	if (!func_20(uParam4))
		func_21(uParam4);

	num3 = func_22(uParam4);

	for (i = num; i <= num2; i = i + 1)
	{
		func_247(&uParam2->[i /*5*/], fParam3, num3, fParam5, iParam6);
	}

	if (num3 >= fParam5)
	{
		func_27(uParam4);
		return 1;
	}

	return 0;
}

float func_152(var uParam0) // Position - 0x61AF Hash - 0xD3540869 ^0xD3540869
{
	float num;

	num = 0.3f;
	return num;
}

float func_153(var uParam0) // Position - 0x61C0 Hash - 0x6453E6F9 ^0x6453E6F9
{
	float num;

	num = 5f;
	return num;
}

float func_154(var uParam0) // Position - 0x61CD Hash - 0x236039AD ^0x236039AD
{
	float num;

	num = 1f;
	return num;
}

void func_155(var uParam0, int iParam1) // Position - 0x61DA Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_156(var uParam0) // Position - 0x61E7 Hash - 0xFCA4989 ^0x23DCF6A8
{
	func_2(&(uParam0->f_13), 512);
	func_2(&(uParam0->f_13), 2048);
	return;
}

void func_157(var uParam0) // Position - 0x6205 Hash - 0xFCA4989 ^0x9A7D9A24
{
	func_2(&(uParam0->f_13), 1024);
	func_2(&(uParam0->f_13), 4096);
	return;
}

int func_158(var uParam0) // Position - 0x6223 Hash - 0xF93ACDEE ^0xB19CF3FD
{
	return uParam0->f_1018.f_1[uParam0->f_1029];
}

char* func_159(int iParam0, int iParam1) // Position - 0x6239 Hash - 0xD13C2AF3 ^0xF65D8C09
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p1_intro";
			
				case 3:
					return "script@shows@cancan_dance@p1_outro";
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p2_intro";
			
				case 3:
					return "script@shows@cancan_dance@p2_outro";
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb1@intro";
			
				case 3:
					return "script@shows@band_play@shw_bgb1@outro";
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb2@intro";
			
				case 3:
					return "script@shows@band_play@shw_bgb2@outro";
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 2:
					return "script@shows@bulletcatcher@shw_bulc@intro";
			
				case 3:
					return "script@shows@bulletcatcher@shw_bulc@outro";
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_artist@shw_esca@intro";
			
				case 3:
					return "script@shows@escape_artist@shw_esca@outro";
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_noose@shw_escn@intro";
			
				case 3:
					return "script@shows@escape_noose@shw_escn@outro";
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_breather@shw_firb@intro";
			
				case 3:
					return "script@shows@fire_breather@shw_firb@outro";
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_performer@shw_frd1@intro";
			
				case 3:
					return "script@shows@fire_performer@shw_frd1@outro";
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_dancer@shw_frd2@intro";
			
				case 3:
					return "script@shows@fire_dancer@shw_frd2@outro";
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 2:
					return "script@shows@flex_fight@shw_flxf@intro";
			
				case 3:
					return "script@shows@flex_fight@shw_flxf@outro";
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@intro";
			
				case 3:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@outro";
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@intro";
			
				case 3:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@outro";
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 2:
					return "script@shows@feats_of_strength@shw_strw@intro";
			
				case 3:
					return "script@shows@feats_of_strength@shw_strw@outro";
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 2:
					return "script@shows@sword_dancer@shw_swrd@intro";
			
				case 3:
					return "script@shows@sword_dancer@shw_swrd@outro";
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 2:
					return "script@shows@odd_fellows@shw_oddf_int@intro";
			
				case 3:
					return "script@shows@odd_fellows@shw_oddf_out@outro";
			}
			break;
	}

	return "";
}

char* func_160(int iParam0) // Position - 0x655D Hash - 0xE6862179 ^0x9A8A4743
{
	switch (iParam0)
	{
		case 5:
			return "PL_INTRO";
	
		case 6:
			return "PL_INTRO";
	
		case 7:
			return "PL_INTRO";
	
		case 8:
			return "PL_INTRO";
	
		case 9:
			return "PL_INTRO";
	
		case 10:
			return "PL_INTRO";
	
		case 11:
			return "PL_INTRO";
	
		case 12:
			return "PL_INTRO";
	
		case 13:
			return "PL_INTRO";
	
		case 14:
			return "PL_INTRO";
	
		case 15:
			return "PL_INTRO";
	
		case 16:
			return "PL_INTRO";
	
		case 17:
			return "PL_INTRO";
	
		case 18:
			return "PL_INTRO";
	
		case 19:
			return "PL_INTRO";
	
		case 20:
			return "PL_INTRO";
	}

	return "";
}

BOOL func_161(var uParam0, int iParam1, char* sParam2, char* sParam3, BOOL bParam4) // Position - 0x6671 Hash - 0x94342835 ^0x77ACD9C8
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		func_2(iParam1, 1);
		return true;
	}

	if (!func_5(*iParam1, 1) && !ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		func_4(iParam1, 1);
	}

	return false;
}

char* func_162(int iParam0, BOOL bParam1) // Position - 0x66D7 Hash - 0x1201C76A ^0x544D0363
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 6:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 7:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 8:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 9:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 10:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 11:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 12:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 13:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 14:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 15:
			if (bParam1)
				return "PL_INTRO";
			else
				return "PL_INTRO";
			break;
	
		case 16:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 17:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 18:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 19:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	
		case 20:
			if (bParam1)
				return "PL_OUTRO_POS";
			else
				return "PL_OUTRO_NEG";
			break;
	}

	return "";
}

BOOL func_163(int iParam0) // Position - 0x68DB Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_248(Global_1835011[iParam0 /*74*/].f_1);
}

void func_164(var uParam0, int iParam1, int iParam2) // Position - 0x6907 Hash - 0x33301F58 ^0xF724ED6C
{
	uParam0->f_1[iParam2] = iParam1;
	return;
}

BOOL func_165(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6919 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_249())
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
		num = func_250(Global_1898164.f_1[0 /*5*/]);
	
		if (func_76(num) && func_251(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_252(Global_1898164.f_1[0 /*5*/]))
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

void func_166(var uParam0, int iParam1) // Position - 0x6B1D Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_167(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x6B2A Hash - 0xFB1C2C0E ^0x6794528D
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

ePedType func_168(int iParam0) // Position - 0x6BA8 Hash - 0xD511B5FE ^0x7490B3CD
{
	switch (iParam0)
	{
		case 0:
			return joaat("cs_cabaretmc");
	
		case 1:
			return joaat("p_new_theater_curtain");
	
		default:
		
	}

	return 0;
}

char* func_169() // Position - 0x6BD5 Hash - 0x306ACA3A ^0x2C4101A8
{
	return "script@shows@curtains@curtains";
}

char* func_170(int iParam0) // Position - 0x6BE1 Hash - 0xE5247562 ^0xDEE44DC6
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
	
		case 1:
			return "PBL_OPEN_SLOW";
	
		case 2:
			return "PBL_CLOSE_SLOW";
	
		case 3:
			return "PBL_IDLE_OPEN";
	
		default:
		
	}

	return "FAIL";
}

char* func_171(int iParam0) // Position - 0x6C29 Hash - 0xF7EB2862 ^0x109C60A9
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
	
		case 1:
			return "PBL_OPEN_SLOW";
	
		case 2:
			return "PBL_CLOSE_SLOW";
	
		case 3:
			return "PBL_IDLE_OPEN";
	
		case 4:
			return "pl_OPEN_SLOW_HALF";
	
		default:
		
	}

	return "FAIL";
}

BOOL func_172(AnimScene ansParam0, char* sParam1, char* sParam2) // Position - 0x6C7E Hash - 0x16D35BC7 ^0xBE4B695A
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansParam0, sParam1) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(ansParam0, sParam1))
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansParam0, sParam1);

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansParam0, sParam1))
		return false;

	return true;
}

char* func_173() // Position - 0x6CBB Hash - 0x306ACA3A ^0xB518CE36
{
	return "SHRCTAU";
}

char* func_174(int iParam0, int iParam1) // Position - 0x6CC7 Hash - 0xD13C2AF3 ^0x7C039FDC
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_1@intro";
			
				case 1:
					return "script@shows@set_1@outro";
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_2@intro";
			
				case 1:
					return "script@shows@set_2@outro";
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_3@intro";
			
				case 1:
					return "script@shows@set_3@outro";
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_4@intro";
			
				case 1:
					return "script@shows@set_4@outro";
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_5@intro";
			
				case 1:
					return "script@shows@set_5@outro";
			}
			break;
	}

	return "";
}

char* func_175(int iParam0) // Position - 0x6DD0 Hash - 0xE6862179 ^0x9A8A4743
{
	switch (iParam0)
	{
		case 0:
			return "PL_INTRO";
	
		case 1:
			return "PL_INTRO";
	
		case 2:
			return "PL_INTRO";
	
		case 3:
			return "PL_INTRO";
	
		case 4:
			return "PL_INTRO";
	}

	return "";
}

Vector3 func_176(int iParam0) // Position - 0x6E34 Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 0:
			return 2546.5217f, -1306.8352f, 48.2666f;
	
		case 1:
			return 2538.5508f, -1313.0084f, 48.21665f;
	
		case 2:
			return 2546.1858f, -1309.7563f, 48.21665f;
	
		case 3:
			return 2546.2021f, -1295.387f, 48.2419f;
	
		case 4:
			return 2538.5508f, -1313.0084f, 48.21665f;
	
		case 5:
			return 2546.2783f, -1301.3872f, 49.2503f;
	
		case 6:
			return 1.2492f, 0f, -179.3095f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_177(int iParam0) // Position - 0x6EEB Hash - 0x982302A6 ^0x982302A6
{
	switch (iParam0)
	{
		case 0:
			return 0f;
	
		case 1:
			return -88.38f;
	
		case 2:
			return 355.6767f;
	
		case 3:
			return 0f;
	
		case 4:
			return -88.38f;
	
		case 5:
			return 0f;
	
		case 6:
			return 0f;
	
		default:
		
	}

	return 0f;
}

Ped func_178(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x6F4E Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_253(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_179(int iParam0, int iParam1) // Position - 0x6F90 Hash - 0xDDF24FD9 ^0xDDF24FD9
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 8:
			return true;
	
		case 4:
			switch (iParam1)
			{
				case 11:
				case 13:
				case 19:
					return false;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 6:
				case 8:
				case 10:
				case 14:
				case 15:
				case 17:
					return false;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
					return false;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
	}

	return true;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x7158 Hash - 0xA17D549C ^0x6309A042
{
	switch (iParam0)
	{
		case 0:
			return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
	
		case 1:
			return "script_shows@show_audience@ig2_reaction_oneshot";
	
		case 2:
			return "script_shows@show_audience@ig1_reaction_loops@t02_regular_rowdy";
	
		case 3:
			return "script_shows@show_audience@ig1_reaction_loops@t04_musical";
	
		case 4:
			return "script_shows@show_audience@ig1_reaction_loops@t05_dancing";
	
		case 5:
			return "script_shows@show_audience@ig1_reaction_loops@t06_comedic_displeased";
	
		case 6:
			return "script_shows@show_audience@ig1_reaction_loops@t07_suspense_applause";
	
		case 7:
			return "script_shows@show_audience@ig1_reaction_loops@t08_applause_horrified";
	
		case 8:
			return "script_shows@show_audience@ig1_reaction_loops@t09_blocked";
	
		case 9:
			return "script_shows@escapeartist@escapeartist_react";
	
		case 10:
			return "script_shows@show_audience@ig5_hatfire_react@t01_hatfire_right";
	
		case 11:
			return "script_shows@show_audience@ig5_hatfire_react@t05_hatfire_front";
	
		default:
		
	}

	return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
}

char* func_181(int iParam0, var uParam1) // Position - 0x7208 Hash - 0x33D51A90 ^0xA375021F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(uParam1);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1);
	}

	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_VERSION";
}

BOOL func_182(var uParam0, char* sParam1, const char* sParam2) // Position - 0x7240 Hash - 0x5AA55923 ^0xA2744C11
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		uParam0->f_1 = 1;
		return true;
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}

	return false;
}

int func_183(int iParam0) // Position - 0x728A Hash - 0x6C1105E8 ^0x6C1105E8
{
	switch (iParam0)
	{
		case 0:
			return 56;
	
		case 1:
		case 2:
			return 22;
	
		case 3:
			return 10;
	
		case 4:
			return 23;
	}

	return 0;
}

Hash func_184(int iParam0) // Position - 0x72D9 Hash - 0x8936E2F ^0xA7619EF8
{
	switch (iParam0)
	{
		case 0:
			return joaat("nbx_civilians");
	
		case 1:
			return joaat("nbx_civilians");
	
		case 3:
			return joaat("val_civilians");
	
		case 4:
			return joaat("bla_upperclass");
	}

	return joaat("nbx_civilians");
}

int func_185(int iParam0, int iParam1) // Position - 0x7331 Hash - 0xCB2712C7 ^0xCB2712C7
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 2;
			
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 2;
			
				case 17:
					return 1;
			
				case 18:
					return 1;
			
				case 20:
					return 2;
			
				case 31:
					return 2;
			
				case 32:
					return 2;
			
				case 39:
					return 2;
			
				case 53:
				case 54:
				case 55:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 3:
			break;
	}

	return 0;
}

Vector3 func_186(int iParam0, int iParam1) // Position - 0x73F8 Hash - 0xEA9A7255 ^0xEA9A7255
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2541.9539f, -1303.6516f, 47.51162f;
			
				case 1:
					return 2542.6248f, -1303.6276f, 47.50835f;
			
				case 2:
					return 2543.2527f, -1303.5038f, 47.51194f;
			
				case 3:
					return 2543.9138f, -1303.4467f, 47.50978f;
			
				case 4:
					return 2544.5544f, -1303.3499f, 47.51124f;
			
				case 5:
					return 2545.2117f, -1303.2858f, 47.48675f;
			
				case 6:
					return 2540.8508f, -1302.3906f, 47.83032f;
			
				case 7:
					return 2541.4048f, -1302.1624f, 47.83151f;
			
				case 8:
					return 2542.039f, -1301.9946f, 47.83165f;
			
				case 9:
					return 2542.659f, -1301.8953f, 47.83114f;
			
				case 10:
					return 2543.2808f, -1301.7847f, 47.83141f;
			
				case 11:
					return 2543.8872f, -1301.7189f, 47.8308f;
			
				case 12:
					return 2544.5361f, -1301.6354f, 47.831f;
			
				case 13:
					return 2545.165f, -1301.5907f, 47.81311f;
			
				case 14:
					return 2540.8162f, -1300.6383f, 48.12306f;
			
				case 15:
					return 2541.43f, -1300.4728f, 48.12244f;
			
				case 16:
					return 2542.0337f, -1300.3115f, 48.12096f;
			
				case 17:
					return 2542.644f, -1300.1532f, 48.12228f;
			
				case 18:
					return 2543.269f, -1300.0386f, 48.12248f;
			
				case 19:
					return 2543.8955f, -1299.9259f, 48.12423f;
			
				case 20:
					return 2545.1692f, -1299.8176f, 48.10023f;
			
				case 21:
					return 2540.8438f, -1298.8798f, 48.39516f;
			
				case 22:
					return 2541.4421f, -1298.742f, 48.39409f;
			
				case 23:
					return 2542.0696f, -1298.5867f, 48.39284f;
			
				case 24:
					return 2543.3018f, -1298.2754f, 48.39411f;
			
				case 25:
					return 2543.8982f, -1298.1788f, 48.39465f;
			
				case 26:
					return 2544.5361f, -1298.0916f, 48.39633f;
			
				case 27:
					return 2550.9575f, -1303.6145f, 47.48922f;
			
				case 28:
					return 2550.3018f, -1303.5435f, 47.48922f;
			
				case 29:
					return 2549.651f, -1303.4829f, 47.48394f;
			
				case 30:
					return 2549.0054f, -1303.4297f, 47.48394f;
			
				case 31:
					return 2548.3562f, -1303.3667f, 47.48394f;
			
				case 32:
					return 2547.7126f, -1303.341f, 47.48394f;
			
				case 33:
					return 2552.0967f, -1302.3553f, 47.80622f;
			
				case 34:
					return 2551.5093f, -1302.1925f, 47.80622f;
			
				case 35:
					return 2550.8994f, -1302.0336f, 47.80622f;
			
				case 36:
					return 2550.2979f, -1301.8839f, 47.80622f;
			
				case 37:
					return 2549.6611f, -1301.7599f, 47.80622f;
			
				case 38:
					return 2549.0374f, -1301.6827f, 47.80622f;
			
				case 39:
					return 2548.4128f, -1301.6241f, 47.80622f;
			
				case 40:
					return 2552.1223f, -1300.5559f, 48.09521f;
			
				case 41:
					return 2551.4993f, -1300.4144f, 48.09521f;
			
				case 42:
					return 2550.8713f, -1300.2426f, 48.09521f;
			
				case 43:
					return 2550.2546f, -1300.1294f, 48.09521f;
			
				case 44:
					return 2549.6353f, -1300.0294f, 48.09521f;
			
				case 45:
					return 2549.016f, -1299.9486f, 48.09521f;
			
				case 46:
					return 2552.1152f, -1298.8127f, 48.36841f;
			
				case 47:
					return 2551.4988f, -1298.6577f, 48.36841f;
			
				case 48:
					return 2550.2537f, -1298.388f, 48.36841f;
			
				case 49:
					return 2549.629f, -1298.3119f, 48.36841f;
			
				case 50:
					return 2549.001f, -1298.207f, 48.36841f;
			
				case 51:
					return 2548.3677f, -1298.1227f, 48.36841f;
			
				case 52:
					return 2547.7332f, -1298.0409f, 48.36841f;
			
				case 53:
					return 2553.102f, -1299.6674f, 49.214f;
			
				case 54:
					return 2553.1287f, -1302.3986f, 49.214f;
			
				case 55:
					return 2539.7886f, -1302.3699f, 49.214f;
			
				default:
					break;
			}
			break;
	
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2701.1704f, -1354.493f, 47.77215f;
			
				case 1:
					return 2700.7078f, -1354.0732f, 47.77014f;
			
				case 2:
					return 2700.242f, -1353.6348f, 47.76572f;
			
				case 3:
					return 2699.766f, -1353.2302f, 47.74422f;
			
				case 4:
					return 2697.559f, -1350.3857f, 47.76871f;
			
				case 5:
					return 2697.222f, -1349.8434f, 47.76798f;
			
				case 6:
					return 2696.8848f, -1349.3087f, 47.76988f;
			
				case 7:
					return 2699.7312f, -1355.699f, 47.94025f;
			
				case 8:
					return 2699.2498f, -1355.2869f, 47.93497f;
			
				case 9:
					return 2698.7637f, -1354.8772f, 47.93819f;
			
				case 10:
					return 2695.7742f, -1351.0416f, 47.93525f;
			
				case 11:
					return 2695.4387f, -1350.4987f, 47.93626f;
			
				case 12:
					return 2698.3162f, -1356.9141f, 48.10247f;
			
				case 13:
					return 2697.834f, -1356.4802f, 48.09552f;
			
				case 14:
					return 2694.6882f, -1352.778f, 48.10484f;
			
				case 15:
					return 2694.3896f, -1352.1956f, 48.09603f;
			
				case 16:
					return 2694.055f, -1351.6707f, 48.0974f;
			
				case 17:
					return 2696.514f, -1357.5753f, 48.25399f;
			
				case 18:
					return 2696.022f, -1357.1677f, 48.25772f;
			
				case 19:
					return 2695.5542f, -1356.7307f, 48.23498f;
			
				case 20:
					return 2693.692f, -1354.4396f, 48.26648f;
			
				case 21:
					return 2693.3186f, -1353.9196f, 48.26515f;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return -349.1009f, 693.76935f, 116.88754f;
			
				case 1:
					return -348.41678f, 693.9259f, 116.89246f;
			
				case 2:
					return -345.91693f, 694.58575f, 116.87409f;
			
				case 3:
					return -344.2555f, 695.06036f, 116.87595f;
			
				case 4:
					return -349.50247f, 695.63135f, 117.00178f;
			
				case 5:
					return -345.29578f, 696.78107f, 117.01893f;
			
				case 6:
					return -350.5786f, 697.272f, 117.1134f;
			
				case 7:
					return -346.91803f, 698.2223f, 117.11391f;
			
				case 8:
					return -345.20688f, 698.74396f, 117.11842f;
			
				case 9:
					return -350.43027f, 699.0625f, 117.13081f;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.0957f, -1365.9279f, 43.26698f;
			
				case 1:
					return -776.1156f, -1365.2568f, 43.26892f;
			
				case 2:
					return -776.1213f, -1364.0226f, 43.26947f;
			
				case 3:
					return -776.0749f, -1361.3184f, 43.29291f;
			
				case 4:
					return -776.07806f, -1360.6554f, 43.26656f;
			
				case 5:
					return -776.107f, -1359.996f, 43.26938f;
			
				case 6:
					return -777.7452f, -1365.9292f, 43.43242f;
			
				case 7:
					return -778.01996f, -1365.2721f, 43.45926f;
			
				case 8:
					return -777.95746f, -1361.3146f, 43.4812f;
			
				case 9:
					return -777.9938f, -1360.6622f, 43.45993f;
			
				case 10:
					return -777.97754f, -1360.0001f, 43.45834f;
			
				case 11:
					return -779.8451f, -1365.9086f, 43.6443f;
			
				case 12:
					return -779.8615f, -1365.2626f, 43.64589f;
			
				case 13:
					return -779.8595f, -1364.6387f, 43.64569f;
			
				case 14:
					return -779.83496f, -1361.2996f, 43.67118f;
			
				case 15:
					return -779.81805f, -1360.6417f, 43.64128f;
			
				case 16:
					return -781.73694f, -1365.253f, 43.83224f;
			
				case 17:
					return -781.7541f, -1364.6278f, 43.83392f;
			
				case 18:
					return -781.7646f, -1363.9998f, 43.83494f;
			
				case 19:
					return -781.7217f, -1360.6381f, 43.83135f;
			
				case 20:
					return -781.72095f, -1359.9727f, 43.83129f;
			
				case 21:
					return -781.7397f, -1359.3462f, 43.83311f;
			
				case 22:
					return -781.71216f, -1358.7216f, 43.83042f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

float func_187(int iParam0, int iParam1) // Position - 0x7EBD Hash - 0xFEC04FCF ^0xFEC04FCF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
			
				case 1:
					return 194.54f;
			
				case 2:
					return 185.02f;
			
				case 3:
					return 185.67f;
			
				case 4:
					return 186.48f;
			
				case 5:
					return 189.64f;
			
				case 6:
					return 194.87f;
			
				case 7:
					return 197.45f;
			
				case 8:
					return 192.94f;
			
				case 9:
					return 190.4f;
			
				case 10:
					return 187.74f;
			
				case 11:
					return 188.21f;
			
				case 12:
					return 191.46f;
			
				case 13:
					return 187.8f;
			
				case 14:
					return 197.77f;
			
				case 15:
					return 197.28f;
			
				case 16:
					return 195.7f;
			
				case 17:
					return 194.38f;
			
				case 18:
					return 189.91f;
			
				case 19:
					return 187.19f;
			
				case 20:
					return 183.35f;
			
				case 21:
					return 195.68f;
			
				case 22:
					return 195.08f;
			
				case 23:
					return 197.6f;
			
				case 24:
					return 192.22f;
			
				case 25:
					return 187.31f;
			
				case 26:
					return 186.63f;
			
				case 27:
					return 174.21f;
			
				case 28:
					return 175.4f;
			
				case 29:
					return 177.33f;
			
				case 30:
					return 177.62f;
			
				case 31:
					return 175.4f;
			
				case 32:
					return 176.59f;
			
				case 33:
					return 165.32f;
			
				case 34:
					return 170.16f;
			
				case 35:
					return 170.37f;
			
				case 36:
					return 174.13f;
			
				case 37:
					return 175.59f;
			
				case 38:
					return 173.64f;
			
				case 39:
					return 178.62f;
			
				case 40:
					return 169.96f;
			
				case 41:
					return 171.41f;
			
				case 42:
					return 170.19f;
			
				case 43:
					return 171.15f;
			
				case 44:
					return 174.93f;
			
				case 45:
					return 177.61f;
			
				case 46:
					return 169.6f;
			
				case 47:
					return 171.53f;
			
				case 48:
					return 172.77f;
			
				case 49:
					return 174.2f;
			
				case 50:
					return 175.33f;
			
				case 51:
					return 175.1f;
			
				case 52:
					return 176.09f;
			
				case 53:
					return 152.8307f;
			
				case 54:
					return 152.8307f;
			
				case 55:
					return 190.6648f;
			
				default:
					break;
			}
			break;
	
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.72f;
			
				case 1:
					return -39.69f;
			
				case 2:
					return -39.97f;
			
				case 3:
					return -39.02f;
			
				case 4:
					return -52.61f;
			
				case 5:
					return -55.28f;
			
				case 6:
					return -56.79f;
			
				case 7:
					return -39.3f;
			
				case 8:
					return -38.34f;
			
				case 9:
					return -39.92f;
			
				case 10:
					return -57.96f;
			
				case 11:
					return -56.65f;
			
				case 12:
					return -38.24f;
			
				case 13:
					return -39.76f;
			
				case 14:
					return -56.13f;
			
				case 15:
					return -58.55f;
			
				case 16:
					return -54.07f;
			
				case 17:
					return -40.84f;
			
				case 18:
					return -40.21f;
			
				case 19:
					return -44.17f;
			
				case 20:
					return -52.32f;
			
				case 21:
					return -54.76f;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return -164f;
			
				case 1:
					return -164f;
			
				case 2:
					return -164f;
			
				case 3:
					return -164f;
			
				case 4:
					return -164f;
			
				case 5:
					return -164f;
			
				case 6:
					return -164f;
			
				case 7:
					return -164f;
			
				case 8:
					return -164f;
			
				case 9:
					return -164f;
			
				default:
					break;
			}
			break;
	
		case 4:
			return -88.69f;
	}

	return -175.57f;
}

int func_188(int iParam0, int iParam1) // Position - 0x8502 Hash - 0x72143BA7 ^0x72143BA7
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 1;
			
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 1;
			
				case 17:
					return 2;
			
				case 18:
					return 2;
			
				case 20:
				case 31:
					return 1;
			
				case 32:
					return 1;
			
				case 39:
					return 1;
			
				case 53:
				case 54:
				case 55:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 3:
			break;
	}

	return 0;
}

BOOL func_189(var uParam0, int iParam1) // Position - 0x85C5 Hash - 0xDC1ED3D3 ^0x1092D668
{
	int i;
	Vector3 vector;

	if (func_228(iParam1) != -1)
	{
		i = 0;
	
		for (i = 0; i <= func_228(iParam1); i = i + 1)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_22[i]))
			{
				vector = { func_256(iParam1, i) };
				uParam0->f_22[i] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vector.f_9, vector, vector.f_3, vector.f_6, vector.f_10);
			}
		}
	
		i = 0;
	
		for (i = 0; i <= func_228(iParam1); i = i + 1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_22[i]))
				PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_22[i], false, 2);
		}
	
		return true;
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_190(int iParam0, int iParam1) // Position - 0x8676 Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 10:
				case 11:
				case 12:
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 3:
				case 4:
				case 8:
				case 9:
				case 10:
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
					return true;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 17:
				case 18:
				case 20:
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

char* func_191(int iParam0, int iParam1, int iParam2) // Position - 0x888B Hash - 0x86DE4110 ^0x3F272B6B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
					
						case 2:
							return "Male5";
					
						case 3:
							return "Male1";
					
						case 4:
							return "Male3";
					
						case 5:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
					
						case 1:
							return "Male5";
					
						case 10:
							return "Male1";
					
						case 11:
							return "Male3";
					
						case 12:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
					
						case 4:
							return "Male5";
					
						case 8:
							return "Male3";
					
						case 9:
							return "Male0";
					
						case 10:
							return "Male1";
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
					
						case 10:
							return "Male1";
					
						case 11:
							return "Male2";
					
						default:
							break;
					}
					break;
			
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
					
						case 10:
							return "Male1";
					
						case 11:
							return "Male2";
					
						case 17:
							return "Male3";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
					
						case 10:
							return "Male3";
					
						case 11:
							return "Male1";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
					
						case 10:
							return "Male2";
					
						case 11:
							return "Male3";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
					
						case 10:
							return "Male2";
					
						case 11:
							return "Male3";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
					
						case 10:
							return "Male2";
					
						case 11:
							return "Male1";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male3";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
					
						case 2:
							return "Male5";
					
						case 3:
							return "Male1";
					
						case 4:
							return "Male3";
					
						case 5:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
					
						case 1:
							return "Male5";
					
						case 10:
							return "Male1";
					
						case 11:
							return "Male3";
					
						case 12:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
					
						case 4:
							return "Male5";
					
						case 8:
							return "Male3";
					
						case 9:
							return "Male0";
					
						case 10:
							return "Male1";
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
					
						case 10:
							return "Male1";
					
						case 11:
							return "Male2";
					
						default:
							break;
					}
					break;
			
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
					
						case 10:
							return "Male1";
					
						case 11:
							return "Male2";
					
						case 17:
							return "Male3";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
					
						case 10:
							return "Male3";
					
						case 11:
							return "Male1";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
					
						case 10:
							return "Male2";
					
						case 11:
							return "Male3";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
					
						case 10:
							return "Male2";
					
						case 11:
							return "Male3";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male0";
					
						default:
							break;
					}
					break;
			
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
					
						case 10:
							return "Male2";
					
						case 11:
							return "Male1";
					
						case 17:
							return "Female1";
					
						case 18:
							return "Female";
					
						case 20:
							return "Male3";
					
						default:
							break;
					}
					break;
			}
			break;
	}

	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_HANDLE";
}

BOOL func_192(int iParam0) // Position - 0x8F43 Hash - 0xE4A49BB0 ^0xE4A49BB0
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		default:
		
	}

	return false;
}

void func_193(var uParam0, int iParam1) // Position - 0x8F82 Hash - 0x30F6C7D6 ^0xB9013AB2
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, joaat("PROP_HUMAN_SEAT_CHAIR"), func_186(iParam1, uParam0->f_2), func_187(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);

	return;
}

void func_194(var uParam0, int iParam1) // Position - 0x8FBF Hash - 0xB01519E8 ^0x4AC2559B
{
	int num;
	Vector3 vector;
	float num2;
	Vector3 vector2;
	int num3;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		num = 2;
	
		if (PED::IS_PED_MALE(*uParam0))
			num = 1;
	
		vector = { func_186(iParam1, uParam0->f_2) };
		num2 = func_187(iParam1, uParam0->f_2);
		vector2 = { 0f, 0f, num2 };
		num3 = func_257(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = func_258(uParam0->f_5);
		uParam0->f_8 = func_259(uParam0->f_5, num, num3);
	
		if (num3 == 0)
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vector, vector2, 1000f, -1000f, -1, 49153, func_260(), 2, 1, 0);
		else
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vector, vector2, 1000f, -1000f, -1, 49153, func_260(), 2, 0, 0);
	}

	return;
}

void func_195(Entity eParam0, int iParam1) // Position - 0x9098 Hash - 0x9F3718A3 ^0xA4401484
{
	BOOL _int;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "honor_block"))
			_int = DECORATOR::DECOR_GET_INT(eParam0, "honor_block");
	
		_int = _int || func_261(iParam1);
		DECORATOR::DECOR_SET_INT(eParam0, "honor_block", _int);
	}

	return;
}

char* func_196(int iParam0) // Position - 0x90DA Hash - 0xE5247562 ^0x34AB5FAA
{
	switch (iParam0)
	{
		case 0:
			return "shows_sd_vaudeville";
	
		case 1:
		case 2:
			return "shows_sd_magic";
	
		case 3:
			return "shows_val_magic";
	
		case 4:
			return "shows_bla_movie";
	
		default:
		
	}

	return "shows_sd_vaudeville";
}

void func_197(var uParam0, var uParam1, int iParam2) // Position - 0x9128 Hash - 0xEBFB8122 ^0x59B1DD4D
{
	BOOL flag;
	int num;
	float num2;
	int points;
	int point;
	int i;
	float num3;
	BOOL flag2;

	flag = func_13(PLAYER::GET_PLAYER_INDEX(), true, false, true);
	num = func_183(iParam2);
	num2 = 0f;

	if (func_20(&(uParam0->f_8)))
		num2 = func_22(&(uParam0->f_8));

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->[i /*10*/]) || ENTITY::IS_ENTITY_DEAD(uParam1->[i /*10*/]))
		{
		}
		else
		{
			PED::SET_PED_RESET_FLAG(uParam1->[i /*10*/], 153, true);
		
			if (Global_1394141.f_1334)
			{
				if (func_262(*uParam0, i) && uParam1->[i /*10*/].f_1 != 5)
					uParam1->[i /*10*/].f_1 = 5;
			}
			else if (func_262(*uParam0, i) && uParam1->[i /*10*/].f_1 == 5)
			{
				func_263(&(uParam0->f_11), 0);
				uParam1->[i /*10*/].f_1 = 3;
			}
		
			if (uParam0->f_19 && func_264(iParam2))
			{
				if (!func_20(&(uParam0->f_8)))
				{
					func_4(&(uParam0->f_18), 1);
					func_4(&(uParam0->f_18), 8);
					func_21(&(uParam0->f_8));
				}
				else if (uParam1->[i /*10*/].f_1 < 7)
				{
					if (func_265(iParam2, i) >= 0f && num2 > func_265(iParam2, i))
						uParam1->[i /*10*/].f_1 = 7;
				}
			}
		
			if (!uParam0->f_19 && !func_262(*uParam0, i) && uParam1->[i /*10*/].f_1 != 5)
			{
				if (uParam1->[i /*10*/].f_9)
				{
					num3 = func_89(Global_35, uParam1->[i /*10*/], true, true);
				
					if (num3 > 2f || !func_266(&uParam1->[i /*10*/]))
					{
						uParam1->[i /*10*/].f_9 = 0;
						uParam0->f_21 = 0;
						uParam1->[i /*10*/].f_5 = 2;
						func_267(&uParam1->[i /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && uParam1->[i /*10*/].f_1 != 6)
				{
					num3 = func_89(Global_35, uParam1->[i /*10*/], true, true);
				
					if (num3 < 1.5f && func_266(&uParam1->[i /*10*/]))
					{
						uParam1->[i /*10*/].f_5 = func_268(i);
						func_267(&uParam1->[i /*10*/], iParam2);
						uParam1->[i /*10*/].f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
		
			switch (uParam1->[i /*10*/].f_1)
			{
				case 0:
					break;
			
				case 1:
					if (func_269(iParam2, i))
						func_271(&uParam1->[i /*10*/], func_270(iParam2), 500);
					break;
			
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam1->[i /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_186(iParam2, i), func_187(iParam2, i), -1, false, true, 0, 0.25f, false);
					uParam1->[i /*10*/].f_1 = 1;
					break;
			
				case 3:
					func_272(&uParam1->[i /*10*/], iParam2);
					uParam1->[i /*10*/].f_1 = 4;
					break;
			
				case 4:
					flag2 = false;
				
					if (uParam1->[i /*10*/].f_6 == -1)
					{
						func_267(&uParam1->[i /*10*/], iParam2);
						uParam1->[i /*10*/].f_1 = 1;
						return;
					}
				
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam1->[i /*10*/], uParam1->[i /*10*/].f_7, uParam1->[i /*10*/].f_8, 1))
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uParam1->[i /*10*/], uParam1->[i /*10*/].f_7, uParam1->[i /*10*/].f_8) > 0.97f)
							flag2 = true;
					else
						flag2 = true;
				
					if (flag2)
					{
						func_267(&uParam1->[i /*10*/], iParam2);
						uParam1->[i /*10*/].f_1 = 1;
					}
					break;
			
				case 5:
					if (!uParam0->f_19)
						func_273(uParam0, &uParam1->[i /*10*/]);
					break;
			
				case 6:
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_12[1 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam1->[i /*10*/]))
							PED::SET_PED_RESET_FLAG(uParam1->[i /*10*/], 261, true);
					
						if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_12[1 /*2*/], func_191(1, i, uParam0->f_17)) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_12[1 /*2*/], false))
						{
							func_194(&uParam1->[i /*10*/], iParam2);
							uParam1->[i /*10*/].f_1 = 1;
						}
					
						if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam1->[i /*10*/], uParam0->f_12[1 /*2*/]))
						{
							func_194(&uParam1->[i /*10*/], iParam2);
							uParam1->[i /*10*/].f_1 = 1;
						}
					}
					break;
			
				case 7:
					if (!func_5(uParam0->f_18, 4))
						return;
				
					if (func_257(iParam2, i) == 0 && !func_192(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uParam1->[i /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_186(iParam2, i), func_187(iParam2, i), -1, false, true, 0, 0.25f, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->[i /*10*/], false, false);
						uParam1->[i /*10*/].f_1 = 8;
					}
					else
					{
						uParam1->[i /*10*/].f_1 = 9;
					}
					break;
			
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->[i /*10*/]) && !ENTITY::IS_ENTITY_DEAD(uParam1->[i /*10*/]))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->[i /*10*/], 0))
						{
							PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(uParam1->[i /*10*/], 2546.3445f, -1307.9938f, 48.42698f, 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->[i /*10*/], true);
							uParam1->[i /*10*/].f_1 = 9;
						}
						else if (num2 > func_265(iParam2, i) + 2f)
						{
							uParam1->[i /*10*/].f_1 = 9;
						}
					}
					break;
			
				case 9:
					if (func_229(iParam2))
					{
						if (func_5(uParam0->f_18, 16))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uParam1->[i /*10*/], func_196(iParam2), 0, 10, -1, false, 0, -1);
							uParam1->[i /*10*/].f_1 = 10;
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1->[i /*10*/], func_274(iParam2), 1f, -1, 0.25f, 5373953, 1193033728);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->[i /*10*/], false, false);
						uParam1->[i /*10*/].f_1 = 10;
					}
					break;
			
				case 10:
					if (flag || PED::IS_PED_SHOOTING(Global_35) || func_5(uParam0->f_18, 32))
					{
						func_4(&(uParam0->f_18), 32);
						uParam1->[i /*10*/].f_1 = 12;
						return;
					}
				
					if (func_229(iParam2))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam1->[i /*10*/], 658540077, true) == 1)
							uParam1->[i /*10*/].f_1 = 11;
						else if (num2 > func_265(iParam2, i) + 3f)
							uParam1->[i /*10*/].f_1 = 9;
					}
					else if (!func_73(ENTITY::GET_ENTITY_COORDS(uParam1->[i /*10*/], true, false)))
					{
						PED::SET_PED_CONFIG_FLAG(uParam1->[i /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED(uParam1->[i /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->[i /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->[i /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam1->[i /*10*/]);
						uParam1->[i /*10*/].f_1 = 14;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(uParam1->[i /*10*/], SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) != 1 && num2 > func_265(iParam2, i) + 3f)
					{
						uParam1->[i /*10*/].f_1 = 9;
					}
					break;
			
				case 11:
					if (flag || PED::IS_PED_SHOOTING(Global_35) || func_5(uParam0->f_18, 32))
					{
						func_4(&(uParam0->f_18), 32);
						uParam1->[i /*10*/].f_1 = 12;
						return;
					}
				
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_196(iParam2), &points);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_196(iParam2), ENTITY::GET_ENTITY_COORDS(uParam1->[i /*10*/], true, false), &point);
				
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam1->[i /*10*/], 658540077, true) != 1 || point >= points - 2)
					{
						PED::SET_PED_CONFIG_FLAG(uParam1->[i /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED(uParam1->[i /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->[i /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->[i /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam1->[i /*10*/]);
						uParam1->[i /*10*/].f_1 = 14;
					}
					break;
			
				case 12:
					PED::SET_PED_CONFIG_FLAG(uParam1->[i /*10*/], 301, false);
					PED::SET_PED_CAN_BE_TARGETTED(uParam1->[i /*10*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->[i /*10*/], joaat("REL_NO_RELATIONSHIP"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->[i /*10*/], false);
					TASK::TASK_FLEE_PED(uParam1->[i /*10*/], Global_35, 3, 0, -1082130432, -1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam1->[i /*10*/]);
					uParam1->[i /*10*/].f_1 = 14;
					break;
			
				case 13:
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam1->[i /*10*/], SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) != 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->[i /*10*/], 0))
					{
						PED::DELETE_PED(&uParam1->[i /*10*/]);
						uParam1->[i /*10*/].f_1 = 14;
					}
					else
					{
						uParam1->[i /*10*/].f_1 = 8;
					}
					break;
			
				case 14:
					break;
			}
		}
	}

	return;
}

struct<21> func_198(int iParam0, int iParam1, int iParam2) // Position - 0x995C Hash - 0xDD2C6FC5 ^0xD601AFE6
{
	var unk;

	unk = 4;
	unk.f_5 = 4;
	unk.f_10 = 4;
	unk.f_15 = 4;
	unk[0] = -1;
	unk[1] = -1;
	unk[2] = -1;
	unk[3] = -1;
	unk.f_5[0] = 0;
	unk.f_5[1] = 0;
	unk.f_5[2] = 0;
	unk.f_5[3] = 0;
	unk.f_10[0] = -1;
	unk.f_10[1] = -1;
	unk.f_10[2] = -1;
	unk.f_10[3] = -1;
	unk.f_15[0] = 0;
	unk.f_15[1] = 0;
	unk.f_15[2] = 0;
	unk.f_15[3] = 0;
	unk.f_20 = "";

	if (iParam2 == 49)
		unk.f_10[0] = 35;

	if (iParam2 == 48)
	{
		unk.f_10[0] = 2;
		unk.f_15[0] = 100;
	}

	switch (iParam0)
	{
		case 5:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 2:
					unk.f_10[0] = 1;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 3:
					unk[0] = 24;
					unk.f_5[0] = 40;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 4:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 3;
					unk.f_15[0] = 40;
					unk.f_15[1] = 40;
					unk.f_15[2] = 20;
					break;
			
				case 5:
					unk.f_10[0] = 1;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 6:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 12;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 7:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 10;
					unk.f_15[2] = 30;
					break;
			
				case 13:
					unk.f_10[0] = 5;
					unk.f_10[1] = 3;
					unk.f_10[2] = 4;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 14:
					unk[0] = 25;
					unk.f_5[0] = 20;
					unk.f_10[0] = 5;
					unk.f_10[1] = 4;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 15:
					unk.f_10[0] = 12;
					unk.f_10[1] = 2;
					unk.f_15[0] = 10;
					unk.f_15[1] = 90;
					break;
			
				case 16:
					unk.f_10[0] = 5;
					unk.f_10[1] = 3;
					unk.f_10[2] = 4;
					unk.f_10[3] = 11;
					unk.f_15[0] = 10;
					unk.f_15[1] = 30;
					unk.f_15[2] = 50;
					unk.f_15[3] = 10;
					break;
			
				case 17:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 12;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					unk.f_15[2] = 50;
					break;
			
				case 18:
					unk[0] = 17;
					unk.f_5[0] = 5;
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 19:
					unk[0] = 17;
					unk.f_5[0] = 60;
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			}
			break;
	
		case 6:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 2:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 3:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 13:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_15[0] = 50;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					break;
			
				case 14:
					unk.f_10[0] = 5;
					unk.f_10[1] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 15:
					unk.f_10[0] = 12;
					unk.f_10[1] = 2;
					unk.f_15[0] = 10;
					unk.f_15[1] = 90;
					break;
			
				case 16:
					unk[0] = 25;
					unk.f_5[0] = 30;
					unk.f_10[0] = 3;
					unk.f_15[0] = 100;
					break;
			
				case 17:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 5;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					unk.f_15[3] = 10;
					break;
			
				case 18:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 5;
					unk.f_15[0] = 40;
					unk.f_15[1] = 10;
					unk.f_15[2] = 20;
					unk.f_15[3] = 30;
					break;
			
				case 19:
					unk[0] = 25;
					unk.f_5[0] = 30;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 20:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 5;
					unk.f_15[0] = 40;
					unk.f_15[1] = 10;
					unk.f_15[2] = 40;
					unk.f_15[3] = 10;
					break;
			
				case 21:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 22:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 10;
					unk.f_10[3] = 5;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					unk.f_15[3] = 10;
					break;
			
				case 23:
					unk[0] = 17;
					unk.f_5[0] = 100;
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			}
			break;
	
		case 7:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 2:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 3:
					unk.f_10[0] = 6;
					unk.f_10[1] = 10;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 4:
					unk.f_10[0] = 12;
					unk.f_10[1] = 11;
					unk.f_10[2] = 10;
					unk.f_15[0] = 10;
					unk.f_15[1] = 70;
					unk.f_15[2] = 20;
					break;
			
				case 5:
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 13:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 14:
					unk[0] = 24;
					unk.f_5[0] = 20;
					unk.f_10[0] = 4;
					unk.f_10[1] = 0;
					unk.f_10[2] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 15:
					unk.f_10[0] = 4;
					unk.f_10[1] = 11;
					unk.f_10[2] = 8;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 16:
					unk[0] = 24;
					unk[1] = 16;
					unk.f_5[0] = 50;
					unk.f_5[1] = 10;
					unk.f_10[0] = 4;
					unk.f_10[1] = 11;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 17:
					unk.f_10[0] = 12;
					unk.f_10[1] = 11;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 18:
					unk[0] = 17;
					unk.f_5[0] = 30;
					unk.f_10[0] = 12;
					unk.f_15[0] = 100;
					break;
			}
			break;
	
		case 8:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 2:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_15[0] = 60;
					unk.f_15[1] = 30;
					unk.f_15[2] = 10;
					break;
			
				case 3:
					unk[0] = 16;
					unk.f_5[0] = 20;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 4:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 12;
					unk.f_15[0] = 40;
					unk.f_15[1] = 40;
					unk.f_15[2] = 20;
					break;
			
				case 5:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_10[3] = 3;
					unk.f_15[0] = 50;
					unk.f_15[1] = 30;
					unk.f_15[2] = 10;
					unk.f_15[3] = 10;
					break;
			
				case 13:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_10[3] = 3;
					unk.f_15[0] = 50;
					unk.f_15[1] = 30;
					unk.f_15[2] = 10;
					unk.f_15[3] = 10;
					break;
			
				case 14:
					unk.f_10[0] = 4;
					unk.f_15[0] = 50;
					break;
			
				case 15:
					unk[0] = 16;
					unk[1] = 17;
					unk.f_5[0] = 80;
					unk.f_5[1] = 20;
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			}
			break;
	
		case 9:
			switch (iParam2)
			{
				case 1:
					unk[0] = 16;
					unk.f_5[0] = 100;
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 75;
					unk.f_15[1] = 25;
					unk.f_20 = "mc_set1_int_mc_appears";
					break;
			
				case 2:
					unk[0] = 16;
					unk.f_5[0] = 50;
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 90;
					unk.f_15[1] = 10;
					unk.f_20 = "mc_set1_int_name_applause";
					break;
			
				case 3:
					unk.f_20 = "mc_set1_int_ticket_price_applause";
					break;
			
				case 4:
					unk.f_10[0] = 11;
					unk.f_10[1] = 2;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 5:
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 80;
					unk.f_20 = "mc_bulc_int_act_discovery";
					break;
			
				case 6:
					unk[0] = 24;
					unk.f_5[0] = 75;
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 75;
					unk.f_15[1] = 25;
					break;
			
				case 7:
					unk.f_10[0] = 11;
					unk.f_15[0] = 100;
					unk.f_20 = "mc_bulc_int_name_applause";
					break;
			
				case 8:
					unk[0] = 21;
					unk.f_5[0] = 30;
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 30;
					unk.f_20 = "mc_outro_pos_finishes";
					break;
			
				case 9:
					unk.f_10[0] = 10;
					unk.f_15[0] = 100;
					break;
			
				case 10:
					unk.f_10[0] = 6;
					unk.f_10[1] = 10;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					unk.f_20 = "mc_outro_neg_applause";
					break;
			
				case 11:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					unk.f_20 = "mc_outro_neg_finishes";
					break;
			
				case 12:
					unk.f_10[0] = 10;
					unk.f_15[0] = 100;
					unk.f_20 = "mc_outro_neg_finishes";
					break;
			
				case 13:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 3;
					unk.f_15[0] = 40;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_20 = "bullet_catch_initial_banter";
					break;
			
				case 14:
					unk.f_20 = "bullet_catch_horrible_disease";
					break;
			
				case 15:
					unk[0] = 22;
					unk.f_5[0] = 75;
					unk.f_10[0] = 8;
					unk.f_10[1] = 3;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					unk.f_20 = "bullet_catch_gun_reveal";
					break;
			
				case 16:
					unk[0] = 20;
					unk.f_5[0] = 40;
					unk.f_10[0] = 8;
					unk.f_10[1] = 3;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					unk.f_20 = "bullet_catch_bedding_my_wife";
					break;
			
				case 17:
					unk[0] = 24;
					unk.f_5[0] = 50;
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 8;
					unk.f_15[0] = 50;
					unk.f_15[1] = 10;
					unk.f_15[2] = 40;
					unk.f_20 = "bullet_catch_i_joke";
					break;
			
				case 18:
					unk[0] = 23;
					unk.f_5[0] = 50;
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 75;
					unk.f_15[1] = 25;
					unk.f_20 = "bullet_catch_in_my_teeth";
					break;
			
				case 19:
					break;
			
				case 20:
					unk.f_10[0] = 9;
					unk.f_15[0] = 100;
					break;
			
				case 21:
					unk[0] = 19;
					unk.f_5[0] = 100;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 22:
					unk.f_10[0] = 11;
					unk.f_10[1] = 2;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					unk.f_20 = "bullet_catch_as_if_it_were_nothing";
					break;
			
				case 23:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_15[0] = 75;
					unk.f_15[1] = 25;
					break;
			
				case 24:
					unk.f_10[0] = 0;
					unk.f_15[0] = 100;
					break;
			
				case 25:
					unk[0] = 20;
					unk.f_5[0] = 30;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_lets_do_that_again";
					break;
			
				case 26:
					unk.f_10[0] = 11;
					unk.f_15[0] = 100;
					break;
			
				case 27:
					unk.f_10[0] = 0;
					unk.f_10[1] = 3;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 28:
					unk[0] = 19;
					unk[1] = 24;
					unk.f_5[0] = 60;
					unk.f_5[1] = 40;
					unk.f_10[0] = 6;
					unk.f_10[1] = 3;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 29:
					unk.f_10[0] = 8;
					unk.f_10[1] = 3;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 30:
					unk[0] = 16;
					unk.f_5[0] = 100;
					unk.f_10[0] = 10;
					unk.f_10[1] = 8;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					unk.f_20 = "bullet_catch_player_volunteers";
					break;
			
				case 31:
					unk.f_10[0] = 8;
					unk.f_10[1] = 9;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					unk.f_20 = "bullet_catch_take_aim";
					break;
			
				case 32:
					unk.f_20 = "bullet_catch_waiting_for_shot";
					break;
			
				case 33:
					unk[0] = 21;
					unk.f_5[0] = 100;
					unk.f_10[0] = 13;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_g_alt_player_shot";
					break;
			
				case 34:
					unk[0] = 17;
					unk[1] = 23;
					unk.f_5[0] = 50;
					unk.f_5[1] = 50;
					unk.f_10[0] = 12;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_g_alt_player_shot_reveal";
					break;
			
				case 35:
					unk[0] = 21;
					unk.f_5[0] = 100;
					unk.f_10[0] = 13;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_g_alt_player_shot_stomach";
					break;
			
				case 36:
					unk.f_10[0] = 13;
					unk.f_10[1] = 6;
					unk.f_10[2] = 3;
					unk.f_10[3] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					unk.f_20 = "bullet_catch_supposed_to_shoot_head";
					break;
			
				case 37:
					unk.f_10[0] = 6;
					unk.f_10[1] = 10;
					unk.f_10[2] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					unk.f_20 = "bullet_catch_absolute_pillock";
					break;
			
				case 38:
					unk[0] = 16;
					unk.f_5[0] = 50;
					unk.f_10[0] = 10;
					unk.f_10[1] = 8;
					unk.f_15[0] = 20;
					unk.f_15[1] = 80;
					unk.f_20 = "bullet_catch_npc_volunteers";
					break;
			
				case 39:
					unk.f_10[0] = 8;
					unk.f_10[1] = 9;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					unk.f_20 = "bullet_catch_npc_aims";
					break;
			
				case 40:
					unk[0] = 21;
					unk.f_5[0] = 100;
					unk.f_10[0] = 13;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_npc_shoots";
					break;
			
				case 41:
					unk[0] = 17;
					unk[1] = 23;
					unk.f_5[0] = 50;
					unk.f_5[1] = 50;
					unk.f_10[0] = 12;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_npc_shot_reveal";
					break;
			
				case 42:
					unk[0] = 16;
					unk.f_5[0] = 50;
					unk.f_10[0] = 10;
					unk.f_10[1] = 8;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					unk.f_20 = "bullet_catch_npc_volunteers";
					break;
			
				case 43:
					unk.f_10[0] = 8;
					unk.f_10[1] = 9;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					unk.f_20 = "bullet_catch_npc_aims";
					break;
			
				case 44:
					unk[0] = 21;
					unk.f_5[0] = 100;
					unk.f_10[0] = 13;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_npc_shoots";
					break;
			
				case 45:
					unk[0] = 17;
					unk[1] = 23;
					unk.f_5[0] = 50;
					unk.f_5[1] = 50;
					unk.f_10[0] = 12;
					unk.f_15[0] = 100;
					unk.f_20 = "bullet_catch_npc_shot_reveal";
					break;
			}
			break;
	
		case 10:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 2:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 3:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_15[0] = 10;
					unk.f_15[1] = 70;
					unk.f_15[2] = 20;
					break;
			
				case 4:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 60;
					unk.f_15[1] = 40;
					break;
			
				case 5:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 13:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 0;
					unk.f_10[3] = 3;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 14:
					unk[0] = 23;
					unk.f_5[0] = 15;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 15:
					unk[0] = 23;
					unk.f_5[0] = 15;
					unk.f_10[0] = 11;
					unk.f_10[1] = 3;
					unk.f_15[0] = 60;
					unk.f_15[1] = 40;
					break;
			
				case 16:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 0;
					unk.f_10[3] = 3;
					unk.f_15[0] = 10;
					unk.f_15[1] = 60;
					unk.f_15[2] = 20;
					unk.f_15[3] = 10;
					break;
			
				case 17:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 18:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 19;
					unk.f_5[0] = 15;
					unk.f_5[1] = 15;
					unk.f_5[2] = 15;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 19:
					unk[0] = 26;
					unk.f_5[0] = 100;
					unk.f_10[0] = 12;
					unk.f_10[1] = 11;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 20:
					unk[0] = 17;
					unk.f_5[0] = 30;
					unk.f_10[0] = 11;
					unk.f_15[0] = 100;
					break;
			}
			break;
	
		case 11:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 12;
					unk.f_15[0] = 40;
					unk.f_15[1] = 40;
					unk.f_15[2] = 20;
					break;
			
				case 2:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 25;
					unk.f_15[2] = 25;
					break;
			
				case 3:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 20;
					unk.f_15[2] = 60;
					break;
			
				case 4:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 10;
					unk.f_15[2] = 70;
					break;
			
				case 5:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 50;
					unk.f_15[1] = 25;
					unk.f_15[2] = 25;
					break;
			
				case 6:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_10[2] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 13:
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 14:
					break;
			
				case 15:
					unk[0] = 19;
					unk.f_5[0] = 10;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 16:
					unk[0] = 24;
					unk.f_5[0] = 15;
					unk.f_10[0] = 0;
					unk.f_15[0] = 100;
					break;
			
				case 17:
					unk.f_10[0] = 12;
					unk.f_10[1] = 2;
					unk.f_15[0] = 60;
					unk.f_15[1] = 40;
					break;
			
				case 18:
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 8;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 19:
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 30;
					break;
			
				case 20:
					unk[0] = 20;
					unk.f_5[0] = 20;
					unk.f_10[0] = 0;
					unk.f_15[0] = 100;
					break;
			
				case 21:
					unk.f_10[0] = 0;
					unk.f_10[1] = 8;
					unk.f_10[2] = 9;
					unk.f_10[3] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					unk.f_15[3] = 30;
					break;
			
				case 22:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 19;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_5[2] = 10;
					unk.f_10[0] = 13;
					unk.f_15[0] = 100;
					break;
			
				case 23:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 23;
					unk[3] = 22;
					unk.f_5[0] = 25;
					unk.f_5[1] = 25;
					unk.f_5[2] = 25;
					unk.f_5[3] = 25;
					unk.f_10[0] = 13;
					unk.f_10[1] = 3;
					unk.f_10[2] = 2;
					unk.f_10[3] = 6;
					unk.f_15[0] = 25;
					unk.f_15[1] = 25;
					unk.f_15[2] = 25;
					unk.f_15[3] = 25;
					break;
			
				case 24:
					unk.f_10[0] = 13;
					unk.f_10[1] = 3;
					unk.f_10[2] = 2;
					unk.f_10[3] = 6;
					unk.f_15[0] = 25;
					unk.f_15[1] = 25;
					unk.f_15[2] = 25;
					unk.f_15[3] = 25;
					break;
			}
			break;
	
		case 12:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 1;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 2:
					unk.f_10[0] = 3;
					unk.f_10[1] = 6;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 3:
					unk[0] = 25;
					unk[1] = 24;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 4:
					unk.f_10[0] = 12;
					unk.f_10[1] = 10;
					unk.f_15[0] = 60;
					unk.f_15[1] = 40;
					break;
			
				case 5:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 6:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 6;
					unk.f_15[0] = 50;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					break;
			
				case 13:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 30;
					break;
			
				case 14:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 60;
					break;
			
				case 15:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_10[3] = 4;
					unk.f_15[0] = 10;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					unk.f_15[3] = 40;
					break;
			
				case 16:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 20;
					unk.f_15[2] = 40;
					break;
			
				case 17:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 30;
					break;
			
				case 18:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 19:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_10[3] = 4;
					unk.f_15[0] = 10;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					unk.f_15[3] = 40;
					break;
			
				case 20:
					unk.f_10[0] = 10;
					unk.f_15[0] = 70;
					break;
			
				case 21:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 8;
					unk.f_10[3] = 4;
					unk.f_15[0] = 10;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					unk.f_15[3] = 40;
					break;
			
				case 22:
					unk[0] = 23;
					unk[1] = 20;
					unk[2] = 16;
					unk[3] = 19;
					unk.f_5[0] = 30;
					unk.f_5[1] = 20;
					unk.f_5[2] = 20;
					unk.f_5[3] = 30;
					unk.f_10[0] = 10;
					unk.f_10[1] = 4;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 23:
					unk[0] = 25;
					unk[1] = 23;
					unk[2] = 16;
					unk.f_5[0] = 30;
					unk.f_5[1] = 20;
					unk.f_5[2] = 50;
					unk.f_10[0] = 8;
					unk.f_10[1] = 11;
					unk.f_10[2] = 10;
					unk.f_15[0] = 40;
					unk.f_15[1] = 20;
					unk.f_15[2] = 40;
					break;
			
				case 24:
					unk[0] = 23;
					unk[1] = 22;
					unk[2] = 16;
					unk[3] = 25;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_5[1] = 10;
					unk.f_5[1] = 30;
					unk.f_10[0] = 12;
					unk.f_15[0] = 100;
					break;
			
				case 25:
					unk[0] = 17;
					unk.f_5[0] = 10;
					unk.f_10[0] = 12;
					unk.f_15[0] = 100;
					break;
			
				case 26:
					unk[0] = 31;
					unk.f_5[0] = 100;
					unk.f_10[0] = 13;
					unk.f_15[0] = 100;
					break;
			}
			break;
	
		case 13:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 70;
					unk.f_15[1] = 30;
					break;
			
				case 2:
					unk.f_10[0] = 1;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 20;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 3:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 4:
					unk.f_10[0] = 1;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 20;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 5:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 6:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 80;
					unk.f_15[1] = 10;
					unk.f_15[2] = 10;
					break;
			
				case 13:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 20;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 14:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					break;
			
				case 15:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 20;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 16:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 17:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 20;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 18:
					unk[0] = 16;
					unk.f_5[0] = 30;
					unk.f_10[0] = 11;
					unk.f_15[0] = 100;
					break;
			
				case 19:
					unk[0] = 23;
					unk[1] = 22;
					unk.f_5[0] = 20;
					unk.f_5[1] = 20;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 20:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 80;
					break;
			
				case 21:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_10[3] = 0;
					unk.f_15[0] = 20;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 22:
					unk[0] = 23;
					unk[1] = 22;
					unk[2] = 19;
					unk.f_5[0] = 20;
					unk.f_5[1] = 20;
					unk.f_5[2] = 20;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 23:
					unk.f_10[0] = 12;
					unk.f_10[1] = 11;
					unk.f_10[2] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					break;
			}
			break;
	
		case 14:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 2:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_15[0] = 10;
					unk.f_15[1] = 70;
					unk.f_15[2] = 20;
					break;
			
				case 3:
					unk[0] = 24;
					unk.f_5[0] = 30;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 13:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 14:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_15[0] = 70;
					unk.f_15[1] = 30;
					break;
			
				case 15:
					unk.f_10[0] = 12;
					unk.f_10[1] = 2;
					unk.f_15[0] = 70;
					unk.f_15[1] = 30;
					break;
			
				case 16:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_10[3] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 17:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 18:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 19:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_10[3] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 20:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 21:
					unk.f_10[0] = 11;
					unk.f_10[1] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 60;
					break;
			
				case 22:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 4;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 23:
					unk.f_10[0] = 11;
					unk.f_15[0] = 30;
					break;
			
				case 24:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			}
			break;
	
		case 15:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 2:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 20;
					unk.f_15[1] = 80;
					break;
			
				case 3:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 70;
					unk.f_15[1] = 30;
					break;
			
				case 4:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 4;
					unk.f_15[0] = 50;
					unk.f_15[1] = 10;
					unk.f_15[2] = 40;
					break;
			
				case 5:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 70;
					unk.f_15[1] = 30;
					break;
			
				case 13:
					unk.f_10[0] = 12;
					unk.f_10[1] = 5;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 10;
					unk.f_15[2] = 60;
					break;
			
				case 14:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 5;
					unk.f_15[0] = 30;
					unk.f_15[1] = 60;
					unk.f_15[2] = 10;
					break;
			
				case 15:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 16:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 5;
					unk.f_10[3] = 0;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 17:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_10[2] = 5;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 18:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 5;
					unk.f_10[3] = 0;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 10;
					unk.f_15[3] = 20;
					break;
			
				case 19:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 80;
					break;
			
				case 20:
					unk[0] = 25;
					unk[1] = 24;
					unk.f_5[0] = 20;
					unk.f_5[1] = 20;
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 21:
					unk[0] = 24;
					unk[1] = 25;
					unk.f_5[0] = 40;
					unk.f_5[1] = 10;
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 22:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 60;
					unk.f_15[1] = 40;
					break;
			
				case 23:
					unk[0] = 23;
					unk.f_5[0] = 40;
					unk.f_10[0] = 6;
					unk.f_15[0] = 100;
					break;
			
				case 24:
					unk[0] = 24;
					unk[1] = 25;
					unk.f_5[0] = 30;
					unk.f_5[1] = 10;
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 25:
					unk[0] = 23;
					unk[1] = 24;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_10[0] = 6;
					unk.f_15[0] = 100;
					break;
			
				case 26:
					unk[0] = 23;
					unk.f_5[0] = 20;
					unk.f_10[0] = 6;
					unk.f_15[0] = 100;
					break;
			
				case 27:
					unk.f_10[0] = 12;
					unk.f_10[1] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 80;
					break;
			
				case 28:
					unk[0] = 17;
					unk.f_5[0] = 30;
					unk.f_10[0] = 12;
					unk.f_10[1] = 11;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 29:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 5;
					unk.f_10[3] = 0;
					unk.f_15[0] = 50;
					unk.f_15[1] = 15;
					unk.f_15[2] = 15;
					unk.f_15[3] = 20;
					break;
			}
			break;
	
		case 16:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 2;
					unk.f_10[1] = 11;
					unk.f_10[2] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 2:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 3:
					unk[0] = 24;
					unk.f_5[0] = 30;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 4:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 13:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 14:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 20;
					unk.f_15[2] = 50;
					break;
			
				case 15:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 16:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 20;
					unk.f_15[2] = 50;
					break;
			
				case 17:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 18:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 12;
					unk.f_10[3] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					unk.f_15[3] = 40;
					break;
			
				case 19:
					unk.f_10[0] = 4;
					unk.f_10[1] = 3;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 20:
					unk.f_10[0] = 9;
					unk.f_10[1] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 21:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 12;
					unk.f_10[3] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					unk.f_15[3] = 40;
					break;
			
				case 22:
					unk.f_10[0] = 12;
					unk.f_15[0] = 60;
					break;
			
				case 23:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 19;
					unk.f_5[0] = 25;
					unk.f_5[1] = 25;
					unk.f_5[2] = 25;
					unk.f_10[0] = 3;
					unk.f_15[0] = 100;
					break;
			}
			break;
	
		case 17:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 2:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 3:
					unk[0] = 24;
					unk.f_5[0] = 30;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 4:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 40;
					unk.f_15[2] = 20;
					break;
			
				case 5:
					break;
			
				case 6:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 7:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_15[0] = 20;
					unk.f_15[1] = 70;
					unk.f_15[2] = 10;
					break;
			
				case 13:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 14:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 15:
					unk.f_10[0] = 3;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 10;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					unk.f_15[3] = 20;
					break;
			
				case 16:
					unk.f_10[0] = 10;
					unk.f_15[0] = 80;
					break;
			
				case 17:
					unk.f_10[0] = 2;
					unk.f_10[1] = 8;
					unk.f_10[2] = 0;
					unk.f_15[0] = 80;
					unk.f_15[1] = 10;
					unk.f_15[2] = 10;
					break;
			
				case 18:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 12;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 19:
					unk.f_10[0] = 4;
					unk.f_10[1] = 2;
					unk.f_10[2] = 8;
					unk.f_10[3] = 0;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 10;
					unk.f_15[3] = 10;
					break;
			
				case 20:
					unk.f_10[0] = 8;
					unk.f_10[1] = 9;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 21:
					unk.f_10[0] = 10;
					unk.f_10[1] = 2;
					unk.f_15[0] = 15;
					unk.f_15[1] = 85;
					break;
			
				case 22:
					unk[0] = 23;
					unk[1] = 22;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_10[0] = 12;
					unk.f_10[1] = 11;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 23:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 19;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_5[2] = 40;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			}
			break;
	
		case 18:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 2:
					unk.f_10[0] = 6;
					unk.f_10[1] = 3;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 3:
					unk.f_10[0] = 4;
					unk.f_10[1] = 0;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 4:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 5:
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 6:
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_10[2] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 13:
					unk.f_10[0] = 8;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 14:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 15:
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 16:
					unk[0] = 16;
					unk.f_5[0] = 30;
					unk.f_10[0] = 2;
					unk.f_15[0] = 100;
					break;
			
				case 17:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 12;
					unk.f_15[0] = 50;
					unk.f_15[1] = 40;
					unk.f_15[2] = 10;
					break;
			
				case 18:
					unk.f_10[0] = 0;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_15[0] = 30;
					unk.f_15[1] = 50;
					unk.f_15[2] = 20;
					break;
			
				case 19:
					unk[0] = 16;
					unk.f_5[0] = 30;
					unk.f_10[0] = 3;
					unk.f_15[0] = 100;
					break;
			
				case 20:
					unk.f_10[0] = 6;
					unk.f_10[1] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 21:
					unk.f_10[0] = 9;
					unk.f_10[1] = 8;
					unk.f_10[2] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					break;
			
				case 22:
					unk.f_10[0] = 9;
					unk.f_10[1] = 8;
					unk.f_10[2] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 30;
					unk.f_15[2] = 20;
					break;
			
				case 23:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 2;
					unk.f_15[0] = 40;
					unk.f_15[1] = 30;
					unk.f_15[2] = 30;
					break;
			
				case 24:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 40;
					unk.f_15[1] = 60;
					break;
			
				case 25:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 19;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_5[2] = 40;
					unk.f_10[0] = 3;
					unk.f_15[0] = 100;
					break;
			}
			break;
	
		case 19:
			switch (iParam2)
			{
				case 1:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 70;
					unk.f_15[1] = 20;
					unk.f_15[2] = 10;
					break;
			
				case 2:
					unk.f_10[0] = 1;
					unk.f_10[1] = 3;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			
				case 13:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 4;
					unk.f_15[0] = 50;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					break;
			
				case 14:
					unk[0] = 16;
					unk[1] = 25;
					unk.f_5[0] = 30;
					unk.f_5[1] = 10;
					unk.f_10[0] = 4;
					unk.f_15[0] = 100;
					break;
			
				case 15:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 4;
					unk.f_15[0] = 50;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					break;
			
				case 16:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 50;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					break;
			
				case 17:
					unk.f_10[0] = 11;
					unk.f_10[1] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 18:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_10[2] = 4;
					unk.f_15[0] = 50;
					unk.f_15[1] = 20;
					unk.f_15[2] = 30;
					break;
			
				case 19:
					unk[0] = 25;
					unk.f_5[0] = 20;
					unk.f_10[0] = 3;
					unk.f_15[0] = 100;
					break;
			
				case 20:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_10[2] = 2;
					unk.f_15[0] = 30;
					unk.f_15[1] = 20;
					unk.f_15[2] = 50;
					break;
			
				case 21:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 50;
					unk.f_15[1] = 50;
					break;
			}
			break;
	
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 5:
							unk.f_10[0] = 11;
							unk.f_10[1] = 10;
							unk.f_15[0] = 50;
							unk.f_15[1] = 50;
							break;
					
						case 8:
							unk.f_10[0] = 11;
							unk.f_10[1] = 10;
							unk.f_15[0] = 50;
							unk.f_15[1] = 50;
							break;
					
						case 9:
							unk[0] = 16;
							unk.f_5[0] = 100;
							unk.f_10[0] = 2;
							unk.f_10[1] = 3;
							unk.f_15[0] = 75;
							unk.f_15[1] = 25;
							unk.f_20 = "mc_set1_int_mc_appears";
							break;
					
						case 13:
							unk.f_10[0] = 10;
							unk.f_10[1] = 11;
							unk.f_15[0] = 80;
							unk.f_15[1] = 20;
							break;
					
						case 17:
							unk.f_10[0] = 11;
							unk.f_10[1] = 10;
							unk.f_15[0] = 50;
							unk.f_15[1] = 50;
							break;
					}
					break;
			
				case 2:
					switch (iParam1)
					{
						case 5:
							unk.f_10[0] = 1;
							unk.f_10[1] = 2;
							unk.f_10[2] = 3;
							unk.f_10[3] = 0;
							unk.f_15[0] = 10;
							unk.f_15[1] = 50;
							unk.f_15[2] = 20;
							unk.f_15[3] = 20;
							break;
					
						case 8:
							unk.f_10[0] = 2;
							unk.f_10[1] = 0;
							unk.f_10[2] = 8;
							unk.f_15[0] = 60;
							unk.f_15[1] = 30;
							unk.f_15[2] = 10;
							break;
					
						case 9:
							unk[0] = 16;
							unk.f_5[0] = 50;
							unk.f_10[0] = 2;
							unk.f_10[1] = 3;
							unk.f_15[0] = 90;
							unk.f_15[1] = 10;
							unk.f_20 = "mc_set1_int_name_applause";
							break;
					
						case 13:
							unk.f_10[0] = 1;
							unk.f_10[1] = 2;
							unk.f_10[2] = 3;
							unk.f_10[3] = 0;
							unk.f_15[0] = 20;
							unk.f_15[1] = 50;
							unk.f_15[2] = 10;
							unk.f_15[3] = 20;
							break;
					
						case 17:
							unk.f_10[0] = 4;
							unk.f_10[1] = 2;
							unk.f_10[2] = 8;
							unk.f_10[3] = 0;
							unk.f_15[0] = 10;
							unk.f_15[1] = 50;
							unk.f_15[2] = 20;
							unk.f_15[3] = 20;
							break;
					}
					break;
			
				case 3:
					switch (iParam1)
					{
						case 5:
							unk[0] = 24;
							unk.f_5[0] = 40;
							unk.f_10[0] = 2;
							unk.f_15[0] = 100;
							break;
					
						case 8:
							unk[0] = 16;
							unk.f_5[0] = 20;
							unk.f_10[0] = 2;
							unk.f_15[0] = 100;
							break;
					
						case 9:
							unk.f_20 = "mc_set1_int_ticket_price_applause";
							break;
					
						case 13:
							unk.f_10[0] = 10;
							unk.f_10[1] = 11;
							unk.f_15[0] = 80;
							unk.f_15[1] = 20;
							break;
					
						case 17:
							unk[0] = 24;
							unk.f_5[0] = 30;
							unk.f_10[0] = 2;
							unk.f_15[0] = 100;
							break;
					}
					break;
			
				case 4:
					switch (iParam1)
					{
						case 5:
							unk.f_10[0] = 11;
							unk.f_10[1] = 10;
							unk.f_10[2] = 3;
							unk.f_15[0] = 40;
							unk.f_15[1] = 40;
							unk.f_15[2] = 20;
							break;
					
						case 8:
							break;
					
						case 9:
							unk.f_10[0] = 11;
							unk.f_10[1] = 2;
							unk.f_15[0] = 80;
							unk.f_15[1] = 20;
							break;
					
						case 13:
							break;
					
						case 17:
							unk.f_10[0] = 11;
							unk.f_10[1] = 10;
							unk.f_15[0] = 40;
							unk.f_15[1] = 60;
							break;
					}
					break;
			
				case 5:
					unk.f_10[0] = 2;
					unk.f_10[1] = 0;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 6:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 70;
					unk.f_15[1] = 30;
					break;
			
				case 7:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 4;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 8:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 13:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_10[2] = 6;
					unk.f_10[3] = 3;
					unk.f_15[0] = 40;
					unk.f_15[1] = 20;
					unk.f_15[2] = 10;
					unk.f_15[3] = 30;
					break;
			
				case 14:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 15:
					unk.f_10[0] = 10;
					unk.f_10[1] = 11;
					unk.f_15[0] = 60;
					unk.f_15[1] = 40;
					break;
			
				case 16:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 17:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 80;
					unk.f_15[1] = 20;
					break;
			
				case 18:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_10[3] = 8;
					unk.f_15[0] = 50;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					unk.f_15[3] = 10;
					break;
			
				case 19:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 24;
					unk.f_5[0] = 20;
					unk.f_5[1] = 20;
					unk.f_5[2] = 20;
					unk.f_10[0] = 13;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 20:
					unk[0] = 21;
					unk[1] = 20;
					unk[2] = 24;
					unk.f_5[0] = 20;
					unk.f_5[1] = 20;
					unk.f_5[2] = 20;
					unk.f_10[0] = 13;
					unk.f_10[1] = 2;
					unk.f_10[2] = 3;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 21:
					unk[0] = 20;
					unk[1] = 19;
					unk[2] = 23;
					unk[3] = 22;
					unk.f_5[0] = 20;
					unk.f_5[1] = 20;
					unk.f_5[2] = 20;
					unk.f_5[3] = 20;
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 30;
					unk.f_15[1] = 40;
					unk.f_15[2] = 30;
					break;
			
				case 22:
					unk.f_10[0] = 12;
					unk.f_10[1] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 80;
					break;
			
				case 23:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 24:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_15[0] = 30;
					unk.f_15[1] = 70;
					break;
			
				case 25:
					unk.f_10[0] = 11;
					unk.f_10[1] = 12;
					unk.f_15[0] = 70;
					unk.f_15[1] = 30;
					break;
			
				case 26:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 0;
					unk.f_15[0] = 60;
					unk.f_15[1] = 20;
					unk.f_15[2] = 20;
					break;
			
				case 27:
					unk[0] = 24;
					unk[1] = 23;
					unk[2] = 22;
					unk.f_5[0] = 30;
					unk.f_5[1] = 30;
					unk.f_5[2] = 40;
					unk.f_10[0] = 6;
					unk.f_10[1] = 3;
					unk.f_10[2] = 2;
					unk.f_15[0] = 20;
					unk.f_15[1] = 40;
					unk.f_15[2] = 40;
					break;
			
				case 28:
					unk.f_10[0] = 2;
					unk.f_10[1] = 3;
					unk.f_10[2] = 4;
					unk.f_15[0] = 30;
					unk.f_15[1] = 30;
					unk.f_15[2] = 40;
					break;
			
				case 29:
					unk.f_10[0] = 11;
					unk.f_10[1] = 10;
					unk.f_10[2] = 12;
					unk.f_15[0] = 30;
					unk.f_15[1] = 60;
					unk.f_15[2] = 10;
					break;
			}
			break;
	}

	return unk;
}

void func_199(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23) // Position - 0xDF57 Hash - 0x7214C603 ^0x36D9EF04
{
	int num;
	int i;
	int j;
	int randomIntInRange;
	int endRange;
	int num2;
	int num3;
	int num4;

	num = func_183(iParam2);
	randomIntInRange = 0;
	endRange = 0;
	num2 = 0;
	num3 = iParam3.f_10;
	num4 = iParam3;

	for (j = 0; j <= num3 - 1; j = j + 1)
	{
		endRange = endRange + iParam3.f_15[j];
	}

	func_21(&(uParam0->f_2));
	func_21(&(uParam0->f_5));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3.f_20))
		AUDIO::TRIGGER_MUSIC_EVENT(iParam3.f_20);

	if (iParam3[0] == -1 && iParam3.f_10[0] == -1)
		return;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (uParam1->[i /*10*/].f_1 == 6)
		{
		}
		else if (iParam3.f_10[0] == 35)
		{
			uParam1->[i /*10*/].f_1 = 13;
		}
		else
		{
			if (iParam3[0] != -1)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				num2 = 0;
			
				for (j = 0; j <= num4 - 1; j = j + 1)
				{
					num2 = num2 + iParam3.f_5[j];
				
					if (randomIntInRange <= num2)
					{
						uParam1->[i /*10*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(100, 700);
						uParam1->[i /*10*/].f_6 = iParam3[j];
						break;
					}
				
					uParam1->[i /*10*/].f_6 = -1;
				}
			}
			else
			{
				uParam1->[i /*10*/].f_6 = -1;
			}
		
			if (iParam3.f_10[0] != -1)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
				num2 = 0;
			
				for (j = 0; j <= num3 - 1; j = j + 1)
				{
					num2 = num2 + iParam3.f_15[j];
				
					if (randomIntInRange <= num2)
					{
						uParam1->[i /*10*/].f_5 = iParam3.f_10[j];
						break;
					}
				
					uParam1->[i /*10*/].f_5 = -1;
				}
			}
			else
			{
				uParam1->[i /*10*/].f_5 = -1;
			}
		
			uParam1->[i /*10*/].f_1 = 3;
		}
	}

	return;
}

void func_200(var uParam0, int iParam1) // Position - 0xE105 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

Vector3 func_201(int iParam0) // Position - 0xE112 Hash - 0x890F3181 ^0x890F3181
{
	switch (iParam0)
	{
		case 0:
			return 2546.2783f, -1301.3872f, 49.2503f;
	
		case 1:
			return 2546.242f, -1298.3365f, 51.3709f;
	
		case 2:
			return 2546.77f, -1304.3373f, 48.7382f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_202(int iParam0) // Position - 0xE16D Hash - 0x8F64C7C3 ^0x8F64C7C3
{
	switch (iParam0)
	{
		case 0:
			return 1.2492f, 0f, -179.3095f;
	
		case 1:
			return -7.8585f, 0f, -179.3892f;
	
		case 2:
			return 9.5547f, 0f, 178.3628f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_203(var uParam0) // Position - 0xE1BC Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_20(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_104(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_275() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_204(int iParam0) // Position - 0xE20F Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_205(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE24E Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_204(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_276(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_277(num);
	*uParam0 = 0;
	return;
}

int func_206(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0xE2A2 Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_278(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_279(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

BOOL func_207(int iParam0, BOOL bParam1) // Position - 0xE328 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_204(iParam0))
		return false;

	num = func_276(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_208(var uParam0) // Position - 0xE380 Hash - 0xF4941D47 ^0x28BCF19
{
	Entity outEntity;
	Entity entity;
	BOOL flag;
	var unk;
	var unk4;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
		return;

	if (!func_5(uParam0->f_13, 262144) && func_280(uParam0))
	{
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDRIDGE_T_ABINGTON"));
		func_4(&(uParam0->f_13), 262144);
	}

	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_126, 0, 1);

	if (func_5(Global_1394141.f_1326, 512))
	{
		if (func_5(uParam0->f_13, 64))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, true);
			func_2(&(uParam0->f_13), 64);
		}
	}
	else if (!func_5(uParam0->f_13, 64))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, false);
		func_4(&(uParam0->f_13), 64);
	}

	if (Global_1394141.f_1322 || func_5(uParam0->f_13, 33554432))
		if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_126, 301, true))
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, true);
	else if (PED::GET_PED_CONFIG_FLAG(uParam0->f_126, 301, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, false);

	switch (uParam0->f_2)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
				return;
		
			MISC::REGISTER_INTERACTION_LOCKON_PROMPT(uParam0->f_126, "", 20f, 0, 4, 0, 0, 0, false, -1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 130, true);
			PLAYER::_0x3A8611BD7BDE84F7(PLAYER::GET_PLAYER_INDEX(), 17f);
			Global_1394141.f_1334 = 0;
			func_281();
		
			if (func_5(uParam0->f_13, 64))
				func_282(&(uParam0->f_2), 1);
			else
				func_282(&(uParam0->f_2), 2);
			break;
	
		case 1:
			func_283(&(uParam0->f_9), 5f, false);
			func_282(&(uParam0->f_2), 3);
			break;
	
		case 2:
			if (func_204(uParam0->f_1031[0]))
				func_205(&uParam0->f_1031[0], true, true);
		
			if (func_204(uParam0->f_1031[1]))
				func_205(&uParam0->f_1031[1], true, true);
		
			if (func_5(uParam0->f_13, 64) && !func_5(Global_1394141.f_1326, 16384))
				func_282(&(uParam0->f_2), 1);
			break;
	
		case 3:
			if (!func_5(uParam0->f_13, 64) || func_5(Global_1394141.f_1326, 16384))
			{
				func_282(&(uParam0->f_2), 2);
				return;
			}
		
			entity = func_284(uParam0->f_126);
		
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, false, false) && outEntity == entity)
			{
				if (Global_36.f_2 > 51f)
					ENTITY::_0xAF7F3099B9FEB535(entity, 0f, 0f, -2f);
				else
					ENTITY::_0xAF7F3099B9FEB535(entity, 0f, 0f, 0f);
			
				if (!func_20(&(uParam0->f_9)))
				{
					func_21(&(uParam0->f_9));
				}
				else if (!func_204(uParam0->f_1031[0]) || !func_204(uParam0->f_1031[1]))
				{
					uParam0->f_1031[0] = func_285("SHOW_POS_RESPONSE", joaat("INPUT_INTERACT_LOCKON_POS"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					HUD::_UI_PROMPT_SET_GROUP(Global_1945188[func_276(uParam0->f_1031[0]) /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_126), 0);
					uParam0->f_1031[1] = func_285("SHOW_NEG_RESPONSE", joaat("INPUT_INTERACT_LOCKON_NEG"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					HUD::_UI_PROMPT_SET_GROUP(Global_1945188[func_276(uParam0->f_1031[1]) /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_126), 0);
				}
				else if (func_203(&(uParam0->f_9)) > 8500)
				{
					flag = false;
				
					if (!func_286(uParam0->f_1031[0], false))
						func_287(uParam0->f_1031[0], true, true);
				
					if (!func_286(uParam0->f_1031[1], false))
						func_287(uParam0->f_1031[1], true, true);
				
					if (func_288(uParam0->f_1031[0], true))
					{
						flag = true;
						func_282(&(uParam0->f_2), 4);
					}
				
					if (func_288(uParam0->f_1031[1], true))
					{
						flag = true;
						func_282(&(uParam0->f_2), 5);
					}
				
					if (flag)
					{
						func_287(uParam0->f_1031[0], false, true);
						func_287(uParam0->f_1031[1], false, true);
						func_21(&(uParam0->f_9));
					}
				}
				else
				{
					if (func_286(uParam0->f_1031[0], false))
						func_287(uParam0->f_1031[0], false, true);
				
					if (func_286(uParam0->f_1031[1], false))
						func_287(uParam0->f_1031[1], false, true);
				}
			}
			else
			{
				if (func_204(uParam0->f_1031[0]))
					func_205(&uParam0->f_1031[0], true, true);
			
				if (func_204(uParam0->f_1031[1]))
					func_205(&uParam0->f_1031[1], true, true);
			}
			break;
	
		case 4:
			unk = { func_290(func_289()) };
		
			if (func_291(&(uParam0->f_14), unk, true, -1, false, false))
				func_282(&(uParam0->f_2), 1);
			break;
	
		case 5:
			unk4 = { func_290(func_292()) };
		
			if (func_291(&(uParam0->f_14), unk4, true, -1, false, false))
				func_282(&(uParam0->f_2), 1);
			break;
	
		case 6:
			break;
	}

	return;
}

void func_209(var uParam0) // Position - 0xE8AD Hash - 0xBEE3E7B4 ^0x54E91684
{
	BOOL flag;

	flag = false;

	if (uParam0->f_4 >= 2 && uParam0->f_4 <= 4)
		flag = true;

	if (uParam0->f_4 >= 8 && uParam0->f_4 <= 11)
		flag = true;

	if (flag)
	{
		switch (uParam0->f_984)
		{
			case 5:
				func_294(uParam0);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1050877829))
					Global_1394141.f_1332 = 5;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -671085119))
					Global_1394141.f_1332 = 6;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1203214149))
					Global_1394141.f_1332 = 7;
				break;
		
			case 6:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2033997287))
					Global_1394141.f_1332 = 1;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -190474029))
					Global_1394141.f_1332 = 2;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1389314580))
					Global_1394141.f_1332 = 3;
				break;
		
			case 7:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -354261736))
					Global_1394141.f_1332 = 1;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1610789398))
					Global_1394141.f_1332 = 2;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1371346315))
					Global_1394141.f_1332 = 3;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1511914274))
					Global_1394141.f_1332 = 4;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -328228921))
					Global_1394141.f_1332 = 5;
				break;
		
			case 8:
				func_295(uParam0);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 339574134))
					Global_1394141.f_1332 = 4;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2002413044))
					Global_1394141.f_1332 = 5;
				break;
		
			case 9:
				func_293(uParam0);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1965240012))
					Global_1394141.f_1332 = 5;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 914796948))
					Global_1394141.f_1332 = 6;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2016029647))
					Global_1394141.f_1332 = 7;
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_118))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 9812678))
							Global_1394141.f_1332 = 10;
					
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1441097060))
							Global_1394141.f_1332 = 11;
					
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 102680024))
							Global_1394141.f_1332 = 12;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 9812678))
							Global_1394141.f_1332 = 8;
					
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1441097060))
							Global_1394141.f_1332 = 9;
					}
				}
				break;
		
			case 10:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1680071222))
					Global_1394141.f_1332 = 1;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1915680332))
					Global_1394141.f_1332 = 2;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2140695879))
					Global_1394141.f_1332 = 3;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1916949147))
					Global_1394141.f_1332 = 4;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1825287773))
					Global_1394141.f_1332 = 5;
				break;
		
			case 11:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1017851950))
					Global_1394141.f_1332 = 1;
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_118))
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_NEG"))
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1005071104))
							Global_1394141.f_1332 = 3;
					else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_POS"))
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1005071104))
							Global_1394141.f_1332 = 2;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1554422650))
					Global_1394141.f_1332 = 4;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1867956442))
					Global_1394141.f_1332 = 5;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1580882497))
					Global_1394141.f_1332 = 6;
				break;
		
			case 12:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1898689755))
					Global_1394141.f_1332 = 1;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 607876597))
					Global_1394141.f_1332 = 2;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -243756944))
					Global_1394141.f_1332 = 3;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 45626095))
					Global_1394141.f_1332 = 4;
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_118))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 256044616))
							Global_1394141.f_1332 = 5;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (!func_5(uParam0->f_13, 16777216))
						{
							Global_1394141.f_1332 = 6;
							func_4(&(uParam0->f_13), 16777216);
						}
					}
				}
				break;
		
			case 13:
				func_297(uParam0);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, joaat("crowd_firedancer2_01")))
					Global_1394141.f_1332 = 4;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, joaat("crowd_firedancer2_02")))
					Global_1394141.f_1332 = 5;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1663249175))
					Global_1394141.f_1332 = 6;
				break;
		
			case 14:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2039367936))
					Global_1394141.f_1332 = 1;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 659966729))
					Global_1394141.f_1332 = 2;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 511687004))
					Global_1394141.f_1332 = 3;
				break;
		
			case 15:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 258163243))
					Global_1394141.f_1332 = 1;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1433430811))
					Global_1394141.f_1332 = 2;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 701100200))
					Global_1394141.f_1332 = 3;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -73657267))
					Global_1394141.f_1332 = 4;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2140267017))
					Global_1394141.f_1332 = 5;
				break;
		
			case 16:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -701171441))
					Global_1394141.f_1332 = 1;
			
				if (!Global_1394141.f_1324)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1696950789))
						Global_1394141.f_1332 = 2;
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2061800835))
						Global_1394141.f_1332 = 3;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1696950789))
				{
					Global_1394141.f_1332 = 4;
				}
				break;
		
			case 17:
				func_296(uParam0);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1314916643))
					Global_1394141.f_1332 = 5;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1679176847))
					Global_1394141.f_1332 = 6;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 222841341))
					Global_1394141.f_1332 = 7;
				break;
		
			case 18:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 399563686))
					Global_1394141.f_1332 = 1;
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_118))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1289759123))
							Global_1394141.f_1332 = 2;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118) < 0.5f)
						{
							if (!func_5(uParam0->f_13, 16777216))
							{
								Global_1394141.f_1332 = 6;
								func_4(&(uParam0->f_13), 16777216);
							}
						}
					}
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1347013244))
					Global_1394141.f_1332 = 3;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1116417791))
					Global_1394141.f_1332 = 4;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1283474165))
					Global_1394141.f_1332 = 5;
				break;
		
			case 19:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 275246134))
					Global_1394141.f_1332 = 1;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -254082133))
					Global_1394141.f_1332 = 2;
				break;
		
			case 20:
				switch (uParam0->f_1018.f_1[1])
				{
					case 5:
						func_294(uParam0);
						break;
				
					case 8:
						func_295(uParam0);
						break;
				
					case 9:
						func_293(uParam0);
						break;
				
					case 14:
						func_297(uParam0);
						break;
				
					case 17:
						func_296(uParam0);
						break;
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1753281299))
					Global_1394141.f_1332 = 5;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 261848356))
					Global_1394141.f_1332 = 6;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1954518104))
					Global_1394141.f_1332 = 7;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 817083916))
					Global_1394141.f_1332 = 8;
				break;
		}
	}

	return;
}

void func_210(var uParam0, int iParam1) // Position - 0xF150 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_211(AnimScene ansParam0, Entity eParam1, Entity eParam2) // Position - 0xF15D Hash - 0x35E99255 ^0x6785EBF1
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, func_214(), eParam1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, func_220(), eParam2, 0);
	ANIMSCENE::START_ANIM_SCENE(ansParam0);
	return;
}

void func_212(var uParam0) // Position - 0xF185 Hash - 0x96216186 ^0x93AF06B2
{
	var entityForwardVector;
	var unk3;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
		return;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	unk3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) - Global_36 };
	unk3 = { func_298(unk3) };
	num = func_299(unk3, entityForwardVector);

	if (num >= 0.2f)
		func_300(uParam0);

	return;
}

int func_213(int iParam0) // Position - 0xF1F1 Hash - 0x55D33E40 ^0x9643CD13
{
	Interior interiorAtCoords;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_232(iParam0)))
	{
		interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
	
		if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
		{
			if (INTERIOR::IS_INTERIOR_READY(interiorAtCoords))
			{
				if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(interiorAtCoords, func_232(iParam0)))
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, func_232(iParam0), 0);
			
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}

	return 0;
}

char* func_214() // Position - 0xF259 Hash - 0x306ACA3A ^0xFE855AAF
{
	return "MC";
}

void func_215(var uParam0, int iParam1) // Position - 0xF265 Hash - 0xEDC3BD2D ^0x5E416A90
{
	func_4(&(uParam0->f_13), iParam1);
	return;
}

BOOL func_216(var uParam0) // Position - 0xF277 Hash - 0xED2D44B3 ^0x2FAABB24
{
	char* scriptName;
	struct<10> args;

	if (uParam0->f_1029 != 0)
		if (SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1018.f_6[uParam0->f_1029 - 1], false))
			return false;

	scriptName = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(uParam0->f_1018.f_1[uParam0->f_1029]);
	SCRIPTS::REQUEST_SCRIPT(scriptName);

	if (!SCRIPTS::HAS_SCRIPT_LOADED(scriptName))
		return false;

	args.f_1 = uParam0->f_1018.f_1[uParam0->f_1029];
	args = 1;
	uParam0->f_1018.f_6[uParam0->f_1029] = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(scriptName, &args, 10, 2051);
	return true;
}

BOOL func_217(var uParam0) // Position - 0xF2FD Hash - 0xA8CA4F20 ^0x202967E4
{
	BOOL flag;

	flag = func_5(Global_1394141.f_1326, 2048);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_128))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_128, func_171(2)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_128) > 0.413f)
		{
			if (!flag)
				func_4(&(Global_1394141.f_1326), 2048);
		
			return true;
		}
	
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_128, func_171(0)))
		{
			if (!flag)
				func_4(&(Global_1394141.f_1326), 2048);
		
			return true;
		}
	}

	if (flag)
		func_2(&(Global_1394141.f_1326), 2048);

	return false;
}

int func_218() // Position - 0xF397 Hash - 0xCF5B226F ^0x6A7CF41F
{
	if (!func_161(&iLocal_22.f_113[1], &(iLocal_22.f_13), func_174(iLocal_22.f_12, 1), func_302(iLocal_22.f_12), true))
		return 0;

	return 1;
}

void func_219(var uParam0, int iParam1) // Position - 0xF3C9 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

char* func_220() // Position - 0xF3D6 Hash - 0xABE2DB24 ^0xABE2DB24
{
	return "CURTAIN";
}

void func_221(AnimScene ansParam0, char* sParam1, char* sParam2) // Position - 0xF3E1 Hash - 0xD500305B ^0x58F85F30
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
		return;

	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansParam0, sParam1, true);
	return;
}

void func_222(AnimScene ansParam0, char* sParam1, char* sParam2) // Position - 0xF3FF Hash - 0xC0246FAB ^0x902BB279
{
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansParam0, sParam1))
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(ansParam0, sParam1);

	return;
}

void func_223(var uParam0, int iParam1) // Position - 0xF41B Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

char* func_224(int iParam0) // Position - 0xF428 Hash - 0x958AD60F ^0x4216153A
{
	switch (iParam0)
	{
		case 0:
			return "EASTER_EGG_LEADUP_MUSIC";
	
		case 1:
			return "EASTER_EGG_TADA_MUSIC";
	
		default:
		
	}

	return "EASTER_EGG_LEADUP_MUSIC";
}

char* func_225() // Position - 0xF456 Hash - 0x306ACA3A ^0xF8BFE777
{
	return "3235391231_intro";
}

Vector3 func_226(int iParam0) // Position - 0xF462 Hash - 0x546253F4 ^0x546253F4
{
	switch (iParam0)
	{
		case 0:
			return 2546.551f, -1310.4215f, 51.21665f;
	
		case 1:
			return 2546.551f, -1310.4215f, 51.21665f;
	
		default:
		
	}

	return 2546.551f, -1310.4215f, 51.21665f;
}

BOOL func_227(Hash hParam0) // Position - 0xF4B1 Hash - 0x51587F69 ^0xAFC63473
{
	func_303(hParam0, false, false);

	if (func_304(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 0;

	return false;
}

int func_228(int iParam0) // Position - 0xF4DA Hash - 0x9685BE4A ^0x9685BE4A
{
	switch (iParam0)
	{
		case 0:
			return 7;
	
		case 1:
			return -1;
	
		case 2:
			return -1;
	
		case 3:
			return -1;
	
		case 4:
			return -1;
	
		default:
		
	}

	return -1;
}

BOOL func_229(int iParam0) // Position - 0xF51D Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		default:
		
	}

	return false;
}

void func_230(var uParam0) // Position - 0xF55C Hash - 0xB3099499 ^0xA439833A
{
	int i;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (uParam0->[i /*5*/].f_1 != 0 && ENTITY::IS_MAP_ENTITY_PINNED(uParam0->[i /*5*/].f_1))
			ENTITY::_UNPIN_MAP_ENTITY(uParam0->[i /*5*/].f_1);
	}

	return;
}

int func_231(int iParam0) // Position - 0xF5A4 Hash - 0x7EA093 ^0x7EA093
{
	switch (iParam0)
	{
		case 0:
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
			return 0;
	
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
	
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
			return 2;
	
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 3;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 4;
	}

	return -1;
}

char* func_232(int iParam0) // Position - 0xF6CE Hash - 0xE6862179 ^0x255C0011
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return "new_theater_cancan";
	
		case 9:
			return "new_theater_magician";
	
		case 12:
		case 13:
		case 14:
			return "new_theater_fireperformer";
	
		case 15:
		case 18:
			return "new_theater_strongwoman";
	
		case 16:
		case 17:
		case 19:
			return "new_theater_snakedancer";
	
		case 20:
			return "new_theater_theOddFellows";
	}

	return "";
}

int func_233(int iParam0) // Position - 0xF766 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_252(iParam0))
		return -1;

	return func_305(iParam0);
}

int func_234(int iParam0) // Position - 0xF782 Hash - 0x79A48FAE ^0x79A48FAE
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

void func_235(int iParam0) // Position - 0xF7C7 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

void func_236(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xF7E0 Hash - 0xB9FD135E ^0x2A68E0C1
{
	func_303(hParam0, false, false);

	if (func_304(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != iParam1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, iParam1);

	return;
}

BOOL func_237(Hash hParam0) // Position - 0xF819 Hash - 0xD46620F0 ^0x47EF7B12
{
	func_303(hParam0, false, false);

	if (func_304(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 1;

	return false;
}

BOOL func_238(Hash hParam0) // Position - 0xF850 Hash - 0xB710720E ^0xB710720E
{
	return func_306(hParam0, 23);
}

void func_239(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xF860 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_303(hParam0, false, false);

	if (func_304(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_307(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_308(hParam0, true);
			else
				func_309(hParam0, true);
		else
			func_310(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_311())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

void func_240(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xF8EB Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_312(hParam0, hParam1, true))
	{
		num = func_313(hParam1);
		num2 = func_314(hParam0);
		num3 = func_314(hParam0) - func_314(hParam1);
		num4 = func_313(hParam0) - func_313(hParam1);
		num5 = func_315(hParam0) - func_315(hParam1);
		num6 = func_316(hParam0) - func_316(hParam1);
		num7 = func_317(hParam0) - func_317(hParam1);
		num8 = func_318(hParam0) - func_318(hParam1);
	}
	else
	{
		num = func_313(hParam0);
		num2 = func_314(hParam1);
		num3 = func_314(hParam1) - func_314(hParam0);
		num4 = func_313(hParam1) - func_313(hParam0);
		num5 = func_315(hParam1) - func_315(hParam0);
		num6 = func_316(hParam1) - func_316(hParam0);
		num7 = func_317(hParam1) - func_317(hParam0);
		num8 = func_318(hParam1) - func_318(hParam0);
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
	
		num5 = num5 + func_319(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_320(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

void func_241(var uParam0, int iParam1) // Position - 0xFAED Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_242(var uParam0, int iParam1) // Position - 0xFAFE Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_243(int iParam0) // Position - 0xFB13 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_109(iParam0, Global_1310750.f_16072 | 64);
}

void func_244(int iParam0) // Position - 0xFB2B Hash - 0x3D0B339A ^0xB87B2B3D
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

float func_245(float fParam0, float fParam1) // Position - 0xFBB8 Hash - 0x99935A7D ^0x99935A7D
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

void func_246(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4) // Position - 0xFBCF Hash - 0x5319EC03 ^0xCD317940
{
	float num;
	float num2;
	float lightIntensity;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			num2 = fParam3 - fParam2;
			num = num2 / fParam3;
			uParam0->f_2 = func_321(fParam1, uParam0->f_4, num);
		
			if (uParam0->f_2 < fParam1)
				uParam0->f_2 = fParam1;
		}
	
		lightIntensity = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
		OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(*uParam0, lightIntensity);
	}

	return;
}

void func_247(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4) // Position - 0xFC40 Hash - 0xE583FF9E ^0x51298DC4
{
	float num;
	float lightIntensity;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			num = fParam2 / fParam3;
			uParam0->f_2 = func_321(uParam0->f_3, fParam1, num);
		
			if (uParam0->f_2 > fParam1)
				uParam0->f_2 = fParam1;
		
			lightIntensity = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
			OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(*uParam0, lightIntensity);
		}
	}

	return;
}

BOOL func_248(int iParam0) // Position - 0xFCAA Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_233(iParam0);
	return num == 3 || num == 4;
}

BOOL func_249() // Position - 0xFCC8 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_250(int iParam0) // Position - 0xFD1B Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_252(iParam0))
		return -1;

	return func_323(func_322(iParam0));
}

BOOL func_251(int iParam0, int iParam1) // Position - 0xFD3B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_252(int iParam0) // Position - 0xFD4A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_253(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xFD7D Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_324(eptParam1))
		{
			func_325(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_326(pedParam0, 0, true);
	
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
			func_327(pedParam0, false);
			flag = true;
		}
	
		func_328(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0xFE5E Hash - 0xA17D549C ^0xA840A350
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_01";
	
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_02";
	
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_03";
	
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_04";
	
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_05";
	
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_06";
	
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_07";
	
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_08";
	
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_09";
	
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_10";
	
		default:
		
	}

	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_ENTER";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0xFEF4 Hash - 0xA17D549C ^0x18C385AE
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_01";
	
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_02";
	
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_03";
	
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_04";
	
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_05";
	
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_06";
	
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_07";
	
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_08";
	
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_09";
	
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_10";
	
		default:
		
	}

	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_IDLE";
}

struct<11> func_256(int iParam0, int iParam1) // Position - 0xFF8A Hash - 0x1A2BD81D ^0x3F494D13
{
	var unk;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					unk = { 2543.5137f, -1303.8107f, 47.16364f };
					unk.f_3 = { 0f, 0f, 9.568836f };
					unk.f_6 = { 4.336886f, 2f, 2.155625f };
					unk.f_10 = "SHOW_BLOCKING_ROW1_LEFT";
					unk.f_9 = joaat("volBox");
					break;
			
				case 1:
					unk = { 2549.294f, -1303.8304f, 47.04182f };
					unk.f_3 = { 0f, 0f, -9.89514f };
					unk.f_6 = { 4.260345f, 2f, 2f };
					unk.f_10 = "SHOW_BLOCKING_ROW1_RIGHT";
					unk.f_9 = joaat("volBox");
					break;
			
				case 2:
					unk = { 2543.097f, -1302.039f, 47.34119f };
					unk.f_3 = { 0f, 0f, 8.842982f };
					unk.f_6 = { 5.463117f, 2f, 2f };
					unk.f_10 = "SHOW_BLOCKING_ROW2_LEFT";
					unk.f_9 = joaat("volBox");
					break;
			
				case 3:
					unk = { 2550.1833f, -1302.0691f, 47.34119f };
					unk.f_3 = { 0f, 0f, -10.032777f };
					unk.f_6 = { 4.277905f, 2f, 2f };
					unk.f_10 = "SHOW_BLOCKING_ROW2_RIGHT";
					unk.f_9 = joaat("volBox");
					break;
			
				case 4:
					unk = { 2542.9333f, -1300.2997f, 47.63106f };
					unk.f_3 = { 0f, 0f, 9.537826f };
					unk.f_6 = { 5.29451f, 2f, 2f };
					unk.f_10 = "SHOW_BLOCKING_ROW3_LEFT";
					unk.f_9 = joaat("volBox");
					break;
			
				case 5:
					unk = { 2550.596f, -1300.4713f, 47.63106f };
					unk.f_3 = { 0f, 0f, -9.448911f };
					unk.f_6 = { 3.957135f, 2f, 2f };
					unk.f_10 = "SHOW_BLOCKING_ROW3_RIGHT";
					unk.f_9 = joaat("volBox");
					break;
			
				case 6:
					unk = { 2542.582f, -1298.7764f, 47.90404f };
					unk.f_3 = { 0f, 0f, 9.277945f };
					unk.f_6 = { 4.706136f, 2f, 2f };
					unk.f_10 = "SHOW_BLOCKING_ROW4_LEFT";
					unk.f_9 = joaat("volBox");
					break;
			
				case 7:
					unk = { 2549.868f, -1298.6249f, 47.904f };
					unk.f_3 = { 0f, 0f, -9.896723f };
					unk.f_6 = { 5.116724f, 2f, 2f };
					unk.f_10 = "SHOW_BLOCKING_ROW4_RIGHT";
					unk.f_9 = joaat("volBox");
					break;
			}
			break;
	}

	return unk;
}

int func_257(int iParam0, int iParam1) // Position - 0x101F1 Hash - 0x5F42E2E4 ^0x5F42E2E4
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 53:
				case 54:
					return 2;
			
				case 55:
				case 56:
					return 1;
			
				default:
				
			}
		
			return 0;
	
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	}

	return 0;
}

char* func_258(int iParam0) // Position - 0x10256 Hash - 0xCB271E46 ^0xCB271E46
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(3);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(4);
	
		case 6:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(5);
	
		case 7:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(5);
	
		case 8:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6);
	
		case 9:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6);
	
		case 10:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6);
	
		case 11:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6);
	
		case 12:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(7);
	
		case 13:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(7);
	
		case 14:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(8);
	
		case 15:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(8);
	
		case 16:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 17:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 18:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 19:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 20:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 21:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 22:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 23:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 24:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 25:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1);
	
		case 26:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9);
	
		case 27:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9);
	
		case 28:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9);
	
		case 29:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9);
	
		case 30:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9);
	
		case 31:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(10);
	
		case 32:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(10);
	
		case 33:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(10);
	
		case 34:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(11);
	
		default:
		
	}

	return "FAIL";
}

char* func_259(int iParam0, int iParam1, int iParam2) // Position - 0x1045F Hash - 0x1CC5D4C0 ^0x5E53EED8
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_330(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_331(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_332(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_333(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_334(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_335(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_336(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_337(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_338(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_339(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_340(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_341(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_342(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_343(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_344(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_345(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_346(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_347(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_348(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_349(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_350(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_351(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_352(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_353(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_354(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_355(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_356(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_357(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_358(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_359(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_360(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_361(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_362(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_363(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_364(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_365(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_366(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_367(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_368(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_369(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_370(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_371(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_372(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_373(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_374(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_375(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_376(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_377(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_378(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_379(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_380(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_381(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_382(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_383(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_384(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_385(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_440(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_443(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_444(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_445(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_386(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_387(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_388(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_389(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_390(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_391(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_392(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_393(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_394(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_395(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_396(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_397(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_406(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_407(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_408(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_409(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_398(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_399(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_400(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_401(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_402(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_403(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_404(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_405(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_410(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_387(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(16, iParam1, iParam2)));
					
						case 2:
							return func_388(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(16, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_411(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_412(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_413(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_414(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_415(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_416(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_417(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_418(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_419(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_420(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_421(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_422(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_423(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
	
		case 26:
			break;
	
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_424(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_427(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_428(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_429(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_430(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_431(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_432(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_433(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 31:
			break;
	
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_434(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_435(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_436(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_437(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_438(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			
				case 2:
					return func_439(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	}

	return "FAIL";
}

float func_260() // Position - 0x119C1 Hash - 0xA456E2CC ^0x9AE2B714
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.25f);
}

BOOL func_261(int iParam0) // Position - 0x119D3 Hash - 0xA05361F6 ^0xF8A0FD3E
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

BOOL func_262(int iParam0, int iParam1) // Position - 0x11AE9 Hash - 0xFAECB30D ^0xFAECB30D
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 5:
					return true;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 39:
					return true;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 31:
					return true;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 32:
					return true;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 4:
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

void func_263(var uParam0, int iParam1) // Position - 0x11B81 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_264(int iParam0) // Position - 0x11B8E Hash - 0xCD657E63 ^0x35128233
{
	switch (iParam0)
	{
		case 0:
			if (func_248(Global_1835011[36 /*74*/].f_1))
				return 0;
			else
				return 1;
			break;
	
		case 1:
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	}

	return 0;
}

float func_265(int iParam0, int iParam1) // Position - 0x11BE8 Hash - 0x14C48482 ^0x14C48482
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1f;
			
				case 1:
					return -1f;
			
				case 2:
					return 140f;
			
				case 3:
					return 137f;
			
				case 4:
					return 13f;
			
				case 5:
					return 4f;
			
				case 6:
					return -1f;
			
				case 7:
					return -1f;
			
				case 8:
					return -1f;
			
				case 9:
					return 134f;
			
				case 10:
					return 90f;
			
				case 11:
					return 52.5f;
			
				case 12:
					return 34.5f;
			
				case 13:
					return 7f;
			
				case 14:
					return -1f;
			
				case 15:
					return -1f;
			
				case 16:
					return -1f;
			
				case 17:
					return 149f;
			
				case 18:
					return 105f;
			
				case 19:
					return 75f;
			
				case 20:
					return 57f;
			
				case 21:
					return -1f;
			
				case 22:
					return -1f;
			
				case 23:
					return -1f;
			
				case 24:
					return 125f;
			
				case 25:
					return 109f;
			
				case 26:
					return 84f;
			
				case 27:
					return -1f;
			
				case 28:
					return -1f;
			
				case 29:
					return -1f;
			
				case 30:
					return 70.5f;
			
				case 31:
					return 47.5f;
			
				case 32:
					return 8.5f;
			
				case 33:
					return -1f;
			
				case 34:
					return -1f;
			
				case 35:
					return -1f;
			
				case 36:
					return 130f;
			
				case 37:
					return 114f;
			
				case 38:
					return 94f;
			
				case 39:
					return 0f;
			
				case 40:
					return -1f;
			
				case 41:
					return -1f;
			
				case 42:
					return -1f;
			
				case 43:
					return 145f;
			
				case 44:
					return 40f;
			
				case 45:
					return 27f;
			
				case 46:
					return -1f;
			
				case 47:
					return -1f;
			
				case 48:
					return -1f;
			
				case 49:
					return 120f;
			
				case 50:
					return 100f;
			
				case 51:
					return 81f;
			
				case 52:
					return 62f;
			
				case 53:
					return 0.5f;
			
				case 54:
					return 1.5f;
			
				case 55:
					return 1f;
			
				default:
					break;
			}
			break;
	
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60f;
			
				case 1:
					return 46f;
			
				case 2:
					return 24f;
			
				case 3:
					return 8f;
			
				case 4:
					return 12f;
			
				case 5:
					return 31f;
			
				case 6:
					return 44f;
			
				case 7:
					return 40f;
			
				case 8:
					return 21f;
			
				case 9:
					return 0f;
			
				case 10:
					return 4f;
			
				case 11:
					return 54f;
			
				case 12:
					return 58f;
			
				case 13:
					return 36f;
			
				case 14:
					return 17f;
			
				case 15:
					return 28f;
			
				case 16:
					return 70f;
			
				case 17:
					return 65f;
			
				case 18:
					return 50f;
			
				case 19:
					return 33f;
			
				case 20:
					return 1.5f;
			
				case 21:
					return 62f;
			
				default:
				
			}
		
			return 75f;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 44f;
			
				case 1:
					return 17f;
			
				case 2:
					return 23f;
			
				case 3:
					return 56f;
			
				case 4:
					return 60f;
			
				case 5:
					return 0f;
			
				case 6:
					return 10f;
			
				case 7:
					return 30f;
			
				case 8:
					return 37f;
			
				case 9:
					return 52f;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 60f;
			
				case 1:
					return 46f;
			
				case 2:
					return 24f;
			
				case 3:
					return 8f;
			
				case 4:
					return 12f;
			
				case 5:
					return 31f;
			
				case 6:
					return 44f;
			
				case 7:
					return 40f;
			
				case 8:
					return 21f;
			
				case 9:
					return 0f;
			
				case 10:
					return 4f;
			
				case 11:
					return 54f;
			
				case 12:
					return 58f;
			
				case 13:
					return 36f;
			
				case 14:
					return 17f;
			
				case 15:
					return 28f;
			
				case 16:
					return 70f;
			
				case 17:
					return 65f;
			
				case 18:
					return 50f;
			
				case 19:
					return 33f;
			
				case 20:
					return 1.5f;
			
				case 21:
					return 62f;
			
				case 22:
					return 72f;
			
				default:
				
			}
		
			return 75f;
	}

	return 20f;
}

BOOL func_266(var uParam0) // Position - 0x121E9 Hash - 0x76491A38 ^0x60C35CA3
{
	var entityCoords;
	var unk3;
	var unk6;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	unk3 = { Global_36 - entityCoords };
	unk6 = { { 49.51665f, -1308.8395f, 2546.5476f } - entityCoords };
	unk3 = { func_298(unk3) };
	unk6 = { func_298(unk6) };

	if (func_299(unk6, unk3) > 0.95f)
		return true;

	return false;
}

void func_267(Ped* ppedParam0, int iParam1) // Position - 0x12256 Hash - 0xE100D481 ^0xD397D024
{
	int num;
	Vector3 vector;
	float num2;
	Vector3 vector2;
	int num3;

	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0) && !ppedParam0->f_9 && ppedParam0->f_5 != -1)
	{
		num = 2;
	
		if (PED::IS_PED_MALE(*ppedParam0))
			num = 1;
	
		vector = { func_186(iParam1, ppedParam0->f_2) };
		num2 = func_187(iParam1, ppedParam0->f_2);
		vector2 = { 0f, 0f, num2 };
		num3 = func_257(iParam1, ppedParam0->f_2);
		ppedParam0->f_6 = -1;
		ppedParam0->f_7 = func_258(ppedParam0->f_5);
		ppedParam0->f_8 = func_259(ppedParam0->f_5, num, num3);
	
		if (num3 == 0)
			TASK::TASK_PLAY_ANIM_ADVANCED(*ppedParam0, ppedParam0->f_7, ppedParam0->f_8, vector, vector2, 0.75f, -0.75f, -1, 49153, func_260(), 2, 1, 0);
		else
			TASK::TASK_PLAY_ANIM_ADVANCED(*ppedParam0, ppedParam0->f_7, ppedParam0->f_8, vector, vector2, 0.75f, -0.75f, -1, 49153, func_260(), 2, 0, 0);
	}

	if (!ppedParam0->f_9)
	{
		ppedParam0->f_5 = -1;
		ppedParam0->f_6 = -1;
	}

	return;
}

int func_268(int iParam0) // Position - 0x12351 Hash - 0xE431F5ED ^0xE431F5ED
{
	if (iParam0 <= 26)
		return 15;
	else if (iParam0 >= 27 && iParam0 <= 52)
		return 14;
	else if (iParam0 >= 53 && iParam0 <= 55)
		return 2;

	return 2;
}

BOOL func_269(int iParam0, int iParam1) // Position - 0x12399 Hash - 0xDA7AE58E ^0xDA7AE58E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return false;
			
				case 1:
					return false;
			
				case 2:
					return false;
			
				case 3:
					return false;
			
				case 4:
					return false;
			
				case 5:
					return false;
			
				case 6:
					return false;
			
				case 7:
					return false;
			
				case 8:
					return false;
			
				case 9:
					return false;
			
				case 10:
					return false;
			
				case 11:
					return false;
			
				case 12:
					return false;
			
				case 13:
					return false;
			
				case 14:
					return false;
			
				case 15:
					return false;
			
				case 16:
					return false;
			
				case 17:
					return false;
			
				case 18:
					return false;
			
				case 19:
					return false;
			
				case 20:
					return false;
			
				case 21:
					return false;
			
				case 22:
					return false;
			
				case 23:
					return false;
			
				case 24:
					return false;
			
				case 25:
					return false;
			
				case 26:
					return false;
			
				case 27:
					return false;
			
				case 28:
					return false;
			
				case 29:
					return false;
			
				case 30:
					return false;
			
				case 31:
					return false;
			
				case 32:
					return false;
			
				case 33:
					return false;
			
				case 34:
					return false;
			
				case 35:
					return false;
			
				case 36:
					return false;
			
				case 37:
					return false;
			
				case 38:
					return false;
			
				case 39:
					return false;
			
				case 40:
					return false;
			
				case 41:
					return false;
			
				case 42:
					return false;
			
				case 43:
					return false;
			
				case 44:
					return false;
			
				case 45:
					return false;
			
				case 46:
					return false;
			
				case 47:
					return false;
			
				case 48:
					return false;
			
				case 49:
					return false;
			
				case 50:
					return false;
			
				case 51:
					return false;
			
				case 52:
					return false;
			
				case 53:
					return false;
			
				case 54:
					return false;
			
				case 55:
					return false;
			
				default:
					break;
			}
			break;
	
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					return true;
			
				case 9:
					return false;
			
				case 10:
				case 11:
					return true;
			
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
					return false;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					return true;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
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
					return true;
			
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
					return false;
			
				default:
					break;
			}
			break;
	}

	return false;
}

Vector3 func_270(int iParam0) // Position - 0x1278A Hash - 0x1F48C82A ^0x1F48C82A
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
	
		case 1:
		case 2:
			return 2700.3674f, -1349.6986f, 49.78757f;
	
		case 3:
			return -346.81854f, 692.47577f, 118.26307f;
	
		case 4:
			return -772.6649f, -1362.6129f, 45.39102f;
	}

	return 0f, 0f, 0f;
}

void func_271(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x12800 Hash - 0x62D0D0BF ^0xF17935FD
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
	args = { uParam1 };
	args.f_3 = 0;
	args.f_8 = 4;
	args.f_13 = 3;
	args.f_7 = iParam4;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &args);
	return;
}

void func_272(var uParam0, int iParam1) // Position - 0x1287F Hash - 0xD1617FB3 ^0x45B85FC
{
	int num;
	Vector3 vector;
	float num2;
	Vector3 vector2;
	int num3;
	int num4;
	int num5;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && uParam0->f_6 != -1 && !uParam0->f_9)
	{
		num = 2;
	
		if (PED::IS_PED_MALE(*uParam0))
			num = 1;
	
		vector = { func_186(iParam1, uParam0->f_2) };
		num2 = func_187(iParam1, uParam0->f_2);
		vector2 = { 0f, 0f, num2 };
		num3 = func_257(iParam1, uParam0->f_2);
	
		if (uParam0->f_6 == 26)
		{
			num4 = func_446(uParam0->f_2);
			uParam0->f_6 = num4;
			uParam0->f_7 = func_258(uParam0->f_6);
			uParam0->f_8 = func_259(uParam0->f_6, num, num3);
		}
		else if (uParam0->f_6 == 31)
		{
			num5 = func_447(uParam0->f_2);
			uParam0->f_6 = num5;
			uParam0->f_7 = func_258(uParam0->f_6);
			uParam0->f_8 = func_259(uParam0->f_6, num, num3);
		}
		else
		{
			uParam0->f_7 = func_258(uParam0->f_6);
			uParam0->f_8 = func_259(uParam0->f_6, num, num3);
		}
	
		if (num3 == 0)
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vector, vector2, 0.75f, -0.75f, -1, 49154, 0f, 2, 1, 0);
		else
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vector, vector2, 0.75f, -0.75f, -1, 49154, 0f, 2, 0, 0);
	}

	return;
}

void func_273(var uParam0, Ped* ppedParam1) // Position - 0x129CD Hash - 0x82C823ED ^0xECBE4079
{
	float animScenePhase;
	BOOL flag;

	animScenePhase = 0f;
	flag = false;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335))
	{
		animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1394141.f_1335);
		flag = true;
	}

	switch (*uParam0)
	{
		case 9:
			if (flag)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_A_Performance") && animScenePhase > 0.82f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *ppedParam1, 0);
							func_263(&(uParam0->f_11), 1);
						}
						break;
				
					case 1:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_A_Performance") && animScenePhase > 0.9f)
						{
							func_267(ppedParam1, 0);
							func_263(&(uParam0->f_11), 2);
						}
						break;
				
					case 2:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_D_LOOP_2_Challenge_Crowd") && animScenePhase > 0.95f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *ppedParam1, 0);
							func_263(&(uParam0->f_11), 3);
						}
						break;
				
					case 3:
						break;
				}
			}
			break;
	
		case 10:
			if (flag)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Global_1394141.f_1335, "BoolLoop"))
						{
							PED::DELETE_PED(ppedParam1);
							*ppedParam1 = 0;
							Global_1394141.f_1334 = 0;
							func_263(&(uParam0->f_11), 1);
						}
						break;
				
					case 1:
						break;
				}
			}
			break;
	
		case 12:
			if (flag)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "Pl_BreathLoop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "male", *ppedParam1, 0);
							func_263(&(uParam0->f_11), 1);
						}
						break;
				
					case 1:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "Pl_BreathFail") && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(Global_1394141.f_1335, "male"))
						{
							PED::FORCE_PED_MOTION_STATE(*ppedParam1, joaat("MotionState_Walk"), false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*ppedParam1, 2504.9783f, -1245.0736f, 48.2112f, 1f, -1, 0.25f, 0, 1193033728);
							func_263(&(uParam0->f_11), 2);
						}
						break;
				
					case 2:
						if (func_448(*ppedParam1, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
						{
							PED::SET_PED_KEEP_TASK(*ppedParam1, true);
							func_449(*ppedParam1);
							*ppedParam1 = 0;
							Global_1394141.f_1334 = 0;
							func_263(&(uParam0->f_11), 3);
						}
						break;
				
					case 3:
						break;
				}
			}
			break;
	
		case 15:
			if (flag)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "pbl_CrowdChallenge_P2") && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(Global_1394141.f_1335, "CrowdMember"))
						{
							PED::DELETE_PED(ppedParam1);
							*ppedParam1 = 0;
							func_263(&(uParam0->f_11), 1);
						}
						break;
				
					case 1:
						Global_1394141.f_1334 = 0;
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*ppedParam1))
			{
				PED::DELETE_PED(ppedParam1);
				*ppedParam1 = 0;
				Global_1394141.f_1334 = 0;
			}
			break;
	
		case 20:
			if (flag)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1394141.f_1335, false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "pl_Performance") && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Global_1394141.f_1335, "s_Performance_P2", true))
							func_263(&(uParam0->f_11), 1);
						break;
				
					case 1:
						if (func_5(Global_1394141.f_1326, 2048) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1394141.f_1335) > 0.96f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "CS_GENSTORYMALE", *ppedParam1);
							ENTITY::SET_ENTITY_COORDS(*ppedParam1, 2538.8572f, -1312.2933f, 48.21665f, true, false, true, true);
							PED::DELETE_PED(ppedParam1);
							*ppedParam1 = 0;
							Global_1394141.f_1334 = 0;
							func_263(&(uParam0->f_11), 2);
						}
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				ppedParam1->f_5 = 2;
				func_267(ppedParam1, 0);
				Global_1394141.f_1334 = 0;
			}
			break;
	}

	return;
}

Vector3 func_274(int iParam0) // Position - 0x12DCA Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (iParam0)
	{
		case 0:
			return 2546.4438f, -1287.778f, 48.21795f;
	
		case 1:
		case 2:
			return 2631.4639f, -1288.4099f, 51.26936f;
	
		case 3:
			return -307.226f, 789.081f, 116.75089f;
	
		case 4:
			return -836.5425f, -1317.7745f, 42.55259f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_275() // Position - 0x12E43 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

int func_276(int iParam0) // Position - 0x12E61 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_277(int iParam0) // Position - 0x12E6B Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_450(iParam0))
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

BOOL func_278(int iParam0, int iParam1) // Position - 0x12F1E Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_279(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x12F3F Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = iParam9;
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
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
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
	func_451(iParam0, true);
	func_452(iParam0, true);
	func_453(iParam0, 128);
	return;
}

BOOL func_280(var uParam0) // Position - 0x131E5 Hash - 0xEE8016D9 ^0x9FD775F7
{
	float animScenePhase;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_118))
		animScenePhase = ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_118);

	switch (uParam0->f_125)
	{
		case 0:
			if (animScenePhase > 0.23f)
				return true;
			break;
	
		case 1:
			if (animScenePhase > 0.2f)
				return true;
			break;
	
		case 2:
			if (animScenePhase > 0.19f)
				return true;
			break;
	
		case 3:
			if (animScenePhase > 0.33f)
				return true;
			break;
	
		case 4:
			if (animScenePhase > 0.15f)
				return true;
			break;
	}

	return false;
}

void func_281() // Position - 0x13285 Hash - 0x6DF5A1C5 ^0xF203AE0
{
	func_2(&(Global_1394141.f_1326), 1);
	func_2(&(Global_1394141.f_1326), 2);
	func_2(&(Global_1394141.f_1326), 4);
	func_2(&(Global_1394141.f_1326), 64);
	func_2(&(Global_1394141.f_1326), 512);
	return;
}

void func_282(var uParam0, int iParam1) // Position - 0x132CC Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_283(var uParam0, float fParam1, BOOL bParam2) // Position - 0x132D9 Hash - 0xB5C75B44 ^0xB5C75B44
{
	if (bParam2 || !func_20(uParam0))
		func_103(uParam0, fParam1);

	return;
}

var func_284(var uParam0) // Position - 0x132FB Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

// Unhandled jump detected. Output should be considered invalid
int func_285(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x13305 Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_278(i, 2))
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
		func_279(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

BOOL func_286(int iParam0, BOOL bParam1) // Position - 0x133DC Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_204(iParam0))
		return false;

	return !func_278(iParam0, 4);
}

void func_287(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13401 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_204(iParam0))
		return;

	num = func_276(iParam0);

	if (bParam1)
	{
		func_454(iParam0, 4);
		func_451(num, true);
		func_452(num, true);
	}
	else
	{
		func_453(iParam0, 4);
		func_452(num, false);
	}

	return;
}

BOOL func_288(int iParam0, BOOL bParam1) // Position - 0x13450 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_204(iParam0))
		return false;

	num = func_276(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

char* func_289() // Position - 0x13483 Hash - 0x7DA45BC ^0x4D097749
{
	if (func_39())
		return "SHRCT_GENCHEERJ";

	return "SHRCT_GENCHEERA";
}

Vector3 func_290(char* sParam0) // Position - 0x1349D Hash - 0xB2B2D053 ^0xB2B2D053
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
	return unk;
}

BOOL func_291(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x134AF Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_455(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

char* func_292() // Position - 0x13509 Hash - 0x7DA45BC ^0x770719D8
{
	if (func_39())
		return "SHRCT_GENBOOJ";

	return "SHRCT_GENBOOA";
}

void func_293(var uParam0) // Position - 0x13523 Hash - 0xB6490F9B ^0x630640CD
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2141021393))
		Global_1394141.f_1332 = 1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1784625749))
		Global_1394141.f_1332 = 2;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1128440048))
		Global_1394141.f_1332 = 3;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1037833763))
		Global_1394141.f_1332 = 4;

	return;
}

void func_294(var uParam0) // Position - 0x1358B Hash - 0xB6490F9B ^0xBB3D8260
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2066013608))
		Global_1394141.f_1332 = 1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1600759346))
		Global_1394141.f_1332 = 2;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1302332063))
		Global_1394141.f_1332 = 3;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2113246357))
		Global_1394141.f_1332 = 4;

	return;
}

void func_295(var uParam0) // Position - 0x135F3 Hash - 0xB6490F9B ^0x8DA91276
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 281318749))
		Global_1394141.f_1332 = 1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -425803506))
		Global_1394141.f_1332 = 2;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -117283371))
		Global_1394141.f_1332 = 3;

	return;
}

void func_296(var uParam0) // Position - 0x13643 Hash - 0xB6490F9B ^0xA4D1A385
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1730660823))
		Global_1394141.f_1332 = 1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 882468027))
		Global_1394141.f_1332 = 2;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 139955256))
		Global_1394141.f_1332 = 3;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -800285661))
		Global_1394141.f_1332 = 4;

	return;
}

void func_297(var uParam0) // Position - 0x136AB Hash - 0xB6490F9B ^0x55384630
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 708995863))
		Global_1394141.f_1332 = 1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -124778573))
		Global_1394141.f_1332 = 2;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 182266957))
		Global_1394141.f_1332 = 3;

	return;
}

Vector3 func_298(float fParam0, var uParam1, var uParam2) // Position - 0x136FB Hash - 0xFB6A39D2 ^0x80C9C759
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

float func_299(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1373A Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

void func_300(var uParam0) // Position - 0x1375B Hash - 0x5DE504EA ^0x21277A8E
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
	args = { 0f, 0f, 0f };
	args.f_3 = *uParam0;
	args.f_4 = 21030;
	args.f_8 = 4;
	args.f_19 = 3;
	args.f_20 = 2;
	args.f_21 = 3;
	args.f_22 = 3;
	args.f_13 = 3;
	args.f_7 = 500;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &args);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x137F7 Hash - 0xA17D549C ^0xD1F8DFAB
{
	switch (iParam0)
	{
		case 0:
			return "generic_show_mc";
	
		case 5:
			return "show_nbx_cancan";
	
		case 6:
			return "show_nbx_cancan_02";
	
		case 7:
			return "show_nbx_bigband";
	
		case 8:
			return "show_nbx_bigband_02";
	
		case 9:
			return "show_nbx_bulletCatch";
	
		case 10:
			return "show_nbx_escapeArtist";
	
		case 11:
			return "show_nbx_escapeNoose";
	
		case 12:
			return "show_nbx_fireBreath_01";
	
		case 13:
			return "show_nbx_fireDance_01";
	
		case 14:
			return "show_nbx_fireDance_02";
	
		case 15:
			return "show_nbx_flexFight";
	
		case 16:
			return "show_nbx_snakeDance_01";
	
		case 17:
			return "show_nbx_snakeDance_02";
	
		case 18:
			return "show_nbx_strongWoman";
	
		case 19:
			return "show_nbx_swordDance_01";
	
		case 20:
			return "show_nbx_oddFellows";
	
		case 21:
			return "show_movie_magic_lantern";
	
		case 22:
			return "show_movie_magic_lantern";
	
		case 23:
			return "show_movie_magic_lantern";
	
		case 24:
			return "show_movie_magic_lantern";
	
		case 25:
			return "show_movie_magic_lantern";
	
		case 26:
			return "show_movie_magic_lantern";
	
		case 27:
			return "show_movie_magic_lantern";
	
		case 28:
			return "show_movie_magic_lantern";
	
		case 31:
			return "show_movie_magic_lantern";
	
		case 32:
			return "show_movie_magic_lantern";
	
		case 33:
			return "show_movie_magic_lantern";
	
		case 34:
			return "show_movie_magic_lantern";
	
		case 35:
			return "show_movie_magic_lantern";
	
		case 36:
			return "show_movie_magic_lantern";
	
		case 37:
			return "show_movie_magic_lantern";
	
		case 38:
			return "show_movie_magic_lantern";
	
		default:
		
	}

	return "";
}

char* func_302(int iParam0) // Position - 0x139B8 Hash - 0xE6862179 ^0x713BDF7E
{
	switch (iParam0)
	{
		case 0:
			return "PL_OUTRO";
	
		case 1:
			return "PL_OUTRO";
	
		case 2:
			return "PL_OUTRO";
	
		case 3:
			return "PL_OUTRO";
	
		case 4:
			return "PL_OUTRO";
	}

	return "";
}

Hash func_303(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13A1C Hash - 0xEC5804B5 ^0x15A1D925
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

BOOL func_304(Hash hParam0) // Position - 0x13AC0 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_456(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

int func_305(int iParam0) // Position - 0x13ADB Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_457(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_306(Hash hParam0, int iParam1) // Position - 0x13B1C Hash - 0xC6E98A5B ^0xE9422008
{
	Entity entityByDoorhash;

	if (func_75() == false)
		return 0;

	func_303(hParam0, false, false);

	if (func_304(hParam0))
	{
		entityByDoorhash = ENTITY::_GET_ENTITY_BY_DOORHASH(hParam0, 0);
	
		if (entityByDoorhash != 0)
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(entityByDoorhash), iParam1);
	}

	return 0;
}

void func_307(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13B61 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_304(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_308(Hash hParam0, BOOL bParam1) // Position - 0x13B99 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_304(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_309(Hash hParam0, BOOL bParam1) // Position - 0x13BC7 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_304(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_310(Hash hParam0, BOOL bParam1) // Position - 0x13BF5 Hash - 0x4844A91D ^0x50E23246
{
	if (func_304(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_311() // Position - 0x13C23 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_312(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x13C2C Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_458(hParam1) || !func_458(hParam0))
			return true;

	return hParam0 > hParam1;
}

int func_313(Hash hParam0) // Position - 0x13C59 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 22) & 15;
}

int func_314(Hash hParam0) // Position - 0x13C6C Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(hParam0, 26) & 31 * MISC::IS_BIT_SET(hParam0, 31) ? -1 : 1) + 1898;
}

int func_315(Hash hParam0) // Position - 0x13C91 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 17) & 31;
}

int func_316(Hash hParam0) // Position - 0x13CA4 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_317(Hash hParam0) // Position - 0x13CB7 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_318(Hash hParam0) // Position - 0x13CC9 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 0) & 63;
}

int func_319(int iParam0, int iParam1) // Position - 0x13CDB Hash - 0x893AC59E ^0x893AC59E
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

float func_320(float fParam0, float fParam1, float fParam2) // Position - 0x13D75 Hash - 0xDB08F514 ^0x78C0BF6F
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

float func_321(float fParam0, float fParam1, float fParam2) // Position - 0x13DB7 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

BOOL func_322(int iParam0) // Position - 0x13DCC Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_323(BOOL bParam0) // Position - 0x13E0A Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_324(ePedType eptParam0) // Position - 0x13E1D Hash - 0x899A1C9C ^0x899A1C9C
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

void func_325(Ped pedParam0, Hash hParam1) // Position - 0x1444C Hash - 0xEA1C858E ^0xDB5CF989
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_460(pedParam0, hParam1))
		{
			if (func_461(pedParam0, hParam1))
			{
				if (func_462(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_463(pedParam0);
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

void func_326(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x144F6 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_327(Ped pedParam0, BOOL bParam1) // Position - 0x14526 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_328(Ped pedParam0, int iParam1) // Position - 0x1456B Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_329(int iParam0, int iParam1, int iParam2) // Position - 0x14592 Hash - 0x952E3ACE ^0x952E3ACE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						case 1:
							return 2;
					
						case 2:
							return 2;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 26:
			return 0;
	
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
					
						case 1:
							return 1;
					
						case 2:
							return 1;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 12;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
					
						default:
							break;
					}
					break;
			}
			break;
	}

	return 0;
}

char* func_330(int iParam0) // Position - 0x15132 Hash - 0xAFCCB9D8 ^0xAFCCB9D8
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(4);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(5);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(6);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(7);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(4);
}

char* func_331(int iParam0) // Position - 0x1517F Hash - 0xB7C63976 ^0xB7C63976
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(14);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(14);
}

char* func_332(int iParam0) // Position - 0x151A4 Hash - 0xD91AC249 ^0xD91AC249
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(16);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(16);
}

char* func_333(int iParam0) // Position - 0x151C9 Hash - 0xE3BA00A9 ^0xE3BA00A9
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(1);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(0);
}

char* func_334(int iParam0) // Position - 0x151FA Hash - 0x5168CC1A ^0x5168CC1A
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(8);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(9);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(10);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(11);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(8);
}

char* func_335(int iParam0) // Position - 0x1524C Hash - 0x4F4D5C64 ^0x4F4D5C64
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(15);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(15);
}

char* func_336(int iParam0) // Position - 0x15271 Hash - 0xD05F100E ^0xD05F100E
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(17);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(17);
}

char* func_337(int iParam0) // Position - 0x15296 Hash - 0xB7BD42B4 ^0xB7BD42B4
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(2);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(3);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(2);
}

char* func_338(int iParam0) // Position - 0x152C7 Hash - 0x4292CBC0 ^0x4292CBC0
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(8);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(9);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(12);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(13);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(14);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(15);
	
		case 6:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(18);
	
		case 7:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(19);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(8);
}

char* func_339(int iParam0) // Position - 0x15355 Hash - 0x77D3E78F ^0x77D3E78F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(26);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(27);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(26);
}

char* func_340(int iParam0) // Position - 0x15389 Hash - 0x1F80CDA5 ^0x1F80CDA5
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(30);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(31);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(30);
}

char* func_341(int iParam0) // Position - 0x153BD Hash - 0x5448A6DD ^0x5448A6DD
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(1);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(4);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(5);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(0);
}

char* func_342(int iParam0) // Position - 0x1540A Hash - 0x443BDA30 ^0x443BDA30
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(10);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(11);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(16);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(17);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(20);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(21);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(10);
}

char* func_343(int iParam0) // Position - 0x1547A Hash - 0x761D2D62 ^0x761D2D62
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(28);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(29);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(28);
}

char* func_344(int iParam0) // Position - 0x154AE Hash - 0xF6127A4F ^0xF6127A4F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(32);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(33);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(32);
}

char* func_345(int iParam0) // Position - 0x154E2 Hash - 0xE5183A1D ^0xE5183A1D
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(2);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(3);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(6);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(7);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(2);
}

char* func_346(int iParam0) // Position - 0x1552F Hash - 0xF10B0370 ^0xF10B0370
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(2);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(3);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(4);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(5);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(2);
}

char* func_347(int iParam0) // Position - 0x1557C Hash - 0x1824D955 ^0x1824D955
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(7);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(7);
}

char* func_348(int iParam0) // Position - 0x1559F Hash - 0x3B0BF74F ^0x3B0BF74F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(8);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(8);
}

char* func_349(int iParam0) // Position - 0x155C4 Hash - 0xE3BA00A9 ^0xE3BA00A9
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(1);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(0);
}

char* func_350(int iParam0) // Position - 0x155F5 Hash - 0xB3FF1847 ^0xB3FF1847
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(4);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(5);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(6);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(7);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(8);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(9);
	
		case 6:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(10);
	
		case 7:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(11);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(4);
}

char* func_351(int iParam0) // Position - 0x1567E Hash - 0x8ECEA887 ^0x8ECEA887
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(14);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(15);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(14);
}

char* func_352(int iParam0) // Position - 0x156B2 Hash - 0x158F9A1C ^0x158F9A1C
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(16);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(17);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(16);
}

char* func_353(int iParam0) // Position - 0x156E6 Hash - 0x9F5E2F9 ^0x9F5E2F9
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(1);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(2);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(3);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(0);
}

char* func_354(int iParam0) // Position - 0x15733 Hash - 0x1123E3E6 ^0x1123E3E6
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(8);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(9);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(12);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(13);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(16);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(17);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(8);
}

char* func_355(int iParam0) // Position - 0x157A3 Hash - 0x5236CC9C ^0x5236CC9C
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(24);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(25);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(24);
}

char* func_356(int iParam0) // Position - 0x157D7 Hash - 0x761D2D62 ^0x761D2D62
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(28);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(29);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(28);
}

char* func_357(int iParam0) // Position - 0x1580B Hash - 0x5448A6DD ^0x5448A6DD
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(1);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(4);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(5);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(0);
}

char* func_358(int iParam0) // Position - 0x15858 Hash - 0x3CD1999F ^0x3CD1999F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(10);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(11);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(14);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(15);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(18);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(19);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(10);
}

char* func_359(int iParam0) // Position - 0x158C8 Hash - 0x77D3E78F ^0x77D3E78F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(26);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(27);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(26);
}

char* func_360(int iParam0) // Position - 0x158FC Hash - 0x1F80CDA5 ^0x1F80CDA5
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(30);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(31);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(30);
}

char* func_361(int iParam0) // Position - 0x15930 Hash - 0xE5183A1D ^0xE5183A1D
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(2);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(3);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(6);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(7);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(2);
}

char* func_362(int iParam0) // Position - 0x1597D Hash - 0x16006070 ^0x16006070
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(11);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(15);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(19);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(11);
}

char* func_363(int iParam0) // Position - 0x159C0 Hash - 0xC0FE6BD9 ^0xC0FE6BD9
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(27);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(27);
}

char* func_364(int iParam0) // Position - 0x159E5 Hash - 0x603CB86C ^0x603CB86C
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(31);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(31);
}

char* func_365(int iParam0) // Position - 0x15A0A Hash - 0x912BC867 ^0x912BC867
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(3);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(7);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(3);
}

char* func_366(int iParam0) // Position - 0x15A3B Hash - 0x2A576AD6 ^0x2A576AD6
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(10);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(14);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(18);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(10);
}

char* func_367(int iParam0) // Position - 0x15A7E Hash - 0xC7322311 ^0xC7322311
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(26);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(26);
}

char* func_368(int iParam0) // Position - 0x15AA3 Hash - 0x82590410 ^0x82590410
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(30);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(30);
}

char* func_369(int iParam0) // Position - 0x15AC8 Hash - 0x5CF9E971 ^0x5CF9E971
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(2);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(6);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(2);
}

char* func_370(int iParam0) // Position - 0x15AF9 Hash - 0x16ECADD9 ^0x16ECADD9
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(9);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(13);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(17);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(9);
}

char* func_371(int iParam0) // Position - 0x15B3C Hash - 0x49C02D11 ^0x49C02D11
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(25);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(25);
}

char* func_372(int iParam0) // Position - 0x15B61 Hash - 0xF41722F2 ^0xF41722F2
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(29);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(29);
}

char* func_373(int iParam0) // Position - 0x15B86 Hash - 0x69C29F15 ^0x69C29F15
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(1);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(5);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(0);
}

char* func_374(int iParam0) // Position - 0x15BB7 Hash - 0x7A257100 ^0x7A257100
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(8);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(12);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(16);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(8);
}

char* func_375(int iParam0) // Position - 0x15BFA Hash - 0xFD6BCDAC ^0xFD6BCDAC
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(24);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(24);
}

char* func_376(int iParam0) // Position - 0x15C1F Hash - 0xD6092466 ^0xD6092466
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(28);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(28);
}

char* func_377(int iParam0) // Position - 0x15C44 Hash - 0x42340438 ^0x42340438
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(4);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(0);
}

char* func_378(int iParam0) // Position - 0x15C75 Hash - 0x7101D77B ^0x7101D77B
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(4);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(6);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(8);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(4);
}

char* func_379(int iParam0) // Position - 0x15CB5 Hash - 0x54DF13C7 ^0x54DF13C7
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(12);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(12);
}

char* func_380(int iParam0) // Position - 0x15CDA Hash - 0xB7C63976 ^0xB7C63976
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(14);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(14);
}

char* func_381(int iParam0) // Position - 0x15CFF Hash - 0x17531EF7 ^0x17531EF7
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(2);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(0);
}

char* func_382(int iParam0) // Position - 0x15D30 Hash - 0x373422F8 ^0x373422F8
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(5);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(7);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(9);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(5);
}

char* func_383(int iParam0) // Position - 0x15D70 Hash - 0xC56BC51F ^0xC56BC51F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(13);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(13);
}

char* func_384(int iParam0) // Position - 0x15D95 Hash - 0x4F4D5C64 ^0x4F4D5C64
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(15);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(15);
}

char* func_385(int iParam0) // Position - 0x15DBA Hash - 0xECD770D4 ^0xECD770D4
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(1);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(3);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(1);
}

char* func_386(int iParam0) // Position - 0x15DEB Hash - 0xD4B9A49F ^0xD4B9A49F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(56);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(70);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(84);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(56);
}

char* func_387(int iParam0) // Position - 0x15E2E Hash - 0xE4FD19B7 ^0xE4FD19B7
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(0);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(0);
}

char* func_388(int iParam0) // Position - 0x15E51 Hash - 0xB7C63976 ^0xB7C63976
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(14);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(14);
}

char* func_389(int iParam0) // Position - 0x15E76 Hash - 0x8449F665 ^0x8449F665
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(28);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(42);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(42);
}

char* func_390(int iParam0) // Position - 0x15EAA Hash - 0xEB834F22 ^0xEB834F22
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(57);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(58);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(71);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(72);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(85);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(86);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(57);
}

char* func_391(int iParam0) // Position - 0x15F1A Hash - 0xB0888488 ^0xB0888488
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(1);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(2);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(1);
}

char* func_392(int iParam0) // Position - 0x15F4B Hash - 0x69D94719 ^0x69D94719
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(15);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(16);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(15);
}

char* func_393(int iParam0) // Position - 0x15F7F Hash - 0x5F517662 ^0x5F517662
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(29);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(30);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(43);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(44);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(43);
}

char* func_394(int iParam0) // Position - 0x15FD1 Hash - 0xADFE55F4 ^0xADFE55F4
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(59);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(60);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(73);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(74);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(87);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(88);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(59);
}

char* func_395(int iParam0) // Position - 0x16041 Hash - 0xE5CD89DA ^0xE5CD89DA
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(3);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(4);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(3);
}

char* func_396(int iParam0) // Position - 0x16072 Hash - 0xF6B15126 ^0xF6B15126
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(17);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(18);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(17);
}

char* func_397(int iParam0) // Position - 0x160A6 Hash - 0xCDE0A3BE ^0xCDE0A3BE
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(31);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(32);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(45);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(46);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(42);
}

char* func_398(int iParam0) // Position - 0x160F8 Hash - 0xE98259BD ^0xE98259BD
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(63);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(77);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(91);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(63);
}

char* func_399(int iParam0) // Position - 0x1613B Hash - 0x1824D955 ^0x1824D955
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(7);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(7);
}

char* func_400(int iParam0) // Position - 0x1615E Hash - 0x32FC06D3 ^0x32FC06D3
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(21);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(21);
}

char* func_401(int iParam0) // Position - 0x16183 Hash - 0xBB128ADA ^0xBB128ADA
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(35);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(49);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(35);
}

char* func_402(int iParam0) // Position - 0x161B7 Hash - 0xCDA88CDD ^0xCDA88CDD
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(62);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(76);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(90);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(62);
}

char* func_403(int iParam0) // Position - 0x161FA Hash - 0x60891455 ^0x60891455
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(6);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(6);
}

char* func_404(int iParam0) // Position - 0x1621D Hash - 0x74518E1C ^0x74518E1C
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(20);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(20);
}

char* func_405(int iParam0) // Position - 0x16242 Hash - 0x78C1AF48 ^0x78C1AF48
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(34);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(48);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(34);
}

char* func_406(int iParam0) // Position - 0x16276 Hash - 0xDA57AB01 ^0xDA57AB01
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(61);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(75);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(89);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(61);
}

char* func_407(int iParam0) // Position - 0x162B9 Hash - 0x2D5CAC35 ^0x2D5CAC35
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(5);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(5);
}

char* func_408(int iParam0) // Position - 0x162DC Hash - 0xA390B420 ^0xA390B420
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(19);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(19);
}

char* func_409(int iParam0) // Position - 0x16301 Hash - 0xC4B9E871 ^0xC4B9E871
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(33);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(47);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(33);
}

char* func_410(int iParam0) // Position - 0x16335 Hash - 0x8B8A1DFC ^0x8B8A1DFC
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(65);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(79);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(93);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(65);
}

char* func_411(int iParam0) // Position - 0x16378 Hash - 0x80E3BA54 ^0x80E3BA54
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(37);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(51);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(37);
}

char* func_412(int iParam0) // Position - 0x163AC Hash - 0xF6BE04E ^0xF6BE04E
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(64);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(78);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(92);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(64);
}

char* func_413(int iParam0) // Position - 0x163EF Hash - 0x3B0BF74F ^0x3B0BF74F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(8);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(8);
}

char* func_414(int iParam0) // Position - 0x16414 Hash - 0x920F7B56 ^0x920F7B56
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(22);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(22);
}

char* func_415(int iParam0) // Position - 0x16439 Hash - 0x873736BB ^0x873736BB
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(36);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(50);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(36);
}

char* func_416(int iParam0) // Position - 0x1646D Hash - 0xF30B59F3 ^0xF30B59F3
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(66);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(67);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(80);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(81);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(94);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(95);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(66);
}

char* func_417(int iParam0) // Position - 0x164DD Hash - 0x14BDC0F4 ^0x14BDC0F4
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(10);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(11);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(10);
}

char* func_418(int iParam0) // Position - 0x16511 Hash - 0x5236CC9C ^0x5236CC9C
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(24);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(25);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(24);
}

char* func_419(int iParam0) // Position - 0x16545 Hash - 0x46293A55 ^0x46293A55
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(38);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(39);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(52);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(53);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(38);
}

char* func_420(int iParam0) // Position - 0x16597 Hash - 0xAD8C2622 ^0xAD8C2622
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(68);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(69);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(82);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(83);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(96);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(97);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(68);
}

char* func_421(int iParam0) // Position - 0x16607 Hash - 0xA5CC57F0 ^0xA5CC57F0
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(12);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(13);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(12);
}

char* func_422(int iParam0) // Position - 0x1663B Hash - 0x77D3E78F ^0x77D3E78F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(26);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(27);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(26);
}

char* func_423(int iParam0) // Position - 0x1666F Hash - 0xB0D7C7E5 ^0xB0D7C7E5
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(40);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(41);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(54);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(55);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(40);
}

char* func_424(int iParam0) // Position - 0x166C1 Hash - 0xC15A14EA ^0xC15A14EA
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(109);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(110);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(111);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(109);
}

char* func_425(int iParam0) // Position - 0x16704 Hash - 0xE8157407 ^0xE8157407
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(98);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(98);
}

char* func_426(int iParam0) // Position - 0x16729 Hash - 0x3D5ABE59 ^0x3D5ABE59
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(99);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(99);
}

char* func_427(int iParam0) // Position - 0x1674E Hash - 0xBBFA6DBE ^0xBBFA6DBE
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(102);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(103);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(102);
}

char* func_428(int iParam0) // Position - 0x16782 Hash - 0x99DD7FF ^0x99DD7FF
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(108);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(108);
}

char* func_429(int iParam0) // Position - 0x167A7 Hash - 0x3D9CB917 ^0x3D9CB917
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(100);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(101);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(100);
}

char* func_430(int iParam0) // Position - 0x167DB Hash - 0xE4CD9C94 ^0xE4CD9C94
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(112);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(113);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(114);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(112);
}

char* func_431(int iParam0) // Position - 0x1681E Hash - 0xF8867BC3 ^0xF8867BC3
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(104);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(105);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(104);
}

char* func_432(int iParam0) // Position - 0x16852 Hash - 0x1967B219 ^0x1967B219
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(115);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(116);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(117);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(115);
}

char* func_433(int iParam0) // Position - 0x16895 Hash - 0x86510C2B ^0x86510C2B
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(106);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(107);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(106);
}

char* func_434(int iParam0) // Position - 0x168C9 Hash - 0x3954400F ^0x3954400F
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(122);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(124);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(126);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(128);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(130);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(132);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(122);
}

char* func_435(int iParam0) // Position - 0x16939 Hash - 0x5404D35 ^0x5404D35
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(118);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(120);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(118);
}

char* func_436(int iParam0) // Position - 0x1696D Hash - 0xE8FFD034 ^0xE8FFD034
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(123);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(125);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(127);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(129);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(131);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(133);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(123);
}

char* func_437(int iParam0) // Position - 0x169DD Hash - 0xD283A5B6 ^0xD283A5B6
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(119);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(121);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(119);
}

char* func_438(int iParam0) // Position - 0x16A11 Hash - 0xB8753810 ^0xB8753810
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(138);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(139);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(140);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(141);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(142);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(143);
	
		case 6:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(144);
	
		case 7:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(145);
	
		case 8:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(146);
	
		case 9:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(147);
	
		case 10:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(148);
	
		case 11:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(149);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(138);
}

char* func_439(int iParam0) // Position - 0x16ADB Hash - 0xF7132739 ^0xF7132739
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(134);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(135);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(136);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(137);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(134);
}

char* func_440(int iParam0) // Position - 0x16B2D Hash - 0x51C1DD54 ^0x51C1DD54
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(6);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(7);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(9);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(10);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(12);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(13);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(6);
}

char* func_441(int iParam0) // Position - 0x16B9A Hash - 0x118F7B8D ^0x118F7B8D
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(16);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(19);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(16);
}

char* func_442(int iParam0) // Position - 0x16BCE Hash - 0x6C462E55 ^0x6C462E55
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(17);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(20);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(17);
}

char* func_443(int iParam0) // Position - 0x16C02 Hash - 0xD23F86CD ^0xD23F86CD
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(1);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(3);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(4);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(0);
}

char* func_444(int iParam0) // Position - 0x16C4F Hash - 0x8FA636EC ^0x8FA636EC
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(6);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(8);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(9);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(11);
	
		case 4:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(12);
	
		case 5:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(14);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(6);
}

char* func_445(int iParam0) // Position - 0x16CBD Hash - 0xB20F47EB ^0xB20F47EB
{
	switch (iParam0)
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(0);
	
		case 1:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(2);
	
		case 2:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(3);
	
		case 3:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(5);
	
		default:
		
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(0);
}

int func_446(int iParam0) // Position - 0x16D0A Hash - 0xDED73C45 ^0xDED73C45
{
	if (iParam0 <= 26)
		return 30;
	else if (iParam0 >= 27 && iParam0 <= 32)
		return 27;
	else if (iParam0 >= 33 && iParam0 <= 38)
		return 29;
	else if (iParam0 >= 39 && iParam0 <= 56)
		return 28;

	return 23;
}

int func_447(int iParam0) // Position - 0x16D6E Hash - 0x4A9F1197 ^0x49200B0
{
	if (iParam0 <= 26)
		return 34;
	else if (iParam0 >= 27 && iParam0 <= 32)
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) >= 50)
			return 32;
		else
			return 33;
	else if (iParam0 >= 33 && iParam0 <= 54)
		return 34;

	return 19;
}

BOOL func_448(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x16DCC Hash - 0xBA023B92 ^0x16E0B707
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

void func_449(Ped pedParam0) // Position - 0x16E25 Hash - 0x5C592C2B ^0x4255940A
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(pedParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, joaat("REL_NO_RELATIONSHIP"));
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedParam0);
	}

	return;
}

BOOL func_450(int iParam0) // Position - 0x16E55 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_278(iParam0, 2);
}

void func_451(int iParam0, BOOL bParam1) // Position - 0x16E64 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_278(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_452(int iParam0, BOOL bParam1) // Position - 0x16EBC Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_453(int iParam0, int iParam1) // Position - 0x16EE5 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_454(int iParam0, int iParam1) // Position - 0x16F0D Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_455(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x16F40 Hash - 0xFDACD718 ^0x658C9335
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

BOOL func_456(Hash hParam0) // Position - 0x16F92 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_457(int iParam0) // Position - 0x16F9E Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_458(Hash hParam0) // Position - 0x1701F Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_318(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_317(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_316(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_314(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_313(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_315(hParam0);

	if (num6 < 1 || num6 > func_319(num5, num4))
		return false;

	return true;
}

var func_459(BOOL bParam0, var uParam1, var uParam2) // Position - 0x170FB Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_460(Ped pedParam0, Hash hParam1) // Position - 0x17112 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_461(Ped pedParam0, Hash hParam1) // Position - 0x17140 Hash - 0xA54F3032 ^0x770A4E55
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

BOOL func_462(Ped pedParam0, Hash hParam1) // Position - 0x17191 Hash - 0xA54F3032 ^0x770A4E55
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_460(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_463(Ped pedParam0) // Position - 0x17203 Hash - 0x446F1BDD ^0x5B9351BF
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x17221 Hash - 0xA17D549C ^0x18F29872
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_enthralled_b";
	
		case 1:
			return "seated_loop_female1_enthralled_b";
	
		case 2:
			return "seated_loop_female0_waiting_a";
	
		case 3:
			return "seated_loop_female1_waiting_a";
	
		case 4:
			return "seated_loop_male1_enthralled_b";
	
		case 5:
			return "seated_loop_male2_enthralled_b";
	
		case 6:
			return "seated_loop_male3_enthralled_b";
	
		case 7:
			return "seated_loop_male4_enthralled_b";
	
		case 8:
			return "seated_loop_male1_waiting_a";
	
		case 9:
			return "seated_loop_male2_waiting_a";
	
		case 10:
			return "seated_loop_male3_waiting_a";
	
		case 11:
			return "seated_loop_male4_waiting_a";
	
		case 12:
			return "railing_loop_male0_enthralled_b";
	
		case 13:
			return "railing_loop_male0_waiting_a";
	
		case 14:
			return "railingl_male0_enthralled_b";
	
		case 15:
			return "railingl_male0_waiting_a";
	
		case 16:
			return "railingr_male5_enthralled_b";
	
		case 17:
			return "railingr_male5_waiting_a";
	
		default:
		
	}

	return "seated_loop_male1_waiting_a";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(int iParam0) // Position - 0x1731F Hash - 0xA17D549C ^0xD48D09D1
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_regular_a";
	
		case 1:
			return "seated_loop_female0_regular_b";
	
		case 2:
			return "seated_loop_female0_rowdy_b";
	
		case 3:
			return "seated_loop_female0_rowdy_c";
	
		case 4:
			return "seated_loop_female1_regular_a";
	
		case 5:
			return "seated_loop_female1_regular_b";
	
		case 6:
			return "seated_loop_female1_rowdy_b";
	
		case 7:
			return "seated_loop_female1_rowdy_c";
	
		case 8:
			return "seated_loop_male1_regular_a";
	
		case 9:
			return "seated_loop_male1_regular_b";
	
		case 10:
			return "seated_loop_male1_rowdy_b";
	
		case 11:
			return "seated_loop_male1_rowdy_c";
	
		case 12:
			return "seated_loop_male2_regular_a";
	
		case 13:
			return "seated_loop_male2_regular_b";
	
		case 14:
			return "seated_loop_male3_regular_a";
	
		case 15:
			return "seated_loop_male3_regular_b";
	
		case 16:
			return "seated_loop_male3_rowdy_b";
	
		case 17:
			return "seated_loop_male3_rowdy_c";
	
		case 18:
			return "seated_loop_male4_regular_a";
	
		case 19:
			return "seated_loop_male4_regular_b";
	
		case 20:
			return "seated_loop_male4_rowdy_b";
	
		case 21:
			return "seated_loop_male4_rowdy_c";
	
		case 22:
			return "railing_loop_male0_regular_a";
	
		case 23:
			return "railing_loop_male0_regular_b";
	
		case 24:
			return "railing_loop_male0_rowdy_b";
	
		case 25:
			return "railing_loop_male0_rowdy_c";
	
		case 26:
			return "railingl_male0_regular_a";
	
		case 27:
			return "railingl_male0_regular_b";
	
		case 28:
			return "railingl_male0_rowdy_b";
	
		case 29:
			return "railingl_male0_rowdy_c";
	
		case 30:
			return "railingr_male5_regular_a";
	
		case 31:
			return "railingr_male5_regular_b";
	
		case 32:
			return "railingr_male5_rowdy_b";
	
		case 33:
			return "railingr_male5_rowdy_c";
	
		default:
		
	}

	return "seated_loop_male1_regular_a";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(int iParam0) // Position - 0x174ED Hash - 0xA17D549C ^0xCEE038B
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_musical_b";
	
		case 1:
			return "seated_loop_female1_musical_b";
	
		case 2:
			return "seated_loop_mail0_musical_b";
	
		case 3:
			return "seated_loop_male2_musical_b";
	
		case 4:
			return "seated_loop_male3_musical_b";
	
		case 5:
			return "seated_loop_male4_musical_b";
	
		case 6:
			return "railing_loop_male1_musical_b";
	
		case 7:
			return "railingl_male1_musical_b";
	
		case 8:
			return "railingr_male5_musical_b";
	
		default:
		
	}

	return "seated_loop_mail0_musical_b";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(int iParam0) // Position - 0x17576 Hash - 0xA17D549C ^0xB6453904
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_dancing_b";
	
		case 1:
			return "seated_loop_female0_dancing_c";
	
		case 2:
			return "seated_loop_female1_dancing_b";
	
		case 3:
			return "seated_loop_female1_dancing_c";
	
		case 4:
			return "seated_loop_male0_dancing_b";
	
		case 5:
			return "seated_loop_male0_dancing_c";
	
		case 6:
			return "seated_loop_male2_dancing_b";
	
		case 7:
			return "seated_loop_male2_dancing_c";
	
		case 8:
			return "seated_loop_male3_dancing_b";
	
		case 9:
			return "seated_loop_male3_dancing_c";
	
		case 10:
			return "seated_loop_male4_dancing_b";
	
		case 11:
			return "seated_loop_male4_dancing_c";
	
		case 12:
			return "railing_loop_male1_dancing_b";
	
		case 13:
			return "railing_loop_male1_dancing_c";
	
		case 14:
			return "railingl_male1_dancing_b";
	
		case 15:
			return "railingl_male1_dancing_c";
	
		case 16:
			return "railingr_male5_dancing_b";
	
		case 17:
			return "railingr_male5_dancing_c";
	
		default:
		
	}

	return "seated_loop_male0_dancing_b";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0(int iParam0) // Position - 0x17674 Hash - 0xA17D549C ^0xB818D456
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_comedic_b";
	
		case 1:
			return "seated_loop_female0_comedic_c";
	
		case 2:
			return "seated_loop_female0_displeased_b";
	
		case 3:
			return "seated_loop_female0_displeased_c";
	
		case 4:
			return "seated_loop_female1_comedic_b";
	
		case 5:
			return "seated_loop_female1_comedic_c";
	
		case 6:
			return "seated_loop_female1_displeased_b";
	
		case 7:
			return "seated_loop_female1_displeased_c";
	
		case 8:
			return "seated_loop_male0_comedic_b";
	
		case 9:
			return "seated_loop_male0_comedic_c";
	
		case 10:
			return "seated_loop_male0_displeased_b";
	
		case 11:
			return "seated_loop_male0_displeased_c";
	
		case 12:
			return "seated_loop_male2_comedic_b";
	
		case 13:
			return "seated_loop_male2_comedic_c";
	
		case 14:
			return "seated_loop_male2_displeased_b";
	
		case 15:
			return "seated_loop_male2_displeased_c";
	
		case 16:
			return "seated_loop_male3_comedic_b";
	
		case 17:
			return "seated_loop_male3_comedic_c";
	
		case 18:
			return "seated_loop_male3_displeased_b";
	
		case 19:
			return "seated_loop_male3_displeased_c";
	
		case 20:
			return "railing_loop_male1_comedic_b";
	
		case 21:
			return "railing_loop_male1_comedic_c";
	
		case 22:
			return "railing_loop_male1_displeased_b";
	
		case 23:
			return "railing_loop_male1_displeased_c";
	
		case 24:
			return "railingl_male1_comedic_b";
	
		case 25:
			return "railingl_male1_comedic_c";
	
		case 26:
			return "railingl_male1_displeased_b";
	
		case 27:
			return "railingl_male1_displeased_c";
	
		case 28:
			return "railingr_male4_comedic_b";
	
		case 29:
			return "railingr_male4_comedic_c";
	
		case 30:
			return "railingr_male4_displeased_b";
	
		case 31:
			return "railingr_male4_displeased_c";
	
		default:
		
	}

	return "seated_loop_male0_comedic_b";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0(int iParam0) // Position - 0x17828 Hash - 0xA17D549C ^0x40AFBE09
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_med_b";
	
		case 1:
			return "seated_loop_female0_applause_small_a";
	
		case 2:
			return "seated_loop_female0_suspense_neg_b";
	
		case 3:
			return "seated_loop_female0_suspense_pos_b";
	
		case 4:
			return "seated_loop_female1_applause_med_b";
	
		case 5:
			return "seated_loop_female1_applause_small_a";
	
		case 6:
			return "seated_loop_female1_suspense_neg_b";
	
		case 7:
			return "seated_loop_female1_suspense_pos_b";
	
		case 8:
			return "seated_loop_male0_applause_med_b";
	
		case 9:
			return "seated_loop_male0_applause_small_a";
	
		case 10:
			return "seated_loop_male0_suspense_neg_b";
	
		case 11:
			return "seated_loop_male0_suspense_pos_b";
	
		case 12:
			return "seated_loop_male2_applause_med_b";
	
		case 13:
			return "seated_loop_male2_applause_small_a";
	
		case 14:
			return "seated_loop_male2_suspense_neg_b";
	
		case 15:
			return "seated_loop_male2_suspense_pos_b";
	
		case 16:
			return "seated_loop_male3_applause_med_b";
	
		case 17:
			return "seated_loop_male3_applause_small_a";
	
		case 18:
			return "seated_loop_male3_suspense_neg_b";
	
		case 19:
			return "seated_loop_male3_suspense_pos_b";
	
		case 20:
			return "railing_loop_male1_applause_med_b";
	
		case 21:
			return "railing_loop_male1_applause_small_a";
	
		case 22:
			return "railing_loop_male1_suspense_neg_b";
	
		case 23:
			return "railing_loop_male1_suspense_pos_b";
	
		case 24:
			return "railingl_male1_applause_med_b";
	
		case 25:
			return "railingl_male1_applause_small_a";
	
		case 26:
			return "railingl_male1_suspense_neg_b";
	
		case 27:
			return "railingl_male1_suspense_pos_b";
	
		case 28:
			return "railingr_male4_applause_med_b";
	
		case 29:
			return "railingr_male4_applause_small_a";
	
		case 30:
			return "railingr_male4_suspense_neg_b";
	
		case 31:
			return "railingr_male4_suspense_pos_b";
	
		default:
		
	}

	return "seated_loop_male0_applause_med_b";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0(int iParam0) // Position - 0x179DC Hash - 0xA17D549C ^0x7E49DE74
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_big_c";
	
		case 1:
			return "seated_loop_female0_horrified_c";
	
		case 2:
			return "seated_loop_female2_applause_big_c";
	
		case 3:
			return "seated_loop_female2_horrified_c";
	
		case 4:
			return "seated_loop_male0_applause_big_c";
	
		case 5:
			return "seated_loop_male0_horrified_c";
	
		case 6:
			return "seated_loop_male2_applause_big_c";
	
		case 7:
			return "seated_loop_male2_horrified_c";
	
		case 8:
			return "seated_loop_male3_applause_big_c";
	
		case 9:
			return "seated_loop_male3_horrified_c";
	
		case 10:
			return "railing_loop_male1_applause_big_c";
	
		case 11:
			return "railing_loop_male1_horrified_c";
	
		case 12:
			return "railingl_male1_applause_big_c";
	
		case 13:
			return "railingl_male1_horrified_c";
	
		case 14:
			return "railingr_male4_applause_big_c";
	
		case 15:
			return "railingr_male4_horrified_c";
	
		default:
		
	}

	return "seated_loop_male0_applause_big_c";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0(int iParam0) // Position - 0x17AC0 Hash - 0xA17D549C ^0x40CA0546
{
	switch (iParam0)
	{
		case 0:
			return "railingl_male0_applause_quick";
	
		case 1:
			return "railingl_male0_applause_standing_01";
	
		case 2:
			return "railingl_male0_applause_standing_02";
	
		case 3:
			return "railingl_male0_boo_high";
	
		case 4:
			return "railingl_male0_boo_low";
	
		case 5:
			return "railingl_male0_horrified_amused";
	
		case 6:
			return "railingl_male0_horrified_high";
	
		case 7:
			return "railingl_male0_horrified_low";
	
		case 8:
			return "railingl_male0_impressed_high";
	
		case 9:
			return "railingl_male0_impressed_low";
	
		case 10:
			return "railingl_male0_laugh";
	
		case 11:
			return "railingl_male0_laugh_02";
	
		case 12:
			return "railingl_male0_raunchy";
	
		case 13:
			return "railingl_male0_raunchy_02";
	
		case 14:
			return "railingr_male4_applause_quick";
	
		case 15:
			return "railingr_male4_applause_standing_01";
	
		case 16:
			return "railingr_male4_applause_standing_02";
	
		case 17:
			return "railingr_male4_boo_high";
	
		case 18:
			return "railingr_male4_boo_low";
	
		case 19:
			return "railingr_male4_horrified_amused";
	
		case 20:
			return "railingr_male4_horrified_high";
	
		case 21:
			return "railingr_male4_horrified_low";
	
		case 22:
			return "railingr_male4_impressed_high";
	
		case 23:
			return "railingr_male4_impressed_low";
	
		case 24:
			return "railingr_male4_laugh";
	
		case 25:
			return "railingr_male4_laugh_02";
	
		case 26:
			return "railingr_male4_raunchy";
	
		case 27:
			return "railingr_male4_raunchy_02";
	
		case 28:
			return "seated_loop_female0_applause_quick";
	
		case 29:
			return "seated_loop_female0_applause_standing_01";
	
		case 30:
			return "seated_loop_female0_applause_standing_02";
	
		case 31:
			return "seated_loop_female0_boo_high";
	
		case 32:
			return "seated_loop_female0_boo_low";
	
		case 33:
			return "seated_loop_female0_horrified_amused";
	
		case 34:
			return "seated_loop_female0_horrified_high";
	
		case 35:
			return "seated_loop_female0_horrified_low";
	
		case 36:
			return "seated_loop_female0_impressed_high";
	
		case 37:
			return "seated_loop_female0_impressed_low";
	
		case 38:
			return "seated_loop_female0_laugh";
	
		case 39:
			return "seated_loop_female0_laugh_02";
	
		case 40:
			return "seated_loop_female0_raunchy";
	
		case 41:
			return "seated_loop_female0_raunchy_02";
	
		case 42:
			return "seated_loop_female1_applause_quick";
	
		case 43:
			return "seated_loop_female1_applause_standing_01";
	
		case 44:
			return "seated_loop_female1_applause_standing_02";
	
		case 45:
			return "seated_loop_female1_boo_high";
	
		case 46:
			return "seated_loop_female1_boo_low";
	
		case 47:
			return "seated_loop_female1_horrified_amused";
	
		case 48:
			return "seated_loop_female1_horrified_high";
	
		case 49:
			return "seated_loop_female1_horrified_low";
	
		case 50:
			return "seated_loop_female1_impressed_high";
	
		case 51:
			return "seated_loop_female1_impressed_low";
	
		case 52:
			return "seated_loop_female1_laugh";
	
		case 53:
			return "seated_loop_female1_laugh_02";
	
		case 54:
			return "seated_loop_female1_raunchy";
	
		case 55:
			return "seated_loop_female1_raunchy_02";
	
		case 56:
			return "seated_loop_male1_applause_quick";
	
		case 57:
			return "seated_loop_male1_applause_standing_01";
	
		case 58:
			return "seated_loop_male1_applause_standing_02";
	
		case 59:
			return "seated_loop_male1_boo_high";
	
		case 60:
			return "seated_loop_male1_boo_low";
	
		case 61:
			return "seated_loop_male1_horrified_amused";
	
		case 62:
			return "seated_loop_male1_horrified_high";
	
		case 63:
			return "seated_loop_male1_horrified_low";
	
		case 64:
			return "seated_loop_male1_impressed_high";
	
		case 65:
			return "seated_loop_male1_impressed_low";
	
		case 66:
			return "seated_loop_male1_laugh";
	
		case 67:
			return "seated_loop_male1_laugh_02";
	
		case 68:
			return "seated_loop_male1_raunchy";
	
		case 69:
			return "seated_loop_male1_raunchy_02";
	
		case 70:
			return "seated_loop_male2_applause_quick";
	
		case 71:
			return "seated_loop_male2_applause_standing_01";
	
		case 72:
			return "seated_loop_male2_applause_standing_02";
	
		case 73:
			return "seated_loop_male2_boo_high";
	
		case 74:
			return "seated_loop_male2_boo_low";
	
		case 75:
			return "seated_loop_male2_horrified_amused";
	
		case 76:
			return "seated_loop_male2_horrified_high";
	
		case 77:
			return "seated_loop_male2_horrified_low";
	
		case 78:
			return "seated_loop_male2_impressed_high";
	
		case 79:
			return "seated_loop_male2_impressed_low";
	
		case 80:
			return "seated_loop_male2_laugh";
	
		case 81:
			return "seated_loop_male2_laugh_02";
	
		case 82:
			return "seated_loop_male2_raunchy";
	
		case 83:
			return "seated_loop_male2_raunchy_02";
	
		case 84:
			return "seated_loop_male3_applause_quick";
	
		case 85:
			return "seated_loop_male3_applause_standing_01";
	
		case 86:
			return "seated_loop_male3_applause_standing_02";
	
		case 87:
			return "seated_loop_male3_boo_high";
	
		case 88:
			return "seated_loop_male3_boo_low";
	
		case 89:
			return "seated_loop_male3_horrified_amused";
	
		case 90:
			return "seated_loop_male3_horrified_high";
	
		case 91:
			return "seated_loop_male3_horrified_low";
	
		case 92:
			return "seated_loop_male3_impressed_high";
	
		case 93:
			return "seated_loop_male3_impressed_low";
	
		case 94:
			return "seated_loop_male3_laugh";
	
		case 95:
			return "seated_loop_male3_laugh_02";
	
		case 96:
			return "seated_loop_male3_raunchy";
	
		case 97:
			return "seated_loop_male3_raunchy_02";
	
		case 98:
			return "railsl_oneshot_male_escapeartistreact_a_male4";
	
		case 99:
			return "railsr_oneshot_male_escapeartistreact_a_male4";
	
		case 100:
			return "seated_oneshot_female_escapeartistreact_backward_a_female0";
	
		case 101:
			return "seated_oneshot_female_escapeartistreact_backward_b_female0";
	
		case 102:
			return "seated_oneshot_female_escapeartistreact_forward_a_female0";
	
		case 103:
			return "seated_oneshot_female_escapeartistreact_forward_b_female0";
	
		case 104:
			return "seated_oneshot_female_escapeartistreact_left_a_female0";
	
		case 105:
			return "seated_oneshot_female_escapeartistreact_left_b_female0";
	
		case 106:
			return "seated_oneshot_female_escapeartistreact_right_a_female0";
	
		case 107:
			return "seated_oneshot_female_escapeartistreact_right_b_female0";
	
		case 108:
			return "seated_oneshot_male_escapeartistreact_backward_a_male4";
	
		case 109:
			return "seated_oneshot_male_escapeartistreact_forward_a_male4";
	
		case 110:
			return "seated_oneshot_male_escapeartistreact_forward_b_male4";
	
		case 111:
			return "seated_oneshot_male_escapeartistreact_forward_c_male4";
	
		case 112:
			return "seated_oneshot_male_escapeartistreact_left_a_male4";
	
		case 113:
			return "seated_oneshot_male_escapeartistreact_left_b_male4";
	
		case 114:
			return "seated_oneshot_male_escapeartistreact_left_c_male4";
	
		case 115:
			return "seated_oneshot_male_escapeartistreact_right_a_male4";
	
		case 116:
			return "seated_oneshot_male_escapeartistreact_right_b_male4";
	
		case 117:
			return "seated_oneshot_male_escapeartistreact_right_c_male4";
	
		case 118:
			return "seated_oneshot_female0_hatfire_close_rt_a";
	
		case 119:
			return "seated_oneshot_female0_hatfire_concerned_rt_a";
	
		case 120:
			return "seated_oneshot_female1_hatfire_close_rt_a";
	
		case 121:
			return "seated_oneshot_female1_hatfire_concerned_rt_a";
	
		case 122:
			return "seated_oneshot_male0_hatfire_close_rt_a";
	
		case 123:
			return "seated_oneshot_male0_hatfire_concerned_rt_a";
	
		case 124:
			return "seated_oneshot_male1_hatfire_close_rt_a";
	
		case 125:
			return "seated_oneshot_male1_hatfire_concerned_rt_a";
	
		case 126:
			return "seated_oneshot_male2_hatfire_close_rt_a";
	
		case 127:
			return "seated_oneshot_male2_hatfire_concerned_rt_a";
	
		case 128:
			return "seated_oneshot_male3_hatfire_close_rt_a";
	
		case 129:
			return "seated_oneshot_male3_hatfire_concerned_rt_a";
	
		case 130:
			return "seated_oneshot_male4_hatfire_close_rt_a";
	
		case 131:
			return "seated_oneshot_male4_hatfire_concerned_rt_a";
	
		case 132:
			return "seated_oneshot_male5_hatfire_close_rt_a";
	
		case 133:
			return "seated_oneshot_male5_hatfire_concerned_rt_a";
	
		case 134:
			return "seated_oneshot_female0_hatfire_laugh_ft_a";
	
		case 135:
			return "seated_oneshot_female0_hatfire_laugh_ft_b";
	
		case 136:
			return "seated_oneshot_female1_hatfire_laugh_ft_a";
	
		case 137:
			return "seated_oneshot_female1_hatfire_laugh_ft_b";
	
		case 138:
			return "seated_oneshot_male0_hatfire_laugh_ft_a";
	
		case 139:
			return "seated_oneshot_male0_hatfire_laugh_ft_b";
	
		case 140:
			return "seated_oneshot_male1_hatfire_laugh_ft_a";
	
		case 141:
			return "seated_oneshot_male1_hatfire_laugh_ft_b";
	
		case 142:
			return "seated_oneshot_male2_hatfire_laugh_ft_a";
	
		case 143:
			return "seated_oneshot_male2_hatfire_laugh_ft_b";
	
		case 144:
			return "seated_oneshot_male3_hatfire_laugh_ft_a";
	
		case 145:
			return "seated_oneshot_male3_hatfire_laugh_ft_b";
	
		case 146:
			return "seated_oneshot_male4_hatfire_laugh_ft_a";
	
		case 147:
			return "seated_oneshot_male4_hatfire_laugh_ft_b";
	
		case 148:
			return "seated_oneshot_male5_hatfire_laugh_ft_a";
	
		case 149:
			return "seated_oneshot_male5_hatfire_laugh_ft_b";
	
		default:
		
	}

	return "seated_loop_male1_applause_quick";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0_0_0_0_0_0(int iParam0) // Position - 0x18273 Hash - 0xA17D549C ^0xF5E4EB3E
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_blocked_a";
	
		case 1:
			return "seated_loop_female0_blocked_left_a";
	
		case 2:
			return "seated_loop_female0_blocked_right_a";
	
		case 3:
			return "seated_loop_female1_blocked_a";
	
		case 4:
			return "seated_loop_female1_blocked_left_a";
	
		case 5:
			return "seated_loop_female1_blocked_right_a";
	
		case 6:
			return "seated_loop_male0_blocked_a";
	
		case 7:
			return "seated_loop_male0_blocked_left_a";
	
		case 8:
			return "seated_loop_male0_blocked_right_a";
	
		case 9:
			return "seated_loop_male2_blocked_a";
	
		case 10:
			return "seated_loop_male2_blocked_left_a";
	
		case 11:
			return "seated_loop_male2_blocked_right_a";
	
		case 12:
			return "seated_loop_male3_blocked_a";
	
		case 13:
			return "seated_loop_male3_blocked_left_a";
	
		case 14:
			return "seated_loop_male3_blocked_right_a";
	
		case 15:
			return "railingl_male1_blocked_a";
	
		case 16:
			return "railingl_male1_blocked_left_a";
	
		case 17:
			return "railingl_male1_blocked_right_a";
	
		case 18:
			return "railingr_male4_blocked_a";
	
		case 19:
			return "railingr_male4_blocked_left_a";
	
		case 20:
			return "railingr_male4_blocked_right_a";
	
		default:
		
	}

	return "seated_loop_male0_blocked_a";
}

