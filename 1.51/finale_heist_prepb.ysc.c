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
	vLocal_116 = { 27,7189f, -608,7927f, 30,6293f };
	vLocal_132 = { 903,1f, -1548,8f, 29,8f };
	fLocal_135 = 0f;
	if (unk_0x2EBF608FFE6CA406(3))
	{
		unk_0xC92DB9682A650680("FHPRB_STOP");
		func_210();
		func_209();
	}
	if (func_208(0))
	{
		unk_0xD7992BEF7A9D109E("FINPRB", 0);
	}
	unk_0xF63400DBE3303D26("WorkerPedMainGroup", &iLocal_302);
	unk_0xF63400DBE3303D26("GuardMainGroup", &iLocal_303);
	unk_0xAB8E2DDC7AF955E0(569305213, true);
	unk_0x0E2400AB9174FA81(5, iLocal_303, 1862763509);
	unk_0x0E2400AB9174FA81(5, iLocal_302, 1862763509);
	unk_0x0E2400AB9174FA81(1, iLocal_303, iLocal_302);
	unk_0x0E2400AB9174FA81(1, iLocal_302, iLocal_303);
	unk_0x0E2400AB9174FA81(1, iLocal_303, -1533126372);
	unk_0x0E2400AB9174FA81(1, -1533126372, iLocal_303);
	unk_0x0E2400AB9174FA81(1, iLocal_302, -1533126372);
	unk_0x0E2400AB9174FA81(1, -1533126372, iLocal_302);
	while (true)
	{
		unk_0x1A6DFFFEEC27BF4F("M_FINPRB", 0);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 230, false);
		}
		func_206();
		if (iLocal_317 == 0)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				func_205(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1)
		{
			func_201();
		}
		func_198();
		func_191();
		func_183();
		func_178();
		func_175();
		switch (iLocal_28)
		{
			case 0:
				func_174();
				break;
			
			case 1:
				func_171();
				break;
			
			case 2:
				func_147();
				break;
			
			case 3:
				func_145();
				break;
			
			case 4:
				func_116();
				break;
			
			case 5:
				func_21();
				break;
			
			case 6:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_62)
	{
		case 0:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(1);
			unk_0xC92DB9682A650680("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_136 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_136 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_136 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_136 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_136 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_136 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_136 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_136 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_136);
			}
			iLocal_62 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_209();
			}
			break;
	}
}

int func_2()
{
	if (Global_98744 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
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

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
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

void func_6(int iParam0)
{
	if (Global_111638.f_9080 || func_208(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_7(int iParam0)
{
	func_12();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_11(iVar1, 1);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	func_8(&(Global_111638.f_2358.f_539), iVar1);
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

void func_8(var uParam0, int iParam1)
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
			if (!func_10(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
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

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
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
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
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

void func_11(int iParam0, bool bParam1)
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

void func_12()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_14())
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
			switch (func_14())
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

int func_13()
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

int func_14()
{
	func_15();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_15()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_19(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_18(unk_0x16F2683693E537C9());
			if (func_17(iVar0) && (!func_16(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_17(Global_111638.f_2358.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1798[iParam0];
}

void func_21()
{
	func_175();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
		if (func_34(iLocal_46, 0))
		{
			if (!func_33(iLocal_46))
			{
				while (!func_32(iLocal_46, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_48, 0))
		{
			if (!func_33(iLocal_48))
			{
				while (!func_32(iLocal_48, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_47, 0))
		{
			if (!func_33(iLocal_47))
			{
				while (!func_32(iLocal_47, 0))
				{
					wait(0);
				}
			}
		}
		if (unk_0x757EF87A33649210())
		{
			if (!func_31())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			func_28(iLocal_33, -1, 1);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_34(iLocal_48, 0))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_48, iLocal_33, 0))
						{
							unk_0xA3BF0AA5A2608191(iLocal_48);
							unk_0x0A94A109271BE75A(iLocal_48);
							unk_0x11AD11297DC58CC7(iLocal_48, true);
							unk_0x45F014B3D0466974(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_47, 0))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_47, iLocal_33, 0))
						{
							unk_0xA3BF0AA5A2608191(iLocal_47);
							unk_0x0A94A109271BE75A(iLocal_47);
							unk_0x11AD11297DC58CC7(iLocal_47, true);
							unk_0x45F014B3D0466974(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_34(iLocal_46, 0))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_46, iLocal_33, 0))
						{
							unk_0xA3BF0AA5A2608191(iLocal_46);
							unk_0x0A94A109271BE75A(iLocal_46);
							unk_0x11AD11297DC58CC7(iLocal_46, true);
							unk_0x45F014B3D0466974(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_47, 0))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_47, iLocal_33, 0))
						{
							unk_0xA3BF0AA5A2608191(iLocal_47);
							unk_0x0A94A109271BE75A(iLocal_47);
							unk_0x11AD11297DC58CC7(iLocal_47, true);
							unk_0x45F014B3D0466974(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_34(iLocal_46, 0))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_46, iLocal_33, 0))
						{
							unk_0xA3BF0AA5A2608191(iLocal_46);
							unk_0x0A94A109271BE75A(iLocal_46);
							unk_0x11AD11297DC58CC7(iLocal_46, true);
							unk_0x45F014B3D0466974(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_48, 0))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_48, iLocal_33, 0))
						{
							unk_0xA3BF0AA5A2608191(iLocal_48);
							unk_0x0A94A109271BE75A(iLocal_48);
							unk_0x11AD11297DC58CC7(iLocal_48, true);
							unk_0x45F014B3D0466974(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
				{
					unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), iLocal_33, 0);
				}
			}
		}
		settimerb(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(iLocal_48, 0))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_48, iLocal_33, 0))
							{
								if (func_33(iLocal_48))
								{
									if (func_25(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_34(iLocal_47, 0))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_47, iLocal_33, 0))
							{
								if (func_33(iLocal_47))
								{
									if (func_25(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_34(iLocal_46, 0))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_46, iLocal_33, 0))
							{
								if (func_33(iLocal_46))
								{
									if (func_25(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_34(iLocal_47, 0))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_47, iLocal_33, 0))
							{
								if (func_33(iLocal_47))
								{
									if (func_25(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_34(iLocal_46, 0))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_46, iLocal_33, 0))
							{
								if (func_33(iLocal_46))
								{
									if (func_25(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_34(iLocal_48, 0))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_48, iLocal_33, 0))
							{
								if (func_33(iLocal_48))
								{
									if (func_25(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (iLocal_318 == 1 && iLocal_319 == 1)
					{
						iLocal_320 = 1;
					}
				}
				else if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 1))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					settimerb(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
			{
				unk_0x05CA0E7946B27A19(iLocal_33, 0);
				unk_0x71EDC33E5A423750(iLocal_33, 2);
				unk_0x1E9649458B15960F(iLocal_33, true);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_32))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_32, 0))
			{
				unk_0x1E9649458B15960F(iLocal_32, true);
			}
		}
		iLocal_62 = 4;
	}
	if (iLocal_62 == 4)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0, 0);
	func_209();
}

void func_23(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_208(0) && Global_76868.f_1 == 1) && func_24(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_208(0))
	{
		iVar0 = func_13();
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

int func_24(int iParam0)
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

int func_25(int iParam0)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_94598, iVar0))
		{
			return 0;
		}
		unk_0x0674E58A79778E99(&Global_94598, iVar0);
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_96222[func_27(iParam0)];
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
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
		func_29(0);
	}
}

void func_29(int iParam0)
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

int func_30()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

int func_32(int iParam0, int iParam1)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94598, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				return 0;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94597, iVar0))
		{
			unk_0xDAB3108F02A4255A(iParam0, 0, 0);
			unk_0xE8832A9E16A57A1F(iParam0, 0, 1);
			unk_0x5D96D8530B3D0904(&Global_94598, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94598, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	return 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				return 0;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_94597, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	iLocal_396 = 0;
	iLocal_456 = 0;
	unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
	unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0);
	}
	func_114();
	unk_0x790015DC92C918E2();
	func_113();
	func_112();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	unk_0x2FB9A57162E54BAB(0f);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 856,9501f, -1573,177f, 29,4751f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 288,3586f);
			break;
		
		case 3:
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 856,9501f, -1573,177f, 29,4751f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 288,3586f);
			break;
		
		case 4:
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
					{
						unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
					{
						unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_108();
			if (func_107() && func_104(7f, 7f, 7f, 1))
			{
				func_102();
				while (!func_101())
				{
					wait(0);
				}
				iLocal_34 = func_38(818,8139f, -1610,406f, 30,7951f, 264,412f);
			}
			unk_0x51B096AAC60548C1(0,01f);
			break;
		
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_108();
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
				{
					unk_0xA47B46945FF6DE74(iLocal_33, 89,2131f, -596,9456f, 30,6224f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iLocal_33, 161,1163f);
				}
			}
			unk_0x536F1BE96C726C4B(41f, -615f, 30f, 50f, 1, 1, 0, false);
			break;
		
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_108();
			unk_0x536F1BE96C726C4B(41f, -615f, 30f, 50f, 1, 1, 0, false);
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
				{
					unk_0xA47B46945FF6DE74(iLocal_33, 28,4065f, -608,9371f, 30,6293f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iLocal_33, 70,7778f);
				}
			}
			unk_0x523BCC9DC80CD82F(-681004504);
			while (!unk_0xB87F6CF6E5628C67(-681004504))
			{
				wait(0);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_49))
			{
				iLocal_49 = unk_0x36F2404464202779(26, -681004504, 64,904f, -617,9949f, 30,7028f, 223,555f, 1, true);
				unk_0x71199B01895C6202(-681004504);
				unk_0x4E885A246A9D983A(iLocal_49, 324, true);
			}
			break;
	}
}

int func_38(vector3 vParam0, float fParam3)
{
	return func_39(&(Global_102203.f_2890), vParam0, fParam3, 0);
}

