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
	vLocal_311 = { -2145,486f, 3018,294f, 31,81f };
	vLocal_314 = { 1744,308f, 3270,673f, 40,2076f };
	fLocal_323 = 330,4836f;
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_277();
		func_275();
	}
	unk_0x8225571BCEE038F8("EXTRASUNNY", 30f);
	func_273();
	if (!func_272())
	{
		iLocal_28 = 0;
	}
	else
	{
		iLocal_28 = 1;
	}
	while (true)
	{
		wait(0);
		unk_0x1A6DFFFEEC27BF4F("M_ThePortOfLSHeistPrep2B", 0);
		func_271();
		func_265();
		func_264();
		func_263();
		func_261();
		switch (iLocal_28)
		{
			case 0:
				func_260();
				break;
			
			case 1:
				func_255();
				break;
			
			case 2:
				func_237();
				break;
			
			case 3:
				func_229();
				break;
			
			case 4:
				func_127();
				break;
			
			case 5:
				func_29();
				break;
			
			case 6:
				func_4();
				break;
		}
		if (iLocal_28 != 6)
		{
			if (iLocal_197 == 1)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if ((iLocal_28 == 2 || iLocal_28 == 3) || iLocal_28 == 4)
	{
		if (iLocal_200 == 1)
		{
			func_3(1);
			return;
		}
	}
	if (iLocal_28 == 2)
	{
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (func_2(iLocal_48, unk_0x16F2683693E537C9(), 1) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (func_2(iLocal_48, unk_0x16F2683693E537C9(), 1) > 100f)
				{
					func_3(2);
					return;
				}
				else if ((unk_0x7B5606C651AB51B5(iLocal_48, 3, 30000) || unk_0x7B5606C651AB51B5(iLocal_48, 1, 40000)) || unk_0x7B5606C651AB51B5(iLocal_48, 0, 7000))
				{
					func_3(3);
					return;
				}
			}
		}
	}
}

float func_2(int iParam0, int iParam1, bool bParam2)
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

void func_3(int iParam0)
{
	iLocal_29 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_175 = 0;
	}
}

void func_4()
{
	switch (iLocal_175)
	{
		case 0:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(1);
			switch (iLocal_29)
			{
				case 0:
					break;
				
				case 1:
					sLocal_324 = "DP_FAIL1";
					break;
				
				case 2:
					sLocal_324 = "DP_FAIL2";
					break;
				
				case 3:
					sLocal_324 = "DP_FAIL3";
					break;
			}
			if (iLocal_29 == 0)
			{
				func_13(0);
			}
			else
			{
				func_11(sLocal_324);
			}
			iLocal_175 = 1;
			break;
		
		case 1:
			if (func_10())
			{
				if (func_9())
				{
				}
				else
				{
					func_7(-1139,164f, 2662,465f, 16,9873f, 74,9925f);
					func_5(-1147,504f, 2663,104f, 17,0938f, 40,2433f);
				}
				func_275();
			}
			break;
	}
}

void func_5(vector3 vParam0, float fParam3)
{
	func_6(&(Global_105187.f_2890), vParam0, fParam3);
}

void func_6(var uParam0, vector3 vParam1, var uParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam4;
}

void func_7(vector3 vParam0, float fParam3)
{
	if (func_8(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_8(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_9()
{
	if (Global_98744 == 7)
	{
		return 1;
	}
	return 0;
}

int func_10()
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

void func_11(char* sParam0)
{
	func_12(sParam0);
	func_13(0);
}

void func_12(char* sParam0)
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

void func_13(int iParam0)
{
	if (Global_111638.f_9080 || func_28(0))
	{
		iVar0 = func_27();
		if (!func_14(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_14(int iParam0)
{
	func_19();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_18(iVar1, 1);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	func_15(&(Global_111638.f_2358.f_539), iVar1);
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

void func_15(var uParam0, int iParam1)
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
			if (!func_17(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_16(&(uParam0->f_2296[iVar0]));
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

void func_16(var uParam0)
{
	*uParam0 = -15;
}

int func_17(int iParam0, var uParam1, float fParam2)
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
			return func_17(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_17(8, uParam1, fParam2);
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

void func_18(int iParam0, bool bParam1)
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

void func_19()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_20())
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
			switch (func_20())
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

int func_20()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_21()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_25(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_24(unk_0x16F2683693E537C9());
			if (func_23(iVar0) && (!func_22(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_23(Global_111638.f_2358.f_539.f_4321))
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

bool func_22(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1798[iParam0];
}

int func_27()
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

bool func_28(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_29()
{
	func_119();
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			unk_0x1E9649458B15960F(iLocal_48, false);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
		}
		if (unk_0x757EF87A33649210())
		{
			unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
				{
					unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), iLocal_48, 0);
				}
			}
		}
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 1))
				{
					unk_0x152BCACCF710B36E(iLocal_48, 0, 0);
					unk_0x152BCACCF710B36E(iLocal_48, 1, 0);
					unk_0x71EDC33E5A423750(iLocal_48, 2);
					unk_0x05EC10F460C3A4AF(iLocal_48, 0);
					unk_0x1E9649458B15960F(iLocal_48, true);
					func_30();
				}
			}
		}
	}
}

void func_30()
{
	func_32(0, 0);
	func_31(1, 1);
	func_275();
}

void func_31(int iParam0, int iParam1)
{
	Global_76890 = iParam1;
	if (Global_61506)
	{
		return;
	}
	if (Global_61533)
	{
		Global_61533 = 0;
		return;
	}
	if (unk_0x8A22C4C08282BF26(-131607125) > 0)
	{
		if (Global_61506)
		{
		}
		Global_61532 = iParam0;
		Global_61506 = 1;
		Global_61517 = 1;
	}
}

void func_32(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_28(0) && Global_76868.f_1 == 1) && func_33(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_28(0))
	{
		iVar0 = func_27();
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

int func_33(int iParam0)
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

void func_34()
{
	func_117();
	func_116();
	func_37();
	if (!func_36() || func_28(0))
	{
		func_35();
	}
	unk_0x2FB9A57162E54BAB(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (unk_0xC844350D5D58C99A(iLocal_55))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_55, 0))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_55, -1);
				}
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1565,084f, 2780,813f, 16,4022f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 53,6086f);
			}
			break;
		
		case 3:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (func_20() == 2)
			{
				if (unk_0xC844350D5D58C99A(iLocal_48))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_48, -1);
						}
						unk_0x1E9649458B15960F(iLocal_48, false);
					}
				}
			}
			break;
		
		case 4:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (func_20() == 2)
			{
				if (unk_0xC844350D5D58C99A(iLocal_48))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_48, -1);
						}
					}
				}
			}
			break;
		
		case 5:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (func_20() == 2)
			{
				if (unk_0xC844350D5D58C99A(iLocal_48))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_48, -1);
						}
					}
				}
			}
			break;
	}
}

bool func_36()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_37()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x536F1BE96C726C4B(-1588,1f, 2794,9f, 17,2f, 20f, 1, 0, 0, false);
			func_109(-1720,5f, 2568,4f, 67,1f, -1523,2f, 3002f, -70f, 100f, -1155,06f, 2665,979f, 17,0939f, 219,2079f, 1, 0, 1, 0, 0);
			unk_0x75CFD6AD66ADFDD1(-1588,1f, 2794,9f, 17,2f, 20f, 6);
			unk_0x523BCC9DC80CD82F(-50547061);
			unk_0x523BCC9DC80CD82F(1702441027);
			unk_0x523BCC9DC80CD82F(-163714847);
			unk_0x523BCC9DC80CD82F(788747387);
			while (((!unk_0xB87F6CF6E5628C67(-50547061) || !unk_0xB87F6CF6E5628C67(1702441027)) || !unk_0xB87F6CF6E5628C67(-163714847)) || !unk_0xB87F6CF6E5628C67(788747387))
			{
				wait(0);
			}
			if (func_272())
			{
				if (func_108())
				{
					if (!unk_0xAFB8495D36825275(func_107()) && !unk_0xC41A9202669A24C4(func_107()))
					{
						func_105();
						while (!func_104())
						{
							wait(0);
						}
					}
				}
			}
			iLocal_201 = 0;
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				iLocal_275[iLocal_176] = 0;
				iLocal_176++;
			}
			if (!unk_0xC844350D5D58C99A(iLocal_48))
			{
				unk_0x536F1BE96C726C4B(vLocal_311, 10f, 1, 0, 0, false);
				iLocal_48 = unk_0x122AAB0B1D6F55AD(-50547061, vLocal_311, fLocal_323, 1, 1, 0);
				unk_0x1FC8B874F2C46E6E(iLocal_48, 0);
				unk_0x1E9649458B15960F(iLocal_48, true);
				unk_0xE8832A9E16A57A1F(iLocal_48, 1, 1);
				unk_0x71199B01895C6202(-50547061);
				unk_0xAB8E2DDC7AF955E0(-50547061, true);
				unk_0xD5A0214B20BCBAD8(iLocal_48, 1);
				unk_0xB422445CBCD0AEFB(iLocal_48, 0);
				func_103(iLocal_48, 0);
			}
			func_100();
			if (!unk_0xC844350D5D58C99A(iLocal_49[0]))
			{
				if (unk_0xB87F6CF6E5628C67(788747387))
				{
					unk_0x536F1BE96C726C4B(-1866,446f, 3071,395f, 31,8104f, 10f, 1, 0, 0, false);
					iLocal_49[0] = unk_0x122AAB0B1D6F55AD(788747387, -1866,446f, 3071,395f, 31,8104f, 150,2863f, 1, 1, 0);
					unk_0xE8832A9E16A57A1F(iLocal_49[0], 1, 1);
					unk_0x1FC8B874F2C46E6E(iLocal_49[0], 1);
					unk_0xB9FD7450C0DAB575(iLocal_49[0], 1084227584);
					unk_0x2E1E5367A885F9B7(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x71199B01895C6202(788747387);
					unk_0x05EC10F460C3A4AF(iLocal_49[0], 0);
				}
			}
			if (func_272())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_55))
				{
					if (func_108())
					{
						if (!unk_0xAFB8495D36825275(func_107()) && !unk_0xC41A9202669A24C4(func_107()))
						{
							iLocal_55 = func_38(-1535,209f, 2744,551f, 16,6437f, 47,9754f);
							unk_0x71199B01895C6202(func_107());
							unk_0x44A200C9B6E1CEA6(iLocal_55, true);
							unk_0xD5A0214B20BCBAD8(iLocal_55, 1);
						}
					}
				}
			}
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			unk_0x81AF65E52132C1B4(1);
			break;
		
		case 3:
			unk_0x93776B156FD8804A("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			wait(1500);
			unk_0x523BCC9DC80CD82F(-50547061);
			unk_0x523BCC9DC80CD82F(788747387);
			unk_0x523BCC9DC80CD82F(1702441027);
			unk_0x523BCC9DC80CD82F(-163714847);
			while (((!unk_0xB87F6CF6E5628C67(-50547061) || !unk_0xB87F6CF6E5628C67(788747387)) || !unk_0xB87F6CF6E5628C67(1702441027)) || !unk_0xB87F6CF6E5628C67(-163714847))
			{
				wait(0);
			}
			iLocal_201 = 0;
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				iLocal_275[iLocal_176] = 0;
				iLocal_176++;
			}
			if (!unk_0xC844350D5D58C99A(iLocal_48))
			{
				unk_0x536F1BE96C726C4B(vLocal_311, 10f, 1, 0, 0, false);
				iLocal_48 = unk_0x122AAB0B1D6F55AD(-50547061, vLocal_311, fLocal_323, 1, 1, 0);
				unk_0x1E9649458B15960F(iLocal_48, true);
				unk_0xE8832A9E16A57A1F(iLocal_48, 1, 1);
				unk_0x873BCADC75FF6D20(iLocal_48);
				unk_0x71199B01895C6202(-50547061);
				unk_0xAB8E2DDC7AF955E0(-50547061, true);
				unk_0xD5A0214B20BCBAD8(iLocal_48, 1);
				unk_0xB422445CBCD0AEFB(iLocal_48, 0);
				func_103(iLocal_48, 0);
			}
			func_100();
			if (!unk_0xC844350D5D58C99A(iLocal_49[0]))
			{
				if (unk_0xB87F6CF6E5628C67(788747387))
				{
					unk_0x536F1BE96C726C4B(-1866,446f, 3071,395f, 31,8104f, 10f, 1, 0, 0, false);
					iLocal_49[0] = unk_0x122AAB0B1D6F55AD(788747387, -1866,446f, 3071,395f, 31,8104f, 150,2863f, 1, 1, 0);
					unk_0xE8832A9E16A57A1F(iLocal_49[0], 1, 1);
					unk_0x1FC8B874F2C46E6E(iLocal_49[0], 1);
					unk_0xB9FD7450C0DAB575(iLocal_49[0], 1084227584);
					unk_0x2E1E5367A885F9B7(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x71199B01895C6202(788747387);
					unk_0x05EC10F460C3A4AF(iLocal_49[0], 0);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_31[0]))
			{
				iLocal_31[0] = unk_0x852A19533F896693(iLocal_49[0], 26, -163714847, -1, 1, true);
				unk_0x71199B01895C6202(-163714847);
			}
			else if (!unk_0xC42A92762C58E1B9(iLocal_31[0], iLocal_49[0], 0))
			{
				unk_0xF821F915BC24D246(iLocal_31[0], iLocal_49[0], -1);
			}
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -72657034, -1, false, true);
			unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
			unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 1, 1);
			break;
		
		case 4:
			unk_0x523BCC9DC80CD82F(-50547061);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			while (!unk_0xB87F6CF6E5628C67(-50547061))
			{
				wait(0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_48))
			{
				unk_0x536F1BE96C726C4B(vLocal_311, 10f, 1, 0, 0, false);
				iLocal_48 = unk_0x122AAB0B1D6F55AD(-50547061, -629,1677f, 2871,31f, 385,0313f, 283,1214f, 1, 1, 0);
				unk_0xE8832A9E16A57A1F(iLocal_48, 1, 1);
				unk_0x71199B01895C6202(-50547061);
				unk_0xAB8E2DDC7AF955E0(-50547061, true);
				unk_0xB422445CBCD0AEFB(iLocal_48, 0);
				unk_0xD5A0214B20BCBAD8(iLocal_48, 1);
				unk_0x56FDC9ADE35F7DB0(iLocal_48, true, 1, 0);
				unk_0x873BCADC75FF6D20(iLocal_48);
				unk_0x1AEF7184B203A58D(iLocal_48, 30f);
				func_103(iLocal_48, 0);
			}
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -72657034, -1, false, true);
			break;
		
		case 5:
			unk_0x523BCC9DC80CD82F(-50547061);
			unk_0x523BCC9DC80CD82F(-1189015600);
			while (!unk_0xB87F6CF6E5628C67(-50547061) || !unk_0xB87F6CF6E5628C67(-1189015600))
			{
				wait(0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_48))
			{
				unk_0x536F1BE96C726C4B(1749,61f, 3272,95f, 40,1533f, 5f, 1, 0, 0, false);
				iLocal_48 = unk_0x122AAB0B1D6F55AD(-50547061, 1749,61f, 3272,95f, 40,1533f, 51,128f, 1, 1, 0);
				unk_0xE8832A9E16A57A1F(iLocal_48, 1, 1);
				unk_0x71199B01895C6202(-50547061);
				unk_0xD5A0214B20BCBAD8(iLocal_48, 1);
				unk_0xB422445CBCD0AEFB(iLocal_48, 0);
				func_103(iLocal_48, 0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_51[0]))
			{
				iLocal_51[0] = unk_0x122AAB0B1D6F55AD(-1189015600, 1754,951f, 3290,994f, 40,1176f, 182,397f, 1, 1, 0);
				unk_0x1E9649458B15960F(iLocal_51[0], true);
				unk_0x71199B01895C6202(-1189015600);
			}
			if (unk_0xC844350D5D58C99A(iLocal_51[0]))
			{
				iLocal_214 = 1;
			}
			break;
	}
}

