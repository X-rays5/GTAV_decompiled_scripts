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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0,0375f;
	fLocal_34 = 0,17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = { 1691,228f, 3251,785f, 44,2574f };
	vLocal_48 = { 2,5652f, 0f, -4,1481f };
	vLocal_517 = { 500f, 500f, 500f };
	iLocal_520 = -1;
	iLocal_529 = 1;
	fLocal_537 = 0,008f;
	fLocal_538 = 0,013f;
	fLocal_558 = ((0,05f + 0,275f) - 0,01f);
	fLocal_2074 = -1f;
	iLocal_2075 = 1;
	fLocal_2248 = 0,2f;
	fLocal_2249 = 0,2f;
	fLocal_2262 = 0f;
	cLocal_2275 = "SPR_UI_FAILD";
	sLocal_2276 = "SPR_UI_FRETRY";
	sLocal_2304 = "CHECKPOINT_NORMAL";
	sLocal_2305 = "CHECKPOINT_MISSED";
	sLocal_2306 = "CHECKPOINT_PERFECT";
	vLocal_2307 = { 1694,74f, 3276,502f, 41,2796f };
	vLocal_2310 = { 8,79494f, 0,59893f, 154,8464f };
	bLocal_2407 = true;
	bLocal_2408 = true;
	bLocal_2410 = true;
	vLocal_5280 = { -1497,708f, -3449,576f, 7,3477f };
	if (unk_0x2EBF608FFE6CA406(114))
	{
		func_599();
	}
	unk_0x7798376279BB5369(1);
	Local_2321.f_1 = 0;
	Local_2321.f_5 = 0;
	Local_2321.f_6 = 0;
	while (true)
	{
		func_598();
		switch (Local_2321.f_1)
		{
			case 0:
				if (!func_587())
				{
					Local_2321.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2321.f_1 = 2;
				}
				break;
			
			case 2:
				func_599();
				break;
		}
		wait(0);
	}
}

