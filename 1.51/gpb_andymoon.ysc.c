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
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&Local_202, "", 64);
	StringCopy(&Local_218, "", 64);
	iLocal_245 = -1;
	iLocal_247 = 1;
	bLocal_439 = true;
	iLocal_447 = 1;
	iLocal_451 = 1;
	iLocal_452 = 65;
	iLocal_453 = 49;
	iLocal_454 = 64;
	vLocal_242 = { ScriptParam_0.f_1[0] };
	func_118();
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_113(0);
	}
	if (func_110(func_112(unk_0xBB0808A181D4745C())))
	{
		func_113(0);
	}
	if (!func_109())
	{
		func_113(0);
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		func_113(0);
	}
	if (func_108())
	{
		func_113(0);
	}
	if (func_107())
	{
		func_113(0);
	}
	if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_106())
	{
		func_113(0);
	}
	if (unk_0x1C0640BA9A7327B3() < Global_31031 + 10000 && !func_106())
	{
		func_113(0);
	}
	StringCopy(&Local_404, "", 64);
	iLocal_299[0] = 1;
	iLocal_299[1] = 1;
	iLocal_299[2] = 1;
	func_105();
	unk_0x523BCC9DC80CD82F(iLocal_36);
	while (!unk_0xB87F6CF6E5628C67(iLocal_36))
	{
		wait(0);
	}
	if (!bLocal_436)
	{
		func_113(0);
	}
	unk_0x3F423BF5B8125A50(&cLocal_324);
	unk_0x3F423BF5B8125A50(&cLocal_340);
	iLocal_249 = 1;
	while ((!unk_0xB4AE0788C1587752(&cLocal_324) || !unk_0xB4AE0788C1587752(&cLocal_340)) || !unk_0xB87F6CF6E5628C67(iLocal_36))
	{
		wait(0);
	}
	Global_31031 = unk_0x1C0640BA9A7327B3();
	unk_0x745CE398A4B0A3C6(vLocal_242, 0,5f, 0);
	iLocal_240 = unk_0x36F2404464202779(25, iLocal_36, vLocal_242, ScriptParam_0.f_17[0], 0, true);
	func_103();
	unk_0x71199B01895C6202(iLocal_36);
	iLocal_241 = 1;
	if (unk_0xC844350D5D58C99A(iLocal_240) && func_102(iLocal_240))
	{
		unk_0xAFF39FB306F8E232(iLocal_240, 17, true);
		unk_0x11AD11297DC58CC7(iLocal_240, true);
	}
	iLocal_297 = 0;
	uLocal_442 = uLocal_442;
	uLocal_443 = uLocal_443;
	uLocal_444 = uLocal_444;
	uLocal_445 = uLocal_445;
	uLocal_446 = uLocal_446;
	MemCopy(&cLocal_304, {Local_234}, 4);
	StringConCat(&cLocal_304, "AUD", 16);
	MemCopy(&Local_308, {Local_234}, 4);
	StringConCat(&Local_308, "_RAND_", 16);
	iLocal_250 = 0;
	iLocal_298 = -1;
	iVar0 = 1;
	iVar30 = 0;
	iVar41 = 0;
	iLocal_253 = iLocal_253;
	uLocal_276[0] = uLocal_276[0];
	iLocal_254 = iLocal_254;
	uLocal_502 = uLocal_502;
	bLocal_503 = bLocal_503;
	func_101(0, 0);
	bLocal_504 = false;
	while (iVar0 == 1)
	{
		if (!func_102(iLocal_240))
		{
			func_97(func_112(unk_0xBB0808A181D4745C()));
			func_113(0);
		}
		if (!unk_0x338D6FF72D84D90F())
		{
			func_113(1);
		}
		fVar43 = func_96(unk_0x16F2683693E537C9(), iLocal_240);
		if (fVar43 < 10f && func_95())
		{
			unk_0x50155CDC2C5335FC(iLocal_240, 1, unk_0x16F2683693E537C9(), 31086, 0f, 0f, 0f, 0, -1, -1);
		}
		if (fVar43 < 8f)
		{
			unk_0x50155CDC2C5335FC(unk_0x16F2683693E537C9(), 1, iLocal_240, 31086, 0f, 0f, 0f, 0, -1, -1);
		}
		if (fVar43 < 15f)
		{
			unk_0x38C3A68D7861DCFD(0, 46, 1);
		}
		if (bLocal_504)
		{
			if (bLocal_505)
			{
				unk_0x26F63FD28070F2CE("controlledByAnim", 0,02f, 0,5f, 0f, 0, 0, 255, 255);
			}
			else
			{
				unk_0x26F63FD28070F2CE("NOT controlledByAnim", 0,02f, 0,5f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_245 == -1)
			{
				unk_0x26F63FD28070F2CE("iBlockObject OFF", 0,02f, 0,6f, 0f, 0, 0, 255, 255);
			}
			else
			{
				unk_0x26F63FD28070F2CE("iBlockObject ON", 0,02f, 0,6f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_440)
			{
				unk_0x26F63FD28070F2CE("MONOLOGUE", 0,02f, 0,65f, 0f, 0, 0, 255, 255);
			}
			else
			{
				unk_0x26F63FD28070F2CE("IDLE", 0,02f, 0,65f, 0f, 0, 0, 255, 255);
			}
			StringCopy(&cVar44, "conversation_offset ", 64);
			StringIntConCat(&cVar44, Global_111583[iLocal_251], 64);
			unk_0x26F63FD28070F2CE(&cVar44, 0,02f, 0,8f, 0f, 0, 0, 255, 255);
			StringCopy(&cVar44, "max_conversation_offset ", 64);
			StringIntConCat(&cVar44, iLocal_252, 64);
			unk_0x26F63FD28070F2CE(&cVar44, 0,02f, 0,81f, 0f, 0, 0, 255, 255);
			StringCopy(&cVar44, "conversation_split_offset ", 64);
			StringIntConCat(&cVar44, iLocal_297, 64);
			unk_0x26F63FD28070F2CE(&cVar44, 0,02f, 0,82f, 0f, 0, 0, 255, 255);
			StringCopy(&cVar44, "max_conversation_split_offsets[conversation_offset] ", 64);
			StringIntConCat(&cVar44, iLocal_255[Global_111583[iLocal_251]], 64);
			unk_0x26F63FD28070F2CE(&cVar44, 0,02f, 0,83f, 0f, 0, 0, 255, 255);
		}
		vVar76 = { unk_0x68F4C0EC296D3901(iLocal_240, true) };
		if (((unk_0xE608C809F9416F00(iLocal_240) && !iLocal_250 == 25) && !iLocal_250 == 5) && !iLocal_250 == 6)
		{
			func_94();
			if (func_93())
			{
				func_91();
				unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_324, &Local_218, 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_250 = 25;
			}
			else
			{
				func_90();
				func_91();
				iLocal_250 = 5;
				iVar41 = unk_0x1C0640BA9A7327B3();
			}
			unk_0xC8B576D6F470FFC6(iLocal_240, "GENERIC_CURSE_MED", "SPEECH_PARAMS_FORCE", 1);
		}
		if (((func_108() || unk_0x2C1AA3A291786CDC()) || func_107()) || !func_109())
		{
			if (!func_89() && unk_0x8A22C4C08282BF26(-892862129) == 0)
			{
				if (func_108())
				{
				}
				if (unk_0x2C1AA3A291786CDC())
				{
				}
				unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_324, &Local_218, 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_250 = 25;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((((unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_240) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_240)) && fVar43 < 25f) && func_88(unk_0x16F2683693E537C9()) != -1569615261) && func_85(iLocal_240, unk_0x16F2683693E537C9(), 1126825984, 0))
			{
				if (!func_89())
				{
					func_91();
					unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_324, &Local_218, 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_250 = 24;
				}
			}
		}
		if (((((unk_0xEB6A8945D1AC98A1(iLocal_240) || unk_0xD3DCEC81D13AAFB1(vVar76, 50f, 1)) || unk_0xD3DCEC81D13AAFB1(vVar76, 50f, 0)) || unk_0x723EE7F83DF1497D(vVar76, 20f, 20f, 20f, 0)) || unk_0x681F21BF9F7B449B(-1, vVar76, 50f)) || unk_0x8ADFEA7B4409B2F8(vVar76, 1f))
		{
			if (!func_89())
			{
				func_91();
				unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_324, &Local_218, 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_250 = 24;
			}
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_240, unk_0x16F2683693E537C9(), 1))
		{
			func_91();
			unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_324, &Local_218, 2f, -2f, -1, 0, 0, 0, 0, 0);
			iLocal_250 = 24;
		}
		if (func_84(iLocal_240, unk_0x16F2683693E537C9(), 1) < 25f)
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_248))
			{
				func_80(&iLocal_248, &iLocal_240, 0);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(iLocal_248))
		{
			func_79(&iLocal_248);
		}
		if (!bLocal_439)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_240) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_240, true)) < 16f)
				{
					iVar79 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
					iVar80 = func_78(iVar79);
					if (func_77(iVar80))
					{
						if (!func_76(iVar80))
						{
							func_67(iVar79, 0);
						}
					}
				}
			}
		}
		switch (iLocal_250)
		{
			case 0:
				unk_0x26F63FD28070F2CE("SET_IDLING", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				iLocal_297 = 0;
				func_63();
				iLocal_250 = 1;
				if (!func_62())
				{
					unk_0x26F63FD28070F2CE("SET_IDLING SET_PED_IDLING", 0,02f, 0,11f, 0f, 0, 0, 255, 255);
					func_101(0, 1);
				}
				break;
			
			case 1:
				unk_0x26F63FD28070F2CE("WAIT_FOR_ANIM_TO_BE_LOADED", 0,02f, 0,15f, 0f, 0, 0, 255, 255);
				bVar38 = func_61();
				if (bLocal_504)
				{
					if (bVar38)
					{
						unk_0x26F63FD28070F2CE("conversationAlreadyOngoing", 0,8f, 0,1f, 0f, 0, 0, 255, 255);
					}
					else
					{
						unk_0x26F63FD28070F2CE("NOT conversationAlreadyOngoing", 0,8f, 0,1f, 0f, 0, 0, 255, 255);
					}
				}
				if ((func_60() && !bVar38) && !func_59())
				{
					iLocal_250 = 3;
				}
				if (!func_62())
				{
					func_101(0, 1);
				}
				break;
			
			case 5:
				unk_0x26F63FD28070F2CE("START_MOVE_BACK_TO_INITIAL_POSITION", 0,02f, 0,2f, 0f, 0, 0, 255, 255);
				if ((unk_0x1C0640BA9A7327B3() - iVar41) > 1)
				{
					unk_0x96167B03C5A77156(iLocal_240, vLocal_242, 1f, -1, 1f, 1024, ScriptParam_0.f_17[0]);
					iLocal_250 = 6;
				}
				break;
			
			case 6:
				unk_0x26F63FD28070F2CE("WAIT_MOVE_BACK_TO_INITIAL_POSITION", 0,02f, 0,25f, 0f, 0, 0, 255, 255);
				if (unk_0xD1960163A3042274(iLocal_240, 713668775) != 1 && unk_0xD1960163A3042274(iLocal_240, 713668775) != 0)
				{
					unk_0x26F63FD28070F2CE("WAIT_MOVE_BACK_TO_INITIAL_POSITION TASK_PLAY_ANIM", 0,02f, 0,26f, 0f, 0, 0, 255, 255);
					unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_340, "idle_intro", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xF895E10BF4C72645(iLocal_240, 0, 0);
					func_118();
					iLocal_250 = 0;
				}
				break;
			
			case 3:
				unk_0x26F63FD28070F2CE("START_IDLING", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				if (Global_3)
				{
					fVar40 = 25f;
				}
				else
				{
					fVar40 = 25f;
				}
				if (func_84(iLocal_240, unk_0x16F2683693E537C9(), 1) < fVar40)
				{
					if (func_58() == 1)
					{
						iLocal_250 = 8;
						iLocal_440 = 0;
					}
				}
				if (!func_62())
				{
					func_101(0, 1);
				}
				break;
			
			case 7:
				unk_0x26F63FD28070F2CE("PRE_PLAY_MONOLOGUE", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				if (func_60())
				{
					iLocal_250 = 8;
				}
				if (!func_62())
				{
				}
				break;
			
			case 8:
				unk_0x26F63FD28070F2CE("PLAY_MONOLOGUE", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				iLocal_252 = iLocal_252;
				if (func_59())
				{
					func_91();
					func_101(0, 1);
					iLocal_250 = 0;
				}
				else if (!func_62())
				{
					func_54();
					iLocal_440 = 1;
					func_53();
					iLocal_297++;
					iVar39 = 1;
					if (fVar43 > 15f)
					{
						iVar39 = 0;
						func_91();
						func_101(1, 0);
					}
					if (iLocal_297 < iLocal_255[Global_111583[iLocal_251]] && iVar39)
					{
						func_63();
						iLocal_250 = 7;
					}
					else
					{
						iLocal_250 = 9;
					}
				}
				else if (iLocal_440 == 1)
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_240, &Local_372, &Local_356, 3))
					{
						func_52(Global_111583[iLocal_251], iLocal_297, unk_0x8CA9406E01C7EE58(iLocal_240, &Local_372, &Local_356));
					}
				}
				break;
			
			case 9:
				unk_0x26F63FD28070F2CE("MOVE_TO_NEXT_MONOLOGUE", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				bVar36 = func_61();
				bVar37 = func_62();
				func_51(Global_111583[iLocal_251]);
				if (!bVar37 && (!bVar36 || bLocal_437))
				{
					if (bLocal_503)
					{
						Global_111583[iLocal_251] = uLocal_502;
					}
					else
					{
						Global_111583[iLocal_251]++;
					}
					if (!Global_111583[iLocal_251] < iLocal_252)
					{
						Global_111583[iLocal_251] = 0;
					}
					func_101(0, 1);
					iLocal_250 = 0;
				}
				else if (!bVar37 && bVar36)
				{
					unk_0x26F63FD28070F2CE("CONVERSATION STILL RUNNING", 0,02f, 0,3f, 0f, 0, 0, 255, 255);
					if (!func_62())
					{
						func_101(0, 1);
					}
				}
				break;
			
			case 13:
				unk_0x26F63FD28070F2CE("NEWSTATE", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				func_50(&sVar1);
				func_49(&uLocal_37, 0, unk_0x16F2683693E537C9(), &sVar1, 0, 1);
				func_49(&uLocal_37, 3, iLocal_240, &Local_236, 0, 1);
				func_48(&cVar5);
				if (func_33(&uLocal_37, &cLocal_304, &cVar5, 3, 0, 0, 0))
				{
					iLocal_250 = 14;
				}
				func_32();
				break;
			
			case 14:
				unk_0x26F63FD28070F2CE("WAIT_TO_START_CONVERSATION", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				iVar29 = iVar29;
				bVar42 = false;
				if (iLocal_440 == 0)
				{
					func_32();
					bVar42 = true;
				}
				else
				{
					if (!func_61())
					{
						bVar42 = true;
					}
					func_32();
				}
				if (bVar42)
				{
					iLocal_246 = iLocal_247;
					if (!bLocal_438)
					{
						func_31(&cVar9);
						func_50(&sVar1);
					}
					else
					{
						func_30();
						func_29(&cVar9);
					}
					func_49(&uLocal_37, 0, unk_0x16F2683693E537C9(), &sVar1, 0, 1);
					func_49(&uLocal_37, 3, iLocal_240, &Local_236, 0, 1);
					Global_111583[iLocal_251]++;
					if (!Global_111583[iLocal_251] < iLocal_252)
					{
						Global_111583[iLocal_251] = 0;
					}
					iLocal_250 = 10;
				}
				break;
			
			case 10:
				unk_0x26F63FD28070F2CE("START_LOADING_CONVERSATION", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				if (!bLocal_438)
				{
					func_27(&Local_404);
					func_26(iLocal_246, &Var31);
					StringConCat(&Local_404, &Var31, 64);
				}
				else
				{
					func_25(&Local_404);
					func_26(iLocal_246, &Var31);
					StringConCat(&Local_404, &Var31, 64);
				}
				unk_0x3F423BF5B8125A50(&Local_404);
				iVar35 = 0;
				if (unk_0xB4AE0788C1587752(&Local_404))
				{
					if (bLocal_437)
					{
						iVar35 = 1;
					}
					else if (func_33(&uLocal_37, &cLocal_304, &cVar9, 3, 0, 0, 0))
					{
						iVar35 = 1;
					}
					if (iVar35 == 1)
					{
						iLocal_250 = 11;
					}
				}
				func_32();
				break;
			
			case 11:
				unk_0x26F63FD28070F2CE("CHECK_FOR_LOADED_CONVERSATION", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				if (unk_0x957B2C6C83F82E7A())
				{
					func_23(&sVar13);
					unk_0xC6EB89C59F2AF6B8(iLocal_240, &Local_404, &sVar13, 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_250 = 12;
				}
				else
				{
					func_32();
				}
				break;
			
			case 12:
				unk_0x26F63FD28070F2CE("START_CONVERSATION", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				iLocal_246++;
				Local_420 = { Local_404 };
				if (!iLocal_246 < func_15() || fVar43 > 10f)
				{
					if (fVar43 > 10f && func_61())
					{
						func_13();
					}
					iLocal_250 = 16;
				}
				else
				{
					if (!bLocal_438)
					{
						func_27(&Local_404);
						func_26(iLocal_246, &Var31);
						StringConCat(&Local_404, &Var31, 64);
					}
					else
					{
						func_25(&Local_404);
						func_26(iLocal_246, &Var31);
						StringConCat(&Local_404, &Var31, 64);
					}
					unk_0x3F423BF5B8125A50(&Local_404);
					iLocal_250 = 15;
				}
				break;
			
			case 15:
				unk_0x26F63FD28070F2CE("WAIT_FOR_CONVERSATION_SECTION_OVER", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				StringCopy(&cVar60, "talking offset:", 64);
				StringIntConCat(&cVar60, iLocal_246, 64);
				unk_0x26F63FD28070F2CE(&cVar60, 0,02f, 0,9f, 0f, 0, 0, 255, 255);
				IntToString(&cVar60, func_15(), 64);
				unk_0x26F63FD28070F2CE(&cVar60, 0,03f, 0,9f, 0f, 0, 0, 255, 255);
				if (unk_0xB4AE0788C1587752(&Local_404))
				{
					unk_0x26F63FD28070F2CE("HAS_ANIM_DICT_LOADED", 0,02f, 0,2f, 0f, 0, 0, 255, 255);
					if (!func_62())
					{
						unk_0x26F63FD28070F2CE("NOT IS_ANIM_PLAYING_ON_PED", 0,02f, 0,3f, 0f, 0, 0, 255, 255);
						unk_0x8D17794CE3273D70(&Local_420);
						if (!bLocal_438)
						{
							func_27(&Local_404);
							func_26(iLocal_246, &Var31);
							StringConCat(&Local_404, &Var31, 64);
						}
						else
						{
							func_25(&Local_404);
							func_26(iLocal_246, &Var31);
							StringConCat(&Local_404, &Var31, 64);
						}
						func_23(&sVar13);
						unk_0xC6EB89C59F2AF6B8(iLocal_240, &Local_404, &sVar13, 1000f, -1000f, -1, 0, 0, 0, 0, 0);
						unk_0xF895E10BF4C72645(iLocal_240, 0, 0);
						iLocal_250 = 12;
					}
				}
				else if (!func_62())
				{
				}
				break;
			
			case 16:
				unk_0x26F63FD28070F2CE("WAIT_FOR_CONVERSATION_TO_END", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				if (!func_62())
				{
					func_12(&uLocal_37, 0);
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xCAC78D14D05349E7(unk_0x16F2683693E537C9(), false);
					}
					unk_0x8D17794CE3273D70(&Local_420);
					func_11();
					func_101(0, 1);
					iLocal_250 = 0;
				}
				break;
			
			case 24:
				unk_0x26F63FD28070F2CE("WAITING_TO_BLEND_INTO_IDLE_BEFORE_FLEEING", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				wait(1000);
				func_10();
				iVar0 = 0;
				break;
			
			case 25:
				unk_0x26F63FD28070F2CE("WAITING_TO_BLEND_INTO_IDLE_BEFORE_WANDERING", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
				func_8();
				iVar0 = 0;
				break;
		}
		bVar81 = unk_0x8A22C4C08282BF26(1974937116) > 0;
		if (!bVar81)
		{
		}
		if (((((((((((((iLocal_250 == 0 || iLocal_250 == 1) || iLocal_250 == 3) || iLocal_250 == 8) || iLocal_250 == 9) || iLocal_250 == 7) && func_84(iLocal_240, unk_0x16F2683693E537C9(), 1) < 5f) && bLocal_436 == 1) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) && iVar30 == 0) && bLocal_439 == 1) && !Global_3) && func_7()) && bVar81)
		{
			if (iLocal_298 == -1)
			{
				func_6(&iLocal_298, 4, sLocal_303, 0, 0, 0, 0);
			}
			unk_0x558EC149EB2BC0A2(0, 51);
			if (func_4(iLocal_298, 1))
			{
				func_50(&sVar1);
				func_48(&cVar5);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xCAC78D14D05349E7(unk_0x16F2683693E537C9(), true);
				}
				func_91();
				func_101(1, 1);
				iVar30 = 1;
				iLocal_250 = 13;
				iVar29 = 0;
				iVar82 = func_78(unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()));
				if (func_77(iVar82))
				{
					if (!func_76(iVar82))
					{
						func_67(unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()), 0);
					}
				}
				func_2(&iLocal_298);
			}
		}
		else if (iLocal_298 != -1)
		{
			func_2(&iLocal_298);
		}
		func_1();
		wait(0);
	}
	if (iLocal_298 != -1)
	{
		func_2(&iLocal_298);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_248))
	{
		func_79(&iLocal_248);
	}
	bVar83 = false;
	while (true)
	{
		unk_0x26F63FD28070F2CE("do_monologue = FALSE", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
		if (bLocal_504)
		{
			unk_0x26F63FD28070F2CE("WAITING TO CLEAN UP", 0,02f, 0,1f, 0f, 0, 0, 255, 255);
		}
		if (!func_102(iLocal_240))
		{
			if (!bLocal_441)
			{
				func_97(func_112(unk_0xBB0808A181D4745C()));
			}
			func_113(0);
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_240, unk_0x16F2683693E537C9(), 1) && !bVar83)
		{
			unk_0x11AD11297DC58CC7(iLocal_240, false);
			unk_0xA3BF0AA5A2608191(iLocal_240);
			unk_0xF3268524E9BE6D6E(iLocal_240, unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_240, true);
			bVar83 = true;
		}
		if ((unk_0x03068588A1FCED1A(iLocal_240) && func_84(iLocal_240, unk_0x16F2683693E537C9(), 1) > 50f) && !unk_0x338D6FF72D84D90F())
		{
			func_113(1);
		}
		wait(0);
	}
}

void func_1()
{
}

void func_2(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_3(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_3(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_4(int iParam0, bool bParam1)
{
	iVar0 = func_3(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_5(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

int func_5(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				return 1;
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
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_2(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

int func_7()
{
	return 1;
}

void func_8()
{
	func_9();
	if (func_102(iLocal_240) && func_102(unk_0x16F2683693E537C9()))
	{
		unk_0x11AD11297DC58CC7(iLocal_240, false);
		unk_0x01E4BB5190DF7317(iLocal_240, 1193033728, 0);
		unk_0xFADC0A217229F6B5(iLocal_240, true);
	}
}

void func_9()
{
}

void func_10()
{
	func_9();
	if (func_102(iLocal_240) && func_102(unk_0x16F2683693E537C9()))
	{
		unk_0x11AD11297DC58CC7(iLocal_240, false);
		unk_0xF3268524E9BE6D6E(iLocal_240, unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_240, true);
		func_91();
	}
}

void func_11()
{
}

void func_12(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_13()
{
	Global_19671 = 0;
	func_14();
}

void func_14()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

int func_15()
{
	iVar0 = func_16();
	if (iVar0 == 2)
	{
		if (iLocal_299[2] == 1)
		{
			return 10;
		}
		else if (iLocal_299[2] == 2)
		{
			return 6;
		}
		else
		{
			return 14;
		}
	}
	else if (iVar0 == 0)
	{
		return 4;
	}
	return 4;
}

int func_16()
{
	func_17();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_17()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_21(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_20(unk_0x16F2683693E537C9());
			if (func_19(iVar0) && (!func_18(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_19(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_18(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_1798[iParam0];
}

void func_23(char* sParam0)
{
	func_24(&Var0);
	*sParam0 = { Var0 };
	StringConCat(sParam0, "_", 64);
	StringIntConCat(sParam0, iLocal_246, 64);
}

void func_24(char* sParam0)
{
	iVar0 = func_16();
	if (iVar0 == 2)
	{
		if (iLocal_299[2] == 1)
		{
			StringCopy(sParam0, "andy_ig_4_imspeakingthetruth", 64);
		}
		else if (iLocal_299[2] == 2)
		{
			StringCopy(sParam0, "andy_ig_5_didyouseethem", 64);
		}
		else
		{
			StringCopy(sParam0, "andy_ig_3_gotothehills", 64);
		}
	}
	else if (iVar0 == 0)
	{
		StringCopy(sParam0, "andy_ig_2_whenwillistrike", 64);
	}
	else if (iVar0 == 1)
	{
		StringCopy(sParam0, "andy_ig_2_b_theenergyisupbrother", 64);
	}
}

void func_25(char* sParam0)
{
	iVar0 = iLocal_254 + 1;
	*sParam0 = { Local_202 };
	StringConCat(sParam0, "@", 64);
	StringConCat(sParam0, "CONVO_", 64);
	StringIntConCat(sParam0, iVar0, 64);
	StringConCat(sParam0, "@", 64);
	StringConCat(sParam0, "CONVO_", 64);
	StringIntConCat(sParam0, iVar0, 64);
}

void func_26(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "D", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "E", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "F", 16);
			break;
		
		case 6:
			StringCopy(sParam1, "G", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "H", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "I", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "J", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "K", 16);
			break;
		
		case 11:
			StringCopy(sParam1, "L", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "M", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "N", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "O", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "P", 16);
			break;
		
		case 16:
			StringCopy(sParam1, "Q", 16);
			break;
		
		case 17:
			StringCopy(sParam1, "R", 16);
			break;
		
		case 18:
			StringCopy(sParam1, "S", 16);
			break;
		
		case 19:
			StringCopy(sParam1, "T", 16);
			break;
		
		case 20:
			StringCopy(sParam1, "U", 16);
			break;
		
		case 21:
			StringCopy(sParam1, "V", 16);
			break;
		
		case 22:
			StringCopy(sParam1, "W", 16);
			break;
		
		case 23:
			StringCopy(sParam1, "X", 16);
			break;
		
		case 24:
			StringCopy(sParam1, "Y", 16);
			break;
		
		case 25:
			StringCopy(sParam1, "Z", 16);
			break;
	}
}

void func_27(char* sParam0)
{
	*sParam0 = { Local_202 };
	StringConCat(sParam0, "@", 64);
	func_28(&cVar0);
	StringConCat(sParam0, &cVar0, 64);
	StringConCat(sParam0, "@", 64);
	StringConCat(sParam0, &cVar0, 64);
}

void func_28(char* sParam0)
{
	func_50(&Var0);
	*sParam0 = { Var0 };
	StringConCat(sParam0, "_", 16);
	StringIntConCat(sParam0, iLocal_299[func_16()], 16);
}

void func_29(char* sParam0)
{
	MemCopy(sParam0, {Local_234}, 4);
	StringConCat(sParam0, "_CONV_", 16);
	StringIntConCat(sParam0, iLocal_254 + 1, 16);
}

void func_30()
{
	iLocal_254 = unk_0x09AC81E49EA267F7(0, iLocal_253);
}

void func_31(char* sParam0)
{
	MemCopy(sParam0, {Local_234}, 4);
	StringConCat(sParam0, "_CONV_", 16);
	iVar0 = func_16();
	if (iVar0 == 2)
	{
		StringConCat(sParam0, "T", 16);
	}
	else if (iVar0 == 0)
	{
		StringConCat(sParam0, "M", 16);
	}
	else
	{
		StringConCat(sParam0, "F", 16);
	}
	StringIntConCat(sParam0, iLocal_299[func_16()], 16);
}

void func_32()
{
	if (!func_62())
	{
		func_101(1, 1);
	}
}

bool func_33(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_34(sParam2, iParam3, 0);
}

int func_34(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_14();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_45();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x0674E58A79778E99(&Global_7356, 20);
			unk_0x0674E58A79778E99(&Global_7357, 17);
			unk_0x0674E58A79778E99(&Global_7358, 0);
			if (bParam2)
			{
				func_44();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_43())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_42())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_41();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_40();
		func_35();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_14();
	}
	return 0;
}

void func_35()
{
	if (!func_36())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_36()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_39())
	{
		return 0;
	}
	if (func_37(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62()].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

bool func_37(int iParam0)
{
	return func_38(iParam0, 20);
}

bool func_38(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_39()
{
	return -1;
}

void func_40()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_41()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x0674E58A79778E99(&Global_7357, 16);
}

int func_42()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	if (Global_76622)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
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

void func_44()
{
	if (func_18(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[2])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_16();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_45()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, iParam0);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_48(char[4] cParam0)
{
	iVar0 = func_16();
	if (iVar0 == 2)
	{
		*cParam0 = { Local_316 };
	}
	else if (iVar0 == 0)
	{
		*cParam0 = { Local_312 };
	}
	else
	{
		*cParam0 = { Local_320 };
	}
}

void func_49(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

void func_50(char* sParam0)
{
	iVar0 = func_16();
	if (iVar0 == 2)
	{
		StringCopy(sParam0, "TREVOR", 16);
	}
	else if (iVar0 == 0)
	{
		StringCopy(sParam0, "MICHAEL", 16);
	}
	else
	{
		StringCopy(sParam0, "FRANKLIN", 16);
	}
}

void func_51(var uParam0)
{
}

void func_52(var uParam0, int iParam1, float fParam2)
{
}

void func_53()
{
	unk_0x8D17794CE3273D70(&Local_388);
}

void func_54()
{
	func_57(Global_111583[iLocal_251] + 1, &sVar0, &Var8);
	StringConCat(&Var8, "_", 64);
	StringIntConCat(&Var8, iLocal_297, 64);
	Local_356 = { Var8 };
	Local_372 = { Local_388 };
	func_56(&Local_356);
	unk_0xC6EB89C59F2AF6B8(iLocal_240, &Local_388, &Var8, 1000f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0xF895E10BF4C72645(iLocal_240, 0, 0);
	func_55(Global_111583[iLocal_251]);
}

void func_55(var uParam0)
{
}

void func_56(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

void func_57(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(sParam1, "Special_Ped@andy_moon", 32);
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam2, "andy_ig_1_p1_andhisnameisdeath", 64);
			break;
		
		case 2:
			StringCopy(sParam2, "andy_ig_1_p2_cantyouseeitman", 64);
			break;
		
		case 3:
			StringCopy(sParam2, "ANDY_IG_1_P3_MeditateMeditateWellIMeditate", 64);
			break;
		
		case 4:
			StringCopy(sParam2, "ANDY_IG_1_P4_GonnaDrownInFire", 64);
			break;
		
		case 5:
			StringCopy(sParam2, "ANDY_IG_1_P5_YouLoveTheEarth", 64);
			break;
		
		case 6:
			StringCopy(sParam2, "ANDY_IG_1_P6_ThisComplacency", 64);
			break;
		
		case 7:
			StringCopy(sParam2, "ANDY_IG_1_P7_TheyAreComing", 64);
			break;
		
		case 8:
			StringCopy(sParam2, "ANDY_IG_1_P8_ThisIsTheDream", 64);
			break;
		
		case 9:
			StringCopy(sParam2, "ANDY_IG_1_P9_drink_your_own_mothers_bood", 64);
			break;
		
		case 10:
			StringCopy(sParam2, "ANDY_IG_1_P10_MadeThemAngryPrayToYour401k", 64);
			break;
		
		case 11:
			StringCopy(sParam2, "ANDY_IG_1_P11_DontWorryWhenTheyRoastYou", 64);
			break;
		
		case 12:
			StringCopy(sParam2, "ANDY_IG_1_P12_WeAreGoingToBeHarvested", 64);
			break;
		
		case 13:
			StringCopy(sParam2, "ANDY_IG_1_P13_DidYouThinkThereWouldntBeAPriceToPay", 64);
			break;
		
		case 14:
			StringCopy(sParam2, "ANDY_IG_1_P14_YouveGotTwoChoices", 64);
			break;
		
		case 15:
			StringCopy(sParam2, "ANDY_IG_1_P15_TheresNothingLeft", 64);
			break;
	}
}

int func_58()
{
	Var0 = { Local_308 };
	StringIntConCat(&Var0, Global_111583[iLocal_251] + 1, 16);
	func_49(&uLocal_37, 3, iLocal_240, &Local_236, 0, 1);
	if (bLocal_437)
	{
		iVar4 = 1;
	}
	else
	{
		iVar4 = func_33(&uLocal_37, &cLocal_304, &Var0, 3, 0, 0, 0);
	}
	Local_498 = { Var0 };
	return iVar4;
}

bool func_59()
{
	return Global_98796.f_345 > 0;
}

bool func_60()
{
	bVar0 = unk_0xB4AE0788C1587752(&Local_388);
	return bVar0;
}

int func_61()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_62()
{
	if (unk_0xD1960163A3042274(iLocal_240, -2017877118) != 1 && unk_0xD1960163A3042274(iLocal_240, -2017877118) != 0)
	{
		return 0;
	}
	return 1;
}

void func_63()
{
	func_64(&Var0);
	unk_0x3F423BF5B8125A50(&Var0);
	Local_388 = { Var0 };
}

void func_64(char* sParam0)
{
	*sParam0 = { Local_202 };
	StringConCat(sParam0, "@", 64);
	func_66(&Var0);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "@", 64);
	StringConCat(sParam0, &Var0, 64);
	func_65(&Var0);
	StringConCat(sParam0, &Var0, 64);
}

void func_65(char* sParam0)
{
	func_26(iLocal_297, sParam0);
}

void func_66(char* sParam0)
{
	StringCopy(sParam0, "MONOLOGUE_", 16);
	StringIntConCat(sParam0, Global_111583[iLocal_251] + 1, 16);
}

void func_67(int iParam0, bool bParam1)
{
	iVar0 = func_78(iParam0);
	if (func_77(iVar0))
	{
		func_68(iVar0, bParam1);
	}
}

void func_68(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (func_77(iParam0))
		{
			if (!func_75(iParam0))
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_26429.f_2), iVar0);
				if (!bParam1)
				{
					func_73(func_74(iParam0));
					if (!func_72(70))
					{
						func_69("DI_HLP_SPCL", 2, 0, 20000, 10000, 7, 0, 210, 0);
					}
				}
			}
		}
	}
}

void func_69(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_70(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_70(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_71();
	}
}

void func_71()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

int func_72(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_73(char* sParam0)
{
	unk_0x1E64CE678ED5F61E("");
	unk_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_SPEAND";
			break;
		
		case 1:
			return "CM_SPEBAY";
			break;
		
		case 2:
			return "CM_SPEBIL";
			break;
		
		case 3:
			return "CM_SPECLI";
			break;
		
		case 4:
			return "CM_SPEGRI";
			break;
		
		case 5:
			return "CM_SPEJAN";
			break;
		
		case 6:
			return "CM_SPEJER";
			break;
		
		case 7:
			return "CM_SPEJES";
			break;
		
		case 8:
			return "CM_SPEMAN";
			break;
		
		case 9:
			return "CM_SPEMIM";
			break;
		
		case 10:
			return "CM_SPEPAM";
			break;
		
		case 11:
			return "CM_SPEIMP";
			break;
		
		case 12:
			return "CM_SPEZOM";
			break;
	}
	return "ERROR!";
}

int func_75(int iParam0)
{
	if (func_77(iParam0))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_26429.f_2, iParam0);
	}
	return 0;
}

int func_76(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_26429.f_2, iVar0);
	}
	return 0;
}

int func_77(int iParam0)
{
	if ((iParam0 == -1 || iParam0 == 13) || iParam0 == 9)
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case -1315300669:
			return 0;
			break;
		
		case 2078408740:
			return 1;
			break;
		
		case -1665102692:
			return 2;
			break;
		
		case -1598988955:
			return 3;
			break;
		
		case 936189259:
			return 4;
			break;
		
		case 1987469741:
			return 5;
			break;
		
		case -388088768:
			return 6;
			break;
		
		case -1012369038:
			return 7;
			break;
		
		case -1099436383:
			return 8;
			break;
		
		case -148197312:
			return 9;
			break;
		
		case -1949337929:
			return 10;
			break;
		
		case -1850372990:
			return 11;
			break;
		
		case 401939198:
			return 12;
			break;
	}
	return -1;
}

void func_79(int iParam0)
{
	if (iLocal_447 == 1)
	{
		if (unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			unk_0x142CC44DB769B57E(iParam0);
		}
	}
}

void func_80(int iParam0, int iParam1, bool bParam2)
{
	if (iLocal_447 == 1)
	{
		if (!unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			if (unk_0xC844350D5D58C99A(*iParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(*iParam1))
				{
					*iParam0 = func_81(*iParam1, bParam2, 145);
					if (bParam2 == 0)
					{
						unk_0x2A065371C9D96655(*iParam0, 7);
					}
					unk_0x61755AC17D8F538E(*iParam0, 3);
				}
			}
		}
	}
}

int func_81(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_82(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_83(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_83(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_83(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_83(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_84(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar3, bParam2);
}

int func_85(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vVar0 = { func_87(unk_0x68F4C0EC296D3901(iParam1, true) - unk_0x68F4C0EC296D3901(iParam0, true)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar3 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar3 = { func_87(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_86(vVar3, vVar0);
	if (fVar6 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_86(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_87(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_88(int iParam0)
{
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

int func_89()
{
	if (iLocal_250 == 24 || iLocal_250 == 25)
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (iLocal_245 != -1)
	{
		if (unk_0x49083FDB78AC0509(iLocal_245))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_245);
		}
		iLocal_245 = -1;
	}
}

void func_91()
{
	Global_19671 = 0;
	func_92();
}

void func_92()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_93()
{
	return 0;
}

void func_94()
{
}

int func_95()
{
	return 1;
}

float func_96(int iParam0, int iParam1)
{
	return func_84(iParam0, iParam1, 1);
}

void func_97(int iParam0)
{
	func_100(&(Global_111638.f_20112), iParam0);
	iVar0 = func_98(iParam0);
	if (func_77(iVar0))
	{
		func_68(func_98(iParam0), 0);
	}
}

int func_98(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = iVar0;
		if (func_99(iVar1, 1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_99(int iParam0, bool bParam1)
{
	if (!func_77(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
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
			return 64;
		
		case 6:
			return 128;
		
		case 7:
			return 256;
		
		case 8:
			return 512;
		
		case 10:
			return 2048;
		
		case 11:
			return 4096;
		
		case 12:
			return 8192;
		
		default:
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_100(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_101(int iParam0, bool bParam1)
{
	if (iParam0 == 1)
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_324, &Local_218, 2f, -2f, -1, 0, 0, 0, 0, 0);
	}
	else
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_240, &cLocal_324, &Local_218, 1000f, 1000f, -1, 0, 0, 0, 0, 0);
	}
	Local_356 = { Local_218 };
	if (bParam1)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_240) && !unk_0x28072FDD60CE3A6E(iLocal_240, 1))
		{
			unk_0xF895E10BF4C72645(iLocal_240, 0, 0);
		}
	}
}

int func_102(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_103()
{
	func_104();
}

void func_104()
{
}

void func_105()
{
	iLocal_36 = -264140789;
	StringCopy(&Local_234, "PBAM", 8);
	StringCopy(&Local_236, "ANDYMOON", 16);
	StringCopy(&Local_202, "Special_Ped@andy_moon", 64);
	StringCopy(&Local_218, "Base", 64);
	bLocal_436 = !Global_3;
	iLocal_252 = 15;
	sLocal_303 = "PBAM_INTERACT";
	StringCopy(&Local_312, "PBAM_CONV_GM", 16);
	StringCopy(&Local_316, "PBAM_CONV_GT", 16);
	StringCopy(&Local_320, "PBAM_CONV_GF", 16);
	StringCopy(&cLocal_324, "special_ped@andy_moon@base", 64);
	StringCopy(&cLocal_340, "special_ped@andy_moon@intro", 64);
	iLocal_251 = 0;
	iLocal_255[0] = 6;
	iLocal_255[1] = 7;
	iLocal_255[2] = 6;
	iLocal_255[3] = 6;
	iLocal_255[4] = 5;
	iLocal_255[5] = 8;
	iLocal_255[6] = 7;
	iLocal_255[7] = 6;
	iLocal_255[8] = 4;
	iLocal_255[9] = 6;
	iLocal_255[10] = 6;
	iLocal_255[11] = 6;
	iLocal_255[12] = 6;
	iLocal_255[13] = 5;
	iLocal_255[14] = 5;
	if (Global_111638.f_24990.f_5 == 0)
	{
		iLocal_299[2] = 3;
		Global_111598 = 1;
	}
	else if (Global_111598 == 1)
	{
		iLocal_299[2] = 2;
	}
	else
	{
		iLocal_299[2] = 1;
	}
}

int func_106()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_107()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_108()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_109()
{
	return 1;
}

bool func_110(var uParam0)
{
	return func_111(Global_111638.f_20112, uParam0);
}

bool func_111(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_112(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_AndyMoon"))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Baygor"))
	{
		return 2;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_BillBinder"))
	{
		return 4;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Clinton"))
	{
		return 8;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Griff"))
	{
		return 16;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Jane"))
	{
		return 64;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Jerome"))
	{
		return 128;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Jesse"))
	{
		return 256;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Mani"))
	{
		return 512;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Mime"))
	{
		return 1024;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_PamelaDrake"))
	{
		return 2048;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Superhero"))
	{
		return 4096;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "gpb_Zombie"))
	{
		return 8192;
	}
	return 0;
}

void func_113(int iParam0)
{
	func_116();
	if (iLocal_241)
	{
		MemCopy(&uVar0, {func_115()}, 4);
		if (unk_0x7F8A39872A07D2CE(&uVar0, &Local_498))
		{
			func_13();
		}
		if (iParam0 == 1)
		{
			unk_0xEBA53F35D0085654(&iLocal_240);
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_240);
		}
		iLocal_241 = 0;
	}
	if (!unk_0xEA6BC48857E0AC4C(&Local_404))
	{
		unk_0x8D17794CE3273D70(&Local_404);
	}
	if (iLocal_249 == 1)
	{
		if (!unk_0xEA6BC48857E0AC4C(&cLocal_324))
		{
			if (unk_0xB4AE0788C1587752(&cLocal_324))
			{
				unk_0x8D17794CE3273D70(&cLocal_324);
			}
		}
		if (!unk_0xEA6BC48857E0AC4C(&cLocal_340))
		{
			if (unk_0xB4AE0788C1587752(&cLocal_340))
			{
				unk_0x8D17794CE3273D70(&cLocal_340);
			}
		}
	}
	if (iLocal_298 != -1)
	{
		func_2(&iLocal_298);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_248))
	{
		func_114(&iLocal_248);
	}
	func_90();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xCAC78D14D05349E7(unk_0x16F2683693E537C9(), false);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_114(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, false);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

struct<6> func_115()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_116()
{
	func_117();
}

void func_117()
{
}

void func_118()
{
	if (iLocal_245 == -1)
	{
		iLocal_245 = unk_0x544B74C043CE9948(vLocal_242, 2f, 2f, 2f, 0f, 0, 1);
	}
}