int func_38(vector3 vParam0, float fParam3)
{
	return func_39(&(Global_105187.f_2890), vParam0, fParam3, 0);
}

int func_39(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (func_99(uParam0))
	{
		if (func_8(vParam1, 0f, 0f, 0f, 0))
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
		if (func_98(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_97(vParam1, 5f, 0);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_12.f_66, vParam1, fParam4, 1, 1, 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if (vdist2(vVar1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0, 0, 1);
				}
				func_80(iVar0, &(uParam0->f_12), 0, 1);
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
							func_79(uParam0->f_11, 1);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_79(uParam0->f_11, 2);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0);
					unk_0x626D5ADA3EFAE431(iVar0, 0);
					unk_0x44A200C9B6E1CEA6(iVar0, true);
					func_78(iVar0, uParam0->f_11);
				}
				else if ((!func_75(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar8 = func_74(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_67(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (unk_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21].f_66)
						{
							func_64(24, 0);
							func_67(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				unk_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
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
	func_41(iParam0, &(Global_111638.f_32744.f_5510));
}

void func_41(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_45(uParam1);
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
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
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
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_42(iVar0 + 1));
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

int func_42(int iParam0)
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

int func_43(int iParam0, var uParam1, var uParam2)
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

int func_44(int iParam0)
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

void func_45(var uParam0)
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

int func_46(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || func_62(iParam0, 0, 0)) || func_62(iParam0, 1, 0)) || func_62(iParam0, 2, 0)) || func_61(iParam0) != 145) || func_60(iParam0)) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || !func_47(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_59(iParam0))
		{
		}
		if (func_59(iParam0))
		{
		}
		if (func_62(iParam0, 0, 0))
		{
		}
		if (func_62(iParam0, 1, 0))
		{
		}
		if (func_62(iParam0, 2, 0))
		{
		}
		if (func_61(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_48(iParam0, 0))
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

int func_48(int iParam0, bool bParam1)
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
		if (!func_56())
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
		if ((((!func_55() && !func_54()) && !func_53()) && !func_52()) && !func_56())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_53())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0))
		{
			return 0;
		}
	}
	if (!func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	if (!func_50())
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

int func_50()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_51(int iParam0)
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

int func_52()
{
	return 0;
}

int func_53()
{
	return 1;
}

int func_54()
{
	return 1;
}

int func_55()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_56()
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

int func_57(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == -810318068 && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_48(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
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

int func_59(int iParam0)
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

int func_60(int iParam0)
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

int func_61(int iParam0)
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

int func_62(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_63(iParam1, iVar0, &sVar1, &iVar9))
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

int func_63(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_64(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_66(iParam0, 0))
		{
			func_65(iParam0, 1, 0);
			func_65(iParam0, 2, 0);
			func_65(iParam0, 3, 0);
			func_65(iParam0, 4, 0);
			func_65(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_65(iParam0, 0, 0);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)
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

bool func_66(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

void func_67(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_71(&(Global_75441.f_555[0]), iParam0))
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
			if (((((iParam0 == 24 && func_66(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] > 3) && (!func_69(0, Global_75441.f_555[0].f_12) || !func_69(1, Global_75441.f_555[0].f_12)))
			{
				func_68(&(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_64(iParam0, 0);
		}
	}
}

void func_68(var uParam0, var uParam1)
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

int func_69(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_70(&(Global_111638.f_32744.f_5038[iVar0])))
	{
		return 0;
	}
	return func_48(Global_111638.f_32744.f_5038[iVar0][iParam0].f_66, 0);
}

int func_70(var uParam0)
{
	return *uParam0;
}

int func_71(var uParam0, int iParam1)
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
			uParam0->f_4 = func_72(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_72(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_72(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_72(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_72(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_72(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_72(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_72(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_72(2, 1);
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
			if (func_56())
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
			if (func_56())
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
		if (!func_8(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
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
		if (!func_8(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_8(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1)
{
	if (func_23(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_73(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_73(int iParam0, var uParam1, int iParam2)
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

int func_74(int iParam0)
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

int func_75(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case -50547061:
			if (func_77(iParam0, Global_75441.f_139[38], 0))
			{
				func_67(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_77(iParam0, Global_75441.f_139[43], 1))
			{
				func_67(43);
				return 1;
			}
			break;
		
		case -644710429:
			iVar5 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_77(iParam0, uVar1[iVar6], 1) && func_76(unk_0x68F4C0EC296D3901(uVar1[iVar6], true), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam4 || func_8(vParam1, 0f, 0f, 0f, 0)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(uVar1[iVar6], true), true) < 10f)
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
					func_67(14);
					return 1;
				}
			}
			break;
		
		case 1075432268:
			if ((unk_0xC844350D5D58C99A(Global_75441.f_484[20]) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (unk_0x134B62B726CEC8E6(Global_75441.f_484[20]) == 1075432268 && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_67(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_76(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_77(int iParam0, int iParam1, bool bParam2)
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

void func_78(int iParam0, int iParam1)
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

void func_79(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_72(iParam0, iParam1))
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

void func_80(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (!func_89(iParam0))
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
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_42(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			iVar1 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_42(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_42(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_42(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_42(iVar3));
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
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_42(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_42(iVar4));
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
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_88(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_87())
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
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
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
						func_86(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_86(iParam0, uParam1->f_69);
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
			func_81(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_66) && !unk_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_42(iVar5 + 1)))
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

int func_81(int iParam0, var uParam1, var uParam2)
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
	if (func_85(unk_0x134B62B726CEC8E6(*iParam0), 1) && unk_0x0ECB5CA5140957AD(*iParam0, 24) != func_84(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 24, func_84(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_83(iParam0);
	if (func_82(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 1);
		unk_0x44A200C9B6E1CEA6(*iParam0, true);
	}
	return 1;
}

int func_82(int iParam0)
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

void func_83(var uParam0)
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

int func_84(int iParam0, int iParam1)
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

int func_85(int iParam0, int iParam1)
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

void func_86(int iParam0, int iParam1)
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

bool func_87()
{
	return unk_0xC146D5FBD23C6954(-1691188696);
}

int func_88(int iParam0)
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

int func_89(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!func_95(unk_0xD803B885F5E47A62(), -1))
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
	if (func_91(unk_0xD803B885F5E47A62()) == 3)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (func_90(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_90(int iParam0)
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

int func_91(int iParam0)
{
	if (func_94(iParam0) == 233)
	{
		return func_92(iParam0);
	}
	return -1;
}

int func_92(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_93(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_95(int iParam0, int iParam1)
{
	if (func_96(iParam0, 1, 1))
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

int func_96(int iParam0, bool bParam1, bool bParam2)
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

void func_97(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_71(&(Global_75441.f_555[0]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0], bParam4) <= fParam3)
			{
				func_67(iVar0);
			}
		}
		iVar0++;
	}
}

int func_98(var uParam0)
{
	if (func_99(uParam0))
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

int func_99(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == -2122757008 && func_76(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

void func_100()
{
	if (iLocal_201 == 0)
	{
		if (unk_0xB87F6CF6E5628C67(1702441027) && unk_0xB87F6CF6E5628C67(-163714847))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_33[0]))
			{
				iLocal_33[0] = unk_0x36F2404464202779(26, 1702441027, -1590,523f, 2796,302f, 15,9184f, 247,0896f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[1]))
			{
				iLocal_33[1] = unk_0x36F2404464202779(26, 1702441027, -2303,8f, 3387,99f, 30,034f, 58,5763f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[2]))
			{
				iLocal_33[2] = unk_0x36F2404464202779(26, 1702441027, -1697,329f, 2909,941f, 31,9506f, 245,656f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[3]))
			{
				iLocal_33[3] = unk_0x36F2404464202779(26, 1702441027, -1696,369f, 2905,772f, 31,9454f, 6,3714f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[4]))
			{
				iLocal_33[4] = unk_0x36F2404464202779(26, 1702441027, -1843,707f, 2821,611f, 31,8528f, 271,6265f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[5]))
			{
				iLocal_33[5] = unk_0x36F2404464202779(26, 1702441027, -2006,877f, 2955,101f, 31,8103f, 332,0101f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[6]))
			{
				iLocal_33[6] = unk_0x36F2404464202779(26, 1702441027, -2010,022f, 2956,805f, 31,8103f, 288,1283f, 1, true);
			}
			if (iLocal_28 != 3)
			{
				if (!unk_0xC844350D5D58C99A(iLocal_33[7]))
				{
					iLocal_33[7] = unk_0x36F2404464202779(26, 1702441027, -2140,213f, 3034,609f, 31,81f, 302,4493f, 1, true);
				}
				if (!unk_0xC844350D5D58C99A(iLocal_33[8]))
				{
					iLocal_33[8] = unk_0x36F2404464202779(26, 1702441027, -2136,053f, 3031,494f, 31,81f, 38,6856f, 1, true);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[9]))
			{
				iLocal_33[9] = unk_0x36F2404464202779(26, 1702441027, -2035,429f, 3058,876f, 31,8103f, 169,8222f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[10]))
			{
				iLocal_33[10] = unk_0x36F2404464202779(26, 1702441027, -2146,467f, 3160,749f, 31,8106f, 356,4766f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[11]))
			{
				iLocal_33[11] = unk_0x36F2404464202779(26, 1702441027, -2280,087f, 3172,423f, 31,8103f, 353,663f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_33[12]))
			{
				iLocal_33[12] = unk_0x36F2404464202779(26, 1702441027, -2277,376f, 3177,8f, 31,8103f, 175,0685f, 1, true);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_31[0]))
			{
				iLocal_31[0] = unk_0x36F2404464202779(26, -163714847, -1859,831f, 3071,758f, 31,8104f, 139,3607f, 1, true);
				unk_0x9A28E8CB86CD4694(iLocal_31[0], 0, 2, 0, false);
				unk_0x64F9F278AB9DCA2C(iLocal_31[0], 8, 0, 0, 0);
				unk_0xE8832A9E16A57A1F(iLocal_31[0], 1, 1);
				unk_0x262EF6C6306BEA6C(iLocal_31[0], -1074790547, 2000, true, true);
				unk_0x6DF7BF67E86AAE86(iLocal_31[0], iLocal_60);
				unk_0x298903DD96203C2C(iLocal_31[0], 0);
				unk_0x11AD11297DC58CC7(iLocal_31[0], true);
				func_102(iLocal_31[0], 595);
				func_101(iLocal_31[0], 0);
			}
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				if (iLocal_275[iLocal_176] == 0)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_176]))
					{
						unk_0xE8832A9E16A57A1F(iLocal_33[iLocal_176], 1, 1);
						unk_0x262EF6C6306BEA6C(iLocal_33[iLocal_176], -1074790547, 2000, true, true);
						unk_0x6DF7BF67E86AAE86(iLocal_33[iLocal_176], iLocal_60);
						unk_0x298903DD96203C2C(iLocal_33[iLocal_176], 10);
						func_102(iLocal_33[iLocal_176], 595);
						func_101(iLocal_33[iLocal_176], 0);
						unk_0x11AD11297DC58CC7(iLocal_33[iLocal_176], true);
						iLocal_275[iLocal_176] = 1;
					}
				}
				iLocal_176++;
			}
			unk_0x71199B01895C6202(1702441027);
			unk_0x71199B01895C6202(-163714847);
			iLocal_201 = 1;
		}
	}
}

void func_101(int iParam0, bool bParam1)
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

void func_102(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_73760[iVar0] == 0)
		{
			Global_73760[iVar0] = uParam0;
			Global_73760[iVar0].f_1 = iParam1;
			if (iVar0 == Global_73793)
			{
				Global_73793++;
			}
			return;
		}
		iVar0++;
	}
}

void func_103(int iParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = iParam0;
}

bool func_104()
{
	return func_98(&(Global_105187.f_2890));
}

void func_105()
{
	func_106(&(Global_105187.f_2890));
}

void func_106(var uParam0)
{
	if (func_99(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

var func_107()
{
	return Global_105187.f_2890.f_12.f_66;
}

bool func_108()
{
	return func_99(&(Global_105187.f_2890));
}

void func_109(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_110(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_110(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0xAF6690C489CC6203(iVar0))
		{
			unk_0x73270B3C9CC833FD(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (bParam18)
			{
				func_115(iVar0);
			}
			if (unk_0x3D1053F9EB43B7AD(iVar0, vParam0, vParam3, fParam6, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar10 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_112(iVar0, vParam0, vParam3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, -956048545))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar0, -1, 0) != 0)
					{
						if (unk_0x0EB28750412C3A5A(vParam0 + vParam3 / Vector(2f, 2f, 2f), unk_0x68F4C0EC296D3901(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_62(iVar0, func_20(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_111(vParam11))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0))
					{
						iVar13 = unk_0x134B62B726CEC8E6(iVar0);
						unk_0x064C1B2FD84B6ED5(iVar0, &vVar4, &vVar7);
						if (unk_0xAFB8495D36825275(iVar13))
						{
							vParam11.x = (vParam11.x + 3f);
							vParam11.y = (vParam11.y + 3f);
						}
						if (((iVar13 == -1403128555 || iVar13 == 117401876) || iVar13 == -1237253773) || iVar13 == -845961253)
						{
							vParam11 = { vParam11 * Vector(1,1f, 1,1f, 1,1f) };
						}
						else if (iVar13 == 1663218586 || iVar13 == -498054846)
						{
							vParam11 = { vParam11 * Vector(1,2f, 1,2f, 1,2f) };
						}
						if ((vVar7.x - vVar4.x) > vParam11.x)
						{
							bVar2 = false;
						}
						else if ((vVar7.y - vVar4.y) > vParam11.y)
						{
							bVar2 = false;
						}
						else if ((vVar7.z - vVar4.z) > vParam11.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x28F5E4DA506AC0CA(vParam7, 5f, 0, 0, 0, 0, false, 0);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam10);
						unk_0xA47B46945FF6DE74(iVar0, vParam7, 1, false, 0, 1);
						unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x56FDC9ADE35F7DB0(iVar0, false, 1, 0);
							unk_0x05CA0E7946B27A19(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(iVar0) || !unk_0x9C77D2D0559097F0(iVar0, 1))
						{
							unk_0x73270B3C9CC833FD(iVar0, true, 1);
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, true), 1, false, 0, 1);
						}
						unk_0xA954465BA6FDEFE2(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x10F452EDECF82313(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x046C362CF15F1935(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				unk_0x73270B3C9CC833FD(iVar0, true, 0);
			}
			iVar14 = unk_0xA30B8362589C124A(iVar0, -1, 0);
			if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
			{
				unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
			}
			iVar15 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xA30B8362589C124A(iVar0, 0, 0);
				if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
				{
					unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xA30B8362589C124A(iVar0, 1, 0);
				if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
				{
					unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
				}
				iVar14 = unk_0xA30B8362589C124A(iVar0, 2, 0);
				if (unk_0xC844350D5D58C99A(iVar14) && !unk_0xEB6A8945D1AC98A1(iVar14))
				{
					unk_0xA47B46945FF6DE74(iVar14, unk_0x68F4C0EC296D3901(iVar14, true), 1, false, 0, 1);
				}
			}
			unk_0xA954465BA6FDEFE2(&iVar0);
		}
	}
}

int func_111(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = { func_114(vParam1 - vParam4) };
		vVar3 = { vVar0 };
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = { vParam1 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar9 = { vParam1 + vVar0 * FtoV((fParam7 / 2f)) };
		vVar12 = { vParam4 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar15 = { vParam4 + vVar0 * FtoV((fParam7 / 2f)) };
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var31, &Var34);
		vVar18[0] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var31, Var31.f_1, 0f) };
		vVar18[1] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var31, Var34.f_1, 0f) };
		vVar18[2] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var34, Var31.f_1, 0f) };
		vVar18[3] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var34, Var34.f_1, 0f) };
		if (((((((((((((((func_113(vVar18[0], vVar18[1], vVar6, vVar9) || func_113(vVar18[0], vVar18[1], vVar9, vVar15)) || func_113(vVar18[0], vVar18[1], vVar12, vVar15)) || func_113(vVar18[0], vVar18[1], vVar6, vVar12)) || func_113(vVar18[1], vVar18[3], vVar6, vVar9)) || func_113(vVar18[1], vVar18[3], vVar9, vVar15)) || func_113(vVar18[1], vVar18[3], vVar12, vVar15)) || func_113(vVar18[1], vVar18[3], vVar6, vVar12)) || func_113(vVar18[3], vVar18[2], vVar6, vVar9)) || func_113(vVar18[3], vVar18[2], vVar9, vVar15)) || func_113(vVar18[3], vVar18[2], vVar12, vVar15)) || func_113(vVar18[3], vVar18[2], vVar6, vVar12)) || func_113(vVar18[2], vVar18[0], vVar6, vVar9)) || func_113(vVar18[2], vVar18[0], vVar9, vVar15)) || func_113(vVar18[2], vVar18[0], vVar12, vVar15)) || func_113(vVar18[2], vVar18[0], vVar6, vVar12))
		{
			return 1;
		}
	}
	return 0;
}

int func_113(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_114(vector3 vParam0)
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

void func_115(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x6EE94F60DA2A2273(iParam0) <= 200f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
			if (unk_0xD96C5EC6FCB061BA(iParam0) <= 700f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 900f);
			}
			if (unk_0x7F6DC62EA9922664(iParam0) < 200)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
		}
	}
}

void func_116()
{
	if (!func_36())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1738,131f, 3283,38f, 40,1261f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 25,3545f);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_31[0]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_31[0]));
	}
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_176]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_33[iLocal_176]));
		}
		iLocal_176++;
	}
	if (func_20() == 2)
	{
		if (unk_0xC844350D5D58C99A(uLocal_325[0]))
		{
			unk_0xEBA53F35D0085654(&(uLocal_325[0]));
		}
	}
	if (func_20() == 0)
	{
		if (unk_0xC844350D5D58C99A(uLocal_325[2]))
		{
			unk_0xEBA53F35D0085654(&(uLocal_325[2]));
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_49[0]))
	{
		unk_0x06FF977AA95DCCE3(iLocal_49[0], 0);
	}
	unk_0x7B35981153AECDBE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0, 0);
	if (unk_0x562F77A7F33D2E46("DH_P_2B_ENTER_CHOPPER"))
	{
		unk_0x8910D3D58E0132B8("DH_P_2B_ENTER_CHOPPER");
	}
	if (unk_0x562F77A7F33D2E46("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		unk_0x8910D3D58E0132B8("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (unk_0xC844350D5D58C99A(iLocal_47))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_47);
	}
	if (unk_0xC844350D5D58C99A(iLocal_55))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_55);
	}
	if (unk_0xC844350D5D58C99A(iLocal_48))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_48);
	}
	if (unk_0xC844350D5D58C99A(iLocal_49[0]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_49[0]));
	}
	if (unk_0xC844350D5D58C99A(Global_95241[0]))
	{
		if (!unk_0x9C77D2D0559097F0(Global_95241[0], 1))
		{
			unk_0x73270B3C9CC833FD(Global_95241[0], true, 1);
		}
		unk_0xA954465BA6FDEFE2(&(Global_95241[0]));
	}
	if (unk_0xC844350D5D58C99A(Global_95241[1]))
	{
		if (!unk_0x9C77D2D0559097F0(Global_95241[1], 1))
		{
			unk_0x73270B3C9CC833FD(Global_95241[1], true, 1);
		}
		unk_0xA954465BA6FDEFE2(&(Global_95241[1]));
	}
	if (unk_0xC844350D5D58C99A(Global_95241[2]))
	{
		if (!unk_0x9C77D2D0559097F0(Global_95241[2], 1))
		{
			unk_0x73270B3C9CC833FD(Global_95241[2], true, 1);
		}
		unk_0xA954465BA6FDEFE2(&(Global_95241[2]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_51[0]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_51[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_58))
	{
		unk_0xF690C84DADBB3551(&iLocal_58);
	}
	if (unk_0xC844350D5D58C99A(iLocal_59))
	{
		unk_0xF690C84DADBB3551(&iLocal_59);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_56))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_56))
		{
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		}
		unk_0x9A8DDC7C522F5BF5(iLocal_56, 0);
	}
}

void func_117()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_61))
	{
		unk_0x142CC44DB769B57E(&iLocal_61);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_62))
	{
		unk_0x142CC44DB769B57E(&iLocal_62);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_65))
	{
		unk_0x142CC44DB769B57E(&iLocal_65);
	}
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		func_118(&(Local_70[iLocal_176]));
		iLocal_176++;
	}
	unk_0x053C926E5E341906();
}

void func_118(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = true;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_119()
{
	if (iLocal_28 == 5)
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_61))
		{
			unk_0x142CC44DB769B57E(&iLocal_61);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_62))
		{
			unk_0x142CC44DB769B57E(&iLocal_62);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_48))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_61))
				{
					unk_0x142CC44DB769B57E(&iLocal_61);
				}
				if (iLocal_300 == 1)
				{
					if (unk_0x1C0640BA9A7327B3() < iLocal_189 + 7500)
					{
						unk_0x790015DC92C918E2();
					}
				}
				if (iLocal_28 == 4)
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_62))
					{
						iLocal_62 = func_126(vLocal_314, 0);
					}
					if (iLocal_199 == 0)
					{
						if (!unk_0xD17F06053799A7CA())
						{
							if (!func_125() || !unk_0x04E6B3EAA8742BFA())
							{
								func_124("DP_GOD4", 7500, 1);
								iLocal_190 = unk_0x1C0640BA9A7327B3();
								iLocal_199 = 1;
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
					{
						uLocal_63[0] = func_123(iLocal_31[0], 1, 0);
					}
				}
			}
			else if (iLocal_28 != 5)
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_61))
				{
					iLocal_61 = func_120(iLocal_48, 0, 0);
				}
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_300 == 0)
					{
						unk_0x790015DC92C918E2();
						func_124("DP_GOD6", 7500, 1);
						iLocal_189 = unk_0x1C0640BA9A7327B3();
						iLocal_300 = 1;
					}
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_62))
				{
					unk_0x142CC44DB769B57E(&iLocal_62);
				}
				if (iLocal_28 == 3)
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
					{
						unk_0x142CC44DB769B57E(&(uLocal_63[0]));
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_199 == 1)
					{
						if (unk_0x1C0640BA9A7327B3() < iLocal_190 + 7500)
						{
							unk_0x790015DC92C918E2();
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_61))
			{
				unk_0x142CC44DB769B57E(&iLocal_61);
			}
			if (iLocal_197 == 1)
			{
				iLocal_200 = 1;
			}
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_61))
		{
			unk_0x142CC44DB769B57E(&iLocal_61);
		}
		if (iLocal_197 == 1)
		{
			iLocal_200 = 1;
		}
	}
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(iParam0, !bParam1, bParam2);
}