int func_1()
{
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
	}
	if (unk_0xC844350D5D58C99A(Local_51.f_1))
	{
		if (!unk_0x437347B10A200C4B(Local_51.f_1, 0))
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_51.f_1, 0))
			{
				if (unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
				{
					Local_51.f_1 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
				}
			}
		}
	}
	else if (unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
	{
		Local_51.f_1 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
	}
	else
	{
		Local_51.f_1 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, -2122757008, 0);
	}
	if (Local_2412.f_2861 != 0)
	{
		Local_2412.f_2862 = (Local_2412.f_2862 - 25);
		if (Local_2412.f_2862 <= 0)
		{
			unk_0xE223EB8FE6F8CC15(Local_2412.f_2861);
			Local_2412.f_2861 = 0;
			bLocal_2277 = false;
		}
		else
		{
			if (bLocal_2277)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_584(func_585(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0xF0B0A50DF3EA0E70(Local_2412.f_2861, iVar0, iVar1, iVar2, func_583(ceil((1,5f * IntToFloat(Local_2412.f_2862))), 255));
			unk_0xF08C5AE8AC5C7427(Local_2412.f_2861, iVar0, iVar1, iVar2, Local_2412.f_2862);
		}
	}
	func_582();
	unk_0x3F44493428307317("AMMUNATION");
	unk_0x38C3A68D7861DCFD(0, 99, 1);
	unk_0x38C3A68D7861DCFD(0, 100, 1);
	if (Local_2321.f_6 == 4)
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f);
		if (unk_0xDF1306B443CD3D15(Local_51.f_1, 0))
		{
			if (unk_0x4E861BC5B1EDA7BD(Local_51.f_1))
			{
				unk_0x98B861C98966897A(Local_51.f_1);
			}
		}
	}
	switch (Local_2321.f_6)
	{
		case 0:
			unk_0x5CEB4DB888A62073(false);
			Local_2321 = -1;
			Local_51.f_10 = 0;
			unk_0xE342F209E49C5314(1734,802f, 3224,105f, 41,3709f, 1762,067f, 3258,69f, 40,5188f, false, 1);
			if (unk_0xC844350D5D58C99A(Local_51.f_1))
			{
				unk_0x71EDC33E5A423750(Local_51.f_1, 1);
				Local_2412.f_2859 = 0;
				Local_2321.f_6 = 3;
			}
			else
			{
				Local_2321.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2321.f_6 = 18;
			break;
		
		case 2:
			if (unk_0xC844350D5D58C99A(Local_51.f_1))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 512);
				unk_0x71EDC33E5A423750(Local_51.f_1, 1);
				Local_2412.f_2859 = 0;
				Local_2321.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2412)
			{
			}
			else if ((unk_0x9F4FE516EAACCFC5(iLocal_2046) && unk_0xFBB4F23D534EB790(iLocal_2046)) && unk_0x0F1CCD77290EE12F())
			{
				if (unk_0x9F4FE516EAACCFC5(Local_2412.f_2858))
				{
					unk_0x9A8DDC7C522F5BF5(Local_2412.f_2858, 0);
				}
				unk_0x9A1335ECD7BD117F("MinigameTransitionOut");
				unk_0x82A772610883F395("MinigameTransitionIn", 0, 1);
				Local_2412.f_2858 = unk_0xAE06CCC36C49929C(26379945, vLocal_45, vLocal_48, 34,9705f, 1, 2);
				unk_0x0185A047F396C3B9(0);
				unk_0xF3039DE1FDB4F6FD(false);
				unk_0x82A772610883F395("MinigameTransitionOut", 0, 0);
				unk_0x608A456FDD8A83D8(iLocal_2046, vLocal_45.x, vLocal_45.y, (vLocal_45.z + 1000f));
				unk_0x5F3CBA6EB9341C90(iLocal_2046, 90f, vLocal_48.y, vLocal_48.z, 2);
				unk_0xF1E4C781086FABC1(Local_2412.f_2858, iLocal_2046, 500, 1, 1);
				unk_0x4D7F4CC43D4D0DE3(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			else
			{
				func_581(500);
				if (unk_0x9F4FE516EAACCFC5(Local_2412.f_2858))
				{
					unk_0x9A8DDC7C522F5BF5(Local_2412.f_2858, 0);
				}
				Local_2412.f_2858 = unk_0xAE06CCC36C49929C(26379945, vLocal_45, vLocal_48, 34,9705f, 1, 2);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			func_580(&iLocal_2297);
			func_579(1);
			unk_0x066C43E677C08D5C();
			Local_2321.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(Local_51.f_1, 0))
			{
				unk_0x56FDC9ADE35F7DB0(Local_51.f_1, true, false, 0);
			}
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x38C3A68D7861DCFD(2, 199, 1);
			}
			unk_0x38C3A68D7861DCFD(2, 200, 1);
			unk_0xBFE31971E49FA500(false);
			Local_2412.f_2 = Local_2412;
			if (Local_2412)
			{
				if (unk_0xC844350D5D58C99A(Local_2412.f_358[0].f_9))
				{
					unk_0x71EDC33E5A423750(Local_2412.f_358[0].f_9, 4);
				}
				iLocal_1990 = 0;
				Local_2412 = 0;
				func_548();
				Local_2321.f_6 = 8;
			}
			else if (Local_2412.f_2859)
			{
				if (unk_0x1963B11DE70153E0())
				{
					if ((Local_2412.f_2859 && unk_0xB9132A06AE472728(2, 202)) && timera() > 500)
					{
						unk_0x22293E611B2408F1(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2412.f_2859 = 0;
						Local_2412.f_2860 = 1;
						func_547(&(Local_51.f_119));
						settimera(0);
					}
					if (!Local_2412.f_2860 && func_546(&uLocal_1550))
					{
						Local_2412.f_2860 = 1;
						func_544(Local_2412.f_2860);
					}
					func_481(&(Local_51.f_118), Global_110668, &(Local_51.f_24[Global_110668]));
				}
				else if (func_471(&iLocal_1987, 0))
				{
					Local_2412.f_2859 = 0;
					iLocal_1987 = 0;
					func_547(&(Local_51.f_119));
					settimera(0);
				}
			}
			else
			{
				if ((func_432(&Local_2412, 0) && !iLocal_527) && !bLocal_526)
				{
					func_547(&(Local_51.f_119));
				}
				if (iLocal_530 && unk_0x1963B11DE70153E0())
				{
					func_547(&(Local_51.f_119));
					iLocal_530 = 0;
				}
				if ((((!Local_2412.f_2859 && !iLocal_527) && !bLocal_526) && (iLocal_529 || !unk_0x1963B11DE70153E0())) && (unk_0xB9132A06AE472728(2, 211) || unk_0x9A01369A10646AFE(2, 211)))
				{
					Local_2412.f_2859 = 1;
					unk_0x22293E611B2408F1(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_431(&uLocal_1550);
					Local_2412.f_2860 = func_546(&uLocal_1550);
					func_544(Local_2412.f_2860);
					settimera(0);
				}
				if (func_372(&uLocal_5275, &(Local_2412.f_1)))
				{
					iLocal_1990 = 0;
					if (Local_51.f_10 != -1)
					{
						func_364();
						func_548();
						if (unk_0x5A91F08DF773C39D(Local_51.f_1, vLocal_2307, 5f, 5f, 5f, false, true, 0))
						{
							if (!unk_0x437347B10A200C4B(Local_51.f_1, 0))
							{
								func_363(&iLocal_5277);
								Local_2321.f_6 = 8;
							}
						}
						else if (!unk_0x437347B10A200C4B(Local_51.f_1, 0))
						{
							Local_2321.f_6 = 8;
						}
					}
					else
					{
						Local_2321.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0x3FC8DBCC154CA56B();
			if (unk_0xDF1306B443CD3D15(Local_51.f_1, 0))
			{
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				Local_2321.f_6 = 18;
			}
			else
			{
				if (unk_0xC844350D5D58C99A(Local_2412.f_358[0].f_9))
				{
					unk_0x1E9649458B15960F(Local_2412.f_358[0].f_9, false);
				}
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_2307, 1, false, 0, 1);
				unk_0xC023D1C4BF532815(unk_0x16F2683693E537C9(), vLocal_2310, 2, 1);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					unk_0xB9FD7450C0DAB575(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1084227584);
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				if (unk_0xC844350D5D58C99A(Local_2412.f_358[0].f_9))
				{
					if (!unk_0xEB880D98B5988D0C())
					{
						unk_0xD67D6A3F0D653D93(vLocal_2307, unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()), 500f, 0);
					}
					if (unk_0x68367101660E33F0())
					{
						unk_0x486B4ADE317F0689();
						Local_2321.f_6 = 18;
					}
				}
				else
				{
					Local_2321.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0x9501364A300048C6();
			if (Local_51.f_10 == 0)
			{
				unk_0xC55F2A0377488064(Local_51.f_1);
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				unk_0x56FDC9ADE35F7DB0(Local_51.f_1, true, true, 0);
				unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_51.f_1, -1);
				unk_0x51B954DAB1BCAF73(Local_51.f_1);
				func_359();
				iLocal_2046 = unk_0xAE06CCC36C49929C(26379945, 1702,487f, 3279,545f, 41,9968f, -2,9399f, 0f, 110,4428f, 45,0218f, 1, 2);
				unk_0xE3BB8E05FCEB3FBE(Local_2412.f_2858, false);
				Local_2321.f_6 = 9;
			}
			else if (func_358(1000))
			{
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0x51B954DAB1BCAF73(Local_51.f_1);
				unk_0xC55F2A0377488064(Local_51.f_1);
				if (unk_0x757EF87A33649210())
				{
					func_359();
					Local_2321.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0xFBB4F23D534EB790(iLocal_2046) && unk_0xFA06B985B30FB0FC(iLocal_2046)) || (unk_0xFBB4F23D534EB790(Local_2412.f_2858) && unk_0xFA06B985B30FB0FC(Local_2412.f_2858))))
			{
				unk_0x04B065D07D2FB5B9(1, 0, 3, 0);
				func_359();
				Local_2321.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2412.f_25 = 0;
			Local_2321.f_6 = 11;
			break;
		
		case 11:
			if (!func_344(&Local_2412))
			{
				func_579(1);
				if (Local_2412.f_2)
				{
					unk_0xD67D6A3F0D653D93(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()), 500f, 0);
				}
				if (Local_51.f_10 == 0)
				{
					func_343("SPR_TAXI_GATE", 10000, 1);
					if (!func_362(iLocal_2288, 16))
					{
						func_335(&Local_2412, 0, 1);
						func_334(&iLocal_2288, 16);
					}
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						unk_0x1E9649458B15960F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), false);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					}
					unk_0x8BCB70EB440DED83(true);
					unk_0xBFE31971E49FA500(true);
					Local_2321.f_6 = 13;
				}
				else
				{
					Local_2321.f_6 = 13;
				}
				Local_2412.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0xEB880D98B5988D0C() || unk_0x68367101660E33F0())
			{
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				unk_0x0185A047F396C3B9(0);
				unk_0xF3039DE1FDB4F6FD(true);
				unk_0x1E9649458B15960F(Local_2412.f_358[0].f_9, false);
				func_359();
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				if (Local_51.f_10 == 0)
				{
					if (func_581(500))
					{
						Local_2412.f_26 = 0;
						Local_2321.f_6 = 14;
					}
				}
				else
				{
					func_333(&Local_2412);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 1065353216);
					if (func_581(500))
					{
						Local_2412.f_26 = 0;
						Local_2321.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2321 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2412))
			{
				return 1;
			}
			iLocal_1990 = 3;
			func_23();
			func_13();
			if (!Local_2412)
			{
				func_10(&(Local_2412.f_6));
				func_9(&(Local_2412.f_358[0]), Local_51.f_3, Local_51.f_6, 0f);
				if (unk_0xC844350D5D58C99A(Local_2412.f_358[0].f_9))
				{
					unk_0xB9FD7450C0DAB575(Local_2412.f_358[0].f_9, 1084227584);
				}
				if (unk_0xD67D6A3F0D653D93(vLocal_45, func_8(vLocal_48), 4500f, 0))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
					while (!unk_0x68367101660E33F0() && func_5(&(Local_2412.f_6)) < 20f)
					{
						wait(0);
					}
					unk_0x486B4ADE317F0689();
					unk_0xF49D1BC9EF1C3EF4(vLocal_45, func_8(vLocal_48));
					func_4(&(Local_2412.f_6));
					Local_2321.f_6 = 15;
				}
				else if (func_2(&(Local_2412.f_6), 20f))
				{
					func_4(&(Local_2412.f_6));
					Local_2321.f_6 = 15;
				}
			}
			else
			{
				Local_2321.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1);
			}
			Local_2412.f_2859 = 0;
			Local_2321.f_6 = 3;
			break;
		
		case 18:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1);
			}
			func_432(&Local_2412, 1);
			if (unk_0x757EF87A33649210())
			{
				func_581(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(int iParam0, float fParam1)
{
	if (func_3(iParam0))
	{
		if (func_5(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_6(bool bParam0)
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

bool func_7(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

Vector3 func_8(vector3 vParam0)
{
	return (-sin(vParam0.z) * cos(vParam0.x)), (cos(vParam0.z) * cos(vParam0.x)), sin(vParam0.x);
}

void func_9(var uParam0, vector3 vParam1, float fParam4, float fParam5)
{
	unk_0xA47B46945FF6DE74(uParam0->f_9, vParam1, 1, false, 0, 1);
	unk_0xD8F6A53F4799FAFE(uParam0->f_9, fParam4);
	unk_0x1AEF7184B203A58D(uParam0->f_9, fParam5);
}

void func_10(int iParam0)
{
	if (!func_3(iParam0))
	{
		func_363(iParam0);
	}
	else
	{
		func_11(iParam0);
	}
}

void func_11(int iParam0)
{
	func_12(iParam0, 0f);
}

void func_12(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_111638.f_19038.f_12[4].f_4 == 1)
	{
		if (Global_111638.f_19038.f_6[4] > 0f)
		{
			if (Global_111638.f_19038.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0].f_10 = iParam1;
		Global_111638.f_10189[iParam0].f_11 = iParam2;
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
		func_15();
	}
}

void func_15()
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
		func_19(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_18() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()
{
	if (func_17(0))
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

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_18()
{
	return Global_30768;
}

int func_19(int iParam0, int iParam1)
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

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
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

int func_21()
{
	return Global_1312745;
}

float func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()
{
	iLocal_2313 = 0;
	iLocal_2314 = 0;
	iLocal_2315 = 0;
	iLocal_2316 = 0;
	iLocal_2317 = 0;
	iLocal_2318 = 0;
	iLocal_2319 = 0;
	iLocal_2320 = 0;
}

int func_24(var uParam0)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_360(&iLocal_2288, 4);
			unk_0x3584F71E5CA29322(2);
			func_332(uParam0);
			uParam0->f_17 = func_331();
			if (Local_51.f_10 == 0)
			{
				if (!func_362(iLocal_2288, 16))
				{
					func_335(uParam0, 0, 1);
					func_335(uParam0, 1, 0);
					func_334(&iLocal_2288, 16);
				}
			}
			else
			{
				func_333(uParam0);
				if (!func_362(iLocal_2288, 16))
				{
					func_335(uParam0, 0, 1);
					func_335(uParam0, 1, 0);
					func_334(&iLocal_2288, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_2302 = 0;
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			unk_0x3584F71E5CA29322(2);
			if (Local_51.f_10 == 0)
			{
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				func_329(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_333(uParam0);
				if (!func_304(&(uParam0->f_14)))
				{
					if (!unk_0x7686B2698B4F28AD())
					{
						unk_0xB3A1B75CB59FEB56(false, true, 3000, 1, 0, 0);
					}
					if (func_362(iLocal_2288, 16))
					{
						func_360(&iLocal_2288, 16);
					}
					unk_0x8BCB70EB440DED83(true);
					func_329(uParam0);
					if (Local_51.f_10 == 0 && (Global_111638.f_19038.f_6[0] > Local_51.f_112[0] || Global_111638.f_19038.f_6[0] == 0f))
					{
						func_303("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_362(iLocal_2288, 1))
			{
				settimera(0);
				func_264(uParam0);
				func_263(&(Local_51.f_119), 0, 0, 1, 1);
				func_262(&(Local_51.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_261(&(Local_51.f_119), 1);
				func_334(&iLocal_2288, 1);
			}
			if (unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(1);
			}
			if (func_260("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x790015DC92C918E2();
			}
			if (unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(1);
			}
			if (func_260("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x790015DC92C918E2();
			}
			settimera(0);
			func_258();
			func_257(0);
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
			unk_0x85A7389D2B63E61A(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x38C3A68D7861DCFD(0, 75, 1);
			func_256(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			unk_0x38C3A68D7861DCFD(0, 75, 1);
			func_254();
			if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
			{
				if (!unk_0x0A059E0DB9253280(uParam0->f_358[0].f_9) && unk_0x9F4FE516EAACCFC5(iLocal_2047))
				{
					unk_0x17D61C69BA58F815(iLocal_2047, 2);
					unk_0x4A4806F9D471E491(uParam0->f_358[0].f_9, false, 0);
					unk_0x1E9649458B15960F(uParam0->f_358[0].f_9, true);
					func_253();
				}
			}
			if (!func_239(uParam0, bLocal_2407, bLocal_2408))
			{
				func_253();
				func_238(0);
				unk_0xA37A90C62806D848(1);
				if (func_362(iLocal_2288, 1))
				{
					func_360(&iLocal_2288, 1);
				}
				func_237(0, 0);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				}
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0x5CEB4DB888A62073(false);
				iLocal_2411 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				func_4(&iLocal_2278);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
			{
				unk_0xA47B46945FF6DE74(uParam0->f_358[0].f_9, vLocal_2307, 1, false, 0, 1);
				unk_0xC023D1C4BF532815(uParam0->f_358[0].f_9, vLocal_2310, 2, 1);
				unk_0x4A4806F9D471E491(uParam0->f_358[0].f_9, true, 0);
				unk_0x38C3A68D7861DCFD(0, 75, 1);
				unk_0xB9FD7450C0DAB575(uParam0->f_358[0].f_9, 1084227584);
				unk_0xE121AE1BBF90E186(uParam0->f_358[0].f_9, false);
			}
			iLocal_2406 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			unk_0xEF45C43067063F18(iLocal_2297, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_362(iLocal_2288, 16))
			{
				func_335(uParam0, 0, 1);
				func_335(uParam0, 1, 0);
				func_334(&iLocal_2288, 16);
				func_257(1);
				func_236(uParam0->f_27[uParam0->f_358[0].f_11]);
			}
			if (uParam0->f_1)
			{
				func_202(uParam0);
				func_200(uParam0);
			}
			else
			{
				func_197(&uLocal_2263, 0);
				func_253();
				unk_0xF3039DE1FDB4F6FD(false);
			}
			if (!func_41(uParam0, Local_51))
			{
				unk_0xC92DB9682A650680("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			unk_0x38C3A68D7861DCFD(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_253();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_362(uLocal_2071, iVar0))
		{
			func_360(&uLocal_2071, iVar0);
		}
		if (func_362(uLocal_2072, iVar0))
		{
			func_360(&uLocal_2072, iVar0);
		}
		if (unk_0xC844350D5D58C99A(iLocal_2059[iVar0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_2059[iVar0]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_2065[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_2065[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2053);
	iVar0 = 0;
	while (iVar0 < iLocal_2053)
	{
		iLocal_2053[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x71199B01895C6202((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(int iParam0)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
}

void func_28(var uParam0)
{
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	unk_0xE121AE1BBF90E186(uParam0->f_358[0].f_9, true);
	unk_0x38C3A68D7861DCFD(0, 75, 1);
	func_39(uParam0);
	if (Local_51 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_358[iVar0]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (Local_51 != 0)
		{
			func_31();
		}
	}
}

void func_31()
{
}

void func_32(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_358[iVar0].f_8, 0))
		{
			if (uParam0->f_358[iVar0].f_8 == unk_0x16F2683693E537C9())
			{
				iVar1 = func_37(Local_51.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0].f_12)
				{
					func_36(Local_51.f_10, uParam0->f_358[iVar0].f_12);
				}
				fVar2 = func_35(Local_51.f_10);
				func_34(Local_51.f_10, to_float(ceil(uParam0->f_358[0].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0].f_13)
				{
					func_33(Local_51.f_10, to_float(ceil(uParam0->f_358[0].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)
{
	Global_111638.f_19038.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_51.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	uVar0 = Global_111638.f_19038.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_111638.f_19038[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	iVar0 = 0;
	iVar0 = Global_111638.f_19038[iParam0];
	return iVar0;
}

void func_38(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0].f_13 > uParam0->f_358[iVar1].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0].f_13 = (uParam0->f_358[0].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0].f_11)) * unk_0x79833B02DBD2A244(0,5f, 2,5f)));
		}
		iVar0++;
	}
}

void func_40(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!func_7(iParam0))
		{
			iParam0->f_2 = (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 2);
		}
	}
}

int func_41(var uParam0, int iParam1)
{
	if (Local_51.f_10 == 0)
	{
		if (uParam0->f_358[0].f_11 == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_362(iLocal_2289, 131072))
			{
				unk_0xB0E9868F5DDD25D3(uParam0->f_358[0].f_9, 4);
				func_360(&iLocal_2289, 131072);
			}
		}
		else if (uParam0->f_358[0].f_11 == 1 && !func_362(iLocal_2289, 131072))
		{
			func_303("SPR_INFO_BON", 10000);
			func_334(&iLocal_2289, 131072);
			if (func_362(iLocal_2289, 262144))
			{
				func_360(&iLocal_2289, 262144);
			}
		}
		else if (uParam0->f_358[0].f_11 == 4 && !func_362(iLocal_2289, 262144))
		{
			func_303("SPR_INFO_RESET", 10000);
			func_334(&iLocal_2289, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_179(uParam0->f_358[0].f_11, uParam0->f_1);
	unk_0x38C3A68D7861DCFD(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1].f_11 < uParam0->f_12)
		{
			bVar23 = false;
			if (uParam0->f_358[iVar1].f_8 == unk_0x16F2683693E537C9())
			{
				bVar23 = true;
			}
			iVar22 = uParam0->f_358[iVar1].f_11;
			if (uParam0->f_358[iVar1].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1)] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar22] };
			}
			if (iVar22 < (uParam0->f_12 - 1))
			{
				Var12 = { uParam0->f_27[iVar22 + 1] };
			}
			else
			{
				Var12 = { Var2 };
			}
			if (iVar22 != uParam0->f_12)
			{
				uParam0->f_358[iVar1].f_13 = (fVar0 - uParam0->f_358[iVar1].f_15);
				if (uParam0->f_358[iVar1].f_13 < 0f)
				{
					uParam0->f_358[iVar1].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1]), bVar23))
			{
				if ((bVar23 && uParam0->f_1) && (Local_51.f_10 != 0 || uParam0->f_358[0].f_11 > 0))
				{
					if (!func_3(&iLocal_2399))
					{
						func_363(&iLocal_2399);
					}
					if (func_5(&iLocal_2402) >= 6,5f)
					{
						if (!unk_0x06F8112AA79C53D9(2, 222))
						{
							func_11(&iLocal_2399);
						}
						else if (func_5(&iLocal_2399) >= 1,5f)
						{
							uParam0->f_1 = 0;
							func_360(&iLocal_2289, 32768);
							uParam0->f_358[0].f_23 = 6;
						}
					}
					else if (unk_0x06F8112AA79C53D9(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6,5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2289, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2289, 32768, 0);
						}
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_358[iVar1].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_51 == 0 && func_3(&iLocal_2284))
					{
						return 1;
					}
					if (bVar23)
					{
						if (uParam0->f_358[iVar1].f_14 != 0f)
						{
							func_363(&(uParam0->f_14));
						}
						if (func_362(iLocal_2288, 8))
						{
							func_335(uParam0, iVar22, 1);
							if (iVar22 < (uParam0->f_12 - 1))
							{
								func_335(uParam0, iVar22 + 1, 0);
							}
							func_360(&iLocal_2288, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var12, uParam0->f_358[iVar1].f_8);
						func_90(&Var2, &Var12);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1]), bVar23, uParam0->f_11);
						}
						bLocal_2277 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1].f_11++;
						iVar22 = uParam0->f_358[iVar1].f_11;
						if (iVar22 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1)] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar22] };
						}
						if (bVar23)
						{
							func_78(uParam0, (iVar22 - 1));
							if (iVar22 == uParam0->f_12)
							{
								iVar24 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_358[0].f_13 > 0f)
									{
										if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
										{
											iVar24 = 1;
										}
										else if (uParam0->f_358[0].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
										{
											iVar24 = 2;
										}
										else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
										{
											iVar24 = 3;
										}
									}
								}
								if (iVar24 == 0)
								{
								}
								if (iVar24 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1].f_11 = (uParam0->f_358[iVar1].f_11 - 1);
									unk_0x790015DC92C918E2();
									sLocal_2276 = "SPR_TIME_FAIL";
									uParam0->f_358[0].f_23 = 0;
								}
							}
							else
							{
								func_335(uParam0, iVar22, 1);
								if (iVar22 < (uParam0->f_12 - 1))
								{
									func_335(uParam0, iVar22 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1].f_14 == 0f)
							{
								if (func_3(&(uParam0->f_14)))
								{
									func_4(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar22 == round((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1].f_14 = 0f;
										func_11(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1].f_11 >= uParam0->f_12)
						{
							if (Local_51 != 2)
							{
								if (!unk_0x437347B10A200C4B(uParam0->f_358[iVar1].f_8, 0))
								{
									func_29(&(uParam0->f_358[iVar1]));
								}
							}
						}
						else
						{
							if (Local_51 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1].f_8, uParam0->f_358[iVar1].f_9, uParam0->f_27[uParam0->f_358[iVar1].f_11], uParam0->f_27[uParam0->f_358[iVar1].f_11].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar25, "Offroad_", 16);
								StringIntConCat(&cVar25, Local_51.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar25, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2410)
									{
										if (!unk_0x437347B10A200C4B(uParam0->f_358[iVar1].f_8, 0) && !unk_0x437347B10A200C4B(uParam0->f_358[iVar1].f_9, 0))
										{
											if (unk_0xD1960163A3042274(uParam0->f_358[iVar1].f_8, -235832601) == 1)
											{
											}
											else
											{
												unk_0x1B901F542DF070CF(uParam0->f_358[iVar1].f_8, uParam0->f_358[iVar1].f_9, &cVar25, 262144, 0, 8, -1, unk_0xD890711CFD5AF100(uParam0->f_358[iVar1].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1].f_8, uParam0->f_358[iVar1].f_9, uParam0->f_27[uParam0->f_358[iVar1].f_11], uParam0->f_27[uParam0->f_358[iVar1].f_11].f_7, iVar1);
									}
								}
							}
							if (Local_51 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar23)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &iLocal_2409);
		func_64(uParam0, &iLocal_2409);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0].f_23 != 0)
		{
			if (Local_51.f_10 == 0)
			{
				if (uParam0->f_358[0].f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)
{
	if (unk_0x0178C60FEA5C5A75())
	{
		unk_0xBFE31971E49FA500(true);
	}
	if (!func_3(&iLocal_2078))
	{
		iLocal_2076 = 0;
		iLocal_2077 = 0;
		func_363(&iLocal_2078);
	}
	if (ceil((uParam0->f_358[0].f_15 * 1000f)) != iLocal_2077)
	{
		iLocal_2076 = (ceil((uParam0->f_358[0].f_15 * 1000f)) - iLocal_2077);
		iLocal_2077 = ceil((uParam0->f_358[0].f_15 * 1000f));
		func_11(&iLocal_2078);
	}
	iVar0 = (floor((func_5(&(uParam0->f_3)) * 100f)) * 10 - ceil((uParam0->f_358[0].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&iLocal_2078) <= 2f)
	{
		if (uParam0->f_358[0].f_11 > 0)
		{
			iVar1 = -iLocal_2076;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = floor((Global_111638.f_19038.f_6[Local_51.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_51.f_106[Local_51.f_10] * 1000f))
	{
		iVar3 = floor((Local_51.f_106[Local_51.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = floor(((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_51.f_112[Local_51.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = floor((Local_51.f_112[Local_51.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)
{
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar22 = 4;
	func_44(iParam0, &Var6, iParam8, iVar22, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = uParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_45(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(5, iVar0);
		Global_1378678.f_3630[iVar0] = iParam0;
		Global_1378678.f_3630.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_3630.f_11[iVar0]), sParam2, 64);
		Global_1378678.f_3630.f_194[iVar0] = uParam3;
		Global_1378678.f_3630.f_183[iVar0] = uParam4;
		Global_1378678.f_3630.f_216[iVar0] = iParam5;
		Global_1378678.f_3630.f_227[iVar0] = iParam6;
		Global_1378678.f_3630.f_270[iVar0] = iParam7;
		Global_1378678.f_3630.f_281[iVar0] = iParam8;
		Global_1378678.f_3630.f_292[iVar0] = iParam9;
		Global_1378678.f_3630.f_303[iVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(3, iVar0);
		Global_1378678.f_2764[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_2764.f_183[iVar0] = uParam3;
		Global_1378678.f_2764.f_172[iVar0] = uParam2;
		Global_1378678.f_2764.f_205[iVar0] = iParam4;
		Global_1378678.f_2764.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[iVar0]), sParam6, 64);
		Global_1378678.f_2764.f_420[iVar0] = iParam7;
		Global_1378678.f_2764.f_453[iVar0] = iParam8;
		Global_1378678.f_2764.f_431[iVar0] = iParam9;
		Global_1378678.f_2764.f_442[iVar0] = iParam10;
		Global_1378678.f_2764.f_464[iVar0] = iParam11;
		Global_1378678.f_2764.f_475[iVar0] = iParam12;
		Global_1378678.f_2764.f_486[iVar0] = iParam13;
		Global_1378678.f_2764.f_497[iVar0] = iParam14;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(0, iVar0);
		Global_1378678.f_1135[iVar0] = iParam0;
		Global_1378678.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = uParam3;
		Global_1378678.f_1135.f_183[iVar0] = uParam4;
		Global_1378678.f_1135.f_216[iVar0] = iParam5;
		Global_1378678.f_1135.f_227[iVar0] = fParam6;
		Global_1378678.f_1135.f_227[iVar0].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = iParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

int func_50(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = uParam3;
		Global_1378678.f_3944.f_172[iVar0] = uParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = fParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_53())
		{
			Global_1378678.f_1130 = 1;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_52())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_52()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return iLocal_2075;
}

void func_55()
{
	Global_1378678.f_1130 = 1;
}

void func_56(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()
{
	if (Local_51 == 0)
	{
		unk_0x4A847DA194A5532B(0, 0, -1);
		unk_0x4A847DA194A5532B(1, 0, -1);
		unk_0x4A847DA194A5532B(2, 0, -1);
		unk_0x4A847DA194A5532B(3, 0, -1);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_358[0].f_9) < 5f)
		{
			if (!func_3(&iLocal_2281))
			{
				func_10(&iLocal_2281);
			}
			else if (func_5(&iLocal_2281) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2289, 8192);
				if (uParam0->f_358[0].f_11 <= (uParam0->f_12 - 1))
				{
					if (unk_0xE4EDC4B0E92C078B(uParam0->f_27[uParam0->f_358[0].f_11].f_5))
					{
						unk_0x9D7CDDB4B55142AF(uParam0->f_27[uParam0->f_358[0].f_11].f_5, 0);
					}
				}
				if (uParam0->f_358[0].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (unk_0xE4EDC4B0E92C078B(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5))
					{
						unk_0x9D7CDDB4B55142AF(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5, 0);
					}
				}
				func_11(&iLocal_2281);
				func_11(&iLocal_2278);
				uParam0->f_1 = 0;
				unk_0x790015DC92C918E2();
				sLocal_2276 = "SPR_RETR_IDLE";
				uParam0->f_358[0].f_23 = 0;
			}
			else if (func_5(&iLocal_2281) > 30f)
			{
				if (!func_362(iLocal_2288, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2288, 32, 0);
				}
			}
		}
		else if (func_3(&iLocal_2281))
		{
			func_360(&iLocal_2288, 32);
			func_11(&iLocal_2281);
		}
	}
	else if (func_3(&iLocal_2281))
	{
		func_360(&iLocal_2288, 32);
		func_11(&iLocal_2281);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
	}
}

void func_64(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		if ((!unk_0xDF1306B443CD3D15(uParam0->f_358[0].f_9, 0) || unk_0x7F6DC62EA9922664(uParam0->f_358[0].f_9) < 5) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_11(&iLocal_2278);
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				unk_0x142CC44DB769B57E(iParam1);
			}
			if (uParam0->f_358[0].f_11 <= (uParam0->f_12 - 1))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_27[uParam0->f_358[0].f_11].f_5))
				{
					unk_0x9D7CDDB4B55142AF(uParam0->f_27[uParam0->f_358[0].f_11].f_5, 0);
				}
			}
			if (uParam0->f_358[0].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5))
				{
					unk_0x9D7CDDB4B55142AF(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0x790015DC92C918E2();
			sLocal_2276 = "SPR_RETR_DES";
			uParam0->f_358[0].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, int iParam1)
{
	if (Local_51 == 0)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
		{
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				unk_0x790015DC92C918E2();
				unk_0x5CEB4DB888A62073(false);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				if (unk_0xE4EDC4B0E92C078B(*iParam1))
				{
					unk_0x142CC44DB769B57E(iParam1);
					if (uParam0->f_358[0].f_11 <= (uParam0->f_12 - 1))
					{
						if (unk_0xE4EDC4B0E92C078B(uParam0->f_27[uParam0->f_358[0].f_11].f_5))
						{
							unk_0x9D7CDDB4B55142AF(uParam0->f_27[uParam0->f_358[0].f_11].f_5, 0);
						}
					}
					if (uParam0->f_358[0].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (unk_0xE4EDC4B0E92C078B(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5))
						{
							unk_0x9D7CDDB4B55142AF(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0x790015DC92C918E2();
				sLocal_2276 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				uParam0->f_358[0].f_23 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", false, -1);
}

void func_67(var uParam0)
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	iVar0 = unk_0x7F6DC62EA9922664(uParam0->f_358[0].f_9);
	if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
	{
		iVar1 = round(unk_0x6EE94F60DA2A2273(uParam0->f_358[0].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_51 == 2)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), uParam0->f_358[0].f_9, 0))
				{
					bLocal_2287 = true;
				}
			}
			if (bLocal_2287)
			{
				if (uParam0->f_27[uParam0->f_358[0].f_11].f_7 == 6 || uParam0->f_27[uParam0->f_358[0].f_11].f_7 == 10)
				{
					if (!unk_0xD17F06053799A7CA())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0xD17F06053799A7CA())
			{
				unk_0x790015DC92C918E2();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
		}
	}
	if (Local_51 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0xD17F06053799A7CA())
			{
				unk_0x790015DC92C918E2();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
		}
	}
}

void func_69()
{
	Global_19671 = 0;
	func_70();
}

void func_70()
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

int func_71()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)
{
	vVar0 = { uParam0->f_27[uParam0->f_358[0].f_11] };
	if (uParam0->f_358[0].f_11 > 0)
	{
		vVar3 = { uParam0->f_27[(uParam0->f_358[0].f_11 - 1)] };
	}
	else
	{
		vVar3 = { 0f, 0f, 0f };
	}
	fVar6 = unk_0x0EB28750412C3A5A(vVar0, vVar3, true);
	fVar7 = fVar6;
	if (uParam0->f_358[0].f_11 == 0)
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	else
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	vVar8 = { unk_0x68F4C0EC296D3901(uParam0->f_358[0].f_8, true) };
	if (func_73(vVar3, 0f, 0f, 0f, 1056964608, 0))
	{
		vVar11 = { vVar0 };
	}
	else
	{
		vVar11 = { unk_0xE3C0A5DBED4FBAB7(vVar8, vVar3, vVar0, 1) };
	}
	fVar14 = unk_0x0EB28750412C3A5A(vVar11, vVar8, true);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_51 == 1)
	{
		if (unk_0x755FF954DAE327E1((vVar11.z - vVar8.z)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		func_11(&iLocal_2278);
		uParam0->f_1 = 0;
		unk_0x790015DC92C918E2();
		func_256(1);
		uParam0->f_358[0].f_23 = 0;
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_262(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0xC92DB9682A650680("MGSP_FAIL");
		sLocal_2276 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			func_303("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2289, 4);
		}
	}
	else
	{
		unk_0x2F23E8033F1ADDD9("SPR_HELP_WARN");
		if (func_362(iLocal_2289, 4))
		{
			func_360(&iLocal_2289, 4);
		}
	}
}

int func_73(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_74()
{
	if (iLocal_1992 == 1)
	{
		if (func_3(&iLocal_2022))
		{
			if (func_5(&iLocal_2022) <= 2,5f)
			{
				iLocal_2073 = "GATEMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1992 = 0;
			}
		}
	}
	if (iLocal_1993 == 1)
	{
		if (func_3(&iLocal_2028))
		{
			if (func_5(&iLocal_2028) <= 2,5f)
			{
				iLocal_2073 = "GATEINNER";
				fLocal_2074 = 1f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1993 = 0;
			}
		}
	}
	if (iLocal_1994 == 1)
	{
		if (func_3(&iLocal_2025))
		{
			if (func_5(&iLocal_2025) <= 2,5f)
			{
				iLocal_2073 = "GATEOUTTER";
				fLocal_2074 = 0f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1994 = 0;
			}
		}
	}
	if (iLocal_1995 == 1)
	{
		if (func_3(&iLocal_2037))
		{
			if (func_5(&iLocal_2037) <= 2,5f)
			{
				iLocal_2073 = "GATEKNIFEINNER";
				fLocal_2074 = 2,5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1995 = 0;
			}
		}
	}
	if (iLocal_1996 == 1)
	{
		if (func_3(&iLocal_2040))
		{
			if (func_5(&iLocal_2040) <= 2,5f)
			{
				iLocal_2073 = "GATEINVERTEDIN";
				fLocal_2074 = 3f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1996 = 0;
			}
		}
	}
	if (iLocal_1997 == 1)
	{
		if (func_3(&iLocal_2031))
		{
			if (func_5(&iLocal_2031) <= 2,5f)
			{
				iLocal_2073 = "GATEKNIFEOUTTER";
				fLocal_2074 = 1,5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1997 = 0;
			}
		}
	}
	if (iLocal_1998 == 1)
	{
		if (func_3(&iLocal_2034))
		{
			if (func_5(&iLocal_2034) <= 2,5f)
			{
				iLocal_2073 = "GATEINVERTEDOUT";
				fLocal_2074 = 2f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1998 = 0;
			}
		}
	}
	if (iLocal_1999 == 1)
	{
		if (func_3(&iLocal_2010))
		{
			if (func_5(&iLocal_2010) <= 2,5f)
			{
				iLocal_2073 = "STUNTKNIFELEFT";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1999 = 0;
			}
		}
	}
	if (iLocal_2000 == 1)
	{
		if (func_3(&iLocal_2010))
		{
			if (func_5(&iLocal_2010) <= 2,5f)
			{
				iLocal_2073 = "STUNTKNIFELEFTHIT";
				fLocal_2074 = 1,5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2000 = 0;
			}
		}
	}
	if (iLocal_2001 == 1)
	{
		if (func_3(&iLocal_2010))
		{
			if (func_5(&iLocal_2010) <= 2,5f)
			{
				iLocal_2073 = "STUNTKNIFELEFTMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2001 = 0;
			}
		}
	}
	if (iLocal_2002 == 1)
	{
		if (func_3(&iLocal_2010))
		{
			if (func_5(&iLocal_2010) <= 2,5f)
			{
				iLocal_2073 = "STUNTKNIFERIGHT";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2002 = 0;
			}
		}
	}
	if (iLocal_2003 == 1)
	{
		if (func_3(&iLocal_2010))
		{
			if (func_5(&iLocal_2010) <= 2,5f)
			{
				iLocal_2073 = "STUNTKNIFERIGHTHIT";
				fLocal_2074 = 1,5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2003 = 0;
			}
		}
	}
	if (iLocal_2004 == 1)
	{
		if (func_3(&iLocal_2010))
		{
			if (func_5(&iLocal_2010) <= 2,5f)
			{
				iLocal_2073 = "STUNTKNIFERIGHTMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2004 = 0;
			}
		}
	}
	if (iLocal_2005 == 1)
	{
		if (func_3(&iLocal_2013))
		{
			if (func_5(&iLocal_2013) <= 2,5f)
			{
				iLocal_2073 = "STUNTINVERTED";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2005 = 0;
			}
		}
	}
	if (iLocal_2006 == 1)
	{
		if (func_3(&iLocal_2013))
		{
			if (func_5(&iLocal_2013) <= 2,5f)
			{
				iLocal_2073 = "STUNTINVERTEDHIT";
				fLocal_2074 = 1,5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2006 = 0;
			}
		}
	}
	if (iLocal_2007 == 1)
	{
		if (func_3(&iLocal_2013))
		{
			if (func_5(&iLocal_2013) <= 2,5f)
			{
				iLocal_2073 = "STUNTINVERTEDMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2007 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!unk_0x437347B10A200C4B(uParam0->f_358[iParam1].f_8, 0))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_358[iParam1].f_9, 0))
		{
			if (unk_0xC42A92762C58E1B9(uParam0->f_358[iParam1].f_8, uParam0->f_358[iParam1].f_9, 0))
			{
				fVar0 = unk_0xD890711CFD5AF100(uParam0->f_358[iParam1].f_9);
				if (uParam0->f_358[0].f_11 == uParam0->f_358[iParam1].f_11)
				{
				}
				else if (uParam0->f_358[iParam1].f_11 > uParam0->f_358[0].f_11)
				{
					fVar0 = (fVar0 * 0,69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (unk_0x82CCEAB29E9451DD(uParam0->f_358[iParam1].f_8, uParam0->f_358[iParam1].f_9))
				{
					if (unk_0xBBA8A868118C90ED(uParam0->f_358[iParam1].f_9, -1, 0))
					{
						unk_0xF821F915BC24D246(uParam0->f_358[iParam1].f_8, uParam0->f_358[iParam1].f_9, -1);
						unk_0x06736587AE5BE33B(uParam0->f_358[iParam1].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, int iParam7)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (Local_51 == 1)
		{
			if (!unk_0x437347B10A200C4B(iParam2, 0))
			{
				unk_0xE9362E4D600DD12A(iParam1, iParam2, vParam3, unk_0xD890711CFD5AF100(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_51 == 2)
		{
			uParam6 = uParam6;
			func_77(uParam0, vParam3, iParam7);
		}
	}
}

void func_77(var uParam0, vector3 vParam1, var uParam4)
{
	uParam0->f_12 = uParam0->f_12;
	vParam1 = { vParam1 };
	uParam4 = uParam4;
}

void func_78(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1]));
	func_81(&(uParam0->f_27[iParam1].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1]));
		func_79(&(uParam0->f_27[iParam1 + 1]));
	}
}

void func_79(var uParam0)
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xE223EB8FE6F8CC15(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_2277)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_584(func_585(iVar3), &iVar0, &iVar1, &iVar2, uParam2);
		unk_0xF0B0A50DF3EA0E70(*uParam1, iVar0, iVar1, iVar2, *uParam2);
		unk_0xF08C5AE8AC5C7427(*uParam1, iVar0, iVar1, iVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_84(int iParam0)
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (Local_51 == 0)
		{
			if (func_3(&iLocal_2022))
			{
				func_89(&iLocal_2022, 3f);
			}
			if (func_3(&iLocal_2016))
			{
				func_89(&iLocal_2016, 3f);
			}
			if (func_3(&iLocal_2010))
			{
				func_89(&iLocal_2010, 3f);
			}
			if (func_3(&iLocal_2019))
			{
				func_89(&iLocal_2019, 3f);
			}
			if (func_3(&iLocal_2013))
			{
				func_89(&iLocal_2013, 3f);
			}
			if (func_3(&iLocal_2025))
			{
				func_89(&iLocal_2025, 3f);
			}
			if (func_3(&iLocal_2028))
			{
				func_89(&iLocal_2028, 3f);
			}
			if (func_3(&iLocal_2031))
			{
				func_89(&iLocal_2031, 3f);
			}
			if (func_3(&iLocal_2034))
			{
				func_89(&iLocal_2034, 3f);
			}
			if (func_3(&iLocal_2037))
			{
				func_89(&iLocal_2037, 3f);
			}
			if (func_3(&iLocal_2040))
			{
				func_89(&iLocal_2040, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1992 = 1;
					func_11(&iLocal_2022);
					break;
				
				case 1:
					iLocal_1993 = 1;
					func_11(&iLocal_2028);
					break;
				
				case 2:
					iLocal_1994 = 1;
					func_11(&iLocal_2025);
					break;
				
				case 3:
					iLocal_1995 = 1;
					func_11(&iLocal_2037);
					break;
				
				case 4:
					iLocal_1996 = 1;
					func_11(&iLocal_2040);
					break;
				
				case 5:
					iLocal_1997 = 1;
					func_11(&iLocal_2031);
					break;
				
				case 6:
					iLocal_1998 = 1;
					func_11(&iLocal_2034);
					break;
				
				case 8:
					iLocal_1999 = 1;
					func_11(&iLocal_2010);
					break;
				
				case 9:
					iLocal_2000 = 1;
					func_11(&iLocal_2019);
					break;
				
				case 10:
					iLocal_2001 = 1;
					func_11(&iLocal_2022);
					break;
				
				case 11:
					iLocal_2002 = 1;
					func_11(&iLocal_2010);
					break;
				
				case 12:
					iLocal_2003 = 1;
					func_11(&iLocal_2019);
					break;
				
				case 13:
					iLocal_2004 = 1;
					func_11(&iLocal_2022);
					break;
				
				case 14:
					iLocal_2005 = 1;
					func_11(&iLocal_2013);
					break;
				
				case 15:
					iLocal_2006 = 1;
					func_11(&iLocal_2019);
					break;
				
				case 16:
					iLocal_2007 = 1;
					func_11(&iLocal_2022);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1,5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2,5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1,5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1,5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1,5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_89(int iParam0, float fParam1)
{
	if (func_3(iParam0))
	{
		func_12(iParam0, (func_5(iParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)
{
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_584(func_585(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xF0B0A50DF3EA0E70(uParam0->f_6, iVar0, iVar1, iVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_584(func_585(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xF0B0A50DF3EA0E70(uParam1->f_6, iVar0, iVar1, iVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(vector3 vParam0, int iParam3, int iParam4)
{
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		fVar2 = unk_0x0EB28750412C3A5A(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam4;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam4 - ceil((IntToFloat((iParam4 - iParam3)) * fVar3)));
		}
	}
	if (iVar1 < iParam3)
	{
		iVar1 = iParam3;
	}
	return iVar1;
}

int func_92()
{
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
	{
		return -1;
	}
	iVar12 = func_100(uParam1, iParam3);
	if (Local_51 == 0)
	{
		if (iVar12 != 17)
		{
			if (iVar12 == 1)
			{
				if (func_99(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_362(iLocal_2320, 262144))
						{
							func_98("Gate_PK", &iLocal_2319);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 262144);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 524288))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 524288);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 1048576))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2319);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_362(iLocal_2320, 262144))
						{
							func_98("Gate_PK", &iLocal_2319);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 262144);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 524288))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 524288);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 1048576))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2319);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x61890296D3AA030F(uParam0->f_358[0].f_9, &uVar0, &uVar3, &vVar6, &uVar9);
					if (vVar6.z <= -0,866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 9;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 4;
							if (!func_362(iLocal_2320, 32768))
							{
								func_98("Gate_PI", &iLocal_2318);
								iLocal_2320 = 0;
								func_334(&iLocal_2320, 32768);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 65536))
							{
								func_98("Con_PI", &iLocal_2318);
								func_334(&iLocal_2320, 65536);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 131072))
							{
								func_98("Con_PI", &iLocal_2318);
								func_334(&iLocal_2320, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2318);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 1;
						if (!func_362(iLocal_2320, 4096))
						{
							func_98("Get_Perf", &iLocal_2315);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 4096);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 8192))
						{
							func_98("Con_Perf", &iLocal_2315);
							func_334(&iLocal_2320, 8192);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 16384))
						{
							func_98("Con_Perf", &iLocal_2315);
							func_334(&iLocal_2320, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2315);
							return iVar12;
						}
					}
				}
			}
			if (iVar12 == 2)
			{
				if (func_99(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_362(iLocal_2320, 64))
						{
							func_98("Gate_Kni", &iLocal_2317);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 64);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 128))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 128);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 256))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2317);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_362(iLocal_2320, 64))
						{
							func_98("Gate_Kni", &iLocal_2317);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 64);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 128))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 128);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 256))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2317);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x61890296D3AA030F(uParam0->f_358[0].f_9, &uVar0, &uVar3, &vVar6, &uVar9);
					if (vVar6.z <= -0,866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 8;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 6;
							if (!func_362(iLocal_2320, 512))
							{
								func_98("Gate_Inv", &iLocal_2316);
								iLocal_2320 = 0;
								func_334(&iLocal_2320, 512);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 1024))
							{
								func_98("Con_Inv", &iLocal_2316);
								func_334(&iLocal_2320, 1024);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 2048))
							{
								func_98("Con_Inv", &iLocal_2316);
								func_334(&iLocal_2320, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2316);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 2;
						if (!func_362(iLocal_2320, 8))
						{
							func_98("Gate_Hit", &iLocal_2314);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 8);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 16))
						{
							func_98("Con_Hit", &iLocal_2314);
							func_334(&iLocal_2320, 16);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 32))
						{
							func_98("Con_Hit", &iLocal_2314);
							func_334(&iLocal_2320, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2314);
							return iVar12;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar12 = 10;
						return iVar12;
					}
					if (uParam1->f_8 == 3)
					{
						iVar12 = 13;
						return iVar12;
					}
					if (uParam1->f_8 == 1)
					{
						iVar12 = 16;
						return iVar12;
					}
				}
				else
				{
					iVar12 = 7;
					if (!func_362(iLocal_2320, 1))
					{
						func_98("Gate_Miss", &iLocal_2313);
						iLocal_2320 = 0;
						func_334(&iLocal_2320, 1);
						return iVar12;
					}
					else if (!func_362(iLocal_2320, 2))
					{
						func_98("Con_Miss", &iLocal_2313);
						func_334(&iLocal_2320, 2);
						return iVar12;
					}
					else if (!func_362(iLocal_2320, 4))
					{
						func_98("Con_Miss", &iLocal_2313);
						func_334(&iLocal_2320, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2313);
						return iVar12;
					}
				}
			}
			return iVar12;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar12 = 10;
					return iVar12;
				}
				if (uParam1->f_8 == 3)
				{
					iVar12 = 13;
					return iVar12;
				}
				if (uParam1->f_8 == 1)
				{
					iVar12 = 16;
					return iVar12;
				}
			}
			else
			{
				iVar12 = 7;
				if (!func_362(iLocal_2320, 1))
				{
					func_98("Gate_Miss", &iLocal_2313);
					iLocal_2320 = 0;
					func_334(&iLocal_2320, 1);
					return iVar12;
				}
				else if (!func_362(iLocal_2320, 2))
				{
					func_98("Con_Miss", &iLocal_2313);
					func_334(&iLocal_2320, 2);
					return iVar12;
				}
				else if (!func_362(iLocal_2320, 4))
				{
					func_98("Con_Miss", &iLocal_2313);
					func_334(&iLocal_2320, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2313);
					return iVar12;
				}
			}
			return iVar12;
		}
	}
	else if (iVar12 != 17)
	{
		return iVar12;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)
{
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (unk_0x5A91F08DF773C39D(iParam2, *uParam0, fVar0, fVar0, fVar0, false, true, 0))
		{
			vVar1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0x68F4C0EC296D3901(iParam2, true), vVar1) - func_95(*uParam0, vVar1)) > 15f)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, sLocal_2305, "HUD_MINI_GAME_SOUNDSET", true);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_96(vector3 vParam0)
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

bool func_97(int iParam0)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	unk_0x61890296D3AA030F(iParam0, &uVar0, &vVar3, &vVar6, &uVar9);
	if (unk_0x755FF954DAE327E1(vVar6.z) > 0,342f)
	{
		return 0;
	}
	return vVar3.z < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_362(*uParam1, 1))
	{
		if (!iLocal_1991)
		{
			iLocal_1991 = 1;
			func_334(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1991 = 0;
			if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_362(*uParam1, 1))
	{
		if (!func_362(*uParam1, 2))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 2))
	{
		if (!func_362(*uParam1, 4))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 4))
	{
		if (!func_362(*uParam1, 8))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 8))
	{
		if (!func_362(*uParam1, 16))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	unk_0x61890296D3AA030F(iParam0, &uVar0, &vVar3, &vVar6, &uVar9);
	if (unk_0x755FF954DAE327E1(vVar6.z) > 0,342f)
	{
		return 0;
	}
	return vVar3.z > 0f;
}

int func_100(var uParam0, int iParam1)
{
	vVar0 = { *uParam0 };
	unk_0x61890296D3AA030F(iParam1, &vVar12, &vVar6, &vVar9, &vVar3);
	vVar15 = { vVar0 - vVar3 };
	fVar18 = unk_0x755FF954DAE327E1(func_95(vVar15, vVar12));
	fVar19 = unk_0x755FF954DAE327E1(func_95(vVar15, vVar9));
	fVar20 = unk_0x755FF954DAE327E1(func_95(vVar15, vVar6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6,5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == unk_0x16F2683693E537C9())
			{
				func_197(&uLocal_2263, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == unk_0x16F2683693E537C9())
			{
				func_197(&uLocal_2263, 0);
			}
			unk_0x4D7F4CC43D4D0DE3(-1, sLocal_2304, "HUD_MINI_GAME_SOUNDSET", true);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0x16F2683693E537C9())
			{
				func_197(&uLocal_2263, 0);
			}
			unk_0x4D7F4CC43D4D0DE3(-1, sLocal_2304, "HUD_MINI_GAME_SOUNDSET", true);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1].f_8)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_358[iVar1].f_8, 0) && !unk_0x437347B10A200C4B(Var2.f_8, 0))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1].f_11)
				{
					fVar191 = func_102(Var2.f_8, uParam0->f_27[Var2.f_11], 1);
					fVar192 = func_102(uParam0->f_358[iVar1].f_8, uParam0->f_27[uParam0->f_358[iVar1].f_11], 1);
					if (fVar191 < fVar192)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1].f_12 = iVar0;
}

float func_102(int iParam0, vector3 vParam1, bool bParam4)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam4);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_303(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	switch (uParam1->f_23)
	{
		case 0:
			func_178(uParam0);
			func_253();
			func_263(&(Local_51.f_119), 0, 0, 1, 1);
			func_262(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_262(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_256(1);
			unk_0xC92DB9682A650680("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_172(&(Local_51.f_321), &(Local_51.f_327), &(uParam0->f_17), cLocal_2275, sLocal_2276, uParam0, 78))
			{
				iLocal_2406 = 0;
				if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
				{
					unk_0x71EDC33E5A423750(uParam0->f_358[0].f_9, 4);
				}
				if (func_260("SPR_HELP_DAMG", 0, 0))
				{
					unk_0x2F23E8033F1ADDD9("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_51.f_321), 1);
				if (*uParam0)
				{
					func_164(0, 0);
					func_163(0, 0);
					func_162();
					if (func_260("SPR_RETR_DES", 0, 0))
					{
						unk_0x2F23E8033F1ADDD9("SPR_RETR_DES");
					}
					func_256(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_164(0, 0);
					func_163(0, 0);
					func_162();
					func_89(&iLocal_2278, 10f);
					func_256(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_154(&(Local_51.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0xBFC0798A6E3417F9(2, 201))
			{
				func_164(0, 0);
				func_163(0, 0);
				func_162();
				iLocal_2411 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				if (func_260("SPR_RETR_DES", 0, 0))
				{
					unk_0x2F23E8033F1ADDD9("SPR_RETR_DES");
				}
				func_256(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (unk_0xBFC0798A6E3417F9(2, 202))
			{
				func_164(0, 0);
				func_163(0, 0);
				func_162();
				iLocal_2411 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
				func_89(&iLocal_2278, 10f);
				func_256(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11] };
			}
			if (bParam2)
			{
				if (unk_0xDF1306B443CD3D15(uParam0->f_358[0].f_9, 0))
				{
					unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
					func_263(&(Local_51.f_119), 0, 0, 1, 1);
					func_262(&(Local_51.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_262(&(Local_51.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0xDF1306B443CD3D15(uParam0->f_358[0].f_9, 0))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		
		case 5:
			if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
			{
				unk_0x71EDC33E5A423750(uParam0->f_358[0].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&iLocal_2278) <= 10f)
			{
				if (bParam2)
				{
					unk_0x3584F71E5CA29322(9);
					unk_0x3584F71E5CA29322(7);
					unk_0x38C3A68D7861DCFD(0, 99, 1);
					unk_0x38C3A68D7861DCFD(0, 100, 1);
					func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0xBFC0798A6E3417F9(2, 201))
					{
						*uParam0 = 1;
						iLocal_2411 = unk_0xD68EA767274B7444();
						unk_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
					else if (unk_0xBFC0798A6E3417F9(2, 202))
					{
						*uParam0 = 0;
						func_89(&iLocal_2278, 10f);
						iLocal_2411 = unk_0xD68EA767274B7444();
						unk_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				unk_0x790015DC92C918E2();
				sLocal_2276 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_358(500))
			{
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_135())
			{
				if (unk_0x757EF87A33649210())
				{
					func_178(uParam0);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
					if (unk_0xC844350D5D58C99A(uParam0->f_358[0].f_9))
					{
						unk_0x37806EBF326ECEE9(uParam0->f_358[0].f_9, 0f, 0f, 0f);
						unk_0xD458AC1C1D29C3B4(uParam0->f_358[0].f_9, unk_0xC08489BCA49ECCA8(uParam0->f_358[0].f_9), 0);
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_133(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
						if (Local_51 == 0)
						{
							unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0].f_8 == uParam1->f_8)
				{
					func_131(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0) && uParam0->f_358[0].f_11 != -1)
				{
					func_130(uParam0->f_27[uParam0->f_358[0].f_11 + 1], uParam0->f_358[0].f_9, uParam0->f_27[uParam0->f_358[0].f_11], uParam0->f_358[0].f_11 == 0);
				}
				unk_0x2FB9A57162E54BAB(0f);
				func_11(&iLocal_2402);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_164(0, 0);
			func_163(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_51.f_3, Local_51.f_6, 0f);
			settimera(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!unk_0xEB880D98B5988D0C() || unk_0x68367101660E33F0())
			{
				uParam0->f_1 = 1;
				func_11(&iLocal_2402);
				func_108(&(uParam0->f_358[iVar0]), 60f, 0);
				if (func_581(500))
				{
					unk_0x486B4ADE317F0689();
					if (!unk_0x437347B10A200C4B(uParam0->f_358[0].f_9, 0))
					{
						unk_0xF821F915BC24D246(uParam0->f_358[0].f_8, uParam0->f_358[0].f_9, -1);
					}
					if (bParam2 && Local_51 == 0)
					{
						func_88(&(uParam0->f_358[0]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (unk_0xEB880D98B5988D0C())
			{
				if (uParam0->f_358[0].f_11 < uParam0->f_12)
				{
					if (func_3(&iLocal_2402))
					{
						if (func_107(&iLocal_2402) >= 3f)
						{
							unk_0x486B4ADE317F0689();
						}
					}
					else
					{
						func_10(&iLocal_2402);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!unk_0x437347B10A200C4B(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&iLocal_2278);
						sLocal_2276 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_178(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)
{
	if (uParam0->f_22 != 0)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), uParam0->f_9, 0))
			{
				if (unk_0x9C66D99E63E8E24C(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == -2122757008)
					{
						if (unk_0xEE9925602B29903C(uParam0->f_9) < 3f || unk_0xE608C809F9416F00(uParam0->f_9))
						{
							if (unk_0x377BE9A1BF38C7CE(uParam0->f_9) && unk_0xEE9925602B29903C(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 3, 10000))
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

float func_107(int iParam0)
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (unk_0xC41A9202669A24C4(uParam0->f_22))
		{
			vVar0 = { unk_0x835730A2D89F6093(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, vVar0.x, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	unk_0x38C3A68D7861DCFD(0, 75, 1);
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return;
	}
	if (unk_0x9C66D99E63E8E24C(iParam0) < fParam1)
	{
		unk_0x1AEF7184B203A58D(iParam0, fParam1);
	}
	vVar0 = { unk_0x835730A2D89F6093(iParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (unk_0x6117725E0134737F() * 45f);
		if (vVar0.x < -fVar4)
		{
			bVar3 = true;
			vVar0.x = (vVar0.x + fVar4);
		}
		else if (vVar0.x < fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		else if (vVar0.x > fVar4)
		{
			bVar3 = true;
			vVar0.x = (vVar0.x - fVar4);
		}
		else if (vVar0.x > fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y < -fVar4)
		{
			bVar3 = true;
			vVar0.y = (vVar0.y + fVar4);
		}
		else if (vVar0.y < fParam4)
		{
			bVar3 = true;
			vVar0.y = fParam4;
		}
		else if (vVar0.y > fVar4)
		{
			bVar3 = true;
			vVar0.y = (vVar0.y - fVar4);
		}
		else if (vVar0.y > fParam4)
		{
			bVar3 = true;
			vVar0.y = fParam4;
		}
	}
	else
	{
		if (vVar0.x != fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y != fParam4)
		{
			bVar3 = true;
			vVar0.y = fParam4;
		}
	}
	if (bVar3)
	{
		unk_0xC023D1C4BF532815(iParam0, vVar0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_9))
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_9, 0) || !unk_0xDF1306B443CD3D15(uParam0->f_9, 0))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x327AAEE25F323797(uParam0->f_8);
					unk_0x73270B3C9CC833FD(uParam0->f_9, true, 1);
					unk_0xA954465BA6FDEFE2(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xA47B46945FF6DE74(uParam0->f_8, uParam0->f_16, 1, false, 0, 1);
				}
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0x73270B3C9CC833FD(uParam0->f_9, true, 1);
					unk_0xA954465BA6FDEFE2(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		unk_0xD458AC1C1D29C3B4(uParam0->f_9, 1000, 0);
		unk_0x51B954DAB1BCAF73(uParam0->f_9);
		unk_0x5DAB50E08C3C504A(uParam0->f_9, 1000f);
		unk_0xA47B46945FF6DE74(uParam0->f_9, uParam0->f_16, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(uParam0->f_9, uParam0->f_19);
		unk_0xB9FD7450C0DAB575(uParam0->f_9, 1084227584);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0x122AAB0B1D6F55AD(-2122757008, uParam0->f_16, uParam0->f_19, true, true, false);
		if (unk_0x437347B10A200C4B(uParam0->f_9, 0))
		{
			return 0;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 4);
		}
		unk_0x44A200C9B6E1CEA6(uParam0->f_9, true);
		func_111(uParam0->f_9, &(Local_51.f_243), 0, 1);
	}
	unk_0x128A778E98A59AB1(uParam0->f_9, 0);
	unk_0x56FDC9ADE35F7DB0(uParam0->f_9, true, true, 0);
	unk_0x873BCADC75FF6D20(uParam0->f_9);
	if (!unk_0x437347B10A200C4B(uParam0->f_8, 0))
	{
		if (!unk_0x82CCEAB29E9451DD(uParam0->f_8, uParam0->f_9))
		{
			unk_0xF821F915BC24D246(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0xAF6690C489CC6203(uParam0->f_9))
	{
		unk_0x73270B3C9CC833FD(uParam0->f_9, true, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0x95514F113C1EDFBD(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		unk_0x6728CA90E5387ABE(uParam0->f_9, 0);
		Local_51.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (!func_122(iParam0))
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
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			iVar1 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar3));
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
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar4));
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
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_120(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_119())
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
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
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
						func_117(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_117(iParam0, uParam1->f_69);
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
			func_112(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_66) && !unk_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar5 + 1)))
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

int func_112(int iParam0, var uParam1, var uParam2)
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
	if (func_116(unk_0x134B62B726CEC8E6(*iParam0), 1) && unk_0x0ECB5CA5140957AD(*iParam0, 24) != func_115(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 24, func_115(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_114(iParam0);
	if (func_113(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 1);
		unk_0x44A200C9B6E1CEA6(*iParam0, true);
	}
	return 1;
}

int func_113(int iParam0)
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

void func_114(var uParam0)
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

int func_115(int iParam0, int iParam1)
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

int func_116(int iParam0, int iParam1)
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

void func_117(int iParam0, int iParam1)
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

int func_118(int iParam0)
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

bool func_119()
{
	return unk_0xC146D5FBD23C6954(-1691188696);
}

int func_120(int iParam0)
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

int func_121(int iParam0)
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

int func_122(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!func_128(unk_0xD803B885F5E47A62(), -1))
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
	if (func_124(unk_0xD803B885F5E47A62()) == 3)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (func_123(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123(int iParam0)
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

int func_124(int iParam0)
{
	if (func_127(iParam0) == 233)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_125(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_126(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_128(int iParam0, int iParam1)
{
	if (func_129(iParam0, 1, 1))
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

int func_129(int iParam0, bool bParam1, bool bParam2)
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

void func_130(vector3 vParam0, int iParam3, vector3 vParam4, bool bParam7)
{
	if (!unk_0x437347B10A200C4B(iParam3, 0))
	{
		if (bParam7 && Local_51.f_10 == 0)
		{
			unk_0xA47B46945FF6DE74(iParam3, 1705,039f, 3251,13f, 40,0016f, 1, false, 0, 1);
		}
		vVar12 = { unk_0x68F4C0EC296D3901(iParam3, true) };
		unk_0x5CDCBCDA2C651E97(vVar12);
		unk_0xE82754C349C7B581(vVar12, &fVar11, 0, 0);
		vVar5 = { unk_0x68F4C0EC296D3901(iParam3, true) };
		if (bParam7)
		{
			vVar8 = { vParam0 - vParam4 };
		}
		else
		{
			vVar8 = { vParam4 - vVar5 };
		}
		fVar0 = unk_0xE7D606C557C86100(vVar8.x, vVar8.y);
		fVar1 = (unk_0xE7D606C557C86100(vVar8.x, vVar8.z) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - unk_0x755FF954DAE327E1(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0x755FF954DAE327E1(fVar1));
		}
		if (unk_0x755FF954DAE327E1((vVar12.z - fVar11)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			vVar12.z = (fVar11 + 25f);
			unk_0xA47B46945FF6DE74(iParam3, vVar12, 1, false, 0, 1);
		}
		unk_0x1E9649458B15960F(iParam3, true);
		vVar2 = { unk_0x835730A2D89F6093(iParam3, 2) };
		vVar2.x = fVar1;
		vVar2.z = fVar0;
		unk_0xC023D1C4BF532815(iParam3, vVar2, 2, 1);
		unk_0x1E9649458B15960F(iParam3, false);
		unk_0xD67D6A3F0D653D93(vVar12, unk_0x08D89CE2E20AE305(iParam3), 500f, 0);
	}
}

void func_131(var uParam0, int iParam1, bool bParam2)
{
	func_132(uParam0, iParam1, (uParam0->f_358[iParam1].f_11 - 1), bParam2);
}

void func_132(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (unk_0x437347B10A200C4B(uParam0->f_358[iParam1].f_8, 0))
	{
		return;
	}
	if (uParam0->f_358[iParam1].f_22 != 0)
	{
		if (unk_0x437347B10A200C4B(uParam0->f_358[iParam1].f_9, 0))
		{
			return;
		}
	}
	vVar0 = { uParam0->f_27[iParam2 + 1] - uParam0->f_27[iParam2] };
	fVar3 = unk_0xE7D606C557C86100(vVar0.x, vVar0.y);
	fVar4 = 0f;
	if (unk_0x7D8B2A8F9EA82DB7(uParam0->f_358[iParam1].f_22))
	{
		fVar4 = 0f;
	}
	else if (unk_0x8E39AC3C76C8AA58(uParam0->f_358[iParam1].f_22))
	{
		fVar4 = 25f;
	}
	else if (unk_0xC41A9202669A24C4(uParam0->f_358[iParam1].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1]), uParam0->f_27[iParam2], fVar3, fVar4);
}

int func_133(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_134(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_134(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!unk_0x437347B10A200C4B(uParam0->f_8, 0))
	{
		unk_0xD458AC1C1D29C3B4(uParam0->f_8, 1000, 0);
		if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
		{
			if (!unk_0x82CCEAB29E9451DD(uParam0->f_8, uParam0->f_9))
			{
				unk_0xF821F915BC24D246(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0xA47B46945FF6DE74(uParam0->f_8, uParam0->f_16, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		uParam0->f_8 = unk_0x852A19533F896693(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, true);
		if (unk_0x437347B10A200C4B(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0x36F2404464202779(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, true);
		if (unk_0x437347B10A200C4B(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!unk_0xAF6690C489CC6203(uParam0->f_8))
		{
			unk_0x73270B3C9CC833FD(uParam0->f_8, true, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0x5F2AA9E2843E9403(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_135()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 0) && !unk_0xEAE0D21A50E6C7F4(iLocal_43, 1))
	{
		settimera(0);
		func_164(1, 0);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x790015DC92C918E2();
	}
	unk_0x38C3A68D7861DCFD(2, 199, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x95235C19032FCE7D();
	if (IntToFloat(timera()) > (1500f * 0,2f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 1))
		{
			func_163(1, 0);
			settimerb(0);
		}
		else if (IntToFloat(timerb()) > (1500f * 0,075f) || unk_0x757EF87A33649210())
		{
			if (!unk_0x757EF87A33649210())
			{
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = unk_0x1C0640BA9A7327B3() + 1000;
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				func_153(0, 2, 1);
				func_145(1, 1, 1, 0, 0, 0);
				func_137(1);
				unk_0x7BBABEC524CBF883(0);
				unk_0x86E4B20DE8E91A57(0);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				func_164(0, 0);
				func_136(0);
			}
			else if (unk_0x1C0640BA9A7327B3() < iLocal_44)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_136(int iParam0)
{
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 3))
			{
				unk_0x21387C9EECC2B220(1);
				unk_0x5D96D8530B3D0904(&iLocal_43, 3);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_43, 3))
		{
			unk_0x21387C9EECC2B220(0);
			unk_0x0674E58A79778E99(&iLocal_43, 3);
		}
	}
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		func_144();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_143(0))
		{
			func_138(0);
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

void func_138(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_141())
		{
			func_140(1, 1);
		}
		else
		{
			func_140(0, 0);
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
	if (!func_139())
	{
		Global_19486.f_1 = 3;
	}
}

int func_139()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_140(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_143(0))
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

bool func_141()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_142()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_143(int iParam0)
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

void func_144()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_145(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_152(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_139())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_151(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_152(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_151(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_149(unk_0xD803B885F5E47A62())) && !func_147(unk_0xD803B885F5E47A62(), 0)) && !func_146()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_149(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_146()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_147(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_148(-1, 0) == 8;
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

int func_148(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_149(int iParam0)
{
	if (func_147(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
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

bool func_150()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_151(int iParam0, int iParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_152(int iParam0)
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

void func_153(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&iLocal_43, 2);
		if (!unk_0x8CD06866876216F2())
		{
			if (iParam1 == 1)
			{
				unk_0x9A82EEAF6CA12AEE(0,2f);
			}
			else
			{
				unk_0x9A82EEAF6CA12AEE(0,075f);
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_43, 2) || iParam2)
		{
			if (!unk_0x8CD06866876216F2())
			{
				unk_0x9A82EEAF6CA12AEE(1f);
			}
		}
		unk_0x0674E58A79778E99(&iLocal_43, 2);
	}
}

void func_154(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_161(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_160(uParam0->f_1, 256) || (func_160(uParam0->f_1, 8192) && unk_0xB8E3620B82AD47D7(2)))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(fParam1);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fParam5);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(func_160(uParam0->f_1, 4096));
			unk_0x7E60D21B163E9D56();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x91E3F625EF57450D(2);
					break;
				
				case 2:
					bVar4 = !unk_0x91E3F625EF57450D(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x3CAEA85DA607305E(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						iVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6].f_13, iVar7);
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6].f_12, iVar7))
						{
							sVar3 = unk_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar3))
						{
							func_159(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6]))
					{
						func_158(uParam0->f_2[iVar6]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_160(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								unk_0x1200CC973A2399C8(true);
								unk_0x3CAEA85DA607305E(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								unk_0x1200CC973A2399C8(false);
								unk_0x3CAEA85DA607305E(-1);
							}
						}
					}
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		fVar8 = func_157(bParam4, func_157(func_160(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_156(&(uParam0->f_1), 256);
		func_155(&(uParam0->f_1), 128);
	}
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 0, 0);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_157(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_158(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_159(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_161(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_156(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_162()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	func_145(0, 1, 1, 0, 0, 0);
	func_137(1);
}

void func_163(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_164(0, 0);
		unk_0x82A772610883F395("DeathFailOut", 0, 0);
		unk_0x5D96D8530B3D0904(&iLocal_43, 1);
		func_153(1, 2, 0);
		unk_0x4AED3E7834924DC8(2);
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_43, 1) || iParam1)
		{
			unk_0x9A1335ECD7BD117F("DeathFailOut");
			func_153(0, 2, 1);
			unk_0x4AED3E7834924DC8(0);
		}
		unk_0x0674E58A79778E99(&iLocal_43, 1);
	}
}

void func_164(int iParam0, int iParam1)
{
	switch (func_165())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_43, 0) || iParam1)
		{
			unk_0x82A772610883F395(sVar0, 0, 0);
			unk_0x5D96D8530B3D0904(&iLocal_43, 0);
			func_153(1, 1, 0);
			unk_0x4AED3E7834924DC8(1);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_43, 0) || iParam1)
		{
			unk_0x9A1335ECD7BD117F(sVar0);
			func_153(0, 1, 1);
			unk_0x4AED3E7834924DC8(0);
		}
		unk_0x0674E58A79778E99(&iLocal_43, 0);
	}
}

int func_165()
{
	func_166();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_166()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_170(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_169(unk_0x16F2683693E537C9());
			if (func_168(iVar0) && (!func_167(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_168(Global_111638.f_2358.f_539.f_4321))
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

bool func_167(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_168(int iParam0)
{
	return iParam0 < 3;
}

int func_169(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_170(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_170(int iParam0)
{
	if (func_168(iParam0))
	{
		return func_171(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_171(int iParam0)
{
	return Global_1798[iParam0];
}

int func_172(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x8BC9595FD2792B5D("DEATH_SCENE");
			unk_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "WastedSounds", true);
			func_10(&(uParam0->f_1));
			func_162();
			func_177(uParam1, (0,15f * 0,075f), 0,5f);
			unk_0x31A33F7BCB08CB80(true);
			break;
		
		case 1:
			if (func_135() || unk_0x757EF87A33649210())
			{
				*uParam0 = 2;
			}
			if (!func_362(uParam0->f_4, 4))
			{
				if (unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", false, -1))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "Bed", "WastedSounds", true);
					func_334(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(timera()) > (1500f * 0,2f))
			{
				if (!func_362(uParam0->f_4, 2))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "TextHit", "WastedSounds", true);
					func_334(&(uParam0->f_4), 2);
				}
				func_174(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_174(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_164(0, 1);
				func_163(0, 1);
				func_162();
				if (*uParam5)
				{
					unk_0x4DB69487E1A9EE2A(1);
				}
				else if (!uParam0->f_5)
				{
					func_173(0);
				}
				unk_0x31A33F7BCB08CB80(false);
				unk_0x65C5EBCA17A891FC(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x67E5ECB8FD7F5018(1);
				func_164(0, 1);
				func_163(0, 1);
				unk_0x8910D3D58E0132B8("DEATH_SCENE");
				unk_0x31A33F7BCB08CB80(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0x31A33F7BCB08CB80(false);
			return 1;
			break;
	}
	return 0;
}

void func_173(bool bParam0)
{
	if ((Global_41431 == 9 || Global_41431 == 10) || Global_41431 == 5)
	{
		Global_110287 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110287 = 0;
	}
}

int func_174(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(2500);
				unk_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(true);
			}
			unk_0x9A82EEAF6CA12AEE(0,2f);
			if (func_160(iParam5, 4))
			{
				if (unk_0xAE317D00A5A55DF6("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x7ACC3006A87F8B39("STRING");
			unk_0x3A820E495A7BA3E5(6);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
			func_158(sParam3);
			unk_0x3CAEA85DA607305E(100);
			unk_0x1200CC973A2399C8(true);
			unk_0x7A8BB56B212464AC();
			if (func_160(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_134);
					unk_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			if (!func_160(iParam5, 1))
			{
				unk_0x5EEBDFEE72949D59(0);
			}
			func_263(&(uParam1->f_10), 0, 1, 1, 1);
			func_262(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_262(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_160(iParam5, 4))
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_160(iParam5, 8))
			{
				switch (func_165())
				{
					case 0:
						unk_0x82A772610883F395("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x82A772610883F395("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x82A772610883F395("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_363(&(uParam1->f_1));
			}
			if (func_160(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_363(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xBD706C594F6DCD4A();
			if (func_160(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_134);
					unk_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam6);
			func_176(uParam0, 0, 0);
			if (!func_160(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x757EF87A33649210()))
			{
				func_154(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_160(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xB9132A06AE472728(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_160(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_160(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_160(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_176(uParam0, 0, 0);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_138 || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(2500);
			}
			if (func_160(iParam5, 64) && uParam1->f_138)
			{
				unk_0x53491B90E4FD0E56(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0,1f)
			{
				func_176(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_175(int iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

int func_176(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	if (!bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x06F8112AA79C53D9(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_177(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_175(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_178(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_179(int iParam0, bool bParam1)
{
	switch (iLocal_1990)
	{
		case 0:
			func_25();
			func_196();
			func_192();
			iLocal_1990 = 1;
			break;
		
		case 1:
			if (func_191())
			{
				iLocal_1990 = 2;
			}
			break;
		
		case 2:
			func_180(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1990 = 0;
			}
			break;
	}
}

void func_180(int iParam0)
{
	switch (Local_51.f_10)
	{
		case 3:
			func_190(iParam0);
			func_189(iParam0);
			break;
		
		case 0:
			func_188(iParam0);
			func_187(iParam0);
			break;
		
		case 1:
			func_186(iParam0);
			func_184(iParam0);
			break;
		
		case 2:
			func_183(iParam0);
			func_182(iParam0);
			break;
		
		case 4:
			func_181(iParam0);
			break;
	}
}

void func_181(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_182(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_2059[0]) && !func_362(uLocal_2071, 1))
		{
			iLocal_2059[0] = unk_0x122AAB0B1D6F55AD(1518533038, -449,6041f, -2271,693f, 6,6086f, 267,5199f, true, true, false);
			iLocal_2059[1] = unk_0x122AAB0B1D6F55AD(-730904777, -449,6041f, -2271,693f, 6,6086f, 267,5199f, true, true, false);
			unk_0xC74DAD25331A5425(iLocal_2059[0], iLocal_2059[1], 1065353216);
			iLocal_2065[0] = unk_0x852A19533F896693(iLocal_2059[0], 4, 349680864, -1, 1, true);
			func_334(&uLocal_2071, 1);
		}
		if (unk_0x1C2E18E9C63BEB77("SPR_Fluff_01"))
		{
			if (!unk_0x437347B10A200C4B(iLocal_2059[0], 0) && !unk_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				if (unk_0xD1960163A3042274(iLocal_2065[0], -235832601) == 1)
				{
				}
				else
				{
					unk_0x1B901F542DF070CF(iLocal_2065[0], iLocal_2059[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0xD890711CFD5AF100(iLocal_2059[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_183(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_184(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_2059[0]))
		{
			if (!func_362(uLocal_2071, 1))
			{
				if (func_185(&iLocal_2053))
				{
					iLocal_2059[0] = unk_0x122AAB0B1D6F55AD(788045382, -2586,901f, 386,4225f, 208,0505f, 349,0836f, true, true, false);
					func_334(&uLocal_2071, 1);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_2059[0]))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_2065[0]))
			{
				if (!func_362(uLocal_2071, 2))
				{
					iLocal_2065[0] = unk_0x852A19533F896693(iLocal_2059[0], 4, 1694362237, -1, 1, true);
					func_334(&uLocal_2071, 2);
				}
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_2059[0]) && !unk_0xC844350D5D58C99A(iLocal_2065[0]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_2059[0], 0) && !unk_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				if (!unk_0x5A91F08DF773C39D(iLocal_2059[0], -2530,873f, 608,701f, 238,9111f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0xD1960163A3042274(iLocal_2065[0], -1817882002) == 1)
					{
					}
					else
					{
						unk_0xE9362E4D600DD12A(iLocal_2065[0], iLocal_2059[0], -2530,873f, 608,701f, 238,9111f, unk_0xD890711CFD5AF100(iLocal_2059[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_2059[1]))
		{
			if (!func_362(uLocal_2072, 1))
			{
				if (func_185(&iLocal_2053))
				{
					iLocal_2059[1] = unk_0x122AAB0B1D6F55AD(788045382, -2582,93f, 384,918f, 208,5764f, 336,8248f, true, true, false);
					func_334(&uLocal_2072, 1);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_2059[1]))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_2065[1]))
			{
				if (!func_362(uLocal_2072, 2))
				{
					iLocal_2065[1] = unk_0x852A19533F896693(iLocal_2059[1], 4, 1694362237, -1, 1, true);
					func_334(&uLocal_2072, 2);
				}
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_2059[1]) && !unk_0xC844350D5D58C99A(iLocal_2065[1]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_2059[1], 0) && !unk_0x437347B10A200C4B(iLocal_2065[1], 0))
			{
				if (!unk_0x5A91F08DF773C39D(iLocal_2059[1], -2527,712f, 609,6833f, 239,2568f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0xD1960163A3042274(iLocal_2065[1], -1817882002) == 1)
					{
					}
					else
					{
						unk_0xE9362E4D600DD12A(iLocal_2065[1], iLocal_2059[1], -2527,712f, 609,6833f, 239,2568f, unk_0xD890711CFD5AF100(iLocal_2059[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_185(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_186(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_187(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_2059[0]) && !func_362(uLocal_2071, 1))
		{
			iLocal_2059[0] = unk_0x122AAB0B1D6F55AD(861409633, -1429,102f, 2602,645f, -1,0709f, 85,2614f, true, true, false);
			iLocal_2065[0] = unk_0x852A19533F896693(iLocal_2059[0], 4, 349680864, -1, 1, true);
			if (!unk_0x437347B10A200C4B(iLocal_2059[0], 0) && !unk_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				if (!unk_0x5A91F08DF773C39D(iLocal_2059[0], -1552,281f, 2641,609f, -0,8283f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0xD1960163A3042274(iLocal_2065[0], -1273030092) == 1)
					{
					}
					else
					{
						unk_0x132B85BCE016BCA0(iLocal_2065[0], iLocal_2059[0], -1552,281f, 2641,609f, -0,8283f, 4, unk_0xD890711CFD5AF100(iLocal_2059[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_334(&uLocal_2071, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_362(uLocal_2071, 1))
		{
			if (!unk_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				unk_0xEBA53F35D0085654(&(iLocal_2065[0]));
			}
			if (!unk_0x437347B10A200C4B(iLocal_2059[0], 0))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_2059[0]));
			}
		}
	}
}

void func_188(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_189(int iParam0)
{
	if (!func_362(uLocal_2071, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0x3DDA6C6A285628E4(101, "SPRStuntAF"))
			{
				unk_0x5CDCBCDA2C651E97(-943,8105f, -3173,692f, 12,9445f);
				if (!unk_0xC844350D5D58C99A(iLocal_2059[0]))
				{
					iLocal_2059[0] = unk_0x122AAB0B1D6F55AD(1058115860, -943,8105f, -3173,692f, 12,9445f, 60,537f, true, true, false);
					unk_0xB9FD7450C0DAB575(iLocal_2059[0], 1084227584);
					unk_0x56FDC9ADE35F7DB0(iLocal_2059[0], true, true, 0);
					if (Local_51 == 0)
					{
						unk_0x873BCADC75FF6D20(iLocal_2059[0]);
					}
					iLocal_2065[0] = unk_0x852A19533F896693(iLocal_2059[0], 4, -245247470, -1, 1, true);
				}
				if (!unk_0x437347B10A200C4B(iLocal_2059[0], 0))
				{
					if (unk_0x5A91F08DF773C39D(iLocal_2059[0], -943,8105f, -3173,692f, 12,9445f, 20f, 20f, 20f, false, true, 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_2059[0]))
						{
							unk_0x4D3C3C0B0DE2663E(iLocal_2059[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0x20D6474D5F4B9FC6(iLocal_2059[0]))
					{
						if (!unk_0x437347B10A200C4B(iLocal_2065[0], 0))
						{
							if (!unk_0xD1960163A3042274(iLocal_2065[0], -1817882002) == 1)
							{
								unk_0xE9362E4D600DD12A(iLocal_2065[0], iLocal_2059[0], -6793,876f, -557,0385f, 781,0172f, 50f, 0, 1058115860, 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(iLocal_2059[0], 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_2059[0]))
			{
				unk_0xC55F2A0377488064(iLocal_2059[0]);
			}
			else
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_2059[0]));
				func_334(&uLocal_2071, 1);
			}
		}
	}
	else if (!unk_0x437347B10A200C4B(iLocal_2059[0], 0))
	{
		unk_0x5CDCBCDA2C651E97(unk_0x68F4C0EC296D3901(iLocal_2059[0], true));
	}
}

void func_190(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

int func_191()
{
	switch (Local_51.f_10)
	{
		case 3:
			if (func_185(&iLocal_2053) && unk_0x3DDA6C6A285628E4(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_185(&iLocal_2053))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_185(&iLocal_2053))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_185(&iLocal_2053) && unk_0x1C2E18E9C63BEB77("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_192()
{
	switch (Local_51.f_10)
	{
		case 3:
			func_194(&iLocal_2053, 1058115860);
			func_194(&iLocal_2053, -245247470);
			unk_0x36187931D29E5BBE(101, "SPRStuntAF");
			break;
		
		case 0:
			func_194(&iLocal_2053, 861409633);
			func_194(&iLocal_2053, 349680864);
			break;
		
		case 1:
			func_194(&iLocal_2053, 788045382);
			func_194(&iLocal_2053, 1694362237);
			break;
		
		case 2:
			func_194(&iLocal_2053, 1518533038);
			func_194(&iLocal_2053, -730904777);
			func_194(&iLocal_2053, 349680864);
			unk_0x29398344B9E5B8A7("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_193(&iLocal_2053);
}

void func_193(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0x523BCC9DC80CD82F((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_194(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_195(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_196()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_362(uLocal_2081, iVar0))
		{
			func_360(&uLocal_2081, iVar0);
		}
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	func_198(uParam0, iParam1, 0);
}

void func_198(var uParam0, int iParam1, int iParam2)
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
		if (func_199(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_199(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

bool func_199(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_200(var uParam0)
{
	if (uParam0->f_358[0].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = vdist(uParam0->f_27[(uParam0->f_12 - 2)], func_201());
		if (!unk_0xBD054C76E6F4158B(iLocal_2303))
		{
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_201()) <= ((fVar0 * 1,5f) * (fVar0 * 1,5f)))
			{
				iLocal_2303 = unk_0x372C0B8361DDE4D6(func_201(), uParam0->f_27[(uParam0->f_12 - 1)] - func_201(), 2000f, 12, 127);
			}
		}
		else if (!vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_201()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_253();
		}
	}
}

Vector3 func_201()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -2591,965f, 2483,167f, 60,8904f;
			break;
		
		case 1:
			return 1827,956f, 585,8948f, 287,6289f;
			break;
		
		case 2:
			return 991,1072f, -2389,983f, 83,3701f;
			break;
		
		case 3:
			return -1721,049f, -2792,948f, 75,4149f;
			break;
		
		case 4:
			return -578,6125f, 5436,721f, 150,1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_202(var uParam0)
{
	if (func_235())
	{
		if (!Local_2290)
		{
			Local_2290 = 1;
			Local_2290.f_1 = 1;
		}
		else
		{
			Local_2290.f_1 = 0;
		}
	}
	else if (func_234())
	{
		if (!Local_2290.f_1 || func_233() >= 1f)
		{
			if (Local_2290)
			{
				Local_2290 = 0;
			}
		}
	}
	if (func_234())
	{
		func_232();
	}
	else
	{
		func_231();
	}
	if (Local_2290)
	{
		if (!func_230(Local_2290.f_2) && !func_228(Local_2290.f_2))
		{
			func_204(&uLocal_2263, Local_2290.f_2);
		}
		else
		{
			if (unk_0x9F4FE516EAACCFC5(Local_2290.f_6))
			{
				unk_0x9A8DDC7C522F5BF5(Local_2290.f_6, 0);
			}
			if (func_228(Local_2290.f_2))
			{
				Local_2290.f_2 = { func_203(uParam0) };
			}
			func_197(&uLocal_2263, 0);
			Local_2290 = 0;
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(Local_2290.f_6))
	{
		unk_0x9A8DDC7C522F5BF5(Local_2290.f_6, 0);
	}
	else
	{
		if (func_228(Local_2290.f_2))
		{
			Local_2290.f_2 = { func_203(uParam0) };
		}
		func_197(&uLocal_2263, 0);
		Local_2290 = 0;
	}
}

Vector3 func_203(var uParam0)
{
	if (uParam0->f_358[0].f_11 < (Local_51.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0].f_11 + 1];
	}
	return 0f, 0f, 0f;
}

void func_204(var uParam0, vector3 vParam1)
{
	func_205(uParam0, vParam1, 0, 0, 1, 1, 1);
}

void func_205(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_198(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_206(uParam0, vParam1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_206(var uParam0, vector3 vParam1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_199(iVar0))
	{
		func_227();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_222(uParam0, bParam6, bParam8, 0))
		{
			func_221(uParam0, vParam1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_211(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
					{
						if (!func_199(iVar0))
						{
							func_303(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_210(1);
							}
						}
					}
				}
			}
		}
		else if (func_211(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam7)
				{
					if (!func_199(iVar0))
					{
						func_303(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_210(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x2EBF5002C6B6A06C(iVar0))
		{
			if (func_199(iVar0) && unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				func_198(uParam0, iVar0, 1);
			}
		}
		if (!func_222(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_209(uParam0))
			{
				func_207(uParam0);
			}
		}
	}
}

void func_207(var uParam0)
{
	if (func_208(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(true);
		unk_0x29D5132FBDCF2B1E(0);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_208(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(var uParam0)
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

int func_210(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_211(char* sParam0)
{
	if (!func_212(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_199(sParam0)) || func_199("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_210(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_210(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_210(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_212(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_143(0))
	{
		return 0;
	}
	if (func_220())
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
	if ((func_219() || func_218(Global_4456448.f_232883)) || func_217())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_216(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_215(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_213(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_213(int iParam0)
{
	if (iParam0 != func_214())
	{
		if (func_129(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_129(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_214()
{
	return -1;
}

int func_215(int iParam0, int iParam1)
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

int func_216(int iParam0, int iParam1)
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

var func_217()
{
	return Global_2450632.f_17;
}

bool func_218(int iParam0)
{
	return iParam0 == 51;
}

var func_219()
{
	return Global_2450632.f_16;
}

bool func_220()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_221(var uParam0, vector3 vParam1, int iParam4)
{
	unk_0xF3039DE1FDB4F6FD(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x98EF6C2D1F172740(vParam1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vParam1, -1, iVar2, iVar3);
	unk_0x82A772610883F395("FocusIn", 0, 0);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_222(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_226(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_209(uParam0))
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
						if (!func_226(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_226(bParam1, bParam2, bParam3))
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
					if (!func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_225(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
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
				else if (!func_226(bParam1, bParam2, bParam3))
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
						if (func_224(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_223(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_223(bParam1, bParam2, bParam3))
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
					else if (func_224(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_209(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_212(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_227();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_223(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

int func_224(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

int func_225(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

int func_226(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

void func_227()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

int func_228(vector3 vParam0)
{
	fVar0 = unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9());
	if (vdist2(vParam0, func_229(unk_0xD803B885F5E47A62())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_229(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_230(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_231()
{
	Local_2290.f_5 = 0f;
}

void func_232()
{
	Local_2290.f_5 = (Local_2290.f_5 + unk_0x6117725E0134737F());
}

float func_233()
{
	return Local_2290.f_5;
}

bool func_234()
{
	return unk_0xB9132A06AE472728(0, 80);
}

bool func_235()
{
	return unk_0x06F8112AA79C53D9(0, 80);
}

void func_236(vector3 vParam0)
{
	func_197(&uLocal_2263, 0);
	Local_2290.f_2 = { vParam0 };
}

void func_237(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_238(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

int func_239(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x0FB033EB6C6ED01F(0);
	switch (iLocal_1989)
	{
		case 0:
			iLocal_529 = 0;
			vLocal_2255 = { func_201() };
			vLocal_2258 = { func_252() };
			fLocal_2261 = func_251();
			unk_0xBFE31971E49FA500(false);
			unk_0xA37A90C62806D848(1);
			unk_0x790015DC92C918E2();
			iLocal_1989 = 1;
			break;
		
		case 1:
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (func_165() == 0)
				{
					unk_0x82A772610883F395("MinigameEndMichael", 0, 0);
				}
				else if (func_165() == 1)
				{
					unk_0x82A772610883F395("MinigameEndFranklin", 0, 0);
				}
				else if (func_165() == 2)
				{
					unk_0x82A772610883F395("MinigameEndTrevor", 0, 0);
				}
				iLocal_2047 = unk_0xAE06CCC36C49929C(26379945, vLocal_2255, vLocal_2258, fLocal_2261, 1, 2);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0x91F5B0244AAE6222(iLocal_2047, "HAND_SHAKE", 0,07f);
				}
				if (unk_0xDF1306B443CD3D15(uParam0->f_358[0].f_9, 0) && unk_0xE934758D273C899A(uParam0->f_358[0].f_9))
				{
					unk_0x132B85BCE016BCA0(unk_0x16F2683693E537C9(), uParam0->f_358[0].f_9, vLocal_2255.x, vLocal_2255.y, (vLocal_2255.z + 15f), 4, unk_0x9C66D99E63E8E24C(uParam0->f_358[0].f_9), 262144, 10f, 10f, 1);
				}
				unk_0xC9E4A2CFEBE9BD26(iLocal_2047, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
				iLocal_1989 = 2;
			}
			break;
		
		case 2:
			unk_0x70D5C5F31B79F27C(iLocal_2047);
			func_250(iLocal_2047);
			func_10(&iLocal_2043);
			iLocal_1989 = 3;
			break;
		
		case 3:
			if (func_249(&iLocal_2043, fLocal_2262))
			{
				func_10(&iLocal_2043);
				func_250(iLocal_2047);
				iLocal_1989 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0x0A059E0DB9253280(uParam0->f_358[0].f_9) && unk_0xE934758D273C899A(uParam0->f_358[0].f_9))
				{
					vLocal_2252 = { unk_0x68F4C0EC296D3901(uParam0->f_358[0].f_9, true) };
					func_10(&iLocal_2043);
				}
				func_246(iLocal_2047, vLocal_2252);
			}
			if (func_107(&iLocal_2043) >= 1f)
			{
				iLocal_1989 = 5;
			}
			break;
		
		case 5:
			func_11(&iLocal_2043);
			if (unk_0x9F4FE516EAACCFC5(iLocal_2046))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_2046, 0);
			}
			unk_0x82A772610883F395("MinigameTransitionIn", 0, 1);
			unk_0x10486C0590CF176C(iLocal_2047, 0);
			vLocal_2255 = { unk_0xD06724447386BC29(iLocal_2047) };
			vLocal_2258 = { unk_0x17D61C69BA58F815(iLocal_2047, 2) };
			iLocal_2046 = unk_0xAE06CCC36C49929C(26379945, vLocal_2255.x, vLocal_2255.y, (vLocal_2255.z + 1000f), 90f, vLocal_2258.y, vLocal_2258.z, fLocal_2261, 0, 2);
			unk_0xF1E4C781086FABC1(iLocal_2046, iLocal_2047, 500, 1, 1);
			unk_0x4D7F4CC43D4D0DE3(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_1989 = 6;
			break;
		
		case 6:
			if (!unk_0xFA06B985B30FB0FC(iLocal_2046) && !unk_0xFA06B985B30FB0FC(iLocal_2047))
			{
				if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "MEDAL_GOLD", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "MEDAL_SILVER", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "MEDAL_BRONZE", "HUD_AWARDS", true);
				}
				else
				{
					func_245(1);
				}
				iLocal_1989 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
			}
			func_243(uParam0);
			func_66(&(Local_51.f_321), 1);
			func_11(&iLocal_2043);
			if (unk_0xDF1306B443CD3D15(uParam0->f_358[0].f_9, 0))
			{
				sLocal_2247 = unk_0x04DF2A8CF5EBE3B0();
				unk_0x3E5CE368CD085FFA(uParam0->f_358[0].f_9, 0);
			}
			iLocal_1989 = 8;
			break;
		
		case 8:
			if (func_242(uParam0))
			{
				iLocal_1989 = 9;
			}
			break;
		
		case 9:
			unk_0x82A772610883F395("MinigameTransitionOut", 0, 0);
			func_241(&iLocal_2048);
			func_237(1, 0);
			func_240(uParam0);
			func_16();
			func_237(0, 0);
			iLocal_1989 = 0;
			return 0;
			break;
	}
	func_432(uParam0, 0);
	return 1;
}

int func_240(var uParam0)
{
	if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
	{
		unk_0x1E64CE678ED5F61E(&(Local_51.f_24[Local_51.f_10]));
		return unk_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
	{
		unk_0x1E64CE678ED5F61E(&(Local_51.f_24[Local_51.f_10]));
		return unk_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
	{
		unk_0x1E64CE678ED5F61E(&(Local_51.f_24[Local_51.f_10]));
		return unk_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_241(int iParam0)
{
	unk_0xE17FDF9E3068281B(iParam0);
	*iParam0 = 0;
}

int func_242(var uParam0)
{
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_17.f_2)))
	{
		func_11(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_17.f_2));
	}
	if (!iLocal_2008)
	{
		if (fVar0 > 1f)
		{
			iLocal_2008 = 1;
		}
	}
	if (!iLocal_2009)
	{
		if (fVar0 > 4,25f)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_17, "TRANSITION_OUT");
			unk_0x7C19E5E4784BD7CF(0,5f);
			unk_0x7E60D21B163E9D56();
			iLocal_2009 = 1;
		}
	}
	unk_0x6567AE843FADBA94(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_2008 = 0;
		iLocal_2009 = 0;
		return 1;
	}
	return 0;
}

void func_243(var uParam0)
{
	sVar0 = func_244(2);
	unk_0x7E60C62A7CE58FC8(uParam0->f_17, "RESET_MOVIE");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_17, sVar0);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x6B012227B3921E18("SPR_UI_PASS");
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39(&(Local_51.f_24[Local_51.f_10]));
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(100f);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_2008 = 0;
	iLocal_2009 = 0;
}

char* func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_245(bool bParam0)
{
	unk_0x9CBC55A05A07FC47(0);
	switch (func_165())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x3D0B5872F36FB05C(sVar0);
}

void func_246(int iParam0, vector3 vParam1)
{
	if (!unk_0x9F4FE516EAACCFC5(iParam0))
	{
		return;
	}
	if (!unk_0xFBB4F23D534EB790(iParam0))
	{
		return;
	}
	vVar1 = { unk_0x17D61C69BA58F815(iParam0, 2) };
	vVar4 = { unk_0xD06724447386BC29(iParam0) };
	vVar7 = { func_8(vVar1.x, vVar1.y, (vVar1.z + 90f)) };
	vVar10 = { vParam1 - vVar4 };
	vVar10 = { func_96(vVar10) };
	fVar13 = unk_0x5D8ABF6396A76564((vParam1.z - vVar4.z), unk_0x0EB28750412C3A5A(vParam1, vVar4, false));
	fVar14 = unk_0xE7D606C557C86100((vParam1.x - vVar4.x), (vParam1.y - vVar4.y));
	fVar14 = func_248(fVar14, -180f, 180f);
	fVar0 = func_95(func_8(fVar13, vVar1.y, vVar1.z), vVar7);
	fVar15 = (fVar13 - vVar1.x);
	if (fVar15 > 270f)
	{
		fVar15 = (fVar15 - 360f);
	}
	else if (fVar15 < -270f)
	{
		fVar15 = (fVar15 + 360f);
	}
	fVar13 = (vVar1.x + fVar15);
	if ((bLocal_2251 && fVar13 > vVar1.x) || (!bLocal_2251 && fVar13 < vVar1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2248 = (fLocal_2248 * 0,9f);
		vVar1.x = func_247(vVar1.x, fVar13, fLocal_2248);
	}
	fVar16 = (fVar14 - vVar1.z);
	if (fVar16 > 270f)
	{
		fVar16 = (fVar16 - 360f);
	}
	else if (fVar16 < -270f)
	{
		fVar16 = (fVar16 + 360f);
	}
	fVar14 = (vVar1.z + fVar16);
	if ((bLocal_2250 && (vVar1.z - fVar14) < 0f) || (!bLocal_2250 && (vVar1.z - fVar14) > 0f))
	{
		if (!bLocal_2250 && (vVar1.z - fVar14) > 0f)
		{
		}
		else if (bLocal_2250 && (vVar1.z - fVar14) < 0f)
		{
		}
		fLocal_2249 = (fLocal_2249 * 0,9f);
		vVar1.z = func_247(vVar1.z, fVar14, fLocal_2249);
	}
	unk_0x5F3CBA6EB9341C90(iParam0, vVar1, 2);
}

float func_247(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_248(float fParam0, float fParam1, float fParam2)
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

int func_249(int iParam0, float fParam1)
{
	if (func_2(iParam0, fParam1))
	{
		func_4(iParam0);
		return 1;
	}
	return 0;
}

void func_250(int iParam0)
{
	unk_0x61890296D3AA030F(unk_0x16F2683693E537C9(), &vVar0, &uVar18, &uVar18, &vVar3);
	vVar15 = { unk_0x17D61C69BA58F815(iParam0, 2) };
	vVar12 = { unk_0xD06724447386BC29(iParam0) };
	vVar6 = { func_8((vVar15.x + 90f), vVar15.y, vVar15.z) };
	vVar9 = { func_8(vVar15.x, vVar15.y, (vVar15.z + 90f)) };
	fLocal_2248 = 0,2f;
	fLocal_2249 = 0,5f;
	vVar21 = { unk_0xD06724447386BC29(iParam0) - vVar3 };
	vVar24 = { vVar3 + FtoV(func_95(vVar21, vVar0)) * vVar0 };
	if (vVar24.z > vVar12.z)
	{
		bLocal_2251 = true;
	}
	else
	{
		bLocal_2251 = false;
	}
	fVar27 = func_95(vVar24, vVar6);
	fVar28 = func_95(vVar24, vVar9);
	if (fVar27 < 0f)
	{
		bLocal_2250 = true;
	}
	else
	{
		bLocal_2250 = false;
	}
}

float func_251()
{
	switch (Local_51.f_10)
	{
		case 0:
			return 46,9415f;
			break;
		
		case 1:
			return 37,9558f;
			break;
		
		case 2:
			return 48,4122f;
			break;
		
		case 3:
			return 35,2464f;
			break;
		
		case 4:
			return 42,5338f;
			break;
	}
	return 0f;
}

Vector3 func_252()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -7,5758f, 0f, 148,5448f;
			break;
		
		case 1:
			return -1,0194f, 0,7478f, 23,0628f;
			break;
		
		case 2:
			return -5,3368f, 0,0006f, 158,257f;
			break;
		
		case 3:
			return -1,3523f, 0f, 0,0891f;
			break;
		
		case 4:
			return 18,1009f, -0,5992f, -103,0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_253()
{
	unk_0x486B4ADE317F0689();
	if (unk_0xBD054C76E6F4158B(iLocal_2303))
	{
		unk_0x51F8DBE54C75AE47(iLocal_2303);
	}
}

void func_254()
{
	unk_0xC2127C0F64D6A3B9();
	func_255();
}

void func_255()
{
	Global_22211.f_134 = 1;
}

void func_256(int iParam0)
{
	if (Global_41431 == 9 || Global_41431 == 10)
	{
		Global_110288 = iParam0;
	}
	else
	{
		Global_110288 = 0;
	}
}

void func_257(bool bParam0)
{
	unk_0xF3039DE1FDB4F6FD(!bParam0);
}

void func_258()
{
	func_259();
	unk_0xF3039DE1FDB4F6FD(true);
}

void func_259()
{
	Local_2290 = 0;
	Local_2290.f_1 = 0;
	Local_2290.f_2 = { 0f, 0f, 0f };
	Local_2290.f_6 = 0;
	Local_2290.f_5 = 0f;
}

bool func_260(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 16);
	}
	else
	{
		func_155(&(uParam0->f_1), 16);
	}
}

int func_262(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1] = sParam1;
		uParam0->f_2[iVar1].f_1 = iVar0;
		uParam0->f_2[iVar1].f_2 = iParam6;
		uParam0->f_2[iVar1].f_12 = 0;
		uParam0->f_2[iVar1].f_13 = 0;
		uParam0->f_2[iVar1].f_14 = 0;
		uParam0->f_2[iVar1].f_3[0] = iParam2;
		uParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 32);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_156(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_156(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_156(&(uParam0->f_1), 8192);
	}
}

void func_264(var uParam0)
{
	func_265(uParam0);
	settimera(0);
	func_237(1, 0);
	func_16();
}

void func_265(var uParam0)
{
	func_302(&(uParam0->f_1871));
	func_280(&(uParam0->f_1871.f_741));
	func_266(&(uParam0->f_1871));
}

void func_266(var uParam0)
{
	func_279(&(uParam0->f_316[0]), 254f, 74f, 1);
	func_279(&(uParam0->f_316[1]), (257f + func_278(0,0047f, 1280, 1)), 127f, 1);
	func_279(&(uParam0->f_316[2]), (257f + func_278(0,0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[3]), (257f + func_278(0,0047f, 1280, 1)), 324f, 1);
	func_279(&(uParam0->f_316[4]), (257f + func_278(0,0047f, 1280, 1)), 351f, 1);
	func_279(&(uParam0->f_316[5]), (257f + func_278(0,0047f, 1280, 1)), 378f, 1);
	func_279(&(uParam0->f_316[6]), (257f + func_278(0,0047f, 1280, 1)), 405f, 1);
	func_279(&(uParam0->f_316[11]), 257f, 297f, 1);
	func_279(&(uParam0->f_316[12]), 257f, 324f, 1);
	func_279(&(uParam0->f_316[13]), 257f, 351f, 1);
	func_279(&(uParam0->f_316[14]), 257f, 378f, 1);
	func_279(&(uParam0->f_316[15]), 257f, 405f, 1);
	func_279(&(uParam0->f_316[18]), 298f, 567f, 1);
	func_279(&(uParam0->f_316[17]), 384f, 567f, 1);
	func_279(&(uParam0->f_316[16]), 470f, 567f, 1);
	func_275(uParam0[0], 208f, 55f, 864f, 570f, 1);
	func_274(uParam0[0], 0, 0, 0, 255);
	func_275(uParam0[2], 384f, 224f, 256f, 256f, 0);
	func_274(uParam0[2], 255, 255, 255, 255);
	func_275(uParam0[3], 495f, 306f, 32f, 32f, 0);
	func_274(uParam0[3], 255, 255, 255, 255);
	func_275(uParam0[6], 258,5f, 482,5f, 80f, 80f, 1);
	func_274(uParam0[6], 255, 255, 255, 255);
	func_275(uParam0[5], 344f, 482,5f, 80f, 80f, 1);
	func_274(uParam0[5], 255, 255, 255, 255);
	func_275(uParam0[4], 429,5f, 482,5f, 80f, 80f, 1);
	func_274(uParam0[4], 255, 255, 255, 255);
	func_269(&(uParam0->f_420[1]), 257f, 119f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[1]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[0]), 257f, 124f, 254f, 25f, 1);
	func_268(&(uParam0->f_420[0]), 255, 255, 255, 255);
	func_269(&(uParam0->f_420[2]), 257f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[2]), 117, 1);
	func_269(&(uParam0->f_420[3]), 257f, 294f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[3]), 117, 1);
	func_269(&(uParam0->f_420[4]), 257f, 321f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[4]), 117, 1);
	func_269(&(uParam0->f_420[5]), 257f, 348f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[5]), 117, 1);
	func_269(&(uParam0->f_420[6]), 257f, 375f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[6]), 117, 1);
	func_269(&(uParam0->f_420[7]), 257f, 402f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[7]), 117, 1);
	func_269(&(uParam0->f_420[8]), 257f, 429f, 254f, 52f, 1);
	func_267(&(uParam0->f_420[8]), 117, 1);
	func_269(&(uParam0->f_420[11]), 257f, 483f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[11]), 117, 1);
	func_269(&(uParam0->f_420[12]), 342f, 483f, 84f, 84f, 1);
	func_267(&(uParam0->f_420[12]), 117, 1);
	func_269(&(uParam0->f_420[13]), 428f, 483f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[13]), 117, 1);
	func_269(&(uParam0->f_420[14]), 428f, 564f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[14]), 107, 1);
	func_269(&(uParam0->f_420[15]), 342f, 564f, 84f, 25f, 1);
	func_267(&(uParam0->f_420[15]), 108, 1);
	func_269(&(uParam0->f_420[16]), 257f, 564f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[16]), 109, 1);
	uParam0->f_986 = 1;
}

void func_267(var uParam0, int iParam1, bool bParam2)
{
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_269(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_273(uParam0, fParam3, fParam4);
	func_270(uParam0, fParam1, fParam2, bParam5);
}

void func_270(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_271(float fParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		unk_0x8A462DAA7D1D9008(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_272(float fParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		unk_0x8A462DAA7D1D9008(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_273(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_272(fParam1, 1280);
	uParam0->f_3 = func_271(fParam2, 720);
}

void func_274(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_275(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_277(fParam0, fParam3, fParam4);
	func_276(fParam0, fParam1, fParam2, bParam5);
}

void func_276(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_277(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_272(fParam1, 1280);
	uParam0->f_3 = func_271(fParam2, 720);
}

float func_278(float fParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0)
	{
		unk_0x8A462DAA7D1D9008(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return to_float(round(fVar1));
	}
	return fVar1;
}

void func_279(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_280(var uParam0)
{
	func_301(uParam0, 0);
	func_300(&(uParam0->f_11), 0);
	func_299(&(uParam0->f_66), 0);
	func_298(&(uParam0->f_77), 0);
	func_297(&(uParam0->f_33), 0);
	func_296(&(uParam0->f_44), 0);
	func_295(&(uParam0->f_55), 0);
	func_294(&(uParam0->f_143), 0);
	func_293(&(uParam0->f_22), 0);
	func_292(&(uParam0->f_154), 0);
	func_291(&(uParam0->f_88), 0, 0);
	func_290(&(uParam0->f_99), 0, 5);
	func_289(&(uParam0->f_110), 0);
	func_288(&(uParam0->f_121), 0);
	func_287(&(uParam0->f_132), 0);
	func_286(&(uParam0->f_165), 0);
	func_285(&(uParam0->f_176), 0);
	func_284(&(uParam0->f_187), 0);
	func_283(&(uParam0->f_198), 0);
	func_282(&(uParam0->f_209), 0);
	func_281(&(uParam0->f_220), 0);
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0,45f;
	uParam0->f_2 = 0,45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,275f;
	uParam0->f_2 = 0,275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,3375f;
	uParam0->f_2 = 0,3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,35f;
	uParam0->f_2 = 0,35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,325f;
	uParam0->f_2 = 0,325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,6f;
	uParam0->f_2 = 0,6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,315f + 0,183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,5f + 0,004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_289(var uParam0, int iParam1)
{
	*uParam0 = 5;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = ((0,628f - 0,18f) - 0,058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,889f - 0,01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = ((((((0,469f + 0,096f) - 0,017f) + 0,022f) - 0,062f) - 0,001f) - 0,013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_292(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_294(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_295(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = 0,655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_299(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = 0,628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_302(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0f;
		uParam0[iVar0]->f_1 = 0f;
		uParam0[iVar0]->f_2 = 0f;
		uParam0[iVar0]->f_3 = 0f;
		uParam0[iVar0]->f_4 = 0;
		uParam0[iVar0]->f_5 = 0;
		uParam0[iVar0]->f_6 = 0;
		uParam0[iVar0]->f_7 = 0;
		uParam0[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_303(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_304(int iParam0)
{
	func_309();
	switch (iLocal_2302)
	{
		case 0:
			func_10(iParam0);
			func_308(&iLocal_2297, 3);
			iLocal_2302 = 1;
			break;
		
		case 1:
			if (func_2(iParam0, 1f))
			{
				func_305(&iLocal_2297, 1, 0, 1, 3, 1, 0, 0);
				iLocal_2302 = 2;
			}
			break;
		
		case 2:
			if (func_305(&iLocal_2297, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_305(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (bParam7)
	{
		func_307(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0xEF45C43067063F18(*uParam0, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_3(&(uParam0->f_2)))
		{
			if (func_7(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_362(uParam0->f_1, 1))
					{
						func_334(&(uParam0->f_1), 8);
						unk_0xA402F6C87C08815C(18, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
						func_158("CNTDWN_GO");
						unk_0x3CAEA85DA607305E(iVar5);
						unk_0x3CAEA85DA607305E(iVar6);
						unk_0x3CAEA85DA607305E(iVar7);
						unk_0x1200CC973A2399C8(true);
						unk_0x7E60D21B163E9D56();
						return 1;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = floor(fVar3);
	}
	else
	{
		iVar4 = floor(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_362(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_362(uParam0->f_1, 1))
		{
			func_334(&(uParam0->f_1), 1);
			unk_0x4D7F4CC43D4D0DE3(-1, sVar0, sVar2, true);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_362(uParam0->f_1, 2))
		{
			func_334(&(uParam0->f_1), 2);
			unk_0x4D7F4CC43D4D0DE3(-1, sVar0, sVar2, true);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_362(uParam0->f_1, 4))
		{
			func_334(&(uParam0->f_1), 4);
			unk_0x4D7F4CC43D4D0DE3(-1, sVar0, sVar2, true);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_362(uParam0->f_1, 16))
		{
			if (unk_0x755FF954DAE327E1((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0,65f)
			{
				if (bParam5 || bParam6)
				{
					func_334(&(uParam0->f_1), 16);
					unk_0x4D7F4CC43D4D0DE3(-1, sVar1, sVar2, true);
				}
			}
		}
		else if (iVar9 >= 0 && !func_362(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, sVar1, sVar2, true);
			}
			func_334(&(uParam0->f_1), 8);
			unk_0xA402F6C87C08815C(18, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
			func_158("CNTDWN_GO");
			unk_0x3CAEA85DA607305E(iVar11);
			unk_0x3CAEA85DA607305E(iVar12);
			unk_0x3CAEA85DA607305E(iVar13);
			unk_0x1200CC973A2399C8(true);
			unk_0x7E60D21B163E9D56();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_306()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_306()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 18) || unk_0x06F8112AA79C53D9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_307(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(iParam0, 4);
	}
	else
	{
		unk_0x0674E58A79778E99(iParam0, 4);
	}
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 4))
	{
	}
}

void func_308(var uParam0, int iParam1)
{
	unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
	unk_0x3A820E495A7BA3E5(-1);
	unk_0x7ACC3006A87F8B39("NUMBER");
	unk_0x6D99DF8263D35CE5(unk_0x51D1D19912234EA0(iParam1));
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
}

void func_309()
{
	iVar6 = Global_110668;
	func_310(Var0, 0, 0, 0, 0, iVar6);
}

void func_310(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (Global_76876 != 6)
	{
		if (Global_76878 == -1)
		{
			if (func_324(1, Param0))
			{
				if (Global_76879 == 3)
				{
					fVar0 = 1,5f;
				}
				else
				{
					fVar0 = 2,5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_76878 = unk_0x1C0640BA9A7327B3();
					vLocal_30 = { unk_0x96792D8393A779D7(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + unk_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_324(0, Param0))
			{
				Global_76878 = (unk_0x1C0640BA9A7327B3() - 9000);
			}
			unk_0x3584F71E5CA29322(7);
			unk_0x3584F71E5CA29322(6);
			unk_0x3584F71E5CA29322(8);
			unk_0x3584F71E5CA29322(9);
			iVar1 = (unk_0x1C0640BA9A7327B3() - Global_76878);
			if (iVar1 < 9000 && !unk_0x757EF87A33649210())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = ceil(((to_float(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = ceil(((to_float(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_76876)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0,07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0,077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0,05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0,035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0,014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0,014f;
						break;
				}
				unk_0xD02CE72B4B66DC29(82, 66);
				unk_0x7BBAC160090910C3(1);
				unk_0xEEF67251E263A87F(2);
				iVar12 = func_165();
				if (Global_76879 == 1 && Global_76877 == 62)
				{
					iVar12 = Global_111638.f_2358.f_539.f_4322;
				}
				switch (iVar12)
				{
					case 0:
						unk_0xA402F6C87C08815C(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0xA402F6C87C08815C(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0xA402F6C87C08815C(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x7178F32F6742C936(iVar8, iVar9, iVar10, iVar2);
				unk_0xC8CFC125861F0537();
				Var4 = { func_313(Global_76877, Global_76879, iParam10) };
				if (fVar7 == -0,014f)
				{
				}
				unk_0x75BBE9A62B73769F(fVar6, fVar7, 0f, 0,01f);
				unk_0xD3539A877EC25E86(0,67f, 0,67f);
				if (!unk_0x0D71AFA59EF5104F() && !unk_0x0DF32524CC9DB3EB())
				{
					fLocal_34 = 0,14f;
				}
				else
				{
					fLocal_34 = 0,17f;
				}
				if (fVar7 == -0,014f)
				{
					if (func_312(&Var4) > fLocal_34)
					{
						if (unk_0x2F1FB0453B36C270(15))
						{
							unk_0x744B56EE9DE7B57F(15, vLocal_30.x, (vLocal_30.y + fLocal_33));
							Global_76881 = 1;
						}
					}
				}
				unk_0x070005E852D4C0E9(&Var4);
				unk_0xE0026608C37C7C41(fVar6, fVar7, 0);
				unk_0xD59EF13BB60323B9();
				if (Global_76880 == 1)
				{
					func_311();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_311();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_311()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

float func_312(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

struct<2> func_313(int iParam0, int iParam1, int iParam2)
{
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_323(iParam0) };
			break;
		
		case 7:
			Var0 = { func_321(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_320(iParam2) };
					break;
				
				case 8:
					Var0 = { func_319(iParam2) };
					break;
				
				case 7:
					Var0 = { func_318(iParam2) };
					break;
				
				case 10:
					Var0 = { func_317(iParam2) };
					break;
				
				case 5:
					Var0 = { func_316(iParam2) };
					break;
				
				case 4:
					Var0 = { func_315(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_314(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_315(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_316(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_317(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_318(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_319(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_320(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_321(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_322(iParam0) };
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

struct<2> func_322(int iParam0)
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

struct<2> func_323(int iParam0)
{
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89532[iParam0].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111638.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_324(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_326(0) || Global_76891) || Global_76880 == 1) || !unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	switch (Global_76876)
	{
		case 0:
			if (unk_0x7F8A39872A07D2CE(&uParam1, "NONE") || unk_0xEA6BC48857E0AC4C(&uParam1))
			{
				Global_76876 = 3;
			}
			else
			{
				Global_76876 = 1;
			}
			break;
		
		case 1:
			if (unk_0x62A1F4500E8F07E0())
			{
				Global_76876 = 2;
			}
			break;
		
		case 2:
			if (unk_0x22A8E52414415B76())
			{
				Global_76876 = 4;
				return 1;
			}
			else if (!unk_0x39B7A3CCD2467CAB())
			{
				Global_76876 = 3;
			}
			break;
		
		case 3:
			if (unk_0x22A8E52414415B76())
			{
			}
			else
			{
				Global_76876 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x22A8E52414415B76())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_76876 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x22A8E52414415B76() || func_143(0)) || func_325(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_325(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_326(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_327(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_327(int iParam0)
{
	return func_328(iParam0, Global_41431);
}

int func_328(int iParam0, int iParam1)
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

void func_329(var uParam0)
{
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_51.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0].f_15 = 0f;
	iLocal_2077 = 0;
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	if (Local_51 == 0)
	{
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&iLocal_2402);
	iVar4 = 0;
	while (iVar4 < uParam0->f_13)
	{
		func_330(&(uParam0->f_358[iVar4]));
		if (Local_51 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar4].f_8, uParam0->f_358[iVar4].f_9, uParam0->f_27[uParam0->f_358[iVar4].f_11], uParam0->f_27[uParam0->f_358[iVar4].f_11].f_7, iVar4);
			}
		}
		else if (bLocal_2410)
		{
			if (iVar4 > 0)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_358[iVar4].f_8, 0) && !unk_0x437347B10A200C4B(uParam0->f_358[iVar4].f_9, 0))
				{
					if (iVar4 == 1 && Local_51.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0x1B901F542DF070CF(uParam0->f_358[iVar4].f_8, uParam0->f_358[iVar4].f_9, &cVar0, 262144, 0, 8, -1, unk_0xD890711CFD5AF100(uParam0->f_358[iVar4].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar4].f_8, uParam0->f_358[iVar4].f_9, uParam0->f_27[uParam0->f_358[iVar4].f_11], uParam0->f_27[uParam0->f_358[iVar4].f_11].f_7, iVar4);
		}
		iVar4++;
	}
	if (unk_0xDF1306B443CD3D15(uParam0->f_358[0].f_9, 0))
	{
		unk_0x3E5CE368CD085FFA(uParam0->f_358[0].f_9, 1);
		if (!unk_0xEA6BC48857E0AC4C(sLocal_2247))
		{
			unk_0xA6C13961116F9033(sLocal_2247);
			unk_0x3CBF2C83A68C1611(uParam0->f_358[0].f_9, sLocal_2247);
		}
	}
}

void func_330(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_8, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(uParam0->f_9))
			{
				unk_0xC55F2A0377488064(uParam0->f_9);
			}
			unk_0x11AD11297DC58CC7(uParam0->f_8, true);
		}
	}
	uParam0->f_11 = 0;
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (!unk_0x7D8B2A8F9EA82DB7(uParam0->f_22))
		{
			unk_0x56FDC9ADE35F7DB0(uParam0->f_9, true, true, 0);
		}
	}
}

int func_331()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_332(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

void func_333(var uParam0)
{
	if (unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0]), 60f, 1);
		iVar0++;
	}
}

void func_334(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_335(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar3 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar3 = 38;
	}
	fVar4 = 1,2f;
	if (!bParam2)
	{
		fVar4 = 0,7f;
	}
	if (!func_341(&(uParam0->f_27[iParam1]), iVar3, fVar4, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		vVar5 = { uParam0->f_27[iParam1] };
		vVar8 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!func_73(uParam0->f_27[iParam1], uParam0->f_27[iParam1 + 1], 1056964608, 0))
			{
				vVar5 = { uParam0->f_27[iParam1 + 1] };
			}
		}
		if (Local_51 == 1)
		{
			if (Local_51.f_10 == 1)
			{
				if (func_362(uParam0->f_27[8].f_9, 4))
				{
					func_360(&(uParam0->f_27[8].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			vVar8 = { uParam0->f_27[(iParam1 - 1)] };
		}
		if (!func_336(vVar8, &(uParam0->f_27[iParam1]), vVar5, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				vVar0 = { uParam0->f_27[0] };
			}
			else
			{
				vVar0 = { uParam0->f_27[iParam1 + 2] };
			}
			if (!func_336(uParam0->f_27[iParam1], &(uParam0->f_27[iParam1 + 1]), vVar0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_336(vector3 vParam0, var uParam3, vector3 vParam4, float fParam7)
{
	if (!func_337(vParam0, uParam3, vParam4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_337(vector3 vParam0, var uParam3, vector3 vParam4, float fParam7)
{
	vParam0 = { vParam0 };
	func_80(&(uParam3->f_6));
	if (uParam3->f_7 == 2)
	{
		iVar0 = func_339(uParam3->f_7, vParam0, *uParam3, vParam4);
		func_584(func_585(func_92()), &iVar1, &iVar2, &iVar3, &uVar4);
		uParam3->f_6 = unk_0x1B26E47E3E30075B(iVar0, *uParam3, vParam4, fParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
	}
	else if (uParam3->f_7 == 3)
	{
		if (uParam3->f_8 == 2 || uParam3->f_8 == 3)
		{
			func_584(func_585(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x1B26E47E3E30075B(func_338(uParam3->f_7, uParam3->f_8), *uParam3, vParam4, fParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
		else if (uParam3->f_8 == 1)
		{
			func_584(func_585(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x1B26E47E3E30075B(func_338(uParam3->f_7, uParam3->f_8), *uParam3, vParam4, fParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		uParam3->f_6 = unk_0x1B26E47E3E30075B(func_338(uParam3->f_7, uParam3->f_8), *uParam3, vParam4, fParam7, 254, 207, 12, func_91(*uParam3, 25, 200), 0);
	}
	if (uParam3->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 37;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 38;
			}
			else if (iParam1 == 3)
			{
				return 39;
			}
			else if (iParam1 == 1)
			{
				return 40;
			}
			break;
		
		case 4:
			return 16;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 32;
			break;
		
		case 7:
			return 22;
			break;
		
		case 8:
			return 26;
			break;
		
		case 9:
			return 31;
			break;
		
		case 10:
			return 36;
			break;
	}
	return 6;
}

int func_339(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	fVar7 = 180f;
	fVar8 = 140f;
	fVar9 = 80f;
	if (iParam0 == 0)
	{
		iVar10 = 6;
		iVar11 = 7;
		iVar12 = 8;
	}
	else if (iParam0 == 2)
	{
		iVar10 = 12;
		iVar11 = 13;
		iVar12 = 14;
	}
	else if (iParam0 == 5)
	{
		iVar10 = 27;
		iVar11 = 28;
		iVar12 = 29;
	}
	else if (iParam0 == 6)
	{
		iVar10 = 32;
		iVar11 = 33;
		iVar12 = 34;
	}
	else if (iParam0 == 7)
	{
		iVar10 = 22;
		iVar11 = 23;
		iVar12 = 24;
	}
	if (!func_340(vParam1, 0f, 0f, 0f, 0))
	{
		vVar0 = { vParam1 - vParam4 };
		vVar3 = { vParam7 - vParam4 };
		fVar6 = unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
		if (fVar6 > 180f)
		{
			fVar6 = (360f - fVar6);
		}
		if (fVar6 < fVar9)
		{
			return iVar12;
		}
		else if (fVar6 < fVar8)
		{
			return iVar11;
		}
		else if (fVar6 < fVar7)
		{
			return iVar10;
		}
	}
	return iVar10;
}

bool func_340(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_341(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_342(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_342(int iParam0, vector3 vParam1, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	func_83(iParam0);
	*iParam0 = unk_0x6CC513A908911CF0(vParam1);
	if (!unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		unk_0xBC8E0A7390523199(*iParam0, iParam4);
	}
	unk_0x516E63E474722206(*iParam0, fParam5);
	unk_0x9D7CDDB4B55142AF(*iParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		unk_0x61755AC17D8F538E(*iParam0, 2);
	}
	if (iParam8 == 1)
	{
		unk_0x61755AC17D8F538E(*iParam0, 3);
	}
	if (iParam6 == (iParam7 - 1))
	{
		unk_0x64399B11CDD5A727("GATEBLIPFIN");
		unk_0x4FA118D51B4F2476(*iParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			unk_0x64399B11CDD5A727("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			unk_0x64399B11CDD5A727("GATEBLIPKNF");
		}
		else
		{
			unk_0x64399B11CDD5A727("GATEBLIPDEF");
		}
		unk_0x4FA118D51B4F2476(*iParam0);
	}
	return 1;
}

void func_343(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
}

int func_344(var uParam0)
{
	switch (uParam0->f_25)
	{
		case 0:
			func_137(1);
			unk_0x0D3BE1DE0262A012("MPHUD", false);
			Local_51.f_118 = func_357();
			switch (Local_51)
			{
				case 0:
					unk_0x0D3BE1DE0262A012("SPRRaces", false);
					unk_0x0D3BE1DE0262A012("MPMedals_FEED", false);
					break;
				
				case 1:
					unk_0x0D3BE1DE0262A012("SPROffroad", false);
					break;
				
				case 2:
					unk_0x0D3BE1DE0262A012("Triathlon", false);
					unk_0x0D3BE1DE0262A012("MPMedals_FEED", false);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_352(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_347(uParam0))
			{
				if (unk_0x27117E2CDD4D67C3("MPHUD"))
				{
					if (unk_0x83D8570832F172A7(Local_51.f_118))
					{
						switch (Local_51)
						{
							case 0:
								if (unk_0x27117E2CDD4D67C3("SPRRaces") && unk_0x27117E2CDD4D67C3("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (unk_0x27117E2CDD4D67C3("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (unk_0x27117E2CDD4D67C3("Triathlon") && unk_0x27117E2CDD4D67C3("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			if (Local_51.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_345(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_51.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (unk_0xC844350D5D58C99A(uParam0->f_358[0].f_9))
				{
					unk_0x1E9649458B15960F(uParam0->f_358[0].f_9, true);
				}
				if (!unk_0xEB880D98B5988D0C())
				{
					unk_0x5CDCBCDA2C651E97(uParam0->f_358[0].f_16);
					unk_0xD67D6A3F0D653D93(uParam0->f_358[0].f_16, unk_0x08D89CE2E20AE305(uParam0->f_358[0].f_9), 5000f, 0);
				}
				if (unk_0x68367101660E33F0())
				{
					unk_0x486B4ADE317F0689();
					if (unk_0xC844350D5D58C99A(uParam0->f_358[0].f_9))
					{
						unk_0x1E9649458B15960F(uParam0->f_358[0].f_9, false);
					}
					func_333(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_345(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_346(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_133(&(uParam0->f_358[iParam1]), 1);
	}
	return func_133(&(uParam0->f_358[iParam1]), 0);
}

int func_347(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_348(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_349(&(uParam0->f_358[iParam1]));
}

int func_349(var uParam0)
{
	if (!func_351(uParam0) || !func_350(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_350(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return unk_0xB87F6CF6E5628C67(uParam0->f_22);
}

bool func_351(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return unk_0xB87F6CF6E5628C67(uParam0->f_21);
}

void func_352(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_353(uParam0, iVar0);
		iVar0++;
	}
}

void func_353(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_354(&(uParam0->f_358[iParam1]));
}

void func_354(var uParam0)
{
	func_356(uParam0);
	func_355(uParam0);
}

void func_355(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	unk_0x523BCC9DC80CD82F(uParam0->f_22);
}

void func_356(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	unk_0x523BCC9DC80CD82F(uParam0->f_21);
}

int func_357()
{
	return unk_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

int func_358(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		unk_0x53491B90E4FD0E56(iParam0);
	}
	else if (unk_0x757EF87A33649210())
	{
		return 1;
	}
	return 0;
}

void func_359()
{
	if (unk_0x9F4FE516EAACCFC5(iLocal_2046))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_2046))
		{
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			unk_0xE3BB8E05FCEB3FBE(iLocal_2046, false);
		}
		unk_0x9A8DDC7C522F5BF5(iLocal_2046, 0);
	}
}

void func_360(int iParam0, int iParam1)
{
	func_361(iParam0, iParam1);
}

void func_361(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_362(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_363(int iParam0)
{
	if (!func_3(iParam0))
	{
		func_11(iParam0);
	}
}

void func_364()
{
	func_365(&uLocal_1550, 0);
}

void func_365(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_431(uParam0);
		func_370(uParam0);
		func_369(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_367();
	}
	if (unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		unk_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (unk_0x58424C49F8924842())
	{
		func_366(&(Global_1840924.f_49));
	}
	Global_2537071.f_3967 = 0;
}

void func_366(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_367()
{
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0][iVar1] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_368(&(Global_1835392.f_2780));
	func_366(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_366(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_366(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_368(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_369(var uParam0)
{
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13], "", 64);
		StringCopy(&(uParam0[iVar13]->f_16), "", 64);
		uParam0[iVar13]->f_32 = { Var0 };
		uParam0[iVar13]->f_45 = { Var0 };
		uParam0[iVar13]->f_58 = 0;
		uParam0[iVar13]->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			uParam0[iVar13]->f_60[iVar14] = 0f;
			uParam0[iVar13]->f_67[iVar14] = 0;
			iVar14++;
		}
		uParam0[iVar13]->f_75 = 0;
		uParam0[iVar13]->f_74 = 0;
		uParam0[iVar13]->f_76 = 0;
		uParam0[iVar13]->f_77 = 0;
		uParam0[iVar13]->f_78 = 0;
		uParam0[iVar13]->f_79 = 0;
		StringCopy(&(uParam0[iVar13]->f_80), "", 16);
		iVar13++;
	}
	func_366(&(Global_1835392.f_2830));
}

void func_370(var uParam0)
{
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_366(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0] = -1;
		uParam0->f_246.f_6[iVar0].f_1 = 0;
		uParam0->f_246.f_6[iVar0].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_371(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_366(&(Global_1835008.f_1));
	unk_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, -1);
}

int func_372(var uParam0, var uParam1)
{
	if (!func_423())
	{
		return 0;
	}
	if (func_417(&bLocal_525, uParam0))
	{
		if (iLocal_527 || bLocal_526)
		{
			_set_warning_message_2("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1, 0);
			if (!*uParam1)
			{
				if (iLocal_527)
				{
					if (func_3(&iLocal_522))
					{
						if (func_249(&iLocal_522, to_float(0)))
						{
							iLocal_527 = 0;
							bLocal_526 = !bLocal_526;
						}
					}
					else
					{
						func_11(&iLocal_522);
					}
				}
				else
				{
					unk_0x3584F71E5CA29322(9);
					unk_0x3584F71E5CA29322(7);
					func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_377();
		}
		return 0;
	}
	if (bLocal_525)
	{
		func_376();
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0x98868AF51859FC75(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), true);
		}
	}
	else
	{
		Local_51.f_10 = -1;
	}
	func_373();
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x98868AF51859FC75(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), true);
	}
	return 1;
}

void func_373()
{
	unk_0xA37A90C62806D848(1);
	unk_0x11CCD0ACA866C6C5(3, true);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	if (unk_0xED4934AFB6EC6451("MinigameTransitionIn"))
	{
		unk_0x9A1335ECD7BD117F("MinigameTransitionIn");
	}
	unk_0x82A772610883F395("MinigameTransitionOut", 0, 0);
	iLocal_521 = 0;
	unk_0x21387C9EECC2B220(0);
	func_137(0);
	func_374();
}

void func_374()
{
	Global_19671 = 0;
	func_375();
}

void func_375()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_376()
{
	switch (Global_110668)
	{
		case 0:
			Local_51.f_10 = 0;
			break;
		
		case 1:
			Local_51.f_10 = 1;
			break;
		
		case 2:
			Local_51.f_10 = 2;
			break;
		
		case 3:
			Local_51.f_10 = 3;
			break;
		
		case 4:
			Local_51.f_10 = 4;
			break;
	}
}

void func_377()
{
	unk_0x3FC8DBCC154CA56B();
	func_378(&uLocal_563);
}

void func_378(var uParam0)
{
	if (!bLocal_562)
	{
		if (!unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x64A90D2E671B51CB(1);
		}
	}
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(7);
	func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_409("Shared", "BGGradient_32x1024", uParam0[0], 0, 0, 1, 0);
	func_404(uParam0->f_420[0], 0, 0);
	func_404(uParam0->f_420[1], 0, 0);
	func_404(uParam0->f_420[2], 0, 0);
	func_404(uParam0->f_420[3], 0, 0);
	func_404(uParam0->f_420[4], 0, 0);
	func_404(uParam0->f_420[5], 0, 0);
	func_404(uParam0->f_420[6], 0, 0);
	func_404(uParam0->f_420[7], 0, 0);
	func_404(uParam0->f_420[8], 0, 0);
	func_404(uParam0->f_420[6], 0, 0);
	unk_0xD9ACBBA59FD5A09E(1);
	func_403(&(uParam0->f_741.f_165));
	func_402(&(uParam0->f_316[0]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	unk_0xD9ACBBA59FD5A09E(4);
	func_400(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[0]), 0f, 0f);
	func_397(&(uParam0->f_316[1]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[1]), 0f, 0f);
	func_397(&(uParam0->f_316[2]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[5]), 0f, 0f);
	func_397(&(uParam0->f_316[3]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_403(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_404(uParam0->f_420[16], 0, 0);
	func_404(uParam0->f_420[17], 0, 0);
	func_404(uParam0->f_420[18], 0, 0);
	func_404(uParam0->f_420[19], 0, 0);
	func_404(uParam0->f_420[20], 0, 0);
	func_404(uParam0->f_420[21], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2] };
			if (Global_111638.f_19038.f_6[iVar0] > 0f)
			{
				iLocal_531[iVar0] = ceil(Global_111638.f_19038.f_6[iVar0]);
			}
			else
			{
				iLocal_531[iVar0] = -1;
			}
			if (iVar0 == Global_110668)
			{
				func_267(&(uParam0->f_420[iVar1]), 1, 1);
				func_404(uParam0->f_420[iVar1], 0, 0);
				func_400(&(uParam0->f_741.f_198));
				switch (Global_111638.f_19038.f_12[iVar0].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_111638.f_19038.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0);
								func_274(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2].f_1 + fLocal_538);
								Var14 = (Var5 + fLocal_537);
								if (!bLocal_562)
								{
									func_395(&Var5, 0);
								}
								func_394(&Var5, 1);
								func_409("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_562)
								{
									func_393(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_110668)
				{
					func_400(&(uParam0->f_741.f_198));
				}
				func_396(&(uParam0->f_741.f_198));
				func_402(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0]), 0);
				func_403(&(uParam0->f_741.f_198));
				func_394(uParam0[iVar3], 1);
				if (bVar4)
				{
					func_403(&(uParam0->f_741.f_198));
				}
				else
				{
					func_403(&(uParam0->f_741.f_198));
				}
				func_403(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && iLocal_531[iVar0] > 1)
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[9], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					unk_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && IntToFloat(iLocal_531[iVar0]) > Local_51.f_106[iVar0])
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[9], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					unk_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && IntToFloat(iLocal_531[iVar0]) > (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[9], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					unk_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) > Local_51.f_112[iVar0] || iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0xFF72A133B792782E(0);
					func_409("SPRRaces", "Empty_128", uParam0[9], 0, 0, 5, 0);
					func_392(uParam0[iVar3]);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[13], 1);
				}
				else
				{
					uParam0[13]->f_7 = round((255f * 0,3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[12], 1);
				}
				else
				{
					uParam0[12]->f_7 = round((255f * 0,3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[11], 1);
				}
				else
				{
					uParam0[11]->f_7 = round((255f * 0,3f));
				}
				func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[11], 0, 0, 5, 0);
				func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[12], 0, 0, 5, 0);
				func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[13], 0, 0, 5, 0);
				func_403(&(uParam0->f_741.f_198));
				if (Global_111638.f_19038.f_6[Global_110668] > 0f)
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[17]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_387(&(uParam0->f_316[9]), &(uParam0->f_741.f_198), floor((Global_111638.f_19038.f_6[Global_110668] * 1000f)), 6, "", 0, 1);
					unk_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[17]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[9]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				func_402(&(uParam0->f_316[6]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_51.f_18[Global_110668] > 0f)
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[18]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_387(&(uParam0->f_316[7]), &(uParam0->f_741.f_198), floor((Local_51.f_18[Global_110668] * 1000f)), 6, "", 0, 1);
					unk_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
					func_403(&(uParam0->f_741.f_198));
				}
				else
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[18]), 0,0047f, 0,0055f);
					unk_0xFF72A133B792782E(1);
					func_397(&(uParam0->f_316[7]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					unk_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
					func_403(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_386(&(uParam0->f_420[iVar1]));
				func_267(&(uParam0->f_420[iVar1]), 117, 1);
				func_404(uParam0->f_420[iVar1], 0, 0);
				func_394(uParam0[iVar3], 1);
				switch (Global_111638.f_19038.f_12[iVar0].f_4)
				{
					case 0:
						func_394(uParam0[iVar3], 1);
						func_403(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_403(&(uParam0->f_741.f_198));
							if (Global_111638.f_19038.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0);
								func_274(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2].f_1 + fLocal_538);
								Var14 = (Var5 + fLocal_537);
								if (!bLocal_562)
								{
									func_395(&Var5, 0);
								}
								func_394(&Var5, 1);
								func_409("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_562)
								{
									func_393(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_110668)
				{
					func_400(&(uParam0->f_741.f_198));
				}
				func_396(&(uParam0->f_741.f_198));
				func_402(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0]), 0);
				func_403(&(uParam0->f_741.f_198));
				func_394(uParam0[iVar3], 1);
			}
			if (Global_111638.f_19038.f_12[iVar0].f_4 == 0)
			{
				func_409("Shared", "Locked_Icon_32", uParam0[iVar3], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_531[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_385(uParam0[iVar3]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_384(uParam0[iVar3]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_382(uParam0[iVar3]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_381(0))
	{
		unk_0x6FB46C25CCB7E6D5(2024531174, &iVar16, -1);
	}
	else if (func_381(1))
	{
		unk_0x6FB46C25CCB7E6D5(-376705475, &iVar16, -1);
	}
	else if (func_381(2))
	{
		unk_0x6FB46C25CCB7E6D5(2010093328, &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[15]), 0,0047f, 0,0055f);
		unk_0x4B9228CE1CF0DACA(1);
		Var17 = { uParam0->f_316[22] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_562)
		{
			Var19.f_9 = (Var19.f_9 - 0,08f);
			func_393(&Var17, &Var19);
		}
		if (bLocal_562)
		{
			func_379(&(uParam0->f_420[14]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_379(&(uParam0->f_420[14]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1,55f, 5, 106f);
		}
		func_404(uParam0->f_420[14], 0, 0);
		func_409("Shared", "Info_Icon_32", uParam0[iVar3], 0, 0, 5, 0);
		func_402(&(uParam0->f_316[22]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_396(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_110668 + 1, 16);
	func_394(uParam0[7], 1);
	func_409("SPRRaces", &Var30, uParam0[7], 0, 0, 5, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[25]), 0,0047f, 0,0055f);
	unk_0x4B9228CE1CF0DACA(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_110668 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_562)
	{
		Var40.f_9 = (Var40.f_9 - 0,108f);
		func_393(&Var38, &Var40);
	}
	if (bLocal_562)
	{
		func_379(&(uParam0->f_420[25]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_379(&(uParam0->f_420[25]), &cVar34, &Var38, &Var40, 18f, 1,55f, 5, 106f);
	}
	func_404(uParam0->f_420[25], 0, 0);
	func_402(&(uParam0->f_316[16]), &(uParam0->f_741.f_198), &cVar34, 0);
	func_396(&(uParam0->f_741.f_198));
	func_403(&(uParam0->f_741.f_198));
	func_402(&(uParam0->f_316[4]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_402(&(uParam0->f_316[8]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_400(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[22], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[22]), 0, 0);
	func_387(&(uParam0->f_316[13]), &(uParam0->f_741.f_198), floor(Local_51.f_112[Global_110668]) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[23], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[23]), 0, 0);
	func_387(&(uParam0->f_316[14]), &(uParam0->f_741.f_198), floor((((Local_51.f_112[Global_110668] - Local_51.f_106[Global_110668]) / 2f) + Local_51.f_106[Global_110668])) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[24], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[24]), 0, 0);
	func_387(&(uParam0->f_316[15]), &(uParam0->f_741.f_198), floor(Local_51.f_106[Global_110668]) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_403(&(uParam0->f_741.f_198));
}

float func_379(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	func_380(uParam3, 0);
	unk_0xA1868A78E3C3D56B(sParam1);
	iVar0 = unk_0x5D2FD44A8C086959(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0x0D71AFA59EF5104F())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_271(((to_float(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_271(((fParam7 + ((to_float(iParam6) + (to_float(iVar0) * 0,5f)) * fParam4)) - (fParam5 * 0,5f)), iVar1);
	return 0f;
}

void func_380(var uParam0, bool bParam1)
{
	unk_0x7BBAC160090910C3(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xF1F881BAAAFB43B1(uParam0->f_8, uParam0->f_9);
	}
	unk_0xD3539A877EC25E86(uParam0->f_1, uParam0->f_2);
	unk_0x7178F32F6742C936(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x5C3AC46FC4D891D1();
			unk_0xC8CFC125861F0537();
			break;
		
		case 3:
			unk_0xC8CFC125861F0537();
			break;
		
		case 2:
			unk_0x5C3AC46FC4D891D1();
			break;
	}
	if (bParam1)
	{
		unk_0xD9ACBBA59FD5A09E(4);
	}
}

bool func_381(int iParam0)
{
	func_166();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

void func_382(var uParam0)
{
	func_383(uParam0, 107);
}

void func_383(var uParam0, int iParam1)
{
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_384(var uParam0)
{
	func_383(uParam0, 108);
}

void func_385(var uParam0)
{
	func_383(uParam0, 109);
}

void func_386(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_387(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (func_390())
	{
		func_380(uParam1, 0);
		unk_0xFF72A133B792782E(iParam6);
		unk_0xAAE406A7DA443B93(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x070005E852D4C0E9(sVar0);
		unk_0x164431059FF80580(iParam2, iParam3);
		unk_0xE0026608C37C7C41(func_389(*uParam0), func_388(uParam0->f_1), 0);
	}
}

float func_388(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_389(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_390()
{
	if (func_391())
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0;
	}
	return 1;
}

bool func_391()
{
	return Global_1312440;
}

void func_392(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_393(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0,5f) * 1,33f) + 0,5f);
	uParam1->f_8 = (((uParam1->f_8 - 0,5f) * 1,33f) + 0,5f);
	uParam1->f_9 = (((uParam1->f_9 - 0,5f) * 1,33f) + 0,5f);
}

void func_394(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_395(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0,5f) * 1,33f) + 0,5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1,33f);
}

void func_396(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_397(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	sVar0 = sParam2;
	if (!func_50(sVar0))
	{
		if (func_390())
		{
			func_380(uParam1, 0);
			unk_0xFF72A133B792782E(iParam4);
			unk_0xAAE406A7DA443B93(iParam3);
			func_398(func_389(*uParam0), func_388(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_398(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_399(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_400(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_401(uParam0, 2);
}

void func_401(var uParam0, int iParam1)
{
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_402(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xD9ACBBA59FD5A09E(1);
	}
	func_397(fParam0, uParam1, sParam2, 0, 0);
}

void func_403(var uParam0)
{
	func_401(uParam0, 1);
}

void func_404(struct<8> Param0, int iParam8, int iParam9)
{
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_408(&Var0);
			break;
		
		case 1:
			func_407(&Var0);
			break;
		
		case 3:
			func_406(&Var0);
			break;
		
		case 4:
			func_405(&Var0);
			break;
	}
	if (func_390())
	{
		if (iParam9 == 1)
		{
			unk_0xC1032CAC14DE468A(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0xC1032CAC14DE468A(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_405(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_406(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_407(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_408(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_409(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_416(&Var0);
			break;
		
		case 1:
			func_415(&Var0);
			break;
		
		case 5:
			func_414(&Var0);
			break;
		
		case 6:
			func_413(&Var0);
			break;
		
		case 7:
			func_412(&Var0);
			break;
		
		case 8:
			func_411(&Var0);
			break;
		
		case 9:
			func_410(&Var0);
			break;
	}
	if (func_390())
	{
		unk_0xD9ACBBA59FD5A09E(iParam5);
		if (iParam3 == 1)
		{
			unk_0x539E86AE011A8B38(sParam0, sParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x539E86AE011A8B38(sParam0, sParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0xD9ACBBA59FD5A09E(4);
	}
}

void func_410(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_411(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_412(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_413(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_414(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_415(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_416(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_417(var uParam0, var uParam1)
{
	if (iLocal_527 == 1)
	{
		return 1;
	}
	if (iLocal_528)
	{
		return 0;
	}
	if (timera() < 500)
	{
		return 1;
	}
	if (bLocal_526)
	{
		if (unk_0xB9132A06AE472728(2, 201))
		{
			iLocal_520 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_520, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_527 = 1;
			iLocal_528 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0xB9132A06AE472728(2, 202))
		{
			iLocal_520 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_520, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			unk_0xA37A90C62806D848(1);
			func_547(&(Local_51.f_119));
			iLocal_527 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0xB9132A06AE472728(2, 202) || unk_0xB9132A06AE472728(2, 238))
	{
		iLocal_520 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(iLocal_520, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_262(&(Local_51.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&iLocal_522);
		iLocal_527 = 1;
		unk_0xA37A90C62806D848(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1() && bLocal_526 == 0)
	{
		if (unk_0x9E6C8D8976DA0ECD(2))
		{
			Global_4268497 = func_421(0,201f, 0,222f, 0,198f, 0,0375f, 0,034f, 5, 255, 0, 1);
			func_420(0, Global_110668, 1);
			if (func_419())
			{
				if (Global_4268497 == Global_110668)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_520 = unk_0xD68EA767274B7444();
					unk_0x22293E611B2408F1(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_110668 = Global_4268497;
					func_547(&(Local_51.f_119));
				}
			}
		}
	}
	if (unk_0xB9132A06AE472728(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_111638.f_19038.f_12[Global_110668].f_4 == 0)
		{
			iLocal_520 = unk_0xD68EA767274B7444();
			unk_0x22293E611B2408F1(iLocal_520, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_520 = unk_0xD68EA767274B7444();
			unk_0x22293E611B2408F1(iLocal_520, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0xB9132A06AE472728(2, 188) || func_418(0, uParam1)) || unk_0xBFC0798A6E3417F9(2, 241))
	{
		iVar1 = (Global_110668 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_520 = unk_0xD68EA767274B7444();
		unk_0x22293E611B2408F1(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_110668 = iVar1;
		func_547(&(Local_51.f_119));
	}
	if ((unk_0xB9132A06AE472728(2, 187) || func_418(1, uParam1)) || unk_0xBFC0798A6E3417F9(2, 242))
	{
		iVar2 = Global_110668 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_520 = unk_0xD68EA767274B7444();
		unk_0x22293E611B2408F1(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_110668 = iVar2;
		func_547(&(Local_51.f_119));
	}
	return 1;
}

bool func_418(int iParam0, var uParam1)
{
	bVar0 = false;
	iVar1 = unk_0x0DED1C1B8250FA57(2, 195);
	iVar2 = unk_0x0DED1C1B8250FA57(2, 196);
	if (unk_0x51D1D19912234EA0(iVar1) < 28 && unk_0x51D1D19912234EA0(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x1C0640BA9A7327B3() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = unk_0x1C0640BA9A7327B3();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_419()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 > -1)
		{
			if (unk_0xBFC0798A6E3417F9(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_420(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4268497 == -6)
	{
		unk_0xC74D8A1D346B9CCB(4);
		if (iParam0 && unk_0x06F8112AA79C53D9(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268497 = -1;
			return 0;
		}
	}
	if (((Global_4268497 > -1 || Global_4268497 == -3) || Global_4268497 == -2) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(1);
		return 0;
	}
	if (Global_4268497 == -1 && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(2, 237))
		{
			unk_0xC74D8A1D346B9CCB(4);
			Global_4268497 = -6;
			return 1;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(3);
			return 0;
		}
	}
	unk_0xC74D8A1D346B9CCB(1);
	return 0;
}

int func_421(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	iVar7 = -1;
	if (!unk_0x91E3F625EF57450D(2))
	{
		return -1;
	}
	unk_0x38C3A68D7861DCFD(2, 200, 1);
	unk_0x5D80F91A16C40CDE();
	if (bParam8)
	{
		if (!unk_0x0D71AFA59EF5104F())
		{
			fParam0 = (((fParam0 - 0,5f) * 1,33f) + 0,5f);
			fParam2 = (fParam2 * 1,33f);
		}
	}
	if (bParam7)
	{
		unk_0xD02CE72B4B66DC29(76, 84);
		unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0xE428D1DCE17602B4(fParam0, fParam1, &fParam0, &fParam1);
		unk_0xD59EF13BB60323B9();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0x4F3973434662D795(2, 239);
	fVar3 = unk_0x4F3973434662D795(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = floor((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0xD02CE72B4B66DC29(76, 84);
			unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
			func_422(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			func_422(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_422(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_423()
{
	switch (iLocal_521)
	{
		case 0:
			unk_0xA37A90C62806D848(1);
			unk_0xD7992BEF7A9D109E("SP_SPR", 3);
			unk_0x0D3BE1DE0262A012("SPRRaces", false);
			unk_0x0D3BE1DE0262A012("MPHUD", false);
			iLocal_521 = 1;
			break;
		
		case 1:
			if (unk_0x01C309A4BDFCAD82("SP_SPR", 3))
			{
				if (unk_0x27117E2CDD4D67C3("SPRRaces"))
				{
					if (unk_0x27117E2CDD4D67C3("MPHUD"))
					{
						iLocal_521 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0xE17FDF9E3068281B(&(Local_51.f_119));
			Local_51.f_119 = 0;
			func_547(&(Local_51.f_119));
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 512);
			}
			func_137(1);
			unk_0x752C7D5696C0D8A0(1);
			unk_0x71EDC33E5A423750(Local_51.f_1, 4);
			func_374();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_51.f_11)
			{
				iLocal_531[iVar0] = -1;
				iVar0++;
			}
			func_427(&uLocal_563);
			func_424();
			unk_0x82A772610883F395("MinigameTransitionIn", 0, 1);
			iLocal_521 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_424()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_111638.f_19038.f_12[iVar0] = { func_426(iVar0) };
		MemCopy(&(Local_51.f_24[iVar0]), {Global_111638.f_19038.f_12[iVar0]}, 8);
		Local_51.f_106[iVar0] = func_425(iVar0);
		Local_51.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_111638.f_19038.f_6[iVar0] > Local_51.f_112[iVar0] || Global_111638.f_19038.f_6[iVar0] <= 0f)
			{
				Global_111638.f_19038.f_12[iVar0 + 1].f_4 = 0;
			}
			else
			{
				Global_111638.f_19038.f_12[iVar0 + 1].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_111638.f_19038.f_12[0].f_4 = 1;
}

float func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_426(int iParam0)
{
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_427(var uParam0)
{
	func_430();
	bLocal_562 = unk_0x0D71AFA59EF5104F();
	func_302(uParam0);
	func_280(&(uParam0->f_741));
	func_428(uParam0);
}

void func_428(var uParam0)
{
	bVar0 = unk_0x0D71AFA59EF5104F();
	func_279(&(uParam0->f_316[0]), 262f, (71f - func_429(0,00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[1]), (257f + 127f), (125f - func_429(0,00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[2]), (513f + 127f), (125f - func_429(0,00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[3]), (769f + 127f), (125f - func_429(0,00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[17]), (257f + func_278(0,0047f, 1280, 1)), 162f, 1);
	func_279(&(uParam0->f_316[18]), (257f + func_278(0,0047f, 1280, 1)), 189f, 1);
	func_279(&(uParam0->f_316[19]), (257f + func_278(0,0047f, 1280, 1)), 216f, 1);
	func_279(&(uParam0->f_316[20]), (257f + func_278(0,0047f, 1280, 1)), 243f, 1);
	func_279(&(uParam0->f_316[21]), (257f + func_278(0,0047f, 1280, 1)), 270f, 1);
	func_279(&(uParam0->f_316[22]), (257f + func_278(0,0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[16]), (513f + func_278(0,0047f, 1280, 1)), (299f - func_429(0,00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[4]), (769f + func_278(0,0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[5]), 769f, 297f, 1);
	func_279(&(uParam0->f_316[8]), (769f + func_278(0,0047f, 1280, 1)), 351f, 1);
	func_279(&(uParam0->f_316[9]), 324f, 351f, 1);
	func_279(&(uParam0->f_316[6]), (769f + func_278(0,0047f, 1280, 1)), (324f - func_429(0,00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[7]), 324f, (324f - func_429(0,00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[15]), 810f, 459f, 1);
	func_279(&(uParam0->f_316[14]), 896f, 459f, 1);
	func_279(&(uParam0->f_316[13]), 982f, 459f, 1);
	func_275(uParam0[0], 257f, 55f, 766f, 105f, 1);
	unk_0xA402F6C87C08815C(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_274(uParam0[0], uVar1, uVar2, uVar3, uVar4);
	func_275(uParam0[1], 496f, 171f, 32f, 32f, 0);
	func_274(uParam0[1], 255, 255, 255, 255);
	func_275(uParam0[2], 496f, 198f, 32f, 32f, 0);
	func_274(uParam0[2], 255, 255, 255, 255);
	func_275(uParam0[3], 496f, 225f, 32f, 32f, 0);
	func_274(uParam0[3], 255, 255, 255, 255);
	func_275(uParam0[4], 496f, 252f, 32f, 32f, 0);
	func_274(uParam0[4], 255, 255, 255, 255);
	func_275(uParam0[5], 496f, 279f, 32f, 32f, 0);
	func_274(uParam0[5], 255, 255, 255, 255);
	func_275(uParam0[6], (486f + func_278(0,0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_274(uParam0[6], 255, 255, 255, 255);
	func_275(uParam0[7], 640f, 224f, 256f, 256f, 0);
	func_274(uParam0[7], 255, 255, 255, 255);
	func_275(uParam0[9], 896f, 223f, 128f, 128f, 0);
	func_274(uParam0[9], 255, 255, 255, 255);
	func_275(uParam0[13], 770,5f, 374,5f, 80f, 80f, 1);
	func_274(uParam0[13], 255, 255, 255, 255);
	func_275(uParam0[12], 856f, 374,5f, 80f, 80f, 1);
	func_274(uParam0[12], 255, 255, 255, 255);
	func_275(uParam0[11], 941,5f, 374,5f, 80f, 80f, 1);
	func_274(uParam0[11], 255, 255, 255, 255);
	func_269(&(uParam0->f_420[3]), 257f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[3]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[4]), 513f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[4]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[5]), 769f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[5]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[0]), 257f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[0]), 1, 1);
	func_269(&(uParam0->f_420[1]), 513f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[1]), 1, 1);
	func_269(&(uParam0->f_420[2]), 769f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[2]), 1, 1);
	func_269(&(uParam0->f_420[7]), 513f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[7]), 117, 1);
	func_269(&(uParam0->f_420[8]), 769f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[8]), 117, 1);
	func_269(&(uParam0->f_420[9]), 257f, 159f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[9]), 117, 1);
	func_269(&(uParam0->f_420[10]), 257f, 186f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[10]), 117, 1);
	func_269(&(uParam0->f_420[11]), 257f, 213f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[11]), 117, 1);
	func_269(&(uParam0->f_420[12]), 257f, 240f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[12]), 117, 1);
	func_269(&(uParam0->f_420[13]), 257f, 267f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[13]), 117, 1);
	func_269(&(uParam0->f_420[26]), 257f, 294f, 254f, 2f, 1);
	func_267(&(uParam0->f_420[26]), 1, 1);
	func_269(&(uParam0->f_420[14]), 257f, 294f, 254f, 75f, 1);
	func_267(&(uParam0->f_420[14]), 117, 1);
	func_269(&(uParam0->f_420[15]), 257f, 294f, (254f - 32f), 75f, 1);
	func_267(&(uParam0->f_420[15]), 1, 1);
	func_269(&(uParam0->f_420[25]), 513f, 294f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[25]), 117, 1);
	func_269(&(uParam0->f_420[16]), 769f, 294f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[16]), 117, 1);
	func_269(&(uParam0->f_420[17]), 769f, 321f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[17]), 117, 1);
	func_269(&(uParam0->f_420[18]), 769f, 348f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[18]), 117, 1);
	func_269(&(uParam0->f_420[21]), 769f, 375f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[21]), 117, 1);
	func_269(&(uParam0->f_420[20]), 854f, 375f, 84f, 84f, 1);
	func_267(&(uParam0->f_420[20]), 117, 1);
	func_269(&(uParam0->f_420[19]), 940f, 375f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[19]), 117, 1);
	func_269(&(uParam0->f_420[22]), 769f, 456f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[22]), 109, 1);
	func_269(&(uParam0->f_420[23]), 854f, 456f, 84f, 25f, 1);
	func_267(&(uParam0->f_420[23]), 108, 1);
	func_269(&(uParam0->f_420[24]), 940f, 456f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[24]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5] = ((((*uParam0)[iVar5] - 0,5f) * 1,33f) + 0,5f);
			uParam0[iVar5]->f_2 = (uParam0[iVar5]->f_2 * 1,33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5] = (((uParam0->f_316[iVar5] - 0,5f) * 1,33f) + 0,5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5] = (((uParam0->f_420[iVar5] - 0,5f) * 1,33f) + 0,5f);
			uParam0->f_420[iVar5].f_2 = (uParam0->f_420[iVar5].f_2 * 1,33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

float func_429(float fParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0)
	{
		unk_0x8A462DAA7D1D9008(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return to_float(round(fVar1));
	}
	return fVar1;
}

void func_430()
{
	unk_0x035C78C5D5EB800E();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_431(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0].f_1[iVar0]), "", 32);
		StringCopy(&(uParam0->f_113[0].f_1[iVar0].f_8), "", 32);
		iVar0++;
	}
}

int func_432(var uParam0, bool bParam1)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (!iLocal_529)
		{
			iVar0 = 0;
			if (uParam0->f_358[0].f_13 > 0f)
			{
				if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_460(Local_51.f_10, &(Local_51.f_65[Local_51.f_10]));
			if (bParam1)
			{
				func_457(Local_51.f_10, uParam0->f_358[0].f_13, iVar0);
				iLocal_529 = 1;
				return 1;
			}
			else if (func_433(Local_51.f_10, uParam0->f_358[0].f_13, iVar0))
			{
				iLocal_529 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_529 = 1;
	}
	return 0;
}

int func_433(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_457(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_434(&uLocal_1550))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_434(var uParam0)
{
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_456(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_455(unk_0xD803B885F5E47A62()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_454(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_453(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x3E935963A5A0820F(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_452(uParam0->f_44, iVar188))
					{
						if (func_451(uParam0->f_44, 4, iVar188))
						{
							unk_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_450(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_452(uParam0->f_44, iVar188))
								{
									if (func_451(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0x14B893B11D05C490(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = unk_0x1969161BAC0006D6(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_449();
				if (Global_1835013.f_4)
				{
					if (func_448(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x56218E3881C1B187(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x8CD06866876216F2() && func_447())
			{
				if (func_446())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_448(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x56218E3881C1B187(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xBC584396476EE48A(0, &Var0);
						if (unk_0x7F8A39872A07D2CE(&(Var0.f_13), ""))
						{
							Global_968151.f_1 = -1;
						}
						else
						{
							Global_968151.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968151.f_1 = -1;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_968151.f_1 = -1;
				}
				Global_1835013 = 999;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_435(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (bParam5)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xBED23E8D17964CE1(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xDA5E71D84C8C1F25(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x425FE0104C115EE8(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_436(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_437(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_437(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

int func_438()
{
	if (unk_0x798A3F1296751F46() && !func_439())
	{
		return 1;
	}
	return 0;
}

bool func_439()
{
	return func_440(unk_0xD803B885F5E47A62());
}

int func_440(int iParam0)
{
	switch (func_441(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 41:
		case 36:
		case 39:
		case 42:
			return 0;
		
		default:
	}
	return 1;
}

int func_441(int iParam0)
{
	return Global_1590535[iParam0].f_196;
}

int func_442()
{
	if (unk_0xA9C9C7E04514E320() || Global_1835008)
	{
		func_443();
		return 1;
	}
	return 0;
}

void func_443()
{
	if (func_444(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0x8EFB4731C3DCDA55(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_366(&(Global_1835008.f_1));
	}
}

int func_444(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_445(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_445(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_446()
{
	return unk_0xEAE0D21A50E6C7F4(Global_959568.f_8, 1);
}

var func_447()
{
	return Global_2458936.f_3;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_449()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_450(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

int func_451(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xE847F6F326D1C162(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_452(int iParam0, int iParam1)
{
	if (unk_0xD3D4B12287A02195(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_453(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_454(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (unk_0x9555470AA3470707(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_455(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_456(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_457(int iParam0, float fParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var22[0]), "GameType", 32);
	StringCopy(&(Var22[1]), "Location", 32);
	StringCopy(&(Var22[2]), "Type", 32);
	StringCopy(&(Var3[0]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2]), "StuntPlaneRace", 24);
	if (func_459(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_458(817, 131, -ceil((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_458(817, 131, 0, 0f, 0);
		}
		func_458(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_458(817, 2, ceil((fParam1 * 100f)) * 10, 0f, 0);
		func_458(817, 147, ceil((fParam1 * 100f)) * 10, 0f, 0);
		func_458(817, 149, 0, 0f, 0);
		func_458(817, 148, 0, 0f, 0);
		func_458(817, 109, 1, 0f, 0);
		func_458(817, 157, iVar0, 0f, 0);
		func_458(817, 158, iVar1, 0f, 0);
		func_458(817, 86, iVar2, 0f, 0);
	}
}

void func_458(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	if (!bParam4)
	{
		unk_0x6106B2DBBCB1AA39(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x3E935963A5A0820F(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_451(iParam0, 4, iVar1))
				{
					unk_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xD3D4B12287A02195(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_459(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var69 = { func_455(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var69))
				{
					if (unk_0xD9DA83C40D038174(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68] = { *uParam2[iVar68] };
			MemCopy(&(Var0.f_2.f_1[iVar68].f_8), {*uParam1[iVar68]}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_2458936.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_1662155.f_10));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0;
}

void func_460(int iParam0, char[4] cParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&vVar0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&vVar0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&vVar0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&vVar0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_461(&uLocal_1550, 86, &vVar0, cParam1, -1, -1, 0, 0);
}

void func_461(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "CoDriver", 32);
					unk_0x4D8EB33D0EE1D0CB(unk_0xD803B885F5E47A62(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1].f_8), {Var17}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_469(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Location", 32);
			uParam0->f_44.f_3.f_1[1].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_227 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_468(Global_4456448.f_232883) || func_465(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_464(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2768), 1);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Location", 32);
			uParam0->f_44.f_3.f_1[1].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0].f_8), {func_463(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_1835392.f_2708)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar16]))
		{
			unk_0x5D96D8530B3D0904(&(Global_1835392.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835392.f_2826 = func_462(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_462(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_456(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

struct<6> func_463(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_464(int iParam0)
{
	return iParam0 == 74;
}

var func_465(int iParam0)
{
	return (func_467(iParam0) || func_466(iParam0));
}

bool func_466(int iParam0)
{
	return iParam0 == 44;
}

bool func_467(int iParam0)
{
	return iParam0 == 45;
}

bool func_468(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_469(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_470()
{
	if (((((((((((Global_4456448.f_75705 == 1 || Global_4456448.f_75705 == 3) || Global_4456448.f_75705 == 5) || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 19) || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448.f_75705 == 11) || Global_4456448.f_75705 == 13) || Global_4456448.f_75705 == 21) || Global_4456448.f_75705 == 23) || Global_4456448.f_75705 == 25)
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0, bool bParam1)
{
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < unk_0xF4CCC8CB6DE7F1AE() && Global_1840924.f_2 > 0)
	{
		func_366(&Global_1840924);
		func_366(&(Global_1840924.f_49));
		*iParam0 = 0;
		Global_1840924.f_2 = 0;
		func_480(0);
	}
	Global_1840924.f_2 = unk_0xF4CCC8CB6DE7F1AE();
	iVar1 = -1;
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x98DF743F0BF6732B() == 0)
		{
			iVar1 = unk_0xFBB4B649DD3EA6F0();
		}
	}
	if ((unk_0x33A494591F2C1975() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_478() && unk_0x58424C49F8924842()))
	{
		if (unk_0xACED3FBF20B322FA())
		{
			func_475(&(Global_1840924.f_3), func_477(&(Global_1840924.f_3)));
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 4))
			{
				unk_0x5D96D8530B3D0904(iParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_473(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_478())
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
			{
				if (!unk_0x06F8112AA79C53D9(2, 201))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0);
				}
			}
			else if (unk_0xB9132A06AE472728(2, 201))
			{
				func_366(&(Global_1840924.f_49));
				func_366(&Global_1840924);
				*iParam0 = 0;
				Global_1840924.f_2 = 0;
				func_480(0);
				return 1;
			}
		}
	}
	else
	{
		func_475(&(Global_1840924.f_3), func_477(&(Global_1840924.f_3)));
		if ((func_472(&(Global_1840924.f_49)) && !func_444(&(Global_1840924.f_49), 2000, 1)) && !unk_0x58424C49F8924842())
		{
			unk_0x5D96D8530B3D0904(iParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_473(&(Global_1840924.f_3), 0);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 3))
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 1))
			{
				unk_0xB0A3CB46BE5B746A(0);
				unk_0x5D96D8530B3D0904(iParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_473(&(Global_1840924.f_3), 0);
			}
		}
		if (func_472(&Global_1840924))
		{
			if (!func_444(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x58424C49F8924842())
				{
					if (unk_0x1E517F9E1F09160C())
					{
						_set_warning_message_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!unk_0x1A72D8C9F025E5E3())
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
						{
							if (!unk_0x06F8112AA79C53D9(2, 201))
							{
								unk_0x5D96D8530B3D0904(iParam0, 0);
							}
						}
						else if (unk_0xB9132A06AE472728(2, 201))
						{
							func_366(&Global_1840924);
							*iParam0 = 0;
							Global_1840924.f_2 = 0;
							func_480(0);
							return 1;
						}
					}
				}
				else
				{
					func_366(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_480(0);
					return 1;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(*iParam0, 3))
			{
				if (unk_0x1E517F9E1F09160C())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
				{
					if (!unk_0x06F8112AA79C53D9(2, 201))
					{
						unk_0x5D96D8530B3D0904(iParam0, 0);
					}
				}
				else if (unk_0xB9132A06AE472728(2, 201))
				{
					func_366(&(Global_1840924.f_49));
					func_366(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_480(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x1E517F9E1F09160C())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x1A72D8C9F025E5E3())
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
					{
						if (!unk_0x06F8112AA79C53D9(2, 201))
						{
							unk_0x5D96D8530B3D0904(iParam0, 0);
						}
					}
					else if (unk_0xB9132A06AE472728(2, 201))
					{
						func_366(&(Global_1840924.f_49));
						func_366(&Global_1840924);
						*iParam0 = 0;
						Global_1840924.f_2 = 0;
						func_480(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_472(var uParam0)
{
	return uParam0->f_1;
}

void func_473(var uParam0, bool bParam1)
{
	func_474(uParam0);
	if (bParam1)
	{
		func_480(0);
	}
	uParam0->f_35 = 1;
}

void func_474(var uParam0)
{
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_475(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_476(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_33);
			unk_0x6D99DF8263D35CE5(uParam0->f_34);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_33);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			unk_0x6D99DF8263D35CE5(uParam0->f_33);
			unk_0x6D99DF8263D35CE5(uParam0->f_34);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x164431059FF80580(uParam0->f_33, 70);
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_476(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_477(var uParam0)
{
	return uParam0->f_35;
}

int func_478()
{
	if (func_479())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_479()
{
	return Global_2461181;
}

void func_480(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

void func_481(var uParam0, int iParam1, char[4] cParam2)
{
	func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(7);
	func_460(iParam1, cParam2);
	func_482(uParam0, &uLocal_1550);
}

void func_482(var uParam0, var uParam1)
{
	func_437(&(Global_1840924.f_49), 1, 0);
	unk_0xE19C2AAC820D8ED5();
	func_543();
	func_542(0);
	unk_0x3FC8DBCC154CA56B();
	func_540(1);
	unk_0x3584F71E5CA29322(10);
	func_539(1);
	func_538(1);
	if (!func_439())
	{
		if (!unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			unk_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_42, 3))
	{
		*uParam0 = func_357();
		unk_0x5D96D8530B3D0904(&(uParam1->f_42), 3);
	}
	Var32 = { func_455(unk_0xD803B885F5E47A62()) };
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (((!unk_0x999A3BFD3E9B5D2C() || !unk_0x1963B11DE70153E0()) || (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
		{
			if (!unk_0x1963B11DE70153E0())
			{
				if (Global_1835392.f_2829 != 2)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())
			{
				if (Global_1835392.f_2829 != 3)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!unk_0x999A3BFD3E9B5D2C())
			{
				if (Global_1835392.f_2829 != 4)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_42, 1))
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x7E60D21B163E9D56();
				func_537(*uParam0, Global_1835392.f_2780);
				if (unk_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_456(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							Var9 = { Global_1835392.f_2780.f_9 };
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &Var9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&Var9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar31 = 0;
				unk_0x5D96D8530B3D0904(&iVar31, 4);
				func_534(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0x5D96D8530B3D0904(&iVar31, 5);
				func_534(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0x5D96D8530B3D0904(&iVar31, 6);
				func_534(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0x5D96D8530B3D0904(&(uParam1->f_42), 1);
				func_533(*uParam0);
				unk_0x0674E58A79778E99(&(uParam1->f_42), 2);
				unk_0xA37A90C62806D848(1);
			}
			else
			{
				func_533(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_505(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x0674E58A79778E99(&(uParam1->f_42), 1);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_42, 0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_537(*uParam0, Global_1835392.f_2780);
					if (unk_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_456(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var9 = { Global_1835392.f_2780.f_9 };
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &Var9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_42), 0);
					unk_0x0674E58A79778E99(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&vVar51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0x5D96D8530B3D0904(&iVar31, 4);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0x5D96D8530B3D0904(&iVar31, 5);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0x5D96D8530B3D0904(&iVar31, 6);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0x5D96D8530B3D0904(&iVar31, 7);
						func_504(*uParam0, iVar6, iVar31, &vVar51);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_366(&(Global_1835392.f_2823));
				}
				else if (func_444(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&vVar57, "SC_LB_DL", 24);
					StringIntConCat(&vVar57, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0x5D96D8530B3D0904(&iVar31, 4);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0x5D96D8530B3D0904(&iVar31, 5);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0x5D96D8530B3D0904(&iVar31, 6);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0x5D96D8530B3D0904(&iVar31, 7);
						func_504(*uParam0, iVar6, iVar31, &vVar57);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_366(&(Global_1835392.f_2823));
				}
				func_533(*uParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam1->f_42), 0);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_537(*uParam0, Global_1835392.f_2780);
					if (unk_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_456(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var9 = { Global_1835392.f_2780.f_9 };
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &Var9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &Var9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_42, 6))
					{
						func_369(&Global_1839723);
						func_500(uParam1, &Global_1839723);
						func_499(uParam1, &Global_1839723);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839723[iVar0].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									unk_0x5D96D8530B3D0904(&iVar31, 4);
									func_534(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0x5D96D8530B3D0904(&iVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_534(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_534(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839723[iVar0].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0x5D96D8530B3D0904(&iVar31, 6);
									if (!unk_0xC2F420D189FDB329())
									{
										bVar63 = true;
									}
									else if (!unk_0xB0D6327A81292879())
									{
										bVar63 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_534(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_534(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_450(Global_1839723[iVar0].f_32))
							{
								if (func_456(uParam1->f_44))
								{
									unk_0x4D8EB33D0EE1D0CB(unk_0xD803B885F5E47A62(), &uVar45);
									if (!Global_1839723[iVar0].f_74 && unk_0x7F8A39872A07D2CE(&(uParam1->f_44.f_3.f_1[1].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_498(&(Global_1839723[iVar0].f_32), &Var32))
										{
											unk_0x5D96D8530B3D0904(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x5D96D8530B3D0904(&iVar31, 3);
											}
										}
									}
									if (func_456(uParam1->f_44))
									{
										Var9 = { Global_1839723[iVar0] };
										if (!unk_0xEA6BC48857E0AC4C(&(Global_1839723[iVar0].f_84)) && !unk_0x7F8A39872A07D2CE(&(Global_1839723[iVar0].f_84), ""))
										{
											StringConCat(&Var9, "/", 64);
											StringConCat(&Var9, &(Global_1839723[iVar0].f_84), 64);
										}
										func_497(*uParam0, iVar6, iVar31, Global_1839723[iVar0].f_59, &Var9, &(Global_1839723[iVar0].f_80));
										uParam1->f_246.f_6[iVar0] = iVar6;
										uParam1->f_246.f_6[iVar0].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0].f_2 = { Global_1839723[iVar0].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_497(*uParam0, iVar6, iVar31, Global_1839723[iVar0].f_59, &(Global_1839723[iVar0]), &(Global_1839723[iVar0].f_80));
										uParam1->f_246.f_6[iVar0] = iVar6;
										uParam1->f_246.f_6[iVar0].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0].f_2 = { Global_1839723[iVar0].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835392.f_2708)
									{
										bVar8 = false;
										if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2770, iVar1))
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2754[iVar1] == Global_1839723[iVar0].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_491(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_67[iVar1], 0, Global_1839723[iVar0].f_58);
											}
											else
											{
												func_491(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_67[iVar1], Global_1839723[iVar0].f_74, Global_1839723[iVar0].f_58);
											}
										}
										else
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2761[iVar1] == Global_1839723[iVar0].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_488(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_60[iVar1], 0);
											}
											else
											{
												func_488(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_60[iVar1], Global_1839723[iVar0].f_74);
											}
										}
										iVar1++;
									}
									func_487();
									uVar2[(Global_1839723[iVar0].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0].f_59 > 2)
										{
											unk_0x5D96D8530B3D0904(&iVar31, 2);
											unk_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[0].f_1), 2);
											func_486(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						unk_0x5D96D8530B3D0904(&iVar31, 4);
						func_534(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0x5D96D8530B3D0904(&iVar31, 5);
						func_534(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0x5D96D8530B3D0904(&iVar31, 6);
						func_534(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_42), 1);
					unk_0x0674E58A79778E99(&(uParam1->f_42), 2);
					func_533(*uParam0);
					unk_0xA37A90C62806D848(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_1), 3);
							func_486(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1], uParam1->f_246.f_6[uParam1->f_246.f_1].f_1);
						}
					}
				}
				else
				{
					func_533(*uParam0);
					func_483(uParam0, uParam1);
				}
			}
		}
	}
}

void func_483(var uParam0, var uParam1)
{
	iVar1 = uParam1->f_246.f_1;
	if (unk_0x91E3F625EF57450D(2))
	{
		unk_0x5D80F91A16C40CDE();
		unk_0x558EC149EB2BC0A2(2, 239);
		unk_0x558EC149EB2BC0A2(2, 240);
		unk_0x558EC149EB2BC0A2(2, 237);
		unk_0x558EC149EB2BC0A2(2, 238);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
		if (unk_0x7FEE810EE9E768EB(2, 241))
		{
			unk_0x3D9702C33283E122(2, 188, 1f);
		}
		if (unk_0x7FEE810EE9E768EB(2, 242))
		{
			unk_0x3D9702C33283E122(2, 187, 1f);
		}
		if (unk_0xE6CD3F2A2067C866(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					bVar0 = true;
				}
				else
				{
					unk_0x3D9702C33283E122(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x91E3F625EF57450D(2))
	{
		func_485(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_246, 0))
		{
			if ((unk_0x06F8112AA79C53D9(2, 188) || unk_0x7FEE810EE9E768EB(2, 188)) || iVar6 < -100)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x5D96D8530B3D0904(&(uParam1->f_246), 0);
				func_366(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_484(uParam1, 188))
		{
			unk_0x0674E58A79778E99(&(uParam1->f_246), 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_246, 1))
		{
			if ((unk_0x06F8112AA79C53D9(2, 187) || unk_0x7FEE810EE9E768EB(2, 187)) || iVar6 > 100)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1++;
				unk_0x5D96D8530B3D0904(&(uParam1->f_246), 1);
				func_366(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_484(uParam1, 187))
		{
			unk_0x0674E58A79778E99(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_246, 3))
	{
		if ((unk_0x06F8112AA79C53D9(2, 204) || unk_0xD245978525608929(2, 204)) || unk_0xBFC0798A6E3417F9(2, 237))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_246), 3);
			func_366(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_484(uParam1, 204))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_246.f_6[iVar1].f_1), 3);
				func_486(*uParam0, uParam1->f_246.f_6[iVar1], uParam1->f_246.f_6[iVar1].f_1);
			}
			unk_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_1), 3);
			func_486(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1], uParam1->f_246.f_6[uParam1->f_246.f_1].f_1);
			unk_0x0674E58A79778E99(&(uParam1->f_42), 2);
		}
		if (func_450(uParam1->f_246.f_6[uParam1->f_246.f_1].f_2))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_246, 2))
			{
				if (unk_0x06F8112AA79C53D9(2, 217) || unk_0xD245978525608929(2, 217))
				{
					if (!unk_0x1A72D8C9F025E5E3())
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", true);
						unk_0x5D96D8530B3D0904(&(uParam1->f_246), 2);
						unk_0x7DA6B436D3570520(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_2));
					}
				}
			}
			else if (!unk_0x06F8112AA79C53D9(2, 217))
			{
				unk_0x0674E58A79778E99(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_484(var uParam0, int iParam1)
{
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_485(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x06F8112AA79C53D9(2, iParam1) && !unk_0x7FEE810EE9E768EB(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_444(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x06F8112AA79C53D9(2, iParam1) && !unk_0x7FEE810EE9E768EB(2, iParam1)) || func_444(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_485(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0x4F3973434662D795(2, 218) * 127f));
	*uParam1 = floor((unk_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = floor((unk_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = floor((unk_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*uParam1 = floor((unk_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = floor((unk_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_486(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

void func_487()
{
	unk_0x7E60D21B163E9D56();
}

void func_488(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x21994591120B91F0(fParam44, 2);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(floor(fParam44));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!unk_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_490(fParam44);
					}
					else
					{
						fParam44 = func_489(fParam44);
					}
				}
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x21994591120B91F0(fParam44, 2);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0:
			break;
	}
}

float func_489(float fParam0)
{
	return (fParam0 / 0,3048f);
}

float func_490(float fParam0)
{
	return (fParam0 / 1609,344f);
}

void func_491(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
{
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(iParam44);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(-iParam44);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 14);
					unk_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 6);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 2055);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					unk_0x779B34565F4D71B1();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 14);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 2055);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 14);
					unk_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 6);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam44, 2055);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0x3FC14104C3FD24D5(iParam44))
				{
					unk_0x7ACC3006A87F8B39("SCLB_VEH_CUST");
					unk_0x6B012227B3921E18(unk_0x1739BA50603D849C(iParam44));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					unk_0x779B34565F4D71B1();
				}
			}
			else if (unk_0x3FC14104C3FD24D5(iParam44))
			{
				unk_0x7ACC3006A87F8B39(unk_0x1739BA50603D849C(iParam44));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 8:
			if (func_496(iParam44) != 0)
			{
				unk_0x7ACC3006A87F8B39(func_493(func_496(iParam44), 0));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!unk_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = floor(func_490(to_float(iParam44)));
					}
					else
					{
						iParam44 = floor(func_489(to_float(iParam44)));
					}
				}
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(iParam44);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 21:
			if (iParam44 > 20)
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			else
			{
				Var0 = { func_492(iParam44) };
				unk_0x7ACC3006A87F8B39(&Var0);
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_492(int iParam0)
{
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_493(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case -1569615261:
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case 453432689:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case 1593441988:
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case 584646201:
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case 736523883:
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case 324215364:
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case -1074790547:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case -2084633992:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case -1357824103:
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case -1660422300:
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case 2144741730:
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case 487013001:
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case 2017895192:
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case -494615257:
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case 205991906:
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case 856002082:
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case 100416529:
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case -1568386805:
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case -1312131151:
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case 1119849093:
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case -1813897027:
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case -37975472:
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case 741814745:
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case 615608432:
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case 911657153:
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case 883325847:
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case -1833087301:
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case 1945616459:
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case -123497569:
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case -268631733:
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case 966099553:
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case -72657034:
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case -1716189206:
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case 1737195953:
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case 1317494643:
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case -1786099057:
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case -2067956739:
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case 1141786504:
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case 133987706:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -1553120962:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -270015777:
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case -1654528753:
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case -1716589765:
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case -102323637:
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case 1627465347:
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case -1076751822:
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case 137902532:
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case -1834847097:
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case 1198879012:
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case -771403250:
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case -1063057011:
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case -1466123874:
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case 2138347493:
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case -952879014:
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case 984333226:
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case -1420407917:
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case 1672152130:
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case -102973651:
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case 1834241177:
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case 171789620:
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case -656458692:
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case -598887786:
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case 2132975508:
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case -581044007:
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case -619010992:
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case -1951375401:
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case -275439685:
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case 1649403952:
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case -538741184:
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case -1045183535:
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case 148160082:
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case -1355376991:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case -1238556825:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case -1853920116:
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case 727643628:
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		default:
			if (func_495(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_494(&(Var0.f_31));
				}
				else
				{
					return func_494(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_494(var uParam0)
{
	return uParam0;
}

int func_495(int iParam0, var uParam1)
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

int func_496(int iParam0)
{
	if (iParam0 == 600)
	{
		return 1834241177;
	}
	else if (iParam0 == 500)
	{
		return 1119849093;
	}
	else if (iParam0 == 400)
	{
		return -1660422300;
	}
	else if (iParam0 == 401)
	{
		return 2144741730;
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return -1074790547;
	}
	else if (iParam0 == 301)
	{
		return -2084633992;
	}
	else if (iParam0 == 302)
	{
		return -1357824103;
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return 487013001;
	}
	else if (iParam0 == 201)
	{
		return 2017895192;
	}
	else if (iParam0 == 202)
	{
		return -494615257;
	}
	else if (iParam0 == 203)
	{
		return -1654528753;
	}
	else if (iParam0 == 100)
	{
		return 324215364;
	}
	else if (iParam0 == 101)
	{
		return 736523883;
	}
	else if (iParam0 == 102)
	{
		return -270015777;
	}
	else if (iParam0 == 0)
	{
		return 453432689;
	}
	else if (iParam0 == 1)
	{
		return 1593441988;
	}
	else if (iParam0 == 2)
	{
		return 584646201;
	}
	else if (iParam0 == 3)
	{
		return -1716589765;
	}
	return 0;
}

void func_497(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	if (iParam3 > 0)
	{
		unk_0x7ACC3006A87F8B39("NUMBER");
		unk_0x6D99DF8263D35CE5(iParam3);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
		unk_0x779B34565F4D71B1();
	}
	unk_0x045A0775396CC970(sParam4);
	unk_0x045A0775396CC970(sParam5);
}

int func_498(var uParam0, var uParam1)
{
	if (!func_450(*uParam0))
	{
		return 0;
	}
	if (!func_450(*uParam1))
	{
		return 0;
	}
	if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_499(var uParam0, var uParam1)
{
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (uParam1[iVar0]->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if (uParam1[iVar1]->f_75 != 0)
					{
						if (uParam1[iVar1]->f_75 < uParam1[iVar0]->f_75)
						{
							uVar77 = uParam1[iVar1]->f_75;
							uParam1[iVar1]->f_75 = uParam1[iVar0]->f_75;
							uParam1[iVar0]->f_75 = uVar77;
							Var2 = { *uParam1[iVar1] };
							*uParam1[iVar1] = { *uParam1[iVar0] };
							*uParam1[iVar0] = { Var2 };
						}
						else if (uParam1[iVar1]->f_75 == uParam1[iVar0]->f_75)
						{
							if (uParam1[iVar1]->f_59 != -1)
							{
								if (uParam1[iVar1]->f_59 < uParam1[iVar0]->f_59 || uParam1[iVar0]->f_59 == -1)
								{
									uVar77 = uParam1[iVar1]->f_75;
									uParam1[iVar1]->f_75 = uParam1[iVar0]->f_75;
									uParam1[iVar0]->f_75 = uVar77;
									Var2 = { *uParam1[iVar1] };
									*uParam1[iVar1] = { *uParam1[iVar0] };
									*uParam1[iVar0] = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_500(var uParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_503(uParam1, iVar3, &uVar0, 0))
			{
				uParam1[iVar3]->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar1, 1))
			{
				uParam1[iVar3]->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar2, 2))
			{
				uParam1[iVar3]->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_501(uParam1);
	}
}

void func_501(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_455(unk_0xD803B885F5E47A62()) };
	if (unk_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar16 = unk_0x9B6FABF659F515A2(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_502(&Global_1839593);
				iVar2 = 0;
				unk_0xAB008D43188476FB(Global_1835392.f_2826, iVar0, &Global_1839593);
				*uParam0[iVar0] = { Global_1839593.f_1 };
				uParam0[iVar0]->f_16 = { Global_1839593.f_17 };
				uParam0[iVar0]->f_32 = { Global_1839593.f_33 };
				uParam0[iVar0]->f_45 = { Global_1839593.f_46 };
				uParam0[iVar0]->f_58 = Global_1839593.f_59;
				uParam0[iVar0]->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (unk_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				uParam0[iVar0]->f_75 = iVar2;
				if (uParam0[iVar0]->f_59 != -1)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 0))
					{
						uParam0[iVar0]->f_74 = 1;
					}
					else
					{
						uParam0[iVar0]->f_74 = 0;
					}
					if (func_498(&(uParam0[iVar0]->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839593.f_62)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1839593.f_63, iVar1))
					{
						uParam0[iVar0]->f_67[iVar1] = Global_1839593.f_97[iVar1];
					}
					else
					{
						uParam0[iVar0]->f_60[iVar1] = Global_1839593.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_502(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_503(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3][0].f_59 > 0)
		{
			*uParam0[iParam1] = { Global_1835392[iParam3][0] };
			Global_1839536[iParam3] = { Global_1835392[iParam3][0] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3][0].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3][0].f_60[Global_1835392.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*uParam0[iParam1] = { Global_1835392[iParam3][Global_1835392.f_2775[iParam3]] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1], unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
				uParam0[iParam1]->f_32 = { func_455(unk_0xD803B885F5E47A62()) };
				uParam0[iParam1]->f_59 = -1;
				uParam0[iParam1]->f_67[0] = -1;
				uParam0[iParam1]->f_67[1] = -1;
				uParam0[iParam1]->f_67[2] = -1;
				uParam0[iParam1]->f_67[3] = -1;
				uParam0[iParam1]->f_60[0] = -1f;
				uParam0[iParam1]->f_60[1] = -1f;
				uParam0[iParam1]->f_60[2] = -1f;
				uParam0[iParam1]->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] - iVar0)].f_59 > 0)
			{
				*uParam0[iParam1] = { Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] - iVar0)] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = floor(to_float((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] + iVar0)].f_59 > 1)
			{
				*uParam0[iParam1] = { Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] + iVar0)] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_504(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x5D96D8530B3D0904(&iParam2, 7);
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sParam3);
	unk_0x0EF1238B8EFD4D04();
	unk_0x7E60D21B163E9D56();
}

int func_505(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_472(&(Global_1835392.f_2827)))
		{
			func_445(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_444(&(Global_1835392.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x999A3BFD3E9B5D2C() || !unk_0x1963B11DE70153E0()) || (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
	{
		unk_0x0674E58A79778E99(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 4))
	{
		func_532(uParam0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_530(uParam0))
	{
		return 0;
	}
	if (!func_528(uParam0))
	{
		return 0;
	}
	if (!func_521(uParam0))
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		func_369(&Global_1839723);
		func_500(uParam0, &Global_1839723);
		func_499(uParam0, &Global_1839723);
		unk_0x5D96D8530B3D0904(&(uParam0->f_42), 6);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 7))
	{
		if (!func_472(&(Global_1835392.f_2830)))
		{
			func_445(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_444(&(Global_1835392.f_2830), 30000, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
		}
		if (func_518(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_515(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_509(&Global_1839723))
		{
			func_506(&Global_1839723);
			unk_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
			func_506(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_506(var uParam0)
{
	iVar2 = func_508(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_507(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_502(&Global_1839593);
		if (uParam0[iVar0]->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *uParam0[iVar0] };
			if (unk_0x7F8A39872A07D2CE(&(uParam0[iVar0]->f_16), ""))
			{
				Global_1839593.f_17 = { *uParam0[iVar0] };
			}
			else
			{
				Global_1839593.f_17 = { uParam0[iVar0]->f_16 };
			}
			Global_1839593.f_33 = { uParam0[iVar0]->f_32 };
			if (func_450(uParam0[iVar0]->f_45))
			{
				Global_1839593.f_46 = { uParam0[iVar0]->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { uParam0[iVar0]->f_32 };
			}
			Global_1839593.f_59 = uParam0[iVar0]->f_58;
			Global_1839593.f_60 = uParam0[iVar0]->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if (uParam0[iVar0]->f_74)
			{
				unk_0x5D96D8530B3D0904(&(Global_1839593.f_61), 0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1839593.f_61), 0);
			}
			unk_0x5D96D8530B3D0904(&(Global_1839593.f_61), uParam0[iVar0]->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839593.f_62)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1839593.f_63, iVar1))
				{
					Global_1839593.f_97[iVar1] = uParam0[iVar0]->f_67[iVar1];
				}
				else
				{
					Global_1839593.f_64[iVar1] = uParam0[iVar0]->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			unk_0x724501B3F806735C(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2] = { func_229(unk_0xD803B885F5E47A62()) };
}

void func_507(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (unk_0xE4F1C23C6353EC03(Global_1838577.f_81[iParam1]))
		{
			unk_0xCA6EE3119323E45C(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xE4F1C23C6353EC03(iParam0))
		{
			unk_0xCA6EE3119323E45C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_508(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xE4F1C23C6353EC03(Global_1838577.f_81[iVar0]))
		{
			iVar3 = unk_0x4F4FEC8CCCE2C7B1(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_509(var uParam0)
{
	switch (uParam0[0]->f_76)
	{
		case 0:
			func_513(uParam0);
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0))
			{
				uParam0[0]->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_450(uParam0[iVar0]->f_32))
				{
					if (!func_512(&(uParam0[iVar0]->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206] = { uParam0[iVar0]->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				uParam0[0]->f_76 = 1;
			}
			else
			{
				uParam0[0]->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_510(&(uParam0[1]->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				uParam0[0]->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_450(uParam0[iVar0]->f_32) && func_450(Global_1841022[iVar1]))
					{
						if (unk_0x4F18738E5BDE9AC9(&(uParam0[iVar0]->f_32), &(Global_1841022[iVar1])))
						{
							uParam0[iVar0]->f_80 = { Global_1841022.f_157[iVar1] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			uParam0[0]->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_510(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x0742540F16CEE0F4())
			{
			}
			else
			{
				unk_0x7BF88BC97F9C422A();
				unk_0x6CEC2945A313AD9E(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x0742540F16CEE0F4())
			{
				if (unk_0x812FCD8C479A4733())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (unk_0x794D5DBA715427A2(uParam2[iVar35], &uVar0))
				{
					func_511(&uVar0, uParam3[iVar35]);
				}
				iVar35++;
			}
			if (unk_0x0742540F16CEE0F4())
			{
				unk_0x47B6D760F5574870();
			}
			else
			{
				unk_0x7BF88BC97F9C422A();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_511(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

int func_512(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_450(*uParam1[iVar0]))
		{
			if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_513(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_514(&(Global_1841022[iVar0]));
		StringCopy(&(Global_1841022.f_157[iVar0]), "", 16);
		iVar0++;
	}
	if (uParam0[0]->f_76 > 0)
	{
		uParam0[0]->f_76 = 0;
		uParam0[1]->f_76 = 0;
		if (!unk_0x0742540F16CEE0F4())
		{
			unk_0x7BF88BC97F9C422A();
		}
	}
	if (unk_0x0742540F16CEE0F4())
	{
		unk_0x47B6D760F5574870();
	}
	Global_1841022.f_206 = 0;
}

void func_514(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_515(var uParam0)
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 1;
	}
	else if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		if (!func_517(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_516(&(uParam0[iVar0]->f_78), &(uParam0[iVar0]->f_32), uParam0[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_516(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_450(*uParam1))
			{
				if (!unk_0x60F025D317CE2512(uParam1))
				{
					if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
					{
						if (unk_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0xA3F916BCE430ED26())
					{
						if (unk_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xD7926DA4168DF7E1(uParam1), 64);
						if (unk_0xBA301E03A078FA59())
						{
						}
						else if (unk_0x33A494591F2C1975())
						{
						}
						else if (unk_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x60F025D317CE2512(uParam1))
			{
				if (!unk_0xE13B4B9D87E527E9())
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam2, unk_0xD7926DA4168DF7E1(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_517(var uParam0)
{
	if (!unk_0xDC30EF462887322E() && !unk_0x33A494591F2C1975())
	{
		return 1;
	}
	if (uParam0[0]->f_78 == 2)
	{
		return 1;
	}
	switch (uParam0[0]->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1]), "", 64);
				func_514(&(Global_1835392.f_3026[iVar1]));
				if (func_450(uParam0[iVar1]->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183] = { uParam0[iVar1]->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				uParam0[0]->f_79 = unk_0x3F4BBF0887AB451C(&(Global_1835392.f_3026), Global_1835392.f_3183);
				uParam0[0]->f_78 = 1;
			}
			else
			{
				uParam0[0]->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x1C71EF085035D439(uParam0[0]->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_450(uParam0[iVar1]->f_32))
					{
						*uParam0[iVar1] = { Global_1835392.f_2833[iVar2] };
						iVar2++;
					}
					iVar1++;
				}
				uParam0[0]->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				uParam0[0]->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			uParam0[0]->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_518(var uParam0)
{
	if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_520(&(uParam0[iVar0]->f_77), &(uParam0[iVar0]->f_16), &(uParam0[iVar0]->f_84), &(Global_1835392.f_2833), &(uParam0[iVar0]->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_519(&(uParam0[iVar0]->f_77), uParam0[iVar0]->f_16, &(uParam0[iVar0]->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_519(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xEA6BC48857E0AC4C(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x4DA27762188F26CD(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_450(Var0))
			{
				if (!unk_0x60F025D317CE2512(&Var0))
				{
					if ((unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E()) || unk_0x33A494591F2C1975())
					{
						if (unk_0x341C9B6377CAD883(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xD7926DA4168DF7E1(&Var0), 64);
						if (unk_0xBA301E03A078FA59())
						{
						}
						else if (unk_0x33A494591F2C1975())
						{
						}
						else if (unk_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x60F025D317CE2512(&Var0))
			{
				if (!unk_0xE13B4B9D87E527E9())
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam17, unk_0xD7926DA4168DF7E1(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_520(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	if (!unk_0xDC30EF462887322E() && !unk_0x33A494591F2C1975())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x4DA27762188F26CD(sParam1, &(Var1[0]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0], "", 64);
			if (func_450(Var1[0]))
			{
				if (!unk_0x60F025D317CE2512(&(Var1[0])))
				{
					*uParam4 = unk_0x3F4BBF0887AB451C(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&(Var1[0]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x1C71EF085035D439(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *uParam3[0] };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_521(var uParam0)
{
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_455(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835392.f_2775[iVar113] = -1;
			Global_1835392.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x080E9D045AEE5605())
			{
				if (unk_0xF2EC2A39FF9E838D(&Var116))
				{
					if (unk_0xD9DA83C40D038174(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_527(), 0, 0, 0))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_527())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0xBC584396476EE48A(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x14B893B11D05C490(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x1969161BAC0006D6(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_526(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_527() && iVar109 == 0)
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
									Global_1835392.f_2775[iVar113] = 0;
									Global_1835392.f_2704[iVar113]++;
								}
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_498(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_59 = Var0.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar108 = unk_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_67[iVar107] = unk_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_60[iVar107] = unk_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835392.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						if (!func_527())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_526(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0xBC584396476EE48A(iVar111, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_527() && iVar109 == iVar111)
								{
									if (!func_498(&(Global_1835392[iVar113][0].f_32), &Var116))
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1835392[iVar113][0].f_32)))
									{
										if (func_498(&Var0, &Var116))
										{
											if (Global_1835392.f_2775[iVar113] < 0)
											{
												Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
										Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
										Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_59 = Var0.f_96;
										Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar108 = unk_0x14B893B11D05C490(iVar111, Global_1835392.f_2709);
											if (iVar108 == 1)
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_67[iVar106] = unk_0x14B893B11D05C490(iVar111, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_60[iVar106] = unk_0x1969161BAC0006D6(iVar111, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_526(&Var0);
							iVar111++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[iVar113] == -1 && func_527())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835392.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0xBC584396476EE48A(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835392[iVar113][0].f_59 > 1 || Global_1835392[iVar113][0].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835392.f_2704[iVar113] < 11 || bVar114)
							{
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[iVar113][0]), {Var0.f_13}, 16);
									Global_1835392[iVar113][0].f_32 = { Var0 };
									Global_1835392[iVar113][0].f_59 = Var0.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar108 = unk_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113][0].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113][0].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113][0].f_16), {Var0.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar113][0].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113][0].f_67[iVar107] = unk_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113][0].f_60[iVar107] = unk_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835392.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835392.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
									if (func_524(uParam0->f_44))
									{
										iVar108 = unk_0x14B893B11D05C490(iVar106, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_59 = Var0.f_96;
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_67[iVar107] = unk_0x14B893B11D05C490(iVar106, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_60[iVar107] = unk_0x1969161BAC0006D6(iVar106, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_526(&Var0);
							iVar106++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2832), iVar113);
					Global_1835392.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835392.f_2775[iVar113] == -1 && func_527())
				{
					if (Global_1835392.f_2704[iVar113] >= 1)
					{
						func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
					}
					else
					{
						func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
					}
					Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
					Global_1835392.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_522(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_522(int iParam0, int iParam1)
{
	if ((func_527() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835392[iParam0][Global_1835392.f_2775[iParam0]].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[iParam0])
			{
				if (iVar0 != Global_1835392.f_2775[iParam0])
				{
					if (Global_1835392[iParam0][iVar0].f_59 >= Global_1835392[iParam0][Global_1835392.f_2775[iParam0]].f_59)
					{
						if (Global_1835392[iParam0][iVar0].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[iParam0][iVar0].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_527())
		{
		}
		if (Global_1835392.f_2704[iParam0] <= Global_1835392.f_2775[iParam0])
		{
		}
		if (Global_1835392.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_523(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (unk_0xDF496D8EA2986832(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_524(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_525(var uParam0, char* sParam1, int iParam2)
{
	if (func_456(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
		sParam1->f_32 = { func_455(unk_0xD803B885F5E47A62()) };
	}
	sParam1->f_59 = iParam2;
	if (func_524(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_526(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

int func_527()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_528(var uParam0)
{
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_455(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0xB552DC43762F9C85();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_527())
				{
					iVar112 = 0;
				}
				else
				{
					iVar112 = 1;
				}
				if (func_529(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0], iVar112, 0, 100))
				{
					func_453(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x54F772BC86327092(&Var98))
					{
						if (func_527())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0xBC584396476EE48A(iVar110, &Var0);
									if (func_456(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_498(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x14B893B11D05C490(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x1969161BAC0006D6(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_526(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_527() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								Global_1835392.f_2775[iVar113] = 0;
								Global_1835392.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0xBC584396476EE48A(0, &Var0);
							if (func_527() && (func_498(&Var0, &Var114) || func_498(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_450(Var0) && Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_498(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_59 = 1;
								if (func_524(uParam0->f_44))
								{
									iVar111 = unk_0x14B893B11D05C490(0, Global_1835392.f_2709);
									if (iVar111 == 1)
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_58 = 1;
									}
									else
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_58 = 0;
									}
								}
								if (func_456(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
								}
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835392.f_2708)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_67[iVar106] = unk_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar106]);
									}
									else
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_60[iVar106] = unk_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_526(&Var0);
								unk_0xC4492EA0CF4852F9();
								func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar113] == -1 && func_527())
								{
									if (Global_1835392.f_2704[iVar113] >= 1)
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
									}
									else
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
									}
									Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
									Global_1835392.f_2704[iVar113]++;
								}
								return 0;
							}
							func_526(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_526(&Var0);
							unk_0xC4492EA0CF4852F9();
							func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar113] == -1 && func_527())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_527())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							unk_0xBC584396476EE48A(iVar110, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_527() && iVar108 == iVar110)
								{
									if (!func_498(&(Global_1835392[iVar113][0].f_32), &Var114))
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
										Global_1835392[1][Global_1835392.f_2704[1]].f_59 = iVar110 + 1;
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var114) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1835392[iVar113][0].f_32)))
									{
										if (func_498(&Var0, &Var114))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1][Global_1835392.f_2704[1]]), {Var0.f_13}, 16);
										Global_1835392[1][Global_1835392.f_2704[1]].f_32 = { Var0 };
										Global_1835392[1][Global_1835392.f_2704[1]].f_59 = iVar110 + 1;
										Global_1835392[1][Global_1835392.f_2704[1]].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar111 = unk_0x14B893B11D05C490(iVar110, Global_1835392.f_2709);
											if (iVar111 == 1)
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_58 = 1;
											}
											else
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1][Global_1835392.f_2704[1]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_67[iVar106] = unk_0x14B893B11D05C490(iVar110, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_60[iVar106] = unk_0x1969161BAC0006D6(iVar110, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_526(&Var0);
							iVar110++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar113] == -1 && func_527())
						{
							if (Global_1835392.f_2704[iVar113] >= 1)
							{
								func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
							}
							else
							{
								func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
							}
							Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
							Global_1835392.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x5D96D8530B3D0904(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_522(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_529(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (leaderboards2_read_friends_by_row(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_530(var uParam0)
{
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_455(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835392.f_2775[iVar126] = -1;
			Global_1835392.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_531(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_527(), 0, 0, 0))
			{
				func_453(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_527())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0xBC584396476EE48A(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x14B893B11D05C490(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x1969161BAC0006D6(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_526(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0xBC584396476EE48A(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar126] < 11)
							{
								if (func_527() && iVar122 == 0)
								{
									func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Var13.f_96);
									Global_1835392.f_2775[iVar126] = 0;
									Global_1835392.f_2704[iVar126]++;
								}
								if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_498(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), {Var13.f_13}, 16);
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_32 = { Var13 };
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_59 = Var13.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar121 = unk_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar121 == 1)
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_16), {Var13.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835392.f_2708)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_67[iVar119] = unk_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar119]);
										}
										else
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_60[iVar119] = unk_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835392.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						if (!func_527())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_526(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0xBC584396476EE48A(iVar124, &Var13);
							if (Global_1835392.f_2704[iVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_527() && iVar122 == iVar124)
								{
									if (!func_498(&(Global_1835392[iVar126][0].f_32), &Var13))
									{
										func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Var13.f_96);
										Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
										Global_1835392.f_2704[iVar126]++;
									}
								}
								if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar126] < 11)
								{
									if (func_450(Var13) && !func_498(&(Global_1835392[iVar126][0].f_32), &Var13))
									{
										if (func_498(&Var13, &Var0))
										{
											if (Global_1835392.f_2775[iVar126] < 0)
											{
												Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), {Var13.f_13}, 16);
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_32 = { Var13 };
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_59 = Var13.f_96;
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar121 = unk_0x14B893B11D05C490(iVar124, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_16), {Var13.f_19.f_1[1].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835392.f_2708)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_67[iVar119] = unk_0x14B893B11D05C490(iVar124, Global_1835392.f_2710[iVar119]);
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_60[iVar119] = unk_0x1969161BAC0006D6(iVar124, Global_1835392.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835392.f_2704[iVar126]++;
									}
								}
							}
							func_526(&Var13);
							iVar124++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[iVar126] == -1 && func_527())
							{
								if (Global_1835392.f_2704[iVar126] >= 1)
								{
									func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Global_1835392[iVar126][(Global_1835392.f_2704[iVar126] - 1)].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), 1);
								}
								Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
								Global_1835392.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835392.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_453(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0xBC584396476EE48A(iVar119, &Var13);
							if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835392[iVar126][0].f_59 > 1 || Global_1835392[iVar126][0].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835392.f_2704[iVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835392[iVar126][0]), {Var13.f_13}, 16);
										Global_1835392[iVar126][0].f_32 = { Var13 };
										Global_1835392[iVar126][0].f_59 = Var13.f_96;
										if (func_524(uParam0->f_44))
										{
											iVar121 = unk_0x14B893B11D05C490(0, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126][0].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126][0].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126][0].f_16), {Var13.f_19.f_1[1].f_8}, 16);
										}
										Global_1835392[iVar126][0].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126][iVar119].f_67[iVar120] = unk_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126][iVar119].f_60[iVar120] = unk_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835392.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835392.f_2704[iVar126]++;
											}
										}
										else if (Global_1835392.f_2704[iVar126] == 1 && Global_1835392.f_2775[iVar126] == -1)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
									else if (Global_1835392.f_2704[iVar126] < 11)
									{
										MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), {Var13.f_13}, 16);
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_32 = { Var13 };
										if (func_524(uParam0->f_44))
										{
											iVar121 = unk_0x14B893B11D05C490(iVar119, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_16), {Var13.f_19.f_1[1].f_8}, 16);
										}
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_59 = Var13.f_96;
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_67[iVar120] = unk_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_60[iVar120] = unk_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
								}
							}
							func_526(&Var13);
							iVar119++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Global_1835392.f_2832), iVar126);
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar126] == -1 && func_527())
			{
				if (Global_1835392.f_2704[iVar126] >= 1)
				{
					func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Global_1835392[iVar126][(Global_1835392.f_2704[iVar126] - 1)].f_59 + 1);
				}
				else
				{
					func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), 1);
				}
				Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
				Global_1835392.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_522(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_531(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0]), &(Param0.f_3.f_1[iVar0])) || !unk_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0].f_8), &(Param0.f_3.f_1[iVar0].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_532(var uParam0)
{
	if (unk_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar0 = unk_0x4F4FEC8CCCE2C7B1(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam0->f_42), 5);
			func_507(Global_1835392.f_2826, -1);
		}
	}
}

void func_533(int iParam0)
{
	if (unk_0x83D8570832F172A7(iParam0))
	{
		unk_0x6567AE843FADBA94(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_534(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	sVar0 = "";
	if (unk_0xEAE0D21A50E6C7F4(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xEAE0D21A50E6C7F4(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xEAE0D21A50E6C7F4(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x58424C49F8924842() && unk_0x080E9D045AEE5605())
		{
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_455(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var53))
				{
					unk_0xD9DA83C40D038174(&Var1, 35, &Var53);
					if (!unk_0xEA6BC48857E0AC4C(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(*iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	if (bVar52)
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x0D45A7AB73600CFA(&Var36);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x779B34565F4D71B1();
	}
	unk_0x7E60D21B163E9D56();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0x5D96D8530B3D0904(&iVar66, 7);
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		unk_0x3CAEA85DA607305E(*iParam1);
		unk_0x3CAEA85DA607305E(iVar66);
		if (!unk_0x58424C49F8924842())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x999A3BFD3E9B5D2C())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x0EF1238B8EFD4D04();
		unk_0x7E60D21B163E9D56();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam2, 5))
		{
			if (unk_0xB552DC43762F9C85() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam2, 6))
		{
			if (unk_0xC2F420D189FDB329())
			{
				if (unk_0xB0D6327A81292879())
				{
					if (unk_0x58424C49F8924842() && unk_0x080E9D045AEE5605())
					{
						if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_455(unk_0xD803B885F5E47A62()) };
							if (unk_0xF2EC2A39FF9E838D(&Var67))
							{
								unk_0xD9DA83C40D038174(&Var1, 35, &Var67);
								if (!unk_0xEA6BC48857E0AC4C(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = 0;
		unk_0x5D96D8530B3D0904(&iVar80, 7);
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		unk_0x3CAEA85DA607305E(*iParam1);
		unk_0x3CAEA85DA607305E(iVar80);
		if (bVar52)
		{
			unk_0x7ACC3006A87F8B39(sVar0);
			unk_0x0D45A7AB73600CFA(&Var36);
			unk_0x0EF1238B8EFD4D04();
		}
		else
		{
			unk_0x7ACC3006A87F8B39(sVar0);
			unk_0x0EF1238B8EFD4D04();
		}
		unk_0x7E60D21B163E9D56();
		*iParam1++;
	}
}

void func_535(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_TITLE");
	unk_0x7ACC3006A87F8B39(sParam1);
	unk_0x779B34565F4D71B1();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x7ACC3006A87F8B39(uParam2[iVar0]);
		unk_0x779B34565F4D71B1();
		iVar0++;
	}
	unk_0x7E60D21B163E9D56();
}

void func_536(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x7ACC3006A87F8B39(sParam1);
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				unk_0x0D45A7AB73600CFA(sParam3);
			}
		}
		else if (!unk_0xEA6BC48857E0AC4C(sParam3))
		{
			unk_0x6B012227B3921E18(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				unk_0x0D45A7AB73600CFA(sParam3);
			}
		}
		else if (!unk_0xEA6BC48857E0AC4C(sParam3))
		{
			unk_0x6B012227B3921E18(sParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam5);
	}
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

void func_537(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_538(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_539(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_540(bool bParam0)
{
	if (bParam0)
	{
		func_543();
	}
	func_541(4, -1);
	func_541(6, -1);
	func_541(7, -1);
	func_541(3, -1);
	func_541(1, -1);
	func_541(2, -1);
	func_541(11, -1);
	func_541(13, -1);
	func_541(14, -1);
	func_541(16, -1);
}

void func_541(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_542(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_143(0))
		{
			func_138(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_543()
{
	Global_2537071.f_4532 = 0;
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_262(&(Local_51.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_545(&(Local_51.f_119), 1);
	}
	else
	{
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_545(&(Local_51.f_119), 1);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 1024);
	}
	else
	{
		func_155(&(uParam0->f_1), 1024);
	}
}

int func_546(var uParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_547(var uParam0)
{
	if (Global_110668 != 0 && Global_111638.f_19038.f_12[Global_110668].f_4 == 0)
	{
		func_263(uParam0, 0, 0, 1, 1);
		func_262(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x1963B11DE70153E0())
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (unk_0x1963B11DE70153E0() && iLocal_529)
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	else
	{
		func_263(uParam0, 0, 0, 1, 1);
		func_262(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_262(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x1963B11DE70153E0())
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (unk_0x1963B11DE70153E0() && iLocal_529)
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	func_545(&(Local_51.f_119), 1);
}

void func_548()
{
	func_577();
	func_430();
	func_576(&(Local_2412.f_358[0].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_576(&uLocal_2082, 0, 0, "PilotDispatch", 0, 1);
	func_565(&Local_2412);
	func_549(&Local_2412, Local_51.f_10);
	if (unk_0xC844350D5D58C99A(Local_2412.f_358[0].f_9))
	{
		unk_0x71EDC33E5A423750(Local_2412.f_358[0].f_9, 4);
	}
}

void func_549(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_564(&Local_2412);
			break;
		
		case 1:
			func_563(&Local_2412);
			break;
		
		case 2:
			func_562(&Local_2412);
			func_561(&(Local_2412.f_27[2]), 1);
			func_561(&(Local_2412.f_27[3]), 1);
			break;
		
		case 3:
			func_560(&Local_2412);
			break;
		
		case 4:
			func_550(&Local_2412);
			break;
	}
}

void func_550(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 32;
	func_559(&(uParam0->f_27[0]), 947,1314f, 4146,46f, 80,494f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), 762,498f, 4589,213f, 105,5935f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), 659,2919f, 4806,028f, 175,759f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), 621,3849f, 5032,051f, 343,6387f, 30f, 2, 0);
	func_559(&(uParam0->f_27[4]), 503,8404f, 5297,335f, 508,6478f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), 555,4404f, 5426,935f, 708,948f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), 637,6946f, 5491,08f, 717,522f, 30f, 2, 0);
	func_559(&(uParam0->f_27[7]), 790,3913f, 5491,866f, 566,103f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), 910,6804f, 5313,552f, 388,8567f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), 1159,749f, 5183,155f, 253,1068f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), 1354,13f, 4998,078f, 141,6288f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), 1612,532f, 4941,23f, 61,8549f, 30f, 2, 0);
	func_559(&(uParam0->f_27[12]), 2200,396f, 4800,332f, 69,9321f, 30f, 3, 2);
	func_559(&(uParam0->f_27[13]), 2527,632f, 5144,98f, 66,763f, 30f, 3, 2);
	func_559(&(uParam0->f_27[14]), 2527,131f, 5275,334f, 62,3622f, 30f, 2, 0);
	func_559(&(uParam0->f_27[15]), 2413,345f, 5443,203f, 99,4297f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), 2236,067f, 5524,246f, 108,3291f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), 1944,463f, 5520,007f, 177,2808f, 30f, 2, 0);
	func_559(&(uParam0->f_27[18]), 1712,477f, 5624,937f, 324,9427f, 30f, 2, 0);
	func_559(&(uParam0->f_27[19]), 1601,158f, 5663,75f, 335,8832f, 30f, 2, 0);
	func_559(&(uParam0->f_27[20]), 1410,764f, 5675,836f, 425,9678f, 30f, 2, 0);
	func_559(&(uParam0->f_27[21]), 1225,682f, 5678,654f, 497,3169f, 30f, 2, 0);
	func_559(&(uParam0->f_27[22]), 1094,47f, 5664,07f, 563,0829f, 30f, 2, 0);
	func_559(&(uParam0->f_27[23]), 1001,427f, 5633,827f, 633,2537f, 30f, 2, 0);
	func_559(&(uParam0->f_27[24]), 875,5358f, 5642,667f, 682,5352f, 30f, 2, 0);
	func_559(&(uParam0->f_27[25]), 741,3275f, 5688,046f, 709,5683f, 30f, 2, 0);
	func_559(&(uParam0->f_27[26]), 487,2532f, 5654,821f, 802,0096f, 30f, 3, 1);
	func_559(&(uParam0->f_27[27]), 362,6602f, 5620,538f, 723,2353f, 30f, 2, 0);
	func_559(&(uParam0->f_27[28]), 134,4865f, 5555,637f, 520,3109f, 30f, 2, 0);
	func_559(&(uParam0->f_27[29]), -128,2242f, 5510,46f, 307,4505f, 30f, 2, 0);
	func_559(&(uParam0->f_27[30]), -397,7556f, 5438,69f, 175,4529f, 30f, 2, 0);
	func_559(&(uParam0->f_27[31]), -520,8975f, 5424,283f, 165,285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), unk_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), 1135,682f, 3700,644f, 80,494f, 22,3451f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_551(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_552(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_16 = { vParam1 };
	uParam0->f_19 = fParam4;
}

void func_553(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
	func_554(iParam2, &(Local_51.f_243));
}

void func_554(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_556(uParam1);
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
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
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
		func_555(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar0 + 1));
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

int func_555(int iParam0, var uParam1, var uParam2)
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

void func_556(var uParam0)
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

void func_557(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_558(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_559(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_560(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 28;
	func_559(&(uParam0->f_27[0]), -1737,725f, -2720,967f, 38f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), -1384,515f, -2880,773f, 38f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), -1156,435f, -2957,284f, 40f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), -795,3043f, -2987,754f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[4]), -429,0231f, -2969,528f, 30f, 30f, 3, 1);
	func_559(&(uParam0->f_27[5]), -15,5168f, -2912,484f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), 656,9059f, -2798,444f, 80f, 30f, 3, 2);
	func_559(&(uParam0->f_27[7]), 990,7529f, -2452,092f, 70f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), 1019,531f, -2182,119f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), 1019,899f, -1886,15f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), 944,9045f, -1488,589f, 107,7f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), 698,908f, -1013,024f, 100,5f, 30f, 3, 2);
	func_559(&(uParam0->f_27[12]), 388,7276f, -822,8241f, 90f, 30f, 2, 0);
	func_559(&(uParam0->f_27[13]), 20,7016f, -653,9637f, 101,8f, 30f, 3, 2);
	func_559(&(uParam0->f_27[14]), -135,3874f, -670,6069f, 112f, 30f, 3, 3);
	func_559(&(uParam0->f_27[15]), -360,3365f, -655,137f, 90f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), -700,3533f, -657,1476f, 70f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), -951,5859f, -654,0262f, 68f, 30f, 3, 2);
	func_559(&(uParam0->f_27[18]), -1125,587f, -769,7247f, 67f, 30f, 2, 0);
	func_559(&(uParam0->f_27[19]), -1281,291f, -851,0229f, 82f, 30f, 3, 1);
	func_559(&(uParam0->f_27[20]), -1580,865f, -1009,944f, 40f, 30f, 2, 0);
	func_559(&(uParam0->f_27[21]), -1877,52f, -1152,927f, 30f, 30f, 2, 0);
	func_559(&(uParam0->f_27[22]), -2101,111f, -1330,267f, 20f, 30f, 2, 0);
	func_559(&(uParam0->f_27[23]), -2230,15f, -1555,89f, 10f, 30f, 3, 2);
	func_559(&(uParam0->f_27[24]), -2214,946f, -1978,262f, 10f, 30f, 2, 0);
	func_559(&(uParam0->f_27[25]), -2055,091f, -2359,626f, 20f, 30f, 2, 0);
	func_559(&(uParam0->f_27[26]), -1893,392f, -2559,46f, 22f, 30f, 2, 0);
	func_559(&(uParam0->f_27[27]), -1737,725f, -2720,967f, 83,7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), unk_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), -2102,16f, -2556,082f, 38f, 245,6561f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_561(var uParam0, int iParam1)
{
	func_334(&(uParam0->f_9), iParam1);
}

void func_562(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 21;
	func_559(&(uParam0->f_27[0]), 1167,2f, -2557,195f, 90f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), 869,9235f, -2613,705f, 57,8325f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), 652,3818f, -2651,991f, 54,935f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), 249,3849f, -2579,821f, 60,1264f, 30f, 3, 2);
	func_559(&(uParam0->f_27[4]), -31,7179f, -2590,793f, 19,9452f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), -317,409f, -2582,66f, 48,7654f, 30f, 3, 3);
	func_559(&(uParam0->f_27[6]), -395,6915f, -2334,057f, 39,3612f, 30f, 2, 0);
	func_559(&(uParam0->f_27[7]), -300,2367f, -2118,431f, 53,3728f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), -157,1812f, -1967,885f, 56,4093f, 30f, 3, 2);
	func_559(&(uParam0->f_27[9]), -199,4688f, -1803,328f, 13,6363f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), -383,5264f, -1738,067f, 60,8194f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), -649,8698f, -1710,374f, 61,3036f, 30f, 2, 0);
	func_559(&(uParam0->f_27[12]), -861,6902f, -1857,194f, 77,0621f, 30f, 3, 2);
	func_559(&(uParam0->f_27[13]), -716,8034f, -2111,744f, 65,9868f, 30f, 2, 0);
	func_559(&(uParam0->f_27[14]), -548,7557f, -2230,616f, 97,2887f, 30f, 2, 0);
	func_559(&(uParam0->f_27[15]), -270,7834f, -2425,144f, 96,7744f, 30f, 3, 1);
	func_559(&(uParam0->f_27[16]), 5,435f, -2665,31f, 46,2903f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), 299,0821f, -2834,288f, 27,0191f, 30f, 2, 0);
	func_559(&(uParam0->f_27[18]), 514,295f, -2880,863f, 42,0956f, 30f, 3, 2);
	func_559(&(uParam0->f_27[19]), 842,6024f, -2599,042f, 25,978f, 30f, 2, 0);
	func_559(&(uParam0->f_27[20]), 991,974f, -2468,436f, 87,493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), unk_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), 1788,044f, -2438,835f, 130,9346f, 100,0275f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_563(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 19;
	func_559(&(uParam0->f_27[0]), -2819,07f, -81,2779f, 76,1411f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), -2737,77f, 342,665f, 175,645f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), -2631,929f, 499,7495f, 210,0935f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), -2438,01f, 692,3843f, 285,745f, 30f, 3, 3);
	func_559(&(uParam0->f_27[4]), -2039,406f, 708,7898f, 170,6556f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), -1633,076f, 751,8171f, 220,188f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), -1187,955f, 874,4288f, 246,4972f, 30f, 3, 1);
	func_559(&(uParam0->f_27[7]), -893,826f, 994,239f, 239,512f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), -565,788f, 1098,308f, 349,0507f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), -326,8564f, 1129,9f, 336,1296f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), -155,9212f, 1149,858f, 312,2522f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), 145,603f, 1162,599f, 277,7465f, 30f, 3, 1);
	func_559(&(uParam0->f_27[12]), 355,6647f, 1234,464f, 287,6501f, 30f, 2, 0);
	func_559(&(uParam0->f_27[13]), 640,85f, 1191,643f, 329,783f, 30f, 2, 0);
	func_559(&(uParam0->f_27[14]), 783,3697f, 1157,395f, 329,0691f, 30f, 3, 3);
	func_559(&(uParam0->f_27[15]), 1016,378f, 1000,386f, 252,4894f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), 1243,37f, 945,084f, 150,5214f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), 1494,048f, 863,8886f, 110,4097f, 30f, 2, 0);
	func_559(&(uParam0->f_27[18]), 1751,842f, 687,7875f, 296,787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), unk_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), -2818,17f, -500,178f, 76,1411f, 0f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_564(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 18;
	func_559(&(uParam0->f_27[0]), 1025,724f, 3073,133f, 70f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), 847,4132f, 3025,239f, 80f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), 624,897f, 2968,416f, 80f, 30f, 3, 1);
	func_559(&(uParam0->f_27[3]), 398,5529f, 2921,654f, 75f, 30f, 2, 0);
	func_559(&(uParam0->f_27[4]), 68,1f, 2896,4f, 80f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), -290,7f, 2895,4f, 80f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), -1033,31f, 2832,959f, 37,5f, 30f, 3, 2);
	func_559(&(uParam0->f_27[7]), -1195,153f, 2729,109f, 18f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), -1414,6f, 2636,365f, 8,25f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), -1684,856f, 2630,035f, 10f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), -2024,536f, 2677,336f, 30f, 30f, 3, 1);
	func_559(&(uParam0->f_27[11]), -2659,106f, 2670,574f, 5,4745f, 30f, 2, 0);
	func_559(&(uParam0->f_27[12]), -2880,136f, 2732,084f, 21,0365f, 30f, 2, 0);
	func_559(&(uParam0->f_27[13]), -3200,826f, 2826,548f, 40f, 30f, 3, 2);
	func_559(&(uParam0->f_27[14]), -3363,374f, 2580,812f, 50f, 30f, 2, 0);
	func_559(&(uParam0->f_27[15]), -3242,432f, 2370,19f, 40f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), -2879,09f, 2382,111f, 20f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), -2650,532f, 2450,207f, 66,6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), unk_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), vLocal_2307, 154,8464f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_565(var uParam0)
{
	func_4(&(uParam0->f_3));
	if (Local_51.f_10 != -1)
	{
		fVar0 = func_35(Local_51.f_10);
		if (fVar0 <= 0f || fVar0 > Local_51.f_12[Local_51.f_10])
		{
			fVar0 = Local_51.f_12[Local_51.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_573(uParam0);
	uParam0->f_12 = 0;
	func_566(uParam0);
	uParam0->f_13 = 0;
}

void func_566(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_567(uParam0, iVar0);
		iVar0++;
	}
}

void func_567(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_569(&(uParam0->f_358[iParam1]));
	func_568(&(uParam0->f_358[iParam1]));
}

void func_568(char* sParam0)
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_51.f_3 };
	sParam0->f_19 = Local_51.f_6;
	sParam0->f_20 = Local_51.f_7;
	sParam0->f_21 = Local_51.f_8;
	sParam0->f_22 = Local_51.f_9;
}

void func_569(var uParam0)
{
	func_572(uParam0);
	func_571(uParam0);
	func_570(uParam0);
}

void func_570(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_51.f_1)
		{
			if (!(unk_0x437347B10A200C4B(uParam0->f_8, 0) || unk_0x437347B10A200C4B(uParam0->f_9, 0)))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x327AAEE25F323797(uParam0->f_8);
				}
			}
			unk_0xA954465BA6FDEFE2(&(uParam0->f_9));
		}
	}
}

void func_571(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0x16F2683693E537C9())
		{
			unk_0xEBA53F35D0085654(&(uParam0->f_8));
		}
	}
}

void func_572(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_573(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_574(uParam0, iVar0);
		iVar0++;
	}
}

void func_574(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1]));
	func_79(&(uParam0->f_27[iParam1]));
	func_575(&(uParam0->f_27[iParam1]));
}

void func_575(var uParam0)
{
	*uParam0 = { Local_51.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_576(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_577()
{
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_578(&(Global_1835013.f_73));
	func_578(&(Global_1835013.f_142));
	func_578(&(Global_1835013.f_211));
	func_578(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_514(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_578(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		unk_0x67E5ECB8FD7F5018(0);
		unk_0x65C5EBCA17A891FC(1);
		unk_0x2C84016B4A95F6BA(0);
		func_173(1);
		Global_94002 = 1;
	}
	else
	{
		unk_0x67E5ECB8FD7F5018(1);
		unk_0x65C5EBCA17A891FC(0);
		unk_0x2C84016B4A95F6BA(1);
		func_173(0);
		Global_94002 = 0;
	}
}

void func_580(var uParam0)
{
	*uParam0 = unk_0xB01F55A0FD1CFD49("COUNTDOWN");
	unk_0xAE317D00A5A55DF6("HUD_321_GO", false, -1);
}

int func_581(int iParam0)
{
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(iParam0);
	}
	else if (unk_0x0F1CCD77290EE12F())
	{
		return 1;
	}
	return 0;
}

void func_582()
{
	if (!iLocal_2406)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0))
				{
					if (unk_0xE934758D273C899A(iVar0))
					{
						if (!unk_0x757EF87A33649210())
						{
							unk_0xC92DB9682A650680("MGSP_START");
							iLocal_2406 = 1;
						}
					}
				}
			}
		}
	}
}

int func_583(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_584(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam1 = unk_0xDC4DD3980107166C(iParam0, 24, 31);
	*iParam2 = unk_0xDC4DD3980107166C(iParam0, 16, 23);
	*iParam3 = unk_0xDC4DD3980107166C(iParam0, 8, 15);
	*uParam4 = unk_0xDC4DD3980107166C(iParam0, 0, 7);
}

int func_585(int iParam0)
{
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_586(iVar0, iVar1, iVar2, iVar3);
}

var func_586(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xCA42B3469E060D13(&uVar0, 24, 31, iParam0);
	unk_0xCA42B3469E060D13(&uVar0, 16, 23, iParam1);
	unk_0xCA42B3469E060D13(&uVar0, 8, 15, iParam2);
	unk_0xCA42B3469E060D13(&uVar0, 0, 7, iParam3);
	return uVar0;
}

int func_587()
{
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	func_597(23, 1);
	func_596(10);
	switch (Local_2321.f_5)
	{
		case 0:
			unk_0x34D79252800B23FF(0);
			unk_0x8225571BCEE038F8("EXTRASUNNY", 10f);
			func_595();
			func_594(2, 0);
			func_594(1, 0);
			func_594(3, 0);
			func_594(4, 0);
			func_594(5, 0);
			func_594(6, 0);
			func_594(7, 0);
			unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, 0);
			unk_0x28F5E4DA506AC0CA(vLocal_5280, 600f, 0, 0, 0, 0, false, 0);
			func_588(&Local_2412, Local_51.f_10);
			unk_0x85A7389D2B63E61A(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 512);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
			{
				Local_2321.f_5 = 2;
			}
			else
			{
				Local_2321.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_358(1000))
			{
				Local_2321.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0xD7992BEF7A9D109E("SP_SPR", 3);
			unk_0x0D3BE1DE0262A012("Shared", false);
			while (!unk_0x27117E2CDD4D67C3("Shared"))
			{
				wait(0);
			}
			unk_0xAE317D00A5A55DF6("HUD_AWARDS", false, -1);
			Local_2321.f_5 = 3;
			break;
		
		case 3:
			if (unk_0x67C1D9E5B91B2E37(3))
			{
				Local_2321.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2321.f_5 = 5;
			func_11(&(Local_2321.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_2321.f_2), 0,5f))
			{
				Local_2321.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				Local_2321.f_5 = 9;
			}
			else
			{
				Local_2321.f_5 = 7;
				func_11(&(Local_2321.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_2321.f_2), 0,5f))
			{
				Local_2321.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_581(5000))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				Local_2321.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_2321.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_588(var uParam0, int iParam1)
{
	Local_51 = 0;
	Local_51.f_1 = 0;
	Local_51.f_2 = 2;
	Local_51.f_3 = { vLocal_2307 };
	Local_51.f_6 = 154,8464f;
	Local_51.f_7 = 4;
	Local_51.f_8 = -1736970383;
	Local_51.f_9 = -2122757008;
	StringCopy(&(Local_51.f_24[0]), "AIRPORT", 32);
	Local_51.f_12[0] = 165f;
	StringCopy(&(Local_51.f_24[1]), "BRIDGEBINGE", 32);
	Local_51.f_12[1] = 80f;
	StringCopy(&(Local_51.f_24[2]), "VINEWOOD", 32);
	Local_51.f_12[2] = 165f;
	StringCopy(&(Local_51.f_24[3]), "BRIDGEWORK", 32);
	Local_51.f_12[3] = 165f;
	StringCopy(&(Local_51.f_24[4]), "ALTITUDE", 32);
	Local_51.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_593(&Local_2412);
			break;
		
		case 1:
			func_592(&Local_2412);
			break;
		
		case 2:
			func_591(&Local_2412);
			break;
		
		case 3:
			func_590(&Local_2412);
			break;
		
		case 4:
			func_589(&Local_2412);
			break;
	}
}

void func_589(var uParam0)
{
}

void func_590(var uParam0)
{
}

void func_591(var uParam0)
{
}

void func_592(var uParam0)
{
}

void func_593(var uParam0)
{
}

void func_594(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_30926, iParam0);
	StringCopy(&(Global_30927[iParam0]), unk_0xBB0808A181D4745C(), 24);
	Global_30982[iParam0] = iParam1;
}

void func_595()
{
	Global_22211.f_5 = 1;
}

void func_596(int iParam0)
{
	func_311();
	Global_76877 = iParam0;
	Global_76876 = 0;
	Global_76879 = 3;
}

void func_597(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_31015, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_31015, iParam0);
	}
}

void func_598()
{
}

void func_599()
{
	unk_0x3FC8DBCC154CA56B();
	func_364();
	func_430();
	func_577();
	func_597(23, 0);
	func_579(0);
	unk_0x34D79252800B23FF(5);
	unk_0x066C43E677C08D5C();
	func_311();
	func_238(0);
	func_256(0);
	unk_0x96D521DDDB9AD218();
	unk_0x38DC636F3D2D2FA8("MGSP_START");
	unk_0x38DC636F3D2D2FA8("MGSP_FAIL");
	unk_0x38DC636F3D2D2FA8("MGTR_COMPLETE");
	unk_0xC92DB9682A650680("MGSP_END");
	unk_0x8C26F31DFF77D124();
	func_607(2, 0);
	func_607(1, 0);
	func_607(3, 0);
	func_607(4, 0);
	func_607(5, 0);
	func_607(6, 0);
	func_607(7, 0);
	unk_0x85A7389D2B63E61A(unk_0xD803B885F5E47A62(), 1, 0);
	unk_0xCE7D0828D683D536();
	func_605(&(Local_51.f_118));
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
	unk_0x11CCD0ACA866C6C5(3, true);
	unk_0xF5A41F3D3B38EFE3("PilotSchool");
	func_603(&Local_2412, 1);
	unk_0xDB8844D4B7C60440(103, "SPRTaxi");
	unk_0xDB8844D4B7C60440(104, "SPRTaxi");
	unk_0xA37A90C62806D848(1);
	unk_0x790015DC92C918E2();
	func_602();
	unk_0x8BCB70EB440DED83(true);
	unk_0xBFE31971E49FA500(true);
	func_253();
	unk_0xF3039DE1FDB4F6FD(true);
	func_600();
	unk_0x10FAF14A60A0DBE1();
}

void func_600()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0] && !Global_95677[iVar0].f_1)
		{
			if (Global_95677[iVar0].f_3 == 0)
			{
				if ((Global_95677[iVar0].f_5 != 88 && Global_95677[iVar0].f_5 != 89) && Global_95677[iVar0].f_5 != 92)
				{
					func_601(Global_95677[iVar0].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_601(int iParam0, bool bParam1)
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

void func_602()
{
	Global_22211.f_5 = 0;
}

void func_603(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_565(uParam0);
	}
	else
	{
		func_604(uParam0);
	}
	func_137(0);
	func_27(&(uParam0->f_17));
	unk_0xA37A90C62806D848(1);
	unk_0x790015DC92C918E2();
	if (iLocal_2405)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2405 = 0;
	}
}

void func_604(var uParam0)
{
}

void func_605(var uParam0)
{
	func_606(*uParam0);
}

void func_606(var uParam0)
{
	unk_0xE17FDF9E3068281B(&uParam0);
}

void func_607(int iParam0, bool bParam1)
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

