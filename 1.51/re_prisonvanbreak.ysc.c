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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_219 = { ScriptParam_0.f_1[0] };
	if (unk_0x2EBF608FFE6CA406(11))
	{
		func_148();
	}
	if (func_95(vLocal_219, -1, 0, 0, 0))
	{
		func_92(-1);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		wait(0);
		if (unk_0x338D6FF72D84D90F() || iLocal_274)
		{
			unk_0x1A6DFFFEEC27BF4F("RE_CR", 0);
			switch (iLocal_46)
			{
				case 0:
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_219, 100f, 100f, 100f, false, true, 0))
					{
						func_148();
					}
					if (iLocal_47)
					{
						iLocal_46 = 1;
					}
					else
					{
						func_91();
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
					func_90();
					func_88();
					if (!func_87())
					{
						func_84();
					}
					if (!bLocal_49)
					{
						func_73();
					}
					if (!bLocal_50 && !bLocal_284)
					{
						func_69();
					}
					if (iLocal_266 && !bLocal_49)
					{
						func_68(iLocal_226[0]);
						func_68(iLocal_226[1]);
						func_68(iLocal_226[2]);
					}
					if ((!iLocal_266 && !bLocal_284) && func_87())
					{
						func_67(iLocal_232[0], &(uLocal_243[0]), 1, 0,7f);
						func_67(iLocal_232[0], &(uLocal_243[1]), 5, 0,7f);
						func_67(iLocal_232[0], &(uLocal_243[2]), 0, 0,7f);
						func_67(iLocal_232[0], &(uLocal_243[3]), 4, 0,7f);
						func_67(iLocal_232[1], &(uLocal_243[4]), 1, 0,7f);
						func_67(iLocal_232[1], &(uLocal_243[5]), 5, 0,7f);
						func_67(iLocal_232[1], &(uLocal_243[6]), 0, 0,7f);
						func_67(iLocal_232[1], &(uLocal_243[7]), 4, 0,7f);
						func_67(iLocal_232[2], &(uLocal_243[8]), 1, 0,7f);
						func_67(iLocal_232[2], &(uLocal_243[9]), 5, 0,7f);
						func_67(iLocal_232[2], &(uLocal_243[10]), 0, 0,7f);
						func_67(iLocal_232[2], &(uLocal_243[11]), 4, 0,7f);
						func_67(iLocal_236, &(uLocal_243[12]), 1, 0,7f);
						func_67(iLocal_236, &(uLocal_243[13]), 5, 0,7f);
						func_67(iLocal_236, &(uLocal_243[14]), 0, 0,7f);
						func_67(iLocal_236, &(uLocal_243[15]), 4, 0,7f);
					}
					if (!iLocal_264)
					{
						func_65();
					}
					else
					{
						if (!bLocal_284)
						{
							func_64();
						}
						else if (!iLocal_281 && bLocal_49)
						{
							func_62();
						}
						if (!iLocal_285)
						{
							func_61();
						}
						func_60();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_148();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!iLocal_279)
	{
		if (unk_0x437347B10A200C4B(iLocal_226[0], 0) || unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
		{
			func_59(&uLocal_54, 4);
			iLocal_279 = 1;
		}
	}
	if (!bLocal_260)
	{
		if ((unk_0x437347B10A200C4B(iLocal_222, 0) || unk_0xEB6A8945D1AC98A1(iLocal_222)) || unk_0xA750A57C629763A9(iLocal_222))
		{
			unk_0x523BCC9DC80CD82F(-1249748547);
			if (unk_0xB87F6CF6E5628C67(-1249748547))
			{
				vLocal_271 = { unk_0xC6151A4F2BB0AC79(iLocal_222, 1067030938, 1069547520) };
				vLocal_271.z = (vLocal_271.z + 0,3f);
				iLocal_292[0] = unk_0x2D7B5CDDF12654D2(-831529621, vLocal_271 + Vector(-0,49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, -1249748547);
				if (!unk_0xE4EDC4B0E92C078B(uLocal_301[0]))
				{
					uLocal_301[0] = func_57(iLocal_292[0]);
				}
				bLocal_260 = true;
				func_59(&uLocal_54, 5);
			}
		}
	}
	if (!bLocal_261)
	{
		if ((unk_0x437347B10A200C4B(iLocal_223, 0) || unk_0xEB6A8945D1AC98A1(iLocal_223)) || unk_0xA750A57C629763A9(iLocal_223))
		{
			unk_0x523BCC9DC80CD82F(-1249748547);
			if (unk_0xB87F6CF6E5628C67(-1249748547))
			{
				vLocal_271 = { unk_0xC6151A4F2BB0AC79(iLocal_223, 1067030938, 1069547520) };
				vLocal_271.z = (vLocal_271.z + 0,3f);
				iLocal_292[1] = unk_0x2D7B5CDDF12654D2(-831529621, vLocal_271 + Vector(-0,49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, -1249748547);
				if (!unk_0xE4EDC4B0E92C078B(uLocal_301[1]))
				{
					uLocal_301[1] = func_57(iLocal_292[1]);
				}
				bLocal_261 = true;
				func_59(&uLocal_54, 6);
			}
		}
	}
	if (!bLocal_284)
	{
		if (!iLocal_276)
		{
			if (unk_0xC844350D5D58C99A(iLocal_222))
			{
				if (unk_0x437347B10A200C4B(iLocal_222, 0) || unk_0xEB6A8945D1AC98A1(iLocal_222))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_222, unk_0x16F2683693E537C9(), 1))
					{
						unk_0x142CC44DB769B57E(&iLocal_295);
						iLocal_276 = 1;
						bLocal_50 = true;
						unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
						{
							unk_0x6C3AE6E278DB3D0E(iLocal_223, unk_0x16F2683693E537C9(), 0, 16);
							unk_0xFADC0A217229F6B5(iLocal_223, true);
							unk_0xF96CCE23B30CFE36(iLocal_223, unk_0x16F2683693E537C9());
							unk_0xB8AFFA077E15E999(iLocal_223, 1);
							func_59(&uLocal_54, 5);
							func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_275)
		{
			if (unk_0xC844350D5D58C99A(iLocal_223))
			{
				if (unk_0x437347B10A200C4B(iLocal_223, 0) || unk_0xEB6A8945D1AC98A1(iLocal_223))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_223, unk_0x16F2683693E537C9(), 1))
					{
						unk_0x142CC44DB769B57E(&iLocal_296);
						iLocal_275 = 1;
						bLocal_50 = true;
						unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
						{
							unk_0x6C3AE6E278DB3D0E(iLocal_222, unk_0x16F2683693E537C9(), 0, 16);
							unk_0xFADC0A217229F6B5(iLocal_222, true);
							unk_0xF96CCE23B30CFE36(iLocal_222, unk_0x16F2683693E537C9());
							unk_0xB8AFFA077E15E999(iLocal_222, 1);
							func_39(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_38() || !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 310,6203f, 2642,854f, 43,5173f, 150f, 150f, 180f, false, true, 0))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_222) && unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				if (func_38() && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_219, 50f, 50f, 50f, false, true, 0))
				{
					func_7();
				}
				if (bLocal_50 && !bLocal_49)
				{
					if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 310,6203f, 2642,854f, 43,5173f, 150f, 150f, 180f, false, true, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 310,6203f, 2642,854f, 43,5173f, 200f, 200f, 180f, false, true, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_284)
	{
		if (func_38())
		{
			if (unk_0x437347B10A200C4B(iLocal_222, 0) && unk_0x437347B10A200C4B(iLocal_223, 0))
			{
				func_7();
			}
			if (bLocal_284)
			{
				if (unk_0xC844350D5D58C99A(iLocal_222))
				{
					if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_222, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_223))
				{
					if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_223, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_266 && !bLocal_49)
	{
		unk_0x842F1AEB2FCC00B7(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 1);
		unk_0x523BCC9DC80CD82F(1171614426);
		unk_0x3F423BF5B8125A50("random@countrysiderobbery");
		if (((unk_0x437347B10A200C4B(iLocal_222, 0) && unk_0x437347B10A200C4B(iLocal_223, 0)) && unk_0xB87F6CF6E5628C67(1171614426)) && unk_0xB4AE0788C1587752("random@countrysiderobbery"))
		{
			unk_0x142CC44DB769B57E(&iLocal_295);
			unk_0x142CC44DB769B57E(&iLocal_296);
			func_59(&uLocal_54, 5);
			func_59(&uLocal_54, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_297[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(iLocal_297[iVar0]));
				}
				iVar0++;
			}
			unk_0x0E2400AB9174FA81(1, iLocal_268, 1862763509);
			unk_0x15EA7F4313456B1D(5, true);
			unk_0x15EA7F4313456B1D(3, true);
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 267,94f, 2700,48f, 43,6f, 15f, 15f, 15f, false, true, 0))
			{
				iLocal_237 = unk_0x122AAB0B1D6F55AD(1171614426, 267,94f, 2700,48f, 43,1f, 180f, true, true, false);
			}
			else
			{
				iLocal_237 = unk_0x122AAB0B1D6F55AD(1171614426, 185,94f, 2603,48f, 46,9f, 0f, true, true, false);
			}
			unk_0xAA280AF45BCCCF21(iLocal_237, 1);
			iLocal_224 = unk_0x852A19533F896693(iLocal_237, 20, -1286380898, -1, 1, true);
			iLocal_225 = unk_0x852A19533F896693(iLocal_237, 20, -1286380898, 0, 1, true);
			unk_0xAFF39FB306F8E232(iLocal_224, 17, true);
			unk_0xAFF39FB306F8E232(iLocal_225, 17, true);
			unk_0x4E885A246A9D983A(iLocal_224, 185, true);
			unk_0x4E885A246A9D983A(iLocal_225, 185, true);
			if (unk_0xC844350D5D58C99A(iLocal_222))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_269);
				unk_0xE9362E4D600DD12A(0, iLocal_237, 307,1379f, 2640,042f, 43,4639f, 18f, 0, 1171614426, 786475, 5f, 5f);
				unk_0xE185F110925D87DB(0, iLocal_222, -1, 2f, 1f, 10f, 0);
				unk_0x0C8C0C840C2D1AD2(0, iLocal_222, -1, 2052, 2);
				unk_0xF96A174EE26D7588(0, iLocal_222, 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_269);
				unk_0x78ADC381772E3D54(iLocal_224, iLocal_269);
				unk_0xF82EA857DA10E0CD(&iLocal_269);
				unk_0xFADC0A217229F6B5(iLocal_224, true);
			}
			if (unk_0xC844350D5D58C99A(iLocal_223))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_269);
				unk_0x78A77CDD64392938(0, 15000);
				unk_0xE185F110925D87DB(0, iLocal_223, -1, 2f, 1f, 10f, 0);
				unk_0x0C8C0C840C2D1AD2(0, iLocal_223, -1, 2052, 2);
				unk_0xF96A174EE26D7588(0, iLocal_223, 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_269);
				unk_0x78ADC381772E3D54(iLocal_225, iLocal_269);
				unk_0xF82EA857DA10E0CD(&iLocal_269);
				unk_0xFADC0A217229F6B5(iLocal_225, true);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]) && unk_0xC844350D5D58C99A(iLocal_236))
			{
				unk_0x4E885A246A9D983A(iLocal_226[0], 185, true);
				unk_0xDD353D0E9C789D0E(&iLocal_269);
				unk_0x96167B03C5A77156(0, unk_0x68F4C0EC296D3901(iLocal_236, false) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				unk_0x9294582561BECEE7(0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_269);
				unk_0x78ADC381772E3D54(iLocal_226[0], iLocal_269);
				unk_0xF82EA857DA10E0CD(&iLocal_269);
				unk_0xFADC0A217229F6B5(iLocal_226[0], true);
			}
			if (!unk_0x437347B10A200C4B(iLocal_226[1], 0) && unk_0xC844350D5D58C99A(iLocal_230))
			{
				unk_0x4E885A246A9D983A(iLocal_226[1], 185, true);
				unk_0x5745EA6329A91E29(iLocal_226[1], -1569615261, true);
				unk_0xDD353D0E9C789D0E(&iLocal_269);
				unk_0x96167B03C5A77156(0, unk_0x68F4C0EC296D3901(iLocal_230, false) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				unk_0xDBE4EC9C88839074(0, unk_0x68F4C0EC296D3901(iLocal_230, false), -1, 2052, 2);
				unk_0x796BDF31572BB055(0, unk_0x68F4C0EC296D3901(iLocal_230, false), 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_269);
				unk_0x78ADC381772E3D54(iLocal_226[1], iLocal_269);
				unk_0xF82EA857DA10E0CD(&iLocal_269);
				unk_0xFADC0A217229F6B5(iLocal_226[1], true);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]) && unk_0xC844350D5D58C99A(iLocal_223))
			{
				unk_0x4E885A246A9D983A(iLocal_226[2], 185, true);
				if (unk_0xC844350D5D58C99A(iLocal_223))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_269);
					unk_0x96167B03C5A77156(0, unk_0x68F4C0EC296D3901(iLocal_223, false) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					unk_0x9294582561BECEE7(0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_269);
					unk_0x78ADC381772E3D54(iLocal_226[2], iLocal_269);
					unk_0xF82EA857DA10E0CD(&iLocal_269);
				}
				unk_0xFADC0A217229F6B5(iLocal_226[2], true);
			}
			func_3();
			wait(0);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			wait(0);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			settimerb(0);
			iLocal_266 = 1;
		}
	}
	if (iLocal_264 && !func_87())
	{
		func_5();
	}
	if (((((unk_0x437347B10A200C4B(iLocal_222, 0) && unk_0x437347B10A200C4B(iLocal_223, 0)) && unk_0x437347B10A200C4B(iLocal_226[0], 0)) && unk_0x437347B10A200C4B(iLocal_226[1], 0)) && unk_0x437347B10A200C4B(iLocal_226[2], 0)) && (func_38() || !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 310,6203f, 2642,854f, 43,5173f, 200f, 200f, 180f, false, true, 0)))
	{
		unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 2, 0);
		unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_19671 = 0;
	func_4();
}