int func_121(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_122(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(iParam0, !bParam1, bParam2);
}

void func_124(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_125()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_126(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_127()
{
	if (iLocal_175 > 0)
	{
		func_119();
		func_228();
	}
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
		iLocal_304 = 0;
		iLocal_305 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		if (unk_0xE4EDC4B0E92C078B(iLocal_65))
		{
			unk_0x142CC44DB769B57E(&iLocal_65);
		}
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			unk_0x1E9649458B15960F(iLocal_48, false);
		}
		unk_0x81AF65E52132C1B4(0);
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_176]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_176]))
				{
					unk_0xFADC0A217229F6B5(iLocal_33[iLocal_176], 1);
					unk_0x6DAD7906B73F064D(&(iLocal_33[iLocal_176]));
				}
			}
			iLocal_176++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_49[0]))
		{
			unk_0x046C362CF15F1935(&(iLocal_49[0]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_31[0]))
		{
			unk_0x6DAD7906B73F064D(&(iLocal_31[0]));
		}
		if (!unk_0x562F77A7F33D2E46("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x8BC9595FD2792B5D("DH_P_2B_ENTER_CHOPPER");
		}
		if (unk_0x757EF87A33649210())
		{
			if (!func_36())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_226(iLocal_48, -1, 1);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		unk_0x8B4C4CA774181102(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (iLocal_308 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_48))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_311, true) > 800f)
						{
							func_150(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_308 = 1;
						}
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
				{
					if (unk_0xE934758D273C899A(iLocal_48))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_311, true) > 800f)
						{
							if (iLocal_304 == 0 && iLocal_199 == 1)
							{
								if (!unk_0xD17F06053799A7CA())
								{
									if (!func_125() || !unk_0x04E6B3EAA8742BFA())
									{
										func_149(&uLocal_403, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
										if (func_148(&uLocal_403, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
										{
											iLocal_304 = 1;
										}
									}
								}
							}
							if (iLocal_304 == 1 && iLocal_309 == 0)
							{
								if (func_147(72) == 0)
								{
									if (!func_125())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											func_149(&uLocal_403, 3, 0, "Wade", 0, 1);
											if (func_131(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, 0))
											{
												iLocal_309 = 1;
											}
										}
									}
								}
								else if (!func_125())
								{
									if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
									{
										func_149(&uLocal_403, 3, 0, "Wade", 0, 1);
										if (func_131(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, 0))
										{
											iLocal_309 = 1;
										}
									}
								}
							}
						}
						else if (func_130(71) == 0)
						{
							if (iLocal_305 == 0)
							{
								if (!func_125())
								{
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_129("DP_HELP4", -1);
										iLocal_305 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_314, 2f, 2f, 2f, true, true, 0))
					{
					}
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1721,001f, 3264,248f, 38,40064f, 1765,509f, 3276,518f, 46,05385f, 48,25f, 0, true, 0))
					{
						if (!unk_0xE934758D273C899A(iLocal_48) && unk_0x8B38C0DAEEDB5F9C(iLocal_48))
						{
							func_128(1, 600);
							unk_0x8B4C4CA774181102(8f, 5f, 4);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
					}
				}
			}
		}
	}
}

