#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<2> Local_52[2];
	struct<2> Local_57[4];
	struct<13> Local_66[4];
	var uLocal_119 = 16;
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
	struct<6> Local_284 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_290 = 0;
	var uLocal_291 = 1092616192;
	var uLocal_292 = 1101004800;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 3;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	char cLocal_314[128] = "";
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	var uLocal_341 = 30;
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
	var uLocal_492 = 10;
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
	var uLocal_543 = 10;
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
	var uLocal_614 = 20;
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
	var uLocal_715 = 20;
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
	var uLocal_816 = 30;
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
	var uLocal_997 = 5;
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
	var uLocal_1028 = 7;
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
	var uLocal_1078 = 5;
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
	var uLocal_1104 = 3;
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
	var uLocal_1120 = 21;
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
	var uLocal_1217 = 0;
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
	var uLocal_1230 = 0;
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
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 10;
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
	var uLocal_1277 = 0;
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
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 5;
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
	var uLocal_1308 = 0;
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
	var uLocal_1321 = 0;
	var uLocal_1322 = 5;
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
	var uLocal_1334 = 0;
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
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	int iLocal_1354 = 0;
	int iLocal_1355 = 0;
	bool bLocal_1356 = 0;
	int iLocal_1357 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = unk_0x0CD0167AEB96E096();
	uLocal_47 = unk_0xE66C877C9033DBB0();
	Local_49 = { 692.8256f, -1012.544f, 21.722f };
	StringCopy(&cLocal_314, "", 64);
	iLocal_330 = 1;
	iLocal_338 = 1;
	if (unk_0xED06FD5709A59F02(3))
	{
		unk_0x21723EF7B2FCC4CC("JHP1B_FAIL");
		func_550();
		func_547();
		unk_0xD39E529EBE5DB04F();
	}
	unk_0x227BB9ED71ECB6E8(1);
	func_542();
	while (true)
	{
		unk_0xAEF7C45DAFB8E9B0("M_JewelStoreJobPrep1B", 0);
		func_541(&uLocal_341);
		func_540();
		func_177();
		if (!bLocal_1356)
		{
			func_149();
			func_1();
		}
		unk_0x49530A7462821D76(0.8f);
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_1352)
	{
		case 0:
			func_144();
			break;
		
		case 1:
			func_34();
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_1353)
	{
		case 0:
			if (unk_0x03DB5C6AABF8DA46())
			{
				unk_0xFD45D90342D2A0CD(800);
			}
			unk_0x4C4FC7841A5FB983(0f);
			iLocal_1353++;
			break;
		
		case 1:
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 0);
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 1);
			func_33(&uLocal_119, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
			func_33(&uLocal_119, 3, 0, "LESTER", 0, 1);
			if (func_10(&uLocal_119, 12, "JHFAUD", "JHF_CARB", 7, 1, 0, 0, 0))
			{
				iLocal_1353++;
			}
			break;
		
		case 2:
			if (!func_9())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_5(0, 1);
	func_4(1, 1);
	func_547();
}

void func_4(int iParam0, int iParam1)
{
	Global_77101 = iParam1;
	if (Global_61711)
	{
		return;
	}
	if (Global_61738)
	{
		Global_61738 = 0;
		return;
	}
	if (unk_0x7B70881748D166CD(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_61711)
		{
		}
		Global_61737 = iParam0;
		Global_61711 = 1;
		Global_61722 = 1;
	}
}

void func_5(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61719)
	{
		Global_61719 = iParam1;
	}
	if (bParam0)
	{
		if ((func_8(0) && Global_77079.f_1 == 1) && func_7(Global_77079))
		{
		}
		else
		{
			Global_61717 = 1;
		}
	}
	if (Global_111858.f_9081 || func_8(0))
	{
		iVar0 = func_6();
		iVar1 = Global_89707[iVar0 /*5*/];
		uVar2 = Global_77102.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111858.f_9081)
			{
			}
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 4);
		unk_0xBE20AB8238688965(&Global_77081, 1);
		Global_77097 = uVar2;
		Global_77098 = unk_0x578C4EF320340AF7();
	}
}

int func_6()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_8(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_9()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

bool func_10(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_32(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	if (iParam5 == 1)
	{
		Global_21017 = 1;
	}
	else
	{
		Global_21017 = 0;
	}
	Global_2621441 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(0);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_29();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam2)
			{
				func_21();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_20())
				{
					return 0;
				}
				if (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC()))
					{
						return 0;
					}
					if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
					{
						return 0;
					}
				}
			}
			if (func_19())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_18();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_17();
		func_12();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_13()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

bool func_15(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(0);
	Global_21005 = 1;
}

void func_18()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	unk_0xD2459066EA58CE43(&Global_7552, 16);
}

int func_19()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5BFE1F305D18843B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_21()
{
	if (func_28(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_22();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

int func_22()
{
	func_23();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_26(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_25(unk_0x9B0761B4C3EB8BC7());
			if (func_24(iVar0) && (!func_28(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_24(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_31()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

void func_33(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 0);
			}
			else
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xE61672E3FEF081AC(iParam2, 0);
			}
			else
			{
				unk_0xE61672E3FEF081AC(iParam2, 1);
			}
		}
	}
}

void func_34()
{
	switch (iLocal_1353)
	{
		case 0:
			if (unk_0x03DB5C6AABF8DA46())
			{
				unk_0xFD45D90342D2A0CD(800);
			}
			unk_0x21723EF7B2FCC4CC("JHP1B_VAN");
			func_91(0f, 0f, 0f, -1f, 0, 145);
			func_90(906, 0);
			iLocal_338 = 0;
			iLocal_1353++;
			break;
		
		case 1:
			if (!iLocal_338)
			{
				if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
				{
					unk_0x21723EF7B2FCC4CC("JHP1B_STOP");
					func_89(1, 906);
					unk_0xBE1CA603598C1441(5f, 5f, 4);
					iLocal_338 = 1;
				}
			}
			if (func_44(&Local_284, Local_49, 0.1f, 0.1f, 2f, 1, Local_52[0 /*2*/], "JHP1B_RTNVAN", "", "JHP1B_BACK_VAN", 1, 0, 1, -1) || (unk_0x8F678487EEBD8CE4(Local_284.f_5) && unk_0x1037B9D45CE6B788(Local_52[0 /*2*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0)))
			{
				unk_0xA5DA49AF5FFE9112(Local_52[0 /*2*/], 0);
				func_39(&Local_284, 1, 0);
				func_89(1, 906);
				unk_0xBE1CA603598C1441(5f, 5f, 4);
				iLocal_1353++;
			}
			break;
		
		case 2:
			if (func_37(Local_52[0 /*2*/], 10.5f, -1, 1056964608, 0, 1, 0))
			{
				if (unk_0xDCD47F31CE777FDC(Local_52[0 /*2*/]))
				{
					unk_0x8777F28BE786D09D(Local_52[0 /*2*/], 0);
				}
				unk_0xC160551F55D6365A(Local_52[0 /*2*/], 0, 0, 0);
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 1);
				func_36(1);
				func_35(1, 0);
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/], 0))
				{
					unk_0xA5DA49AF5FFE9112(Local_52[0 /*2*/], 0);
				}
				unk_0x0AB756271BADC8DF(unk_0x9B0761B4C3EB8BC7(), 0, 0);
				func_33(&uLocal_119, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
				func_33(&uLocal_119, 3, 0, "LESTER", 0, 1);
				unk_0xBE1CA603598C1441(5f, 5f, 4);
				iLocal_1353++;
			}
			break;
		
		case 3:
			if (func_10(&uLocal_119, 12, "JHFAUD", "JHF_CARB", 7, 1, 0, 0, 0))
			{
				unk_0xBE1CA603598C1441(5f, 5f, 4);
				iLocal_1353++;
			}
			break;
		
		case 4:
			if (!func_9())
			{
				func_3();
			}
			break;
	}
}

void func_35(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x779660A9E5364C4D(0, 21, 1);
	}
	unk_0x779660A9E5364C4D(0, 25, 1);
	unk_0x779660A9E5364C4D(0, 24, 1);
	unk_0x779660A9E5364C4D(0, 257, 1);
	unk_0x779660A9E5364C4D(0, 141, 1);
	unk_0x779660A9E5364C4D(0, 140, 1);
	unk_0x779660A9E5364C4D(0, 22, 1);
	unk_0x779660A9E5364C4D(0, 44, 1);
	unk_0x779660A9E5364C4D(0, 23, 1);
	unk_0x779660A9E5364C4D(0, 47, 1);
	unk_0x779660A9E5364C4D(0, 36, 1);
	if (bParam0)
	{
		unk_0x779660A9E5364C4D(0, 37, 1);
	}
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (bParam1)
		{
			unk_0x94D1A5176CE89859(unk_0x9B0761B4C3EB8BC7(), 2f);
		}
		else
		{
			unk_0x94D1A5176CE89859(unk_0x9B0761B4C3EB8BC7(), 1f);
		}
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 102, 1);
	}
	if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
	{
		unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
	}
}

void func_36(bool bParam0)
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 157, 0);
		unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 1);
		unk_0x912105796D275F9C(unk_0x9B0761B4C3EB8BC7(), 0, 0);
		if (bParam0)
		{
			unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 0);
		}
		unk_0x9EB88E485EDFD7EB(unk_0x9B0761B4C3EB8BC7(), 0);
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
	}
	unk_0x53797676AD34A9AA(0);
	unk_0x34FEEAC2548C3789(0f);
}