void func_4()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_5()
{
	func_148();
}

void func_6(int iParam0)
{
	Global_111624 = iParam0;
}

void func_7()
{
	if (!bLocal_49)
	{
	}
	while (func_37())
	{
		wait(0);
	}
	while (!func_36())
	{
		wait(0);
	}
	func_11(-1, 0);
	func_8();
	func_148();
}

void func_8()
{
	func_9();
}

int func_9()
{
	if (func_10(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_33(iParam0))
	{
		func_32(iParam0, iParam1);
		if (!func_31(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_6(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_16((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = uParam1;
		Global_111638.f_10189[iParam0].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_13();
	}
}

void func_13()
{
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					unk_0xE7B2B6A56C007908(-2122623864, Global_111361, 0);
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	unk_0xCDC520E5E48E63D9(-1055525200, Global_111374, 1);
	unk_0xCDC520E5E48E63D9(-419750212, Global_111357, 1);
	unk_0xCDC520E5E48E63D9(1331385274, Global_111375, 1);
	unk_0xCDC520E5E48E63D9(542355616, Global_111358, 1);
	unk_0xCDC520E5E48E63D9(1561233577, Global_111376, 1);
	unk_0xCDC520E5E48E63D9(558499468, Global_111359, 1);
	unk_0xCDC520E5E48E63D9(-852659719, Global_111377, 1);
	unk_0xCDC520E5E48E63D9(-20401960, Global_111360, 1);
	unk_0xCDC520E5E48E63D9(-2122623864, iVar9, 1);
	unk_0xCDC520E5E48E63D9(-215705366, Global_111364, 1);
	unk_0xCDC520E5E48E63D9(-131898641, (Global_111380 + Global_111379), 1);
	unk_0xCDC520E5E48E63D9(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	unk_0x11F69E56D7B5F3C7(1215094015, Global_111638.f_10189.f_3853, 1);
	unk_0xCDC520E5E48E63D9(1813094653, Global_111381, 1);
	unk_0xCDC520E5E48E63D9(-1205712980, Global_111382, 1);
	unk_0xCDC520E5E48E63D9(480408826, Global_111383, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111638.f_10189.f_3853))
	{
		func_15(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_14() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()
{
	return Global_30768;
}

int func_15(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_17()
{
	return Global_1312745;
}

int func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_20(int iParam0)
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
		unk_0x5D96D8530B3D0904(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_23();
	}
}

void func_23()
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

int func_24()
{
	func_25();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_25()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_29(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_28(unk_0x16F2683693E537C9());
			if (func_27(iVar0) && (!func_26(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_27(Global_111638.f_2358.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_1798[iParam0];
}

int func_31(int iParam0)
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

void func_32(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_33(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_34()
{
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar16 = func_35(Var0);
	return uVar16;
}

int func_35(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case -60745600:
			return 23;
			break;
		
		case 1149455824:
			return 0;
			break;
		
		case 1889800404:
			return 15;
			break;
		
		case 737712801:
			return 1;
			break;
		
		case 976199832:
			return 26;
			break;
		
		case 1531173018:
			return 29;
			break;
		
		case 1154171352:
			return 24;
			break;
		
		case -1325807529:
			return 2;
			break;
		
		case -2118978003:
			return 17;
			break;
		
		case -1363545320:
			return 11;
			break;
		
		case -129069433:
			return 16;
			break;
		
		case 1158398451:
			return 18;
			break;
		
		case -1669765523:
			return 12;
			break;
		
		case -1538568960:
			return 3;
			break;
		
		case -396020015:
			return 27;
			break;
		
		case 786118124:
			return 20;
			break;
		
		case -770891250:
			return 19;
			break;
		
		case 190582896:
			return 4;
			break;
		
		case -911763748:
			return 13;
			break;
		
		case -881321240:
			return 28;
			break;
		
		case 1337652317:
			return 7;
			break;
		
		case 1492712482:
			return 25;
			break;
		
		case -1612307213:
			return 10;
			break;
		
		case -201963189:
			return 22;
			break;
		
		case -1176354303:
			return 21;
			break;
		
		case 1735157309:
			return 9;
			break;
		
		case -1631807569:
			return 5;
			break;
		
		case 847041036:
			return 6;
			break;
		
		case -167923910:
			return 14;
			break;
		
		case 59976311:
			return 30;
			break;
		
		case 996703443:
			return 31;
			break;
		
		case -2088549946:
			return 32;
			break;
		
		case -1148693293:
			return 33;
			break;
	}
	return -1;
}

int func_36()
{
	return 1;
}

int func_37()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (bLocal_260 || bLocal_261)
	{
		if (bLocal_260 && bLocal_261)
		{
			if (!unk_0xE4EDC4B0E92C078B(uLocal_301[0]) && !unk_0xE4EDC4B0E92C078B(uLocal_301[1]))
			{
				return 1;
			}
		}
		if (bLocal_260 && !bLocal_261)
		{
			if (!unk_0xE4EDC4B0E92C078B(uLocal_301[0]))
			{
				return 1;
			}
		}
		if (bLocal_261 && !bLocal_260)
		{
			if (!unk_0xE4EDC4B0E92C078B(uLocal_301[1]))
			{
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

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_53(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_52();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_46();
		func_41();
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
		func_54();
	}
	return 0;
}

void func_41()
{
	if (!func_42())
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

int func_42()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_45())
	{
		return 0;
	}
	if (func_43(unk_0xD803B885F5E47A62()))
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

bool func_43(int iParam0)
{
	return func_44(iParam0, 20);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_45()
{
	return -1;
}

void func_46()
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

void func_47()
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

int func_48()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
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

void func_50()
{
	if (func_26(14))
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
		Global_19486 = func_51();
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

int func_51()
{
	func_25();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_52()
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

bool func_53(int iParam0, int iParam1)
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

void func_54()
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_57(int iParam0)
{
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_58(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_60()
{
	if (!iLocal_282)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
		{
			if (unk_0x405E212DDE472467(iLocal_222, 0))
			{
				iLocal_291 = unk_0x6937EA2286828455(iLocal_222, 0);
				if (((((unk_0xB87D13D0C064E9D1(iLocal_291, unk_0x16F2683693E537C9(), 1) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && unk_0x12DE711B1C681E9E(iLocal_291, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0)) || unk_0x36646919F20EAFFC(iLocal_222)) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_291, 0)) || unk_0x49FCF3B44AECBD62(unk_0x16F2683693E537C9(), iLocal_291, 741814745, -1))
				{
					unk_0x11AD11297DC58CC7(iLocal_222, false);
					unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
					if (unk_0x405E212DDE472467(iLocal_222, 0))
					{
						unk_0x262EF6C6306BEA6C(iLocal_222, 324215364, 200, true, true);
						unk_0x5745EA6329A91E29(iLocal_222, 324215364, true);
						unk_0xFFDDE8CC59EB6D40(iLocal_222, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
					{
						if (unk_0x405E212DDE472467(iLocal_223, 0))
						{
							unk_0x11AD11297DC58CC7(iLocal_223, false);
							unk_0x262EF6C6306BEA6C(iLocal_223, 324215364, 200, true, true);
							unk_0x5745EA6329A91E29(iLocal_223, 324215364, true);
							unk_0xFFDDE8CC59EB6D40(iLocal_223, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_50 = true;
					iLocal_282 = 1;
				}
			}
			if (unk_0xB87D13D0C064E9D1(iLocal_222, unk_0x16F2683693E537C9(), 1))
			{
				unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
				if ((unk_0x405E212DDE472467(iLocal_222, 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !unk_0x437347B10A200C4B(iLocal_291, 0))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_291, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x11AD11297DC58CC7(iLocal_222, false);
						unk_0x262EF6C6306BEA6C(iLocal_222, 324215364, 200, true, true);
						unk_0x5745EA6329A91E29(iLocal_222, 324215364, true);
						unk_0xFFDDE8CC59EB6D40(iLocal_222, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_50 = true;
						iLocal_282 = 1;
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
				{
					if ((unk_0x405E212DDE472467(iLocal_223, 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !unk_0x437347B10A200C4B(iLocal_291, 0))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_291, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x11AD11297DC58CC7(iLocal_223, false);
							unk_0x262EF6C6306BEA6C(iLocal_223, 324215364, 200, true, true);
							unk_0x5745EA6329A91E29(iLocal_223, 324215364, true);
							unk_0xFFDDE8CC59EB6D40(iLocal_223, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
		{
			if (unk_0x405E212DDE472467(iLocal_223, 0))
			{
				iLocal_291 = unk_0x6937EA2286828455(iLocal_223, 0);
				if (((unk_0xB87D13D0C064E9D1(iLocal_291, unk_0x16F2683693E537C9(), 1) || unk_0x36646919F20EAFFC(iLocal_223)) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_291, 0)) || unk_0x49FCF3B44AECBD62(unk_0x16F2683693E537C9(), iLocal_291, 741814745, -1))
				{
					unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
					{
						if ((unk_0x405E212DDE472467(iLocal_222, 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !unk_0x437347B10A200C4B(iLocal_291, 0))
						{
							if (unk_0x12DE711B1C681E9E(iLocal_291, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
							{
								unk_0x11AD11297DC58CC7(iLocal_222, false);
								unk_0x262EF6C6306BEA6C(iLocal_222, 324215364, 200, true, true);
								unk_0x5745EA6329A91E29(iLocal_222, 324215364, true);
								unk_0xFFDDE8CC59EB6D40(iLocal_222, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_50 = true;
								iLocal_282 = 1;
							}
						}
					}
					if ((unk_0x405E212DDE472467(iLocal_223, 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !unk_0x437347B10A200C4B(iLocal_291, 0))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_291, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x11AD11297DC58CC7(iLocal_223, false);
							unk_0x262EF6C6306BEA6C(iLocal_223, 324215364, 200, true, true);
							unk_0x5745EA6329A91E29(iLocal_223, 324215364, true);
							unk_0xFFDDE8CC59EB6D40(iLocal_223, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
			if (unk_0xB87D13D0C064E9D1(iLocal_223, unk_0x16F2683693E537C9(), 1))
			{
				unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
				{
					if ((unk_0x405E212DDE472467(iLocal_222, 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !unk_0x437347B10A200C4B(iLocal_291, 0))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_291, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x262EF6C6306BEA6C(iLocal_222, 324215364, 200, true, true);
							unk_0x5745EA6329A91E29(iLocal_222, 324215364, true);
							unk_0xFFDDE8CC59EB6D40(iLocal_222, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
				if ((unk_0x405E212DDE472467(iLocal_223, 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !unk_0x437347B10A200C4B(iLocal_291, 0))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_291, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x262EF6C6306BEA6C(iLocal_223, 324215364, 200, true, true);
						unk_0x5745EA6329A91E29(iLocal_223, 324215364, true);
						unk_0xFFDDE8CC59EB6D40(iLocal_223, unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_50 = true;
						iLocal_282 = 1;
					}
				}
			}
		}
	}
}

void func_61()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_222) && !unk_0x437347B10A200C4B(iLocal_236, 0))
	{
		if (!unk_0x3CAA763EEC01ADF7(iLocal_222, iLocal_236, -1, 0, 0) && !unk_0x3CAA763EEC01ADF7(iLocal_222, iLocal_236, 0, 0, 0))
		{
			unk_0xEEB67C3D0A71A47B(iLocal_222, vLocal_219, 1000f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_222, true);
			iLocal_285 = 1;
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_223) && !unk_0x437347B10A200C4B(iLocal_236, 0))
	{
		if (!unk_0x3CAA763EEC01ADF7(iLocal_223, iLocal_236, -1, 0, 0) && !unk_0x3CAA763EEC01ADF7(iLocal_223, iLocal_236, 0, 0, 0))
		{
			unk_0xEEB67C3D0A71A47B(iLocal_223, vLocal_219, 1000f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_223, true);
			iLocal_285 = 1;
		}
	}
}

void func_62()
{
	if (!unk_0x437347B10A200C4B(iLocal_222, 0))
	{
		vLocal_271 = { unk_0x68F4C0EC296D3901(iLocal_222, true) };
	}
	else if (!unk_0x437347B10A200C4B(iLocal_223, 0))
	{
		vLocal_271 = { unk_0x68F4C0EC296D3901(iLocal_223, true) };
	}
	vLocal_271.z = (vLocal_271.z - 0,11f);
	if (!unk_0x437347B10A200C4B(iLocal_222, 0))
	{
		settimera(0);
		if (!bLocal_50)
		{
			func_3();
			wait(0);
			if (!unk_0x437347B10A200C4B(iLocal_222, 0))
			{
				func_63(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!unk_0x437347B10A200C4B(iLocal_223, 0))
			{
				func_59(&uLocal_54, 5);
				func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_63(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			unk_0xE3971CAD01180CD0(unk_0x550B1459B4642A86(vLocal_271, 1067030938, 1069547520), 1000, 5, 0);
			iLocal_281 = 1;
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_223, 0) && !unk_0x437347B10A200C4B(iLocal_236, 0))
	{
		if (unk_0xC42A92762C58E1B9(iLocal_223, iLocal_236, 0))
		{
			settimera(0);
			if (!unk_0x437347B10A200C4B(iLocal_222, 0))
			{
			}
			else if (!unk_0x437347B10A200C4B(iLocal_223, 0))
			{
			}
			iLocal_281 = 1;
		}
	}
}

int func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_64()
{
	if (!bLocal_284)
	{
		unk_0x842F1AEB2FCC00B7(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 1);
		if (iLocal_288)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				if (unk_0xE64AC821059A938D(iLocal_222))
				{
					func_3();
					wait(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				if (unk_0xE64AC821059A938D(iLocal_223))
				{
					func_3();
					wait(0);
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
		}
		if (iLocal_265 == 1)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222) && !unk_0x437347B10A200C4B(iLocal_236, 0))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_222, iLocal_236, 0))
				{
					unk_0xBAFED2F6486F771A(iLocal_222, 2, true);
					unk_0xDD353D0E9C789D0E(&iLocal_269);
					unk_0x89258193691A7600(0, iLocal_236, unk_0x16F2683693E537C9(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x75ABDC5F81978924(iLocal_269);
					unk_0x78ADC381772E3D54(iLocal_222, iLocal_269);
					unk_0xF82EA857DA10E0CD(&iLocal_269);
					unk_0xFADC0A217229F6B5(iLocal_222, true);
					bLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 2)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223) && !unk_0x437347B10A200C4B(iLocal_236, 0))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_223, iLocal_236, 0))
				{
					unk_0xBAFED2F6486F771A(iLocal_223, 2, true);
					unk_0xDD353D0E9C789D0E(&iLocal_269);
					unk_0x89258193691A7600(0, iLocal_236, unk_0x16F2683693E537C9(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x75ABDC5F81978924(iLocal_269);
					unk_0x78ADC381772E3D54(iLocal_223, iLocal_269);
					unk_0xF82EA857DA10E0CD(&iLocal_269);
					unk_0xFADC0A217229F6B5(iLocal_223, true);
					bLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 3)
		{
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_223) && !unk_0xEB6A8945D1AC98A1(iLocal_222)) && !unk_0x437347B10A200C4B(iLocal_236, 0))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_222, iLocal_236, 0) && unk_0xC42A92762C58E1B9(iLocal_223, iLocal_236, 0))
				{
					unk_0xBAFED2F6486F771A(iLocal_222, 2, true);
					unk_0xBAFED2F6486F771A(iLocal_223, 2, true);
					unk_0xDD353D0E9C789D0E(&iLocal_269);
					unk_0x89258193691A7600(0, iLocal_236, unk_0x16F2683693E537C9(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x75ABDC5F81978924(iLocal_269);
					unk_0x78ADC381772E3D54(iLocal_222, iLocal_269);
					unk_0xF82EA857DA10E0CD(&iLocal_269);
					unk_0x11AD11297DC58CC7(iLocal_223, false);
					unk_0xFADC0A217229F6B5(iLocal_222, true);
					bLocal_284 = true;
				}
			}
			if (unk_0xEB6A8945D1AC98A1(iLocal_222) && !unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				func_59(&uLocal_54, 5);
				unk_0x5B1D360B9C6F0A09(iLocal_223, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 2;
			}
			if (unk_0xEB6A8945D1AC98A1(iLocal_223) && !unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				func_59(&uLocal_54, 6);
				unk_0x5B1D360B9C6F0A09(iLocal_222, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 1;
			}
		}
		if (iLocal_265 == 4)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				unk_0xA3BF0AA5A2608191(iLocal_222);
				unk_0xEEB67C3D0A71A47B(iLocal_222, vLocal_219, 1000f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_222, true);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				unk_0xA3BF0AA5A2608191(iLocal_223);
				unk_0xEEB67C3D0A71A47B(iLocal_223, vLocal_219, 1000f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_223, true);
			}
			bLocal_284 = true;
		}
	}
}

void func_65()
{
	if ((unk_0x437347B10A200C4B(iLocal_226[0], 0) && unk_0x437347B10A200C4B(iLocal_226[1], 0)) && unk_0x437347B10A200C4B(iLocal_226[2], 0))
	{
		func_59(&uLocal_54, 4);
		iLocal_274 = 1;
		iLocal_264 = 1;
		unk_0x0E2400AB9174FA81(1, iLocal_267, 1862763509);
		if (!bLocal_50 && bLocal_49)
		{
			unk_0x142CC44DB769B57E(&iLocal_295);
			unk_0x142CC44DB769B57E(&iLocal_296);
		}
		if (!bLocal_50)
		{
			if (!unk_0x437347B10A200C4B(iLocal_222, 0))
			{
				func_66(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!unk_0x437347B10A200C4B(iLocal_223, 0))
			{
				func_59(&uLocal_54, 5);
				func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_66(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (unk_0xDF1306B443CD3D15(iLocal_236, 0))
		{
			unk_0xE910A68AA670B4AA(iLocal_236);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222) && !unk_0xA750A57C629763A9(iLocal_222))
			{
				unk_0x76B892E21D01B885(iLocal_222, 1, 1, 1, 0);
				iLocal_265 = 1;
				unk_0xA3BF0AA5A2608191(iLocal_222);
				unk_0xD93EE6549113F9E1(iLocal_222, 1);
				unk_0x11AD11297DC58CC7(iLocal_222, true);
				unk_0xE910A68AA670B4AA(iLocal_222);
				unk_0xE910A68AA670B4AA(iLocal_236);
				unk_0xDD353D0E9C789D0E(&iLocal_269);
				unk_0x5B1D360B9C6F0A09(0, iLocal_236, -1, -1, 2f, 9, 0);
				unk_0x75ABDC5F81978924(iLocal_269);
				unk_0x78ADC381772E3D54(iLocal_222, iLocal_269);
				unk_0xF82EA857DA10E0CD(&iLocal_269);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_223) && !unk_0xA750A57C629763A9(iLocal_223))
				{
					unk_0xA3BF0AA5A2608191(iLocal_223);
					unk_0x11AD11297DC58CC7(iLocal_223, true);
					unk_0xE910A68AA670B4AA(iLocal_223);
					unk_0xE910A68AA670B4AA(iLocal_236);
					unk_0xD93EE6549113F9E1(iLocal_223, 1);
					unk_0x5B1D360B9C6F0A09(iLocal_223, iLocal_236, -1, 0, 2f, 1, 0);
					iLocal_265 = 3;
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				unk_0xD93EE6549113F9E1(iLocal_223, 1);
				unk_0x76B892E21D01B885(iLocal_223, 1, 1, 1, 0);
				unk_0xA3BF0AA5A2608191(iLocal_223);
				unk_0x11AD11297DC58CC7(iLocal_223, true);
				unk_0xE910A68AA670B4AA(iLocal_223);
				unk_0xE910A68AA670B4AA(iLocal_236);
				unk_0xDD353D0E9C789D0E(&iLocal_269);
				unk_0x5B1D360B9C6F0A09(0, iLocal_236, -1, -1, 2f, 1, 0);
				unk_0x75ABDC5F81978924(iLocal_269);
				unk_0x78ADC381772E3D54(iLocal_223, iLocal_269);
				unk_0xF82EA857DA10E0CD(&iLocal_269);
				iLocal_265 = 2;
			}
		}
		else
		{
			iLocal_265 = 4;
		}
	}
}

int func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_67(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					vVar0 = { -1f, 1f, 0,5f };
					vVar3 = { -0,5f, 0,75f, 0,05f };
					iVar6 = 0;
					break;
				
				case 1:
					vVar0 = { 1f, 1f, 0,5f };
					vVar3 = { 0,5f, 0,75f, 0,05f };
					iVar6 = 1;
					break;
				
				case 4:
					vVar0 = { -1f, -1f, 0,5f };
					vVar3 = { -0,5f, -0,75f, 0,05f };
					iVar6 = 2;
					break;
				
				case 5:
					vVar0 = { 1f, -1f, 0,5f };
					vVar3 = { 0,5f, -0,75f, 0,05f };
					iVar6 = 3;
					break;
			}
			if (unk_0xD15F544473A95FE8(unk_0x68E4ADDDDCD7BDDE(iParam0, vVar0), fParam3, 1, 1) || unk_0xD15F544473A95FE8(unk_0x68E4ADDDDCD7BDDE(iParam0, vVar0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						unk_0x1A6519AE5766DBD8(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						unk_0x218FC9AE303B791F(iParam0, iVar6);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						unk_0x26E12C087E2B91F8(iParam0, vVar3, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_68(int iParam0)
{
	if ((!unk_0xEB6A8945D1AC98A1(iParam0) && !func_37()) && timera() > 12000)
	{
		func_56(&uLocal_54, 4, iParam0, "RECSBCop1", 0, 1);
		if (unk_0x12DE711B1C681E9E(iParam0, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_39(&uLocal_54, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			settimera(0);
		}
	}
}

void func_69()
{
	if (!unk_0x437347B10A200C4B(iLocal_222, 0))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_222, unk_0x16F2683693E537C9(), 1))
		{
			bLocal_50 = true;
			settimera(0);
			unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_222, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_222, true);
				unk_0xF96CCE23B30CFE36(iLocal_222, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_222, 1);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_223, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_223, true);
				unk_0xF96CCE23B30CFE36(iLocal_223, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_223, 1);
			}
			if (!bLocal_49)
			{
				func_3();
				wait(0);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
		{
			if (!func_72() && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4))
			{
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_222) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_222))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_222, 20f, 20f, 20f, 0, 1, 0) && unk_0x6AB6A474D29FA7D8(iLocal_222, unk_0x16F2683693E537C9()))
					{
						iLocal_240++;
						if (!iLocal_241 && !func_70("recsb_theaim"))
						{
							func_3();
							wait(0);
							if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
							{
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
							{
								func_59(&uLocal_54, 5);
								func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_241 = 1;
						}
						if (iLocal_240 > 45)
						{
							bLocal_50 = true;
							settimera(0);
							if (!bLocal_49)
							{
								func_3();
								wait(0);
								if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
								{
									func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
								{
									unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
								{
									unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_223, 0))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_223, unk_0x16F2683693E537C9(), 1))
		{
			bLocal_50 = true;
			settimera(0);
			unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_223, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_223, true);
				unk_0xF96CCE23B30CFE36(iLocal_223, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_223, 1);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_222, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_222, true);
				unk_0xF96CCE23B30CFE36(iLocal_222, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_222, 1);
			}
			if (!bLocal_49)
			{
				func_3();
				wait(0);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
		{
			if (!func_72() && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4))
			{
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_223) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_223))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_223, 20f, 20f, 20f, 0, 1, 0) && unk_0x6AB6A474D29FA7D8(iLocal_223, unk_0x16F2683693E537C9()))
					{
						if ((!iLocal_242 && !unk_0xEB6A8945D1AC98A1(iLocal_222)) && !func_70("recsb_theaim"))
						{
							func_3();
							wait(0);
							if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
							{
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
							{
								func_59(&uLocal_54, 5);
								func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_242 = 1;
						}
						iLocal_239++;
						if (iLocal_239 > 45)
						{
							bLocal_50 = true;
							settimera(0);
							if (!bLocal_49)
							{
								func_3();
								wait(0);
								if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
								{
									func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
								{
									unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
								{
									unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!iLocal_289 && bLocal_260)
	{
		if (unk_0xEB751B41BC4080D4(iLocal_292[0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				if (unk_0x6AB6A474D29FA7D8(iLocal_222, unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iLocal_222, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_3();
					wait(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				if (unk_0x6AB6A474D29FA7D8(iLocal_223, unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iLocal_223, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					wait(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
		}
	}
	if (!iLocal_290 && bLocal_261)
	{
		if (unk_0xEB751B41BC4080D4(iLocal_292[1]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				if (unk_0x6AB6A474D29FA7D8(iLocal_222, unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iLocal_222, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_3();
					wait(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				if (unk_0x6AB6A474D29FA7D8(iLocal_223, unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iLocal_223, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					wait(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_236, 0))
	{
		if ((unk_0xB87D13D0C064E9D1(iLocal_236, unk_0x16F2683693E537C9(), 1) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_236, 0)) || unk_0x49FCF3B44AECBD62(unk_0x16F2683693E537C9(), iLocal_236, 741814745, -1))
		{
			bLocal_50 = true;
			settimera(0);
			unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_222, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_222, true);
				unk_0xF96CCE23B30CFE36(iLocal_222, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_222, 1);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_223, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_223, true);
				unk_0xF96CCE23B30CFE36(iLocal_223, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_223, 1);
			}
			func_3();
			wait(0);
			if (!unk_0x437347B10A200C4B(iLocal_236, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_236, 0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
					{
						func_66(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0x5B1D360B9C6F0A09(iLocal_222, iLocal_236, -1, -1, 2f, 524296, 0);
					}
					else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
					{
						func_59(&uLocal_54, 5);
						func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_66(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0x5B1D360B9C6F0A09(iLocal_223, iLocal_236, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_49)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
					{
						func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
					{
						unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
					{
						unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_70(char* sParam0)
{
	if (func_37())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_71()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_72()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
		{
			if (unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), -1281684762) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), 788747387))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()
{
	if (!bLocal_286)
	{
		unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iLocal_270);
		if (unk_0xEC560E589DF8370E(iLocal_270))
		{
			iLocal_231 = unk_0x940C1429253D3B1B(iLocal_270);
		}
		if ((iLocal_231 == iLocal_226[0] || iLocal_231 == iLocal_226[1]) || iLocal_231 == iLocal_226[2])
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_231))
			{
				if (!func_72() && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4))
				{
					if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_231) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_231))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_231, 20f, 20f, 20f, 0, 1, 0))
						{
							if (unk_0x6AB6A474D29FA7D8(iLocal_231, unk_0x16F2683693E537C9()) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_231, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_287)
								{
									if (!func_70("recsb_coppon"))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
										{
											func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
											func_3();
											wait(0);
											func_39(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
										else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
										{
											unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_54, 4);
											func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
											func_3();
											wait(0);
											func_39(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
										else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
										{
											unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_54, 4);
											func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
											func_3();
											wait(0);
											func_39(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
									}
								}
								iLocal_238++;
								if (iLocal_238 > 40)
								{
									bLocal_286 = true;
									bLocal_49 = true;
									if (!unk_0x437347B10A200C4B(iLocal_270, 0))
									{
										unk_0x0E2400AB9174FA81(5, iLocal_268, 1862763509);
										iVar0 = 0;
										while (iVar0 < iLocal_226)
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar0]))
											{
												unk_0x6C3AE6E278DB3D0E(iLocal_226[iVar0], unk_0x16F2683693E537C9(), 0, 16);
												unk_0xFADC0A217229F6B5(iLocal_226[iVar0], true);
												unk_0xF96CCE23B30CFE36(iLocal_226[iVar0], unk_0x16F2683693E537C9());
												unk_0xB8AFFA077E15E999(iLocal_226[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_287)
					{
						iLocal_238 = 40;
					}
					else
					{
						iLocal_238 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_226)
	{
		if (unk_0xC844350D5D58C99A(iLocal_226[iVar1]))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_226[iVar1], unk_0x16F2683693E537C9(), 1))
			{
				bLocal_49 = true;
			}
			if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_226[iVar1], unk_0x728870EB733D12A1(), 1))
				{
					bLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_286)
	{
	}
	if (iLocal_266)
	{
		if (timerb() > 6000)
		{
			if (timerb() > 6000 && timerb() < 7000)
			{
				unk_0x7800CEC090C01D4D(330,1744f, 2629,238f, 43,5056f, 30f);
			}
			if (!iLocal_262)
			{
				if (bLocal_50)
				{
					if (!func_37())
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
				else if (!iLocal_264)
				{
					if (!func_37())
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
			}
			if (unk_0x4A42C22237F5FF76(unk_0x16F2683693E537C9(), Vector(43,5005f, 2626,29f, 326,6079f) - Vector(50f, 50f, 50f), Vector(43,5005f, 2626,29f, 326,6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_49 = true;
			}
			if (!unk_0x437347B10A200C4B(iLocal_236, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_236, 0))
				{
					bLocal_49 = true;
					func_3();
					wait(0);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
					{
						func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
					{
						unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
					{
						unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_226)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar1]))
			{
				if (unk_0xEB751B41BC4080D4(iLocal_292[0]) || unk_0xEB751B41BC4080D4(iLocal_292[1]))
				{
					if (unk_0x6AB6A474D29FA7D8(iLocal_226[iVar1], unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(iLocal_226[iVar1], unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_49 = true;
						func_3();
						wait(0);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_226[iVar1]))
				{
					unk_0x0E2400AB9174FA81(3, iLocal_268, 1862763509);
					bLocal_49 = true;
				}
			}
			iVar1++;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]) && !unk_0x437347B10A200C4B(iLocal_232[2], 0))
		{
			if (!unk_0x12DE711B1C681E9E(iLocal_226[1], unk_0x16F2683693E537C9(), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0x6DAD7906B73F064D(&(iLocal_226[1]));
				unk_0x046C362CF15F1935(&(iLocal_232[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_232)
	{
		if (!unk_0x437347B10A200C4B(iLocal_232[iVar1], 0))
		{
			if ((unk_0xB87D13D0C064E9D1(iLocal_232[iVar1], unk_0x16F2683693E537C9(), 1) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_232[iVar1], 0)) || unk_0x49FCF3B44AECBD62(unk_0x16F2683693E537C9(), iLocal_232[iVar1], 741814745, -1))
			{
				bLocal_49 = true;
			}
			if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_232[iVar1], unk_0x728870EB733D12A1(), 1))
				{
					bLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (!unk_0x437347B10A200C4B(iLocal_237, 0))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_237, unk_0x16F2683693E537C9(), 1) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_237, 0))
		{
			bLocal_49 = true;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), -1323100960) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), -442313018))
		{
			iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (iLocal_266)
			{
				if (!unk_0x437347B10A200C4B(iLocal_236, 0))
				{
					if (unk_0x6D18156F72BE0773(iVar2, iLocal_236))
					{
						bLocal_49 = true;
						func_3();
						wait(0);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
						{
							unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_232)
			{
				if (!unk_0x437347B10A200C4B(iLocal_232[iVar1], 0))
				{
					if (unk_0x6D18156F72BE0773(iVar2, iLocal_232[iVar1]))
					{
						bLocal_49 = true;
					}
				}
				iVar1++;
			}
			if (!unk_0x437347B10A200C4B(iLocal_237, 0))
			{
				if (unk_0x6D18156F72BE0773(iVar2, iLocal_237))
				{
					bLocal_49 = true;
				}
			}
		}
	}
	if (bLocal_49 || bLocal_286)
	{
		settimera(0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 1, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
		unk_0x51B096AAC60548C1(0,1f);
		unk_0x73804C1E1999954F(350f);
		bLocal_49 = true;
		if (!unk_0x437347B10A200C4B(iLocal_236, 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_236, 0))
		{
		}
		else
		{
			func_3();
			wait(0);
			if (!iLocal_266)
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_222) && !unk_0xEB6A8945D1AC98A1(iLocal_223))
				{
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		unk_0x0E2400AB9174FA81(5, iLocal_268, 1862763509);
		if (!func_87())
		{
			settimera(0);
			if (!func_87())
			{
				func_74(1);
			}
		}
		if (iLocal_266)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_226)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar1]))
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_226[iVar1], unk_0x16F2683693E537C9(), 0, 16);
					unk_0xFADC0A217229F6B5(iLocal_226[iVar1], true);
					unk_0xF96CCE23B30CFE36(iLocal_226[iVar1], unk_0x16F2683693E537C9());
					unk_0x76B892E21D01B885(iLocal_226[iVar1], 1, 1, 1, 0);
					unk_0xB8AFFA077E15E999(iLocal_226[iVar1], 1);
					unk_0x3CC33E4E9CE523F4(iLocal_226[iVar1], 2);
					unk_0xAFF39FB306F8E232(iLocal_226[iVar1], 50, true);
				}
				iVar1++;
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_224))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_224, unk_0x16F2683693E537C9(), 1))
		{
			unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
			unk_0x0E2400AB9174FA81(5, iLocal_268, 1862763509);
			bLocal_49 = true;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_225))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_225, unk_0x16F2683693E537C9(), 1))
		{
			unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
			unk_0x0E2400AB9174FA81(5, iLocal_268, 1862763509);
			bLocal_49 = true;
		}
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		bLocal_49 = true;
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		unk_0x0E2400AB9174FA81(5, iLocal_268, 1862763509);
	}
}

int func_74(int iParam0)
{
	if (func_78())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_19(Global_111627))
		{
			func_75(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_19(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_76(func_77(iParam0), -1);
					Global_111638.f_24990.f_2++;
					unk_0x5D96D8530B3D0904(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 1))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_76(func_77(iParam0), -1);
					Global_111638.f_24990.f_3++;
					unk_0x5D96D8530B3D0904(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 2))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_76(func_77(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_76(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

char* func_77(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_78()
{
	switch (func_79(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_79(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_83(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_81(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_80(uParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_81(int iParam0)
{
	return func_82(iParam0, Global_41431);
}

int func_82(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_83(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_84()
{
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_226[0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && !unk_0xEB6A8945D1AC98A1(iLocal_222))
	{
	}
	if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 220,6075f, 2615,145f, 35,8465f, 440,8339f, 2684,23f, 72,6324f, 183,125f, 0, true, 0) && unk_0x8E28E832BEAC3DCE(vLocal_219, 1f)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 325,6556f, 2647,021f, 43,6289f, 30f, 30f, 30f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar0]))
			{
				unk_0xCA84BD02FBA0BEA4(iLocal_226[iVar0], true, iLocal_267);
				if (!unk_0xE4EDC4B0E92C078B(iLocal_297[iVar0]))
				{
					iLocal_297[iVar0] = func_85(iLocal_226[iVar0], 0, 145);
					unk_0xF2D30B8ACAF12A39(iLocal_297[iVar0], false);
				}
			}
			iVar0++;
		}
		if (!unk_0x437347B10A200C4B(iLocal_222, 0) || (!unk_0xEB6A8945D1AC98A1(iLocal_222) && !iLocal_277))
		{
			unk_0xCA84BD02FBA0BEA4(iLocal_222, true, iLocal_268);
			iLocal_295 = func_85(iLocal_222, 0, 145);
			unk_0xF2D30B8ACAF12A39(iLocal_295, false);
			iLocal_276 = 0;
			iLocal_277 = 1;
		}
		if (!unk_0x437347B10A200C4B(iLocal_223, 0) || (!unk_0xEB6A8945D1AC98A1(iLocal_223) && !iLocal_278))
		{
			unk_0xCA84BD02FBA0BEA4(iLocal_223, true, iLocal_268);
			iLocal_296 = func_85(iLocal_223, 0, 145);
			unk_0xF2D30B8ACAF12A39(iLocal_296, false);
			iLocal_275 = 0;
			iLocal_278 = 1;
		}
		settimera(0);
		if (!func_87())
		{
			func_74(1);
		}
	}
}

int func_85(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_86(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

int func_86(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_58(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_58(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_58(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_87()
{
	if ((Global_111627 == func_34() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_88()
{
	if (!iLocal_280)
	{
		if (!bLocal_49 && !iLocal_266)
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 325,6556f, 2647,021f, 43,6289f, 30f, 30f, 30f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_297[iVar0]))
					{
						unk_0xF2D30B8ACAF12A39(iLocal_297[iVar0], true);
					}
					iVar0++;
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_295))
				{
					unk_0xF2D30B8ACAF12A39(iLocal_295, true);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_296))
				{
					unk_0xF2D30B8ACAF12A39(iLocal_296, true);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
				{
					unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_280 = 1;
			}
		}
	}
	if ((func_87() && !iLocal_264) && !iLocal_266)
	{
		if (iLocal_283 == 0 && !func_37())
		{
			settimera(0);
			if (func_51() == 0)
			{
				func_39(&uLocal_54, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_51() == 1)
			{
				func_39(&uLocal_54, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_51() == 2)
			{
				func_39(&uLocal_54, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_283++;
			settimera(0);
		}
		if (iLocal_283 == 1 && !func_37())
		{
			settimera(0);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[1]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_226[2]))
			{
				unk_0x4F39CC3882DD074E(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_283++;
			settimera(0);
		}
		if ((iLocal_283 == 2 && timera() > 2000) && !func_37())
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				func_39(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				func_59(&uLocal_54, 5);
				func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			settimera(0);
			iLocal_283++;
		}
		if ((iLocal_283 == 3 && timera() > 2000) && !func_37())
		{
			if (!bLocal_50)
			{
				if (!iLocal_263)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
					{
						func_39(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
					{
						func_59(&uLocal_54, 5);
						func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_263 = 1;
				}
			}
			if (!bLocal_49)
			{
				func_89(&(iLocal_226[0]), "recsb_copclo");
				func_89(&(iLocal_226[1]), "recsb_copclo");
				func_89(&(iLocal_226[2]), "recsb_copclo");
			}
		}
		if (iLocal_283 == 4 && timera() > 5000)
		{
			settimera(0);
			iLocal_283++;
		}
	}
}

void func_89(var uParam0, char* sParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(*uParam0))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_49)
			{
				func_56(&uLocal_54, 4, *uParam0, "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", sParam1, 4, 0, 0, 0);
				unk_0x0C8C0C840C2D1AD2(*uParam0, unk_0x16F2683693E537C9(), 10000, 48, 4);
			}
			settimera(0);
			iLocal_283++;
		}
	}
}

void func_90()
{
	iVar0 = 0;
	while (iVar0 < iLocal_226)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_226[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_297[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_297[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_222))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_295))
		{
			unk_0x142CC44DB769B57E(&iLocal_295);
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_223))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_296))
		{
			unk_0x142CC44DB769B57E(&iLocal_296);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (!unk_0x437347B10A200C4B(iLocal_232[iVar0], 0))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_232[iVar0], 0))
			{
				unk_0x1640D91371EAFFED(iLocal_232[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_50)
	{
		if (!iLocal_52)
		{
			unk_0x0E2400AB9174FA81(5, iLocal_267, 1862763509);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_295))
				{
					unk_0x142CC44DB769B57E(&iLocal_295);
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_295))
				{
					iLocal_295 = func_85(iLocal_222, 1, 145);
					unk_0x25C5402CC10F76CD(iLocal_222, true);
				}
				unk_0x6C3AE6E278DB3D0E(iLocal_222, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_222, true);
				unk_0xF96CCE23B30CFE36(iLocal_222, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_222, 1);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_296))
				{
					unk_0x142CC44DB769B57E(&iLocal_296);
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_296))
				{
					iLocal_296 = func_85(iLocal_223, 1, 145);
					unk_0x25C5402CC10F76CD(iLocal_223, true);
				}
				unk_0x6C3AE6E278DB3D0E(iLocal_223, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_223, true);
				unk_0xF96CCE23B30CFE36(iLocal_223, unk_0x16F2683693E537C9());
				unk_0xB8AFFA077E15E999(iLocal_223, 1);
			}
			iLocal_52 = 1;
		}
		if (bLocal_49)
		{
			if (!iLocal_53)
			{
				unk_0x0E2400AB9174FA81(5, iLocal_268, 1862763509);
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar0]))
					{
						unk_0x25C5402CC10F76CD(iLocal_226[iVar0], true);
						if (unk_0xE4EDC4B0E92C078B(iLocal_297[iVar0]))
						{
							unk_0x142CC44DB769B57E(&(iLocal_297[iVar0]));
						}
						unk_0x6C3AE6E278DB3D0E(iLocal_226[iVar0], unk_0x16F2683693E537C9(), 0, 16);
						unk_0xFADC0A217229F6B5(iLocal_226[iVar0], true);
						unk_0xF96CCE23B30CFE36(iLocal_226[iVar0], unk_0x16F2683693E537C9());
						unk_0xB8AFFA077E15E999(iLocal_226[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_53 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar0]))
				{
					unk_0x25C5402CC10F76CD(iLocal_226[iVar0], false);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_49)
	{
		if (!iLocal_51)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				unk_0x25C5402CC10F76CD(iLocal_222, false);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				unk_0x25C5402CC10F76CD(iLocal_223, false);
			}
			iLocal_51 = 1;
		}
		if (!iLocal_53)
		{
			unk_0x0E2400AB9174FA81(5, iLocal_268, 1862763509);
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar0]))
				{
					unk_0x25C5402CC10F76CD(iLocal_226[iVar0], true);
					unk_0xFDCA9E507F779D9A(iLocal_226[iVar0]);
					if (unk_0xE4EDC4B0E92C078B(iLocal_297[iVar0]))
					{
						unk_0x142CC44DB769B57E(&(iLocal_297[iVar0]));
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_297[iVar0]))
					{
						iLocal_297[iVar0] = func_85(iLocal_226[iVar0], 1, 145);
					}
					unk_0x6C3AE6E278DB3D0E(iLocal_226[iVar0], unk_0x16F2683693E537C9(), 0, 16);
					unk_0xFADC0A217229F6B5(iLocal_226[iVar0], true);
					unk_0xF96CCE23B30CFE36(iLocal_226[iVar0], unk_0x16F2683693E537C9());
					unk_0xB8AFFA077E15E999(iLocal_226[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_53 = 1;
		}
	}
}

void func_91()
{
	unk_0x523BCC9DC80CD82F(-277793362);
	unk_0x523BCC9DC80CD82F(-1736970383);
	unk_0x523BCC9DC80CD82F(-1286380898);
	unk_0x523BCC9DC80CD82F(-1683328900);
	unk_0x523BCC9DC80CD82F(-2095439403);
	if ((((unk_0xB87F6CF6E5628C67(-277793362) && unk_0xB87F6CF6E5628C67(-1736970383)) && unk_0xB87F6CF6E5628C67(-1286380898)) && unk_0xB87F6CF6E5628C67(-1683328900)) && unk_0xB87F6CF6E5628C67(-2095439403))
	{
		unk_0xAB8E2DDC7AF955E0(-2095439403, true);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		unk_0x51B096AAC60548C1(0f);
		unk_0x7D6CA5F52B3748BF(Vector(44,49f, 2630,83f, 335,22f) - Vector(20f, 50f, 50f), Vector(44,49f, 2630,83f, 335,22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0xB5376EA942202450(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 0, false, 1);
		unk_0xE342F209E49C5314(Vector(43,4932f, 2612,694f, 328,0555f) - Vector(10f, 10f, 10f), Vector(43,4932f, 2612,694f, 328,0555f) + Vector(10f, 10f, 10f), false, 1);
		unk_0x28F5E4DA506AC0CA(328,0555f, 2612,694f, 43,4932f, 5f, 0, 0, 0, 0, false, 0);
		iLocal_236 = unk_0x122AAB0B1D6F55AD(-2095439403, 326,78f, 2626,56f, 43,5081f, 45,21f, true, true, false);
		iLocal_232[0] = unk_0x122AAB0B1D6F55AD(-1683328900, 314,1008f, 2641,67f, 43,5055f, 258,9436f, true, true, false);
		iLocal_232[1] = unk_0x122AAB0B1D6F55AD(-1683328900, 330,7097f, 2646,913f, 43,685f, 120,9436f, true, true, false);
		iLocal_232[2] = unk_0x122AAB0B1D6F55AD(-1683328900, 321,4496f, 2649,388f, 43,5706f, 105,9436f, true, true, false);
		unk_0x21CBAD8B56E628F6(iLocal_232[2], 1);
		unk_0x21CBAD8B56E628F6(iLocal_232[1], 1);
		unk_0x21CBAD8B56E628F6(iLocal_232[0], 1);
		unk_0xAA280AF45BCCCF21(iLocal_232[2], 1);
		unk_0xAA280AF45BCCCF21(iLocal_232[1], 1);
		unk_0xAA280AF45BCCCF21(iLocal_232[0], 1);
		unk_0x1640D91371EAFFED(iLocal_232[0], 1);
		unk_0x1640D91371EAFFED(iLocal_232[2], 1);
		unk_0x1640D91371EAFFED(iLocal_232[1], 1);
		unk_0xB26AC67EF006D7D4(iLocal_236, 1);
		unk_0xB26AC67EF006D7D4(iLocal_232[0], 1);
		unk_0xB26AC67EF006D7D4(iLocal_232[1], 1);
		unk_0xB26AC67EF006D7D4(iLocal_232[2], 1);
		iLocal_222 = unk_0x36F2404464202779(19, -1736970383, 321,31f, 2615,66f, 43,4963f, 346f, 1, true);
		iLocal_223 = unk_0x36F2404464202779(19, -1736970383, 326,25f, 2624,51f, 43,4846f, 341f, 1, true);
		iLocal_230 = unk_0x36F2404464202779(6, -277793362, 325,3731f, 2631,16f, 43,5248f, 87f, 1, true);
		iLocal_226[0] = unk_0x36F2404464202779(6, -277793362, 310,6203f, 2642,854f, 43,5173f, 226f, 1, true);
		iLocal_226[1] = unk_0x36F2404464202779(6, -277793362, 319,5652f, 2650,067f, 43,5411f, 189f, 1, true);
		iLocal_226[2] = unk_0x36F2404464202779(6, -277793362, 324,0396f, 2650,964f, 43,5983f, 214f, 1, true);
		unk_0x5F2AA9E2843E9403(iLocal_226[0], "ped_cops[0]");
		unk_0x5F2AA9E2843E9403(iLocal_226[1], "ped_cops[1]");
		unk_0x5F2AA9E2843E9403(iLocal_226[2], "ped_cops[2]");
		unk_0xD5EF6A937E06E46F(iLocal_226[0], true, -1, 0);
		unk_0xD5EF6A937E06E46F(iLocal_226[1], true, -1, 0);
		unk_0xD5EF6A937E06E46F(iLocal_226[2], true, -1, 0);
		unk_0xED253B8DDB3FFB77(iLocal_223, 326,25f, 2624,51f, 43,4846f, 3,5f, 0, 0);
		unk_0xED253B8DDB3FFB77(iLocal_222, 321,31f, 2615,66f, 43,4963f, 3,5f, 0, 0);
		unk_0xED253B8DDB3FFB77(iLocal_226[0], 310,6203f, 2642,854f, 43,5173f, 3,5f, 0, 0);
		unk_0xED253B8DDB3FFB77(iLocal_226[1], 319,5652f, 2650,067f, 43,5411f, 3,5f, 0, 0);
		unk_0xED253B8DDB3FFB77(iLocal_226[2], 324,0396f, 2650,964f, 43,5983f, 3,5f, 0, 0);
		unk_0x24E3054DFB9EE93B(iLocal_226[0]);
		unk_0x24E3054DFB9EE93B(iLocal_226[1]);
		unk_0x24E3054DFB9EE93B(iLocal_226[2]);
		unk_0xAFF39FB306F8E232(iLocal_226[0], 0, true);
		unk_0xAFF39FB306F8E232(iLocal_226[1], 0, true);
		unk_0xAFF39FB306F8E232(iLocal_226[2], 0, true);
		unk_0xAFF39FB306F8E232(iLocal_226[0], 1, true);
		unk_0xAFF39FB306F8E232(iLocal_226[1], 1, true);
		unk_0xAFF39FB306F8E232(iLocal_226[2], 1, true);
		unk_0x298903DD96203C2C(iLocal_226[0], 13);
		unk_0x298903DD96203C2C(iLocal_226[1], 13);
		unk_0x298903DD96203C2C(iLocal_226[2], 13);
		unk_0xAFF39FB306F8E232(iLocal_223, 0, true);
		unk_0xAFF39FB306F8E232(iLocal_222, 0, true);
		unk_0xAFF39FB306F8E232(iLocal_223, 1, true);
		unk_0xAFF39FB306F8E232(iLocal_222, 1, true);
		unk_0x611DFA9294B339CA(iLocal_232[0], 0, 0, false);
		unk_0x611DFA9294B339CA(iLocal_232[0], 1, 0, false);
		unk_0x611DFA9294B339CA(iLocal_232[1], 1, 0, false);
		unk_0x611DFA9294B339CA(iLocal_232[1], 0, 0, false);
		unk_0x611DFA9294B339CA(iLocal_232[2], 1, 0, false);
		unk_0x611DFA9294B339CA(iLocal_232[2], 0, 0, false);
		unk_0x611DFA9294B339CA(iLocal_236, 1, 0, false);
		unk_0x611DFA9294B339CA(iLocal_236, 0, 0, false);
		unk_0xE8832A9E16A57A1F(iLocal_236, true, 1);
		unk_0xF63400DBE3303D26("robbers", &iLocal_267);
		unk_0xF63400DBE3303D26("cops", &iLocal_268);
		unk_0xD458AC1C1D29C3B4(iLocal_230, 0, 0);
		unk_0x6DF7BF67E86AAE86(iLocal_223, iLocal_267);
		unk_0xCA84BD02FBA0BEA4(iLocal_223, false, iLocal_268);
		unk_0xD458AC1C1D29C3B4(iLocal_223, 300, 0);
		unk_0x262EF6C6306BEA6C(iLocal_223, 453432689, 200, true, true);
		unk_0x9FA191B317572861(iLocal_223, 100f);
		unk_0x967762C930C0C5FD(iLocal_223, 100f);
		unk_0x3243DF4B5D918A01(iLocal_223, 35f, 35f, 1);
		unk_0x298903DD96203C2C(iLocal_223, 13);
		unk_0x6DF7BF67E86AAE86(iLocal_222, iLocal_267);
		unk_0xCA84BD02FBA0BEA4(iLocal_222, false, iLocal_268);
		unk_0xD458AC1C1D29C3B4(iLocal_222, 300, 0);
		unk_0x262EF6C6306BEA6C(iLocal_222, 453432689, 200, true, true);
		unk_0x9FA191B317572861(iLocal_222, 100f);
		unk_0x967762C930C0C5FD(iLocal_222, 100f);
		unk_0x3243DF4B5D918A01(iLocal_222, 35f, 35f, 1);
		unk_0x298903DD96203C2C(iLocal_222, 13);
		unk_0xCA84BD02FBA0BEA4(iLocal_226[0], false, iLocal_267);
		unk_0xCA84BD02FBA0BEA4(iLocal_226[1], false, iLocal_267);
		unk_0xCA84BD02FBA0BEA4(iLocal_226[2], false, iLocal_267);
		unk_0x262EF6C6306BEA6C(iLocal_226[0], 487013001, 200, true, true);
		unk_0x262EF6C6306BEA6C(iLocal_226[1], 453432689, 200, true, true);
		unk_0x262EF6C6306BEA6C(iLocal_226[2], 487013001, 200, true, true);
		unk_0x9FA191B317572861(iLocal_226[0], 100f);
		unk_0x967762C930C0C5FD(iLocal_226[0], 100f);
		unk_0x9FA191B317572861(iLocal_226[1], 100f);
		unk_0x967762C930C0C5FD(iLocal_226[1], 100f);
		unk_0x9FA191B317572861(iLocal_226[2], 100f);
		unk_0x967762C930C0C5FD(iLocal_226[2], 100f);
		unk_0x6DF7BF67E86AAE86(iLocal_226[0], iLocal_268);
		unk_0x6DF7BF67E86AAE86(iLocal_226[1], iLocal_268);
		unk_0x6DF7BF67E86AAE86(iLocal_226[2], iLocal_268);
		unk_0x15EA7F4313456B1D(5, false);
		unk_0x15EA7F4313456B1D(3, false);
		unk_0x0E2400AB9174FA81(1, iLocal_268, -1533126372);
		unk_0x0E2400AB9174FA81(1, -1533126372, iLocal_268);
		unk_0x0E2400AB9174FA81(1, iLocal_268, 1862763509);
		unk_0x0E2400AB9174FA81(1, iLocal_267, 1862763509);
		unk_0x0E2400AB9174FA81(5, iLocal_268, iLocal_267);
		unk_0x0E2400AB9174FA81(5, -1533126372, iLocal_267);
		unk_0x0E2400AB9174FA81(5, iLocal_267, iLocal_268);
		unk_0x5DA3F35E3BFDEE66(iLocal_226[0], iLocal_222, 3000, 0);
		unk_0x5DA3F35E3BFDEE66(iLocal_226[1], iLocal_222, 3000, 0);
		unk_0x5DA3F35E3BFDEE66(iLocal_226[2], iLocal_222, 3000, 0);
		if (func_51() == 0)
		{
			func_56(&uLocal_54, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_56(&uLocal_54, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_56(&uLocal_54, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
		}
		func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
		func_56(&uLocal_54, 5, iLocal_222, "RECSBRobber1", 0, 1);
		unk_0x4F39CC3882DD074E(iLocal_226[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		unk_0x4F39CC3882DD074E(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		unk_0x4F39CC3882DD074E(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_47 = 1;
	}
}

void func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_94(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_93();
}

void func_93()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)), true);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	}
}

void func_94(int iParam0)
{
	Global_111627 = iParam0;
}

int func_95(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_34();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_147())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_146())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_142())
		{
			return 0;
		}
		if (func_141())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_135(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_134(iParam3))
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_133(func_51()) == 4 || func_133(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_51()))
		{
			if (!func_132(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_131(Global_111638.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x1C0640BA9A7327B3() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_130())
		{
			return 0;
		}
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0;
		}
		if (unk_0xD4A2BF1975E2C50F())
		{
			return 0;
		}
		if (!func_121(4))
		{
			return 0;
		}
		if (!func_81(5))
		{
			return 0;
		}
		if (func_120(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
		{
			if ((unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(377,153f, -717,567f, 10,0536f) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(320,9934f, 265,2515f, 82,1221f)) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-1425,564f, -244,3f, 15,8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_120(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_134(30) && !func_120(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_51()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_119(iVar8))
				{
					if (func_97(iVar4))
					{
						if (!func_96(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_51() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_96(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_97(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

int func_98(int iParam0)
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_107(iParam0) - func_107(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_104(iParam0) - func_104(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_107(iParam1) - func_107(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_104(iParam1) - func_104(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_102(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_102(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_105(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_106(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_107(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_108(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_109(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 15;
}

int func_111(int iParam0, int iParam1)
{
	if (!func_119(iParam1) || !func_119(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	func_118(&uVar0, unk_0x4460E481B9E33ADA());
	func_117(&uVar0, unk_0x8D199E381D262EEF());
	func_116(&uVar0, unk_0xD8A54335F18763BA());
	func_115(&uVar0, unk_0x972A296334C9D57B());
	func_114(&uVar0, unk_0x118229AD063C3C1D());
	func_113(&uVar0, unk_0x1A61A218F5C5EB02());
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
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
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
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_119(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_51();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_129()) || Global_110685) || Global_30770) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_125()) || func_124()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_129()) || Global_30770) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_129()) || Global_110685) || Global_30770) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_129()) || Global_110685) || Global_30770) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_124()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_129() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_53(8, -1)) || func_124()) || func_123()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_53(8, -1) || func_127()) || func_126()) || func_123()) || func_122())
						{
							return 0;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3) && unk_0x00A15D69BCAA5267() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_129()) || Global_30770) || func_128()) || func_53(8, -1)) || func_126()) || func_125()) || func_124()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_129()) || func_126()) || Global_110685) || Global_30770) || func_128()) || Global_42596) || func_53(8, -1)) || func_125()) || func_123()) || func_124()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_129()) || Global_110685) || Global_30770) || func_128()) || func_53(8, -1)) || func_125()) || func_123()) || func_127()) || func_126()) || func_124())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_122()
{
	return Global_98783.f_1;
}

int func_123()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_124()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_126()
{
	return Global_98796.f_346 > 0;
}

bool func_127()
{
	return Global_98796.f_345 > 0;
}

var func_128()
{
	return Global_1312877;
}

int func_129()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_130()
{
	func_50();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)
{
	return func_111(func_112(), iParam0);
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_51();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_133(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_134(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_147())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_135(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_27(func_51()))
		{
			iVar36 = func_24();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32], 3))
				{
					func_136(iVar32, &Var0);
					fVar35 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_136(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_137(uParam1, "Abigail1", func_139(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 1:
			func_137(uParam1, "Abigail2", func_139(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 2:
			func_137(uParam1, "Barry1", func_139(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 3:
			func_137(uParam1, "Barry2", func_139(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 4:
			func_137(uParam1, "Barry3", func_139(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 5:
			func_137(uParam1, "Barry3A", func_139(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 6:
			func_137(uParam1, "Barry3C", func_139(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 7:
			func_137(uParam1, "Barry4", func_139(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_138(iParam0), 0, 0);
			break;
		
		case 8:
			func_137(uParam1, "Dreyfuss1", func_139(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 9:
			func_137(uParam1, "Epsilon1", func_139(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 10:
			func_137(uParam1, "Epsilon2", func_139(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 11:
			func_137(uParam1, "Epsilon3", func_139(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 12:
			func_137(uParam1, "Epsilon4", func_139(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 13:
			func_137(uParam1, "Epsilon5", func_139(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 14:
			func_137(uParam1, "Epsilon6", func_139(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 15:
			func_137(uParam1, "Epsilon7", func_139(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 16:
			func_137(uParam1, "Epsilon8", func_139(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 17:
			func_137(uParam1, "Extreme1", func_139(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 18:
			func_137(uParam1, "Extreme2", func_139(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 19:
			func_137(uParam1, "Extreme3", func_139(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 20:
			func_137(uParam1, "Extreme4", func_139(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 21:
			func_137(uParam1, "Fanatic1", func_139(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 22:
			func_137(uParam1, "Fanatic2", func_139(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 23:
			func_137(uParam1, "Fanatic3", func_139(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_138(iParam0), 0, 1);
			break;
		
		case 24:
			func_137(uParam1, "Hao1", func_139(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_138(iParam0), 0, 1);
			break;
		
		case 25:
			func_137(uParam1, "Hunting1", func_139(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 26:
			func_137(uParam1, "Hunting2", func_139(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 27:
			func_137(uParam1, "Josh1", func_139(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 28:
			func_137(uParam1, "Josh2", func_139(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 29:
			func_137(uParam1, "Josh3", func_139(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 30:
			func_137(uParam1, "Josh4", func_139(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 31:
			func_137(uParam1, "Maude1", func_139(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 32:
			func_137(uParam1, "Minute1", func_139(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 33:
			func_137(uParam1, "Minute2", func_139(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 34:
			func_137(uParam1, "Minute3", func_139(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 35:
			func_137(uParam1, "MrsPhilips1", func_139(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 36:
			func_137(uParam1, "MrsPhilips2", func_139(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 37:
			func_137(uParam1, "Nigel1", func_139(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 38:
			func_137(uParam1, "Nigel1A", func_139(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 39:
			func_137(uParam1, "Nigel1B", func_139(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 40:
			func_137(uParam1, "Nigel1C", func_139(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 41:
			func_137(uParam1, "Nigel1D", func_139(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 42:
			func_137(uParam1, "Nigel2", func_139(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 43:
			func_137(uParam1, "Nigel3", func_139(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 44:
			func_137(uParam1, "Omega1", func_139(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 45:
			func_137(uParam1, "Omega2", func_139(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 46:
			func_137(uParam1, "Paparazzo1", func_139(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 47:
			func_137(uParam1, "Paparazzo2", func_139(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 48:
			func_137(uParam1, "Paparazzo3", func_139(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 49:
			func_137(uParam1, "Paparazzo3A", func_139(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 50:
			func_137(uParam1, "Paparazzo3B", func_139(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 51:
			func_137(uParam1, "Paparazzo4", func_139(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 52:
			func_137(uParam1, "Rampage1", func_139(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 54:
			func_137(uParam1, "Rampage3", func_139(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 55:
			func_137(uParam1, "Rampage4", func_139(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 56:
			func_137(uParam1, "Rampage5", func_139(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 53:
			func_137(uParam1, "Rampage2", func_139(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 57:
			func_137(uParam1, "TheLastOne", func_139(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 58:
			func_137(uParam1, "Tonya1", func_139(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 59:
			func_137(uParam1, "Tonya2", func_139(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 60:
			func_137(uParam1, "Tonya3", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 61:
			func_137(uParam1, "Tonya4", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 62:
			func_137(uParam1, "Tonya5", func_139(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_137(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_139(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_140(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_140(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_141()
{
	if (Global_30918)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_142()
{
	if (func_145() && !func_146())
	{
		return 1;
	}
	if (func_144() && func_143())
	{
		return 1;
	}
	return 0;
}

bool func_143()
{
	return Global_111356 > 0;
}

int func_144()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_146()
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

int func_147()
{
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1);
				unk_0x5D96D8530B3D0904(&iVar0, 2);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_25, 2);
				unk_0x5D96D8530B3D0904(&Global_25, 4);
				unk_0x5D96D8530B3D0904(&Global_25, 6);
				unk_0xCDC520E5E48E63D9(1571103992, iVar0, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar0, 0);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_148()
{
	if (iLocal_48)
	{
		unk_0x142CC44DB769B57E(&iLocal_295);
		unk_0x142CC44DB769B57E(&iLocal_296);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		unk_0x51B096AAC60548C1(1f);
		unk_0x905518B0A8B0C6B1();
		unk_0x9EBC57EECAF8C953(unk_0xD803B885F5E47A62());
		unk_0x842F1AEB2FCC00B7(418,2996f, 2650,597f, 42,84723f, 297,8981f, 2617,968f, 53,6412f, 49,6875f, 1);
		unk_0xB547E3FFEB27073E();
		unk_0xE342F209E49C5314(Vector(43,4932f, 2612,694f, 328,0555f) - Vector(10f, 10f, 10f), Vector(43,4932f, 2612,694f, 328,0555f) + Vector(10f, 10f, 10f), true, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_226[iVar0]))
			{
				unk_0x11AD11297DC58CC7(iLocal_226[iVar0], false);
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x24E3054DFB9EE93B(iLocal_226[iVar0]);
					unk_0xFADC0A217229F6B5(iLocal_226[iVar0], true);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_222))
			{
				unk_0x4E885A246A9D983A(iLocal_222, 317, true);
				unk_0x11AD11297DC58CC7(iLocal_222, false);
				if (!unk_0xDF1306B443CD3D15(iLocal_236, 0))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_222, iLocal_236, 0))
					{
						unk_0xDC2C59BD0989562B(iLocal_236, 1);
					}
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_223))
			{
				unk_0x4E885A246A9D983A(iLocal_223, 317, true);
				unk_0x11AD11297DC58CC7(iLocal_223, false);
				if (!unk_0xDF1306B443CD3D15(iLocal_236, 0))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_223, iLocal_236, 0))
					{
						unk_0xDC2C59BD0989562B(iLocal_236, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_149(-1);
	unk_0x10FAF14A60A0DBE1();
}

void func_149(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_87())
	{
		func_153(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_152(30000);
		StringCopy(&cVar0, func_151(Global_111627, 1), 64);
		if (func_33(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_111624, (unk_0x1C0640BA9A7327B3() - Global_111625), 0);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		unk_0x0674E58A79778E99(&Global_111634, 0);
	}
	func_150(&Global_30827);
	Global_111628 = 0;
	func_94(-1);
}

void func_150(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

char* func_151(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_152(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_153(int iParam0)
{
	func_154(iParam0, 0, func_159(iParam0));
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_112();
	func_157(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_156(iParam0, &uVar0);
	Var1 = { func_155(&uVar0) };
}

struct<16> func_155(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_106(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_105(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_107(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_110(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

void func_156(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_157(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_158(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