int func_39(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (func_100(uParam0))
	{
		if (func_99(vParam1, 0f, 0f, 0f, 0))
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
		if (!func_99(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
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
		if (!func_99(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_99(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1)
{
	if (func_17(iParam0))
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
					if ((!bParam4 || func_99(vParam1, 0f, 0f, 0f, 0)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(uVar1[iVar6], true), true) < 10f)
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
	if (func_100(uParam0))
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

bool func_99(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_100(var uParam0)
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

bool func_101()
{
	return func_98(&(Global_102203.f_2890));
}

void func_102()
{
	func_103(&(Global_102203.f_2890));
}

void func_103(var uParam0)
{
	if (func_100(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

int func_104(vector3 vParam0, int iParam3)
{
	return func_105(Global_102203.f_2890.f_12.f_66, vParam0, iParam3);
}

int func_105(int iParam0, vector3 vParam1, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		vParam1 = { func_106() };
	}
	unk_0xA6B02C1DB14DDA13(iParam0, &vVar0, &vVar3);
	if ((vVar3.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar3.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar3.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_106()
{
	return 2,55f, 5,665f, 2,55f;
}

int func_107()
{
	return func_100(&(Global_102203.f_2890));
}

void func_108()
{
	unk_0x523BCC9DC80CD82F(-1637149482);
	unk_0x523BCC9DC80CD82F(569305213);
	unk_0x523BCC9DC80CD82F(-673538407);
	unk_0x523BCC9DC80CD82F(-681004504);
	unk_0x523BCC9DC80CD82F(2072156101);
	while ((((!unk_0xB87F6CF6E5628C67(-1637149482) || !unk_0xB87F6CF6E5628C67(569305213)) || !unk_0xB87F6CF6E5628C67(-673538407)) || !unk_0xB87F6CF6E5628C67(-681004504)) || !unk_0xB87F6CF6E5628C67(2072156101))
	{
		wait(0);
	}
	if (!unk_0xC844350D5D58C99A(iLocal_32))
	{
		if (unk_0xC844350D5D58C99A(Global_95241[1]))
		{
			unk_0x73270B3C9CC833FD(Global_95241[1], true, 1);
			iLocal_32 = Global_95241[1];
			unk_0x2F625BED8BF7F26A(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0x122AAB0B1D6F55AD(-1637149482, 919,303f, -1553,88f, 29,7789f, 167,1917f, 1, 1, 0);
			unk_0x2F625BED8BF7F26A(iLocal_32);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_33))
	{
		if (unk_0xC844350D5D58C99A(Global_95241[2]))
		{
			unk_0x73270B3C9CC833FD(Global_95241[2], true, 1);
			iLocal_33 = Global_95241[2];
			unk_0x44A200C9B6E1CEA6(iLocal_33, true);
			unk_0x71EDC33E5A423750(iLocal_33, 7);
			func_111(iLocal_33, -1);
			func_110(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0x122AAB0B1D6F55AD(569305213, 919,303f, -1553,88f, 29,7789f, 167,1917f, 1, 1, 0);
			unk_0x44A200C9B6E1CEA6(iLocal_33, true);
			unk_0x71EDC33E5A423750(iLocal_33, 7);
			func_111(iLocal_33, -1);
			func_110(iLocal_33, -1);
		}
	}
	unk_0xC74DAD25331A5425(iLocal_33, iLocal_32, 0,5f);
	unk_0x71199B01895C6202(-1637149482);
	unk_0x71199B01895C6202(569305213);
	unk_0x71199B01895C6202(2072156101);
	if (!unk_0xC844350D5D58C99A(iLocal_35[0]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[0]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[0], true, 1);
			iLocal_35[0] = Global_95241.f_9[0];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0], iLocal_302);
			func_109(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = unk_0x36F2404464202779(26, -673538407, 912,34f, -1543,297f, 29,6469f, 16,169f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0], iLocal_302);
			if (unk_0x4742C50E93110B10(912,3f, -1542,6f, 30,4f, 3f, 0))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0], 912,3f, -1542,6f, 30,4f, 5f, 0);
			}
			unk_0x11AD11297DC58CC7(iLocal_35[0], true);
			func_109(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[1]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[1]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[1], true, 1);
			iLocal_35[1] = Global_95241.f_9[1];
			unk_0x6DF7BF67E86AAE86(iLocal_35[1], iLocal_302);
			func_109(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = unk_0x36F2404464202779(26, -673538407, 917,5028f, -1517,401f, 29,9673f, 158,5738f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_35[1], iLocal_302);
			if (unk_0x4742C50E93110B10(917,5028f, -1517,401f, 29,9673f, 3f, 0))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[1], 917,5028f, -1517,401f, 29,9673f, 5f, 0);
			}
			func_109(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[1], true);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[2]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[2]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[2], true, 1);
			iLocal_35[2] = Global_95241.f_9[2];
			unk_0x6DF7BF67E86AAE86(iLocal_35[2], iLocal_302);
			func_109(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = unk_0x36F2404464202779(26, -673538407, 869,6423f, -1541,423f, 29,2516f, 346,9848f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_35[2], iLocal_302);
			if (unk_0x4742C50E93110B10(869,6423f, -1541,423f, 29,2516f, 3f, 0))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[2], 869,6423f, -1541,423f, 29,2516f, 5f, 0);
			}
			func_109(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[2], true);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[3]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[3]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[3], true, 1);
			iLocal_35[3] = Global_95241.f_9[3];
			unk_0x6DF7BF67E86AAE86(iLocal_35[3], iLocal_302);
			func_109(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = unk_0x36F2404464202779(26, -673538407, 884,3046f, -1573,188f, 29,8247f, 182,9722f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_35[3], iLocal_302);
			if (unk_0x4742C50E93110B10(884,3046f, -1573,188f, 29,8247f, 3f, 0))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[3], 884,3046f, -1573,188f, 29,8247f, 5f, 0);
			}
			func_109(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[3], true);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[4]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[4]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[4], true, 1);
			iLocal_35[4] = Global_95241.f_9[4];
			unk_0x6DF7BF67E86AAE86(iLocal_35[4], iLocal_302);
			func_109(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = unk_0x36F2404464202779(26, -673538407, 903,8805f, -1575,02f, 29,8327f, 308,1952f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_35[4], iLocal_302);
			if (unk_0x4742C50E93110B10(903,8805f, -1575,02f, 29,8327f, 3f, 0))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[4], 903,8805f, -1575,02f, 29,8327f, 5f, 0);
			}
			func_109(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[4], true);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[5]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[5]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[5], true, 1);
			iLocal_35[5] = Global_95241.f_9[5];
			unk_0x6DF7BF67E86AAE86(iLocal_35[5], iLocal_302);
			func_109(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = unk_0x36F2404464202779(26, -673538407, 906,2186f, -1575,108f, 29,8125f, 55,9906f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_35[5], iLocal_302);
			if (unk_0x4742C50E93110B10(906,2186f, -1575,108f, 29,8125f, 3f, 0))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[5], 906,2186f, -1575,108f, 29,8125f, 5f, 0);
			}
			func_109(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_35[5], true);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[6]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[8]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[8], true, 1);
			iLocal_35[6] = Global_95241.f_9[8];
			unk_0x6DF7BF67E86AAE86(iLocal_35[6], iLocal_302);
			func_109(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x11AD11297DC58CC7(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = unk_0x36F2404464202779(26, -673538407, 889,285f, -1561,485f, 29,6539f, 22,2456f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_35[6], iLocal_302);
			if (unk_0x4742C50E93110B10(889,285f, -1561,485f, 29,6539f, 3f, 0))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[6], 889,285f, -1561,485f, 29,6539f, 5f, 0);
			}
			func_109(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x11AD11297DC58CC7(iLocal_35[6], true);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_43[0]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[6]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[6], true, 1);
			iLocal_43[0] = Global_95241.f_9[6];
			unk_0x6DF7BF67E86AAE86(iLocal_43[0], iLocal_303);
			func_109(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_43[0], true);
			unk_0x262EF6C6306BEA6C(iLocal_43[0], 453432689, 100, false, false);
			unk_0x4F39CC3882DD074E(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_43[0] = unk_0x36F2404464202779(26, -681004504, 863,1551f, -1564,572f, 29,3231f, 130,7946f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_43[0], iLocal_303);
			func_109(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_43[0], true);
			unk_0x262EF6C6306BEA6C(iLocal_43[0], 453432689, 100, false, false);
			unk_0x4F39CC3882DD074E(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_43[1]))
	{
		if (unk_0xC844350D5D58C99A(Global_95241.f_9[7]))
		{
			unk_0x73270B3C9CC833FD(Global_95241.f_9[7], true, 1);
			iLocal_43[1] = Global_95241.f_9[7];
			unk_0x6DF7BF67E86AAE86(iLocal_43[1], iLocal_303);
			func_109(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_43[1], true);
			unk_0x262EF6C6306BEA6C(iLocal_43[1], 453432689, 100, false, false);
			unk_0x4F39CC3882DD074E(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_43[1] = unk_0x36F2404464202779(26, -681004504, 940,2881f, -1573,877f, 29,3866f, 269,1856f, 1, true);
			unk_0x6DF7BF67E86AAE86(iLocal_43[1], iLocal_303);
			func_109(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x11AD11297DC58CC7(iLocal_43[1], true);
			unk_0x262EF6C6306BEA6C(iLocal_43[1], 453432689, 100, false, false);
			unk_0x4F39CC3882DD074E(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x71199B01895C6202(-673538407);
	unk_0x71199B01895C6202(-681004504);
}

void func_109(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x9FA191B317572861(iParam0, fParam1);
		unk_0xB21189153A095FA1(iParam0, fParam2);
		unk_0xCF443519BC24A3CB(iParam0, (fParam3 / 2f));
		unk_0x8979D9784F39DF46(iParam0, fParam4);
		unk_0xBEC9D6BBD21A735F(iParam0, fParam5);
	}
}

void func_110(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

void func_111(int iParam0, int iParam1)
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

void func_112()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_63]) && unk_0x9C77D2D0559097F0(iLocal_35[iLocal_63], 1))
		{
			unk_0xEBA53F35D0085654(&(iLocal_35[iLocal_63]));
		}
		iLocal_63++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_43[0]) && unk_0x9C77D2D0559097F0(iLocal_43[0], 1))
	{
		unk_0xEBA53F35D0085654(&(iLocal_43[0]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_43[1]) && unk_0x9C77D2D0559097F0(iLocal_43[1], 1))
	{
		unk_0xEBA53F35D0085654(&(iLocal_43[1]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_46) && unk_0x9C77D2D0559097F0(iLocal_46, 1))
	{
		unk_0xEBA53F35D0085654(&iLocal_46);
	}
	if (unk_0xC844350D5D58C99A(iLocal_47) && unk_0x9C77D2D0559097F0(iLocal_47, 1))
	{
		unk_0xEBA53F35D0085654(&iLocal_47);
	}
	if (unk_0xC844350D5D58C99A(iLocal_48) && unk_0x9C77D2D0559097F0(iLocal_48, 1))
	{
		unk_0xEBA53F35D0085654(&iLocal_48);
	}
	if (unk_0xC844350D5D58C99A(iLocal_49) && unk_0x9C77D2D0559097F0(iLocal_49, 1))
	{
		unk_0xEBA53F35D0085654(&iLocal_49);
	}
	if (!func_31())
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 519,1906f, -2980,994f, 5,0443f, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 270,1911f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_32) && unk_0x9C77D2D0559097F0(iLocal_32, 1))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_32);
	}
	if (unk_0xC844350D5D58C99A(Global_95241[3]))
	{
		unk_0x73270B3C9CC833FD(Global_95241[3], true, 0);
		unk_0xA954465BA6FDEFE2(&(Global_95241[3]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_33) && unk_0x9C77D2D0559097F0(iLocal_33, 1))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_33);
	}
	unk_0x8D17794CE3273D70("cellphone@str");
	unk_0x8D17794CE3273D70("misscarsteal4@director_grip");
	unk_0x38DC636F3D2D2FA8("FHPRB_START");
	unk_0x38DC636F3D2D2FA8("FHPRB_TRUCK");
	unk_0x38DC636F3D2D2FA8("FHPRB_COPS");
	unk_0x38DC636F3D2D2FA8("FHPRB_LOST");
	unk_0x38DC636F3D2D2FA8("FHPRB_STOP");
	unk_0x536F1BE96C726C4B(889,5f, -1553,8f, 30f, 150f, 1, 0, 0, false);
}

void func_113()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_58))
	{
		unk_0x142CC44DB769B57E(&iLocal_58);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_59))
	{
		unk_0x142CC44DB769B57E(&iLocal_59);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_60))
	{
		unk_0x142CC44DB769B57E(&iLocal_60);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_61))
	{
		unk_0x142CC44DB769B57E(&iLocal_61);
	}
}

void func_114()
{
	Global_19671 = 0;
	func_115();
}

void func_115()
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

