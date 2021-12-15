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
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	iLocal_73 = unk_0xAD1355DD1E5D2D9B();
	iLocal_74 = unk_0x817B3657F78A517A();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_1273 = 120f;
	fLocal_1274 = 0f;
	fLocal_1276 = 1f;
	fLocal_1277 = 0f;
	fLocal_1278 = 1f;
	fLocal_1279 = 30f;
	fLocal_1281 = 1f;
	fLocal_1282 = 5f;
	fLocal_1283 = 1f;
	fLocal_1284 = 1f;
	fLocal_1285 = 100f;
	fLocal_1286 = 100f;
	fLocal_1287 = 0f;
	fLocal_1288 = 7000f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1291 = 0,3f;
	fLocal_1292 = 0,5f;
	fLocal_1293 = 50f;
	iLocal_1949 = -1;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	vLocal_3294 = { -1024,1f, -485,3321f, 35,9816f };
	vLocal_3297 = { -428,0263f, -2153,577f, 9,2997f };
	vLocal_3300 = { -498,7f, -2136,5f, 8,4f };
	vLocal_3312 = { -272,8615f, -2186,932f, 9,3174f };
	fLocal_3321 = 209,7233f;
	fLocal_3322 = 90,947f;
	fLocal_3325 = 46,7161f;
	if (func_432(0))
	{
		func_425(24, 0);
	}
	unk_0x9CBC55A05A07FC47(0);
	unk_0x8225571BCEE038F8("EXTRASUNNY", 20f);
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_423(unk_0x16F2683693E537C9(), 0);
		unk_0xC92DB9682A650680("TRV4_FAIL");
		func_421();
		func_419();
	}
	func_418(1);
	unk_0x7798376279BB5369(1);
	iLocal_3181 = 0;
	iLocal_3180 = 0;
	while (true)
	{
		unk_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0);
		if (iLocal_3207 > unk_0x1C0640BA9A7327B3())
		{
			unk_0x9501364A300048C6();
		}
		func_414();
		func_413();
		func_411();
		func_407();
		func_406();
		switch (iLocal_3180)
		{
			case 0:
				func_402();
				break;
			
			case 1:
				func_357();
				break;
			
			case 2:
				func_351();
				break;
			
			case 3:
				func_348();
				break;
			
			case 4:
				func_247();
				break;
			
			case 5:
				func_235();
				break;
			
			case 6:
				func_229();
				break;
			
			case 7:
				func_219();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		wait(0);
		func_1();
	}
}

void func_1()
{
	if (iLocal_3443 == 0)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_4(unk_0x16F2683693E537C9(), 476);
			iLocal_3443 = 1;
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (iLocal_3444 == 0)
			{
				iLocal_3275 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xC844350D5D58C99A(iLocal_3275))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3275, 0))
					{
						func_3(iLocal_3275, -1);
						func_4(iLocal_3275, 479);
						iLocal_3444 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3444 == 1)
			{
				iLocal_3444 = 0;
			}
		}
	}
	if (iLocal_3445[0] == 0)
	{
		if (unk_0xC844350D5D58C99A(uLocal_3229[0]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_3229[0]))
			{
				iLocal_3191++;
				iLocal_3445[0] = 1;
			}
		}
	}
	if (iLocal_3445[1] == 0)
	{
		if (unk_0xC844350D5D58C99A(uLocal_3229[1]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_3229[1]))
			{
				iLocal_3191++;
				iLocal_3445[1] = 1;
			}
		}
	}
	if (iLocal_3445[2] == 0)
	{
		if (unk_0xC844350D5D58C99A(uLocal_3229[2]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_3229[2]))
			{
				iLocal_3191++;
				iLocal_3445[2] = 1;
			}
		}
	}
	if (iLocal_3445[3] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[0]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[0]))
			{
				iLocal_3191++;
				iLocal_3445[3] = 1;
			}
		}
	}
	if (iLocal_3445[4] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[1]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[1]))
			{
				iLocal_3191++;
				iLocal_3445[4] = 1;
			}
		}
	}
	if (iLocal_3445[5] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[2]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[2]))
			{
				iLocal_3191++;
				iLocal_3445[5] = 1;
			}
		}
	}
	if (iLocal_3445[6] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[3]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[3]))
			{
				iLocal_3191++;
				iLocal_3445[6] = 1;
			}
		}
	}
	if (iLocal_3445[7] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[4]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[4]))
			{
				iLocal_3191++;
				iLocal_3445[7] = 1;
			}
		}
	}
	if (iLocal_3445[8] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[5]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[5]))
			{
				iLocal_3191++;
				iLocal_3445[8] = 1;
			}
		}
	}
	if (iLocal_3445[9] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[6]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[6]))
			{
				iLocal_3191++;
				iLocal_3445[9] = 1;
			}
		}
	}
	if (iLocal_3445[10] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[7]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[7]))
			{
				iLocal_3191++;
				iLocal_3445[10] = 1;
			}
		}
	}
	if (iLocal_3445[11] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[8]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[8]))
			{
				iLocal_3191++;
				iLocal_3445[11] = 1;
			}
		}
	}
	if (iLocal_3445[12] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[9]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[9]))
			{
				iLocal_3191++;
				iLocal_3445[12] = 1;
			}
		}
	}
	if (iLocal_3445[13] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[10]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3233[10]))
			{
				iLocal_3191++;
				iLocal_3445[13] = 1;
			}
		}
	}
	if (iLocal_3445[14] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3248))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3248))
			{
				iLocal_3191++;
				iLocal_3445[14] = 1;
			}
		}
	}
	if (iLocal_3445[15] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3249))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3249))
			{
				iLocal_3191++;
				iLocal_3445[15] = 1;
			}
		}
	}
	if (iLocal_3445[16] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3250))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3250))
			{
				iLocal_3191++;
				iLocal_3445[16] = 1;
			}
		}
	}
	if (iLocal_3445[17] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3251[0]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_3251[0]))
			{
				iLocal_3191++;
				iLocal_3445[17] = 1;
			}
		}
	}
	if (iLocal_3180 == 8)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
		{
			if (iLocal_3465 == 0)
			{
				func_2(482, 0);
				iLocal_3465 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0] == iParam0)
			{
				Global_73608[iVar0].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	Global_61525 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0] == iParam1)
		{
			if (Global_73608[iVar0].f_6 != iParam0)
			{
				Global_73608[iVar0].f_6 = iParam0;
				Global_73608[iVar0].f_7 = 1;
				Global_73608[iVar0].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (unk_0x757EF87A33649210())
	{
		if (unk_0xC844350D5D58C99A(iLocal_3267))
		{
			unk_0x611DFA9294B339CA(iLocal_3267, 0, 0, true);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_217();
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3376 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3348 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3469 = 0;
		iLocal_3470 = 0;
		iLocal_3474 = 0;
		iLocal_3477 = 0;
		iLocal_3185 = 0;
		unk_0x3F423BF5B8125A50("Misssolomon_3");
		unk_0x523BCC9DC80CD82F(-511601230);
		unk_0x523BCC9DC80CD82F(142944341);
		if (unk_0xE4EDC4B0E92C078B(iLocal_3285))
		{
			unk_0x142CC44DB769B57E(&iLocal_3285);
		}
		if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			unk_0xA19A5ADE229B4734("Trev4_5", 0, 1f, 1f);
			unk_0x2F3540C2227116A3("Trev4_5");
		}
		if (unk_0xC844350D5D58C99A(iLocal_3259))
		{
			unk_0x046C362CF15F1935(&iLocal_3259);
		}
		settimera(0);
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		if (unk_0xC844350D5D58C99A(iLocal_3228))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
			{
				unk_0x25C5402CC10F76CD(iLocal_3228, true);
				unk_0x11AD11297DC58CC7(iLocal_3228, false);
			}
		}
		unk_0xC92DB9682A650680("TRV4_LOSE_COPS");
		if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
		{
			unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS");
		}
		unk_0x790015DC92C918E2();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0x8910D3D58E0132B8("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		iLocal_3221 = unk_0x544B74C043CE9948(-948,4f, -2992,6f, 13,3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0xC844350D5D58C99A(iLocal_3266))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
			{
				unk_0x9F3D85A3461AB1C3(iLocal_3266, 0);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_3267))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3267, 0))
			{
				unk_0x9F3D85A3461AB1C3(iLocal_3267, 0);
			}
		}
		unk_0x34D79252800B23FF(5);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 3, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0);
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3469 == 0)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_3279[0]))
			{
				if (unk_0xB87F6CF6E5628C67(-511601230))
				{
					iLocal_3279[0] = unk_0x122AAB0B1D6F55AD(-511601230, -1025,596f, -2869,237f, 12,9585f, 241,0686f, true, true, false);
					unk_0xE8832A9E16A57A1F(iLocal_3279[0], true, 1);
					unk_0xB9FD7450C0DAB575(iLocal_3279[0], 1084227584);
					unk_0x71199B01895C6202(-511601230);
					iLocal_3469 = 1;
				}
			}
		}
		if (iLocal_3470 == 0)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_3279[1]))
			{
				if (unk_0xB87F6CF6E5628C67(142944341))
				{
					iLocal_3279[1] = unk_0x122AAB0B1D6F55AD(142944341, -971,4223f, -2903,354f, 12,9652f, 61,0213f, true, true, false);
					unk_0xE8832A9E16A57A1F(iLocal_3279[1], true, 1);
					unk_0xB9FD7450C0DAB575(iLocal_3279[1], 1084227584);
					unk_0x71199B01895C6202(142944341);
					iLocal_3470 = 1;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_3279[0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3279[0], 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_3279[0], 0))
				{
					if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x16F2683693E537C9(), iLocal_3279[0], 1) > 200f || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_3279[0], 0))
			{
				unk_0x046C362CF15F1935(&(iLocal_3279[0]));
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_3279[1]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3279[1], 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_3279[1], 0))
				{
					if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x16F2683693E537C9(), iLocal_3279[1], 1) > 200f || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_3279[1], 0))
			{
				unk_0x046C362CF15F1935(&(iLocal_3279[1]));
			}
		}
		if (iLocal_3430 == 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[0]))
			{
				func_14(iLocal_3233[0], "SURROUNDED", 24);
				iLocal_3430 = 1;
			}
		}
		if (iLocal_3374 == 0)
		{
			if (timera() > 8000)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3268[0], 0))
				{
					unk_0x4D3C3C0B0DE2663E(iLocal_3268[0], 68, "BB_Chase", 1);
					unk_0x7387D280FCEB227F(iLocal_3268[0], 0f, 0f, 0,15f);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_3268[1], 0))
				{
					unk_0x4D3C3C0B0DE2663E(iLocal_3268[1], 69, "BB_Chase", 1);
					unk_0x7387D280FCEB227F(iLocal_3268[1], 0f, 0f, 0,15f);
				}
				iLocal_3374 = 1;
			}
		}
		else
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3268[0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3268[0]))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3268[0]) > 5000f)
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_3268[0]))
						{
							unk_0xC55F2A0377488064(iLocal_3268[0]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[6]))
					{
						unk_0x11AD11297DC58CC7(iLocal_3233[6], false);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[7]))
					{
						unk_0x11AD11297DC58CC7(iLocal_3233[7], false);
					}
					iLocal_3375 = 1;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_3268[1], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3268[1]))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3268[1]) > 5000f)
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_3268[1]))
						{
							unk_0xC55F2A0377488064(iLocal_3268[1]);
						}
					}
				}
				else if (iLocal_3376 == 0)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[8]))
					{
						unk_0x11AD11297DC58CC7(iLocal_3233[8], false);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[9]))
					{
						unk_0x11AD11297DC58CC7(iLocal_3233[9], false);
					}
					iLocal_3376 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3474 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3267))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3267, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_3267, 0))
					{
						unk_0xC92DB9682A650680("TRV4_JET_ENTERED");
						if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x8B4C4CA774181102(4f, 15f, 4);
						unk_0x046C362CF15F1935(&iLocal_3267);
						iLocal_3474 = 1;
					}
					else if (func_16(unk_0x16F2683693E537C9(), iLocal_3267, 1) > 200f)
					{
						unk_0x046C362CF15F1935(&iLocal_3267);
					}
				}
			}
		}
		if (iLocal_3474 == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3267))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3267, 0))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_3267, 0))
					{
						if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0xC92DB9682A650680("TRV4_LOSE_COPS");
						iLocal_3474 = 0;
					}
				}
			}
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (iLocal_3477 == 0)
			{
				iLocal_3193 = unk_0x1C0640BA9A7327B3();
				iLocal_3477 = 1;
			}
		}
		if (iLocal_3477 == 1)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3193 + 3500)
				{
					if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS");
					}
					if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0xC92DB9682A650680("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3477 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_3191, 0);
	func_7(0, 0);
	func_419();
}

void func_7(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_432(0) && Global_76868.f_1 == 1) && func_9(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_432(0))
	{
		iVar0 = func_8();
		iVar1 = Global_89496[iVar0];
		uVar2 = Global_76891.f_109[iVar1];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0].f_1, 4))
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0].f_1, 5))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 4);
		unk_0x5D96D8530B3D0904(&Global_76870, 1);
		Global_76886 = uVar2;
		Global_76887 = unk_0x1C0640BA9A7327B3();
	}
}

int func_8()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
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

void func_10(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (Global_73608[iVar0] == iParam0)
		{
			if (bParam2)
			{
				Global_73608[iVar0].f_1 = iParam1;
			}
			else
			{
				Global_73608[iVar0].f_1 = (Global_73608[iVar0].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_73608[iVar0] != -1)
	{
		if (Global_61737[Global_73608[iVar0]] == 3)
		{
			if (Global_73608[iVar0].f_1 > 1)
			{
				Global_73608[iVar0].f_1 = 1;
			}
			if (Global_73608[iVar0].f_1 < 0)
			{
				Global_73608[iVar0].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	if (Global_61520)
	{
	}
	Global_61520 = 0;
	if (bParam0)
	{
		Global_61521 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_61737[Global_73608[iVar0]] == 4)
			{
				Global_73608[iVar0].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0] > 0)
			{
				if (Global_73608[iVar0] == iParam1)
				{
					Global_73608[iVar0].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_3189 = 0;
	while (iLocal_3189 <= 9)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[iLocal_3189]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[iLocal_3189]))
			{
				if (!unk_0x405E212DDE472467(iLocal_3233[iLocal_3189], 0))
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if (func_13(unk_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 200f)
						{
							unk_0xA3BF0AA5A2608191(iLocal_3233[iLocal_3189]);
							unk_0x6DAD7906B73F064D(&(iLocal_3233[iLocal_3189]));
						}
						else if (func_13(unk_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 20f)
						{
							if (unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 0)
							{
								unk_0x161356BF7864C47B(iLocal_3233[iLocal_3189], unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 1, 15f, 20f, 0, 0, -687903391);
							}
						}
						else if (unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 0)
						{
							unk_0x6C3AE6E278DB3D0E(iLocal_3233[iLocal_3189], unk_0x16F2683693E537C9(), 0, 16);
							unk_0xAFF39FB306F8E232(iLocal_3233[iLocal_3189], 50, true);
						}
					}
					else if (func_13(unk_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 200f)
					{
						unk_0x6DAD7906B73F064D(&(iLocal_3233[iLocal_3189]));
					}
					else if (func_13(unk_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 5f)
					{
						if (unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 0)
						{
							unk_0x161356BF7864C47B(iLocal_3233[iLocal_3189], unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 1, 15f, 20f, 0, 0, -687903391);
						}
					}
					else if (unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 0)
					{
						unk_0x6C3AE6E278DB3D0E(iLocal_3233[iLocal_3189], unk_0x16F2683693E537C9(), 0, 16);
						unk_0xAFF39FB306F8E232(iLocal_3233[iLocal_3189], 50, true);
					}
				}
			}
		}
		iLocal_3189++;
	}
	if (iLocal_3374 == 1)
	{
		if (iLocal_3346 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3268[0]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3268[0], 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3268[0]))
					{
					}
					else
					{
						if (unk_0xC844350D5D58C99A(iLocal_3233[6]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[6]))
							{
								unk_0x11AD11297DC58CC7(iLocal_3233[6], false);
								unk_0xA3BF0AA5A2608191(iLocal_3233[6]);
								unk_0xDD353D0E9C789D0E(&iLocal_3292);
								unk_0x45F014B3D0466974(0, iLocal_3268[0], 256);
								unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
								unk_0x75ABDC5F81978924(iLocal_3292);
								unk_0x78ADC381772E3D54(iLocal_3233[6], iLocal_3292);
								unk_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_3233[7]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[7]))
							{
								unk_0x11AD11297DC58CC7(iLocal_3233[7], false);
								unk_0xA3BF0AA5A2608191(iLocal_3233[7]);
								unk_0xDD353D0E9C789D0E(&iLocal_3292);
								unk_0x45F014B3D0466974(0, iLocal_3268[0], 256);
								unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
								unk_0x75ABDC5F81978924(iLocal_3292);
								unk_0x78ADC381772E3D54(iLocal_3233[7], iLocal_3292);
								unk_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
		else if (iLocal_3431 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3268[0]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3268[0], 0))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3233[6]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[6]))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_3233[6], iLocal_3268[0], 0))
							{
								if (func_13(unk_0x16F2683693E537C9(), iLocal_3233[6]) < 20f)
								{
									func_14(iLocal_3233[6], "DRAW_GUN", 24);
									iLocal_3431 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3347 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3268[1]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3268[1], 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3268[1]))
					{
					}
					else
					{
						if (unk_0xC844350D5D58C99A(iLocal_3233[8]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[8]))
							{
								unk_0x11AD11297DC58CC7(iLocal_3233[8], false);
								unk_0xA3BF0AA5A2608191(iLocal_3233[8]);
								unk_0xDD353D0E9C789D0E(&iLocal_3292);
								unk_0x45F014B3D0466974(0, iLocal_3268[1], 256);
								unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
								unk_0x75ABDC5F81978924(iLocal_3292);
								unk_0x78ADC381772E3D54(iLocal_3233[8], iLocal_3292);
								unk_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_3233[9]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[9]))
							{
								unk_0x11AD11297DC58CC7(iLocal_3233[9], false);
								unk_0xA3BF0AA5A2608191(iLocal_3233[9]);
								unk_0xDD353D0E9C789D0E(&iLocal_3292);
								unk_0x45F014B3D0466974(0, iLocal_3268[1], 256);
								unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
								unk_0x75ABDC5F81978924(iLocal_3292);
								unk_0x78ADC381772E3D54(iLocal_3233[9], iLocal_3292);
								unk_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						iLocal_3347 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3348 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3233[10]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[10]))
			{
				if (func_13(unk_0x16F2683693E537C9(), iLocal_3233[10]) > 200f)
				{
					unk_0x6DAD7906B73F064D(&(iLocal_3233[iLocal_3189]));
					unk_0x8D17794CE3273D70("misssolomon_3");
				}
				else if (unk_0xB4AE0788C1587752("misssolomon_3"))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -923,2303f, -2948,004f, 12,9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[10]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_3233[10]);
							unk_0xDD353D0E9C789D0E(&iLocal_3292);
							unk_0xC6EB89C59F2AF6B8(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iLocal_3292);
							unk_0x78ADC381772E3D54(iLocal_3233[10], iLocal_3292);
							unk_0xF82EA857DA10E0CD(&iLocal_3292);
							iLocal_3348 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)
{
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

float func_16(int iParam0, int iParam1, bool bParam2)
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_18(int iParam0, bool bParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_30926, iParam0))
	{
		if (!bParam1)
		{
			unk_0x0674E58A79778E99(&Global_30926, iParam0);
			StringCopy(&(Global_30927[iParam0]), "NULL", 24);
			Global_30982[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_30926, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_98739 != 6)
		{
			wait(0);
		}
		unk_0x21387C9EECC2B220(0);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC844350D5D58C99A(iParam0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, iParam1);
							unk_0xEF6276132B396452(0f, 1065353216);
							unk_0x2FB9A57162E54BAB(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
		}
		unk_0x17EFA7496495F972();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

int func_23()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam3 == 1)
	{
		if (!unk_0x7F8A39872A07D2CE("FinaleC2", unk_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98781)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98781)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_119(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_117(unk_0xBB0808A181D4745C(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1].f_1 = 0;
			iVar2 = func_115(iVar1);
			cVar3 = { Global_89532[iVar1].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111638.f_9080.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x353729B0A07DC11A(&cVar3, iVar2, Global_98781, iParam0);
		}
		else
		{
			iVar5 = func_110(unk_0xBB0808A181D4745C(), 1);
			if (iVar5 != -1)
			{
				Global_111638.f_18569[iVar5].f_4 = 0;
				MemCopy(&uVar6, {func_109(iVar5)}, 4);
				unk_0x353729B0A07DC11A(&uVar6, 0, Global_98781, iParam0);
			}
			else
			{
				iVar10 = func_108(&(Global_98744.f_3));
				if (iVar10 > -1)
				{
					Global_111638.f_24981.f_4[iVar10] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_105187, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	*uParam0 = func_107();
	uParam0->f_1 = func_96();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(unk_0x16F2683693E537C9());
		func_60(unk_0x16F2683693E537C9(), 0);
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == 966099553)
		{
			uParam0->f_2 = -1569615261;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_57())
		{
			func_50(unk_0x16F2683693E537C9(), &(uParam0->f_616[iVar1]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1][iVar0] = Global_98469[iVar1][iVar0];
				uParam0->f_616[iVar1].f_13[iVar0] = Global_98469[iVar1].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1].f_59 = Global_98469[iVar1].f_59;
			uParam0->f_616[iVar1].f_60 = Global_98469[iVar1].f_60;
			uParam0->f_616[iVar1].f_61 = Global_98469[iVar1].f_61;
			uParam0->f_616[iVar1].f_62 = Global_98469[iVar1].f_62;
			uParam0->f_616[iVar1].f_63 = Global_98469[iVar1].f_63;
			uParam0->f_616[iVar1].f_64 = Global_98469[iVar1].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1].f_39[iVar0] = Global_98469[iVar1].f_39[iVar0];
				uParam0->f_616[iVar1].f_49[iVar0] = Global_98469[iVar1].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1][iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1][iVar0] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1].f_221[iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1].f_221[iVar0] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6FB46C25CCB7E6D5(-1142440288, &(uParam0->f_2244[iVar1][0]), -1);
				unk_0x6FB46C25CCB7E6D5(-1123368730, &(uParam0->f_2244[iVar1][1]), -1);
				unk_0x6FB46C25CCB7E6D5(1081345962, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				unk_0x6FB46C25CCB7E6D5(-1371118771, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				unk_0x6FB46C25CCB7E6D5(-765547619, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				unk_0x6FB46C25CCB7E6D5(-1080850937, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				unk_0x6FB46C25CCB7E6D5(-2022861412, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				unk_0x6FB46C25CCB7E6D5(-2018548694, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				unk_0x6FB46C25CCB7E6D5(1323790999, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				unk_0x6FB46C25CCB7E6D5(760098661, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				unk_0x6FB46C25CCB7E6D5(-260459075, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				unk_0x6FB46C25CCB7E6D5(1085789752, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				unk_0x6FB46C25CCB7E6D5(334003354, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				unk_0x6FB46C25CCB7E6D5(-500524769, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				unk_0x6FB46C25CCB7E6D5(-1456330957, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				unk_0x6FB46C25CCB7E6D5(-142720058, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				unk_0x6FB46C25CCB7E6D5(-855707956, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				unk_0x6FB46C25CCB7E6D5(-1539506602, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				unk_0x6FB46C25CCB7E6D5(1915755069, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x6FB46C25CCB7E6D5(-126492964, &(uParam0->f_2244[iVar1][0]), -1);
				unk_0x6FB46C25CCB7E6D5(190514318, &(uParam0->f_2244[iVar1][1]), -1);
				unk_0x6FB46C25CCB7E6D5(-739329202, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				unk_0x6FB46C25CCB7E6D5(-1185380830, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				unk_0x6FB46C25CCB7E6D5(1030852186, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				unk_0x6FB46C25CCB7E6D5(1801284145, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				unk_0x6FB46C25CCB7E6D5(-1873234909, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				unk_0x6FB46C25CCB7E6D5(-1315299114, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				unk_0x6FB46C25CCB7E6D5(-2073999771, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				unk_0x6FB46C25CCB7E6D5(1865030647, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				unk_0x6FB46C25CCB7E6D5(-419525730, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				unk_0x6FB46C25CCB7E6D5(-121557213, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				unk_0x6FB46C25CCB7E6D5(-1021590567, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				unk_0x6FB46C25CCB7E6D5(-732338604, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				unk_0x6FB46C25CCB7E6D5(758650912, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				unk_0x6FB46C25CCB7E6D5(1090437037, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				unk_0x6FB46C25CCB7E6D5(164057391, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				unk_0x6FB46C25CCB7E6D5(1607797744, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				unk_0x6FB46C25CCB7E6D5(-1852248201, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x6FB46C25CCB7E6D5(177632919, &(uParam0->f_2244[iVar1][0]), -1);
				unk_0x6FB46C25CCB7E6D5(-464115177, &(uParam0->f_2244[iVar1][1]), -1);
				unk_0x6FB46C25CCB7E6D5(111865610, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				unk_0x6FB46C25CCB7E6D5(-194950537, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				unk_0x6FB46C25CCB7E6D5(-378588013, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				unk_0x6FB46C25CCB7E6D5(-626223346, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				unk_0x6FB46C25CCB7E6D5(-848331628, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				unk_0x6FB46C25CCB7E6D5(226994293, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				unk_0x6FB46C25CCB7E6D5(-1921832882, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				unk_0x6FB46C25CCB7E6D5(1934357500, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				unk_0x6FB46C25CCB7E6D5(1106022718, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				unk_0x6FB46C25CCB7E6D5(1478409634, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				unk_0x6FB46C25CCB7E6D5(-863918486, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				unk_0x6FB46C25CCB7E6D5(-1699495217, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				unk_0x6FB46C25CCB7E6D5(-1327567067, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				unk_0x6FB46C25CCB7E6D5(2133068720, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				unk_0x6FB46C25CCB7E6D5(-7828357, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				unk_0x6FB46C25CCB7E6D5(-4568869, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				unk_0x6FB46C25CCB7E6D5(-225202546, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0][iVar1] = { Global_111638.f_2358.f_539.f_2407[0][iVar1] };
		uParam0->f_25[1][iVar1] = { Global_111638.f_2358.f_539.f_2407[1][iVar1] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1][iVar0] = Global_111638.f_2358.f_493[iVar1][iVar0];
			uParam0->f_2838[iVar1].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1].f_5[iVar0];
			uParam0->f_2838[iVar1].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1][iVar0] = Global_111638.f_2358[iVar1][iVar0];
			uParam0->f_2345[iVar1].f_4[iVar0] = Global_111638.f_2358[iVar1].f_4[iVar0];
			uParam0->f_2345[iVar1].f_8[iVar0] = Global_111638.f_2358[iVar1].f_8[iVar0];
			uParam0->f_2345[iVar1].f_12[iVar0] = Global_111638.f_2358[iVar1].f_12[iVar0];
			uParam0->f_2345[iVar1].f_16[iVar0] = Global_111638.f_2358[iVar1].f_16[iVar0];
			uParam0->f_2345[iVar1].f_20[iVar0] = Global_111638.f_2358[iVar1].f_20[iVar0];
			uParam0->f_2345[iVar1].f_24[iVar0] = Global_111638.f_2358[iVar1].f_24[iVar0];
			uParam0->f_2345[iVar1].f_28[iVar0] = Global_111638.f_2358[iVar1].f_28[iVar0];
			uParam0->f_2345[iVar1].f_32[iVar0] = Global_111638.f_2358[iVar1].f_32[iVar0];
			uParam0->f_2345[iVar1].f_36[iVar0] = Global_111638.f_2358[iVar1].f_36[iVar0];
			uParam0->f_2345[iVar1].f_40[iVar0] = Global_111638.f_2358[iVar1].f_40[iVar0];
			uParam0->f_2345[iVar1].f_44[iVar0] = Global_111638.f_2358[iVar1].f_44[iVar0];
			uParam0->f_2345[iVar1].f_48[iVar0] = Global_111638.f_2358[iVar1].f_48[iVar0];
			uParam0->f_2345[iVar1].f_52[iVar0] = Global_111638.f_2358[iVar1].f_52[iVar0];
			uParam0->f_2345[iVar1].f_56[iVar0] = Global_111638.f_2358[iVar1].f_56[iVar0];
			uParam0->f_2345[iVar1].f_60[iVar0] = Global_111638.f_2358[iVar1].f_60[iVar0];
			uParam0->f_2345[iVar1].f_64[iVar0] = Global_111638.f_2358[iVar1].f_64[iVar0];
			uParam0->f_2345[iVar1].f_68[iVar0] = Global_111638.f_2358[iVar1].f_68[iVar0];
			uParam0->f_2345[iVar1].f_72[iVar0] = Global_111638.f_2358[iVar1].f_72[iVar0];
			uParam0->f_2345[iVar1].f_76[iVar0] = Global_111638.f_2358[iVar1].f_76[iVar0];
			uParam0->f_2345[iVar1].f_80[iVar0] = Global_111638.f_2358[iVar1].f_80[iVar0];
			uParam0->f_2345[iVar1].f_84[iVar0] = Global_111638.f_2358[iVar1].f_84[iVar0];
			uParam0->f_2345[iVar1].f_88[iVar0] = Global_111638.f_2358[iVar1].f_88[iVar0];
			uParam0->f_2345[iVar1].f_92[iVar0] = Global_111638.f_2358[iVar1].f_92[iVar0];
			uParam0->f_2345[iVar1].f_96[iVar0] = Global_111638.f_2358[iVar1].f_96[iVar0];
			uParam0->f_2345[iVar1].f_100[iVar0] = Global_111638.f_2358[iVar1].f_100[iVar0];
			uParam0->f_2345[iVar1].f_104[iVar0] = Global_111638.f_2358[iVar1].f_104[iVar0];
			uParam0->f_2345[iVar1].f_108[iVar0] = Global_111638.f_2358[iVar1].f_108[iVar0];
			uParam0->f_2345[iVar1].f_112[iVar0] = Global_111638.f_2358[iVar1].f_112[iVar0];
			uParam0->f_2345[iVar1].f_116[iVar0] = Global_111638.f_2358[iVar1].f_116[iVar0];
			uParam0->f_2345[iVar1].f_120[iVar0] = Global_111638.f_2358[iVar1].f_120[iVar0];
			uParam0->f_2345[iVar1].f_124[iVar0] = Global_111638.f_2358[iVar1].f_124[iVar0];
			uParam0->f_2345[iVar1].f_128[iVar0] = Global_111638.f_2358[iVar1].f_128[iVar0];
			uParam0->f_2345[iVar1].f_132[iVar0] = Global_111638.f_2358[iVar1].f_132[iVar0];
			uParam0->f_2345[iVar1].f_136[iVar0] = Global_111638.f_2358[iVar1].f_136[iVar0];
			uParam0->f_2345[iVar1].f_140[iVar0] = Global_111638.f_2358[iVar1].f_140[iVar0];
			uParam0->f_2345[iVar1].f_144[iVar0] = Global_111638.f_2358[iVar1].f_144[iVar0];
			uParam0->f_2345[iVar1].f_148[iVar0] = Global_111638.f_2358[iVar1].f_148[iVar0];
			uParam0->f_2345[iVar1].f_152[iVar0] = Global_111638.f_2358[iVar1].f_152[iVar0];
			uParam0->f_2345[iVar1].f_156[iVar0] = Global_111638.f_2358[iVar1].f_156[iVar0];
			uParam0->f_2345[iVar1].f_160[iVar0] = Global_111638.f_2358[iVar1].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6FB46C25CCB7E6D5(-589476696, &(uParam0->f_2341[0]), -1);
	unk_0x6FB46C25CCB7E6D5(353703542, &(uParam0->f_2341[1]), -1);
	unk_0x6FB46C25CCB7E6D5(126871459, &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam2 == 0)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, 1044954915) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)
{
	func_39(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_11 = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
		uParam0->f_6 = unk_0xD9522BA9E27E1349(iParam1);
		uParam0->f_3 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		if (unk_0x3D1053F9EB43B7AD(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_76346 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (iParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 145;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || unk_0x134B62B726CEC8E6(iParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)
{
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
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
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
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
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

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_67 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_69 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_70 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x812A93B166D97C60(iParam0, 2))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (unk_0x812A93B166D97C60(iParam0, 3))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (unk_0x812A93B166D97C60(iParam0, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x587993B327460A82(iParam0, 0))
		{
			uParam1->f_68 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 3:
					case 0:
						unk_0x0674E58A79778E99(&(uParam1->f_77), 23);
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0674E58A79778E99(&(uParam1->f_77), 23);
						unk_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_40(int iParam0)
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

int func_41(int iParam0, var uParam1, var uParam2)
{
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0)
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
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_43(var uParam0)
{
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

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				*uParam1 = unk_0x728870EB733D12A1();
			}
			else
			{
				*uParam1 = unk_0x6937EA2286828455(iParam0, 1);
			}
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (unk_0xDF1306B443CD3D15(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*uParam1, true), unk_0x68F4C0EC296D3901(iParam0, true), true) < 100f)
					{
						if (unk_0x4906F8A34E9F4814(*uParam1, -956048545))
						{
							if (unk_0xA30B8362589C124A(*uParam1, -1, 0) != iParam0 && unk_0xA30B8362589C124A(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_107(), 1))
						{
							sVar0 = unk_0xBB0808A181D4745C();
							if (!unk_0x7F8A39872A07D2CE(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x405E212DDE472467(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x30F813723591D02E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xB2C7CF65CF9B897C(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x4906F8A34E9F4814(*uParam1, -150975354))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], 0))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_47(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_1798[iParam0];
}

void func_50(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_56(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_55(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0].f_64;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(752, iParam3, 0);
			}
			uParam1->f_60 = func_51(753, iParam3, 0);
			uParam1->f_61 = func_51(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(752, iParam3, 0);
			}
		}
	}
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_52(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_53()
{
	return Global_1312745;
}

int func_54(int iParam0, int iParam1)
{
	iVar0 = Global_2583656[iParam0][func_52(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != -1)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_57()
{
	func_58();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_58()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_48(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_47(unk_0x16F2683693E537C9());
			if (func_38(iVar0) && (!func_59(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_38(Global_111638.f_2358.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_60(int iParam0, bool bParam1)
{
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_61(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xCDC520E5E48E63D9(-922941372, iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xCDC520E5E48E63D9(-753526687, iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xCDC520E5E48E63D9(-502936933, iVar3, 1);
			}
		}
	}
}

void func_61(int iParam0, var uParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_66(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_64(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_64(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_63(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar9))
					{
						if (unk_0x31D5E073B6F93CDC(iVar9, iVar1, &Var50))
						{
							if (!func_62(Var50.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var50.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_62(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, var uParam1)
{
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_67(int iParam0)
{
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	uParam0->f_3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	uParam0->f_5 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	}
	if (vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x8A22C4C08282BF26(912405861) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, true, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &vVar1, &uVar4))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, true, 0))
		{
			iVar5 = func_107();
			if (iVar5 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, true, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_69(vector3 vParam0, char* sParam3, vector3 vParam4)
{
	if (!unk_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = unk_0x0D1736C2E221BCEA(vParam4, sParam3);
		if (!unk_0x31609A585163CBAC(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_70(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_72(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_95())
		{
			*uParam0 = func_78(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_76() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_51(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_76()
{
	return Global_30768;
}

int func_77(int iParam0)
{
	return func_74(iParam0, 5, 1);
}

int func_78(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_94(iVar0))
		{
			if (!bParam5 || func_93(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_79(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_90(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_89())
			{
				if (func_88(Global_1590374))
				{
					return func_81(2, 2);
				}
				else if (func_80(Global_1590374))
				{
					return func_81(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_80(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_81(int iParam0, int iParam1)
{
	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_89())
	{
		if (iParam1 == 3)
		{
			if (func_82(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_82(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_82(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

int func_82(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_87(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_87(iParam1, &vVar6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_85(iParam0) };
	}
	else
	{
		Var12 = { func_84(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_83(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_83(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_83(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_85(int iParam0)
{
	return func_86(iParam0);
}

struct<6> func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_87(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_89()
{
	return -1;
}

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_91() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_91()
{
	return func_92(unk_0xD803B885F5E47A62());
}

int func_92(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_93(int iParam0)
{
	return func_74(iParam0, 0, 0);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_95()
{
	return Global_98796.f_345 > 0;
}

var func_96()
{
	func_106(&uVar0, unk_0x4460E481B9E33ADA());
	func_105(&uVar0, unk_0x8D199E381D262EEF());
	func_104(&uVar0, unk_0xD8A54335F18763BA());
	func_99(&uVar0, unk_0x972A296334C9D57B());
	func_98(&uVar0, unk_0x118229AD063C3C1D());
	func_97(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_97(var uParam0, int iParam1)
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

void func_98(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_99(var uParam0, int iParam1)
{
	iVar0 = func_103(*uParam0);
	iVar1 = func_101(*uParam0);
	if (iParam1 < 1 || iParam1 > func_100(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_100(int iParam0, int iParam1)
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

int func_101(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_102(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_102(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_103(int iParam0)
{
	return iParam0 & 15;
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_105(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_107()
{
	func_58();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_108(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_109(int iParam0)
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

int func_110(char* sParam0, int iParam1)
{
	iVar33 = unk_0x12AB0310C2281427(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_111(iVar0, &sVar1);
		if (unk_0x12AB0310C2281427(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_112(uParam1, "Abigail1", func_114(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 1:
			func_112(uParam1, "Abigail2", func_114(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 2:
			func_112(uParam1, "Barry1", func_114(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 3:
			func_112(uParam1, "Barry2", func_114(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 4:
			func_112(uParam1, "Barry3", func_114(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 5:
			func_112(uParam1, "Barry3A", func_114(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 6:
			func_112(uParam1, "Barry3C", func_114(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 7:
			func_112(uParam1, "Barry4", func_114(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_113(iParam0), 0, 0);
			break;
		
		case 8:
			func_112(uParam1, "Dreyfuss1", func_114(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 9:
			func_112(uParam1, "Epsilon1", func_114(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 10:
			func_112(uParam1, "Epsilon2", func_114(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 11:
			func_112(uParam1, "Epsilon3", func_114(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 12:
			func_112(uParam1, "Epsilon4", func_114(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 13:
			func_112(uParam1, "Epsilon5", func_114(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 14:
			func_112(uParam1, "Epsilon6", func_114(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 15:
			func_112(uParam1, "Epsilon7", func_114(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 16:
			func_112(uParam1, "Epsilon8", func_114(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 17:
			func_112(uParam1, "Extreme1", func_114(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 18:
			func_112(uParam1, "Extreme2", func_114(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 19:
			func_112(uParam1, "Extreme3", func_114(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 20:
			func_112(uParam1, "Extreme4", func_114(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 21:
			func_112(uParam1, "Fanatic1", func_114(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 22:
			func_112(uParam1, "Fanatic2", func_114(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_113(iParam0), 1, 0);
			break;
		
		case 23:
			func_112(uParam1, "Fanatic3", func_114(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_113(iParam0), 0, 1);
			break;
		
		case 24:
			func_112(uParam1, "Hao1", func_114(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_113(iParam0), 0, 1);
			break;
		
		case 25:
			func_112(uParam1, "Hunting1", func_114(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 26:
			func_112(uParam1, "Hunting2", func_114(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 27:
			func_112(uParam1, "Josh1", func_114(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 28:
			func_112(uParam1, "Josh2", func_114(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 29:
			func_112(uParam1, "Josh3", func_114(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 30:
			func_112(uParam1, "Josh4", func_114(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 31:
			func_112(uParam1, "Maude1", func_114(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 32:
			func_112(uParam1, "Minute1", func_114(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 33:
			func_112(uParam1, "Minute2", func_114(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 34:
			func_112(uParam1, "Minute3", func_114(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 35:
			func_112(uParam1, "MrsPhilips1", func_114(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 36:
			func_112(uParam1, "MrsPhilips2", func_114(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 37:
			func_112(uParam1, "Nigel1", func_114(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 38:
			func_112(uParam1, "Nigel1A", func_114(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 39:
			func_112(uParam1, "Nigel1B", func_114(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 40:
			func_112(uParam1, "Nigel1C", func_114(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 41:
			func_112(uParam1, "Nigel1D", func_114(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		
		case 42:
			func_112(uParam1, "Nigel2", func_114(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 43:
			func_112(uParam1, "Nigel3", func_114(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		
		case 44:
			func_112(uParam1, "Omega1", func_114(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 45:
			func_112(uParam1, "Omega2", func_114(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 46:
			func_112(uParam1, "Paparazzo1", func_114(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 47:
			func_112(uParam1, "Paparazzo2", func_114(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 48:
			func_112(uParam1, "Paparazzo3", func_114(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 49:
			func_112(uParam1, "Paparazzo3A", func_114(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 50:
			func_112(uParam1, "Paparazzo3B", func_114(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 51:
			func_112(uParam1, "Paparazzo4", func_114(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 52:
			func_112(uParam1, "Rampage1", func_114(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 54:
			func_112(uParam1, "Rampage3", func_114(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 55:
			func_112(uParam1, "Rampage4", func_114(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 56:
			func_112(uParam1, "Rampage5", func_114(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		
		case 53:
			func_112(uParam1, "Rampage2", func_114(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		
		case 57:
			func_112(uParam1, "TheLastOne", func_114(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 58:
			func_112(uParam1, "Tonya1", func_114(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 59:
			func_112(uParam1, "Tonya2", func_114(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 60:
			func_112(uParam1, "Tonya3", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 61:
			func_112(uParam1, "Tonya4", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		case 62:
			func_112(uParam1, "Tonya5", func_114(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_112(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_113(int iParam0)
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

struct<2> func_114(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_109(iParam0) };
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

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_116(Global_111638.f_9080.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_116(Global_111638.f_9080.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_116(Global_111638.f_9080.f_99.f_205[11]);
			break;
		
		case 90:
			return func_116(Global_111638.f_9080.f_99.f_205[7]);
			break;
		
		case 93:
			return func_116(Global_111638.f_9080.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_117(char* sParam0, bool bParam1)
{
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_118(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_118(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_119(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_120()
{
	unk_0x25A28F88B27F5218("EXTRASUNNY");
	func_216();
	func_188();
	func_122();
	if (!func_24())
	{
		func_121();
	}
	iLocal_3351 = 1;
	unk_0x2FB9A57162E54BAB(0f);
}

void func_121()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1019,579f, -484,872f, 36,0795f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 93,7701f);
			break;
		
		case 3:
			if (unk_0xDF1306B443CD3D15(iLocal_3259, 0))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_3259, 0))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_3259, -1);
				}
				unk_0xD458AC1C1D29C3B4(iLocal_3259, 3000, 0);
				unk_0xAA6B3A4292417750(iLocal_3259, false, true, false, false, false, false, 0, false);
			}
			break;
		
		case 5:
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -935,4413f, -2928,061f, 12,9451f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 178,466f);
			unk_0xE8832A9E16A57A1F(unk_0x16F2683693E537C9(), true, 1);
			break;
		
		case 8:
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -937,5466f, -2968,713f, 12,9451f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 111,5016f);
			unk_0xE8832A9E16A57A1F(unk_0x16F2683693E537C9(), true, 1);
			break;
	}
}

void func_122()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			unk_0x536F1BE96C726C4B(-1026,8f, -492,1f, 36f, 18f, 1, 0, 0, false);
			unk_0xE342F209E49C5314(-1042,5f, -500f, 41f, -1019,5f, -475f, 34f, false, 1);
			unk_0x21688103CC7F9B19(-1042,5f, -500f, 41f, -1019,5f, -475f, 34f, 0);
			unk_0x523BCC9DC80CD82F(-1934452204);
			unk_0x523BCC9DC80CD82F(384071873);
			unk_0x523BCC9DC80CD82F(2072687711);
			while ((!unk_0xB87F6CF6E5628C67(-1934452204) || !unk_0xB87F6CF6E5628C67(384071873)) || !unk_0xB87F6CF6E5628C67(2072687711))
			{
				wait(0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3259))
			{
				unk_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
				iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, vLocal_3294, fLocal_3321, true, true, false);
				unk_0xC002508A277213DE(iLocal_3259, 112, 112);
				unk_0xD458AC1C1D29C3B4(iLocal_3259, 3000, 0);
				unk_0xD5A0214B20BCBAD8(iLocal_3259, 1);
				unk_0x71199B01895C6202(-1934452204);
				unk_0xAB8E2DDC7AF955E0(-1934452204, true);
				unk_0x120A395B0ECB8EA5(iLocal_3259, true);
				unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3276))
			{
				if (unk_0xB87F6CF6E5628C67(384071873))
				{
					unk_0x536F1BE96C726C4B(-1037,398f, -491,6539f, 35,5545f, 5f, 1, 0, 0, false);
					iLocal_3276 = unk_0x122AAB0B1D6F55AD(384071873, -1037,398f, -491,6539f, 35,5545f, 208,889f, true, true, false);
					unk_0xC002508A277213DE(iLocal_3276, 0, 0);
					unk_0xD458AC1C1D29C3B4(iLocal_3276, 3000, 0);
					unk_0xD5A0214B20BCBAD8(iLocal_3276, 1);
					unk_0x71199B01895C6202(384071873);
					unk_0xAB8E2DDC7AF955E0(384071873, true);
					unk_0x44A200C9B6E1CEA6(iLocal_3276, true);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3277))
			{
				if (unk_0xB87F6CF6E5628C67(2072687711))
				{
					unk_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
					iLocal_3277 = unk_0x122AAB0B1D6F55AD(2072687711, -1033,938f, -489,7475f, 35,8323f, 207,1758f, true, true, false);
					unk_0xC002508A277213DE(iLocal_3277, 89, 89);
					unk_0xD458AC1C1D29C3B4(iLocal_3277, 3000, 0);
					unk_0xD5A0214B20BCBAD8(iLocal_3277, 1);
					unk_0x71199B01895C6202(2072687711);
					unk_0xAB8E2DDC7AF955E0(2072687711, true);
					unk_0x44A200C9B6E1CEA6(iLocal_3277, true);
				}
			}
			break;
		
		case 3:
			unk_0x13896FDECC859926("TRV4_CHASE");
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			func_185();
			unk_0x536F1BE96C726C4B(vLocal_3297, 200f, 1, 0, 0, false);
			if (!unk_0xC844350D5D58C99A(iLocal_3258))
			{
				iLocal_3258 = unk_0x122AAB0B1D6F55AD(330661258, vLocal_3297, fLocal_3322, true, true, false);
				unk_0xAA6B3A4292417750(iLocal_3258, true, true, true, true, true, false, 0, false);
				unk_0xC002508A277213DE(iLocal_3258, 27, 27);
				unk_0x71199B01895C6202(330661258);
				unk_0x2E1E5367A885F9B7(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3222))
			{
				iLocal_3222 = unk_0x852A19533F896693(iLocal_3258, 26, -1358701087, -1, 1, true);
				unk_0xAA6B3A4292417750(iLocal_3222, true, true, true, true, true, false, 0, false);
				unk_0xE121AE1BBF90E186(iLocal_3222, true);
				unk_0x25C5402CC10F76CD(iLocal_3222, false);
				unk_0x71199B01895C6202(-1358701087);
				unk_0x6DF7BF67E86AAE86(iLocal_3222, 1862763509);
			}
			if (func_23())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_3259))
				{
					if (func_184())
					{
						if (!unk_0xAFB8495D36825275(func_183()) && !unk_0xC41A9202669A24C4(func_183()))
						{
							iLocal_3259 = func_143(vLocal_3312, fLocal_3325);
							unk_0x71199B01895C6202(func_183());
							unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
						}
						else
						{
							iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, vLocal_3312, fLocal_3325, true, true, false);
							unk_0xC002508A277213DE(iLocal_3259, 112, 112);
						}
					}
					else
					{
						iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, vLocal_3312, fLocal_3325, true, true, false);
						unk_0xC002508A277213DE(iLocal_3259, 112, 112);
					}
					unk_0xD458AC1C1D29C3B4(iLocal_3259, 3000, 0);
					unk_0xD5A0214B20BCBAD8(iLocal_3259, 1);
					unk_0xAA6B3A4292417750(iLocal_3259, false, true, false, false, false, false, 0, false);
					unk_0x120A395B0ECB8EA5(iLocal_3259, true);
					unk_0x71199B01895C6202(-1934452204);
					unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
				}
			}
			else if (!unk_0xC844350D5D58C99A(iLocal_3259))
			{
				iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, vLocal_3312, fLocal_3325, true, true, false);
				unk_0xC002508A277213DE(iLocal_3259, 112, 112);
				unk_0x71199B01895C6202(-1934452204);
				unk_0xD458AC1C1D29C3B4(iLocal_3259, 3000, 0);
				unk_0xD5A0214B20BCBAD8(iLocal_3259, 1);
				unk_0xAA6B3A4292417750(iLocal_3259, false, true, false, false, false, false, 0, false);
				unk_0x120A395B0ECB8EA5(iLocal_3259, true);
				unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
			}
			break;
		
		case 5:
			iLocal_3352 = 0;
			unk_0x536F1BE96C726C4B(-973,3f, -2967,7f, 13,5f, 100f, 1, 0, 0, false);
			settimera(0);
			unk_0x523BCC9DC80CD82F(1058115860);
			unk_0x523BCC9DC80CD82F(-1214505995);
			unk_0x29398344B9E5B8A7("BB_MOLLY_2");
			unk_0x523BCC9DC80CD82F(1644266841);
			unk_0x523BCC9DC80CD82F(1581098148);
			unk_0x523BCC9DC80CD82F(1912215274);
			unk_0x523BCC9DC80CD82F(-1358701087);
			unk_0x523BCC9DC80CD82F(330661258);
			unk_0x523BCC9DC80CD82F(-1934452204);
			unk_0x523BCC9DC80CD82F(-1843032146);
			unk_0x36187931D29E5BBE(68, "BB_Chase");
			unk_0x36187931D29E5BBE(69, "BB_Chase");
			unk_0x29398344B9E5B8A7("Trev4_5");
			unk_0x9E5E60D8C63FD9D1();
			unk_0x3F423BF5B8125A50("move_f@film_reel_arms");
			unk_0x3F423BF5B8125A50("misssolomon_3");
			while (((((((((((((((!unk_0xB87F6CF6E5628C67(1058115860) || !unk_0xB87F6CF6E5628C67(-1214505995)) || !unk_0x1C2E18E9C63BEB77("BB_MOLLY_2")) || !unk_0xB87F6CF6E5628C67(1644266841)) || !unk_0xB87F6CF6E5628C67(1581098148)) || !unk_0xB87F6CF6E5628C67(1912215274)) || !unk_0xB87F6CF6E5628C67(-1358701087)) || !unk_0xB87F6CF6E5628C67(330661258)) || !unk_0xB87F6CF6E5628C67(-1934452204)) || !unk_0xB87F6CF6E5628C67(-1843032146)) || !unk_0x3DDA6C6A285628E4(68, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(69, "BB_Chase")) || !unk_0x1C2E18E9C63BEB77("Trev4_5")) || !unk_0x25F7A4D42AF2AB93()) || !unk_0xB4AE0788C1587752("move_f@film_reel_arms")) || !unk_0xB4AE0788C1587752("misssolomon_3"))
			{
				wait(0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3222))
			{
				iLocal_3222 = unk_0x36F2404464202779(26, -1358701087, -920,5093f, -2943,93f, 12,9451f, 157,6203f, 1, true);
				unk_0xE121AE1BBF90E186(iLocal_3222, true);
				unk_0x25C5402CC10F76CD(iLocal_3222, false);
				unk_0x11AD11297DC58CC7(iLocal_3222, true);
				unk_0x71199B01895C6202(-1358701087);
				unk_0xE8832A9E16A57A1F(iLocal_3222, true, 1);
				unk_0x6DF7BF67E86AAE86(iLocal_3222, 1862763509);
			}
			iLocal_3283 = unk_0x7707E48765093646(-1843032146, -929f, -2917f, 13f, 1, true, false);
			unk_0x9F528B1B53FBC5D9(iLocal_3283, iLocal_3222, unk_0x4A089F2B762B8D33(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!unk_0xC844350D5D58C99A(iLocal_3266))
			{
				iLocal_3266 = unk_0x122AAB0B1D6F55AD(1058115860, -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
				unk_0x446EA2500F021666(iLocal_3266, 2);
				unk_0x05EC10F460C3A4AF(iLocal_3266, 0);
				unk_0x1E9649458B15960F(iLocal_3266, true);
				unk_0xAA6B3A4292417750(iLocal_3266, true, true, true, true, true, false, 0, false);
				unk_0x71199B01895C6202(1058115860);
				unk_0x25BD67336EA4AECE(iLocal_3266, 500);
			}
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						wait(0);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_3259))
				{
					if (func_184())
					{
						iLocal_3259 = func_143(-918,6263f, -2926,631f, 12,9666f, 43,1705f);
						unk_0x120A395B0ECB8EA5(iLocal_3259, true);
						unk_0x71199B01895C6202(func_183());
						unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
					}
					else
					{
						iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
						unk_0xC002508A277213DE(iLocal_3259, 112, 112);
						unk_0x120A395B0ECB8EA5(iLocal_3259, true);
						unk_0x71199B01895C6202(-1934452204);
						unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
					}
				}
			}
			else if (!unk_0xC844350D5D58C99A(iLocal_3259))
			{
				iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
				unk_0xC002508A277213DE(iLocal_3259, 112, 112);
				unk_0x71199B01895C6202(-1934452204);
				unk_0x120A395B0ECB8EA5(iLocal_3259, true);
				unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3258))
			{
				iLocal_3258 = unk_0x122AAB0B1D6F55AD(330661258, -928,3279f, -2916,16f, 12,945f, 61,7688f, true, true, false);
				unk_0xC002508A277213DE(iLocal_3258, 27, 27);
				unk_0x71199B01895C6202(330661258);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3263))
			{
				iLocal_3263 = unk_0x122AAB0B1D6F55AD(1912215274, -924,2796f, -2914,371f, 12,945f, 86,6188f, true, true, false);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3248))
			{
				iLocal_3248 = unk_0x36F2404464202779(6, 1581098148, -922,942f, -2912,509f, 12,945f, 156,2652f, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_3248, 453432689, 1000, true, true);
				func_127(iLocal_3248, 0);
				unk_0x71199B01895C6202(1581098148);
			}
			settimera(0);
			func_126(2, 1);
			iLocal_3360 = 1;
			break;
		
		case 8:
			unk_0x536F1BE96C726C4B(-973,3f, -2967,7f, 13,5f, 100f, 1, 0, 0, false);
			settimera(0);
			iLocal_3352 = 0;
			iLocal_3360 = 0;
			iLocal_3339 = 0;
			unk_0x523BCC9DC80CD82F(1058115860);
			unk_0x523BCC9DC80CD82F(1644266841);
			unk_0x523BCC9DC80CD82F(-1214505995);
			unk_0x523BCC9DC80CD82F(1581098148);
			unk_0x523BCC9DC80CD82F(1912215274);
			unk_0x523BCC9DC80CD82F(330661258);
			unk_0x523BCC9DC80CD82F(-1934452204);
			unk_0x523BCC9DC80CD82F(-1281648158);
			unk_0x36187931D29E5BBE(68, "BB_Chase");
			unk_0x36187931D29E5BBE(69, "BB_Chase");
			unk_0x9E5E60D8C63FD9D1();
			while ((((((((((!unk_0xB87F6CF6E5628C67(1058115860) || !unk_0xB87F6CF6E5628C67(1644266841)) || !unk_0xB87F6CF6E5628C67(-1214505995)) || !unk_0xB87F6CF6E5628C67(1581098148)) || !unk_0xB87F6CF6E5628C67(1912215274)) || !unk_0xB87F6CF6E5628C67(330661258)) || !unk_0xB87F6CF6E5628C67(-1934452204)) || !unk_0xB87F6CF6E5628C67(-1281648158)) || !unk_0x3DDA6C6A285628E4(68, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(69, "BB_Chase")) || !unk_0x25F7A4D42AF2AB93())
			{
				wait(0);
			}
			func_125();
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						wait(0);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_3259))
				{
					if (func_184())
					{
						iLocal_3259 = func_143(-918,6263f, -2926,631f, 12,9666f, 43,1705f);
						unk_0x120A395B0ECB8EA5(iLocal_3259, true);
						unk_0x71199B01895C6202(func_183());
						unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
					}
					else
					{
						iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
						unk_0xC002508A277213DE(iLocal_3259, 112, 112);
						unk_0x120A395B0ECB8EA5(iLocal_3259, true);
						unk_0x71199B01895C6202(-1934452204);
						unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
					}
				}
			}
			else if (!unk_0xC844350D5D58C99A(iLocal_3259))
			{
				iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
				unk_0xC002508A277213DE(iLocal_3259, 112, 112);
				unk_0x71199B01895C6202(-1934452204);
				unk_0x120A395B0ECB8EA5(iLocal_3259, true);
				unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3258))
			{
				iLocal_3258 = unk_0x122AAB0B1D6F55AD(330661258, -928,3279f, -2916,16f, 12,945f, 61,7688f, true, true, false);
				unk_0xC002508A277213DE(iLocal_3258, 27, 27);
				unk_0x71199B01895C6202(330661258);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3263))
			{
				iLocal_3263 = unk_0x122AAB0B1D6F55AD(1912215274, -924,2796f, -2914,371f, 12,945f, 86,6188f, true, true, false);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3248))
			{
				iLocal_3248 = unk_0x36F2404464202779(6, 1581098148, -922,942f, -2912,509f, 12,945f, 156,2652f, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_3248, 453432689, 1000, true, true);
				func_127(iLocal_3248, 0);
				unk_0x71199B01895C6202(1581098148);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3282))
			{
				iLocal_3282 = unk_0x7707E48765093646(-1281648158, -946,4231f, -2979,826f, 12,9264f, 1, true, false);
				unk_0xC023D1C4BF532815(iLocal_3282, 0f, 0f, -121,5948f, 2, 1);
				unk_0xC4C7FD0EF3FEAB0B(iLocal_3282, 0f, 0f, 0,8729f, -0,4879f);
				unk_0x71199B01895C6202(-1281648158);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3266))
			{
				iLocal_3266 = unk_0x122AAB0B1D6F55AD(1058115860, -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
				unk_0x446EA2500F021666(iLocal_3266, 2);
				unk_0x05EC10F460C3A4AF(iLocal_3266, 0);
				unk_0x1E9649458B15960F(iLocal_3266, true);
				unk_0xAA6B3A4292417750(iLocal_3266, true, true, true, true, true, false, 0, false);
				unk_0x71199B01895C6202(1058115860);
				iLocal_3763 = unk_0xC1879030EB463216("scr_trev4_747_engine_damage", iLocal_3266, -11,956f, 10,528f, -7,657f, 0f, 2f, 0f, 1f, 0, 0, 0);
				unk_0x25BD67336EA4AECE(iLocal_3266, 500);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3228))
			{
				iLocal_3228 = unk_0x36F2404464202779(26, 1644266841, -933,8942f, -2965,785f, 12,9451f, 331,7339f, 1, true);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				unk_0x71199B01895C6202(1644266841);
				unk_0x25C5402CC10F76CD(iLocal_3228, true);
				unk_0x11AD11297DC58CC7(iLocal_3228, true);
				unk_0xF3268524E9BE6D6E(iLocal_3228, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_3228, true);
				unk_0xAA6B3A4292417750(iLocal_3228, false, false, false, false, false, false, 0, false);
				unk_0x6DAD7906B73F064D(&iLocal_3228);
			}
			if (func_124(0) == 0 || func_124(0) == -1569615261)
			{
				func_123(1);
			}
			break;
	}
}

void func_123(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0xE939991717D9E39F(unk_0x16F2683693E537C9(), 0);
		if (iVar0 != -1569615261)
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar0, bParam0);
		}
	}
}

int func_124(int iParam0)
{
	if (Global_98781 > 0)
	{
		return Global_105187.f_21[iParam0];
	}
	return Global_102203.f_21[iParam0];
}

void func_125()
{
	if (iLocal_3339 == 0)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_3268[0]))
		{
			iLocal_3268[0] = unk_0x122AAB0B1D6F55AD(1912215274, -994,5278f, -2903,285f, 12,9447f, 158,7951f, true, true, false);
			unk_0x626D5ADA3EFAE431(iLocal_3268[0], 0);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3233[0]))
		{
			iLocal_3233[0] = unk_0x36F2404464202779(6, 1581098148, -969,06f, -2955,186f, 12,945f, 241,1703f, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_3233[0], 453432689, 1000, true, true);
			unk_0x298903DD96203C2C(iLocal_3233[0], 20);
			unk_0xE8832A9E16A57A1F(iLocal_3233[0], true, 1);
			unk_0x9BE7E7B6B488CC55(iLocal_3233[0], unk_0x16F2683693E537C9(), -1, 1);
			func_127(iLocal_3233[0], 0);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3267))
		{
			iLocal_3267 = unk_0x122AAB0B1D6F55AD(-1214505995, -968,3718f, -2952,298f, 12,9451f, 114,9439f, true, true, false);
			unk_0xB9FD7450C0DAB575(iLocal_3267, 1084227584);
			unk_0x71199B01895C6202(-1214505995);
			unk_0xD458AC1C1D29C3B4(iLocal_3267, 2000, 0);
			unk_0x611DFA9294B339CA(iLocal_3267, 0, 0, true);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3233[6]))
		{
			iLocal_3233[6] = unk_0x852A19533F896693(iLocal_3268[0], 6, 1581098148, 0, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_3233[6], 453432689, 1000, true, true);
			unk_0x298903DD96203C2C(iLocal_3233[6], 20);
			unk_0xE8832A9E16A57A1F(iLocal_3233[6], true, 1);
			unk_0x11AD11297DC58CC7(iLocal_3233[6], true);
			func_127(iLocal_3233[6], 0);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3233[7]))
		{
			iLocal_3233[7] = unk_0x852A19533F896693(iLocal_3268[0], 6, 1581098148, -1, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_3233[7], 453432689, 1000, true, true);
			unk_0x298903DD96203C2C(iLocal_3233[7], 20);
			unk_0xE8832A9E16A57A1F(iLocal_3233[7], true, 1);
			unk_0x11AD11297DC58CC7(iLocal_3233[7], true);
			func_127(iLocal_3233[7], 0);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3268[1]))
		{
			iLocal_3268[1] = unk_0x122AAB0B1D6F55AD(1912215274, -962,2432f, -2864,16f, 12,9447f, 149,5586f, true, true, false);
			unk_0x626D5ADA3EFAE431(iLocal_3268[1], 0);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3233[8]))
		{
			iLocal_3233[8] = unk_0x852A19533F896693(iLocal_3268[1], 6, 1581098148, 0, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_3233[8], 453432689, 1000, true, true);
			unk_0x298903DD96203C2C(iLocal_3233[8], 20);
			unk_0xE8832A9E16A57A1F(iLocal_3233[8], true, 1);
			unk_0x11AD11297DC58CC7(iLocal_3233[8], true);
			func_127(iLocal_3233[8], 0);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3233[9]))
		{
			iLocal_3233[9] = unk_0x852A19533F896693(iLocal_3268[1], 6, 1581098148, -1, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_3233[9], 453432689, 1000, true, true);
			unk_0x298903DD96203C2C(iLocal_3233[9], 20);
			unk_0xE8832A9E16A57A1F(iLocal_3233[9], true, 1);
			unk_0x11AD11297DC58CC7(iLocal_3233[9], true);
			func_127(iLocal_3233[9], 0);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3233[10]))
		{
			iLocal_3233[10] = unk_0x36F2404464202779(6, 1581098148, -922,1185f, -2939,595f, 12,9451f, 156,1408f, 1, true);
			unk_0x262EF6C6306BEA6C(iLocal_3233[10], 453432689, 1000, true, true);
			unk_0x298903DD96203C2C(iLocal_3233[10], 20);
			unk_0xE8832A9E16A57A1F(iLocal_3233[10], true, 1);
			unk_0x11AD11297DC58CC7(iLocal_3233[10], true);
			func_127(iLocal_3233[10], 0);
			unk_0xDB4B1656BA06B94E(iLocal_3233[10], 1);
		}
		iLocal_3339 = 1;
	}
}

void func_126(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_30926, iParam0);
	StringCopy(&(Global_30927[iParam0]), unk_0xBB0808A181D4745C(), 24);
	Global_30982[iParam0] = iParam1;
}

void func_127(int iParam0, bool bParam1)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_61542[iVar0] != 0)
			{
				if (Global_61542[iVar0] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_61541)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_61542[iVar2] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_61542[iVar1] = iParam0;
	Global_61542[iVar1].f_1 = 7;
	Global_61541++;
}

bool func_128()
{
	return func_129(&(Global_105187.f_2890));
}

int func_129(var uParam0)
{
	if (func_130(uParam0))
	{
		if (unk_0xB87F6CF6E5628C67(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_130(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_132(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == -2122757008 && func_131(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_131(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !unk_0x8CD06866876216F2()) || (iParam0 == 237764926 && !unk_0x8CD06866876216F2())) || (iParam0 == 349315417 && !unk_0x8CD06866876216F2())) || iParam0 == -613725916) || (iParam0 == -401643538 && !unk_0x8CD06866876216F2()))
	{
		if (!func_140())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_139() && !func_138()) && !func_137()) && !func_136()) && !func_140())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_137())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_135(iParam0))
		{
			return 0;
		}
	}
	if (!func_133(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	if (!func_134())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_134()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_135(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_136()
{
	return 0;
}

int func_137()
{
	return 1;
}

int func_138()
{
	return 1;
}

int func_139()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_140()
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

void func_141()
{
	func_142(&(Global_105187.f_2890));
}

void func_142(var uParam0)
{
	if (func_130(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

int func_143(vector3 vParam0, float fParam3)
{
	return func_144(&(Global_105187.f_2890), vParam0, fParam3, 0);
}

int func_144(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (func_130(uParam0))
	{
		if (func_71(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == -845961253 || uParam0->f_12.f_66 == 1233534620)
		{
			if (unk_0x0399732A9EBC368E(vParam1, -816,8716f, 185,6238f, 71,40275f, -807,4894f, 189,3762f, 75,27323f, 6,5f, 0, true))
			{
				vParam1 = { -850,93f, 158,82f, 65,7f };
				fParam4 = 89,5f;
			}
		}
		if (func_129(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_182(vParam1, 5f, 0);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_12.f_66, vParam1, fParam4, true, true, false);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if (vdist2(vVar1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0, 0, 1);
				}
				func_165(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xA7082C42B8809BF2(uParam0->f_12.f_66) || unk_0x83496B932152D4D4(uParam0->f_12.f_66))
				{
					if (!unk_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_164(uParam0->f_11, 1);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_164(uParam0->f_11, 2);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0);
					unk_0x626D5ADA3EFAE431(iVar0, 0);
					unk_0x44A200C9B6E1CEA6(iVar0, true);
					func_163(iVar0, uParam0->f_11);
				}
				else if ((!func_161(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar8 = func_160(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_155(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (unk_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21].f_66)
						{
							func_152(24, 0);
							func_155(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_145(iVar0, uParam0->f_11);
				}
				unk_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_145(int iParam0, int iParam1)
{
	if (!func_146(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, -1);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == 225514697)
			{
				iParam1 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == -1692214353)
			{
				iParam1 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == -1686040670)
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_111638.f_32744.f_5038[iVar1][iVar2].f_66)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1][iVar2].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
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
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_111638.f_32744.f_5600[iVar1].f_66)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_111638.f_32744.f_5600[iVar1].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_39(iParam0, &(Global_111638.f_32744.f_5510));
}

int func_146(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_151(iParam0)) || func_150(iParam0)) || func_149(iParam0)) || func_148(iParam0)) || !func_147(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_150(iParam0))
		{
		}
		if (func_150(iParam0))
		{
		}
		if (func_45(iParam0, 0, 0))
		{
		}
		if (func_45(iParam0, 1, 0))
		{
		}
		if (func_45(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_147(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_132(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return 0;
			break;
	}
	return 1;
}

int func_148(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == -810318068 && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_132(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_150(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xC844350D5D58C99A(Global_96075[iVar0]) && unk_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_96075[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	if (unk_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_152(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_154(iParam0, 0))
		{
			func_153(iParam0, 1, 0);
			func_153(iParam0, 2, 0);
			func_153(iParam0, 3, 0);
			func_153(iParam0, 4, 0);
			func_153(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_153(iParam0, 0, 0);
	}
}

void func_153(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

bool func_154(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

void func_155(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
				unk_0xA954465BA6FDEFE2(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 13))
		{
			if (((((iParam0 == 24 && func_154(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] > 3) && (!func_157(0, Global_75441.f_555[0].f_12) || !func_157(1, Global_75441.f_555[0].f_12)))
			{
				func_156(&(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_152(iParam0, 0);
		}
	}
}

void func_156(var uParam0, var uParam1)
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

int func_157(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_158(&(Global_111638.f_32744.f_5038[iVar0])))
	{
		return 0;
	}
	return func_132(Global_111638.f_32744.f_5038[iVar0][iParam0].f_66, 0);
}

int func_158(var uParam0)
{
	return *uParam0;
}

int func_159(var uParam0, int iParam1)
{
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
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = -186537451;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = -1008861746;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = 356391690;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = 771711535;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = -1323100960;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = 1917016601;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = -823509173;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = 1938952078;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_140())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_140())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = -1269889662;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = -326143852;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = -901163259;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_71(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_71(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_71(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_160(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xC844350D5D58C99A(Global_75441.f_484[iVar0]) && !unk_0x437347B10A200C4B(Global_75441.f_484[iVar0], 0)) && unk_0xDF1306B443CD3D15(Global_75441.f_484[iVar0], 0))
		{
			unk_0x9412F17E127D9759(iParam0, &iVar1, &iVar2);
			unk_0x9412F17E127D9759(Global_75441.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(Global_75441.f_484[iVar0]) && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_75441.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_161(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case -50547061:
			if (func_162(iParam0, Global_75441.f_139[38], 0))
			{
				func_155(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_162(iParam0, Global_75441.f_139[43], 1))
			{
				func_155(43);
				return 1;
			}
			break;
		
		case -644710429:
			iVar5 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_162(iParam0, uVar1[iVar6], 1) && func_131(unk_0x68F4C0EC296D3901(uVar1[iVar6], true), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam4 || func_71(vParam1, 0f, 0f, 0f, 0)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(uVar1[iVar6], true), true) < 10f)
					{
						unk_0xA954465BA6FDEFE2(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case -1214293858:
			if ((unk_0xC844350D5D58C99A(Global_75441.f_484[14]) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0xDF1306B443CD3D15(Global_75441.f_484[14], 0))
			{
				if (unk_0x134B62B726CEC8E6(Global_75441.f_484[14]) == -1214293858 && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_75441.f_484[14]))
				{
					func_155(14);
					return 1;
				}
			}
			break;
		
		case 1075432268:
			if ((unk_0xC844350D5D58C99A(Global_75441.f_484[20]) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (unk_0x134B62B726CEC8E6(Global_75441.f_484[20]) == 1075432268 && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_155(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, bool bParam2)
{
	if ((unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0)) && unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x9412F17E127D9759(iParam0, &iVar0, &iVar1);
			unk_0x9412F17E127D9759(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_163(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			Global_96075[iVar0] = iParam0;
			Global_96085[iVar0] = iParam1;
			Global_96095[iVar0] = unk_0x134B62B726CEC8E6(iParam0);
			if (unk_0x8E39AC3C76C8AA58(Global_96095[iVar0]))
			{
				Global_96123[iParam1][0] = -1;
			}
			else
			{
				Global_96123[iParam1][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_164(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_96075[iVar0], 0))
					{
						unk_0x73270B3C9CC833FD(Global_96075[iVar0], false, 1);
						unk_0xA954465BA6FDEFE2(&(Global_96075[iVar0]));
						Global_96085[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_165(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (!func_174(iParam0))
		{
			if (unk_0x12AB0310C2281427(&(uParam1->f_1)) != 0)
			{
				unk_0x55A3C4ED4728EA42(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xBCB9B04D4DA658DF())
			{
				unk_0xA22B35B584F0580A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			iVar0 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			iVar1 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 10) != 0)
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0xF4FAAFEE2CE3B86C(iParam0, 0);
			if (unk_0x0ECB5CA5140957AD(iParam0, 5) != -1)
			{
				unk_0xF4FAAFEE2CE3B86C(iParam0, 1);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 13))
		{
			unk_0xBC3B1E7E1CC2D15C(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x231087BDB2AEBD55(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 12))
		{
			unk_0xAA443C33B073D88B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC15818BDC09EC354(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0xC002508A277213DE(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x58A0C35FA7CA6162(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_173(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_172())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x9F0DB8A295EA8513(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0);
		}
		else
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0);
			unk_0x8BF0BEF985EB6D43(iParam0, uParam1->f_65);
		}
		unk_0xA22F71BBC8173C39(iParam0, !unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x71EDC33E5A423750(iParam0, uParam1->f_70);
		}
		unk_0x85654A532F20966B(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x7726E33AC3B60544(iParam0, 2, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 28));
		unk_0x7726E33AC3B60544(iParam0, 3, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 29));
		unk_0x7726E33AC3B60544(iParam0, 0, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 30));
		unk_0x7726E33AC3B60544(iParam0, 1, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 31));
		unk_0x750A9DEB80D6992C(iParam0, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 10));
		if (unk_0x579935D850368851(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x446EA2500F021666(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_171(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_171(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x587993B327460A82(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x429C172A00A5F89B(iParam0, 1);
			}
			else
			{
				unk_0x821D9A7077DBCDBC(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_166(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_66) && !unk_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar5 + 1)))
				{
					if (!unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
					{
						unk_0xD3421E391490133B(iParam0, iVar5 + 1, false);
					}
				}
				else if (unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
				{
					unk_0xD3421E391490133B(iParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((unk_0x134B62B726CEC8E6(iParam0) == 819197656 || unk_0x134B62B726CEC8E6(iParam0) == -777172681) || unk_0x134B62B726CEC8E6(iParam0) == -1232836011)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0) == -1)
			{
				unk_0xD3421E391490133B(iParam0, 1, false);
			}
		}
		if (((unk_0xC41A9202669A24C4(uParam1->f_66) && unk_0xE7BF3A9C4976022F(iParam0)) && !unk_0x4906F8A34E9F4814(iParam0, -2118308144)) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 23))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 22))
				{
					unk_0xB58CA658A628ED02(iParam0, 2);
				}
				else
				{
					unk_0xB58CA658A628ED02(iParam0, 3);
				}
			}
			else
			{
				unk_0xB58CA658A628ED02(iParam0, 4);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 27))
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_166(int iParam0, var uParam1, var uParam2)
{
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xF95FF0A179413A39(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x73BEC6F1685574E6(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, 255);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7AFDC9F56E7BB635(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_170(unk_0x134B62B726CEC8E6(*iParam0), 1) && unk_0x0ECB5CA5140957AD(*iParam0, 24) != func_169(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 24, func_169(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_168(iParam0);
	if (func_167(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 1);
		unk_0x44A200C9B6E1CEA6(*iParam0, true);
	}
	return 1;
}

int func_167(int iParam0)
{
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_168(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case -1700874274:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 4) == 0)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 13);
			}
			break;
	}
}

int func_169(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case -1797613329:
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case -2039755226:
				return 3;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 38);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

void func_171(int iParam0, int iParam1)
{
	if (unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		iVar0 = unk_0x0ECB5CA5140957AD(iParam0, 24);
		iVar1 = unk_0x3A5601978F787E51(iParam0, 24);
		unk_0x920DACD685EA4957(iParam0, iParam1);
		if (unk_0x134B62B726CEC8E6(iParam0) == -1558399629 || unk_0x134B62B726CEC8E6(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x7AFDC9F56E7BB635(iParam0, 24);
		}
		else
		{
			unk_0xEE6A1776A67F70C1(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_172()
{
	return unk_0xC146D5FBD23C6954(-1691188696);
}

int func_173(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				return unk_0xEAE0D21A50E6C7F4(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!func_180(unk_0xD803B885F5E47A62(), -1))
		{
			iParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	if (func_176(unk_0xD803B885F5E47A62()) == 3)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (func_175(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_175(int iParam0)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "FMDeliverableID"))
		{
			return unk_0x1E2DFB0EF4BB4566(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_176(int iParam0)
{
	if (func_179(iParam0) == 233)
	{
		return func_177(iParam0);
	}
	return -1;
}

int func_177(int iParam0)
{
	if (func_178(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_178(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (func_178(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_180(int iParam0, int iParam1)
{
	if (func_181(iParam0, 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_181(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_182(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_159(&(Global_75441.f_555[0]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0], bParam4) <= fParam3)
			{
				func_155(iVar0);
			}
		}
		iVar0++;
	}
}

var func_183()
{
	return Global_105187.f_2890.f_12.f_66;
}

bool func_184()
{
	return func_130(&(Global_105187.f_2890));
}

void func_185()
{
	iLocal_3293 = unk_0xB01F55A0FD1CFD49("BREAKING_NEWS");
	unk_0x523BCC9DC80CD82F(1058115860);
	unk_0x523BCC9DC80CD82F(1912215274);
	unk_0x523BCC9DC80CD82F(-1660661558);
	unk_0x523BCC9DC80CD82F(-16948145);
	unk_0x523BCC9DC80CD82F(-344943009);
	unk_0x523BCC9DC80CD82F(-1358701087);
	unk_0x523BCC9DC80CD82F(330661258);
	unk_0x523BCC9DC80CD82F(-1934452204);
	unk_0x36187931D29E5BBE(45, "BB_Chase");
	unk_0x36187931D29E5BBE(35, "BB_Chase");
	unk_0x36187931D29E5BBE(2, "BB_Chase");
	unk_0x36187931D29E5BBE(54, "BB_Chase");
	unk_0x36187931D29E5BBE(55, "BB_Chase");
	unk_0x36187931D29E5BBE(67, "BB_Chase");
	func_187(1, "BB_Chase");
	if (func_23())
	{
		if (func_184())
		{
			if (!unk_0xAFB8495D36825275(func_183()) && !unk_0xC41A9202669A24C4(func_183()))
			{
				func_141();
				while (!func_128())
				{
					wait(0);
				}
			}
		}
	}
	while (((((((!unk_0xB87F6CF6E5628C67(1058115860) || !unk_0xB87F6CF6E5628C67(1912215274)) || !unk_0xB87F6CF6E5628C67(-1660661558)) || !unk_0xB87F6CF6E5628C67(-16948145)) || !unk_0xB87F6CF6E5628C67(-344943009)) || !unk_0xB87F6CF6E5628C67(-1358701087)) || !unk_0xB87F6CF6E5628C67(330661258)) || !unk_0xB87F6CF6E5628C67(-1934452204))
	{
		wait(0);
	}
	while (!unk_0x83D8570832F172A7(iLocal_3293) || !func_186(1, "BB_Chase"))
	{
		wait(0);
	}
	while (((((!unk_0x3DDA6C6A285628E4(45, "BB_Chase") || !unk_0x3DDA6C6A285628E4(35, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(2, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(54, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(55, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(67, "BB_Chase"))
	{
		wait(0);
	}
}

bool func_186(int iParam0, char* sParam1)
{
	return unk_0x3DDA6C6A285628E4(iParam0, sParam1);
}

void func_187(int iParam0, char* sParam1)
{
	unk_0x36187931D29E5BBE(iParam0, sParam1);
}

void func_188()
{
	func_214();
	func_212();
	unk_0x790015DC92C918E2();
	unk_0xB975E4541DDAB1F5(0);
	unk_0x5C2EBB66AD2EA5FF(0);
	unk_0xF3039DE1FDB4F6FD(true);
	if (unk_0x76395FF5E8D5E643(iLocal_3220))
	{
		unk_0xA4A8625CC710BC1F(iLocal_3220);
	}
	if (unk_0x49083FDB78AC0509(iLocal_3221))
	{
		unk_0xDDABC98CFF1A4C60(iLocal_3221);
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1019,579f, -484,872f, 36,0795f, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 93,7701f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3259))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3259, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3259))
			{
				unk_0xC55F2A0377488064(iLocal_3259);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3258))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
		{
			unk_0x06FF977AA95DCCE3(iLocal_3258, 0);
			if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
			{
				unk_0xC55F2A0377488064(iLocal_3258);
			}
		}
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3759))
	{
		unk_0xF7E25143642732EA(iLocal_3759, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3760))
	{
		unk_0xF7E25143642732EA(iLocal_3760, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3761))
	{
		unk_0xF7E25143642732EA(iLocal_3761, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3762))
	{
		unk_0xF7E25143642732EA(iLocal_3762, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3763))
	{
		unk_0xF7E25143642732EA(iLocal_3763, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3755[0]))
	{
		unk_0xF7E25143642732EA(iLocal_3755[0], 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3755[1]))
	{
		unk_0xF7E25143642732EA(iLocal_3755[1], 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3755[2]))
	{
		unk_0xF7E25143642732EA(iLocal_3755[2], 0);
	}
	unk_0x29D7581AEF4440C2();
	if (unk_0xC844350D5D58C99A(iLocal_3222))
	{
		unk_0xEBA53F35D0085654(&iLocal_3222);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3228))
	{
		unk_0xEBA53F35D0085654(&iLocal_3228);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3245))
	{
		unk_0xEBA53F35D0085654(&iLocal_3245);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3246))
	{
		unk_0xEBA53F35D0085654(&iLocal_3246);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3247))
	{
		unk_0xEBA53F35D0085654(&iLocal_3247);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3248))
	{
		unk_0xEBA53F35D0085654(&iLocal_3248);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3249))
	{
		unk_0xEBA53F35D0085654(&iLocal_3249);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3250))
	{
		unk_0xEBA53F35D0085654(&iLocal_3250);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[0]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3223[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[1]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3223[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[2]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3223[2]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[3]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3223[3]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_3229[0]))
	{
		unk_0xEBA53F35D0085654(&(uLocal_3229[0]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_3229[1]))
	{
		unk_0xEBA53F35D0085654(&(uLocal_3229[1]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_3229[2]))
	{
		unk_0xEBA53F35D0085654(&(uLocal_3229[2]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[0]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[1]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[2]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[2]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[3]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[3]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[4]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[4]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[5]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[5]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[6]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[6]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[7]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[7]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[8]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[8]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[9]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[9]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[10]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3233[10]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3251[0]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3251[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3254[0]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3254[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3254[1]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_3254[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3258))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3258);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3259))
	{
		if (!unk_0xAF6690C489CC6203(iLocal_3259))
		{
			unk_0x73270B3C9CC833FD(iLocal_3259, true, 0);
		}
		unk_0xA954465BA6FDEFE2(&iLocal_3259);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3264))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3264);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3265))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3265);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3266))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3266);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3267))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3267);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3271))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3271);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3275))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3275);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3279[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3279[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3260[0]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3260[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3260[1]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3260[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3279[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3279[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3268[0]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3268[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3268[1]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3268[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3272[0]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_3272[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3263))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3263);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3282))
	{
		unk_0xF690C84DADBB3551(&iLocal_3282);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3283))
	{
		unk_0xF690C84DADBB3551(&iLocal_3283);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3284))
	{
		unk_0xF690C84DADBB3551(&iLocal_3284);
	}
	unk_0x8C26F31DFF77D124();
	if (unk_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_MAIN_CHASE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_HELI_TAKEOFF"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x55D0A2DB35045A35(iLocal_3211);
	unk_0x55D0A2DB35045A35(iLocal_3213);
	unk_0x55D0A2DB35045A35(iLocal_3214);
	unk_0x55D0A2DB35045A35(iLocal_3215);
	unk_0x55D0A2DB35045A35(iLocal_3216);
	unk_0x55D0A2DB35045A35(iLocal_3217);
	unk_0x55D0A2DB35045A35(iLocal_3218);
	unk_0x55D0A2DB35045A35(iLocal_3219);
	unk_0x55D0A2DB35045A35(iLocal_3212);
	func_210(&uLocal_28, 0, 0);
	if (unk_0x9F4FE516EAACCFC5(iLocal_3289))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_3289, 0);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_3290))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_3290, 0);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_3291))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_3291, 0);
	}
	func_189(1, 1);
	unk_0x8D17794CE3273D70("misssolomon_3");
	unk_0x8D17794CE3273D70("amb@world_human_clipboard@male@base");
	unk_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
	unk_0xDB8844D4B7C60440(1, "BB_CHASE");
	unk_0xDB8844D4B7C60440(2, "BB_Chase");
	unk_0xDB8844D4B7C60440(9, "BB_CHASE");
	unk_0xDB8844D4B7C60440(35, "BB_Chase");
	unk_0xDB8844D4B7C60440(45, "BB_Chase");
	unk_0xDB8844D4B7C60440(54, "BB_Chase");
	unk_0xDB8844D4B7C60440(55, "BB_Chase");
	unk_0xDB8844D4B7C60440(61, "BB_CHASE");
	unk_0xDB8844D4B7C60440(63, "BB_CHASE");
	unk_0xDB8844D4B7C60440(64, "BB_CHASE");
	unk_0xDB8844D4B7C60440(67, "BB_Chase");
	unk_0xDB8844D4B7C60440(68, "BB_CHASE");
	unk_0xDB8844D4B7C60440(69, "BB_Chase");
	unk_0xE17FDF9E3068281B(&iLocal_3293);
	unk_0xF5A41F3D3B38EFE3("digitalOverlay");
}

void func_189(bool bParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&cLocal_2668))
	{
		iLocal_91 = 0;
		func_209();
		unk_0x51732B934211201A(iLocal_2684);
		unk_0xF5894FEB702E7E76(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, true);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x85089606511D395B(unk_0xD803B885F5E47A62(), 1f);
			unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 1);
			unk_0x060F249A9A3E3F4E(true);
		}
		if (bLocal_107)
		{
			unk_0x71199B01895C6202(func_208());
		}
		unk_0x71199B01895C6202(func_207());
		unk_0x71199B01895C6202(func_206());
		unk_0x71199B01895C6202(func_205());
		if (!unk_0x757EF87A33649210() && !bParam0)
		{
			func_204();
			func_203();
			func_200();
		}
		else
		{
			func_196();
			func_195();
		}
		if (bParam1)
		{
			func_190(0);
		}
	}
}

void func_190(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_191(iVar0, bParam0);
		iVar0++;
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 2, 1))
		{
			func_194(iParam0, 2, 1);
		}
	}
	else if (func_74(iParam0, 2, 1))
	{
		func_192(iParam0, 2, 1);
	}
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_76() == 0)
		{
			iVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_193(func_75(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_52(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_194(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_76() == 0)
		{
			iVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_193(func_75(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_195()
{
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2916[iVar0] = 0;
		vLocal_1963[iVar0] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_285[iVar0] = 0f;
		fLocal_461[iVar0] = 0f;
		fLocal_637[iVar0] = 0f;
		iLocal_1294[iVar0] = 0;
		fLocal_813[iVar0] = 0f;
		iLocal_1470[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3092[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3105[iVar0] = 0;
		vLocal_2489[iVar0] = { 0f, 0f, 0f };
		fLocal_1209[iVar0] = 0f;
		fLocal_1225[iVar0] = 0f;
		fLocal_1241[iVar0] = 0f;
		fLocal_1257[iVar0] = 0f;
		iLocal_1930[iVar0] = 0;
		iLocal_2861[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3157[iVar0] = 0;
		iVar0++;
	}
	iLocal_1948 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3121[iVar0] = 0;
		vLocal_2535[iVar0] = { 0f, 0f, 0f };
		fLocal_993[iVar0] = 0f;
		fLocal_1029[iVar0] = 0f;
		fLocal_1065[iVar0] = 0f;
		fLocal_1101[iVar0] = 0f;
		iLocal_1822[iVar0] = 0;
		fLocal_1137[iVar0] = 0f;
		iLocal_1858[iVar0] = 0;
		iLocal_2877[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iLocal_1950 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
	iLocal_1955 = 0;
}

void func_196()
{
	func_199();
	func_198();
	func_197();
}

void func_197()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_3121[iVar0]);
				}
				iVar1 = unk_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
				if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						unk_0xEBA53F35D0085654(&iVar1);
					}
				}
			}
			if (unk_0xAF6690C489CC6203(iLocal_3121[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_3121[iVar0]));
			}
		}
		iLocal_1858[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
}

void func_198()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3105[iVar0]))
		{
			if (unk_0xAF6690C489CC6203(iLocal_3105[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_3105[iVar0]));
			}
		}
		iLocal_1930[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_199()
{
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2916[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_2916[iVar0]);
				}
				iVar1 = unk_0xA30B8362589C124A(iLocal_2916[iVar0], -1, 0);
				if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						unk_0xEBA53F35D0085654(&iVar1);
					}
				}
			}
			if (unk_0xAF6690C489CC6203(iLocal_2916[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_2916[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iLocal_1470[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

void func_200()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_3121[iVar0]);
				}
			}
			func_202(iLocal_3121[iVar0]);
			func_201(iLocal_3121[iVar0]);
		}
		iLocal_1858[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
	iLocal_1952 = 0;
}

void func_201(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x046C362CF15F1935(&iParam0);
	}
}

void func_202(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar1 = unk_0xA30B8362589C124A(iParam0, -1, 0);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (!iVar1 == unk_0x16F2683693E537C9())
			{
				fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62,9f)
				{
					fVar0 = 62,9f;
				}
				unk_0x60274E99F9B27DEA(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0xBAFED2F6486F771A(iVar1, 8192, true);
				if (bLocal_108)
				{
					unk_0xBAFED2F6486F771A(iVar1, 65536, true);
					unk_0xBAFED2F6486F771A(iVar1, 2, false);
				}
				unk_0xAFF39FB306F8E232(iVar1, 6, false);
			}
		}
	}
}

void func_203()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3105[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_3105[iVar0], 0))
			{
				unk_0x20641932E5104B25(iLocal_3105[iVar0], true, 0);
			}
			func_201(iLocal_3105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_204()
{
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2916[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_2916[iVar0], 0))
			{
				unk_0x20641932E5104B25(iLocal_2916[iVar0], true, 0);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_2916[iVar0]);
				}
			}
			func_202(iLocal_2916[iVar0]);
			func_201(iLocal_2916[iVar0]);
		}
		iLocal_1470[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

int func_205()
{
	return 1581098148;
}

int func_206()
{
	return 2046537925;
}

int func_207()
{
	return 970598228;
}

int func_208()
{
	if (iLocal_2913 == 0)
	{
		return -912318012;
	}
	return iLocal_2913;
}

void func_209()
{
	unk_0xCE7D0828D683D536();
	unk_0xEF7906595D9044B8(-1);
	unk_0xD980FF3526C8CB9E(1);
	unk_0xE9B51BC60A3B47D9(1);
	unk_0xD60411959D5D930B(1f);
	unk_0xC83E7A5E408DF68C(3);
	unk_0xFF42993F8A095C58(3);
}

void func_210(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xF3039DE1FDB4F6FD(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_211(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_211(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

bool func_211(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_212()
{
	Global_19671 = 0;
	func_213();
}

void func_213()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_214()
{
	Global_19671 = 0;
	func_215();
}

void func_215()
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

void func_216()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_3285))
	{
		unk_0x142CC44DB769B57E(&iLocal_3285);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_3286))
	{
		unk_0x142CC44DB769B57E(&iLocal_3286);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_3287))
	{
		unk_0x142CC44DB769B57E(&iLocal_3287);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_3288))
	{
		unk_0x142CC44DB769B57E(&iLocal_3288);
	}
}

void func_217()
{
	if (iLocal_3570 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3228))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_3228, unk_0x16F2683693E537C9(), 0))
				{
					iLocal_3570 = 1;
				}
			}
		}
	}
	if (iLocal_3570 == 0)
	{
		if (iLocal_3534 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3228))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3222))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
						{
							if (unk_0xB72E131222E66495(iLocal_3222))
							{
								if (unk_0x4E496981D6BC4CA4(iLocal_3222) > 18)
								{
									if (unk_0xC844350D5D58C99A(iLocal_3284))
									{
										if (unk_0xD59B17D2DFF98E26(iLocal_3284))
										{
											unk_0x15AFB6CBDE990FB6(iLocal_3284, 1, true);
										}
									}
									iLocal_3210 = unk_0xE9744DB7B8CA6965(-932,847f, -2978,498f, 13,946f, 0f, 0f, 16,56f, 2);
									unk_0x915804B434753CBD(iLocal_3228, iLocal_3210, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0x0C8C0C840C2D1AD2(iLocal_3228, unk_0x16F2683693E537C9(), 9000, 1024, 3);
									iLocal_3534 = 1;
									iLocal_3535 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3534 == 1 && iLocal_3536 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3228))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
				{
					if (unk_0x69DF961355195C3C(iLocal_3210))
					{
						if (!iLocal_3535)
						{
							if (unk_0xA45992A6CE82FB43(iLocal_3210) > 0,25f)
							{
								func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
								func_218(iLocal_3228, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3535 = 1;
							}
						}
						if (unk_0xA45992A6CE82FB43(iLocal_3210) > 0,99f)
						{
							iLocal_3210 = unk_0xE9744DB7B8CA6965(-932,847f, -2978,498f, 13,946f, 0f, 0f, 16,56f, 2);
							unk_0x915804B434753CBD(iLocal_3228, iLocal_3210, "misssolomon_3", "_react_to_death", 1000f, -1,5f, 3, 16, 1148846080, 0);
							iLocal_3536 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3536 == 1 && iLocal_3539 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3228))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
				{
					if (unk_0x69DF961355195C3C(iLocal_3210))
					{
						if (unk_0xDDCA9A4E51DADA2B(iLocal_3228, unk_0x12AB0310C2281427("ENDS_IN_RUN")))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_3292);
							unk_0x818303F509839F80(0, -1115154469, 0);
							unk_0x80AA372E04ED318D(0, -1001,9f, -2954,3f, 13,1f, 3f, -1, 40000f, 3f);
							unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
							unk_0x75ABDC5F81978924(iLocal_3292);
							unk_0x78ADC381772E3D54(iLocal_3228, iLocal_3292);
							unk_0xF82EA857DA10E0CD(&iLocal_3292);
							unk_0xBD453909DC26A85D(iLocal_3228, -1115154469, false, 0, 0);
							iLocal_3539 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3539 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3228))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_3292);
				unk_0x80AA372E04ED318D(0, -1001,9f, -2954,3f, 13,1f, 3f, -1, 40000f, 3f);
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_3292);
				unk_0x78ADC381772E3D54(iLocal_3228, iLocal_3292);
				unk_0xF82EA857DA10E0CD(&iLocal_3292);
				iLocal_3539 = 1;
			}
		}
	}
}

void func_218(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_219()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3183 = 0;
		iLocal_3211 = unk_0xD68EA767274B7444();
		unk_0xAE1670DD12E839C3("TRV_4_MCS_2", 8);
		unk_0x523BCC9DC80CD82F(-1281648158);
		if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			unk_0xA19A5ADE229B4734("Trev4_5", 0, 0,5f, 1f);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		switch (iLocal_3183)
		{
			case 0:
				while (!unk_0x62A1F4500E8F07E0())
				{
					wait(0);
				}
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					unk_0x29E8331978B73E7F(iLocal_3222, "Molly", 1, -1358701087, 0);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
				{
					unk_0x29E8331978B73E7F(iLocal_3228, "Airworker_Tackle_trevor", 0, 1644266841, 0);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_3266, "JET_TRV4", 0, 1058115860, 0);
				}
				func_220(1, 1, 1, 0, 0, 0);
				unk_0xC92DB9682A650680("TRV4_SUCK_CS");
				unk_0x4C902758BEA97C68(0);
				iLocal_3183++;
				break;
			
			case 1:
				func_125();
				if (unk_0x3148AE92ED70DC30("JET_TRV4", 1058115860))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
					{
						if (!unk_0x437347B10A200C4B(iLocal_3266, 0))
						{
							unk_0x1E9649458B15960F(iLocal_3266, true);
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("Airworker_Tackle_trevor", 1644266841))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
					{
						unk_0x11AD11297DC58CC7(iLocal_3228, true);
						unk_0xF3268524E9BE6D6E(iLocal_3228, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
						unk_0xE121AE1BBF90E186(iLocal_3228, false);
						unk_0x25C5402CC10F76CD(iLocal_3228, true);
						unk_0xAA6B3A4292417750(iLocal_3228, false, false, false, false, false, false, 0, false);
					}
				}
				if (unk_0x3148AE92ED70DC30("Michael", 0))
				{
					func_125();
					func_123(1);
				}
				if (!unk_0x39B7A3CCD2467CAB())
				{
					iLocal_3338 = 1;
					if (!unk_0xC844350D5D58C99A(iLocal_3282))
					{
						if (unk_0xB87F6CF6E5628C67(-1281648158))
						{
							iLocal_3282 = unk_0x7707E48765093646(-1281648158, -946,4231f, -2979,826f, 12,9264f, 1, true, false);
							unk_0xC023D1C4BF532815(iLocal_3282, 0f, 0f, -121,5948f, 2, 1);
							unk_0xC4C7FD0EF3FEAB0B(iLocal_3282, 0f, 0f, 0,8729f, -0,4879f);
							unk_0x71199B01895C6202(-1281648158);
						}
					}
					unk_0x2D23BE319D971F4C(0);
					func_220(0, 1, 1, 0, 0, 0);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 0, 2))
					{
						unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), 736523883, 150, true, true);
					}
					iLocal_3181 = 2;
				}
				break;
			}
	}
	if (iLocal_3181 == 2)
	{
		iLocal_3181 = 0;
		iLocal_3180 = 8;
	}
}

void func_220(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_228(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_227())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_226(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_228(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_226(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_224(unk_0xD803B885F5E47A62())) && !func_222(unk_0xD803B885F5E47A62(), 0)) && !func_221()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_224(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_221()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_222(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_223(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_223(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_224(int iParam0)
{
	if (func_222(iParam0, 0))
	{
		return 1;
	}
	if (func_225())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_225()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_226(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_227()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_229()
{
	if (iLocal_3511 == 0)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -926,0258f, -2958,615f, 12,46467f, -930,6525f, -2956,061f, 16,45945f, 2,75f, 0, true, 0))
		{
			iLocal_3511 = 1;
		}
	}
	else if (iLocal_3515 == 0)
	{
		unk_0x38C3A68D7861DCFD(0, 22, 1);
		unk_0x38C3A68D7861DCFD(0, 25, 1);
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -938,5178f, -2972,022f, 12,46715f, -934,1034f, -2974,613f, 15,96715f, 5,25f, 0, true, 0))
		{
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), 0f);
		}
		else
		{
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0,975f);
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), fLocal_3326);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_217();
	}
	if (iLocal_3181 == 0)
	{
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3342 = 0;
		iLocal_3344 = 0;
		iLocal_3360 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3473 = 0;
		iLocal_3479 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515 = 0;
		iLocal_3516[0] = 0;
		iLocal_3520[0] = 0;
		iLocal_3516[1] = 0;
		iLocal_3520[1] = 0;
		iLocal_3516[2] = 0;
		iLocal_3534 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3539 = 0;
		iLocal_3542 = 0;
		iLocal_3568 = 0;
		iLocal_3570 = 0;
		iLocal_3571[3] = 0;
		unk_0x523BCC9DC80CD82F(-1281648158);
		unk_0xB8842F7C7761A196("V_60_HangerRm");
		unk_0x34D79252800B23FF(5);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 3, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		if (unk_0xC844350D5D58C99A(iLocal_3222))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
			{
				if (unk_0xB72E131222E66495(iLocal_3222))
				{
					unk_0xFD2107656FB54C9D(iLocal_3222, 3f, 1);
				}
			}
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3479 == 0)
		{
			if (unk_0xAE317D00A5A55DF6("Trv_4_747", false, -1))
			{
				iLocal_3479 = 1;
			}
		}
		if (iLocal_3471 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3222))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					if (unk_0xB72E131222E66495(iLocal_3222))
					{
						if (unk_0x4E496981D6BC4CA4(iLocal_3222) > 20)
						{
							if (unk_0xC844350D5D58C99A(iLocal_3266))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
								{
									func_234(&iLocal_3266);
									unk_0xEB819BD1E585E9CB(iLocal_3211, "Trevor_4_747_Jet_Engine", -937,77f, -2981,36f, 15,44f, 0, 0, 0, 0);
									unk_0x56FDC9ADE35F7DB0(iLocal_3266, true, false, 0);
									iLocal_3471 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3222))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					if (unk_0xB72E131222E66495(iLocal_3222))
					{
						if (unk_0x4E496981D6BC4CA4(iLocal_3222) > 23)
						{
							unk_0xA3BF0AA5A2608191(iLocal_3222);
							if (unk_0xC844350D5D58C99A(iLocal_3266))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
								{
									if (!unk_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0x8BC9595FD2792B5D("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_3209 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x6BE2EAE992FD7C26(iLocal_3209, iLocal_3266, unk_0xF653B9B22DA806A9(iLocal_3266, "chassis_Control"));
									unk_0x915804B434753CBD(iLocal_3222, iLocal_3209, "MISSSOLOMON_3", "molly_death", 1,5f, -8f, 4, 0, 1148846080, 0);
									unk_0xEFC3DF9D33E248D8(iLocal_3209, true);
									iLocal_3512 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3513 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3222))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					if (iLocal_3512 == 1)
					{
						vLocal_3318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						if (vLocal_3318.y < -2965f)
						{
							unk_0xC0B0B9E466C0ED17(iLocal_3222, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
							unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), iLocal_3222, 0);
							unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_3222, 4000, 48, 4);
							iLocal_3513 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3514 == 0)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_3222))
			{
				unk_0x29D5132FBDCF2B1E(0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				if (unk_0xC844350D5D58C99A(iLocal_3233[0]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[0]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_3233[0]);
						unk_0x11AD11297DC58CC7(iLocal_3233[0], false);
					}
				}
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3473 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3222))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3283))
					{
						if (unk_0x50B5F6F3C29E9380(iLocal_3283, iLocal_3222))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0xA45992A6CE82FB43(iLocal_3209) > 0,59f)
								{
									unk_0x15AFB6CBDE990FB6(iLocal_3283, 1, true);
									if (unk_0xE4EDC4B0E92C078B(iLocal_3285))
									{
										unk_0x142CC44DB769B57E(&iLocal_3285);
									}
									if (!unk_0xE4EDC4B0E92C078B(iLocal_3288))
									{
										func_218(iLocal_3222, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0x8910D3D58E0132B8("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
										{
											unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS");
										}
										settimerb(0);
										iLocal_3473 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3515 == 0)
		{
			if (iLocal_3473 == 1 && timerb() > 2500)
			{
				iLocal_3288 = func_231(iLocal_3283);
				func_20("SOL3_GOD1", 7500, -1);
				settimerb(0);
				iLocal_3515 = 1;
			}
		}
		if (iLocal_3571[3] == 0)
		{
			if (iLocal_3515 == 1 && iLocal_3514 == 1)
			{
				if (timerb() > 2500)
				{
					unk_0x8B4C4CA774181102(10f, 2f, 3);
					iLocal_3571[3] = 1;
				}
			}
		}
		if (iLocal_3472 == 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0xA45992A6CE82FB43(iLocal_3209) > 0,89f)
					{
						if (unk_0xC844350D5D58C99A(iLocal_3266))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
							{
								unk_0xEBA53F35D0085654(&iLocal_3222);
								unk_0xE81656B429E5C4B5("scr_trev4_747_blood_impact", iLocal_3266, -12,5793f, 12,2f, -7,09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								iLocal_3764 = unk_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12,6323f, 8,1153f, -7,0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0xEB819BD1E585E9CB(iLocal_3212, "Trevor_4_747_Man_Sucked_In", -938,6f, -2984,13f, 15,47f, 0, 0, 0, 0);
								iLocal_3192 = unk_0x1C0640BA9A7327B3();
								iLocal_3472 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_3192 + 574)
			{
				if (!unk_0xC844350D5D58C99A(iLocal_3282))
				{
					if (unk_0xB87F6CF6E5628C67(-1281648158))
					{
						iLocal_3282 = unk_0x7707E48765093646(-1281648158, -946,4231f, -2979,826f, 12,9264f, 1, true, false);
						unk_0xC023D1C4BF532815(iLocal_3282, 0f, 0f, -121,5948f, 2, 1);
						unk_0xC4C7FD0EF3FEAB0B(iLocal_3282, 0f, 0f, 0,8729f, -0,4879f);
						unk_0x71199B01895C6202(-1281648158);
					}
				}
				if (iLocal_3568 == 0)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3266))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
						{
							unk_0xE81656B429E5C4B5("scr_trev4_747_engine_debris", iLocal_3266, -12,6286f, 6,85353f, -7,13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0x56FDC9ADE35F7DB0(iLocal_3266, false, false, 0);
							func_230();
							unk_0x55D0A2DB35045A35(iLocal_3211);
							iLocal_3568 = 1;
						}
					}
				}
			}
			if (iLocal_3516[0] == 0)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3192 + 300)
				{
					if (unk_0x83A8177D302E1A7E(iLocal_3764))
					{
						unk_0xF7E25143642732EA(iLocal_3764, 0);
					}
					iLocal_3516[0] = 1;
				}
			}
			else if (iLocal_3520[0] == 0)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3192 + 700)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3266))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
						{
							iLocal_3764 = unk_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12,6323f, 8,1153f, -7,0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3520[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[1] == 0)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3192 + 1000)
				{
					if (unk_0x83A8177D302E1A7E(iLocal_3764))
					{
						unk_0xF7E25143642732EA(iLocal_3764, 0);
					}
					iLocal_3516[1] = 1;
				}
			}
			else if (iLocal_3520[1] == 0)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3192 + 1400)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3266))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
						{
							iLocal_3764 = unk_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12,6323f, 8,1153f, -7,0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3763 = unk_0xC1879030EB463216("scr_trev4_747_engine_damage", iLocal_3266, -11,956f, 10,528f, -7,657f, 0f, 2f, 0f, 1f, 0, 0, 0);
							iLocal_3520[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[2] == 0)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3192 + 3500)
				{
					if (unk_0x83A8177D302E1A7E(iLocal_3764))
					{
						unk_0xF7E25143642732EA(iLocal_3764, 0);
					}
					if (unk_0xC844350D5D58C99A(iLocal_3266))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3266, 0))
						{
							unk_0xAA6B3A4292417750(iLocal_3266, false, false, false, false, false, false, 0, false);
						}
					}
					iLocal_3516[2] = 1;
				}
			}
		}
		if (iLocal_3537 == 0)
		{
			if (iLocal_3473 == 1)
			{
				if (iLocal_3538 == 0)
				{
					if (!unk_0xE934758D273C899A(iLocal_3283))
					{
						iLocal_3202 = unk_0x1C0640BA9A7327B3();
						iLocal_3538 = 1;
					}
				}
				else if (unk_0x1C0640BA9A7327B3() > iLocal_3202 + 2000)
				{
					unk_0x1E9649458B15960F(iLocal_3283, true);
					iLocal_3537 = 1;
				}
			}
		}
		if (iLocal_3542 == 0)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_3222))
			{
				if (unk_0xC844350D5D58C99A(iLocal_3266))
				{
					unk_0x1E9649458B15960F(iLocal_3266, false);
					iLocal_3542 = 1;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_3283))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_3288))
			{
				if (func_16(unk_0x16F2683693E537C9(), iLocal_3283, 1) < 1,5f && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					unk_0x142CC44DB769B57E(&iLocal_3288);
					unk_0xF690C84DADBB3551(&iLocal_3283);
					func_125();
					iLocal_3181 = 0;
					iLocal_3180 = 8;
				}
			}
		}
	}
}

void func_230()
{
	if (unk_0x83A8177D302E1A7E(iLocal_3759))
	{
		unk_0xF7E25143642732EA(iLocal_3759, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3760))
	{
		unk_0xF7E25143642732EA(iLocal_3760, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3761))
	{
		unk_0xF7E25143642732EA(iLocal_3761, 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3762))
	{
		unk_0xF7E25143642732EA(iLocal_3762, 0);
	}
}

int func_231(int iParam0)
{
	return func_232(iParam0, 1, 0);
}

int func_232(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_233(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_234(int iParam0)
{
	if (!unk_0x437347B10A200C4B(*iParam0, 0))
	{
		vVar0 = { 22,6057f, -2,10018f, -6,22841f };
		vVar3 = { 12,6349f, 7,89711f, -7,09742f };
		vVar6 = { -22,5879f, -2,2931f, -6,22542f };
		vVar9 = { -12,6675f, 8,15519f, -6,98833f };
		vVar12 = { 180f, 0f, 0f };
		iLocal_3759 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar0, vVar12, 1f, 0, 0, 0);
		iLocal_3760 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar3, vVar12, 1f, 0, 0, 0);
		iLocal_3761 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar6, vVar12, 1f, 0, 0, 0);
		iLocal_3762 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar9, vVar12, 1f, 0, 0, 0);
	}
}

void func_235()
{
	if (unk_0xC844350D5D58C99A(iLocal_3222))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
		{
			if (unk_0xB72E131222E66495(iLocal_3222))
			{
				if (func_16(unk_0x16F2683693E537C9(), iLocal_3222, 1) < 17f)
				{
					unk_0xFD2107656FB54C9D(iLocal_3222, 3f, 1);
				}
				if (func_16(unk_0x16F2683693E537C9(), iLocal_3222, 1) < 22f && func_16(unk_0x16F2683693E537C9(), iLocal_3222, 1) > 17f)
				{
					unk_0xFD2107656FB54C9D(iLocal_3222, 2f, 1);
				}
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -921,7f, -2946,4f, 13,4f, true) > 8f && !unk_0x0A059E0DB9253280(iLocal_3222))
				{
					if (func_16(unk_0x16F2683693E537C9(), iLocal_3222, 1) > 22f)
					{
						unk_0xFD2107656FB54C9D(iLocal_3222, 1f, 1);
					}
				}
				else if (func_16(unk_0x16F2683693E537C9(), iLocal_3222, 1) > 22f)
				{
					unk_0xFD2107656FB54C9D(iLocal_3222, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3181 > 0)
	{
		if (iLocal_3511 == 0)
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -926,0258f, -2958,615f, 12,46467f, -930,6525f, -2956,061f, 16,45945f, 2,75f, 0, true, 0))
			{
				iLocal_3511 = 1;
			}
		}
		else
		{
			unk_0x38C3A68D7861DCFD(0, 22, 1);
			unk_0x38C3A68D7861DCFD(0, 25, 1);
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0,98f);
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), fLocal_3326);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3266))
		{
			unk_0x523BCC9DC80CD82F(1058115860);
			if (unk_0xB87F6CF6E5628C67(1058115860))
			{
				iLocal_3266 = unk_0x122AAB0B1D6F55AD(1058115860, -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
				unk_0x446EA2500F021666(iLocal_3266, 2);
				unk_0x05EC10F460C3A4AF(iLocal_3266, 0);
				unk_0x1E9649458B15960F(iLocal_3266, true);
				unk_0xAA6B3A4292417750(iLocal_3266, true, true, true, true, true, false, 0, false);
				unk_0x71199B01895C6202(1058115860);
				unk_0x25BD67336EA4AECE(iLocal_3266, 500);
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3228))
		{
			unk_0x523BCC9DC80CD82F(1644266841);
			unk_0x3F423BF5B8125A50("misssolomon_3");
			unk_0x523BCC9DC80CD82F(-969349845);
			if ((unk_0xB87F6CF6E5628C67(1644266841) && unk_0xB4AE0788C1587752("misssolomon_3")) && unk_0xB87F6CF6E5628C67(-969349845))
			{
				iLocal_3228 = unk_0x36F2404464202779(26, 1644266841, -932,1812f, -2967,947f, 12,9451f, 170,7182f, 1, true);
				unk_0xAA6B3A4292417750(iLocal_3228, false, false, false, false, false, false, 0, false);
				unk_0x25C5402CC10F76CD(iLocal_3228, false);
				unk_0x11AD11297DC58CC7(iLocal_3228, true);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				iLocal_3284 = unk_0x7707E48765093646(-969349845, -932,1812f, -2967,947f, 12,9451f, 1, true, false);
				unk_0x9F528B1B53FBC5D9(iLocal_3284, iLocal_3228, unk_0x4A089F2B762B8D33(iLocal_3222, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_3210 = unk_0xE9744DB7B8CA6965(-932,847f, -2978,498f, 13,946f, 0f, 0f, 16,56f, 2);
				unk_0x915804B434753CBD(iLocal_3228, iLocal_3210, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x71199B01895C6202(1644266841);
				unk_0x71199B01895C6202(-969349845);
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3233[0]))
		{
			unk_0x523BCC9DC80CD82F(1581098148);
			if (unk_0xB87F6CF6E5628C67(1581098148))
			{
				iLocal_3233[0] = unk_0x36F2404464202779(6, 1581098148, -969,06f, -2955,186f, 12,945f, 241,1703f, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_3233[0], 453432689, 1000, true, true);
				unk_0x298903DD96203C2C(iLocal_3233[0], 20);
				unk_0xE8832A9E16A57A1F(iLocal_3233[0], true, 1);
				unk_0x11AD11297DC58CC7(iLocal_3233[0], true);
				unk_0x9BE7E7B6B488CC55(iLocal_3233[0], unk_0x16F2683693E537C9(), -1, 1);
				func_127(iLocal_3233[0], 0);
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3267))
		{
			unk_0x523BCC9DC80CD82F(-1214505995);
			if (unk_0xB87F6CF6E5628C67(-1214505995))
			{
				iLocal_3267 = unk_0x122AAB0B1D6F55AD(-1214505995, -968,3718f, -2952,298f, 12,9451f, 114,9439f, true, true, false);
				unk_0x611DFA9294B339CA(iLocal_3267, 0, 0, true);
				unk_0xB9FD7450C0DAB575(iLocal_3267, 1084227584);
				unk_0x71199B01895C6202(-1214505995);
				unk_0xD458AC1C1D29C3B4(iLocal_3267, 2000, 0);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_3267))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3267, 0))
			{
				if (func_16(unk_0x16F2683693E537C9(), iLocal_3267, 1) > 5f)
				{
					unk_0x611DFA9294B339CA(iLocal_3267, 0, 0, false);
				}
			}
		}
	}
	if (iLocal_3181 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3345 == 1)
		{
			if (!unk_0x757EF87A33649210())
			{
				unk_0x53491B90E4FD0E56(0);
			}
			func_120();
			func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			iLocal_3345 = 0;
		}
		iLocal_3432 = 0;
		iLocal_3433 = 0;
		iLocal_3511 = 0;
		fLocal_3326 = 3f;
		iLocal_3185 = 0;
		func_189(0, 1);
		unk_0xDB8844D4B7C60440(45, "BB_CHASE");
		unk_0xDB8844D4B7C60440(35, "BB_CHASE");
		unk_0xDB8844D4B7C60440(2, "BB_CHASE");
		unk_0xDB8844D4B7C60440(54, "BB_CHASE");
		unk_0xDB8844D4B7C60440(1, "BB_CHASE");
		unk_0xDB8844D4B7C60440(9, "BB_CHASE");
		unk_0xDB8844D4B7C60440(61, "BB_CHASE");
		unk_0xDB8844D4B7C60440(63, "BB_CHASE");
		unk_0xDB8844D4B7C60440(64, "BB_CHASE");
		unk_0xE17FDF9E3068281B(&iLocal_3293);
		unk_0xF5A41F3D3B38EFE3("digitalOverlay");
		if (unk_0xC844350D5D58C99A(iLocal_3258))
		{
			unk_0x06FF977AA95DCCE3(iLocal_3258, 0);
			unk_0x046C362CF15F1935(&iLocal_3258);
		}
		if (unk_0xC844350D5D58C99A(iLocal_3271))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_3271);
		}
		if (unk_0xC844350D5D58C99A(iLocal_3254[0]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_3254[0]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_3260[0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_3260[0]));
		}
		unk_0xE801AB3C8990A86C(0);
		unk_0xC0FB48F966BB7D11(1);
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_3285))
			{
				iLocal_3285 = unk_0x5C3B41825F6AC5A0(iLocal_3222);
				unk_0x321E019A46034F39(iLocal_3285, true);
			}
		}
		unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 1);
		if (iLocal_3365[2] == 1)
		{
			if (!unk_0x8AA6DC470ABA63A2(iLocal_3219))
			{
				unk_0x55D0A2DB35045A35(iLocal_3219);
			}
			unk_0x43A06902454A1172(iLocal_3219);
			iLocal_3397 = 0;
			iLocal_3365[2] = 0;
		}
		unk_0x34D79252800B23FF(5);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 3, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		unk_0xC92DB9682A650680("TRV4_RUN");
		if (!unk_0xC844350D5D58C99A(iLocal_3266))
		{
			unk_0x523BCC9DC80CD82F(1058115860);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_3228))
		{
			unk_0x523BCC9DC80CD82F(1644266841);
		}
		unk_0x523BCC9DC80CD82F(-1214505995);
		unk_0x523BCC9DC80CD82F(1581098148);
		unk_0x523BCC9DC80CD82F(1912215274);
		unk_0x523BCC9DC80CD82F(-969349845);
		unk_0x36187931D29E5BBE(68, "BB_Chase");
		unk_0x36187931D29E5BBE(69, "BB_Chase");
		unk_0x3F423BF5B8125A50("misssolomon_3");
		settimera(0);
		if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			unk_0xA19A5ADE229B4734("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -880,365f, -2942,26f, 14f, 9,55f, 15,69f, 5f, false, true, 0))
		{
			func_236("TRV4_FAIL1");
		}
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -945,725f, -2893,15f, 14f, 4,5f, 9,56f, 5f, false, true, 0))
		{
			func_236("TRV4_FAIL1");
		}
		if (timera() > 15000)
		{
			func_236("TRV4_FAIL1");
		}
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -932,1196f, -2934,317f, 12,9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
			{
				if (!unk_0xB72E131222E66495(iLocal_3222))
				{
					unk_0xF44B0E19CAC31C33(iLocal_3222, "BB_MOLLY_2", 10, 4, -1);
					unk_0xC6EB89C59F2AF6B8(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			settimera(0);
			iLocal_3181 = 3;
		}
	}
	if (iLocal_3181 == 3)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
		{
			if (unk_0xB72E131222E66495(iLocal_3222))
			{
				if (unk_0x4E496981D6BC4CA4(iLocal_3222) > 18 && iLocal_3437 == 0)
				{
					iLocal_3352 = 0;
					unk_0xFD2107656FB54C9D(iLocal_3222, 3f, 1);
					iLocal_3181 = 0;
					iLocal_3180 = 6;
				}
			}
		}
		if (timera() > 50000)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
			{
				unk_0x327AAEE25F323797(iLocal_3222);
				unk_0xA47B46945FF6DE74(iLocal_3222, -932,5f, -2964,1f, 13,4f, 1, false, 0, 1);
				unk_0xF44B0E19CAC31C33(iLocal_3222, "BB_MOLLY_2", 18, 4, -1);
				unk_0xC6EB89C59F2AF6B8(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3352 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 6;
			}
		}
	}
}

void func_236(char* sParam0)
{
	if (iLocal_3437 == 0)
	{
		if (iLocal_3336)
		{
			func_226(0, 1, 1, 0);
			unk_0xE3BB8E05FCEB3FBE(iLocal_3289, false);
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			unk_0xBFE31971E49FA500(true);
			if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
			{
				unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
			}
			unk_0x55D0A2DB35045A35(iLocal_3219);
			func_246();
			unk_0xC0FB48F966BB7D11(1);
			iLocal_3365[2] = 0;
			iLocal_3336 = 0;
		}
		unk_0xC92DB9682A650680("TRV4_FAIL");
		sLocal_3577 = sParam0;
		unk_0x790015DC92C918E2();
		func_214();
		func_212();
		func_237(sLocal_3577);
		iLocal_3437 = 1;
	}
}

void func_237(char* sParam0)
{
	func_245(sParam0);
	func_238(0);
}

void func_238(int iParam0)
{
	if (Global_111638.f_9080 || func_432(0))
	{
		iVar0 = func_8();
		if (!func_239(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_239(int iParam0)
{
	func_244();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_243(iVar1, 1);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	func_240(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1].f_1++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_89532[iVar1].f_15, 1))
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0].f_1, 4))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_240(var uParam0, int iParam1)
{
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_242(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_241(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0] = { 0f, 0f, 0f };
				Global_96134[iVar0].f_9 = 0f;
				Global_96134[iVar0].f_12 = 0f;
				Global_96134[iVar0].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_10 = 0f;
				Global_96134[iVar0].f_13 = 0f;
				Global_96134[iVar0].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_11 = 0f;
				Global_96134[iVar0].f_14 = 0f;
				Global_96134[iVar0].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_26 = 0f;
				Global_96134[iVar0].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_27 = 0f;
				Global_96134[iVar0].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_241(var uParam0)
{
	*uParam0 = -15;
}

int func_242(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_242(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_242(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
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
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
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

void func_243(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0] = 1;
		}
	}
	else
	{
		Global_92729[iParam0] = 0;
	}
}

void func_244()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_107())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_107())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

void func_245(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_246()
{
	Global_61519 = 0;
}

void func_247()
{
	if (!unk_0xC844350D5D58C99A(iLocal_3266))
	{
		if (unk_0xC844350D5D58C99A(iLocal_3258))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 30000f)
					{
						unk_0x523BCC9DC80CD82F(1058115860);
						if (unk_0xB87F6CF6E5628C67(1058115860))
						{
							iLocal_3266 = unk_0x122AAB0B1D6F55AD(1058115860, -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
							unk_0x446EA2500F021666(iLocal_3266, 2);
							unk_0x05EC10F460C3A4AF(iLocal_3266, 0);
							unk_0x1E9649458B15960F(iLocal_3266, true);
							unk_0xAA6B3A4292417750(iLocal_3266, true, true, true, true, true, false, 0, false);
							unk_0x71199B01895C6202(1058115860);
							unk_0x25BD67336EA4AECE(iLocal_3266, 500);
						}
					}
				}
			}
		}
	}
	func_347();
	if (unk_0xE4EDC4B0E92C078B(iLocal_3285))
	{
		func_346(iLocal_3285, iLocal_3222, 300f, 0,9f, 0);
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3182 < 2)
		{
			unk_0x87F7E6A954466069(unk_0x16F2683693E537C9(), 0);
		}
		func_345();
		func_313();
		if (iLocal_3402 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[20]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3121[20], 0))
				{
					unk_0x56FDC9ADE35F7DB0(iLocal_3121[20], true, true, 0);
					unk_0x873BCADC75FF6D20(iLocal_3121[20]);
					iLocal_3402 = 1;
				}
			}
		}
		func_312();
		func_311();
		if (iLocal_3349 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3258))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
					{
						func_310(iLocal_3289, iLocal_3271, "BB_Chase", 1);
						iLocal_3349 = 1;
					}
				}
			}
		}
		else if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
			{
				func_309(iLocal_3289, iLocal_3271, fLocal_3323);
				unk_0x5818C8D5303DCCF8(iLocal_3289, 45f);
			}
		}
		if (iLocal_3337 == 0)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
				{
					if ((unk_0x9901AABAC4D4C590(iLocal_3258) > 15000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 125464f) && func_301(1, 0, 0))
					{
						iLocal_3352 = 1;
						if (iLocal_3437 == 0)
						{
							unk_0xA37A90C62806D848(1);
							func_300("TRV4_HELP1", -1);
							func_293(1);
							func_210(&uLocal_28, 0, 0);
							unk_0xF3039DE1FDB4F6FD(false);
							iLocal_3337 = 1;
						}
					}
				}
			}
		}
		else if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
			{
				if (unk_0x83D8570832F172A7(iLocal_3293) && func_186(1, "BB_Chase"))
				{
					if (((unk_0x9901AABAC4D4C590(iLocal_3258) > 15000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 125464f) && iLocal_3437 == 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						func_271();
					}
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 125464f || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if (iLocal_3336)
						{
							unk_0xA37A90C62806D848(1);
							func_226(0, 1, 1, 0);
							unk_0xE3BB8E05FCEB3FBE(iLocal_3289, false);
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							unk_0xBFE31971E49FA500(true);
							if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
							{
								unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
							}
							unk_0x55D0A2DB35045A35(iLocal_3219);
							func_246();
							unk_0xC0FB48F966BB7D11(1);
							iLocal_3365[2] = 0;
							iLocal_3336 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3182)
		{
			case 0:
				if (iLocal_3571[0] == 0)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 44255f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -1187,3f, -2847,8f, 13,6f, true) < 100f)
							{
								unk_0x8B4C4CA774181102(10f, 2f, 3);
								iLocal_3571[0] = 1;
							}
						}
					}
				}
				if (iLocal_3571[1] == 0)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 52875f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -1349f, -2720f, 14f, true) < 50f)
							{
								unk_0x8B4C4CA774181102(6f, 2f, 3);
								iLocal_3571[1] = 1;
							}
						}
					}
				}
				if (iLocal_3571[2] == 0)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 87085f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -1507f, -2520f, 14f, true) < 70f)
							{
								unk_0x8B4C4CA774181102(10f, 2f, 3);
								iLocal_3571[2] = 1;
							}
						}
					}
				}
				func_270();
				func_269();
				if (!unk_0x562F77A7F33D2E46("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 64280f && unk_0x9901AABAC4D4C590(iLocal_3258) < 72000f)
								{
									if (unk_0x0EB28750412C3A5A(-1149,6f, -2323,7f, 22,5f, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true) < 130f)
									{
										unk_0x8BC9595FD2792B5D("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_3258))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 72500f)
							{
								unk_0x8910D3D58E0132B8("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0x562F77A7F33D2E46("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 78000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 85000f)
								{
									unk_0x8BC9595FD2792B5D("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_3258))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 85500f)
							{
								unk_0x8910D3D58E0132B8("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0x562F77A7F33D2E46("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 100000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 107000f)
								{
									unk_0x8BC9595FD2792B5D("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_3258))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 107500f)
							{
								unk_0x8910D3D58E0132B8("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3258))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) < 10000f)
							{
								func_268();
							}
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_3258) < 30000f)
						{
							func_267(iLocal_3258, unk_0x9901AABAC4D4C590(iLocal_3258));
						}
					}
				}
				if (iLocal_3440 == 0)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 22000f)
							{
								unk_0x13896FDECC859926("TRV4_AIRPORT_ENTERED");
								iLocal_3440 = 1;
							}
						}
					}
				}
				else if (iLocal_3441 == 0)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -940,8253f, -2858,602f, 11,94482f, -1001,272f, -2823,764f, 21,00674f, 5,75f, 0, true, 0))
					{
						unk_0xC92DB9682A650680("TRV4_AIRPORT_ENTERED");
						iLocal_3441 = 1;
					}
				}
				if (iLocal_3343 == 0)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (func_16(iLocal_3258, unk_0x16F2683693E537C9(), 1) < 170f && unk_0x0A059E0DB9253280(iLocal_3258))
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_3287))
							{
								unk_0x142CC44DB769B57E(&iLocal_3287);
							}
							if (unk_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0x8910D3D58E0132B8("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
							{
								unk_0x8BC9595FD2792B5D("SOL_3_MAIN_CHASE");
							}
							if (!unk_0xE4EDC4B0E92C078B(iLocal_3285))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
								{
									iLocal_3285 = unk_0x5C3B41825F6AC5A0(iLocal_3222);
									unk_0x321E019A46034F39(iLocal_3285, true);
								}
							}
							unk_0x053C926E5E341906();
							if (!unk_0xD17F06053799A7CA())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0xC92DB9682A650680("TRV4_CHASE");
								iLocal_3343 = 1;
							}
						}
					}
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -536,0366f, -2102,793f, 5,672412f, -464,5755f, -2165,133f, 14,75182f, 65,25f, 0, true, 0))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_3287))
						{
							unk_0x142CC44DB769B57E(&iLocal_3287);
						}
						if (!unk_0xE4EDC4B0E92C078B(iLocal_3285))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
							{
								iLocal_3285 = unk_0x5C3B41825F6AC5A0(iLocal_3222);
								unk_0x321E019A46034F39(iLocal_3285, true);
							}
						}
						unk_0x053C926E5E341906();
						if (!unk_0xD17F06053799A7CA())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0xC92DB9682A650680("TRV4_CHASE");
							iLocal_3343 = 1;
						}
					}
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_3258) < 15000f)
						{
						}
					}
				}
				if (iLocal_3328 == 0)
				{
					unk_0x523BCC9DC80CD82F(1058115860);
					if (unk_0xB87F6CF6E5628C67(1058115860))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 18490f)
								{
									iLocal_3260[1] = unk_0x122AAB0B1D6F55AD(1058115860, -441,3117f, -3435,736f, 409,9454f, 148,3975f, true, true, false);
									unk_0x4D3C3C0B0DE2663E(iLocal_3260[1], 2, "BB_Chase", 1);
									unk_0x71199B01895C6202(1058115860);
									iLocal_3328 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_3260[1]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3260[1], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3260[1]))
						{
							unk_0xA9FBE21EB8701B34(iLocal_3260[1], fLocal_3323);
							if (unk_0x9901AABAC4D4C590(iLocal_3260[1]) > 20000f)
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_3260[1], 1) > 200f && !unk_0x0A059E0DB9253280(iLocal_3260[1]))
								{
									unk_0xC55F2A0377488064(iLocal_3260[1]);
									if (unk_0xC844350D5D58C99A(iLocal_3254[1]))
									{
										unk_0xEBA53F35D0085654(&(iLocal_3254[1]));
									}
									unk_0xA954465BA6FDEFE2(&(iLocal_3260[1]));
									iLocal_3207 = unk_0x1C0640BA9A7327B3() + 1000;
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_3260[1]))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3260[1]) > 31543f)
								{
									unk_0xC55F2A0377488064(iLocal_3260[1]);
									unk_0x1E9649458B15960F(iLocal_3260[1], true);
								}
							}
						}
						else if (func_16(unk_0x16F2683693E537C9(), iLocal_3260[1], 1) > 200f && !unk_0x0A059E0DB9253280(iLocal_3260[1]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3254[1]))
							{
								unk_0xEBA53F35D0085654(&(iLocal_3254[1]));
							}
							unk_0xA954465BA6FDEFE2(&(iLocal_3260[1]));
							iLocal_3207 = unk_0x1C0640BA9A7327B3() + 1000;
						}
					}
				}
				if (iLocal_3487 == 0)
				{
					if (!unk_0xC844350D5D58C99A(iLocal_3265))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 23000f)
								{
									unk_0x523BCC9DC80CD82F(-730904777);
									if (unk_0xB87F6CF6E5628C67(-730904777))
									{
										iLocal_3265 = unk_0x122AAB0B1D6F55AD(-730904777, -1325f, -2779f, 14f, 233,9563f, true, true, false);
										unk_0x71199B01895C6202(-730904777);
										unk_0xC002508A277213DE(iLocal_3265, 57, 57);
										iLocal_3487 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3121[1]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[1], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3121[1]))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3121[1]) > 13000f)
							{
								if (iLocal_3377 == 0)
								{
									fLocal_1173[1] = 0,5f;
									iLocal_3245 = unk_0xA30B8362589C124A(iLocal_3121[1], -1, 0);
									iLocal_3377 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3334 == 0)
				{
					unk_0xA0D09682534C2176(-1325f, -2779f, 14f);
					if (unk_0xC844350D5D58C99A(iLocal_3121[1]))
					{
						if (iLocal_3363 == 0)
						{
							unk_0xC002508A277213DE(iLocal_3121[1], 57, 57);
							iLocal_3363 = 1;
						}
						if (unk_0xC844350D5D58C99A(iLocal_3265))
						{
							if (!unk_0x437347B10A200C4B(iLocal_3121[1], 0))
							{
								if (!unk_0x437347B10A200C4B(iLocal_3265, 0))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_3121[1]))
									{
										unk_0xC74DAD25331A5425(iLocal_3121[1], iLocal_3265, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_3265))
					{
						if (unk_0xC844350D5D58C99A(iLocal_3258))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 41430f)
									{
										unk_0x15AFB6CBDE990FB6(iLocal_3265, 1, true);
										iLocal_3334 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3380 == 0)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[1], 0))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 42700f)
								{
									if (unk_0xC844350D5D58C99A(iLocal_3245))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_3245))
										{
											unk_0xD458AC1C1D29C3B4(iLocal_3245, 0, 0);
										}
									}
									if (unk_0x20D6474D5F4B9FC6(iLocal_3121[1]))
									{
										unk_0xC55F2A0377488064(iLocal_3121[1]);
										iLocal_3380 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3258))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (iLocal_3551 == 0)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 38000f)
								{
									if (unk_0xC844350D5D58C99A(iLocal_3121[1]) && unk_0xDF1306B443CD3D15(iLocal_3121[1], 0))
									{
										unk_0xCEAA091B490F8407(-1, "Trevor_4_747_Tanker_Horn", iLocal_3121[1], 0, false, 0);
										iLocal_3551 = 1;
									}
								}
							}
							if (iLocal_3365[1] == 0)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 39000f)
								{
									if (!unk_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x8BC9595FD2792B5D("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										unk_0xAA6B3A4292417750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), false, true, true, false, false, false, 0, false);
									}
									iLocal_3365[1] = 1;
								}
							}
							if (iLocal_3435 == 0)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 41611f)
								{
									if (unk_0xC844350D5D58C99A(iLocal_3265))
									{
										if (!unk_0x437347B10A200C4B(iLocal_3265, 0))
										{
											if (unk_0xC844350D5D58C99A(iLocal_3121[7]))
											{
												if (!unk_0x437347B10A200C4B(iLocal_3121[7], 0))
												{
													unk_0xCEAA091B490F8407(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3265, 0, false, 0);
													unk_0xC55F2A0377488064(iLocal_3121[7]);
													unk_0x0DC87D17DC2658DC(iLocal_3121[7], 1, 0);
													unk_0x0DC87D17DC2658DC(iLocal_3265, 1, 0);
													unk_0xDA55CDFB97015579(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0xDA55CDFB97015579(-1212f, -2855f, 14,34f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0x046C362CF15F1935(&iLocal_3265);
													unk_0x046C362CF15F1935(&(iLocal_3121[1]));
													iLocal_3435 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3369[1] == 0)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 43204f)
								{
									if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x8910D3D58E0132B8("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x42740B44BA8D7B43("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										unk_0xAA6B3A4292417750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), false, false, false, false, false, false, 0, false);
									}
									iLocal_3369[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0x562F77A7F33D2E46("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3121[0]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[0], 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3258))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 36000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 40000f)
										{
											unk_0x8BC9595FD2792B5D("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_3121[0]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[0], 0))
					{
						if (unk_0xC844350D5D58C99A(iLocal_3258))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 43204f)
									{
										unk_0x8910D3D58E0132B8("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 60500f)
							{
								unk_0x523BCC9DC80CD82F(1058115860);
							}
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 66500f)
							{
								if (unk_0xB87F6CF6E5628C67(1058115860))
								{
									iLocal_3260[0] = unk_0x122AAB0B1D6F55AD(1058115860, -1119,072f, -1864,548f, -8,2205f, 148,3975f, true, true, false);
									unk_0xE121AE1BBF90E186(iLocal_3260[0], true);
									unk_0x446EA2500F021666(iLocal_3260[0], 2);
									unk_0x4D3C3C0B0DE2663E(iLocal_3260[0], 35, "BB_Chase", 1);
									unk_0xF12C1D85AFEE8FAD(iLocal_3260[0], 3491f);
									unk_0x71199B01895C6202(1058115860);
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_3260[0]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3260[0], 0))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_3260[0]))
								{
									unk_0xA9FBE21EB8701B34(iLocal_3260[0], fLocal_3323);
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 80000f)
									{
										if (func_16(iLocal_3260[0], unk_0x16F2683693E537C9(), 1) > 200f)
										{
											unk_0xC55F2A0377488064(iLocal_3260[0]);
										}
									}
								}
								else if (unk_0x9901AABAC4D4C590(iLocal_3258) > 80000f)
								{
									if (func_16(iLocal_3260[0], unk_0x16F2683693E537C9(), 1) > 200f && !unk_0x0A059E0DB9253280(iLocal_3260[0]))
									{
										if (unk_0xC844350D5D58C99A(iLocal_3254[0]))
										{
											unk_0xEBA53F35D0085654(&(iLocal_3254[0]));
										}
										unk_0xA954465BA6FDEFE2(&(iLocal_3260[0]));
										iLocal_3207 = unk_0x1C0640BA9A7327B3() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3399 == 0)
				{
					if (iLocal_3398 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_3258))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 50000f)
									{
										unk_0x523BCC9DC80CD82F(1644266841);
										unk_0x3F423BF5B8125A50("misstrevor4");
										if (unk_0xB87F6CF6E5628C67(1644266841))
										{
											iLocal_3246 = unk_0x36F2404464202779(26, 1644266841, -1170,541f, -2507,111f, 12,9455f, 218,3035f, 1, true);
											iLocal_3247 = unk_0x36F2404464202779(26, 1644266841, -1168,264f, -2508,715f, 12,9455f, 70,7735f, 1, true);
											unk_0x11AD11297DC58CC7(iLocal_3246, true);
											unk_0x11AD11297DC58CC7(iLocal_3247, true);
											unk_0x71199B01895C6202(1644266841);
											iLocal_3398 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 58000f)
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_3246))
									{
										if (unk_0xB4AE0788C1587752("misstrevor4"))
										{
											if (!unk_0xB4ECF989E2C1DAC8(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0xC6EB89C59F2AF6B8(iLocal_3246, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0xEB6A8945D1AC98A1(iLocal_3247))
									{
										if (unk_0xB4AE0788C1587752("misstrevor4"))
										{
											if (!unk_0xB4ECF989E2C1DAC8(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0xC6EB89C59F2AF6B8(iLocal_3247, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_3399 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_3246))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3246))
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3247))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_3247))
								{
									if (!unk_0xB4ECF989E2C1DAC8(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0x8D17794CE3273D70("misstrevor4");
										unk_0x6DAD7906B73F064D(&iLocal_3246);
										unk_0x6DAD7906B73F064D(&iLocal_3247);
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3121[8]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3121[8]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3258))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 50200f)
										{
											if (iLocal_3330 == 0)
											{
												unk_0xA9FBE21EB8701B34(iLocal_3121[8], 1f);
												if (func_16(unk_0x16F2683693E537C9(), iLocal_3121[8], 1) < 100f)
												{
													unk_0x9A82EEAF6CA12AEE(0,3f);
													iLocal_3373 = 0;
													if (!unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0x8BC9595FD2792B5D("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xB9BBC76CD5A81754(iLocal_3121[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0xE8832A9E16A57A1F(iLocal_3121[8], true, 1);
												unk_0x44C45BC1FDF14D14(iLocal_3121[8], 1, 0);
												unk_0xCEAA091B490F8407(iLocal_3213, "Trevor_4_747_Flying_Car", iLocal_3121[8], 0, false, 0);
												settimerb(0);
												iLocal_3330 = 1;
											}
										}
										if (iLocal_3330 == 1)
										{
											if (timerb() > 662)
											{
												if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
												}
												unk_0x9A82EEAF6CA12AEE(1f);
												iLocal_3373 = 1;
											}
											if (timerb() > 1872)
											{
												unk_0xC55F2A0377488064(iLocal_3121[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(iLocal_3258))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 50200f)
									{
										if (!unk_0xE934758D273C899A(iLocal_3121[8]))
										{
											if (iLocal_3385 == 0)
											{
												unk_0xCEAA091B490F8407(iLocal_3213, "Trevor_4_747_Carsplosion", iLocal_3121[8], 0, false, 0);
												unk_0x0DC87D17DC2658DC(iLocal_3121[8], 1, 0);
												iLocal_3385 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3373 == 0)
					{
						if (iLocal_3330 == 1)
						{
							if (timerb() > 662)
							{
								if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
								}
								unk_0x9A82EEAF6CA12AEE(1f);
								iLocal_3373 = 1;
							}
						}
					}
				}
				else if (iLocal_3373 == 0)
				{
					if (iLocal_3330 == 1)
					{
						if (timerb() > 662)
						{
							if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
							}
							unk_0x9A82EEAF6CA12AEE(1f);
							iLocal_3373 = 1;
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3121[11]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[11], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3121[11]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3258))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 82683f)
										{
											if (iLocal_3331 == 0)
											{
												unk_0xCEAA091B490F8407(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3121[11], 0, false, 0);
												iLocal_3331 = 1;
												settimerb(0);
											}
											if (iLocal_3331 == 1)
											{
												if (timerb() > 1872)
												{
													if (!unk_0xE934758D273C899A(iLocal_3121[11]))
													{
														unk_0xC55F2A0377488064(iLocal_3121[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3331 == 1)
						{
							if (iLocal_3386 == 0)
							{
								if (!unk_0xE934758D273C899A(iLocal_3121[11]))
								{
									unk_0xCEAA091B490F8407(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3121[11], 0, false, 0);
									unk_0x0DC87D17DC2658DC(iLocal_3121[11], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3121[12]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[12], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3121[12]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3258))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 82463f)
										{
											if (iLocal_3332 == 0)
											{
												unk_0xCEAA091B490F8407(iLocal_3216, "Trevor_4_747_Flying_Car", iLocal_3121[12], 0, false, 0);
												iLocal_3332 = 1;
												settimerb(0);
											}
											if (iLocal_3332 == 1)
											{
												if (timerb() > 1000)
												{
													if (!unk_0xE934758D273C899A(iLocal_3121[12]))
													{
														unk_0xC55F2A0377488064(iLocal_3121[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3541 == 0)
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_3121[12]))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3121[12]) > 22216f && func_16(iLocal_3259, iLocal_3121[12], 1) < 90f)
									{
										unk_0x9A82EEAF6CA12AEE(0,3f);
										unk_0xB9BBC76CD5A81754(iLocal_3121[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3203 = unk_0x1C0640BA9A7327B3();
										iLocal_3541 = 1;
									}
								}
							}
						}
						else if (iLocal_3332 == 1)
						{
							if (iLocal_3387 == 0)
							{
								if (!unk_0xE934758D273C899A(iLocal_3121[12]))
								{
									unk_0xCEAA091B490F8407(iLocal_3216, "Trevor_4_747_Carsplosion", iLocal_3121[12], 0, false, 0);
									unk_0x0DC87D17DC2658DC(iLocal_3121[12], 1, 0);
									iLocal_3387 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3541 == 1)
				{
				}
				if (iLocal_3540 == 0 && iLocal_3541 == 1)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3121[12]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[12], 0))
						{
							vLocal_3315 = { unk_0x68F4C0EC296D3901(iLocal_3121[12], true) };
						}
					}
					vLocal_3318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					if (unk_0x1C0640BA9A7327B3() > iLocal_3203 + 1579 || vLocal_3318.y < vLocal_3315.y)
					{
						unk_0x9A82EEAF6CA12AEE(1f);
						unk_0x29D5132FBDCF2B1E(0);
						iLocal_3540 = 1;
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3258))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 105000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 113000f)
							{
								unk_0xA0D09682534C2176(-1172,3f, -3027,5f, 13,3f);
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3121[13]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[13], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3121[13]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3258))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 108830f)
										{
											unk_0x9BAC3470A92767CB(iLocal_3121[13], false);
											unk_0xE8832A9E16A57A1F(iLocal_3121[13], true, 1);
											unk_0x120A395B0ECB8EA5(iLocal_3121[13], false);
											settimera(0);
											iLocal_3486 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3486 == 1)
						{
							unk_0xD458AC1C1D29C3B4(iLocal_3121[13], 0, 0);
							unk_0x5A751CC648EB6940(iLocal_3121[13], true);
							unk_0xD458AC1C1D29C3B4(unk_0xA30B8362589C124A(iLocal_3121[13], -1, 0), 0, 0);
						}
					}
				}
				if (iLocal_3478 == 0)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3121[5]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[5], 0))
						{
							unk_0x446EA2500F021666(iLocal_3121[5], 0);
							unk_0xE121AE1BBF90E186(iLocal_3121[5], true);
							iLocal_3478 = 1;
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3121[15]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[15], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3121[15]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_3258))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 104989f)
										{
											unk_0xC55F2A0377488064(iLocal_3121[15]);
											func_265(iLocal_3121[15], -0,04f, -2,21f, 0,887f, 0f, -1f, 0f, 5f, 1);
											func_265(iLocal_3121[15], 0,44f, -0,802f, 15,303f, 0f, 0f, 0f, 12f, 1);
											unk_0x0DC87D17DC2658DC(iLocal_3121[15], 1, 0);
											unk_0x8B4C4CA774181102(4f, 4f, 4);
											unk_0xCEAA091B490F8407(-1, "Trevor_4_747_Carsplosion", iLocal_3121[15], 0, false, 0);
											unk_0x42740B44BA8D7B43("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3258))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) > 112000f)
							{
								unk_0x29398344B9E5B8A7("BB_MOLLY_2");
								unk_0x3F423BF5B8125A50("misssolomon_3");
								unk_0x3F423BF5B8125A50("move_f@film_reel_arms");
								iLocal_3182 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3508 == 0)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -887,1561f, -2957,106f, 12,46766f, -848,108f, -2997,588f, 18,23435f, 5f, 0, true, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3272[0]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3272[0], 0))
					{
						unk_0x06FF977AA95DCCE3(iLocal_3272[0], 0);
						unk_0x046C362CF15F1935(&(iLocal_3272[0]));
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_3251[0]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3251[0]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_3251[0]);
						unk_0x6DAD7906B73F064D(&(iLocal_3251[0]));
					}
				}
				if (iLocal_3401 == 0)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 115000f)
								{
									unk_0x29398344B9E5B8A7("Trev4_5");
									unk_0x523BCC9DC80CD82F(-1843032146);
									if (!unk_0xEB880D98B5988D0C())
									{
										unk_0x9E632F16E887F781(-930,7f, -2916,9f, 13,4f, 10f, 0);
									}
									iLocal_3401 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 120000f)
								{
									if (!unk_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0x8BC9595FD2792B5D("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x8F741CB9D8AB80F4(iLocal_3258);
								}
								if (unk_0x9901AABAC4D4C590(iLocal_3258) > 125513f)
								{
									unk_0xC55F2A0377488064(iLocal_3258);
									unk_0x1E9649458B15960F(iLocal_3258, true);
									func_264();
									unk_0xEFED0CD6E25037B9();
									unk_0x17E8C6920A1E386F(-833,86f, -2564,17f, 13,43f, -814,37f, -2521,04f, 12,94f, true, 0);
									unk_0x8910D3D58E0132B8("TREVOR_4_MAIN_CHASE");
									if (!unk_0x9F4FE516EAACCFC5(iLocal_3291))
									{
										iLocal_3291 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!unk_0x9F4FE516EAACCFC5(iLocal_3290))
									{
										iLocal_3290 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_3194 = unk_0x1C0640BA9A7327B3();
									unk_0xF3039DE1FDB4F6FD(true);
									unk_0xB975E4541DDAB1F5(0);
									iLocal_3182 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				vLocal_3318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				unk_0x8F741CB9D8AB80F4(iLocal_3258);
				if (iLocal_3508 == 0)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -887,1561f, -2957,106f, 12,46766f, -848,108f, -2997,588f, 18,23435f, 5f, 0, true, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0x0EB28750412C3A5A(vLocal_3318, -930,7f, -2916,9f, 13,4f, true) < 45f)
					{
						iLocal_3182 = 3;
					}
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0x0A059E0DB9253280(iLocal_3258))
						{
							if (iLocal_3508 == 1)
							{
								iLocal_3182 = 3;
							}
						}
					}
					if (unk_0x1C0640BA9A7327B3() > iLocal_3194 + 5000 && iLocal_3508 == 1)
					{
						iLocal_3182 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				unk_0x8F741CB9D8AB80F4(iLocal_3258);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3466 == 0)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (!unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (unk_0xB4AE0788C1587752("misssolomon_3"))
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
									{
										if (!unk_0xC844350D5D58C99A(iLocal_3283))
										{
											if (unk_0xB87F6CF6E5628C67(-1843032146))
											{
												iLocal_3283 = unk_0x7707E48765093646(-1843032146, -929f, -2917f, 13f, 1, true, false);
												unk_0x9F528B1B53FBC5D9(iLocal_3283, iLocal_3222, unk_0x4A089F2B762B8D33(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!unk_0xB4ECF989E2C1DAC8(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0x1E9649458B15960F(iLocal_3258, false);
											iLocal_3208 = unk_0xE9744DB7B8CA6965(-929,492f, -2913,472f, 14,16f, 0f, 0f, -28,96f, 2);
											unk_0xE14EC663EED44AD5(iLocal_3258, iLocal_3208, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0x915804B434753CBD(iLocal_3222, iLocal_3208, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0xEFC3DF9D33E248D8(iLocal_3208, false);
											unk_0xC92DB9682A650680("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3466 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3468 == 0)
				{
					if (iLocal_3466 == 1)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
						{
							if (unk_0x3D1053F9EB43B7AD(iLocal_3222, -937,6656f, -2927,864f, 12,77007f, -934,8479f, -2929,484f, 14,46523f, 1,5f, 0, true, 0))
							{
								if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0x1BF8B16C32704027(iLocal_3222, -1000f, 1);
								}
								unk_0x327AAEE25F323797(iLocal_3222);
								unk_0x11AD11297DC58CC7(iLocal_3222, true);
								unk_0xA47B46945FF6DE74(iLocal_3222, -934,8388f, -2932,831f, 12,9649f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iLocal_3222, 236,5739f);
								unk_0xF44B0E19CAC31C33(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0xB4AE0788C1587752("move_f@film_reel_arms"))
								{
									unk_0xC6EB89C59F2AF6B8(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_3468 = 1;
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (iLocal_3476 == 0)
					{
						if (iLocal_3475 == 0)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
							{
								if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0xA45992A6CE82FB43(iLocal_3208) > 0,18f || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -930,7f, -2916,9f, 13,4f, true) < 10f)
									{
										iLocal_3183 = 0;
										iLocal_3475 = 1;
									}
								}
							}
						}
						while (iLocal_3475 == 1)
						{
							unk_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0);
							switch (iLocal_3183)
							{
								case 0:
									unk_0x86F44313DFA8F00C(iLocal_3291, -927,0851f, -2921,173f, 13,66304f, 1,738541f, 1,294743f, 28,05799f, 34,66404f, 0, 1, 1, 2);
									unk_0x86F44313DFA8F00C(iLocal_3290, -927,0851f, -2921,173f, 13,66304f, 1,738541f, 1,294742f, 32,59915f, 34,66404f, 0, 1, 1, 2);
									unk_0xF1E4C781086FABC1(iLocal_3290, iLocal_3291, 4000, 1, 1);
									unk_0xBFE31971E49FA500(false);
									unk_0x8BCB70EB440DED83(false);
									unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									if (unk_0xC844350D5D58C99A(iLocal_3271))
									{
										unk_0xA954465BA6FDEFE2(&iLocal_3271);
									}
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										unk_0xA47B46945FF6DE74(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -918,6157f, -2926,646f, 12,9667f, 1, false, 0, 1);
										unk_0xD8F6A53F4799FAFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 47,9465f);
									}
									else
									{
										unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -918,6157f, -2926,646f, 12,9667f, 1, false, 0, 1);
										unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 47,9465f);
									}
									if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
									{
										func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
										unk_0xC46BC31D2529AD8C(iLocal_3222, 1);
									}
									unk_0x8B4C4CA774181102(4f, 0f, 3);
									unk_0x420FE818E70BB523(4);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
									iLocal_3529 = 0;
									iLocal_3183++;
									break;
								
								case 1:
									if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
									{
										if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3529 == 0)
											{
												if (unk_0xA45992A6CE82FB43(iLocal_3208) > 0,3f)
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0x8B4C4CA774181102(6f, 7f, 4);
														iLocal_3529 = 1;
													}
												}
											}
											if (unk_0xA45992A6CE82FB43(iLocal_3208) > 0,5f)
											{
												unk_0x86F44313DFA8F00C(iLocal_3291, -926,0932f, -2916,891f, 14,47074f, -3,471637f, 1,294743f, 125,8315f, 34,66404f, 0, 1, 1, 2);
												unk_0x86F44313DFA8F00C(iLocal_3290, -926,0932f, -2916,891f, 14,47074f, -3,471636f, 1,294743f, 135,4584f, 34,66404f, 0, 1, 1, 2);
												unk_0xF1E4C781086FABC1(iLocal_3290, iLocal_3291, 4000, 1, 1);
												iLocal_3206 = unk_0x1C0640BA9A7327B3();
												iLocal_3183++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
									{
										if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3206 != -1 && unk_0xA4FD7964FEE91ED8(0) == 4) && (unk_0x1C0640BA9A7327B3() - iLocal_3206) >= 2230)
											{
												unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
												unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
												iLocal_3206 = -1;
											}
											if (unk_0xA45992A6CE82FB43(iLocal_3208) > 0,85f)
											{
												unk_0x8BCB70EB440DED83(true);
												unk_0xBFE31971E49FA500(true);
												unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
												unk_0x2FB9A57162E54BAB(0f);
												iLocal_3220 = 346732587;
												unk_0x8010B3127F058F0F(iLocal_3220, 1335311341, -935,641f, -2927,185f, 14,0945f, 1, 1, 0);
												unk_0x838CC054A9235BEC(iLocal_3220, 1f, 0, 1);
												unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
												if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
												{
													unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0);
													if (unk_0xA4FD7964FEE91ED8(1) != 4 && unk_0xA4FD7964FEE91ED8(0) == 4)
													{
														unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
													}
												}
												unk_0xC46BC31D2529AD8C(iLocal_3222, 0);
												unk_0xBF40D896CA4BDBE7();
												unk_0x8B4C4CA774181102(0f, 4f, 3);
												iLocal_3195 = unk_0x1C0640BA9A7327B3();
												iLocal_3475 = 0;
												iLocal_3476 = 1;
												iLocal_3183++;
											}
										}
									}
									break;
							}
							wait(0);
						}
					}
				}
				if (iLocal_3476 == 1)
				{
					unk_0x1BA7FCEAFCE8D46E(iLocal_3220, 5, 0, 1);
					if (iLocal_3552 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_3222))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_3222, -935,3f, -2927,3f, 13f, 1,5f, 1,5f, 2f, false, true, 0))
								{
									unk_0xEB819BD1E585E9CB(-1, "Trevor_4_747_Molly_Open_Doors", -935,1f, -2927,6f, 13,2f, 0, 0, 0, 0);
									iLocal_3552 = 1;
								}
							}
						}
					}
				}
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_MAIN_CHASE");
					}
					if (unk_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0x8BC9595FD2792B5D("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					func_248();
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -929,7908f, -2928,213f, 12,19499f, -935,7283f, -2924,685f, 15,44832f, 4,75f, 0, true, 1))
				{
					if (iLocal_3468 == 0)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0x1BF8B16C32704027(iLocal_3222, -1000f, 1);
							}
							unk_0x327AAEE25F323797(iLocal_3222);
							unk_0x11AD11297DC58CC7(iLocal_3222, true);
							unk_0xA47B46945FF6DE74(iLocal_3222, -934,8388f, -2932,831f, 12,9649f, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(iLocal_3222, 236,5739f);
							unk_0xF44B0E19CAC31C33(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0xB4AE0788C1587752("move_f@film_reel_arms"))
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_3468 = 1;
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_3266))
					{
						unk_0xA954465BA6FDEFE2(&iLocal_3266);
					}
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 5;
				}
				break;
			}
	}
}

void func_248()
{
	if (iLocal_3433 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[14]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[14], 0))
			{
				iLocal_3248 = unk_0xA30B8362589C124A(iLocal_3121[14], -1, 0);
				unk_0x262EF6C6306BEA6C(iLocal_3248, 453432689, 1000, true, true);
				unk_0x73270B3C9CC833FD(iLocal_3248, true, 0);
				unk_0x11AD11297DC58CC7(iLocal_3248, true);
				unk_0x298903DD96203C2C(iLocal_3248, 5);
				unk_0xD458AC1C1D29C3B4(iLocal_3248, 150, 0);
				func_17(&uLocal_3578, 3, iLocal_3248, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3433 = 1;
	}
	else if (iLocal_3432 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3248))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3248))
			{
				unk_0xA3BF0AA5A2608191(iLocal_3248);
				unk_0xED253B8DDB3FFB77(iLocal_3248, unk_0x68F4C0EC296D3901(iLocal_3248, true), 5f, 0, 0);
				unk_0xDD353D0E9C789D0E(&iLocal_3292);
				unk_0x75CDA8644CD3B5F5(0, 0, 0);
				unk_0x5DA3F35E3BFDEE66(0, unk_0x16F2683693E537C9(), 5000, 1);
				unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
				unk_0x75ABDC5F81978924(iLocal_3292);
				unk_0x78ADC381772E3D54(iLocal_3248, iLocal_3292);
				unk_0xF82EA857DA10E0CD(&iLocal_3292);
				iLocal_3432 = 1;
			}
		}
	}
	else if (iLocal_3489 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3248))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_3248))
			{
				if (!unk_0x405E212DDE472467(iLocal_3248, 0) && func_13(unk_0x16F2683693E537C9(), iLocal_3248) < 20f)
				{
					if (!func_262())
					{
						if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
						{
							func_17(&uLocal_3578, 4, iLocal_3248, "SOL3COP", 0, 1);
							if (func_249(&uLocal_3578, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3489 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_249(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_250(sParam2, iParam4, 0);
}

int func_250(char* sParam0, int iParam1, bool bParam2)
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
					func_215();
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
		if (func_260(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_259();
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
				func_258();
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
				if (func_257())
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
			if (func_227())
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
			func_256();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_255();
		func_251();
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
		func_215();
	}
	return 0;
}

void func_251()
{
	if (!func_252())
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

int func_252()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_89())
	{
		return 0;
	}
	if (func_253(unk_0xD803B885F5E47A62()))
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

bool func_253(int iParam0)
{
	return func_254(iParam0, 20);
}

bool func_254(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

void func_255()
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

void func_256()
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

int func_257()
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

void func_258()
{
	if (func_59(14))
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
		Global_19486 = func_107();
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

void func_259()
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

bool func_260(int iParam0, int iParam1)
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

void func_261(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_262()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_263(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_250(sParam2, iParam3, 0);
}

void func_264()
{
	if (unk_0x83A8177D302E1A7E(iLocal_3755[0]))
	{
		unk_0xF7E25143642732EA(iLocal_3755[0], 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3755[1]))
	{
		unk_0xF7E25143642732EA(iLocal_3755[1], 0);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3755[2]))
	{
		unk_0xF7E25143642732EA(iLocal_3755[2], 0);
	}
	if (iLocal_3388 == 1)
	{
		unk_0x43A06902454A1172(iLocal_3217);
		iLocal_3396 = 0;
	}
}

void func_265(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, bool bParam8)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam0))
		{
			unk_0xC55F2A0377488064(iParam0);
		}
		vVar3 = { unk_0x68F4C0EC296D3901(iParam0, true) };
		if (bParam8)
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, vParam1) };
		}
		else
		{
			vVar0 = { vParam1 };
		}
		vVar6 = { func_266(vVar0 - vVar3) };
		vVar6 = { vVar6 * Vector(fParam7, fParam7, fParam7) };
		unk_0xDFC6BA855748EB10(iParam0, 3, vVar6, vParam4, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_266(vector3 vParam0)
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

void func_267(int iParam0, float fParam1)
{
	if (iLocal_1956 < 15)
	{
		if (iLocal_1956 == 0)
		{
			vLocal_2656 = { 99999,9f, 99999,9f, 99999,9f };
			vLocal_2659 = { -99999,9f, -99999,9f, -99999,9f };
		}
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iParam0))
			{
				iVar0 = unk_0x60755EFECF81FC68(iParam0);
				vVar1 = { unk_0xAA8A22FF67DFFDCD(iVar0, (fParam1 + (to_float((iLocal_1956 - 1)) * 2000f))) };
				if (vVar1.x < vLocal_2656.x)
				{
					vLocal_2656.x = vVar1.x;
				}
				if (vVar1.y < vLocal_2656.y)
				{
					vLocal_2656.y = vVar1.y;
				}
				if (vVar1.z < vLocal_2656.z)
				{
					vLocal_2656.z = vVar1.z;
				}
				if (vVar1.x > vLocal_2659.x)
				{
					vLocal_2659.x = vVar1.x;
				}
				if (vVar1.y > vLocal_2659.y)
				{
					vLocal_2659.y = vVar1.y;
				}
				if (vVar1.z > vLocal_2659.z)
				{
					vLocal_2659.z = vVar1.z;
				}
			}
		}
		iLocal_1956++;
	}
	else if (!bLocal_106)
	{
		unk_0xF5894FEB702E7E76(-9999,9f, -9999,9f, -9999,9f, 9999,9f, 9999,9f, 9999,9f, true);
		vLocal_2656 = { vLocal_2656 + Vector((fLocal_1293 * -1f), (fLocal_1293 * -1f), (fLocal_1293 * -1f)) };
		vLocal_2659 = { vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
		vLocal_2650 = { vLocal_2656 };
		vLocal_2653 = { vLocal_2659 };
		unk_0xF858EFDE1871B5F2(vLocal_2650, vLocal_2653, false, 0);
		iLocal_1956 = 0;
	}
}

void func_268()
{
	iLocal_89 = 1;
}

void func_269()
{
	if (iLocal_3333 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3258))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
			{
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 55000f)
				{
					unk_0x523BCC9DC80CD82F(1938952078);
					unk_0x523BCC9DC80CD82F(-1229853272);
					unk_0x3F423BF5B8125A50("missheist_agency3aig_lift_waitped_a");
					if ((unk_0xB87F6CF6E5628C67(1938952078) && unk_0xB87F6CF6E5628C67(-1229853272)) && unk_0xB4AE0788C1587752("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0xC844350D5D58C99A(iLocal_3264))
						{
							unk_0x536F1BE96C726C4B(-1129,566f, -2319,888f, 12,9445f, 10f, 0, 0, 0, false);
							iLocal_3264 = unk_0x122AAB0B1D6F55AD(1938952078, -1129,566f, -2319,888f, 12,9445f, 16,5423f, true, true, false);
						}
						iLocal_3755[0] = unk_0xB055A4268B938F30("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
						if (iLocal_3388 == 0)
						{
							unk_0xEB819BD1E585E9CB(iLocal_3217, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_3388 = 1;
						}
						iLocal_3755[1] = unk_0xB055A4268B938F30("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
						iLocal_3755[2] = unk_0xB055A4268B938F30("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
						if (!unk_0xC844350D5D58C99A(iLocal_3223[0]))
						{
							iLocal_3223[0] = unk_0x852A19533F896693(iLocal_3264, 21, -1229853272, -1, 1, true);
							unk_0x11AD11297DC58CC7(iLocal_3223[0], true);
							unk_0xFADC0A217229F6B5(iLocal_3223[0], true);
							unk_0xC857FDE2E17345F2(iLocal_3223[0], -1147,07f, -2320,65f, 18,93f, 1101004800);
						}
						if (!unk_0xC844350D5D58C99A(iLocal_3223[1]))
						{
							iLocal_3223[1] = unk_0x36F2404464202779(21, -1229853272, -1138,313f, -2313,277f, 12,9445f, 155,4271f, 1, true);
							unk_0xC6EB89C59F2AF6B8(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x11AD11297DC58CC7(iLocal_3223[1], true);
							unk_0xFADC0A217229F6B5(iLocal_3223[1], true);
						}
						if (!unk_0xC844350D5D58C99A(iLocal_3223[2]))
						{
							iLocal_3223[2] = unk_0x36F2404464202779(21, -1229853272, -1145,362f, -2309,387f, 12,9445f, 96,0786f, 1, true);
							unk_0xC6EB89C59F2AF6B8(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x11AD11297DC58CC7(iLocal_3223[2], true);
							unk_0xFADC0A217229F6B5(iLocal_3223[2], true);
						}
						if (!unk_0xC844350D5D58C99A(iLocal_3223[3]))
						{
							iLocal_3223[3] = unk_0x36F2404464202779(21, -1229853272, -1147,461f, -2314,511f, 13,1518f, 57,8707f, 1, true);
							unk_0xC6EB89C59F2AF6B8(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x11AD11297DC58CC7(iLocal_3223[3], true);
							unk_0xFADC0A217229F6B5(iLocal_3223[3], true);
						}
						unk_0x71199B01895C6202(-1229853272);
						unk_0x71199B01895C6202(1938952078);
						iLocal_3333 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3333 == 1)
	{
		if (iLocal_3543[0] == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3223[1]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3223[1]))
				{
					if (iLocal_3547[0] == 0)
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3547[0] = 1;
						}
					}
					if (iLocal_3547[0] == 1)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0x8BE3D040D15AEA1D(iLocal_3223[1], -1);
							unk_0xFADC0A217229F6B5(iLocal_3223[1], true);
							unk_0x11AD11297DC58CC7(iLocal_3223[1], false);
							iLocal_3543[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[1] == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3223[2]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3223[2]))
				{
					if (iLocal_3547[1] == 0)
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3547[1] = 1;
						}
					}
					if (iLocal_3547[1] == 1)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0x8BE3D040D15AEA1D(iLocal_3223[2], -1);
							unk_0xFADC0A217229F6B5(iLocal_3223[2], true);
							unk_0x11AD11297DC58CC7(iLocal_3223[2], false);
							iLocal_3543[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[2] == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3223[3]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3223[3]))
				{
					if (iLocal_3547[2] == 0)
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3547[2] = 1;
						}
					}
					if (iLocal_3547[2] == 1)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0x8BE3D040D15AEA1D(iLocal_3223[3], -1);
							unk_0xFADC0A217229F6B5(iLocal_3223[3], true);
							unk_0x11AD11297DC58CC7(iLocal_3223[3], false);
							iLocal_3543[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_270()
{
	if (iLocal_3434 == 0)
	{
		unk_0x523BCC9DC80CD82F(1912215274);
		unk_0x523BCC9DC80CD82F(1581098148);
		unk_0x36187931D29E5BBE(1, "BB_AIChase");
		if (unk_0xB87F6CF6E5628C67(1912215274) && unk_0xB87F6CF6E5628C67(1581098148))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 15500f)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
						iLocal_3272[0] = unk_0x122AAB0B1D6F55AD(1912215274, -847,2593f, -2379,987f, 15,9304f, 196,4921f, true, true, false);
						iLocal_3251[0] = unk_0x852A19533F896693(iLocal_3272[0], 6, 1581098148, -1, 1, true);
						unk_0x11AD11297DC58CC7(iLocal_3251[0], true);
						unk_0x2E1E5367A885F9B7(iLocal_3272[0], "SOL_3_POLICE_CARS_Group", 0);
						func_127(iLocal_3251[0], 0);
						unk_0x56FDC9ADE35F7DB0(iLocal_3272[0], true, true, 0);
						unk_0x4D3C3C0B0DE2663E(iLocal_3272[0], 1, "BB_AIChase", 1);
						unk_0x262EF6C6306BEA6C(iLocal_3251[0], 453432689, 1000, true, true);
						unk_0xAA280AF45BCCCF21(iLocal_3272[0], true);
						unk_0x71199B01895C6202(1912215274);
						unk_0x71199B01895C6202(1581098148);
						iLocal_3434 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3434 == 1)
	{
		if (iLocal_3480[0] == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3272[0]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3272[0], 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3272[0]))
					{
						unk_0xA9FBE21EB8701B34(iLocal_3272[0], fLocal_3323);
						if (unk_0x9901AABAC4D4C590(iLocal_3272[0]) > 13000f)
						{
							unk_0xC55F2A0377488064(iLocal_3272[0]);
						}
					}
					else if (unk_0xC844350D5D58C99A(iLocal_3251[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_3251[0]))
						{
							unk_0x11AD11297DC58CC7(iLocal_3251[0], true);
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x0D88E2F7C05BF3A2(iLocal_3251[0], unk_0x16F2683693E537C9());
								unk_0xFADC0A217229F6B5(iLocal_3251[0], true);
							}
							else
							{
								unk_0x6C3AE6E278DB3D0E(iLocal_3251[0], unk_0x16F2683693E537C9(), 0, 16);
								unk_0xFADC0A217229F6B5(iLocal_3251[0], true);
							}
							unk_0xDB8844D4B7C60440(1, "BB_AIChase");
							iLocal_3196 = unk_0x1C0640BA9A7327B3();
							iLocal_3480[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3483[0] == 0)
		{
			if (iLocal_3480[0] == 1)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3196 + 500)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3251[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_3251[0]))
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x91CF06FFB63510D4(iLocal_3251[0], 16, 1);
								unk_0x91CF06FFB63510D4(iLocal_3251[0], 1, 1);
								iLocal_3483[0] = 1;
							}
							else
							{
								iLocal_3483[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_271()
{
	if (!iLocal_3335)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3121[20], 0))
		{
			iLocal_3289 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
			unk_0xE3BB8E05FCEB3FBE(iLocal_3289, true);
			iLocal_3336 = 0;
			iLocal_3335 = 1;
		}
	}
	else if (func_286(&uLocal_28, 1, 0, 0) && iLocal_3437 == 0)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xA37A90C62806D848(1);
		}
		if (func_262())
		{
			unk_0x790015DC92C918E2();
			func_212();
		}
		if (iLocal_3365[2] == 0)
		{
			if (!unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
			{
				unk_0x8BC9595FD2792B5D("SOL_3_CHOPPER_CAM");
			}
			unk_0x4D7F4CC43D4D0DE3(iLocal_3219, "Trevor_4_747_TV", 0, true);
			iLocal_3365[2] = 1;
		}
		func_277(1, 1, 30, 5, 0);
		if (iLocal_3354 == 0)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_TEXT");
			func_276("TRV4_NEWS1");
			func_276("");
			unk_0x7E60D21B163E9D56();
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(1f);
			unk_0x7C19E5E4784BD7CF(0f);
			func_276("TRV4_NEWS2");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(0f);
			func_276("TRV4_NEWS6");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(1f);
			func_276("TRV4_NEWS7");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(2f);
			func_276("TRV4_NEWS8");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(3f);
			func_276("TRV4_NEWS9");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(4f);
			func_276("TRV4_NEWS10");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(1f);
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7E60D21B163E9D56();
			iLocal_3201 = (unk_0x1C0640BA9A7327B3() - 5000);
			iLocal_3355 = 1;
		}
		if (unk_0x1C0640BA9A7327B3() > iLocal_3201 + 5000)
		{
			func_275();
			iLocal_3201 = unk_0x1C0640BA9A7327B3();
		}
		if (iLocal_3356 == 0)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 25000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 50000f)
					{
						unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(1f);
						func_276("TRV4_NEWS5");
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7E60D21B163E9D56();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 77600f && unk_0x9901AABAC4D4C590(iLocal_3258) < 115000f)
					{
						unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(2f);
						func_276("TRV4_NEWS3");
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(2f);
						unk_0x7E60D21B163E9D56();
						iLocal_3357 = 1;
					}
				}
			}
		}
		if (iLocal_3358 == 0)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 115000f)
					{
						unk_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(3f);
						func_276("TRV4_NEWS4");
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(3f);
						unk_0x7E60D21B163E9D56();
						iLocal_3358 = 1;
					}
				}
			}
		}
		unk_0x3039591AD3E735CE(iLocal_3184);
		unk_0x6567AE843FADBA94(iLocal_3293, 255, 255, 255, 0, 0);
		if (iLocal_3336 == 0)
		{
			func_226(1, 1, 1, 0);
			unk_0x91F5B0244AAE6222(iLocal_3289, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0xE3BB8E05FCEB3FBE(iLocal_3289, true);
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			unk_0xBFE31971E49FA500(false);
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
			func_274();
			iLocal_3336 = 1;
		}
		func_272();
		unk_0x3584F71E5CA29322(6);
		unk_0x3584F71E5CA29322(7);
		unk_0x3584F71E5CA29322(8);
		unk_0x3584F71E5CA29322(9);
		unk_0x3584F71E5CA29322(1);
		unk_0x3584F71E5CA29322(2);
		unk_0x3584F71E5CA29322(15);
		unk_0x3584F71E5CA29322(3);
		unk_0x38C3A68D7861DCFD(0, 85, 1);
		unk_0xC0FB48F966BB7D11(0);
	}
	else if (iLocal_3336)
	{
		func_226(0, 1, 1, 0);
		unk_0xE3BB8E05FCEB3FBE(iLocal_3289, false);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0xBFE31971E49FA500(true);
		if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
		{
			unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
		}
		unk_0x55D0A2DB35045A35(iLocal_3219);
		func_246();
		unk_0xC0FB48F966BB7D11(1);
		iLocal_3365[2] = 0;
		iLocal_3336 = 0;
	}
}

void func_272()
{
	unk_0xC2127C0F64D6A3B9();
	func_273();
}

void func_273()
{
	Global_22211.f_134 = 1;
}

void func_274()
{
	Global_61519 = 1;
}

void func_275()
{
	if (iLocal_3186 > 4)
	{
		iLocal_3186 = 0;
	}
	unk_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
	unk_0x3CAEA85DA607305E(0);
	unk_0x3CAEA85DA607305E(iLocal_3186);
	unk_0x7E60D21B163E9D56();
	iLocal_3186++;
}

void func_276(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_277(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_284(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_281(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = unk_0x09AC81E49EA267F7(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_281(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_278(1, 40, 1, 1, 1);
		}
	}
}

void func_278(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_280(0))
			{
				func_279(0);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz1", 0,5f, fLocal_51, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0,01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_280(1))
			{
				func_279(1);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz2", 0,5f, fLocal_52, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0,02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_280(2))
			{
				func_279(2);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz3", 0,5f, fLocal_53, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0,028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_279(int iParam0)
{
	if (iParam0 < 32)
	{
		unk_0x5D96D8530B3D0904(&iLocal_54, iParam0);
	}
}

int func_280(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_54, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_281(bool bParam0, int iParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		iLocal_46 = func_283(5);
		iLocal_45 = unk_0x09AC81E49EA267F7(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_283(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_280(3))
			{
				func_279(3);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static1", 0,5f, 0,5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_280(4))
			{
				func_279(4);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static2", 0,5f, 0,5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_280(5))
			{
				func_279(5);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static3", 0,5f, 0,5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_280(6))
			{
				func_279(6);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static4", 0,5f, 0,5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_280(7))
			{
				func_279(7);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static5", 0,5f, 0,5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_282(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_283(int iParam0)
{
	if (unk_0x09AC81E49EA267F7(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0x09AC81E49EA267F7(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0x09AC81E49EA267F7(0, iParam0);
}

void func_284(bool bParam0, int iParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_280(8))
			{
				func_279(8);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0,5f, 0,5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_280(8))
			{
				func_279(8);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0,5f, 0,5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_285()
{
	unk_0x0D3BE1DE0262A012("digitalOverlay", false);
	if (unk_0x27117E2CDD4D67C3("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_286(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_290(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (!func_292(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_291(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (func_289(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_288(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_288(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_289(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_290(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_301(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_287();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_287()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

int func_288(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_290(var uParam0)
{
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 1;
		}
	}
	return 0;
}

int func_291(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_292(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_293(bool bParam0)
{
	if (bParam0)
	{
		func_299();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_298(0))
		{
			func_294(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_294(int iParam0)
{
	if (func_297())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_296())
		{
			func_295(1, 1);
		}
		else
		{
			func_295(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_227())
	{
		Global_19486.f_1 = 3;
	}
}

void func_295(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_298(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_296()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_297()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_298(int iParam0)
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

void func_299()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_300(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_301(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	if (func_298(0))
	{
		return 0;
	}
	if (func_308())
	{
		return 0;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(1779901043) > 0)
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				return 0;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0;
			}
		}
	}
	if ((func_307() || func_306(Global_4456448.f_232883)) || func_305())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_304(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_303(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_302(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_181(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_181(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_305()
{
	return Global_2450632.f_17;
}

bool func_306(int iParam0)
{
	return iParam0 == 51;
}

var func_307()
{
	return Global_2450632.f_16;
}

bool func_308()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_309(int iParam0, int iParam1, float fParam2)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam1))
		{
			unk_0xA9FBE21EB8701B34(iParam1, fParam2);
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
			vVar3 = { unk_0x835730A2D89F6093(iParam1, 2) };
			unk_0x608A456FDD8A83D8(iParam0, vVar0);
			unk_0x5F3CBA6EB9341C90(iParam0, vVar3, 2);
		}
	}
}

void func_310(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		unk_0x4A4806F9D471E491(iParam1, false, 0);
		unk_0x20641932E5104B25(iParam1, false, 0);
		unk_0xE121AE1BBF90E186(iParam1, true);
		unk_0xAA6B3A4292417750(iParam1, true, true, true, true, true, false, 0, false);
		unk_0x4D3C3C0B0DE2663E(iParam1, iParam3, sParam2, 1);
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
		unk_0x608A456FDD8A83D8(iParam0, vVar0);
		unk_0x5F3CBA6EB9341C90(iParam0, unk_0x835730A2D89F6093(iParam1, 2), 2);
	}
}

void func_311()
{
	if (iLocal_3218 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3381 == 0)
			{
				unk_0x43A06902454A1172(iLocal_3218);
				iLocal_3391 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3213 != -1)
	{
		if (iLocal_3385 == 1)
		{
			if (iLocal_3383 == 0)
			{
				unk_0x43A06902454A1172(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3383 = 1;
			}
		}
	}
	if (iLocal_3214 != -1)
	{
		if (iLocal_3390 == 1)
		{
			if (iLocal_3372 == 0)
			{
				unk_0x43A06902454A1172(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3372 = 1;
			}
		}
	}
	if (iLocal_3215 != -1)
	{
		if (iLocal_3386 == 1)
		{
			if (iLocal_3382 == 0)
			{
				unk_0x43A06902454A1172(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3216 != -1)
	{
		if (iLocal_3387 == 1)
		{
			if (iLocal_3384 == 0)
			{
				unk_0x43A06902454A1172(iLocal_3216);
				iLocal_3395 = 0;
				iLocal_3384 = 1;
			}
		}
	}
}

void func_312()
{
	if (unk_0xC844350D5D58C99A(iLocal_3121[19]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[19], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[19]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[19], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[7]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[7], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[7]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[7], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[8]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[8], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[8]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[8], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[9]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[9], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[9]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[9], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[10]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[10], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[10]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[10], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[11]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[11], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[11]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[11], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[13]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[13], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[13]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[13], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[14]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[14], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[14]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[14], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[15]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[15], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[15]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[15], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[16]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[16], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[16]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[16], true);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[17]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_3121[17], 0))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_3121[17]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_3121[17], true);
			}
		}
	}
}

void func_313()
{
	if (func_344())
	{
		fLocal_3324 = 0,5f;
	}
	else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xD890711CFD5AF100(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) > 40f)
		{
			fLocal_3324 = 0,85f;
		}
		else
		{
			fLocal_3324 = 0,9f;
		}
	}
	else
	{
		fLocal_3324 = 0,9f;
	}
	if (!unk_0x437347B10A200C4B(iLocal_3258, 0))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
			{
				if (iLocal_3359 == 0)
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3258) < 10000f)
					{
						if (func_16(unk_0x16F2683693E537C9(), iLocal_3258, 1) < 100f || unk_0x0A059E0DB9253280(iLocal_3258))
						{
							func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 40f, 55f, 100f, 1,7f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 0,6f, 40f, 50f, 60f, 1,7f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
				}
				else if (func_16(unk_0x16F2683693E537C9(), iLocal_3258, 1) > 175f)
				{
					fLocal_3323 = 0,6f;
					unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
				else if (unk_0x9901AABAC4D4C590(iLocal_3258) < 10000f)
				{
					func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 40f, 180f, 1,7f, 1f, fLocal_3324, 0);
					unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 10000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 23000f)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
					{
						func_340(iLocal_3121[8], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 30f, 50f, 1,7f, 0,5f, fLocal_3324, 1);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 35f, 180f, 1,7f, 0,5f, fLocal_3324, 1);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 23000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 32000f)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3121[7]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[7], 0))
						{
							func_340(iLocal_3121[7], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 20f, 30f, 100f, 1,8f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else if (unk_0xC844350D5D58C99A(iLocal_3121[8]))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
							{
								func_340(iLocal_3121[8], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 10f, 20f, 40f, 1,8f, 1f, fLocal_3324, 0);
								unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
								func_314(iLocal_3258, fLocal_3323);
							}
							else
							{
								func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_3324, 0);
								unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
								func_314(iLocal_3258, fLocal_3323);
							}
						}
						else
						{
							func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else if (unk_0xC844350D5D58C99A(iLocal_3121[8]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
						{
							func_340(iLocal_3121[8], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 10f, 20f, 40f, 1,8f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_3324, 0);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 32000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 39000f)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3121[7]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[7], 0))
						{
							func_340(iLocal_3121[7], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 22f, 25f, 100f, 1,8f, 0,5f, fLocal_3324, 1);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 35f, 150f, 1,8f, 0,5f, fLocal_3324, 1);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 35f, 150f, 1,8f, 0,5f, fLocal_3324, 1);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 39000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 56000f)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
					{
						func_340(iLocal_3121[8], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_3324, 0);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 35f, 150f, 1,8f, 1f, fLocal_3324, 0);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 56000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 65000f)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[11], 0))
					{
						func_340(iLocal_3121[11], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 30f, 100f, 1,8f, 1f, fLocal_3324, 0);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 25f, 35f, 100f, 1,8f, 1f, fLocal_3324, 0);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 65000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 90000f)
				{
					if (unk_0xC844350D5D58C99A(iLocal_3121[13]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[13], 0))
						{
							func_340(iLocal_3121[13], unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 30f, 35f, 50f, 1,8f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 45f, 55f, 150f, 1,8f, 1f, fLocal_3324, 0);
							unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
							func_314(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 45f, 55f, 150f, 1,8f, 1f, fLocal_3324, 0);
						unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
						func_314(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 90000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 110000f)
				{
					func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 60f, 70f, 150f, 1,5f, 0,5f, fLocal_3324, 1);
					unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
				if (unk_0x9901AABAC4D4C590(iLocal_3258) > 110000f)
				{
					func_340(iLocal_3258, unk_0x16F2683693E537C9(), &fLocal_3323, 1f, 100f, 120f, 150f, 1,6f, 1f, fLocal_3324, 0);
					unk_0xA9FBE21EB8701B34(iLocal_3258, fLocal_3323);
					func_314(iLocal_3258, fLocal_3323);
				}
			}
		}
	}
}

void func_314(int iParam0, float fParam1)
{
	fVar0 = unk_0x6117725E0134737F();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_339();
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				unk_0x536F1BE96C726C4B(vVar1, 1000f, 1, 0, 0, false);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_209();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0xD60411959D5D930B(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_1278 = 0f;
		}
		else
		{
			fLocal_1278 = 1f;
		}
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iParam0))
			{
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					if (func_338(unk_0x16F2683693E537C9(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_1275 = unk_0x9901AABAC4D4C590(iParam0);
				unk_0xA9FBE21EB8701B34(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278));
				if (bLocal_85)
				{
					func_337(iParam0, fLocal_1275);
					func_336(iParam0, fLocal_1285);
					if (fLocal_1280 > 1000f)
					{
						if (iLocal_1962 == 0)
						{
							func_335(iParam0, fLocal_1285);
						}
						fVar0 = ((fLocal_1275 + 4000f) + (to_float(iLocal_1962) * 2000f));
						func_334(iParam0, fVar0, fLocal_1279);
						iLocal_1962++;
						if (iLocal_1962 > 2)
						{
							fLocal_1280 = 0f;
						}
					}
					else
					{
						iLocal_1962 = 0;
						fLocal_1280 = (fLocal_1280 + (unk_0x6117725E0134737F() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1275 == 0f || unk_0x757EF87A33649210())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_331(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_330(iParam0);
			}
			if (!iLocal_75)
			{
				func_317(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iLocal_3164 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					vLocal_2641 = { unk_0x68F4C0EC296D3901(iLocal_3164, true) };
					unk_0xAB6708C4A38AE038(iLocal_3164, &fLocal_989, &fLocal_990, &fLocal_991, &fLocal_992);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3164))
			{
				func_201(iLocal_3165);
				iLocal_3165 = iLocal_3164;
			}
			if (unk_0xDF1306B443CD3D15(iLocal_3165, 0))
			{
				unk_0xA47B46945FF6DE74(iLocal_3165, vLocal_2641, 1, false, 0, 1);
				unk_0xC4C7FD0EF3FEAB0B(iLocal_3165, fLocal_989, fLocal_990, fLocal_991, fLocal_992);
			}
			fLocal_1274 = fLocal_1277;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_315(&iParam0, fLocal_1274))
			{
				wait(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_315(int iParam0, float fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_196();
		if (unk_0xDF1306B443CD3D15(*iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xC55F2A0377488064(*iParam0);
				unk_0x51B954DAB1BCAF73(*iParam0);
			}
			if (!iLocal_1949 == -1)
			{
				while (!func_316(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0))
				{
					wait(0);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_1278 = 0f;
					iLocal_1950 = 0;
					iLocal_1952 = 0;
					iLocal_1951 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1948 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
					iLocal_1955 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xA9FBE21EB8701B34(*iParam0, ((1f * fLocal_1276) * fLocal_1278));
				func_316(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1275 = fParam1;
		iLocal_1956 = 0;
		iLocal_1959 = 0;
		fLocal_1290 = 0f;
		fLocal_1289 = 0f;
		func_317(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_331(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_330(*iParam0);
		if ((iLocal_1953 == 0 && iLocal_1954 == 0) && iLocal_1955 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

int func_316(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (iParam1 > 0)
	{
		unk_0x36187931D29E5BBE(iParam1, &cLocal_2668);
		if (unk_0x3DDA6C6A285628E4(iParam1, &cLocal_2668))
		{
			if (unk_0xDF1306B443CD3D15(*uParam0, 0))
			{
				if (!unk_0x20D6474D5F4B9FC6(*uParam0))
				{
					unk_0x1E9649458B15960F(*uParam0, false);
					if (bParam4)
					{
						unk_0xC3C6B5ABAB3277F5(*uParam0, iParam1, &cLocal_2668, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
						{
							if (bParam7)
							{
								unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2668, 1);
							}
						}
						else
						{
							unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2668, 1);
						}
						unk_0xF12C1D85AFEE8FAD(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x9C8F7A2F15781E10(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x60755EFECF81FC68(*uParam0) == unk_0x1A2511CB22B86C17(iParam1, &cLocal_2668))
				{
					fVar0 = unk_0x9901AABAC4D4C590(*uParam0);
					unk_0xF12C1D85AFEE8FAD(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0xC55F2A0377488064(*uParam0);
						unk_0x36187931D29E5BBE(iParam1, &cLocal_2668);
					}
					if (bParam5)
					{
						unk_0x9C8F7A2F15781E10(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0xC55F2A0377488064(*uParam0);
					unk_0x1E9649458B15960F(*uParam0, false);
					if (bParam4)
					{
						unk_0xC3C6B5ABAB3277F5(*uParam0, iParam1, &cLocal_2668, 10f, 786603);
					}
					else if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
					{
						if (bParam7)
						{
							unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2668, 1);
						}
					}
					else
					{
						unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2668, 1);
					}
					unk_0xF12C1D85AFEE8FAD(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x9C8F7A2F15781E10(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_317(int iParam0, float fParam1, bool bParam2)
{
	bVar15 = unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
	bVar16 = unk_0x5C45F6B29A99E47E();
	uVar17 = unk_0x1E3C51C9DE5100B7();
	bVar18 = false;
	if (bVar15)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
		vVar9 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = iLocal_1952;
		while (iVar0 < 35)
		{
			if (iLocal_1858[iVar0] != 99)
			{
				if (iLocal_1858[iVar0] == 0)
				{
					if (iLocal_1822[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 > (fLocal_1137[iVar0] - (7000f * fParam1)))
							{
								if (func_329(iLocal_2877[iVar0]))
								{
									unk_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), 0);
								}
								else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
								{
									unk_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), 2);
								}
								unk_0x0674E58A79778E99(&(iLocal_1894[iVar0]), 1);
								iLocal_1858[iVar0]++;
								iLocal_1954++;
							}
						}
						else
						{
							fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
							fVar12 = (fVar12 * fLocal_1173[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_328(iLocal_1822[iVar0]))
								{
									if (func_329(iLocal_2877[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), 0);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), 2);
									}
									unk_0x0674E58A79778E99(&(iLocal_1894[iVar0]), 1);
									iLocal_1858[iVar0]++;
									iLocal_1954++;
								}
								else
								{
									iLocal_1858[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1858[iVar0] = 99;
					}
				}
				else if (iLocal_1858[iVar0] == 1)
				{
					bVar14 = false;
					unk_0x36187931D29E5BBE(iLocal_1822[iVar0], &cLocal_2668);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 0))
					{
						unk_0x523BCC9DC80CD82F(func_205());
						bVar14 = unk_0xB87F6CF6E5628C67(func_205());
					}
					else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && bVar16) || (unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0x523BCC9DC80CD82F(func_208());
						bVar14 = unk_0xB87F6CF6E5628C67(func_208());
					}
					if (bVar14)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_3121[iVar0]))
						{
							unk_0x523BCC9DC80CD82F(iLocal_2877[iVar0]);
							if (unk_0xB87F6CF6E5628C67(iLocal_2877[iVar0]) && unk_0x3DDA6C6A285628E4(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 >= (fLocal_1137[iVar0] - (fLocal_1288 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_327(vLocal_2535[iVar0], vVar9, 5f, fLocal_1286)))
									{
										if (bLocal_85)
										{
											func_326(vLocal_2535[iVar0], vVar9, fLocal_1279);
										}
										iLocal_3121[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_2877[iVar0], vLocal_2535[iVar0], 0, false, false, false);
										if (iLocal_2877[iVar0] == 353883353)
										{
											unk_0x446EA2500F021666(iLocal_3121[iVar0], 0);
										}
										if (uLocal_98 && !unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 0))
										{
											func_325(iLocal_3121[iVar0]);
										}
										if (unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 3))
										{
											unk_0x120A395B0ECB8EA5(iLocal_3121[iVar0], true);
										}
										unk_0x08841CDB215AE18F(iLocal_3121[iVar0], vLocal_2535[iVar0], 0, 0, 1);
										unk_0xC4C7FD0EF3FEAB0B(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
										if (unk_0x8E39AC3C76C8AA58(iLocal_2877[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
										{
											unk_0xB9FD7450C0DAB575(iLocal_3121[iVar0], 1084227584);
										}
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 0))
										{
											unk_0x56FDC9ADE35F7DB0(iLocal_3121[iVar0], true, true, 0);
											if (unk_0xD8A54335F18763BA() > 19 || unk_0xD8A54335F18763BA() < 7)
											{
												unk_0x0882E3DC0C991680(iLocal_3121[iVar0], 3);
											}
										}
										unk_0x1E9649458B15960F(iLocal_3121[iVar0], true);
										unk_0x71199B01895C6202(iLocal_2877[iVar0]);
										iLocal_1954 = (iLocal_1954 - 1);
										iLocal_1858[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0x437347B10A200C4B(iLocal_3121[iVar0], 0) && unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
						{
							unk_0x08841CDB215AE18F(iLocal_3121[iVar0], vLocal_2535[iVar0], 0, 0, 1);
							unk_0xC4C7FD0EF3FEAB0B(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
							if (unk_0x8E39AC3C76C8AA58(iLocal_2877[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
							{
								unk_0xB9FD7450C0DAB575(iLocal_3121[iVar0], 1084227584);
							}
							unk_0x1E9649458B15960F(iLocal_3121[iVar0], true);
							unk_0x71199B01895C6202(iLocal_2877[iVar0]);
							iLocal_1954 = (iLocal_1954 - 1);
							iLocal_1858[iVar0]++;
						}
					}
				}
				else if (iLocal_1858[iVar0] == 2)
				{
					unk_0x36187931D29E5BBE(iLocal_1822[iVar0], &cLocal_2668);
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 0))
						{
							unk_0x523BCC9DC80CD82F(func_205());
							bVar14 = unk_0xB87F6CF6E5628C67(func_205());
							iVar19 = 2;
						}
						else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && bVar16) || (unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0x523BCC9DC80CD82F(func_208());
							bVar14 = unk_0xB87F6CF6E5628C67(func_208());
							iVar19 = 0;
						}
						if (!unk_0x437347B10A200C4B(iLocal_3121[iVar0], 0))
						{
							if (!bLocal_106 && unk_0xBBA8A868118C90ED(iLocal_3121[iVar0], -1, 0))
							{
								if (bVar14)
								{
									if ((vdist2(unk_0x68F4C0EC296D3901(iLocal_3121[iVar0], true), vVar9) < 10000f || bParam2) || iLocal_89)
									{
										func_323(&(iLocal_3121[iVar0]), iVar19, 1);
										unk_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
					{
						if (fLocal_1275 >= fLocal_1137[iVar0])
						{
							if (14 > iLocal_1947)
							{
								fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
								fVar12 = (fVar12 * fLocal_1173[iVar0]);
								if (unk_0x3DDA6C6A285628E4(iLocal_1822[iVar0], &cLocal_2668))
								{
									if (fVar12 < unk_0x1C8FE65729F6E371(iLocal_1822[iVar0], &cLocal_2668))
									{
										vVar3 = { unk_0x68F4C0EC296D3901(iLocal_3121[iVar0], true) };
										vVar6 = { unk_0x87A3DA08ACDE0189(iLocal_1822[iVar0], fVar12, &cLocal_2668) };
										if (((!func_327(vVar3, vVar9, 5f, fLocal_1286) && func_327(vVar6, vVar9, 5f, fLocal_1286)) && !iLocal_89) && !bParam2)
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 1))
											{
												func_323(&(iLocal_3121[iVar0]), iVar19, 1);
											}
											iLocal_1947++;
											iLocal_1858[iVar0]++;
										}
										else if (((!bLocal_106 || unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_316(&(iLocal_3121[iVar0]), iLocal_1822[iVar0], fVar12, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0xA9FBE21EB8701B34(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
												if (unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
												{
													if (unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 0))
													{
														unk_0x56FDC9ADE35F7DB0(iLocal_3121[iVar0], true, true, 0);
														unk_0xAA280AF45BCCCF21(iLocal_3121[iVar0], true);
														unk_0x0882E3DC0C991680(iLocal_3121[iVar0], 2);
														if (!unk_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
														{
															unk_0x21CBAD8B56E628F6(iLocal_3121[iVar0], 1);
														}
													}
												}
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 1))
												{
													func_323(&(iLocal_3121[iVar0]), iVar19, 1);
												}
												iLocal_1947++;
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 1))
										{
											func_323(&(iLocal_3121[iVar0]), iVar19, 1);
										}
										iLocal_1947++;
										iLocal_1858[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 1))
								{
									func_323(&(iLocal_3121[iVar0]), iVar19, 1);
								}
								iLocal_1947++;
								iLocal_1858[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 1))
						{
							func_323(&(iLocal_3121[iVar0]), iVar19, 1);
						}
						iLocal_1947++;
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 3)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_3121[iVar0])) || func_322(iLocal_3121[iVar0])))
									{
										if (unk_0xC844350D5D58C99A(iVar2))
										{
											bVar14 = false;
											if (bLocal_97)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = unk_0x9C66D99E63E8E24C(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (unk_0x755FF954DAE327E1((fVar13 - unk_0x9C66D99E63E8E24C(iLocal_3121[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_321(iLocal_3121[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_319(iVar2, iLocal_3121[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_318(iLocal_3121[iVar0]);
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										unk_0xA9FBE21EB8701B34(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
									}
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_3121[iVar0]);
							}
						}
						else
						{
							iLocal_1858[iVar0]++;
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 4)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
						{
							iLocal_1858[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								unk_0xA9FBE21EB8701B34(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_3121[iVar0]);
							}
							if (unk_0x3DDA6C6A285628E4(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_1137[iVar0] + unk_0x1C8FE65729F6E371(iLocal_1822[iVar0], &cLocal_2668)))
								{
									unk_0xC55F2A0377488064(iLocal_3121[iVar0]);
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_3121[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 5)
				{
					if (!iLocal_3121[iVar0] == iLocal_3166)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								iVar20 = unk_0xD1960163A3042274(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0x9C66D99E63E8E24C(iLocal_3121[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62,9f)
									{
										fVar13 = 62,9f;
									}
									unk_0x06736587AE5BE33B(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_1822[iVar0] > 0)
							{
								unk_0xDB8844D4B7C60440(iLocal_1822[iVar0], &cLocal_2668);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_201(iLocal_3121[iVar0]);
							}
						}
						else if (unk_0xC844350D5D58C99A(iLocal_3121[iVar0]))
						{
							unk_0xA954465BA6FDEFE2(&(iLocal_3121[iVar0]));
						}
					}
					iLocal_1947 = (iLocal_1947 - 1);
					iLocal_1858[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1952 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_200();
	}
}

void func_318(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_202(iParam0);
		unk_0xFCA4899C6BBAD48F(iParam0, 786603);
	}
}

int func_319(int iParam0, int iParam1, bool bParam2)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
		if (bParam2)
		{
			vVar15 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
			vVar12 = { vVar15 / FtoV(vmag(vVar15)) };
		}
		else
		{
			vVar6 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
			vVar12 = { vVar6 - vVar3 };
		}
	}
	vVar9 = { vVar3 - vVar0 };
	vVar9.z = 0f;
	vVar12.z = 0f;
	if (func_320(vVar9, vVar12) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_320(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_321(int iParam0, int iParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		vVar3 = { unk_0x698705F356FA8F72(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_320(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	fVar6 = unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
	if (!fVar6 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_322(int iParam0)
{
	if (bLocal_101)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			iVar2 = unk_0x134B62B726CEC8E6(iVar1);
			if (iVar2 == -2137348917)
			{
				if (unk_0x6CFEA4CFD9C496C8(iVar1))
				{
					if (unk_0x565509D116400807(iVar1, &iVar0))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0))
						{
							if (unk_0x1B3D109B39CC2C89(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_323(var uParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(*uParam0, 0))
	{
		if (unk_0xBBA8A868118C90ED(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x852A19533F896693(*uParam0, 6, func_205(), -1, 0, false);
				unk_0x6DF7BF67E86AAE86(iVar0, iLocal_2684);
				unk_0x71199B01895C6202(func_205());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x0268AF082D60F2AE(*uParam0, 1);
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*uParam0)))
				{
					unk_0x83F619A03CDDE284(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0x852A19533F896693(*uParam0, 4, func_208(), -1, 0, false);
				if (bLocal_107)
				{
					unk_0x71199B01895C6202(func_208());
				}
			}
			if (bParam2)
			{
				unk_0x7980D72D61BEF4D5(iVar0, true);
				unk_0x00A6D36F507FD6EA(iVar0, 0);
				unk_0x4E885A246A9D983A(iVar0, 32, false);
			}
			if (bLocal_108)
			{
				unk_0xBAFED2F6486F771A(iVar0, 8192, true);
				unk_0xBAFED2F6486F771A(iVar0, 65536, true);
				unk_0xBAFED2F6486F771A(iVar0, 2, false);
				unk_0xDC2C59BD0989562B(*uParam0, 1);
			}
			unk_0x11AD11297DC58CC7(iVar0, true);
			func_324(iVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_324(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x6DAD7906B73F064D(&iParam0);
	}
}

void func_325(int iParam0)
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 12);
	if (iLocal_2914 >= -1 && iLocal_2915 >= -1)
	{
		while (iVar0 == iLocal_2914 || iVar0 == iLocal_2915)
		{
			iVar0++;
		}
	}
	else if (iLocal_2914 >= -1)
	{
		if (iVar0 == iLocal_2914)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0xC002508A277213DE(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0xC002508A277213DE(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0xC002508A277213DE(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0xC002508A277213DE(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0xC002508A277213DE(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0xC002508A277213DE(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0xC002508A277213DE(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0xC002508A277213DE(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0xC002508A277213DE(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0xC002508A277213DE(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0xC002508A277213DE(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0xC002508A277213DE(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0xC002508A277213DE(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0xC002508A277213DE(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0xC002508A277213DE(iParam0, 95, 95);
			break;
		
		default:
			unk_0xC002508A277213DE(iParam0, 73, 73);
			break;
	}
}

void func_326(vector3 vParam0, vector3 vParam3, float fParam6)
{
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_327(vParam0, vParam3, fParam6, 200f))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				iVar1 = unk_0x728870EB733D12A1();
				if (!unk_0x437347B10A200C4B(iVar1, 0))
				{
					if (unk_0x5A91F08DF773C39D(iVar1, vParam0, fParam6, fParam6, fParam6, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x28F5E4DA506AC0CA(vParam0, fParam6, 0, 0, 0, 0, false, 0);
			}
		}
	}
}

int func_327(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7)
{
	if (!unk_0x757EF87A33649210())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (vmag2(vParam3 - vParam0) - fParam6) < (fParam7 * fParam7)
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_328(int iParam0)
{
	unk_0x36187931D29E5BBE(iParam0, &cLocal_2668);
	while (!unk_0x3DDA6C6A285628E4(iParam0, &cLocal_2668))
	{
		wait(0);
	}
	fVar0 = unk_0x1C8FE65729F6E371(iParam0, &cLocal_2668);
	unk_0xDB8844D4B7C60440(iParam0, &cLocal_2668);
	return fVar0;
}

int func_329(int iParam0)
{
	if (((((((iParam0 == 2046537925 || iParam0 == -1627000575) || iParam0 == 1912215274) || iParam0 == -34623805) || iParam0 == 456714581) || iParam0 == 353883353) || iParam0 == 741586030) || iParam0 == -1683328900)
	{
		return 1;
	}
	return 0;
}

void func_330(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1951;
		while (iVar0 < 15)
		{
			switch (iLocal_1930[iVar0])
			{
				case 0:
					if (!iLocal_2861[iVar0] == 0)
					{
						if (unk_0x5A91F08DF773C39D(iParam0, vLocal_2489[iVar0], fLocal_1273, fLocal_1273, fLocal_1273, false, true, 0))
						{
							iLocal_1953++;
							iLocal_1930[iVar0]++;
						}
					}
					else
					{
						iLocal_1930[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1948)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_3105[iVar0]))
						{
							unk_0x523BCC9DC80CD82F(iLocal_2861[iVar0]);
							if (unk_0xB87F6CF6E5628C67(iLocal_2861[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_327(vLocal_2489[iVar0], vVar1, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_326(vLocal_2489[iVar0], vVar1, fLocal_1279);
									}
									iLocal_3105[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_2861[iVar0], vLocal_2489[iVar0], 0, false, false, false);
									if (iLocal_2861[iVar0] == 353883353)
									{
										unk_0x446EA2500F021666(iLocal_3105[iVar0], 0);
									}
									unk_0xC4C7FD0EF3FEAB0B(iLocal_3105[iVar0], fLocal_1209[iVar0], fLocal_1225[iVar0], fLocal_1241[iVar0], fLocal_1257[iVar0]);
									unk_0x71199B01895C6202(iLocal_2861[iVar0]);
									if (unk_0x4906F8A34E9F4814(iLocal_3105[iVar0], func_206()))
									{
										unk_0xAA280AF45BCCCF21(iLocal_3105[iVar0], true);
										if (!unk_0x7D8B2A8F9EA82DB7(iLocal_2861[iVar0]))
										{
											unk_0x21CBAD8B56E628F6(iLocal_3105[iVar0], 1);
										}
									}
									if (unk_0x4906F8A34E9F4814(iLocal_3105[iVar0], func_207()))
									{
										unk_0xC002508A277213DE(iLocal_3105[iVar0], 0, 0);
									}
									unk_0x120A395B0ECB8EA5(iLocal_3105[iVar0], true);
									iLocal_1953 = (iLocal_1953 - 1);
									iLocal_1948++;
									iLocal_1930[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_1953 = (iLocal_1953 - 1);
							iLocal_1948++;
							iLocal_1930[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3105[iVar0], 0))
						{
							vVar4 = { unk_0x68F4C0EC296D3901(iLocal_3105[iVar0], true) };
						}
						if (fLocal_1287 == 0f || vdist2(vVar1, vVar4) < (fLocal_1287 * fLocal_1287))
						{
							if (!func_319(iLocal_3105[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									func_201(iLocal_3105[iVar0]);
								}
								else
								{
									unk_0xA954465BA6FDEFE2(&(iLocal_3105[iVar0]));
								}
								iLocal_1948 = (iLocal_1948 - 1);
								iLocal_1930[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1930[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1951 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_203();
	}
}

void func_331(int iParam0, float fParam1, int iParam2)
{
	iVar5 = 0;
	bVar18 = unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
	bVar19 = unk_0x5C45F6B29A99E47E();
	uVar20 = unk_0x1E3C51C9DE5100B7();
	if (bVar18)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar5 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
		vVar12 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	iVar1 = 0;
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam0))
		{
			fLocal_1275 = unk_0x9901AABAC4D4C590(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1950;
		while (iVar0 < 175 && !bVar23)
		{
			if (iLocal_1470[iVar0] != 99)
			{
				if (iLocal_1470[iVar0] == 0)
				{
					if (iLocal_1294[iVar0] > 0 && iLocal_2685[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 < (fLocal_813[iVar0] + 20000f))
							{
								if (fLocal_1275 >= (fLocal_813[iVar0] - (7000f * fParam1)))
								{
									if (func_329(iLocal_2685[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2685[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), 2);
									}
									unk_0x0674E58A79778E99(&(iLocal_1646[iVar0]), 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_333(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_328(iLocal_1294[iVar0]))
								{
									if (func_329(iLocal_2685[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2685[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), 2);
									}
									unk_0x0674E58A79778E99(&(iLocal_1646[iVar0]), 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else
								{
									func_333(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_333(iVar0, 1090519040);
					}
				}
				else if (iLocal_1470[iVar0] == 1)
				{
					unk_0x36187931D29E5BBE(iLocal_1294[iVar0], &cLocal_2668);
					bVar17 = false;
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 0))
					{
						unk_0x523BCC9DC80CD82F(func_205());
						if (unk_0xB87F6CF6E5628C67(func_205()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && bVar19) || (unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0x523BCC9DC80CD82F(func_208());
						bVar17 = unk_0xB87F6CF6E5628C67(func_208());
					}
					if (!unk_0xC844350D5D58C99A(iLocal_2916[iVar0]))
					{
						unk_0x523BCC9DC80CD82F(iLocal_2685[iVar0]);
						if ((unk_0xB87F6CF6E5628C67(iLocal_2685[iVar0]) && unk_0x3DDA6C6A285628E4(iLocal_1294[iVar0], &cLocal_2668)) && bVar17)
						{
							if (fLocal_1275 >= (fLocal_813[iVar0] - (fLocal_1288 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_327(vLocal_1963[iVar0], vVar12, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_326(vLocal_1963[iVar0], vVar12, fLocal_1279);
									}
									iLocal_2916[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_2685[iVar0], vLocal_1963[iVar0], 0, false, false, false);
									if (iLocal_2685[iVar0] == 353883353)
									{
										unk_0x446EA2500F021666(iLocal_2916[iVar0], 0);
									}
									if (uLocal_98 && !unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 0))
									{
										func_325(iLocal_2916[iVar0]);
									}
									unk_0x08841CDB215AE18F(iLocal_2916[iVar0], vLocal_1963[iVar0], 0, 0, 1);
									unk_0xC4C7FD0EF3FEAB0B(iLocal_2916[iVar0], fLocal_109[iVar0], fLocal_285[iVar0], fLocal_461[iVar0], fLocal_637[iVar0]);
									if (unk_0x8E39AC3C76C8AA58(iLocal_2685[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_2685[iVar0]))
									{
										unk_0xB9FD7450C0DAB575(iLocal_2916[iVar0], 1084227584);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 3))
									{
										unk_0x120A395B0ECB8EA5(iLocal_2916[iVar0], true);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 0))
									{
										unk_0x56FDC9ADE35F7DB0(iLocal_2916[iVar0], true, true, 0);
										if (unk_0xD8A54335F18763BA() > 19 || unk_0xD8A54335F18763BA() < 7)
										{
											unk_0x0882E3DC0C991680(iLocal_2916[iVar0], 3);
										}
									}
									unk_0x1E9649458B15960F(iLocal_2916[iVar0], true);
									unk_0x7980D72D61BEF4D5(iLocal_2916[iVar0], true);
									unk_0x71199B01895C6202(iLocal_2685[iVar0]);
									iLocal_1955 = (iLocal_1955 - 1);
									iLocal_1470[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_1275 > fLocal_813[iVar0])
								{
									iLocal_1955 = (iLocal_1955 - 1);
									func_333(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1470[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1961 || iLocal_1961 == 0)) || iLocal_89) || iParam2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 0))
							{
								unk_0x523BCC9DC80CD82F(func_205());
								bVar17 = unk_0xB87F6CF6E5628C67(func_205());
								iVar21 = 2;
							}
							else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && bVar19) || (unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0x523BCC9DC80CD82F(func_208());
								bVar17 = unk_0xB87F6CF6E5628C67(func_208());
								iVar21 = 0;
							}
							if (!unk_0x437347B10A200C4B(iLocal_2916[iVar0], 0))
							{
								if (!bLocal_106 && unk_0xBBA8A868118C90ED(iLocal_2916[iVar0], -1, 0))
								{
									if (bVar17)
									{
										if ((vdist2(unk_0x68F4C0EC296D3901(iLocal_2916[iVar0], true), vVar12) < 10000f || iParam2) || iLocal_89)
										{
											func_323(&(iLocal_2916[iVar0]), iVar21, 0);
											unk_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
						{
							unk_0x36187931D29E5BBE(iLocal_1294[iVar0], &cLocal_2668);
							if (fLocal_1275 >= fLocal_813[iVar0])
							{
								if (12 > iLocal_1946)
								{
									fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
									if (unk_0x3DDA6C6A285628E4(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (fVar15 < unk_0x1C8FE65729F6E371(iLocal_1294[iVar0], &cLocal_2668))
										{
											vVar6 = { unk_0x68F4C0EC296D3901(iLocal_2916[iVar0], true) };
											vVar9 = { unk_0x87A3DA08ACDE0189(iLocal_1294[iVar0], fVar15, &cLocal_2668) };
											if (!func_327(vVar6, vVar12, 5f, fLocal_1286) && func_327(vVar9, vVar12, 5f, fLocal_1286))
											{
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
												{
													func_323(&(iLocal_2916[iVar0]), iVar21, 0);
												}
												func_333(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_316(&(iLocal_2916[iVar0]), iLocal_1294[iVar0], fVar15, 1, 0, 0, 1, bLocal_103))
												{
													if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
													{
														func_323(&(iLocal_2916[iVar0]), iVar21, 0);
													}
													unk_0x20641932E5104B25(iLocal_2916[iVar0], true, 0);
													unk_0xA9FBE21EB8701B34(iLocal_2916[iVar0], fParam1);
													iLocal_1946++;
													iLocal_1470[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
											{
												func_323(&(iLocal_2916[iVar0]), iVar21, 0);
											}
											func_333(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0x1C8FE65729F6E371(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
										{
											func_323(&(iLocal_2916[iVar0]), iVar21, 0);
										}
										func_333(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
									{
										func_323(&(iLocal_2916[iVar0]), iVar21, 0);
									}
									func_333(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
								{
									func_323(&(iLocal_2916[iVar0]), iVar21, 0);
								}
								func_333(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 1))
							{
								func_323(&(iLocal_2916[iVar0]), iVar21, 0);
							}
							func_333(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1961 = iVar0;
					}
				}
				else if (iLocal_1470[iVar0] == 3)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
						{
							iVar4 = unk_0xA30B8362589C124A(iLocal_2916[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_322(iLocal_2916[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
											{
												if (!unk_0x437347B10A200C4B(iVar5, 0))
												{
													bVar17 = false;
													if (!func_332(iLocal_2916[iVar0], iVar5) || func_319(iVar5, iLocal_2916[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1960 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !unk_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
										{
											vVar25 = { unk_0x5293C88BD2F4DE13(iParam0, unk_0x68F4C0EC296D3901(iLocal_2916[iVar0], true)) };
											if (vVar25.y < 0f)
											{
												if (unk_0x755FF954DAE327E1(vVar25.y) > unk_0x755FF954DAE327E1(vVar25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1960 = iVar0;
										}
									}
									if (bVar24)
									{
										func_318(iLocal_2916[iVar0]);
										iLocal_1470[iVar0]++;
									}
									else
									{
										unk_0xA9FBE21EB8701B34(iLocal_2916[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2916[iVar0]);
							}
						}
						else
						{
							iLocal_1470[iVar0]++;
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 4)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
						{
							iLocal_1470[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xA30B8362589C124A(iLocal_2916[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar4))
							{
								unk_0xA9FBE21EB8701B34(iLocal_2916[iVar0], fParam1);
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2916[iVar0]);
							}
							if (unk_0x3DDA6C6A285628E4(iLocal_1294[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_813[iVar0] + unk_0x1C8FE65729F6E371(iLocal_1294[iVar0], &cLocal_2668)))
								{
									unk_0xC55F2A0377488064(iLocal_2916[iVar0]);
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2916[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 5)
				{
					if (!unk_0x437347B10A200C4B(iLocal_2916[iVar0], 0))
					{
						fVar16 = unk_0x9C66D99E63E8E24C(iLocal_2916[iVar0]);
					}
					iLocal_1946 = (iLocal_1946 - 1);
					func_333(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1950 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1960 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1961 = 0;
		}
	}
	else
	{
		func_204();
	}
}

int func_332(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		vVar3 = { unk_0x698705F356FA8F72(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_320(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_333(int iParam0, float fParam1)
{
	if (!iLocal_2685[iParam0] == 0)
	{
		unk_0x71199B01895C6202(iLocal_2685[iParam0]);
	}
	if (!unk_0x437347B10A200C4B(iLocal_2916[iParam0], 0))
	{
		unk_0x20641932E5104B25(iLocal_2916[iParam0], true, 0);
		unk_0x1E9649458B15960F(iLocal_2916[iParam0], false);
		iVar0 = unk_0xA30B8362589C124A(iLocal_2916[iParam0], -1, 0);
		if (!unk_0xEB6A8945D1AC98A1(iVar0) && iVar0 != unk_0x16F2683693E537C9())
		{
			unk_0x11AD11297DC58CC7(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62,9f)
			{
				fParam1 = 62,9f;
			}
			unk_0x60274E99F9B27DEA(iVar0, iLocal_2916[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0xBAFED2F6486F771A(iVar0, 8192, true);
			if (bLocal_108)
			{
				unk_0xBAFED2F6486F771A(iVar0, 65536, true);
				unk_0xBAFED2F6486F771A(iVar0, 2, false);
			}
			unk_0xAFF39FB306F8E232(iVar0, 6, false);
			unk_0x06736587AE5BE33B(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_324(iVar0);
			func_201(iLocal_2916[iParam0]);
		}
	}
	else
	{
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0xEBA53F35D0085654(&iVar0);
		}
		if (unk_0xC844350D5D58C99A(iLocal_2916[iParam0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_2916[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_1294[iParam0] > 0)
		{
			unk_0xDB8844D4B7C60440(iLocal_1294[iParam0], &cLocal_2668);
		}
	}
	iLocal_1470[iParam0] = 99;
}

void func_334(int iParam0, float fParam1, float fParam2)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar10 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam0))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			vVar1 = { unk_0xAA8A22FF67DFFDCD(iVar0, fParam1) };
			vVar4 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			vVar7 = { vVar4 - vVar1 };
			fVar13 = vmag(vVar7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_326(vVar1, vVar10, fVar13);
		}
	}
}

void func_335(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (vdist2(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > (fParam1 * fParam1))
				{
					unk_0xC83E7A5E408DF68C(1);
				}
				else
				{
					unk_0xC83E7A5E408DF68C(0);
				}
			}
		}
	}
}

void func_336(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (vdist2(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > (fParam1 * fParam1))
				{
					unk_0xD60411959D5D930B(1f);
				}
				else
				{
					unk_0xD60411959D5D930B(0f);
				}
			}
		}
	}
}

void func_337(int iParam0, float fParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && unk_0x20D6474D5F4B9FC6(iParam0))
	{
		fVar1 = (fLocal_1289 + 2000f);
		fVar2 = (fLocal_1290 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			if (fVar1 <= unk_0x9FC30AC87F925DDF(iVar0))
			{
				if (iLocal_1956 == 0)
				{
					vLocal_2656 = { unk_0xAA8A22FF67DFFDCD(iVar0, fLocal_1289) };
					iLocal_1956++;
				}
				else if (iLocal_1956 == 1)
				{
					vLocal_2659 = { unk_0xAA8A22FF67DFFDCD(iVar0, fVar1) };
					iLocal_1956++;
				}
				else if (!bLocal_106)
				{
					if (vLocal_2656.x > vLocal_2659.x)
					{
						fVar3 = vLocal_2656.x;
						vLocal_2656.x = vLocal_2659.x;
						vLocal_2659.x = fVar3;
					}
					if (vLocal_2656.y > vLocal_2659.y)
					{
						fVar3 = vLocal_2656.y;
						vLocal_2656.y = vLocal_2659.y;
						vLocal_2659.y = fVar3;
					}
					if (vLocal_2656.z > vLocal_2659.z)
					{
						fVar3 = vLocal_2656.z;
						vLocal_2656.z = vLocal_2659.z;
						vLocal_2659.z = fVar3;
					}
					vLocal_2656 = { vLocal_2656 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					vLocal_2659 = { vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					unk_0xF858EFDE1871B5F2(vLocal_2656, vLocal_2659, false, 0);
					fLocal_1289 = fVar1;
					iLocal_1956 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			if (iLocal_1959 == 0)
			{
				vLocal_2662 = { unk_0xAA8A22FF67DFFDCD(iVar0, fLocal_1290) };
				iLocal_1959++;
			}
			else if (iLocal_1959 == 1)
			{
				vLocal_2665 = { unk_0xAA8A22FF67DFFDCD(iVar0, fVar2) };
				iLocal_1959++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (vLocal_2662.x > vLocal_2665.x)
				{
					fVar3 = vLocal_2662.x;
					vLocal_2662.x = vLocal_2665.x;
					vLocal_2665.x = fVar3;
				}
				if (vLocal_2662.y > vLocal_2665.y)
				{
					fVar3 = vLocal_2662.y;
					vLocal_2662.y = vLocal_2665.y;
					vLocal_2665.y = fVar3;
				}
				if (vLocal_2662.z > vLocal_2665.z)
				{
					fVar3 = vLocal_2662.z;
					vLocal_2662.z = vLocal_2665.z;
					vLocal_2665.z = fVar3;
				}
				vLocal_2662 = { vLocal_2662 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				vLocal_2665 = { vLocal_2665 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				unk_0xF5894FEB702E7E76(vLocal_2662, vLocal_2665, true);
				fLocal_1290 = fVar2;
				iLocal_1959 = 0;
			}
		}
	}
}

int func_338(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
		vVar6 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
		vVar12 = { vVar6 - vVar3 };
	}
	vVar9 = { vVar3 - vVar0 };
	vVar9.z = 0f;
	vVar12.z = 0f;
	fVar15 = func_320(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_339()
{
	unk_0xE342F209E49C5314(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	unk_0xEF7906595D9044B8(0);
	unk_0xD980FF3526C8CB9E(0);
	unk_0xE9B51BC60A3B47D9(0);
	unk_0xD60411959D5D930B(0f);
	unk_0xC83E7A5E408DF68C(0);
	unk_0xFF42993F8A095C58(3);
}

void func_340(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1284;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0,1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0,4f) + fParam5);
	fVar2 = func_343(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (func_338(iParam1, iParam0))
		{
			if (unk_0x405E212DDE472467(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_342(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_341(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x6117725E0134737F();
		fVar8 = ((fLocal_1291 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x6117725E0134737F();
		fVar8 = ((fLocal_1292 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x405E212DDE472467(iParam1, 0))
			{
				iVar9 = unk_0x6937EA2286828455(iParam1, 0);
				if (!unk_0x437347B10A200C4B(iVar9, 0))
				{
					iVar10 = unk_0x134B62B726CEC8E6(iVar9);
					if (unk_0x8E39AC3C76C8AA58(iVar10) || unk_0x7D8B2A8F9EA82DB7(iVar10))
					{
						if (unk_0xDF1306B443CD3D15(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1282 - fLocal_1283));
							fVar1 = (fVar1 + fLocal_1283);
							fLocal_1281 = fVar1;
							if (fLocal_1281 < fLocal_1283)
							{
								fLocal_1281 = fLocal_1283;
							}
							if (fLocal_1281 > fLocal_1282)
							{
								fLocal_1281 = fLocal_1282;
							}
							unk_0x85089606511D395B(unk_0xD803B885F5E47A62(), fLocal_1281);
						}
					}
				}
			}
		}
	}
}

float func_341(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		Var0 = unk_0x5045843AAD2F36F7(iParam0);
		Var0.f_1 = unk_0x580A699989F7AD54(iParam0);
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
		if (unk_0x405E212DDE472467(iParam1, 0))
		{
			iVar13 = unk_0x6937EA2286828455(iParam1, 0);
			vVar9.x = unk_0x5045843AAD2F36F7(iVar13);
			vVar9.y = unk_0x580A699989F7AD54(iVar13);
		}
		else
		{
			vVar6 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
			vVar9 = { vVar6 - vVar3 };
		}
	}
	fVar12 = unk_0x07AB02F3C4AE2B04(Var0, Var0.f_1, vVar9.x, vVar9.y);
	return fVar12;
}

float func_342(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	vVar6 = { vVar3 - vVar0 };
	vVar6.z = 0f;
	fVar9 = vmag(vVar6);
	return fVar9;
}

float func_343(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		Var0 = unk_0x5045843AAD2F36F7(iParam0);
		Var0.f_1 = unk_0x580A699989F7AD54(iParam0);
		vVar6 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar9 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	vVar3 = { vVar9 - vVar6 };
	fVar12 = unk_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, Var0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	vVar3.z = 0f;
	return (vmag(vVar3) * sin(fVar12));
}

int func_344()
{
	if (unk_0xC844350D5D58C99A(iLocal_3258))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
		{
			if (!unk_0x0A059E0DB9253280(iLocal_3258))
			{
				iLocal_3403 = 1;
			}
			else
			{
				iLocal_3403 = 0;
			}
		}
		else
		{
			iLocal_3403 = 1;
		}
	}
	else
	{
		iLocal_3403 = 1;
	}
	iLocal_3190 = 0;
	while (iLocal_3190 <= 24)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[iLocal_3190]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[iLocal_3190], 0))
			{
				if (!unk_0x0A059E0DB9253280(iLocal_3121[iLocal_3190]))
				{
					iLocal_3404[iLocal_3190] = 1;
				}
				else
				{
					iLocal_3404[iLocal_3190] = 0;
				}
			}
			else
			{
				iLocal_3404[iLocal_3190] = 1;
			}
		}
		else
		{
			iLocal_3404[iLocal_3190] = 1;
		}
		iLocal_3190++;
	}
	if (((((((((((((((((((((((((iLocal_3403 == 1 && iLocal_3404[0] == 1) && iLocal_3404[1] == 1) && iLocal_3404[2] == 1) && iLocal_3404[3] == 1) && iLocal_3404[4] == 1) && iLocal_3404[5] == 1) && iLocal_3404[6] == 1) && iLocal_3404[7] == 1) && iLocal_3404[8] == 1) && iLocal_3404[9] == 1) && iLocal_3404[10] == 1) && iLocal_3404[11] == 1) && iLocal_3404[12] == 1) && iLocal_3404[13] == 1) && iLocal_3404[14] == 1) && iLocal_3404[15] == 1) && iLocal_3404[16] == 1) && iLocal_3404[17] == 1) && iLocal_3404[18] == 1) && iLocal_3404[19] == 1) && iLocal_3404[20] == 1) && iLocal_3404[21] == 1) && iLocal_3404[22] == 1) && iLocal_3404[23] == 1) && iLocal_3404[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_345()
{
	if (unk_0xC844350D5D58C99A(iLocal_3121[4]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3121[4], 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3121[4]))
			{
				vLocal_3303 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				vVar3 = { unk_0x68F4C0EC296D3901(iLocal_3121[4], true) };
				if (vLocal_3303.x < (vVar3.x - 10f) && !unk_0x0A059E0DB9253280(iLocal_3121[4]))
				{
					unk_0xC55F2A0377488064(iLocal_3121[4]);
					unk_0x046C362CF15F1935(&(iLocal_3121[4]));
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[3]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3121[3], 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3121[3]))
			{
				vLocal_3303 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_3121[3], true) };
				if (vLocal_3303.x < (vVar0.x - 10f) && !unk_0x0A059E0DB9253280(iLocal_3121[3]))
				{
					unk_0xC55F2A0377488064(iLocal_3121[3]);
					unk_0x046C362CF15F1935(&(iLocal_3121[3]));
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[21]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3121[21], 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_3121[21]))
			{
				vLocal_3303 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				vVar6 = { unk_0x68F4C0EC296D3901(iLocal_3121[21], true) };
				if (vLocal_3303.x < (vVar6.x - 10f) && !unk_0x0A059E0DB9253280(iLocal_3121[21]))
				{
					unk_0xC55F2A0377488064(iLocal_3121[21]);
					unk_0x046C362CF15F1935(&(iLocal_3121[21]));
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[0]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3121[0], 0))
		{
			if (unk_0xC844350D5D58C99A(iLocal_3258))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_3258) > 50000f && !unk_0x0A059E0DB9253280(iLocal_3121[0]))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3121[0]))
							{
								unk_0xC55F2A0377488064(iLocal_3121[0]);
							}
							unk_0x046C362CF15F1935(&(iLocal_3121[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3264))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3264, 0))
		{
			if (unk_0xC844350D5D58C99A(iLocal_3258))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_3258) > 90000f && !unk_0x0A059E0DB9253280(iLocal_3264))
						{
							unk_0xF7E25143642732EA(iLocal_3755[0], 0);
							unk_0xF7E25143642732EA(iLocal_3755[1], 0);
							unk_0xF7E25143642732EA(iLocal_3755[2], 0);
							if (unk_0xC844350D5D58C99A(iLocal_3223[0]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_3223[0]));
							}
							if (unk_0xC844350D5D58C99A(iLocal_3223[1]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_3223[1]));
							}
							if (unk_0xC844350D5D58C99A(iLocal_3223[2]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_3223[2]));
							}
							if (unk_0xC844350D5D58C99A(iLocal_3223[3]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_3223[3]));
							}
							unk_0x046C362CF15F1935(&iLocal_3264);
							unk_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_346(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	fVar2 = (fParam2 * fParam3);
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((unk_0xC844350D5D58C99A(iParam1) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xE2F1E99DD161A861(iParam1))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam1), 0))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
			else if (unk_0xEC560E589DF8370E(iParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam1)))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_347()
{
	if (unk_0xC844350D5D58C99A(iLocal_3121[2]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3121[2], 0))
		{
			if (unk_0xC844350D5D58C99A(iLocal_3258))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_3258) < 50530f)
						{
							if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_3121[2]))
							{
								unk_0x56FDC9ADE35F7DB0(iLocal_3121[2], true, true, 0);
							}
						}
						else if (unk_0x2F6DBDA9ACD7D3AB(iLocal_3121[2]))
						{
							unk_0x56FDC9ADE35F7DB0(iLocal_3121[2], false, false, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3121[5]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3121[5], 0))
		{
			if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_3121[5]))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_3121[5], true, true, 0);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3260[0]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3260[0], 0))
		{
			if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_3260[0]))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_3260[0], true, true, 0);
			}
			if (unk_0xBBA8A868118C90ED(iLocal_3260[0], -1, 0))
			{
				if (!unk_0xC844350D5D58C99A(iLocal_3254[0]))
				{
					unk_0x523BCC9DC80CD82F(411102470);
					if (unk_0xB87F6CF6E5628C67(411102470))
					{
						iLocal_3254[0] = unk_0x852A19533F896693(iLocal_3260[0], 26, 411102470, -1, 1, true);
						unk_0x71199B01895C6202(411102470);
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3260[1]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_3260[1], 0))
		{
			if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_3260[1]))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_3260[1], true, true, 0);
			}
			if (unk_0xBBA8A868118C90ED(iLocal_3260[1], -1, 0))
			{
				if (!unk_0xC844350D5D58C99A(iLocal_3254[1]))
				{
					unk_0x523BCC9DC80CD82F(411102470);
					if (unk_0xB87F6CF6E5628C67(411102470))
					{
						iLocal_3254[1] = unk_0x852A19533F896693(iLocal_3260[1], 26, 411102470, -1, 1, true);
						unk_0x71199B01895C6202(411102470);
					}
				}
			}
		}
	}
}

void func_348()
{
	if (iLocal_3181 == 0)
	{
		unk_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Cop_Cars", false, -1);
		unk_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Plane_Explosion", false, -1);
		unk_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Tanker_Explosion", false, -1);
		unk_0xAE317D00A5A55DF6("SCRIPT\TV_Monitors", false, -1);
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = unk_0xD68EA767274B7444();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = unk_0xD68EA767274B7444();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = unk_0xD68EA767274B7444();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = unk_0xD68EA767274B7444();
			iLocal_3395 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3217 = unk_0xD68EA767274B7444();
			iLocal_3396 = 1;
		}
		if (iLocal_3391 == 0)
		{
			iLocal_3218 = unk_0xD68EA767274B7444();
			iLocal_3391 = 1;
		}
		if (iLocal_3397 == 0)
		{
			iLocal_3219 = unk_0xD68EA767274B7444();
			iLocal_3397 = 1;
		}
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		if (!unk_0x9F4FE516EAACCFC5(iLocal_3289))
		{
			iLocal_3289 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
			unk_0x5818C8D5303DCCF8(iLocal_3289, 40f);
		}
		iLocal_3343 = 0;
		iLocal_3337 = 0;
		iLocal_3349 = 0;
		iLocal_3333 = 0;
		iLocal_3328 = 0;
		iLocal_3334 = 0;
		iLocal_3327 = 0;
		iLocal_3363 = 0;
		iLocal_3365[0] = 0;
		iLocal_3369[0] = 0;
		iLocal_3365[1] = 0;
		iLocal_3369[1] = 0;
		iLocal_3365[2] = 0;
		iLocal_3372 = 0;
		iLocal_3373 = 0;
		iLocal_3331 = 0;
		iLocal_3332 = 0;
		iLocal_3330 = 0;
		iLocal_3377 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3383 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3390 = 0;
		iLocal_3398 = 0;
		iLocal_3399 = 0;
		iLocal_3401 = 0;
		iLocal_3402 = 0;
		iLocal_3434 = 0;
		iLocal_3435 = 0;
		iLocal_3551 = 0;
		iLocal_3351 = 1;
		iLocal_3352 = 1;
		iLocal_3360 = 1;
		iLocal_3440 = 0;
		iLocal_3441 = 0;
		iLocal_3466 = 0;
		iLocal_3468 = 0;
		iLocal_3475 = 0;
		iLocal_3476 = 0;
		iLocal_3478 = 0;
		iLocal_3480[0] = 0;
		iLocal_3480[1] = 0;
		iLocal_3483[0] = 0;
		iLocal_3483[1] = 0;
		iLocal_3486 = 0;
		iLocal_3487 = 0;
		iLocal_3489 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3510 = 0;
		iLocal_3540 = 0;
		iLocal_3541 = 0;
		iLocal_3552 = 0;
		iLocal_3185 = 0;
		iLocal_3198 = 0;
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3543[iLocal_3189] = 0;
			iLocal_3547[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3571[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 6)
		{
			iLocal_3490[iLocal_3189] = 0;
			iLocal_3498[iLocal_3189] = 0;
			iLocal_3189++;
		}
		unk_0x9E5E60D8C63FD9D1();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_285();
		iLocal_3184 = unk_0x1D14FD94FCD601B4();
		unk_0x536F1BE96C726C4B(-823,71f, -2548,2f, 13,75f, 20f, 1, 0, 0, false);
		unk_0x10F3BFFADF2CE3DA(-833,86f, -2564,17f, 13,43f, -814,37f, -2521,04f, 12,94f);
		unk_0x17E8C6920A1E386F(-833,86f, -2564,17f, 13,43f, -814,37f, -2521,04f, 12,94f, false, 0);
		unk_0xF858EFDE1871B5F2(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, 1);
		func_126(2, 1);
		func_350("BB_Chase", 45, 0, 1);
		unk_0x34D79252800B23FF(3);
		func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_21(iLocal_3259, -1, 1);
		}
		iLocal_3182 = 0;
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		func_349();
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_3271))
		{
			iLocal_3271 = unk_0x122AAB0B1D6F55AD(-344943009, 0f, 0f, 1f, 0f, true, true, false);
		}
		while (!unk_0x3DDA6C6A285628E4(45, "BB_Chase"))
		{
			wait(0);
		}
		if (unk_0x757EF87A33649210())
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3259, 0))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_3259, true, true, 0);
				unk_0x1AEF7184B203A58D(iLocal_3259, 30f);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_3258))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				unk_0x4D3C3C0B0DE2663E(iLocal_3258, 45, "BB_Chase", 1);
				settimerb(0);
				func_268();
				unk_0xB975E4541DDAB1F5(2);
				if (unk_0xC844350D5D58C99A(iLocal_3259))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_3259, 0))
					{
						unk_0x046C362CF15F1935(&iLocal_3259);
					}
				}
				if (!unk_0x0F1CCD77290EE12F())
				{
					unk_0x82E51BCA72537B6C(800);
				}
				iLocal_3181 = 0;
				iLocal_3180 = 4;
			}
		}
	}
}

void func_349()
{
	vLocal_2489[0] = { -583,6427f, -2157,497f, 5,7947f };
	fLocal_1209[0] = -0,0003f;
	fLocal_1225[0] = -0,0085f;
	fLocal_1241[0] = 0,9998f;
	fLocal_1257[0] = 0,0158f;
	iLocal_2861[0] = -344943009;
	vLocal_1963[4] = { -827,2035f, -2575,697f, 13,5688f };
	fLocal_109[4] = 0,0004f;
	fLocal_285[4] = -0,0003f;
	fLocal_461[4] = -0,2526f;
	fLocal_637[4] = 0,9676f;
	iLocal_1294[4] = 50;
	fLocal_813[4] = 20310f;
	iLocal_2685[4] = -2124201592;
	vLocal_2489[1] = { -1033,717f, -2949,014f, 13,4922f };
	fLocal_1209[1] = 0,0032f;
	fLocal_1225[1] = -0,0003f;
	fLocal_1241[1] = -0,0255f;
	fLocal_1257[1] = 0,9997f;
	iLocal_2861[1] = 2072156101;
	vLocal_2535[0] = { -1178,365f, -2845,981f, 13,9027f };
	fLocal_993[0] = 0,0018f;
	fLocal_1029[0] = 0,0123f;
	fLocal_1065[0] = 0,9644f;
	fLocal_1101[0] = 0,2642f;
	iLocal_1822[0] = 9;
	fLocal_1137[0] = 22357f;
	fLocal_1173[0] = 1f;
	iLocal_2877[0] = 788747387;
	vLocal_2535[1] = { -1376,197f, -2755,167f, 14,0646f };
	fLocal_993[1] = -0,0012f;
	fLocal_1029[1] = 0,0013f;
	fLocal_1065[1] = 0,8439f;
	fLocal_1101[1] = -0,5365f;
	iLocal_1822[1] = 10;
	fLocal_1137[1] = 27135f;
	fLocal_1173[1] = 1f;
	iLocal_2877[1] = 569305213;
	vLocal_2535[2] = { -1342,543f, -2688,482f, 22,8254f };
	fLocal_993[2] = 0,0057f;
	fLocal_1029[2] = -0,0014f;
	fLocal_1065[2] = -0,2451f;
	fLocal_1101[2] = 0,9695f;
	iLocal_1822[2] = 11;
	fLocal_1137[2] = 35135f;
	fLocal_1173[2] = 1f;
	iLocal_2877[2] = 1058115860;
	vLocal_2535[3] = { -898,3506f, -2698,965f, 20,159f };
	fLocal_993[3] = 0,0065f;
	fLocal_1029[3] = 0,0191f;
	fLocal_1065[3] = -0,2629f;
	fLocal_1101[3] = 0,9646f;
	iLocal_1822[3] = 3;
	fLocal_1137[3] = 6764f;
	fLocal_1173[3] = 1f;
	iLocal_2877[3] = -713569950;
	vLocal_2535[4] = { -576,655f, -2231,905f, 5,2834f };
	fLocal_993[4] = 0,0043f;
	fLocal_1029[4] = 0,0331f;
	fLocal_1065[4] = -0,3125f;
	fLocal_1101[4] = 0,9493f;
	iLocal_1822[4] = 4;
	fLocal_1137[4] = 2102f;
	fLocal_1173[4] = 1f;
	iLocal_2877[4] = -16948145;
	vLocal_2535[5] = { -994,9925f, -3154,125f, 23,1145f };
	fLocal_993[5] = 0,0056f;
	fLocal_1029[5] = 0,0029f;
	fLocal_1065[5] = 0,4915f;
	fLocal_1101[5] = 0,8708f;
	iLocal_1822[5] = 21;
	fLocal_1137[5] = 92500f;
	fLocal_1173[5] = 1f;
	iLocal_2877[5] = 1058115860;
	vLocal_2535[7] = { -553,3315f, -2073,951f, 6,8909f };
	fLocal_993[7] = 0,0072f;
	fLocal_1029[7] = 0,0176f;
	fLocal_1065[7] = 0,9739f;
	fLocal_1101[7] = -0,2263f;
	iLocal_1822[7] = 54;
	fLocal_1137[7] = 0f;
	fLocal_1173[7] = 1f;
	iLocal_2877[7] = 1912215274;
	vLocal_2535[8] = { -561,7264f, -2076,761f, 6,7664f };
	fLocal_993[8] = -0,027f;
	fLocal_1029[8] = 0,0016f;
	fLocal_1065[8] = 0,9169f;
	fLocal_1101[8] = -0,3981f;
	iLocal_1822[8] = 108;
	fLocal_1137[8] = 150f;
	fLocal_1173[8] = 1f;
	iLocal_2877[8] = 1912215274;
	vLocal_2535[11] = { -1563,918f, -2745,409f, 13,5643f };
	fLocal_993[11] = -0,0022f;
	fLocal_1029[11] = -0,0019f;
	fLocal_1065[11] = 0,928f;
	fLocal_1101[11] = -0,3726f;
	iLocal_1822[11] = 111;
	fLocal_1137[11] = 36000f;
	fLocal_1173[11] = 1f;
	iLocal_2877[11] = 1912215274;
	vLocal_2535[12] = { -1026,024f, -2336,396f, 13,5678f };
	fLocal_993[12] = -0,0083f;
	fLocal_1029[12] = -0,0054f;
	fLocal_1065[12] = 0,55f;
	fLocal_1101[12] = 0,8351f;
	iLocal_1822[12] = 112;
	fLocal_1137[12] = 60000f;
	fLocal_1173[12] = 1f;
	iLocal_2877[12] = 1912215274;
	vLocal_2535[13] = { -1013,316f, -2340,457f, 13,5678f };
	fLocal_993[13] = -0,0086f;
	fLocal_1029[13] = -0,005f;
	fLocal_1065[13] = 0,5052f;
	fLocal_1101[13] = 0,8629f;
	iLocal_1822[13] = 113;
	fLocal_1137[13] = 60000f;
	fLocal_1173[13] = 1f;
	iLocal_2877[13] = 1912215274;
	vLocal_2535[14] = { -1221,049f, -2731,169f, 13,5681f };
	fLocal_993[14] = -0,0083f;
	fLocal_1029[14] = -0,0057f;
	fLocal_1065[14] = 0,6469f;
	fLocal_1101[14] = 0,7625f;
	iLocal_1822[14] = 61;
	fLocal_1137[14] = 80000f;
	fLocal_1173[14] = 1f;
	iLocal_2877[14] = 1912215274;
	vLocal_2535[15] = { -1227,203f, -2735,872f, 13,568f };
	fLocal_993[15] = -0,0041f;
	fLocal_1029[15] = -0,0091f;
	fLocal_1065[15] = 0,9133f;
	fLocal_1101[15] = 0,4072f;
	iLocal_1822[15] = 62;
	fLocal_1137[15] = 80000f;
	fLocal_1173[15] = 1f;
	iLocal_2877[15] = 1912215274;
	vLocal_2535[19] = { -1240,048f, -2203,457f, 14,0347f };
	fLocal_993[19] = 0,0002f;
	fLocal_1029[19] = 0,0018f;
	fLocal_1065[19] = 0,9611f;
	fLocal_1101[19] = -0,2763f;
	iLocal_1822[19] = 66;
	fLocal_1137[19] = 55125f;
	fLocal_1173[19] = 1f;
	iLocal_2877[19] = 1938952078;
	vLocal_2535[20] = { -438,0192f, -2060,751f, 73,6354f };
	fLocal_993[20] = -0,0005f;
	fLocal_1029[20] = 0,0018f;
	fLocal_1065[20] = 0,9559f;
	fLocal_1101[20] = 0,2938f;
	iLocal_1822[20] = 67;
	fLocal_1137[20] = 0f;
	fLocal_1173[20] = 1f;
	iLocal_2877[20] = -1660661558;
	vLocal_2535[21] = { -546,8047f, -2187,925f, 5,8819f };
	fLocal_993[21] = -0,0252f;
	fLocal_1029[21] = -0,0034f;
	fLocal_1065[21] = 0,9369f;
	fLocal_1101[21] = 0,3487f;
	iLocal_1822[21] = 5;
	fLocal_1137[21] = 3834f;
	fLocal_1173[21] = 1f;
	iLocal_2877[21] = -344943009;
	vLocal_2535[22] = { -1001,674f, -2947,732f, 13,3947f };
	fLocal_993[22] = 0,001f;
	fLocal_1029[22] = -0,0004f;
	fLocal_1065[22] = 0,8616f;
	fLocal_1101[22] = 0,5075f;
	iLocal_1822[22] = 6;
	fLocal_1137[22] = 20176f;
	fLocal_1173[22] = 1f;
	iLocal_2877[22] = 1560980623;
	vLocal_2535[23] = { -1249,588f, -2525,9f, 13,3942f };
	fLocal_993[23] = 0,001f;
	fLocal_1029[23] = -0,0001f;
	fLocal_1065[23] = 0,9749f;
	fLocal_1101[23] = -0,2228f;
	iLocal_1822[23] = 7;
	fLocal_1137[23] = 48538f;
	fLocal_1173[23] = 1f;
	iLocal_2877[23] = 1560980623;
	vLocal_2535[24] = { -1362,538f, -2625,609f, 13,3895f };
	fLocal_993[24] = -0,0001f;
	fLocal_1029[24] = 0,0018f;
	fLocal_1065[24] = 0,5344f;
	fLocal_1101[24] = 0,8452f;
	iLocal_1822[24] = 8;
	fLocal_1137[24] = 75112f;
	fLocal_1173[24] = 1f;
	iLocal_2877[24] = 1560980623;
}

void func_350(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	StringCopy(&cLocal_2668, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	iLocal_1949 = iParam1;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1952 = 0;
	iLocal_1956 = 0;
	iLocal_1959 = 0;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	iLocal_1960 = 0;
	iLocal_1961 = 0;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1275 = 0f;
	iLocal_91 = 0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		vLocal_2644.x = (vVar0.x - 100f);
		vLocal_2644.y = (vVar0.y - 100f);
		vLocal_2644.z = (vVar0.z - 100f);
		vLocal_2647.x = (vVar0.x + 100f);
		vLocal_2647.y = (vVar0.y + 100f);
		vLocal_2647.z = (vVar0.z + 100f);
		unk_0xF858EFDE1871B5F2(vLocal_2644, vLocal_2647, false, 0);
		if (bParam2)
		{
			unk_0x28F5E4DA506AC0CA(vVar0, 500f, 0, 0, 0, 0, false, 0);
		}
	}
	unk_0xF63400DBE3303D26("rgh_traffic", &iLocal_2684);
	func_339();
	if (bParam3)
	{
		func_190(1);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0);
		unk_0x060F249A9A3E3F4E(false);
	}
	func_195();
}

void func_351()
{
	if (iLocal_3181 == 0)
	{
		unk_0x8B4C4CA774181102(0f, 14f, 4);
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		iLocal_3359 = 0;
		iLocal_3360 = 0;
		iLocal_3362 = 0;
		iLocal_3364 = 0;
		iLocal_3379 = 0;
		iLocal_3327 = 0;
		iLocal_3328 = 0;
		iLocal_3331 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		iLocal_3335 = 0;
		iLocal_3336 = 0;
		iLocal_3337 = 0;
		iLocal_3338 = 0;
		iLocal_3343 = 0;
		iLocal_3352 = 0;
		iLocal_3350 = 0;
		iLocal_3439 = 0;
		iLocal_3442 = 0;
		iLocal_3523 = 0;
		iLocal_3378 = 0;
		iLocal_3351 = 1;
		iLocal_3185 = 0;
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iLocal_3361 = 1;
		}
		else
		{
			iLocal_3361 = 0;
		}
		func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		unk_0x5C2EBB66AD2EA5FF(1);
		unk_0xF858EFDE1871B5F2(-617f, -2274f, 0f, -406,01f, -2044f, 15f, false, 1);
		iLocal_3188 = unk_0x1C0640BA9A7327B3();
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_21(0, -1, 1);
			unk_0x046C362CF15F1935(&iLocal_3259);
			unk_0x046C362CF15F1935(&iLocal_3276);
			unk_0x046C362CF15F1935(&iLocal_3277);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		if (!unk_0xE4EDC4B0E92C078B(iLocal_3287))
		{
			iLocal_3287 = func_356(vLocal_3300, 0);
		}
		unk_0xC92DB9682A650680("TRV4_GAMEPLAY_START");
		vLocal_3318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3350 == 0 && iLocal_3364 == 1)
		{
			if (!func_262() || !unk_0x04E6B3EAA8742BFA())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3350 = 1;
			}
		}
		if (iLocal_3378 == 0 && !func_355())
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_3300, true) < 800f)
			{
				iLocal_3187 = unk_0x09AC81E49EA267F7(0, 2);
				if (iLocal_3187 == 0)
				{
					unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x8B4C4CA774181102(0f, 6f, 3);
					iLocal_3378 = 1;
				}
				if (iLocal_3187 == 1)
				{
					unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x8B4C4CA774181102(0f, 6f, 3);
					iLocal_3378 = 1;
				}
			}
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_3300, true) < 600f)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_3258))
			{
				unk_0x523BCC9DC80CD82F(330661258);
				if (unk_0xB87F6CF6E5628C67(330661258))
				{
					iLocal_3258 = unk_0x122AAB0B1D6F55AD(330661258, -428,0226f, -2153,558f, 9,2992f, 90,9098f, true, true, false);
					unk_0xAA6B3A4292417750(iLocal_3258, false, true, true, true, false, false, 0, false);
					unk_0xC002508A277213DE(iLocal_3258, 27, 27);
					unk_0x71199B01895C6202(330661258);
					unk_0x2E1E5367A885F9B7(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3222))
			{
				unk_0x523BCC9DC80CD82F(-1358701087);
				if (unk_0xB87F6CF6E5628C67(-1358701087))
				{
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							iLocal_3222 = unk_0x852A19533F896693(iLocal_3258, 26, -1358701087, -1, 1, true);
							unk_0xE121AE1BBF90E186(iLocal_3222, true);
							unk_0x25C5402CC10F76CD(iLocal_3222, false);
							unk_0x71199B01895C6202(330661258);
							unk_0x71199B01895C6202(-1358701087);
							unk_0x6DF7BF67E86AAE86(iLocal_3222, 1862763509);
							iLocal_3360 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xC844350D5D58C99A(iLocal_3222))
			{
				unk_0xEBA53F35D0085654(&iLocal_3222);
			}
			if (unk_0xC844350D5D58C99A(iLocal_3258))
			{
				unk_0xA954465BA6FDEFE2(&iLocal_3258);
			}
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_3300, true) < 500f)
		{
			if (iLocal_3362 == 0)
			{
				iLocal_3293 = unk_0xB01F55A0FD1CFD49("BREAKING_NEWS");
				unk_0x523BCC9DC80CD82F(1912215274);
				unk_0x523BCC9DC80CD82F(-1660661558);
				unk_0x523BCC9DC80CD82F(-16948145);
				unk_0x523BCC9DC80CD82F(-344943009);
				unk_0x36187931D29E5BBE(45, "BB_Chase");
				unk_0x36187931D29E5BBE(35, "BB_Chase");
				unk_0x36187931D29E5BBE(2, "BB_Chase");
				unk_0x36187931D29E5BBE(54, "BB_Chase");
				unk_0x36187931D29E5BBE(55, "BB_Chase");
				unk_0x36187931D29E5BBE(67, "BB_Chase");
				func_187(1, "BB_Chase");
				unk_0x13896FDECC859926("TRV4_CHASE");
				iLocal_3362 = 1;
			}
		}
		else if (iLocal_3362 == 1)
		{
			unk_0x71199B01895C6202(1912215274);
			unk_0x71199B01895C6202(-1660661558);
			unk_0x71199B01895C6202(-16948145);
			unk_0x71199B01895C6202(-344943009);
			unk_0xDB8844D4B7C60440(45, "BB_Chase");
			unk_0xDB8844D4B7C60440(35, "BB_Chase");
			unk_0xDB8844D4B7C60440(2, "BB_Chase");
			unk_0xDB8844D4B7C60440(54, "BB_Chase");
			unk_0xDB8844D4B7C60440(55, "BB_Chase");
			unk_0xDB8844D4B7C60440(67, "BB_Chase");
			func_354(1, "BB_Chase");
			unk_0x38DC636F3D2D2FA8("TRV4_CHASE");
			iLocal_3362 = 0;
		}
		if (iLocal_3379 == 0)
		{
			if (unk_0x1C0640BA9A7327B3() > (iLocal_3188 + 135000))
			{
				unk_0x790015DC92C918E2();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3188 = unk_0x1C0640BA9A7327B3();
				iLocal_3379 = 1;
			}
		}
		if (iLocal_3379 == 1)
		{
			if (unk_0x1C0640BA9A7327B3() > (iLocal_3188 + 135000))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0x8BC9595FD2792B5D("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3439 == 0)
			{
				unk_0xC92DB9682A650680("TRV4_CAR_ENTERED");
				iLocal_3439 = 1;
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3259))
			{
				iLocal_3259 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				unk_0xAA6B3A4292417750(iLocal_3259, false, true, false, false, false, false, 0, false);
				unk_0x2F625BED8BF7F26A(iLocal_3259);
				unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
			}
		}
		else if (unk_0xC844350D5D58C99A(iLocal_3259))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3259, 0))
			{
				if (iLocal_3361 == 0)
				{
					unk_0xAA6B3A4292417750(iLocal_3259, false, false, false, false, false, false, 0, false);
					iLocal_3361 = 1;
				}
				if (iLocal_3353 == 1)
				{
					unk_0x7AA3AFA47C4179D1(iLocal_3259);
					iLocal_3353 = 0;
				}
				if (unk_0x9C77D2D0559097F0(iLocal_3259, 1))
				{
					unk_0x046C362CF15F1935(&iLocal_3259);
				}
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (iLocal_3442 == 0)
			{
				unk_0xB7EA504773B19E4E(156, 1, 0);
				unk_0x69028CD9C862B137(-244f, -1842,74f, 28,48f);
				unk_0x69028CD9C862B137(-1,5f, -2014,4f, 11,5f);
				unk_0x69028CD9C862B137(-498,7f, -2136,5f, 8,4f);
				unk_0xB8C3D2D6C4AAEF18(1);
				iLocal_3442 = 1;
			}
		}
		else if (iLocal_3442 == 1)
		{
			unk_0xB8C3D2D6C4AAEF18(0);
			iLocal_3442 = 0;
		}
		if ((iLocal_3362 == 1 && unk_0xC844350D5D58C99A(iLocal_3258)) && unk_0xC844350D5D58C99A(iLocal_3222))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x54648B774DB42A3A(iLocal_3258, func_353(unk_0x16F2683693E537C9()), 0))
				{
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_3258))
				{
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_3258, true), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_3359 = 0;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -577f, -2051,5f, 7f, 84f, 87,5f, 15f, false, true, 0))
				{
					iLocal_3359 = 1;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -703,5f, -1969,5f, 10f, 53,5f, 62,5f, 10f, false, true, 0))
				{
					unk_0x053C926E5E341906();
					unk_0x5C2EBB66AD2EA5FF(0);
					iLocal_3359 = 1;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
		}
	}
}

void func_352()
{
	while (((!unk_0xB87F6CF6E5628C67(1912215274) || !unk_0xB87F6CF6E5628C67(-1660661558)) || !unk_0xB87F6CF6E5628C67(-16948145)) || !unk_0xB87F6CF6E5628C67(-344943009))
	{
		wait(0);
	}
	while (((((!unk_0x3DDA6C6A285628E4(45, "BB_Chase") || !unk_0x3DDA6C6A285628E4(35, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(2, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(54, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(55, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(67, "BB_Chase"))
	{
		wait(0);
	}
}

var func_353(int iParam0)
{
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

void func_354(int iParam0, char* sParam1)
{
	unk_0xDB8844D4B7C60440(iParam0, sParam1);
}

int func_355()
{
	if (Global_20805 == 4)
	{
		if (unk_0x1EE04CEA36EF313B())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_356(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_357()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3338 = 1;
		iLocal_3467 = 0;
		iLocal_3488 = 0;
		iLocal_3506 = 0;
		while (iLocal_3338 == 1)
		{
			unk_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0);
			switch (iLocal_3183)
			{
				case 0:
					unk_0xAE1670DD12E839C3("sol_3_int", 8);
					if (func_401())
					{
						while (!func_373(61, &uLocal_3743, 0, 1, 0, 0, 0))
						{
							wait(0);
						}
						iLocal_3438 = 0;
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
						func_220(1, 1, 1, 0, 0, 0);
						unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "Michael", 0, 0, 0);
						if (unk_0xC844350D5D58C99A(Global_95241[0]))
						{
							if (unk_0xDF1306B443CD3D15(Global_95241[0], 0))
							{
								unk_0x73270B3C9CC833FD(Global_95241[0], true, 1);
								iLocal_3259 = Global_95241[0];
							}
						}
						if (unk_0xC844350D5D58C99A(Global_95241[1]))
						{
							if (unk_0xDF1306B443CD3D15(Global_95241[1], 0))
							{
								unk_0x73270B3C9CC833FD(Global_95241[1], true, 1);
								iLocal_3276 = Global_95241[1];
							}
						}
						if (unk_0xC844350D5D58C99A(Global_95241[2]))
						{
							if (unk_0xDF1306B443CD3D15(Global_95241[2], 0))
							{
								unk_0x73270B3C9CC833FD(Global_95241[2], true, 1);
								iLocal_3277 = Global_95241[2];
							}
						}
						if (unk_0xC844350D5D58C99A(Global_95241[3]))
						{
							if (unk_0xDF1306B443CD3D15(Global_95241[3], 0))
							{
								unk_0x73270B3C9CC833FD(Global_95241[3], true, 1);
								iLocal_3278 = Global_95241[3];
							}
						}
						unk_0x4C902758BEA97C68(0);
						unk_0x420FE818E70BB523(4);
						func_372();
						if (!unk_0x0F1CCD77290EE12F())
						{
							unk_0x82E51BCA72537B6C(250);
						}
						iLocal_3183++;
					}
					break;
				
				case 1:
					if (iLocal_3467 == 0)
					{
						if (unk_0x39B7A3CCD2467CAB())
						{
							if (iLocal_3506 == 0)
							{
								if (unk_0xC844350D5D58C99A(iLocal_3278))
								{
									if (unk_0xDF1306B443CD3D15(iLocal_3278, 0))
									{
										if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_3278)))
										{
											unk_0xB58CA658A628ED02(iLocal_3278, 2);
											unk_0xA47B46945FF6DE74(iLocal_3278, -1048,722f, -506,8387f, 35,0386f, 1, false, 0, 1);
											unk_0xD8F6A53F4799FAFE(iLocal_3278, 357,1288f);
											unk_0x05CA0E7946B27A19(iLocal_3278, 1);
											unk_0xB9FD7450C0DAB575(iLocal_3278, 1084227584);
											func_362(-1048,722f, -506,8387f, 35,0386f, 357,1288f, 0, 145);
											iLocal_3506 = 1;
										}
										if (((unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iLocal_3278)) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iLocal_3278))) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iLocal_3278))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iLocal_3278)))
										{
											if ((((((((unk_0x134B62B726CEC8E6(iLocal_3278) != -713569950 && unk_0x134B62B726CEC8E6(iLocal_3278) != 2112052861) && unk_0x134B62B726CEC8E6(iLocal_3278) != 569305213) && unk_0x134B62B726CEC8E6(iLocal_3278) != 1283517198) && unk_0x134B62B726CEC8E6(iLocal_3278) != 1171614426) && unk_0x134B62B726CEC8E6(iLocal_3278) != -823509173) && unk_0x134B62B726CEC8E6(iLocal_3278) != 1074326203) && unk_0x134B62B726CEC8E6(iLocal_3278) != 2053223216) && unk_0x134B62B726CEC8E6(iLocal_3278) != 850991848)
											{
												unk_0xA47B46945FF6DE74(iLocal_3278, -1027,657f, -486,6945f, 35,9571f, 1, false, 0, 1);
												unk_0xD8F6A53F4799FAFE(iLocal_3278, 207,7515f);
												unk_0xB9FD7450C0DAB575(iLocal_3278, 1084227584);
												func_362(-1027,657f, -486,6945f, 35,9571f, 207,7515f, 0, 145);
												iLocal_3506 = 1;
											}
										}
										if ((((!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_3278)) && !unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iLocal_3278))) && !unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iLocal_3278))) && !unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iLocal_3278))) && !unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iLocal_3278)))
										{
											unk_0xA954465BA6FDEFE2(&iLocal_3278);
											iLocal_3506 = 1;
										}
									}
								}
							}
							func_360(&uLocal_3743, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3467 = 1;
						}
					}
					if (iLocal_3438 == 0)
					{
						unk_0xF63400DBE3303D26("SecGuards", &iLocal_3576);
						unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_3576);
						unk_0x0E2400AB9174FA81(5, iLocal_3576, 1862763509);
						unk_0xD7992BEF7A9D109E("TREV4", 0);
						iLocal_3438 = 1;
					}
					if (iLocal_3488 == 0)
					{
						if (unk_0x22A8E52414415B76())
						{
							unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
							unk_0xADCFE13F048E110C(unk_0x16F2683693E537C9());
							unk_0x759A5E1D0F0A31A1(unk_0x16F2683693E537C9());
							if (unk_0x8F677B1F58B4741C() > 120000)
							{
								unk_0xC92DB9682A650680("TRV4_START");
								iLocal_3488 = 1;
							}
						}
					}
					if (unk_0x3148AE92ED70DC30("Michael", 0))
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1012,268f, -480,0742f, 38,9757f, 1, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 121,4087f);
						unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 2f, 3000, 0, 1, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -530524, false, 0, 0);
					}
					if (unk_0xEABED1927EFB48CA(0))
					{
						unk_0x2FB9A57162E54BAB(0f);
					}
					if (!unk_0x39B7A3CCD2467CAB())
					{
						func_359(61);
						if (iLocal_3488 == 0)
						{
							unk_0xC92DB9682A650680("TRV4_START_CS_SKIP");
							iLocal_3488 = 1;
						}
						unk_0xBF40D896CA4BDBE7();
						func_220(0, 1, 1, 0, 0, 0);
						iLocal_3183++;
					}
					break;
				
				case 2:
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					if (unk_0xC844350D5D58C99A(iLocal_3259))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3259, 0))
						{
							if (unk_0x9C77D2D0559097F0(iLocal_3259, 1))
							{
								unk_0x046C362CF15F1935(&iLocal_3259);
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_3276))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3276, 0))
						{
							if (unk_0x9C77D2D0559097F0(iLocal_3276, 1))
							{
								unk_0x046C362CF15F1935(&iLocal_3276);
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_3277))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3277, 0))
						{
							if (unk_0x9C77D2D0559097F0(iLocal_3277, 1))
							{
								unk_0x046C362CF15F1935(&iLocal_3277);
							}
						}
					}
					func_358();
					iLocal_3338 = 0;
					iLocal_3183 = 0;
					iLocal_3181 = 0;
					iLocal_3180 = 2;
					break;
			}
			wait(0);
		}
	}
}

void func_358()
{
	Global_61518 = 0;
}

void func_359(int iParam0)
{
	if (Global_95666 != -1)
	{
		if (iParam0 == Global_95666)
		{
			Global_95670 = 1;
			return;
		}
	}
}

void func_360(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam4 == 1)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()), 64);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xE731059548189243(unk_0x16F2683693E537C9(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xA37A90C62806D848(1);
	}
	else
	{
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
		{
			if (unk_0xFBB4F23D534EB790(uParam0->f_4))
			{
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, false);
			}
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 1);
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
		}
		iVar0 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0x4A4806F9D471E491(iVar0, true, 0);
		}
		unk_0x42740B44BA8D7B43("TIME_LAPSE");
		if (unk_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
		{
			unk_0x55D0A2DB35045A35(uParam0->f_10);
			unk_0x42740B44BA8D7B43("TIME_LAPSE");
			unk_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
		}
	}
	func_220(bParam1, 1, 0, 0, 0, 0);
	func_361();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x71592C07333285FE(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x71592C07333285FE(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x757EF87A33649210())
		{
			unk_0x82E51BCA72537B6C(250);
		}
	}
	if (!bParam1)
	{
		if (Global_111638.f_32744.f_4801 != -15)
		{
			Global_111638.f_32744.f_4801 = func_96();
		}
	}
}

void func_361()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0].f_16);
		iVar0++;
	}
}

void func_362(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (unk_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_371(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_368(unk_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &uVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = uVar3;
					}
				}
				func_363(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_363(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xC844350D5D58C99A(Global_75441.f_484[25]) && unk_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x56E1CD81AE700E98(iParam0) || unk_0x134B62B726CEC8E6(iParam0) == -713569950) || unk_0x134B62B726CEC8E6(iParam0) == 1941029835)
			{
				return;
			}
		}
		func_367(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_71(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			fParam4 = unk_0xD9522BA9E27E1349(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != 241912366)
			{
				Global_76429 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
			}
		}
		func_365(iParam5, &Var0, vParam1, fParam4, func_34(iParam0));
		func_364(iParam5, iParam0, 0);
	}
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_159(&(Global_75441.f_555[0]), iParam0))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 12) && !unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 10))
	{
		if (Global_75441.f_555[0].f_4 != unk_0x134B62B726CEC8E6(iParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0))
		{
			if (!unk_0xAF6690C489CC6203(iParam1))
			{
				unk_0x73270B3C9CC833FD(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_96();
			}
			if (iParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_371(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0)) && iParam1 != iVar0)
					{
						func_145(iVar0, 145);
					}
				}
				Global_76347 = iParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_365(int iParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6)
{
	if (func_159(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 10))
		{
			func_366(iParam0);
			func_156(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]));
			if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = fParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] = iParam6 + 1;
			func_152(iParam0, 1);
		}
	}
}

void func_366(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			unk_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 13))
		{
			func_152(iParam0, 0);
		}
	}
}

void func_367(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_366(iParam0);
	func_152(iParam0, 0);
}

int func_368(vector3 vParam0, int iParam3, var uParam4, var uParam5)
{
	iVar0 = func_369(vParam0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827,351f, 157,785f, 68,2143f };
			*uParam5 = 85,1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992,523f, 3813,916f, 31,1008f };
			*uParam5 = 122,1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184,258f, -1496,556f, 3,3895f };
			*uParam5 = 303,2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118,1067f, -1325,906f, 28,3706f };
			*uParam5 = 123,5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18,118f, -1455,126f, 29,5004f };
			*uParam5 = 273,2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1,5947f, 543,4017f, 173,4644f };
			*uParam5 = 310,7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_369(vector3 vParam0, int iParam3, int iParam4)
{
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93782[iVar0].f_7 != 263)
		{
			if (Global_93782[iVar0].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_370(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_93782[iVar0].f_3, true);
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

bool func_370(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

int func_371(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

void func_372()
{
	Global_61518 = 1;
}

bool func_373(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_400(iParam0, &Var0);
	func_399(iParam0, &Var0, &(Var0.f_1));
	return func_374(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_374(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_432(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0x71592C07333285FE(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x71592C07333285FE(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_397(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0x64F604CF561734A9("TIME_LAPSE", 0, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0x3FC8DBCC154CA56B();
	unk_0x3584F71E5CA29322(7);
	unk_0x6A36BC55C7F6D023(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
			unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
				}
				iVar0 = unk_0x728870EB733D12A1();
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x73270B3C9CC833FD(iVar0, true, 0);
					}
					unk_0x4A4806F9D471E491(iVar0, false, 0);
				}
			}
			fVar1 = unk_0x94AE88F396FEBF6C(uParam0->f_4);
			unk_0xBAF1FC9E86FF7F91();
			unk_0x0002EE0323037BB6(uParam1->f_2, fVar1, 0);
			unk_0xD7AD2803AD9697F7(uParam1->f_2, fVar1);
			unk_0x58B5D6A0F1D7754D(uParam1->f_2, fVar1);
			if (bParam3)
			{
				unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 1, 1, 0, false);
			}
			func_396(&(uParam0->f_1), 0, 0, 0, unk_0x972A296334C9D57B(), unk_0x118229AD063C3C1D(), unk_0x1A61A218F5C5EB02());
			func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_397(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
				uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
				if (!bParam6)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
					}
					iVar2 = unk_0x728870EB733D12A1();
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (!unk_0xAF6690C489CC6203(iVar2))
						{
							unk_0x73270B3C9CC833FD(iVar2, true, 0);
						}
						unk_0x4A4806F9D471E491(iVar2, false, 0);
					}
				}
				fVar3 = unk_0x94AE88F396FEBF6C(uParam0->f_4);
				unk_0xBAF1FC9E86FF7F91();
				unk_0x0002EE0323037BB6(uParam1->f_2, fVar3, 0);
				unk_0xD7AD2803AD9697F7(uParam1->f_2, fVar3);
				unk_0x58B5D6A0F1D7754D(uParam1->f_2, fVar3);
				if (bParam3)
				{
					unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 1, 1, 0, false);
				}
				func_396(&(uParam0->f_1), 0, 0, 8, unk_0x972A296334C9D57B(), unk_0x118229AD063C3C1D(), unk_0x1A61A218F5C5EB02());
				func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x42740B44BA8D7B43("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
			unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
			unk_0x34570E685597AE09(uParam0->f_4, 3);
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
				}
				iVar4 = unk_0x728870EB733D12A1();
				if (unk_0xC844350D5D58C99A(iVar4))
				{
					if (!unk_0xAF6690C489CC6203(iVar4))
					{
						unk_0x73270B3C9CC833FD(iVar4, true, 0);
					}
					unk_0x4A4806F9D471E491(iVar4, false, 0);
				}
			}
			fVar5 = unk_0x94AE88F396FEBF6C(uParam0->f_4);
			unk_0xBAF1FC9E86FF7F91();
			unk_0x0002EE0323037BB6(uParam1->f_2, fVar5, 0);
			unk_0xD7AD2803AD9697F7(uParam1->f_2, fVar5);
			unk_0x58B5D6A0F1D7754D(uParam1->f_2, fVar5);
			if (bParam3)
			{
				unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
			}
			func_396(&(uParam0->f_1), 0, 0, 0, unk_0x972A296334C9D57B(), unk_0x118229AD063C3C1D(), unk_0x1A61A218F5C5EB02());
			func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x42740B44BA8D7B43("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (!uParam0->f_5)
		{
			if (func_377(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x1C0640BA9A7327B3();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
					unk_0x34570E685597AE09(uParam0->f_4, 3);
					unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
					uParam0->f_9 = unk_0x1C0640BA9A7327B3();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_377(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x1C0640BA9A7327B3();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
				unk_0x34570E685597AE09(uParam0->f_4, 3);
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
				uParam0->f_9 = unk_0x1C0640BA9A7327B3();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_375(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(250);
				}
				if (!unk_0x757EF87A33649210())
				{
					unk_0x3FC8DBCC154CA56B();
					unk_0x3584F71E5CA29322(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_377(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_4) && unk_0xFA06B985B30FB0FC(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x1C0640BA9A7327B3();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_375(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(250);
				}
				if (!unk_0x757EF87A33649210())
				{
					unk_0x3FC8DBCC154CA56B();
					unk_0x3584F71E5CA29322(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (uParam0->f_9 + 1000 > unk_0x1C0640BA9A7327B3())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = unk_0x1C0640BA9A7327B3();
		}
		Global_28 = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_376())
			{
				Global_27 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
	}
	return 0;
}

int func_376()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0xBFC0798A6E3417F9(0, 18) || unk_0xBFC0798A6E3417F9(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_96();
			iVar5 = func_96();
			func_104(&iVar5, iParam0);
			func_105(&iVar5, iParam1);
			func_106(&iVar5, 0);
			if (func_394(*uParam4, iVar5))
			{
				func_393(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_391(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_384((to_float(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x25CDE70818786F1F(0,6f);
				unk_0x365391E40B6BA75B(0);
				unk_0x9B84ADFFC9CAC31A(false);
			}
			func_383();
			uParam4->f_10 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			unk_0x8BC9595FD2792B5D("TOD_SHIFT_SCENE");
			func_361();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x9F4FE516EAACCFC5(uParam4->f_4) && unk_0xFA06B985B30FB0FC(uParam4->f_4)) || !(fParam5 >= 0,99f || fParam5 == -1f))
			{
				if (unk_0x9F4FE516EAACCFC5(uParam4->f_4) && unk_0xFA06B985B30FB0FC(uParam4->f_4))
				{
					fVar0 = unk_0xEDD067DFFB8D5784(uParam4->f_4);
				}
				else if (!(fParam5 >= 0,99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0,5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x12AB0310C2281427(sParam2) != 0)
						{
							unk_0x8225571BCEE038F8(sParam2, fParam8);
						}
						if (unk_0x12AB0310C2281427(sParam3) != 0)
						{
							unk_0xF1662D1948765623();
							unk_0xCD7E6F59323AEBCB(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0,99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_393(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x71592C07333285FE(func_382(iVar5), func_381(iVar5), func_380(iVar5));
				if (bParam7)
				{
					unk_0xF8041E6992430151();
				}
				unk_0x55D0A2DB35045A35(uParam4->f_10);
				unk_0x42740B44BA8D7B43("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x9B84ADFFC9CAC31A(true);
					unk_0x365391E40B6BA75B(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0,1f;
			fVar10 = 0,9f;
			fVar12 = func_379(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = round((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_393(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0x71592C07333285FE(func_382(iVar5), func_381(iVar5), func_380(iVar5));
			if (func_378(iVar5) != unk_0x972A296334C9D57B())
			{
				unk_0xD3A9F3BA3F4248BA(func_378(iVar5), func_103(iVar5), func_101(iVar5));
			}
			func_272();
			unk_0xF99F2927BEBB5EE7(6);
			break;
	}
	return 0;
}

int func_378(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

float func_379(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_380(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_381(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_382(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_383()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
	if (!unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 0;
	}
	unk_0x3CBF2C83A68C1611(iVar0, "OFF");
	return 1;
}

void func_384(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_390(&(Global_111638.f_18098.f_175[iVar0].f_5)))
		{
			func_385(&(Global_111638.f_18098.f_175[iVar0].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_390(&(Global_111638.f_18098.f_362[iVar1])))
		{
			func_385(&(Global_111638.f_18098.f_362[iVar1]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x9911B88AFCF2F6D2();
}

void func_385(int iParam0, float fParam1)
{
	if (func_390(iParam0))
	{
		func_386(iParam0, (func_388(iParam0) + fParam1));
	}
}

void func_386(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_387(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_387(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1C0640BA9A7327B3()) / 1000f);
}

float func_388(var uParam0)
{
	if (func_390(uParam0))
	{
		if (func_389(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_387(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_389(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_390(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_391(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_394(iParam0, iParam1))
	{
		iVar0 = func_103(iParam1);
		iVar1 = func_101(iParam0);
		iVar2 = (func_101(iParam0) - func_101(iParam1));
		iVar3 = (func_103(iParam0) - func_103(iParam1));
		iVar4 = (func_378(iParam0) - func_378(iParam1));
		iVar5 = (func_382(iParam0) - func_382(iParam1));
		iVar6 = (func_381(iParam0) - func_381(iParam1));
		iVar7 = (func_380(iParam0) - func_380(iParam1));
	}
	else
	{
		iVar0 = func_103(iParam0);
		iVar1 = func_101(iParam1);
		iVar2 = (func_101(iParam1) - func_101(iParam0));
		iVar3 = (func_103(iParam1) - func_103(iParam0));
		iVar4 = (func_378(iParam1) - func_378(iParam0));
		iVar5 = (func_382(iParam1) - func_382(iParam0));
		iVar6 = (func_381(iParam1) - func_381(iParam0));
		iVar7 = (func_380(iParam1) - func_380(iParam0));
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
		iVar4 = (iVar4 + func_100(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_392(to_float(iVar0 + 1), 0f, 12f));
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

float func_392(float fParam0, float fParam1, float fParam2)
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

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_101(*iParam0);
	iVar1 = func_103(*iParam0);
	iVar2 = func_378(*iParam0);
	iVar3 = func_382(*iParam0);
	iVar4 = func_381(*iParam0);
	iVar5 = func_380(*iParam0);
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
	iVar6 = func_100(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_100(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_396(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_394(int iParam0, int iParam1)
{
	if (!func_395(iParam1) || !func_395(iParam0))
	{
		return 1;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_103(iParam0);
	iVar1 = func_103(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_381(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_382(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_101(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_103(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_378(iParam0);
	if (iVar5 < 1 || iVar5 > func_100(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(uParam0, iParam1);
	func_105(uParam0, iParam2);
	func_104(uParam0, iParam3);
	func_98(uParam0, iParam5);
	func_99(uParam0, iParam4);
	func_97(uParam0, iParam6);
}

bool func_397(int iParam0, int iParam1)
{
	return func_398(unk_0xD8A54335F18763BA(), iParam0, iParam1);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_89532[iParam0].f_14;
			*uParam2 = Global_89532[iParam0].f_13;
			break;
	}
}

void func_400(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58,1338f, -1115,653f, 25,8856f };
			uParam1->f_5 = { 18,4907f, 0f, 3,566f };
			uParam1->f_8 = { -58,3857f, -1115,083f, 26,0824f };
			uParam1->f_11 = { 18,4907f, 0f, 2,0628f };
			uParam1->f_14 = 40,0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830,1f, 171,4f, 71,5f };
			uParam1->f_5 = { 17,5f, 0f, -76f };
			uParam1->f_8 = { -829,5f, 171,6f, 71,7f };
			uParam1->f_11 = { 17,9f, 0f, -75,4f };
			uParam1->f_14 = 47,9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776,5807f, 181,1033f, 72,2059f };
			uParam1->f_5 = { 11,8135f, 0f, 95,7275f };
			uParam1->f_8 = { -776,8288f, 181,0926f, 72,2551f };
			uParam1->f_11 = { 11,8134f, 0f, 95,7284f };
			uParam1->f_14 = 46,7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_107())
			{
				case 0:
					uParam1->f_2 = { -846,3013f, 186,777f, 72,0316f };
					uParam1->f_5 = { 4,202026f, 0f, -111,2882f };
					uParam1->f_8 = { -846,1907f, 186,7339f, 72,0403f };
					uParam1->f_11 = { 4,202f, 0f, -111,2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846,3013f, 186,777f, 72,0316f };
					uParam1->f_5 = { 4,202026f, 0f, -111,2882f };
					uParam1->f_8 = { -846,1907f, 186,7339f, 72,0403f };
					uParam1->f_11 = { 4,202f, 0f, -111,2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8,0845f, -1450,367f, 36,8585f };
			uParam1->f_5 = { 13,3776f, 0f, 4,513f };
			uParam1->f_8 = { -9,0519f, -1450,444f, 36,8585f };
			uParam1->f_11 = { 13,3776f, 0f, 4,513f };
			uParam1->f_14 = 39,9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576,132f, 5160,888f, 24,1175f };
			uParam1->f_5 = { 4,8389f, -0,011f, 92,1057f };
			uParam1->f_8 = { -1576,132f, 5160,888f, 24,1175f };
			uParam1->f_11 = { 4,8389f, -0,011f, 92,1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7,205f, -1471,656f, 31,1614f };
			uParam1->f_5 = { 9,3776f, 0f, 11,4737f };
			uParam1->f_8 = { -7,2909f, -1471,232f, 31,2546f };
			uParam1->f_11 = { 9,3776f, 0f, 11,4737f };
			uParam1->f_14 = 38,5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060,658f, -464,0052f, 44,994f };
			uParam1->f_5 = { 5,6441f, 0f, -138,7474f };
			uParam1->f_8 = { -1060,658f, -464,0052f, 44,994f };
			uParam1->f_11 = { 4,8242f, 0f, -118,3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406,112f, 3590,231f, 34,4113f };
			uParam1->f_5 = { 17,5005f, 0f, 55,9579f };
			uParam1->f_8 = { 1405,673f, 3590,525f, 34,4113f };
			uParam1->f_11 = { 18,4979f, 0f, 55,9579f };
			uParam1->f_14 = 56,3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739,1493f, -990,3961f, 29,85194f };
			uParam1->f_5 = { 17,19917f, 0f, 44,21184f };
			uParam1->f_8 = { 738,4197f, -989,6462f, 30,17581f };
			uParam1->f_11 = { 17,19917f, 0f, 44,21184f };
			uParam1->f_14 = 47,56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503,9f, -288,8f, 112,8f };
			uParam1->f_5 = { -0,2f, 0f, -169,6f };
			uParam1->f_8 = { 2503,9f, -288,8f, 112,8f };
			uParam1->f_11 = { -0,2f, 0f, -169,6f };
			uParam1->f_14 = 47,6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458,5666f, 1010,097f, 316,3736f };
			uParam1->f_5 = { 14,47186f, 0f, -18,28884f };
			uParam1->f_8 = { -457,3f, 1011,6f, 316,9f };
			uParam1->f_11 = { 14,5f, 0f, -18,5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723,9982f, -155,7184f, 38,12362f };
			uParam1->f_5 = { 30,12048f, 0f, -99,11243f };
			uParam1->f_8 = { -722,4385f, -155,7817f, 37,4443f };
			uParam1->f_11 = { 2,0429f, 0f, -101,5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_107())
			{
				case 2:
					uParam1->f_2 = { 416,3221f, -960,2586f, 30,6696f };
					uParam1->f_5 = { 21,5747f, 0f, -135,2969f };
					uParam1->f_8 = { 416,8894f, -960,832f, 30,9887f };
					uParam1->f_11 = { 21,9916f, 0f, -135,2969f };
					uParam1->f_14 = 47,1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393,363f, -2052,581f, 65,4054f };
					uParam1->f_5 = { 2,5107f, 0f, 51,1167f };
					uParam1->f_8 = { 1393,456f, -2052,656f, 68,146f };
					uParam1->f_11 = { 2,5107f, 0f, 51,1167f };
					uParam1->f_14 = 35,9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59,3f, -751,7f, 46,8f };
			uParam1->f_5 = { 61,9f, 0f, -63,8f };
			uParam1->f_8 = { 59,3f, -751,7f, 46,8f };
			uParam1->f_11 = { 61,9f, 0f, -63,8f };
			uParam1->f_14 = 46,6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841,93f, 4464,658f, 2,6587f };
			uParam1->f_5 = { 8,4859f, 0,0024f, 143,0775f };
			uParam1->f_8 = { 3842,54f, 4464,184f, 2,6587f };
			uParam1->f_11 = { 8,4859f, 0,0024f, 142,0089f };
			uParam1->f_14 = 34,1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193,1f, -1525,3f, 4,4f };
			uParam1->f_5 = { 9,4f, 0f, -78,8f };
			uParam1->f_8 = { -1192,2f, -1525,1f, 4,4f };
			uParam1->f_11 = { 9,4f, 0f, -78,5f };
			uParam1->f_14 = 30,4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24,2f, -2417,6f, 7,8f };
			uParam1->f_5 = { 10,4f, 0f, 80,4f };
			uParam1->f_8 = { -23,8f, -2414,8f, 7,8f };
			uParam1->f_11 = { 10,4f, 0f, 81,4f };
			uParam1->f_14 = 48,1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146,9733f, -1310,644f, 30,85177f };
			uParam1->f_5 = { 16,26885f, -2,1E-05f, 45,00475f };
			uParam1->f_8 = { 146,9733f, -1310,644f, 30,85177f };
			uParam1->f_11 = { 16,26885f, -2,1E-05f, 45,00475f };
			uParam1->f_14 = 39,4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998,215f, 3816,983f, 33,0117f };
			uParam1->f_5 = { 5,9088f, 0f, 89,1989f };
			uParam1->f_8 = { 1997,154f, 3817,004f, 33,1215f };
			uParam1->f_11 = { 5,9088f, 0f, 89,1989f };
			uParam1->f_14 = 36,8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_107() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363,9f, 55,5f };
			uParam1->f_5 = { 0,5f, 0f, -123,8f };
			uParam1->f_8 = { 1575,2f, 3364,4f, 49,2f };
			uParam1->f_11 = { -4,3f, 0f, -124,1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378,8f, 42,8f };
			uParam1->f_5 = { -2,4f, 0f, -126,3f };
			uParam1->f_8 = { 1567,6f, 3376,9f, 45f };
			uParam1->f_11 = { 1,6f, 0f, -124,6f };
			uParam1->f_14 = 34,7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339,573f, -2550,873f, 56,28254f };
			uParam1->f_5 = { -2,348373f, -2,1E-05f, 159,736f };
			uParam1->f_8 = { 1334,491f, -2549,345f, 47,69109f };
			uParam1->f_11 = { 2,789334f, -2,1E-05f, -156,4397f };
			uParam1->f_14 = 25,66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383,651f, 2624,787f, 46,9527f };
			uParam1->f_5 = { 14,6191f, 0f, 64,366f };
			uParam1->f_8 = { 2383,929f, 2622,802f, 47,2707f };
			uParam1->f_11 = { 33,17714f, -0,13073f, 12,31436f };
			uParam1->f_14 = 35,31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755,519f, -1474,981f, 126,1743f };
			uParam1->f_5 = { 4,5341f, 0f, 89,6405f };
			uParam1->f_8 = { 1772,26f, -1475,085f, 125,9465f };
			uParam1->f_11 = { 5,8327f, 0f, 89,6405f };
			uParam1->f_14 = 32,7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514,257f, -947,7281f, 15,0253f };
			uParam1->f_5 = { -3,5807f, -0,0001f, -46,3209f };
			uParam1->f_8 = { -1512,601f, -949,2796f, 14,8827f };
			uParam1->f_11 = { -4,7682f, -0,0001f, -34,1393f };
			uParam1->f_14 = 29,9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698,2578f, -934,4238f, 31,6909f };
			uParam1->f_5 = { -22,0467f, 0f, 32,1888f };
			uParam1->f_8 = { -697,8695f, -935,0406f, 31,9861f };
			uParam1->f_11 = { -20,6093f, 0f, 32,1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221,8613f, -830,6434f, 45,3154f };
			uParam1->f_5 = { -13,9263f, 0f, 140,7092f };
			uParam1->f_8 = { 227,5233f, -832,8285f, 45,3154f };
			uParam1->f_11 = { -13,9263f, 0f, 140,7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23,3747f, -120,3161f, 64,139f };
			uParam1->f_5 = { -5,7232f, 0f, 5,1015f };
			uParam1->f_8 = { -22,5824f, -122,52f, 64,139f };
			uParam1->f_11 = { -5,7232f, 0f, 6,6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803,5977f, -1075,869f, 37,1981f };
			uParam1->f_5 = { -10,7685f, 0f, -38,1705f };
			uParam1->f_8 = { 803,5977f, -1075,869f, 32,7981f };
			uParam1->f_11 = { -10,7685f, 0f, -38,1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (unk_0x12AB0310C2281427("RAIN") == unk_0x99910ECF8C64BEC6())
	{
		if (unk_0xEA6BC48857E0AC4C(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xEA6BC48857E0AC4C(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_401()
{
	bVar0 = unk_0x62A1F4500E8F07E0();
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

void func_402()
{
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	if (!func_23())
	{
		if (func_432(0))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			unk_0x523BCC9DC80CD82F(-1934452204);
			unk_0x523BCC9DC80CD82F(384071873);
			unk_0x523BCC9DC80CD82F(2072687711);
			while ((!unk_0xB87F6CF6E5628C67(-1934452204) || !unk_0xB87F6CF6E5628C67(384071873)) || !unk_0xB87F6CF6E5628C67(2072687711))
			{
				wait(0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3259))
			{
				unk_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
				iLocal_3259 = unk_0x122AAB0B1D6F55AD(-1934452204, vLocal_3294, fLocal_3321, true, true, false);
				unk_0xC002508A277213DE(iLocal_3259, 112, 112);
				unk_0xD458AC1C1D29C3B4(iLocal_3259, 3000, 0);
				unk_0xD5A0214B20BCBAD8(iLocal_3259, 1);
				unk_0x71199B01895C6202(-1934452204);
				unk_0xAB8E2DDC7AF955E0(-1934452204, true);
				unk_0x120A395B0ECB8EA5(iLocal_3259, true);
				unk_0x44A200C9B6E1CEA6(iLocal_3259, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3276))
			{
				if (unk_0xB87F6CF6E5628C67(384071873))
				{
					unk_0x536F1BE96C726C4B(-1037,398f, -491,6539f, 35,5545f, 5f, 1, 0, 0, false);
					iLocal_3276 = unk_0x122AAB0B1D6F55AD(384071873, -1037,398f, -491,6539f, 35,5545f, 208,889f, true, true, false);
					unk_0xC002508A277213DE(iLocal_3276, 0, 0);
					unk_0xD458AC1C1D29C3B4(iLocal_3276, 3000, 0);
					unk_0xD5A0214B20BCBAD8(iLocal_3276, 1);
					unk_0x71199B01895C6202(384071873);
					unk_0xAB8E2DDC7AF955E0(384071873, true);
					unk_0x44A200C9B6E1CEA6(iLocal_3276, true);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_3277))
			{
				if (unk_0xB87F6CF6E5628C67(2072687711))
				{
					unk_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
					iLocal_3277 = unk_0x122AAB0B1D6F55AD(2072687711, -1033,938f, -489,7475f, 35,8323f, 207,1758f, true, true, false);
					unk_0xC002508A277213DE(iLocal_3277, 89, 89);
					unk_0xD458AC1C1D29C3B4(iLocal_3277, 3000, 0);
					unk_0xD5A0214B20BCBAD8(iLocal_3277, 1);
					unk_0x71199B01895C6202(2072687711);
					unk_0xAB8E2DDC7AF955E0(2072687711, true);
					unk_0x44A200C9B6E1CEA6(iLocal_3277, true);
				}
			}
		}
		iLocal_3181 = 0;
		iLocal_3183 = 0;
		iLocal_3345 = 0;
		iLocal_3180 = 1;
	}
	else
	{
		unk_0xF63400DBE3303D26("SecGuards", &iLocal_3576);
		unk_0x0E2400AB9174FA81(5, 1862763509, iLocal_3576);
		unk_0x0E2400AB9174FA81(5, iLocal_3576, 1862763509);
		if (Global_92921 == 1)
		{
			if (func_405() == 0)
			{
				func_404(vLocal_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_405() == 1)
			{
				func_404(-935,4413f, -2928,061f, 12,9451f, 178,466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xC92DB9682A650680("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_405() == 2)
			{
				func_404(-937,5466f, -2968,713f, 12,9451f, 111,5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xC92DB9682A650680("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
			if (func_405() == 3)
			{
				func_404(-920,0547f, -2744,661f, 12,9322f, 357,1374f, 1, 0);
				func_403();
			}
		}
		else
		{
			if (func_405() == 0)
			{
				func_404(-1019,579f, -484,872f, 36,0795f, 93,7701f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_3180 = 2;
			}
			if (func_405() == 1)
			{
				func_404(vLocal_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_405() == 2)
			{
				func_404(-935,4413f, -2928,061f, 12,9451f, 178,466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xC92DB9682A650680("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_405() == 3)
			{
				func_404(-937,5466f, -2968,713f, 12,9451f, 111,5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xC92DB9682A650680("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
		}
		unk_0xD7992BEF7A9D109E("TREV4", 0);
		while (!unk_0x67C1D9E5B91B2E37(0))
		{
			wait(0);
		}
	}
}

void func_403()
{
	if (iLocal_3181 == 0)
	{
		unk_0x536F1BE96C726C4B(-920,0547f, -2744,662f, 12,8434f, 20f, 1, 0, 0, false);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		iLocal_3181++;
	}
	if (iLocal_3181 == 1)
	{
		unk_0x90CECE08EA8E77CC(-920,0547f, -2744,662f, 12,8434f);
		if (!unk_0x0F1CCD77290EE12F())
		{
			func_21(0, -1, 1);
			unk_0x82E51BCA72537B6C(800);
		}
		func_6();
	}
}

void func_404(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_23())
	{
		unk_0x256D93AFAE851A7A(0);
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		unk_0x21387C9EECC2B220(1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
		}
		Global_98740 = { vParam0 };
		Global_98743 = fParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_22(1);
	}
}

int func_405()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

void func_406()
{
	if (iLocal_3490[0] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[7]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[7], 0))
			{
				unk_0x2E1E5367A885F9B7(iLocal_3121[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[0] = 1;
			}
		}
	}
	if (iLocal_3498[0] == 0)
	{
		if (iLocal_3490[0] == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[7]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_3121[7], 0))
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
			}
			else
			{
				iLocal_3498[0] = 1;
			}
		}
	}
	if (iLocal_3490[1] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[8]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
			{
				unk_0x2E1E5367A885F9B7(iLocal_3121[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[1] = 1;
			}
		}
	}
	if (iLocal_3498[1] == 0)
	{
		if (iLocal_3490[1] == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[8]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
			}
			else
			{
				iLocal_3498[1] = 1;
			}
		}
	}
	if (iLocal_3490[2] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[11]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[11], 0))
			{
				unk_0x2E1E5367A885F9B7(iLocal_3121[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[2] = 1;
			}
		}
	}
	if (iLocal_3498[2] == 0)
	{
		if (iLocal_3490[2] == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[11]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_3121[11], 0))
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
			}
			else
			{
				iLocal_3498[2] = 1;
			}
		}
	}
	if (iLocal_3490[3] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[12]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[12], 0))
			{
				unk_0x2E1E5367A885F9B7(iLocal_3121[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[3] = 1;
			}
		}
	}
	if (iLocal_3498[3] == 0)
	{
		if (iLocal_3490[3] == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[12]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_3121[12], 0))
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
			}
			else
			{
				iLocal_3498[3] = 1;
			}
		}
	}
	if (iLocal_3490[4] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[13]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[13], 0))
			{
				unk_0x2E1E5367A885F9B7(iLocal_3121[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[4] = 1;
			}
		}
	}
	if (iLocal_3498[4] == 0)
	{
		if (iLocal_3490[4] == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[13]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_3121[13], 0))
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
			}
			else
			{
				iLocal_3498[4] = 1;
			}
		}
	}
	if (iLocal_3490[5] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[14]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[14], 0))
			{
				unk_0x2E1E5367A885F9B7(iLocal_3121[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[5] = 1;
			}
		}
	}
	if (iLocal_3498[5] == 0)
	{
		if (iLocal_3490[5] == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[14]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_3121[14], 0))
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
			}
			else
			{
				iLocal_3498[5] = 1;
			}
		}
	}
	if (iLocal_3490[6] == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_3121[15]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3121[15], 0))
			{
				unk_0x2E1E5367A885F9B7(iLocal_3121[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[6] = 1;
			}
		}
	}
	if (iLocal_3498[6] == 0)
	{
		if (iLocal_3490[6] == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3121[15]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_3121[15], 0))
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x06FF977AA95DCCE3(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
			}
			else
			{
				iLocal_3498[6] = 1;
			}
		}
	}
}

void func_407()
{
	switch (iLocal_3180)
	{
		case 2:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3364 = 0;
					iLocal_3523 = 0;
					iLocal_3556 = 0;
					iLocal_3557 = 0;
					func_17(&uLocal_3578, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3364 == 0)
					{
						if (unk_0x0EB28750412C3A5A(vLocal_3318, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true) > 2f)
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3364 = 1;
								}
							}
						}
					}
					if (iLocal_3523 == 0)
					{
						if (unk_0x0EB28750412C3A5A(vLocal_3318, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true) > 100f)
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								if (func_410(&uLocal_3578, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0x8B4C4CA774181102(4f, 10f, 4);
									iLocal_3523 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0 && iLocal_3523 == 1)
					{
						if (func_409())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3556 = 1;
								}
							}
						}
					}
					if (iLocal_3557 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_3258))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_3258, 1) < 200f && unk_0x0A059E0DB9253280(iLocal_3258))
								{
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0x8B4C4CA774181102(3f, 12f, 4);
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3181 >= 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3524[0] = 0;
					iLocal_3524[1] = 0;
					iLocal_3524[2] = 0;
					iLocal_3524[3] = 0;
					iLocal_3553 = 0;
					iLocal_3554 = 0;
					iLocal_3555 = 0;
					iLocal_3558 = 0;
					iLocal_3559 = 0;
					iLocal_3560 = 0;
					iLocal_3561 = 0;
					iLocal_3562 = 0;
					iLocal_3199 = unk_0x1C0640BA9A7327B3();
					func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "Michael", 0, 1);
					func_17(&uLocal_3578, 4, 0, "SOL3COP", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3557 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_3258))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_3258, 1) < 200f && unk_0x0A059E0DB9253280(iLocal_3258))
								{
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_3258))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
							{
								if (iLocal_3524[0] == 0)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_3121[7], 0) || unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 7000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 28000f)
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3524[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[1] == 0)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_3121[7], 0) || unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 28000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 34500f)
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0x8B4C4CA774181102(4f, 4f, 4);
														iLocal_3524[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[2] == 0)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_3121[7], 0) || unk_0xDF1306B443CD3D15(iLocal_3121[8], 0))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_3258) > 36000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 41000f)
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0x8B4C4CA774181102(2f, 4f, 4);
														iLocal_3524[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 41000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 43500f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_3265) && unk_0x0A059E0DB9253280(iLocal_3265))
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0x8B4C4CA774181102(4f, 4f, 4);
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3555 == 0)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 50509f && unk_0x9901AABAC4D4C590(iLocal_3258) < 50872f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_3265) && unk_0x0A059E0DB9253280(iLocal_3265))
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3555 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[3] == 0)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 58000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 68000f)
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3524[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0 && iLocal_3524[3] == 1)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) < 76000f)
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3558 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 80000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 82000f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_3260[0]))
										{
											if (unk_0xDF1306B443CD3D15(iLocal_3260[0], 0))
											{
												if (unk_0x0A059E0DB9253280(iLocal_3260[0]))
												{
													if (!func_262())
													{
														if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
														{
															if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0x8B4C4CA774181102(3f, 10f, 4);
																iLocal_3553 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3559 == 0)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_3258) > 82100f && unk_0x9901AABAC4D4C590(iLocal_3258) < 83500f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_3121[11]))
										{
											if (unk_0x0A059E0DB9253280(iLocal_3121[11]))
											{
												if (!func_262())
												{
													if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
													{
														if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
										else if (unk_0xC844350D5D58C99A(iLocal_3121[12]))
										{
											if (unk_0x0A059E0DB9253280(iLocal_3121[12]))
											{
												if (!func_262())
												{
													if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
													{
														if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3562 == 0)
								{
									if ((unk_0x9901AABAC4D4C590(iLocal_3258) > 101891f && unk_0x9901AABAC4D4C590(iLocal_3258) < 105000f) && unk_0x0A059E0DB9253280(iLocal_3258))
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0x8B4C4CA774181102(3f, 10f, 4);
													iLocal_3562 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x9901AABAC4D4C590(iLocal_3258) > 105500f && unk_0x9901AABAC4D4C590(iLocal_3258) < 119000f) && unk_0x1C0640BA9A7327B3() > iLocal_3199 + 7000) && iLocal_3561 == 0)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0x1C0640BA9A7327B3();
												iLocal_3561 = 1;
											}
										}
									}
								}
								if (iLocal_3560 == 0 && iLocal_3561 == 1)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (((unk_0x9901AABAC4D4C590(iLocal_3258) > 105500f && unk_0x9901AABAC4D4C590(iLocal_3258) < 119000f) && unk_0x1C0640BA9A7327B3() > iLocal_3199 + 7000) && iLocal_3560 == 1)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3530 = 0;
					iLocal_3563 = 0;
					iLocal_3569 = 0;
					iLocal_3564 = 1;
					iLocal_3204 = unk_0x1C0640BA9A7327B3();
					func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "Michael", 0, 1);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3569 == 0)
					{
						unk_0xCAB39E12D9493B73("T1M4_BBAA", "AIRPORTANNO", -939,5f, -2932,2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3569 = 1;
					}
					if (iLocal_3564 == 1)
					{
						if (iLocal_3530 == 0)
						{
							if (!func_262())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x8B4C4CA774181102(4f, 6f, 4);
										iLocal_3200 = unk_0x1C0640BA9A7327B3();
										iLocal_3530 = 1;
										iLocal_3563 = 1;
										iLocal_3564 = 0;
									}
								}
							}
						}
						if (unk_0x1C0640BA9A7327B3() > iLocal_3200 + 5000)
						{
							if (!func_262())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x8B4C4CA774181102(4f, 6f, 4);
										iLocal_3200 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (iLocal_3563 == 1 && unk_0x1C0640BA9A7327B3() > iLocal_3204 + 4000)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0x8B4C4CA774181102(4f, 6f, 4);
									iLocal_3204 = unk_0x1C0640BA9A7327B3();
									iLocal_3564 = 1;
									iLocal_3563 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3531 = 0;
					iLocal_3532 = 0;
					iLocal_3533 = 0;
					iLocal_3565 = 0;
					iLocal_3566 = 0;
					func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "Michael", 0, 1);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3531 == 0)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3531 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 1 && iLocal_3533 == 0)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3533 = 1;
								}
							}
						}
					}
					if (iLocal_3532 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_3222))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
							{
								if (unk_0x69DF961355195C3C(iLocal_3209))
								{
									if (unk_0xA45992A6CE82FB43(iLocal_3209) > 0,65f && unk_0xA45992A6CE82FB43(iLocal_3209) < 0,835f)
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0x8B4C4CA774181102(8f, 8f, 4);
													iLocal_3532 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3565 == 0)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_3222))
						{
							if (!func_262())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3565 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3565 == 1 && iLocal_3566 == 0)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3566 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3567 = 0;
					iLocal_3205 = unk_0x1C0640BA9A7327B3();
					func_17(&uLocal_3578, 0, unk_0x16F2683693E537C9(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3567 == 0)
					{
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							iLocal_3257 = func_408(unk_0x16F2683693E537C9(), -1533126372, 0, 0, 28);
							if (unk_0xC844350D5D58C99A(iLocal_3257))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_3257, 1) < 40f)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3567 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3567 == 1 && unk_0x1C0640BA9A7327B3() > iLocal_3205 + 5000)
					{
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							iLocal_3257 = func_408(unk_0x16F2683693E537C9(), -1533126372, 0, 0, 28);
							if (unk_0xC844350D5D58C99A(iLocal_3257))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_3257, 1) < 40f)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3205 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar17 = 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x263615A674FCA6E9(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0xC844350D5D58C99A(iVar0[iVar17]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iVar0[iVar17]))
				{
					if (unk_0xD09DF7101876AFB8(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0x0A059E0DB9253280(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0xC844350D5D58C99A(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0xD09DF7101876AFB8(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0x0A059E0DB9253280(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_409()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_410(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_261(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_250(sParam3, iParam4, bParam7);
}

void func_411()
{
	if (((iLocal_3180 == 4 || iLocal_3180 == 5) || iLocal_3180 == 8) || iLocal_3180 == 6)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_412(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2, 200, 0))
			{
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
				unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
			}
		}
	}
	if (iLocal_3510 == 0)
	{
		if (iLocal_3180 == 4)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_412(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2, 200, 0))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 3, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
					iLocal_3510 = 1;
				}
			}
		}
	}
}

int func_412(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0] = { -1332,211f, 100,4608f, 40,38437f };
			vVar46[0] = { -1094,238f, 148,4274f, 73f };
			fVar92[0] = 171,25f;
			vVar0[1] = { -999,7344f, -110,2231f, 25,25706f };
			vVar46[1] = { -1149,494f, 109,2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2] = { -1035,113f, -84,95885f, 28,2746f };
			vVar46[2] = { -1261,103f, 50,08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0] = { -804,3439f, -3346,5f, 10f };
			vVar46[0] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1] = { -1911,488f, -2934,197f, 10f };
			vVar46[1] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2] = { -844,9433f, -2802,785f, 10f };
			vVar46[2] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185,5f;
			vVar0[3] = { -1021,086f, -2952,277f, 10f };
			vVar46[3] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4] = { -1027,136f, -2436,457f, 10f };
			vVar46[4] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193,5f;
			vVar0[5] = { -1497,549f, -2408,712f, 10f };
			vVar46[5] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234,5f;
			vVar0[6] = { -982,7924f, -2831,709f, 12,93313f };
			vVar46[6] = { -966,4677f, -2803,458f, 16,68313f };
			fVar92[6] = 16f;
			vVar0[7] = { -1110,083f, -3496,806f, 12f };
			vVar46[7] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8] = { -1886,899f, -3193,024f, 12f };
			vVar46[8] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9] = { -1134,337f, -3535,648f, 12f };
			vVar46[9] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30,75f;
			vVar0[10] = { -969,1279f, -3463,899f, 12f };
			vVar46[10] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11] = { -1369,491f, -2173,579f, 10f };
			vVar46[11] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29,25f;
			vVar0[12] = { -1010,926f, -3550,943f, 10f };
			vVar46[12] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0] = { -1773,944f, 3287,334f, 30f };
			vVar46[0] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1] = { -2725,889f, 3291,099f, 30f };
			vVar46[1] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2] = { -2442,026f, 3326,699f, 30f };
			vVar46[2] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3] = { -1917,165f, 3374,209f, 30f };
			vVar46[3] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86,25f;
			vVar0[4] = { -2192,753f, 3373,278f, 30f };
			vVar46[4] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150,5f;
			vVar0[5] = { -2077,663f, 3344,514f, 30f };
			vVar46[5] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140,5f;
			vVar0[6] = { -2861,755f, 3352,661f, 30f };
			vVar46[6] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7] = { -2005,574f, 3364,533f, 30f };
			vVar46[7] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8] = { -1682,235f, 3004,285f, 30f };
			vVar46[8] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248,75f;
			vVar0[9] = { -2393,295f, 2936,406f, 31,6801f };
			vVar46[9] = { -2453,037f, 3006,863f, 52,31003f };
			fVar92[9] = 128f;
			vVar0[10] = { -2347,185f, 3023,83f, 31,56573f };
			vVar46[10] = { -2517,33f, 2989,063f, 49,95644f };
			fVar92[10] = 140f;
			vVar0[11] = { -2259,922f, 3358,04f, 29,99972f };
			vVar46[11] = { -2299,772f, 3385,79f, 38,06014f };
			fVar92[11] = 16f;
			vVar0[12] = { -2476,309f, 3363,914f, 31,67933f };
			vVar46[12] = { -2431,981f, 3287,669f, 39,97826f };
			fVar92[12] = 214,25f;
			vVar0[13] = { -2103,081f, 2797,783f, 29,37864f };
			vVar46[13] = { -2096,821f, 2874,423f, 57,80989f };
			fVar92[13] = 65,75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9].f_2 = (vVar46[9].f_2 + IntToFloat(iVar111));
			vVar46[10].f_2 = (vVar46[10].f_2 + IntToFloat(iVar111));
			vVar46[11].f_2 = (vVar46[11].f_2 + IntToFloat(iVar111));
			vVar46[12].f_2 = (vVar46[12].f_2 + IntToFloat(iVar111));
			vVar46[13].f_2 = (vVar46[13].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0] = { 1541,607f, 2527,555f, 40f };
			vVar46[0] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1] = { 1788,879f, 2445,727f, 40f };
			vVar46[1] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88,5f;
			vVar0[2] = { 1601,157f, 2436,244f, 40f };
			vVar46[2] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133,25f;
			vVar0[3] = { 1706,331f, 2407,597f, 40f };
			vVar46[3] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104,5f;
			vVar0[4] = { 1712,452f, 2756,218f, 40f };
			vVar46[4] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121,75f;
			vVar0[5] = { 1830,228f, 2661,24f, 40f };
			vVar46[5] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84,5f;
			vVar0[6] = { 1559,05f, 2632,22f, 40f };
			vVar46[6] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103,75f;
			vVar0[7] = { 1612,021f, 2716,869f, 40f };
			vVar46[7] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104,25f;
			vVar0[8] = { 1809,872f, 2729,827f, 40f };
			vVar46[8] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9] = { 1818,789f, 2605,948f, 40f };
			vVar46[9] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51,25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0] = { 3411,002f, 3663,185f, 20f };
			vVar46[0] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45,75f;
			vVar0[1] = { 3426,66f, 3733,078f, 20f };
			vVar46[1] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2] = { 3446,036f, 3795,688f, 20f };
			vVar46[2] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81,5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0] = { 526,053f, -3391,497f, -10f };
			vVar46[0] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1] = { 459,4397f, -3199,99f, 4,819676f };
			vVar46[1] = { 593,8928f, -3199,998f, 30,06926f };
			fVar92[1] = 170f;
			vVar0[2] = { 552,8467f, -3111,054f, 4,819394f };
			vVar46[2] = { 585,3137f, -3111,844f, 17,56923f };
			fVar92[2] = 12,5f;
			vVar0[3] = { 598,4666f, -3140,147f, 4,819257f };
			vVar46[3] = { 597,4973f, -3117,063f, 17,31926f };
			fVar92[3] = 9,75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0] = { -1108,55f, -570,8798f, 20f };
			vVar46[0] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1] = { -1201,378f, -485,9673f, 20f };
			vVar46[1] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2] = { -985,6311f, -525,4233f, 20f };
			vVar46[2] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3] = { -1055,849f, -477,8226f, 20f };
			vVar46[3] = { -1073,333f, -498,717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0] = { 461,5684f, -984,572f, 29,43951f };
			vVar46[0] = { 471,17f, -984,4292f, 40,14212f };
			fVar92[0] = 7,75f;
			vVar0[1] = { 457,3404f, -984,756f, 34,43951f };
			vVar46[1] = { 457,2084f, -993,7189f, 29,38958f };
			fVar92[1] = 14,75f;
			vVar0[2] = { 477,6227f, -986,6f, 40,00819f };
			vVar46[2] = { 424,8687f, -986,3279f, 48,71241f };
			fVar92[2] = 31,5f;
			vVar0[3] = { 474,3889f, -974,4613f, 39,55761f };
			vVar46[3] = { 474,0358f, -1021,972f, 49,10033f };
			fVar92[3] = 30,5f;
			vVar0[4] = { 442,1768f, -974,1888f, 29,68951f };
			vVar46[4] = { 442,1855f, -979,8635f, 33,43951f };
			fVar92[4] = 6,75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar109], vVar46[iVar109], fVar92[iVar109], iVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_413()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iLocal_3259 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
	}
}

void func_414()
{
	if (iLocal_3351 == 1)
	{
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 > 1 && iLocal_3475 == 0)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -828,6987f, -2938,073f, 12,21745f, -807,6911f, -2905,148f, 16,35626f, 28f, 0, true, 0))
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 6)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3283))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_3288))
				{
					if (func_16(unk_0x16F2683693E537C9(), iLocal_3283, 1) > 100f)
					{
						func_236("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 == 2)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_3194 + 7000 && iLocal_3508 == 0)
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3258))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_3258) > 62000f && unk_0x9901AABAC4D4C590(iLocal_3258) < 77000f)
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -1219f, -2570f, 13f, true) < 210f)
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
								{
									if (unk_0xD9522BA9E27E1349(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) < 200f && unk_0xD9522BA9E27E1349(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) > 125f)
									{
										if (iLocal_3507 == 0)
										{
											iLocal_3197 = unk_0x1C0640BA9A7327B3();
											iLocal_3507 = 1;
										}
										if (iLocal_3507 == 1 && unk_0x1C0640BA9A7327B3() > iLocal_3197 + 4000)
										{
											func_236("TRV4_FAIL1");
										}
									}
									else if (iLocal_3507 == 1)
									{
										iLocal_3507 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 5 || iLocal_3180 == 6)
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -928,9f, -2935f, 13f, true) < 5f && !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (func_412(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2, 200, 0))
				{
					func_236("TRV4_FAIL2");
				}
				else if (!func_211("TRV4_HELP3"))
				{
					func_417("TRV4_HELP3");
				}
			}
			else if (func_211("TRV4_HELP3"))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_3258))
		{
			if (!unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0xC844350D5D58C99A(iLocal_3222))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
					{
						unk_0xE121AE1BBF90E186(iLocal_3222, false);
						unk_0xD458AC1C1D29C3B4(iLocal_3222, 0, 0);
					}
				}
			}
		}
		if (iLocal_3360 == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3222))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					func_236("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3352 == 1)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
				{
					if (func_13(unk_0x16F2683693E537C9(), iLocal_3222) > 300f)
					{
						if (iLocal_3436 == 1)
						{
							unk_0x790015DC92C918E2();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3436 = 0;
						}
					}
					else if (iLocal_3436 == 0)
					{
						iLocal_3436 = 1;
					}
					if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_3258) < 40000f)
							{
								if (func_13(unk_0x16F2683693E537C9(), iLocal_3222) > 400f)
								{
									func_236("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0x16F2683693E537C9(), iLocal_3222) > 350f)
							{
								func_236("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3182 == 3)
			{
				if (iLocal_3476 == 1)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -934,4f, -2927,2f, 13,2f, true) > 25f || unk_0x1C0640BA9A7327B3() > iLocal_3195 + 12000)
					{
						func_236("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_3258, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_3258))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 111509f)
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1070,838f, -2942,241f, 12,19534f, -1009,038f, -2977,609f, 17,44443f, 89,5f, 0, true, 0))
						{
							func_236("TRV4_FAIL1");
						}
					}
					if (unk_0x9901AABAC4D4C590(iLocal_3258) > 122000f)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							if (unk_0x377BE9A1BF38C7CE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
							{
								if (iLocal_3509 == 0)
								{
									iLocal_3198 = unk_0x1C0640BA9A7327B3();
									iLocal_3509 = 1;
								}
								if (iLocal_3509 == 1)
								{
									if (unk_0x1C0640BA9A7327B3() > iLocal_3198 + 4000)
									{
										func_236("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3509 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 2)
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -803,4108f, -2173,417f, -1,911488f, -605,6846f, -2358,229f, 27,32842f, 250f, 0, true, 0))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3437 == 1)
		{
			if (func_416())
			{
				func_415();
			}
		}
	}
}

void func_415()
{
	func_423(unk_0x16F2683693E537C9(), 0);
	func_419();
}

int func_416()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return 1;
	}
	return 0;
}

void func_417(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_418(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, unk_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_419()
{
	func_425(24, 1);
	unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0);
	unk_0xE342F209E49C5314(-1042,5f, -500f, 41f, -1019,5f, -475f, 34f, true, 1);
	func_420();
	func_210(&uLocal_28, 0, 0);
	unk_0xB975E4541DDAB1F5(0);
	unk_0x5C2EBB66AD2EA5FF(0);
	unk_0x8C26F31DFF77D124();
	if (unk_0xC844350D5D58C99A(iLocal_3271))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_3271);
	}
	func_418(0);
	if (unk_0x49083FDB78AC0509(iLocal_3221))
	{
		unk_0xDDABC98CFF1A4C60(iLocal_3221);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3222))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3222))
		{
			unk_0xFADC0A217229F6B5(iLocal_3222, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3222);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3228))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3228))
		{
			unk_0xFADC0A217229F6B5(iLocal_3228, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3228);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3245))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3245))
		{
			unk_0xFADC0A217229F6B5(iLocal_3245, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3245);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3246))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3246))
		{
			unk_0xFADC0A217229F6B5(iLocal_3246, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3246);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3247))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3247))
		{
			unk_0xFADC0A217229F6B5(iLocal_3247, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3247);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3248))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3248))
		{
			unk_0xFADC0A217229F6B5(iLocal_3248, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3248);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3249))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3249))
		{
			unk_0xFADC0A217229F6B5(iLocal_3249, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3249);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3250))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3250))
		{
			unk_0xFADC0A217229F6B5(iLocal_3250, true);
		}
		unk_0x6DAD7906B73F064D(&iLocal_3250);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3223[0]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3223[0], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3223[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[1]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3223[1]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3223[1], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3223[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[2]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3223[2]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3223[2], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3223[2]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3223[3]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3223[3]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3223[3], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3223[3]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_3229[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(uLocal_3229[0]))
		{
			unk_0xFADC0A217229F6B5(uLocal_3229[0], true);
		}
		unk_0x6DAD7906B73F064D(&(uLocal_3229[0]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_3229[1]))
	{
		if (!unk_0xEB6A8945D1AC98A1(uLocal_3229[1]))
		{
			unk_0xFADC0A217229F6B5(uLocal_3229[1], true);
		}
		unk_0x6DAD7906B73F064D(&(uLocal_3229[1]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_3229[2]))
	{
		if (!unk_0xEB6A8945D1AC98A1(uLocal_3229[2]))
		{
			unk_0xFADC0A217229F6B5(uLocal_3229[2], true);
		}
		unk_0x6DAD7906B73F064D(&(uLocal_3229[2]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[0]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[0], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[1]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[1]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[1], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[2]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[2]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[2], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[2]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[3]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[3]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[3], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[3]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[4]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[4]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[4], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[4]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[5]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[5]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[5], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[5]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[6]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[6]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[6], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[6]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[7]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[7]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[7], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[7]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[8]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[8]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[8], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[8]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[9]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[9]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[9], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[9]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3233[10]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3233[10]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3233[10], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3233[10]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3251[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3251[0]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3251[0], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3251[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3254[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3254[0]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3254[0], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3254[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3254[1]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_3254[1]))
		{
			unk_0xFADC0A217229F6B5(iLocal_3254[1], true);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_3254[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3258))
	{
		unk_0x046C362CF15F1935(&iLocal_3258);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3259))
	{
		if (unk_0x9C77D2D0559097F0(iLocal_3259, 0))
		{
			unk_0x046C362CF15F1935(&iLocal_3259);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3264))
	{
		unk_0x046C362CF15F1935(&iLocal_3264);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3265))
	{
		unk_0x046C362CF15F1935(&iLocal_3265);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3266))
	{
		unk_0x046C362CF15F1935(&iLocal_3266);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3267))
	{
		unk_0x046C362CF15F1935(&iLocal_3267);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3271))
	{
		unk_0x046C362CF15F1935(&iLocal_3271);
	}
	if (unk_0xC844350D5D58C99A(iLocal_3275))
	{
		if (unk_0x9C77D2D0559097F0(iLocal_3275, 0))
		{
			unk_0x046C362CF15F1935(&iLocal_3275);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3279[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3279[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3260[0]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3260[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3260[1]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3260[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3279[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3279[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3268[0]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3268[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3268[1]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3268[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3272[0]))
	{
		unk_0x046C362CF15F1935(&(iLocal_3272[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_3263))
	{
		unk_0x046C362CF15F1935(&iLocal_3263);
	}
	unk_0x38DC636F3D2D2FA8("TRV4_START");
	unk_0x38DC636F3D2D2FA8("TRV4_GAMEPLAY_START");
	unk_0x38DC636F3D2D2FA8("TRV4_START_CS_SKIP");
	unk_0x38DC636F3D2D2FA8("TRV4_START_RT");
	unk_0x38DC636F3D2D2FA8("TRV4_FOOT_CHASE_RT");
	unk_0x38DC636F3D2D2FA8("TRV4_EVADE_RT");
	unk_0x38DC636F3D2D2FA8("TRV4_CAR_ENTERED");
	unk_0x38DC636F3D2D2FA8("TRV4_AIRPORT_ENTERED");
	unk_0x38DC636F3D2D2FA8("TRV4_CHASE");
	unk_0x38DC636F3D2D2FA8("TRV4_JET_ENTERED");
	if (unk_0x76395FF5E8D5E643(iLocal_3220))
	{
		unk_0xA4A8625CC710BC1F(iLocal_3220);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_3763))
	{
		unk_0xB2C7809F92540947(iLocal_3763, 0);
	}
	unk_0x053C926E5E341906();
	unk_0xE17FDF9E3068281B(&iLocal_3293);
	unk_0xF5A41F3D3B38EFE3("digitalOverlay");
	unk_0xF858EFDE1871B5F2(-617f, -2274f, 0f, -406,01f, -2044f, 15f, true, 1);
	unk_0xF858EFDE1871B5F2(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, 1);
	if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
	{
		unk_0xA19A5ADE229B4734("Trev4_5", 0, 0,5f, 1f);
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	unk_0x9A82EEAF6CA12AEE(1f);
	unk_0xBFE31971E49FA500(true);
	unk_0x8BCB70EB440DED83(true);
	unk_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
	func_293(0);
	unk_0xF3039DE1FDB4F6FD(true);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_420()
{
	Global_61541 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61542[iVar0] = 0;
		iVar0++;
	}
}

void func_421()
{
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_432(0))
	{
		if (!func_422())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_239(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
				return;
			}
		}
		else
		{
			func_244();
		}
	}
}

int func_422()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_423(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != -1569615261)
			{
				if (!func_424(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_98781 > 0)
	{
		Global_105187.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_102203.f_21[iParam1] = iVar0;
	}
}

int func_424(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (Global_98781 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_105187.f_812[iParam0][iVar0] == iParam1)
			{
				if (Global_105187.f_812[iParam0][iVar0].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_105187.f_812[iParam0].f_221[iVar0] == iParam1)
			{
				if (Global_105187.f_812[iParam0].f_221[iVar0].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_102203.f_812[iParam0][iVar0] == iParam1)
			{
				if (Global_102203.f_812[iParam0][iVar0].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_102203.f_812[iParam0].f_221[iVar0] == iParam1)
			{
				if (Global_102203.f_812[iParam0].f_221[iVar0].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_425(int iParam0, bool bParam1)
{
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_429(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_428(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_426(iParam0))
			{
				func_428(iParam0, 0);
			}
		}
		unk_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_426(int iParam0)
{
	Var0 = { func_427(iParam0) };
	if (Var0.f_1 != -1 && unk_0xEAE0D21A50E6C7F4(Global_37208[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_427(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_428(int iParam0, bool bParam1)
{
	Var0 = { func_427(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_37208[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_37208[Var0.f_1]), Var0);
	}
}

var func_429(int iParam0, int iParam1)
{
	Var0 = { func_430(iParam0) };
	*iParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = { func_431(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = { func_431(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = { func_431(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = { func_431(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = { func_431(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = { func_431(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = { func_431(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049922[34].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = { func_431(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = { func_431(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = { func_431(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = { func_431(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = { func_431(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = { func_431(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = { func_431(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = { func_431(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = { func_431(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar5 = { func_431(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar5 = { func_431(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar5 = { func_431(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar5 = { func_431(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar5 = { func_431(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar5 = { func_431(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar5 = { func_431(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar5 = { func_431(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar5 = { func_431(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar5 = { func_431(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar5 = { func_431(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar5 = { func_431(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar5 = { func_431(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar5 = { func_431(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar5 = { func_431(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar5 = { func_431(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar5 = { func_431(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar5 = { func_431(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199,9716f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173,1165f, -1003,28f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604,664f, -3012,583f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505,783f, -3012,587f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630,4205f, -236,7843f, 37,057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182,5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009,5f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976,6364f, 70,29476f, 115,1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479,3f, -273,9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48,5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497,7f, -312,8f, -69,9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523,4f, -270f, -58,7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504,4f, -257,2f, -39,1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281,4f, -64,7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488,3f, -267,4f, -70,6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519,9f, -255,3f, -24,1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572,9f, -253,4f, -64,7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_431(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

bool func_432(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

