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
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_37 = 1;
	vLocal_44 = { 122,5f, -1323,8f, 28,36f };
	vLocal_52 = { -1158,356f, -1519,06f, 3,36521f };
	vLocal_58 = { -1160,15f, -1514,2f, 3,3f };
	vLocal_61 = { -1154,968f, -1516,556f, 3,3697f };
	vLocal_365 = { -802,5565f, 171,1168f, 72,3f };
	vLocal_368 = { 0f, 0f, 5,7971f };
	vLocal_371 = { 102,7999f, -1298,765f, 29,25141f };
	vLocal_374 = { 0,567974f, -0,260371f, 31,44109f };
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_722();
		func_721("Force cleanup [TERMINATING]");
		iLocal_40 = 0;
		func_719();
	}
	unk_0x7798376279BB5369(1);
	func_717();
	if (func_716())
	{
		iVar0 = func_715();
		if (Global_92921 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_714(vLocal_61, 28,4989f, 1, 0);
				func_704(1);
				break;
			}
	}
	while (true)
	{
		wait(0);
		unk_0x1A6DFFFEEC27BF4F("M_HangTen", 0);
		func_703();
		switch (iLocal_37)
		{
			case 1:
				func_635();
				break;
			
			case 2:
				func_564();
				break;
			
			case 3:
				func_40();
				break;
			
			case 4:
				func_33();
				break;
			
			case 5:
				func_1();
				break;
		}
	}
}

void func_1()
{
	switch (iLocal_39)
	{
		case 0:
			func_32();
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(1);
			func_30();
			switch (iLocal_40)
			{
				case 0:
					sLocal_41 = "M_FAIL";
					break;
				
				case 1:
					sLocal_41 = "TRV5_FWADE";
					break;
				
				case 2:
					sLocal_41 = "TRV5_ABAN";
					break;
			}
			if (iLocal_40 == 0)
			{
				func_14(0);
			}
			else
			{
				func_12(sLocal_41);
			}
			break;
		
		case 1:
			if (func_11())
			{
				func_10();
				if (func_9(unk_0x16F2683693E537C9()))
				{
					unk_0xADCFE13F048E110C(unk_0x16F2683693E537C9());
				}
				unk_0x90CECE08EA8E77CC(-1150,039f, -1521,761f, 9,6331f);
				func_6(1);
				func_2(1);
				func_719();
			}
			break;
	}
}

void func_2(int iParam0)
{
	if (iParam0 == 1)
	{
		func_4(&iLocal_57);
		func_4(&iLocal_277);
	}
	else
	{
		func_3(&iLocal_57);
		func_3(&iLocal_277);
	}
}

void func_3(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_4(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		if (func_5(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
			{
				if (func_9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0))
					{
						unk_0x046C362CF15F1935(iParam0);
						return;
					}
				}
				unk_0xA954465BA6FDEFE2(iParam0);
			}
		}
		else
		{
			if (func_9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0))
				{
					unk_0x046C362CF15F1935(iParam0);
					return;
				}
			}
			unk_0xA954465BA6FDEFE2(iParam0);
		}
	}
}

int func_5(int iParam0)
{
	if (func_9(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0)
{
	if (iParam0 == 1)
	{
		func_8(&iLocal_51);
	}
	else
	{
		func_7(&iLocal_51, 1, 0, 1);
	}
	func_8(&iLocal_50);
}

void func_7(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x11AD11297DC58CC7(*iParam0, false);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, false, 1);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

int func_9(int iParam0)
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

void func_10()
{
	unk_0x790015DC92C918E2();
	if (iLocal_38 == 0)
	{
		iLocal_37++;
	}
	else
	{
		iLocal_37 = iLocal_38;
	}
	iLocal_38 = 0;
	iLocal_39 = 0;
}

int func_11()
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

void func_12(char* sParam0)
{
	func_13(sParam0);
	func_14(0);
}

void func_13(char* sParam0)
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

void func_14(int iParam0)
{
	if (Global_111638.f_9080 || func_29(0))
	{
		iVar0 = func_28();
		if (!func_15(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_15(int iParam0)
{
	func_20();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_19(iVar1, 1);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	func_16(&(Global_111638.f_2358.f_539), iVar1);
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

void func_16(var uParam0, int iParam1)
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
			if (!func_18(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_17(&(uParam0->f_2296[iVar0]));
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

void func_17(var uParam0)
{
	*uParam0 = -15;
}

int func_18(int iParam0, var uParam1, float fParam2)
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
			return func_18(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_18(8, uParam1, fParam2);
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

void func_19(int iParam0, bool bParam1)
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

void func_20()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_21())
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
			switch (func_21())
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

int func_21()
{
	func_22();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_22()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_25(unk_0x16F2683693E537C9());
			if (func_24(iVar0) && (!func_23(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
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
	return Global_1798[iParam0];
}

int func_28()
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

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_30()
{
	Global_19671 = 0;
	func_31();
}

void func_31()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_32()
{
	iLocal_42 = 0;
	iLocal_39 = 1;
}

void func_33()
{
	Global_111638.f_24899[15] = 2;
	func_38(&(Global_111638.f_24899[15].f_2), 1);
	func_36(0, 0);
	if (func_35(0))
	{
		func_34(132, 1, 0);
	}
	func_719();
}

void func_34(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 0);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 15);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 0);
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 15);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19))
		{
			unk_0xCD816869CA451988(1);
			unk_0x142CC44DB769B57E(&(Global_31146[iVar0].f_19));
			unk_0xCD816869CA451988(0);
		}
	}
}

bool func_35(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], iParam0);
}

void func_36(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_29(0) && Global_76868.f_1 == 1) && func_37(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_29(0))
	{
		iVar0 = func_28();
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

int func_37(int iParam0)
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

void func_38(var uParam0, int iParam1)
{
	func_39(uParam0, iParam1);
}

void func_39(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_40()
{
	unk_0x1A6DFFFEEC27BF4F("M_HangTen", 0);
	switch (iLocal_39)
	{
		case 0:
			func_32();
			func_563("TRV_5_EXT", 0);
			iLocal_48 = unk_0xFBD08BECC9B87937(130,2632f, -1295,035f, 28,2695f);
			unk_0x0007C2367F4F23F3(iLocal_48);
			while (!unk_0xBD307E66C0669BFC(iLocal_48))
			{
				wait(0);
			}
			iLocal_43 = 0;
			break;
		
		case 1:
			if (func_9(unk_0x16F2683693E537C9()))
			{
				switch (iLocal_43)
				{
					case 0:
						if (func_557(1, 1093140480, 0))
						{
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "Trevor", 0, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 3);
							unk_0x1A6DFFFEEC27BF4F("M_HangTen", 0);
							unk_0x8B4C4CA774181102(10f, 0f, 4);
							unk_0x420FE818E70BB523(4);
							unk_0x4C902758BEA97C68(2048);
							unk_0xFCA2A436FD40C153(0, 0, 1, 0);
							iLocal_43++;
						}
						break;
					
					case 1:
						if (unk_0x22A8E52414415B76())
						{
							func_8(&iLocal_51);
							func_550(128,7314f, -1298,474f, 27,23274f, 133,0445f, -1305,98f, 32,15719f, 5f, 124,4367f, -1322,221f, 28,288f, 304,2106f, 1, 1, 1, 0, 0);
							func_513(124,4367f, -1322,221f, 28,288f, 304,2106f, 0, 145);
							func_511(vLocal_44, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1);
							func_510(500, 0);
							iLocal_276 = unk_0x1C0640BA9A7327B3();
							iLocal_43++;
						}
						break;
					
					case 2:
						unk_0x3FC8DBCC154CA56B();
						if (unk_0x22A8E52414415B76())
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_276) > 3000 && func_509("AM_H_TRCLUB"))
							{
								unk_0xA37A90C62806D848(1);
							}
							if (unk_0x3148AE92ED70DC30("Trevor", func_26(2)))
							{
								func_508(unk_0x16F2683693E537C9(), 98,5821f, -1292,239f, 28,2688f, 101,8921f, 0, 1);
							}
							if (!unk_0x9F4FE516EAACCFC5(iLocal_283))
							{
								if (unk_0xEABED1927EFB48CA(0) && !unk_0xEAD40E09B5AA81FC())
								{
									iLocal_283 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
									unk_0x86F44313DFA8F00C(iLocal_283, vLocal_371, vLocal_374, 23,11205f, 0, 2, 2, 2);
									unk_0x86F44313DFA8F00C(iLocal_283, 103,1056f, -1299,265f, 29,2456f, 0,568f, -0,2604f, 31,4411f, 23,11205f, 15000, 2, 2, 2);
									unk_0x91F5B0244AAE6222(iLocal_283, "HAND_SHAKE", 0,25f);
									unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
								}
							}
						}
						else
						{
							unk_0xBF40D896CA4BDBE7();
							unk_0xA37A90C62806D848(1);
							func_30();
							unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
							unk_0x25BB71BA267FE042(iLocal_48);
							iLocal_49 = unk_0xFBD08BECC9B87937(vLocal_365);
							iLocal_43++;
						}
						break;
					
					case 3:
						unk_0x3FC8DBCC154CA56B();
						unk_0x0007C2367F4F23F3(iLocal_49);
						if (unk_0xBD307E66C0669BFC(iLocal_49))
						{
							iLocal_43++;
						}
						break;
					
					case 4:
						unk_0x3FC8DBCC154CA56B();
						unk_0x3F423BF5B8125A50("SWITCH@MICHAEL@BENCH");
						unk_0x523BCC9DC80CD82F(413312110);
						if ((unk_0xB4AE0788C1587752("SWITCH@MICHAEL@BENCH") && unk_0xB87F6CF6E5628C67(413312110)) && func_477(&(uLocal_285[0]), 0, vLocal_365, vLocal_368.z, 1, 0, 0))
						{
							func_476(uLocal_285[0]);
							uLocal_285.f_39 = 1;
							uLocal_285.f_7 = 0;
							Local_329.f_12 = uLocal_285[0];
							func_194(uLocal_285[0], 0);
							unk_0x6A2457A23119EC53(uLocal_285[0]);
							if (!unk_0x9F4FE516EAACCFC5(iLocal_284))
							{
								iLocal_284 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
								unk_0x86F44313DFA8F00C(iLocal_284, -802,0038f, 169,6107f, 73,5191f, -6,5365f, 0f, 6,2441f, 50f, 0, 1, 1, 2);
							}
							iLocal_43++;
						}
						break;
					
					case 5:
						unk_0x3FC8DBCC154CA56B();
						if (func_193(&Local_329, iLocal_284, 0, 1, 1148829696, 1148829696, 0, 0, "v_michael", 2))
						{
							iVar0 = unk_0x00A15D69BCAA5267();
							if (iVar0 >= 3)
							{
								func_510(500, 0);
							}
							if ((Local_329.f_18 == 1 && Local_329.f_19 == 0) && func_121(&uLocal_285, 0, 0, 0))
							{
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
								unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
								iLocal_363 = unk_0xE9744DB7B8CA6965(vLocal_365, vLocal_368, 2);
								unk_0xC90224D9E95E5E3A(iLocal_363, true);
								unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_363, "SWITCH@MICHAEL@BENCH", "bench_on_phone_idle", 1000f, -8f, 5, 0, 1148846080, 0);
								iLocal_364 = unk_0x7707E48765093646(413312110, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true, true, false);
								unk_0x4EBF23A230F3B12C(iLocal_364, func_120(0));
								unk_0x9F528B1B53FBC5D9(iLocal_364, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								unk_0x71199B01895C6202(413312110);
								iLocal_43++;
							}
						}
						break;
					
					case 6:
						unk_0x3FC8DBCC154CA56B();
						func_119();
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 58, true);
						func_118(0);
						if (!func_74(&Local_329, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
						{
							iLocal_43++;
						}
						break;
					
					case 7:
						unk_0x3FC8DBCC154CA56B();
						func_119();
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 58, true);
						func_118(0);
						if (func_21() == 0)
						{
							Local_329.f_19 = 1;
							func_63(1, 1, 1, 1);
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							unk_0x5CAFA5DD13658DFE(0);
							unk_0x25BB71BA267FE042(iLocal_49);
							func_62(&uLocal_66, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
							func_62(&uLocal_66, 3, 0, "LESTER", 0, 1);
							iLocal_43++;
						}
						break;
					
					case 8:
						func_119();
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 58, true);
						func_118(0);
						func_61();
						unk_0x38C3A68D7861DCFD(0, 44, 1);
						if (func_45(&uLocal_66, "TRV5AUD", "TRV5_Miccall", 8, 0, 0, 0))
						{
							iLocal_363 = unk_0xE9744DB7B8CA6965(vLocal_365, vLocal_368, 2);
							unk_0xC90224D9E95E5E3A(iLocal_363, false);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_363, "SWITCH@MICHAEL@BENCH", "exit_forward", 4f, -4f, 7, 0, 1148846080, 0);
							iLocal_43++;
						}
						break;
					
					case 9:
						func_119();
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 58, true);
						func_118(0);
						func_61();
						unk_0x38C3A68D7861DCFD(0, 44, 1);
						if (unk_0x69DF961355195C3C(iLocal_363) && unk_0xA45992A6CE82FB43(iLocal_363) > 0,99f)
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "SWITCH@MICHAEL@BENCH", "CELLPHONE_CALL_LISTEN_BASE", 1000f, -4f, -1, 49, 0, 0, 0, 0);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
							func_63(1, 1, 1, 1);
							iLocal_43++;
						}
						break;
					
					case 10:
						func_119();
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 58, true);
						func_118(0);
						func_61();
						unk_0x38C3A68D7861DCFD(0, 44, 1);
						if (!func_44() || unk_0xBFC0798A6E3417F9(2, 225))
						{
							func_30();
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "SWITCH@MICHAEL@BENCH", "CELLPHONE_CALL_OUT", 4f, -4f, -1, 48, 0, 0, 0, 0);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
							iLocal_43++;
						}
						break;
					
					case 11:
						func_119();
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 58, true);
						func_118(0);
						func_61();
						unk_0x38C3A68D7861DCFD(0, 44, 1);
						if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "SWITCH@MICHAEL@BENCH", "CELLPHONE_CALL_OUT", 3))
						{
							if (unk_0xC844350D5D58C99A(iLocal_364) && unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "SWITCH@MICHAEL@BENCH", "CELLPHONE_CALL_OUT") > 0,3f)
							{
								func_43(&iLocal_364);
							}
						}
						else
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							if (!func_42(4, unk_0x16F2683693E537C9()))
							{
								func_41(4, unk_0x16F2683693E537C9());
							}
							unk_0x8D17794CE3273D70("SWITCH@MICHAEL@BENCH");
							iLocal_39 = 2;
						}
						break;
					}
			}
			break;
		
		case 2:
			func_10();
			break;
	}
}

void func_41(int iParam0, int iParam1)
{
	if (!unk_0xC844350D5D58C99A(iParam1))
	{
		return;
	}
	if (func_42(iParam0, iParam1))
	{
		return;
	}
	if (Global_40554[iParam0].f_24 < 5)
	{
		Global_40554[iParam0].f_25[Global_40554[iParam0].f_24] = iParam1;
		Global_40554[iParam0].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_40554[iParam0].f_25[iVar0];
			if (!unk_0xC844350D5D58C99A(iVar1) || unk_0xEB6A8945D1AC98A1(iVar1))
			{
				Global_40554[iParam0].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_42(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_43(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, true);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

int func_44()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_45(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_60(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_46(sParam2, iParam3, 0);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
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
					func_59();
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
		if (func_58(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_57();
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
				func_56();
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
				if (func_55())
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
			if (func_54())
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
			func_53();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_52();
		func_47();
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
		func_59();
	}
	return 0;
}

void func_47()
{
	if (!func_48())
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

int func_48()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_51())
	{
		return 0;
	}
	if (func_49(unk_0xD803B885F5E47A62()))
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

bool func_49(int iParam0)
{
	return func_50(iParam0, 20);
}

bool func_50(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_51()
{
	return -1;
}

void func_52()
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

void func_53()
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

int func_54()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_55()
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

void func_56()
{
	if (func_23(14))
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
		Global_19486 = func_21();
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

void func_57()
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

bool func_58(int iParam0, int iParam1)
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

void func_59()
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

void func_60(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_61()
{
	unk_0x38C3A68D7861DCFD(0, 21, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x38C3A68D7861DCFD(0, 141, 1);
	unk_0x38C3A68D7861DCFD(0, 140, 1);
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 257, 1);
	unk_0x38C3A68D7861DCFD(0, 22, 1);
	unk_0x38C3A68D7861DCFD(0, 23, 1);
}

void func_62(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_63(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = unk_0xA30EC016B12C03E4();
	unk_0xBC03DF6093E8E71F(iVar0, 0);
	unk_0x98E4DC66A651C9FA(iVar0, bParam3, 0);
	func_65(0, 1, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	unk_0xA37A90C62806D848(1);
	if (iParam0 == 1)
	{
		unk_0x5413873D3F67BF93(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_36 != 0 && iLocal_36 != 966099553) && iLocal_36 != -72657034)
		{
			if (func_9(unk_0x16F2683693E537C9()))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iLocal_36, 0))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_36, false);
				}
			}
		}
	}
	if (func_64(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
	}
}

int func_64(int iParam0)
{
	if (func_9(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_65(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_73(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_54())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_72(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_73(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_72(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_70(unk_0xD803B885F5E47A62())) && !func_67(unk_0xD803B885F5E47A62(), 0)) && !func_66()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_70(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_66()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_68(-1, 0) == 8;
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

int func_68(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_69();
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

int func_69()
{
	return Global_1312745;
}

int func_70(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
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

bool func_71()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_72(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_73(int iParam0)
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

int func_74(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, char* sParam7, bool bParam8, int iParam9)
{
	return func_75(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, sParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_75(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
{
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (unk_0x4570133D78B9B903())
		{
			if (!bParam10)
			{
				uParam0->f_13 = unk_0x16F2683693E537C9();
			}
			if ((!unk_0xEB6A8945D1AC98A1(uParam0->f_13) || bParam10) && !unk_0xEB6A8945D1AC98A1(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_95663 = 1;
				if (!bParam10)
				{
					if (unk_0x0E0E6175453415CB(uParam0->f_13))
					{
						iVar1 = unk_0x6937EA2286828455(uParam0->f_13, 0);
						func_117(iVar1, 0);
					}
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
					unk_0xE121AE1BBF90E186(uParam0->f_13, true);
					unk_0xE121AE1BBF90E186(uParam0->f_12, true);
				}
				uParam0->f_21 = func_116();
				func_109(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (unk_0x9F4FE516EAACCFC5(iParam1) || !unk_0xEA6BC48857E0AC4C(sParam8))
				{
					iVar0 |= 2;
				}
				if (func_108())
				{
					iVar0 |= 1;
				}
				if (!unk_0x991B1F0980C62628())
				{
					unk_0x1D52FC1A3A1B71B9(uParam0->f_13, uParam0->f_12, iVar0, iParam2);
					if (bParam11)
					{
						unk_0x2C6571D058F47466(iParam12);
					}
					switch (func_25(uParam0->f_13))
					{
						case 0:
							unk_0x2463ECE80D360351("SwitchHUDMichaelOut");
							break;
						
						case 1:
							unk_0x2463ECE80D360351("SwitchHUDMichaelOut");
							break;
						
						case 2:
							unk_0x2463ECE80D360351("SwitchHUDTrevorOut");
							break;
					}
					unk_0x2463ECE80D360351("SwitchHUDOut");
				}
				else if (unk_0xC1ACDB7F0AF2D095())
				{
					unk_0xA2E0894068ED0098(uParam0->f_12);
					func_107(0);
				}
				else
				{
					return 0;
				}
				if (unk_0x9F4FE516EAACCFC5(iParam1))
				{
					if (unk_0x91247047D142C00F(unk_0x68F4C0EC296D3901(uParam0->f_13, true), unk_0x68F4C0EC296D3901(uParam0->f_12, true)) != 3)
					{
						unk_0x92FBD56F769AA2C0(unk_0xD06724447386BC29(iParam1), unk_0x17D61C69BA58F815(iParam1, iParam9), unk_0x86CC98177DFF41EC(iParam1), unk_0x94AE88F396FEBF6C(iParam1), iParam9);
					}
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam8))
				{
					unk_0xF11101C30AF2B827(sParam8);
				}
				if (!Global_22211.f_111)
				{
					unk_0x22293E611B2408F1(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (unk_0x91247047D142C00F(unk_0x68F4C0EC296D3901(uParam0->f_13, true), unk_0x68F4C0EC296D3901(uParam0->f_12, true)) == 3)
					{
						unk_0x22293E611B2408F1(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_22211.f_109 == -1)
					{
						Global_22211.f_109 = unk_0xD68EA767274B7444();
					}
					Global_22211.f_110 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
					unk_0x22293E611B2408F1(Global_22211.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					unk_0x8BC9595FD2792B5D("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (unk_0x562F77A7F33D2E46("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_22211.f_109 != -1 && Global_22211.f_110 == unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()))
				{
					unk_0x55D0A2DB35045A35(Global_22211.f_109);
					unk_0x43A06902454A1172(Global_22211.f_109);
					Global_22211.f_109 = -1;
					Global_22211.f_110 = 0;
				}
				uParam0->f_25 = unk_0x1C0640BA9A7327B3();
				uParam0->f_16 = 1;
				func_106(1);
				unk_0xF374D547F2AC15B0(true, uParam0->f_13);
				if (unk_0x6C3F127AAF415E69() == 3)
				{
					unk_0xA79E2388E9C0B0DB(1);
				}
				if (unk_0xF3545351E9CBB11F() == 3)
				{
					unk_0x66472309FEEB3793(1);
				}
				if (!bParam10)
				{
					if (unk_0x134B62B726CEC8E6(uParam0->f_12) == func_26(0))
					{
						unk_0x9BF51DDC898CF6FE(func_105(0));
					}
					else if (unk_0x134B62B726CEC8E6(uParam0->f_12) == func_26(2))
					{
						unk_0x9BF51DDC898CF6FE(func_105(2));
					}
					else if (unk_0x134B62B726CEC8E6(uParam0->f_12) == func_26(1))
					{
						unk_0x9BF51DDC898CF6FE(func_105(1));
					}
					else
					{
						unk_0x9BF51DDC898CF6FE("");
					}
					unk_0x6A32F9C79E5BE856(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (unk_0x991B1F0980C62628())
		{
			if (!Global_22211.f_111)
			{
			}
			if (func_104(uParam3, 512))
			{
				if (!unk_0x5993669D98533888())
				{
				}
				else if (Global_98467 == 0)
				{
					unk_0xF95558FF85CA3673();
				}
			}
			if (unk_0x19EC8D83154D7CC1() == 3)
			{
				if (unk_0x5F7040B92D9C6136() >= 1)
				{
					if (!uParam0->f_18)
					{
						func_103();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						func_79(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (unk_0x00A15D69BCAA5267() >= 8)
				{
					if (!uParam0->f_18)
					{
						func_103();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (unk_0x25DCB332CC0D4D6F() && unk_0x00A15D69BCAA5267() == 3)
					{
						vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						vVar5 = { unk_0xF1EE614CA05DDE75() };
						fVar8 = 20f;
						fVar9 = vdist2(vVar2, vVar5);
						if (fVar9 < (fVar8 * fVar8))
						{
							func_103();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (unk_0x00A15D69BCAA5267() > 2)
					{
						func_79(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (unk_0x00A15D69BCAA5267() >= 3)
					{
						unk_0xE1DEE5B23192E5E8("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				func_103();
			}
			if (!uParam0->f_22)
			{
				func_79(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar10 = func_77();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			func_109(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			unk_0xD0A8DE83A7504880();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_22211.f_109 != -1 && Global_22211.f_110 == unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()))
		{
			unk_0x55D0A2DB35045A35(Global_22211.f_109);
			unk_0x43A06902454A1172(Global_22211.f_109);
			Global_22211.f_109 = -1;
			Global_22211.f_110 = 0;
		}
		if (unk_0x562F77A7F33D2E46("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			unk_0x8910D3D58E0132B8("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_22211.f_107 != -1 && Global_22211.f_108 == unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()))
		{
			unk_0x55D0A2DB35045A35(Global_22211.f_107);
			unk_0x43A06902454A1172(Global_22211.f_107);
			Global_22211.f_107 = -1;
			Global_22211.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			unk_0x2FB9A57162E54BAB(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			unk_0xEF6276132B396452(fParam4, 1065353216);
		}
		if (!Global_42562)
		{
			unk_0x051C254DA616D646(true);
			unk_0x36629DB72EBCB78C(0f);
			unk_0x58478905E1A5347E(0f);
		}
		if (!bParam10)
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_13))
			{
				unk_0x4A4806F9D471E491(uParam0->f_13, true, 0);
				unk_0x25C5402CC10F76CD(uParam0->f_13, true);
				if (!unk_0x405E212DDE472467(uParam0->f_13, 0))
				{
					unk_0x20641932E5104B25(uParam0->f_13, true, 0);
				}
				if (unk_0x0E0E6175453415CB(uParam0->f_13))
				{
					iVar11 = unk_0x6937EA2286828455(uParam0->f_13, 0);
					func_117(iVar11, 1);
				}
			}
		}
		func_107(0);
		if (!bParam10)
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_13) || bParam10)
			{
				unk_0xE121AE1BBF90E186(uParam0->f_13, false);
			}
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_12))
			{
				unk_0xE121AE1BBF90E186(uParam0->f_12, false);
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			func_76();
			unk_0x4DE1704D3983937F(func_105(func_21()));
		}
		func_106(0);
		unk_0xF374D547F2AC15B0(false, 0);
		return 0;
	}
	unk_0x3FC8DBCC154CA56B();
	return 1;
}

void func_76()
{
	if (Global_2451426.f_6464)
	{
		Global_2451426.f_6464 = 0;
	}
}

int func_77()
{
	if (unk_0x991B1F0980C62628())
	{
		return Global_96854;
	}
	if (func_78())
	{
		return Global_96854;
	}
	return 318;
}

int func_78()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_101(bParam0, 0);
	}
	func_99(0);
	func_80(66);
}

void func_80(int iParam0)
{
	iVar0 = func_98();
	if (Global_1312877)
	{
		sVar1 = func_97(iParam0);
		iVar2 = unk_0x12AB0310C2281427(sVar1);
		func_96(&Global_2462940, 1, 0);
		unk_0x1ADDCBD29A516AA5(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_81();
	}
	Global_1312812 = iParam0;
}

void func_81()
{
	if (Global_2460586)
	{
		if (func_83())
		{
			unk_0x53491B90E4FD0E56(0);
			func_82();
		}
	}
}

void func_82()
{
	if (Global_2460583)
	{
		if (!Global_2460582)
		{
			Global_2460582 = 1;
			Global_2460591 = unk_0x1C0640BA9A7327B3();
			Global_2460590 = 1;
		}
	}
}

int func_83()
{
	if (Global_2451426.f_6464 && Global_2460583)
	{
		if (func_86(0))
		{
			if (func_84() && !unk_0x757EF87A33649210())
			{
				if (((Global_2451426.f_6486 == 122 || Global_2451426.f_6486 == 123) || Global_2451426.f_6486 == 124) || Global_2451426.f_6486 == 125)
				{
					return 1;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_68.f_2, 26))
				{
					return 1;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62()].f_68.f_2, 27))
				{
					return 1;
				}
				if (Global_1687717)
				{
					return 1;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_37, 23))
				{
					if (!func_67(unk_0xD803B885F5E47A62(), 0) && !func_71())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_84()
{
	if (func_85() == 0)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	return Global_1312467.f_18;
}

int func_86(int iParam0)
{
	if (func_93(unk_0xD803B885F5E47A62()) && unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 22))
	{
		return 0;
	}
	if (Global_1315690)
	{
		return 0;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (func_92())
	{
		return 0;
	}
	if ((Global_2460584 && func_91()) || Global_2460584 == 0)
	{
		return 1;
	}
	if (Global_2451426.f_6486 == 123 && Global_2460587)
	{
		return 1;
	}
	if (Global_2460585)
	{
		if (Global_2451426.f_6486 == 122)
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_37, 23))
	{
		if (!func_67(unk_0xD803B885F5E47A62(), 0) && !func_71())
		{
			return 1;
		}
	}
	if (Global_2460588)
	{
		if (iParam0 == 0)
		{
			if ((Global_2451426.f_6486 == 123 || (Global_2451426.f_6486 == 124 && func_89() == 1)) || Global_2451426.f_6486 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2451426.f_6464 || func_87(-1046478848)) && Global_2460589)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_87(float fParam0)
{
	vVar0 = { func_88(unk_0xD803B885F5E47A62()) };
	if (vVar0.z < fParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (!unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_88(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_89()
{
	return func_90(unk_0xD803B885F5E47A62());
}

int func_90(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

bool func_91()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_92()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_93(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_95(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_94(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)
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
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
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

void func_96(var uParam0, bool bParam1, bool bParam2)
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

char* func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

var func_98()
{
	return Global_1312812;
}

void func_99(int iParam0)
{
	iVar0 = func_100();
	Global_1312811 = iParam0;
}

int func_100()
{
	return Global_1312811;
}

void func_101(bool bParam0, bool bParam1)
{
	func_102(&Global_22131, bParam1);
	unk_0x23F80404F3C4C299(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x4422CF36C77B77E7();
			func_107(0);
			if (unk_0xC844350D5D58C99A(Global_1315659))
			{
				if (unk_0x9C77D2D0559097F0(Global_1315659, 0))
				{
					if (!unk_0xAF6690C489CC6203(Global_1315659))
					{
						unk_0x73270B3C9CC833FD(Global_1315659, false, 0);
					}
					unk_0xEBA53F35D0085654(&Global_1315659);
				}
			}
		}
	}
}

void func_102(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_9))
	{
		if (unk_0xFBB4F23D534EB790(uParam0->f_9))
		{
			func_106(0);
		}
		unk_0x9A8DDC7C522F5BF5(uParam0->f_9, 0);
	}
	if (!Global_42562)
	{
		unk_0x051C254DA616D646(true);
		unk_0x36629DB72EBCB78C(0f);
		unk_0x58478905E1A5347E(0f);
	}
	Global_2405072.f_598 = 0f;
	if (!bParam1)
	{
		unk_0xB3A1B75CB59FEB56(false, false, 0, 1, 0, 0);
	}
}

void func_103()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0].f_16);
		iVar0++;
	}
}

bool func_104(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_105(int iParam0)
{
	iParam0 = iParam0;
	return "";
}

void func_106(int iParam0)
{
	Global_22209 = iParam0;
}

void func_107(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2462918 = 0;
	}
	Global_1312467.f_18 = iParam0;
}

bool func_108()
{
	return Global_1312877;
}

void func_109(bool bParam0)
{
	if (bParam0)
	{
		func_115();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_114(0))
		{
			func_110(0);
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

void func_110(int iParam0)
{
	if (func_113())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_112())
		{
			func_111(1, 1);
		}
		else
		{
			func_111(0, 0);
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
	if (!func_54())
	{
		Global_19486.f_1 = 3;
	}
}

void func_111(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_114(0))
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

bool func_112()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_113()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_114(int iParam0)
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

void func_115()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_116()
{
	if (Global_19486.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_117(int iParam0, int iParam1)
{
	if (unk_0xAF6690C489CC6203(iParam0))
	{
		unk_0x6728CA90E5387ABE(iParam0, iParam1);
	}
	else
	{
		unk_0x73270B3C9CC833FD(iParam0, true, 0);
		unk_0x6728CA90E5387ABE(iParam0, iParam1);
		unk_0x046C362CF15F1935(&iParam0);
	}
}

void func_118(int iParam0)
{
	if (func_113())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_114(0))
		{
			func_110(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_119()
{
	Global_42350 = 1;
}

int func_120(int iParam0)
{
	if (iParam0 == 0)
	{
		switch (Global_111638.f_14046[0].f_6)
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
			
			default:
				return -1;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (Global_111638.f_14046[1].f_6)
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
			
			default:
				return -1;
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (Global_111638.f_14046[2].f_6)
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
			
			default:
				return -1;
				break;
			}
	}
	return -2;
}

int func_121(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!unk_0xEB6A8945D1AC98A1((*uParam0)[uParam0->f_7]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && (*uParam0)[uParam0->f_7] != unk_0x16F2683693E537C9())
	{
		if (!bParam2)
		{
			if ((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			else
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			if ((unk_0x869EFD0BC0868856((*uParam0)[uParam0->f_7]) && !unk_0x4E861BC5B1EDA7BD((*uParam0)[uParam0->f_7])) && !unk_0x81A5359F25512A04((*uParam0)[uParam0->f_7]))
			{
				unk_0x327AAEE25F323797((*uParam0)[uParam0->f_7]);
			}
			else
			{
				unk_0xA3BF0AA5A2608191((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = unk_0x16F2683693E537C9();
		iVar1 = func_21();
		if (!uParam0->f_23)
		{
			func_180(iVar0, 0);
		}
		func_178(iVar1, &iVar0);
		unk_0x4E885A246A9D983A(iVar0, 32, true);
		unk_0x4E885A246A9D983A(iVar0, 250, true);
		iVar2 = func_177(uParam0->f_7);
		func_180((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((to_float(unk_0x7F6DC62EA9922664((*uParam0)[uParam0->f_7])) - 100f) / (to_float(unk_0x65BC0B7172CA52DD((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (func_25(unk_0x16F2683693E537C9()))
		{
			case 0:
				if (unk_0xED4934AFB6EC6451("BulletTime"))
				{
					unk_0x9A1335ECD7BD117F("BulletTime");
				}
				if (unk_0xED4934AFB6EC6451("BulletTimeOut"))
				{
					unk_0x9A1335ECD7BD117F("BulletTimeOut");
				}
				break;
			
			case 1:
				if (unk_0xED4934AFB6EC6451("DrivingFocus"))
				{
					unk_0x9A1335ECD7BD117F("DrivingFocus");
				}
				if (unk_0xED4934AFB6EC6451("DrivingFocusOut"))
				{
					unk_0x9A1335ECD7BD117F("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (unk_0xED4934AFB6EC6451("REDMIST"))
				{
					unk_0x9A1335ECD7BD117F("REDMIST");
				}
				if (unk_0xED4934AFB6EC6451("REDMISTOut"))
				{
					unk_0x9A1335ECD7BD117F("REDMISTOut");
				}
				break;
		}
		if (func_24(func_21()))
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
			{
				unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
			}
		}
		unk_0xA9B99C3482AC0D20(unk_0xD803B885F5E47A62(), (*uParam0)[uParam0->f_7], bParam2, 0);
		unk_0x3584F71E5CA29322(3);
		unk_0x3584F71E5CA29322(13);
		if (iParam3 & 1 != 0)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 210, false);
		}
		if (func_174(0) || func_174(3))
		{
			if (Global_22211.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar4].f_1, 2))
					{
						iVar5 = Global_89496[iVar4];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_89532[Global_76891.f_109[iVar5]]), 64);
						unk_0x9505C13496579D28(unk_0x12AB0310C2281427(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_22211.f_13 = 0;
		uParam0->f_5 = func_173(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = func_173(iVar2);
		uParam0->f_7 = 4;
		iVar22 = unk_0x16F2683693E537C9();
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
		func_172(iVar22);
		unk_0x1160BAA065E2C9E5(iVar22, 0, 0);
		if (fVar3 < 25f && !unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
		{
			unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), round((((25f / 100f) * (to_float(unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				unk_0x4A4806F9D471E491(iVar0, true, 0);
				func_172(iVar0);
				unk_0x1160BAA065E2C9E5(iVar0, 0, 0);
				unk_0x6E8BDA9057564534(iVar0, 0, 0);
			}
		}
		else if (unk_0xC844350D5D58C99A(iVar0))
		{
			sVar24 = unk_0xA712FAE854841798(iVar0, &uVar23);
			if (!unk_0x2EBF5002C6B6A06C(sVar24))
			{
				if (!unk_0x7F8A39872A07D2CE(sVar24, unk_0xBB0808A181D4745C()))
				{
					unk_0x73270B3C9CC833FD(iVar0, false, 1);
				}
				unk_0xEBA53F35D0085654(&iVar0);
			}
		}
		Global_96026 = 1;
		func_170(unk_0x16F2683693E537C9());
		func_169();
		func_168(iVar2);
		func_159();
		func_154(iVar2);
		func_126(func_152(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 145, 0));
		unk_0x324CFDE7809E2EC2(unk_0xD803B885F5E47A62());
		unk_0x7980D72D61BEF4D5(unk_0x16F2683693E537C9(), false);
		unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), func_125(67));
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0xE21702DBF1967A40(unk_0xD803B885F5E47A62(), func_125(68));
		}
		func_124(iVar2, &iVar22);
		if (((func_23(0) || func_23(3)) || func_23(2)) || func_23(4))
		{
			unk_0x4E885A246A9D983A(iVar22, 32, false);
			unk_0x4E885A246A9D983A(iVar22, 250, false);
		}
		else
		{
			unk_0x4E885A246A9D983A(iVar22, 32, true);
			unk_0x4E885A246A9D983A(iVar22, 250, true);
		}
		if (!func_123())
		{
			func_122();
		}
		Global_95663 = 0;
		return 1;
	}
	else
	{
		if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
		}
		if (unk_0xEB6A8945D1AC98A1((*uParam0)[uParam0->f_7]))
		{
		}
		if (unk_0x16F2683693E537C9() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_122()
{
	if (Global_96056)
	{
		func_22();
		unk_0x9BF51DDC898CF6FE(func_105(Global_111638.f_2358.f_539.f_4321));
	}
	else
	{
		unk_0x9BF51DDC898CF6FE("");
	}
}

bool func_123()
{
	return Global_22209;
}

void func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_41(4, *iParam1);
			func_41(7, *iParam1);
			func_41(8, *iParam1);
			func_41(11, *iParam1);
			break;
		
		case 1:
			if (Global_111638.f_9080.f_330[2])
			{
				func_41(4, *iParam1);
			}
			func_41(7, *iParam1);
			func_41(8, *iParam1);
			func_41(11, *iParam1);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_41(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_330[20])
			{
				func_41(4, *iParam1);
			}
			func_41(7, *iParam1);
			func_41(8, *iParam1);
			func_41(11, *iParam1);
			break;
	}
}

int func_125(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_126(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(Global_37218[(38 / 32)]), (38 % 32));
			func_127(38, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(41 / 32)]), (41 % 32));
			func_127(41, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(43 / 32)]), (43 % 32));
			func_127(43, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(42 / 32)]), (42 % 32));
			func_127(42, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(44 / 32)]), (44 % 32));
			func_127(44, 0);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_127(51, 0);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_127(51, 0);
			break;
		
		case 3:
			unk_0x5D96D8530B3D0904(&(Global_37218[(53 / 32)]), (53 % 32));
			func_127(53, 0);
			break;
		
		case 4:
			unk_0x5D96D8530B3D0904(&(Global_37218[(81 / 32)]), (81 % 32));
			func_127(81, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(82 / 32)]), (82 % 32));
			func_127(82, 0);
			break;
		
		case 5:
			unk_0x5D96D8530B3D0904(&(Global_37218[(47 / 32)]), (47 % 32));
			func_127(47, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_127(50, 0);
			break;
		
		case 6:
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_127(50, 0);
			break;
	}
}

void func_127(int iParam0, int iParam1)
{
	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_129(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_128(iParam0);
			}
		}
	}
}

void func_128(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_129(int iParam0)
{
	if (!func_149())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_148(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_134(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true);
	if ((unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (unk_0x8A22C4C08282BF26(1832807115) == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						Global_98796.f_343 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					unk_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x0674E58A79778E99(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_131(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_23(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 1) && unk_0x8A22C4C08282BF26(92439941) == 0)
	{
		if (func_130())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0,015f)
					{
						iVar14 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar15 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			unk_0x0674E58A79778E99(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		unk_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_128(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

int func_130()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		return 0;
	}
	switch (func_21())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_131(int iParam0)
{
	iVar0 = func_21();
	if (func_132(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], 0) || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], 0))
			{
				return 0;
			}
		}
		if (func_24(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_93771[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[0], 0))
				{
					return 0;
				}
			}
			if (func_24(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], 0))
				{
					return 0;
				}
			}
			if (func_24(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], 0))
				{
					return 0;
				}
			}
			if (func_24(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[2], 0))
				{
					return 0;
				}
				if (func_24(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_93771[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[1], 0))
				{
					return 0;
				}
				if (func_24(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_93771[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[3], 0))
				{
					return 0;
				}
			}
			if (func_24(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_93771[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_132(int iParam0)
{
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_133(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1)));
				switch (iVar0)
				{
					case 516990260:
					case -845961253:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_133(int iParam0)
{
	return iParam0;
}

void func_134(int iParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_137();
	iVar1 = func_136(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_135(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_135(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_135(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(1139079984) == 0 && unk_0x8A22C4C08282BF26(478649282) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else if (unk_0x8A22C4C08282BF26(1139079984) == 0 && unk_0x8A22C4C08282BF26(478649282) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_135(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_135(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_135(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(-1802680602) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (unk_0x8A22C4C08282BF26(-1802680602) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x8A22C4C08282BF26(Global_89532[70].f_6) == 0)
			{
				if (!func_135(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x8A22C4C08282BF26(1723330028) == 0)
			{
				if (!func_135(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_135(iParam0) && unk_0x8A22C4C08282BF26(Global_89532[26].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_135(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[43].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_135(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_135(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[93].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_135(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_135(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[8].f_6) == 0 && unk_0x8A22C4C08282BF26(Global_89532[10].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_135(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_89532[47].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x8A22C4C08282BF26(Global_89532[70].f_6) == 0)
			{
				if (!func_135(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x8A22C4C08282BF26(Global_89532[48].f_6) == 0)
			{
				if (!func_135(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x8A22C4C08282BF26(Global_89532[39].f_6) == 0)
			{
				if (!func_135(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_135(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_135(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_135(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
	}
}

bool func_135(int iParam0)
{
	Var0 = { func_148(iParam0) };
	iVar7 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_136(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

var func_137()
{
	func_147(&uVar0, unk_0x4460E481B9E33ADA());
	func_146(&uVar0, unk_0x8D199E381D262EEF());
	func_145(&uVar0, unk_0xD8A54335F18763BA());
	func_140(&uVar0, unk_0x972A296334C9D57B());
	func_139(&uVar0, unk_0x118229AD063C3C1D());
	func_138(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_138(var uParam0, int iParam1)
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

void func_139(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_140(var uParam0, int iParam1)
{
	iVar0 = func_144(*uParam0);
	iVar1 = func_142(*uParam0);
	if (iParam1 < 1 || iParam1 > func_141(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_141(int iParam0, int iParam1)
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

var func_142(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_143(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_143(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_144(var uParam0)
{
	return uParam0 & 15;
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

struct<7> func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = -1844444717;
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = -1844444717;
			Var0 = { -1287,857f, -1115,742f, 7,1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = -1844444717;
			Var0 = { 1932,952f, 3725,154f, 32,9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = -1844444717;
			Var0 = { 1207,873f, -470,063f, 66,358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = -1844444717;
			Var0 = { -29,8692f, -148,1571f, 57,2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = -1844444717;
			Var0 = { -280,7851f, 6232,782f, 31,8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = -1663512092;
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823,2001f, -187,0831f, 37,819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = 145369505;
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822,4442f, -188,3924f, 37,819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = 868499217;
			Var0 = { 82,3186f, -1392,752f, 29,5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = -1148826190;
			Var0 = { 82,3186f, -1390,476f, 29,5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = 868499217;
			Var0 = { 1686,983f, 4821,741f, 42,2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = -1148826190;
			Var0 = { 1687,282f, 4819,484f, 42,2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = 868499217;
			Var0 = { 418,637f, -806,457f, 29,6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = -1148826190;
			Var0 = { 418,637f, -808,733f, 29,6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = 868499217;
			Var0 = { -1096,661f, 2705,446f, 19,2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = -1148826190;
			Var0 = { -1094,965f, 2706,964f, 19,2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = 868499217;
			Var0 = { 1196,825f, 2703,221f, 38,3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = -1148826190;
			Var0 = { 1199,101f, 2703,221f, 38,3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = 868499217;
			Var0 = { -818,7642f, -1079,544f, 11,4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = -1148826190;
			Var0 = { -816,7932f, -1078,406f, 11,4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = 868499217;
			Var0 = { -0,0564f, 6517,461f, 32,0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = -1148826190;
			Var0 = { -1,7253f, 6515,914f, 32,0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = 1780022985;
			Var0 = { -1201,435f, -776,8566f, 17,9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = 1780022985;
			Var0 = { 617,2458f, 2751,022f, 42,7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = 1780022985;
			Var0 = { 127,8201f, -211,8274f, 55,2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = 1780022985;
			Var0 = { -3167,75f, 1055,536f, 21,5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = -1922281023;
			Var0 = { -716,6754f, -155,42f, 37,6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = -1922281023;
			Var0 = { -715,6154f, -157,2561f, 37,6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = -1922281023;
			Var0 = { -157,0924f, -306,4413f, 39,994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = -1922281023;
			Var0 = { -156,4022f, -304,4366f, 39,994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = -1922281023;
			Var0 = { -1454,782f, -231,7927f, 50,0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = -1922281023;
			Var0 = { -1456,201f, -233,3682f, 50,0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = 543652229;
			Var0 = { 321,81f, 178,36f, 103,68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859,89f, 3749,79f, 33,18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289,1752f, 6199,112f, 31,637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = 543652229;
			Var0 = { -1155,454f, -1424,008f, 5,0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = 543652229;
			Var0 = { 1321,286f, -1650,597f, 52,3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = 543652229;
			Var0 = { -3167,789f, 1074,767f, 20,9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = 159994461;
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = -1686014385;
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = 30769481;
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6,5f;
			break;
		
		case 41:
			Var0.f_3 = -1454760130;
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = 1245831483;
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = -1454760130;
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = 1245831483;
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = -1568354151;
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = 1019527301;
			Var0 = { -802,7333f, 167,5041f, 77,5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = 520341586;
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = 1413743677;
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = 703855057;
			Var0 = { -25,28f, -1431,06f, 30,84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = 308207762;
			Var0 = { 7,52f, 539,53f, 176,18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = 132154435;
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = 67910261;
			Var0 = { 1972,787f, 3824,554f, 32,5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = -607040053;
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = -550347177;
			Var0 = { -1145,9f, -1991,14f, 14,18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = 270330101;
			Var0 = { 723,12f, -1088,83f, 23,28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = -550347177;
			Var0 = { -356,09f, -134,77f, 40,01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = -822900180;
			Var0 = { 108,8502f, 6617,876f, 32,673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = -822900180;
			Var0 = { 114,3206f, 6623,226f, 32,7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = -822900180;
			Var0 = { 1182,305f, 2645,242f, 38,807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = -822900180;
			Var0 = { 1174,654f, 2645,242f, 38,6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205,7007f, -1310,692f, 30,2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = 486670049;
			Var0 = { -107,5401f, -9,0258f, 70,6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = 245182344;
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = -681066206;
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = 551491569;
			Var0 = { 709,9813f, -963,5311f, 30,5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = 933053701;
			Var0 = { 709,9894f, -960,6675f, 30,5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = 426403179;
			Var0 = { 707,8046f, -962,4564f, 30,5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = 1173348778;
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = -1428622127;
			Var0 = { 1083,547f, -1975,435f, 31,6222f };
			Var0.f_5 = 792295685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = -1428622127;
			Var0 = { 1065,237f, -2006,079f, 32,2329f };
			Var0.f_5 = 563273144;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = -1428622127;
			Var0 = { 1085,307f, -2018,561f, 41,6289f };
			Var0.f_5 = -726993043;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = -353187150;
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = -1666470363;
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = 1145337974;
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = -1647153464;
			Var0 = { 1271,89f, -1707,57f, 53,79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = -1647153464;
			Var0 = { 1270,77f, -1708,1f, 53,75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = -2069558801;
			Var0 = { -127,5f, -1456,18f, 37,94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = -190780785;
			Var0 = { 483,56f, -1316,08f, 32,18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = -664582244;
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = -1116041313;
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = 668467214;
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = -1306074314;
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = -1375589668;
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = -1375589668;
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = -1032171637;
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = -52575179;
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = 338220432;
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = 1075555701;
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = -1032171637;
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = -52575179;
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = -1032171637;
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = -52575179;
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = -1652821467;
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = 1013329911;
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = -502195954;
			Var0 = { -1104,66f, -1638,48f, 4,68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = -2051651622;
			Var0 = { -31,72f, -1101,85f, 26,57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = 464151082;
			Var0 = { 134,4f, -2204,1f, 7,52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = -1081024910;
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = -1081024910;
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = 1099436502;
			Var0 = { -608,73f, -1610,32f, 27,16f };
			Var0.f_5 = -1811763714;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = -1627599682;
			Var0 = { -611,32f, -1610,09f, 27,16f };
			Var0.f_5 = 1608500665;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = 1099436502;
			Var0 = { -592,94f, -1631,58f, 27,16f };
			Var0.f_5 = -1456048340;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = -1627599682;
			Var0 = { -592,71f, -1628,99f, 27,16f };
			Var0.f_5 = 943854909;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = 1173348778;
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988,353f, 3054,411f, 47,3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = -2045308299;
			Var0 = { -700,17f, 47,31f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = -42303174;
			Var0 = { -697,94f, 48,35f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241,3574f, 361,0488f, 105,8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = 913904359;
			Var0 = { -689,11f, 506,97f, 110,64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = -495720969;
			Var0 = { -1055,96f, -236,43f, 44,17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = 668467214;
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = 1342464176;
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = 1436076651;
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = 1413743677;
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = -815851463;
			Var0 = { 23,34f, -1897,6f, 23,05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = -684382235;
			Var0 = { 524,2f, 3081,14f, 41,16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = 1378348636;
			Var0 = { -1910,58f, -576,01f, 19,25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = -2076287065;
			Var0 = { -720,39f, 256,86f, 80,29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = -374527357;
			Var0 = { -718,42f, 257,79f, 80,29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = -1517873911;
			Var0 = { 106,38f, -742,7f, 46,18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = -90456267;
			Var0 = { 105,76f, -746,65f, 46,18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = -1207991715;
			Var0 = { -2343,53f, 3265,37f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = -1207991715;
			Var0 = { -2342,23f, 3267,62f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = -566611162;
			Var0 = { -1041,933f, -2748,167f, 22,0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = -551602996;
			Var0 = { -1044,841f, -2746,489f, 22,0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = 1104171198;
			Var0 = { -1045,12f, -232,004f, 39,4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = -1425071302;
			Var0 = { -1046,516f, -229,3581f, 39,4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = -1679881977;
			Var0 = { -1083,62f, -260,4167f, 38,1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = -1045015371;
			Var0 = { -1080,974f, -259,0204f, 38,1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = -1033001619;
			Var0 = { -1042,57f, -240,6f, 38,11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = -1023447729;
			Var0 = { 1385,258f, -2079,949f, 52,7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = 73386408;
			Var0 = { 1656,57f, 4849,66f, 42,35f };
			Var0.f_5 = 243782214;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = -1152174184;
			Var0 = { 1656,25f, 4852,24f, 42,35f };
			Var0.f_5 = 714115627;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051,402f, -474,6847f, 36,6199f };
			Var0.f_5 = 1668106976;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049,285f, -476,6376f, 36,7584f };
			Var0.f_5 = 1382347031;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210,957f, -580,8765f, 27,2373f };
			Var0.f_5 = -966790948;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212,445f, -578,4401f, 27,2373f };
			Var0.f_5 = -2068750132;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = 993120320;
			Var0 = { -565,1712f, 276,6259f, 83,2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = 993120320;
			Var0 = { -561,2863f, 293,5043f, 87,7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = 1425919976;
			Var0 = { -631,96f, -236,33f, 38,21f };
			Var0.f_5 = 1874948872;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = 9467943;
			Var0 = { -630,43f, -238,44f, 38,21f };
			Var0.f_5 = -1965020851;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231,62f, 216,23f, 106,4f };
			Var0.f_5 = 1951546856;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232,72f, 213,88f, 106,4f };
			Var0.f_5 = -431382051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258,32f, 203,84f, 106,43f };
			Var0.f_5 = -293975210;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260,76f, 202,95f, 106,43f };
			Var0.f_5 = -785215289;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256,31f, 220,66f, 106,43f };
			Var0.f_5 = -366143778;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = 1956494919;
			Var0 = { 266,36f, 217,57f, 110,43f };
			Var0.f_5 = 440819155;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = -1501157055;
			Var0 = { -442,66f, 6015,222f, 31,8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = -1501157055;
			Var0 = { -444,4985f, 6017,06f, 31,8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = -1765048490;
			Var0 = { 1855,685f, 3683,93f, 34,5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = -403433025;
			Var0 = { -1223,35f, -172,41f, 39,98f };
			Var0.f_5 = -320891223;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = 1308911070;
			Var0 = { -1220,93f, -173,68f, 39,98f };
			Var0.f_5 = 1511747875;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = -403433025;
			Var0 = { -1211,99f, -190,57f, 39,98f };
			Var0.f_5 = -1517722103;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = 1308911070;
			Var0 = { -1213,26f, -192,98f, 39,98f };
			Var0.f_5 = -1093199712;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = -403433025;
			Var0 = { -1217,77f, -201,54f, 39,98f };
			Var0.f_5 = 1902048492;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = 1308911070;
			Var0 = { -1219,04f, -203,95f, 39,98f };
			Var0.f_5 = -444768985;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = -582278602;
			Var0 = { 2514,32f, -317,34f, 93,32f };
			Var0.f_5 = 404057594;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = 1343686600;
			Var0 = { 2512,42f, -319,26f, 93,32f };
			Var0.f_5 = -1417472813;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = -26664553;
			Var0 = { 2333,23f, 2574,97f, 47,03f };
			Var0.f_5 = -1376084479;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = 914592203;
			Var0 = { 2329,65f, 2576,64f, 47,03f };
			Var0.f_5 = 457472151;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = 97297972;
			Var0 = { 16,1279f, -1114,605f, 29,9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = -8873588;
			Var0 = { 18,572f, -1115,495f, 29,9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = 97297972;
			Var0 = { 1698,176f, 3751,506f, 34,8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = -8873588;
			Var0 = { 1699,937f, 3753,42f, 34,8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = 97297972;
			Var0 = { 244,7274f, -44,0791f, 70,91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = -8873588;
			Var0 = { 243,8379f, -46,5232f, 70,91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = 97297972;
			Var0 = { 845,3624f, -1024,539f, 28,3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = -8873588;
			Var0 = { 842,7684f, -1024,539f, 23,3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = 97297972;
			Var0 = { -326,1122f, 6075,27f, 31,6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = -8873588;
			Var0 = { -324,273f, 6077,109f, 31,6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = 97297972;
			Var0 = { -665,2424f, -944,3256f, 21,9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = -8873588;
			Var0 = { -662,6414f, -944,3256f, 21,9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = 97297972;
			Var0 = { -1313,826f, -389,1259f, 36,8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = -8873588;
			Var0 = { -1314,465f, -391,6472f, 36,8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = 97297972;
			Var0 = { -1114,009f, 2689,77f, 18,7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = -8873588;
			Var0 = { -1112,071f, 2691,505f, 18,7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = 97297972;
			Var0 = { -3164,845f, 1081,392f, 20,9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = -8873588;
			Var0 = { -3163,812f, 1083,778f, 20,9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = 97297972;
			Var0 = { 2570,905f, 303,3556f, 108,8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = -8873588;
			Var0 = { 2568,304f, 303,3556f, 108,8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = 97297972;
			Var0 = { 813,1779f, -2148,27f, 29,7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = -8873588;
			Var0 = { 810,5769f, -2148,27f, 29,7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = 452874391;
			Var0 = { 6,8179f, -1098,209f, 29,9469f };
			Var0.f_5 = 1487704245;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = 452874391;
			Var0 = { 827,5342f, -2160,493f, 29,7688f };
			Var0.f_5 = 1529812051;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = 546378757;
			Var0 = { -1107,01f, 289,38f, 64,76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = -1249591818;
			Var0 = { -1101,62f, 290,36f, 64,76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = 546378757;
			Var0 = { -1138,64f, 300,82f, 67,18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = -1249591818;
			Var0 = { -1137,05f, 295,59f, 67,18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = 1878909644;
			Var0 = { -2053,16f, 3239,49f, 30,5f };
			Var0.f_5 = -621770121;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = 1709395619;
			Var0 = { -2054,39f, 3237,23f, 30,5f };
			Var0.f_5 = 1018580481;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = -1184592117;
			Var0 = { -108,91f, 6469,11f, 31,91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = -1156020871;
			Var0 = { -182,91f, 6168,37f, 32,14f };
			Var0.f_5 = -1331552374;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = 2059227086;
			Var0 = { -59,89f, -1092,95f, 26,88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = 1417577297;
			Var0 = { -60,55f, -1094,75f, 26,89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = 2059227086;
			Var0 = { -39,13f, -1108,22f, 26,72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = 1417577297;
			Var0 = { -37,33f, -1108,87f, 26,72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = -1428622127;
			Var0 = { 1943,73f, 3803,63f, 32,31f };
			Var0.f_5 = -2018911784;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = 73386408;
			Var0 = { 316,39f, -276,49f, 54,52f };
			Var0.f_5 = -93934272;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = -1152174184;
			Var0 = { 313,96f, -275,6f, 54,52f };
			Var0.f_5 = 667682830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = 73386408;
			Var0 = { -2965,71f, 484,22f, 16,05f };
			Var0.f_5 = 1876735830;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = -1152174184;
			Var0 = { -2965,82f, 481,63f, 16,05f };
			Var0.f_5 = -2112857171;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = 1755793225;
			Var0 = { 962,1f, -2183,83f, 31,06f };
			Var0.f_5 = 2046930518;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = 239858268;
			Var0 = { 961,79f, -2187,08f, 31,06f };
			Var0.f_5 = 1208502884;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = 1742849246;
			Var0 = { 2508,43f, -336,63f, 115,76f };
			Var0.f_5 = 1986432421;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = -44475594;
			Var0 = { -2255,19f, 322,26f, 184,93f };
			Var0.f_5 = -722798986;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = 1183182250;
			Var0 = { -2254,06f, 319,7f, 184,93f };
			Var0.f_5 = 204301578;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = -44475594;
			Var0 = { -2301,13f, 336,91f, 184,93f };
			Var0.f_5 = -320140460;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = 1183182250;
			Var0 = { -2298,57f, 338,05f, 184,93f };
			Var0.f_5 = 65222916;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = -44475594;
			Var0 = { -2222,32f, 305,86f, 184,93f };
			Var0.f_5 = -920027322;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = 1183182250;
			Var0 = { -2221,19f, 303,3f, 184,93f };
			Var0.f_5 = -58432001;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = -44475594;
			Var0 = { -2280,6f, 265,43f, 184,93f };
			Var0.f_5 = -2007378629;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = 1183182250;
			Var0 = { -2278,04f, 266,57f, 184,93f };
			Var0.f_5 = 418772613;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = -982531572;
			Var0 = { 778,31f, -1867,49f, 30,66f };
			Var0.f_5 = 1679064921;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = -1049302886;
			Var0 = { -721,35f, 91,01f, 56,68f };
			Var0.f_5 = 412198396;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = 1653418708;
			Var0 = { -728,84f, 88,64f, 56,68f };
			Var0.f_5 = -1053755588;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = 650392296;
			Var0 = { -2287,62f, 363,9f, 174,93f };
			Var0.f_5 = -53446139;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = -267139712;
			Var0 = { -2289,78f, 362,91f, 174,93f };
			Var0.f_5 = 1333960556;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = 650392296;
			Var0 = { -2289,86f, 362,88f, 174,93f };
			Var0.f_5 = -41786493;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = -267139712;
			Var0 = { -2292,01f, 361,89f, 174,93f };
			Var0.f_5 = 1750120734;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = 1127922797;
			Var0 = { 1803,94f, 3929,01f, 33,72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = 73386408;
			Var0 = { -348,81f, -47,26f, 49,39f };
			Var0.f_5 = -2116116146;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = -1152174184;
			Var0 = { -351,26f, -46,41f, 49,39f };
			Var0.f_5 = -74083138;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = -1468417022;
			Var0 = { 962,9084f, -2105,814f, 34,6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_149()
{
	if ((func_151() == -1 || func_151() == 999) && !func_150() == 0)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	return Global_30769;
}

int func_151()
{
	return Global_30768;
}

int func_152(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_153(iVar0) || iParam4 == 0)
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

bool func_153(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

void func_154(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_155(iParam0, iVar0);
		iVar0++;
	}
}

void func_155(int iParam0, int iParam1)
{
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_158(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_156(iVar3, -1, 0);
	}
	else
	{
		unk_0x6FB46C25CCB7E6D5(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0,8f + (0,4f * (to_float(iVar0) / 100f)));
			unk_0xF7599E37AEBF26E7(unk_0xD803B885F5E47A62(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x8A22C4C08282BF26(-110852562) != 0 || unk_0x8A22C4C08282BF26(56357151) != 0)
			{
				Global_96027 = 1;
			}
			else
			{
				fVar1 = (1f - (to_float(iVar0) / 100f));
				unk_0x0FFE8B6DB75A4C39(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xE78BAF6C6D97879A(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xEE195B25E889FD63(unk_0xD803B885F5E47A62(), fVar1);
			}
			break;
	}
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_157(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_157(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_69();
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

void func_158(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1322098561;
					break;
				
				case 1:
					*uParam2 = 583576226;
					break;
				
				case 3:
					*uParam2 = 1939246781;
					break;
				
				case 2:
					*uParam2 = -1872025703;
					break;
				
				case 4:
					*uParam2 = 297038448;
					break;
				
				case 5:
					*uParam2 = 2024531174;
					break;
				
				case 6:
					*uParam2 = -1266079991;
					break;
				
				case 7:
					*uParam2 = 577288081;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1372388259;
					break;
				
				case 1:
					*uParam2 = 626982837;
					break;
				
				case 3:
					*uParam2 = 1815853850;
					break;
				
				case 2:
					*uParam2 = -1205308189;
					break;
				
				case 4:
					*uParam2 = 2111310536;
					break;
				
				case 5:
					*uParam2 = -376705475;
					break;
				
				case 6:
					*uParam2 = -886696809;
					break;
				
				case 7:
					*uParam2 = -412283869;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 95446082;
					break;
				
				case 1:
					*uParam2 = 2105689774;
					break;
				
				case 3:
					*uParam2 = 2123663283;
					break;
				
				case 2:
					*uParam2 = 1327096153;
					break;
				
				case 4:
					*uParam2 = 1810848047;
					break;
				
				case 5:
					*uParam2 = 2010093328;
					break;
				
				case 6:
					*uParam2 = 708474090;
					break;
				
				case 7:
					*uParam2 = -801407253;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_159()
{
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || !func_24(func_21())) || !func_165())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_161(unk_0x16F2683693E537C9(), &Var0, 1, -1);
	func_160(1306, Var0[0], -1, 1);
	func_160(1307, Var0[1], -1, 1);
	func_160(1308, Var0[2], -1, 1);
	func_160(1309, Var0[3], -1, 1);
	func_160(1310, Var0[4], -1, 1);
	func_160(1311, Var0[5], -1, 1);
	func_160(1312, Var0[6], -1, 1);
	func_160(1313, Var0[7], -1, 1);
	func_160(1314, Var0[8], -1, 1);
	func_160(1315, Var0[9], -1, 1);
	func_160(1316, Var0[10], -1, 1);
	func_160(1317, Var0[11], -1, 1);
	func_160(1318, Var0.f_13[0], -1, 1);
	func_160(1319, Var0.f_13[1], -1, 1);
	func_160(1320, Var0.f_13[2], -1, 1);
	func_160(1321, Var0.f_13[3], -1, 1);
	func_160(1322, Var0.f_13[4], -1, 1);
	func_160(1323, Var0.f_13[5], -1, 1);
	func_160(1324, Var0.f_13[6], -1, 1);
	func_160(1325, Var0.f_13[7], -1, 1);
	func_160(1326, Var0.f_13[8], -1, 1);
	func_160(1327, Var0.f_13[9], -1, 1);
	func_160(1328, Var0.f_13[10], -1, 1);
	func_160(1329, Var0.f_13[11], -1, 1);
	func_160(1330, Var0.f_26[0], -1, 1);
	func_160(1331, Var0.f_26[1], -1, 1);
	func_160(1332, Var0.f_26[2], -1, 1);
	func_160(1333, Var0.f_26[3], -1, 1);
	func_160(1334, Var0.f_26[4], -1, 1);
	func_160(1335, Var0.f_26[5], -1, 1);
	func_160(1336, Var0.f_26[6], -1, 1);
	func_160(1337, Var0.f_26[7], -1, 1);
	func_160(1338, Var0.f_26[8], -1, 1);
	func_160(1339, Var0.f_26[9], -1, 1);
	func_160(1340, Var0.f_26[10], -1, 1);
	func_160(1341, Var0.f_26[11], -1, 1);
	func_160(1342, Var0.f_39[0], -1, 1);
	func_160(1343, Var0.f_39[1], -1, 1);
	func_160(1344, Var0.f_39[2], -1, 1);
	func_160(1345, Var0.f_39[3], -1, 1);
	func_160(1346, Var0.f_39[4], -1, 1);
	func_160(1347, Var0.f_39[5], -1, 1);
	func_160(1348, Var0.f_39[6], -1, 1);
	func_160(1349, Var0.f_39[7], -1, 1);
	func_160(1350, Var0.f_39[8], -1, 1);
	func_160(1351, Var0.f_49[0], -1, 1);
	func_160(1352, Var0.f_49[1], -1, 1);
	func_160(1353, Var0.f_49[2], -1, 1);
	func_160(1354, Var0.f_49[3], -1, 1);
	func_160(1355, Var0.f_49[4], -1, 1);
	func_160(1356, Var0.f_49[5], -1, 1);
	func_160(1357, Var0.f_49[6], -1, 1);
	func_160(1358, Var0.f_49[7], -1, 1);
	func_160(1359, Var0.f_49[8], -1, 1);
	func_160(1360, func_21(), -1, 1);
	unk_0xD8B681091EBE4064(-1373240669, true, 1);
	Global_111638.f_2358.f_539.f_4315 = 1;
}

var func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_69();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_161(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_25(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_164(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_163(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_24(iVar0))
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
			if (func_162(161, iParam3))
			{
				uParam1->f_59 = func_156(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_156(752, iParam3, 0);
			}
			uParam1->f_60 = func_156(753, iParam3, 0);
			uParam1->f_61 = func_156(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_162(161, iParam3))
			{
				uParam1->f_59 = func_156(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_156(752, iParam3, 0);
			}
		}
	}
}

int func_162(int iParam0, int iParam1)
{
	iVar0 = Global_2583656[iParam0][func_157(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_163(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_25(iParam0);
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

void func_164(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_25(iParam0);
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

int func_165()
{
	if (func_167() && func_166(0))
	{
		return 1;
	}
	return 0;
}

var func_166(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_167()
{
	return func_166(func_69() + 1);
}

void func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0E2400AB9174FA81(255, 1166638144, 1862763509);
			unk_0x0E2400AB9174FA81(2, 1862763509, -1865950624);
			unk_0x0E2400AB9174FA81(255, -1865950624, 1862763509);
			unk_0x0E2400AB9174FA81(1, Global_93747, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93747);
			unk_0x0E2400AB9174FA81(1, Global_93748, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93748);
			unk_0x0E2400AB9174FA81(1, Global_93749, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93749);
			break;
		
		case 1:
			unk_0x0E2400AB9174FA81(1, 1166638144, 1862763509);
			unk_0x0E2400AB9174FA81(2, 1862763509, -1865950624);
			unk_0x0E2400AB9174FA81(255, -1865950624, 1862763509);
			unk_0x0E2400AB9174FA81(1, Global_93747, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93747);
			unk_0x0E2400AB9174FA81(1, Global_93748, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93748);
			unk_0x0E2400AB9174FA81(1, Global_93749, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93749);
			break;
		
		case 2:
			unk_0x0E2400AB9174FA81(255, 1166638144, 1862763509);
			unk_0x0E2400AB9174FA81(5, 1862763509, -1865950624);
			unk_0x0E2400AB9174FA81(5, -1865950624, 1862763509);
			unk_0x0E2400AB9174FA81(1, Global_93747, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93747);
			unk_0x0E2400AB9174FA81(1, Global_93748, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93748);
			unk_0x0E2400AB9174FA81(1, Global_93749, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, Global_93749);
			break;
		
		default:
			break;
	}
}

void func_169()
{
	func_22();
	iVar0 = unk_0x023428EEA3027652();
	if (unk_0xE4EDC4B0E92C078B(iVar0))
	{
		iVar1 = Global_111638.f_2358.f_539.f_4321;
		if (func_23(14))
		{
			iVar1 = func_25(unk_0x16F2683693E537C9());
		}
		if (iVar1 == 0)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_TREV");
		}
		else
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_170(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_171(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = unk_0x3F0B5EEC37A0EDD3(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != -1569615261) && iVar3 != 966099553)
			{
				if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) == -1)
				{
					if (unk_0x9AEFFB8166364079(iParam0, iVar3, &uVar1))
					{
						unk_0xDAB3108F02A4255A(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0x037F36BEA9A47381();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0x6532540B34EE6273(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) == -1)
			{
				if (unk_0x9AEFFB8166364079(iParam0, iVar3, &uVar1))
				{
					unk_0xDAB3108F02A4255A(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_171(int iParam0)
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

void func_172(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9() && unk_0x65BC0B7172CA52DD(iParam0) == 200)
		{
			unk_0x093A734E5AEA758F(iParam0, round((IntToFloat(unk_0x65BC0B7172CA52DD(iParam0)) * Global_262145.f_106)));
		}
		if (Global_111638.f_2358.f_539.f_290[iVar0] <= 0f)
		{
			Global_111638.f_2358.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_111638.f_2358.f_539.f_290[iVar0] <= 10f)
		{
			Global_111638.f_2358.f_539.f_290[iVar0] = 10f;
		}
		unk_0xD458AC1C1D29C3B4(iParam0, round((((Global_111638.f_2358.f_539.f_290[iVar0] / 100f) * (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) + 100f)), 0);
	}
}

int func_173(int iParam0)
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

int func_174(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_175(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_175(int iParam0)
{
	return func_176(iParam0, Global_41431);
}

int func_176(int iParam0, int iParam1)
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

int func_177(int iParam0)
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
	return 145;
}

void func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_179(4, *iParam1, 0);
			func_179(7, *iParam1, 0);
			func_179(8, *iParam1, 0);
			func_179(11, *iParam1, 0);
			break;
		
		case 1:
			func_179(4, *iParam1, 0);
			func_179(7, *iParam1, 0);
			func_179(8, *iParam1, 0);
			func_179(11, *iParam1, 0);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_179(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_179(4, *iParam1, 0);
			func_179(7, *iParam1, 0);
			func_179(8, *iParam1, 0);
			func_179(11, *iParam1, 0);
			break;
	}
}

void func_179(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0].f_25[(iVar0 - 1)] = Global_40554[iParam0].f_25[iVar0];
			Global_40554[iParam0].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			Global_40554[iParam0].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0].f_24 = (Global_40554[iParam0].f_24 - 1);
	}
}

void func_180(int iParam0, bool bParam1)
{
	func_192(iParam0);
	func_186(iParam0, bParam1);
	func_185(iParam0);
	func_184(iParam0);
	func_183(iParam0);
	func_182(iParam0);
	func_181(iParam0);
}

void func_181(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			Global_111638.f_2358.f_539.f_2328[iVar0] = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
		}
	}
}

void func_182(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2318[iVar0] = { unk_0x56E9E0FD5ACCD35D(iParam0) };
	}
}

void func_183(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3)
		{
			if (unk_0x00A15D69BCAA5267() == 8)
			{
				return;
			}
		}
		Global_111638.f_2358.f_539.f_2300[iVar0] = { unk_0x68F4C0EC296D3901(iParam0, true) };
		Global_111638.f_2358.f_539.f_2310[iVar0] = unk_0xD9522BA9E27E1349(iParam0);
		Global_111638.f_2358.f_539.f_2314[iVar0] = unk_0xB0A50BC6EDB99CA9(iParam0);
		if (Global_111638.f_2358.f_539.f_2300[iVar0] >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0] = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[iVar0] <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0] = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[iVar0].f_1 >= 8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_1 = 7500f;
		}
		else if (Global_111638.f_2358.f_539.f_2300[iVar0].f_1 <= -8000f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_1 = -7500f;
		}
		if (Global_111638.f_2358.f_539.f_2300[iVar0].f_2 >= 2500f)
		{
			Global_111638.f_2358.f_539.f_2300[iVar0].f_2 = 2000f;
		}
	}
}

void func_184(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_185(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_290[iVar0] = (((to_float(unk_0x7F6DC62EA9922664(iParam0)) - 100f) / (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) * 100f);
	}
}

void func_186(int iParam0, bool bParam1)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_187(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
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

void func_187(int iParam0, var uParam1)
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
			iVar3 = func_171(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_171(iVar0));
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
					iVar2 = func_190(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_190(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_189(Var11.f_1)) && iVar72 < 51)
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
							if (!func_188(Var50.f_3))
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

int func_188(int iParam0)
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

int func_189(int iParam0)
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

int func_190(int iParam0, int iParam1)
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
				iVar1 = func_191(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_188(Var43.f_3))
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

int func_191(int iParam0, var uParam1)
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

void func_192(int iParam0)
{
	iVar0 = func_25(iParam0);
	if (func_24(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2296[iVar0] = func_137();
	}
}

int func_193(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)
{
	return func_75(uParam0, iParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

void func_194(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_25(iParam0);
		if (func_24(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_475(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_474(iVar0);
					func_200(iParam0, &(Global_111638.f_2358.f_539[iVar0]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_161(iParam0, &Var2, 1, -1);
			Global_98469[iVar0] = { Var2 };
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				func_159();
			}
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("clothes_shop_sp") || (unk_0x8A22C4C08282BF26(-1787151295) == 0 && unk_0x8A22C4C08282BF26(-1241028203) == 0))
			{
				if (iParam1 || ((((((!func_23(0) && !func_23(1)) && !func_23(2)) && !func_23(3)) && !func_23(4)) && !func_23(9)) && !func_23(10)))
				{
					Global_111638.f_2358.f_539[iVar0] = { Var2 };
					Global_111638.f_2358.f_539.f_2391[iVar0] = func_199(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111638.f_2358.f_539.f_204[iVar67][iVar0] = func_195(iParam0, func_198(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111638.f_2358.f_539.f_204[iVar67][iVar0] = func_195(iParam0, func_198(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_111638.f_9080.f_99.f_58[121])
						{
							Global_111638.f_9080.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_195(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = func_197(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_196(iParam0, iVar1, iVar2, iParam1);
}

int func_196(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_197(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
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

int func_198(int iParam0)
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

int func_199(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0xD2C792E5A65B6BF1(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x0F84621831DD8D8A(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0xB0D40A53430D217C(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0xFEDCD54A497F3495(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_200(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0) || iParam5)
	{
		iVar0 = func_25(iParam0);
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0xD2C792E5A65B6BF1(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x0F84621831DD8D8A(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x64F9F278AB9DCA2C(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
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
					if (uParam1->f_39[iVar3] >= unk_0xB0D40A53430D217C(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0xFEDCD54A497F3495(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x9A28E8CB86CD4694(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_24(iVar0))
		{
			Global_111638.f_2358.f_539[iVar0].f_59 = uParam1->f_59;
			Global_111638.f_2358.f_539[iVar0].f_60 = uParam1->f_60;
			Global_111638.f_2358.f_539[iVar0].f_61 = uParam1->f_61;
			if (func_473(iParam0, iVar1, &iVar2, 0))
			{
				func_459(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111638.f_2358.f_539[iVar0].f_62 = uParam1->f_62;
			Global_111638.f_2358.f_539[iVar0].f_63 = uParam1->f_63;
			Global_111638.f_2358.f_539[iVar0].f_64 = uParam1->f_64;
			if (func_400(iParam0, iVar1, &iVar2))
			{
				func_459(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			bVar4 = func_398(iParam0);
			func_397(753, uParam1->f_60, Global_76431, 1, 0);
			func_397(754, uParam1->f_61, Global_76431, 1, 0);
			iVar5 = func_196(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == 1885233650)
				{
					iVar6 = func_395(iVar5);
				}
				else if (iVar1 == -1667301416)
				{
					iVar6 = func_393(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_209(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_196(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_209(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_203(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_209(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76431, bVar4, 0, 0);
			}
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == 1885233650)
			{
				iVar9 = func_395(iVar9);
			}
			else
			{
				iVar9 = func_393(iVar9);
			}
			func_397(752, iVar9, Global_76431, 1, 0);
			func_397(2051, iVar9, Global_76431, 1, 0);
			func_201(161, 1, -1, 1);
		}
		if (iVar1 == 1885233650 || iVar1 == -1667301416)
		{
			iVar10 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
			iVar11 = unk_0xD1BC07002824FE76(iParam0, 1, unk_0x98F1B512A2CC07C5(iParam0, 1), unk_0x22286A85EDEAEC56(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
				{
					unk_0x30BBA34DD235D7FE(&Var12);
					if (iVar10 == 1551873674)
					{
						unk_0x4F79808059300187(-518535904, &Var12);
					}
					else
					{
						unk_0x4F79808059300187(530896308, &Var12);
					}
					unk_0x9A28E8CB86CD4694(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar11, -2103452271, 1))
			{
				unk_0x3BFC3B9ADD2EE7B7(iParam0, 1);
			}
		}
	}
}

void func_201(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_202())
	{
		iVar0 = Global_2583656[iParam0][func_157(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_202()
{
	return 1;
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_208(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_205(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_205(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_204(iParam0, iParam3));
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
	return func_208(iParam3);
}

int func_204(int iParam0, int iParam1)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case 225514697:
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
		
		case -1692214353:
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
		
		case -1686040670:
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
		
		case 1885233650:
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
		
		case -1667301416:
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

int func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_207(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_197(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xC578687D5A643830(iVar37, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_206(iParam0, func_197(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 225514697:
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
		
		case -1692214353:
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
		
		case -1686040670:
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
		case 1885233650:
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
		
		case -1667301416:
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

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return 113;
			break;
		
		case -1692214353:
			return 175;
			break;
		
		case -1686040670:
			return 155;
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			return 327;
			break;
		
		case -1667301416:
			return 327;
			break;
	}
	return -99;
}

int func_208(int iParam0)
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

int func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!unk_0x8CD06866876216F2())
	{
		if ((Global_1312811 != 4 && Global_1312811 != 5) && Global_1312811 != 7)
		{
			return 0;
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x16F2683693E537C9() && Global_2425662[unk_0xD803B885F5E47A62()].f_222 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76431;
	}
	Global_76432++;
	iVar5 = unk_0x134B62B726CEC8E6(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
		if (!func_351(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76432 > 1)
		{
		}
		else
		{
			func_346(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76477 };
		}
		else
		{
			uVar15 = { func_343(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76434[1] = { func_352(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_197(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_197(iVar0)));
					}
					else
					{
						unk_0x64F9F278AB9DCA2C(iParam0, func_197(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
					{
						func_346(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76434[1] = { func_352(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76494 };
							}
							else
							{
								uVar32 = { func_340(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76434[1] = { func_352(iVar5, 14, uVar32[iVar1], -1) };
								func_339(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
								if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
								{
									func_346(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0x64F9F278AB9DCA2C(iParam0, func_197(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_197(iVar0)));
								}
								else
								{
									unk_0x64F9F278AB9DCA2C(iParam0, func_197(iVar0), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
								}
							}
							else
							{
								func_209(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
							{
								func_346(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1] = { func_352(iVar5, iVar0, func_337(iParam0, iVar0, -1), -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 3))
				{
					uVar42 = { func_343(iVar5, 0) };
					func_209(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_336();
			if (iVar59 != -1)
			{
				func_333(iVar59, 0, iParam10);
			}
			func_331(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_340(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1] = { func_352(iVar5, 14, uVar60[iVar1], -1) };
			func_339(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
			{
				func_346(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76432 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_329(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_339(iParam0, Global_76434[1].f_12, Global_76434[1].f_3, Global_76434[1].f_4);
		if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
		{
			func_346(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76434[1].f_12 == 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar70 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
				if (unk_0x1A5A491D253EA7BA(iVar70, 66092876, 0))
				{
					func_209(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76434[1].f_12 == 0)
		{
			func_322(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_329(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_329(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_209(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_197(iParam1);
		if (unk_0x36C584991B4C183F(iParam0, iVar71) != Global_76434[1].f_3 || unk_0xDADA8E1DD0D0D9D9(iParam0, iVar71) != Global_76434[1].f_4)
		{
			iVar72 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
			iVar73 = unk_0x4F4B24509D6989D0(iParam0, 7, unk_0x36C584991B4C183F(iParam0, 7), unk_0xDADA8E1DD0D0D9D9(iParam0, 7));
			if (((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x1A5A491D253EA7BA(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar73, -2095729091, 0)))
			{
				unk_0x64F9F278AB9DCA2C(iParam0, 7, 0, 0, unk_0xAA973E78065E07A0(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x1A5A491D253EA7BA(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x1A5A491D253EA7BA(iVar72, -2095729091, 0)))
			{
				if (iVar5 == 1885233650)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 15, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 8, 2, 0, unk_0xAA973E78065E07A0(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6) && unk_0x1A5A491D253EA7BA(Global_2621444, -1996375172, 11))
				{
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 0);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 1);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 2);
					unk_0x71D833720F1761C3(iParam0, Global_1314034, Global_1314035, Global_1314036, 3);
				}
				iVar75 = func_195(iParam0, 11);
				iVar76 = func_195(iParam0, 8);
				iVar77 = func_195(iParam0, 4);
				iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
				if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
				{
					if (iVar5 == 1885233650)
					{
						iVar74 = func_321(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == -1667301416)
					{
						iVar74 = func_321(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x1A5A491D253EA7BA(iVar74, 320460654, 0) || unk_0x1A5A491D253EA7BA(iVar74, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1855618474, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1420825402, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_195(iParam0, 8);
					}
				}
				iVar78 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
				if (unk_0x1A5A491D253EA7BA(iVar78, -356646862, 0))
				{
					iVar79 = func_320(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_329(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar79 = 11;
							iVar74 = func_321(iVar5, iParam2, 11, 4);
							if (!unk_0x1A5A491D253EA7BA(iVar74, -530089825, 0))
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
							if (func_319(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == -1667301416 && iParam2 >= 256) && unk_0x1A5A491D253EA7BA(func_321(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar75 = func_195(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_321(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0))
					{
						iVar81 = func_317(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
						if (iVar81 != -99)
						{
							func_209(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_316(iVar5, iParam2, -1))
				{
					if (iVar5 == 1885233650)
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_321(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == -1667301416)
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_321(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_316(iVar5, iVar75, -1))
					{
						if ((iVar5 == -1667301416 && iVar75 >= 256) && (unk_0x1A5A491D253EA7BA(iVar74, -1200513218, 0) || unk_0x1A5A491D253EA7BA(iVar74, 1965569012, 0)))
						{
						}
						else if ((iVar5 == -1667301416 && iVar75 >= 256) && ((((((((unk_0x1A5A491D253EA7BA(iVar74, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar74, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 700658917, 0)) || unk_0x1A5A491D253EA7BA(iVar74, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar74, 1830529185, 0)))
						{
						}
						else
						{
							iVar82 = func_315(iParam0, iParam2);
							iVar83 = func_317(iVar5, iVar75, iParam2, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
							if (iVar83 != -99)
							{
								func_209(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								func_209(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == 1885233650)
								{
									iVar84 = func_314(iVar5, 11, -1);
									Global_76434[1] = { func_352(iVar5, 11, iVar84, -1) };
									iVar83 = func_317(iVar5, iVar84, iParam2, Global_76434[1].f_4);
									if (iVar83 == -99 || unk_0x1A5A491D253EA7BA(func_321(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_321(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_209(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76434[1] = { func_352(iVar5, 11, iVar75, -1) };
						iVar85 = Global_76434[1].f_3;
						Global_76434[1] = { func_352(iVar5, 11, iParam2, -1) };
						iVar86 = Global_76434[1].f_3;
						if (iVar85 != iVar86)
						{
							iVar88 = func_315(iParam0, iParam2);
							Global_76434[1] = { func_352(iVar5, 8, iVar76, -1) };
							iVar87 = Global_76434[1].f_4;
							iVar89 = func_313(iVar5, iVar76, iVar87);
							if (iVar88 != -99 && (iParam0 == unk_0x16F2683693E537C9() || iParam0 == Global_4267405))
							{
								iVar90 = iVar88;
							}
							else if (iVar89 == -99)
							{
								iVar90 = iVar76;
								if (iVar5 == 1885233650)
								{
									iVar91 = func_321(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_312(iVar91) == 6) || unk_0x1A5A491D253EA7BA(iVar91, -1237899132, 0))
									{
										iVar89 = func_314(iVar5, 11, -1);
										Global_76434[1] = { func_352(iVar5, 11, iVar89, -1) };
										iVar90 = func_317(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								if (iVar5 == -1667301416 && (iVar76 == 32 || iVar76 == 33))
								{
									if (!unk_0x1A5A491D253EA7BA(func_321(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar89 = func_314(iVar5, 11, -1);
										Global_76434[1] = { func_352(iVar5, 11, iVar89, -1) };
										iVar90 = func_317(iVar5, iVar89, iParam2, Global_76434[1].f_4);
									}
								}
								iVar92 = -1;
								if (iVar5 == 1885233650)
								{
									iVar92 = func_321(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == -1667301416)
								{
									iVar92 = func_321(iVar5, iVar76, 8, 4);
								}
								if (unk_0x1A5A491D253EA7BA(iVar92, -316495692, 0))
								{
									iVar89 = func_314(iVar5, 11, -1);
									Global_76434[1] = { func_352(iVar5, 11, iVar89, -1) };
									iVar90 = func_317(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								}
							}
							else
							{
								iVar90 = func_317(iVar5, iVar89, iParam2, iVar87);
								if (iVar5 == 1885233650)
								{
									if (unk_0x1A5A491D253EA7BA(func_321(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_311(iVar5, func_195(iParam0, 4), iVar89))
										{
											iVar90 = 240;
										}
									}
								}
								else if (iVar5 == -1667301416)
								{
									if (unk_0x1A5A491D253EA7BA(func_321(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_311(iVar5, func_195(iParam0, 4), iVar89))
										{
											iVar90 = 48;
										}
									}
								}
							}
							if (iVar90 != -99)
							{
								func_209(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == 1885233650)
							{
								iVar89 = func_314(iVar5, 11, -1);
								Global_76434[1] = { func_352(iVar5, 11, iVar89, -1) };
								iVar90 = func_317(iVar5, iVar89, iParam2, Global_76434[1].f_4);
								if (iVar90 == -99)
								{
									iVar90 = 240;
								}
								func_209(iParam0, 8, iVar90, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == -1667301416)
							{
								func_209(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_308(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 10, 0, 0, unk_0xAA973E78065E07A0(iParam0, 10));
				}
			}
			func_331(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_320(iVar5, func_337(iParam0, 8, -1), iParam2, func_337(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_156(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_156(2158, iParam10, 0);
				}
				unk_0xBF2343612F661793(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar93 = -99;
					if (iVar5 == 1885233650)
					{
						iVar93 = func_395(iParam2);
					}
					else if (iVar5 == -1667301416)
					{
						iVar93 = func_393(iParam2);
					}
					if (iVar93 != -99 && iParam2 != iVar93)
					{
						iParam2 = iVar93;
					}
				}
				func_256(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar94 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar94, -356646862, 0))
			{
				iVar95 = func_195(iParam0, 11);
				iVar96 = func_195(iParam0, 4);
				iVar97 = func_320(iVar5, iParam2, iVar95, iVar96);
				if (iVar97 == -99)
				{
					iVar97 = func_329(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar94)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar97 = 11;
						iVar98 = func_321(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar98, -530089825, 0))
						{
							iVar97 = -99;
						}
						break;
				}
				if (iVar97 != -99)
				{
					iVar99 = 0;
					while (iVar99 < 18)
					{
						if (func_319(iVar5, iVar97, iVar99) == iVar94)
						{
							iVar11 = iVar99;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar99++;
					}
				}
			}
			func_331(iParam0, iParam1, iParam2, iParam6, 0);
			iVar100 = func_195(iParam0, 11);
			if (func_316(iVar5, iVar100, -1))
			{
				iVar101 = func_313(iVar5, iParam2, Global_76434[1].f_4);
				func_308(iVar5, iVar101);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_320(iVar5, iParam2, func_195(iParam0, 11), func_195(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar102 = func_195(iParam0, 7);
				if (!func_253(iVar5, iVar102, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x64F9F278AB9DCA2C(iParam0, func_197(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == 1885233650 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)) || ((iVar5 == -1667301416 && iParam2 >= 26) && unk_0x1A5A491D253EA7BA(Global_2621444, -921710083, 0)))
			{
				iVar103 = func_156(2098, iParam10, 0);
				iVar104 = func_156(2099, iParam10, 0);
				iVar105 = func_156(2100, iParam10, 0);
				fVar106 = func_252(135, iParam10);
				if (iVar5 == 1885233650)
				{
					unk_0x466ED20F52F36C02(iParam0, 0, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				else if (iVar5 == -1667301416)
				{
					unk_0x466ED20F52F36C02(iParam0, 21, 0, 0, iVar103, iVar104, iVar105, 0f, fVar106, 0f, false);
				}
				iVar107 = 0;
				while (iVar107 < 20)
				{
					unk_0x8173BC90AE40BF1F(iParam0, iVar107, 0f);
					iVar107++;
				}
			}
			else
			{
				func_236(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar108 = func_195(iParam0, 11);
			iVar109 = func_195(iParam0, 8);
			if (iVar5 == 1885233650)
			{
				if (unk_0x1A5A491D253EA7BA(func_321(iVar5, iVar108, 11, 3), -1719338724, 0))
				{
					if (!func_311(iVar5, iParam2, func_313(iVar5, iVar109, 0)))
					{
						func_209(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == -1667301416)
			{
				if (unk_0x1A5A491D253EA7BA(func_321(iVar5, iVar108, 11, 4), -1719338724, 0))
				{
					if (!func_311(iVar5, iParam2, func_313(iVar5, iVar109, 0)))
					{
						func_209(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76434[1] = { func_352(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_320(iVar5, func_195(iParam0, 8), func_195(iParam0, 11), iParam2);
			}
			iVar110 = unk_0x4F4B24509D6989D0(iParam0, 3, unk_0x36C584991B4C183F(iParam0, 3), 0);
			if (unk_0x1A5A491D253EA7BA(iVar110, -356646862, 0))
			{
				iVar111 = func_320(iVar5, iVar109, iVar108, iParam2);
				if (iVar111 == -99)
				{
					iVar111 = func_329(iParam0, iVar5, 11, iVar108, 3, 0);
				}
				switch (iVar110)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar111 = 11;
						iVar112 = func_321(iVar5, iParam2, 11, 4);
						if (!unk_0x1A5A491D253EA7BA(iVar112, -530089825, 0))
						{
							iVar111 = -99;
						}
						break;
				}
				if (iVar111 != -99)
				{
					iVar113 = 0;
					while (iVar113 < 18)
					{
						if (func_319(iVar5, iVar111, iVar113) == iVar110)
						{
							iVar11 = iVar113;
							iVar12 = unk_0xDADA8E1DD0D0D9D9(iParam0, 3);
						}
						iVar113++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_197(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, unk_0xAA973E78065E07A0(iParam0, func_197(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_197(iParam1), Global_76434[1].f_3, Global_76434[1].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_329(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_209(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_320(iVar5, iVar3, func_195(iParam0, 11), func_195(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_329(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_209(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_235(iParam0))
				{
					iVar114 = func_233(iParam0, iVar5, iParam1, iParam2);
					if (iVar114 > 0)
					{
						iVar114 = (iVar114 + unk_0xDADA8E1DD0D0D9D9(iParam0, 9));
						if (!func_227(iParam0, 9, iVar114))
						{
							func_209(iParam0, 9, iVar114, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_209(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
					if (unk_0x1A5A491D253EA7BA(iVar8, 240476421, 8))
					{
						func_209(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar115 = func_156(2040, -1, 0);
				if (unk_0x36C584991B4C183F(iParam0, 5) != 0)
				{
					unk_0x64F9F278AB9DCA2C(iParam0, 5, func_221(iParam0, iVar115), func_220(iParam0, iVar115), func_219(iParam0, iVar115));
				}
				if (iParam0 == unk_0x16F2683693E537C9())
				{
					unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 5, func_221(unk_0x16F2683693E537C9(), iVar115), func_220(unk_0x16F2683693E537C9(), iVar115), 0);
					unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_219(unk_0x16F2683693E537C9(), iVar115));
					func_218(unk_0xD803B885F5E47A62(), iVar115);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == 1885233650 && iParam2 >= 92) || (iVar5 == -1667301416 && iParam2 >= 55))
				{
					if (unk_0x1A5A491D253EA7BA(Global_2621444, -319568873, 0))
					{
						func_209(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == -1667301416 && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar116 = func_337(iParam0, 4, -1);
					iVar117 = iParam2;
				}
				else
				{
					iVar116 = iParam2;
					iVar117 = func_337(iParam0, 11, -1);
				}
				if (func_217(iVar5, 11, iVar117, -1))
				{
					if (!func_216(iVar5, 4, iVar116, -1))
					{
						if (func_215(iVar5, 4, iVar116, &uVar118))
						{
							func_209(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_216(iVar5, 4, iVar116, -1))
				{
					if (func_214(iVar5, 4, iVar116, &uVar118))
					{
						func_209(iParam0, 4, uVar118, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar119 = unk_0x36C584991B4C183F(iParam0, 6);
				iVar120 = unk_0xDADA8E1DD0D0D9D9(iParam0, 6);
				iVar121 = unk_0x4F4B24509D6989D0(iParam0, 6, iVar119, iVar120);
				iVar122 = unk_0x36C584991B4C183F(iParam0, 4);
				iVar123 = unk_0xDADA8E1DD0D0D9D9(iParam0, 4);
				iVar124 = unk_0x4F4B24509D6989D0(iParam0, 4, iVar122, iVar123);
				iVar125 = func_195(iParam0, 4);
				iVar126 = func_195(iParam0, 6);
				if (func_213(iVar5, iVar121))
				{
					if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_212(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_205(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_209(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_205(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_209(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_211(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_205(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_209(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_205(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_209(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
				if (func_213(iVar5, iVar124))
				{
					if (unk_0x1A5A491D253EA7BA(iVar124, -2042643157, 0) != func_211(iVar5, iVar126, iVar124))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar124);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar124, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 4)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar125 = func_205(iVar5, iVar129, 4, 3);
										iVar124 = iVar129;
										func_209(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar125 = func_205(iVar5, iVar129, 4, 4);
										iVar124 = iVar129;
										func_209(iParam0, 4, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar121, 1812005517, 0) != func_212(iVar5, iVar125, iVar121))
					{
						iVar127 = unk_0xB3A1A93269979713(iVar121);
						iVar128 = 0;
						while (iVar128 < iVar127)
						{
							unk_0xAEF3D5EB046168F2(iVar121, iVar128, &iVar129, &uVar130, &iVar131);
							if (iVar131 == 6)
							{
								if (iVar129 != 0 && iVar129 != 1849449579)
								{
									if (iVar5 == 1885233650)
									{
										iVar126 = func_205(iVar5, iVar129, 6, 3);
										iVar121 = iVar129;
										func_209(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == -1667301416)
									{
										iVar126 = func_205(iVar5, iVar129, 6, 4);
										iVar121 = iVar129;
										func_209(iParam0, 6, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar128 = iVar127 + 1;
								}
							}
							iVar128++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_322(iParam0);
				iVar132 = unk_0x36C584991B4C183F(iParam0, 1);
				iVar133 = unk_0xDADA8E1DD0D0D9D9(iParam0, 1);
				iVar134 = unk_0x4F4B24509D6989D0(iParam0, 1, iVar132, iVar133);
				if (unk_0x1A5A491D253EA7BA(iVar134, 838607662, 0))
				{
					iVar3 = func_329(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_209(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_329(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_209(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_210(iParam0, &uVar4))
		{
			func_209(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_209(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_209(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_209(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar135 = func_319(iVar5, func_337(iParam0, 3, -1), iVar11);
		if (iVar135 != -1)
		{
			if (iVar5 == 1885233650)
			{
				iVar10 = func_205(iVar5, iVar135, 3, 3);
			}
			else if (iVar5 == -1667301416)
			{
				iVar10 = func_205(iVar5, iVar135, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_209(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

int func_210(int iParam0, var uParam1)
{
	*uParam1 = func_337(unk_0x16F2683693E537C9(), 2, -1);
	if (func_156(753, Global_76431, 0) != -99 && func_165())
	{
		if (func_100() == 4)
		{
			return 1;
		}
		if (func_156(753, Global_76431, 0) == 0 && func_156(754, Global_76431, 0) == 0)
		{
			if (func_162(161, Global_76431))
			{
				if (func_156(2051, Global_76431, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_156(752, Global_76431, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_156(753, Global_76431, 0);
		iVar1 = func_156(754, Global_76431, 0);
		if (!func_227(iParam0, iVar1, iVar0))
		{
			if (func_162(161, Global_76431))
			{
				*uParam1 = func_156(2051, Global_76431, 0);
			}
			else
			{
				*uParam1 = func_156(752, Global_76431, 0);
			}
			func_397(753, -99, Global_76431, 1, 0);
			func_397(754, 2, Global_76431, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_321(iParam0, iParam1, 6, 3);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
			{
				if ((unk_0x1A5A491D253EA7BA(iParam2, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iParam2, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if ((((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_321(iParam0, iParam1, 6, 4);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, 1137160120, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (((((((((unk_0x1A5A491D253EA7BA(iVar0, -713698407, 0) || unk_0x1A5A491D253EA7BA(iVar0, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam1 >= 256)
			{
				iVar0 = func_321(iParam0, iParam1, 4, 3);
				iVar1 = func_312(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || (unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0))) || (unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0) && !unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
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
					case 423009394:
					case 662518015:
					case 1973998937:
					case -2082049580:
					case 8743696:
					case -850459484:
					case -596466965:
					case 1244823145:
					case -1187390334:
					case 1269301600:
					case -607480390:
						iVar2 = 0;
						break;
				}
				if (((unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 713391749, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 434101562, 0))
				{
					if ((((((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
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
		
		case -1667301416:
			if (iParam1 >= 256)
			{
				iVar0 = func_321(iParam0, iParam1, 4, 4);
				iVar1 = func_312(iVar0);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -56268180, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar0, 1137160120, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x1A5A491D253EA7BA(iVar0, -1080576805, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1387458490, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
				{
					if ((((unk_0x1A5A491D253EA7BA(iParam2, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam2, -979468724, 0)) || unk_0x1A5A491D253EA7BA(iParam2, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 1248753945, 0)) || unk_0x1A5A491D253EA7BA(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if ((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x1A5A491D253EA7BA(iVar0, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -761463976, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1207283343, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1103045158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1052059919, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1006704786, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1885233650:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case -1667301416:
			if (unk_0x1A5A491D253EA7BA(iParam1, -364248070, 0) || unk_0x1A5A491D253EA7BA(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_214(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_321(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_205(iParam0, iVar3, iParam1, 4);
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

int func_215(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_321(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB3A1A93269979713(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (unk_0x1A5A491D253EA7BA(iVar3, -1100807313, 0))
										{
											*uParam3 = func_205(iParam0, iVar3, iParam1, 4);
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

int func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_321(iParam0, iParam2, 4, 4);
						}
						if (unk_0x1A5A491D253EA7BA(iParam3, -1100807313, 0))
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

int func_217(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_321(iParam0, iParam2, 11, 4);
						}
						return unk_0x1A5A491D253EA7BA(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0xF1C520A9D38679DE(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		unk_0xF1C520A9D38679DE(iParam0, 1269440357);
	}
	else
	{
		unk_0x76101DD10F826BF0(iParam0);
	}
}

int func_219(int iParam0, int iParam1)
{
	return 0;
}

int func_220(int iParam0, int iParam1)
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

var func_221(int iParam0, int iParam1)
{
	bVar0 = unk_0x36C584991B4C183F(iParam0, 9) != false;
	iVar1 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	iVar2 = unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
	iVar3 = unk_0x4F4B24509D6989D0(iParam0, 4, unk_0x36C584991B4C183F(iParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4));
	if ((((!bVar0 == Global_76595 || !iParam1 == Global_76596) || !iVar1 == Global_76597) || !iVar2 == Global_76598) || !iVar3 == Global_76599)
	{
		Global_76595 = bVar0;
		Global_76596 = iParam1;
		Global_76597 = iVar1;
		Global_76598 = iVar2;
		Global_76599 = iVar3;
		Global_76600 = func_222(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == -1667301416)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 76)
				{
					Global_76600 = 80;
				}
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == 1885233650)
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 78;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 78;
				}
			}
		}
	}
	return Global_76600;
}

int func_222(int iParam0, int iParam1)
{
	iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
	if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x134B62B726CEC8E6(iParam0);
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
	iVar4 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
	if (unk_0x1A5A491D253EA7BA(iVar4, 240476421, 8))
	{
		if (iVar2 == 1885233650)
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return func_226(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_226(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_226(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -887141061, 8))
			{
				return func_226(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1185371730, 8))
			{
				return func_226(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2124629577, 8))
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		return func_226(iParam0, iParam1);
	}
	if (func_225(iParam0))
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
		iVar5 = unk_0x4F4B24509D6989D0(iParam0, 11, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
		if (unk_0x1A5A491D253EA7BA(iVar5, 655081063, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -530089825, 0))
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1882920022, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -317649054, 0))
		{
			if (iVar2 == 1885233650)
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
			else if (unk_0x1A5A491D253EA7BA(iVar5, -979468724, 0))
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -306768813, 0))
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, -58412562, 0))
			{
				return func_226(iParam0, iParam1) + 15;
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1536649085, 0) && !unk_0x1A5A491D253EA7BA(iVar5, 350281921, 0))
		{
			iVar6 = func_224(iVar5, 0);
			if (iVar2 == 1885233650)
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
						iVar0 = func_312(iVar5);
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
						iVar0 = func_312(iVar5);
						break;
					}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 248194463, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 396458410, 0))
		{
			iVar7 = func_223(iVar5, 0);
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
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == 1885233650)
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == 1885233650)
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
					iVar0 = func_312(iVar5);
					break;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -779835469, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1119232689, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2102859770, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1784133476, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1607949555, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1976716889, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2099109084, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1488441032, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1719167561, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1431529976, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1274099003, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1723403459, 0))
		{
			if (iVar2 == 1885233650)
			{
				if (unk_0x1A5A491D253EA7BA(iVar5, -1407614029, 0))
				{
					return func_226(iParam0, iParam1) + 15;
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 912543594, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, -1086258388, 0) || unk_0x1A5A491D253EA7BA(iVar5, 103539798, 0)) || unk_0x1A5A491D253EA7BA(iVar5, -994703884, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2044466679, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2020757158, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1064262817, 0))
		{
			if (iVar2 == 1885233650)
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
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1419806467, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1053842259, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1358888880, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -441291342, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -747583185, 0))
		{
			if (iVar2 == -1667301416)
			{
				if (bVar1)
				{
					return func_226(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2088146832, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -872449705, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 700658917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1714969731, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 745826556, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1055526375, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 144417099, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 492620493, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -416620954, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -102825006, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -733792105, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 137011325, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -641612092, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1351486939, 0))
		{
			if (iVar2 == 1885233650)
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
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2119756144, 0))
		{
			if (iVar2 == 1885233650)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1507532917, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 947651647, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1506370874, 0) || unk_0x1A5A491D253EA7BA(iVar5, 1927516484, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1786447517, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1010805287, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1325813684, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -549843760, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -828478571, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1690933245, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1360588936, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2136821028, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1830529185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -269266203, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 201427653, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 967829025, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -685039259, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1266557933, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -979468724, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1813210391, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 263623295, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -309899747, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -89003918, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -747858475, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return func_226(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 490219883, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1208450825, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 297865853, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 602650322, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 905042630, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1204125293, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 310055897, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 606713654, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return func_226(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1831422288, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -838136846, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 655638019, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 970679185, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 83294665, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 382246252, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -99064836, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -697656159, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -398213037, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1380605304, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -306768813, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -58412562, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1711219157, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1466664110, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1968575702, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 245429010, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 15161247, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2044923487, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -915352927, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -538378351, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2139144017, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -435539886, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 695107163, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1499233212, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 350281921, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -2124629577, 0))
		{
			if (iVar2 == 1885233650)
			{
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1877382859, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1375878737, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1347486026, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, 2006289597, 0))
			{
				if (iVar2 == 1885233650)
				{
					return func_226(iParam0, iParam1) + 15;
				}
				else
				{
					return func_226(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -540436505, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1207461955, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return func_226(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -785939537, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1986415230, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (4 + iVar3);
			}
			else
			{
				return func_226(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1663871176, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1467843180, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return func_226(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, -939525357, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1);
			}
			else
			{
				return func_226(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 398019854, 0))
		{
			if (iVar2 == 1885233650)
			{
				return func_226(iParam0, iParam1) + 15;
			}
			else
			{
				return func_226(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 1965569012, 0) && iVar2 == -1667301416)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, 2026620439, 0) && iVar2 == -1667301416)
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
		else if (unk_0x1A5A491D253EA7BA(iVar5, -1410897066, 0))
		{
			if (iVar2 == 1885233650)
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, -2017999390, 0) || unk_0x1A5A491D253EA7BA(iVar5, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_312(iVar5);
		}
	}
	if (iVar2 == 1885233650)
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

int func_223(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (unk_0x1A5A491D253EA7BA(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_224(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (unk_0x1A5A491D253EA7BA(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_225(int iParam0)
{
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 4, unk_0x36C584991B4C183F(iParam0, 4), unk_0xDADA8E1DD0D0D9D9(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
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

int func_227(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_76434[1] = { func_352(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_343(iVar0, iParam2) };
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
				if (!func_227(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_340(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_227(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_76434[2] = { func_352(iVar0, 14, iVar6, -1) };
									if (Global_76434[2].f_12 == iVar5)
									{
										if (func_227(iParam0, 14, iVar6))
										{
											if (!func_228(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_76434[2])))
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
						iVar1 = func_195(iParam0, iVar4);
						Global_76434[2] = { func_352(iVar0, iVar4, iVar1, -1) };
						if (!func_228(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_76434[2])))
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
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_156(1757, Global_76431, 0) != uVar8[10])
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
		uVar36 = { func_340(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_227(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_76434[1].f_12) == Global_76434[1].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_76434[1].f_12) == Global_76434[1].f_4 || Global_76434[1].f_3 == -1))
		{
			return 1;
		}
		if (((Global_76434[1].f_12 == 0 && unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 6)) && unk_0x1A5A491D253EA7BA(Global_2621444, -1033433901, 1)) && unk_0x03A72E78F74F2DEC(Global_2621444) > 0)
		{
			iVar50 = unk_0x03A72E78F74F2DEC(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				unk_0xE6C0870CB80884BF(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != 1849449579)
				{
					unk_0x30BBA34DD235D7FE(&Var51);
					unk_0x7467B50942D9D7EE(iVar47, &Var51);
					if (Var51.f_3 == unk_0x98F1B512A2CC07C5(iParam0, Global_76434[1].f_12) && Var51.f_4 == unk_0x22286A85EDEAEC56(iParam0, Global_76434[1].f_12))
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
		if (Global_76434[1].f_3 == unk_0x36C584991B4C183F(iParam0, func_197(iParam1)) && Global_76434[1].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_197(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_76433++;
			if (Global_76433 == 1)
			{
				if (func_217(iVar0, 11, func_195(iParam0, 11), -1))
				{
					if (func_215(iVar0, 4, iParam2, &uVar68))
					{
						return func_227(iParam0, 4, uVar68);
					}
				}
				else if (func_214(iVar0, 4, iParam2, &uVar68))
				{
					return func_227(iParam0, 4, uVar68);
				}
			}
			Global_76433 = (Global_76433 - 1);
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
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
		uVar0 = { func_340(iParam0, (*uParam4)[13]) };
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
	if (func_232(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == 225514697)
	{
		if (func_231(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_230(iParam0, iParam2, iParam3, -1))
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
		else if (func_229(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (func_231(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_230(iParam0, iParam2, iParam3, -1))
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
		else if (func_229(iParam0, iParam2, iParam3, -1))
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
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_231(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_230(iParam0, iParam2, iParam3, -1))
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
		else if (func_229(iParam0, iParam2, iParam3, -1))
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

int func_229(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
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
		
		case -1692214353:
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
		
		case -1686040670:
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
		
		case 1885233650:
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
							iParam3 = func_321(iParam0, iParam2, 14, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_321(iParam0, iParam2, 1, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case -1667301416:
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
							iParam3 = func_321(iParam0, iParam2, 14, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_321(iParam0, iParam2, 1, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_230(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == 225514697)
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
	else if (iParam0 == -1692214353)
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
	else if (iParam0 == -1686040670)
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
	else if (iParam0 == 1885233650)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_321(iParam0, iParam2, 1, 3);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_321(iParam0, iParam2, 1, 4);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
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

int func_231(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 225514697:
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case -1692214353:
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case -1686040670:
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case 1885233650:
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
						iParam3 = func_321(iParam0, iParam2, 14, 3);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
		
		case -1667301416:
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
						iParam3 = func_321(iParam0, iParam2, 14, 4);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 225514697:
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
		
		case -1692214353:
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
		
		case -1686040670:
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

int func_233(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_225(iParam0))
	{
		return -99;
	}
	if (func_234(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == 1885233650)
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
				iVar0 = func_321(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0xB3A1A93269979713(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0xAEF3D5EB046168F2(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_205(iParam1, iVar3, 9, 3);
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
		else if (iParam1 == -1667301416)
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
				iVar6 = func_321(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0xB3A1A93269979713(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0xAEF3D5EB046168F2(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_205(iParam1, iVar9, 9, 4);
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

int func_234(int iParam0)
{
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam0);
		if (iVar0 == 1885233650)
		{
			if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == -1667301416)
		{
			if (unk_0x36C584991B4C183F(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_236(int iParam0, int iParam1)
{
	if (!unk_0xCCBA4C0B3BD2AB7B(iParam0))
	{
	}
	unk_0x85EC76A805FF970B(iParam0, &Var0);
	iVar10 = func_156(2095, iParam1, 0);
	iVar11 = func_156(2096, iParam1, 0);
	iVar12 = func_156(2097, iParam1, 0);
	iVar13 = func_156(2098, iParam1, 0);
	iVar14 = func_156(2099, iParam1, 0);
	iVar15 = func_156(2100, iParam1, 0);
	fVar16 = func_252(134, iParam1);
	fVar17 = func_252(135, iParam1);
	fVar18 = func_252(136, iParam1);
	bVar19 = func_162(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		unk_0x466ED20F52F36C02(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_156(2101, iParam1, 0);
		if (iVar20 > 0)
		{
			func_237(iParam0, iParam1, 0);
		}
	}
}

void func_237(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_251(iVar1);
		if (!bParam2)
		{
			fVar3 = func_252(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_250(iVar2, iParam1);
		}
		unk_0x8173BC90AE40BF1F(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_249(iVar4);
		iVar6 = func_248(iVar5);
		iVar7 = func_247(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_244(iVar6, iParam1, -1);
				fVar11 = func_252(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_243(iVar6, iParam1);
				fVar11 = func_250(iVar7, iParam1);
			}
			unk_0xD1F6F90A501388DD(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_242(iVar5);
			iVar9 = func_241(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_156(iVar8, iParam1, 0);
					iVar14 = func_156(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_240(iVar8, iParam1);
					iVar14 = func_240(iVar9, iParam1);
				}
				func_239(iVar13, &iVar12, &iVar15);
				unk_0xF7EB0C8006400E03(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_238(&iParam0, iParam1, bParam2);
}

void func_238(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		fVar0 = func_252(157, iParam1);
	}
	else
	{
		fVar0 = func_250(157, iParam1);
	}
	if (*iParam0 == unk_0x16F2683693E537C9())
	{
	}
	unk_0x4258D118A5836248(*iParam0, round(fVar0));
}

void func_239(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_240(int iParam0, int iParam1)
{
	iVar0 = Global_2548434[iParam0][func_157(iParam1)];
	if (unk_0xB2F7928AAEE89A48(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return -1;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return -1;
}

int func_243(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_69();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	if (!unk_0xB076A81AAD8BC406(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_244(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_69();
	}
	iVar0 = 0;
	iVar1 = func_246(iParam0, iParam1);
	iVar2 = func_245(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_245(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_69();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_247(int iParam0)
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

int func_248(int iParam0)
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

int func_249(int iParam0)
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

float func_250(int iParam0, int iParam1)
{
	uVar0 = Global_2582968[iParam0][func_157(iParam1)];
	if (unk_0x0D91FA9057C5153C(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_251(int iParam0)
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

float func_252(int iParam0, int iParam1)
{
	iVar0 = Global_2582968[iParam0][func_157(iParam1)];
	if (unk_0x893A626C476B583D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0 == 1885233650)
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4267117 == iParam1)
		{
			iVar2 = Global_4267116;
			iVar1 = Global_4267115;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_321(iParam0, iParam1, 7, 3);
			iVar1 = func_312(iVar2);
			Global_4267117 = iParam1;
			Global_4267116 = iVar2;
			Global_4267115 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4267120 == iParam3)
		{
			iVar4 = Global_4267119;
			iVar3 = Global_4267118;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_321(iParam0, iParam3, 11, 3);
			iVar3 = func_312(iVar4);
			Global_4267120 = iParam3;
			Global_4267119 = iVar4;
			Global_4267118 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4267123 == iParam4)
		{
			iVar6 = Global_4267122;
			iVar5 = Global_4267121;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_321(iParam0, iParam4, 8, 3);
			iVar5 = func_312(iVar6);
			Global_4267123 = iParam4;
			Global_4267122 = iVar6;
			Global_4267121 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4267126 == iParam10)
		{
			iVar8 = Global_4267125;
			iVar7 = Global_4267124;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_321(iParam0, iParam10, 1, 3);
			iVar7 = func_312(iVar8);
			Global_4267126 = iParam10;
			Global_4267125 = iVar8;
			Global_4267124 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x1A5A491D253EA7BA(iVar4, -1855618474, 0) || unk_0x1A5A491D253EA7BA(iVar4, 351511157, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0) && !unk_0x1A5A491D253EA7BA(iVar8, -973213642, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar2, -372885432, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar4, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar2, 531704825, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar4, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar2, -372885432, 0))
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
		if (unk_0x1A5A491D253EA7BA(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_321(iParam0, iParam9, 14, 3);
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
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case -1962767847:
					case -1654116636:
					case -1485356286:
					case -1178212449:
					case -766633809:
					case 665568109:
					case -288304716:
					case 1772824957:
					case 1533381874:
					case -2012223930:
					case 2008237453:
					case -1304118613:
					case -1543430620:
					case -854101936:
					case -1061103709:
					case -616035151:
					case 1307111925:
					case 1759289928:
					case -1036580403:
					case -203035350:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1473812293, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x1A5A491D253EA7BA(iVar4, -63750166, 0) || unk_0x1A5A491D253EA7BA(iVar4, -870074461, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1834446747, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1719167561, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1274099003, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1431529976, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1723403459, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 137011325, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1830529185, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_255(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x1A5A491D253EA7BA(iVar4, -63750166, 0))
				{
					return 0;
				}
				else if (func_255(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x1A5A491D253EA7BA(iVar4, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -353070590, 0))
			{
				if (((unk_0x1A5A491D253EA7BA(iVar4, -870074461, 0) || unk_0x1A5A491D253EA7BA(iVar4, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1473812293, 0)) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -319568873, 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_321(iParam0, iParam11, 4, 3);
				}
				if (unk_0x1A5A491D253EA7BA(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 654065530, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x1A5A491D253EA7BA(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x1A5A491D253EA7BA(iVar4, 974680318, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1625463492, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -779835469, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1086258388, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1627756587, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1021189127, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -672871169, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 572416369, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -196114988, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1322269404, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1655154167, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1607949555, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1719167561, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1431529976, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1723403459, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 137011325, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -491588875, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!unk_0x1A5A491D253EA7BA(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 974680318, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1010805287, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x1A5A491D253EA7BA(iVar4, 248194463, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 572350888, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1817355735, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1627756587, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 572416369, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1538937264, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 602650322, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -99064836, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -148928294, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -435539886, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1375878737, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x1A5A491D253EA7BA(iVar6, -1778265882, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 1965569012, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1914383230, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 1553766533, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0))
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
			if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 2066241403, 0))
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
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_316(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x1A5A491D253EA7BA(iVar4, -1446333198, 0) || unk_0x1A5A491D253EA7BA(iVar4, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0))
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
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0)))
				{
					if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_195(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_312(func_321(iParam0, iVar0, 11, 3)) == 13))
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
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_316(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x1A5A491D253EA7BA(iVar4, -1446333198, 0) || unk_0x1A5A491D253EA7BA(iVar4, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0))
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
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1778265882, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 1965569012, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0))) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0))) || unk_0x1A5A491D253EA7BA(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_195(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_312(func_321(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x1A5A491D253EA7BA(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0))
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
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 1965569012, 0))) || unk_0x1A5A491D253EA7BA(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0))
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
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 651155766, 0)) && unk_0x1A5A491D253EA7BA(iVar2, -277681306, 0)) || (((iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 505220913, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, -277681306, 0)) && !unk_0x1A5A491D253EA7BA(iVar6, 558082254, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0x1A5A491D253EA7BA(iVar6, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 1458930564, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 2048281121, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 19149565, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
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
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x1A5A491D253EA7BA(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -374729298) || iVar6 == 399897093) || unk_0x1A5A491D253EA7BA(iVar6, 684992453, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
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
							if (!unk_0x1A5A491D253EA7BA(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x1A5A491D253EA7BA(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_254(iVar6)) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x1A5A491D253EA7BA(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1627756587, 0)) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -713698407, 0))
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
				if (unk_0x1A5A491D253EA7BA(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4267117 == iParam1)
		{
			iVar12 = Global_4267116;
			iVar11 = Global_4267115;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_321(iParam0, iParam1, 7, 4);
			iVar11 = func_312(iVar12);
			Global_4267117 = iParam1;
			Global_4267116 = iVar12;
			Global_4267115 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4267120 == iParam3)
		{
			iVar14 = Global_4267119;
			iVar13 = Global_4267118;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_321(iParam0, iParam3, 11, 4);
			iVar13 = func_312(iVar14);
			Global_4267120 = iParam3;
			Global_4267119 = iVar14;
			Global_4267118 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4267123 == iParam4)
		{
			iVar16 = Global_4267122;
			iVar15 = Global_4267121;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_321(iParam0, iParam4, 8, 4);
			iVar15 = func_312(iVar16);
			Global_4267123 = iParam4;
			Global_4267122 = iVar16;
			Global_4267121 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4267126 == iParam10)
		{
			iVar18 = Global_4267125;
			iVar17 = Global_4267124;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_321(iParam0, iParam10, 1, 4);
			iVar17 = func_312(iVar18);
			Global_4267126 = iParam10;
			Global_4267125 = iVar18;
			Global_4267124 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_321(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0x1A5A491D253EA7BA(iVar14, -1855618474, 0) || unk_0x1A5A491D253EA7BA(iVar14, 351511157, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -299089347, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0) && !unk_0x1A5A491D253EA7BA(iVar18, -973213642, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1320139576, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar14, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar12, -372885432, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar14, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar12, 531704825, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar14, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x1A5A491D253EA7BA(iVar12, -372885432, 0))
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
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == -1519558015)
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
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case -1178170642:
					case -880726429:
					case -699776011:
					case -401873032:
					case -700496933:
					case -404429018:
					case -2134238990:
					case -2136376254:
					case 1861212367:
					case -789144321:
					case -223092615:
					case 763352592:
					case -549897852:
					case -1976889495:
					case -1410575637:
					case -428980242:
					case -1731482454:
					case -1390357480:
					case -1765816422:
					case -1533320367:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case -1997689882:
					case -1617209023:
					case -1391954917:
					case -1832969872:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1473812293, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((unk_0x1A5A491D253EA7BA(iVar14, -63750166, 0) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1830529185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_255(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_255(iParam0, iParam3) || unk_0x1A5A491D253EA7BA(iVar14, -63750166, 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -353070590, 0))
			{
				if ((((unk_0x1A5A491D253EA7BA(iVar14, -870074461, 0) || unk_0x1A5A491D253EA7BA(iVar14, -1174924468, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1473812293, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar16, -63750166, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 596326873, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -713698407, 0))
		{
			if (iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1473812293, 0)) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -319568873, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_321(iParam0, iParam11, 4, 4);
				}
				if (unk_0x1A5A491D253EA7BA(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x1A5A491D253EA7BA(iVar12, -920534092, 0) || unk_0x1A5A491D253EA7BA(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x1A5A491D253EA7BA(iVar14, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar14, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1714969731, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 947651647, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x1A5A491D253EA7BA(iVar14, 700658917, 0) || unk_0x1A5A491D253EA7BA(iVar14, 745826556, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 144417099, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, 1537081084, 0))
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
				if (unk_0x1A5A491D253EA7BA(iVar16, 1553766533, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1914383230, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, -920534092, 0))
					{
						if (unk_0x1A5A491D253EA7BA(iVar16, 441715397, 0) || unk_0x1A5A491D253EA7BA(iVar16, 264959411, 0))
						{
							if (unk_0x1A5A491D253EA7BA(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x1A5A491D253EA7BA(iVar12, 1828206051, 0))
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
			if ((iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, 1406402954, 1)) || (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_316(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -761463976, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1347486026, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -939525357, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || unk_0x1A5A491D253EA7BA(iVar14, -55550566, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x1A5A491D253EA7BA(iVar14, -530089825, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1965569012, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -713698407, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -55104292, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -779835469, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1086258388, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2106216756, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1627756587, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1127835965, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -672871169, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 572416369, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -196114988, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1607949555, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1976716889, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1407863332, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1986415230, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1103045158, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x1A5A491D253EA7BA(iVar16, 1455992833, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -870074461, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1174924468, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1177480446, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1347486026, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1655154167, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2105858993, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1893564692, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1710451520, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1416808511, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1641506460, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 699233865, 0)) || iVar16 == -565297075) || iVar16 == 262349558) || iVar16 == -917804055) || iVar16 == -1156067454) || iVar16 == -2124751863) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == -1037820496) || iVar16 == -79097863) || unk_0x1A5A491D253EA7BA(iVar16, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1607949555, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1976716889, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -352447393, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -642551350, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -819569488, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -2020068325, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -269266203, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 201427653, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 967829025, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -979468724, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -58412562, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -435539886, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 974680318, 0))
				{
					if (!unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x1A5A491D253EA7BA(iVar16, 1965569012, 0) || unk_0x1A5A491D253EA7BA(iVar16, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar16, 1353777856, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1207283343, 0))
				{
					return 0;
				}
				else if (func_313(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, 525778571, 0))
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
			if (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, 654065530, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x1A5A491D253EA7BA(iVar12, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					unk_0x7467B50942D9D7EE(iVar19, &Var21);
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
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1965569012, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1119232689, 0))) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1986415230, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2030343924, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 602650322, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 905042630, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1204125293, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1855618474, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1375878737, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 396458410, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -761463976, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 821147517, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1347486026, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -994703884, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1119232689, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1607949555, 0))) || unk_0x1A5A491D253EA7BA(iVar14, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1965569012, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1986415230, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -430330349, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1351486939, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2030343924, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -828478571, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar14, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1831422288, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 1147939952, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 2026620439, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1882920022, 0))) || unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0))
				{
					if (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar16, 1965569012, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((unk_0x1A5A491D253EA7BA(iVar16, -1786447517, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -549843760, 0))
				{
					return 0;
				}
				else if ((unk_0x1A5A491D253EA7BA(iVar16, -1703203608, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1415000253, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -168336417, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x1A5A491D253EA7BA(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -530089825, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, 103539798, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -994703884, 0)))
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
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -1200513218, 0))) || (iParam3 >= 256 && unk_0x1A5A491D253EA7BA(iVar14, -530089825, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar16, -7109286, 0) || unk_0x1A5A491D253EA7BA(iVar16, 1943347821, 0))
				{
					return 0;
				}
				else if (((unk_0x1A5A491D253EA7BA(iVar16, -1786447517, 0) || unk_0x1A5A491D253EA7BA(iVar16, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar16, -549843760, 0))
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
				if (unk_0x1A5A491D253EA7BA(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x1A5A491D253EA7BA(iVar16, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x1A5A491D253EA7BA(iVar12, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x1A5A491D253EA7BA(iVar14, -747583185, 0))
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
					iVar38 = func_321(iParam0, iParam11, 4, 4);
				}
				if (unk_0x1A5A491D253EA7BA(iVar38, -33031567, 0))
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

int func_254(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	if (iParam0 == 1885233650)
	{
		iVar0 = func_321(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x1A5A491D253EA7BA(iVar0, -1119232689, 0) || unk_0x1A5A491D253EA7BA(iVar0, -2102859770, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1976716889, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2099109084, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1719167561, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1274099003, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1431529976, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1723403459, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -441291342, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -785939537, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 492620493, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar0, 1927516484, 0)) || unk_0x1A5A491D253EA7BA(iVar0, -1603194928, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_316(iParam0, iParam1, -1);
	}
	else if (iParam0 == -1667301416)
	{
		iVar1 = func_321(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_312(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x1A5A491D253EA7BA(iVar1, -1393156190, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 320460654, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -2017999390, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -826135203, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -747583185, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -102825006, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -733792105, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -641612092, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1506370874, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1786447517, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1010805287, 0)) || unk_0x1A5A491D253EA7BA(iVar1, -1325813684, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1690933245, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1360588936, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 2136821028, 0)) || unk_0x1A5A491D253EA7BA(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_256(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	func_307(unk_0x12AB0310C2281427("hairOverlay"), iParam0);
	iVar1 = func_306(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_76431;
		}
		func_333(iVar1, 1, iParam2);
	}
	func_257(iParam0, bParam3, 0);
}

void func_257(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = Global_76431;
		unk_0x68E65DDE8CFEDD57(iParam0);
		iVar14 = func_305(iParam0);
		bVar15 = func_300(iParam0, 0);
		bVar16 = func_296(iParam0);
		bVar17 = func_295(iParam0);
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
			if (func_292(iVar18, iVar0))
			{
				if (func_285(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_282(iParam0, &Var1, iVar18, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						unk_0x8A01F93D41A7B4C6(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_292(123, iVar0))
		{
			if (unk_0x6470E293FA6E8179(-1719270477, -1824026490) != 7)
			{
				unk_0x8A01F93D41A7B4C6(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = unk_0x7CD02DB660471C17(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (unk_0x835E39F167B067AB(iVar14, iVar19, &Var21))
			{
				if (!unk_0x232048AB4B0E0259(Var21))
				{
					iVar36 = (129 + iVar19);
					if (func_292(iVar36, iVar0))
					{
						if (func_282(iParam0, &(Var21.f_7), iVar36, Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							if (!func_259(Var21.f_2, Var21.f_3, iVar36))
							{
								unk_0x8A01F93D41A7B4C6(iParam0, Var21.f_2, Var21.f_3);
								func_258(iParam0, Var21.f_2, Var21.f_3);
							}
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_258(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1347816957:
			switch (iParam2)
			{
				case -725236090:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -2083543812);
					break;
				
				case -485989621:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1873408074);
					break;
				
				case 711356870:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1873408074);
					break;
				
				case 111487556:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 510898066);
					break;
				
				case 588276502:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 510898066);
					break;
				
				case -3335024:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 557464221);
					break;
				
				case 1184770609:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 557464221);
					break;
				
				case 359647189:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2089193796);
					break;
				
				case 1545327916:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1305509445);
					break;
				
				case 954502846:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -638853135);
					break;
				
				case -893208491:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -638853135);
					break;
				
				case -1661674318:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1601527241);
					break;
				
				case -1624645348:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1960396175);
					break;
				
				case 620358850:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 54045697);
					break;
				
				case 122204512:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1310058833);
					break;
				
				case -645147161:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 251854291);
					break;
				
				case -375556598:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2062329004);
					break;
				
				case 1841102407:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1538230799);
					break;
				
				case 831620593:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -59766962);
					break;
				
				case 1129884031:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1480518916);
					break;
				
				case 2092301321:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -482380281);
					break;
				
				case 580667351:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -76867803);
					break;
				
				case 1538832911:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -76867803);
					break;
				
				case -1355259635:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -533311445);
					break;
				
				case -1583168030:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2137255691);
					break;
				
				case -1831032746:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2137255691);
					break;
				
				case -2060448515:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -2042378246);
					break;
				
				case -50365286:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 756993084);
					break;
				
				case -364095692:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 756993084);
					break;
				
				case -606979520:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1161584545);
					break;
				
				case -1057062007:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1161584545);
					break;
				
				case -1253872621:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1528861297);
					break;
				
				case -1525625938:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1528861297);
					break;
				
				case 603801989:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 806416816);
					break;
				
				case 432289043:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 806416816);
					break;
				
				case 176592536:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1433191244);
					break;
				
				case -126291331:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1433191244);
					break;
				
				case 2093415191:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1917136673);
					break;
				
				case 1383966341:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1917136673);
					break;
				
				case 1061027846:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1634927571);
					break;
				
				case 610754913:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1634927571);
					break;
				
				case 1856271834:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1965545249);
					break;
				
				case 151235226:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1965545249);
					break;
				
				case 1292317344:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1855774824);
					break;
				
				case 1592055387:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1855774824);
					break;
			}
			switch (iParam2)
			{
				case 1389004292:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -408720218);
					break;
				
				case 459577145:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -789630253);
					break;
				
				case 697971620:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -789630253);
					break;
				
				case -157037136:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1104646403);
					break;
				
				case 70412493:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1104646403);
					break;
				
				case -861963864:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1535753965);
					break;
				
				case -496458438:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1535753965);
					break;
				
				case -1356579150:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -99283873);
					break;
				
				case -1125721545:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -485563451);
					break;
				
				case -2065044930:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1432409825);
					break;
				
				case -346765569:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1432409825);
					break;
				
				case -734816067:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -302122276);
					break;
				
				case -961282630:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -717650362);
					break;
				
				case 1134491538:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -233338433);
					break;
				
				case 842421441:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 314602147);
					break;
				
				case 523316919:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1900511936);
					break;
				
				case 158466873:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 821039296);
					break;
				
				case 1789019544:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -545035086);
					break;
				
				case 1426332252:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1960507422);
					break;
				
				case 1178893529:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -694062896);
					break;
				
				case -1101107129:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1829603753);
					break;
				
				case -1790763503:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2045678662);
					break;
				
				case -1550271812:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 2045678662);
					break;
				
				case -384612940:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1648833799);
					break;
				
				case -45257176:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -75503803);
					break;
				
				case -866087857:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -75503803);
					break;
				
				case -623761102:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1501392494);
					break;
				
				case 1075770310:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1390523363);
					break;
				
				case 342137938:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1390523363);
					break;
				
				case 599407357:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1233403366);
					break;
				
				case 335056082:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1233403366);
					break;
				
				case 1164668855:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1084269847);
					break;
				
				case -424365493:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1084269847);
					break;
				
				case -1995737350:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1344114351);
					break;
				
				case 2052610452:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1344114351);
					break;
				
				case 745160145:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1154163217);
					break;
				
				case 238944633:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1154163217);
					break;
				
				case -1894874368:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1174984361);
					break;
				
				case -1050515545:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, -1174984361);
					break;
				
				case -1296283045:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 495811116);
					break;
				
				case -254061820:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 495811116);
					break;
				
				case -482822209:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1152130184);
					break;
				
				case -1148622755:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1152130184);
					break;
				
				case 499821790:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1987407913);
					break;
				
				case 132940066:
					unk_0x8A01F93D41A7B4C6(iParam0, 1347816957, 1987407913);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					unk_0x8A01F93D41A7B4C6(iParam0, 202420620, -501147160);
					break;
			}
			switch (iParam2)
			{
				case -1214222467:
					unk_0x8A01F93D41A7B4C6(iParam0, 202420620, -1739422168);
					break;
			}
			break;
		
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 5866095);
					break;
				
				case -670835215:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1257645214);
					break;
				
				case -32315658:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1938877708);
					break;
				
				case -715501640:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 177616986);
					break;
				
				case 812138662:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -437640642);
					break;
				
				case -1950509905:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 460297451);
					break;
				
				case 1850969667:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -589899025);
					break;
				
				case 997671095:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 342543493);
					break;
				
				case -1526467268:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -950134188);
					break;
				
				case -881852779:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 2043701187);
					break;
				
				case -570992218:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 794519137);
					break;
				
				case -1075500139:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 90598123);
					break;
				
				case -791689054:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -151296204);
					break;
				
				case 699980662:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 386731882);
					break;
				
				case -583230088:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1129017399);
					break;
				
				case 1922201848:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1175077252);
					break;
				
				case -767702908:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1710583235);
					break;
				
				case 1979813112:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 900966291);
					break;
				
				case -2056272592:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -153754682);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 580372087);
					break;
				
				case -521204587:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -326572091);
					break;
				
				case 1685732560:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1550532305);
					break;
				
				case -1386443378:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1913405685);
					break;
				
				case -1706648281:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -956341143);
					break;
				
				case -519957866:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 2063062018);
					break;
				
				case 653935582:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 605481338);
					break;
				
				case 2111779395:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1708926987);
					break;
				
				case 428988289:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 264383347);
					break;
				
				case -1903962822:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1101363062);
					break;
				
				case 1365770911:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1963254369);
					break;
				
				case 42029862:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 390663856);
					break;
				
				case 438631811:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 916481637);
					break;
				
				case -1478715891:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1930151778);
					break;
				
				case -1395531229:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1731016702);
					break;
				
				case 30333135:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -1915197882);
					break;
				
				case 1783341339:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, -25535717);
					break;
				
				case -16077126:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1193200233);
					break;
				
				case -833643184:
					unk_0x8A01F93D41A7B4C6(iParam0, -1016521996, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					unk_0x8A01F93D41A7B4C6(iParam0, 1616273011, -815706791);
					break;
				
				case -1366750043:
					unk_0x8A01F93D41A7B4C6(iParam0, 1616273011, -1066127505);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					unk_0x8A01F93D41A7B4C6(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					unk_0x8A01F93D41A7B4C6(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					unk_0x8A01F93D41A7B4C6(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					unk_0x8A01F93D41A7B4C6(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, -588549683);
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, -965491494);
					unk_0x8A01F93D41A7B4C6(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -368118722:
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_279(30260, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_279(30261, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_279(30262, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_279(30263, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_279(30264, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_279(30265, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_279(30266, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_279(30267, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_279(30268, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_279(30269, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_279(30270, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_279(30271, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_279(30272, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_279(30273, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_279(30274, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_279(30275, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_279(30276, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_279(30277, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_279(30278, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_279(30279, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_279(30280, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_279(30281, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_279(30282, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_279(30283, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_279(30284, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_279(30285, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_279(30286, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_279(30287, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_279(30288, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_279(30289, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1610210252);
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
					if (func_279(28255, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -417116499);
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
					if (func_275(89, -1) || func_279(30254, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_275(90, -1) || func_279(30255, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_275(92, -1) || func_279(30256, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_275(89, -1) && func_275(90, -1)) && func_275(92, -1)) && func_275(91, -1)) || func_279(30257, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1414541879);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -502214028:
				case -1413356029:
					if (func_275(78, -1) || func_279(28199, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1413356029);
					break;
				
				case 836015556:
				case -1849502305:
					if (((func_275(77, -1) && func_275(78, -1)) && func_274(92, -1) >= func_273(92, 5, 9)) || func_279(28200, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1849502305);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -104345338:
				case 1184426490:
				case 47527010:
				case 1505693935:
				case -1551981580:
				case 1572497951:
					if (((func_274(93, -1) >= func_273(93, 5, 9) && func_275(79, -1)) && func_275(80, -1)) || func_279(28204, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, ((iParam1 == 1505693935 || iParam1 == -1551981580) || iParam1 == 1572497951));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case 1848216712:
				case -965460704:
					if (func_275(81, -1) || func_279(28206, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -965460704);
					break;
				
				case 223413431:
				case -1917254263:
					if (func_274(94, -1) >= func_273(94, 5, 9) || func_279(28207, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1917254263);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -432155816:
				case 1777785544:
					if (((func_275(84, -1) && func_275(85, -1)) && func_274(97, -1) >= func_273(97, 5, 9)) || func_279(28212, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1777785544);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1838365509:
				case -2062177771:
					if (func_279(28249, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2062177771);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -73524046:
				case 1921321590:
					if (func_279(28183, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1921321590);
					break;
				
				case -1843193891:
				case -822177429:
					if (func_279(28182, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -822177429);
					break;
				
				case -1224204417:
				case -531271155:
					if (func_279(28184, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -531271155);
					break;
				
				case 921109652:
				case 412829693:
					if (func_279(28181, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 412829693);
					break;
				
				case -1009122462:
				case -1411787934:
					if (func_279(28178, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1411787934);
					break;
				
				case -2143877160:
				case 653645139:
					if (func_279(28177, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 653645139);
					break;
				
				case 985961343:
				case 1848048195:
					if (func_279(28176, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1848048195);
					break;
				
				case 906071982:
				case -781400442:
					if (func_279(28180, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -781400442);
					break;
				
				case 566663142:
				case 1507919906:
					if (func_279(28179, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1507919906);
					break;
				
				case 764251611:
				case -1381102054:
					if (((((((((func_279(28176, -1, -1) && func_279(28177, -1, -1)) && func_279(28178, -1, -1)) && func_279(28179, -1, -1)) && func_279(28180, -1, -1)) && func_279(28181, -1, -1)) && func_279(28182, -1, -1)) && func_279(28183, -1, -1)) && func_279(28184, -1, -1)) || func_279(28221, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1381102054);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1575240476:
				case 565394453:
					if (func_279(28191, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 565394453);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -809444617:
				case -498335731:
					if (func_279(28190, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -498335731);
					break;
				
				case -1643354138:
				case -137061435:
					if (func_279(28189, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -137061435);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -547605203:
				case 2077453849:
					if (func_270(0, 1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 2077453849);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1576036346:
				case 585832887:
					if ((((((((((((((((((func_275(77, -1) && func_275(78, -1)) && func_274(92, -1) >= func_273(92, 5, 9)) && func_274(93, -1) >= func_273(93, 5, 9)) && func_275(79, -1)) && func_275(80, -1)) && func_275(81, -1)) && func_274(94, -1) >= func_273(94, 5, 9)) && func_274(95, -1) >= func_273(95, 5, 9)) && func_275(82, -1)) && func_275(83, -1)) && func_274(96, -1) >= func_273(96, 5, 9)) && func_275(84, -1)) && func_275(85, -1)) && func_274(97, -1) >= func_273(97, 5, 9)) && func_275(86, -1)) && func_275(87, -1)) && func_275(88, -1)) || func_279(28222, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 585832887);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1347816957:
			switch (iParam1)
			{
				case 1352224647:
				case 1896190035:
					return !func_276(iParam2, iParam1, iParam1 == 1352224647);
					break;
				
				case 1857392409:
				case -524815620:
					return !func_276(iParam2, iParam1, iParam1 == 1857392409);
					break;
				
				case 580667351:
				case -1790763503:
					if (func_279(27109, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 580667351);
					break;
				
				case -1355259635:
				case -384612940:
					if (func_279(27110, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1355259635);
					break;
				
				case 711356870:
				case 697971620:
					if (func_279(27111, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 711356870);
					break;
				
				case 588276502:
				case 70412493:
					if (func_279(27112, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 588276502);
					break;
				
				case 1184770609:
				case -496458438:
					if (func_279(27113, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1184770609);
					break;
				
				case -893208491:
				case -346765569:
					if (func_279(27114, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -893208491);
					break;
				
				case 1538832911:
				case -1550271812:
					if (func_279(27115, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1538832911);
					break;
			}
			break;
		
		case -2145114209:
			switch (iParam1)
			{
				case -1015392647:
				case 1817749559:
					if (func_279(25032, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1015392647);
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_279(25033, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1742471685);
					break;
				
				case 408116861:
				case 1306937694:
					if (func_279(25034, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 408116861);
					break;
				
				case -1855327598:
				case -95533995:
					if (func_279(25035, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1855327598);
					break;
				
				case 1578402908:
				case -1871451886:
					if (func_279(25036, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1578402908);
					break;
				
				case -1423366674:
				case -1120843246:
					if (func_279(25037, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1423366674);
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_279(25038, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1611107047);
					break;
				
				case 742927305:
				case -1339214923:
					if (func_279(25039, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 742927305);
					break;
				
				case -1578833665:
				case 9807447:
					if (func_279(25040, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1578833665);
					break;
				
				case 773738667:
				case -236005319:
					if (func_279(25041, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 773738667);
					break;
				
				case 213007702:
				case -1470794594:
					if (func_279(25042, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 213007702);
					break;
				
				case 432208089:
				case -2100868384:
					if (func_279(25043, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 432208089);
					break;
				
				case 35817542:
				case 805626890:
					if (func_279(25044, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 35817542);
					break;
				
				case -1786080093:
				case -438487729:
					if (func_279(25045, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1786080093);
					break;
				
				case -215923306:
				case 1258452311:
					if (func_279(25046, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -215923306);
					break;
				
				case 1275581512:
				case -1387587887:
					if (func_279(25047, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1275581512);
					break;
				
				case -1214009019:
				case 390131826:
					if (func_279(25048, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1214009019);
					break;
				
				case 1639713863:
				case -933865090:
					if (func_279(25049, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1639713863);
					break;
				
				case 529311368:
				case 42888304:
					if (func_279(25050, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 529311368);
					break;
				
				case -1033895864:
				case -1512618189:
					if (func_279(25051, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1033895864);
					break;
				
				case 924043677:
				case 1805955770:
					if (func_279(25052, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 924043677);
					break;
				
				case -574749266:
				case 2040741242:
					if (func_279(25053, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -574749266);
					break;
				
				case 519463901:
				case -1572115827:
					if (func_279(25054, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 519463901);
					break;
				
				case -643353187:
				case -2101278774:
					if (func_279(25055, -1, -1))
					{
						return 0;
					}
					if (func_279(27077, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -643353187);
					break;
				
				case 1571011017:
				case -2006216868:
					if (func_279(25056, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1571011017);
					break;
				
				case -94540936:
				case 1445470992:
					if (func_279(25057, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -94540936);
					break;
				
				case 1884218662:
				case 31459402:
					if (func_279(25058, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1884218662);
					break;
				
				case -345261869:
				case 850282323:
					if (func_279(25059, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -345261869);
					break;
				
				case -1022859058:
				case 1518409673:
					if (func_279(25060, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1022859058);
					break;
				
				case -1786322924:
				case 576453072:
					if (func_279(25061, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1786322924);
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_279(25062, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 2085269022);
					break;
				
				case 1511882653:
				case -1244055789:
					if (func_279(25063, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1511882653);
					break;
				
				case -506986385:
				case 1650491806:
					if (func_279(25064, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -506986385);
					break;
				
				case -874081588:
				case 507754313:
					if (func_279(25065, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -874081588);
					break;
				
				case -2043405937:
				case -1168735793:
					if (func_279(25066, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2043405937);
					break;
				
				case 59038842:
				case 539301314:
					if (func_279(25067, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 59038842);
					break;
				
				case 1101237057:
				case 485114319:
					if (func_279(25068, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1101237057);
					break;
				
				case -657535677:
				case 1397146165:
					if (func_279(25069, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -657535677);
					break;
				
				case -2093585025:
				case -922912500:
					if (func_279(25070, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2093585025);
					break;
				
				case 908383468:
				case 898093918:
					if (func_279(25071, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 908383468);
					break;
				
				case -1608760399:
				case -513817029:
					if (func_279(25072, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1608760399);
					break;
				
				case 1373660540:
				case 134762953:
					if (func_279(25073, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1373660540);
					break;
				
				case 1854316713:
				case 252404144:
					if (func_279(25074, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1854316713);
					break;
				
				case -119951196:
				case 168579849:
					if (func_279(25075, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -119951196);
					break;
				
				case -1649842228:
				case 1888095634:
					if (func_279(25076, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1649842228);
					break;
				
				case -1640764925:
				case -1046236786:
					if (func_279(25077, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1640764925);
					break;
				
				case 1787927716:
				case 33901453:
					if (func_279(25078, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1787927716);
					break;
				
				case 104283481:
				case -2043232938:
					if (func_279(25079, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 104283481);
					break;
				
				case 378263500:
				case 1113927554:
					if (func_279(25080, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 378263500);
					break;
				
				case -1061215309:
				case -1602559301:
					if (func_279(25081, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1061215309);
					break;
				
				case 1034166199:
				case -1167812298:
					if (func_279(25082, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1034166199);
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_279(25083, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1828057305);
					break;
				
				case -1486297381:
				case 647456058:
					if (func_279(25084, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1486297381);
					break;
				
				case -540767159:
				case -717523161:
					if (func_279(25085, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -540767159);
					break;
				
				case -1235960692:
				case -1641870267:
					if (func_279(25086, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1235960692);
					break;
				
				case -329316995:
				case 1857030685:
					if (func_279(25087, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -329316995);
					break;
				
				case -581880272:
				case -1074922646:
					if (func_279(25088, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -581880272);
					break;
				
				case -1807345434:
				case -1544308671:
					if (func_279(25089, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1807345434);
					break;
				
				case -1018409435:
				case -480375220:
					if (func_279(25090, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1018409435);
					break;
				
				case -136011898:
				case -1158306419:
					if (func_279(25091, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -136011898);
					break;
				
				case -2069494727:
				case 808115088:
					if (func_279(25092, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2069494727);
					break;
				
				case -642887005:
				case 1544542048:
					if (func_279(25093, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -642887005);
					break;
				
				case -1810837638:
				case 212713658:
					if (func_279(25094, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1810837638);
					break;
				
				case 1034484576:
				case -537477127:
					if (func_279(25095, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1034484576);
					break;
				
				case 1979445594:
				case -2067132678:
					if (func_279(25096, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1979445594);
					break;
				
				case -1533877336:
				case 1060051174:
					if (func_279(25097, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1533877336);
					break;
				
				case -892254987:
				case 2038375002:
					if (func_279(25098, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -892254987);
					break;
				
				case -654222260:
				case -256374303:
					if (func_279(25099, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -654222260);
					break;
				
				case 450544862:
				case -964420554:
					return !func_276(iParam2, iParam1, iParam1 == 450544862);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case -1214222467:
					if (func_279(22108, -1, -1) || func_279(25006, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1495413374);
					break;
				
				case 370906922:
				case -1079776812:
					if (func_279(9481, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 370906922);
					break;
				
				case 531742637:
				case -948990166:
					if (func_279(9470, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 531742637);
					break;
				
				case -225805790:
				case 1382201813:
					if (func_279(9475, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -225805790);
					break;
				
				case -624586952:
				case 1576375706:
					if (func_279(9472, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -624586952);
					break;
				
				case 915144902:
				case -1356500517:
					if (func_279(9465, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 915144902);
					break;
				
				case -242746043:
				case 1838019927:
					if (func_279(9463, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -242746043);
					break;
				
				case 1620048835:
				case 618955885:
					if (func_279(9464, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1620048835);
					break;
				
				case -1097603268:
				case 909858453:
					if (func_279(9468, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1097603268);
					break;
				
				case -660672539:
				case 1809389163:
					if (func_279(9469, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -660672539);
					break;
				
				case -4642188:
				case -382370447:
					if (func_279(9479, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -4642188);
					break;
				
				case 1855977539:
				case -290949038:
					if (func_279(9473, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1855977539);
					break;
				
				case 1537270222:
				case 381474823:
					if (func_279(9480, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1537270222);
					break;
				
				case -1226569770:
				case 570088958:
					if (func_279(9476, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1226569770);
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_279(9477, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1641457991);
					break;
				
				case 1366312361:
				case -1327397746:
					if (func_279(9471, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1366312361);
					break;
				
				case -1557113221:
				case 655777349:
					if (func_279(9474, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1557113221);
					break;
				
				case -1690570414:
				case -1496905620:
					if (func_279(9467, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1690570414);
					break;
				
				case -507204255:
				case -1043010182:
					if (func_279(9478, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -507204255);
					break;
				
				case -1804897639:
				case -1326077011:
					if (func_279(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1804897639)
					{
						if (func_279(27085, -1, -1))
						{
							return 0;
						}
					}
					else if (func_279(27084, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1804897639);
					break;
				
				case -1375233423:
				case -1120323372:
					if (func_279(9466, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1375233423);
					break;
				
				case 490066935:
				case -1583620927:
					if (func_279(22126, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 490066935);
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_279(22127, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1193725595);
					break;
				
				case 628493116:
				case -244079832:
					if (func_279(22128, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 628493116);
					break;
				
				case -2112155518:
				case 1055951410:
					if (func_279(22124, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2112155518);
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_279(22130, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1511337702);
					break;
				
				case -627666528:
				case -1874854660:
					if (func_279(22125, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -627666528);
					break;
				
				case 768324163:
				case -1379192256:
					if (func_279(22129, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 768324163);
					break;
				
				case -1448761813:
				case 1435106801:
					if (func_279(22131, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1448761813);
					break;
				
				case 868551738:
				case -1252683947:
					if (func_279(22132, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 868551738);
					break;
			}
			switch (iParam1)
			{
				case -1021262861:
				case -1380607703:
					if (func_279(22147, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1021262861);
					break;
				
				case -264447931:
				case 1010167914:
					if (func_279(22148, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -264447931);
					break;
				
				case -652127435:
				case 1059266367:
					if (func_279(22149, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -652127435);
					break;
				
				case -610014599:
				case 1869746711:
					if (func_279(22150, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -610014599);
					break;
				
				case 848073973:
				case 167494616:
					if (func_279(22151, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 848073973);
					break;
				
				case 1561087717:
				case 231256171:
					if (func_279(22152, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1561087717);
					break;
				
				case 2067249852:
				case -2041196288:
					if (func_279(22153, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 2067249852);
					break;
				
				case 1963924398:
				case -231795220:
					if (func_279(22154, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1963924398);
					break;
				
				case -898550276:
				case -1207463639:
					if (func_279(22155, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -898550276);
					break;
				
				case -1074178691:
				case 2023442158:
					if (func_279(22156, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1074178691);
					break;
				
				case -368616744:
				case -1293194083:
					if (func_279(22157, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -368616744);
					break;
				
				case -78566501:
				case 767365246:
					if (func_279(22158, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -78566501);
					break;
				
				case 1623651387:
				case -318042939:
					if (func_279(22159, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1623651387);
					break;
				
				case -1229980240:
				case -740608006:
					if (func_279(22160, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1229980240);
					break;
				
				case -1558321426:
				case 126660566:
					if (func_279(22161, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1558321426);
					break;
				
				case 518190097:
				case -252733393:
					if (func_279(22162, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 518190097);
					break;
				
				case -1996043294:
				case -1044136613:
					if (func_279(22163, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1996043294);
					break;
				
				case 1720844546:
				case -891762294:
					if (func_279(22164, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1720844546);
					break;
				
				case -20709979:
				case 1410738248:
					if (func_279(22165, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -20709979);
					break;
				
				case -1617383579:
				case -1978727490:
					if (func_279(22166, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1617383579);
					break;
				
				case -525135065:
				case 1684642458:
					if (func_279(22167, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -525135065);
					break;
				
				case 1796039054:
				case -147490340:
					if (func_279(22168, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1796039054);
					break;
				
				case 1250030109:
				case -1422117996:
					if (func_279(22169, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1250030109);
					break;
				
				case -1195876295:
				case -313931425:
					if (func_279(22170, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1195876295);
					break;
				
				case 672890092:
				case 211076563:
					if (func_279(22171, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 672890092);
					break;
				
				case 413298313:
				case 355035035:
					if (func_279(22172, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 413298313);
					break;
				
				case 1157302328:
				case -1447308868:
					if (func_279(22173, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1157302328);
					break;
				
				case -1564457471:
				case 1802655618:
					if (func_279(22174, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1564457471);
					break;
				
				case 1152621988:
				case -1063742156:
					if (func_279(22175, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1152621988);
					break;
				
				case -1961291349:
				case 1988028531:
					if (func_279(22176, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1961291349);
					break;
				
				case -1912591074:
				case 73898487:
					if (func_279(22177, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1912591074);
					break;
				
				case 1049766626:
				case -1041813118:
					if (func_279(22178, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1049766626);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_279(15426, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2123485438);
					break;
				
				case -815706791:
				case -1066127505:
					if (func_279(15422, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -815706791);
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_279(15423, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1318802347);
					break;
				
				case 306110040:
				case 1944822196:
					if (func_279(15421, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 306110040);
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_279(15427, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1828101251);
					break;
				
				case -919314748:
				case 1282565442:
					if (func_279(15419, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -919314748);
					break;
				
				case 1971111649:
				case -884280700:
					if (func_279(15420, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1971111649);
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_279(15394, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1029334921);
					break;
				
				case -534855486:
				case -1168575065:
					if (func_162(209, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -534855486);
					break;
				
				case -516333262:
				case 756873456:
					if (func_279(15406, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -516333262);
					break;
				
				case 485135095:
				case -730037708:
					if (func_279(15395, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 485135095);
					break;
				
				case 1713551997:
				case -970458486:
					if (func_162(209, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1713551997);
					break;
				
				case -1490658501:
				case 975601953:
					if (func_279(15410, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1490658501);
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_279(15407, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1735635238);
					break;
				
				case 1931303956:
				case -726032561:
					if (func_162(209, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1931303956);
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_162(209, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1931617488);
					break;
				
				case -1726332301:
				case 417579524:
					if (func_279(15414, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1726332301);
					break;
				
				case -1382922530:
				case 734151492:
					if (func_279(15415, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1382922530);
					break;
				
				case 452778672:
				case -1766862320:
					if (func_279(15399, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 452778672);
					break;
				
				case -1776790350:
				case 579562906:
					if (func_279(15404, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1776790350);
					break;
				
				case -1988057295:
				case -619754931:
					if (func_162(209, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1988057295);
					break;
				
				case 816707921:
				case 1424441799:
					if (func_279(15392, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 816707921);
					break;
				
				case 744446190:
				case -1405036369:
					if (func_279(15390, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 744446190);
					break;
				
				case 917772807:
				case 1929056908:
					if (func_279(15402, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 917772807);
					break;
				
				case -292922355:
				case -34538790:
					if (func_279(15416, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -292922355);
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_162(209, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1495432685);
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_279(9366, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 769964545);
					break;
				
				case 1424500982:
				case -701486200:
					if (func_279(9367, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1424500982);
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_279(9369, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1810785185);
					break;
				
				case 837990279:
				case -1981978861:
					if (func_279(9368, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 837990279);
					break;
				
				case 1752551314:
				case 468661890:
					if (func_279(9365, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1752551314);
					break;
				
				case 735155845:
				case 1907925586:
					if (func_279(9364, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 735155845);
					break;
				
				case 1863251462:
				case 646243571:
					if (func_279(27078, -1, -1))
					{
						return 0;
					}
					if (func_279(9363, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1863251462);
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_279(9362, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2142058763);
					break;
				
				case -207591105:
				case 874867224:
					if (func_279(9370, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -207591105);
					break;
				
				case -932813887:
				case 1344008898:
					if (func_279(9371, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -932813887);
					break;
				
				case -313503199:
				case 1297781304:
					if (func_279(9372, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -313503199);
					break;
				
				case 718936417:
				case 1977233252:
					if (func_279(9373, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 718936417);
					break;
				
				case -1107649605:
				case -194410344:
					if (func_279(9374, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1107649605);
					break;
				
				case 39090475:
				case 392012609:
					if (func_279(9384, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 39090475);
					break;
				
				case 1628251208:
				case 705148450:
					if (func_279(9385, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1628251208);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_279(7551, -1, -1) || func_156(3789, -1, 0) >= Global_262145.f_16308)
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -621355603);
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_279(7467, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1006202521);
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_279(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						if (func_279(27083, -1, -1))
						{
							return 0;
						}
					}
					else if (func_279(27086, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1834049539);
					break;
				
				case -2060372580:
				case -254669596:
					if (func_279(7469, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2060372580);
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_279(7470, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1057304170);
					break;
				
				case 1421572640:
				case -941072260:
					if (func_279(7471, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1421572640);
					break;
				
				case 481259621:
				case -1844749517:
					if (func_279(7472, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 481259621);
					break;
				
				case 1227497670:
				case 82745424:
					if (func_279(7473, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1227497670);
					break;
				
				case 319276780:
				case -673460083:
					if (func_279(7474, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 319276780);
					break;
				
				case 2070827921:
				case -99954496:
					if (func_279(7475, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 2070827921);
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_279(7476, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1433629991);
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_279(7477, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1712994650);
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_279(7478, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 2125094286);
					break;
				
				case 712298404:
				case -1504557219:
					if (func_279(7479, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 712298404);
					break;
				
				case 1998072324:
				case 367912881:
					if (func_279(7480, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1998072324);
					break;
				
				case 1249206960:
				case -836343280:
					if (func_279(7481, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1249206960);
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_279(4260, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 283190173);
					break;
				
				case -60867780:
				case 1528527015:
					if (func_279(4257, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1528527015);
					break;
				
				case 926967912:
				case -1690029966:
					if (func_279(4269, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1690029966);
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_279(4261, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1685994466);
					break;
				
				case -1314959708:
				case 255166927:
					if (func_279(4259, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 255166927);
					break;
				
				case -1696774529:
				case -271257487:
					if (func_279(4268, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -271257487);
					break;
				
				case -356446484:
				case 1885215284:
					if (func_279(4265, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1885215284);
					break;
				
				case 857810380:
				case -1935156988:
					if (func_279(4258, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1935156988);
					break;
				
				case -629676646:
				case 1061465906:
					if (func_279(4264, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 1061465906);
					break;
				
				case -1879530481:
				case -871031729:
					if (func_279(4267, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -871031729);
					break;
				
				case -1265847311:
				case -101171485:
					if (func_279(4262, -1, -1))
					{
						return 0;
					}
					if (func_279(27079, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -101171485);
					break;
				
				case 32094424:
				case -1590298770:
					if (func_279(4263, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -1590298770);
					break;
				
				case 1969286744:
				case 303441856:
					if (func_279(4266, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == 303441856);
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_156(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == 1466454525)
					{
						if (func_279(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_276(iParam2, iParam1, 1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_156(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == -473732439)
					{
						if (func_279(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_276(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_279(113, -1, -1))
					{
						return 0;
					}
					return !func_276(iParam2, iParam1, iParam1 == -2049689650);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam1)
			{
				case -627999265:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case -30981230:
				case -328032215:
				case -1451681225:
				case 267904819:
					if (iParam1 == -627999265)
					{
						if (func_279(27082, -1, -1))
						{
							return 0;
						}
						if (func_279(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_279(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_279(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_279(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_279(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_279(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_279(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_279(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_279(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_279(3779, -1, -1) || func_279(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_276(iParam2, iParam1, 1);
					break;
				
				case -1864998224:
				case -2140814897:
				case 223468453:
				case -83970305:
				case -406843262:
				case -954740942:
				case -1675526854:
				case 2111717556:
				case -415395003:
				case 427521984:
					if (iParam1 == -1864998224)
					{
						if (func_279(3770, -1, -1))
						{
							return 0;
						}
						if (func_279(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_279(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_279(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_279(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_279(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_279(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_279(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_279(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_279(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_279(3779, -1, -1) || func_279(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_276(iParam2, iParam1, 0);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_279(3765, -1, -1) && func_279(3766, -1, -1)) && func_279(3767, -1, -1)) && func_279(3768, -1, -1)) && func_279(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_279(3593, -1, -1);
					break;
			}
			break;
		
		case -1398869298:
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
				
				case -1450406320:
				case 1412653072:
					return (!func_162(152, -1) && !func_279(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_162(151, -1) && !func_279(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_262(func_267(iParam1, 3), -1) && !func_279(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_262(func_267(iParam1, 4), -1) && !func_279(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_261();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_279(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_279(3615, -1, -1) && !func_279(9438, -1, -1));
					break;
			}
			break;
		
		case -1056335443:
			if (iParam1 == -963164512)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case -1544625218:
					return !func_279(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_279(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_279(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_279(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					return !func_279(3787, -1, -1);
					break;
				
				case 1620729159:
				case -1860485560:
					return !func_279(3788, -1, -1);
					break;
				
				case -1713274238:
				case 499288642:
					if (func_279(27081, -1, -1))
					{
						return 0;
					}
					return !func_279(3789, -1, -1);
					break;
				
				case -1571590969:
				case -7887054:
					return !func_279(3790, -1, -1);
					break;
				
				case -457639374:
				case -1553041502:
					return !func_279(3791, -1, -1);
					break;
				
				case 64160805:
				case -1080591445:
					return !func_279(3792, -1, -1);
					break;
				
				case 776078819:
				case -1303573005:
					if (iParam1 == 776078819)
					{
						iVar0 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == -1303573005)
					{
						iVar1 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_279(3793, -1, -1);
					break;
				
				case -1069464482:
				case 2085207152:
					if (iParam1 == -1069464482)
					{
						iVar2 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_279(3794, -1, -1);
					break;
				
				case -1342875239:
				case 857137150:
					if (iParam1 == -1342875239)
					{
						iVar4 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_279(3795, -1, -1);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_279(3796, -1, -1);
					break;
				
				case 642864781:
				case -1974657401:
					if (iParam1 == 642864781)
					{
						iVar8 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == -1974657401)
					{
						iVar9 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_279(3797, -1, -1);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_279(3798, -1, -1);
					break;
				
				case -1290780406:
				case -1499060170:
					if (iParam1 == -1290780406)
					{
						iVar12 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == -1499060170)
					{
						iVar13 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_279(3799, -1, -1);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_279(3800, -1, -1);
					break;
				
				case -1221948530:
				case 915049044:
					if (iParam1 == -1221948530)
					{
						iVar16 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_279(3801, -1, -1);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_156(2442, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_156(2422, -1, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_279(3802, -1, -1);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case -588549683:
				case 464027076:
					return 1;
					break;
				
				case -965491494:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case -1458541976:
				case -606014753:
				case -613376371:
				case -446291501:
				case -1034642040:
				case 1022637316:
				case -1677156418:
				case -1130213300:
					return !func_260();
					break;
			}
			break;
	}
	return 0;
}

int func_260()
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

bool func_261()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

bool func_262(int iParam0, int iParam1)
{
	if (func_265(iParam0) == 11511)
	{
		return 0;
	}
	iVar0 = func_264(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_263(iVar1));
}

int func_263(int iParam0)
{
	return (iParam0 % 32);
}

int func_264(var uParam0, int iParam1)
{
	iVar0 = func_156(func_265(uParam0), iParam1, 0);
	return iVar0;
}

int func_265(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_266(iVar0);
	if ((func_151() == 0 || func_150() == 0) || (func_151() == 999 && func_150() == 999))
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
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
		}
	}
	return 11511;
}

int func_266(int iParam0)
{
	return (iParam0 / 32);
}

int func_267(int iParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (func_269(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_268(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = unk_0x7CD02DB660471C17(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (unk_0x835E39F167B067AB(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_268(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case -1736964311:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case -1233797068:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case -960020839:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case -88227822:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case -1918622460:
			iVar0 = 845;
			break;
		
		case -947347525:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case -164042492:
			iVar0 = 850;
			break;
		
		case -1370021995:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case -716829520:
			iVar0 = 853;
			break;
		
		case -478457952:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case -1122655717:
			iVar0 = 856;
			break;
		
		case -356634497:
			iVar0 = 857;
			break;
		
		case -1346341418:
			iVar0 = 858;
			break;
		
		case -1214222467:
			iVar0 = 859;
			break;
		
		case -1079776812:
			iVar0 = 860;
			break;
		
		case -948990166:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case -1356500517:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case -382370447:
			iVar0 = 869;
			break;
		
		case -290949038:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case -1327397746:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case -1496905620:
			iVar0 = 876;
			break;
		
		case -1043010182:
			iVar0 = 877;
			break;
		
		case -1326077011:
			iVar0 = 878;
			break;
		
		case -1120323372:
			iVar0 = 879;
			break;
		
		case -1583620927:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case -244079832:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case -1874854660:
			iVar0 = 885;
			break;
		
		case -1379192256:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case -1252683947:
			iVar0 = 888;
			break;
		
		case -1380607703:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case -2041196288:
			iVar0 = 895;
			break;
		
		case -231795220:
			iVar0 = 896;
			break;
		
		case -1207463639:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case -1293194083:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case -318042939:
			iVar0 = 901;
			break;
		
		case -740608006:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case -252733393:
			iVar0 = 904;
			break;
		
		case -1044136613:
			iVar0 = 905;
			break;
		
		case -891762294:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case -1978727490:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case -147490340:
			iVar0 = 910;
			break;
		
		case -1422117996:
			iVar0 = 911;
			break;
		
		case -313931425:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case -1447308868:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case -1063742156:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case -1041813118:
			iVar0 = 920;
			break;
		
		case -964420554:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case -95533995:
			iVar0 = 925;
			break;
		
		case -1871451886:
			iVar0 = 926;
			break;
		
		case -1120843246:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case -1339214923:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case -236005319:
			iVar0 = 931;
			break;
		
		case -1470794594:
			iVar0 = 932;
			break;
		
		case -2100868384:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case -438487729:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case -1387587887:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case -933865090:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case -1512618189:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case -1572115827:
			iVar0 = 944;
			break;
		
		case -2101278774:
			iVar0 = 945;
			break;
		
		case -2006216868:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case -1244055789:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case -1168735793:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case -922912500:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case -513817029:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case -1046236786:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case -2043232938:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case -1602559301:
			iVar0 = 971;
			break;
		
		case -1167812298:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case -717523161:
			iVar0 = 975;
			break;
		
		case -1641870267:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case -1074922646:
			iVar0 = 978;
			break;
		
		case -1544308671:
			iVar0 = 979;
			break;
		
		case -480375220:
			iVar0 = 980;
			break;
		
		case -1158306419:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case -537477127:
			iVar0 = 985;
			break;
		
		case -2067132678:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case -256374303:
			iVar0 = 989;
			break;
		
		case -2088960010:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case -162426614:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case -111852222:
			iVar0 = 994;
			break;
		
		case -2132895820:
			iVar0 = 995;
			break;
		
		case -1693221374:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case -955872734:
			iVar0 = 998;
			break;
		
		case -858057022:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case -437731710:
			iVar0 = 1001;
			break;
		
		case -1554819122:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case -1994066555:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case -768319839:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case -1360851461:
			iVar0 = 1009;
			break;
		
		case -1204294910:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case -518038969:
			iVar0 = 1013;
			break;
		
		case -1562358717:
			iVar0 = 1014;
			break;
		
		case -1942234381:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case -1724314576:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case -532184873:
			iVar0 = 1020;
			break;
		
		case -176418916:
			iVar0 = 1021;
			break;
		
		case -255254961:
			iVar0 = 1022;
			break;
		
		case -1575657225:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case -851809867:
			iVar0 = 1027;
			break;
		
		case -710322017:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case -1781084925:
			iVar0 = 1034;
			break;
		
		case -1001719981:
			iVar0 = 1035;
			break;
		
		case -849489038:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case -899132837:
			iVar0 = 1038;
			break;
		
		case -1844999955:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case -1582889838:
			iVar0 = 1041;
			break;
		
		case -242968503:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case -689792496:
			iVar0 = 1046;
			break;
		
		case 987747946:
			iVar0 = 1047;
			break;
		
		case 65224538:
			iVar0 = 1048;
			break;
		
		case 1579550559:
			iVar0 = 1049;
			break;
		
		case -464415589:
			iVar0 = 1050;
			break;
		
		case -445972364:
			iVar0 = 1051;
			break;
		
		case -654499627:
			iVar0 = 1052;
			break;
		
		case -736721263:
			iVar0 = 1053;
			break;
		
		case -568649369:
			iVar0 = 1054;
			break;
		
		case 879556831:
			iVar0 = 1055;
			break;
		
		case -1606449893:
			iVar0 = 1056;
			break;
		
		case 552957998:
			iVar0 = 1057;
			break;
		
		case -45830165:
			iVar0 = 1058;
			break;
		
		case -1681032345:
			iVar0 = 1059;
			break;
		
		case 1852583670:
			iVar0 = 1060;
			break;
		
		case -2051866149:
			iVar0 = 1061;
			break;
		
		case -2022674987:
			iVar0 = 1062;
			break;
		
		case 1212064605:
			iVar0 = 1063;
			break;
		
		case 284091254:
			iVar0 = 1064;
			break;
		
		case 1123523612:
			iVar0 = 1065;
			break;
		
		case 209576694:
			iVar0 = 1066;
			break;
		
		case 1852311340:
			iVar0 = 1067;
			break;
		
		case -1681829257:
			iVar0 = 1068;
			break;
		
		case -1902030573:
			iVar0 = 1069;
			break;
		
		case -1172040354:
			iVar0 = 1070;
			break;
		
		case 1896190035:
			iVar0 = 1071;
			break;
		
		case 1253892786:
			iVar0 = 1072;
			break;
		
		case 1619815742:
			iVar0 = 1073;
			break;
		
		case -203379302:
			iVar0 = 1074;
			break;
		
		case -1888601473:
			iVar0 = 1075;
			break;
		
		case -145302944:
			iVar0 = 1076;
			break;
		
		case 1793368599:
			iVar0 = 1077;
			break;
		
		case -524815620:
			iVar0 = 1078;
			break;
		
		case -667753083:
			iVar0 = 1079;
			break;
		
		case 1867381326:
			iVar0 = 1080;
			break;
		
		case 1389004292:
			iVar0 = 1081;
			break;
		
		case 459577145:
			iVar0 = 1082;
			break;
		
		case 697971620:
			iVar0 = 1083;
			break;
		
		case -157037136:
			iVar0 = 1084;
			break;
		
		case 70412493:
			iVar0 = 1085;
			break;
		
		case -861963864:
			iVar0 = 1086;
			break;
		
		case -496458438:
			iVar0 = 1087;
			break;
		
		case -1356579150:
			iVar0 = 1088;
			break;
		
		case -1125721545:
			iVar0 = 1089;
			break;
		
		case -2065044930:
			iVar0 = 1090;
			break;
		
		case -346765569:
			iVar0 = 1091;
			break;
		
		case -734816067:
			iVar0 = 1092;
			break;
		
		case -961282630:
			iVar0 = 1093;
			break;
		
		case 1134491538:
			iVar0 = 1094;
			break;
		
		case 842421441:
			iVar0 = 1095;
			break;
		
		case 523316919:
			iVar0 = 1096;
			break;
		
		case 158466873:
			iVar0 = 1097;
			break;
		
		case 1789019544:
			iVar0 = 1098;
			break;
		
		case 1426332252:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case 1178893529:
			iVar0 = 1100;
			break;
		
		case -1101107129:
			iVar0 = 1101;
			break;
		
		case -1790763503:
			iVar0 = 1102;
			break;
		
		case -1550271812:
			iVar0 = 1103;
			break;
		
		case -384612940:
			iVar0 = 1104;
			break;
		
		case -45257176:
			iVar0 = 1105;
			break;
		
		case -866087857:
			iVar0 = 1106;
			break;
		
		case -623761102:
			iVar0 = 1107;
			break;
		
		case 1075770310:
			iVar0 = 1108;
			break;
		
		case 342137938:
			iVar0 = 1109;
			break;
		
		case 599407357:
			iVar0 = 1110;
			break;
		
		case 335056082:
			iVar0 = 1111;
			break;
		
		case 1164668855:
			iVar0 = 1112;
			break;
		
		case -424365493:
			iVar0 = 1113;
			break;
		
		case -1995737350:
			iVar0 = 1114;
			break;
		
		case 2052610452:
			iVar0 = 1115;
			break;
		
		case 745160145:
			iVar0 = 1116;
			break;
		
		case 238944633:
			iVar0 = 1117;
			break;
		
		case -1894874368:
			iVar0 = 1118;
			break;
		
		case -1050515545:
			iVar0 = 1119;
			break;
		
		case -1296283045:
			iVar0 = 1120;
			break;
		
		case -254061820:
			iVar0 = 1121;
			break;
		
		case -482822209:
			iVar0 = 1122;
			break;
		
		case -1148622755:
			iVar0 = 1123;
			break;
		
		case 499821790:
			iVar0 = 1124;
			break;
		
		case 132940066:
			iVar0 = 1125;
			break;
		
		case -503061408:
			iVar0 = 1126;
			break;
		
		case -511607931:
			iVar0 = 1127;
			break;
		
		case -1252323352:
			iVar0 = 1128;
			break;
		
		case -1836767787:
			iVar0 = 1129;
			break;
		
		case 2104165007:
			iVar0 = 1130;
			break;
		
		case -1020450678:
			iVar0 = 1131;
			break;
		
		case 361610929:
			iVar0 = 1132;
			break;
		
		case -1060893559:
			iVar0 = 1133;
			break;
		
		case -1918931165:
			iVar0 = 1134;
			break;
		
		case 516389880:
			iVar0 = 1135;
			break;
		
		case 2047957618:
			iVar0 = 1136;
			break;
		
		case -1461327573:
			iVar0 = 1137;
			break;
		
		case -1710764657:
			iVar0 = 1138;
			break;
		
		case -815856869:
			iVar0 = 1139;
			break;
		
		case 1293748604:
			iVar0 = 1140;
			break;
		
		case -906850579:
			iVar0 = 1141;
			break;
		
		case -504902857:
			iVar0 = 1142;
			break;
		
		case -1891206996:
			iVar0 = 1143;
			break;
		
		case -6720974:
			iVar0 = 1144;
			break;
		
		case -2069848364:
			iVar0 = 1145;
			break;
		
		case 778786183:
			iVar0 = 1146;
			break;
		
		case -1337421708:
			iVar0 = 1147;
			break;
		
		case -1890546602:
			iVar0 = 1148;
			break;
		
		case 218123795:
			iVar0 = 1149;
			break;
		
		case -636242520:
			iVar0 = 1150;
			break;
		
		case -1180398682:
			iVar0 = 1151;
			break;
		
		case 1694157857:
			iVar0 = 1152;
			break;
		
		case -1696611500:
			iVar0 = 1153;
			break;
		
		case 1988941728:
			iVar0 = 1154;
			break;
		
		case -1693251432:
			iVar0 = 1155;
			break;
		
		case -1235260480:
			iVar0 = 1156;
			break;
		
		case -2013104967:
			iVar0 = 1157;
			break;
		
		case -1763320016:
			iVar0 = 1158;
			break;
		
		case 1141954591:
			iVar0 = 1159;
			break;
		
		case 24176579:
			iVar0 = 1160;
			break;
		
		case 501566279:
			iVar0 = 1161;
			break;
		
		case -909438267:
			iVar0 = 1162;
			break;
		
		case -1286663634:
			iVar0 = 1163;
			break;
		
		case -1840235222:
			iVar0 = 1164;
			break;
		
		case -888873465:
			iVar0 = 1165;
			break;
		
		case -1426756926:
			iVar0 = 1166;
			break;
		
		case 2130054214:
			iVar0 = 1167;
			break;
		
		case 836015556:
			iVar0 = 1168;
			break;
		
		case -502214028:
			iVar0 = 1169;
			break;
		
		case -1838365509:
			iVar0 = 1170;
			break;
		
		case -547605203:
			iVar0 = 1171;
			break;
		
		case 1848216712:
			iVar0 = 1172;
			break;
		
		case 223413431:
			iVar0 = 1173;
			break;
		
		case -432155816:
			iVar0 = 1174;
			break;
		
		case -104345338:
			iVar0 = 1175;
			break;
		
		case 1184426490:
			iVar0 = 1176;
			break;
		
		case 47527010:
			iVar0 = 1177;
			break;
		
		case -1576036346:
			iVar0 = 1178;
			break;
		
		case -809444617:
			iVar0 = 1179;
			break;
		
		case -1643354138:
			iVar0 = 1180;
			break;
		
		case -73524046:
			iVar0 = 1181;
			break;
		
		case -1843193891:
			iVar0 = 1182;
			break;
		
		case -1224204417:
			iVar0 = 1183;
			break;
		
		case 921109652:
			iVar0 = 1184;
			break;
		
		case -1009122462:
			iVar0 = 1185;
			break;
		
		case -2143877160:
			iVar0 = 1186;
			break;
		
		case 985961343:
			iVar0 = 1187;
			break;
		
		case 906071982:
			iVar0 = 1188;
			break;
		
		case 566663142:
			iVar0 = 1189;
			break;
		
		case 764251611:
			iVar0 = 1190;
			break;
		
		case -1575240476:
			iVar0 = 1191;
			break;
		
		case 676807987:
			iVar0 = 1192;
			break;
		
		case 272160153:
			iVar0 = 1193;
			break;
		
		case 1593344440:
			iVar0 = 1194;
			break;
		
		case 546222390:
			iVar0 = 1195;
			break;
		
		case 1983375900:
			iVar0 = 1196;
			break;
		
		case -620589387:
			iVar0 = 1197;
			break;
		
		case 383923929:
			iVar0 = 1198;
			break;
		
		case -1703406594:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -398286533:
			iVar0 = 1200;
			break;
		
		case -80478106:
			iVar0 = 1201;
			break;
		
		case 1835331655:
			iVar0 = 1202;
			break;
		
		case -1650596870:
			iVar0 = 1203;
			break;
		
		case 1231926496:
			iVar0 = 1204;
			break;
		
		case -1506181253:
			iVar0 = 1205;
			break;
		
		case -1737145605:
			iVar0 = 1206;
			break;
		
		case 1673851512:
			iVar0 = 1207;
			break;
		
		case 1023339598:
			iVar0 = 1208;
			break;
		
		case -163738770:
			iVar0 = 1209;
			break;
		
		case 1863218823:
			iVar0 = 1210;
			break;
		
		case 333966447:
			iVar0 = 1211;
			break;
		
		case 1412626052:
			iVar0 = 1212;
			break;
		
		case -39100956:
			iVar0 = 1213;
			break;
		
		case 1631533003:
			iVar0 = 1214;
			break;
		
		case 1493430918:
			iVar0 = 1215;
			break;
		
		case -196693334:
			iVar0 = 1216;
			break;
		
		case 553507495:
			iVar0 = 1217;
			break;
		
		case 2003474700:
			iVar0 = 1218;
			break;
		
		case 1121792228:
			iVar0 = 1219;
			break;
		
		case -1424651669:
			iVar0 = 1220;
			break;
		
		case -1454164346:
			iVar0 = 1221;
			break;
		
		case -779574408:
			iVar0 = 1222;
			break;
		
		case -1361908447:
			iVar0 = 1223;
			break;
		
		case 1250161120:
			iVar0 = 1224;
			break;
		
		case 1288201657:
			iVar0 = 1225;
			break;
		
		case 111412152:
			iVar0 = 1226;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_269(int iParam0, var uParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case -1712994650:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case -2071014467:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case -786732051:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case -792802958:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
		
		case 388715677:
			iVar0 = 818;
			break;
		
		case 2121965551:
			iVar0 = 819;
			break;
		
		case -1233846590:
			iVar0 = 820;
			break;
		
		case -1448569917:
			iVar0 = 821;
			break;
		
		case 257911811:
			iVar0 = 822;
			break;
		
		case 1945550351:
			iVar0 = 823;
			break;
		
		case 1745422723:
			iVar0 = 824;
			break;
		
		case 1031130678:
			iVar0 = 825;
			break;
		
		case -416717212:
			iVar0 = 826;
			break;
		
		case -1228169566:
			iVar0 = 827;
			break;
		
		case 1472355612:
			iVar0 = 828;
			break;
		
		case 19369937:
			iVar0 = 829;
			break;
		
		case 662247816:
			iVar0 = 830;
			break;
		
		case -1572191963:
			iVar0 = 831;
			break;
		
		case -791841628:
			iVar0 = 832;
			break;
		
		case -1531355431:
			iVar0 = 833;
			break;
		
		case 2040691909:
			iVar0 = 834;
			break;
		
		case -2114317157:
			iVar0 = 835;
			break;
		
		case -2085191627:
			iVar0 = 836;
			break;
		
		case 946610385:
			iVar0 = 837;
			break;
		
		case 1384666834:
			iVar0 = 838;
			break;
		
		case -1850499077:
			iVar0 = 839;
			break;
		
		case 1599340952:
			iVar0 = 840;
			break;
		
		case -911004337:
			iVar0 = 841;
			break;
		
		case 1896039464:
			iVar0 = 842;
			break;
		
		case 1588676114:
			iVar0 = 843;
			break;
		
		case -861144593:
			iVar0 = 844;
			break;
		
		case -29907878:
			iVar0 = 845;
			break;
		
		case 1886796781:
			iVar0 = 846;
			break;
		
		case -862474356:
			iVar0 = 847;
			break;
		
		case 1495413374:
			iVar0 = 848;
			break;
		
		case 370906922:
			iVar0 = 849;
			break;
		
		case 531742637:
			iVar0 = 850;
			break;
		
		case -225805790:
			iVar0 = 851;
			break;
		
		case -624586952:
			iVar0 = 852;
			break;
		
		case 915144902:
			iVar0 = 853;
			break;
		
		case -242746043:
			iVar0 = 854;
			break;
		
		case 1620048835:
			iVar0 = 855;
			break;
		
		case -1097603268:
			iVar0 = 856;
			break;
		
		case -660672539:
			iVar0 = 857;
			break;
		
		case -4642188:
			iVar0 = 858;
			break;
		
		case 1855977539:
			iVar0 = 859;
			break;
		
		case 1537270222:
			iVar0 = 860;
			break;
		
		case -1226569770:
			iVar0 = 861;
			break;
		
		case 1641457991:
			iVar0 = 862;
			break;
		
		case 1366312361:
			iVar0 = 863;
			break;
		
		case -1557113221:
			iVar0 = 864;
			break;
		
		case -1690570414:
			iVar0 = 865;
			break;
		
		case -507204255:
			iVar0 = 866;
			break;
		
		case -1804897639:
			iVar0 = 867;
			break;
		
		case -1375233423:
			iVar0 = 868;
			break;
		
		case 490066935:
			iVar0 = 869;
			break;
		
		case 1193725595:
			iVar0 = 870;
			break;
		
		case 628493116:
			iVar0 = 871;
			break;
		
		case -2112155518:
			iVar0 = 872;
			break;
		
		case 1511337702:
			iVar0 = 873;
			break;
		
		case -627666528:
			iVar0 = 874;
			break;
		
		case 768324163:
			iVar0 = 875;
			break;
		
		case -1448761813:
			iVar0 = 876;
			break;
		
		case 868551738:
			iVar0 = 877;
			break;
		
		case -1021262861:
			iVar0 = 878;
			break;
		
		case -264447931:
			iVar0 = 879;
			break;
		
		case -652127435:
			iVar0 = 880;
			break;
		
		case -610014599:
			iVar0 = 881;
			break;
		
		case 848073973:
			iVar0 = 882;
			break;
		
		case 1561087717:
			iVar0 = 883;
			break;
		
		case 2067249852:
			iVar0 = 884;
			break;
		
		case 1963924398:
			iVar0 = 885;
			break;
		
		case -898550276:
			iVar0 = 886;
			break;
		
		case -1074178691:
			iVar0 = 887;
			break;
		
		case -368616744:
			iVar0 = 888;
			break;
		
		case -78566501:
			iVar0 = 889;
			break;
		
		case 1623651387:
			iVar0 = 890;
			break;
		
		case -1229980240:
			iVar0 = 891;
			break;
		
		case -1558321426:
			iVar0 = 892;
			break;
		
		case 518190097:
			iVar0 = 893;
			break;
		
		case -1996043294:
			iVar0 = 894;
			break;
		
		case 1720844546:
			iVar0 = 895;
			break;
		
		case -20709979:
			iVar0 = 896;
			break;
		
		case -1617383579:
			iVar0 = 897;
			break;
		
		case -525135065:
			iVar0 = 898;
			break;
		
		case 1796039054:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 1250030109:
			iVar0 = 900;
			break;
		
		case -1195876295:
			iVar0 = 901;
			break;
		
		case 672890092:
			iVar0 = 902;
			break;
		
		case 413298313:
			iVar0 = 903;
			break;
		
		case 1157302328:
			iVar0 = 904;
			break;
		
		case -1564457471:
			iVar0 = 905;
			break;
		
		case 1152621988:
			iVar0 = 906;
			break;
		
		case -1961291349:
			iVar0 = 907;
			break;
		
		case -1912591074:
			iVar0 = 908;
			break;
		
		case 1049766626:
			iVar0 = 909;
			break;
		
		case 450544862:
			iVar0 = 910;
			break;
		
		case -1015392647:
			iVar0 = 911;
			break;
		
		case 1742471685:
			iVar0 = 912;
			break;
		
		case 408116861:
			iVar0 = 913;
			break;
		
		case -1855327598:
			iVar0 = 914;
			break;
		
		case 1578402908:
			iVar0 = 915;
			break;
		
		case -1423366674:
			iVar0 = 916;
			break;
		
		case 1611107047:
			iVar0 = 917;
			break;
		
		case 742927305:
			iVar0 = 918;
			break;
		
		case -1578833665:
			iVar0 = 919;
			break;
		
		case 773738667:
			iVar0 = 920;
			break;
		
		case 213007702:
			iVar0 = 921;
			break;
		
		case 432208089:
			iVar0 = 922;
			break;
		
		case 35817542:
			iVar0 = 923;
			break;
		
		case -1786080093:
			iVar0 = 924;
			break;
		
		case -215923306:
			iVar0 = 925;
			break;
		
		case 1275581512:
			iVar0 = 926;
			break;
		
		case -1214009019:
			iVar0 = 927;
			break;
		
		case 1639713863:
			iVar0 = 928;
			break;
		
		case 529311368:
			iVar0 = 929;
			break;
		
		case -1033895864:
			iVar0 = 930;
			break;
		
		case 924043677:
			iVar0 = 931;
			break;
		
		case -574749266:
			iVar0 = 932;
			break;
		
		case 519463901:
			iVar0 = 933;
			break;
		
		case -643353187:
			iVar0 = 934;
			break;
		
		case 1571011017:
			iVar0 = 935;
			break;
		
		case -94540936:
			iVar0 = 936;
			break;
		
		case 1884218662:
			iVar0 = 937;
			break;
		
		case -345261869:
			iVar0 = 938;
			break;
		
		case -1022859058:
			iVar0 = 939;
			break;
		
		case -1786322924:
			iVar0 = 940;
			break;
		
		case 2085269022:
			iVar0 = 941;
			break;
		
		case 1511882653:
			iVar0 = 942;
			break;
		
		case -506986385:
			iVar0 = 943;
			break;
		
		case -874081588:
			iVar0 = 944;
			break;
		
		case -2043405937:
			iVar0 = 945;
			break;
		
		case 59038842:
			iVar0 = 946;
			break;
		
		case 1101237057:
			iVar0 = 947;
			break;
		
		case -657535677:
			iVar0 = 948;
			break;
		
		case -2093585025:
			iVar0 = 949;
			break;
		
		case 908383468:
			iVar0 = 950;
			break;
		
		case -1608760399:
			iVar0 = 951;
			break;
		
		case 1373660540:
			iVar0 = 952;
			break;
		
		case 1854316713:
			iVar0 = 953;
			break;
		
		case -119951196:
			iVar0 = 954;
			break;
		
		case -1649842228:
			iVar0 = 955;
			break;
		
		case -1640764925:
			iVar0 = 956;
			break;
		
		case 1787927716:
			iVar0 = 957;
			break;
		
		case 104283481:
			iVar0 = 958;
			break;
		
		case 378263500:
			iVar0 = 959;
			break;
		
		case -1061215309:
			iVar0 = 960;
			break;
		
		case 1034166199:
			iVar0 = 961;
			break;
		
		case 1828057305:
			iVar0 = 962;
			break;
		
		case -1486297381:
			iVar0 = 963;
			break;
		
		case -540767159:
			iVar0 = 964;
			break;
		
		case -1235960692:
			iVar0 = 965;
			break;
		
		case -329316995:
			iVar0 = 966;
			break;
		
		case -581880272:
			iVar0 = 967;
			break;
		
		case -1807345434:
			iVar0 = 968;
			break;
		
		case -1018409435:
			iVar0 = 969;
			break;
		
		case -136011898:
			iVar0 = 970;
			break;
		
		case -2069494727:
			iVar0 = 971;
			break;
		
		case -642887005:
			iVar0 = 972;
			break;
		
		case -1810837638:
			iVar0 = 973;
			break;
		
		case 1034484576:
			iVar0 = 974;
			break;
		
		case 1979445594:
			iVar0 = 975;
			break;
		
		case -1533877336:
			iVar0 = 976;
			break;
		
		case -892254987:
			iVar0 = 977;
			break;
		
		case -654222260:
			iVar0 = 978;
			break;
		
		case -152607027:
			iVar0 = 979;
			break;
		
		case 1211414106:
			iVar0 = 980;
			break;
		
		case -1178363901:
			iVar0 = 981;
			break;
		
		case -170830010:
			iVar0 = 982;
			break;
		
		case 1571032538:
			iVar0 = 983;
			break;
		
		case -975101512:
			iVar0 = 984;
			break;
		
		case 1710494656:
			iVar0 = 985;
			break;
		
		case 1298803936:
			iVar0 = 986;
			break;
		
		case 669174749:
			iVar0 = 987;
			break;
		
		case 1344478544:
			iVar0 = 988;
			break;
		
		case -737204659:
			iVar0 = 989;
			break;
		
		case 1519364050:
			iVar0 = 990;
			break;
		
		case -1470963239:
			iVar0 = 991;
			break;
		
		case 1768755677:
			iVar0 = 992;
			break;
		
		case -428330966:
			iVar0 = 993;
			break;
		
		case -532155133:
			iVar0 = 994;
			break;
		
		case 717197242:
			iVar0 = 995;
			break;
		
		case -1103242747:
			iVar0 = 996;
			break;
		
		case 95120204:
			iVar0 = 997;
			break;
		
		case 1478647927:
			iVar0 = 998;
			break;
		
		case -1996321684:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case -1232815296:
			iVar0 = 1000;
			break;
		
		case -942600475:
			iVar0 = 1001;
			break;
		
		case -157448893:
			iVar0 = 1002;
			break;
		
		case 1273306186:
			iVar0 = 1003;
			break;
		
		case -393833589:
			iVar0 = 1004;
			break;
		
		case 1108909619:
			iVar0 = 1005;
			break;
		
		case -1547493052:
			iVar0 = 1006;
			break;
		
		case -558224274:
			iVar0 = 1007;
			break;
		
		case 2039104212:
			iVar0 = 1008;
			break;
		
		case 269443194:
			iVar0 = 1009;
			break;
		
		case -1335458450:
			iVar0 = 1010;
			break;
		
		case -538608496:
			iVar0 = 1011;
			break;
		
		case 760412020:
			iVar0 = 1012;
			break;
		
		case -1423594652:
			iVar0 = 1013;
			break;
		
		case -749306822:
			iVar0 = 1014;
			break;
		
		case -1357502125:
			iVar0 = 1015;
			break;
		
		case -1697184517:
			iVar0 = 1016;
			break;
		
		case 2069079025:
			iVar0 = 1017;
			break;
		
		case 165790469:
			iVar0 = 1018;
			break;
		
		case -1996334680:
			iVar0 = 1019;
			break;
		
		case -1718451770:
			iVar0 = 1020;
			break;
		
		case -1351890796:
			iVar0 = 1021;
			break;
		
		case -708316325:
			iVar0 = 1022;
			break;
		
		case 343427644:
			iVar0 = 1023;
			break;
		
		case 997385641:
			iVar0 = 1024;
			break;
		
		case 829594522:
			iVar0 = 1025;
			break;
		
		case -755577025:
			iVar0 = 1026;
			break;
		
		case 1130349640:
			iVar0 = 1027;
			break;
		
		case 235241707:
			iVar0 = 1028;
			break;
		
		case 177991867:
			iVar0 = 1029;
			break;
		
		case 632622256:
			iVar0 = 1030;
			break;
		
		case 1897109337:
			iVar0 = 1031;
			break;
		
		case -1277167165:
			iVar0 = 1032;
			break;
		
		case -2040688458:
			iVar0 = 1033;
			break;
		
		case 2053577657:
			iVar0 = 1034;
			break;
		
		case 1475157023:
			iVar0 = 1035;
			break;
		
		case -599666460:
			iVar0 = 1036;
			break;
		
		case 2137077332:
			iVar0 = 1037;
			break;
		
		case -563836962:
			iVar0 = 1038;
			break;
		
		case 1757650301:
			iVar0 = 1039;
			break;
		
		case -1926213636:
			iVar0 = 1040;
			break;
		
		case 636926663:
			iVar0 = 1041;
			break;
		
		case 1864088729:
			iVar0 = 1042;
			break;
		
		case 373164468:
			iVar0 = 1043;
			break;
		
		case -1181875417:
			iVar0 = 1044;
			break;
		
		case 2125316672:
			iVar0 = 1045;
			break;
		
		case 1505585597:
			iVar0 = 1046;
			break;
		
		case -1563329786:
			iVar0 = 1047;
			break;
		
		case -546372951:
			iVar0 = 1048;
			break;
		
		case -276745962:
			iVar0 = 1049;
			break;
		
		case 98665018:
			iVar0 = 1050;
			break;
		
		case 1968556432:
			iVar0 = 1051;
			break;
		
		case -1559144195:
			iVar0 = 1052;
			break;
		
		case -1332960577:
			iVar0 = 1053;
			break;
		
		case 652305392:
			iVar0 = 1054;
			break;
		
		case 1894755292:
			iVar0 = 1055;
			break;
		
		case 1126903931:
			iVar0 = 1056;
			break;
		
		case -914706967:
			iVar0 = 1057;
			break;
		
		case -214853054:
			iVar0 = 1058;
			break;
		
		case -346130454:
			iVar0 = 1059;
			break;
		
		case 1352224647:
			iVar0 = 1060;
			break;
		
		case -1388894295:
			iVar0 = 1061;
			break;
		
		case 1928040960:
			iVar0 = 1062;
			break;
		
		case -721653798:
			iVar0 = 1063;
			break;
		
		case 1424803201:
			iVar0 = 1064;
			break;
		
		case 2024824081:
			iVar0 = 1065;
			break;
		
		case -822973907:
			iVar0 = 1066;
			break;
		
		case 1857392409:
			iVar0 = 1067;
			break;
		
		case -978468741:
			iVar0 = 1068;
			break;
		
		case -811517193:
			iVar0 = 1069;
			break;
		
		case -725236090:
			iVar0 = 1070;
			break;
		
		case -485989621:
			iVar0 = 1071;
			break;
		
		case 711356870:
			iVar0 = 1072;
			break;
		
		case 111487556:
			iVar0 = 1073;
			break;
		
		case 588276502:
			iVar0 = 1074;
			break;
		
		case -3335024:
			iVar0 = 1075;
			break;
		
		case 1184770609:
			iVar0 = 1076;
			break;
		
		case 359647189:
			iVar0 = 1077;
			break;
		
		case 1545327916:
			iVar0 = 1078;
			break;
		
		case 954502846:
			iVar0 = 1079;
			break;
		
		case -893208491:
			iVar0 = 1080;
			break;
		
		case -1661674318:
			iVar0 = 1081;
			break;
		
		case -1624645348:
			iVar0 = 1082;
			break;
		
		case 620358850:
			iVar0 = 1083;
			break;
		
		case 122204512:
			iVar0 = 1084;
			break;
		
		case -645147161:
			iVar0 = 1085;
			break;
		
		case -375556598:
			iVar0 = 1086;
			break;
		
		case 1841102407:
			iVar0 = 1087;
			break;
		
		case 831620593:
			iVar0 = 1088;
			break;
		
		case 1129884031:
			iVar0 = 1089;
			break;
		
		case 2092301321:
			iVar0 = 1090;
			break;
		
		case 580667351:
			iVar0 = 1091;
			break;
		
		case 1538832911:
			iVar0 = 1092;
			break;
		
		case -1355259635:
			iVar0 = 1093;
			break;
		
		case -1583168030:
			iVar0 = 1094;
			break;
		
		case -1831032746:
			iVar0 = 1095;
			break;
		
		case -2060448515:
			iVar0 = 1096;
			break;
		
		case -50365286:
			iVar0 = 1097;
			break;
		
		case -364095692:
			iVar0 = 1098;
			break;
		
		case -606979520:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case -1057062007:
			iVar0 = 1100;
			break;
		
		case -1253872621:
			iVar0 = 1101;
			break;
		
		case -1525625938:
			iVar0 = 1102;
			break;
		
		case 603801989:
			iVar0 = 1103;
			break;
		
		case 432289043:
			iVar0 = 1104;
			break;
		
		case 176592536:
			iVar0 = 1105;
			break;
		
		case -126291331:
			iVar0 = 1106;
			break;
		
		case 2093415191:
			iVar0 = 1107;
			break;
		
		case 1383966341:
			iVar0 = 1108;
			break;
		
		case 1061027846:
			iVar0 = 1109;
			break;
		
		case 610754913:
			iVar0 = 1110;
			break;
		
		case 1856271834:
			iVar0 = 1111;
			break;
		
		case 151235226:
			iVar0 = 1112;
			break;
		
		case 1292317344:
			iVar0 = 1113;
			break;
		
		case 1592055387:
			iVar0 = 1114;
			break;
		
		case 1048452439:
			iVar0 = 1115;
			break;
		
		case 211084:
			iVar0 = 1116;
			break;
		
		case -1009472289:
			iVar0 = 1117;
			break;
		
		case 156013410:
			iVar0 = 1118;
			break;
		
		case 2061696383:
			iVar0 = 1119;
			break;
		
		case -1462570018:
			iVar0 = 1120;
			break;
		
		case -1873628095:
			iVar0 = 1121;
			break;
		
		case -770265298:
			iVar0 = 1122;
			break;
		
		case 820753849:
			iVar0 = 1123;
			break;
		
		case -914435716:
			iVar0 = 1124;
			break;
		
		case -1170154756:
			iVar0 = 1125;
			break;
		
		case -880824798:
			iVar0 = 1126;
			break;
		
		case -249693258:
			iVar0 = 1127;
			break;
		
		case 1489278440:
			iVar0 = 1128;
			break;
		
		case -1512326404:
			iVar0 = 1129;
			break;
		
		case -1378330859:
			iVar0 = 1130;
			break;
		
		case 1459074393:
			iVar0 = 1131;
			break;
		
		case 1273491948:
			iVar0 = 1132;
			break;
		
		case -1406186689:
			iVar0 = 1133;
			break;
		
		case 2124190452:
			iVar0 = 1134;
			break;
		
		case -1740822263:
			iVar0 = 1135;
			break;
		
		case -969884576:
			iVar0 = 1136;
			break;
		
		case 335386038:
			iVar0 = 1137;
			break;
		
		case -1150178569:
			iVar0 = 1138;
			break;
		
		case 1521235675:
			iVar0 = 1139;
			break;
		
		case 1623611883:
			iVar0 = 1140;
			break;
		
		case 1329111213:
			iVar0 = 1141;
			break;
		
		case -1537321295:
			iVar0 = 1142;
			break;
		
		case -1628166034:
			iVar0 = 1143;
			break;
		
		case -132693345:
			iVar0 = 1144;
			break;
		
		case 874964805:
			iVar0 = 1145;
			break;
		
		case -1512427408:
			iVar0 = 1146;
			break;
		
		case 923836315:
			iVar0 = 1147;
			break;
		
		case -1580952699:
			iVar0 = 1148;
			break;
		
		case 1152609891:
			iVar0 = 1149;
			break;
		
		case -1637725121:
			iVar0 = 1150;
			break;
		
		case 1760547084:
			iVar0 = 1151;
			break;
		
		case -2138723176:
			iVar0 = 1152;
			break;
		
		case 1730799330:
			iVar0 = 1153;
			break;
		
		case -280222071:
			iVar0 = 1154;
			break;
		
		case 2067499855:
			iVar0 = 1155;
			break;
		
		case -1635988673:
			iVar0 = 1156;
			break;
		
		case -1849502305:
			iVar0 = 1157;
			break;
		
		case -1413356029:
			iVar0 = 1158;
			break;
		
		case -2062177771:
			iVar0 = 1159;
			break;
		
		case 2077453849:
			iVar0 = 1160;
			break;
		
		case -965460704:
			iVar0 = 1161;
			break;
		
		case -1917254263:
			iVar0 = 1162;
			break;
		
		case 1777785544:
			iVar0 = 1163;
			break;
		
		case 1505693935:
			iVar0 = 1164;
			break;
		
		case -1551981580:
			iVar0 = 1165;
			break;
		
		case 1572497951:
			iVar0 = 1166;
			break;
		
		case 585832887:
			iVar0 = 1167;
			break;
		
		case -498335731:
			iVar0 = 1168;
			break;
		
		case -137061435:
			iVar0 = 1169;
			break;
		
		case 1921321590:
			iVar0 = 1170;
			break;
		
		case -822177429:
			iVar0 = 1171;
			break;
		
		case -531271155:
			iVar0 = 1172;
			break;
		
		case 412829693:
			iVar0 = 1173;
			break;
		
		case -1411787934:
			iVar0 = 1174;
			break;
		
		case 653645139:
			iVar0 = 1175;
			break;
		
		case 1848048195:
			iVar0 = 1176;
			break;
		
		case -781400442:
			iVar0 = 1177;
			break;
		
		case 1507919906:
			iVar0 = 1178;
			break;
		
		case -1381102054:
			iVar0 = 1179;
			break;
		
		case 565394453:
			iVar0 = 1180;
			break;
		
		case -1265443416:
			iVar0 = 1181;
			break;
		
		case 1888753218:
			iVar0 = 1182;
			break;
		
		case -552467991:
			iVar0 = 1183;
			break;
		
		case -1655919948:
			iVar0 = 1184;
			break;
		
		case -917106601:
			iVar0 = 1185;
			break;
		
		case 1595446967:
			iVar0 = 1186;
			break;
		
		case -530593323:
			iVar0 = 1187;
			break;
		
		case 561619447:
			iVar0 = 1188;
			break;
		
		case -1913656173:
			iVar0 = 1189;
			break;
		
		case -1766901922:
			iVar0 = 1190;
			break;
		
		case 2091781849:
			iVar0 = 1191;
			break;
		
		case 1824588341:
			iVar0 = 1192;
			break;
		
		case 242597641:
			iVar0 = 1193;
			break;
		
		case 566785691:
			iVar0 = 1194;
			break;
		
		case -2091312957:
			iVar0 = 1195;
			break;
		
		case -2079214831:
			iVar0 = 1196;
			break;
		
		case 1359156274:
			iVar0 = 1197;
			break;
		
		case 1904247246:
			iVar0 = 1198;
			break;
		
		case -1351518396:
			iVar0 = 1199;
			break;
	}
	switch (iParam0)
	{
		case -797874817:
			iVar0 = 1200;
			break;
		
		case -385507297:
			iVar0 = 1201;
			break;
		
		case 2011910758:
			iVar0 = 1202;
			break;
		
		case -1953985443:
			iVar0 = 1203;
			break;
		
		case -1124222352:
			iVar0 = 1204;
			break;
		
		case -1806994767:
			iVar0 = 1205;
			break;
		
		case -1445761968:
			iVar0 = 1206;
			break;
		
		case -89186417:
			iVar0 = 1207;
			break;
		
		case -308083083:
			iVar0 = 1208;
			break;
		
		case 667714507:
			iVar0 = 1209;
			break;
		
		case -1610210252:
			iVar0 = 1210;
			break;
		
		case -417116499:
			iVar0 = 1211;
			break;
		
		case 1246110729:
			iVar0 = 1212;
			break;
		
		case 461575135:
			iVar0 = 1213;
			break;
		
		case -386163163:
			iVar0 = 1214;
			break;
		
		case -1414541879:
			iVar0 = 1215;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_270(int iParam0, bool bParam1)
{
	iVar0 = (19 - 1);
	if (bParam1)
	{
		iVar0 = 13;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (!func_272(iVar2) || iParam0)
		{
			if (!func_271(unk_0xD803B885F5E47A62(), iVar2))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_271(int iParam0, int iParam1)
{
	if (iParam0 != func_51())
	{
		iVar0 = iParam1;
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_399, iVar0);
	}
	return 0;
}

int func_272(int iParam0)
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

int func_273(int iParam0, int iParam1, int iParam2)
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
		
		case 104:
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
		
		case 105:
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
		
		case 106:
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
		
		case 107:
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
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 98:
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
		
		case 99:
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
		
		case 100:
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
		
		case 101:
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
		
		case 102:
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
		
		case 103:
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
		
		case 109:
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
		
		case 115:
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
		
		case 116:
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
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
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
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
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
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
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
					return Global_262145.f_24738;
				
				case 3:
					return Global_262145.f_24739;
				
				case 4:
					return Global_262145.f_24740;
				
				case 5:
					return Global_262145.f_24741;
				
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
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
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
		
		case 76:
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
		
		case 77:
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
		
		case 78:
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
		
		case 79:
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
		
		case 80:
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
		
		case 81:
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
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
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
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
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
		
		case 87:
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
		
		case 88:
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
					return 40;
				
				default:
			}
			break;
		
		case 89:
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
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27892;
				
				case 3:
					return Global_262145.f_27893;
				
				case 4:
					return Global_262145.f_27894;
				
				case 5:
					return Global_262145.f_27895;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28059;
				
				case 3:
					return Global_262145.f_28060;
				
				case 4:
					return Global_262145.f_28061;
				
				case 5:
					return Global_262145.f_28062;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28093;
				
				case 3:
					return Global_262145.f_28094;
				
				case 4:
					return Global_262145.f_28095;
				
				case 5:
					return Global_262145.f_28096;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28097;
				
				case 3:
					return Global_262145.f_28098;
				
				case 4:
					return Global_262145.f_28099;
				
				case 5:
					return Global_262145.f_28100;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27788;
				
				case 3:
					return Global_262145.f_27789;
				
				case 4:
					return Global_262145.f_27790;
				
				case 5:
					return Global_262145.f_27791;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28063;
				
				case 3:
					return Global_262145.f_28064;
				
				case 4:
					return Global_262145.f_28065;
				
				case 5:
					return Global_262145.f_28066;
				
				default:
			}
			break;
	}
	return 999;
}

int func_274(int iParam0, int iParam1)
{
	iVar0 = Global_2585280[iParam0][func_157(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_275(int iParam0, int iParam1)
{
	iVar0 = Global_2585647[iParam0][func_157(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_276(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (bParam2)
		{
			iParam0 = func_267(iParam1, 3);
		}
		else
		{
			iParam0 = func_267(iParam1, 4);
		}
	}
	return (func_262(iParam0, -1) || func_277(iParam0, -1));
}

int func_277(int iParam0, int iParam1)
{
	return func_279(func_278(iParam0), iParam1, -1);
}

int func_278(int iParam0)
{
	if (iParam0 <= 480)
	{
		iVar1 = iParam0;
		iVar0 = (3112 + iVar1);
	}
	else if (iParam0 < 864)
	{
		iVar1 = (iParam0 - 480);
		iVar0 = (6029 + iVar1);
	}
	else if (iParam0 < 1248)
	{
		iVar1 = (iParam0 - 864);
		iVar0 = (15562 + iVar1);
	}
	else if (iParam0 < 1372)
	{
		iVar1 = (iParam0 - 1248);
		iVar0 = (28355 + iVar1);
	}
	else if (iParam0 < 1500)
	{
		iVar1 = (iParam0 - 1372);
		iVar0 = (30355 + iVar1);
	}
	else
	{
		iVar2 = iParam0;
	}
	return iVar0;
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_69();
	}
	iVar1 = func_281(iParam0, iParam1);
	uVar2 = func_280(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_280(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_281(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_69();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_282(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_284(iVar0, sParam1, iParam4);
		iParam4 = unk_0x12AB0310C2281427(func_283(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case -793495770:
		case -763917073:
		case -1409061796:
		case -2066166276:
		case 849089063:
		case 1192230427:
		case -454273031:
		case -1459967458:
		case 1548327796:
		case -1238079313:
		case 129912816:
		case -1469750959:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case -388268096:
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == -793495770 || (iParam4 == -1409061796 && iVar0 == -1667301416)) || iParam4 == -2066166276) || iParam4 == 849089063) || iParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_292(13, -1))
							{
								return 0;
							}
							else if (func_292(14, -1))
							{
								return 0;
							}
							else if (func_292(15, -1))
							{
								return 0;
							}
							else if (func_292(16, -1))
							{
								return 0;
							}
							else if (func_292(71, -1))
							{
								return 0;
							}
							else if (func_292(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
						return 0;
					}
					else if (Global_4268242 == 14)
					{
						return 0;
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
						return 0;
					}
					else if (Global_4268242 == 71)
					{
						return 0;
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			else if (iParam4 == -763917073)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_292(13, -1))
							{
								return 0;
							}
							else if (func_292(14, -1))
							{
								return 0;
							}
							else if (func_292(15, -1))
							{
								return 0;
							}
							else if (func_292(16, -1))
							{
								return 0;
							}
							else if (func_292(71, -1))
							{
								return 0;
							}
							else if (func_292(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
						return 0;
					}
					else if (Global_4268242 == 14)
					{
						return 0;
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
						return 0;
					}
					else if (Global_4268242 == 71)
					{
						return 0;
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			else if ((iParam4 == 129912816 || iParam4 == 1361645381) || iParam4 == -1469750959)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_292(13, -1))
							{
							}
							else if (func_292(14, -1))
							{
								return 0;
							}
							else if (func_292(15, -1))
							{
								return 0;
							}
							else if (func_292(16, -1))
							{
							}
							else if (func_292(71, -1))
							{
								return 0;
							}
							else if (func_292(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
					}
					else if (Global_4268242 == 14)
					{
						return 0;
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
					}
					else if (Global_4268242 == 71)
					{
						return 0;
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			else if (iParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_292(13, -1))
							{
							}
							else if (func_292(14, -1))
							{
							}
							else if (func_292(15, -1))
							{
							}
							else if (func_292(16, -1))
							{
							}
							else if (func_292(71, -1))
							{
							}
							else if (func_292(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
					}
					else if (Global_4268242 == 14)
					{
					}
					else if (Global_4268242 == 15)
					{
					}
					else if (Global_4268242 == 16)
					{
					}
					else if (Global_4268242 == 71)
					{
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case 711089605:
		case 1206993109:
		case 32564956:
		case 1618133209:
		case 314326195:
		case 1928884106:
		case 1565386395:
		case 2107621060:
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4268242 == -1)
				{
					if (!Global_98796.f_1513)
					{
						if (func_292(13, -1))
						{
						}
						else if (func_292(14, -1))
						{
						}
						else if (func_292(15, -1))
						{
							return 0;
						}
						else if (func_292(16, -1))
						{
						}
						else if (func_292(71, -1))
						{
						}
						else if (func_292(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4268242 == 13)
				{
				}
				else if (Global_4268242 == 14)
				{
				}
				else if (Global_4268242 == 15)
				{
					return 0;
				}
				else if (Global_4268242 == 16)
				{
				}
				else if (Global_4268242 == 71)
				{
				}
				else if (Global_4268242 == 72)
				{
					return 0;
				}
			}
			break;
		
		case 1019352240:
			if (bParam8)
			{
				if (iVar0 == 1885233650)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_292(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4268242 == -1)
				{
					if (!Global_98796.f_1513)
					{
						if (func_292(13, -1))
						{
							return 0;
						}
						else if (func_292(14, -1))
						{
							return 0;
						}
						else if (func_292(15, -1))
						{
							if (!unk_0x7F8A39872A07D2CE(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_292(16, -1))
						{
						}
						else if (func_292(71, -1))
						{
						}
						else if (func_292(72, -1))
						{
						}
					}
				}
				else if (Global_4268242 == 13)
				{
					return 0;
				}
				else if (Global_4268242 == 14)
				{
					return 0;
				}
				else if (Global_4268242 == 15)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_4268242 == 16)
				{
				}
				else if (Global_4268242 == 71)
				{
				}
				else if (Global_4268242 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case -518474626:
			if (bParam5)
			{
				if (!unk_0xEA6BC48857E0AC4C(sParam1))
				{
					switch (unk_0x12AB0310C2281427(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case -328314869:
						case -1903783095:
						case -1674924399:
						case -106785870:
						case -344656041:
						case 1480281490:
						case -2097372400:
						case 118598456:
						case -1386676768:
						case 1464947154:
						case -1282504117:
						case -1877294236:
						case 736950162:
							return 0;
							break;
						}
					}
			}
			if (iVar0 == 1885233650)
			{
			}
			else if (iVar0 == -1667301416)
			{
				if (!bParam6)
				{
					if (Global_4268242 == -1)
					{
						if (!Global_98796.f_1513)
						{
							if (func_292(13, -1))
							{
							}
							else if (func_292(14, -1))
							{
							}
							else if (func_292(15, -1))
							{
							}
							else if (func_292(16, -1))
							{
							}
							else if (func_292(71, -1))
							{
							}
							else if (func_292(72, -1))
							{
							}
						}
					}
					else if (Global_4268242 == 13)
					{
						return 0;
					}
					else if (Global_4268242 == 14)
					{
					}
					else if (Global_4268242 == 15)
					{
						return 0;
					}
					else if (Global_4268242 == 16)
					{
					}
					else if (Global_4268242 == 71)
					{
					}
					else if (Global_4268242 == 72)
					{
					}
				}
			}
			break;
		
		case 277073536:
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		
		case 24:
			return "HAND_LEFT";
			break;
		
		case 25:
			return "HAND_RIGHT";
			break;
		
		case 26:
			return "BACK_FULL";
			break;
		
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		
		case 28:
			return "BACK_FULL_SHORT";
			break;
		
		case 29:
			return "BACK_MID";
			break;
		
		case 30:
			return "BACK_UPPER";
			break;
		
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		
		case 33:
			return "BACK_LOWER";
			break;
		
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		
		case 35:
			return "BACK_LOWER_MID";
			break;
		
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		
		case 37:
			return "CHEST_FULL";
			break;
		
		case 38:
			return "CHEST_STOM";
			break;
		
		case 39:
			return "CHEST_STOM_FULL";
			break;
		
		case 40:
			return "CHEST_LEFT";
			break;
		
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		
		case 42:
			return "CHEST_RIGHT";
			break;
		
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		
		case 44:
			return "CHEST_MID";
			break;
		
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		
		case 47:
			return "STOMACH_FULL";
			break;
		
		case 48:
			return "STOMACH_UPPER";
			break;
		
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		
		case 51:
			return "STOMACH_LOWER";
			break;
		
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		
		case 54:
			return "STOMACH_LEFT";
			break;
		
		case 55:
			return "STOMACH_RIGHT";
			break;
		
		case 56:
			return "FACE";
			break;
		
		case 57:
			return "HEAD_LEFT";
			break;
		
		case 58:
			return "HEAD_RIGHT";
			break;
		
		case 59:
			return "NECK_FRONT";
			break;
		
		case 60:
			return "NECK_BACK";
			break;
		
		case 61:
			return "NECK_LEFT_FULL";
			break;
		
		case 62:
			return "NECK_LEFT_BACK";
			break;
		
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		
		case 80:
			return "LEG_LEFT_CALF";
			break;
		
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		
		case 97:
			return "FOOT_LEFT";
			break;
		
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_284(int iParam0, char* sParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return -1;
			break;
	}
	switch (iParam2)
	{
		case -1775023605:
			return 0;
			break;
		
		case 917950949:
			return 1;
			break;
		
		case -1684314297:
			return 2;
			break;
		
		case -1546663824:
			return 3;
			break;
		
		case -2119253768:
			return 4;
			break;
		
		case 1639951086:
			return 5;
			break;
		
		case 1372660034:
			return 6;
			break;
		
		case -1524227787:
			return 7;
			break;
		
		case -311742370:
			return 8;
			break;
		
		case -2057190659:
			return 9;
			break;
		
		case -686545645:
			return 10;
			break;
		
		case -80377674:
			return 11;
			break;
		
		case -1055976551:
			return 12;
			break;
		
		case 1963750528:
			return 13;
			break;
		
		case 796226384:
			return 14;
			break;
		
		case 123428314:
			return 15;
			break;
		
		case 1944550961:
			return 16;
			break;
		
		case 2136911405:
			return 17;
			break;
		
		case -1309595991:
			return 18;
			break;
		
		case 1470319061:
			return 19;
			break;
		
		case -1716562576:
			return 20;
			break;
		
		case -1940582056:
			return 21;
			break;
		
		case 1089807219:
			return 22;
			break;
		
		case -1073830579:
			return 23;
			break;
		
		case 1071134407:
			return 24;
			break;
		
		case 1455567330:
			return 25;
			break;
		
		case 711089605:
			return 26;
			break;
		
		case 1206993109:
			return 27;
			break;
		
		case 32564956:
			return 28;
			break;
		
		case 314326195:
			return 29;
			break;
		
		case 1928884106:
			return 30;
			break;
		
		case 1565386395:
			return 31;
			break;
		
		case 2107621060:
			return 32;
			break;
		
		case 1618133209:
			return 33;
			break;
		
		case -951899470:
			return 34;
			break;
		
		case 2048696626:
			return 35;
			break;
		
		case 74017048:
			return 36;
			break;
		
		case -793495770:
			return 37;
			break;
		
		case 849089063:
			return 38;
			break;
		
		case 1192230427:
			return 39;
			break;
		
		case -763917073:
			return 40;
			break;
		
		case 337552605:
			return 41;
			break;
		
		case -2066166276:
			return 42;
			break;
		
		case 100935796:
			return 43;
			break;
		
		case -1409061796:
			return 44;
			break;
		
		case 1548327796:
			return 45;
			break;
		
		case -1459967458:
			return 46;
			break;
		
		case 129912816:
			return 47;
			break;
		
		case 1387715942:
			return 48;
			break;
		
		case -1871804242:
			return 49;
			break;
		
		case 1603728616:
			return 50;
			break;
		
		case -742053244:
			return 51;
			break;
		
		case 1586504577:
			return 52;
			break;
		
		case 1753976524:
			return 53;
			break;
		
		case -1469750959:
			return 54;
			break;
		
		case -388268096:
			return 55;
			break;
		
		case -1538681432:
			return 56;
			break;
		
		case -737856380:
			return 57;
			break;
		
		case 1261643197:
			return 58;
			break;
		
		case 436139458:
			return 59;
			break;
		
		case 1012782925:
			return 60;
			break;
		
		case -277214012:
			return 61;
			break;
		
		case -484264198:
			return 62;
			break;
		
		case 1708200656:
			return 63;
			break;
		
		case 758827473:
			return 64;
			break;
		
		case 1039283199:
			return 65;
			break;
		
		case 325801797:
			return 66;
			break;
		
		case -1946435033:
			return 67;
			break;
		
		case -1917346117:
			return 68;
			break;
		
		case -382139768:
			return 69;
			break;
		
		case 1725561361:
			return 70;
			break;
		
		case -266913369:
			return 71;
			break;
		
		case 511433871:
			return 72;
			break;
		
		case -1399656601:
			return 73;
			break;
		
		case -1560441083:
			return 74;
			break;
		
		case 1034503747:
			return 75;
			break;
		
		case -1170681301:
			return 76;
			break;
		
		case 660577126:
			return 77;
			break;
		
		case -818089340:
			return 78;
			break;
		
		case 1052642087:
			return 79;
			break;
		
		case 134497037:
			return 80;
			break;
		
		case -624267373:
			return 81;
			break;
		
		case -1178847967:
			return 82;
			break;
		
		case -197292861:
			return 83;
			break;
		
		case 730193962:
			return 84;
			break;
		
		case 1469472731:
			return 85;
			break;
		
		case -1918884694:
			return 86;
			break;
		
		case -1670727628:
			return 87;
			break;
		
		case -1389296468:
			return 88;
			break;
		
		case -405262373:
			return 89;
			break;
		
		case -1619609833:
			return 90;
			break;
		
		case 2060550302:
			return 91;
			break;
		
		case -1202647020:
			return 92;
			break;
		
		case 12584588:
			return 93;
			break;
		
		case -1559605744:
			return 94;
			break;
		
		case -88374898:
			return 95;
			break;
		
		case -292219126:
			return 96;
			break;
		
		case -634232984:
			return 97;
			break;
		
		case -1259754598:
			return 98;
			break;
	}
	switch (unk_0x12AB0310C2281427(sParam1))
	{
		case 1948764112:
			return -1;
			break;
		
		case 1099734529:
			return 12;
			break;
		
		case 1875475066:
			return 12;
			break;
		
		case -2027116220:
			if (iParam0 == 1885233650)
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case 973279522:
			return 26;
			break;
		
		case -344656041:
			return 47;
			break;
		
		case 437243648:
			return 1;
			break;
		
		case -1636967950:
			return 75;
			break;
		
		case -1759426263:
			return 1;
			break;
		
		case 1702259548:
			return 89;
			break;
		
		case 1471205329:
			return 73;
			break;
		
		case -33154131:
			return 22;
			break;
		
		case -1364624791:
			return 91;
			break;
		
		case 2048169112:
			return 26;
			break;
		
		case -2132107540:
			return 73;
			break;
		
		case -2097372400:
			return 38;
			break;
		
		case -106785870:
			if (iParam0 == 1885233650)
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 1116120433:
			return 31;
			break;
		
		case 118598456:
			return 42;
			break;
		
		case 1480281490:
			return 47;
			break;
		
		case -652292269:
			return 75;
			break;
		
		case -1179283327:
			return 20;
			break;
		
		case 860620540:
			return 32;
			break;
		
		case -880004050:
			return 14;
			break;
		
		case -1386676768:
			return 52;
			break;
		
		case 2104696341:
			return 30;
			break;
		
		case -1952728474:
			return 6;
			break;
		
		case 1464947154:
			return 80;
			break;
		
		case -1134718043:
			return 13;
			break;
		
		case -440373586:
			if (iParam0 == 1885233650)
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case -1282504117:
			if (iParam0 == 1885233650)
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case -1035884623:
			return 73;
			break;
		
		case -1877294236:
			return 47;
			break;
		
		case 1289632992:
			return 73;
			break;
		
		case 1152623695:
			return 10;
			break;
		
		case 1705208746:
			return 26;
			break;
		
		case 1774176944:
			return 42;
			break;
		
		case -2016202731:
			return 89;
			break;
		
		case 474241973:
			return 16;
			break;
		
		case 1549424756:
			return 91;
			break;
		
		case 1915520024:
			return 82;
			break;
		
		case -654914345:
			return 13;
			break;
		
		case -1745115353:
			return 75;
			break;
		
		case 1466027815:
			return 26;
			break;
		
		case -161772432:
			return 10;
			break;
		
		case 74131599:
			return 90;
			break;
		
		case 363383562:
			return 89;
			break;
		
		case 736950162:
			return 38;
			break;
		
		case 1291882802:
			return 20;
			break;
		
		case -281772534:
			return 26;
			break;
		
		case -837798134:
			return 18;
			break;
		
		case 62456:
			return 56;
			break;
		
		case -800320369:
			return 3;
			break;
		
		case 1363941829:
			return 47;
			break;
		
		case 1586377801:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1514257748:
			return 89;
			break;
		
		case -1023836894:
			return 6;
			break;
		
		case -1974105125:
			return 33;
			break;
		
		case -558386018:
			return 16;
			break;
		
		case -328314869:
			return 40;
			break;
		
		case -1903783095:
			return 40;
			break;
		
		case -1674924399:
			return 40;
			break;
		
		case -252323802:
			return 33;
			break;
		
		case 11466648:
			return 6;
			break;
		
		case 927130819:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -978943608:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 452144164:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 691194019:
			if (iParam0 == 1885233650)
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1516865571:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case -569087776:
			return 45;
			break;
		
		case -1344959389:
			return 89;
			break;
		
		case -211217527:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case -137684175:
			return 30;
			break;
		
		case -979388709:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case -518820414:
			return 52;
			break;
		
		case -1361737401:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case -894811920:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case -927613913:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case -814626401:
			return 57;
			break;
		
		case -1248225809:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case -2124501642:
			return 91;
			break;
		
		case -1943747838:
			return 20;
			break;
		
		case -1570115700:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case -859358814:
			return 20;
			break;
		
		case -1157818866:
			return 58;
			break;
		
		case -247856505:
			return 47;
			break;
		
		case -1628534963:
			return 37;
			break;
		
		case -1051898870:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case -244169717:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case -1398791504:
			return 33;
			break;
		
		case -106152761:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case -1576950557:
			return 52;
			break;
		
		case -1815115649:
			return 53;
			break;
		
		case -1043396870:
			return 59;
			break;
		
		case -1388618285:
			return 3;
			break;
		
		case -948484638:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case -622511834:
			return 42;
			break;
		
		case -275651969:
			return 11;
			break;
		
		case -1256283855:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case -2034766264:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case -657146050:
			return 30;
			break;
		
		case -955835485:
			return 19;
			break;
		
		case -1269959119:
			return 40;
			break;
		
		case -1478763187:
			return 4;
			break;
		
		case -1881592504:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case -2019287742:
			return 22;
			break;
		
		case -1780827729:
			return 80;
			break;
		
		case -1966497207:
			return 25;
			break;
		
		case -2126999769:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case -410297401:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case -2098342992:
			return 23;
			break;
		
		case -1280920283:
			return 64;
			break;
		
		case -1501455653:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case -1945704982:
			return 32;
			break;
		
		case -1581870771:
			return 31;
			break;
		
		case -1350521631:
			return 10;
			break;
		
		case -954508266:
			return 5;
			break;
		
		case -716244867:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case -1208107213:
			return 35;
			break;
		
		case -812421538:
			return 30;
			break;
		
		case -566096965:
			return 32;
			break;
		
		case -316757644:
			return 38;
			break;
		
		case -103496992:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case -2059941716:
			return 30;
			break;
		
		case -1759875983:
			return 40;
			break;
		
		case -1521153818:
			return 24;
			break;
	}
	if (iParam2 == 0 && unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return -1;
	}
	switch (iParam2)
	{
		case -518474626:
			return -1;
			break;
	}
	return -1;
}

bool func_285(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_291(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (unk_0xC844350D5D58C99A(iParam3) && !unk_0xEB6A8945D1AC98A1(iParam3))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_290() || func_289())
					{
						iVar1 = 400;
						if (func_260() && (func_288() || func_287()))
						{
							iVar1 = 0;
						}
						func_291(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_291(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_286(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_290() || func_289())
					{
						iVar1 = 450;
						if (func_260() && (func_288() || func_287()))
						{
							iVar1 = 0;
						}
						func_291(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_291(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_286(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_290() || func_289())
					{
						iVar1 = 380;
						if (func_260() && (func_288() || func_287()))
						{
							iVar1 = 0;
						}
						func_291(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_291(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_286(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2907)), 0);
					break;
				
				case 1:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2908)), 2);
					break;
				
				case 2:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2909)), 3);
					break;
				
				case 3:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2910)), 0);
					break;
				
				case 4:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2911)), 0);
					break;
				
				case 54:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2912)), 1);
					break;
				
				case 5:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2913)), 0);
					break;
				
				case 6:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2914)), 2);
					break;
				
				case 55:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2915)), 1);
					break;
				
				case 7:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2916)), 0);
					break;
				
				case 8:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2917)), 7);
					break;
				
				case 9:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2918)), 0);
					break;
				
				case 10:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2919)), 0);
					break;
				
				case 11:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2920)), 0);
					break;
				
				case 56:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2921)), 1);
					break;
				
				case 12:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2922)), 2);
					break;
				
				case 57:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2923)), 1);
					break;
				
				case 58:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2924)), 1);
					break;
				
				case 59:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2925)), 1);
					break;
				
				case 60:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2926)), 1);
					break;
				
				case 17:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2931)), 2);
					break;
				
				case 18:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2932)), 2);
					break;
				
				case 19:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2933)), 2);
					break;
				
				case 20:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2934)), 3);
					break;
				
				case 21:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2935)), 3);
					break;
				
				case 22:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 3);
					break;
				
				case 23:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2937)), 3);
					break;
				
				case 24:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2938)), 3);
					break;
				
				case 25:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2939)), 2);
					break;
				
				case 26:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2940)), 3);
					break;
				
				case 27:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2941)), 3);
					break;
				
				case 28:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2942)), 3);
					break;
				
				case 61:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2943)), 1);
					break;
				
				case 62:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2944)), 1);
					break;
				
				case 63:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2945)), 1);
					break;
				
				case 64:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2946)), 1);
					break;
				
				case 65:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2947)), 1);
					break;
				
				case 29:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2948)), 0);
					break;
				
				case 30:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 31:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2950)), 0);
					break;
				
				case 66:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2951)), 1);
					break;
				
				case 32:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2952)), 2);
					break;
				
				case 33:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2953)), 3);
					break;
				
				case 34:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2954)), 2);
					break;
				
				case 35:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2955)), 0);
					break;
				
				case 36:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2956)), 0);
					break;
				
				case 37:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2957)), 0);
					break;
				
				case 38:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2958)), 3);
					break;
				
				case 39:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2959)), 2);
					break;
				
				case 40:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2960)), 0);
					break;
				
				case 67:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2961)), 1);
					break;
				
				case 41:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2962)), 2);
					break;
				
				case 68:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2963)), 1);
					break;
				
				case 42:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2964)), 0);
					break;
				
				case 43:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2965)), 2);
					break;
				
				case 44:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2966)), 0);
					break;
				
				case 45:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2967)), 0);
					break;
				
				case 46:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2968)), 0);
					break;
				
				case 47:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2969)), 3);
					break;
				
				case 48:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2970)), 3);
					break;
				
				case 49:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2971)), 3);
					break;
				
				case 50:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2972)), 2);
					break;
				
				case 51:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2973)), 3);
					break;
				
				case 52:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2974)), 3);
					break;
				
				case 53:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2975)), 0);
					break;
				
				case 69:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2976)), 1);
					break;
				
				case 70:
					func_291(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2977)), 2);
					break;
			}
			if (iVar0 == 1885233650)
			{
				switch (iParam1)
				{
					case 73:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_291(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2930)), 0);
						break;
					
					case 71:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
					
					case 72:
						func_291(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
				}
			}
			else if (iVar0 == -1667301416)
			{
				switch (iParam1)
				{
					case 73:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_291(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_291(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_286(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_286(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam2 - iParam3);
	iVar1 = unk_0x7CD02DB660471C17(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (unk_0x835E39F167B067AB(iParam1, iVar0, &Var2))
		{
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_287()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_25, 5))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25, 1) || unk_0xEAE0D21A50E6C7F4(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 5))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 1) || unk_0xEAE0D21A50E6C7F4(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, -1))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(866);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 1) || unk_0xEAE0D21A50E6C7F4(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0xDA1BF71E2E8A1C89())
			{
				unk_0x6FB46C25CCB7E6D5(1571103992, &iVar4, -1);
				unk_0x5D96D8530B3D0904(&iVar4, 1);
				unk_0x5D96D8530B3D0904(&iVar4, 3);
				unk_0x5D96D8530B3D0904(&iVar4, 5);
				unk_0x5D96D8530B3D0904(&Global_25, 1);
				unk_0x5D96D8530B3D0904(&Global_25, 3);
				unk_0x5D96D8530B3D0904(&Global_25, 5);
				unk_0xCDC520E5E48E63D9(1571103992, iVar4, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar4 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar4, 1);
					unk_0x5D96D8530B3D0904(&iVar4, 3);
					unk_0x9F2BE984EBF8A0F4(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_288()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_25, 6))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25, 2) || unk_0xEAE0D21A50E6C7F4(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(1571103992, &iVar0, -1))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 6))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 2) || unk_0xEAE0D21A50E6C7F4(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0))
	{
		if (Global_150473.f_3)
		{
			iVar2 = 1035124638;
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, -1))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(866);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 2) || unk_0xEAE0D21A50E6C7F4(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_289()
{
	return 1;
}

int func_290()
{
	return 1;
}

void func_291(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = unk_0x12AB0310C2281427(sParam4);
	sParam0->f_5 = unk_0x12AB0310C2281427(sParam5);
	sParam0->f_8 = unk_0x12AB0310C2281427(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (unk_0xC844350D5D58C99A(iParam2) && !unk_0xEB6A8945D1AC98A1(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (unk_0x134B62B726CEC8E6(iParam2) == 1885233650)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (unk_0x7F8A39872A07D2CE(sParam6, "torsoDecal") || unk_0x7F8A39872A07D2CE(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (unk_0x134B62B726CEC8E6(iParam2) == 1885233650 || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = unk_0x12AB0310C2281427(&cVar0);
			if (unk_0x6470E293FA6E8179(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

bool func_292(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_293(iParam0, iParam1);
	iVar1 = func_263(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(iVar0, iVar1);
}

int func_293(int iParam0, int iParam1)
{
	iVar0 = func_294(iParam0);
	if (iVar0 == 11511)
	{
		if (func_151() == 2 && func_150() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	iVar1 = func_156(iVar0, iParam1, 0);
	return iVar1;
}

int func_294(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = func_266(iVar0);
	if ((func_151() == 0 || func_150() == 0) || (func_151() == 999 && func_150() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1947;
				break;
			
			case 11:
				return 1948;
				break;
			
			case 12:
				return 1949;
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
			
			case 46:
				break;
		}
		return 11511;
	}
	if (func_151() == 2 && func_150() == 2)
	{
		return 11511;
	}
	return 11511;
}

int func_295(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
		{
			iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
			iVar2 = func_156(1757, -1, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_337(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = func_321(1885233650, iVar3, 11, 3);
					if ((unk_0x1A5A491D253EA7BA(iVar4, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar4, -1467682989, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 362493804, 0))
					{
						if (iVar2 == 671171671)
						{
							return 1;
						}
						if (iVar2 == 1495413374)
						{
							return 1;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar4, -1393156190, 0) && !unk_0x1A5A491D253EA7BA(iVar4, -1237899132, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (unk_0x134B62B726CEC8E6(iParam0) == -1667301416)
		{
			iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
			iVar1 = unk_0xDADA8E1DD0D0D9D9(iParam0, 11);
			iVar2 = func_156(1757, -1, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_337(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_321(-1667301416, iVar5, 11, 4);
					if ((unk_0x1A5A491D253EA7BA(iVar6, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar6, -1467682989, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 362493804, 0))
					{
						if (iVar2 == 1911627074)
						{
							return 1;
						}
						if (iVar2 == -1214222467)
						{
							return 1;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar6, -1393156190, 0) && !unk_0x1A5A491D253EA7BA(iVar6, -1237899132, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_296(int iParam0)
{
	if (unk_0xA14BB9332558B949())
	{
		iVar0 = Global_1590535[unk_0xD803B885F5E47A62()].f_99.f_28;
		if (iVar0 != -1 && iVar0 < 4)
		{
			if (func_297(iVar0) != -1 && func_297(iVar0) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
		{
			if (unk_0x36C584991B4C183F(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_297(int iParam0)
{
	if (func_298(1))
	{
		return Global_1388228;
	}
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_2451426.f_6166[iParam0];
}

bool func_298(bool bParam0)
{
	if (bParam0)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12) && func_299());
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

int func_299()
{
	if (Global_4456448.f_197286 == 1 || Global_4456448.f_197286 == 2)
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0, bool bParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
		{
			iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
			iVar1 = unk_0xDADA8E1DD0D0D9D9(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						
						case 1:
						case 7:
						case 12:
							iVar2 = func_304(1885233650, 11, func_337(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				case 5:
					if (!bParam1)
					{
						if (func_292(13, -1))
						{
							return 1;
						}
						else if (func_292(14, -1))
						{
							return 1;
						}
						else if (func_292(15, -1))
						{
							return 1;
						}
						else if (func_292(16, -1))
						{
							return 1;
						}
						else if (func_292(71, -1))
						{
							return 1;
						}
						else if (func_292(72, -1))
						{
						}
						else if (func_301(unk_0xD803B885F5E47A62(), 1) && Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_75.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_337(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = func_321(1885233650, iVar3, 11, 3);
							if ((((unk_0x1A5A491D253EA7BA(iVar4, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar4, -1467682989, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 362493804, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 153792394, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = unk_0x36C584991B4C183F(iParam0, 8);
			iVar1 = unk_0xDADA8E1DD0D0D9D9(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_337(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = func_321(1885233650, iVar5, 8, 3);
							if (((unk_0x1A5A491D253EA7BA(iVar6, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar6, -1467682989, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 362493804, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (unk_0x134B62B726CEC8E6(iParam0) == -1667301416)
		{
			iVar0 = unk_0x36C584991B4C183F(iParam0, 11);
			iVar1 = unk_0xDADA8E1DD0D0D9D9(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar7 = func_304(-1667301416, 11, func_337(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_337(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = func_321(-1667301416, iVar8, 11, 4);
							if ((((unk_0x1A5A491D253EA7BA(iVar9, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar9, -1467682989, 0)) || unk_0x1A5A491D253EA7BA(iVar9, 362493804, 0)) || unk_0x1A5A491D253EA7BA(iVar9, 1843965488, 0)) || unk_0x1A5A491D253EA7BA(iVar9, -672871169, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = unk_0x36C584991B4C183F(iParam0, 8);
			iVar1 = unk_0xDADA8E1DD0D0D9D9(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar10 = func_304(-1667301416, 11, func_337(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar11 = func_304(-1667301416, 11, func_337(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_337(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = func_321(-1667301416, iVar12, 8, 4);
							if (((unk_0x1A5A491D253EA7BA(iVar13, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar13, -1467682989, 0)) || unk_0x1A5A491D253EA7BA(iVar13, 362493804, 0)) || unk_0x1A5A491D253EA7BA(iVar13, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_301(int iParam0, bool bParam1)
{
	return func_302(iParam0, bParam1, 1);
}

int func_302(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_51())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_303(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_51() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	if (iParam0 != func_51())
	{
		if (Global_1628237[iParam0].f_11 != func_51())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == 1885233650)
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_262(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_262(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_321(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (unk_0x1A5A491D253EA7BA(iVar0, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar0, 362493804, 0))
					{
						iVar1 = unk_0x28499614F961F168(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							unk_0xCCF7782CBFDE8C04(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != 1849449579)
								{
									return func_267(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar0, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_156(1757, -1, 0);
						}
						return func_267(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_262(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_262(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_262(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_262(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_321(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (unk_0x1A5A491D253EA7BA(iVar6, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar6, 362493804, 0))
					{
						iVar7 = unk_0x28499614F961F168(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							unk_0xCCF7782CBFDE8C04(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != 1849449579)
								{
									return func_267(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar6, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_156(1757, -1, 0);
						}
						return func_267(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_262(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_262(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_321(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (unk_0x1A5A491D253EA7BA(iVar12, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar12, 362493804, 0))
					{
						iVar13 = unk_0x28499614F961F168(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							unk_0xCCF7782CBFDE8C04(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != 1849449579)
								{
									return func_267(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar12, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_156(1757, -1, 0);
						}
						return func_267(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_262(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_262(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_262(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_262(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_321(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (unk_0x1A5A491D253EA7BA(iVar18, 1113995558, 0) || unk_0x1A5A491D253EA7BA(iVar18, 362493804, 0))
					{
						iVar19 = unk_0x28499614F961F168(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							unk_0xCCF7782CBFDE8C04(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != 1849449579)
								{
									return func_267(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar18, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_156(1757, -1, 0);
						}
						return func_267(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_305(int iParam0)
{
	if (unk_0x28072FDD60CE3A6E(iParam0, 1))
	{
		return 0;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 225514697:
			return 0;
			break;
		
		case -1692214353:
			return 1;
			break;
		
		case -1686040670:
			return 2;
			break;
		
		case 1885233650:
			return 3;
			break;
		
		case -1667301416:
			return 4;
			break;
	}
	return 0;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam0 == 1885233650)
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = func_321(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case -1983429828:
					case 228608740:
					case 600995656:
					case 850728205:
					case 1093513726:
					case 1732051928:
						return 108;
						break;
					
					case -457639650:
					case -94952354:
					case 144031963:
					case 533262145:
					case -1545668757:
					case -905050483:
						return 109;
						break;
					
					case -1625493211:
					case -1112723899:
					case -1432451032:
					case -647502406:
					case -925481833:
						return 110;
						break;
					
					case -1168328595:
					case -1421993424:
					case -576454917:
					case -438399124:
					case 271967258:
						return 111;
						break;
					
					case -1903246936:
					case 1155542604:
					case 2048071857:
					case -1605475033:
					case 100085859:
						return 112;
						break;
					
					case 745771948:
					case -1619297862:
					case -1878926649:
					case -485850917:
					case 558628189:
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case -1761842625:
						return 114;
						break;
				}
				iVar1 = unk_0x28499614F961F168(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					unk_0xCCF7782CBFDE8C04(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != 1849449579)
						{
							return func_267(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return func_267(-1261720761, 4);
		}
		else if (iParam1 == 80)
		{
			return func_267(-1261720761, 4);
		}
		else if (iParam1 == 81)
		{
			return func_267(-1261720761, 4);
		}
		else if (iParam1 == 82)
		{
			return func_267(-1261720761, 4);
		}
		else if (iParam1 == 83)
		{
			return func_267(-1261720761, 4);
		}
		else if (iParam1 == 84)
		{
			return func_267(-1261720761, 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = func_321(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case -1238992735:
					case -1947261901:
					case -771018642:
					case -1486169302:
					case 1159796376:
					case 256274500:
						return 108;
						break;
					
					case 1389867525:
					case 1622396349:
					case 1851615504:
					case -2052614252:
					case -1818610823:
					case -1799420756:
						return 109;
						break;
					
					case 1855226196:
					case 271139943:
					case -1099030254:
					case -307724442:
					case -637872117:
						return 110;
						break;
					
					case -663797501:
					case 2088667427:
					case 1779786837:
					case -1609936838:
					case -1880477702:
						return 111;
						break;
					
					case 1052499595:
					case 142438919:
					case 458495932:
					case -701723290:
					case -119221546:
						return 112;
						break;
					
					case 1245050198:
					case 1481937299:
					case 1754870300:
					case -2033029490:
					case 62318681:
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case -231538229:
						return 114;
						break;
				}
				iVar7 = unk_0x28499614F961F168(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					unk_0xCCF7782CBFDE8C04(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != 1849449579)
						{
							return func_267(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

void func_307(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		iVar13 = func_305(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_333(13, 0, Global_76431);
					func_333(14, 0, Global_76431);
					func_333(15, 0, Global_76431);
					func_333(16, 0, Global_76431);
					func_333(71, 0, Global_76431);
					func_333(72, 0, Global_76431);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						func_333(73, 0, Global_76431);
						func_333(74, 0, Global_76431);
						func_333(75, 0, Global_76431);
						func_333(76, 0, Global_76431);
						func_333(77, 0, Global_76431);
						func_333(78, 0, Global_76431);
						func_333(79, 0, Global_76431);
						func_333(80, 0, Global_76431);
						func_333(81, 0, Global_76431);
						func_333(82, 0, Global_76431);
						func_333(83, 0, Global_76431);
						func_333(84, 0, Global_76431);
						func_333(85, 0, Global_76431);
						func_333(86, 0, Global_76431);
						func_333(90, 0, Global_76431);
						func_333(91, 0, Global_76431);
						func_333(124, 0, Global_76431);
						func_333(125, 0, Global_76431);
						func_333(87, 0, Global_76431);
						func_333(88, 0, Global_76431);
						func_333(89, 0, Global_76431);
						iVar15 = unk_0x7CD02DB660471C17(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (unk_0x835E39F167B067AB(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									func_333((129 + iVar14), 0, Global_76431);
								}
							}
							iVar14++;
						}
					}
					else
					{
						func_333(73, 0, Global_76431);
						func_333(74, 0, Global_76431);
						func_333(75, 0, Global_76431);
						func_333(76, 0, Global_76431);
						func_333(77, 0, Global_76431);
						func_333(78, 0, Global_76431);
						func_333(79, 0, Global_76431);
						func_333(80, 0, Global_76431);
						func_333(81, 0, Global_76431);
						func_333(82, 0, Global_76431);
						func_333(83, 0, Global_76431);
						func_333(84, 0, Global_76431);
						func_333(85, 0, Global_76431);
						func_333(92, 0, Global_76431);
						func_333(87, 0, Global_76431);
						func_333(88, 0, Global_76431);
						func_333(89, 0, Global_76431);
						iVar32 = unk_0x7CD02DB660471C17(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (unk_0x835E39F167B067AB(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									func_333((129 + iVar31), 0, Global_76431);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						func_333(93, 0, Global_76431);
						func_333(94, 0, Global_76431);
						func_333(95, 0, Global_76431);
						func_333(96, 0, Global_76431);
						func_333(97, 0, Global_76431);
						func_333(98, 0, Global_76431);
						func_333(99, 0, Global_76431);
						func_333(100, 0, Global_76431);
						func_333(101, 0, Global_76431);
						func_333(102, 0, Global_76431);
						func_333(103, 0, Global_76431);
						func_333(104, 0, Global_76431);
						func_333(105, 0, Global_76431);
						func_333(106, 0, Global_76431);
						func_333(107, 0, Global_76431);
						func_333(108, 0, Global_76431);
						func_333(109, 0, Global_76431);
						func_333(110, 0, Global_76431);
						func_333(111, 0, Global_76431);
						func_333(112, 0, Global_76431);
						func_333(113, 0, Global_76431);
						func_333(114, 0, Global_76431);
						func_333(115, 0, Global_76431);
						func_333(116, 0, Global_76431);
						func_333(117, 0, Global_76431);
						func_333(123, 0, Global_76431);
						iVar49 = unk_0x7CD02DB660471C17(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (unk_0x835E39F167B067AB(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									func_333((129 + iVar48), 0, Global_76431);
								}
							}
							iVar48++;
						}
					}
					else
					{
						func_333(93, 0, Global_76431);
						func_333(94, 0, Global_76431);
						func_333(95, 0, Global_76431);
						func_333(96, 0, Global_76431);
						func_333(97, 0, Global_76431);
						func_333(98, 0, Global_76431);
						func_333(99, 0, Global_76431);
						func_333(100, 0, Global_76431);
						func_333(101, 0, Global_76431);
						func_333(102, 0, Global_76431);
						func_333(103, 0, Global_76431);
						func_333(104, 0, Global_76431);
						func_333(105, 0, Global_76431);
						func_333(106, 0, Global_76431);
						func_333(107, 0, Global_76431);
						func_333(108, 0, Global_76431);
						func_333(109, 0, Global_76431);
						func_333(110, 0, Global_76431);
						func_333(111, 0, Global_76431);
						func_333(112, 0, Global_76431);
						func_333(113, 0, Global_76431);
						func_333(114, 0, Global_76431);
						func_333(115, 0, Global_76431);
						func_333(116, 0, Global_76431);
						func_333(117, 0, Global_76431);
						func_333(118, 0, Global_76431);
						func_333(119, 0, Global_76431);
						func_333(120, 0, Global_76431);
						func_333(121, 0, Global_76431);
						func_333(122, 0, Global_76431);
						func_333(123, 0, Global_76431);
						iVar66 = unk_0x7CD02DB660471C17(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (unk_0x835E39F167B067AB(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									func_333((129 + iVar65), 0, Global_76431);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (func_285(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_333(Var0.f_11, 0, Global_76431);
					}
				}
				iVar82++;
			}
		}
	}
}

int func_308(int iParam0, int iParam1)
{
	iVar0 = func_336();
	if (iVar0 != -1)
	{
		if (!func_309(iParam0, iParam1, iVar0))
		{
			func_333(iVar0, 0, Global_76431);
			return 1;
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, int iParam2)
{
	if (!func_316(iParam0, iParam1, -1))
	{
		if (iParam0 == 1885233650)
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = func_321(iParam0, iParam1, 11, 3);
				iVar0 = func_312(iVar1);
			}
			if (iVar1 != -1 && func_224(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && func_310(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && unk_0x1A5A491D253EA7BA(iVar1, -497440475, 0))
			{
				return 0;
			}
			if ((iVar1 == -1198378836 || iVar1 == 968798999) || iVar1 == 1283250323)
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_304(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == -1667301416)
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = func_321(iParam0, iParam1, 11, 4);
				iVar2 = func_312(iVar3);
			}
			if (iVar3 != -1 && func_224(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && func_310(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && unk_0x1A5A491D253EA7BA(iVar3, -497440475, 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_304(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_304(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !unk_0x1A5A491D253EA7BA(iVar3, 1113995558, 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_310(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (unk_0x1A5A491D253EA7BA(iParam0, 1769225721, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1834446747, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -939525357, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 38465448, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1469891622, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -502321359, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -792359778, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 997614074, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 748799057, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 653048039, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1922736331, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1685128312, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1892460036, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -296738547, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_311(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1885233650)
	{
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = func_321(iParam0, iParam1, 4, 3);
			iVar1 = func_312(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_321(iParam0, iParam2, 11, 3);
			iVar3 = func_312(iVar2);
		}
		if (iVar2 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar2, -826135203, 0))
			{
				if (iVar0 != -1 && unk_0x1A5A491D253EA7BA(iVar0, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, -1855618474, 0))
			{
				if (iVar0 != -1 && unk_0x1A5A491D253EA7BA(iVar0, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -1855618474, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, -1420825402, 0))
			{
				if (iVar0 != -1 && unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 320460654, 0))
			{
				if (iVar0 != -1 && unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, -2017999390, 0))
			{
				if (iVar0 != -1 && unk_0x1A5A491D253EA7BA(iVar0, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 1625463492, 0))
			{
				if (iVar0 != -1 && unk_0x1A5A491D253EA7BA(iVar0, 648481062, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, 648481062, 0))
			{
				return 1;
			}
		}
		else if (iVar0 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar0, 648481062, 0))
			{
				return 1;
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -1855618474, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -1420825402, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 2026620439, 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || unk_0x1A5A491D253EA7BA(iVar0, 1627756587, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case -439764935:
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
				if (((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == 1844077094) || iVar2 == 1672760762) || iVar2 == 339848918) || iVar2 == -625689667) || iVar2 == -924903406) || iVar2 == -149326714) || iVar2 == -443756179) || iVar2 == -1817498197) || iVar2 == -2110289212) || iVar2 == -1333926064) || iVar2 == -1903638278) || iVar2 == 1018832222) || unk_0x1A5A491D253EA7BA(iVar2, -2088146832, 0))
				{
					return 0;
				}
				break;
		}
		if (unk_0x1A5A491D253EA7BA(iVar2, 1021189127, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar0, 2044466679, 0) || unk_0x1A5A491D253EA7BA(iVar0, -1325813684, 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = func_321(iParam0, iParam1, 4, 4);
			iVar5 = func_312(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = func_321(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar6, -826135203, 0))
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar6, -1855618474, 0))
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1855618474, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar6, -299089347, 0))
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -299089347, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar6, -1420825402, 0))
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1420825402, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar6, 320460654, 0))
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar6, -2017999390, 0))
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar6, -530089825, 0))
			{
				if ((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -530089825, 0)) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -530089825, 0)) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (((((((((((unk_0x1A5A491D253EA7BA(iVar6, -1200513218, 0) || unk_0x1A5A491D253EA7BA(iVar6, 1965569012, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -779835469, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1086258388, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1488441032, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar6, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1446333198, 0)) || unk_0x1A5A491D253EA7BA(iVar6, -1351486939, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar6, 821147517, 0) && !unk_0x1A5A491D253EA7BA(iVar6, -55550566, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
		}
		if (iVar4 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1855618474, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -299089347, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -1420825402, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -530089825, 0)) || (iVar6 != -1 && unk_0x1A5A491D253EA7BA(iVar6, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar4, -33031567, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar6, -2102859770, 0) || unk_0x1A5A491D253EA7BA(iVar6, -747583185, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar6, -747583185, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, -33031567, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || unk_0x1A5A491D253EA7BA(iVar4, -1325813684, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar6, 2026620439, 0))
			{
				return 0;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar6, -2119756144, 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || unk_0x1A5A491D253EA7BA(iVar4, 264959411, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 140732128, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1863955539, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -849839091, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2088146832, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1882920022, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1080576805, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1387458490, 0))
			{
				return 0;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar6, 947651647, 0) || unk_0x1A5A491D253EA7BA(iVar6, -58412562, 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_312(int iParam0)
{
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x1A5A491D253EA7BA(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_313(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -99;
	if (iParam0 == 1885233650)
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_321(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = unk_0xB3A1A93269979713(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					unk_0xAEF3D5EB046168F2(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_321(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = unk_0xB3A1A93269979713(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0xAEF3D5EB046168F2(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_314(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_208(iVar0);
	}
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_111638.f_2358.f_539[0].f_59;
					break;
				
				case 3:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_111638.f_2358.f_539[1].f_59;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_111638.f_2358.f_539[2].f_59;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return -99;
}

int func_315(int iParam0, int iParam1)
{
	if (Global_101491 != -99)
	{
		if (Global_101492 == 11)
		{
			Global_76434[1] = { func_352(unk_0x134B62B726CEC8E6(iParam0), 11, Global_101491, -1) };
			iVar0 = func_317(unk_0x134B62B726CEC8E6(iParam0), Global_101491, iParam1, Global_76434[1].f_4);
			if (iVar0 != -99)
			{
				return iVar0;
			}
		}
		else if (Global_101492 == 8)
		{
			iVar1 = func_313(unk_0x134B62B726CEC8E6(iParam0), Global_101491, Global_101493);
			if (iVar1 != -99)
			{
				Global_76434[1] = { func_352(unk_0x134B62B726CEC8E6(iParam0), 11, iVar1, -1) };
				iVar2 = func_317(unk_0x134B62B726CEC8E6(iParam0), iVar1, iParam1, Global_76434[1].f_4);
				if (iVar2 != -99)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_101491;
			}
		}
	}
	return -99;
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1885233650:
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 237)
			{
				iParam2 = func_321(iParam0, iParam1, 11, 3);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -1393156190, 0))
			{
				return 1;
			}
			break;
		
		case -1667301416:
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = func_321(iParam0, iParam1, 11, 4);
			}
			if (unk_0x1A5A491D253EA7BA(iParam2, -1393156190, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_317(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == 1885233650)
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_321(iParam0, iParam2, 11, 3);
			iVar3 = func_312(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = func_321(iParam0, iParam1, 11, 3);
			iVar5 = func_312(iVar4);
		}
		if (iVar2 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar2, -491588875, 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((((((((((unk_0x1A5A491D253EA7BA(iVar2, -1347486026, 0) || unk_0x1A5A491D253EA7BA(iVar2, -1274099003, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1723403459, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1538937264, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1830529185, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -89003918, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -747858475, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1208450825, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1407614029, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 481861038, 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
				if (((((((!unk_0x1A5A491D253EA7BA(iVar2, -549843760, 0) && !unk_0x1A5A491D253EA7BA(iVar2, 1830529185, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, -1813210391, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, -89003918, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, -747858475, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, 1208450825, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, -1407614029, 0)) && !unk_0x1A5A491D253EA7BA(iVar2, 481861038, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar4, -828478571, 0))
					{
						return -99;
					}
				}
			}
			if ((unk_0x1A5A491D253EA7BA(iVar2, -1655154167, 0) || unk_0x1A5A491D253EA7BA(iVar2, -1719167561, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1431529976, 0))
			{
				return -99;
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 1690933245, 0) || unk_0x1A5A491D253EA7BA(iVar2, -1325813684, 0))
			{
				return -99;
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 1769225721, 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 264959411, 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 1625463492, 0) && !unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0))
			{
				return -99;
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, -1719338724, 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 1170568373, 0))
			{
				if ((iParam1 >= 0 && iParam1 <= 15) || iVar5 == 0)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (unk_0x1A5A491D253EA7BA(iVar2, -1237899132, 0) && !unk_0x1A5A491D253EA7BA(iVar2, -491588875, 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((unk_0x1A5A491D253EA7BA(iVar2, -269266203, 0) || unk_0x1A5A491D253EA7BA(iVar2, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 297865853, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_205(iParam0, -1071423629, 8, 3);
							break;
						
						case 1:
							iVar0 = func_205(iParam0, -833094692, 8, 3);
							break;
						
						case 2:
							iVar0 = func_205(iParam0, -1836153782, 8, 3);
							break;
						
						case 3:
							iVar0 = func_205(iParam0, -1598414687, 8, 3);
							break;
						
						case 4:
							iVar0 = func_205(iParam0, 123661793, 8, 3);
							break;
						
						case 5:
							iVar0 = func_205(iParam0, 330958487, 8, 3);
							break;
						
						case 7:
							iVar0 = func_205(iParam0, -646180324, 8, 3);
							break;
						
						case 8:
							iVar0 = func_205(iParam0, -142717408, 8, 3);
							break;
						
						case 11:
							iVar0 = func_205(iParam0, 1290696959, 8, 3);
							break;
					}
				}
				else if (unk_0x1A5A491D253EA7BA(iVar2, 201427653, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_205(iParam0, -1382822784, 8, 3);
							break;
						
						case 1:
							iVar0 = func_205(iParam0, -1731353868, 8, 3);
							break;
						
						case 2:
							iVar0 = func_205(iParam0, -1960638561, 8, 3);
							break;
						
						case 3:
							iVar0 = func_205(iParam0, 147161830, 8, 3);
							break;
						
						case 4:
							iVar0 = func_205(iParam0, -92608943, 8, 3);
							break;
						
						case 5:
							iVar0 = func_205(iParam0, -162931217, 8, 3);
							break;
						
						case 7:
							iVar0 = func_205(iParam0, -537087659, 8, 3);
							break;
						
						case 8:
							iVar0 = func_205(iParam0, 1665087452, 8, 3);
							break;
						
						case 11:
							iVar0 = func_205(iParam0, 1012984348, 8, 3);
							break;
					}
				}
				else if (unk_0x1A5A491D253EA7BA(iVar2, 967829025, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_205(iParam0, 385813134, 8, 3);
							break;
						
						case 1:
							iVar0 = func_205(iParam0, 675392787, 8, 3);
							break;
						
						case 2:
							iVar0 = func_205(iParam0, -238272479, 8, 3);
							break;
						
						case 3:
							iVar0 = func_205(iParam0, 67757212, 8, 3);
							break;
						
						case 4:
							iVar0 = func_205(iParam0, -536372072, 8, 3);
							break;
						
						case 5:
							iVar0 = func_205(iParam0, -247578875, 8, 3);
							break;
						
						case 7:
							iVar0 = func_205(iParam0, -1160588753, 8, 3);
							break;
						
						case 8:
							iVar0 = func_205(iParam0, -854821214, 8, 3);
							break;
						
						case 11:
							iVar0 = func_205(iParam0, -1458295118, 8, 3);
							break;
						}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236)
			{
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237)
			{
				bVar7 = true;
				if ((unk_0x1A5A491D253EA7BA(iVar2, -269266203, 0) || unk_0x1A5A491D253EA7BA(iVar2, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 297865853, 0))
				{
					iVar6 = 4;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar2, 201427653, 0))
				{
					iVar6 = 5;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar2, 967829025, 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar4, -641612092, 0))
		{
			bVar7 = true;
			if (((((((((unk_0x1A5A491D253EA7BA(iVar2, 470686834, 0) && unk_0x1A5A491D253EA7BA(iVar2, 1625463492, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1507532917, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -89003918, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -747858475, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1208450825, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1407614029, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 481861038, 0))
			{
				iVar6 = 1;
			}
			else if ((unk_0x1A5A491D253EA7BA(iVar2, 1625463492, 0) || unk_0x1A5A491D253EA7BA(iVar2, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1351486939, 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = -1;
			}
		}
		if (bVar7)
		{
			if (iVar6 != -1)
			{
				iVar8 = unk_0xB3A1A93269979713(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0xAEF3D5EB046168F2(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && unk_0x1A5A491D253EA7BA(iVar10, -168336417, 0)) || (iVar6 == 5 && unk_0x1A5A491D253EA7BA(iVar10, -1415000253, 0))) || (iVar6 == 4 && unk_0x1A5A491D253EA7BA(iVar10, -1703203608, 0))) || (iVar6 == 3 && unk_0x1A5A491D253EA7BA(iVar10, 1318819110, 0))) || (iVar6 == 2 && unk_0x1A5A491D253EA7BA(iVar10, -1138757583, 0))) || (iVar6 == 1 && unk_0x1A5A491D253EA7BA(iVar10, 647976134, 0))) || ((((((iVar6 == 0 && !unk_0x1A5A491D253EA7BA(iVar10, 647976134, 0)) && !unk_0x1A5A491D253EA7BA(iVar10, -1138757583, 0)) && !unk_0x1A5A491D253EA7BA(iVar10, 1318819110, 0)) && !unk_0x1A5A491D253EA7BA(iVar10, -1703203608, 0)) && !unk_0x1A5A491D253EA7BA(iVar10, -1415000253, 0)) && !unk_0x1A5A491D253EA7BA(iVar10, -168336417, 0)))
						{
							if (iVar10 != 0 && iVar10 != 1849449579)
							{
								iVar0 = func_205(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if (unk_0x1A5A491D253EA7BA(iVar2, 490219883, 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return -99;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar2, 350281921, 0) || unk_0x1A5A491D253EA7BA(iVar2, 490219883, 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return -99;
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if (((iParam1 >= 220 && iParam1 <= 235) && func_318()) && !unk_0x1A5A491D253EA7BA(iVar2, -1266557933, 0))
			{
				iVar0 = 34;
				iVar1 = 0;
				unk_0x65C0659496B1CC14(&Var13);
				if (Global_4267098[1] != 0)
				{
					unk_0xF6900DA2D9CD7BC5(3, 7, -1, 0, -1, 8);
					unk_0xC578687D5A643830(Global_4267095[1], &Var13);
					if (Var13.f_1 != Global_4267098[1])
					{
						Global_4267098[1] = 0;
						Global_4267095[1] = 0;
					}
				}
				if (Global_4267098[1] == 0)
				{
					iVar31 = 0;
					iVar32 = unk_0xF6900DA2D9CD7BC5(3, 7, -1, 0, -1, 8);
					iVar30 = 0;
					while (iVar30 < iVar32)
					{
						unk_0xC578687D5A643830(iVar30, &Var13);
						if (!unk_0x232048AB4B0E0259(Var13))
						{
							if (unk_0x12AB0310C2281427(&(Var13.f_9)) == -1665616807 && unk_0x1A5A491D253EA7BA(Var13.f_1, 647976134, 0))
							{
								Global_4267098[1] = Var13.f_1;
								Global_4267095[1] = iVar31;
								iVar30 = iVar32 + 1;
							}
							iVar31++;
						}
						iVar30++;
					}
				}
				if (Global_4267098[1] != 0)
				{
					iVar0 = (func_206(iParam0, func_197(8)) + Global_4267095[1]);
					iVar1 = 1;
				}
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar33 = func_321(iParam0, iParam1, 11, 3);
					if ((iVar33 != -1 && !unk_0x1A5A491D253EA7BA(iVar33, 310957510, 0)) && !unk_0x1A5A491D253EA7BA(iVar33, -109983526, 0))
					{
						iVar34 = unk_0xB3A1A93269979713(iVar33);
						iVar35 = 0;
						while (iVar35 < iVar34)
						{
							unk_0xAEF3D5EB046168F2(iVar33, iVar35, &iVar36, &iVar37, &iVar38);
							if (iVar38 == 8)
							{
								if (iVar36 != 0 && iVar36 != 1849449579)
								{
									if ((!unk_0x1A5A491D253EA7BA(iVar36, -1703203608, 0) && !unk_0x1A5A491D253EA7BA(iVar36, -1415000253, 0)) && !unk_0x1A5A491D253EA7BA(iVar36, -168336417, 0))
									{
										iVar0 = func_205(iParam0, iVar36, 8, 3);
									}
								}
								else
								{
									iVar0 = iVar37;
								}
							}
							iVar35++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || unk_0x1A5A491D253EA7BA(iVar2, 1769225721, 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar39 = 0;
				if (iParam2 >= 236 && unk_0x1A5A491D253EA7BA(iVar2, 2026620439, 0))
				{
					iVar39 = 1;
				}
				iVar40 = func_321(iParam0, iParam1, 11, 3);
				if (iVar40 != -1)
				{
					iVar41 = unk_0xB3A1A93269979713(iVar40);
					iVar42 = 0;
					while (iVar42 < iVar41)
					{
						unk_0xAEF3D5EB046168F2(iVar40, iVar42, &iVar43, &iVar44, &iVar45);
						if (iVar45 == 8 && iVar39 == unk_0x1A5A491D253EA7BA(iVar43, 1680519719, 0))
						{
							if (iVar43 != 0 && iVar43 != 1849449579)
							{
								iVar0 = func_205(iParam0, iVar43, 8, 3);
							}
							else
							{
								iVar0 = iVar44;
							}
							iVar42 = iVar41 + 1;
							iVar1 = 0;
						}
						iVar42++;
					}
				}
				else
				{
					iVar0 = func_205(iParam0, -1739646902, 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (func_318())
			{
				iVar46 = 0;
				iVar47 = 0;
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && unk_0x1A5A491D253EA7BA(iVar2, 2026620439, 0)))
				{
					iVar46 = 1;
					iVar47 = 1;
				}
				unk_0x65C0659496B1CC14(&Var48);
				if (Global_4267098[iVar47] != 0)
				{
					unk_0xF6900DA2D9CD7BC5(3, 7, -1, 0, -1, 8);
					unk_0xC578687D5A643830(Global_4267095[iVar47], &Var48);
					if (Var48.f_1 != Global_4267098[iVar47])
					{
						Global_4267098[iVar47] = 0;
						Global_4267095[iVar47] = 0;
					}
				}
				if (Global_4267098[iVar47] == 0)
				{
					iVar66 = 0;
					iVar67 = unk_0xF6900DA2D9CD7BC5(3, 7, -1, 0, -1, 8);
					iVar65 = 0;
					while (iVar65 < iVar67)
					{
						unk_0xC578687D5A643830(iVar65, &Var48);
						if (!unk_0x232048AB4B0E0259(Var48))
						{
							if (unk_0x12AB0310C2281427(&(Var48.f_9)) == -1665616807 && iVar46 == unk_0x1A5A491D253EA7BA(Var48.f_1, 647976134, 0))
							{
								Global_4267098[iVar47] = Var48.f_1;
								Global_4267095[iVar47] = iVar66;
								iVar65 = iVar67 + 1;
							}
							iVar66++;
						}
						iVar65++;
					}
				}
				if (Global_4267098[iVar47] != 0)
				{
					iVar0 = (func_206(iParam0, func_197(8)) + Global_4267095[iVar47]);
					iVar1 = 1;
				}
			}
			if ((((iParam2 >= 237 && unk_0x1A5A491D253EA7BA(iVar2, 2026620439, 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || unk_0x1A5A491D253EA7BA(iVar2, 1769225721, 0))
			{
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
			iVar1 = 0;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			bVar68 = false;
			iVar69 = func_321(iParam0, iParam1, 11, 3);
			if (unk_0x1A5A491D253EA7BA(iVar2, -1351486939, 0))
			{
				bVar68 = true;
			}
			if (iVar69 != -1)
			{
				iVar70 = unk_0xB3A1A93269979713(iVar69);
				iVar71 = 0;
				while (iVar71 < iVar70)
				{
					unk_0xAEF3D5EB046168F2(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
					if (iVar74 == 8)
					{
						if (iVar72 != 0 && iVar72 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar72, 8, 3);
							iVar1 = 0;
							if (!bVar68 || unk_0x1A5A491D253EA7BA(iVar72, 647976134, 0))
							{
								iVar71 = iVar70 + 1;
							}
						}
						else
						{
							iVar0 = iVar73;
							iVar71 = iVar70 + 1;
							iVar1 = 0;
						}
					}
					iVar71++;
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		iVar75 = -1;
		iVar76 = -1;
		if (iParam2 >= 256)
		{
			iVar75 = func_321(iParam0, iParam2, 11, 4);
			iVar76 = func_312(iVar75);
		}
		iVar77 = -1;
		iVar78 = -1;
		if (iParam1 >= 256)
		{
			iVar77 = func_321(iParam0, iParam1, 11, 4);
			iVar78 = func_312(iVar77);
		}
		if (iVar75 != -1)
		{
			if (unk_0x1A5A491D253EA7BA(iVar75, -491588875, 0))
			{
				return -99;
			}
		}
		if ((((unk_0x1A5A491D253EA7BA(iVar75, -1813210391, 0) || unk_0x1A5A491D253EA7BA(iVar75, -89003918, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1208450825, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1407614029, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 481861038, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar77, -828478571, 0))
			{
				return -99;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar75, -1719338724, 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar78 == 0) || iVar78 == 2) || iVar78 == 4) || iVar78 == 5) || iVar78 == 11) || iVar78 == 12) || iVar78 == 13) || iVar78 == 15) || iVar77 == -221826679) || iVar77 == 1172264892) || iVar77 == 1474853838) || iVar77 == 278369420) || iVar77 == -310817200) || iVar77 == -138976564) || iVar77 == -905541781) || iVar77 == 998321559) || iVar77 == 64401473)
			{
			}
			else
			{
				return -99;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar75, 1170568373, 0))
		{
			if ((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 176 && iParam1 <= 191)) || iVar78 == 0) || iVar78 == 11)
			{
			}
			else
			{
				return -99;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar77, -849839091, 0) || unk_0x1A5A491D253EA7BA(iVar77, -2088146832, 0))
		{
			return -99;
		}
		iVar79 = 0;
		bVar80 = false;
		if ((((((unk_0x1A5A491D253EA7BA(iVar77, -761463976, 0) || unk_0x1A5A491D253EA7BA(iVar77, -1347486026, 0)) || unk_0x1A5A491D253EA7BA(iVar77, -1119232689, 0)) || unk_0x1A5A491D253EA7BA(iVar77, 1784133476, 0)) || unk_0x1A5A491D253EA7BA(iVar77, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar77, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar77, 2030343924, 0))
		{
			bVar80 = true;
			if (((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar76 == 1) || iVar76 == 8) || unk_0x1A5A491D253EA7BA(iVar75, 1170568373, 0))
			{
				iVar79 = 2;
			}
			else if ((((unk_0x1A5A491D253EA7BA(iVar75, 1769225721, 0) || unk_0x1A5A491D253EA7BA(iVar75, -1834446747, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1248753945, 0))
			{
				iVar79 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar76 == 10) || unk_0x1A5A491D253EA7BA(iVar75, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 153792394, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 700658917, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1714969731, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 745826556, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1055526375, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 144417099, 0))
			{
				if (unk_0x1A5A491D253EA7BA(iVar77, 1784133476, 0))
				{
					iVar79 = 1;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar77, -1119232689, 0) || unk_0x1A5A491D253EA7BA(iVar77, 2044466679, 0))
				{
					iVar79 = 1;
				}
				else
				{
					iVar79 = -1;
				}
			}
			else
			{
				iVar79 = 1;
			}
		}
		if (unk_0x1A5A491D253EA7BA(iVar77, -1351486939, 0))
		{
			bVar80 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar76 == 7) || unk_0x1A5A491D253EA7BA(iVar75, 684992453, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -820724897, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -872449705, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 947651647, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1830529185, 0))
			{
				if (((unk_0x1A5A491D253EA7BA(iVar75, 1769225721, 0) || unk_0x1A5A491D253EA7BA(iVar75, -1834446747, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1248753945, 0))
				{
					iVar79 = 0;
				}
				else
				{
					iVar79 = 1;
				}
			}
			else if ((((((unk_0x1A5A491D253EA7BA(iVar75, 153792394, 0) || unk_0x1A5A491D253EA7BA(iVar75, 1322269404, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 548036233, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 700658917, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1014753511, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1410897066, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -2119756144, 0))
			{
				iVar79 = 0;
			}
			else
			{
				iVar79 = -1;
			}
		}
		switch (iVar77)
		{
			case -221826679:
			case 1172264892:
			case 1474853838:
			case 278369420:
			case -310817200:
			case -138976564:
			case -905541781:
			case 998321559:
			case 64401473:
			case 15269846:
			case -674026069:
			case -904392139:
			case -1135708510:
			case -1360241698:
			case -2130051046:
			case 1935434943:
			case 1704282417:
			case 1472114052:
			case 1169688951:
			case -1193832172:
			case -886884949:
			case -1669539745:
			case -1370260468:
			case -413962745:
			case -238779663:
				bVar80 = true;
				if (((unk_0x1A5A491D253EA7BA(iVar75, 1769225721, 0) || unk_0x1A5A491D253EA7BA(iVar75, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1248753945, 0))
				{
					iVar79 = 1;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar75, -1834446747, 0))
				{
					iVar79 = 2;
				}
				else if ((((((((((((unk_0x1A5A491D253EA7BA(iVar75, -870074461, 0) || unk_0x1A5A491D253EA7BA(iVar75, -1719338724, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 947651647, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1830529185, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -89003918, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -747858475, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1208450825, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -58412562, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1407614029, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 481861038, 0))
				{
					iVar79 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar76 == 1) || iVar76 == 7) || iVar76 == 8)
				{
					iVar79 = 0;
				}
				else
				{
					iVar79 = -1;
				}
				break;
			
			case 619380843:
				bVar80 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar76 == 1) || iVar76 == 8)
				{
					iVar79 = 0;
				}
				else
				{
					iVar79 = -1;
				}
				break;
		}
		if (unk_0x1A5A491D253EA7BA(iVar75, -1266557933, 0) || unk_0x1A5A491D253EA7BA(iVar75, -979468724, 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar78 == 15)
			{
				iVar0 = 120;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar77, 2044466679, 0) || unk_0x1A5A491D253EA7BA(iVar77, -2020757158, 0))
			{
				bVar80 = true;
				iVar79 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar75, -1237899132, 0) && !unk_0x1A5A491D253EA7BA(iVar75, -491588875, 0))
		{
			if (unk_0x1A5A491D253EA7BA(iVar75, -2124629577, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar78 == 12)
				{
					return -99;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar78 == 4) || iVar78 == 5) || iVar78 == 11) || iVar78 == 12) || iVar78 == 13) || iVar78 == 15)
			{
				bVar80 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar80 = true;
				if ((unk_0x1A5A491D253EA7BA(iVar75, -269266203, 0) || unk_0x1A5A491D253EA7BA(iVar75, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 297865853, 0))
				{
					iVar79 = 4;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar75, 201427653, 0))
				{
					iVar79 = 5;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar75, 967829025, 0) || unk_0x1A5A491D253EA7BA(iVar75, -2124629577, 0))
				{
					iVar79 = 6;
				}
				else
				{
					iVar79 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar80)
		{
			if (iVar79 != -1)
			{
				iVar81 = unk_0xB3A1A93269979713(iVar77);
				iVar82 = 0;
				while (iVar82 < iVar81)
				{
					unk_0xAEF3D5EB046168F2(iVar77, iVar82, &iVar83, &iVar84, &iVar85);
					if (iVar85 == 8)
					{
						if (((((((iVar79 == 6 && unk_0x1A5A491D253EA7BA(iVar83, -168336417, 0)) || (iVar79 == 5 && unk_0x1A5A491D253EA7BA(iVar83, -1415000253, 0))) || (iVar79 == 4 && unk_0x1A5A491D253EA7BA(iVar83, -1703203608, 0))) || (iVar79 == 3 && unk_0x1A5A491D253EA7BA(iVar83, 1318819110, 0))) || (iVar79 == 2 && unk_0x1A5A491D253EA7BA(iVar83, -1138757583, 0))) || (iVar79 == 1 && unk_0x1A5A491D253EA7BA(iVar83, 647976134, 0))) || ((((((iVar79 == 0 && !unk_0x1A5A491D253EA7BA(iVar83, 647976134, 0)) && !unk_0x1A5A491D253EA7BA(iVar83, -1138757583, 0)) && !unk_0x1A5A491D253EA7BA(iVar83, 1318819110, 0)) && !unk_0x1A5A491D253EA7BA(iVar83, -1703203608, 0)) && !unk_0x1A5A491D253EA7BA(iVar83, -1415000253, 0)) && !unk_0x1A5A491D253EA7BA(iVar83, -168336417, 0)))
						{
							if (iVar83 != 0 && iVar83 != 1849449579)
							{
								iVar0 = func_205(iParam0, iVar83, 8, 4);
							}
							else
							{
								iVar0 = iVar84;
							}
							iVar82 = iVar81 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar82++;
				}
			}
			return -99;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar78 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar76 == 6) || iVar76 == 7)) && func_318()) && !unk_0x1A5A491D253EA7BA(iVar75, -416620954, 0)) && !unk_0x1A5A491D253EA7BA(iVar75, 947651647, 0)) && !unk_0x1A5A491D253EA7BA(iVar75, -549843760, 0)) && !unk_0x1A5A491D253EA7BA(iVar75, 1830529185, 0))
		{
			if ((((((unk_0x1A5A491D253EA7BA(iVar75, -1813210391, 0) || unk_0x1A5A491D253EA7BA(iVar75, -89003918, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -747858475, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1208450825, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -58412562, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1407614029, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 481861038, 0))
			{
				return -99;
			}
			iVar86 = iVar77;
			if (iParam1 == 199)
			{
				iVar0 = func_205(iParam0, 331193219, 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_205(iParam0, 1115060468, 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_205(iParam0, 779636984, 8, 4);
			}
			else if (iVar86 == 948380380)
			{
				iVar0 = func_205(iParam0, -570249206, 8, 4);
			}
			else if (iVar86 == 708412993)
			{
				iVar0 = func_205(iParam0, -876115052, 8, 4);
			}
			else if (iVar86 == 1974869305)
			{
				iVar0 = func_205(iParam0, -108599534, 8, 4);
			}
			else if (iVar86 == 1197916315)
			{
				iVar0 = func_205(iParam0, 200575961, 8, 4);
			}
			else if (iVar86 == 587593690)
			{
				iVar0 = func_205(iParam0, 961930907, 8, 4);
			}
			else if (iVar86 == 323213398)
			{
				iVar0 = func_205(iParam0, -257698508, 8, 4);
			}
			else if (iVar86 == 1050193651)
			{
				iVar0 = func_205(iParam0, 516534659, 8, 4);
			}
			else if (iVar86 == 811438717)
			{
				iVar0 = func_205(iParam0, -1174312584, 8, 4);
			}
			else if (iVar86 == -877868759)
			{
				iVar0 = func_205(iParam0, -1192794304, 8, 4);
			}
			else if (iVar86 == -1108464212)
			{
				iVar0 = func_205(iParam0, -2027256889, 8, 4);
			}
			else if (iVar86 == -467866094)
			{
				iVar0 = func_205(iParam0, -1670074789, 8, 4);
			}
			else if (iVar86 == -673000034)
			{
				iVar0 = func_205(iParam0, -326349175, 8, 4);
			}
			else if (iVar86 == -1984939718)
			{
				iVar0 = func_205(iParam0, -796060021, 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || unk_0x1A5A491D253EA7BA(iVar75, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar75, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar75, 1248753945, 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				
				case 200:
					iVar0 = 95;
					break;
				
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar76 == 10)
			{
				return -99;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar77 != -1)
			{
				bVar87 = true;
				if (unk_0x1A5A491D253EA7BA(iVar77, 1965569012, 0))
				{
					bVar87 = false;
					if (iParam2 >= 256 && unk_0x1A5A491D253EA7BA(iVar75, -1200513218, 0))
					{
						bVar87 = true;
					}
				}
				if (bVar87)
				{
					iVar79 = 0;
					if (iParam2 >= 160 && iParam2 <= 175)
					{
						if (iVar78 == 12)
						{
							iVar79 = 1;
						}
					}
					iVar88 = unk_0xB3A1A93269979713(iVar77);
					iVar89 = 0;
					while (iVar89 < iVar88)
					{
						unk_0xAEF3D5EB046168F2(iVar77, iVar89, &iVar90, &iVar91, &iVar92);
						if (iVar92 == 8 && ((((((((iVar90 == 0 || iVar90 == 1849449579) || (iVar79 == 6 && unk_0x1A5A491D253EA7BA(iVar90, -168336417, 0))) || (iVar79 == 5 && unk_0x1A5A491D253EA7BA(iVar90, -1415000253, 0))) || (iVar79 == 4 && unk_0x1A5A491D253EA7BA(iVar90, -1703203608, 0))) || (iVar79 == 3 && unk_0x1A5A491D253EA7BA(iVar90, 1318819110, 0))) || (iVar79 == 2 && unk_0x1A5A491D253EA7BA(iVar90, -1138757583, 0))) || (iVar79 == 1 && unk_0x1A5A491D253EA7BA(iVar90, 647976134, 0))) || ((((((iVar79 == 0 && !unk_0x1A5A491D253EA7BA(iVar90, 647976134, 0)) && !unk_0x1A5A491D253EA7BA(iVar90, -1138757583, 0)) && !unk_0x1A5A491D253EA7BA(iVar90, 1318819110, 0)) && !unk_0x1A5A491D253EA7BA(iVar90, -1703203608, 0)) && !unk_0x1A5A491D253EA7BA(iVar90, -1415000253, 0)) && !unk_0x1A5A491D253EA7BA(iVar90, -168336417, 0))))
						{
							if (iVar90 != 0 && iVar90 != 1849449579)
							{
								iVar0 = func_205(iParam0, iVar90, 8, 4);
							}
							else
							{
								iVar0 = iVar91;
							}
							iVar89 = iVar88 + 1;
							iVar1 = 0;
						}
						iVar89++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

bool func_318()
{
	return unk_0xC146D5FBD23C6954(42019760);
}

int func_319(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2131039487;
							break;
						
						case 3:
							return 717379468;
							break;
						
						case 4:
							return -331193181;
							break;
						
						case 5:
							return 73557144;
							break;
						
						case 6:
							return -887980266;
							break;
						
						case 7:
							return -306315670;
							break;
						
						case 8:
							return -1154048938;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 1604817400;
							break;
						
						case 16:
							return 1070350465;
							break;
						
						case 17:
							return 543957972;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1301636615;
							break;
						
						case 3:
							return 1153996761;
							break;
						
						case 4:
							return -1315084792;
							break;
						
						case 5:
							return 1655884038;
							break;
						
						case 6:
							return 1489229833;
							break;
						
						case 7:
							return -1929503325;
							break;
						
						case 8:
							return -1189128367;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -1787244429;
							break;
						
						case 16:
							return -164625564;
							break;
						
						case 17:
							return 1036376234;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 538171135;
							break;
						
						case 3:
							return -244985062;
							break;
						
						case 4:
							return 442977103;
							break;
						
						case 5:
							return -1385727891;
							break;
						
						case 6:
							return 1309989623;
							break;
						
						case 7:
							return 1191418696;
							break;
						
						case 8:
							return 189293242;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -2053677691;
							break;
						
						case 16:
							return -815345802;
							break;
						
						case 17:
							return -1202555345;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return -1438684756;
							break;
						
						case 1:
							return 194146035;
							break;
						
						case 2:
							return -420901598;
							break;
						
						case 3:
							return 2107411814;
							break;
						
						case 4:
							return 1242686602;
							break;
						
						case 5:
							return -596540583;
							break;
						
						case 6:
							return -653786071;
							break;
						
						case 7:
							return 1460048630;
							break;
						
						case 8:
							return -2079589815;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 195042046;
							break;
						
						case 16:
							return 1585638009;
							break;
						
						case 17:
							return 1596098910;
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1947098483;
							break;
						
						case 3:
							return 569295621;
							break;
						
						case 4:
							return -208098559;
							break;
						
						case 5:
							return 1256246195;
							break;
						
						case 6:
							return 1605755939;
							break;
						
						case 7:
							return 874748698;
							break;
						
						case 8:
							return -137095372;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -116524123;
							break;
						
						case 16:
							return -2029602031;
							break;
						
						case 17:
							return -533045314;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1950801119;
							break;
						
						case 3:
							return -1158564771;
							break;
						
						case 4:
							return -69929428;
							break;
						
						case 5:
							return 1957730707;
							break;
						
						case 6:
							return 374587029;
							break;
						
						case 7:
							return -210146735;
							break;
						
						case 8:
							return 336100633;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -372444226;
							break;
						
						case 16:
							return -1181708276;
							break;
						
						case 17:
							return -1164942678;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1148238879;
							break;
						
						case 3:
							return -958872024;
							break;
						
						case 4:
							return 1353141306;
							break;
						
						case 5:
							return 394070886;
							break;
						
						case 6:
							return 255958050;
							break;
						
						case 7:
							return -521728710;
							break;
						
						case 8:
							return 1843470374;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 482576981;
							break;
						
						case 16:
							return -552192905;
							break;
						
						case 17:
							return -2063317122;
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 670760190;
							break;
						
						case 3:
							return 799655540;
							break;
						
						case 4:
							return -99079306;
							break;
						
						case 5:
							return 1989760633;
							break;
						
						case 6:
							return 1157052274;
							break;
						
						case 7:
							return -1196262225;
							break;
						
						case 8:
							return -664356399;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -254517089;
							break;
						
						case 16:
							return 249940927;
							break;
						
						case 17:
							return -1773720288;
							break;
					}
					break;
				
				case 8:
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1875496913;
							break;
						
						case 3:
							return -1978886808;
							break;
						
						case 4:
							return -1279403197;
							break;
						
						case 5:
							return -1459998821;
							break;
						
						case 6:
							return 1786467932;
							break;
						
						case 7:
							return -795005246;
							break;
						
						case 8:
							return -1147008986;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2135611597;
							break;
						
						case 16:
							return -1894776690;
							break;
						
						case 17:
							return -227016798;
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1925009287;
							break;
						
						case 3:
							return -268733734;
							break;
						
						case 4:
							return -2124412821;
							break;
						
						case 5:
							return -360036697;
							break;
						
						case 6:
							return -926433555;
							break;
						
						case 7:
							return 985839403;
							break;
						
						case 8:
							return -234436397;
							break;
						
						case 9:
							return 1165919867;
							break;
						
						case 10:
							return 1606204151;
							break;
						
						case 11:
							return 1774276352;
							break;
						
						case 12:
							return 1934254610;
							break;
						
						case 13:
							return 980775017;
							break;
						
						case 14:
							return 399321881;
							break;
						
						case 15:
							return 1330460533;
							break;
						
						case 16:
							return 1085725282;
							break;
						
						case 17:
							return -2028958832;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 493536654;
							break;
						
						case 3:
							return -1759053005;
							break;
						
						case 4:
							return 630158551;
							break;
						
						case 5:
							return -707909514;
							break;
						
						case 6:
							return 1254885089;
							break;
						
						case 7:
							return 596977742;
							break;
						
						case 8:
							return 1861540342;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -37756040;
							break;
						
						case 16:
							return -1984260867;
							break;
						
						case 17:
							return 1502197825;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -840276017;
							break;
						
						case 3:
							return 756400133;
							break;
						
						case 4:
							return 1148630611;
							break;
						
						case 5:
							return -893909282;
							break;
						
						case 6:
							return 1485630477;
							break;
						
						case 7:
							return -934174767;
							break;
						
						case 8:
							return -1866981918;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -5325525;
							break;
						
						case 16:
							return 532560667;
							break;
						
						case 17:
							return -402286506;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -591418577;
							break;
						
						case 3:
							return -2029591494;
							break;
						
						case 4:
							return 1293565798;
							break;
						
						case 5:
							return 1230599348;
							break;
						
						case 6:
							return 80125466;
							break;
						
						case 7:
							return 768104686;
							break;
						
						case 8:
							return -1559755280;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 347604073;
							break;
						
						case 16:
							return 824480839;
							break;
						
						case 17:
							return -1647592474;
							break;
					}
					break;
				
				case 352:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1435783799;
							break;
						
						case 3:
							return -935552076;
							break;
						
						case 4:
							return 766407714;
							break;
						
						case 5:
							return 1509946582;
							break;
						
						case 6:
							return -2105033798;
							break;
						
						case 7:
							return 1608018857;
							break;
						
						case 8:
							return -1746944984;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 717365732;
							break;
						
						case 16:
							return -1815322218;
							break;
						
						case 17:
							return 801899620;
							break;
					}
					break;
				
				case 353:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 640553446;
							break;
						
						case 3:
							return 376036624;
							break;
						
						case 4:
							return -51036152;
							break;
						
						case 5:
							return 1864144311;
							break;
						
						case 6:
							return 875934121;
							break;
						
						case 7:
							return -671105758;
							break;
						
						case 8:
							return -1439393512;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2063066579;
							break;
						
						case 16:
							return 1248148722;
							break;
						
						case 17:
							return 453354631;
							break;
					}
					break;
				
				case 354:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1795808405;
							break;
						
						case 3:
							return -583173670;
							break;
						
						case 4:
							return 1309411930;
							break;
						
						case 5:
							return -1097003929;
							break;
						
						case 6:
							return 947491077;
							break;
						
						case 7:
							return -1021187095;
							break;
						
						case 8:
							return -1662421384;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -1456322823;
							break;
						
						case 16:
							return -752003681;
							break;
						
						case 17:
							return -1634855663;
							break;
					}
					break;
				
				case 391:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1866149930;
							break;
						
						case 3:
							return 169817082;
							break;
						
						case 4:
							return 876172205;
							break;
						
						case 5:
							return 2053608242;
							break;
						
						case 6:
							return 720468224;
							break;
						
						case 7:
							return -1755663855;
							break;
						
						case 8:
							return -277654310;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -491777818;
							break;
						
						case 16:
							return 1956130191;
							break;
						
						case 17:
							return 1206676025;
							break;
					}
					break;
				
				case 404:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1685192020;
							break;
						
						case 3:
							return 447714365;
							break;
						
						case 4:
							return -187478284;
							break;
						
						case 5:
							return 2101575193;
							break;
						
						case 6:
							return 1655151264;
							break;
						
						case 7:
							return -212448586;
							break;
						
						case 8:
							return -575494038;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 180304173;
							break;
						
						case 16:
							return 1266107782;
							break;
						
						case 17:
							return 575536427;
							break;
					}
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -414534788;
							break;
						
						case 3:
							return 185531215;
							break;
						
						case 4:
							return -775417853;
							break;
						
						case 5:
							return 1619085169;
							break;
						
						case 6:
							return 888176083;
							break;
						
						case 7:
							return -868636293;
							break;
						
						case 8:
							return -481241218;
							break;
						
						case 9:
							return -1659896370;
							break;
						
						case 10:
							return 1919724703;
							break;
						
						case 11:
							return 1634862418;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 982904848;
							break;
						
						case 3:
							return 1053086051;
							break;
						
						case 4:
							return 1565990968;
							break;
						
						case 5:
							return 869354244;
							break;
						
						case 6:
							return -1137668925;
							break;
						
						case 7:
							return -245327436;
							break;
						
						case 8:
							return -2092735770;
							break;
						
						case 9:
							return 445078583;
							break;
						
						case 10:
							return -181565105;
							break;
						
						case 11:
							return -1280672624;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1286693086;
							break;
						
						case 3:
							return 443095479;
							break;
						
						case 4:
							return -2039335276;
							break;
						
						case 5:
							return 2083407994;
							break;
						
						case 6:
							return 533001127;
							break;
						
						case 7:
							return 1728875992;
							break;
						
						case 8:
							return -1665814217;
							break;
						
						case 9:
							return 372072052;
							break;
						
						case 10:
							return 143449031;
							break;
						
						case 11:
							return -472159671;
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1402439971;
							break;
						
						case 1:
							return -77210386;
							break;
						
						case 2:
							return 206640931;
							break;
						
						case 3:
							return 1434974169;
							break;
						
						case 4:
							return -2076303403;
							break;
						
						case 5:
							return 2073263245;
							break;
						
						case 6:
							return 229693395;
							break;
						
						case 7:
							return -981246739;
							break;
						
						case 8:
							return 2107613618;
							break;
						
						case 9:
							return 1636528688;
							break;
						
						case 10:
							return 1619141120;
							break;
						
						case 11:
							return -62578662;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1954830049;
							break;
						
						case 3:
							return 1793062342;
							break;
						
						case 4:
							return -2118725149;
							break;
						
						case 5:
							return -849747283;
							break;
						
						case 6:
							return 1582789248;
							break;
						
						case 7:
							return -1675687168;
							break;
						
						case 8:
							return -381889304;
							break;
						
						case 9:
							return 316684696;
							break;
						
						case 10:
							return 1798619938;
							break;
						
						case 11:
							return -1957636585;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1942207698;
							break;
						
						case 3:
							return -743369876;
							break;
						
						case 4:
							return 582693633;
							break;
						
						case 5:
							return -1280288284;
							break;
						
						case 6:
							return -1000105499;
							break;
						
						case 7:
							return -2147200029;
							break;
						
						case 8:
							return -1838714866;
							break;
						
						case 9:
							return -1501536929;
							break;
						
						case 10:
							return -1868660317;
							break;
						
						case 11:
							return 110135880;
							break;
					}
					break;
				
				case 7:
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1187050736;
							break;
						
						case 3:
							return -1420954963;
							break;
						
						case 4:
							return 232453794;
							break;
						
						case 5:
							return 406178867;
							break;
						
						case 6:
							return 739288468;
							break;
						
						case 7:
							return -252997160;
							break;
						
						case 8:
							return -2044888090;
							break;
						
						case 9:
							return 171952701;
							break;
						
						case 10:
							return -142319190;
							break;
						
						case 11:
							return -1904298392;
							break;
					}
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1703311969;
							break;
						
						case 3:
							return 1875667738;
							break;
						
						case 4:
							return 1291347593;
							break;
						
						case 5:
							return -713453992;
							break;
						
						case 6:
							return 1417339152;
							break;
						
						case 7:
							return 587281350;
							break;
						
						case 8:
							return -86904022;
							break;
						
						case 9:
							return 1665085600;
							break;
						
						case 10:
							return -802903636;
							break;
						
						case 11:
							return -106188732;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1858518769;
							break;
						
						case 3:
							return 44044890;
							break;
						
						case 4:
							return -1131137757;
							break;
						
						case 5:
							return 213313570;
							break;
						
						case 6:
							return -233124949;
							break;
						
						case 7:
							return 171345846;
							break;
						
						case 8:
							return 1452902248;
							break;
						
						case 9:
							return 457174457;
							break;
						
						case 10:
							return -1710613996;
							break;
						
						case 11:
							return -958706838;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 747852506;
							break;
						
						case 3:
							return 216238268;
							break;
						
						case 4:
							return 404894315;
							break;
						
						case 5:
							return 950341895;
							break;
						
						case 6:
							return 1159773017;
							break;
						
						case 7:
							return -957185436;
							break;
						
						case 8:
							return -240960885;
							break;
						
						case 9:
							return 1933094739;
							break;
						
						case 10:
							return 2146821602;
							break;
						
						case 11:
							return -881178956;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -259688953;
							break;
						
						case 3:
							return -736534114;
							break;
						
						case 4:
							return -1673886961;
							break;
						
						case 5:
							return 976562040;
							break;
						
						case 6:
							return -1794803798;
							break;
						
						case 7:
							return -81887956;
							break;
						
						case 8:
							return 1689176064;
							break;
						
						case 9:
							return -1265405818;
							break;
						
						case 10:
							return 1455856271;
							break;
						
						case 11:
							return 1096518579;
							break;
					}
					break;
				
				case 302:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1835438866;
							break;
						
						case 3:
							return -504887899;
							break;
						
						case 4:
							return -2062205969;
							break;
						
						case 5:
							return 1171204323;
							break;
						
						case 6:
							return 655612525;
							break;
						
						case 7:
							return -739019619;
							break;
						
						case 8:
							return 1371789707;
							break;
						
						case 9:
							return 417256409;
							break;
						
						case 10:
							return -768009060;
							break;
						
						case 11:
							return -792102059;
							break;
					}
					break;
				
				case 303:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 124374814;
							break;
						
						case 3:
							return 2119944607;
							break;
						
						case 4:
							return -1129482474;
							break;
						
						case 5:
							return 801728466;
							break;
						
						case 6:
							return 1764150402;
							break;
						
						case 7:
							return -43777;
							break;
						
						case 8:
							return -543743869;
							break;
						
						case 9:
							return -971593942;
							break;
						
						case 10:
							return 1482293004;
							break;
						
						case 11:
							return 921207440;
							break;
					}
					break;
				
				case 304:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1732443055;
							break;
						
						case 3:
							return 1991589117;
							break;
						
						case 4:
							return -1926802042;
							break;
						
						case 5:
							return -1879434956;
							break;
						
						case 6:
							return -582200001;
							break;
						
						case 7:
							return 498117603;
							break;
						
						case 8:
							return 1121585510;
							break;
						
						case 9:
							return 96864554;
							break;
						
						case 10:
							return 96864554;
							break;
						
						case 11:
							return -1149371373;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_320(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case 1885233650:
			if (iParam2 >= 237)
			{
				iVar2 = func_321(iParam0, iParam2, 11, 3);
				iVar1 = func_312(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_321(iParam0, iParam1, 8, 3);
				iVar3 = func_312(iVar4);
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 320460654, 0))
			{
				iVar0 = 14;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar2, -2017999390, 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1786447517, 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1010805287, 0))
			{
				iVar0 = 4;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar2, -1237899132, 0) && !unk_0x1A5A491D253EA7BA(iVar2, -491588875, 0))
			{
				if (iParam1 == 240)
				{
					if ((unk_0x1A5A491D253EA7BA(iVar2, -269266203, 0) || unk_0x1A5A491D253EA7BA(iVar2, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 297865853, 0))
					{
						iVar0 = func_205(iParam0, -189347783, 3, 3);
					}
					else if (unk_0x1A5A491D253EA7BA(iVar2, 201427653, 0))
					{
						iVar0 = func_205(iParam0, -2124259813, 3, 3);
					}
					else if (unk_0x1A5A491D253EA7BA(iVar2, 967829025, 0))
					{
						iVar0 = func_205(iParam0, 1522547645, 3, 3);
					}
					else if (unk_0x1A5A491D253EA7BA(iVar2, -979468724, 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_320(iParam0, -99, func_313(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar2, 1170568373, 0))
			{
				iVar0 = 11;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar4, -316495692, 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -416620954, 0)) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1507532917, 0))) || unk_0x1A5A491D253EA7BA(iVar2, -1813210391, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1719338724, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1939378450, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 264959411, 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 1625463492, 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -973213642, 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1847239679, 0))
				{
					if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1914383230, 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar4, -849839091, 0) || unk_0x1A5A491D253EA7BA(iVar4, -2088146832, 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = unk_0x28499614F961F168(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							unk_0xCCF7782CBFDE8C04(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != 1849449579)
								{
									iVar0 = func_205(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -7109286, 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1147939952, 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		
		case -1667301416:
			if (iParam2 >= 256)
			{
				iVar2 = func_321(iParam0, iParam2, 11, 4);
				iVar1 = func_312(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_321(iParam0, iParam1, 8, 4);
				iVar3 = func_312(iVar4);
				switch (iVar4)
				{
					case 327496660:
					case -63928837:
					case 695885966:
					case 525421628:
					case 1426634666:
					case 1160648693:
					case 1928065904:
					case 1748557322:
					case -1777223233:
					case -1991794649:
					case 917309067:
					case -1629661498:
						iVar3 = 15;
						break;
					
					case 587358117:
					case 742748715:
					case 490263574:
					case 682683142:
					case -1172927021:
					case -174365543:
					case -1450128251:
					case -1811439245:
					case 1578218888:
					case -1193481443:
					case 1549742623:
					case 1309119856:
					case 2143418596:
					case 1905745039:
					case 428026984:
					case 1547729071:
					case -1848319017:
						iVar3 = 13;
						break;
					}
			}
			if (unk_0x1A5A491D253EA7BA(iVar2, 320460654, 0))
			{
				iVar0 = 0;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar2, -1237899132, 0) && !unk_0x1A5A491D253EA7BA(iVar2, -491588875, 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == 1389091979) || iVar4 == 442100644) || iVar4 == -1406103725) || iVar4 == -167304449) || iVar4 == 129353308) || iVar4 == 1943510702) || iVar4 == 1963041026) || unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -2020757158, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1064262817, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1419806467, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1053842259, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1358888880, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 1208450825, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 297865853, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 602650322, 0))
				{
					if ((unk_0x1A5A491D253EA7BA(iVar2, -269266203, 0) || unk_0x1A5A491D253EA7BA(iVar2, -685039259, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 297865853, 0))
					{
						iVar0 = func_205(iParam0, -405734992, 3, 4);
					}
					else if (unk_0x1A5A491D253EA7BA(iVar2, 201427653, 0))
					{
						iVar0 = func_205(iParam0, 1297919831, 3, 4);
					}
					else if ((unk_0x1A5A491D253EA7BA(iVar2, 967829025, 0) || unk_0x1A5A491D253EA7BA(iVar2, -979468724, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -2124629577, 0))
					{
						iVar0 = func_205(iParam0, 440926231, 3, 4);
					}
				}
				else if ((unk_0x1A5A491D253EA7BA(iVar4, -89003918, 0) || unk_0x1A5A491D253EA7BA(iVar4, -747858475, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 490219883, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_320(iParam0, -99, func_313(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar2, 1170568373, 0))
			{
				if ((iParam1 >= 0 && iParam1 <= 15) || iVar3 == 0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 9;
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar4, -316495692, 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1965569012, 0)) && !func_316(iParam0, iParam2, -1)) && !unk_0x1A5A491D253EA7BA(iVar2, 320460654, 0))
			{
				if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1147939952, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1353777856, 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -849839091, 0)) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -2088146832, 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -2102859770, 0))
			{
				if (unk_0x1A5A491D253EA7BA(func_321(iParam0, iParam3, 4, 4), -33031567, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1119232689, 0)) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1976716889, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1488441032, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 2044466679, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1419806467, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -1813210391, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 263623295, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -309899747, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -89003918, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, -747858475, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 490219883, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 1208450825, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 297865853, 0))) || (iVar4 != -1 && unk_0x1A5A491D253EA7BA(iVar4, 602650322, 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || unk_0x1A5A491D253EA7BA(iVar2, 2026620439, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1322269404, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 548036233, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -870074461, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1174924468, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -868698159, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1769225721, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1834446747, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1719338724, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -416620954, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 947651647, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -549843760, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1830529185, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1266557933, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1813210391, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -89003918, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -747858475, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1208450825, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -58412562, 0)) || unk_0x1A5A491D253EA7BA(iVar2, -1407614029, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 1248753945, 0)) || unk_0x1A5A491D253EA7BA(iVar2, 481861038, 0))
				{
					iVar0 = 3;
				}
				else if (unk_0x1A5A491D253EA7BA(iVar2, -1939378450, 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -870074461, 0)) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1813210391, 0))) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -89003918, 0))) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -747858475, 0))) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 1208450825, 0))) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -58412562, 0))) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, -1407614029, 0))) || (iVar2 != -1 && unk_0x1A5A491D253EA7BA(iVar2, 481861038, 0)))
			{
				if ((((unk_0x1A5A491D253EA7BA(iVar4, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar4, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 264959411, 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = unk_0x28499614F961F168(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							unk_0xCCF7782CBFDE8C04(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != 1849449579)
								{
									iVar0 = func_205(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || unk_0x1A5A491D253EA7BA(iVar2, -1719338724, 0))
			{
				if ((((unk_0x1A5A491D253EA7BA(iVar4, 684992453, 0) || unk_0x1A5A491D253EA7BA(iVar4, 916636514, 0)) || unk_0x1A5A491D253EA7BA(iVar4, -1939378450, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 441715397, 0)) || unk_0x1A5A491D253EA7BA(iVar4, 264959411, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_207(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x4F79808059300187(iVar17, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_206(iParam0, func_197(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_197(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xC578687D5A643830(iVar38, &Var21);
			if (!unk_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

void func_322(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0x36C584991B4C183F(iParam0, 11);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, 11);
	iVar3 = unk_0x36C584991B4C183F(iParam0, 1);
	iVar4 = unk_0xDADA8E1DD0D0D9D9(iParam0, 1);
	iVar5 = unk_0x36C584991B4C183F(iParam0, 8);
	iVar6 = unk_0xDADA8E1DD0D0D9D9(iParam0, 8);
	iVar7 = unk_0x36C584991B4C183F(iParam0, 10);
	iVar8 = unk_0xDADA8E1DD0D0D9D9(iParam0, 10);
	iVar9 = unk_0x4F4B24509D6989D0(iParam0, 11, iVar1, iVar2);
	iVar10 = unk_0x4F4B24509D6989D0(iParam0, 1, iVar3, iVar4);
	iVar11 = unk_0x4F4B24509D6989D0(iParam0, 8, iVar5, iVar6);
	iVar12 = unk_0xD1BC07002824FE76(iParam0, 0, unk_0x98F1B512A2CC07C5(iParam0, 0), unk_0x22286A85EDEAEC56(iParam0, 0));
	iVar13 = unk_0x4F4B24509D6989D0(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (unk_0x1A5A491D253EA7BA(iVar9, -317649054, 0) && unk_0x1A5A491D253EA7BA(iVar9, -1889900289, 0))
	{
		if (!func_327(iParam0, &bVar14, iVar9, iVar10, iVar12) || unk_0x405E212DDE472467(iParam0, 0))
		{
			if (func_326(iVar9, 0, 0, &iVar32))
			{
				unk_0xFDEBA3FD0BF0D4AC(iVar32, &Var15);
				unk_0x64F9F278AB9DCA2C(iParam0, 11, Var15.f_3, Var15.f_4, unk_0xAA973E78065E07A0(iParam0, 11));
				if (unk_0x36C584991B4C183F(iParam0, 10) == 0 && func_325(iVar13, 11, -1))
				{
					if (func_325(iVar13, 11, Var15.f_1))
					{
						unk_0x64F9F278AB9DCA2C(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (func_324(iVar13, 10, &iVar33, -1))
					{
						if (func_325(iVar33, 11, Var15.f_1))
						{
							unk_0xFDEBA3FD0BF0D4AC(iVar33, &Var34);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var34.f_3, Var34.f_4, 0);
						}
					}
				}
				if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
				{
					if (unk_0x1A5A491D253EA7BA(iVar13, -1487683087, 0))
					{
						if (unk_0x1A5A491D253EA7BA(iVar32, -816428229, 0) && iVar13 != -1104282163)
						{
							unk_0xFDEBA3FD0BF0D4AC(-1104282163, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x1A5A491D253EA7BA(iVar32, -521539998, 0) && iVar13 != 326501576)
						{
							unk_0xFDEBA3FD0BF0D4AC(326501576, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x1A5A491D253EA7BA(iVar32, -420560153, 0) || unk_0x1A5A491D253EA7BA(iVar32, 604028170, 0))
						{
							unk_0xFDEBA3FD0BF0D4AC(-1769373731, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (unk_0x1A5A491D253EA7BA(iVar13, -1487683087, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar32, -816428229, 0))
					{
						if (iVar13 != 1349944895)
						{
							unk_0xFDEBA3FD0BF0D4AC(1349944895, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar32, -521539998, 0))
					{
						if (iVar13 != -521200785)
						{
							unk_0xFDEBA3FD0BF0D4AC(-521200785, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar32, -420560153, 0) || unk_0x1A5A491D253EA7BA(iVar32, 604028170, 0))
					{
						unk_0xFDEBA3FD0BF0D4AC(-66968432, &Var15);
						unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				unk_0x64F9F278AB9DCA2C(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (unk_0x1A5A491D253EA7BA(iVar9, -317649054, 0) && unk_0x1A5A491D253EA7BA(iVar9, 1569775397, 0))
	{
		if (unk_0x1A5A491D253EA7BA(iVar12, -219395886, 1))
		{
			if (func_326(iVar9, 1, 0, &iVar51))
			{
				unk_0xFDEBA3FD0BF0D4AC(iVar51, &Var15);
				unk_0x64F9F278AB9DCA2C(iParam0, 11, Var15.f_3, Var15.f_4, unk_0xAA973E78065E07A0(iParam0, 11));
				if (unk_0x36C584991B4C183F(iParam0, 10) == 0 && func_325(iVar13, 11, -1))
				{
					if (func_325(iVar13, 11, Var15.f_1))
					{
						unk_0x64F9F278AB9DCA2C(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (func_324(iVar13, 10, &iVar52, -1))
					{
						if (func_325(iVar52, 11, Var15.f_1))
						{
							unk_0xFDEBA3FD0BF0D4AC(iVar52, &Var53);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var53.f_3, Var53.f_4, 0);
						}
					}
				}
				if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
				{
					if (unk_0x1A5A491D253EA7BA(iVar13, -1487683087, 0))
					{
						if (unk_0x1A5A491D253EA7BA(iVar51, -816428229, 0) && iVar13 != -1104282163)
						{
							unk_0xFDEBA3FD0BF0D4AC(-1104282163, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x1A5A491D253EA7BA(iVar51, -521539998, 0) && iVar13 != 326501576)
						{
							unk_0xFDEBA3FD0BF0D4AC(326501576, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x1A5A491D253EA7BA(iVar51, -420560153, 0) || unk_0x1A5A491D253EA7BA(iVar51, 604028170, 0))
						{
							unk_0xFDEBA3FD0BF0D4AC(-1769373731, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (unk_0x1A5A491D253EA7BA(iVar13, -1487683087, 0))
				{
					if (unk_0x1A5A491D253EA7BA(iVar51, -816428229, 0))
					{
						if (iVar13 != 1349944895)
						{
							unk_0xFDEBA3FD0BF0D4AC(1349944895, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar51, -521539998, 0))
					{
						if (iVar13 != -521200785)
						{
							unk_0xFDEBA3FD0BF0D4AC(-521200785, &Var15);
							unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar51, -420560153, 0) || unk_0x1A5A491D253EA7BA(iVar51, 604028170, 0))
					{
						unk_0xFDEBA3FD0BF0D4AC(-66968432, &Var15);
						unk_0x64F9F278AB9DCA2C(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				unk_0x64F9F278AB9DCA2C(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (unk_0x1A5A491D253EA7BA(iVar11, 391733089, 0) || func_323(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_327(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == 1885233650)
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
			{
				unk_0xFDEBA3FD0BF0D4AC(1241116144, &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				unk_0xFDEBA3FD0BF0D4AC(-972757995, &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
		{
			unk_0xFDEBA3FD0BF0D4AC(-367850957, &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			unk_0xFDEBA3FD0BF0D4AC(555191698, &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != unk_0x36C584991B4C183F(iParam0, 8) || iVar6 != unk_0xDADA8E1DD0D0D9D9(iParam0, 8))
		{
			unk_0x64F9F278AB9DCA2C(iParam0, 8, iVar5, iVar6, unk_0xAA973E78065E07A0(iParam0, 8));
		}
	}
}

int func_323(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
	}
	if (unk_0x134B62B726CEC8E6(iParam0) == 1885233650)
	{
		if (unk_0x1A5A491D253EA7BA(iParam1, 572416369, 0))
		{
			return 1;
		}
	}
	else if (unk_0x134B62B726CEC8E6(iParam0) == -1667301416)
	{
		if (unk_0x1A5A491D253EA7BA(iParam1, -196114988, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = unk_0xB3A1A93269979713(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		unk_0xAEF3D5EB046168F2(iParam0, iVar1, iParam2, &uVar2, &iVar3);
		if (iVar3 == iParam1)
		{
			if (*iParam2 != 0 && *iParam2 != 1849449579)
			{
				if (iParam3 == -1 || unk_0x1A5A491D253EA7BA(*iParam2, iParam3, iVar3))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_325(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != -1)
	{
		iVar0 = unk_0x28499614F961F168(iParam0);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			unk_0xCCF7782CBFDE8C04(iParam0, iVar1, &iVar2, &uVar3, &iVar4);
			if (iVar4 == iParam1 && (iParam2 == -1 || iParam2 == iVar2))
			{
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = -1;
	iVar0 = unk_0xB3A1A93269979713(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		unk_0xAEF3D5EB046168F2(iParam0, iVar1, iParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *iParam3 != 0) && *iParam3 != 1849449579) && iParam1 == unk_0x1A5A491D253EA7BA(*iParam3, -1889900289, 0)) && iParam2 == unk_0x1A5A491D253EA7BA(*iParam3, -1325143745, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = unk_0x4F4B24509D6989D0(iParam0, 11, unk_0x36C584991B4C183F(iParam0, 11), unk_0xDADA8E1DD0D0D9D9(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = unk_0x4F4B24509D6989D0(iParam0, 1, unk_0x36C584991B4C183F(iParam0, 1), unk_0xDADA8E1DD0D0D9D9(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = unk_0xD1BC07002824FE76(iParam0, 0, unk_0x98F1B512A2CC07C5(iParam0, 0), unk_0x22286A85EDEAEC56(iParam0, 0));
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (unk_0x1A5A491D253EA7BA(iParam2, -317649054, 0))
	{
		if (unk_0x1A5A491D253EA7BA(iParam2, 32905942, 0))
		{
			if (!unk_0x1A5A491D253EA7BA(iParam4, 605826125, 1) && unk_0x98F1B512A2CC07C5(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!unk_0x1A5A491D253EA7BA(iParam3, 72391838, 0) && !unk_0x1A5A491D253EA7BA(iParam3, -1409448021, 0)) && unk_0x36C584991B4C183F(iParam0, 1) != 0)
			{
				if (unk_0x1A5A491D253EA7BA(iParam4, 605826125, 1))
				{
					if (unk_0x1A5A491D253EA7BA(iParam3, 629327198, 0) || unk_0x1A5A491D253EA7BA(iParam3, -692832227, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x1A5A491D253EA7BA(iParam3, -692832227, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1A5A491D253EA7BA(iParam3, -1188154325, 0))
			{
				return 0;
			}
		}
		else
		{
			if (unk_0x98F1B512A2CC07C5(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!unk_0x1A5A491D253EA7BA(iParam3, 72391838, 0) && !unk_0x1A5A491D253EA7BA(iParam3, -1409448021, 0)) && unk_0x36C584991B4C183F(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == 1885233650)
	{
		if (!unk_0x1A5A491D253EA7BA(iParam2, 572416369, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case -486726551:
			case 219052171:
			case -1032068249:
			case -728660078:
			case -850691818:
			case -544072285:
			case -1811183977:
			case -1111303675:
			case 116190296:
			case -1282673470:
			case -936108522:
			case -671236695:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case -1866059977:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case -829567064:
			case -130604290:
			case -380009149:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case -1797925843:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case -672409000:
			case -1976713507:
			case -1902280196:
			case -115943475:
			case 1684425644:
			case 1983115079:
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!unk_0x1A5A491D253EA7BA(iParam2, -196114988, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (unk_0x1A5A491D253EA7BA(iParam3, -1218048590, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case -1741098918:
			case -1360388756:
			case -1130579759:
			case -929181485:
			case -564396977:
			case -314533352:
			case 48874858:
			case 335112073:
			case 643009597:
			case 931540642:
			case 1886036076:
			case -1417439587:
			case -1780323493:
			case 955888011:
			case 691999254:
			case 1549695060:
			case 1319689449:
			case -258334499:
			case -498367424:
			case 346089706:
			case 1038236244:
			case 1731071211:
			case 1365303633:
			case 209639294:
			case -422671330:
			case 805478037:
			case -1615510302:
			case 1527692182:
			case -2083484391:
			case -1372200477:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case -162598372:
			case -393062749:
			case 2063387500:
			case 1633785910:
			case -874910415:
			case -1240415841:
			case 4970004:
			case -1695478944:
			case -450420789:
			case 257455149:
			case 1098963073:
			case -204554982:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case -130673163:
			case 1595499458:
			case 1424510816:
			case -1686217589:
			case 415037286:
			case 1095714954:
			case -1384675744:
			case -603364477:
			case 423419373:
			case -945505606:
			case -188672778:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case -539458143:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case -1951407139:
			case 1109577920:
			case 1943254053:
			case -706250677:
			case -933962458:
			case 2065187502:
			case 2143125494:
			case -728857530:
			case 113895612:
			case -106672527:
			case -1674341487:
			case -1426640612:
			case -1616110970:
			case -825558845:
			case -1062773636:
			case 1680712586:
			case 731446975:
			case -1441694810:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case -402884741:
			case 1982600156:
			case -1955185040:
			case -1722820061:
			case 519431533:
			case 1338441322:
			case -97470603:
			case -1293080337:
			case -1531999116:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case -2013146335:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case -1137111266:
			case 316882033:
			case 590699797:
			case -385914710:
			case -1897876374:
			case -861786128:
			case -633615581:
			case -1298728310:
			case 2019526172:
			case -156630377:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case -1876706754:
			case -1647782520:
			case -1394117691:
			case 977702533:
			case -670092377:
			case -908093624:
			case 1219695857:
			case 1919117393:
			case -534990310:
			case 445654672:
			case 329262298:
			case 22970455:
			case -476401343:
			case -706275878:
			case -1114385357:
			case -840010097:
			case -2048003518:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case -1364343871:
			case 721974080:
			case -45508669:
			case 1998385862:
			case 1222776401:
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (unk_0x1A5A491D253EA7BA(iParam3, -1409448021, 0) && !func_328(iVar0, 14, func_337(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 1885233650:
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_321(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_321(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_330(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == 1885233650)
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_195(iParam0, 8);
					iVar15 = func_321(iParam1, iVar2, 8, 3);
					iVar16 = func_312(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && unk_0x1A5A491D253EA7BA(iVar15, 1965569012, 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						bVar17 = true;
						if (unk_0x1A5A491D253EA7BA(iVar14, 19149565, 0))
						{
							iVar2 = func_195(iParam0, 8);
							iVar18 = func_321(iParam1, iVar2, 8, 3);
							iVar19 = func_312(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && unk_0x1A5A491D253EA7BA(iVar18, 1965569012, 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = unk_0x28499614F961F168(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_205(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_321(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_321(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = func_312(func_321(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_195(iParam0, 8);
					iVar21 = func_321(iParam1, iVar2, 8, 3);
					iVar22 = func_312(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && unk_0x1A5A491D253EA7BA(iVar21, 1965569012, 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = func_321(iParam1, iParam3, 6, 3);
						if (iVar14 != -1)
						{
							iVar3 = unk_0x28499614F961F168(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_205(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar23 = -1;
				iVar24 = -1;
				if (iParam3 >= 92)
				{
					iVar24 = func_321(iParam1, iParam3, 7, 3);
					iVar23 = func_312(iVar24);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar23 == 10) || iVar23 == 11) || iVar23 == 12) || (iParam3 >= 92 && unk_0x1A5A491D253EA7BA(iVar24, -1950939707, 0))) || (iParam3 >= 92 && unk_0x1A5A491D253EA7BA(iVar24, -1371423804, 0))) || (iParam3 >= 92 && unk_0x1A5A491D253EA7BA(iVar24, -920534092, 0)))
				{
					iVar2 = func_195(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = func_321(iParam1, iVar2, 8, 3);
						iVar25 = func_312(iVar14);
						bVar26 = unk_0x1A5A491D253EA7BA(iVar14, 651155766, 0);
						if (((iVar25 == 3 || iVar25 == 7) || iVar25 == 11) || unk_0x1A5A491D253EA7BA(iVar14, 1553766533, 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = unk_0xB3A1A93269979713(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									unk_0xAEF3D5EB046168F2(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar26) || (iVar7 == 10 && bVar26))
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_205(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && unk_0x1A5A491D253EA7BA(iVar24, -378906828, 0)) || (iParam3 >= 92 && unk_0x1A5A491D253EA7BA(iVar24, -695703461, 0))) || (iParam3 >= 92 && unk_0x1A5A491D253EA7BA(iVar24, -108328099, 0)))
				{
					iVar14 = func_321(iParam1, iVar2, 8, 3);
					iVar27 = func_312(iVar14);
					bVar28 = unk_0x1A5A491D253EA7BA(iVar14, 651155766, 0);
					if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || unk_0x1A5A491D253EA7BA(iVar14, 1553766533, 0))
					{
						if (iVar14 != -1)
						{
							iVar12 = unk_0xB3A1A93269979713(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								unk_0xAEF3D5EB046168F2(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_205(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = func_321(iParam1, iParam3, 7, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_321(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = func_321(iParam1, iParam3, 7, 3);
					iVar29 = func_312(iVar30);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || unk_0x1A5A491D253EA7BA(iVar30, -920534092, 0))
				{
					iVar31 = func_195(iParam0, 11);
					if (iVar31 >= 237)
					{
						iVar14 = func_321(iParam1, iVar31, 11, 3);
						if ((unk_0x1A5A491D253EA7BA(iVar14, 1847239679, 0) || unk_0x1A5A491D253EA7BA(iVar14, 282673723, 0)) && unk_0x1A5A491D253EA7BA(iVar14, 1553766533, 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = unk_0xB3A1A93269979713(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									unk_0xAEF3D5EB046168F2(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_205(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_321(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar32 = func_195(iParam0, 11);
				if (iVar32 >= 237)
				{
					iVar14 = func_321(iParam1, iVar32, 11, 3);
					if ((unk_0x1A5A491D253EA7BA(iVar14, 1847239679, 0) || unk_0x1A5A491D253EA7BA(iVar14, 282673723, 0)) && unk_0x1A5A491D253EA7BA(iVar14, 1553766533, 0))
					{
						iVar14 = func_321(iParam1, iParam3, 11, 3);
						if (iVar14 != -1)
						{
							iVar3 = unk_0x28499614F961F168(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_205(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_321(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 4, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_321(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_321(iParam1, iParam3, 1, 3);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xF33932224B5C0CBD(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x65EBB63995CDC212(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xF33932224B5C0CBD(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x65EBB63995CDC212(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xF33932224B5C0CBD(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x65EBB63995CDC212(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == -1667301416)
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_321(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						bVar33 = false;
						if (unk_0x1A5A491D253EA7BA(iVar14, 1943347821, 0))
						{
							iVar2 = func_195(iParam0, 8);
							iVar34 = func_321(iParam1, iVar2, 8, 4);
							if (iVar2 >= 136 && unk_0x1A5A491D253EA7BA(iVar34, 1965569012, 0))
							{
							}
							else
							{
								iVar0 = func_205(iParam1, -2104689229, 8, 4);
								bVar33 = true;
							}
						}
						if (!bVar33)
						{
							iVar3 = unk_0x28499614F961F168(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_205(iParam1, iVar5, 8, 4);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar35 = -1;
				if (iParam3 >= 55)
				{
					iVar35 = func_321(iParam1, iParam3, 7, 4);
				}
				if ((iVar35 != -1 && unk_0x1A5A491D253EA7BA(iVar35, -920534092, 0)) || (iVar35 != -1 && unk_0x1A5A491D253EA7BA(iVar35, 1537081084, 0)))
				{
					iVar14 = unk_0x4F4B24509D6989D0(iParam0, 8, unk_0x36C584991B4C183F(iParam0, 8), unk_0xDADA8E1DD0D0D9D9(iParam0, 8));
					bVar36 = false;
					if (unk_0x1A5A491D253EA7BA(iVar35, -378906828, 0) || unk_0x1A5A491D253EA7BA(iVar35, -108328099, 0))
					{
						if (unk_0x1A5A491D253EA7BA(iVar14, -1914383230, 0))
						{
							bVar36 = true;
						}
					}
					else if (unk_0x1A5A491D253EA7BA(iVar14, 1553766533, 0))
					{
						bVar36 = true;
					}
					if (bVar36)
					{
						iVar12 = unk_0xB3A1A93269979713(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							unk_0xAEF3D5EB046168F2(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_321(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 4, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_321(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_321(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_321(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x28499614F961F168(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCCF7782CBFDE8C04(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_321(iParam1, iParam3, 1, 4);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xF33932224B5C0CBD(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x65EBB63995CDC212(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xF33932224B5C0CBD(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x65EBB63995CDC212(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_321(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xF33932224B5C0CBD(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x65EBB63995CDC212(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_205(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam4 = -99;
	switch (iParam1)
	{
		case 1885233650:
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_206(iParam1, 1))
					{
						func_352(iParam1, 1, iParam3, -1);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_195(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_321(iParam1, iVar0, 1, 3);
						if (unk_0x1A5A491D253EA7BA(iVar1, -1188154325, 0))
						{
							iVar1 = func_321(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = unk_0x28499614F961F168(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									unk_0xCCF7782CBFDE8C04(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != 1849449579)
										{
											*iParam4 = func_205(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_206(iParam1, 1))
					{
						func_352(iParam1, 1, iParam3, -1);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_195(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_321(iParam1, iVar7, 1, 4);
						if (unk_0x1A5A491D253EA7BA(iVar8, -1188154325, 0))
						{
							iVar8 = func_321(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = unk_0x28499614F961F168(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									unk_0xCCF7782CBFDE8C04(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != 1849449579)
										{
											*iParam4 = func_205(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		func_397(753, iParam3, Global_76431, 1, 0);
		func_397(754, iParam2, Global_76431, 1, 0);
		return 1;
	}
	return 0;
}

void func_331(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (func_398(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = unk_0x134B62B726CEC8E6(iParam0);
			if (iParam1 == 11)
			{
				if (func_316(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = func_195(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_195(iParam0, 11);
				if (!func_316(iVar0, iVar1, -1))
				{
					return;
				}
			}
			func_307(unk_0x12AB0310C2281427("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_309(iVar0, iParam2, 13) && !func_309(iVar0, iParam2, 14)) && !func_309(iVar0, iParam2, 15)) && !func_309(iVar0, iParam2, 16)) && !func_309(iVar0, iParam2, 71)) && !func_309(iVar0, iParam2, 72))
				{
					func_307(unk_0x12AB0310C2281427("crewLogo"), iParam0);
				}
			}
			iVar2 = func_304(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_332(iParam0, iVar2, 0);
				}
				else
				{
					func_333(iVar2, 1, Global_76431);
				}
			}
		}
	}
}

void func_332(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = func_305(iParam0);
			if (!func_292(iParam1, -1) || iParam2)
			{
				if (func_285(&Var1, iParam1, iVar0, iParam0, -1))
				{
					unk_0x8A01F93D41A7B4C6(iParam0, Var1.f_4, Var1.f_5);
					func_258(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_333(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_292(iParam0, iParam2))
		{
			func_334(iParam0, 1, iParam2);
		}
	}
	else if (func_292(iParam0, iParam2))
	{
		func_334(iParam0, 0, iParam2);
	}
}

void func_334(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_293(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&iVar0, func_263(iVar1));
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, func_263(iVar1));
		}
		if (!func_335())
		{
			iVar2 = func_294(iParam0);
			if (iVar2 != 11511)
			{
				func_397(iVar2, iVar0, iParam2, 1, 0);
			}
		}
	}
}

bool func_335()
{
	return Global_1312854;
}

int func_336()
{
	iVar0 = Global_76431;
	if (func_292(13, iVar0))
	{
		return 13;
	}
	if (func_292(14, iVar0))
	{
		return 14;
	}
	if (func_292(15, iVar0))
	{
		return 15;
	}
	if (func_292(16, iVar0))
	{
		return 16;
	}
	if (func_292(71, iVar0))
	{
		return 71;
	}
	if (func_292(72, iVar0))
	{
		return 72;
	}
	return -1;
}

int func_337(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_227(iParam0, iParam1, iVar0))
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
				if (func_227(iParam0, iParam1, iVar1))
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
				return func_338(iParam0, iParam2);
			}
		}
		else
		{
			return func_195(iParam0, iParam1);
		}
	}
	return -99;
}

int func_338(int iParam0, int iParam1)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_208(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_203(iParam0, iVar0, iVar1, iParam1);
}

void func_339(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		unk_0x3BFC3B9ADD2EE7B7(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x4E885A246A9D983A(iParam0, 34, false);
			unk_0x4E885A246A9D983A(iParam0, 36, false);
		}
	}
	else
	{
		unk_0x9A28E8CB86CD4694(iParam0, iParam1, iParam2, iParam3, unk_0x8CD06866876216F2());
		if (iParam1 == 0)
		{
			iVar0 = func_203(iParam0, iParam2, iParam3, iParam1);
			if (func_328(unk_0x134B62B726CEC8E6(iParam0), 14, iVar0, unk_0xD1BC07002824FE76(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x4E885A246A9D983A(iParam0, 34, true);
				unk_0x4E885A246A9D983A(iParam0, 36, true);
			}
			else
			{
				unk_0x4E885A246A9D983A(iParam0, 34, false);
				unk_0x4E885A246A9D983A(iParam0, 36, false);
			}
		}
	}
}

struct<10> func_340(int iParam0, int iParam1)
{
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 31:
					func_342(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_342(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_342(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_342(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_342(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_342(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_342(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_342(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_342(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_342(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_342(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_341(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 31:
					func_342(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_342(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_342(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_342(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_342(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_342(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_342(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_342(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_342(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_342(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_341(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 31:
					func_342(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_342(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_342(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_342(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_342(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_342(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_342(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_342(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_342(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_342(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_341(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 31:
					func_342(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_342(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_342(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_342(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_342(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_342(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_342(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_342(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_342(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_342(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_342(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_342(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_342(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_342(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_342(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_342(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_342(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_342(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_342(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_342(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_342(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_342(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_342(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_342(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_342(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_342(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_341(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 31:
					func_342(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_342(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_342(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_342(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_342(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_342(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_342(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_342(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_342(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_342(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_342(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_342(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_342(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_342(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_342(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_342(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_342(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_342(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_342(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_342(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_342(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_342(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_342(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_342(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_342(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_341(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3)
{
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
		if (iParam1 == 225514697)
		{
			iVar0 = 0;
		}
		else if (iParam1 == -1692214353)
		{
			iVar0 = 1;
		}
		else if (iParam1 == -1686040670)
		{
			iVar0 = 2;
		}
		else if (iParam1 == 1885233650)
		{
			iVar0 = 3;
		}
		else if (iParam1 == -1667301416)
		{
			iVar0 = 4;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_205(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<17> func_343(int iParam0, int iParam1)
{
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
		case 225514697:
			switch (iParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_345(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_345(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_345(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_345(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_345(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_345(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_345(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_345(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_345(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_345(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_345(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_345(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_345(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_345(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_345(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_345(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_345(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_345(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_345(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_345(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_345(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_345(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_345(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_345(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_345(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_345(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_345(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_345(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_345(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_345(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_345(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_345(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_345(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_345(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_345(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_345(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_345(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_345(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_345(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_345(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_345(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_345(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_345(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_345(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_345(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_345(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_345(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_345(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_345(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_345(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_345(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_345(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_345(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_345(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_344(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					func_345(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_345(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_345(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_345(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_345(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_345(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_345(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_345(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_345(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_345(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_345(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_345(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_345(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_345(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_345(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_345(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_345(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_345(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_345(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_345(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_345(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_345(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_345(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_345(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_345(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_345(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_345(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_345(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_345(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_345(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_345(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_345(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_345(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_345(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_345(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_345(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_345(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_345(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_345(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_345(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_345(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_345(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_345(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_345(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_345(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_345(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_345(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_344(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					func_345(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_345(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_345(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_345(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_345(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_345(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_345(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_345(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_345(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_345(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_345(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_345(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_345(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_345(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_345(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_345(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_345(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_345(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_345(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_345(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_345(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_345(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_345(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_345(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_345(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_345(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_345(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_345(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_345(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_345(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_345(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_345(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_345(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_345(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_345(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_345(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_345(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_345(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_345(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_345(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_345(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_345(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_345(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_345(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_345(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_345(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_345(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_345(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_344(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					func_345(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_345(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_345(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_345(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_345(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_345(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_345(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_345(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_345(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_345(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_345(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_345(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_345(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_345(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_345(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_345(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_345(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_345(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_345(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_345(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_345(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_345(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_345(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_345(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_345(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_345(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_344(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					func_345(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_345(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_345(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_345(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_345(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_345(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_345(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_345(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_345(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_345(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_345(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_345(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_345(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_345(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_345(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_345(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_345(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_345(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_345(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_345(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_345(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_345(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_345(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_345(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_345(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_345(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_345(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_345(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_344(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_344(var uParam0, int iParam1, int iParam2, int iParam3)
{
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
	if (iParam1 == 225514697)
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == -1692214353)
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == -1686040670)
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == 1885233650)
	{
		iVar0 = 3;
	}
	else if (iParam1 == -1667301416)
	{
		iVar0 = 4;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						unk_0x65C0659496B1CC14(&Var19);
						unk_0xFDEBA3FD0BF0D4AC(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_198(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_198(vVar16.z)] = func_205(iParam1, vVar16.x, func_198(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_198(vVar16.z)] = vVar16.y;
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

void func_345(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

void func_346(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (unk_0x8CD06866876216F2())
	{
		if (Global_76431 != func_69() || iParam2 == -99)
		{
			return;
		}
		Global_76434[2] = { func_352(iParam0, iParam1, iParam2, -1) };
		if (unk_0xEAE0D21A50E6C7F4(Global_76434[2].f_6, 1) && unk_0xEAE0D21A50E6C7F4(Global_76434[2].f_6, 6))
		{
			if (iParam1 == 12)
			{
				func_349(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				func_349(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				func_349(Global_2621444, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = unk_0xB3A1A93269979713(Global_2621444);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4267128)
					{
						Global_4267128[iVar5] = -1;
						Global_4267139[iVar5] = -1;
					}
					unk_0xAEF3D5EB046168F2(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && unk_0x1A5A491D253EA7BA(Global_2621444, -1223513441, 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != 1849449579)
						{
							func_349(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4267128)
							{
								Global_4267128[iVar5] = iVar2;
								Global_4267139[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_346(iParam0, func_198(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4267127++;
				if (Global_4267127 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4267128)
						{
							if (Global_4267128[iVar1] != -1)
							{
								if (iParam0 == 1885233650)
								{
									func_346(iParam0, func_198(Global_4267139[iVar1]), func_205(iParam0, Global_4267128[iVar1], func_198(Global_4267139[iVar1]), 3), 1);
								}
								else
								{
									func_346(iParam0, func_198(Global_4267139[iVar1]), func_205(iParam0, Global_4267128[iVar1], func_198(Global_4267139[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4267127 = (Global_4267127 - 1);
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_76434[2].f_6, 1) && !unk_0xEAE0D21A50E6C7F4(Global_76434[2].f_6, 6))
		{
			if (func_348(iParam1, Global_76434[1].f_2, &iVar6))
			{
				iVar7 = func_156(iVar6, Global_76431, 0);
				unk_0x5D96D8530B3D0904(&iVar7, Global_76434[2].f_1);
				func_397(iVar6, iVar7, Global_76431, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == 1885233650)
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_76434[2].f_4);
							func_346(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_76434[2].f_4);
							func_346(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_76434[2].f_4);
							func_346(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_76434[2].f_4);
							func_346(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar10[0] = 691352495;
									iVar10[1] = 691352495;
									break;
								
								case 221:
									iVar10[0] = 451909412;
									iVar10[1] = 451909412;
									break;
								
								case 222:
									iVar10[0] = -206550874;
									iVar10[1] = -206550874;
									break;
								
								case 223:
									iVar10[0] = -445797343;
									iVar10[1] = -445797343;
									break;
								
								case 224:
									iVar10[0] = -173716332;
									iVar10[1] = -173716332;
									break;
								
								case 225:
									iVar10[0] = -538304226;
									iVar10[1] = -538304226;
									break;
								
								case 226:
									iVar10[0] = -592242000;
									iVar10[1] = -592242000;
									break;
								
								case 227:
									iVar10[0] = -831095241;
									iVar10[1] = -831095241;
									break;
								
								case 228:
									iVar10[0] = -1092100326;
									iVar10[1] = -1092100326;
									break;
								
								case 229:
									iVar10[0] = -1465994616;
									iVar10[1] = -1465994616;
									break;
								
								case 230:
									iVar10[0] = 507503642;
									iVar10[1] = 507503642;
									break;
								
								case 231:
									iVar10[0] = -1392082519;
									iVar10[1] = -1392082519;
									break;
								
								case 232:
									iVar10[0] = -88859389;
									iVar10[1] = -88859389;
									break;
								
								case 233:
									iVar10[0] = 157858412;
									iVar10[1] = 157858412;
									break;
								
								case 234:
									iVar10[0] = -513152401;
									iVar10[1] = -513152401;
									break;
								
								case 235:
									iVar10[0] = 2004948615;
									iVar10[1] = 2004948615;
									break;
							}
							unk_0x65C0659496B1CC14(&Var13);
							iVar32 = unk_0xF6900DA2D9CD7BC5(3, 7, -1, 0, -1, 8);
							iVar30 = 0;
							while (iVar30 < iVar32)
							{
								unk_0xC578687D5A643830(iVar30, &Var13);
								if (!unk_0x232048AB4B0E0259(Var13))
								{
									if (Var13.f_1 == iVar10[0] || Var13.f_1 == iVar10[1])
									{
										func_346(iParam0, 8, (241 + iVar31), 0);
										iVar30 = iVar32 + 1;
									}
									iVar31++;
								}
								iVar30++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_76434[2].f_4)
							{
								case 0:
									func_346(iParam0, 7, func_205(iParam0, -1893758670, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 221276858, 7, 3), 0);
									break;
								
								case 1:
									func_346(iParam0, 7, func_205(iParam0, -1596052305, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 576886046, 7, 3), 0);
									break;
								
								case 2:
									func_346(iParam0, 7, func_205(iParam0, 1233059274, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -392978047, 7, 3), 0);
									break;
								
								case 3:
									func_346(iParam0, 7, func_205(iParam0, 232228476, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -33764269, 7, 3), 0);
									break;
								
								case 4:
									func_346(iParam0, 7, func_205(iParam0, -454445919, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1510704243, 7, 3), 0);
									break;
								
								case 5:
									func_346(iParam0, 7, func_205(iParam0, 925653285, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1800939276, 7, 3), 0);
									break;
								
								case 6:
									func_346(iParam0, 7, func_205(iParam0, -2104856604, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 833565623, 7, 3), 0);
									break;
								
								case 7:
									func_346(iParam0, 7, func_205(iParam0, 1657483366, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1201823645, 7, 3), 0);
									break;
								
								case 8:
									func_346(iParam0, 7, func_205(iParam0, 501294735, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 2132496022, 7, 3), 0);
									break;
								
								case 9:
									func_346(iParam0, 7, func_205(iParam0, 1882573627, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1939019463, 7, 3), 0);
									break;
								
								case 10:
									func_346(iParam0, 7, func_205(iParam0, 206035418, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1713491273, 7, 3), 0);
									break;
								
								case 11:
									func_346(iParam0, 7, func_205(iParam0, -642943834, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -156668318, 7, 3), 0);
									break;
								
								case 12:
									func_346(iParam0, 7, func_205(iParam0, -388295935, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 106696135, 7, 3), 0);
									break;
								
								case 13:
									func_346(iParam0, 7, func_205(iParam0, 927641567, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -802905767, 7, 3), 0);
									break;
								
								case 14:
									func_346(iParam0, 7, func_205(iParam0, 1147226636, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -505527092, 7, 3), 0);
									break;
								
								case 15:
									func_346(iParam0, 7, func_205(iParam0, 312665744, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1144129332, 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_76434[2].f_4)
							{
								case 0:
									func_346(iParam0, 7, func_205(iParam0, -335266079, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -925989020, 7, 3), 0);
									break;
								
								case 1:
									func_346(iParam0, 7, func_205(iParam0, -1379548555, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 244486895, 7, 3), 0);
									break;
								
								case 2:
									func_346(iParam0, 7, func_205(iParam0, -1402159165, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1095104597, 7, 3), 0);
									break;
								
								case 3:
									func_346(iParam0, 7, func_205(iParam0, 1357351098, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1787874026, 7, 3), 0);
									break;
								
								case 4:
									func_346(iParam0, 7, func_205(iParam0, -1097178082, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 476163725, 7, 3), 0);
									break;
								
								case 5:
									func_346(iParam0, 7, func_205(iParam0, -179482237, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1223952305, 7, 3), 0);
									break;
								
								case 6:
									func_346(iParam0, 7, func_205(iParam0, -750514831, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 2049796643, 7, 3), 0);
									break;
								
								case 7:
									func_346(iParam0, 7, func_205(iParam0, -1724573356, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1013547784, 7, 3), 0);
									break;
								
								case 8:
									func_346(iParam0, 7, func_205(iParam0, 94106144, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1456972664, 7, 3), 0);
									break;
								
								case 9:
									func_346(iParam0, 7, func_205(iParam0, 1070524041, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1670762848, 7, 3), 0);
									break;
								
								case 10:
									func_346(iParam0, 7, func_205(iParam0, -1644577318, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, 1428867383, 7, 3), 0);
									break;
								
								case 11:
									func_346(iParam0, 7, func_205(iParam0, 1865900118, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1664165762, 7, 3), 0);
									break;
								
								case 12:
									func_346(iParam0, 7, func_205(iParam0, 1611776523, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1962101510, 7, 3), 0);
									break;
								
								case 13:
									func_346(iParam0, 7, func_205(iParam0, 1381115532, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1270511757, 7, 3), 0);
									break;
								
								case 14:
									func_346(iParam0, 7, func_205(iParam0, 1636484345, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -1571626106, 7, 3), 0);
									break;
								
								case 15:
									func_346(iParam0, 7, func_205(iParam0, 1422633851, 7, 3), 0);
									func_346(iParam0, 7, func_205(iParam0, -698332248, 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == -1667301416)
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_76434[2].f_4);
							func_346(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_76434[2] = { func_352(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = func_347(iParam0, iParam2, Global_76434[2].f_4);
					if (iVar9 != -99)
					{
						func_346(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar33 = 331193219;
								break;
							
							case 200:
								iVar33 = 1115060468;
								break;
							
							case 201:
								iVar33 = 779636984;
								break;
						}
						unk_0x65C0659496B1CC14(&Var34);
						iVar53 = unk_0xF6900DA2D9CD7BC5(4, 7, -1, 0, -1, 8);
						iVar51 = 0;
						while (iVar51 < iVar53)
						{
							unk_0xC578687D5A643830(iVar51, &Var34);
							if (!unk_0x232048AB4B0E0259(Var34))
							{
								if (Var34.f_1 == iVar33)
								{
									func_346(iParam0, 8, (136 + iVar52), 0);
									iVar51 = iVar53 + 1;
								}
								iVar52++;
							}
							iVar51++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = func_313(iParam0, iParam2, Global_76434[2].f_4);
					if (iVar9 != -99)
					{
						func_346(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_347(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -99;
	if (iParam0 == 1885233650)
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_321(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = unk_0xB3A1A93269979713(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					unk_0xAEF3D5EB046168F2(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_321(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = unk_0xB3A1A93269979713(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0xAEF3D5EB046168F2(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_205(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

bool func_348(int iParam0, int iParam1, var uParam2)
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

void func_349(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_350(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_156(iVar2, iVar0, 0);
		unk_0x5D96D8530B3D0904(&iVar3, iVar1);
		func_397(iVar2, iVar3, iVar0, 1, 0);
	}
}

bool func_350(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
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
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
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
		if (Global_4267094)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				case 206:
					*uParam2 = 9419;
					break;
				
				case 207:
					*uParam2 = 9420;
					break;
				
				case 208:
					*uParam2 = 9421;
					break;
				
				case 209:
					*uParam2 = 9422;
					break;
				
				case 210:
					*uParam2 = 9423;
					break;
				
				case 211:
					*uParam2 = 9424;
					break;
				
				case 212:
					*uParam2 = 9425;
					break;
				
				case 213:
					*uParam2 = 9426;
					break;
				
				case 214:
					*uParam2 = 9427;
					break;
				
				case 215:
					*uParam2 = 9428;
					break;
				
				case 216:
					*uParam2 = 9429;
					break;
				
				case 217:
					*uParam2 = 9430;
					break;
				
				case 218:
					*uParam2 = 9431;
					break;
				
				case 219:
					*uParam2 = 9432;
					break;
				
				case 220:
					*uParam2 = 9433;
					break;
				
				case 221:
					*uParam2 = 9434;
					break;
				
				case 222:
					*uParam2 = 9435;
					break;
				
				case 223:
					*uParam2 = 9436;
					break;
				
				case 224:
					*uParam2 = 9437;
					break;
				
				case 225:
					*uParam2 = 9438;
					break;
				
				case 226:
					*uParam2 = 9439;
					break;
				
				case 227:
					*uParam2 = 9440;
					break;
				
				case 228:
					*uParam2 = 9441;
					break;
				
				case 229:
					*uParam2 = 9442;
					break;
				
				case 230:
					*uParam2 = 9443;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9444;
					break;
				
				case 207:
					*uParam2 = 9445;
					break;
				
				case 208:
					*uParam2 = 9446;
					break;
				
				case 209:
					*uParam2 = 9447;
					break;
				
				case 210:
					*uParam2 = 9448;
					break;
				
				case 211:
					*uParam2 = 9449;
					break;
				
				case 212:
					*uParam2 = 9450;
					break;
				
				case 213:
					*uParam2 = 9451;
					break;
				
				case 214:
					*uParam2 = 9452;
					break;
				
				case 215:
					*uParam2 = 9453;
					break;
				
				case 216:
					*uParam2 = 9454;
					break;
				
				case 217:
					*uParam2 = 9455;
					break;
				
				case 218:
					*uParam2 = 9456;
					break;
				
				case 219:
					*uParam2 = 9457;
					break;
				
				case 220:
					*uParam2 = 9458;
					break;
				
				case 221:
					*uParam2 = 9459;
					break;
				
				case 222:
					*uParam2 = 9460;
					break;
				
				case 223:
					*uParam2 = 9461;
					break;
				
				case 224:
					*uParam2 = 9462;
					break;
				
				case 225:
					*uParam2 = 9463;
					break;
				
				case 226:
					*uParam2 = 9464;
					break;
				
				case 227:
					*uParam2 = 9465;
					break;
				
				case 228:
					*uParam2 = 9466;
					break;
				
				case 229:
					*uParam2 = 9467;
					break;
				
				case 230:
					*uParam2 = 9468;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11511;
}

int func_351(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_352(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_392();
	if (iParam0 == 1885233650)
	{
		func_376(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == -1667301416)
	{
		func_353(iParam1, iParam2, iParam3);
	}
	return Global_76434[0];
}

void func_353(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_375(iParam1, iParam2);
			break;
		
		case 11:
			func_374(iParam1, iParam2);
			break;
		
		case 8:
			func_373(iParam1, iParam2);
			break;
		
		case 9:
			func_372(iParam1, iParam2);
			break;
		
		case 3:
			func_371(iParam1, iParam2);
			break;
		
		case 4:
			func_370(iParam1, iParam2);
			break;
		
		case 6:
			func_369(iParam1, iParam2);
			break;
		
		case 1:
			func_368(iParam1, iParam2);
			break;
		
		case 7:
			func_367(iParam1, iParam2);
			break;
		
		case 10:
			func_366(iParam1, iParam2);
			break;
		
		case 14:
			func_365(iParam1, iParam2);
			break;
		
		case 12:
			func_364(iParam1, iParam2);
			break;
		
		case 5:
			func_363(iParam1, iParam2);
			break;
		
		case 0:
			func_361(iParam1, iParam2);
			break;
		
		case 13:
			func_354(iParam1);
			break;
	}
}

void func_354(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_355(&(Global_76434[0]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_355(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_360(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_23(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, 1827025211, 0))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_359(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_359(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_359(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_359(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_359(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_359(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_358(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		}
		if (func_358(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_358(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_23(14))
			{
				return;
			}
			iVar0 = func_156(func_357(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			}
			iVar0 = func_156(func_356(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_348(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_156(iVar1, Global_76431, 0);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

int func_356(int iParam0, int iParam1)
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

int func_357(int iParam0, int iParam1)
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

int func_358(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_12[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_16[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_32[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_36[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_44[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_52[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_56[iParam3]), iParam4);
			}
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
			}
			{
			}