void func_116()
{
	func_139();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		iLocal_305 = 0;
		iLocal_314 = 0;
		iLocal_469 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		unk_0x34D79252800B23FF(5);
		unk_0x8D17794CE3273D70("cellphone@str");
		unk_0x8D17794CE3273D70("misscarsteal4@director_grip");
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			unk_0x82E51BCA72537B6C(800);
		}
		unk_0x51B096AAC60548C1(1f);
		unk_0x8B4C4CA774181102(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		func_138(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_138(&uLocal_137, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_138(&uLocal_137, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_138(&uLocal_137, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_123(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0x8B4C4CA774181102(5f, 5f, 4);
					settimera(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_123(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0x8B4C4CA774181102(5f, 5f, 4);
					settimera(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_123(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0x8B4C4CA774181102(5f, 5f, 4);
					settimera(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_59))
		{
			if (!func_122())
			{
				if (timera() > 10500)
				{
					iLocal_59 = func_120(vLocal_116, 1);
				}
			}
		}
		if (func_122())
		{
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
				{
					if (unk_0x6CFEA4CFD9C496C8(iLocal_33))
					{
						if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_116, 4f, 4f, 2f, true, true, 2))
						{
							if (func_118(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 4f, 3, 0,5f, 0, 1, 0))
							{
								unk_0xC92DB9682A650680("FHPRB_STOP");
								if (unk_0xE4EDC4B0E92C078B(iLocal_59))
								{
									unk_0x142CC44DB769B57E(&iLocal_59);
								}
								unk_0x8B4C4CA774181102(5f, 5f, 4);
								func_117(0, -1);
								iLocal_62 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_117(bool bParam0, int iParam1)
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

int func_118(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0, 71, 1);
	unk_0x38C3A68D7861DCFD(0, 72, 1);
	unk_0x38C3A68D7861DCFD(0, 76, 1);
	unk_0x38C3A68D7861DCFD(0, 73, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 86, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 138, 1);
	unk_0x38C3A68D7861DCFD(0, 136, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 107, 1);
	unk_0x38C3A68D7861DCFD(0, 110, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 87, 1);
	unk_0x38C3A68D7861DCFD(0, 88, 1);
	unk_0x38C3A68D7861DCFD(0, 113, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 117, 1);
	unk_0x38C3A68D7861DCFD(0, 118, 1);
	unk_0x38C3A68D7861DCFD(0, 119, 1);
	unk_0x38C3A68D7861DCFD(0, 352, 1);
	unk_0x38C3A68D7861DCFD(0, 131, 1);
	unk_0x38C3A68D7861DCFD(0, 132, 1);
	unk_0x38C3A68D7861DCFD(0, 123, 1);
	unk_0x38C3A68D7861DCFD(0, 126, 1);
	unk_0x38C3A68D7861DCFD(0, 129, 1);
	unk_0x38C3A68D7861DCFD(0, 130, 1);
	unk_0x38C3A68D7861DCFD(0, 133, 1);
	unk_0x38C3A68D7861DCFD(0, 134, 1);
	unk_0xCFAE3195DD6AE715();
	func_119(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_119(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0);
			}
		}
	}
}

int func_120(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_121(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_122()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_123(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_137(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_124(sParam3, iParam4, bParam8);
}

int func_124(char* sParam0, int iParam1, bool bParam2)
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
					func_115();
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
		if (func_136(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_135();
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
				func_134();
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
				if (func_133())
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
			if (func_132())
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
			func_131();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_130();
		func_125();
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
		func_115();
	}
	return 0;
}

void func_125()
{
	if (!func_126())
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

int func_126()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_129())
	{
		return 0;
	}
	if (func_127(unk_0xD803B885F5E47A62()))
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

bool func_127(int iParam0)
{
	return func_128(iParam0, 20);
}

bool func_128(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_129()
{
	return -1;
}

void func_130()
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

void func_131()
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

int func_132()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_133()
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

void func_134()
{
	if (func_16(14))
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
		Global_19486 = func_14();
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

void func_135()
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

bool func_136(int iParam0, int iParam1)
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

void func_137(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_138(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_139()
{
	if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
		{
			if (unk_0x6CFEA4CFD9C496C8(iLocal_33))
			{
				if (func_144("HELP_1"))
				{
					unk_0xA37A90C62806D848(1);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_58))
				{
					unk_0x142CC44DB769B57E(&iLocal_58);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_61))
				{
					if (iLocal_395 == 1)
					{
						if (unk_0x1C0640BA9A7327B3() < iLocal_109 + 7500)
						{
							unk_0x790015DC92C918E2();
						}
					}
					unk_0x142CC44DB769B57E(&iLocal_61);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
					{
						if (iLocal_469 == 0)
						{
							unk_0x38DC636F3D2D2FA8("FHPRB_COPS");
							unk_0xC92DB9682A650680("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1)
						{
							if (unk_0x1C0640BA9A7327B3() < iLocal_110 + 7500)
							{
								unk_0x790015DC92C918E2();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3)
						{
							if (!unk_0xE4EDC4B0E92C078B(iLocal_59))
							{
								iLocal_59 = func_120(vLocal_116, 1);
							}
							if (iLocal_305 == 0)
							{
								if (!unk_0xD17F06053799A7CA())
								{
									func_143("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_59))
						{
							unk_0x142CC44DB769B57E(&iLocal_59);
						}
						if (iLocal_314 == 0)
						{
							unk_0x790015DC92C918E2();
							func_143("GOD_4", 7500, -1);
							unk_0xC92DB9682A650680("FHPRB_COPS");
							iLocal_110 = unk_0x1C0640BA9A7327B3();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_58))
				{
					unk_0x142CC44DB769B57E(&iLocal_58);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_59))
				{
					unk_0x142CC44DB769B57E(&iLocal_59);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_32, 0))
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_61))
					{
						iLocal_61 = func_141(iLocal_32, 0, 0);
						unk_0x321E019A46034F39(iLocal_61, true);
						if (unk_0xD17F06053799A7CA())
						{
							unk_0x790015DC92C918E2();
						}
						if (iLocal_395 == 0)
						{
							func_143("GOD_6", 7500, -1);
							iLocal_109 = unk_0x1C0640BA9A7327B3();
							iLocal_395 = 1;
						}
						if (!func_144("HELP_1"))
						{
							func_140("HELP_1");
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
			if (unk_0xE4EDC4B0E92C078B(iLocal_59))
			{
				unk_0x142CC44DB769B57E(&iLocal_59);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_58))
				{
					iLocal_58 = func_141(iLocal_33, 0, 0);
					unk_0x321E019A46034F39(iLocal_58, true);
				}
			}
			if (iLocal_315 == 0)
			{
				unk_0x790015DC92C918E2();
				func_143("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

void func_140(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_141(int iParam0, bool bParam1, bool bParam2)
{
	return func_142(iParam0, !bParam1, bParam2);
}

int func_142(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_143(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_144(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_145()
{
	if (iLocal_62 > 1)
	{
		func_139();
	}
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_404[0] = 0;
		iLocal_404[1] = 0;
		iLocal_407[0] = 0;
		iLocal_407[1] = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_416 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_433[0] = 0;
		iLocal_433[1] = 0;
		iLocal_436[0] = 0;
		iLocal_436[1] = 0;
		iLocal_439[0] = 0;
		iLocal_439[1] = 0;
		iLocal_442[0] = 0;
		iLocal_442[1] = 0;
		iLocal_445[0] = 0;
		iLocal_445[1] = 0;
		iLocal_448[0] = 0;
		iLocal_448[1] = 0;
		iLocal_451[0] = 0;
		iLocal_451[1] = 0;
		iLocal_455 = 0;
		iLocal_458 = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_468 = 0;
		iLocal_482 = 0;
		iLocal_315 = 0;
		iLocal_316 = 0;
		iLocal_321 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_417 = 0;
		iLocal_465 = 0;
		iLocal_483 = 0;
		iLocal_487 = 0;
		iLocal_454 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		iLocal_63 = 0;
		while (iLocal_63 <= 6)
		{
			iLocal_306[iLocal_63] = 0;
			iLocal_355[iLocal_63] = 0;
			iLocal_371[iLocal_63] = 0;
			iLocal_379[iLocal_63] = 0;
			iLocal_363[iLocal_63] = 0;
			iLocal_63++;
		}
		unk_0x3F423BF5B8125A50("cellphone@str");
		unk_0x3F423BF5B8125A50("misscarsteal4@director_grip");
		if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_58))
			{
				iLocal_58 = func_141(iLocal_33, 0, 0);
				unk_0x321E019A46034F39(iLocal_58, true);
			}
		}
		unk_0x34D79252800B23FF(0);
		if (unk_0x757EF87A33649210())
		{
			if (!func_31())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			if (unk_0xC844350D5D58C99A(iLocal_34))
			{
				func_28(iLocal_34, -1, 1);
				unk_0x046C362CF15F1935(&iLocal_34);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(800);
		}
		unk_0xC92DB9682A650680("FHPRB_START");
		unk_0x536F1BE96C726C4B(43,5f, -615,8f, 32,4f, 50f, 1, 0, 0, false);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!unk_0xD17F06053799A7CA())
			{
				unk_0x8B4C4CA774181102(5f, 8f, 4);
				func_143("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
			{
				unk_0xC92DB9682A650680("FHPRB_TRUCK");
				if (unk_0xE4EDC4B0E92C078B(iLocal_58))
				{
					unk_0x142CC44DB769B57E(&iLocal_58);
				}
				func_146(656, 0);
				unk_0x51B096AAC60548C1(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
			{
				if (unk_0x6CFEA4CFD9C496C8(iLocal_33))
				{
					if (func_144("HELP_1"))
					{
						unk_0xA37A90C62806D848(1);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_58))
					{
						unk_0x142CC44DB769B57E(&iLocal_58);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_61))
					{
						unk_0x142CC44DB769B57E(&iLocal_61);
					}
					if (unk_0x0EB28750412C3A5A(vLocal_119, vLocal_132, true) < 100f)
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (unk_0x1C0640BA9A7327B3() < iLocal_110 + 7500)
								{
									unk_0x790015DC92C918E2();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0)
							{
								unk_0x8B4C4CA774181102(5f, 8f, 4);
								func_143("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							unk_0x8B4C4CA774181102(5f, 8f, 4);
							unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = unk_0x1C0640BA9A7327B3();
							func_143("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_58))
					{
						unk_0x142CC44DB769B57E(&iLocal_58);
					}
					if (unk_0xDF1306B443CD3D15(iLocal_32, 0))
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_61))
						{
							iLocal_61 = func_141(iLocal_32, 0, 0);
							unk_0x321E019A46034F39(iLocal_61, true);
							if (unk_0xD17F06053799A7CA())
							{
								unk_0x790015DC92C918E2();
							}
							if (iLocal_395 == 0)
							{
								func_143("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_144("HELP_1"))
							{
								func_140("HELP_1");
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
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_58))
					{
						iLocal_58 = func_141(iLocal_33, 0, 0);
						unk_0x321E019A46034F39(iLocal_58, true);
					}
				}
				if (iLocal_315 == 0)
				{
					unk_0x790015DC92C918E2();
					func_143("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

void func_146(int iParam0, bool bParam1)
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

void func_147()
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
		func_170();
		func_108();
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			unk_0x82E51BCA72537B6C(800);
		}
		if (unk_0xC844350D5D58C99A(Global_95241[3]))
		{
			if (unk_0xDF1306B443CD3D15(Global_95241[3], 0))
			{
				if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(Global_95241[3])))
				{
					unk_0x73270B3C9CC833FD(Global_95241[3], true, 1);
					func_149(1,0095f, -631,9655f, 34,7259f, 349,0681f, 0, 145);
				}
				if (((unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(Global_95241[3])) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(Global_95241[3]))) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(Global_95241[3]))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(Global_95241[3])))
				{
					unk_0x73270B3C9CC833FD(Global_95241[3], true, 1);
					func_149(49,0052f, -599,5534f, 30,6299f, 158,5544f, 0, 145);
				}
			}
		}
		func_148(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

void func_148(int iParam0)
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

void func_149(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (unk_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_169(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_166(unk_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &uVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = uVar3;
					}
				}
				func_150(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_150(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
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
		func_165(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_99(vParam1, 0f, 0f, 0f, 0))
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
		func_163(iParam5, &Var0, vParam1, fParam4, func_61(iParam0));
		func_151(iParam5, iParam0, 0);
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
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
				Global_111638.f_32744.f_4801 = func_152();
			}
			if (iParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_169(iParam0);
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

var func_152()
{
	func_162(&uVar0, unk_0x4460E481B9E33ADA());
	func_161(&uVar0, unk_0x8D199E381D262EEF());
	func_160(&uVar0, unk_0xD8A54335F18763BA());
	func_155(&uVar0, unk_0x972A296334C9D57B());
	func_154(&uVar0, unk_0x118229AD063C3C1D());
	func_153(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_153(var uParam0, int iParam1)
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

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)
{
	iVar0 = func_159(*uParam0);
	iVar1 = func_157(*uParam0);
	if (iParam1 < 1 || iParam1 > func_156(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_156(int iParam0, int iParam1)
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

var func_157(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_158(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_158(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_159(var uParam0)
{
	return uParam0 & 15;
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_163(int iParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6)
{
	if (func_71(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 10))
		{
			func_164(iParam0);
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

void func_164(int iParam0)
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

void func_165(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_164(iParam0);
	func_64(iParam0, 0);
}

int func_166(vector3 vParam0, int iParam3, var uParam4, var uParam5)
{
	iVar0 = func_167(vParam0, iParam3, 1);
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

int func_167(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_168(iVar0) || iParam4 == 0)
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

bool func_168(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

int func_169(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

void func_170()
{
	Global_92922 = 1;
}

void func_171()
{
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
	unk_0x51B096AAC60548C1(0,01f);
	iLocal_53 = unk_0x7D6CA5F52B3748BF(861,6f, -1599,7f, 27,9f, 961,8f, -1476,4f, 49,7f, 0, 1, 1, 1);
	iLocal_54 = unk_0x7D6CA5F52B3748BF(851,2f, -1598,2f, 29,7f, 855,7f, -1587,1f, 33f, 0, 1, 1, 1);
	iLocal_55 = unk_0x7D6CA5F52B3748BF(859,4f, -1569,6f, 32,3f, 865,4f, -1561f, 28,7f, 0, 1, 1, 1);
	iLocal_56 = unk_0x7D6CA5F52B3748BF(939f, -1576,8f, 33f, 943,8f, -1571,3f, 28,9f, 0, 1, 1, 1);
	iLocal_51 = unk_0x7D6CA5F52B3748BF(5,4f, -588f, 39,1f, 57,4f, -678,8f, 25,4f, 0, 1, 1, 1);
	iLocal_52 = unk_0x7D6CA5F52B3748BF(50,9f, -641,6f, 37,7f, 81,1f, -608,4f, 29,5f, 0, 1, 1, 1);
	if (func_30())
	{
		if (Global_92921 == 1)
		{
			func_173(28,4065f, -608,9371f, 30,6293f, 70,7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_172() == 0)
		{
			if (func_107() && func_104(7f, 7f, 7f, 1))
			{
				func_173(818,8139f, -1610,406f, 30,7951f, 264,412f, 1, 0);
			}
			else
			{
				func_173(825,5603f, -1605,825f, 30,9548f, 312,5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_208(0))
	{
		iLocal_304 = 1;
		iLocal_483 = 1;
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_62 = 0;
		iLocal_28 = 2;
	}
}

int func_172()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

void func_173(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_30())
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
		func_29(1);
	}
}

void func_174()
{
	if (!func_30())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_175()
{
	if (!unk_0xC844350D5D58C99A(iLocal_49))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 45f, -616,2f, 30,8f, true) < 150f)
		{
			unk_0x523BCC9DC80CD82F(-681004504);
			if (unk_0xB87F6CF6E5628C67(-681004504))
			{
				iLocal_49 = unk_0x36F2404464202779(26, -681004504, 64,904f, -617,9949f, 30,7028f, 223,555f, 1, true);
				unk_0x4E885A246A9D983A(iLocal_49, 324, true);
			}
			unk_0x71199B01895C6202(-681004504);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_49))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49))
		{
			if (unk_0x4742C50E93110B10(65,2f, -617,2f, 30,8f, 5f, 0))
			{
				if (iLocal_456 == 0)
				{
					if (unk_0x0A059E0DB9253280(iLocal_49))
					{
						unk_0xA3BF0AA5A2608191(iLocal_49);
					}
					else
					{
						unk_0x327AAEE25F323797(iLocal_49);
					}
					unk_0x4A35AD9FC803369E(iLocal_49, 65,2f, -617,2f, 31f, 2f, 0);
					unk_0xFADC0A217229F6B5(iLocal_49, 1);
					iLocal_113 = unk_0x1C0640BA9A7327B3();
					iLocal_456 = 1;
				}
				else if (unk_0x1C0640BA9A7327B3() > iLocal_113 + 5000)
				{
					if (!unk_0xACCBB8E1BDF4D6BE(iLocal_49))
					{
						iLocal_456 = 0;
					}
				}
			}
			if (func_177(unk_0x16F2683693E537C9(), iLocal_49, 1) < 20f)
			{
				if (iLocal_421 == 0)
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_49, unk_0x16F2683693E537C9(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_49, unk_0x16F2683693E537C9(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 45f, -616,2f, 30,8f, true) < 50f)
	{
		if (iLocal_457 == 0)
		{
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			unk_0x8010B3127F058F0F(iLocal_114, -1184516519, 61f, -633f, 32f, 1, 1, 0);
			unk_0x8010B3127F058F0F(iLocal_115, -1184516519, 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				if (vLocal_119.x > 35f)
				{
					if (fLocal_135 < 1f)
					{
						fLocal_135 = (fLocal_135 + 0,02f);
					}
					else
					{
						fLocal_135 = 1f;
					}
					if (fLocal_135 <= 1f)
					{
						unk_0x838CC054A9235BEC(iLocal_114, fLocal_135, 0, 1);
						unk_0x838CC054A9235BEC(iLocal_115, fLocal_135, 0, 1);
						unk_0x1BA7FCEAFCE8D46E(iLocal_114, 4, 0, 1);
						unk_0x1BA7FCEAFCE8D46E(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
				if (vLocal_119.x < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 = (fLocal_135 - 0,02f);
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						unk_0x838CC054A9235BEC(iLocal_114, fLocal_135, 0, 1);
						unk_0x838CC054A9235BEC(iLocal_115, fLocal_135, 0, 1);
						unk_0x1BA7FCEAFCE8D46E(iLocal_114, 4, 0, 1);
						unk_0x1BA7FCEAFCE8D46E(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
			}
			else if (iLocal_422 == 0)
			{
				if (vLocal_119.x < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 = (fLocal_135 - 0,02f);
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						unk_0x838CC054A9235BEC(iLocal_114, fLocal_135, 0, 1);
						unk_0x838CC054A9235BEC(iLocal_115, fLocal_135, 0, 1);
						unk_0x1BA7FCEAFCE8D46E(iLocal_114, 4, 0, 1);
						unk_0x1BA7FCEAFCE8D46E(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 62,90151f, -638,6329f, 29,9188f, 70,78919f, -617,1338f, 36,91788f, 10,75f, 0, true, 0))
		{
			if (unk_0xC844350D5D58C99A(iLocal_49))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_138(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_176(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0)
						{
							func_138(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_176(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0)
					{
						func_138(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_176(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_137(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_124(sParam2, iParam3, 0);
}

float func_177(int iParam0, int iParam1, bool bParam2)
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

void func_178()
{
	if (!unk_0xD17F06053799A7CA())
	{
		if (!func_182() || !unk_0x04E6B3EAA8742BFA())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x1C0640BA9A7327B3();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 1 && unk_0x1C0640BA9A7327B3() > iLocal_112 + 7000)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_112 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_180())
							{
								if (func_176(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = unk_0x1C0640BA9A7327B3();
									iLocal_430 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_455 == 0)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x1C0640BA9A7327B3();
								iLocal_455 = 1;
							}
						}
					}
					else if (unk_0x1C0640BA9A7327B3() > iLocal_108 + 8000)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_114();
						if (func_180())
						{
							unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
							if (iVar0 != -1569615261 && iVar0 != 0)
							{
								if (func_176(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = unk_0x1C0640BA9A7327B3();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = unk_0x1C0640BA9A7327B3();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = unk_0x1C0640BA9A7327B3();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_77 + 9000)
							{
								if (func_180())
								{
									if (func_176(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_387 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_427 == 1)
					{
						if (iLocal_389 == 0)
						{
							if (iLocal_390 == 1)
							{
								if (func_180())
								{
									if (func_176(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_33))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
								{
									if (func_180())
									{
										if (func_176(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x1C0640BA9A7327B3();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x1C0640BA9A7327B3() > iLocal_78 + 10000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_33))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0))
								{
									if (func_180())
									{
										if (func_176(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = unk_0x1C0640BA9A7327B3();
										}
									}
								}
							}
						}
					}
					if (iLocal_428 == 1)
					{
						if (iLocal_429 == 0)
						{
							if (func_180())
							{
								if (func_176(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_429 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_179()
{
	if (func_14() == 0)
	{
		func_138(&uLocal_137, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_138(&uLocal_137, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_138(&uLocal_137, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_180()
{
	iLocal_66 = 0;
	while (iLocal_66 <= 6)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_66]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_66]))
			{
				iVar0 = func_181(unk_0x16F2683693E537C9(), iLocal_302, 0, 0, -1);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_66] && func_177(unk_0x16F2683693E537C9(), iVar0, 1) < 15f)
				{
					func_138(&uLocal_137, 5, iLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_66++;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_182()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_183()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			unk_0x51B096AAC60548C1(0f);
		}
		else
		{
			unk_0x51B096AAC60548C1(1f);
		}
	}
	func_190();
	if (iLocal_404[0])
	{
		if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f && unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
		{
			if (iLocal_433[0] == 0)
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_43[0], unk_0x16F2683693E537C9(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1)
			{
				if (unk_0xD1960163A3042274(iLocal_43[0], 150319005) != 0 || unk_0xD1960163A3042274(iLocal_43[0], 150319005) != 1)
				{
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1)
		{
			unk_0x0C8C0C840C2D1AD2(iLocal_43[0], unk_0x16F2683693E537C9(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1])
	{
		if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 20f && unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
		{
			if (iLocal_433[1] == 0)
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_43[1], unk_0x16F2683693E537C9(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1)
			{
				if (unk_0xD1960163A3042274(iLocal_43[1], 150319005) != 0 || unk_0xD1960163A3042274(iLocal_43[1], 150319005) != 1)
				{
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1)
		{
			unk_0x0C8C0C840C2D1AD2(iLocal_43[1], unk_0x16F2683693E537C9(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1])
	{
		if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1))
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		else
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	else
	{
		if (iLocal_404[0] && !iLocal_404[1])
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		if (iLocal_404[1] && !iLocal_404[0])
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (unk_0xDA8F5DDC86FE3C26("SCRAP_SECURITY"))
			{
				if (!unk_0x8ED9A0095B69A728("SCRAP_SECURITY"))
				{
					unk_0x2723524E448F4BDD("SCRAP_SECURITY", true);
				}
				if (unk_0x8ED9A0095B69A728("SCRAP_SECURITY"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_43[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
						{
							if (!unk_0x9E834FAC6CCB49FB(iLocal_43[0]))
							{
								if (unk_0x4742C50E93110B10(863,1551f, -1564,572f, 29,3231f, 5f, 1))
								{
									iLocal_105[0] = unk_0x1C0640BA9A7327B3();
									if (!unk_0x94C3EBF41911ED33(iLocal_43[0]))
									{
										if (iLocal_462[0] == 0)
										{
											unk_0x3003D662BC385BD6(iLocal_43[0], 863,1551f, -1564,572f, 29,3231f, 5f, 0);
											iLocal_459[0] = 0;
											iLocal_462[0] = 1;
										}
									}
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_105[0] + 2000)
								{
									if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_43[0], true), 863,1551f, -1564,572f, 29,3231f, true) > 3f)
									{
										if (iLocal_459[0] == 0)
										{
											unk_0x96167B03C5A77156(iLocal_43[0], 863,1551f, -1564,572f, 29,3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[0] = 0;
											iLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_43[1]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
						{
							if (!unk_0x9E834FAC6CCB49FB(iLocal_43[1]))
							{
								if (unk_0x4742C50E93110B10(940,2881f, -1573,877f, 29,3866f, 5f, 1))
								{
									iLocal_105[1] = unk_0x1C0640BA9A7327B3();
									if (!unk_0x94C3EBF41911ED33(iLocal_43[1]))
									{
										if (iLocal_462[1] == 0)
										{
											unk_0x3003D662BC385BD6(iLocal_43[1], 940,2881f, -1573,877f, 29,3866f, 5f, 0);
											iLocal_459[1] = 0;
											iLocal_462[1] = 1;
										}
									}
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_105[1] + 2000)
								{
									if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_43[1], true), 940,2881f, -1573,877f, 29,3866f, true) > 3f)
									{
										if (iLocal_459[1] == 0)
										{
											unk_0x96167B03C5A77156(iLocal_43[1], 940,2881f, -1573,877f, 29,3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_462[1] = 0;
											iLocal_459[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iLocal_43[0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
					{
						if ((func_189(unk_0x16F2683693E537C9()) == -1569615261 || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) || func_188(0))
						{
							if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[0], 100f) || unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
							{
								if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 860,4606f, -1563,58f, 28,81788f, 865,0807f, -1575,088f, 30,93324f, 5,75f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 855,4593f, -1548,228f, 28,27722f, 863,1765f, -1563,288f, 33,31375f, 4,75f, 0, true, 0))
								{
									if (iLocal_451[0] == 0)
									{
										if (!unk_0x7069CC4DE1EA3FAA(iLocal_43[0], unk_0x16F2683693E537C9(), 45f))
										{
											if (!unk_0x0A059E0DB9253280(iLocal_43[0]))
											{
												unk_0x327AAEE25F323797(iLocal_43[0]);
											}
											else
											{
												unk_0xA3BF0AA5A2608191(iLocal_43[0]);
											}
											unk_0xF96A174EE26D7588(iLocal_43[0], unk_0x16F2683693E537C9(), 5000);
											iLocal_102[0] = unk_0x1C0640BA9A7327B3();
											func_187(iLocal_43[0]);
											iLocal_451[0] = 1;
										}
									}
									if (iLocal_451[0] == 1)
									{
										if (unk_0x1C0640BA9A7327B3() > iLocal_102[0] + 5000)
										{
											iLocal_451[0] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_185(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = unk_0x1C0640BA9A7327B3();
											iLocal_403 = 1;
										}
										else if (unk_0x1C0640BA9A7327B3() > iLocal_82 + 15000)
										{
											func_185(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = unk_0x1C0640BA9A7327B3();
										}
									}
									else
									{
										if (iLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_185(iLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x1C0640BA9A7327B3();
												iLocal_410 = 1;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_88 + 15000)
											{
												func_185(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = unk_0x1C0640BA9A7327B3();
											}
										}
										if (iLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_185(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x1C0640BA9A7327B3();
												iLocal_411 = 1;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_89 + 15000)
											{
												func_185(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_43[1]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 15f)
					{
						if ((func_189(unk_0x16F2683693E537C9()) == -1569615261 || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) || func_188(0))
						{
							if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[1], 100f))
							{
								if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 939,8862f, -1575,635f, 28,59783f, 952,9254f, -1575,484f, 33,19459f, 13,75f, 0, true, 0))
								{
									if (iLocal_451[1] == 0)
									{
										if (!unk_0x7069CC4DE1EA3FAA(iLocal_43[1], unk_0x16F2683693E537C9(), 45f))
										{
											if (!unk_0x0A059E0DB9253280(iLocal_43[1]))
											{
												unk_0x327AAEE25F323797(iLocal_43[1]);
											}
											else
											{
												unk_0xA3BF0AA5A2608191(iLocal_43[1]);
											}
											unk_0xF96A174EE26D7588(iLocal_43[1], unk_0x16F2683693E537C9(), 5000);
											iLocal_102[1] = unk_0x1C0640BA9A7327B3();
											func_187(iLocal_43[1]);
											iLocal_451[1] = 1;
										}
									}
									if (iLocal_451[1] == 1)
									{
										if (unk_0x1C0640BA9A7327B3() > iLocal_102[1] + 5000)
										{
											iLocal_451[1] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_185(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = unk_0x1C0640BA9A7327B3();
											iLocal_403 = 1;
										}
										else if (unk_0x1C0640BA9A7327B3() > iLocal_82 + 15000)
										{
											func_185(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = unk_0x1C0640BA9A7327B3();
										}
									}
									else
									{
										if (iLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_185(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = unk_0x1C0640BA9A7327B3();
												iLocal_410 = 1;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_88 + 15000)
											{
												func_185(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = unk_0x1C0640BA9A7327B3();
											}
										}
										if (iLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_185(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = unk_0x1C0640BA9A7327B3();
												iLocal_411 = 1;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_89 + 15000)
											{
												func_185(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = unk_0x1C0640BA9A7327B3();
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
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (func_184() || iLocal_398 == 1)
			{
				if (unk_0xC844350D5D58C99A(iLocal_43[0]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
					{
						if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
						{
							iLocal_99[0] = unk_0x1C0640BA9A7327B3();
							iLocal_445[0] = 1;
							if (iLocal_442[0] == 0)
							{
								if (unk_0x0A059E0DB9253280(iLocal_43[0]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_43[0]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_43[0]);
								}
								unk_0xAFF39FB306F8E232(iLocal_43[0], 50, 1);
								unk_0x6C3AE6E278DB3D0E(iLocal_43[0], unk_0x16F2683693E537C9(), 0, 16);
								func_187(iLocal_43[0]);
								iLocal_442[0] = 1;
							}
						}
						else if (iLocal_448[0] == 0)
						{
							if (iLocal_445[0] == 0)
							{
								if (unk_0x0A059E0DB9253280(iLocal_43[0]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_43[0]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_43[0]);
								}
								unk_0x96167B03C5A77156(iLocal_43[0], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_187(iLocal_43[0]);
								iLocal_448[0] = 1;
							}
							if (iLocal_445[0] == 1)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_99[0] + 500)
								{
									if (unk_0x0A059E0DB9253280(iLocal_43[0]))
									{
										unk_0xA3BF0AA5A2608191(iLocal_43[0]);
									}
									else
									{
										unk_0x327AAEE25F323797(iLocal_43[0]);
									}
									unk_0x96167B03C5A77156(iLocal_43[0], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_187(iLocal_43[0]);
									iLocal_448[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_43[1]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
					{
						if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
						{
							iLocal_99[1] = unk_0x1C0640BA9A7327B3();
							iLocal_445[1] = 1;
							if (iLocal_442[1] == 0)
							{
								if (unk_0x0A059E0DB9253280(iLocal_43[1]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_43[1]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_43[1]);
								}
								unk_0xAFF39FB306F8E232(iLocal_43[1], 50, 1);
								unk_0x6C3AE6E278DB3D0E(iLocal_43[1], unk_0x16F2683693E537C9(), 0, 16);
								func_187(iLocal_43[1]);
								iLocal_442[1] = 1;
							}
						}
						else if (iLocal_448[1] == 0)
						{
							if (iLocal_445[1] == 0)
							{
								if (unk_0x0A059E0DB9253280(iLocal_43[1]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_43[1]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_43[1]);
								}
								unk_0x96167B03C5A77156(iLocal_43[1], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_187(iLocal_43[1]);
								iLocal_448[1] = 1;
							}
							if (iLocal_445[1] == 1)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_99[1] + 500)
								{
									if (unk_0x0A059E0DB9253280(iLocal_43[1]))
									{
										unk_0xA3BF0AA5A2608191(iLocal_43[1]);
									}
									else
									{
										unk_0x327AAEE25F323797(iLocal_43[1]);
									}
									unk_0x96167B03C5A77156(iLocal_43[1], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_187(iLocal_43[1]);
									iLocal_448[1] = 1;
								}
							}
						}
					}
				}
				if (func_184())
				{
					if (iLocal_412 == 0)
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 2)
						{
							unk_0x34D79252800B23FF(5);
							unk_0x51B096AAC60548C1(1f);
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
							iLocal_412 = 1;
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_43[0]))
								{
									func_185(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = unk_0x1C0640BA9A7327B3();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x1C0640BA9A7327B3() > iLocal_87 + 7000)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_43[0]))
								{
									func_185(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_43[1]))
								{
									func_185(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x1C0640BA9A7327B3();
									iLocal_401 = 1;
								}
							}
						}
						else if (unk_0x1C0640BA9A7327B3() > iLocal_87 + 7000)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_43[1]))
								{
									func_185(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						iLocal_50 = func_181(unk_0x16F2683693E537C9(), -1533126372, 0, 0, 28);
						if (iLocal_50 != 0)
						{
							if (unk_0xC844350D5D58C99A(iLocal_50))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_50))
								{
									if (func_177(unk_0x16F2683693E537C9(), iLocal_50, 1) < 35f)
									{
										iLocal_458 = 1;
									}
								}
							}
						}
					}
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_43[0]))
									{
										func_185(iLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x1C0640BA9A7327B3();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_86 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_43[0]))
									{
										func_185(iLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_43[1]))
									{
										func_185(iLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x1C0640BA9A7327B3();
										iLocal_402 = 1;
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_86 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_43[1]))
									{
										func_185(iLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
				}
			}
			if (!func_184())
			{
				if (iLocal_414 == 0)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 893,2f, -1556,5f, 30f, true) < 18f)
					{
						if (unk_0xC844350D5D58C99A(iLocal_43[0]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
							{
								if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
								{
									iLocal_81 = unk_0x1C0640BA9A7327B3();
									iLocal_414 = 1;
								}
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_43[1]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
							{
								if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
								{
									iLocal_81 = unk_0x1C0640BA9A7327B3();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
				if (iLocal_398 == 0)
				{
					if (unk_0xC844350D5D58C99A(iLocal_43[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) > 4f)
							{
								if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
								{
									if (iLocal_436[0] == 0)
									{
										if (unk_0x0A059E0DB9253280(iLocal_43[0]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_43[0]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_43[0]);
										}
										unk_0xE185F110925D87DB(iLocal_43[0], unk_0x16F2683693E537C9(), -1, 0,5f, 2f, 1073741824, 0);
										func_187(iLocal_43[0]);
										iLocal_436[0] = 1;
									}
									iLocal_96[0] = unk_0x1C0640BA9A7327B3();
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_96[0] + 500)
								{
									if (iLocal_439[0] == 0)
									{
										if (unk_0x0A059E0DB9253280(iLocal_43[0]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_43[0]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_43[0]);
										}
										unk_0x96167B03C5A77156(iLocal_43[0], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_187(iLocal_43[0]);
										iLocal_439[0] = 1;
									}
								}
							}
							else if (iLocal_484[0] == 0)
							{
								if (unk_0x0A059E0DB9253280(iLocal_43[0]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_43[0]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_43[0]);
								}
								unk_0xDD353D0E9C789D0E(&uLocal_57);
								unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
								unk_0x93D47DFD0AE94949(0, 2000);
								unk_0x25644C31B4B6E9F3(uLocal_57, 1);
								unk_0x75ABDC5F81978924(uLocal_57);
								unk_0x78ADC381772E3D54(iLocal_43[0], uLocal_57);
								unk_0xF82EA857DA10E0CD(&uLocal_57);
								func_187(iLocal_43[0]);
								iLocal_484[0] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_43[0]))
											{
												func_185(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = unk_0x1C0640BA9A7327B3();
												iLocal_84 = unk_0x1C0640BA9A7327B3();
												iLocal_81 = unk_0x1C0640BA9A7327B3();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[0] = 1;
											}
										}
									}
									else if (unk_0x1C0640BA9A7327B3() > iLocal_83 + 7000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_43[0]))
											{
												func_185(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_43[0]))
											{
												func_185(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_84 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 15f)
								{
									if (!unk_0x65636D4556D82155(iLocal_43[0]))
									{
										func_185(iLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_43[1]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) > 4f)
							{
								if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
								{
									if (iLocal_436[1] == 0)
									{
										if (unk_0x0A059E0DB9253280(iLocal_43[1]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_43[1]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_43[1]);
										}
										unk_0xE185F110925D87DB(iLocal_43[1], unk_0x16F2683693E537C9(), -1, 0,5f, 2f, 1073741824, 0);
										func_187(iLocal_43[1]);
										iLocal_436[1] = 1;
									}
									iLocal_96[1] = unk_0x1C0640BA9A7327B3();
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_96[1] + 500)
								{
									if (iLocal_439[1] == 0)
									{
										if (unk_0x0A059E0DB9253280(iLocal_43[1]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_43[1]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_43[1]);
										}
										unk_0x96167B03C5A77156(iLocal_43[1], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_187(iLocal_43[1]);
										iLocal_439[1] = 1;
									}
								}
							}
							else if (iLocal_484[1] == 0)
							{
								if (unk_0x0A059E0DB9253280(iLocal_43[1]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_43[1]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_43[1]);
								}
								unk_0xDD353D0E9C789D0E(&uLocal_57);
								unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
								unk_0x93D47DFD0AE94949(0, 2000);
								unk_0x25644C31B4B6E9F3(uLocal_57, 1);
								unk_0x75ABDC5F81978924(uLocal_57);
								unk_0x78ADC381772E3D54(iLocal_43[1], uLocal_57);
								unk_0xF82EA857DA10E0CD(&uLocal_57);
								func_187(iLocal_43[1]);
								iLocal_484[1] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_43[1]))
											{
												func_185(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = unk_0x1C0640BA9A7327B3();
												iLocal_85 = unk_0x1C0640BA9A7327B3();
												iLocal_81 = unk_0x1C0640BA9A7327B3();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[1] = 1;
											}
										}
									}
									else if (unk_0x1C0640BA9A7327B3() > iLocal_83 + 7000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_43[1]))
											{
												func_185(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_43[1]))
											{
												func_185(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_85 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 10f)
								{
									if (!unk_0x65636D4556D82155(iLocal_43[1]))
									{
										func_185(iLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_454 == 0)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_81 + 22000)
							{
								iLocal_454 = 1;
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_81 + 30000)
							{
								unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
								iLocal_398 = 1;
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_33))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 1))
							{
								if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
								{
									iLocal_398 = 1;
								}
							}
							if (func_177(unk_0x16F2683693E537C9(), iLocal_33, 1) < 5f && unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
							{
								if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
								{
									iLocal_398 = 1;
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_43[0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
						{
							if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
							{
								if (unk_0x05569C69D7945F99(unk_0x16F2683693E537C9()))
								{
									if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_43[1]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
						{
							if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
							{
								if (unk_0x05569C69D7945F99(unk_0x16F2683693E537C9()))
								{
									if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
									{
										iLocal_398 = 1;
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

int func_184()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iLocal_80 = 0;
		while (iLocal_80 <= 6)
		{
			if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_80]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_80]))
				{
					if (func_189(unk_0x16F2683693E537C9()) != -1569615261 && !func_188(0))
					{
						if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_80], unk_0x16F2683693E537C9()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_43[0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
			{
				if (func_189(unk_0x16F2683693E537C9()) != -1569615261 && !func_188(0))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_43[1]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
			{
				if (func_189(unk_0x16F2683693E537C9()) != -1569615261 && !func_188(0))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_185(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_186(iParam3), 0);
}

int func_186(int iParam0)
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

void func_187(int iParam0)
{
	if (iParam0 == iLocal_43[0])
	{
		iLocal_433[0] = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_451[0] = 0;
		iLocal_442[0] = 0;
		iLocal_448[0] = 0;
		iLocal_436[0] = 0;
		iLocal_439[0] = 0;
		iLocal_484[0] = 0;
	}
	if (iParam0 == iLocal_43[1])
	{
		iLocal_433[1] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_451[1] = 0;
		iLocal_442[1] = 0;
		iLocal_448[1] = 0;
		iLocal_436[1] = 0;
		iLocal_439[1] = 0;
		iLocal_484[1] = 0;
	}
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

void func_190()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vLocal_119 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_43[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
		{
			vLocal_125[0] = { unk_0x68F4C0EC296D3901(iLocal_43[0], true) };
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_43[1]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
		{
			vLocal_125[1] = { unk_0x68F4C0EC296D3901(iLocal_43[1], true) };
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_43[0]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
		{
			iLocal_404[0] = 1;
		}
		else
		{
			iLocal_404[0] = 0;
		}
	}
	else
	{
		iLocal_404[0] = 0;
	}
	if (unk_0xC844350D5D58C99A(iLocal_43[1]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
		{
			iLocal_404[1] = 1;
		}
		else
		{
			iLocal_404[1] = 0;
		}
	}
	else
	{
		iLocal_404[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_404[0] == 1)
			{
				if (iLocal_404[1] == 1)
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1))
					{
						if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
						{
							if (((vLocal_119.x < vLocal_125[0] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[0], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868,5617f, -1579,476f, 33,30448f, 866,5635f, -1560,984f, 28,90482f, 8,25f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 855,4593f, -1548,228f, 28,27722f, 863,1765f, -1563,288f, 33,31375f, 4,75f, 0, true, 0))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x1C0640BA9A7327B3();
								iLocal_105[1] = unk_0x1C0640BA9A7327B3();
							}
						}
						else if (vLocal_119.x < vLocal_125[0])
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x1C0640BA9A7327B3();
							iLocal_105[1] = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 15f)
					{
						if ((vLocal_119.x > vLocal_125[1] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[1], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936,7849f, -1569,337f, 31,49661f, 936,3553f, -1581,973f, 27,77812f, 8,25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x1C0640BA9A7327B3();
							iLocal_105[1] = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (vLocal_119.x > vLocal_125[1])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x1C0640BA9A7327B3();
						iLocal_105[1] = unk_0x1C0640BA9A7327B3();
					}
				}
				else if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1))
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 15f)
					{
						if ((vLocal_119.x < vLocal_125[0] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[0], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868,5617f, -1579,476f, 33,30448f, 866,5635f, -1560,984f, 28,90482f, 8,25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x1C0640BA9A7327B3();
							iLocal_105[1] = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (vLocal_119.x < vLocal_125[0])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x1C0640BA9A7327B3();
						iLocal_105[1] = unk_0x1C0640BA9A7327B3();
					}
				}
			}
			else if (iLocal_404[1] == 1)
			{
				if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 15f)
				{
					if ((vLocal_119.x > vLocal_125[1] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[1], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936,7849f, -1569,337f, 31,49661f, 936,3553f, -1581,973f, 27,77812f, 8,25f, 0, true, 0))
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = unk_0x1C0640BA9A7327B3();
						iLocal_105[1] = unk_0x1C0640BA9A7327B3();
					}
				}
				else if (vLocal_119.x > vLocal_125[1])
				{
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					iLocal_105[0] = unk_0x1C0640BA9A7327B3();
					iLocal_105[1] = unk_0x1C0640BA9A7327B3();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936,7849f, -1569,337f, 31,49661f, 936,3553f, -1581,973f, 27,77812f, 8,25f, 0, true, 0) || vLocal_119.x > 942f)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
					{
						if (vLocal_119.x > vLocal_125[1])
						{
							if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x1C0640BA9A7327B3();
								iLocal_105[1] = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					else if (vLocal_119.x > 942f)
					{
						if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x1C0640BA9A7327B3();
							iLocal_105[1] = unk_0x1C0640BA9A7327B3();
						}
					}
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868,5617f, -1579,476f, 33,30448f, 866,5635f, -1560,984f, 28,90482f, 8,25f, 0, true, 0) || vLocal_119.x < 860f)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
					{
						if (vLocal_119.x < vLocal_125[0])
						{
							if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = unk_0x1C0640BA9A7327B3();
								iLocal_105[1] = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					else if (vLocal_119.x < 860f)
					{
						if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = unk_0x1C0640BA9A7327B3();
							iLocal_105[1] = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_404[0] == 1)
			{
				if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
				{
					if ((func_189(unk_0x16F2683693E537C9()) == -1569615261 || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) || func_188(0))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 860,4606f, -1563,58f, 28,81788f, 865,0807f, -1575,088f, 30,93324f, 5,75f, 0, true, 0))
						{
							if (vLocal_119.x > vLocal_125[0] || unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 855,4593f, -1548,228f, 28,27722f, 863,1765f, -1563,288f, 33,31375f, 4,75f, 0, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 15f)
				{
					if ((func_189(unk_0x16F2683693E537C9()) == -1569615261 || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) || func_188(0))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 939,8862f, -1575,635f, 28,59783f, 952,9254f, -1575,484f, 33,19459f, 13,75f, 0, true, 0))
						{
							if (vLocal_119.x < vLocal_125[1] || unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_43[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (unk_0x681F21BF9F7B449B(-1, 892,9f, -1552,4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
		{
			if (unk_0xC844350D5D58C99A(iLocal_43[0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_43[0]))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_43[1]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_43[1]))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
		}
		if (iLocal_431 == 0)
		{
			if (iLocal_430 == 1)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_95 + 4000)
				{
					iLocal_94 = 0;
					while (iLocal_94 <= 6)
					{
						if (func_182())
						{
							if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_94]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_94]))
								{
									if (unk_0x82FE7F11C00330B0(iLocal_35[iLocal_94]))
									{
										iLocal_31 = 2;
										iLocal_431 = 1;
									}
								}
							}
						}
						iLocal_94++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_430 == 1)
		{
			iLocal_31 = 2;
			iLocal_427 = 1;
			iLocal_398 = 1;
		}
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (iLocal_404[0] == 1)
			{
				if (func_189(unk_0x16F2683693E537C9()) != -1569615261 && !func_188(0))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_189(unk_0x16F2683693E537C9()) != -1569615261 && !func_188(0))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x0EB28750412C3A5A(vLocal_119, vLocal_132, true) < 36f)
		{
			if (iLocal_404[0] == 1)
			{
				if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()))
				{
					iLocal_31 = 2;
				}
				if (func_177(iLocal_43[0], unk_0x16F2683693E537C9(), 1) < 20f)
				{
					if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (vLocal_119.z < 36f || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 2;
					}
					if (func_177(iLocal_43[1], unk_0x16F2683693E537C9(), 1) < 20f)
					{
						if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_43[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1)
		{
			if (func_177(unk_0x16F2683693E537C9(), iLocal_43[0], 1) < 20f)
			{
				if (vLocal_119.x > vLocal_125[0] && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868,5617f, -1579,476f, 33,30448f, 866,5635f, -1560,984f, 28,90482f, 8,25f, 0, true, 0))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[0], unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1)
		{
			if (func_177(unk_0x16F2683693E537C9(), iLocal_43[1], 1) < 20f)
			{
				if (vLocal_119.x < vLocal_125[1] && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936,7849f, -1569,337f, 31,49661f, 936,3553f, -1581,973f, 27,77812f, 8,25f, 0, true, 0))
				{
					if (unk_0xE115347EA59F7B86(iLocal_43[1], unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_43[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_191()
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_64]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_64]))
			{
				if (iLocal_330[iLocal_64] == 0)
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_64], 1) > 20f)
					{
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1)
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_64], 1) < 20f)
					{
						iLocal_330[iLocal_64] = 0;
					}
				}
			}
			else if (iLocal_330[iLocal_64] == 0)
			{
				iLocal_330[iLocal_64] = 1;
			}
		}
		else if (iLocal_330[iLocal_64] == 0)
		{
			iLocal_330[iLocal_64] = 1;
		}
		iLocal_64++;
	}
	if (((((iLocal_330[0] == 1 && iLocal_330[1] == 1) && iLocal_330[2] == 1) && iLocal_330[3] == 1) && iLocal_330[4] == 1) && iLocal_330[5] == 1)
	{
		iLocal_338 = 1;
	}
	else
	{
		iLocal_338 = 0;
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_63]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_63]))
			{
				func_196(iLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_195(1);
						if (iLocal_416 == 1)
						{
							func_114();
						}
					}
					if (unk_0xFA4CE147B4D9AEE0(iLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_195(4);
							if (iLocal_416 == 1)
							{
								func_193();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0x681F21BF9F7B449B(-1, 892,9f, -1552,4f, 30f, 40f))
						{
							func_195(4);
							if (iLocal_416 == 1)
							{
								func_193();
							}
						}
					}
					if ((((((((func_192(iLocal_35[iLocal_63], iLocal_35[0]) || func_192(iLocal_35[iLocal_63], iLocal_35[1])) || func_192(iLocal_35[iLocal_63], iLocal_35[2])) || func_192(iLocal_35[iLocal_63], iLocal_35[3])) || func_192(iLocal_35[iLocal_63], iLocal_35[4])) || func_192(iLocal_35[iLocal_63], iLocal_35[5])) || func_192(iLocal_35[iLocal_63], iLocal_35[6])) || func_192(iLocal_35[iLocal_63], iLocal_43[0])) || func_192(iLocal_35[iLocal_63], iLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_195(4);
							if (iLocal_416 == 1)
							{
								func_193();
							}
							iLocal_482 = 1;
						}
					}
					if ((func_189(unk_0x16F2683693E537C9()) == -1569615261 || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || func_188(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_63], 1) > 20f)
							{
								if (iLocal_322[iLocal_63] == 1)
								{
									iLocal_322[iLocal_63] = 0;
								}
								if (((((iLocal_338 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_195(0);
								}
							}
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_63], 1) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_195(1);
										if (iLocal_416 == 1)
										{
											func_114();
										}
									}
									else
									{
										func_195(3);
										if (iLocal_416 == 1)
										{
											func_193();
										}
									}
								}
							}
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_63], 1) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()))
							{
								if (iLocal_322[iLocal_63] == 0)
								{
									iLocal_69[iLocal_63] = unk_0x1C0640BA9A7327B3();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1)
								{
									if (unk_0x1C0640BA9A7327B3() > iLocal_69[iLocal_63] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_195(2);
											if (iLocal_416 == 1)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_63], 1) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_195(3);
									if (iLocal_416 == 1)
									{
										func_193();
									}
								}
							}
						}
						if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = unk_0x1C0640BA9A7327B3();
								iLocal_413 = 1;
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_90 + 3000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_63], 1) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_195(3);
										if (iLocal_416 == 1)
										{
											func_193();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
						if (unk_0xC844350D5D58C99A(iLocal_33))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 1))
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_195(3);
											if (iLocal_416 == 1)
											{
												func_193();
											}
										}
									}
								}
								if (func_177(unk_0x16F2683693E537C9(), iLocal_33, 1) < 5f && unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_195(3);
											if (iLocal_416 == 1)
											{
												func_193();
											}
										}
									}
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 917,3436f, -1554,42f, 29,26611f, 916,8774f, -1556,441f, 33,00661f, 2,25f, 0, true, 0))
									{
										if (unk_0xC844350D5D58C99A(iLocal_35[0]))
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0]))
											{
												if (unk_0x5A91F08DF773C39D(iLocal_35[0], 912,3f, -1542,6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_195(3);
														if (iLocal_416 == 1)
														{
															func_193();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_35[6]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[6]))
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 928,7163f, -1546,671f, 27,34603f, 921,8971f, -1549,752f, 34,04724f, 6,25f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 931,868f, -1545,185f, 27,3653f, 925,8857f, -1547,303f, 34,07205f, 3,5f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 929,4908f, -1524,829f, 32,84098f, 929,3696f, -1545,288f, 37,34258f, 5f, 0, true, 0))
									{
										if (unk_0xE115347EA59F7B86(iLocal_35[6], unk_0x16F2683693E537C9()))
										{
											if (vLocal_119.z > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_195(3);
													if (iLocal_416 == 1)
													{
														func_193();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_195(1);
												if (iLocal_416 == 1)
												{
													func_114();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_321 == 0)
						{
							iLocal_68 = unk_0x1C0640BA9A7327B3();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_63], 1) < 20f)
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()))
									{
										if (iLocal_29 != 4)
										{
											func_195(4);
											if (iLocal_416 == 1)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_63], 1) < 40f)
						{
							if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
							{
								if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_63], unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_195(4);
										if (iLocal_416 == 1)
										{
											func_193();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_63++;
	}
}

int func_192(int iParam0, int iParam1)
{
	if (((func_177(iParam0, iParam1, 1) < 20f && unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 90f)) && !unk_0xEB6A8945D1AC98A1(iParam0)) && unk_0xEB6A8945D1AC98A1(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_193()
{
	Global_19671 = 0;
	func_194();
}

void func_194()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_195(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

void func_196(int iParam0)
{
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_65])
		{
			if (func_177(unk_0x16F2683693E537C9(), iParam0, 1) < 20f && unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9()))
			{
				if (iLocal_339[iLocal_65] == 0)
				{
					unk_0x0C8C0C840C2D1AD2(iParam0, unk_0x16F2683693E537C9(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1)
			{
				unk_0x0C8C0C840C2D1AD2(iParam0, unk_0x16F2683693E537C9(), 1, 1072, 3);
				iLocal_339[iLocal_65] = 0;
			}
		}
		iLocal_65++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_67 == 0)
			{
				unk_0x11AD11297DC58CC7(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0x4742C50E93110B10(912,2f, -1542,5f, 29,8f, 3f, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[0], -1680762137) != 1)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0], 912,2f, -1542,5f, 29,8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0x4742C50E93110B10(917,4f, -1517,4f, 30f, 3f, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_35[1], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[1], -1680762137) != 1)
						{
							unk_0x3003D662BC385BD6(iLocal_35[1], 917,4f, -1517,4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0x4742C50E93110B10(869,8f, -1541,2f, 29,4f, 3f, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_35[2], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[2], -1680762137) != 1)
						{
							unk_0x3003D662BC385BD6(iLocal_35[2], 869,8f, -1541,2f, 29,4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0x4742C50E93110B10(884,2f, -1574,1f, 30f, 3f, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_35[3], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[3], -1680762137) != 1)
						{
							unk_0x3003D662BC385BD6(iLocal_35[3], 884,2f, -1574,1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_35[4], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[4], -1680762137) != 1)
						{
							unk_0x3003D662BC385BD6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0x4742C50E93110B10(905,9f, -1574,8f, 29,9f, 3f, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_35[5], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[5], -1680762137) != 1)
						{
							unk_0x3003D662BC385BD6(iLocal_35[5], 905,9f, -1574,8f, 29,9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0x4742C50E93110B10(889,5f, -1562f, 29,7f, 3f, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_35[6], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[6], -1680762137) != 1)
						{
							unk_0x3003D662BC385BD6(iLocal_35[6], 889,5f, -1562f, 29,7f, 20f, 0);
						}
					}
				}
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (unk_0xC844350D5D58C99A(iLocal_35[4]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_35[4]))
					{
						if (unk_0xC844350D5D58C99A(iLocal_35[5]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[5]))
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 926,455f, -1582,384f, 29,32759f, 909,6322f, -1581,374f, 31,58907f, 9,5f, 0, true, 0) || vLocal_119.y > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_138(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_138(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0x0C8C0C840C2D1AD2(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0x0C8C0C840C2D1AD2(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_182())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_176(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 921,9f, -1556,5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = unk_0x1C0640BA9A7327B3();
										iLocal_423 = 1;
									}
									if (iLocal_423 == 1)
									{
										if (unk_0x1C0640BA9A7327B3() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_138(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_138(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0x0C8C0C840C2D1AD2(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0x0C8C0C840C2D1AD2(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_182())
												{
													if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
													{
														if (func_176(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_416 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_416 == 1 && !func_182())
								{
									if (iLocal_415 == 0)
									{
										if (unk_0x4742C50E93110B10(865f, -1558,1f, 29,5f, 3f, 0))
										{
											unk_0xBC43ED9FE28DB191(iLocal_35[4]);
											unk_0xBC43ED9FE28DB191(iLocal_35[5]);
											unk_0x4A35AD9FC803369E(iLocal_35[4], 865f, -1558,1f, 29,5f, 3f, 0);
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_424 == 0)
					{
						if (iLocal_425 == 0)
						{
							iLocal_93 = unk_0x1C0640BA9A7327B3();
							iLocal_425 = 1;
						}
						if (unk_0x1C0640BA9A7327B3() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (unk_0x4742C50E93110B10(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x4A35AD9FC803369E(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
					if (iLocal_424 == 1)
					{
						if (unk_0x5A91F08DF773C39D(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[6], 1) < 15f && vLocal_119.z < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (unk_0x4742C50E93110B10(909,5f, -1515,5f, 30f, 3f, 0))
									{
										unk_0x3003D662BC385BD6(iLocal_35[6], 909,5f, -1515,5f, 30f, 50f, 0);
										iLocal_426 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_67 == 0)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_177(unk_0x16F2683693E537C9(), iParam0, 1) < 20f)
							{
								if (iLocal_347[iLocal_65] == 0)
								{
									if (unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iParam0))
									{
										if (!unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0x327AAEE25F323797(iParam0);
										}
										if (unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0xA3BF0AA5A2608191(iParam0);
										}
										unk_0xDD353D0E9C789D0E(&uLocal_57);
										unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, 2f, 1f, 1073741824, 0);
										unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
										unk_0x75ABDC5F81978924(uLocal_57);
										unk_0x78ADC381772E3D54(iParam0, uLocal_57);
										unk_0xF82EA857DA10E0CD(&uLocal_57);
										unk_0x11AD11297DC58CC7(iParam0, true);
										iLocal_339[iLocal_65] = 0;
										iLocal_347[iLocal_65] = 1;
									}
								}
								if (iLocal_347[iLocal_65] == 1)
								{
									if (!unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
									{
										unk_0xF96A174EE26D7588(iParam0, unk_0x16F2683693E537C9(), 0);
										iLocal_347[iLocal_65] = 0;
									}
								}
							}
							else
							{
								if (iLocal_347[iLocal_65] == 1)
								{
									iLocal_347[iLocal_65] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (unk_0x4742C50E93110B10(912,2f, -1542,5f, 29,8f, 3f, 0))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[0], -1680762137) != 1)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0], 912,2f, -1542,5f, 29,8f, 20f, 0);
											unk_0x11AD11297DC58CC7(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0x4742C50E93110B10(917,4f, -1517,4f, 30f, 3f, 0))
									{
										if (unk_0xD1960163A3042274(iLocal_35[1], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[1], -1680762137) != 1)
										{
											unk_0x3003D662BC385BD6(iLocal_35[1], 917,4f, -1517,4f, 30f, 20f, 0);
											unk_0x11AD11297DC58CC7(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0x4742C50E93110B10(869,8f, -1541,2f, 29,4f, 3f, 0))
									{
										if (unk_0xD1960163A3042274(iLocal_35[2], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[2], -1680762137) != 1)
										{
											unk_0x3003D662BC385BD6(iLocal_35[2], 869,8f, -1541,2f, 29,4f, 20f, 0);
											unk_0x11AD11297DC58CC7(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0x4742C50E93110B10(884,2f, -1574,1f, 30f, 3f, 0))
									{
										if (unk_0xD1960163A3042274(iLocal_35[3], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[3], -1680762137) != 1)
										{
											unk_0x3003D662BC385BD6(iLocal_35[3], 884,2f, -1574,1f, 30f, 20f, 0);
											unk_0x11AD11297DC58CC7(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0xD1960163A3042274(iLocal_35[4], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[4], -1680762137) != 1)
										{
											unk_0x3003D662BC385BD6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x11AD11297DC58CC7(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0x4742C50E93110B10(905,9f, -1574,8f, 29,9f, 3f, 0))
									{
										if (unk_0xD1960163A3042274(iLocal_35[5], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[5], -1680762137) != 1)
										{
											unk_0x3003D662BC385BD6(iLocal_35[5], 905,9f, -1574,8f, 29,9f, 20f, 0);
											unk_0x11AD11297DC58CC7(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0x4742C50E93110B10(889,5f, -1562f, 29,7f, 3f, 0))
									{
										if (unk_0xD1960163A3042274(iLocal_35[6], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[6], -1680762137) != 1)
										{
											unk_0x3003D662BC385BD6(iLocal_35[6], 889,5f, -1562f, 29,7f, 20f, 0);
											unk_0x11AD11297DC58CC7(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_177(unk_0x16F2683693E537C9(), iParam0, 1) < 20f)
						{
							if (iLocal_347[iLocal_65] == 0)
							{
								if (unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iParam0))
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0xDD353D0E9C789D0E(&uLocal_57);
									unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
									unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 1072, 3);
									unk_0x75ABDC5F81978924(uLocal_57);
									unk_0x78ADC381772E3D54(iParam0, uLocal_57);
									unk_0xF82EA857DA10E0CD(&uLocal_57);
									unk_0x11AD11297DC58CC7(iParam0, true);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1)
							{
								if (!unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
								{
									unk_0xF96A174EE26D7588(iParam0, unk_0x16F2683693E537C9(), 0);
									iLocal_347[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iLocal_347[iLocal_65] == 1)
							{
								iLocal_347[iLocal_65] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x4742C50E93110B10(912,2f, -1542,5f, 29,8f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0], 912,2f, -1542,5f, 29,8f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x4742C50E93110B10(917,4f, -1517,4f, 30f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[1], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[1], 917,4f, -1517,4f, 30f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x4742C50E93110B10(869,8f, -1541,2f, 29,4f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[2], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[2], 869,8f, -1541,2f, 29,4f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x4742C50E93110B10(884,2f, -1574,1f, 30f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[3], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[3], 884,2f, -1574,1f, 30f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[4], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x4742C50E93110B10(905,9f, -1574,8f, 29,9f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[5], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[5], 905,9f, -1574,8f, 29,9f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x4742C50E93110B10(889,5f, -1562f, 29,7f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[6], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[6], 889,5f, -1562f, 29,7f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_67 == 0)
			{
				unk_0x0E2400AB9174FA81(5, iLocal_302, 1862763509);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_177(iParam0, unk_0x16F2683693E537C9(), 1) < 15f)
						{
							if (func_177(iParam0, unk_0x16F2683693E537C9(), 1) > 3f)
							{
								if (unk_0xD1960163A3042274(iParam0, 242628503) != 0 || unk_0xD1960163A3042274(iParam0, 242628503) != 1)
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0xDD353D0E9C789D0E(&uLocal_57);
									unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, 1f, 1f, 1073741824, 0);
									unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
									unk_0x75ABDC5F81978924(uLocal_57);
									unk_0x78ADC381772E3D54(iParam0, uLocal_57);
									unk_0xF82EA857DA10E0CD(&uLocal_57);
									iLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x4742C50E93110B10(912,2f, -1542,5f, 29,8f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0], 912,2f, -1542,5f, 29,8f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x4742C50E93110B10(917,4f, -1517,4f, 30f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[1], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[1], 917,4f, -1517,4f, 30f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x4742C50E93110B10(869,8f, -1541,2f, 29,4f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[2], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[2], 869,8f, -1541,2f, 29,4f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x4742C50E93110B10(884,2f, -1574,1f, 30f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[3], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[3], 884,2f, -1574,1f, 30f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[4], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x4742C50E93110B10(905,9f, -1574,8f, 29,9f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[5], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[5], 905,9f, -1574,8f, 29,9f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x4742C50E93110B10(889,5f, -1562f, 29,7f, 3f, 0))
								{
									if (unk_0xD1960163A3042274(iLocal_35[6], 1647992574) != 1 && unk_0xD1960163A3042274(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x3003D662BC385BD6(iLocal_35[6], 889,5f, -1562f, 29,7f, 20f, 0);
										unk_0x11AD11297DC58CC7(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 3:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = unk_0x1C0640BA9A7327B3();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x1C0640BA9A7327B3() > iLocal_79 + 9000)
					{
						unk_0x34D79252800B23FF(5);
						unk_0x51B096AAC60548C1(1f);
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x0E2400AB9174FA81(5, iLocal_302, 1862763509);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_65 = 0;
					while (iLocal_65 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_177(iParam0, unk_0x16F2683693E537C9(), 1) < 100f)
							{
								if (iLocal_355[iLocal_65] == 0)
								{
									unk_0x11AD11297DC58CC7(iParam0, true);
									iLocal_355[iLocal_65] = 1;
								}
								if (iLocal_363[iLocal_65] == 0)
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0x7C8478BF70C1E072(iParam0, 100f, 0);
									iLocal_339[iLocal_65] = 0;
									iLocal_363[iLocal_65] = 1;
								}
							}
						}
						iLocal_65++;
					}
					if (iLocal_468 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_35[0]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0]))
							{
								if (unk_0xC844350D5D58C99A(iLocal_33))
								{
									if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
									{
										if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 1) && unk_0x5A91F08DF773C39D(iLocal_33, 919,2f, -1554,4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!unk_0x0A059E0DB9253280(iLocal_35[0]))
											{
												unk_0x327AAEE25F323797(iLocal_35[0]);
											}
											if (unk_0x0A059E0DB9253280(iLocal_35[0]))
											{
												unk_0xA3BF0AA5A2608191(iLocal_35[0]);
											}
											unk_0xDD353D0E9C789D0E(&uLocal_57);
											unk_0x96167B03C5A77156(0, 917,8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
											unk_0xC6EB89C59F2AF6B8(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x75ABDC5F81978924(uLocal_57);
											unk_0x78ADC381772E3D54(iLocal_35[0], uLocal_57);
											unk_0xF82EA857DA10E0CD(&uLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (unk_0xC844350D5D58C99A(iLocal_35[0]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0]))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_35[0], 917,8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_138(&uLocal_137, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_185(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
					if (iLocal_467 == 0)
					{
						if (unk_0x1C0640BA9A7327B3() > iLocal_79 + 3000)
						{
							if (unk_0xC844350D5D58C99A(iLocal_35[5]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_35[5]))
								{
									unk_0xC6EB89C59F2AF6B8(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_111 = unk_0x1C0640BA9A7327B3();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (unk_0x1C0640BA9A7327B3() > iLocal_111 + 5000)
						{
							if (unk_0xC844350D5D58C99A(iLocal_35[5]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_35[5]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_35[5]);
									unk_0x6C3AE6E278DB3D0E(iLocal_35[5], unk_0x16F2683693E537C9(), 0, 16);
									iLocal_466 = 1;
								}
							}
						}
					}
				}
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (unk_0xC844350D5D58C99A(iParam0))
							{
								if (!unk_0xEB6A8945D1AC98A1(iParam0))
								{
									unk_0x11AD11297DC58CC7(iParam0, true);
									if (unk_0x405E212DDE472467(iParam0, 0))
									{
										if (func_177(iParam0, unk_0x16F2683693E537C9(), 1) > 200f)
										{
											if (!unk_0x0A059E0DB9253280(iParam0))
											{
												unk_0x327AAEE25F323797(iParam0);
											}
											if (unk_0x0A059E0DB9253280(iParam0))
											{
												unk_0xA3BF0AA5A2608191(iParam0);
											}
											unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
											iLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_177(iParam0, unk_0x16F2683693E537C9(), 1) > 100f)
									{
										if (!unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0x327AAEE25F323797(iParam0);
										}
										if (unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0xA3BF0AA5A2608191(iParam0);
										}
										unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
										iLocal_306[iLocal_65] = 1;
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (unk_0xC844350D5D58C99A(iParam0))
							{
								if (!unk_0xEB6A8945D1AC98A1(iParam0))
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0x11AD11297DC58CC7(iParam0, true);
									unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
									unk_0xFADC0A217229F6B5(iParam0, 1);
									unk_0x6DAD7906B73F064D(&iParam0);
									iLocal_306[iLocal_65] = 1;
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 4:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = unk_0x1C0640BA9A7327B3();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (unk_0x1C0640BA9A7327B3() > iLocal_79 + 6000)
					{
						unk_0x34D79252800B23FF(5);
						unk_0x51B096AAC60548C1(1f);
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				unk_0x0E2400AB9174FA81(5, iLocal_302, 1862763509);
				unk_0x11AD11297DC58CC7(iParam0, true);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_65]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_65]))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_65], 1) < 15f)
							{
								if (func_197(iLocal_35[iLocal_65], 6))
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_65], unk_0x16F2683693E537C9()))
									{
										if (iLocal_379[iLocal_65] == 0)
										{
											if (!unk_0x0A059E0DB9253280(iLocal_35[iLocal_65]))
											{
												unk_0x327AAEE25F323797(iLocal_35[iLocal_65]);
											}
											if (unk_0x0A059E0DB9253280(iLocal_35[iLocal_65]))
											{
												unk_0xA3BF0AA5A2608191(iLocal_35[iLocal_65]);
											}
											unk_0xF9B5DB58254657F1(iLocal_35[iLocal_65], -1, unk_0x16F2683693E537C9(), -1, 0);
											iLocal_379[iLocal_65] = 1;
											iLocal_371[iLocal_65] = 0;
											iLocal_339[iLocal_65] = 0;
											iLocal_91 = unk_0x1C0640BA9A7327B3();
										}
									}
									else if (unk_0x1C0640BA9A7327B3() > iLocal_91 + 300)
									{
										iLocal_371[iLocal_65] = 0;
									}
								}
								else if (iLocal_371[iLocal_65] == 0)
								{
									if (!unk_0x0A059E0DB9253280(iLocal_35[iLocal_65]))
									{
										unk_0x327AAEE25F323797(iLocal_35[iLocal_65]);
									}
									if (unk_0x0A059E0DB9253280(iLocal_35[iLocal_65]))
									{
										unk_0xA3BF0AA5A2608191(iLocal_35[iLocal_65]);
									}
									unk_0xF3268524E9BE6D6E(iLocal_35[iLocal_65], unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
									iLocal_371[iLocal_65] = 1;
									iLocal_379[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0)
							{
								if (!unk_0x0A059E0DB9253280(iLocal_35[iLocal_65]))
								{
									unk_0x327AAEE25F323797(iLocal_35[iLocal_65]);
								}
								if (unk_0x0A059E0DB9253280(iLocal_35[iLocal_65]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_35[iLocal_65]);
								}
								unk_0xF3268524E9BE6D6E(iLocal_35[iLocal_65], unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
								iLocal_371[iLocal_65] = 1;
								iLocal_379[iLocal_65] = 0;
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
	}
}

int func_197(int iParam0, int iParam1)
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

void func_198()
{
	iLocal_46 = func_26(0);
	iLocal_47 = func_26(1);
	iLocal_48 = func_26(2);
	if (func_34(iLocal_46, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_46))
		{
			if (!func_33(iLocal_46))
			{
				if (!func_200())
				{
					if (func_199(iLocal_46))
					{
						if (func_32(iLocal_46, 0))
						{
							unk_0x73270B3C9CC833FD(iLocal_46, true, 1);
							unk_0x11AD11297DC58CC7(iLocal_46, true);
							unk_0xA3BF0AA5A2608191(iLocal_46);
							iLocal_473 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iLocal_473 = 1;
					}
					else if (unk_0x405E212DDE472467(iLocal_46, 0))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_46, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_200())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_199(iLocal_46) && unk_0x9C77D2D0559097F0(iLocal_46, 1)) && iLocal_473 == 0)
					{
						vLocal_122 = { unk_0x68F4C0EC296D3901(iLocal_46, true) };
						unk_0x10FEEAFF01E32639(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (unk_0xD1B4D22E0BA9B0C8(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
								{
									unk_0x132B85BCE016BCA0(iLocal_46, unk_0x6937EA2286828455(iLocal_46, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(unk_0x83C1D4B63BBD91F6(vLocal_122, 200f, 1912215274, 32768)))
						{
							if (iLocal_479 == 0)
							{
								unk_0x60274E99F9B27DEA(iLocal_46, unk_0x6937EA2286828455(iLocal_46, 0), unk_0x83C1D4B63BBD91F6(vLocal_122, 200f, 1912215274, 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (unk_0xD1B4D22E0BA9B0C8(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
							{
								unk_0x132B85BCE016BCA0(iLocal_46, unk_0x6937EA2286828455(iLocal_46, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1)
				{
					if (func_25(iLocal_46))
					{
						iLocal_473 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_48, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_48))
		{
			if (!func_33(iLocal_48))
			{
				if (!func_200())
				{
					if (func_199(iLocal_48))
					{
						if (func_32(iLocal_48, 0))
						{
							unk_0x73270B3C9CC833FD(iLocal_48, true, 1);
							unk_0x11AD11297DC58CC7(iLocal_48, true);
							unk_0xA3BF0AA5A2608191(iLocal_48);
							iLocal_475 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_475 == 0)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iLocal_475 = 1;
					}
					else if (unk_0x405E212DDE472467(iLocal_48, 0))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_48, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
						{
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0)
				{
					if (func_200())
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_199(iLocal_48) && unk_0x9C77D2D0559097F0(iLocal_48, 1)) && iLocal_475 == 0)
					{
						vLocal_122 = { unk_0x68F4C0EC296D3901(iLocal_48, true) };
						unk_0x10FEEAFF01E32639(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (unk_0xD1B4D22E0BA9B0C8(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
								{
									unk_0x132B85BCE016BCA0(iLocal_48, unk_0x6937EA2286828455(iLocal_48, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(unk_0x83C1D4B63BBD91F6(vLocal_122, 200f, 1912215274, 32768)))
						{
							if (iLocal_480 == 0)
							{
								unk_0x60274E99F9B27DEA(iLocal_48, unk_0x6937EA2286828455(iLocal_48, 0), unk_0x83C1D4B63BBD91F6(vLocal_122, 200f, 1912215274, 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (unk_0xD1B4D22E0BA9B0C8(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
							{
								unk_0x132B85BCE016BCA0(iLocal_48, unk_0x6937EA2286828455(iLocal_48, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_475 == 1)
				{
					if (func_25(iLocal_48))
					{
						iLocal_475 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_47, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_47))
		{
			if (!func_33(iLocal_47))
			{
				if (!func_200())
				{
					if (func_199(iLocal_47))
					{
						if (func_32(iLocal_47, 0))
						{
							unk_0x73270B3C9CC833FD(iLocal_47, true, 1);
							unk_0x11AD11297DC58CC7(iLocal_47, true);
							unk_0xA3BF0AA5A2608191(iLocal_47);
							iLocal_474 = 0;
							iLocal_478 = 0;
							iLocal_481 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iLocal_474 = 1;
					}
					else if (unk_0x405E212DDE472467(iLocal_47, 0))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_47, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_200())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if ((func_199(iLocal_47) && unk_0x9C77D2D0559097F0(iLocal_47, 1)) && iLocal_474 == 0)
					{
						vLocal_122 = { unk_0x68F4C0EC296D3901(iLocal_47, true) };
						unk_0x10FEEAFF01E32639(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (unk_0xD1B4D22E0BA9B0C8(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
								{
									unk_0x132B85BCE016BCA0(iLocal_47, unk_0x6937EA2286828455(iLocal_47, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(unk_0x83C1D4B63BBD91F6(vLocal_122, 200f, 1912215274, 32768)))
						{
							if (iLocal_481 == 0)
							{
								unk_0x60274E99F9B27DEA(iLocal_47, unk_0x6937EA2286828455(iLocal_47, 0), unk_0x83C1D4B63BBD91F6(vLocal_122, 200f, 1912215274, 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (unk_0xD1B4D22E0BA9B0C8(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
							{
								unk_0x132B85BCE016BCA0(iLocal_47, unk_0x6937EA2286828455(iLocal_47, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_481 = 0;
								iLocal_478 = 1;
							}
						}
					}
					else
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_474 == 1)
				{
					if (func_25(iLocal_47))
					{
						iLocal_474 = 0;
					}
				}
			}
		}
	}
}

int func_199(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0) && unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -1, 0) == iParam0)
			{
				if (unk_0xC844350D5D58C99A(iLocal_33))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_33, 0))
					{
						if ((unk_0xC42A92762C58E1B9(iParam0, iLocal_33, 0) && unk_0xA30B8362589C124A(iLocal_33, -1, 0) == iParam0) && !unk_0x5A91F08DF773C39D(iLocal_33, vLocal_116, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_46)
							{
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_48)
							{
								iLocal_471 = 1;
							}
							if (iParam0 == iLocal_47)
							{
								iLocal_472 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_48)
	{
		iLocal_471 = 0;
	}
	if (iParam0 == iLocal_47)
	{
		iLocal_472 = 0;
	}
	return 0;
}

bool func_200()
{
	return Global_22209;
}

void func_201()
{
	if (unk_0xC844350D5D58C99A(iLocal_33))
	{
		if (!unk_0xDF1306B443CD3D15(iLocal_33, 0))
		{
			func_204(3);
			return;
		}
		else
		{
			if (func_203(&iLocal_33))
			{
				func_204(2);
				return;
			}
			if (unk_0xC844350D5D58C99A(iLocal_32))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_32, 0))
				{
					func_204(1);
					return;
				}
				if (unk_0xDF1306B443CD3D15(iLocal_32, 0))
				{
					if (!unk_0x6CFEA4CFD9C496C8(iLocal_33))
					{
						if ((unk_0x5B17F10380E80E5B(iLocal_32) || func_202(iLocal_32)) || func_203(&iLocal_32))
						{
							func_204(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0xC844350D5D58C99A(iLocal_32))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_32, 0))
			{
				if (func_177(iLocal_32, unk_0x16F2683693E537C9(), 1) > 600f)
				{
					func_204(5);
					return;
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_49))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_49))
		{
			func_204(6);
			return;
		}
	}
}

int func_202(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
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

int func_203(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		if (((unk_0x7B5606C651AB51B5(*iParam0, 0, 7000) || unk_0x7B5606C651AB51B5(*iParam0, 3, 30000)) || unk_0x7B5606C651AB51B5(*iParam0, 2, 30000)) || unk_0x7B5606C651AB51B5(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_204(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

void func_205(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_206()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_483 == 0)
		{
			func_207(657);
		}
	}
}

void func_207(int iParam0)
{
	Global_61513 = 0;
	if (!Global_61737[iParam0] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1].f_1 = 1;
			Global_73608[iVar1].f_2 = 0f;
			if (Global_73608[iVar1].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_208(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_209()
{
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
	unk_0xAB8E2DDC7AF955E0(569305213, false);
	unk_0xAB8E2DDC7AF955E0(-2137348917, false);
	unk_0x38DC636F3D2D2FA8("FHPRB_START");
	unk_0x38DC636F3D2D2FA8("FHPRB_TRUCK");
	unk_0x38DC636F3D2D2FA8("FHPRB_COPS");
	unk_0x38DC636F3D2D2FA8("FHPRB_LOST");
	unk_0x38DC636F3D2D2FA8("FHPRB_STOP");
	unk_0x2952D66A502EA873(iLocal_51, 0);
	unk_0x2952D66A502EA873(iLocal_52, 0);
	unk_0x2952D66A502EA873(iLocal_53, 0);
	unk_0x2952D66A502EA873(iLocal_54, 0);
	unk_0x2952D66A502EA873(iLocal_55, 0);
	unk_0x2952D66A502EA873(iLocal_56, 0);
	if (unk_0xDA8F5DDC86FE3C26("SCRAP_SECURITY"))
	{
		if (unk_0x8ED9A0095B69A728("SCRAP_SECURITY"))
		{
			unk_0x2723524E448F4BDD("SCRAP_SECURITY", false);
		}
	}
	unk_0x34D79252800B23FF(5);
	if (unk_0x76395FF5E8D5E643(iLocal_114))
	{
		unk_0xA4A8625CC710BC1F(iLocal_114);
	}
	if (unk_0x76395FF5E8D5E643(iLocal_115))
	{
		unk_0xA4A8625CC710BC1F(iLocal_115);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_210()
{
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_208(0))
	{
		if (!func_211())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_211()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