int func_37(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x779660A9E5364C4D(0, 71, 1);
	unk_0x779660A9E5364C4D(0, 72, 1);
	unk_0x779660A9E5364C4D(0, 76, 1);
	unk_0x779660A9E5364C4D(0, 73, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	if (bParam5)
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
	unk_0x779660A9E5364C4D(0, 80, 1);
	if (!bParam6)
	{
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
	}
	unk_0x779660A9E5364C4D(0, 74, 1);
	unk_0x779660A9E5364C4D(0, 86, 1);
	unk_0x779660A9E5364C4D(0, 81, 1);
	unk_0x779660A9E5364C4D(0, 82, 1);
	unk_0x779660A9E5364C4D(0, 138, 1);
	unk_0x779660A9E5364C4D(0, 136, 1);
	unk_0x779660A9E5364C4D(0, 114, 1);
	unk_0x779660A9E5364C4D(0, 107, 1);
	unk_0x779660A9E5364C4D(0, 110, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 87, 1);
	unk_0x779660A9E5364C4D(0, 88, 1);
	unk_0x779660A9E5364C4D(0, 113, 1);
	unk_0x779660A9E5364C4D(0, 115, 1);
	unk_0x779660A9E5364C4D(0, 116, 1);
	unk_0x779660A9E5364C4D(0, 117, 1);
	unk_0x779660A9E5364C4D(0, 118, 1);
	unk_0x779660A9E5364C4D(0, 119, 1);
	unk_0x779660A9E5364C4D(0, 352, 1);
	unk_0x779660A9E5364C4D(0, 131, 1);
	unk_0x779660A9E5364C4D(0, 132, 1);
	unk_0x779660A9E5364C4D(0, 123, 1);
	unk_0x779660A9E5364C4D(0, 126, 1);
	unk_0x779660A9E5364C4D(0, 129, 1);
	unk_0x779660A9E5364C4D(0, 130, 1);
	unk_0x779660A9E5364C4D(0, 133, 1);
	unk_0x779660A9E5364C4D(0, 134, 1);
	unk_0xB78DC40D63D4FBA3();
	func_38(iParam0);
	if ((unk_0x578C4EF320340AF7() - Global_29) > 500)
	{
		unk_0xD4C86DEC93F19FB0(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x578C4EF320340AF7();
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_38(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xAADB7E66E4BD2B67(iParam0))
		{
			if (unk_0xC1067169688057A8(iParam0))
			{
				unk_0x348DC18FDCA78997(iParam0, 0);
			}
		}
	}
}

void func_39(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_43(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(uParam0->f_1[iVar0]));
		}
		func_42(iVar0, uParam0);
		func_41(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xD2459066EA58CE43(&(uParam0->f_13), iVar0);
			unk_0xD2459066EA58CE43(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		unk_0x93370FA10F15BE44(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
		{
			unk_0x83BBFE5E96C64FBA(uParam0->f_17[iVar0], 1);
			unk_0x59DF7D162BF6D02E(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x694113444F21E39F(uParam0->f_17[iVar0], 32, 1);
				unk_0x694113444F21E39F(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x694113444F21E39F(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()) && uParam0->f_17[iVar0] != unk_0x9B0761B4C3EB8BC7())
				{
					unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 29))
			{
				unk_0x042EA371AD4AE883(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0x83BBFE5E96C64FBA(unk_0x9B0761B4C3EB8BC7(), 1);
		unk_0x59DF7D162BF6D02E(unk_0x9B0761B4C3EB8BC7(), 1);
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (bParam2)
		{
			unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_40()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

void func_41(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 19);
			break;
	}
}

void func_42(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 16);
			break;
	}
}

void func_43(var uParam0)
{
	if (unk_0x8F678487EEBD8CE4(uParam0->f_5))
	{
		unk_0x93370FA10F15BE44(&(uParam0->f_5));
	}
}

int func_44(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_45(uParam0, Param1, Param4, func_88(), func_88(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_87(), func_87(), func_87(), func_87(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_45(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_86(uParam0);
	func_85(uParam0);
	func_84();
	if (func_68(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_67(sParam20);
		func_67(sParam21);
		func_67(sParam22);
		func_67(sParam23);
		if (unk_0x87F0CB19476706C3())
		{
			bVar1 = false;
			if (unk_0x80FF6C016CDB0FAF(iParam18, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam18, 0))
				{
					unk_0xBE20AB8238688965(&(uParam0->f_13), 3);
					if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 9))
					{
						unk_0xD2459066EA58CE43(&(uParam0->f_13), 4);
					}
					if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 23))
					{
						unk_0xD2459066EA58CE43(&(uParam0->f_13), 23);
					}
					unk_0xBE20AB8238688965(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_65(uParam0, iParam29))
				{
					unk_0xBE20AB8238688965(&(uParam0->f_13), 3);
					if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 9))
					{
						unk_0xD2459066EA58CE43(&(uParam0->f_13), 4);
					}
					unk_0xBE20AB8238688965(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_67(sParam24);
				func_67(sParam27);
				func_67("MORE_SEATS");
				if (bParam26 && unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					if (unk_0x8F678487EEBD8CE4(uParam0->f_5))
					{
						unk_0x93370FA10F15BE44(&(uParam0->f_5));
						func_67(sParam19);
					}
					if (unk_0x8F678487EEBD8CE4(*uParam0))
					{
						unk_0x93370FA10F15BE44(uParam0);
					}
					if ((!func_62(uParam0, 1) && !func_61(uParam0)) && !unk_0xCE990E643CD9D0E5(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_59(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[0]))
							{
								func_57(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xBE20AB8238688965(&(uParam0->f_13), 0);
						unk_0xD2459066EA58CE43(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						unk_0xD2459066EA58CE43(&(uParam0->f_13), 0);
						unk_0xBE20AB8238688965(&(uParam0->f_13), 1);
					}
					if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 1))
					{
						if (!func_62(uParam0, 1))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[0]))
							{
								func_57(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xD2459066EA58CE43(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x8F678487EEBD8CE4(uParam0->f_5))
					{
						if (unk_0x8F678487EEBD8CE4(*uParam0))
						{
							unk_0x93370FA10F15BE44(uParam0);
						}
						uParam0->f_5 = func_56(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xE7B8403ABCA0391D(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_55(uParam0->f_5, uParam0);
						}
					}
					else if (!func_54(Var3, unk_0x41A1ED9BB4ED4772(uParam0->f_5), 0.1f, 0))
					{
						unk_0xC96DB2548BD4EDDD(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_55(uParam0->f_5, uParam0);
						}
					}
					if (!func_62(uParam0, 2))
					{
						if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 2))
						{
							func_59(uParam0, sParam19, 0);
							unk_0xBE20AB8238688965(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
									if (!unk_0xE0B3BC41DDA88DF0(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xE0B3BC41DDA88DF0(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar2], func_40()) || !func_52(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_49(uParam0))
							{
								func_67(sParam19);
								func_67(sParam24);
								func_67(sParam20);
								func_67(sParam21);
								func_67(sParam22);
								func_67(sParam23);
								func_67("LOSE_WANTED");
								func_67("MORE_SEATS");
								func_67(sParam27);
								func_39(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xAE06B9E39EBDE049(iParam18))
			{
				if ((bParam26 && unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) && (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 9) && !unk_0xCE990E643CD9D0E5(uParam0->f_13, 22)))
				{
					func_67(sParam24);
					func_67(sParam27);
					if (unk_0x8F678487EEBD8CE4(uParam0->f_5) || unk_0x8F678487EEBD8CE4(*uParam0))
					{
						unk_0x93370FA10F15BE44(&(uParam0->f_5));
						unk_0x93370FA10F15BE44(uParam0);
						func_67(sParam19);
					}
					if ((!func_62(uParam0, 1) && !func_61(uParam0)) && !unk_0xCE990E643CD9D0E5(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_59(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[0]))
							{
								func_57(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xBE20AB8238688965(&(uParam0->f_13), 0);
						unk_0xD2459066EA58CE43(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						unk_0xD2459066EA58CE43(&(uParam0->f_13), 0);
						unk_0xBE20AB8238688965(&(uParam0->f_13), 1);
					}
					if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 1))
					{
						if (!func_62(uParam0, 1))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[0]))
							{
								func_57(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xD2459066EA58CE43(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x80FF6C016CDB0FAF(iParam18, 0))
					{
						if (!unk_0x8F678487EEBD8CE4(*uParam0))
						{
							if (unk_0x8F678487EEBD8CE4(uParam0->f_5))
							{
								unk_0x93370FA10F15BE44(&(uParam0->f_5));
								func_67(sParam19);
							}
							*uParam0 = func_46(iParam18, 0, 0);
							unk_0x14C1B9C77E952C6F(*uParam0, 2);
							if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 4))
							{
								func_55(*uParam0, uParam0);
							}
						}
						if (!func_62(uParam0, 2))
						{
							if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 3))
							{
								func_59(uParam0, sParam24, 0);
								unk_0xBE20AB8238688965(&(uParam0->f_13), 3);
								unk_0xD2459066EA58CE43(&(uParam0->f_13), 4);
							}
							else if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 9))
							{
								if (!unk_0x211E6DB3335430B4(sParam27))
								{
									if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 4))
									{
										func_59(uParam0, sParam27, 0);
										unk_0xBE20AB8238688965(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 4))
								{
									func_59(uParam0, sParam24, 0);
									unk_0xBE20AB8238688965(&(uParam0->f_13), 4);
								}
								if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 23))
								{
									if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[0]))
									{
										func_57(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xBE20AB8238688965(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x8F678487EEBD8CE4(uParam0->f_5))
				{
					unk_0x93370FA10F15BE44(&(uParam0->f_5));
					func_67(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_62(uParam0, 2))
						{
							if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
							{
								if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x344C570D6F8700DF(0, iVar8);
									if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar9]))
									{
										func_57(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_59(uParam0, "MORE_SEATS", 0);
									unk_0xBE20AB8238688965(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 3))
							{
								func_59(uParam0, sParam24, 0);
								unk_0xBE20AB8238688965(&(uParam0->f_13), 3);
								unk_0xD2459066EA58CE43(&(uParam0->f_13), 4);
							}
							else if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 4))
							{
								if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 9))
								{
									func_59(uParam0, sParam27, 0);
									unk_0xBE20AB8238688965(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_62(uParam0, 2))
					{
						if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 3))
						{
							func_59(uParam0, sParam24, 0);
							unk_0xBE20AB8238688965(&(uParam0->f_13), 3);
							unk_0xD2459066EA58CE43(&(uParam0->f_13), 4);
						}
						else if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 9))
						{
							if (!unk_0x211E6DB3335430B4(sParam27))
							{
								if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 4))
								{
									func_59(uParam0, sParam27, 0);
									unk_0xBE20AB8238688965(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 4))
							{
								func_59(uParam0, sParam24, 0);
								unk_0xBE20AB8238688965(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 0))
		{
			unk_0xD2459066EA58CE43(&(uParam0->f_13), 0);
		}
		func_67(sParam19);
		func_67(sParam24);
		func_67(sParam27);
		func_67(sParam24);
		func_67("LOSE_WANTED");
		if (unk_0x8F678487EEBD8CE4(uParam0->f_5))
		{
			unk_0x93370FA10F15BE44(&(uParam0->f_5));
		}
		if (unk_0x8F678487EEBD8CE4(*uParam0))
		{
			unk_0x93370FA10F15BE44(uParam0);
		}
	}
	unk_0xD2459066EA58CE43(&(uParam0->f_13), 11);
	unk_0xD2459066EA58CE43(&(uParam0->f_13), 12);
	return 0;
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	return func_47(iParam0, !bParam1, bParam2);
}

int func_47(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_48(unk_0x25DDB354A40FFCDB(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3060C53EAE54BBE7(uVar0, bParam1);
		}
		else
		{
			unk_0xECC9A00CF1181EC2(uVar0, 2);
		}
	}
	else if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_48(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(uVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_48(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_48(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_49(var uParam0)
{
	if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 12))
	{
		if (func_51(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_50(1, 0, 1) || unk_0xCE990E643CD9D0E5(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_50(1, 0, 1) || unk_0xCE990E643CD9D0E5(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_50(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA5754C6C4B644ACF())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
		{
			return 0;
		}
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (bParam0)
		{
			if (unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x10D3F7E169A49C44(iVar0, -1, 0) != unk_0x9B0761B4C3EB8BC7())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0x59046338C72D0346(iVar0) < 0.95f || unk_0x59046338C72D0346(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!unk_0x0D1884E427D0E0AF(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0)
{
	float fVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		fVar0 = unk_0xF3A639BEE7AADF55(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()) && iParam1)
		{
			if (func_53(unk_0x9B0761B4C3EB8BC7(), iParam0))
			{
				unk_0x5E3D307BA1942AE3(func_40(), 50f);
				return 1;
			}
		}
		else if (unk_0xFE6F151E15A69B3A(iParam0, func_40()))
		{
			unk_0x5E3D307BA1942AE3(func_40(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x6E0C5E7AAF8B6214(iParam0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, 0);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iParam1))
				{
					if (unk_0xACBCFA3095C5A434(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_54(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.x - Param3.x)) <= fParam6)
		{
			if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x0D77CDCF403AEBD2((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0D77CDCF403AEBD2((Param0.x - Param3.x)) <= fParam6)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_55(var uParam0, var uParam1)
{
	if (unk_0x8F678487EEBD8CE4(uParam0))
	{
		if (unk_0x8F678487EEBD8CE4(uParam1->f_6))
		{
			unk_0x72BEFB9451782F60(uParam1->f_6, 0);
		}
		unk_0xE103A7AB14FB3D17(0);
		unk_0xE587140E4FB377B3();
		uParam1->f_6 = uParam0;
		unk_0x72BEFB9451782F60(uParam0, 1);
	}
}

var func_56(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6820C712C1DD618A(Param0);
	unk_0xFA81E0FBD7F5ACA0(uVar0, func_48(unk_0x25DDB354A40FFCDB(), 1f, 1f));
	unk_0x72BEFB9451782F60(uVar0, iParam3);
	return uVar0;
}

void func_57(var uParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(uParam0, sParam1, func_58(iParam2), 1);
}

int func_58(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_59(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x211E6DB3335430B4(sParam1))
		{
			if (!unk_0xF005CCA4263DF67F(sParam1, ""))
			{
				func_60(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x578C4EF320340AF7();
}

void func_60(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x823A1D66E6A4D141(iParam1, 1);
}

int func_61(var uParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_16))
	{
		if (unk_0x6F683C1C0BB1BA8D(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x67F1A5C89249817A())
	{
		if (unk_0x2F80DB5A41D045E6())
		{
			return 1;
		}
		if (func_64(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x67F1A5C89249817A())
	{
		if (func_9() && !func_63())
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (Global_22016 == 1)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x578C4EF320340AF7();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_66(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x99E61B3887CC8E71(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x98E7D24BEECF7A35(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x98E7D24BEECF7A35(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_67(char* sParam0)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		unk_0x213AAAF3AB16731C(sParam0);
	}
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
		{
			if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 29) && !unk_0xCE990E643CD9D0E5(uParam0->f_13, 28))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					unk_0x042EA371AD4AE883(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xBE20AB8238688965(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 29) && unk_0xCE990E643CD9D0E5(uParam0->f_13, 28))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
			{
				unk_0x042EA371AD4AE883(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xAE06B9E39EBDE049(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0xC2E2CC6CF95AF8A3(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 50f, 0, iVar25);
			if (unk_0x80FF6C016CDB0FAF(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x80FF6C016CDB0FAF(uParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0) || !bParam17)
					{
						if (func_66(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
								{
									unk_0x94D1A5176CE89859(uParam0->f_17[iVar0], 1f);
									if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
									{
										unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
									}
									if (unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470) == 7 && !func_83(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xCED6B5226244381C(uParam0->f_17[iVar0]) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0]))
										{
											unk_0x4E65320BC9AD521C(uParam0->f_17[iVar0], 1);
											unk_0xC584E49FC3559A86(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0xD2459066EA58CE43(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					if (!unk_0x11B7C25143EE2F29(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x9B94F6169B0DAEFD(uParam0->f_17[iVar0]);
					}
					if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_40());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 26))
	{
		if ((!func_80(uParam0) && unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7())) && !unk_0xAE06B9E39EBDE049(iParam10))
		{
			iVar13 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x80FF6C016CDB0FAF(iVar13, 0))
			{
				if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_62(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x344C570D6F8700DF(0, iVar26);
						if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar27]))
						{
							func_57(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_59(uParam0, "MORE_SEATS", 0);
						unk_0xBE20AB8238688965(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xD2459066EA58CE43(&(uParam0->f_13), 13);
			func_67("MORE_SEATS");
		}
		if (!unk_0xAE06B9E39EBDE049(iParam10))
		{
			if ((!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[0]) || !unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[1])) || !unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[2]))
			{
				if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 31))
				{
					if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()) && !func_62(uParam0, 2))
					{
						iVar13 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
						if (func_79(iVar13, uParam0))
						{
							func_59(uParam0, "CMN_VEHSUIT", 0);
							unk_0xBE20AB8238688965(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xD2459066EA58CE43(&(uParam0->f_13), 31);
					func_67("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
		{
			if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iParam10))
			{
				if (unk_0x1BD7199394D7F19A(0, 75))
				{
					unk_0xBE20AB8238688965(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 21))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_17[iVar0]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
					{
						unk_0xB1AC1F996633F5B4(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xB1AC1F996633F5B4(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
					{
						iVar13 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
						if (unk_0x80FF6C016CDB0FAF(iVar13, 0))
						{
							if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
							{
								if (!func_80(uParam0) && unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
								{
									if (!func_78(uParam0->f_17[iVar0]))
									{
										unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xA59F96B50B97E63C(iVar13, 0))
						{
							if (unk_0xACBCFA3095C5A434(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xE72C9284B5143451(iVar13) && !unk_0xFEB73FC16397E7DC(iVar13))
								{
									Var28 = { unk_0x3E4D3CCC220BDFB1(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
					{
						if (unk_0x6E0C5E7AAF8B6214(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xA5D5B1042E8F47BD(uParam0->f_17[iVar0], 0);
							if (!unk_0xA59F96B50B97E63C(iVar13, 0))
							{
								if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iVar13))
										{
											if (unk_0xF3A639BEE7AADF55(iVar13) > 5f)
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
									{
										iVar31 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
									}
									if (unk_0x80FF6C016CDB0FAF(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xF3A639BEE7AADF55(iVar13) > 5f)
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
					{
						iVar32 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
						if (unk_0xAE06B9E39EBDE049(iVar32))
						{
							if (func_66(iVar32, uParam0, 0))
							{
								if (func_77(iVar0, uParam0) || !unk_0xCE990E643CD9D0E5(uParam0->f_13, 27))
								{
									unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], iVar0);
									func_41(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xBE20AB8238688965(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_77(iVar0, uParam0))
							{
								if (unk_0x36FE6D3220816ADA(iVar32) == joaat("sentinel2"))
								{
									unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], 2);
								}
								func_76(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()) && !func_75(uParam0->f_17[iVar0], iParam10)) && !func_74(uParam0->f_17[iVar0], iParam10))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
							{
								if (((!unk_0xCED6B5226244381C(uParam0->f_17[iVar0]) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0])) && !unk_0x78CF477CE5326EB5(uParam0->f_17[iVar0])) && !unk_0x11B7C25143EE2F29(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x9B94F6169B0DAEFD(uParam0->f_17[iVar0]);
									}
									unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_40());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x578C4EF320340AF7();
								uParam0->f_1[iVar0] = func_46(uParam0->f_17[iVar0], 0, 0);
								unk_0x14C1B9C77E952C6F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_55(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
					{
						if (((func_52(uParam0->f_17[iVar0], 1) || func_75(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x80FF6C016CDB0FAF(iParam10, 0) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam10, 0)))
						{
							if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
							{
								unk_0x93370FA10F15BE44(&(uParam0->f_1[iVar0]));
								func_67(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_55(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
					{
						if (!unk_0xACBCFA3095C5A434(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x910DFF8E55ABB8EC(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xCE990E643CD9D0E5(uParam0->f_13, 11)) && !((bParam17 && unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam10, 0)))
							{
								if (unk_0x6E0C5E7AAF8B6214(uParam0->f_17[iVar0]))
								{
									if (!unk_0xE0B3BC41DDA88DF0(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_52(uParam0->f_17[iVar0], 1))
										{
											if (func_51(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x0AB756271BADC8DF(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
									{
										if ((((!unk_0x78CF477CE5326EB5(uParam0->f_17[iVar0]) && !unk_0xCED6B5226244381C(uParam0->f_17[iVar0])) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0])) && !unk_0x11B7C25143EE2F29(uParam0->f_17[iVar0])) && !unk_0x0922C2E075A5F18C(iParam10))
										{
											unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_83(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x78CF477CE5326EB5(uParam0->f_17[iVar0]) && !unk_0x78CF477CE5326EB5(unk_0x9B0761B4C3EB8BC7())) && !func_73(uParam0->f_17[iVar0], 2f)) && !unk_0xCED6B5226244381C(uParam0->f_17[iVar0])) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0])) && !unk_0x0922C2E075A5F18C(iParam10))
										{
											unk_0x4E65320BC9AD521C(uParam0->f_17[iVar0], 1);
											if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 10))
											{
												unk_0x94D1A5176CE89859(uParam0->f_17[iVar0], 1f);
											}
											unk_0xC584E49FC3559A86(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xB281D47677468287(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_46(uParam0->f_17[iVar0], 0, 0);
										unk_0x14C1B9C77E952C6F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
							{
								if (func_81(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0xCED6B5226244381C(uParam0->f_17[iVar0]) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x9B94F6169B0DAEFD(uParam0->f_17[iVar0]);
										}
										unk_0x4E65320BC9AD521C(uParam0->f_17[iVar0], 0);
										unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_40());
									}
								}
							}
						}
						else if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iParam10))
						{
							if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()))
							{
								if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 21))
								{
									unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_40());
								}
							}
							else if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 21))
							{
								unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
								unk_0xBE20AB8238688965(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_40()) && !unk_0x0922C2E075A5F18C(iParam10))
						{
							unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(uParam0->f_1[iVar0]));
					func_67(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_62(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
						{
							if (func_78(uParam0->f_17[iVar0]) || unk_0x910DFF8E55ABB8EC(uParam0->f_17[iVar0], unk_0x9B0761B4C3EB8BC7(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
					{
						if (!unk_0x910DFF8E55ABB8EC(uParam0->f_17[iVar0], unk_0x9B0761B4C3EB8BC7(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_78(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x578C4EF320340AF7();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 5))
							{
								func_59(uParam0, sParam7, 0);
								unk_0xBE20AB8238688965(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_72(iVar0, uParam0))
									{
										if (!unk_0x211E6DB3335430B4(uVar19[iVar0]))
										{
											if (!unk_0xF005CCA4263DF67F(uVar19[iVar0], ""))
											{
												func_70(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_69(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_72(iVar0, uParam0))
										{
											func_59(uParam0, uVar15[iVar0], 0);
											func_69(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xD2459066EA58CE43(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(uParam0->f_1[iVar0]));
					func_67(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_67("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 16);
			break;
	}
}

void func_70(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x211E6DB3335430B4(sParam1))
		{
			if (!unk_0xF005CCA4263DF67F(sParam1, ""))
			{
				func_71(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x578C4EF320340AF7();
}

void func_71(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x6A826E35A3096ED0(uParam1);
	unk_0x823A1D66E6A4D141(iParam2, 1);
}

int func_72(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 14);
		
		case 1:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 15);
		
		case 2:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_73(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(iParam0, 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, 0);
		if (!unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0xF3A639BEE7AADF55(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (!unk_0xFE6F151E15A69B3A(iParam0, func_40()))
		{
			iVar0 = unk_0xCE078AEFF5C495DE(iParam0);
			if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
			{
				if (unk_0x910DFF8E55ABB8EC(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
			{
				if (unk_0xACBCFA3095C5A434(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 19);
			break;
	}
}

int func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 17);
		
		case 1:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 18);
		
		case 2:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
			{
				iVar1 = unk_0xB0919F8F7C8097BD(iParam0);
				if (unk_0x80FF6C016CDB0FAF(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x910DFF8E55ABB8EC(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("bus") || unk_0x36FE6D3220816ADA(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x10D3F7E169A49C44(iParam0, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x10D3F7E169A49C44(iParam0, 1, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x10D3F7E169A49C44(iParam0, 2, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_80(var uParam0)
{
	int iVar0;
	
	if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_66(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam1))
	{
		if (unk_0x6E0C5E7AAF8B6214(iParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam1, 0);
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
				{
					if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iVar0))
					{
						if (func_80(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (func_66(iVar0, uParam0, 0))
					{
						if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
						{
							if (func_82(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	float fVar0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar0 = unk_0xF3A639BEE7AADF55(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
		{
			iVar0 = unk_0xB0919F8F7C8097BD(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		iVar0 = unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7());
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			iVar1 = unk_0x10D3F7E169A49C44(iVar0, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
			{
				if (iVar1 != unk_0x9B0761B4C3EB8BC7())
				{
					if (unk_0x1758275D343D5BA3(iVar1))
					{
						if (!unk_0x71CFA8031A5AE4FB(iVar1, unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xA785552633ED203B(iVar1, unk_0x9B0761B4C3EB8BC7(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_85(var uParam0)
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 25))
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_17[iVar0]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					unk_0x694113444F21E39F(uParam0->f_17[iVar0], 32, 0);
					unk_0x694113444F21E39F(uParam0->f_17[iVar0], 305, 1);
					unk_0x694113444F21E39F(uParam0->f_17[iVar0], 268, 1);
					unk_0xB281D47677468287(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xBE20AB8238688965(&(uParam0->f_13), 25);
	}
}

void func_86(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAE06B9E39EBDE049(uParam0->f_17[iVar0]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
			{
				if (unk_0x6E0C5E7AAF8B6214(uParam0->f_17[iVar0]))
				{
					unk_0x83BBFE5E96C64FBA(uParam0->f_17[iVar0], 0);
					unk_0x59DF7D162BF6D02E(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x83BBFE5E96C64FBA(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x59DF7D162BF6D02E(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
	}
}

var func_87()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_88()
{
	struct<3> Var0;
	
	return Var0;
}

void func_89(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_61725)
	{
	}
	Global_61725 = 0;
	if (bParam0)
	{
		Global_61726 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73812)
		{
			if (Global_61942[Global_73813[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73813[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73812)
		{
			if (Global_73813[iVar0 /*9*/] > 0)
			{
				if (Global_73813[iVar0 /*9*/] == iParam1)
				{
					Global_73813[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_61727 = iParam0;
	if (!Global_61725)
	{
		Global_61725 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73812)
		{
			if (Global_73813[iVar0 /*9*/] == iParam0)
			{
				Global_73813[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_91(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xAE06B9E39EBDE049(Global_102423.f_4))
	{
		if (unk_0x80FF6C016CDB0FAF(Global_102423.f_4, 0))
		{
			if (func_143(24) != Global_102423.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_140(unk_0x3E4D3CCC220BDFB1(Global_102423.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_92(Global_102423.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_92(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[25]) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[25], 0))
			{
				if (Global_75654.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x7A3E3E24F50F2AAB(iParam0) || unk_0x36FE6D3220816ADA(iParam0) == joaat("bus")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_139(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_134(iParam0, &Var0);
		if (func_133(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
			uParam4 = unk_0xEF7858F25585F853(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) != joaat("vehicle_gen_controller"))
			{
				Global_76642 = unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253());
			}
		}
		func_126(iParam5, &Var0, Param1, uParam4, func_132(iParam0));
		func_93(iParam5, iParam0, 0);
	}
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_123(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 12) && !unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75654.f_555[0 /*21*/].f_4 != unk_0x36FE6D3220816ADA(iParam1))
		{
			return;
		}
	}
	if (Global_76561 != -1 && Global_76561 != iParam0)
	{
		return;
	}
	if (unk_0xAE06B9E39EBDE049(iParam1))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
		{
			if (!unk_0x1758275D343D5BA3(iParam1))
			{
				unk_0x4F3C4F457D44BB0F(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_111858.f_32745.f_4801 = func_112();
			}
			if (iParam1 != Global_75654.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_143(iParam0);
					if ((unk_0xAE06B9E39EBDE049(iVar0) && unk_0x80FF6C016CDB0FAF(iVar0, 0)) && iParam1 != iVar0)
					{
						func_94(iVar0, 145);
					}
				}
				Global_76560 = iParam1;
				Global_76561 = iParam0;
				Global_76562 = iParam2;
			}
		}
	}
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_95(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, -1, 0);
		if (!unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar0 = unk_0x37022B7FE1589189(iParam0, -1);
		}
		if (unk_0xAE06B9E39EBDE049(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iVar0))
		{
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111858.f_2359.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111858.f_32745.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111858.f_32745.f_5590 = iParam1;
	Global_76559 = iParam0;
	Global_111858.f_32745.f_5588 = 1;
	func_134(iParam0, &(Global_111858.f_32745.f_5510));
}

int func_95(int iParam0)
{
	if ((((((((((!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0)) || func_110(iParam0, 0, 0)) || func_110(iParam0, 1, 0)) || func_110(iParam0, 2, 0)) || func_132(iParam0) != 145) || func_109(iParam0)) || func_108(iParam0)) || func_107(iParam0)) || func_106(iParam0)) || !func_96(unk_0x36FE6D3220816ADA(iParam0)))
	{
		if (func_108(iParam0))
		{
		}
		if (func_108(iParam0))
		{
		}
		if (func_110(iParam0, 0, 0))
		{
		}
		if (func_110(iParam0, 1, 0))
		{
		}
		if (func_110(iParam0, 2, 0))
		{
		}
		if (func_132(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_96(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_97(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x5874D60325749F00(iParam0) || unk_0xF9C3E2B9AA9E2294(iParam0)) || unk_0x442D6659150AF4B3(iParam0)) || unk_0xCA6AF782C906AC86(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x653AAFF7E08B7D39(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x25DDB354A40FFCDB()) || (iParam0 == joaat("buffalo3") && !unk_0x25DDB354A40FFCDB())) || (iParam0 == joaat("gauntlet2") && !unk_0x25DDB354A40FFCDB())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x25DDB354A40FFCDB()))
	{
		if (!func_105())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81BDFC133086F533())
		{
			if (unk_0xA2F4B5E51CE10D19(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x14AC70FD8926649E(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_104() && !func_103()) && !func_102()) && !func_101()) && !func_105())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xC6C08C02733D02C8() || unk_0xF8EDFF98A9C94C74()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_102())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_100(iParam0))
		{
			return 0;
		}
	}
	if (!func_98(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_98(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_99())
	{
		return 1;
	}
	unk_0x69DA2BD216554CB9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x18A09013B66E9BB4(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5A002C4821A13338();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_101()
{
	return 0;
}

int func_102()
{
	return 1;
}

int func_103()
{
	return 1;
}

int func_104()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	var uVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				unk_0xBE20AB8238688965(&uVar0, 2);
				unk_0xBE20AB8238688965(&uVar0, 4);
				unk_0xBE20AB8238688965(&uVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					uVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&uVar0, 0);
					unk_0xB2B72C9FCE371E70(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	sVar1 = unk_0x6984AA4EC2FF9734(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF005CCA4263DF67F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_97(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96316[iVar0]))
		{
			if (Global_96316[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar0], 0))
			{
				if (Global_96286[iVar0] == iParam0 && unk_0x36FE6D3220816ADA(Global_96286[iVar0]) == unk_0x36FE6D3220816ADA(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[24]))
	{
		if (iParam0 == Global_75654.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75654.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_111(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iVar9], 0))
		{
			if (unk_0x1362F9BE8812B12C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_111(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_112()
{
	var uVar0;
	
	func_122(&uVar0, unk_0x1D3A3697182AD8B3());
	func_121(&uVar0, unk_0x81F2E25F8C019191());
	func_120(&uVar0, unk_0x1F596C965B00E290());
	func_115(&uVar0, unk_0x371CFD525753F70C());
	func_114(&uVar0, unk_0xF225116F449A5CC6());
	func_113(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_113(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119(*uParam0);
	iVar1 = func_117(*uParam0);
	if (iParam1 < 1 || iParam1 > func_116(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_116(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
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
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_117(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_118(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_118(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_119(var uParam0)
{
	return uParam0 & 15;
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_121(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_122(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_124(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_124(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_124(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_124(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_124(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_124(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_124(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_124(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_124(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_105())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_105())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111858.f_32745.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_133(Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111858.f_32745.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111858.f_32745.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 19))
	{
		if (!func_133(Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 20))
	{
		if (!func_133(Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_124(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_24(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_125(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_125(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111858.f_9081.f_99.f_58[128] && !Global_111858.f_9081.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111858.f_9081.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111858.f_9081.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_126(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_123(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 10))
		{
			func_131(iParam0);
			func_130(uParam1, &(Global_111858.f_32745.f_69[Global_75654.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 11))
			{
				Global_111858.f_32745.f_1864[Global_75654.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_111858.f_32745.f_1934[Global_75654.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_111858.f_32745.f_1864[Global_75654.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111858.f_32745.f_1934[Global_75654.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_127(iParam0, 1);
		}
	}
}

void func_127(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_129(iParam0, 0))
		{
			func_128(iParam0, 1, 0);
			func_128(iParam0, 2, 0);
			func_128(iParam0, 3, 0);
			func_128(iParam0, 4, 0);
			func_128(iParam0, 0, 1);
			Global_75654[iParam0] = 1;
		}
	}
	else
	{
		func_128(iParam0, 0, 0);
	}
}

void func_128(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_32745[iParam0]), iParam1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_32745[iParam0]), iParam1);
	}
}

bool func_129(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_111858.f_32745[iParam0], iParam1);
}

void func_130(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_131(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_123(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
		{
			unk_0x4F3C4F457D44BB0F(Global_75654.f_139[iParam0], 1, 1);
			unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
			Global_75654.f_139[iParam0] = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 13))
		{
			func_127(iParam0, 0);
		}
	}
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 145;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			if (Global_96286[iVar0] == iParam0)
			{
				return Global_96296[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_133(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_134(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		func_138(uParam1);
		uParam1->f_66 = unk_0x36FE6D3220816ADA(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x6984AA4EC2FF9734(iParam0), 16);
		*uParam1 = unk_0x999BFF5D72C9701A(iParam0);
		unk_0x255499E0D27A1780(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7E545979AF9FCA10(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA681FAA57125DB66(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA3DDFC0A00C22ED3(iParam0);
		uParam1->f_67 = unk_0x16628A9DDE9875CC(iParam0);
		uParam1->f_69 = unk_0x74BE6BA308A7B62F(iParam0);
		uParam1->f_70 = unk_0xB9FAC5FDE6272EE5(iParam0);
		unk_0x7984C9503C733252(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEC53ED0C29BA8483(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8CC64DFDB61877EA(iParam0, 2))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 28);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 3))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 29);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 30);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 1))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_137(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			uParam1->f_68 = unk_0x4B3B9AC15296615C(iParam0);
		}
		if (unk_0xF9C3E2B9AA9E2294(uParam1->f_66))
		{
			if (unk_0xCA87E17B66918D00(iParam0))
			{
				switch (unk_0x38EAEB8EE9D858CF(iParam0))
				{
					case 3:
					case 0:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xBE20AB8238688965(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x5EF4A66EF7630445(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 9);
		}
		if (unk_0x93846124A64E7DEC(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 10);
		}
		if (unk_0xB41668EFA7045047(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 13);
			unk_0x2CB46B57EB6A7F5D(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3FE1C23F43A4E29E(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 12);
		}
		func_136(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xAACD889100BCBCFA(iParam0, iVar0 + 1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_135(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x62B133F8490E0B2E(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 11);
		}
		if (unk_0x871819940BD2E434(iParam0, "IgnoredByQuickSave") && unk_0x84E72BB19D4FDE12(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 27);
		}
	}
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_136(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				switch (unk_0x0523E2B914021FFF(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x7F8B14CBFB9813E5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_138(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_139(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_131(iParam0);
	func_127(iParam0, 0);
}

int func_140(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_141(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_141(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93993[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93993[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_142(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x272784C60C397DB6(Param0, Global_93993[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_142(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iParam0], 0);
}

int func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75654.f_139[iParam0];
}

void func_144()
{
	bool bVar0;
	int iVar1;
	
	switch (iLocal_340)
	{
		case 0:
			if (!unk_0xDABD547F0DF2906C() && !unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0xAE06B9E39EBDE049(Local_66[iVar1 /*13*/]) && !unk_0x5AEB5DDFFAD43CA5(Local_66[iVar1 /*13*/]))
					{
						if (unk_0xF83D0A2EC884A4DD(Local_66[iVar1 /*13*/], unk_0x9B0761B4C3EB8BC7()))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (bVar0)
				{
					unk_0x3BAAEE5C832B8645(unk_0x460153A63B9477BC(), 0.5f, 1, 0);
					unk_0x82F70FCC0DE35345(20000);
					if (unk_0xC1F43F8D0D5EB664(0))
					{
						func_148("JHP1B_HLP_SPCL1_KM", 10000);
					}
					else
					{
						func_148("JHP1B_HLP_SPCL1", 10000);
					}
					iLocal_340++;
				}
			}
			break;
		
		case 1:
			if (!unk_0xDABD547F0DF2906C())
			{
				func_148("JHP1B_HLP_SPCL2", 10000);
				iLocal_340++;
			}
			break;
	}
	switch (iLocal_1353)
	{
		case 0:
			if (unk_0x03DB5C6AABF8DA46())
			{
				unk_0xFD45D90342D2A0CD(800);
			}
			if (func_147(Local_52[0 /*2*/]) && !unk_0x8F678487EEBD8CE4(Local_52[0 /*2*/].f_1))
			{
				if (unk_0x43ED7EAE11FD94FF(Local_52[0 /*2*/]) != 0)
				{
					Local_52[0 /*2*/].f_1 = unk_0x43ED7EAE11FD94FF(Local_52[0 /*2*/]);
				}
				else
				{
					Local_52[0 /*2*/].f_1 = func_146(Local_52[0 /*2*/], 0, 0);
				}
			}
			func_60("JHP1B_STEAL_VAN", 7500, 1);
			unk_0x21723EF7B2FCC4CC("JHP1B_START");
			iLocal_338 = 1;
			iLocal_333 = 1;
			iLocal_1353++;
			break;
		
		case 1:
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/], 0))
			{
				if (unk_0x8F678487EEBD8CE4(Local_52[0 /*2*/].f_1))
				{
					unk_0x73CC8164D4BBE5DA(1);
					unk_0x93370FA10F15BE44(&(Local_52[0 /*2*/].f_1));
					unk_0x73CC8164D4BBE5DA(0);
				}
				func_145(1);
				iLocal_1353 = 0;
			}
			break;
	}
}

int func_145(int iParam0)
{
	if (iLocal_1351 == 0)
	{
		iLocal_1354 = iParam0;
		iLocal_1351 = 1;
		return 1;
	}
	return 0;
}

int func_146(int iParam0, bool bParam1, bool bParam2)
{
	return func_47(iParam0, !bParam1, bParam2);
}

int func_147(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x20F7576FDB52E2B0(iParam0))
		{
			if (unk_0x80FF6C016CDB0FAF(unk_0xEA90A5DC55A2F652(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA1914E72A0EB31D0(iParam0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9048E8838E822F21(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_148(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

void func_149()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (unk_0xAE06B9E39EBDE049(Local_57[iVar0 /*2*/]))
		{
			if (unk_0x5AEB5DDFFAD43CA5(Local_57[iVar0 /*2*/]))
			{
				func_176(&(Local_57[iVar0 /*2*/]), 1, 0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (unk_0xAE06B9E39EBDE049(Local_52[iVar0 /*2*/]))
		{
			if (!unk_0x80FF6C016CDB0FAF(Local_52[iVar0 /*2*/], 0))
			{
				if (Local_52[iVar0 /*2*/] == Local_52[0 /*2*/])
				{
					func_165(2);
				}
				func_164(&(Local_52[iVar0 /*2*/]));
			}
			else if (Local_52[iVar0 /*2*/] == Local_52[0 /*2*/])
			{
				if (func_163(&(Local_52[0 /*2*/])))
				{
					func_165(2);
					func_164(&(Local_52[iVar0 /*2*/]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (unk_0xAE06B9E39EBDE049(Local_66[iVar0 /*13*/]))
		{
			if (unk_0x5AEB5DDFFAD43CA5(Local_66[iVar0 /*13*/]))
			{
				if (unk_0x8F678487EEBD8CE4(Local_66[iVar0 /*13*/].f_1))
				{
					unk_0x93370FA10F15BE44(&(Local_66[iVar0 /*13*/].f_1));
				}
				if (Local_66[iVar0 /*13*/].f_11 == 0)
				{
					Local_66[iVar0 /*13*/].f_11 = 1;
				}
				func_176(&(Local_66[iVar0 /*13*/]), 1, 0, 1);
			}
			else if (!unk_0x47DBF174A0CB9D55(Local_66[iVar0 /*13*/], 0))
			{
				unk_0x694113444F21E39F(Local_66[iVar0 /*13*/], 330, 0);
			}
			else
			{
				unk_0x694113444F21E39F(Local_66[iVar0 /*13*/], 330, 1);
			}
		}
		iVar0++;
	}
	unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
	if (func_147(Local_52[0 /*2*/]))
	{
		if (!iLocal_331)
		{
			if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/], 1))
				{
					unk_0x2D806C94B9A84B20("SCRIPTED_SCANNER_REPORT_JSH_PREP_1B_01", 0f);
					iLocal_331 = 1;
				}
			}
		}
		bVar1 = true;
		iVar2 = 0;
		while (iVar2 <= (4 - 1))
		{
			if (func_147(Local_66[iVar2 /*13*/]))
			{
				bVar1 = false;
			}
			iVar2++;
		}
		if (iLocal_330)
		{
			if ((unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/], 0) || func_159(Local_52[0 /*2*/])) || bVar1)
			{
				unk_0x40ECEB892E6BDDDB(1, 1);
				unk_0x40ECEB892E6BDDDB(8, 1);
				unk_0x40ECEB892E6BDDDB(2, 1);
				unk_0x40ECEB892E6BDDDB(6, 1);
				unk_0x40ECEB892E6BDDDB(4, 1);
				unk_0x40ECEB892E6BDDDB(12, 1);
				unk_0x40ECEB892E6BDDDB(5, 1);
				iLocal_330 = 0;
				if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 3, 0);
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
				}
			}
		}
		if (bVar1)
		{
			if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/], 0))
			{
				if (!unk_0x71CFA8031A5AE4FB(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/]))
				{
					unk_0xA785552633ED203B(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/], -1, 2048, 1);
				}
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			func_158(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), -1);
			func_157(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), -1);
		}
		else
		{
			func_158(0, -1);
			func_157(0, -1);
		}
		func_158(unk_0x9B0761B4C3EB8BC7(), -1);
	}
	func_156();
	func_150();
}

void func_150()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	switch (iLocal_333)
	{
		case 0:
			iLocal_333 = 1;
			break;
		
		case 1:
			if (!iLocal_332)
			{
				func_155();
				func_153();
			}
			else
			{
				iLocal_333 = 2;
				iLocal_334 = 0;
			}
			break;
		
		case 2:
			switch (iLocal_334)
			{
				case 0:
					unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 1, 0);
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
					iVar0 = 0;
					while (iVar0 <= (4 - 1))
					{
						if (func_147(Local_66[iVar0 /*13*/]) && func_147(unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xCCC12894266ADDBB(Local_66[iVar0 /*13*/], 0);
							unk_0x694113444F21E39F(Local_66[iVar0 /*13*/], 184, 0);
							if (iVar0 != 0)
							{
								switch (iVar0)
								{
									case 1:
										iVar1 = 300;
										break;
									
									case 2:
										iVar1 = 3000;
										break;
									
									case 3:
										iVar1 = 3300;
										break;
								}
								if (unk_0x47DBF174A0CB9D55(Local_66[iVar0 /*13*/], 0))
								{
									unk_0x0AB756271BADC8DF(Local_66[iVar0 /*13*/], iVar1, 65536);
								}
							}
						}
						iVar0++;
					}
					iLocal_334 = 1;
					break;
				
				case 1:
					if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
					{
						bVar2 = true;
						iVar0 = 0;
						while (iVar0 <= (4 - 1))
						{
							if (func_147(Local_66[iVar0 /*13*/]) && func_152(Local_52[0 /*2*/], Local_66[iVar0 /*13*/], 1) < 100f)
							{
								switch (iVar0)
								{
									case 0:
										iVar3 = -1;
										break;
									
									case 1:
										iVar3 = 0;
										break;
									
									case 2:
										iVar3 = 1;
										break;
									
									case 3:
										iVar3 = 2;
										break;
								}
								if (!unk_0xE0B3BC41DDA88DF0(Local_66[iVar0 /*13*/], Local_52[0 /*2*/], 1))
								{
									if (!func_151(Local_66[iVar0 /*13*/], -1794415470, 1))
									{
										unk_0xC584E49FC3559A86(Local_66[iVar0 /*13*/], Local_52[0 /*2*/], -1, iVar3, 2f, 1, 0);
									}
								}
								else
								{
									unk_0x9B94F6169B0DAEFD(Local_66[iVar0 /*13*/]);
								}
								bVar2 = false;
							}
							else
							{
								func_176(&(Local_66[0 /*13*/]), 1, 0, 1);
							}
							iVar0++;
						}
						if (bVar2)
						{
							iLocal_333 = 3;
						}
						else
						{
							iLocal_332 = 0;
							iLocal_333 = 1;
							iLocal_335 = 2;
						}
					}
					break;
			}
			break;
	}
}

int func_151(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x16BC17A8EDC701A2(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

float func_152(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	if (!unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Var3, iParam2);
}

void func_153()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((func_147(Local_52[0 /*2*/]) && func_147(Local_66[0 /*13*/])) && func_147(Local_66[3 /*13*/]))
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(Local_52[0 /*2*/], 0f, 10f, 5.5f) };
		Var3 = { unk_0x7EC595B99EA7C4B1(Local_52[0 /*2*/], 0f, 0f, -6f) };
		if (!unk_0xDCD47F31CE777FDC(Local_52[0 /*2*/]))
		{
			unk_0x826DEE4D831672ED(Local_52[0 /*2*/], 1);
			unk_0x8777F28BE786D09D(Local_52[0 /*2*/], 1);
		}
		switch (iLocal_335)
		{
			case 0:
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, 5f, 0, 1, 0))
				{
					if ((unk_0x578C4EF320340AF7() - iLocal_336) > 1000)
					{
						unk_0x9B94F6169B0DAEFD(Local_66[0 /*13*/]);
						unk_0xD4C86DEC93F19FB0(Local_52[0 /*2*/], 4f, 1, 0);
						unk_0x9DC06E2A59C5AEBB(&uLocal_309);
						if (unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0))
						{
							unk_0x0AB756271BADC8DF(0, 0, 65536);
						}
						unk_0x0197C7AF76B72D09(0, unk_0x9B0761B4C3EB8BC7(), unk_0x9B0761B4C3EB8BC7(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
						unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), -1, 0);
						unk_0x19F29730874AD6F1(uLocal_309);
						unk_0x9B6EC2CECE1010EF(Local_66[3 /*13*/], uLocal_309);
						unk_0x4F83FEE4454169D4(&uLocal_309);
						iLocal_335 = 1;
					}
				}
				else
				{
					if (unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0) && unk_0x47DBF174A0CB9D55(Local_66[0 /*13*/], 0))
					{
						if (!unk_0x78D7B3DB296FFC27(Local_52[0 /*2*/]))
						{
							unk_0x7E0697FD4A69CB28(Local_66[0 /*13*/], Local_52[0 /*2*/], &cLocal_314, 786469, 0, 24, -1, 25f, 0, 1073741824);
						}
						unk_0x8855035B721F0D3D(Local_52[0 /*2*/], 1);
						unk_0x826DEE4D831672ED(Local_52[0 /*2*/], 0);
						unk_0x1D44873D7CFF57B7(Local_52[0 /*2*/], 1);
					}
					iLocal_336 = unk_0x578C4EF320340AF7();
				}
				break;
			
			case 1:
				switch (iLocal_337)
				{
					case 0:
						if (!unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0))
						{
							func_33(&uLocal_119, 1, Local_66[3 /*13*/], "SWAT1", 0, 1);
							if (func_154(&uLocal_119, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
							{
								iLocal_336 = unk_0x578C4EF320340AF7();
								iLocal_337++;
							}
						}
						break;
					
					case 1:
						if ((unk_0x578C4EF320340AF7() - iLocal_336) > 5000 && !func_9())
						{
							if (!unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0))
							{
								func_33(&uLocal_119, 1, Local_66[3 /*13*/], "SWAT1", 0, 1);
								if (func_154(&uLocal_119, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
								{
									iLocal_336 = unk_0x578C4EF320340AF7();
									iLocal_337++;
								}
							}
						}
						break;
					
					case 2:
						if ((unk_0x578C4EF320340AF7() - iLocal_336) > 5000 && !func_9())
						{
							if (!unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0))
							{
								func_33(&uLocal_119, 1, Local_66[3 /*13*/], "SWAT1", 0, 1);
								if (func_154(&uLocal_119, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
								{
									iLocal_336 = unk_0x578C4EF320340AF7();
									iLocal_337++;
								}
							}
						}
						break;
					
					case 3:
						if ((unk_0x578C4EF320340AF7() - iLocal_336) > 8000 && !func_9())
						{
							if (!unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0))
							{
								func_33(&uLocal_119, 1, Local_66[3 /*13*/], "SWAT1", 0, 1);
								if (func_154(&uLocal_119, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
								{
									unk_0x9DC06E2A59C5AEBB(&uLocal_309);
									unk_0x0197C7AF76B72D09(0, unk_0x9B0761B4C3EB8BC7(), unk_0x9B0761B4C3EB8BC7(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
									unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), -1, 0);
									unk_0x19F29730874AD6F1(uLocal_309);
									unk_0x9B6EC2CECE1010EF(Local_66[3 /*13*/], uLocal_309);
									unk_0x4F83FEE4454169D4(&uLocal_309);
									iLocal_336 = unk_0x578C4EF320340AF7();
									iLocal_337++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, 5f, 0, 1, 0))
				{
					if (unk_0x16BC17A8EDC701A2(Local_66[3 /*13*/], 1630799643) != 1)
					{
						unk_0xDEA135D03FA041A8(Local_66[3 /*13*/], unk_0x9B0761B4C3EB8BC7(), -1, 0);
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0))
						{
							unk_0xC584E49FC3559A86(Local_66[3 /*13*/], Local_52[0 /*2*/], -1, 2, 2f, 1, 0);
						}
						iLocal_335 = 2;
					}
				}
				else
				{
					if (iLocal_337 == 4)
					{
						if ((unk_0x578C4EF320340AF7() - iLocal_336) > 8000 && !func_9())
						{
							unk_0xA79461EDE020EDEB(Local_66[3 /*13*/], unk_0x9B0761B4C3EB8BC7());
							iLocal_332 = 1;
						}
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, 5f, 0, 1, 0))
				{
					iLocal_335 = 0;
				}
				else if ((((!func_147(Local_66[0 /*13*/]) || unk_0x47DBF174A0CB9D55(Local_66[0 /*13*/], 0)) && (!func_147(Local_66[1 /*13*/]) || unk_0x47DBF174A0CB9D55(Local_66[1 /*13*/], 0))) && (!func_147(Local_66[2 /*13*/]) || unk_0x47DBF174A0CB9D55(Local_66[2 /*13*/], 0))) && (!func_147(Local_66[3 /*13*/]) || unk_0x47DBF174A0CB9D55(Local_66[3 /*13*/], 0)))
				{
					unk_0x7E0697FD4A69CB28(Local_66[0 /*13*/], Local_52[0 /*2*/], &cLocal_314, 786469, 0, 24, -1, 25f, 0, 1073741824);
					iLocal_335 = 0;
				}
				break;
			}
	}
}

bool func_154(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

void func_155()
{
	int iVar0;
	
	unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iLocal_310, 1);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (func_147(Local_66[iVar0 /*13*/]))
		{
			if ((((((((unk_0xF83D0A2EC884A4DD(Local_66[iVar0 /*13*/], unk_0x9B0761B4C3EB8BC7()) || unk_0x42A04E707DE50816(Local_66[iVar0 /*13*/])) || unk_0x02275D26F97B0510(Local_66[iVar0 /*13*/], 0)) || unk_0xD2E9CCDC3186A6E0(Local_66[iVar0 /*13*/])) || unk_0xC0736D5851285045(Local_66[iVar0 /*13*/])) || unk_0xCDF860E56BBCC6B4(Local_66[iVar0 /*13*/], unk_0x9B0761B4C3EB8BC7(), 1)) || unk_0x8ACC62181BFB4F25(Local_66[iVar0 /*13*/], 124)) || unk_0x8ACC62181BFB4F25(Local_66[iVar0 /*13*/], 126)) || unk_0x8ACC62181BFB4F25(Local_66[iVar0 /*13*/], 125))
			{
				iLocal_332 = 1;
			}
			else if (unk_0x67E2125E6EC33DB7(Local_66[iVar0 /*13*/], unk_0x9B0761B4C3EB8BC7()) && (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), Local_66[iVar0 /*13*/]) || unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), Local_66[iVar0 /*13*/])))
			{
				if (unk_0x828F0C0C58236A3C(iLocal_310) != joaat("GROUP_MELEE") && iLocal_310 != joaat("weapon_unarmed"))
				{
					if ((unk_0x578C4EF320340AF7() - Local_66[iVar0 /*13*/].f_10) > 800)
					{
						iLocal_332 = 1;
					}
				}
			}
			else
			{
				Local_66[iVar0 /*13*/].f_10 = unk_0x578C4EF320340AF7();
			}
		}
		iVar0++;
	}
	if (func_147(Local_52[0 /*2*/]))
	{
		if ((unk_0xCDF860E56BBCC6B4(Local_52[0 /*2*/], unk_0x9B0761B4C3EB8BC7(), 0) || unk_0xBA605F790B1E923B(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/], 0, -1)) || unk_0x424918D1615FDC73(unk_0x9B0761B4C3EB8BC7(), Local_52[0 /*2*/]))
		{
			iLocal_332 = 1;
		}
		else if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck")) || unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck2")))
			{
				if (unk_0xBA9474B1995C6AAD(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), Local_52[0 /*2*/]))
				{
					iLocal_332 = 1;
				}
			}
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0xF3A639BEE7AADF55(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) > 7.5f)
			{
				if (unk_0xCDF860E56BBCC6B4(Local_52[0 /*2*/], unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 1))
				{
					iLocal_332 = 1;
				}
			}
			else
			{
				unk_0xBB7976F6FB9C9DD2(Local_52[0 /*2*/]);
			}
		}
	}
	else
	{
		iLocal_332 = 1;
	}
}

void func_156()
{
	if (func_147(Local_52[0 /*2*/]) && func_147(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x1037B9D45CE6B788(Local_52[0 /*2*/], 457.5762f, -1014.587f, 23f, 427.6368f, -1014.974f, 33f, 27f, 0, 1, 0))
		{
			if (func_147(Local_66[0 /*13*/]))
			{
				if (unk_0xE0B3BC41DDA88DF0(Local_66[0 /*13*/], Local_52[0 /*2*/], 0))
				{
					func_165(4);
				}
			}
		}
	}
	if (func_147(Local_52[0 /*2*/]) && func_147(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(Local_52[0 /*2*/], 1), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 1) > 700f)
		{
			func_165(3);
		}
		else if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(Local_52[0 /*2*/], 1), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 1) > 600f)
		{
			if (!iLocal_313)
			{
				if (iLocal_333 == 1)
				{
					func_60("JHP1B_WARN_ESC", 7500, 1);
				}
				else
				{
					func_60("JHP1B_WARN_LVE", 7500, 1);
				}
				iLocal_313 = 1;
			}
		}
		else
		{
			iLocal_313 = 0;
		}
	}
}

void func_157(int iParam0, int iParam1)
{
	Global_61728 = iParam0;
	Global_61729 = iParam1;
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_61730 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73812)
	{
		if (iParam1 == -1 || Global_73813[iVar0 /*9*/] == iParam1)
		{
			if (Global_73813[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73813[iVar0 /*9*/].f_6 = iParam0;
				Global_73813[iVar0 /*9*/].f_7 = 1;
				Global_73813[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_162(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) && func_160(uParam0))
	{
		iVar0 = unk_0xA5D3CD332CD10EE9();
		if (func_160(iVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0xBA9474B1995C6AAD(iVar0, uParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	if (func_161(uParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(uParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if (func_161(iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_163(var uParam0)
{
	if (unk_0x80FF6C016CDB0FAF(*uParam0, 0))
	{
		if (((unk_0xBCB2BD5C2E502335(*uParam0, 0, 7000) || unk_0xBCB2BD5C2E502335(*uParam0, 3, 30000)) || unk_0xBCB2BD5C2E502335(*uParam0, 2, 30000)) || unk_0xBCB2BD5C2E502335(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_164(var uParam0)
{
	if (unk_0xAE06B9E39EBDE049(*uParam0))
	{
		unk_0xA59F96B50B97E63C(*uParam0, 0);
		if (unk_0x1758275D343D5BA3(*uParam0) && unk_0x1D2A3118784C0272(*uParam0, 1))
		{
			unk_0xE730EAF558C97567(uParam0);
		}
	}
}

void func_165(int iParam0)
{
	char* sVar0;
	
	unk_0x21723EF7B2FCC4CC("JHP1B_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 2:
			sVar0 = "JHP1B_VAN_DEAD";
			break;
		
		case 3:
			sVar0 = "JHP1B_ABAN";
			break;
		
		case 4:
			sVar0 = "JHP1B_STAT";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_167(sVar0);
	while (!func_166())
	{
		SYSTEM::WAIT(0);
	}
	func_547();
	unk_0xD39E529EBE5DB04F();
}

int func_166()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98955 == 7 || Global_98955 == 8)
	{
		return 1;
	}
	return 0;
}

void func_167(char* sParam0)
{
	func_175(sParam0);
	func_168(0);
}

void func_168(int iParam0)
{
	int iVar0;
	
	if (Global_111858.f_9081 || func_8(0))
	{
		iVar0 = func_6();
		if (!func_169(iVar0))
		{
			return;
		}
		unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 5);
		Global_98991 = iParam0;
	}
}

int func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_174();
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0xD1A73960312CB3DD(5000);
	}
	iVar0 = Global_89707[iParam0 /*5*/];
	iVar1 = Global_77102.f_109[iVar0 /*4*/];
	func_173(iVar1, 1);
	unk_0xD2B5F38167F36F20(unk_0x460153A63B9477BC(), 0);
	unk_0xD25321EB4A616B93(unk_0x460153A63B9477BC(), 0);
	func_170(&(Global_111858.f_2359.f_539), iVar1);
	if (Global_93130 == Global_98992)
	{
		Global_111858.f_9081.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_89743[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0x0B5FDCC374F46B9E(0);
		}
	}
	Global_111858.f_9081.f_330[iVar1 /*6*/].f_2++;
	Global_93130 = Global_98992;
	if (iParam0 == -1)
	{
		if (Global_111858.f_9081)
		{
		}
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_89707[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_89707[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_170(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111858.f_18529[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_172(Global_111858.f_18529[iVar0], &Var2, &fVar5))
			{
				Global_111858.f_18529[iVar0] = 318;
				func_171(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96345[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_9 = 0f;
				Global_96345[iVar0 /*29*/].f_12 = 0f;
				Global_96345[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_10 = 0f;
				Global_96345[iVar0 /*29*/].f_13 = 0f;
				Global_96345[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_11 = 0f;
				Global_96345[iVar0 /*29*/].f_14 = 0f;
				Global_96345[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_26 = 0f;
				Global_96345[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_27 = 0f;
				Global_96345[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_171(var uParam0)
{
	*uParam0 = -15;
}

int func_172(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_172(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_172(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_173(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92940[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92940[iParam0 /*2*/] = 0;
	}
}

void func_174()
{
	Global_98990 = 1;
	if (unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1))
	{
		if (unk_0x7BCC91F3C1CF24E8(&Global_77065))
		{
			switch (func_22())
			{
				case 0:
					StringCopy(&Global_77065, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_77065, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_77065, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_77069, "", 16);
		}
		Global_98990 = 0;
	}
	else if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0x7BCC91F3C1CF24E8(&Global_77065))
		{
			switch (func_22())
			{
				case 0:
					StringCopy(&Global_77065, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_77065, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_77065, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_77069, "", 16);
		}
		Global_98990 = 0;
		unk_0xBE20AB8238688965(&(Global_98955.f_20), 25);
	}
}

void func_175(char* sParam0)
{
	if (!unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		if (unk_0x984EC4F65F95F1DF(sParam0) <= 16)
		{
			StringCopy(&Global_77065, sParam0, 16);
			StringCopy(&Global_77069, "", 16);
			if (unk_0xCF9EB097E33B913A())
			{
				unk_0xCC8906A635D85E47();
			}
		}
	}
}

void func_176(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xAE06B9E39EBDE049(*uParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(*uParam0))
		{
			unk_0xA5EAD2ACE2C8BBB2(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x0C095242BA4786C7(*uParam0);
			}
			unk_0xCBA6B2B569DCAFD8(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4E65320BC9AD521C(*uParam0, 0);
			}
		}
		unk_0x2481907DEE6B85EA(uParam0);
	}
}

void func_177()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_1356 == 1)
	{
		if (iLocal_1351 == 0)
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				if (!unk_0x5DA78AD6801A0523())
				{
					unk_0x1D40553EDD51A1B8(800);
				}
			}
			else
			{
				func_145(iLocal_1357);
			}
		}
		else if (iLocal_1351 == 3)
		{
			unk_0x3ED9330214992278(0, 0, 3000, 1, 0, 0);
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
			func_534();
			func_533(&uLocal_341);
			if (!func_532())
			{
				func_531(iLocal_1357, &Var0, &uVar3);
				unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Var0, 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), uVar3);
				unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), 1);
				func_529(&uLocal_341, Var0, 50f, 0);
			}
			func_526(iLocal_1352);
			while (!func_522(&uLocal_341))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1352)
			{
				case 0:
					func_477();
					break;
				
				case 2:
					func_472();
					break;
			}
			func_178();
			bLocal_1356 = false;
			if (!func_532())
			{
				unk_0xF990EDED7D25FB88();
			}
		}
	}
}

void func_178()
{
	if (func_147(unk_0x9B0761B4C3EB8BC7()))
	{
		func_33(&uLocal_119, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
		unk_0xA5EAD2ACE2C8BBB2(unk_0x9B0761B4C3EB8BC7(), 1, 1);
		func_179(unk_0x9B0761B4C3EB8BC7());
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, 0);
	}
	if (func_147(Local_52[0 /*2*/]))
	{
		uLocal_311 = unk_0x79CC07752E7432A1(joaat("prop_box_ammo03a"), unk_0x3E4D3CCC220BDFB1(Local_52[0 /*2*/], 1), 1, 1, 0);
		unk_0xF8A652CE310FFC53(uLocal_311, Local_52[0 /*2*/], 0, 0f, -1.77f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
		unk_0x7C4F70F41134C357(Local_52[0 /*2*/]);
	}
}

void func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_25(iParam0);
	if (func_24(iVar0))
	{
		if (!Global_98876[iVar0])
		{
			if (Global_111858.f_2359.f_539.f_2391[iVar0] != 0)
			{
				if (func_471(iParam0) != Global_111858.f_2359.f_539.f_2391[iVar0])
				{
					func_470(iVar0);
					Global_111858.f_2359.f_539.f_2391[iVar0] = func_471(iParam0);
				}
			}
		}
		func_280(iParam0, &(Global_111858.f_2359.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_98876[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!func_279(49))
				{
					iVar1 = func_265(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_180(func_26(0), 12, 16, 0, 0, 0, 0);
				}
				if (!func_279(44))
				{
					iVar1 = func_265(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_265(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_180(func_26(0), 3, 70, 1, 0, 0, 0);
					func_180(func_26(0), 3, 71, 1, 0, 0, 0);
					func_180(func_26(0), 3, 72, 1, 0, 0, 0);
					func_180(func_26(0), 3, 73, 1, 0, 0, 0);
					func_180(func_26(0), 3, 74, 1, 0, 0, 0);
					func_180(func_26(0), 3, 75, 1, 0, 0, 0);
					func_180(func_26(0), 4, 41, 1, 0, 0, 0);
					func_180(func_26(0), 4, 42, 1, 0, 0, 0);
					func_180(func_26(0), 4, 43, 1, 0, 0, 0);
					func_180(func_26(0), 4, 44, 1, 0, 0, 0);
					func_180(func_26(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_265(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				func_470(iVar0);
				func_280(iParam0, &(Global_111858.f_2359.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_98876[iVar0] = 1;
	}
}

void func_180(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	func_264(iParam0, iParam1, iParam2, bParam3);
	func_253(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		func_252(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		func_181(iParam0, iParam1, iParam2, 0);
	}
}

int func_181(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_76647[1 /*14*/] = { func_183(iParam0, iParam1, iParam2, -1) };
	if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0) && !unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_182(iParam1, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 2, Global_76647[1 /*14*/].f_1, 0, 1);
		}
		else
		{
			func_182(iParam1, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 2, Global_76647[1 /*14*/].f_1, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

struct<14> func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_251();
	if (iParam0 == joaat("player_zero"))
	{
		func_233(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_214(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_184(iParam1, iParam2);
	}
	return Global_76647[0 /*14*/];
}

void func_184(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_213(iParam1);
			break;
		
		case 2:
			func_212(iParam1);
			break;
		
		case 3:
			func_209(iParam1);
			break;
		
		case 4:
			func_208(iParam1);
			break;
		
		case 6:
			func_207(iParam1);
			break;
		
		case 5:
			func_206(iParam1);
			break;
		
		case 8:
			func_205(iParam1);
			break;
		
		case 9:
			func_204(iParam1);
			break;
		
		case 10:
			func_203(iParam1);
			break;
		
		case 1:
			func_202(iParam1);
			break;
		
		case 7:
			func_201(iParam1);
			break;
		
		case 11:
			func_200(iParam1);
			break;
		
		case 12:
			func_199(iParam1);
			break;
		
		case 13:
			func_198(iParam1);
			break;
		
		case 14:
			func_185(iParam1);
			break;
	}
}

void func_185(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_186(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_195(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x856D5567211886A2(sParam3) != unk_0x856D5567211886A2("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 5);
		}
		unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 6);
		if (func_28(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x4D0432E34C5996D9(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_193(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_193(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_193(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_193(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_193(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_193(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 5);
		if (func_182(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
		}
		if (func_182(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
		if (!func_182(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_28(14))
			{
				return;
			}
			uVar0 = func_189(func_192(iParam1, uParam0->f_2), Global_76644, 0);
			if (unk_0xCE990E643CD9D0E5(uVar0, uParam0->f_1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			}
			iVar0 = func_189(func_188(iParam1, uParam0->f_2), Global_76644, 0);
			if (unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
			}
			if (func_187(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_189(iVar1, Global_76644, 0);
				if (!unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
				{
					unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
	}
}

bool func_187(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_188(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_190(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_191();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_191()
{
	return Global_1312763;
}

int func_192(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_193(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_76644;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_194(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_189(iVar2, iVar0, 0);
		return unk_0xCE990E643CD9D0E5(uVar3, iVar1);
	}
	return 0;
}

bool func_194(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 11771;
	if ((bParam4 && Global_4268238) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4268238)
		{
			iVar0 = unk_0x52E48CCEEE1A6F7C(iParam0);
		}
		else
		{
			iVar0 = unk_0x9C343CBA5B2E3744(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x52E48CCEEE1A6F7C(iParam0);
	}
	else
	{
		iVar0 = unk_0x9C343CBA5B2E3744(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1760;
					break;
				
				case 1:
					*uParam2 = 1761;
					break;
				
				case 2:
					*uParam2 = 1762;
					break;
				
				case 3:
					*uParam2 = 1763;
					break;
				
				case 4:
					*uParam2 = 1764;
					break;
				
				case 5:
					*uParam2 = 1765;
					break;
				
				case 6:
					*uParam2 = 1772;
					break;
				
				case 7:
					*uParam2 = 1773;
					break;
				
				case 8:
					*uParam2 = 1774;
					break;
				
				case 9:
					*uParam2 = 1775;
					break;
				
				case 10:
					*uParam2 = 1776;
					break;
				
				case 11:
					*uParam2 = 1777;
					break;
				
				case 12:
					*uParam2 = 1778;
					break;
				
				case 13:
					*uParam2 = 1786;
					break;
				
				case 14:
					*uParam2 = 1787;
					break;
				
				case 15:
					*uParam2 = 1888;
					break;
				
				case 16:
					*uParam2 = 1889;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1934;
					break;
				
				case 19:
					*uParam2 = 1935;
					break;
				
				case 20:
					*uParam2 = 1936;
					break;
				
				case 21:
					*uParam2 = 1937;
					break;
				
				case 22:
					*uParam2 = 1938;
					break;
				
				case 23:
					*uParam2 = 2042;
					break;
				
				case 24:
					*uParam2 = 2043;
					break;
				
				case 25:
					*uParam2 = 2069;
					break;
				
				case 26:
					*uParam2 = 2070;
					break;
				
				case 27:
					*uParam2 = 2071;
					break;
				
				case 28:
					*uParam2 = 2072;
					break;
				
				case 29:
					*uParam2 = 2073;
					break;
				
				case 30:
					*uParam2 = 2074;
					break;
				
				case 31:
					*uParam2 = 2075;
					break;
				
				case 32:
					*uParam2 = 2076;
					break;
				
				case 33:
					*uParam2 = 2077;
					break;
				
				case 34:
					*uParam2 = 2078;
					break;
				
				case 35:
					*uParam2 = 2325;
					break;
				
				case 36:
					*uParam2 = 2326;
					break;
				
				case 37:
					*uParam2 = 2390;
					break;
				
				case 38:
					*uParam2 = 2391;
					break;
				
				case 39:
					*uParam2 = 2392;
					break;
				
				case 40:
					*uParam2 = 2393;
					break;
				
				case 41:
					*uParam2 = 2452;
					break;
				
				case 42:
					*uParam2 = 2453;
					break;
				
				case 43:
					*uParam2 = 2454;
					break;
				
				case 44:
					*uParam2 = 2455;
					break;
				
				case 45:
					*uParam2 = 2456;
					break;
				
				case 46:
					*uParam2 = 2457;
					break;
				
				case 47:
					*uParam2 = 2458;
					break;
				
				case 48:
					*uParam2 = 2459;
					break;
				
				case 49:
					*uParam2 = 2460;
					break;
				
				case 50:
					*uParam2 = 2461;
					break;
				
				case 51:
					*uParam2 = 2590;
					break;
				
				case 52:
					*uParam2 = 2591;
					break;
				
				case 53:
					*uParam2 = 2592;
					break;
				
				case 54:
					*uParam2 = 2593;
					break;
				
				case 55:
					*uParam2 = 2594;
					break;
				
				case 56:
					*uParam2 = 2595;
					break;
				
				case 57:
					*uParam2 = 2596;
					break;
				
				case 58:
					*uParam2 = 2597;
					break;
				
				case 59:
					*uParam2 = 2598;
					break;
				
				case 60:
					*uParam2 = 2599;
					break;
				
				case 61:
					*uParam2 = 2600;
					break;
				
				case 62:
					*uParam2 = 3197;
					break;
				
				case 63:
					*uParam2 = 3198;
					break;
				
				case 64:
					*uParam2 = 3199;
					break;
				
				case 65:
					*uParam2 = 3200;
					break;
				
				case 66:
					*uParam2 = 3201;
					break;
				
				case 67:
					*uParam2 = 3202;
					break;
				
				case 68:
					*uParam2 = 3670;
					break;
				
				case 69:
					*uParam2 = 3671;
					break;
				
				case 70:
					*uParam2 = 3672;
					break;
				
				case 71:
					*uParam2 = 3673;
					break;
				
				case 72:
					*uParam2 = 3674;
					break;
				
				case 73:
					*uParam2 = 3675;
					break;
				
				case 74:
					*uParam2 = 3676;
					break;
				
				case 75:
					*uParam2 = 3677;
					break;
				
				case 76:
					*uParam2 = 3678;
					break;
				
				case 77:
					*uParam2 = 3679;
					break;
				
				case 78:
					*uParam2 = 3793;
					break;
				
				case joaat("MPSV_LP0_31"):
					*uParam2 = 3794;
					break;
				
				case 80:
					*uParam2 = 3795;
					break;
				
				case 81:
					*uParam2 = 3796;
					break;
				
				case 82:
					*uParam2 = 3797;
					break;
				
				case 83:
					*uParam2 = 3798;
					break;
				
				case 84:
					*uParam2 = 3799;
					break;
				
				case 85:
					*uParam2 = 3800;
					break;
				
				case 86:
					*uParam2 = 3903;
					break;
				
				case 87:
					*uParam2 = 3904;
					break;
				
				case 88:
					*uParam2 = 3905;
					break;
				
				case 89:
					*uParam2 = 5338;
					break;
				
				case 90:
					*uParam2 = 5339;
					break;
				
				case 91:
					*uParam2 = 5340;
					break;
				
				case 92:
					*uParam2 = 5341;
					break;
				
				case 93:
					*uParam2 = 5342;
					break;
				
				case 94:
					*uParam2 = 5343;
					break;
				
				case 95:
					*uParam2 = 5344;
					break;
				
				case 96:
					*uParam2 = 5345;
					break;
				
				case 97:
					*uParam2 = 5346;
					break;
				
				case 98:
					*uParam2 = 5347;
					break;
				
				case 99:
					*uParam2 = 5348;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5349;
					break;
				
				case 101:
					*uParam2 = 5395;
					break;
				
				case 102:
					*uParam2 = 5396;
					break;
				
				case 103:
					*uParam2 = 5397;
					break;
				
				case 104:
					*uParam2 = 5398;
					break;
				
				case 105:
					*uParam2 = 5399;
					break;
				
				case 106:
					*uParam2 = 5400;
					break;
				
				case 107:
					*uParam2 = 5401;
					break;
				
				case 108:
					*uParam2 = 5402;
					break;
				
				case 109:
					*uParam2 = 5403;
					break;
				
				case 110:
					*uParam2 = 5404;
					break;
				
				case 111:
					*uParam2 = 5405;
					break;
				
				case 112:
					*uParam2 = 5406;
					break;
				
				case 113:
					*uParam2 = 5407;
					break;
				
				case 114:
					*uParam2 = 5408;
					break;
				
				case 115:
					*uParam2 = 5409;
					break;
				
				case 116:
					*uParam2 = 5410;
					break;
				
				case 117:
					*uParam2 = 5411;
					break;
				
				case 118:
					*uParam2 = 5412;
					break;
				
				case 119:
					*uParam2 = 5413;
					break;
				
				case 120:
					*uParam2 = 5414;
					break;
				
				case 121:
					*uParam2 = 5415;
					break;
				
				case 122:
					*uParam2 = 5416;
					break;
				
				case 123:
					*uParam2 = 5417;
					break;
				
				case 124:
					*uParam2 = 6123;
					break;
				
				case 125:
					*uParam2 = 6124;
					break;
				
				case 126:
					*uParam2 = 6125;
					break;
				
				case 127:
					*uParam2 = 6126;
					break;
				
				case 128:
					*uParam2 = 6127;
					break;
				
				case 129:
					*uParam2 = 6128;
					break;
				
				case 130:
					*uParam2 = 6129;
					break;
				
				case 131:
					*uParam2 = 6130;
					break;
				
				case 132:
					*uParam2 = 6131;
					break;
				
				case 133:
					*uParam2 = 6132;
					break;
				
				case 134:
					*uParam2 = 6133;
					break;
				
				case 135:
					*uParam2 = 6134;
					break;
				
				case 136:
					*uParam2 = 6135;
					break;
				
				case 137:
					*uParam2 = 6136;
					break;
				
				case 138:
					*uParam2 = 6137;
					break;
				
				case 139:
					*uParam2 = 6436;
					break;
				
				case 140:
					*uParam2 = 6437;
					break;
				
				case 141:
					*uParam2 = 6438;
					break;
				
				case 142:
					*uParam2 = 6439;
					break;
				
				case 143:
					*uParam2 = 6440;
					break;
				
				case 144:
					*uParam2 = 6441;
					break;
				
				case 145:
					*uParam2 = 6442;
					break;
				
				case 146:
					*uParam2 = 6443;
					break;
				
				case 147:
					*uParam2 = 6444;
					break;
				
				case 148:
					*uParam2 = 6445;
					break;
				
				case 149:
					*uParam2 = 6446;
					break;
				
				case 150:
					*uParam2 = 6447;
					break;
				
				case 151:
					*uParam2 = 6448;
					break;
				
				case 152:
					*uParam2 = 6449;
					break;
				
				case 153:
					*uParam2 = 6450;
					break;
				
				case 154:
					*uParam2 = 7267;
					break;
				
				case 155:
					*uParam2 = 7268;
					break;
				
				case 156:
					*uParam2 = 7269;
					break;
				
				case 157:
					*uParam2 = 7270;
					break;
				
				case 158:
					*uParam2 = 7271;
					break;
				
				case 159:
					*uParam2 = 7272;
					break;
				
				case 160:
					*uParam2 = 7273;
					break;
				
				case 161:
					*uParam2 = 7880;
					break;
				
				case 162:
					*uParam2 = 7881;
					break;
				
				case 163:
					*uParam2 = 7882;
					break;
				
				case 164:
					*uParam2 = 7883;
					break;
				
				case 165:
					*uParam2 = 7884;
					break;
				
				case 166:
					*uParam2 = 7885;
					break;
				
				case 167:
					*uParam2 = 7886;
					break;
				
				case 168:
					*uParam2 = 7887;
					break;
				
				case 169:
					*uParam2 = 7888;
					break;
				
				case 170:
					*uParam2 = 7889;
					break;
				
				case 171:
					*uParam2 = 7890;
					break;
				
				case 172:
					*uParam2 = 7891;
					break;
				
				case 173:
					*uParam2 = 7892;
					break;
				
				case 174:
					*uParam2 = 7893;
					break;
				
				case 175:
					*uParam2 = 7894;
					break;
				
				case 176:
					*uParam2 = 8300;
					break;
				
				case 177:
					*uParam2 = 8301;
					break;
				
				case 178:
					*uParam2 = 8302;
					break;
				
				case 179:
					*uParam2 = 8303;
					break;
				
				case 180:
					*uParam2 = 8304;
					break;
				
				case 181:
					*uParam2 = 8305;
					break;
				
				case 182:
					*uParam2 = 8306;
					break;
				
				case 183:
					*uParam2 = 8307;
					break;
				
				case 184:
					*uParam2 = 8308;
					break;
				
				case 185:
					*uParam2 = 8309;
					break;
				
				case 186:
					*uParam2 = 8310;
					break;
				
				case 187:
					*uParam2 = 8311;
					break;
				
				case 188:
					*uParam2 = 8312;
					break;
				
				case 189:
					*uParam2 = 8313;
					break;
				
				case 190:
					*uParam2 = 8314;
					break;
				
				case 191:
					*uParam2 = 8315;
					break;
				
				case 192:
					*uParam2 = 8316;
					break;
				
				case 193:
					*uParam2 = 8317;
					break;
				
				case 194:
					*uParam2 = 8318;
					break;
				
				case 195:
					*uParam2 = 8319;
					break;
				
				case 196:
					*uParam2 = 8320;
					break;
				
				case 197:
					*uParam2 = 8321;
					break;
				
				case 198:
					*uParam2 = 8322;
					break;
				
				case 199:
					*uParam2 = 8323;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8324;
					break;
				
				case 201:
					*uParam2 = 8937;
					break;
				
				case 202:
					*uParam2 = 8938;
					break;
				
				case 203:
					*uParam2 = 8939;
					break;
				
				case 204:
					*uParam2 = 8940;
					break;
				
				case 205:
					*uParam2 = 8941;
					break;
				
				case 206:
					*uParam2 = 9420;
					break;
				
				case 207:
					*uParam2 = 9421;
					break;
				
				case 208:
					*uParam2 = 9422;
					break;
				
				case 209:
					*uParam2 = 9423;
					break;
				
				case 210:
					*uParam2 = 9424;
					break;
				
				case 211:
					*uParam2 = 9425;
					break;
				
				case 212:
					*uParam2 = 9426;
					break;
				
				case 213:
					*uParam2 = 9427;
					break;
				
				case 214:
					*uParam2 = 9428;
					break;
				
				case 215:
					*uParam2 = 9429;
					break;
				
				case 216:
					*uParam2 = 9430;
					break;
				
				case 217:
					*uParam2 = 9431;
					break;
				
				case 218:
					*uParam2 = 9432;
					break;
				
				case 219:
					*uParam2 = 9433;
					break;
				
				case 220:
					*uParam2 = 9434;
					break;
				
				case 221:
					*uParam2 = 9435;
					break;
				
				case 222:
					*uParam2 = 9436;
					break;
				
				case 223:
					*uParam2 = 9437;
					break;
				
				case 224:
					*uParam2 = 9438;
					break;
				
				case 225:
					*uParam2 = 9439;
					break;
				
				case 226:
					*uParam2 = 9440;
					break;
				
				case 227:
					*uParam2 = 9441;
					break;
				
				case 228:
					*uParam2 = 9442;
					break;
				
				case 229:
					*uParam2 = 9443;
					break;
				
				case 230:
					*uParam2 = 9444;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1766;
					break;
				
				case 1:
					*uParam2 = 1767;
					break;
				
				case 2:
					*uParam2 = 1768;
					break;
				
				case 3:
					*uParam2 = 1769;
					break;
				
				case 4:
					*uParam2 = 1770;
					break;
				
				case 5:
					*uParam2 = 1771;
					break;
				
				case 6:
					*uParam2 = 1779;
					break;
				
				case 7:
					*uParam2 = 1780;
					break;
				
				case 8:
					*uParam2 = 1781;
					break;
				
				case 9:
					*uParam2 = 1782;
					break;
				
				case 10:
					*uParam2 = 1783;
					break;
				
				case 11:
					*uParam2 = 1784;
					break;
				
				case 12:
					*uParam2 = 1785;
					break;
				
				case 13:
					*uParam2 = 1788;
					break;
				
				case 14:
					*uParam2 = 1789;
					break;
				
				case 15:
					*uParam2 = 1890;
					break;
				
				case 16:
					*uParam2 = 1891;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1939;
					break;
				
				case 19:
					*uParam2 = 1940;
					break;
				
				case 20:
					*uParam2 = 1941;
					break;
				
				case 21:
					*uParam2 = 1942;
					break;
				
				case 22:
					*uParam2 = 1943;
					break;
				
				case 23:
					*uParam2 = 2044;
					break;
				
				case 24:
					*uParam2 = 2045;
					break;
				
				case 25:
					*uParam2 = 2079;
					break;
				
				case 26:
					*uParam2 = 2080;
					break;
				
				case 27:
					*uParam2 = 2081;
					break;
				
				case 28:
					*uParam2 = 2082;
					break;
				
				case 29:
					*uParam2 = 2083;
					break;
				
				case 30:
					*uParam2 = 2084;
					break;
				
				case 31:
					*uParam2 = 2085;
					break;
				
				case 32:
					*uParam2 = 2086;
					break;
				
				case 33:
					*uParam2 = 2087;
					break;
				
				case 34:
					*uParam2 = 2088;
					break;
				
				case 35:
					*uParam2 = 2327;
					break;
				
				case 36:
					*uParam2 = 2328;
					break;
				
				case 37:
					*uParam2 = 2394;
					break;
				
				case 38:
					*uParam2 = 2395;
					break;
				
				case 39:
					*uParam2 = 2396;
					break;
				
				case 40:
					*uParam2 = 2397;
					break;
				
				case 41:
					*uParam2 = 2462;
					break;
				
				case 42:
					*uParam2 = 2463;
					break;
				
				case 43:
					*uParam2 = 2464;
					break;
				
				case 44:
					*uParam2 = 2465;
					break;
				
				case 45:
					*uParam2 = 2466;
					break;
				
				case 46:
					*uParam2 = 2467;
					break;
				
				case 47:
					*uParam2 = 2468;
					break;
				
				case 48:
					*uParam2 = 2469;
					break;
				
				case 49:
					*uParam2 = 2470;
					break;
				
				case 50:
					*uParam2 = 2471;
					break;
				
				case 51:
					*uParam2 = 2601;
					break;
				
				case 52:
					*uParam2 = 2602;
					break;
				
				case 53:
					*uParam2 = 2603;
					break;
				
				case 54:
					*uParam2 = 2604;
					break;
				
				case 55:
					*uParam2 = 2605;
					break;
				
				case 56:
					*uParam2 = 2606;
					break;
				
				case 57:
					*uParam2 = 2607;
					break;
				
				case 58:
					*uParam2 = 2608;
					break;
				
				case 59:
					*uParam2 = 2609;
					break;
				
				case 60:
					*uParam2 = 2610;
					break;
				
				case 61:
					*uParam2 = 2611;
					break;
				
				case 62:
					*uParam2 = 3203;
					break;
				
				case 63:
					*uParam2 = 3204;
					break;
				
				case 64:
					*uParam2 = 3205;
					break;
				
				case 65:
					*uParam2 = 3206;
					break;
				
				case 66:
					*uParam2 = 3207;
					break;
				
				case 67:
					*uParam2 = 3208;
					break;
				
				case 68:
					*uParam2 = 3680;
					break;
				
				case 69:
					*uParam2 = 3681;
					break;
				
				case 70:
					*uParam2 = 3682;
					break;
				
				case 71:
					*uParam2 = 3683;
					break;
				
				case 72:
					*uParam2 = 3684;
					break;
				
				case 73:
					*uParam2 = 3685;
					break;
				
				case 74:
					*uParam2 = 3686;
					break;
				
				case 75:
					*uParam2 = 3687;
					break;
				
				case 76:
					*uParam2 = 3688;
					break;
				
				case 77:
					*uParam2 = 3689;
					break;
				
				case 78:
					*uParam2 = 3801;
					break;
				
				case joaat("MPSV_LP0_31"):
					*uParam2 = 3802;
					break;
				
				case 80:
					*uParam2 = 3803;
					break;
				
				case 81:
					*uParam2 = 3804;
					break;
				
				case 82:
					*uParam2 = 3805;
					break;
				
				case 83:
					*uParam2 = 3806;
					break;
				
				case 84:
					*uParam2 = 3807;
					break;
				
				case 85:
					*uParam2 = 3808;
					break;
				
				case 86:
					*uParam2 = 3906;
					break;
				
				case 87:
					*uParam2 = 3907;
					break;
				
				case 88:
					*uParam2 = 3908;
					break;
				
				case 89:
					*uParam2 = 5350;
					break;
				
				case 90:
					*uParam2 = 5351;
					break;
				
				case 91:
					*uParam2 = 5352;
					break;
				
				case 92:
					*uParam2 = 5353;
					break;
				
				case 93:
					*uParam2 = 5354;
					break;
				
				case 94:
					*uParam2 = 5355;
					break;
				
				case 95:
					*uParam2 = 5356;
					break;
				
				case 96:
					*uParam2 = 5357;
					break;
				
				case 97:
					*uParam2 = 5358;
					break;
				
				case 98:
					*uParam2 = 5359;
					break;
				
				case 99:
					*uParam2 = 5360;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5361;
					break;
				
				case 101:
					*uParam2 = 5418;
					break;
				
				case 102:
					*uParam2 = 5419;
					break;
				
				case 103:
					*uParam2 = 5420;
					break;
				
				case 104:
					*uParam2 = 5421;
					break;
				
				case 105:
					*uParam2 = 5422;
					break;
				
				case 106:
					*uParam2 = 5423;
					break;
				
				case 107:
					*uParam2 = 5424;
					break;
				
				case 108:
					*uParam2 = 5425;
					break;
				
				case 109:
					*uParam2 = 5426;
					break;
				
				case 110:
					*uParam2 = 5427;
					break;
				
				case 111:
					*uParam2 = 5428;
					break;
				
				case 112:
					*uParam2 = 5429;
					break;
				
				case 113:
					*uParam2 = 5430;
					break;
				
				case 114:
					*uParam2 = 5431;
					break;
				
				case 115:
					*uParam2 = 5432;
					break;
				
				case 116:
					*uParam2 = 5433;
					break;
				
				case 117:
					*uParam2 = 5434;
					break;
				
				case 118:
					*uParam2 = 5435;
					break;
				
				case 119:
					*uParam2 = 5436;
					break;
				
				case 120:
					*uParam2 = 5437;
					break;
				
				case 121:
					*uParam2 = 5438;
					break;
				
				case 122:
					*uParam2 = 5439;
					break;
				
				case 123:
					*uParam2 = 5440;
					break;
				
				case 124:
					*uParam2 = 6138;
					break;
				
				case 125:
					*uParam2 = 6139;
					break;
				
				case 126:
					*uParam2 = 6140;
					break;
				
				case 127:
					*uParam2 = 6141;
					break;
				
				case 128:
					*uParam2 = 6142;
					break;
				
				case 129:
					*uParam2 = 6143;
					break;
				
				case 130:
					*uParam2 = 6144;
					break;
				
				case 131:
					*uParam2 = 6145;
					break;
				
				case 132:
					*uParam2 = 6146;
					break;
				
				case 133:
					*uParam2 = 6147;
					break;
				
				case 134:
					*uParam2 = 6148;
					break;
				
				case 135:
					*uParam2 = 6149;
					break;
				
				case 136:
					*uParam2 = 6150;
					break;
				
				case 137:
					*uParam2 = 6151;
					break;
				
				case 138:
					*uParam2 = 6152;
					break;
				
				case 139:
					*uParam2 = 6451;
					break;
				
				case 140:
					*uParam2 = 6452;
					break;
				
				case 141:
					*uParam2 = 6453;
					break;
				
				case 142:
					*uParam2 = 6454;
					break;
				
				case 143:
					*uParam2 = 6455;
					break;
				
				case 144:
					*uParam2 = 6456;
					break;
				
				case 145:
					*uParam2 = 6457;
					break;
				
				case 146:
					*uParam2 = 6458;
					break;
				
				case 147:
					*uParam2 = 6459;
					break;
				
				case 148:
					*uParam2 = 6460;
					break;
				
				case 149:
					*uParam2 = 6461;
					break;
				
				case 150:
					*uParam2 = 6462;
					break;
				
				case 151:
					*uParam2 = 6463;
					break;
				
				case 152:
					*uParam2 = 6464;
					break;
				
				case 153:
					*uParam2 = 6465;
					break;
				
				case 154:
					*uParam2 = 7274;
					break;
				
				case 155:
					*uParam2 = 7275;
					break;
				
				case 156:
					*uParam2 = 7276;
					break;
				
				case 157:
					*uParam2 = 7277;
					break;
				
				case 158:
					*uParam2 = 7278;
					break;
				
				case 159:
					*uParam2 = 7279;
					break;
				
				case 160:
					*uParam2 = 7280;
					break;
				
				case 161:
					*uParam2 = 7895;
					break;
				
				case 162:
					*uParam2 = 7896;
					break;
				
				case 163:
					*uParam2 = 7897;
					break;
				
				case 164:
					*uParam2 = 7898;
					break;
				
				case 165:
					*uParam2 = 7899;
					break;
				
				case 166:
					*uParam2 = 7900;
					break;
				
				case 167:
					*uParam2 = 7901;
					break;
				
				case 168:
					*uParam2 = 7902;
					break;
				
				case 169:
					*uParam2 = 7903;
					break;
				
				case 170:
					*uParam2 = 7904;
					break;
				
				case 171:
					*uParam2 = 7905;
					break;
				
				case 172:
					*uParam2 = 7906;
					break;
				
				case 173:
					*uParam2 = 7907;
					break;
				
				case 174:
					*uParam2 = 7908;
					break;
				
				case 175:
					*uParam2 = 7909;
					break;
				
				case 176:
					*uParam2 = 8325;
					break;
				
				case 177:
					*uParam2 = 8326;
					break;
				
				case 178:
					*uParam2 = 8327;
					break;
				
				case 179:
					*uParam2 = 8328;
					break;
				
				case 180:
					*uParam2 = 8329;
					break;
				
				case 181:
					*uParam2 = 8330;
					break;
				
				case 182:
					*uParam2 = 8331;
					break;
				
				case 183:
					*uParam2 = 8332;
					break;
				
				case 184:
					*uParam2 = 8333;
					break;
				
				case 185:
					*uParam2 = 8334;
					break;
				
				case 186:
					*uParam2 = 8335;
					break;
				
				case 187:
					*uParam2 = 8336;
					break;
				
				case 188:
					*uParam2 = 8337;
					break;
				
				case 189:
					*uParam2 = 8338;
					break;
				
				case 190:
					*uParam2 = 8339;
					break;
				
				case 191:
					*uParam2 = 8340;
					break;
				
				case 192:
					*uParam2 = 8341;
					break;
				
				case 193:
					*uParam2 = 8342;
					break;
				
				case 194:
					*uParam2 = 8343;
					break;
				
				case 195:
					*uParam2 = 8344;
					break;
				
				case 196:
					*uParam2 = 8345;
					break;
				
				case 197:
					*uParam2 = 8346;
					break;
				
				case 198:
					*uParam2 = 8347;
					break;
				
				case 199:
					*uParam2 = 8348;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8349;
					break;
				
				case 201:
					*uParam2 = 8942;
					break;
				
				case 202:
					*uParam2 = 8943;
					break;
				
				case 203:
					*uParam2 = 8944;
					break;
				
				case 204:
					*uParam2 = 8945;
					break;
				
				case 205:
					*uParam2 = 8946;
					break;
				
				case 206:
					*uParam2 = 9445;
					break;
				
				case 207:
					*uParam2 = 9446;
					break;
				
				case 208:
					*uParam2 = 9447;
					break;
				
				case 209:
					*uParam2 = 9448;
					break;
				
				case 210:
					*uParam2 = 9449;
					break;
				
				case 211:
					*uParam2 = 9450;
					break;
				
				case 212:
					*uParam2 = 9451;
					break;
				
				case 213:
					*uParam2 = 9452;
					break;
				
				case 214:
					*uParam2 = 9453;
					break;
				
				case 215:
					*uParam2 = 9454;
					break;
				
				case 216:
					*uParam2 = 9455;
					break;
				
				case 217:
					*uParam2 = 9456;
					break;
				
				case 218:
					*uParam2 = 9457;
					break;
				
				case 219:
					*uParam2 = 9458;
					break;
				
				case 220:
					*uParam2 = 9459;
					break;
				
				case 221:
					*uParam2 = 9460;
					break;
				
				case 222:
					*uParam2 = 9461;
					break;
				
				case 223:
					*uParam2 = 9462;
					break;
				
				case 224:
					*uParam2 = 9463;
					break;
				
				case 225:
					*uParam2 = 9464;
					break;
				
				case 226:
					*uParam2 = 9465;
					break;
				
				case 227:
					*uParam2 = 9466;
					break;
				
				case 228:
					*uParam2 = 9467;
					break;
				
				case 229:
					*uParam2 = 9468;
					break;
				
				case 230:
					*uParam2 = 9469;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11771;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_76647[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = unk_0x04222560EC9A383D(uVar1, 0);
			if (iVar18 > iVar17)
			{
				unk_0xB11622B138AA8874(iVar17, &Var2);
				Global_2621444 = Var2.f_1;
				Global_2621445 = Var2;
				func_186(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_186(&(Global_76647[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x8BC52CDFCD2A4534(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = unk_0x21A524CB091C80DE(iVar1, 7, -1, 1, -1, -1);
			if (iVar38 > iVar37)
			{
				unk_0xD2FB5DC35CA67C53(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2621444 = Var19.f_1;
				Global_2621445 = Var19;
				func_186(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, unk_0x4D0432E34C5996D9(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x1C2EE47D7054A42C(&Var39);
		if (iParam3 != -1 && Global_76814)
		{
			unk_0x2209D2FE26AA9212(iParam3, &Var39);
			Global_2621444 = Var39.f_1;
			Global_2621445 = Var39;
			func_186(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x4D0432E34C5996D9(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = unk_0x21A524CB091C80DE(iVar1, 7, -1, 0, -1, func_197(iParam0));
			if (iVar57 > iVar56)
			{
				unk_0x627AC3AC8991672C(iVar56, &Var39);
				Global_2621444 = Var39.f_1;
				Global_2621445 = Var39;
				func_186(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x4D0432E34C5996D9(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_198(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_199(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_200(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_202(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_203(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_196(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_196(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_205(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_206(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_196(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_196(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_209(int iParam0)
{
	if (iParam0 < 136)
	{
		func_211(iParam0);
	}
	else
	{
		func_210(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_196(3, iParam0, 242, -1);
	}
}

void func_210(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_211(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_212(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_213(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_196(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_232(iParam1);
			break;
		
		case 2:
			func_231(iParam1);
			break;
		
		case 3:
			func_227(iParam1);
			break;
		
		case 4:
			func_226(iParam1);
			break;
		
		case 6:
			func_225(iParam1);
			break;
		
		case 5:
			func_224(iParam1);
			break;
		
		case 8:
			func_223(iParam1);
			break;
		
		case 9:
			func_222(iParam1);
			break;
		
		case 10:
			func_221(iParam1);
			break;
		
		case 1:
			func_220(iParam1);
			break;
		
		case 7:
			func_219(iParam1);
			break;
		
		case 11:
			func_218(iParam1);
			break;
		
		case 12:
			func_217(iParam1);
			break;
		
		case 13:
			func_216(iParam1);
			break;
		
		case 14:
			func_215(iParam1);
			break;
	}
}

void func_215(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_216(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_217(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_218(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_196(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_219(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_220(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_221(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_222(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_223(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_224(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_225(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_196(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_226(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_196(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_227(int iParam0)
{
	if (iParam0 < 107)
	{
		func_230(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_229(iParam0);
	}
	else
	{
		func_228(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_196(3, iParam0, 318, -1);
	}
}

void func_228(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_229(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_230(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_231(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 21, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_232(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_196(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_250(iParam1);
			break;
		
		case 2:
			func_249(iParam1);
			break;
		
		case 3:
			func_246(iParam1);
			break;
		
		case 4:
			func_245(iParam1);
			break;
		
		case 6:
			func_244(iParam1);
			break;
		
		case 5:
			func_243(iParam1);
			break;
		
		case 8:
			func_242(iParam1);
			break;
		
		case 9:
			func_241(iParam1);
			break;
		
		case 10:
			func_240(iParam1);
			break;
		
		case 1:
			func_239(iParam1);
			break;
		
		case 7:
			func_238(iParam1);
			break;
		
		case 11:
			func_237(iParam1);
			break;
		
		case 12:
			func_236(iParam1);
			break;
		
		case 13:
			func_235(iParam1);
			break;
		
		case 14:
			func_234(iParam1);
			break;
	}
}

void func_234(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_196(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_235(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_236(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_237(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 45, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_238(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_239(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_240(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_196(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_241(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 20, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_242(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 24, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_243(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_196(iVar10, iParam0, 14, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_244(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_196(iVar10, iParam0, 99, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_245(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_246(int iParam0)
{
	if (iParam0 < 60)
	{
		func_248(iParam0);
	}
	else
	{
		func_247(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_196(3, iParam0, 181, -1);
	}
}

void func_247(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_248(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_249(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_196(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_250(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_196(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_186(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_251()
{
	Global_76647[0 /*14*/].f_1 = -1;
	Global_76647[0 /*14*/].f_2 = -1;
	Global_76647[0 /*14*/].f_5 = -1;
	Global_76647[0 /*14*/].f_3 = -1;
	Global_76647[0 /*14*/].f_4 = -1;
	Global_76647[0 /*14*/].f_7 = 0;
	Global_76647[0 /*14*/].f_6 = 0;
	Global_76647[0 /*14*/].f_13 = -1;
	Global_76647[0 /*14*/].f_12 = 0;
	Global_76647[0 /*14*/] = 0;
	StringCopy(&(Global_76647[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_252(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -99)
	{
		return;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (!bParam3 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[1], 0))
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359.f_539.f_3816[0 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
		
		case joaat("player_two"):
			if (!bParam3 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[3], 0))
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359.f_539.f_3816[1 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			if (!bParam3 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[4], 0))
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359.f_539.f_3816[2 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
	}
}

int func_253(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar20;
	int iVar30;
	
	Global_76647[1 /*14*/] = { func_183(iParam0, iParam1, iParam2, -1) };
	if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0) && !unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_182(iParam1, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 1, Global_76647[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { func_260(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_253(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_264(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar20 = { func_254(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_253(iParam0, 14, uVar20[iVar2], 1, 1);
									func_264(iParam0, 14, uVar20[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			func_182(iParam1, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 1, Global_76647[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar30 = (227 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 3, iVar30, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar30 = (176 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 3, iVar30, 1, 0);
							}
							break;
						
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar30 = (25 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 11, iVar30, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar30 = (9 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 11, iVar30, 1, 0);
							}
							break;
						
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar30 = (43 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 8, iVar30, 1, 0);
								iVar30 = (59 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 8, iVar30, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar30 = (27 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 8, iVar30, 1, 0);
								iVar30 = (59 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 8, iVar30, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar30 = (27 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 8, iVar30, 1, 0);
								iVar30 = (43 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 8, iVar30, 1, 0);
							}
							break;
						
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar30 = (41 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 14, iVar30, 1, 0);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar30 = (94 + Global_76647[1 /*14*/].f_4);
								func_253(iParam0, 4, iVar30, 1, 0);
							}
							break;
						
						case 12:
							if (iParam2 == 2)
							{
								func_253(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

struct<10> func_254(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_259(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_259(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_259(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_259(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_259(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_259(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_259(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_259(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_259(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_259(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_259(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_255(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_259(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_259(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_259(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_259(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_259(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_259(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_259(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_259(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_259(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_259(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_255(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_259(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_259(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_259(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_259(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_259(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_259(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_259(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_259(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_259(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_259(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_255(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_259(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_259(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_259(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_259(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_259(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_259(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_259(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_259(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_259(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_259(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_259(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_259(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_259(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_259(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_259(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_259(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_259(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_259(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_259(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_259(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_259(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_259(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_259(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_259(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_259(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_259(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_255(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_259(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_259(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_259(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_259(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_259(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_259(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_259(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_259(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_259(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_259(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_259(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_259(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_259(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_259(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_259(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_259(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_259(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_259(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_259(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_259(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_259(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_259(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_259(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_259(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_259(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_255(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_255(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x6208B91ED335678E(iParam2, &Var1);
		if (!unk_0x14AC70FD8926649E(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0xC35D62D0F96C6D07(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_256(iParam1, Var16.x, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

int func_256(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x21A524CB091C80DE(iParam3, 7, -1, 1, -1, -1);
		iVar0 = unk_0x6CEBE002E58DEE97(iParam1);
		if (iVar0 != -1)
		{
			return (func_258(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x21A524CB091C80DE(iParam3, 7, -1, 0, -1, func_197(iParam2));
		iVar1 = unk_0x96E2929292A4DB77(iParam1);
		if (iVar1 != -1)
		{
			return (func_257(iParam0, func_197(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_260(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_111858.f_9081.f_99.f_58[120])
					{
						func_263(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_263(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_263(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_263(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_263(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_263(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_263(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[0], Global_111858.f_2359.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_263(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_263(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_263(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_263(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_263(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_263(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_263(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_263(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_263(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_263(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_263(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_263(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_263(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_263(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_263(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_263(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_263(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_263(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_263(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_263(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_263(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_263(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_263(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_263(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_263(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_263(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_263(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_263(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_263(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_263(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_263(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_263(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_263(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_263(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_263(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_263(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_263(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_263(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_263(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_263(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_263(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_263(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_263(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_263(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_263(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_263(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_263(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_261(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_263(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_263(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_263(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[1], Global_111858.f_2359.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_263(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_263(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_263(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_263(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_263(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_263(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_263(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_263(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_263(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_263(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_263(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_263(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_263(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_263(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_263(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_263(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_263(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_263(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_263(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_263(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_263(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_263(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_263(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_263(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_263(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_263(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_263(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_263(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_263(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_263(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_263(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_263(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_263(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_263(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_263(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_263(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_263(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_263(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_263(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_263(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_263(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_263(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_263(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_263(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_261(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_263(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_263(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_263(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_263(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_263(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[2], Global_111858.f_2359.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_263(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_263(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_263(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_263(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_263(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_263(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_263(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_263(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_263(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_263(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_263(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_263(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_263(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_263(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_263(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_263(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_263(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_263(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_263(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_263(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_263(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_263(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_263(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_263(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_263(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_263(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_263(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_263(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_263(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_263(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_263(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_263(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_263(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_263(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_263(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_263(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_263(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_263(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_263(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_263(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_263(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_263(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_263(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_261(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_263(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_263(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_263(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_263(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_263(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_263(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_263(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_263(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_263(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_263(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_263(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_263(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_263(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_263(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_263(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_263(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_263(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_263(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_263(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_263(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_263(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_263(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_263(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_263(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_263(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_263(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_261(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_263(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_263(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_263(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_263(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_263(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_263(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_263(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_263(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_263(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_263(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_263(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_263(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_263(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_263(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_263(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_263(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_263(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_263(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_263(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_263(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_263(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_263(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_263(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_263(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_263(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_263(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_263(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_263(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_261(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_261(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x04222560EC9A383D(iVar0, 0);
	unk_0xB11622B138AA8874((iParam2 - iParam3), &Var1);
	if (!unk_0x14AC70FD8926649E(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0xCFA068E582501862(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x1C2EE47D7054A42C(&Var19);
						unk_0x2209D2FE26AA9212(Var16.x, &Var19);
						if (Var16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_262(Var16.f_2)] = Var16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_262(Var16.f_2)] = func_256(iParam1, Var16.x, func_262(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_262(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_264(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_76647[1 /*14*/] = { func_183(iParam0, iParam1, iParam2, -1) };
	if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0) && !unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_182(iParam1, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 0, Global_76647[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			func_182(iParam1, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 0, Global_76647[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_272(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_272(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_268(iParam0, iParam2);
			}
		}
		else
		{
			return func_266(iParam0, iParam1);
		}
	}
	return -99;
}

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return -99;
	}
	iVar0 = func_197(iParam1);
	iVar1 = unk_0x3FB4D40A857CEA77(iParam0, iVar0);
	iVar2 = unk_0x79AFA009D186C4FB(iParam0, iVar0);
	return func_267(iParam0, iVar1, iVar2, iParam1);
}

int func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_197(iParam3);
	iVar1 = unk_0xD6A0115FA2F3F0EC(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x7CF1CA3F6DB5685F(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xA98E0435012EAF07(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_271(iParam1);
	}
	iVar1 = unk_0x77A103B794FA7737(iParam0, iParam1);
	return func_269(iParam0, iVar0, iVar1, iParam1);
}

int func_269(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_271(iParam3);
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	iVar1 = unk_0xEAF476EEF924D2C9(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_256(unk_0x36FE6D3220816ADA(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_256(unk_0x36FE6D3220816ADA(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x99134D420E2DAA74(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x2CB217E5FD6878E9(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_270(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_271(iParam3);
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	Global_76647[1 /*14*/] = { func_183(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_260(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_272(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_254(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_272(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_76647[2 /*14*/] = { func_183(iVar0, 14, iVar4, -1) };
									if (Global_76647[2 /*14*/].f_12 == iVar3)
									{
										if (func_272(iParam0, 14, iVar4))
										{
											if (!func_273(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_76647[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_266(iParam0, iVar2);
						Global_76647[2 /*14*/] = { func_183(iVar0, iVar2, iVar1, -1) };
						if (!func_273(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_76647[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_254(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_272(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xA98E0435012EAF07(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_3 && (unk_0x77A103B794FA7737(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_4 || Global_76647[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_76647[1 /*14*/].f_3 == unk_0x3FB4D40A857CEA77(iParam0, func_197(iParam1)) && Global_76647[1 /*14*/].f_4 == unk_0x79AFA009D186C4FB(iParam0, func_197(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_254(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_278(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_277(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_276(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_274(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_277(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_276(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_274(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_277(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_276(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_274(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_275(iParam0, iParam2, 14, 3);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 1) || unk_0x4D0432E34C5996D9(func_275(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_275(iParam0, iParam2, 1, 3);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(func_275(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_275(iParam0, iParam2, 14, 4);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 1) || unk_0x4D0432E34C5996D9(func_275(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_275(iParam0, iParam2, 1, 4);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(func_275(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_275(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x8BC52CDFCD2A4534(&Var0);
		iVar17 = (iParam1 - func_258(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = unk_0x21A524CB091C80DE(iParam3, 7, -1, 1, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		unk_0xD2FB5DC35CA67C53(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x1C2EE47D7054A42C(&Var19);
		iVar36 = (iParam1 - func_257(iParam0, func_197(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76769.f_26[iParam2] && iParam1 == Global_76769[iParam2]) && Global_76769.f_13[iParam2] != 0)
		{
			return Global_76769.f_13[iParam2];
		}
		iVar37 = unk_0x21A524CB091C80DE(iParam3, 7, -1, 0, -1, func_197(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		unk_0x627AC3AC8991672C(iVar36, &Var19);
		Global_76769.f_13[iParam2] = Var19.f_1;
		Global_76769[iParam2] = iParam1;
		Global_76769.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_276(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_275(iParam0, iParam2, 1, 3);
					}
					if (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_275(iParam0, iParam2, 1, 4);
					}
					if (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_275(iParam0, iParam2, 14, 3);
					}
					return unk_0x4D0432E34C5996D9(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_275(iParam0, iParam2, 14, 4);
					}
					return unk_0x4D0432E34C5996D9(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_279(int iParam0)
{
	return Global_111858.f_9081.f_330[iParam0 /*6*/];
}

void func_280(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam5)
	{
		iVar0 = func_25(iParam0);
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0xD6A0115FA2F3F0EC(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x7CF1CA3F6DB5685F(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x45F588C0DD767737(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0x99134D420E2DAA74(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x2CB217E5FD6878E9(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x78024EFD31A7FAD4(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x4FCABD4082A6C808(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_24(iVar0))
		{
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_469(iParam0, iVar1, &iVar2, 0))
			{
				func_455(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_453(iParam0, iVar1, &iVar2))
			{
				func_455(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x25DDB354A40FFCDB() && unk_0x36FE6D3220816ADA(iParam0) == unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			bVar4 = func_451(iParam0);
			func_450(753, uParam1->f_60, Global_76644, 1, 0);
			func_450(754, uParam1->f_61, Global_76644, 1, 0);
			iVar5 = func_267(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_448(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_446(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_283(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_267(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_283(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_269(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_283(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			}
		}
		if (unk_0x25DDB354A40FFCDB() && iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_448(iVar9);
			}
			else
			{
				iVar9 = func_446(iVar9);
			}
			func_450(752, iVar9, Global_76644, 1, 0);
			func_450(2052, iVar9, Global_76644, 1, 0);
			func_281(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = unk_0x21A69BE7599CD8B7(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1));
			iVar11 = unk_0xEAF476EEF924D2C9(iParam0, 1, unk_0xA98E0435012EAF07(iParam0, 1), unk_0x77A103B794FA7737(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!unk_0x4D0432E34C5996D9(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					unk_0x8BC52CDFCD2A4534(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						unk_0xD2FB5DC35CA67C53(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						unk_0xD2FB5DC35CA67C53(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					unk_0x78024EFD31A7FAD4(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				unk_0x4FCABD4082A6C808(iParam0, 1);
			}
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_282())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_190(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, iParam1, iParam3);
		}
	}
}

int func_282()
{
	return 1;
	return 0;
}

int func_283(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar32;
	var uVar42;
	int iVar59;
	var uVar60;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	var uVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	var uVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	var uVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		if ((Global_1312829 != 4 && Global_1312829 != 5) && Global_1312829 != 7)
		{
			return 0;
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x9B0761B4C3EB8BC7() && Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_226 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76644;
	}
	Global_76645++;
	iVar5 = unk_0x36FE6D3220816ADA(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
		if (!func_412(iParam3))
		{
			Global_76645 = (Global_76645 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76645 > 1)
		{
		}
		else
		{
			func_409(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0x6BD562D713BA3F70(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76690 };
		}
		else
		{
			uVar15 = { func_260(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76647[1 /*14*/] = { func_413(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x45F588C0DD767737(iParam0, func_197(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_197(iVar0)));
					}
					else
					{
						unk_0x45F588C0DD767737(iParam0, func_197(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
					{
						func_409(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76647[1 /*14*/] = { func_413(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76707 };
							}
							else
							{
								uVar32 = { func_254(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76647[1 /*14*/] = { func_413(iVar5, 14, uVar32[iVar1], -1) };
								func_408(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
								if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
								{
									func_409(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x45F588C0DD767737(iParam0, func_197(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_197(iVar0)));
								}
								else
								{
									unk_0x45F588C0DD767737(iParam0, func_197(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_283(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
							{
								func_409(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76647[1 /*14*/] = { func_413(iVar5, iVar0, func_407(iParam0, iVar0, -1), -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 3))
				{
					uVar42 = { func_260(iVar5, 0) };
					func_283(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x45F588C0DD767737(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_406();
			if (iVar59 != -1)
			{
				func_403(iVar59, 0, iParam10);
			}
			func_401(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_254(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76647[1 /*14*/] = { func_413(iVar5, 14, uVar60[iVar1], -1) };
			func_408(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
			if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
			{
				func_409(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76645 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_399(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_283(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_408(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
		if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
		{
			func_409(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76647[1 /*14*/].f_12 == 0)
		{
			if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar70 = unk_0x21A69BE7599CD8B7(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1));
				if (unk_0x4D0432E34C5996D9(iVar70, joaat("HAIR_SHRINK"), 0))
				{
					func_283(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76647[1 /*14*/].f_12 == 0)
		{
			func_392(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_399(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_283(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_399(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_197(iParam1);
		if (unk_0x3FB4D40A857CEA77(iParam0, iVar71) != Global_76647[1 /*14*/].f_3 || unk_0x79AFA009D186C4FB(iParam0, iVar71) != Global_76647[1 /*14*/].f_4)
		{
			iVar72 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
			iVar73 = unk_0x21A69BE7599CD8B7(iParam0, 7, unk_0x3FB4D40A857CEA77(iParam0, 7), unk_0x79AFA009D186C4FB(iParam0, 7));
			if (((iParam1 == 11 && unk_0x4D0432E34C5996D9(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x4D0432E34C5996D9(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x4D0432E34C5996D9(iVar73, -2095729091, 0)))
			{
				unk_0x45F588C0DD767737(iParam0, 7, 0, 0, unk_0xABAC9462CD887571(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x4D0432E34C5996D9(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x4D0432E34C5996D9(iVar72, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x45F588C0DD767737(iParam0, 8, 15, 0, unk_0xABAC9462CD887571(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x45F588C0DD767737(iParam0, 8, 2, 0, unk_0xABAC9462CD887571(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 0);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 1);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 2);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 3);
				}
				iVar75 = func_266(iParam0, 11);
				iVar76 = func_266(iParam0, 8);
				iVar77 = func_266(iParam0, 4);
				iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
				if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar74 = func_275(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar74 = func_275(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_ROBE"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("MORPH_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("GORKA_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_266(iParam0, 8);
					}
				}
				iVar78 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
				if (unk_0x4D0432E34C5996D9(iVar78, joaat("GLOVES"), 0))
				{
					iVar79 = func_391(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_399(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar79 = 11;
							iVar74 = func_275(iVar5, iParam2, 11, 4);
							if (!unk_0x4D0432E34C5996D9(iVar74, joaat("DRESS"), 0))
							{
								iVar79 = -99;
							}
							break;
					}
					if (iVar79 != -99)
					{
						iVar80 = 0;
						while (iVar80 < 18)
						{
							if (func_390(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x4D0432E34C5996D9(func_275(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar75 = func_266(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_275(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0))
					{
						iVar81 = func_388(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
						if (iVar81 != -99)
						{
							func_283(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_387(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_275(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_275(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_387(iVar5, iVar75, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && (unk_0x4D0432E34C5996D9(iVar74, joaat("VEST"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && ((((((((unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_5"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_11"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -872449705, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("APART_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar82 = func_386(iParam0, iParam2);
							iVar83 = func_388(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
							if (iVar83 != -99)
							{
								func_283(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								func_283(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar84 = func_385(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_413(iVar5, 11, iVar84, -1) };
									iVar83 = func_388(iVar5, iVar84, iParam2, Global_76647[1 /*14*/].f_4);
									iVar85 = func_275(iVar5, iParam2, 11, 3);
									if ((iVar83 == -99 || unk_0x4D0432E34C5996D9(iVar85, joaat("BIKER_VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar85, 1170568373, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_275(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_283(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76647[1 /*14*/] = { func_413(iVar5, 11, iVar75, -1) };
						iVar86 = Global_76647[1 /*14*/].f_3;
						Global_76647[1 /*14*/] = { func_413(iVar5, 11, iParam2, -1) };
						iVar87 = Global_76647[1 /*14*/].f_3;
						if (iVar86 != iVar87)
						{
							iVar89 = func_386(iParam0, iParam2);
							Global_76647[1 /*14*/] = { func_413(iVar5, 8, iVar76, -1) };
							iVar88 = Global_76647[1 /*14*/].f_4;
							iVar90 = func_384(iVar5, iVar76, iVar88);
							if (iVar89 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								iVar91 = iVar89;
							}
							else if (iVar90 == -99)
							{
								iVar91 = iVar76;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar92 = func_275(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_383(iVar92) == 6) || unk_0x4D0432E34C5996D9(iVar92, joaat("BIKER_VEST"), 0))
									{
										iVar90 = func_385(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_413(iVar5, 11, iVar90, -1) };
										iVar91 = func_388(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar76 == 32 || iVar76 == 33) || iVar76 == 119))
								{
									if (!unk_0x4D0432E34C5996D9(func_275(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar90 = func_385(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_413(iVar5, 11, iVar90, -1) };
										iVar91 = func_388(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								iVar93 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar93 = func_275(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar93 = func_275(iVar5, iVar76, 8, 4);
								}
								if (unk_0x4D0432E34C5996D9(iVar93, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar90 = func_385(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_413(iVar5, 11, iVar90, -1) };
									iVar91 = func_388(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar91 = func_388(iVar5, iVar90, iParam2, iVar88);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_275(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_382(iVar5, func_266(iParam0, 4), iVar90))
										{
											iVar91 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_275(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_382(iVar5, func_266(iParam0, 4), iVar90))
										{
											iVar91 = 48;
										}
									}
								}
							}
							if (iVar91 != -99)
							{
								func_283(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar90 = func_385(iVar5, 11, -1);
								Global_76647[1 /*14*/] = { func_413(iVar5, 11, iVar90, -1) };
								iVar91 = func_388(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								if (iVar91 == -99)
								{
									iVar91 = 240;
								}
								func_283(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_283(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_379(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x45F588C0DD767737(iParam0, 10, 0, 0, unk_0xABAC9462CD887571(iParam0, 10));
				}
			}
			func_401(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_391(iVar5, func_407(iParam0, 8, -1), iParam2, func_407(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_189(2152, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_189(2159, iParam10, 0);
				}
				unk_0x777697644ED166F1(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar94 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar94 = func_448(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar94 = func_446(iParam2);
					}
					if (iVar94 != -99 && iParam2 != iVar94)
					{
						iParam2 = iVar94;
					}
				}
				func_330(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar95 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar95, joaat("GLOVES"), 0))
			{
				iVar96 = func_266(iParam0, 11);
				iVar97 = func_266(iParam0, 4);
				iVar98 = func_391(iVar5, iParam2, iVar96, iVar97);
				if (iVar98 == -99)
				{
					iVar98 = func_399(iParam0, iVar5, 11, iVar96, 3, 0);
				}
				switch (iVar95)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar98 = 11;
						iVar99 = func_275(iVar5, iParam2, 11, 4);
						if (!unk_0x4D0432E34C5996D9(iVar99, joaat("DRESS"), 0))
						{
							iVar98 = -99;
						}
						break;
				}
				if (iVar98 != -99)
				{
					iVar100 = 0;
					while (iVar100 < 18)
					{
						if (func_390(iVar5, iVar98, iVar100) == iVar95)
						{
							iVar11 = iVar100;
							iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
			func_401(iParam0, iParam1, iParam2, iParam6, 0);
			iVar101 = func_266(iParam0, 11);
			if (func_387(iVar5, iVar101, -1))
			{
				iVar102 = func_384(iVar5, iParam2, Global_76647[1 /*14*/].f_4);
				func_379(iVar5, iVar102);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_391(iVar5, iParam2, func_266(iParam0, 11), func_266(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar103 = func_266(iParam0, 7);
				if (!func_327(iVar5, iVar103, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x45F588C0DD767737(iParam0, func_197(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar104 = func_189(2099, iParam10, 0);
				iVar105 = func_189(2100, iParam10, 0);
				iVar106 = func_189(2101, iParam10, 0);
				uVar107 = func_326(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x5B5751111E879A6F(iParam0, 0, 0, 0, iVar104, iVar105, iVar106, 0f, uVar107, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x5B5751111E879A6F(iParam0, 21, 0, 0, iVar104, iVar105, iVar106, 0f, fVar107, 0f, false);
				}
				iVar108 = 0;
				while (iVar108 < 20)
				{
					unk_0x69D0D9BA8F4533D8(iParam0, iVar108, 0f);
					iVar108++;
				}
			}
			else
			{
				func_310(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar109 = func_266(iParam0, 11);
			iVar110 = func_266(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_275(iVar5, iVar109, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_382(iVar5, iParam2, func_384(iVar5, iVar110, 0)))
					{
						func_283(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_275(iVar5, iVar109, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_382(iVar5, iParam2, func_384(iVar5, iVar110, 0)))
					{
						func_283(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_391(iVar5, func_266(iParam0, 8), func_266(iParam0, 11), iParam2);
			}
			iVar111 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar111, joaat("GLOVES"), 0))
			{
				iVar112 = func_391(iVar5, iVar110, iVar109, iParam2);
				if (iVar112 == -99)
				{
					iVar112 = func_399(iParam0, iVar5, 11, iVar109, 3, 0);
				}
				switch (iVar111)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar112 = 11;
						iVar113 = func_275(iVar5, iParam2, 11, 4);
						if (!unk_0x4D0432E34C5996D9(iVar113, joaat("DRESS"), 0))
						{
							iVar112 = -99;
						}
						break;
				}
				if (iVar112 != -99)
				{
					iVar114 = 0;
					while (iVar114 < 18)
					{
						if (func_390(iVar5, iVar112, iVar114) == iVar111)
						{
							iVar11 = iVar114;
							iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
						}
						iVar114++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x45F588C0DD767737(iParam0, func_197(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_197(iParam1)));
		}
		else
		{
			unk_0x45F588C0DD767737(iParam0, func_197(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_399(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_283(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_391(iVar5, iVar3, func_266(iParam0, 11), func_266(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_399(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_309(iParam0))
				{
					iVar115 = func_307(iParam0, iVar5, iParam1, iParam2);
					if (iVar115 > 0)
					{
						iVar115 = (iVar115 + unk_0x79AFA009D186C4FB(iParam0, 9));
						if (!func_306(iParam0, 9, iVar115))
						{
							func_283(iParam0, 9, iVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_283(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
					if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_283(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar116 = func_189(2041, -1, 0);
				if (unk_0x3FB4D40A857CEA77(iParam0, 5) != 0)
				{
					unk_0x45F588C0DD767737(iParam0, 5, func_300(iParam0, iVar116), func_299(iParam0, iVar116), func_298(iParam0, iVar116));
				}
				if (iParam0 == unk_0x9B0761B4C3EB8BC7())
				{
					unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_300(unk_0x9B0761B4C3EB8BC7(), iVar116), func_299(unk_0x9B0761B4C3EB8BC7(), iVar116), 0);
					unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_298(unk_0x9B0761B4C3EB8BC7(), iVar116));
					func_297(unk_0x460153A63B9477BC(), iVar116);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x4D0432E34C5996D9(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_283(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar117 = func_407(iParam0, 4, -1);
					iVar118 = iParam2;
				}
				else
				{
					iVar117 = iParam2;
					iVar118 = func_407(iParam0, 11, -1);
				}
				if (func_296(iVar5, 11, iVar118, -1))
				{
					if (!func_295(iVar5, 4, iVar117, -1))
					{
						if (func_294(iVar5, 4, iVar117, &uVar119))
						{
							func_283(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_295(iVar5, 4, iVar117, -1))
				{
					if (func_293(iVar5, 4, iVar117, &uVar119))
					{
						func_283(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar120 = unk_0x3FB4D40A857CEA77(iParam0, 6);
				iVar121 = unk_0x79AFA009D186C4FB(iParam0, 6);
				iVar122 = unk_0x21A69BE7599CD8B7(iParam0, 6, iVar120, iVar121);
				iVar123 = unk_0x3FB4D40A857CEA77(iParam0, 4);
				iVar124 = unk_0x79AFA009D186C4FB(iParam0, 4);
				iVar125 = unk_0x21A69BE7599CD8B7(iParam0, 4, iVar123, iVar124);
				iVar126 = func_266(iParam0, 4);
				iVar127 = func_266(iParam0, 6);
				if (func_292(iVar5, iVar122))
				{
					if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_291(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0x164989BEE998606B(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_256(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_283(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_256(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_283(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_290(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0x164989BEE998606B(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_256(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_283(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_256(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_283(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
				if (func_292(iVar5, iVar125))
				{
					if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_290(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0x164989BEE998606B(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_256(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_283(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_256(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_283(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_291(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0x164989BEE998606B(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_256(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_283(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_256(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_283(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_392(iParam0);
				iVar133 = unk_0x3FB4D40A857CEA77(iParam0, 1);
				iVar134 = unk_0x79AFA009D186C4FB(iParam0, 1);
				iVar135 = unk_0x21A69BE7599CD8B7(iParam0, 1, iVar133, iVar134);
				if (unk_0x4D0432E34C5996D9(iVar135, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_399(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_399(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_283(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_284(iParam0, &uVar4))
		{
			func_283(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_283(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_283(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_283(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar136 = func_390(iVar5, func_407(iParam0, 3, -1), iVar11);
		if (iVar136 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_256(iVar5, iVar136, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_256(iVar5, iVar136, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_283(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76645 = (Global_76645 - 1);
	return 1;
}

int func_284(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_407(unk_0x9B0761B4C3EB8BC7(), 2, -1);
	if (func_189(753, Global_76644, 0) != -99 && func_287())
	{
		if (func_286() == 4)
		{
			return 1;
		}
		if (func_189(753, Global_76644, 0) == 0 && func_189(754, Global_76644, 0) == 0)
		{
			if (func_285(161, Global_76644))
			{
				if (func_189(2052, Global_76644, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_189(752, Global_76644, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_189(753, Global_76644, 0);
		iVar1 = func_189(754, Global_76644, 0);
		if (!func_306(iParam0, iVar1, iVar0))
		{
			if (func_285(161, Global_76644))
			{
				*uParam1 = func_189(2052, Global_76644, 0);
			}
			else
			{
				*uParam1 = func_189(752, Global_76644, 0);
			}
			func_450(753, -99, Global_76644, 1, 0);
			func_450(754, 2, Global_76644, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_190(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_286()
{
	return Global_1312829;
}

int func_287()
{
	if (func_289() && func_288(0))
	{
		return 1;
	}
	return 0;
}

var func_288(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_289()
{
	return func_288(func_191() + 1);
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_275(iParam0, iParam1, 6, 3);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, 1137160120, 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x4D0432E34C5996D9(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((unk_0x4D0432E34C5996D9(iParam2, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((unk_0x4D0432E34C5996D9(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_275(iParam0, iParam1, 6, 4);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, 1137160120, 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((unk_0x4D0432E34C5996D9(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_291(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_275(iParam0, iParam1, 4, 3);
				iVar1 = func_383(iVar0);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if (((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x4D0432E34C5996D9(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("SKINNY"), 0)) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case joaat("DLC_MP_VAL_M_LEGS1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_1"):
					case joaat("DLC_MP_BEACH_M_LOWR0_2"):
					case joaat("DLC_MP_BEACH_M_LOWR0_3"):
					case joaat("DLC_MP_BEACH_M_LOWR0_4"):
					case joaat("DLC_MP_BEACH_M_LOWR0_5"):
					case joaat("DLC_MP_BEACH_M_LOWR0_6"):
					case joaat("DLC_MP_BEACH_M_LOWR0_7"):
					case joaat("DLC_MP_BEACH_M_LOWR0_8"):
					case joaat("DLC_MP_BEACH_M_LOWR0_9"):
					case joaat("DLC_MP_BEACH_M_LOWR0_10"):
					case joaat("DLC_MP_BEACH_M_LOWR0_11"):
					case joaat("DLC_MP_BEACH_M_LOWR1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR1_1"):
					case joaat("DLC_MP_BEACH_M_LOWR1_2"):
					case joaat("DLC_MP_BEACH_M_LOWR1_3"):
					case joaat("DLC_MP_BEACH_M_LOWR1_4"):
					case joaat("DLC_MP_BEACH_M_LOWR1_5"):
					case joaat("DLC_MP_BEACH_M_LOWR1_6"):
					case joaat("DLC_MP_BEACH_M_LOWR1_7"):
					case joaat("DLC_MP_BEACH_M_LOWR1_8"):
					case joaat("DLC_MP_BEACH_M_LOWR1_9"):
					case joaat("DLC_MP_BEACH_M_LOWR1_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_0"):
					case joaat("DLC_MP_BEACH_M_LOWR2_1"):
					case joaat("DLC_MP_BEACH_M_LOWR2_2"):
					case joaat("DLC_MP_BEACH_M_LOWR2_3"):
					case joaat("DLC_MP_BEACH_M_LOWR2_4"):
					case joaat("DLC_MP_BEACH_M_LOWR2_5"):
					case joaat("DLC_MP_BEACH_M_LOWR2_6"):
					case joaat("DLC_MP_BEACH_M_LOWR2_7"):
					case joaat("DLC_MP_BEACH_M_LOWR2_8"):
					case joaat("DLC_MP_BEACH_M_LOWR2_9"):
					case joaat("DLC_MP_BEACH_M_LOWR2_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_11"):
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case joaat("DLC_MP_VWD_M_LEGS_2_0"):
					case joaat("DLC_MP_VWD_M_LEGS_2_1"):
					case joaat("DLC_MP_VWD_M_LEGS_2_2"):
					case joaat("DLC_MP_VWD_M_LEGS_2_3"):
					case joaat("DLC_MP_VWD_M_LEGS_2_4"):
					case joaat("DLC_MP_VWD_M_LEGS_2_5"):
					case joaat("DLC_MP_VWD_M_LEGS_2_6"):
					case joaat("DLC_MP_VWD_M_LEGS_2_7"):
					case joaat("DLC_MP_VWD_M_LEGS_2_8"):
					case joaat("DLC_MP_VWD_M_LEGS_2_9"):
					case joaat("DLC_MP_VWD_M_LEGS_2_10"):
						iVar2 = 0;
						break;
				}
				if (((unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BATTLE_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x4D0432E34C5996D9(iVar0, 1137160120, 0))
				{
					if (unk_0x4D0432E34C5996D9(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_275(iParam0, iParam1, 4, 4);
				iVar1 = func_383(iVar0);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, 1137160120, 0))
				{
					if (unk_0x4D0432E34C5996D9(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("BIKER_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BIKER_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, -430330349, 0)) || unk_0x4D0432E34C5996D9(iVar0, -1103045158, 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("DUNGAREES"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x4D0432E34C5996D9(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x4D0432E34C5996D9(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_275(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x164989BEE998606B(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x4D0432E34C5996D9(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_256(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_294(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_275(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x164989BEE998606B(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x4D0432E34C5996D9(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_256(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_275(iParam0, iParam2, 4, 4);
						}
						if (unk_0x4D0432E34C5996D9(iParam3, joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_296(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_275(iParam0, iParam2, 11, 4);
						}
						return unk_0x4D0432E34C5996D9(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_297(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x32ECE704AD6A4E0B(iParam0);
	}
}

int func_298(int iParam0, int iParam1)
{
	return 0;
}

int func_299(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_300(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x3FB4D40A857CEA77(iParam0, 9) != false;
	iVar1 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	iVar2 = unk_0x21A69BE7599CD8B7(iParam0, 11, unk_0x3FB4D40A857CEA77(iParam0, 11), unk_0x79AFA009D186C4FB(iParam0, 11));
	iVar3 = unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4));
	if ((((!bVar0 == Global_76808 || !iParam1 == Global_76809) || !iVar1 == Global_76810) || !iVar2 == Global_76811) || !iVar3 == Global_76812)
	{
		Global_76808 = bVar0;
		Global_76809 = iParam1;
		Global_76810 = iVar1;
		Global_76811 = iVar2;
		Global_76812 = iVar3;
		Global_76813 = func_301(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 76)
				{
					Global_76813 = 80;
				}
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 78;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 78;
				}
			}
		}
	}
	return Global_76813;
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x3FB4D40A857CEA77(iParam0, 11);
	if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x36FE6D3220816ADA(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	if (unk_0x4D0432E34C5996D9(iVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if ((unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8)) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		return func_305(iParam0, iParam1);
	}
	if (func_304(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x21A69BE7599CD8B7(iParam0, 11, iVar0, unk_0x79AFA009D186C4FB(iParam0, 11));
		if (unk_0x4D0432E34C5996D9(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_303(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_383(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_383(iVar5);
						break;
					}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_302(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_383(iVar5);
					break;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_305(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, -1086258388, 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return func_305(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return func_305(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_305(iParam0, iParam1) + 15;
				}
				else
				{
					return func_305(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return func_305(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_305(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return func_305(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1);
			}
			else
			{
				return func_305(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1) + 15;
			}
			else
			{
				return func_305(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_383(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_302(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_304(int iParam0)
{
	if (unk_0x4D0432E34C5996D9(unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_306(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	var uVar68;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	Global_76647[1 /*14*/] = { func_413(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_260(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_306(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_254(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_306(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_76647[2 /*14*/] = { func_413(iVar0, 14, iVar6, -1) };
									if (Global_76647[2 /*14*/].f_12 == iVar5)
									{
										if (func_306(iParam0, 14, iVar6))
										{
											if (!func_273(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_76647[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_266(iParam0, iVar4);
						Global_76647[2 /*14*/] = { func_413(iVar0, iVar4, iVar1, -1) };
						if (!func_273(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_76647[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_189(1758, Global_76644, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar36 = { func_254(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_306(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xA98E0435012EAF07(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_3 && (unk_0x77A103B794FA7737(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_4 || Global_76647[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_76647[1 /*14*/].f_12 == 0 && unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6)) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("HELMET"), 1)) && unk_0xA45BF7AC8135700A(Global_2621444) > 0)
		{
			iVar50 = unk_0xA45BF7AC8135700A(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				unk_0xCEF761DD8AA53871(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != joaat("0"))
				{
					unk_0x8BC52CDFCD2A4534(&Var51);
					unk_0x033BD1CDBF721494(iVar47, &Var51);
					if (Var51.f_3 == unk_0xA98E0435012EAF07(iParam0, Global_76647[1 /*14*/].f_12) && Var51.f_4 == unk_0x77A103B794FA7737(iParam0, Global_76647[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar46++;
			}
		}
	}
	else
	{
		if (Global_76647[1 /*14*/].f_3 == unk_0x3FB4D40A857CEA77(iParam0, func_197(iParam1)) && Global_76647[1 /*14*/].f_4 == unk_0x79AFA009D186C4FB(iParam0, func_197(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_76646++;
			if (Global_76646 == 1)
			{
				if (func_296(iVar0, 11, func_266(iParam0, 11), -1))
				{
					if (func_294(iVar0, 4, iParam2, &uVar68))
					{
						return func_306(iParam0, 4, uVar68);
					}
				}
				else if (func_293(iVar0, 4, iParam2, &uVar68))
				{
					return func_306(iParam0, 4, uVar68);
				}
			}
			Global_76646 = (Global_76646 - 1);
		}
	}
	return 0;
}

int func_307(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_304(iParam0))
	{
		return -99;
	}
	if (func_308(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_275(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0x164989BEE998606B(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return func_256(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_275(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0x164989BEE998606B(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0x0CB8E5A136C709DC(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return func_256(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_308(int iParam0)
{
	if (unk_0x4D0432E34C5996D9(unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8)), joaat("X17_DRAW_6"), 0))
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = unk_0x36FE6D3220816ADA(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_310(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	bool bVar19;
	int iVar20;
	
	if (!unk_0x36E2FC4B39D3018D(iParam0))
	{
	}
	unk_0x296AF85CC6E891AF(iParam0, &Var0);
	iVar10 = func_189(2096, iParam1, 0);
	iVar11 = func_189(2097, iParam1, 0);
	iVar12 = func_189(2098, iParam1, 0);
	iVar13 = func_189(2099, iParam1, 0);
	iVar14 = func_189(2100, iParam1, 0);
	iVar15 = func_189(2101, iParam1, 0);
	fVar16 = func_326(134, iParam1);
	fVar17 = func_326(135, iParam1);
	fVar18 = func_326(136, iParam1);
	bVar19 = func_285(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		unk_0x5B5751111E879A6F(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_189(2102, iParam1, 0);
		if (iVar20 > 0)
		{
			func_311(iParam0, iParam1, 0);
		}
	}
}

void func_311(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_325(iVar1);
		if (!bParam2)
		{
			fVar3 = func_326(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_324(iVar2, iParam1);
		}
		unk_0x69D0D9BA8F4533D8(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_323(iVar4);
		iVar6 = func_322(iVar5);
		iVar7 = func_321(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_318(iVar6, iParam1, -1);
				uVar11 = func_326(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_317(iVar6, iParam1);
				uVar11 = func_324(iVar7, iParam1);
			}
			unk_0xE5E78CECD32206A8(iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_316(iVar5);
			iVar9 = func_315(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_189(iVar8, iParam1, 0);
					iVar14 = func_189(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_314(iVar8, iParam1);
					iVar14 = func_314(iVar9, iParam1);
				}
				func_313(iVar13, &uVar12, &uVar15);
				unk_0x522472ED486C5BFE(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_312(&iParam0, iParam1, bParam2);
}

void func_312(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_326(157, iParam1);
	}
	else
	{
		fVar0 = func_324(157, iParam1);
	}
	if (*iParam0 == unk_0x9B0761B4C3EB8BC7())
	{
	}
	unk_0x0C5A9B65B745AF78(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_313(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_314(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2551832[iParam0 /*3*/][func_190(iParam1)];
	if (unk_0xB759F48CD364B4FE(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2160;
		
		case 1:
			return 2161;
		
		case 5:
			return 2162;
		
		case 8:
			return 2163;
		
		case 10:
			return 2158;
		
		default:
	}
	return -1;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2153;
		
		case 1:
			return 2154;
		
		case 5:
			return 2155;
		
		case 8:
			return 2156;
		
		case 10:
			return 2157;
		
		default:
	}
	return -1;
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_191();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
		iVar2 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	if (!unk_0x4C0B69611CC6D65F(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_191();
	}
	iVar0 = 0;
	iVar1 = func_320(iParam0, iParam1);
	uVar2 = func_319(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_320(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_191();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_324(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587146[iParam0 /*3*/][func_190(iParam1)];
	if (unk_0x04DDD94898CB0D4F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_326(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587146[iParam0 /*3*/][func_190(iParam1)];
	if (unk_0xB734B6962B239811(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<7> Var21;
	int iVar38;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4268255 == iParam1)
		{
			iVar2 = Global_4268254;
			iVar1 = Global_4268253;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_275(iParam0, iParam1, 7, 3);
			iVar1 = func_383(iVar2);
			Global_4268255 = iParam1;
			Global_4268254 = iVar2;
			Global_4268253 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4268258 == iParam3)
		{
			iVar4 = Global_4268257;
			iVar3 = Global_4268256;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_275(iParam0, iParam3, 11, 3);
			iVar3 = func_383(iVar4);
			Global_4268258 = iParam3;
			Global_4268257 = iVar4;
			Global_4268256 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4268261 == iParam4)
		{
			iVar6 = Global_4268260;
			iVar5 = Global_4268259;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_275(iParam0, iParam4, 8, 3);
			iVar5 = func_383(iVar6);
			Global_4268261 = iParam4;
			Global_4268260 = iVar6;
			Global_4268259 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4268264 == iParam10)
		{
			iVar8 = Global_4268263;
			iVar7 = Global_4268262;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_275(iParam0, iParam10, 1, 3);
			iVar7 = func_383(iVar8);
			Global_4268264 = iParam10;
			Global_4268263 = iVar8;
			Global_4268262 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x4D0432E34C5996D9(iVar4, joaat("MORPH_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("SCUBA_GEAR"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar8, joaat("HEADSCARF"), 0) && !unk_0x4D0432E34C5996D9(iVar8, joaat("SMUG_DRAW_6"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (unk_0x4D0432E34C5996D9(iVar2, 1930035188, 0))
		{
			if (func_387(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar2, joaat("EPSILON_CHAIN"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x4D0432E34C5996D9(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_275(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case joaat("DLC_MP_EXEC_M_PHEAD_1_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_1"):
					case joaat("DLC_MP_BEACH_M_HEAD0_2"):
					case joaat("DLC_MP_BEACH_M_HEAD0_3"):
					case joaat("DLC_MP_BEACH_M_HEAD0_4"):
					case joaat("DLC_MP_BEACH_M_HEAD0_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_20"):
					case joaat("DLC_MP_GR_M_PHEAD_7_0"):
					case joaat("DLC_MP_GR_M_PHEAD_7_1"):
					case joaat("DLC_MP_GR_M_PHEAD_7_2"):
					case joaat("DLC_MP_GR_M_PHEAD_7_3"):
					case joaat("DLC_MP_GR_M_PHEAD_7_4"):
					case joaat("DLC_MP_GR_M_PHEAD_7_5"):
					case joaat("DLC_MP_GR_M_PHEAD_7_6"):
					case joaat("DLC_MP_GR_M_PHEAD_7_7"):
					case joaat("DLC_MP_GR_M_PHEAD_7_8"):
					case joaat("DLC_MP_GR_M_PHEAD_7_9"):
					case joaat("DLC_MP_GR_M_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("SCARF"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar2, joaat("JACKET_SCARF"), 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x4D0432E34C5996D9(iVar4, joaat("BLOCK_SCARFS"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_329(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x4D0432E34C5996D9(iVar4, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				else if (func_329(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x4D0432E34C5996D9(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x4D0432E34C5996D9(iVar8, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("LUXE_SCARF"), 0))
			{
				if (((unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("SCARF"), 0)) || (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("BIG_CHAIN"), 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_275(iParam0, iParam11, 4, 3);
				}
				if (unk_0x4D0432E34C5996D9(iVar10, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("BEAD_NECKLACE"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar4, joaat("SWEAT_VEST"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_20"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar2, joaat("BIG_CHAIN"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x4D0432E34C5996D9(iVar2, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x4D0432E34C5996D9(iVar4, joaat("BLOCK_CHAINS"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("TUX_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("XMAS2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -1086258388, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SCRUFFY_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_13"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_16"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_21"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JACKET_ONLY"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (!unk_0x4D0432E34C5996D9(iVar2, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("BLOCK_CHAINS"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("STUNT_DRAW_2"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("BIG_CHAIN"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0x4D0432E34C5996D9(func_275(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x4D0432E34C5996D9(func_275(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_BOMB"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_BOMB"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_BOMB"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_BOMB"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("BIKER_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("BIKER_DRAW_25"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("GUN_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("AIR_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SMUG_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x4D0432E34C5996D9(iVar6, joaat("ALLOW_TIES"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("VEST_SHIRT"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("CLOSED_COLLAR"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("OPEN_COLLAR"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_SHIRT"), 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0x4D0432E34C5996D9(iVar4, joaat("OUTFIT_CHECKS"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x4D0432E34C5996D9(iVar2, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("TIE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_387(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_4"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_21"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_SHIRT"), 0)))
				{
					if (unk_0x4D0432E34C5996D9(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_266(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_383(func_275(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_387(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_4"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SWEAT_VEST"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("VEST_SHIRT"), 0))) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_VEST"), 0))) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_SHIRT"), 0))) || unk_0x4D0432E34C5996D9(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (unk_0x4D0432E34C5996D9(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_266(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_383(func_275(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x4D0432E34C5996D9(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x4D0432E34C5996D9(iVar2, joaat("VEST_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_0"), 0)) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_0")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_1")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_0")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_1")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_3"))
				{
					if (!unk_0x4D0432E34C5996D9(iVar4, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("VEST_SHIRT"), 0))) || unk_0x4D0432E34C5996D9(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
					if (unk_0x4D0432E34C5996D9(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x4D0432E34C5996D9(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x4D0432E34C5996D9(iVar2, joaat("TUX_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x4D0432E34C5996D9(iVar4, joaat("TUX_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_VEST"), 0)) && unk_0x4D0432E34C5996D9(iVar2, joaat("TUX_TIE_ALT"), 0)) || (((iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_SHIRT"), 0)) && !unk_0x4D0432E34C5996D9(iVar2, joaat("TUX_TIE_ALT"), 0)) && !unk_0x4D0432E34C5996D9(iVar6, joaat("HIGH_ROLLER_SHIRT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x4D0432E34C5996D9(iVar2, joaat("LOOSE_BOWTIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_2")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_3")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_4")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_5")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_6")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_7")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_8")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || unk_0x4D0432E34C5996D9(iVar6, joaat("HEIST_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("DRAW_11"), 0))
				{
					if (!unk_0x4D0432E34C5996D9(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0x4D0432E34C5996D9(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x4D0432E34C5996D9(iVar2, joaat("LOOSE_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x4D0432E34C5996D9(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_0")) || iVar6 == joaat("DLC_MP_BIKER_M_SPECIAL_9_1")) || unk_0x4D0432E34C5996D9(iVar6, joaat("HEIST_DRAW_5"), 0))
				{
					if (!unk_0x4D0432E34C5996D9(iVar6, joaat("SWEAT_VEST"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0x4D0432E34C5996D9(iVar6, joaat("SWEAT_VEST"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x4D0432E34C5996D9(iVar2, joaat("SLACK_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x4D0432E34C5996D9(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_328(iVar6)) || (iVar6 != -1 && unk_0x4D0432E34C5996D9(iVar6, joaat("DRAW_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x4D0432E34C5996D9(iVar2, joaat("SCARF"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_4"), 0)) || (iVar4 != -1 && unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x4D0432E34C5996D9(iVar4, joaat("PILOT_SUIT"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4268255 == iParam1)
		{
			iVar12 = Global_4268254;
			iVar11 = Global_4268253;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_275(iParam0, iParam1, 7, 4);
			iVar11 = func_383(iVar12);
			Global_4268255 = iParam1;
			Global_4268254 = iVar12;
			Global_4268253 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4268258 == iParam3)
		{
			iVar14 = Global_4268257;
			iVar13 = Global_4268256;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_275(iParam0, iParam3, 11, 4);
			iVar13 = func_383(iVar14);
			Global_4268258 = iParam3;
			Global_4268257 = iVar14;
			Global_4268256 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4268261 == iParam4)
		{
			iVar16 = Global_4268260;
			iVar15 = Global_4268259;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_275(iParam0, iParam4, 8, 4);
			iVar15 = func_383(iVar16);
			Global_4268261 = iParam4;
			Global_4268260 = iVar16;
			Global_4268259 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4268264 == iParam10)
		{
			iVar18 = Global_4268263;
			iVar17 = Global_4268262;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_275(iParam0, iParam10, 1, 4);
			iVar17 = func_383(iVar18);
			Global_4268264 = iParam10;
			Global_4268263 = iVar18;
			Global_4268262 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_275(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0x4D0432E34C5996D9(iVar14, joaat("MORPH_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar14, joaat("SCUBA_GEAR"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("CAT_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar18, joaat("HEADSCARF"), 0) && !unk_0x4D0432E34C5996D9(iVar18, joaat("SMUG_DRAW_6"), 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("CUFF"), 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x4D0432E34C5996D9(iVar18, joaat("HEADSCARF"), 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x4D0432E34C5996D9(iVar12, 1930035188, 0))
		{
			if (func_387(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar14, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar12, joaat("EPSILON_CHAIN"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar14, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar12, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case joaat("DLC_MP_EXEC_F_PHEAD_1_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_F_PHEAD_10_20"):
					case joaat("DLC_MP_GR_F_PHEAD_7_0"):
					case joaat("DLC_MP_GR_F_PHEAD_7_1"):
					case joaat("DLC_MP_GR_F_PHEAD_7_2"):
					case joaat("DLC_MP_GR_F_PHEAD_7_3"):
					case joaat("DLC_MP_GR_F_PHEAD_7_4"):
					case joaat("DLC_MP_GR_F_PHEAD_7_5"):
					case joaat("DLC_MP_GR_F_PHEAD_7_6"):
					case joaat("DLC_MP_GR_F_PHEAD_7_7"):
					case joaat("DLC_MP_GR_F_PHEAD_7_8"):
					case joaat("DLC_MP_GR_F_PHEAD_7_9"):
					case joaat("DLC_MP_GR_F_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
			if (unk_0x4D0432E34C5996D9(iVar16, joaat("OVER_JACKET"), 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("SCARF"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar12, joaat("JACKET_SCARF"), 0))
				{
					if ((((((((((((((((unk_0x4D0432E34C5996D9(iVar14, joaat("BLOCK_SCARFS"), 0) || unk_0x4D0432E34C5996D9(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_329(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_329(iParam0, iParam3) || unk_0x4D0432E34C5996D9(iVar14, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x4D0432E34C5996D9(iVar18, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("LUXE_SCARF"), 0))
			{
				if ((((unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("SCARF"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar16, joaat("BLOCK_SCARFS"), 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("CHAIN"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar16, joaat("BLOCK_CHAINS"), 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0x4D0432E34C5996D9(func_275(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x4D0432E34C5996D9(func_275(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("SCARF"), 0)) || (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("BIG_CHAIN"), 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_275(iParam0, iParam11, 4, 4);
				}
				if (unk_0x4D0432E34C5996D9(iVar20, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x4D0432E34C5996D9(iVar12, joaat("TIE"), 0) || unk_0x4D0432E34C5996D9(iVar12, joaat("BOWTIE"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_5"), 0) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_11"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -872449705, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_25"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_9"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_9"), 0) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_11"), 0)) || unk_0x4D0432E34C5996D9(iVar14, 144417099, 0))
				{
					if (unk_0x4D0432E34C5996D9(iVar12, joaat("BOWTIE"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 == 8)
			{
				if (unk_0x4D0432E34C5996D9(iVar16, joaat("OPEN_COLLAR"), 0) || unk_0x4D0432E34C5996D9(iVar16, joaat("CLOSED_COLLAR"), 0))
				{
					if (unk_0x4D0432E34C5996D9(iVar12, joaat("TIE"), 0))
					{
						if (unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_8"), 0) || unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_9"), 0))
						{
							if (unk_0x4D0432E34C5996D9(iVar12, joaat("ALT_TIE"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x4D0432E34C5996D9(iVar12, joaat("ALT_TIE"), 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0x4D0432E34C5996D9(iVar19, joaat("EARRING"), 1)) || (iVar19 != -1 && unk_0x4D0432E34C5996D9(iVar19, joaat("BLOCK_EARRINGS"), 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x4D0432E34C5996D9(iVar12, 1930035188, 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar14, joaat("DRESS"), 0))
			{
				return 1;
			}
		}
		if (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_5"), 0) || unk_0x4D0432E34C5996D9(iVar14, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (func_387(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x4D0432E34C5996D9(iVar14, joaat("TAILS_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -430330349, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("EXEC_DRAW_14"), 0)) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar14 == joaat("DLC_MP_IND_F_JBIB_1_1")) || unk_0x4D0432E34C5996D9(iVar14, joaat("SMUG_DRAW_5"), 0))
				{
					if (!unk_0x4D0432E34C5996D9(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x4D0432E34C5996D9(iVar14, joaat("DRESS"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("VEST_SHIRT"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("PILOT_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_TOP"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_SWEAT"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("XMAS2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -1086258388, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_13"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -1103045158, 0)) || unk_0x4D0432E34C5996D9(iVar14, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (unk_0x4D0432E34C5996D9(iVar12, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x4D0432E34C5996D9(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LUXE_DRAW_11"), 0)) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_0")) || iVar16 == joaat("DLC_MP_HEIST_F_SPECIAL_12_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_0")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_1")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_2")) || iVar16 == joaat("DLC_MP_HIPS_F_ACCS3_3")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS0_2")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_0")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_1")) || iVar16 == joaat("DLC_MP_VAL_F_ACCS1_2")) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW2_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("APART_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("EXEC_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("EXEC_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("EXEC_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("EXEC_DRAW_17"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BIKER_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BIKER_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BIKER_DRAW_33"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("SMUG_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("BLOCK_CHAINS"), 0))
				{
					if (!unk_0x4D0432E34C5996D9(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x4D0432E34C5996D9(iVar16, joaat("VEST_SHIRT"), 0) || unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar16, 1353777856, 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("APART_DRAW_1"), 0))
				{
					return 0;
				}
				else if (func_384(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x4D0432E34C5996D9(iVar12, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("BEAD_NECKLACE"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_21"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x4D0432E34C5996D9(iVar12, joaat("CUFF"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x4D0432E34C5996D9(func_275(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x4D0432E34C5996D9(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x4D0432E34C5996D9(func_275(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x4D0432E34C5996D9(iVar19, joaat("CUFF"), 1))
				{
					unk_0x033BD1CDBF721494(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x4D0432E34C5996D9(func_275(iParam0, iParam4, 8, 4), joaat("LONG_SLEEVE"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x4D0432E34C5996D9(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("VEST_SHIRT"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_0"), 0))) || unk_0x4D0432E34C5996D9(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -430330349, 0)) || unk_0x4D0432E34C5996D9(iVar14, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("EXEC_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("BIKER_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("BIKER_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("BIKER_DRAW_16"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("MORPH_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("AIR_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("ASSAULT_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x4D0432E34C5996D9(iVar12, joaat("LONG_NECKLACE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("DRAW_0"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_0"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_DRAW_3"), 0))) || unk_0x4D0432E34C5996D9(iVar14, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("VEST_SHIRT"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar14, -430330349, 0)) || unk_0x4D0432E34C5996D9(iVar14, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_18"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_21"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("EXEC_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("BIKER_DRAW_19"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("AIR_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar14, joaat("BLOCK_CHAINS"), 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LONG_SLEEVE"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("COMBAT_GEAR"), 0))) || unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					if (iParam1 >= 55 && unk_0x4D0432E34C5996D9(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar16, joaat("VEST_SHIRT"), 0))
				{
					if (unk_0x4D0432E34C5996D9(iVar12, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
				else if (((unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_1"), 0) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
				else if ((unk_0x4D0432E34C5996D9(iVar16, joaat("ALT_SPECIAL_4"), 0) || unk_0x4D0432E34C5996D9(iVar16, joaat("ALT_SPECIAL_5"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("ALT_SPECIAL_6"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x4D0432E34C5996D9(iVar19, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("DRESS"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("LOW_SWEAT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0x4D0432E34C5996D9(iVar14, joaat("DRESS"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar16, joaat("SWEAT_VEST"), 0) || unk_0x4D0432E34C5996D9(iVar16, joaat("BASIC_VEST"), 0))
				{
					return 0;
				}
				else if (((unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_1"), 0) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar16, joaat("STUNT_DRAW_4"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar18, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x4D0432E34C5996D9(iVar12, joaat("HIGH_ROLLER_TIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar16, joaat("HIGH_ROLLER_SHIRT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x4D0432E34C5996D9(iVar12, joaat("BRACES"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x4D0432E34C5996D9(iVar14, joaat("LOW2_DRAW_7"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar38 = -1;
				if (iParam11 >= 256)
				{
					iVar38 = func_275(iParam0, iParam11, 4, 4);
				}
				if (unk_0x4D0432E34C5996D9(iVar38, joaat("HIGH_WAIST"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_328(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BUSI_M_ACCS4_0"):
		case joaat("DLC_MP_BUSI_M_ACCS5_0"):
		case joaat("DLC_MP_BUSI_M_ACCS4_1"):
		case joaat("DLC_MP_BUSI_M_ACCS5_1"):
		case joaat("DLC_MP_BUSI_M_ACCS4_2"):
		case joaat("DLC_MP_BUSI_M_ACCS5_2"):
		case joaat("DLC_MP_BUSI_M_ACCS4_3"):
		case joaat("DLC_MP_BUSI_M_ACCS5_3"):
		case joaat("DLC_MP_BUSI_M_ACCS4_4"):
		case joaat("DLC_MP_BUSI_M_ACCS5_4"):
		case joaat("DLC_MP_BUSI_M_ACCS4_5"):
		case joaat("DLC_MP_BUSI_M_ACCS5_5"):
		case joaat("DLC_MP_BUSI_M_ACCS4_6"):
		case joaat("DLC_MP_BUSI_M_ACCS5_6"):
		case joaat("DLC_MP_BUSI_M_ACCS4_7"):
		case joaat("DLC_MP_BUSI_M_ACCS5_7"):
		case joaat("DLC_MP_BUSI_M_ACCS4_8"):
		case joaat("DLC_MP_BUSI_M_ACCS5_8"):
		case joaat("DLC_MP_BUSI_M_ACCS4_9"):
		case joaat("DLC_MP_BUSI_M_ACCS5_9"):
		case joaat("DLC_MP_BUSI_M_ACCS4_10"):
		case joaat("DLC_MP_BUSI_M_ACCS5_10"):
		case joaat("DLC_MP_BUSI_M_ACCS4_11"):
		case joaat("DLC_MP_BUSI_M_ACCS5_11"):
		case joaat("DLC_MP_BUSI_M_ACCS4_12"):
		case joaat("DLC_MP_BUSI_M_ACCS5_12"):
		case joaat("DLC_MP_BUSI_M_ACCS4_13"):
		case joaat("DLC_MP_BUSI_M_ACCS5_13"):
		case joaat("DLC_MP_BUSI_M_ACCS4_14"):
		case joaat("DLC_MP_BUSI_M_ACCS5_14"):
		case joaat("DLC_MP_BUSI_M_ACCS4_15"):
		case joaat("DLC_MP_BUSI_M_ACCS5_15"):
			return 1;
			break;
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_275(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar0, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("JAN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("JAN_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("AIR_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("USE_JACKET_SCARF"), 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x4D0432E34C5996D9(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				return 1;
			}
		}
		return func_387(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_275(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_383(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x4D0432E34C5996D9(iVar1, joaat("JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("COMBAT_TOP"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("HEIST_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar1, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("LOW2_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar1, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("APART_DRAW_18"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar1, joaat("AIR_DRAW_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_330(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	func_378(unk_0x856D5567211886A2("hairOverlay"), iParam0);
	iVar1 = func_377(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_76644;
		}
		func_403(iVar1, 1, iParam2);
	}
	func_331(iParam0, bParam3, 0, -1);
}

void func_331(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = Global_76644;
		unk_0x443E8898EC3BFCA4(iParam0);
		iVar14 = func_376(iParam0);
		bVar15 = func_371(iParam0, 0);
		bVar16 = func_367(iParam0);
		bVar17 = func_366(iParam0, iParam3);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_363(iVar18, iVar0))
			{
				if (func_358(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_355(iParam0, &Var1, iVar18, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						unk_0x82FA00D60EA69639(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_363(123, iVar0))
		{
			if (unk_0x66A28B897BF8DCD6(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				unk_0x82FA00D60EA69639(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = unk_0x216706BE4E404359(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (unk_0x2DAC7C01A793AD7E(iVar14, iVar19, &Var21))
			{
				if (!unk_0x14AC70FD8926649E(Var21))
				{
					iVar36 = (129 + iVar19);
					if (func_363(iVar36, iVar0))
					{
						if (func_355(iParam0, &(Var21.f_7), iVar36, Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							if (!func_333(Var21.f_2, Var21.f_3, iVar36))
							{
								unk_0x82FA00D60EA69639(iParam0, Var21.f_2, Var21.f_3);
								func_332(iParam0, Var21.f_2, Var21.f_3);
							}
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_332(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1368357453:
			switch (iParam2)
			{
				case 901985554:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -125935718);
					break;
				
				case -1199174880:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -1060131742);
					break;
				
				case 1450237635:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -1305394591);
					break;
				
				case -389741205:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 667969632);
					break;
				
				case -141257402:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -1359014181);
					break;
				
				case 153754618:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 2081465940);
					break;
				
				case 659374865:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -465054321);
					break;
				
				case -13136248:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 775081672);
					break;
				
				case -1132960710:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 106529549);
					break;
				
				case 1993003331:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -914124698);
					break;
				
				case -625419875:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 621839126);
					break;
				
				case -774542024:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 1907053018);
					break;
				
				case 888079344:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 1813906196);
					break;
				
				case -700883358:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 773995069);
					break;
				
				case -13127060:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 1207511209);
					break;
				
				case -1825878923:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -1417506982);
					break;
				
				case -308681510:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -952353610);
					break;
				
				case -2032106950:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 595710974);
					break;
				
				case 921664999:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, -1317513903);
					break;
				
				case 1700345329:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 1607579128);
					break;
				
				case -46539229:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 90277989);
					break;
				
				case 552527284:
					unk_0x82FA00D60EA69639(iParam0, -1368357453, 1999546193);
					break;
			}
			break;
		
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
				
				case joaat("CasinoTop_M_1"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_2"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_3"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_4"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_5"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_6"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_7"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
				
				case joaat("CasinoTop_M_8"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
				
				case joaat("CasinoTop_M_9"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_10"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_11"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
				
				case joaat("CasinoTop_M_12"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
				
				case joaat("CasinoTop_M_13"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
				
				case joaat("CasinoTop_M_14"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
				
				case joaat("CasinoTop_M_15"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
				
				case joaat("CasinoTop_M_16"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
				
				case joaat("CasinoTop_M_17"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
				
				case joaat("CasinoTop_M_18"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
				
				case joaat("CasinoTop_M_19"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
				
				case joaat("CasinoTop_M_20"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_22"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_23"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
				
				case joaat("CasinoTop_M_24"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_25"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_26"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
				
				case joaat("CasinoTop_M_27"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_28"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_29"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_30"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_31"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_32"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_33"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_34"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_35"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_36"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_37"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_38"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_39"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_40"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_41"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_42"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_43"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
				
				case joaat("CasinoTop_M_44"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
				
				case joaat("CasinoTop_F_1"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_2"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_3"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_4"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_5"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_6"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_7"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
				
				case joaat("CasinoTop_F_8"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
				
				case joaat("CasinoTop_F_9"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_10"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_11"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
				
				case joaat("CasinoTop_F_12"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
				
				case joaat("CasinoTop_F_13"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
				
				case joaat("CasinoTop_F_14"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
				
				case joaat("CasinoTop_F_15"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
				
				case joaat("CasinoTop_F_16"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
				
				case joaat("CasinoTop_F_17"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
				
				case joaat("CasinoTop_F_18"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
				
				case joaat("CasinoTop_F_19"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
				
				case joaat("CasinoTop_F_20"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
				
				case joaat("CasinoTop_F_21"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_22"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_23"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
				
				case joaat("CasinoTop_F_24"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_25"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_26"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
				
				case joaat("CasinoTop_F_27"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_28"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_29"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_30"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_31"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_32"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_33"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_34"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_35"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_36"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_37"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_38"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_39"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_40"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_41"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_42"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_43"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
				
				case joaat("CasinoTop_F_44"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
					break;
			}
			break;
		
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_17_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_10_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_11_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_12_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_13_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_20_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_21_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_23_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_22_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_5_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_18_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_0_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_3_b"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_25_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_7_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_4_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_1_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_9_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_17_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_10_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_11_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_12_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_13_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_20_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_21_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_23_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_22_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_5_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_18_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_0_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_3_b"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_25_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_7_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_4_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_1_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_9_a"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Securoserv_000_Mb"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
					break;
				
				case joaat("MP_Securoserv_000_Fb"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
					break;
			}
			break;
		
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
					unk_0x82FA00D60EA69639(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					unk_0x82FA00D60EA69639(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
					unk_0x82FA00D60EA69639(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}

int func_333(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case -1368357453:
			switch (iParam1)
			{
				case 156407004:
				case 992344178:
					if (func_352(30533, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 156407004);
					break;
				
				case 850137272:
				case 530639494:
					if (func_352(30534, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 850137272);
					break;
				
				case -907859154:
				case 1472939772:
					if (func_352(30535, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -907859154);
					break;
				
				case -475744483:
				case 1057844725:
					if (func_352(30536, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -475744483);
					break;
				
				case -47667242:
				case 1810957693:
					if (func_352(30537, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -47667242);
					break;
				
				case -409012879:
				case 1261157513:
					if (func_352(30538, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -409012879);
					break;
				
				case 1327735228:
				case 1864065459:
					if (func_352(30539, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1327735228);
					break;
				
				case -187858220:
				case -1644702422:
					if (func_352(30540, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -187858220);
					break;
				
				case 1452108911:
				case -1603076035:
					if (func_352(30541, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1452108911);
					break;
				
				case -1932584643:
				case -310682988:
					if (func_352(30542, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1932584643);
					break;
				
				case -252057754:
				case 2103214089:
					if (func_352(30543, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -252057754);
					break;
				
				case 116007471:
				case 2133791411:
					if (func_352(30544, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 116007471);
					break;
				
				case -463212372:
				case 70168645:
					if (func_352(30545, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -463212372);
					break;
				
				case -1171053658:
				case -669229192:
					if (func_352(30546, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1171053658);
					break;
				
				case -990049180:
				case 620186715:
					if (func_352(30547, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -990049180);
					break;
				
				case -1617127026:
				case 519116877:
					if (func_352(30548, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1617127026);
					break;
				
				case 1770910373:
				case -1586273681:
					if (func_352(30549, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1770910373);
					break;
				
				case -2143701887:
				case -72045715:
					if (func_352(30550, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -2143701887);
					break;
				
				case 1999836107:
				case 1105733954:
					if (func_352(30551, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1999836107);
					break;
				
				case 417383307:
				case -1733868774:
					if (func_352(30552, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 417383307);
					break;
				
				case -2136840722:
				case 75001248:
					if (func_352(30553, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -2136840722);
					break;
				
				case -83336071:
				case -351320953:
					if (func_352(30554, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -83336071);
					break;
				
				case -1391222343:
				case -1824952815:
					if (func_352(30555, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1391222343);
					break;
				
				case -1715443581:
				case -548539487:
					if (func_352(30556, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1715443581);
					break;
				
				case 1673024230:
				case -925164242:
					if (func_352(30557, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1673024230);
					break;
				
				case -1832442562:
				case 887187828:
					if (func_352(30524, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1832442562);
					break;
				
				case 2086548996:
				case 249518856:
					if (func_352(30525, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 2086548996);
					break;
				
				case 1006203940:
				case -1491875241:
					if (func_352(30526, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1006203940);
					break;
				
				case -1032809603:
				case 1114248050:
					if (func_352(30527, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1032809603);
					break;
				
				case 1054867669:
				case 335686386:
					if (func_352(30528, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1054867669);
					break;
				
				case -1911088924:
				case -773349244:
					if (func_352(30529, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1911088924);
					break;
				
				case 983574619:
				case -1153521254:
					if (func_352(30530, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 983574619);
					break;
				
				case 2119361460:
				case 449125530:
					if (func_352(30531, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 2119361460);
					break;
				
				case 596636884:
				case -1089524784:
					if (func_352(30532, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 596636884);
					break;
				
				case 1510632880:
				case -594316604:
					if (func_352(30570, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1510632880);
					break;
				
				case 1912778271:
				case 1362488454:
					if (func_352(30571, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1912778271);
					break;
				
				case 686668863:
				case -304462319:
					if (func_352(30568, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 686668863);
					break;
				
				case 235066951:
				case 1884986113:
					if (func_352(30569, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 235066951);
					break;
				
				case -389741205:
				case -13127060:
					if (func_352(30634, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -389741205);
					break;
				
				case -141257402:
				case -1825878923:
					if (func_352(30635, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -141257402);
					break;
				
				case -1976007910:
				case -389955533:
					if (func_352(30636, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1976007910);
					break;
				
				case -371038609:
				case -485599033:
					if (func_352(30637, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -371038609);
					break;
				
				case 153754618:
				case -308681510:
					if (func_352(30703, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 153754618);
					break;
				
				case 659374865:
				case -2032106950:
					if (func_352(30704, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 659374865);
					break;
				
				case -13136248:
				case 921664999:
					if (func_352(30700, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -13136248);
					break;
				
				case -1132960710:
				case 1700345329:
					if (func_352(30701, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1132960710);
					break;
				
				case 1993003331:
				case -46539229:
					if (func_352(30702, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1993003331);
					break;
				
				case -625419875:
				case 552527284:
					if (func_352(30699, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -625419875);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_352(30260, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_352(30261, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_352(30262, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_352(30263, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_352(30264, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_352(30265, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_352(30266, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_352(30267, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_352(30268, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_352(30269, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_352(30270, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_352(30271, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_352(30272, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_352(30273, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_352(30274, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_352(30275, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_352(30276, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_352(30277, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_352(30278, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_352(30279, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_352(30280, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_352(30281, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_352(30282, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_352(30283, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_352(30284, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_352(30285, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_352(30286, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_352(30287, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_352(30288, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_352(30289, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1610210252);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -417116499:
				case -779574408:
					if (func_352(28255, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -417116499);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case 1246110729:
				case -1361908447:
					if (func_347(89, -1) || func_352(30254, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_347(90, -1) || func_352(30255, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_347(92, -1) || func_352(30256, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_347(89, -1) && func_347(90, -1)) && func_347(92, -1)) && func_347(91, -1)) || func_352(30257, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == -1414541879);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (func_347(78, -1) || func_352(28199, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((func_347(77, -1) && func_347(78, -1)) && func_346(92, -1) >= func_345(92, 5, 9)) || func_352(28200, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((func_346(93, -1) >= func_345(93, 5, 9) && func_347(79, -1)) && func_347(80, -1)) || func_352(28204, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (func_347(81, -1) || func_352(28206, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_346(94, -1) >= func_345(94, 5, 9) || func_352(28207, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((func_347(84, -1) && func_347(85, -1)) && func_346(97, -1) >= func_345(97, 5, 9)) || func_352(28212, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (func_352(28249, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (func_352(28183, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (func_352(28182, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (func_352(28184, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (func_352(28181, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (func_352(28178, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (func_352(28177, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (func_352(28176, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (func_352(28180, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (func_352(28179, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((func_352(28176, -1, -1) && func_352(28177, -1, -1)) && func_352(28178, -1, -1)) && func_352(28179, -1, -1)) && func_352(28180, -1, -1)) && func_352(28181, -1, -1)) && func_352(28182, -1, -1)) && func_352(28183, -1, -1)) && func_352(28184, -1, -1)) || func_352(28221, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (func_352(28191, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (func_352(28190, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (func_352(28189, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (func_342(0, 1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((func_347(77, -1) && func_347(78, -1)) && func_346(92, -1) >= func_345(92, 5, 9)) && func_346(93, -1) >= func_345(93, 5, 9)) && func_347(79, -1)) && func_347(80, -1)) && func_347(81, -1)) && func_346(94, -1) >= func_345(94, 5, 9)) && func_346(95, -1) >= func_345(95, 5, 9)) && func_347(82, -1)) && func_347(83, -1)) && func_346(96, -1) >= func_345(96, 5, 9)) && func_347(84, -1)) && func_347(85, -1)) && func_346(97, -1) >= func_345(97, 5, 9)) && func_347(86, -1)) && func_347(87, -1)) && func_347(88, -1)) || func_352(28222, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (func_352(27109, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (func_352(27110, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (func_352(27111, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (func_352(27112, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (func_352(27113, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (func_352(27114, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (func_352(27115, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (func_352(25032, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (func_352(25033, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (func_352(25034, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (func_352(25035, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (func_352(25036, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (func_352(25037, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (func_352(25038, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (func_352(25039, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (func_352(25040, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (func_352(25041, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (func_352(25042, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (func_352(25043, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (func_352(25044, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (func_352(25045, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (func_352(25046, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (func_352(25047, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (func_352(25048, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (func_352(25049, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (func_352(25050, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (func_352(25051, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (func_352(25052, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (func_352(25053, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (func_352(25054, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (func_352(25055, -1, -1))
					{
						return 0;
					}
					if (func_352(27077, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (func_352(25056, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (func_352(25057, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (func_352(25058, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (func_352(25059, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (func_352(25060, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (func_352(25061, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (func_352(25062, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (func_352(25063, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (func_352(25064, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (func_352(25065, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (func_352(25066, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (func_352(25067, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (func_352(25068, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (func_352(25069, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (func_352(25070, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (func_352(25071, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (func_352(25072, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (func_352(25073, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (func_352(25074, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (func_352(25075, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (func_352(25076, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (func_352(25077, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (func_352(25078, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (func_352(25079, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (func_352(25080, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (func_352(25081, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (func_352(25082, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (func_352(25083, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (func_352(25084, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (func_352(25085, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (func_352(25086, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (func_352(25087, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (func_352(25088, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (func_352(25089, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (func_352(25090, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (func_352(25091, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (func_352(25092, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (func_352(25093, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (func_352(25094, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (func_352(25095, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (func_352(25096, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (func_352(25097, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (func_352(25098, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (func_352(25099, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (func_352(22108, -1, -1) || func_352(25006, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (func_352(9481, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (func_352(9470, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (func_352(9475, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (func_352(9472, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (func_352(9465, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (func_352(9463, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (func_352(9464, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (func_352(9468, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (func_352(9469, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (func_352(9479, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (func_352(9473, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (func_352(9480, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (func_352(9476, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (func_352(9477, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (func_352(9471, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (func_352(9474, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (func_352(9467, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (func_352(9478, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (func_352(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (func_352(27085, -1, -1))
						{
							return 0;
						}
					}
					else if (func_352(27084, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (func_352(9466, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (func_352(22126, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (func_352(22127, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (func_352(22128, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (func_352(22124, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (func_352(22130, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (func_352(22125, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (func_352(22129, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (func_352(22131, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (func_352(22132, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (func_352(22147, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (func_352(22148, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (func_352(22149, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (func_352(22150, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (func_352(22151, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (func_352(22152, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (func_352(22153, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (func_352(22154, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (func_352(22155, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (func_352(22156, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (func_352(22157, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (func_352(22158, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (func_352(22159, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (func_352(22160, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (func_352(22161, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (func_352(22162, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (func_352(22163, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (func_352(22164, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (func_352(22165, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (func_352(22166, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (func_352(22167, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (func_352(22168, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (func_352(22169, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (func_352(22170, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (func_352(22171, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (func_352(22172, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (func_352(22173, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (func_352(22174, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (func_352(22175, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (func_352(22176, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (func_352(22177, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (func_352(22178, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (func_352(15426, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (func_352(15422, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (func_352(15423, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (func_352(15421, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (func_352(15427, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (func_352(15419, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (func_352(15420, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (func_352(15394, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (func_285(209, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (func_352(15406, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (func_352(15395, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (func_285(209, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (func_352(15410, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (func_352(15407, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (func_285(209, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (func_285(209, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (func_352(15414, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (func_352(15415, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (func_352(15399, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (func_352(15404, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (func_285(209, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (func_352(15392, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (func_352(15390, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (func_352(15402, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (func_352(15416, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (func_285(209, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (func_352(9366, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (func_352(9367, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (func_352(9369, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (func_352(9368, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (func_352(9365, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (func_352(9364, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (func_352(27078, -1, -1))
					{
						return 0;
					}
					if (func_352(9363, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (func_352(9362, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (func_352(9370, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (func_352(9371, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (func_352(9372, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (func_352(9373, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (func_352(9374, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (func_352(9384, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (func_352(9385, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (func_352(7551, -1, -1) || func_189(3790, -1, 0) >= Global_262145.f_16316)
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (func_352(7467, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (func_352(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (func_352(27083, -1, -1))
						{
							return 0;
						}
					}
					else if (func_352(27086, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (func_352(7469, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (func_352(7470, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (func_352(7471, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (func_352(7472, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (func_352(7473, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (func_352(7474, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (func_352(7475, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (func_352(7476, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (func_352(7477, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (func_352(7478, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (func_352(7479, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (func_352(7480, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (func_352(7481, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (func_352(4260, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (func_352(4257, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (func_352(4269, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (func_352(4261, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (func_352(4259, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (func_352(4268, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (func_352(4265, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (func_352(4258, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (func_352(4264, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (func_352(4267, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (func_352(4262, -1, -1))
					{
						return 0;
					}
					if (func_352(27079, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (func_352(4263, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (func_352(4266, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (func_189(2932, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (func_352(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_348(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (func_189(2932, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (func_352(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_348(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (func_352(113, -1, -1))
					{
						return 0;
					}
					return !func_348(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (func_352(27082, -1, -1))
						{
							return 0;
						}
						if (func_352(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (func_352(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (func_352(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (func_352(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (func_352(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (func_352(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (func_352(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (func_352(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (func_352(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (func_352(3779, -1, -1) || func_352(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_348(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (func_352(3770, -1, -1))
						{
							return 0;
						}
						if (func_352(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (func_352(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (func_352(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (func_352(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (func_352(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (func_352(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (func_352(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (func_352(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (func_352(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (func_352(3779, -1, -1) || func_352(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_348(iParam2, iParam1, 0);
					break;
				
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((func_352(3765, -1, -1) && func_352(3766, -1, -1)) && func_352(3767, -1, -1)) && func_352(3768, -1, -1)) && func_352(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !func_352(3593, -1, -1);
					break;
			}
			if (!Global_262145.f_7795 && !func_348(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!func_285(152, -1) && !func_352(9440, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!func_285(151, -1) && !func_352(9430, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!func_335(iParam2, -1) && !func_352(9426, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!func_335(iParam2, -1) && !func_352(9427, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!func_335(iParam2, -1) && !func_352(9428, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!func_335(iParam2, -1) && !func_352(9431, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!func_335(iParam2, -1) && !func_352(9432, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!func_335(iParam2, -1) && !func_352(9433, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!func_335(iParam2, -1) && !func_352(9439, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!func_335(iParam2, -1) && !func_352(9434, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!func_335(iParam2, -1) && !func_352(9435, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!func_335(iParam2, -1) && !func_352(9436, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!func_335(iParam2, -1) && !func_352(9429, -1, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!func_335(iParam2, -1) && !func_352(9437, -1, -1));
					break;
				
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !func_334();
					break;
			}
			break;
		
		case 1766910957:
			if ((!Global_262145.f_6600 && !func_335(iParam2, -1)) && !Global_262145.f_11567)
			{
				return 1;
			}
			break;
		
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !func_352(3608, -1, -1);
					break;
			}
			break;
		
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!func_352(3615, -1, -1) && !func_352(9438, -1, -1));
					break;
			}
			break;
		
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !func_352(3783, -1, -1);
					break;
				
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !func_352(3784, -1, -1);
					break;
				
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !func_352(3785, -1, -1);
					break;
				
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !func_352(3786, -1, -1);
					break;
				
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !func_352(3787, -1, -1);
					break;
				
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !func_352(3788, -1, -1);
					break;
				
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (func_352(27081, -1, -1))
					{
						return 0;
					}
					return !func_352(3789, -1, -1);
					break;
				
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !func_352(3790, -1, -1);
					break;
				
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !func_352(3791, -1, -1);
					break;
				
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !func_352(3792, -1, -1);
					break;
				
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_352(3793, -1, -1);
					break;
				
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_352(3794, -1, -1);
					break;
				
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_352(3795, -1, -1);
					break;
				
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_352(3796, -1, -1);
					break;
				
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_352(3797, -1, -1);
					break;
				
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_352(3798, -1, -1);
					break;
				
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_352(3799, -1, -1);
					break;
				
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_352(3800, -1, -1);
					break;
				
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_352(3801, -1, -1);
					break;
				
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = func_189(2443, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = func_189(2423, -1, 0);
						if (unk_0xCE990E643CD9D0E5(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_352(3802, -1, -1);
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_LUXE_TAT_030_M"):
				case joaat("MP_LUXE_TAT_031_M"):
					return 1;
					break;
				
				case joaat("MP_LUXE_TAT_030_F"):
				case joaat("MP_LUXE_TAT_031_F"):
					return 1;
					break;
			}
			break;
		
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !func_105();
					break;
			}
			break;
	}
	return 0;
}

bool func_334()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

bool func_335(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_338(iParam0) == 11771)
	{
		return 0;
	}
	uVar0 = func_337(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xCE990E643CD9D0E5(uVar0, func_336(iVar1));
}

int func_336(int iParam0)
{
	return (iParam0 % 32);
}

var func_337(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_189(func_338(uParam0), iParam1, 0);
	return uVar0;
}

int func_338(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_341(iVar0);
	if ((func_340() == 0 || func_339() == 0) || (func_340() == 999 && func_339() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1757;
				break;
			
			case 7:
				return 1951;
				break;
			
			case 8:
				return 1952;
				break;
			
			case 9:
				return 1953;
				break;
			
			case 10:
				return 1954;
				break;
			
			case 11:
				return 1955;
				break;
			
			case 12:
				return 1956;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
				break;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
			
			case 39:
				return 8499;
				break;
			
			case 40:
				return 8502;
				break;
			
			case 41:
				return 8505;
				break;
			
			case 42:
				return 8508;
				break;
			
			case 43:
				return 8902;
				break;
			
			case 44:
				return 8905;
				break;
			
			case 45:
				return 8908;
				break;
		}
	}
	return 11771;
}

int func_339()
{
	return Global_30969;
}

int func_340()
{
	return Global_30968;
}

int func_341(int iParam0)
{
	return (iParam0 / 32);
}

int func_342(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (19 - 1);
	if (bParam1)
	{
		iVar0 = 13;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (!func_344(iVar2) || iParam0)
		{
			if (!func_343(unk_0x460153A63B9477BC(), iVar2))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_343(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_16())
	{
		iVar0 = iParam1;
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_399, iVar0);
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 16:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_345(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
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
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
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
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24777;
				
				case 3:
					return Global_262145.f_24778;
				
				case 4:
					return Global_262145.f_24779;
				
				case 5:
					return Global_262145.f_24780;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24777;
				
				case 3:
					return Global_262145.f_24778;
				
				case 4:
					return Global_262145.f_24779;
				
				case 5:
					return Global_262145.f_24780;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24777;
				
				case 3:
					return Global_262145.f_24778;
				
				case 4:
					return Global_262145.f_24779;
				
				case 5:
					return Global_262145.f_24780;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24777;
				
				case 3:
					return Global_262145.f_24778;
				
				case 4:
					return Global_262145.f_24779;
				
				case 5:
					return Global_262145.f_24780;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