void func_128(bool bParam0, int iParam1)
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

void func_129(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_130(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

bool func_131(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_146(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_132(sParam3, iParam4, bParam8);
}

int func_132(char* sParam0, int iParam1, bool bParam2)
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
					func_145();
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
		if (func_144(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_143();
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
				func_142();
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
				if (func_141())
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
			if (func_140())
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
			func_139();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_138();
		func_133();
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
		func_145();
	}
	return 0;
}

void func_133()
{
	if (!func_134())
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

int func_134()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_137())
	{
		return 0;
	}
	if (func_135(unk_0xD803B885F5E47A62()))
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

bool func_135(int iParam0)
{
	return func_136(iParam0, 20);
}

bool func_136(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_137()
{
	return -1;
}

void func_138()
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

void func_139()
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

int func_140()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_141()
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

void func_142()
{
	if (func_22(14))
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
		Global_19486 = func_20();
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

void func_143()
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

bool func_144(int iParam0, int iParam1)
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

void func_145()
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

void func_146(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_147(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

bool func_148(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_146(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_132(sParam2, iParam3, 0);
}

void func_149(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_150(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_225(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_223(unk_0xBB0808A181D4745C(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1].f_1 = 0;
			iVar2 = func_221(iVar1);
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
			iVar5 = func_216(unk_0xBB0808A181D4745C(), 1);
			if (iVar5 != -1)
			{
				Global_111638.f_18569[iVar5].f_4 = 0;
				MemCopy(&uVar6, {func_215(iVar5)}, 4);
				unk_0x353729B0A07DC11A(&uVar6, 0, Global_98781, iParam0);
			}
			else
			{
				iVar10 = func_214(&(Global_98744.f_3));
				if (iVar10 > -1)
				{
					Global_111638.f_24981.f_4[iVar10] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_151(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_151(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_152(&Global_105187, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_152(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	*uParam0 = func_20();
	uParam0->f_1 = func_203();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_177(&(uParam0->f_2884), 0);
		func_176(unk_0x16F2683693E537C9());
		func_169(unk_0x16F2683693E537C9(), 0);
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
		if (iVar1 == func_168())
		{
			func_161(unk_0x16F2683693E537C9(), &(uParam0->f_616[iVar1]), 1, -1);
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
		func_154(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_153(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_153(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_154(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam2 == 0)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_24(iParam2);
	}
	if (func_160(iParam2, &iVar0, iParam3, iParam5))
	{
		func_155(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, 1044954915) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
			{
				func_155(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_155(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0))
	{
		func_157(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_156(iParam2))
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

int func_156(int iParam0)
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

void func_157(var uParam0, int iParam1, int iParam2)
{
	func_41(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_159(iParam1, 145, 0);
	uParam0->f_11 = func_61(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_158(iParam1);
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

int func_158(int iParam0)
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

int func_159(int iParam0, int iParam1, int iParam2)
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
					if (iParam2 == 0 || unk_0x134B62B726CEC8E6(iParam0) == func_72(iParam1, iParam2))
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

int func_160(int iParam0, var uParam1, int iParam2, int iParam3)
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
						if (func_62(*uParam1, func_20(), 1))
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

void func_161(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_24(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_167(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_166(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_23(iVar0))
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
			if (func_165(161, iParam3))
			{
				uParam1->f_59 = func_162(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_162(752, iParam3, 0);
			}
			uParam1->f_60 = func_162(753, iParam3, 0);
			uParam1->f_61 = func_162(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_165(161, iParam3))
			{
				uParam1->f_59 = func_162(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_162(752, iParam3, 0);
			}
		}
	}
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_163(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_163(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_164();
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

var func_164()
{
	return Global_1312745;
}

int func_165(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_163(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_24(iParam0);
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

void func_167(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_24(iParam0);
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

int func_168()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_169(int iParam0, bool bParam1)
{
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_170(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
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

void func_170(int iParam0, var uParam1)
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
			iVar3 = func_175(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_175(iVar0));
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
					iVar2 = func_173(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_173(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_172(Var11.f_1)) && iVar72 < 51)
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
							if (!func_171(Var50.f_3))
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

int func_171(int iParam0)
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

int func_172(int iParam0)
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

int func_173(int iParam0, int iParam1)
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
				iVar1 = func_174(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_171(Var43.f_3))
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

int func_174(int iParam0, var uParam1)
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

int func_175(int iParam0)
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

void func_176(int iParam0)
{
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_177(var uParam0, int iParam1)
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
		if (func_180(&iVar0))
		{
			if (func_179(iVar0, &vVar1, &uVar4))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, true, 0))
		{
			iVar5 = func_20();
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
		else if (func_178(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_178(vector3 vParam0, char* sParam3, vector3 vParam4)
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

bool func_179(int iParam0, var uParam1, var uParam2)
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
	return !func_8(*uParam1, 0f, 0f, 0f, 0);
}

int func_180(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_202())
		{
			*uParam0 = func_186(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_185(*uParam0) && !func_181(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_181(int iParam0)
{
	return func_182(iParam0, 0, 1);
}

int func_182(int iParam0, int iParam1, bool bParam2)
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
		if (func_184() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_162(func_183(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_183(int iParam0)
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

int func_184()
{
	return Global_30768;
}

int func_185(int iParam0)
{
	return func_182(iParam0, 5, 1);
}

int func_186(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_201(iVar0))
		{
			if (!bParam5 || func_200(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_187(iVar0, 0), true);
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

Vector3 func_187(int iParam0, bool bParam1)
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
			return func_197(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_137())
			{
				if (func_196(Global_1590374))
				{
					return func_189(2, 2);
				}
				else if (func_188(Global_1590374))
				{
					return func_189(45, 3);
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

int func_188(int iParam0)
{
	if (iParam0 != func_137())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_189(int iParam0, int iParam1)
{
	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_137())
	{
		if (iParam1 == 3)
		{
			if (func_190(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_190(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_190(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

int func_190(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_195(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_195(iParam1, &vVar6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_193(iParam0) };
	}
	else
	{
		Var12 = { func_192(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_191(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_191(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_191(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_192(int iParam0)
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

struct<6> func_193(int iParam0)
{
	return func_194(iParam0);
}

struct<6> func_194(int iParam0)
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

int func_195(int iParam0, var uParam1)
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

int func_196(int iParam0)
{
	if (iParam0 != func_137())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_197(int iParam0)
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
			if (func_198() == 0)
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

int func_198()
{
	return func_199(unk_0xD803B885F5E47A62());
}

int func_199(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_200(int iParam0)
{
	return func_182(iParam0, 0, 0);
}

int func_201(int iParam0)
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

bool func_202()
{
	return Global_98796.f_345 > 0;
}

var func_203()
{
	func_213(&uVar0, unk_0x4460E481B9E33ADA());
	func_212(&uVar0, unk_0x8D199E381D262EEF());
	func_211(&uVar0, unk_0xD8A54335F18763BA());
	func_206(&uVar0, unk_0x972A296334C9D57B());
	func_205(&uVar0, unk_0x118229AD063C3C1D());
	func_204(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_204(var uParam0, int iParam1)
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

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_206(var uParam0, int iParam1)
{
	iVar0 = func_210(*uParam0);
	iVar1 = func_208(*uParam0);
	if (iParam1 < 1 || iParam1 > func_207(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_207(int iParam0, int iParam1)
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

var func_208(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_209(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_209(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_210(var uParam0)
{
	return uParam0 & 15;
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_214(char* sParam0)
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

struct<2> func_215(int iParam0)
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

int func_216(char* sParam0, int iParam1)
{
	iVar33 = unk_0x12AB0310C2281427(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_217(iVar0, &sVar1);
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

void func_217(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_218(uParam1, "Abigail1", func_220(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 1:
			func_218(uParam1, "Abigail2", func_220(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 2:
			func_218(uParam1, "Barry1", func_220(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 3:
			func_218(uParam1, "Barry2", func_220(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_219(iParam0), 1, 1);
			break;
		
		case 4:
			func_218(uParam1, "Barry3", func_220(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 5:
			func_218(uParam1, "Barry3A", func_220(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 6:
			func_218(uParam1, "Barry3C", func_220(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 7:
			func_218(uParam1, "Barry4", func_220(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_219(iParam0), 0, 0);
			break;
		
		case 8:
			func_218(uParam1, "Dreyfuss1", func_220(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 9:
			func_218(uParam1, "Epsilon1", func_220(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 10:
			func_218(uParam1, "Epsilon2", func_220(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 11:
			func_218(uParam1, "Epsilon3", func_220(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 12:
			func_218(uParam1, "Epsilon4", func_220(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 13:
			func_218(uParam1, "Epsilon5", func_220(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 14:
			func_218(uParam1, "Epsilon6", func_220(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 15:
			func_218(uParam1, "Epsilon7", func_220(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 16:
			func_218(uParam1, "Epsilon8", func_220(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 17:
			func_218(uParam1, "Extreme1", func_220(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 18:
			func_218(uParam1, "Extreme2", func_220(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 19:
			func_218(uParam1, "Extreme3", func_220(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 20:
			func_218(uParam1, "Extreme4", func_220(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 21:
			func_218(uParam1, "Fanatic1", func_220(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_219(iParam0), 1, 0);
			break;
		
		case 22:
			func_218(uParam1, "Fanatic2", func_220(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_219(iParam0), 1, 0);
			break;
		
		case 23:
			func_218(uParam1, "Fanatic3", func_220(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_219(iParam0), 0, 1);
			break;
		
		case 24:
			func_218(uParam1, "Hao1", func_220(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_219(iParam0), 0, 1);
			break;
		
		case 25:
			func_218(uParam1, "Hunting1", func_220(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 26:
			func_218(uParam1, "Hunting2", func_220(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 27:
			func_218(uParam1, "Josh1", func_220(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 28:
			func_218(uParam1, "Josh2", func_220(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_219(iParam0), 1, 1);
			break;
		
		case 29:
			func_218(uParam1, "Josh3", func_220(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_219(iParam0), 1, 1);
			break;
		
		case 30:
			func_218(uParam1, "Josh4", func_220(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 31:
			func_218(uParam1, "Maude1", func_220(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 32:
			func_218(uParam1, "Minute1", func_220(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 33:
			func_218(uParam1, "Minute2", func_220(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 34:
			func_218(uParam1, "Minute3", func_220(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 35:
			func_218(uParam1, "MrsPhilips1", func_220(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 36:
			func_218(uParam1, "MrsPhilips2", func_220(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 37:
			func_218(uParam1, "Nigel1", func_220(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 38:
			func_218(uParam1, "Nigel1A", func_220(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_219(iParam0), 1, 1);
			break;
		
		case 39:
			func_218(uParam1, "Nigel1B", func_220(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_219(iParam0), 1, 1);
			break;
		
		case 40:
			func_218(uParam1, "Nigel1C", func_220(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_219(iParam0), 1, 1);
			break;
		
		case 41:
			func_218(uParam1, "Nigel1D", func_220(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_219(iParam0), 1, 1);
			break;
		
		case 42:
			func_218(uParam1, "Nigel2", func_220(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_219(iParam0), 1, 1);
			break;
		
		case 43:
			func_218(uParam1, "Nigel3", func_220(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_219(iParam0), 1, 1);
			break;
		
		case 44:
			func_218(uParam1, "Omega1", func_220(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 45:
			func_218(uParam1, "Omega2", func_220(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 46:
			func_218(uParam1, "Paparazzo1", func_220(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 47:
			func_218(uParam1, "Paparazzo2", func_220(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 48:
			func_218(uParam1, "Paparazzo3", func_220(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 49:
			func_218(uParam1, "Paparazzo3A", func_220(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 50:
			func_218(uParam1, "Paparazzo3B", func_220(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 51:
			func_218(uParam1, "Paparazzo4", func_220(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 52:
			func_218(uParam1, "Rampage1", func_220(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 54:
			func_218(uParam1, "Rampage3", func_220(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 55:
			func_218(uParam1, "Rampage4", func_220(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 56:
			func_218(uParam1, "Rampage5", func_220(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_219(iParam0), 0, 0);
			break;
		
		case 53:
			func_218(uParam1, "Rampage2", func_220(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_219(iParam0), 1, 0);
			break;
		
		case 57:
			func_218(uParam1, "TheLastOne", func_220(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 58:
			func_218(uParam1, "Tonya1", func_220(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 59:
			func_218(uParam1, "Tonya2", func_220(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 60:
			func_218(uParam1, "Tonya3", func_220(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 61:
			func_218(uParam1, "Tonya4", func_220(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		case 62:
			func_218(uParam1, "Tonya5", func_220(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_219(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_218(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_219(int iParam0)
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

struct<2> func_220(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_215(iParam0) };
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

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_222(Global_111638.f_9080.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_222(Global_111638.f_9080.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_222(Global_111638.f_9080.f_99.f_205[11]);
			break;
		
		case 90:
			return func_222(Global_111638.f_9080.f_99.f_205[7]);
			break;
		
		case 93:
			return func_222(Global_111638.f_9080.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_222(int iParam0)
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

int func_223(char* sParam0, bool bParam1)
{
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_224(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_224(int iParam0, bool bParam1)
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

void func_225(bool bParam0)
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

void func_226(int iParam0, int iParam1, int iParam2)
{
	if (func_272() && func_36())
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
		func_227(0);
	}
}

void func_227(int iParam0)
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

void func_228()
{
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_314, true) < 500f)
	{
		if (iLocal_214 == 0)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_51[0]))
			{
				unk_0x523BCC9DC80CD82F(-1189015600);
				if (unk_0xB87F6CF6E5628C67(-1189015600))
				{
					iLocal_51[0] = unk_0x122AAB0B1D6F55AD(-1189015600, 1754,951f, 3290,994f, 40,1176f, 182,397f, 1, 1, 0);
					unk_0x1E9649458B15960F(iLocal_51[0], true);
					unk_0x71199B01895C6202(-1189015600);
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_51[0]))
			{
				iLocal_214 = 1;
			}
		}
	}
	else if (iLocal_214 == 1)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_314, true) > 550f)
		{
			if (unk_0xC844350D5D58C99A(iLocal_51[0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_51[0]));
			}
			iLocal_214 = 0;
		}
	}
}

void func_229()
{
	if (iLocal_175 > 0)
	{
		func_119();
		func_235();
		func_228();
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 4)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 4, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		}
		func_234();
		func_233();
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
			{
				func_232(iLocal_33[iLocal_176], &(Local_70[iLocal_176]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
			}
			else
			{
				func_118(&(Local_70[iLocal_176]));
			}
			iLocal_176++;
		}
	}
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
		iLocal_199 = 0;
		iLocal_202[0] = 0;
		iLocal_202[1] = 0;
		iLocal_205 = 0;
		iLocal_206[0] = 0;
		iLocal_206[1] = 0;
		iLocal_209 = 0;
		iLocal_214 = 0;
		iLocal_215[0] = 0;
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_183 = unk_0x1C0640BA9A7327B3();
		iLocal_188 = unk_0x1C0640BA9A7327B3();
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			unk_0x1E9649458B15960F(iLocal_48, false);
		}
		func_150(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
		if (unk_0x757EF87A33649210())
		{
			if (!func_36())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_226(iLocal_48, -1, 1);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		if (!unk_0x562F77A7F33D2E46("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x8BC9595FD2792B5D("DH_P_2B_ENTER_CHOPPER");
		}
		if (!unk_0x562F77A7F33D2E46("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			unk_0x8BC9595FD2792B5D("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		func_231(602, 0);
		unk_0x81AF65E52132C1B4(0);
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				func_230(iLocal_48, -1);
			}
		}
		unk_0x8B4C4CA774181102(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (iLocal_206[0] == 1)
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_63[0]));
			}
			if (unk_0xC844350D5D58C99A(iLocal_49[0]))
			{
				unk_0x06FF977AA95DCCE3(iLocal_49[0], 0);
			}
			if (unk_0x562F77A7F33D2E46("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				unk_0x8910D3D58E0132B8("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			func_128(1, 602);
			func_231(600, 0);
			if (unk_0xC844350D5D58C99A(iLocal_48))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
				{
					if (unk_0x3D1053F9EB43B7AD(iLocal_48, 1721,001f, 3264,248f, 38,40064f, 1765,509f, 3276,518f, 46,05385f, 48,25f, 0, true, 0))
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
						else
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
							func_30();
						}
					}
					else
					{
						iLocal_175 = 0;
						iLocal_28 = 4;
					}
				}
			}
		}
		else if (iLocal_209 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_48))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
					{
						if (unk_0x1C0640BA9A7327B3() > iLocal_183 + 10000)
						{
							if (!unk_0xD17F06053799A7CA())
							{
								func_124("DP_GOD5", 7500, 1);
								iLocal_209 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_230(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

void func_231(int iParam0, bool bParam1)
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

int func_232(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA29E145196B9739D(iParam0, 1);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 7);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_233()
{
	iLocal_53 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 300f, -1281684762, 4);
	iLocal_54 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 300f, -1281684762, 16386);
	if (unk_0xC844350D5D58C99A(iLocal_53) && unk_0xE934758D273C899A(iLocal_53))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_65))
		{
			iLocal_65 = unk_0x5C3B41825F6AC5A0(iLocal_53);
			unk_0x321E019A46034F39(iLocal_65, false);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_54) && unk_0xE934758D273C899A(iLocal_54))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_66))
		{
			iLocal_66 = unk_0x5C3B41825F6AC5A0(iLocal_54);
			unk_0x321E019A46034F39(iLocal_66, false);
		}
	}
}

void func_234()
{
	if (iLocal_28 == 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
				{
					vLocal_320 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					if (unk_0xC844350D5D58C99A(iLocal_49[0]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
								{
									if (func_2(unk_0x16F2683693E537C9(), iLocal_31[0], 1) < 600f)
									{
										if (unk_0x0EB28750412C3A5A(vLocal_320, -75,8f, -819,9f, 326f, true) > 1600f && unk_0x0EB28750412C3A5A(vLocal_320, -2159f, 3067f, 33f, true) < 1000f)
										{
											if (vLocal_320.z > 70f)
											{
												if (iLocal_30 != 2)
												{
													iLocal_215[0] = 1;
													iLocal_30 = 2;
												}
											}
											else if (iLocal_30 != 1)
											{
												iLocal_215[0] = 1;
												iLocal_30 = 1;
											}
											if (iLocal_273 == 1)
											{
												if (iLocal_274 == 0)
												{
													if (!func_125())
													{
														if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
														{
															func_149(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_149(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
															if (func_148(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
															{
																iLocal_274 = 1;
															}
														}
													}
												}
											}
										}
										else
										{
											if (unk_0x0EB28750412C3A5A(vLocal_320, -75,8f, -819,9f, 326f, true) < 1600f)
											{
												if (iLocal_30 != 3)
												{
													iLocal_215[0] = 1;
													iLocal_30 = 3;
												}
												if (iLocal_273 == 0)
												{
													if (!func_125())
													{
														if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
														{
															func_149(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_149(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
															if (func_148(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
															{
																iLocal_273 = 1;
															}
														}
													}
												}
											}
											if (unk_0x0EB28750412C3A5A(vLocal_320, -2159f, 3067f, 33f, true) > 1000f)
											{
												if (iLocal_30 != 3)
												{
													iLocal_215[0] = 1;
													iLocal_30 = 3;
												}
											}
										}
									}
									else if (iLocal_30 != 4)
									{
										iLocal_215[0] = 1;
										iLocal_30 = 4;
									}
								}
							}
						}
					}
				}
				else if (unk_0x0EB28750412C3A5A(vLocal_320, -75,8f, -819,9f, 326f, true) > 1600f)
				{
					if (iLocal_30 != 0)
					{
						iLocal_215[0] = 1;
						iLocal_30 = 0;
					}
					if (iLocal_273 == 1)
					{
						if (iLocal_274 == 0)
						{
							if (!func_125())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									func_149(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
									func_149(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
									if (func_148(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
									{
										iLocal_274 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_30 != 3)
					{
						iLocal_215[0] = 1;
						iLocal_30 = 3;
					}
					if (iLocal_273 == 0)
					{
						if (!func_125())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								func_149(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
								func_149(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
								if (func_148(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
								{
									iLocal_273 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_202[0] == 0)
	{
		if (iLocal_28 == 2)
		{
			if (unk_0xC844350D5D58C99A(iLocal_49[0]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
				{
					if (unk_0xC844350D5D58C99A(iLocal_31[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
						{
							if (func_2(unk_0x16F2683693E537C9(), iLocal_31[0], 1) < 200f)
							{
								vLocal_317 = { unk_0x68F4C0EC296D3901(iLocal_49[0], true) };
								unk_0xA3BF0AA5A2608191(iLocal_31[0]);
								unk_0xED253B8DDB3FFB77(iLocal_31[0], vLocal_317, 10f, 0, 0);
								unk_0x7C8478BF70C1E072(iLocal_31[0], 250f, 0);
								iLocal_202[0] = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_28 == 3)
		{
			if (unk_0xC844350D5D58C99A(iLocal_49[0]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
				{
					if (unk_0xC844350D5D58C99A(iLocal_31[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
						{
							if (!unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
							{
								uLocal_63[0] = func_123(iLocal_31[0], 1, 0);
							}
							vLocal_317 = { unk_0x68F4C0EC296D3901(iLocal_49[0], true) };
							unk_0xA3BF0AA5A2608191(iLocal_31[0]);
							unk_0xDD353D0E9C789D0E(&uLocal_572);
							if (!unk_0xC42A92762C58E1B9(iLocal_31[0], iLocal_49[0], 0))
							{
								unk_0x5B1D360B9C6F0A09(0, iLocal_49[0], 20000, -1, 2f, 1, 0);
							}
							unk_0x9AFA0796FDCABCD5(0, iLocal_49[0], 0, 0, vLocal_317.x, vLocal_317.y, (vLocal_317.z + 20f), 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							unk_0x9AFA0796FDCABCD5(0, iLocal_49[0], 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							unk_0x75ABDC5F81978924(uLocal_572);
							unk_0x78ADC381772E3D54(iLocal_31[0], uLocal_572);
							unk_0xF82EA857DA10E0CD(&uLocal_572);
							iLocal_202[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_28 == 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_49[0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
			{
				if (unk_0xC844350D5D58C99A(iLocal_31[0]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_31[0], iLocal_49[0], 0))
						{
							if (unk_0x1C0640BA9A7327B3() > (iLocal_188 + 90000))
							{
								if (iLocal_297 == 0)
								{
									unk_0x298903DD96203C2C(iLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_188 + 10000 && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
							{
								if (iLocal_297 == 0)
								{
									unk_0x298903DD96203C2C(iLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (iLocal_296 == 0)
							{
								unk_0x298903DD96203C2C(iLocal_31[0], 0);
								iLocal_297 = 0;
								iLocal_296 = 1;
							}
							if (func_2(iLocal_49[0], unk_0x16F2683693E537C9(), 1) < 300f)
							{
								if (iLocal_299 == 0)
								{
									unk_0x40B4CC38578A6E32(iLocal_31[0], -123497569);
									unk_0xAA714ADDDC372E0F(iLocal_31[0], -1857128337);
									iLocal_298 = 0;
									iLocal_299 = 1;
								}
							}
							else if (iLocal_298 == 0)
							{
								unk_0x40B4CC38578A6E32(iLocal_31[0], 1186503822);
								unk_0xAA714ADDDC372E0F(iLocal_31[0], 1566631136);
								iLocal_299 = 0;
								iLocal_298 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_205 == 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_49[0]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
				{
					if (unk_0xC844350D5D58C99A(iLocal_31[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
						{
							if (unk_0xC42A92762C58E1B9(iLocal_31[0], iLocal_49[0], 0))
							{
								unk_0x298903DD96203C2C(iLocal_31[0], 0);
								unk_0x40B4CC38578A6E32(iLocal_31[0], -123497569);
								iLocal_205 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_30)
		{
			case 0:
				if (iLocal_215[0] == 1)
				{
					if (unk_0xC844350D5D58C99A(iLocal_49[0]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0], iLocal_49[0], 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_215[0] == 1)
				{
					if (unk_0xC844350D5D58C99A(iLocal_49[0]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0], iLocal_49[0], 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_215[0] == 1)
				{
					if (unk_0xC844350D5D58C99A(iLocal_49[0]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0], iLocal_49[0], 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (iLocal_215[0] == 1)
				{
					if (unk_0xC844350D5D58C99A(iLocal_49[0]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0], iLocal_49[0], 0, 0, unk_0x68E4ADDDDCD7BDDE(iLocal_49[0], 20f, 0f, 0f), 4, 10f, 10f, unk_0xD9522BA9E27E1349(iLocal_49[0]), round(unk_0x3EEA4D9509D93247(iLocal_49[0], unk_0x68F4C0EC296D3901(iLocal_49[0], true), 1, 1)), 100, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				if (iLocal_295 == 0)
				{
					if (unk_0x0EB28750412C3A5A(vLocal_320, -2159f, 3067f, 33f, true) > 1000f)
					{
						if (unk_0xC844350D5D58C99A(iLocal_49[0]))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
							{
								if (unk_0xC844350D5D58C99A(iLocal_31[0]))
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
									{
										unk_0x9AFA0796FDCABCD5(iLocal_31[0], iLocal_49[0], 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
										iLocal_295 = 1;
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (iLocal_215[0] == 1)
				{
					if (unk_0xC844350D5D58C99A(iLocal_49[0]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0], iLocal_49[0], 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (unk_0xC844350D5D58C99A(iLocal_31[0]))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_63[0]));
			}
			iLocal_206[0] = 1;
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_63[0]));
		}
		iLocal_206[0] = 1;
	}
	if (unk_0xC844350D5D58C99A(iLocal_49[0]))
	{
		if (!unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_63[0]));
			}
			iLocal_206[0] = 1;
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_63[0]));
		}
		iLocal_206[0] = 1;
	}
	if (unk_0xC844350D5D58C99A(iLocal_49[0]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_49[0], 0))
		{
			if (unk_0xC844350D5D58C99A(iLocal_31[0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_31[0], iLocal_49[0], 0))
					{
						if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
						{
							unk_0x516E63E474722206(uLocal_63[0], 1f);
						}
					}
					if (func_2(unk_0x16F2683693E537C9(), iLocal_31[0], 1) > 600f)
					{
						if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
						{
							unk_0x142CC44DB769B57E(&(uLocal_63[0]));
						}
						iLocal_206[0] = 1;
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_31[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0]))
		{
			if (unk_0x70EED0761B82965E(iLocal_31[0]))
			{
				unk_0xA3BF0AA5A2608191(iLocal_31[0]);
				unk_0xD458AC1C1D29C3B4(iLocal_31[0], 0, 0);
				if (unk_0xE4EDC4B0E92C078B(uLocal_63[0]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_63[0]));
				}
				iLocal_206[0] = 1;
			}
		}
	}
}

void func_235()
{
	if (iLocal_210 == 0)
	{
		if ((((func_236(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3, 0, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1601,514f, 2794,148f, 14,84222f, -1587,692f, 2806,101f, 20,29557f, 16f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1598,278f, 2803,98f, 17,01772f, -1665,98f, 2895,398f, 34,58953f, 14,5f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1648,554f, 2873,74f, 24,85017f, -1673,864f, 2889,698f, 38,18856f, 14,5f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1647,446f, 2873,969f, 24,82373f, -1667,316f, 2914,302f, 39,39478f, 14,5f, 0, true, 0))
		{
			iLocal_210 = 1;
		}
	}
	if (iLocal_210 == 1)
	{
		if ((((!func_236(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3, 0, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1601,514f, 2794,148f, 14,84222f, -1587,692f, 2806,101f, 20,29557f, 16f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1598,278f, 2803,98f, 17,01772f, -1665,98f, 2895,398f, 34,58953f, 14,5f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1648,554f, 2873,74f, 24,85017f, -1673,864f, 2889,698f, 38,18856f, 14,5f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1647,446f, 2873,969f, 24,82373f, -1667,316f, 2914,302f, 39,39478f, 14,5f, 0, true, 0))
		{
			iLocal_210 = 0;
		}
	}
	if (iLocal_201 == 1)
	{
		if (((iLocal_210 == 1 || iLocal_289 == 1) || iLocal_302 == 1) || iLocal_211 == 1)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 4)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 4, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_176]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_176]))
					{
						if (unk_0xC844350D5D58C99A(iLocal_48))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0) || iLocal_212 == 1)
								{
									if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_176], 1) < 39f)
									{
										if (iLocal_217[iLocal_176] == 0)
										{
											unk_0xA3BF0AA5A2608191(iLocal_33[iLocal_176]);
											unk_0xED253B8DDB3FFB77(iLocal_33[iLocal_176], unk_0x68F4C0EC296D3901(iLocal_33[iLocal_176], true), 50f, 0, 0);
											unk_0x6C3AE6E278DB3D0E(iLocal_33[iLocal_176], unk_0x16F2683693E537C9(), 0, 16);
											unk_0xAFF39FB306F8E232(iLocal_33[iLocal_176], 51, 1);
											unk_0xAFF39FB306F8E232(iLocal_33[iLocal_176], 43, 1);
											iLocal_231[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 1;
										}
									}
									else if (iLocal_231[iLocal_176] == 0)
									{
										unk_0xA3BF0AA5A2608191(iLocal_33[iLocal_176]);
										unk_0xDD353D0E9C789D0E(&uLocal_572);
										unk_0x96167B03C5A77156(0, unk_0x68F4C0EC296D3901(iLocal_48, true), 2f, -1, 20f, 0, 1193033728);
										unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
										unk_0x75ABDC5F81978924(uLocal_572);
										unk_0x78ADC381772E3D54(iLocal_33[iLocal_176], uLocal_572);
										unk_0xF82EA857DA10E0CD(&uLocal_572);
										iLocal_245[iLocal_176] = 0;
										iLocal_259[iLocal_176] = 0;
										iLocal_217[iLocal_176] = 0;
										iLocal_231[iLocal_176] = 1;
									}
								}
								else
								{
									if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_176], 1) < 39f)
									{
										if (iLocal_245[iLocal_176] == 0)
										{
											unk_0xA3BF0AA5A2608191(iLocal_33[iLocal_176]);
											unk_0xED253B8DDB3FFB77(iLocal_33[iLocal_176], unk_0x68F4C0EC296D3901(iLocal_33[iLocal_176], true), 50f, 0, 0);
											unk_0x6C3AE6E278DB3D0E(iLocal_33[iLocal_176], unk_0x16F2683693E537C9(), 0, 16);
											unk_0xAFF39FB306F8E232(iLocal_33[iLocal_176], 51, 1);
											unk_0xAFF39FB306F8E232(iLocal_33[iLocal_176], 43, 1);
											iLocal_231[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 1;
										}
									}
									if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_176], 1) > 41f && func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_176], 1) < 400f)
									{
										if (iLocal_259[iLocal_176] == 0)
										{
											iLocal_195 = unk_0x09AC81E49EA267F7(0, 4);
											unk_0xA3BF0AA5A2608191(iLocal_33[iLocal_176]);
											unk_0xED253B8DDB3FFB77(iLocal_33[iLocal_176], unk_0x68F4C0EC296D3901(iLocal_33[iLocal_176], true), 50f, 0, 0);
											unk_0xDD353D0E9C789D0E(&uLocal_572);
											if (iLocal_195 == 0)
											{
												unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, 25f, 2f, 1073741824, 0);
											}
											else if (iLocal_195 == 1)
											{
												unk_0x93D47DFD0AE94949(0, 500);
												unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, 25f, 2f, 1073741824, 0);
											}
											else if (iLocal_195 == 2)
											{
												unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_195 == 3)
											{
												unk_0x93D47DFD0AE94949(0, 500);
												unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, 25f, 3f, 1073741824, 0);
											}
											unk_0x75ABDC5F81978924(uLocal_572);
											unk_0x78ADC381772E3D54(iLocal_33[iLocal_176], uLocal_572);
											unk_0xF82EA857DA10E0CD(&uLocal_572);
											iLocal_231[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 1;
										}
									}
								}
							}
						}
					}
				}
				iLocal_176++;
			}
		}
		if (((iLocal_210 == 0 && iLocal_289 == 0) && iLocal_302 == 0) && iLocal_211 == 0)
		{
			iLocal_193 = 0;
			while (iLocal_193 <= 1)
			{
				if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_193]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_193]))
					{
						if (func_2(iLocal_33[iLocal_193], unk_0x16F2683693E537C9(), 1) < 25f)
						{
							if (iLocal_292[iLocal_193] == 0)
							{
								if (!unk_0x0A059E0DB9253280(iLocal_33[iLocal_193]))
								{
									unk_0x327AAEE25F323797(iLocal_33[iLocal_193]);
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_33[iLocal_193]);
								}
								unk_0x9BE7E7B6B488CC55(iLocal_33[iLocal_193], unk_0x16F2683693E537C9(), -1, 0);
								iLocal_292[iLocal_193] = 1;
							}
							if (iLocal_303 == 1)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_191 + 20000)
								{
									iLocal_302 = 1;
								}
							}
						}
						else if (func_2(iLocal_33[iLocal_193], unk_0x16F2683693E537C9(), 1) > 30f)
						{
							if (iLocal_292[iLocal_193] == 1)
							{
								if (!unk_0x0A059E0DB9253280(iLocal_33[iLocal_193]))
								{
									unk_0x327AAEE25F323797(iLocal_33[iLocal_193]);
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_33[iLocal_193]);
								}
								unk_0x9BE7E7B6B488CC55(iLocal_33[iLocal_193], unk_0x16F2683693E537C9(), 1, 0);
								iLocal_292[iLocal_193] = 0;
							}
						}
					}
				}
				iLocal_193++;
			}
		}
	}
}

int func_236(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
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

void func_237()
{
	if (iLocal_175 > 0)
	{
		func_119();
		func_235();
		func_234();
	}
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
		iLocal_198 = 0;
		iLocal_201 = 0;
		iLocal_202[0] = 0;
		iLocal_202[1] = 0;
		iLocal_210 = 0;
		iLocal_211 = 0;
		iLocal_212 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292[0] = 0;
		iLocal_292[1] = 0;
		iLocal_302 = 0;
		iLocal_303 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_310 = 0;
		iLocal_191 = 0;
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			iLocal_217[iLocal_176] = 0;
			iLocal_231[iLocal_176] = 0;
			iLocal_245[iLocal_176] = 0;
			iLocal_259[iLocal_176] = 0;
			iLocal_176++;
		}
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		unk_0x93776B156FD8804A("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_182 = unk_0x1C0640BA9A7327B3();
		unk_0xAB8E2DDC7AF955E0(-1281684762, true);
		unk_0x523BCC9DC80CD82F(1702441027);
		unk_0x523BCC9DC80CD82F(-163714847);
		if (!unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xC844350D5D58C99A(Global_95241[0]))
			{
				if (unk_0xDF1306B443CD3D15(Global_95241[0], 0))
				{
					unk_0x73270B3C9CC833FD(Global_95241[0], true, 1);
					iLocal_48 = Global_95241[0];
					unk_0x1FC8B874F2C46E6E(iLocal_48, 0);
					unk_0xE8832A9E16A57A1F(iLocal_48, 1, 1);
					unk_0x71199B01895C6202(-50547061);
					unk_0xAB8E2DDC7AF955E0(-50547061, true);
					unk_0xB422445CBCD0AEFB(iLocal_48, 0);
					unk_0xD5A0214B20BCBAD8(iLocal_48, 1);
					func_103(iLocal_48, 0);
				}
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_49[0]))
		{
			if (unk_0xC844350D5D58C99A(Global_95241[1]))
			{
				if (unk_0xDF1306B443CD3D15(Global_95241[1], 0))
				{
					unk_0x73270B3C9CC833FD(Global_95241[1], true, 1);
					iLocal_49[0] = Global_95241[1];
					unk_0x1FC8B874F2C46E6E(iLocal_49[0], 1);
					unk_0xE8832A9E16A57A1F(iLocal_49[0], 1, 1);
					unk_0x1E9649458B15960F(iLocal_49[0], false);
					unk_0x2E1E5367A885F9B7(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x05EC10F460C3A4AF(iLocal_49[0], 0);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(Global_95241[2]))
		{
			if (unk_0xDF1306B443CD3D15(Global_95241[2], 0))
			{
				if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(Global_95241[2])))
				{
					unk_0x73270B3C9CC833FD(Global_95241[2], true, 1);
					func_245(1734,799f, 3234,833f, 40,7041f, 321,0399f, 0, 145);
				}
				if (((unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(Global_95241[2])) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(Global_95241[2]))) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(Global_95241[2]))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(Global_95241[2])))
				{
					unk_0x73270B3C9CC833FD(Global_95241[2], true, 1);
					func_245(1748,05f, 3294,7f, 40,106f, 204,2419f, 0, 145);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[0]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[0], true, 1);
			iLocal_33[0] = Global_95241.f_9[0];
		}
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[1]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[1], true, 1);
			iLocal_33[1] = Global_95241.f_9[1];
		}
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			unk_0x1E9649458B15960F(iLocal_48, false);
		}
		unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 1);
		if (unk_0x757EF87A33649210())
		{
			if (!func_36())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_226(iLocal_55, -1, 1);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		func_244(unk_0x16F2683693E537C9(), -1);
		func_243(73);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (unk_0xDA8F5DDC86FE3C26("ARMY_GUARD"))
		{
			if (unk_0x8ED9A0095B69A728("ARMY_GUARD"))
			{
				unk_0x2723524E448F4BDD("ARMY_GUARD", false);
			}
		}
		func_100();
		if (iLocal_211 == 0)
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_182 + 3000)
			{
				iLocal_184 = 0;
				while (iLocal_184 <= 12)
				{
					if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_184]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_184]))
						{
							if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_184], 1) < 40f)
							{
								if (unk_0xE115347EA59F7B86(iLocal_33[iLocal_184], unk_0x16F2683693E537C9()))
								{
									if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
									{
										unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_211 = 1;
									}
									if (iLocal_210 == 1)
									{
										unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_211 = 1;
									}
									if (iLocal_307 == 0)
									{
										if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !func_242(0))
										{
											if (func_241(unk_0x16F2683693E537C9()) != -1569615261)
											{
												iLocal_194 = unk_0x1C0640BA9A7327B3();
												iLocal_307 = 1;
											}
										}
									}
									else if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !func_242(0))
									{
										if (func_241(unk_0x16F2683693E537C9()) != -1569615261)
										{
											if (unk_0x1C0640BA9A7327B3() > iLocal_194 + 3000)
											{
												unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
												unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 1, 1);
												iLocal_211 = 1;
											}
										}
										else if (iLocal_306 == 0)
										{
											iLocal_307 = 0;
											iLocal_306 = 1;
										}
									}
								}
							}
						}
					}
					iLocal_184++;
				}
			}
		}
		if (iLocal_198 == 0)
		{
			unk_0x790015DC92C918E2();
			unk_0x8B4C4CA774181102(5f, 10f, 4);
			func_124("DP_GOD2", 7500, 1);
			iLocal_198 = 1;
		}
		if (iLocal_210 == 1)
		{
			if (!func_240(5))
			{
				func_239(5);
			}
		}
		else if (func_240(5))
		{
			func_238(5);
		}
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
			{
				if (func_2(unk_0x16F2683693E537C9(), iLocal_48, 1) < 30f)
				{
					iLocal_212 = 1;
				}
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
				{
					unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), -72657034, -1, false, true);
					iLocal_175 = 0;
					unk_0x8B4C4CA774181102(10f, 10f, 4);
					iLocal_28 = 3;
				}
			}
		}
	}
}

void func_238(int iParam0)
{
	unk_0x0674E58A79778E99(&Global_94599, iParam0);
}

void func_239(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_94599, iParam0);
}

bool func_240(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_94599, iParam0);
}

int func_241(int iParam0)
{
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

int func_242(int iParam0)
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

void func_243(int iParam0)
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

void func_244(int iParam0, int iParam1)
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

void func_245(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (unk_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_254(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_251(unk_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &uVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = uVar3;
					}
				}
				func_246(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_246(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
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
		func_250(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_8(vParam1, 0f, 0f, 0f, 0))
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
		func_248(iParam5, &Var0, vParam1, fParam4, func_61(iParam0));
		func_247(iParam5, iParam0, 0);
	}
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_71(&(Global_75441.f_555[0]), iParam0))
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
				Global_111638.f_32744.f_4801 = func_203();
			}
			if (iParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_254(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_76347 = iParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_248(int iParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6)
{
	if (func_71(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 10))
		{
			func_249(iParam0);
			func_68(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]));
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
			func_64(iParam0, 1);
		}
	}
}

void func_249(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_71(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			unk_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 13))
		{
			func_64(iParam0, 0);
		}
	}
}

void func_250(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_249(iParam0);
	func_64(iParam0, 0);
}

int func_251(vector3 vParam0, int iParam3, var uParam4, var uParam5)
{
	iVar0 = func_252(vParam0, iParam3, 1);
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

int func_252(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_253(iVar0) || iParam4 == 0)
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

bool func_253(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

int func_254(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

void func_255()
{
	if (iLocal_175 == 0)
	{
		func_259(1, 0);
		func_259(2, 0);
		func_259(7, 0);
		func_259(8, 0);
		func_259(9, 0);
		func_259(10, 0);
		func_259(4, 0);
		func_259(12, 0);
		unk_0xF63400DBE3303D26("MarineGroupHash", &iLocal_60);
		unk_0x0E2400AB9174FA81(5, iLocal_60, 1862763509);
		unk_0x0E2400AB9174FA81(5, -472287501, 1862763509);
		unk_0x0E2400AB9174FA81(1, iLocal_60, -472287501);
		unk_0x0E2400AB9174FA81(1, -472287501, iLocal_60);
		unk_0x0E2400AB9174FA81(1, -1533126372, iLocal_60);
		unk_0x0E2400AB9174FA81(1, iLocal_60, -1533126372);
		unk_0x0E2400AB9174FA81(1, -1533126372, -472287501);
		unk_0x0E2400AB9174FA81(1, -472287501, -1533126372);
		if (func_272())
		{
			if (Global_92921 == 1)
			{
				if (func_258() == 0)
				{
					func_257(vLocal_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
				if (func_258() == 1)
				{
					func_257(-629,1677f, 2871,31f, 385,0313f, 283,1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
				if (func_258() == 2)
				{
					func_256();
				}
			}
			else
			{
				if (func_258() == 0)
				{
					func_257(-1565,084f, 2780,813f, 16,4022f, 53,6086f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 2;
				}
				if (func_258() == 1)
				{
					func_257(vLocal_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
				if (func_258() == 2)
				{
					func_257(-629,1677f, 2871,31f, 385,0313f, 283,1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
			}
		}
		else if (func_28(0))
		{
			func_257(-1565,084f, 2780,813f, 16,4022f, 53,6086f, 1, 0);
			iLocal_196 = 1;
			iLocal_175 = 0;
			iLocal_28 = 2;
		}
		else
		{
			iLocal_175 = 0;
			iLocal_28 = 2;
		}
	}
}

void func_256()
{
	iLocal_197 = 0;
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0);
	}
	unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1747,04f, 3267,456f, 40,246f, 1, false, 0, 1);
	unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 229,0887f);
	if (unk_0xC844350D5D58C99A(iLocal_48))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_48);
	}
	if (!unk_0xC844350D5D58C99A(iLocal_48))
	{
		unk_0x523BCC9DC80CD82F(-50547061);
		while (!unk_0xB87F6CF6E5628C67(-50547061))
		{
			wait(0);
		}
		iLocal_48 = unk_0x122AAB0B1D6F55AD(-50547061, 1740,852f, 3263,161f, 40,2743f, 280,3712f, 1, 1, 0);
		unk_0x152BCACCF710B36E(iLocal_48, 0, 1);
		unk_0x152BCACCF710B36E(iLocal_48, 1, 1);
		unk_0x71EDC33E5A423750(iLocal_48, 2);
		unk_0xD5A0214B20BCBAD8(iLocal_48, 1);
		unk_0x1E9649458B15960F(iLocal_48, true);
		unk_0xB422445CBCD0AEFB(iLocal_48, 0);
		func_103(iLocal_48, 0);
	}
	if (unk_0x757EF87A33649210())
	{
		unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
	}
	unk_0x2FB9A57162E54BAB(0f);
	if (!unk_0x0F1CCD77290EE12F())
	{
		unk_0x82E51BCA72537B6C(800);
	}
	while (!unk_0x0F1CCD77290EE12F())
	{
		unk_0x82E51BCA72537B6C(800);
		wait(0);
	}
	func_30();
}

void func_257(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_272())
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
		func_227(1);
	}
}

int func_258()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

void func_259(int iParam0, bool bParam1)
{
	unk_0xB284873E9BA151DE(iParam0, !bParam1);
	unk_0x15EA7F4313456B1D(iParam0, bParam1);
}

void func_260()
{
	if (!func_272())
	{
		if (iLocal_175 == 0)
		{
			iLocal_28 = 1;
		}
	}
	else
	{
		iLocal_175 = 0;
		iLocal_28 = 1;
	}
}

void func_261()
{
	if (unk_0xC844350D5D58C99A(iLocal_48))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_48, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_48, 0))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_48))
					{
						if (func_262(unk_0x16F2683693E537C9(), iLocal_48) == -1)
						{
							unk_0x38C3A68D7861DCFD(0, 114, 1);
						}
					}
				}
			}
		}
	}
}

int func_262(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xA30B8362589C124A(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xA30B8362589C124A(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_263()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_28 == 2 || iLocal_28 == 3)
		{
			if (func_236(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3, 200, 0) || iLocal_211 == 1)
			{
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
				unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
			}
		}
		if (iLocal_28 == 4)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_311, true) > 1000f)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
		}
	}
}

void func_264()
{
}

void func_265()
{
	if (iLocal_289 == 0)
	{
		iLocal_185 = 0;
		while (iLocal_185 <= 12)
		{
			if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_185]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_185]))
				{
					if (unk_0xE115347EA59F7B86(iLocal_33[iLocal_185], unk_0x16F2683693E537C9()))
					{
						if (func_2(iLocal_33[iLocal_185], unk_0x16F2683693E537C9(), 1) < 40f)
						{
							if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
							{
								iLocal_289 = 1;
							}
						}
						if (func_2(iLocal_33[iLocal_185], unk_0x16F2683693E537C9(), 1) < 25f)
						{
							if (func_241(unk_0x16F2683693E537C9()) != -1569615261)
							{
								if (func_270(iLocal_33[iLocal_185], 6))
								{
									iLocal_289 = 1;
								}
							}
						}
					}
				}
			}
			iLocal_185++;
		}
	}
	if (iLocal_213 == 0)
	{
		if (func_20() == 2)
		{
			func_149(&uLocal_403, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			iLocal_213 = 1;
		}
	}
	if (iLocal_210 == 0)
	{
		iLocal_192 = 0;
		while (iLocal_192 <= 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_192]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_192]))
				{
					if (iLocal_290 == 0 && iLocal_291 == 0)
					{
						if (!func_125())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_192], 1) < 25f)
								{
									if (unk_0xE115347EA59F7B86(iLocal_33[iLocal_192], unk_0x16F2683693E537C9()))
									{
										if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !func_242(0))
										{
											if (func_241(unk_0x16F2683693E537C9()) != -1569615261)
											{
												if (unk_0xC844350D5D58C99A(iLocal_33[0]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_33[0]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_33[0], 1) < 30f)
														{
															func_149(&uLocal_403, 4, iLocal_33[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0xC844350D5D58C99A(iLocal_33[1]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_33[1]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_33[1], 1) < 30f)
														{
															func_149(&uLocal_403, 4, iLocal_33[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_148(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = unk_0x1C0640BA9A7327B3();
													iLocal_186 = unk_0x1C0640BA9A7327B3();
													iLocal_290 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_291 == 0 && iLocal_290 == 0)
					{
						if (!func_125())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_192], 1) < 25f)
								{
									if (unk_0xE115347EA59F7B86(iLocal_33[iLocal_192], unk_0x16F2683693E537C9()))
									{
										if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
										{
											if (func_241(unk_0x16F2683693E537C9()) == -1569615261 || func_242(0))
											{
												if (unk_0xC844350D5D58C99A(iLocal_33[0]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_33[0]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_33[0], 1) < 30f)
														{
															func_149(&uLocal_403, 4, iLocal_33[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0xC844350D5D58C99A(iLocal_33[1]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_33[1]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_33[1], 1) < 30f)
														{
															func_149(&uLocal_403, 4, iLocal_33[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_148(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = unk_0x1C0640BA9A7327B3();
													iLocal_186 = unk_0x1C0640BA9A7327B3();
													iLocal_291 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_290 == 1 || iLocal_291 == 1)
					{
						if (iLocal_289 == 0 && iLocal_210 == 0)
						{
							if (iLocal_310 == 0)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_186 + 8000)
								{
									if (!func_125())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_192], 1) < 25f)
											{
												if (unk_0xE115347EA59F7B86(iLocal_33[iLocal_192], unk_0x16F2683693E537C9()))
												{
													if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !func_242(0))
													{
														if (func_241(unk_0x16F2683693E537C9()) != -1569615261)
														{
															if (unk_0xC844350D5D58C99A(iLocal_33[0]))
															{
																if (!unk_0xEB6A8945D1AC98A1(iLocal_33[0]))
																{
																	if (func_2(unk_0x16F2683693E537C9(), iLocal_33[0], 1) < 30f)
																	{
																		func_149(&uLocal_403, 4, iLocal_33[0], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (unk_0xC844350D5D58C99A(iLocal_33[1]))
															{
																if (!unk_0xEB6A8945D1AC98A1(iLocal_33[1]))
																{
																	if (func_2(unk_0x16F2683693E537C9(), iLocal_33[1], 1) < 30f)
																	{
																		func_149(&uLocal_403, 4, iLocal_33[1], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (func_148(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_186 = unk_0x1C0640BA9A7327B3();
																iLocal_310 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (unk_0x1C0640BA9A7327B3() > iLocal_187 + 8000)
							{
								if (!func_125())
								{
									if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
									{
										if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_192], 1) < 25f)
										{
											if (unk_0xE115347EA59F7B86(iLocal_33[iLocal_192], unk_0x16F2683693E537C9()))
											{
												if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
												{
													if (func_241(unk_0x16F2683693E537C9()) == -1569615261 || func_242(0))
													{
														if (unk_0xC844350D5D58C99A(iLocal_33[0]))
														{
															if (!unk_0xEB6A8945D1AC98A1(iLocal_33[0]))
															{
																if (func_2(unk_0x16F2683693E537C9(), iLocal_33[0], 1) < 30f)
																{
																	func_149(&uLocal_403, 4, iLocal_33[0], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (unk_0xC844350D5D58C99A(iLocal_33[1]))
														{
															if (!unk_0xEB6A8945D1AC98A1(iLocal_33[1]))
															{
																if (func_2(unk_0x16F2683693E537C9(), iLocal_33[1], 1) < 30f)
																{
																	func_149(&uLocal_403, 4, iLocal_33[1], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (iLocal_310 == 0)
														{
															if (func_148(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_187 = unk_0x1C0640BA9A7327B3();
																iLocal_310 = 1;
															}
														}
														if (iLocal_303 == 0)
														{
															iLocal_191 = unk_0x1C0640BA9A7327B3();
															iLocal_303 = 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iLocal_192++;
		}
	}
	if (unk_0x1C0640BA9A7327B3() > iLocal_177 + 12000)
	{
		if (iLocal_210 == 1 || iLocal_289 == 1)
		{
			if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
			{
				if (!func_125())
				{
					if (func_269())
					{
						iLocal_181 = unk_0x09AC81E49EA267F7(0, 6);
						if (iLocal_181 == 0)
						{
							func_266(func_268(), "OVER_THERE", 9);
							iLocal_177 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_181 == 1)
						{
							func_266(func_268(), "PROVOKE_TRESSPASS", 9);
							iLocal_177 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_181 == 2)
						{
							func_266(func_268(), "UP_THERE", 9);
							iLocal_177 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_181 == 3)
						{
							func_266(func_268(), "suspect_spotted", 9);
							iLocal_177 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_181 == 4)
						{
							func_266(func_268(), "GENERIC_INSULT_HIGH", 9);
							iLocal_177 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_181 == 5)
						{
							func_266(func_268(), "GENERIC_INSULT_MED", 9);
							iLocal_177 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
	}
}

void func_266(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_267(iParam2), 1);
}

int func_267(int iParam0)
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

int func_268()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xE51E576EA6B739AC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 30f, 0, 1, &iVar0, 0, 1, -1);
	}
	iLocal_179 = 0;
	while (iLocal_179 <= 9)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_179]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_179]))
			{
				if (iVar0 == iLocal_33[iLocal_179])
				{
					return iLocal_33[iLocal_179];
				}
			}
		}
		iLocal_179++;
	}
	return 0;
}

int func_269()
{
	iLocal_180 = 0;
	while (iLocal_180 <= 9)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33[iLocal_180]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_33[iLocal_180]))
			{
				if (func_2(unk_0x16F2683693E537C9(), iLocal_33[iLocal_180], 1) < 25f)
				{
					return 1;
				}
			}
		}
		iLocal_180++;
	}
	return 0;
}

int func_270(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), iParam1))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_271()
{
	if (unk_0xDA8F5DDC86FE3C26("ARMY_HELI"))
	{
		if (unk_0x8ED9A0095B69A728("ARMY_HELI"))
		{
			unk_0x2723524E448F4BDD("ARMY_HELI", false);
		}
	}
}

int func_272()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_273()
{
	func_274(73);
	unk_0xD7992BEF7A9D109E("DOCKP2B", 0);
	while (!unk_0x67C1D9E5B91B2E37(0))
	{
		wait(0);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
	}
	unk_0x15EA7F4313456B1D(5, false);
	unk_0x15EA7F4313456B1D(3, false);
	unk_0x15EA7F4313456B1D(4, false);
	unk_0xE342F209E49C5314(-2024,2f, 2968f, 30,2f, -2004f, 2921,5f, 37,6f, false, 1);
	unk_0xE342F209E49C5314(-2133,3f, 2993,7f, 41,1f, -2152,7f, 3039,4f, 31,6f, false, 1);
	unk_0xE342F209E49C5314(-1884,6f, 2827,7f, 41,8f, -1843,1f, 2772,1f, 29,9f, false, 1);
	iLocal_67 = unk_0x7D6CA5F52B3748BF(-1884,6f, 2827,7f, 41,8f, -1843,1f, 2772,1f, 29,9f, 0, 1, 1, 1);
	iLocal_69 = unk_0x7D6CA5F52B3748BF(-2168,3f, 3223,6f, 52,8f, -2156,2f, 3205f, 29f, 0, 1, 1, 1);
	unk_0x536F1BE96C726C4B(-1876,8f, 2806,1f, 32,3f, 8f, 1, 0, 0, false);
	unk_0x536F1BE96C726C4B(-1857,7f, 2797,9f, 32,4f, 8f, 1, 0, 0, false);
	unk_0x7352ACF3368DF65F("WantedMusicOnMission", 1);
	unk_0xAB8E2DDC7AF955E0(788747387, true);
	unk_0xE342F209E49C5314(-2195,3f, 3231,1f, 41,4f, -2164,1f, 3250,5f, 29f, false, 1);
	unk_0x21688103CC7F9B19(-2195,3f, 3231,1f, 41,4f, -2164,1f, 3250,5f, 29f, 0);
	unk_0xE342F209E49C5314(-2050,8f, 3139,5f, 41f, -2018,5f, 3160f, 27f, false, 1);
	unk_0x21688103CC7F9B19(-2050,8f, 3139,5f, 41f, -2018,5f, 3160f, 27f, 0);
}

void func_274(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_239(2);
			func_239(4);
			break;
		
		case 73:
			func_239(0);
			func_239(1);
			func_239(7);
			break;
		
		case 92:
			func_239(10);
			func_239(9);
			func_239(13);
			func_239(6);
			break;
		
		case 68:
			func_239(11);
			break;
		
		case 78:
			func_239(14);
			break;
		
		case 79:
			func_239(3);
			break;
		
		default:
			break;
	}
}

void func_275()
{
	func_276();
	unk_0xAB8E2DDC7AF955E0(-50547061, false);
	unk_0xAB8E2DDC7AF955E0(788747387, false);
	unk_0x81AF65E52132C1B4(1);
	unk_0xE342F209E49C5314(-2195,3f, 3231,1f, 41,4f, -2164,1f, 3250,5f, 29f, true, 1);
	unk_0xE342F209E49C5314(-2050,8f, 3139,5f, 41f, -2018,5f, 3160f, 27f, true, 1);
	unk_0x2B25B48028758FE8();
	unk_0x2952D66A502EA873(iLocal_67, 0);
	unk_0x2952D66A502EA873(iLocal_68, 0);
	unk_0x2952D66A502EA873(iLocal_69, 0);
	func_259(1, 1);
	func_259(2, 1);
	func_259(7, 1);
	func_259(8, 1);
	func_259(9, 1);
	func_259(10, 1);
	func_259(4, 1);
	func_259(12, 1);
	func_117();
	if (unk_0xDA8F5DDC86FE3C26("ARMY_GUARD"))
	{
		if (!unk_0x8ED9A0095B69A728("ARMY_GUARD"))
		{
			unk_0x2723524E448F4BDD("ARMY_GUARD", true);
		}
	}
	unk_0x7B35981153AECDBE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0, 0);
	unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0);
	unk_0x7352ACF3368DF65F("WantedMusicOnMission", 0);
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		func_118(&(Local_70[iLocal_176]));
		iLocal_176++;
	}
	if (unk_0xDA8F5DDC86FE3C26("ARMY_HELI"))
	{
		if (!unk_0x8ED9A0095B69A728("ARMY_HELI"))
		{
			unk_0x2723524E448F4BDD("ARMY_HELI", true);
		}
	}
	unk_0x51732B934211201A(iLocal_60);
	unk_0x10FAF14A60A0DBE1();
}

void func_276()
{
	Global_94599 = 0;
}

void func_277()
{
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_28(0))
	{
		if (!func_278())
		{
			iVar0 = func_27();
			if (iVar0 != -1)
			{
				if (!func_14(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}
}

int func_278()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

