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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = unk_0xAD1355DD1E5D2D9B();
	uLocal_47 = unk_0x817B3657F78A517A();
	bLocal_51 = true;
	bLocal_58 = true;
	bLocal_80 = true;
	fLocal_1201 = 120f;
	fLocal_1202 = 0f;
	fLocal_1204 = 1f;
	fLocal_1205 = 0f;
	fLocal_1206 = 1f;
	fLocal_1207 = 30f;
	fLocal_1209 = 1f;
	fLocal_1210 = 5f;
	fLocal_1211 = 1f;
	fLocal_1212 = 1f;
	fLocal_1213 = 100f;
	fLocal_1214 = 100f;
	fLocal_1215 = 0f;
	fLocal_1216 = 7000f;
	fLocal_1217 = 0f;
	fLocal_1218 = 0f;
	fLocal_1219 = 0,3f;
	fLocal_1220 = 0,5f;
	fLocal_1221 = 50f;
	iLocal_1807 = -1;
	iLocal_1815 = -1;
	iLocal_1816 = -1;
	sLocal_3042 = "ropeFamily3";
	vLocal_3043 = { -813,8f, 179,23f, 71,16f };
	vLocal_3046 = { 40f, 40f, 40f };
	vLocal_3049 = { -991,65f, 645,38f, 138,64f };
	vLocal_3052 = { -822,26f, 182,9f, 70,9f };
	vLocal_3055 = { -977,222f, 634,37f, 156f };
	vLocal_3058 = { -1015,8f, 656,4f, 149,2f };
	sLocal_3061 = "famthree";
	vLocal_3062 = { -0,875f, -1,75f, -0,475f };
	vLocal_3065 = { 0,875f, -1,75f, -0,475f };
	vLocal_3068 = { 0f, 0f, 0f };
	vLocal_3071 = { 0f, -2,6f, 0,2f };
	StringCopy(&Local_3074, "FAM3_GIT", 16);
	StringCopy(&Local_3078, "FAM3_DCAN", 16);
	StringCopy(&Local_3082, "FAM3_DHOUSE", 16);
	StringCopy(&Local_3086, "FAM3_GBIT", 16);
	StringCopy(&cLocal_3090, "CMN_FLEAVE", 16);
	StringCopy(&cLocal_3094, "CMN_MLEAVE", 16);
	StringCopy(&Local_3098, "LOSE_WANTED", 16);
	StringCopy(&Local_3711, "", 24);
	StringCopy(&Local_3717, "", 24);
	fLocal_3741 = 0,65f;
	iLocal_3784 = -1;
	iLocal_3785 = -1;
	iLocal_3786 = -1;
	iLocal_3787 = -1;
	iLocal_3792 = 250;
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_969();
		func_968(1, 1);
		func_965();
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_964())
	{
		func_962(&iLocal_3102, func_963());
		iLocal_3641 = 1;
		if (Global_92921 == 1)
		{
			iLocal_3102 = func_961(iLocal_3102);
		}
	}
	else
	{
		func_916(0, "CAR CHASE", 0, 0, 0, 1);
	}
	if (func_915(0))
	{
		if (!func_964())
		{
			iLocal_3102 = 0;
			iLocal_3641 = 1;
		}
	}
	while (true)
	{
		func_914(0);
		if (iLocal_3642 == 1)
		{
			func_910(&iLocal_3102, &uLocal_3103);
		}
		if (iLocal_3353 == 1)
		{
			func_858();
		}
		unk_0x1A6DFFFEEC27BF4F("M_MarriageCounselling", 0);
		if (iLocal_3809 > unk_0x1C0640BA9A7327B3())
		{
			unk_0x9501364A300048C6();
		}
		switch (iLocal_3102)
		{
			case 0:
				unk_0x6A36BC55C7F6D023(0f);
				unk_0xD60411959D5D930B(0f);
				if (func_822(iLocal_3102, &iLocal_3638, &iLocal_3642, &uLocal_3640, &iLocal_3641))
				{
					if (func_807(&iLocal_3639))
					{
						func_806();
						iLocal_3102 = 1;
					}
				}
				break;
			
			case 1:
				func_805();
				if (func_822(iLocal_3102, &iLocal_3638, &iLocal_3642, &uLocal_3640, &iLocal_3641))
				{
					if (func_407(&iLocal_3639))
					{
						func_806();
						iLocal_3102 = 2;
					}
				}
				break;
			
			case 2:
				unk_0x6A36BC55C7F6D023(0f);
				unk_0xD60411959D5D930B(0f);
				if (func_822(iLocal_3102, &iLocal_3638, &iLocal_3642, &uLocal_3640, &iLocal_3641))
				{
					if (func_406(&iLocal_3639))
					{
						func_806();
						iLocal_3102 = 3;
					}
				}
				break;
			
			case 3:
				unk_0x6A36BC55C7F6D023(0f);
				unk_0xD60411959D5D930B(0f);
				if (func_822(iLocal_3102, &iLocal_3638, &iLocal_3642, &uLocal_3640, &iLocal_3641))
				{
					if (func_388(&iLocal_3639))
					{
						func_806();
						iLocal_3102 = 4;
					}
				}
				break;
			
			case 4:
				if (iLocal_3755 == 0)
				{
					unk_0xD60411959D5D930B(0,4f);
				}
				if (func_822(iLocal_3102, &iLocal_3638, &iLocal_3642, &uLocal_3640, &iLocal_3641))
				{
					if (func_214(&iLocal_3639))
					{
						func_806();
						iLocal_3102 = 5;
					}
				}
				break;
			
			case 5:
				if (func_822(iLocal_3102, &iLocal_3638, &iLocal_3642, &uLocal_3640, &iLocal_3641))
				{
					if (func_118(&iLocal_3639))
					{
						func_806();
						if (!func_915(0))
						{
							iLocal_3102 = 6;
						}
						else
						{
							iLocal_3102 = 7;
						}
					}
				}
				break;
			
			case 6:
				unk_0x3584F71E5CA29322(7);
				unk_0x3584F71E5CA29322(9);
				unk_0x3584F71E5CA29322(8);
				if (func_822(iLocal_3102, &iLocal_3638, &iLocal_3642, &uLocal_3640, &iLocal_3641))
				{
					if (func_24(&iLocal_3639))
					{
						func_806();
						iLocal_3102 = 7;
					}
				}
				break;
			
			case 7:
				func_22(0, 0);
				func_965();
				unk_0x10FAF14A60A0DBE1();
				break;
			
			case 8:
				func_4(&uLocal_3103);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				func_2();
				unk_0xC92DB9682A650680("FAM3_MISSION_FAIL");
				while (!func_1())
				{
					wait(0);
				}
				func_968(1, 0);
				func_965();
				unk_0x10FAF14A60A0DBE1();
				break;
		}
		wait(0);
	}
}

int func_1()
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

void func_2()
{
	Global_19671 = 0;
	func_3();
}

void func_3()
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

void func_4(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
			func_5("FAM3_TDEST");
			break;
		
		case 2:
			func_5("FAM3_TUND");
			break;
		
		case 3:
			func_5("CMN_MDIED");
			break;
		
		case 4:
			func_5("CMN_MLEFT");
			break;
		
		case 5:
			func_5("CMN_FDIED");
			break;
		
		case 6:
			func_5("CMN_FLEFT");
			break;
		
		case 7:
			func_5("FAM3_CDEAD");
			break;
		
		case 8:
			func_5("FAM3_CATTA");
			break;
		
		case 9:
			func_5("FAM3_CSPOOK");
			break;
		
		case 0:
		case 10:
			func_5("FAM3_FAIL");
			break;
	}
}

void func_5(char* sParam0)
{
	func_21(sParam0);
	func_6(0);
}

void func_6(int iParam0)
{
	if (Global_111638.f_9080 || func_915(0))
	{
		iVar0 = func_20();
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
			switch (func_13())
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
			switch (func_13())
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
	func_14();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_14()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_18(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_17(unk_0x16F2683693E537C9());
			if (func_16(iVar0) && (!func_15(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_16(Global_111638.f_2358.f_539.f_4321))
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

bool func_15(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_1798[iParam0];
}

int func_20()
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

void func_21(char* sParam0)
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

void func_22(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_915(0) && Global_76868.f_1 == 1) && func_23(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_915(0))
	{
		iVar0 = func_20();
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

int func_23(int iParam0)
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

int func_24(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			func_117(unk_0x16F2683693E537C9(), Local_3125.f_2, Local_3125.f_5, 0, 1, 0);
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
				unk_0x1EDC242131C40903(unk_0x16F2683693E537C9());
				unk_0xADCFE13F048E110C(unk_0x16F2683693E537C9());
				unk_0x759A5E1D0F0A31A1(unk_0x16F2683693E537C9());
				func_109(unk_0x16F2683693E537C9());
				unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
				unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 1000f, 1, 0, 0, false);
				unk_0x58B5D6A0F1D7754D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 1000f);
				unk_0xD7AD2803AD9697F7(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 1000f);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9()), 0);
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
			unk_0x25A28F88B27F5218("CLOUDS");
			unk_0x659CD9046B037C7A(11, 0, 0);
			iLocal_3795 = unk_0x1C0640BA9A7327B3();
			*iParam0++;
			break;
		
		case 1:
			if (!unk_0xEB880D98B5988D0C())
			{
				unk_0xD67D6A3F0D653D93(-97,12f, -410,58f, 35,89f, 0,31f, -0,9f, 0,5f, 500f, 0);
				iLocal_3795 = unk_0x1C0640BA9A7327B3();
			}
			if (unk_0x68367101660E33F0() || func_108(10000, iLocal_3795))
			{
				unk_0x486B4ADE317F0689();
				iLocal_3788 = 0;
				*iParam0++;
			}
			break;
		
		case 2:
			unk_0x523BCC9DC80CD82F(Local_3305.f_7);
			unk_0x3F423BF5B8125A50("switch@michael@bench");
			if (unk_0xB87F6CF6E5628C67(Local_3305.f_7) && unk_0xB4AE0788C1587752("switch@michael@bench"))
			{
				if (Global_76882 == 0)
				{
					if (iLocal_3788 == 0)
					{
						iLocal_3788 = unk_0x1C0640BA9A7327B3();
					}
					if (iLocal_3788 != 0 && func_108(1000, iLocal_3788))
					{
						if (!unk_0x69DF961355195C3C(iLocal_3784))
						{
							iLocal_3784 = unk_0xE9744DB7B8CA6965(-95,55f, -415,1f, 35,675f, 0f, 0f, 133f, 2);
							unk_0xC90224D9E95E5E3A(iLocal_3784, 1);
							if (func_107(&Local_3305, 0))
							{
								unk_0x4EBF23A230F3B12C(Local_3305, func_106(func_13()));
								unk_0x9F528B1B53FBC5D9(Local_3305, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_3784, "switch@michael@bench", "bench_on_phone_idle_listen", 1000f, -1,5f, 1, 0, 1148846080, 0);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
							unk_0x71199B01895C6202(Local_3305.f_7);
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
							unk_0x8BCB70EB440DED83(false);
							unk_0xBFE31971E49FA500(false);
							func_99(1);
							unk_0x5CAFA5DD13658DFE(0);
							iLocal_3680 = unk_0x92B061D59B9B540A(26379945, 1);
							unk_0x86F44313DFA8F00C(iLocal_3680, -90,22699f, -417,3332f, 45,11008f, 37,58002f, -0,04153f, -165,6635f, 50f, 0, 1, 1, 2);
							unk_0x91F5B0244AAE6222(iLocal_3680, "HAND_SHAKE", 0,15f);
							unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x69DF961355195C3C(iLocal_3784))
			{
				unk_0x86F44313DFA8F00C(iLocal_3680, -90,22699f, -417,3332f, 45,11008f, 37,58002f, -0,04153f, -165,6635f, 50f, 0, 1, 1, 2);
				unk_0x31A33F7BCB08CB80(false);
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(2500);
				}
				if (!func_98("FAM3_LOUT_1"))
				{
					if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_LOUT", 7, 0, 0, 0))
					{
						func_94("FAM3_LOUT_1", 1);
						iLocal_3793 = unk_0x1C0640BA9A7327B3();
						iLocal_3794 = 0;
						*iParam0++;
					}
				}
			}
			break;
		
		case 4:
			unk_0x4C81063C30E87DDB();
			unk_0x61A3AC394D8DC0BC();
			if (unk_0x69DF961355195C3C(iLocal_3784))
			{
				switch (iLocal_3794)
				{
					case 0:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_3793) > 250)
						{
							unk_0x86F44313DFA8F00C(iLocal_3680, -90,22699f, -417,3332f, 45,11008f, 37,58002f, -0,04153f, -165,6635f, 50f, 0, 1, 1, 2);
							unk_0x86F44313DFA8F00C(iLocal_3680, -93,94202f, -413,061f, 36,34718f, 7,278719f, 0f, 134,3314f, 50f, 14000, 1, 1, 2);
							iLocal_3793 = unk_0x1C0640BA9A7327B3();
							iLocal_3794 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_3793) > 14000)
						{
							unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
							unk_0x9A8DDC7C522F5BF5(iLocal_3680, 0);
							iLocal_3784 = unk_0xE9744DB7B8CA6965(-95,55f, -415,1f, 35,675f, 0f, 0f, 133f, 2);
							unk_0xC90224D9E95E5E3A(iLocal_3784, 0);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_3784, "switch@michael@bench", "exit_forward", 1,5f, -4f, 7, 0, 1148846080, 0);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
							*iParam0++;
						}
						break;
					}
			}
			break;
		
		case 5:
			unk_0x4C81063C30E87DDB();
			unk_0x61A3AC394D8DC0BC();
			unk_0x38C3A68D7861DCFD(1, 0, 1);
			unk_0x38C3A68D7861DCFD(0, 36, 1);
			unk_0x38C3A68D7861DCFD(0, 22, 1);
			unk_0x38C3A68D7861DCFD(0, 23, 1);
			unk_0x38C3A68D7861DCFD(0, 44, 1);
			unk_0x38C3A68D7861DCFD(0, 21, 1);
			unk_0x38C3A68D7861DCFD(0, 265, 1);
			unk_0x38C3A68D7861DCFD(0, 51, 1);
			unk_0x38C3A68D7861DCFD(0, 37, 1);
			unk_0x38C3A68D7861DCFD(0, 28, 1);
			unk_0x38C3A68D7861DCFD(0, 19, 1);
			unk_0x38C3A68D7861DCFD(0, 25, 1);
			unk_0x38C3A68D7861DCFD(0, 24, 1);
			unk_0x38C3A68D7861DCFD(0, 257, 1);
			unk_0x38C3A68D7861DCFD(0, 141, 1);
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x69DF961355195C3C(iLocal_3784))
				{
					if (unk_0xA45992A6CE82FB43(iLocal_3784) > 0,99f)
					{
						if (unk_0xA4FD7964FEE91ED8(0) == 4)
						{
							iLocal_3804 = 1;
						}
						else
						{
							unk_0x8BCB70EB440DED83(true);
							unk_0xBFE31971E49FA500(true);
						}
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "switch@michael@bench", "cellphone_call_listen_base", 1000f, -1,5f, -1, 49, 0, 0, 0, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						*iParam0++;
					}
					else if (unk_0xA45992A6CE82FB43(iLocal_3784) > 0,9f)
					{
						if (unk_0xA4FD7964FEE91ED8(0) == 4)
						{
							if (iLocal_3806 == 0)
							{
								unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
								unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3806 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3804 == 1)
			{
				if (unk_0xA4FD7964FEE91ED8(0) == 4)
				{
					unk_0x8BCB70EB440DED83(true);
					unk_0xBFE31971E49FA500(true);
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(0f);
					iLocal_3804 = 0;
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "switch@michael@bench", "cellphone_call_listen_base", 3))
				{
					unk_0x38C3A68D7861DCFD(0, 36, 1);
					unk_0x38C3A68D7861DCFD(0, 22, 1);
					unk_0x38C3A68D7861DCFD(0, 23, 1);
					unk_0x38C3A68D7861DCFD(0, 44, 1);
					unk_0x38C3A68D7861DCFD(0, 21, 1);
					unk_0x38C3A68D7861DCFD(0, 265, 1);
					unk_0x38C3A68D7861DCFD(0, 51, 1);
					unk_0x38C3A68D7861DCFD(0, 37, 1);
					unk_0x38C3A68D7861DCFD(0, 28, 1);
					unk_0x38C3A68D7861DCFD(0, 19, 1);
					unk_0x38C3A68D7861DCFD(0, 25, 1);
					unk_0x38C3A68D7861DCFD(0, 24, 1);
					unk_0x38C3A68D7861DCFD(0, 257, 1);
					unk_0x38C3A68D7861DCFD(0, 141, 1);
					unk_0x38C3A68D7861DCFD(0, 140, 1);
					unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), 1f);
					if (iLocal_3796 == 0)
					{
						if (func_98("FAM3_LOUT_1"))
						{
							if (func_93())
							{
								Var0 = { func_92() };
								Var6 = { func_91() };
								if (!unk_0xEA6BC48857E0AC4C(&Var0) && !unk_0xEA6BC48857E0AC4C(&Var6))
								{
									if (unk_0x7F8A39872A07D2CE(&Var0, "FAM3_LOUT") && unk_0x7F8A39872A07D2CE(&Var6, "FAM3_LOUT_17"))
									{
										func_2();
										func_89();
										iLocal_3796 = 1;
									}
								}
							}
						}
					}
					if (func_98("FAM3_LOUT_1"))
					{
						if (!func_93())
						{
							Var12.f_4 = 1065353216;
							Var12.f_5 = 1065353216;
							Var12.f_9 = 1065353216;
							Var12.f_10 = 1065353216;
							Var12.f_14 = 1065353216;
							Var12.f_15 = 1065353216;
							Var12.f_17 = 1040187392;
							Var12.f_18 = 1040187392;
							Var12.f_19 = -1;
							Var34.f_4 = 1065353216;
							Var34.f_5 = 1065353216;
							Var34.f_9 = 1065353216;
							Var34.f_10 = 1065353216;
							Var34.f_14 = 1065353216;
							Var34.f_15 = 1065353216;
							Var34.f_17 = 1040187392;
							Var34.f_18 = 1040187392;
							Var34.f_19 = -1;
							Var12 = 1;
							Var12.f_1 = "switch@michael@bench";
							Var12.f_2 = "cellphone_call_out";
							Var12.f_20 = 32;
							Var12.f_17 = 1,5f;
							Var12.f_18 = -1,5f;
							Var12.f_16 = unk_0x12AB0310C2281427("bonemask_head_neck_and_r_arm");
							unk_0x20E1DF68CAB023FF(unk_0x16F2683693E537C9(), &Var12, &Var34, &Var34, 0,25f, 0,25f);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "switch@michael@bench", "cellphone_call_out", 3))
				{
					unk_0x38C3A68D7861DCFD(0, 36, 1);
					unk_0x38C3A68D7861DCFD(0, 22, 1);
					unk_0x38C3A68D7861DCFD(0, 23, 1);
					unk_0x38C3A68D7861DCFD(0, 44, 1);
					unk_0x38C3A68D7861DCFD(0, 21, 1);
					unk_0x38C3A68D7861DCFD(0, 265, 1);
					unk_0x38C3A68D7861DCFD(0, 51, 1);
					unk_0x38C3A68D7861DCFD(0, 37, 1);
					unk_0x38C3A68D7861DCFD(0, 28, 1);
					unk_0x38C3A68D7861DCFD(0, 19, 1);
					unk_0x38C3A68D7861DCFD(0, 25, 1);
					unk_0x38C3A68D7861DCFD(0, 24, 1);
					unk_0x38C3A68D7861DCFD(0, 257, 1);
					unk_0x38C3A68D7861DCFD(0, 141, 1);
					unk_0x38C3A68D7861DCFD(0, 140, 1);
					unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), 1f);
					if (!func_98("FAM3_LOUT_2"))
					{
						if (func_74(&uLocal_3472, "FAM3AUD", "FAM3_LOUT", "FAM3_LOUT_19", 7, 0, 0))
						{
							func_94("FAM3_LOUT_2", 1);
						}
					}
					if (unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "switch@michael@bench", "cellphone_call_out") > 0,3f)
					{
						if (unk_0xC844350D5D58C99A(Local_3305))
						{
							if (unk_0xD59B17D2DFF98E26(Local_3305))
							{
								unk_0x15AFB6CBDE990FB6(Local_3305, 0, 1);
							}
							unk_0xF690C84DADBB3551(&Local_3305);
						}
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						*iParam0++;
					}
				}
			}
			break;
		
		case 8:
			if (!func_93())
			{
				if (unk_0xC844350D5D58C99A(Local_3179))
				{
					if (!unk_0x437347B10A200C4B(Local_3179, 0))
					{
						func_25(Local_3179, Local_3179.f_2, Local_3179.f_5, 24, 0);
					}
				}
				unk_0x8BCB70EB440DED83(true);
				unk_0xBFE31971E49FA500(true);
				func_99(0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x8D17794CE3273D70("switch@michael@bench");
				return 1;
			}
			break;
	}
	return 0;
}

void func_25(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
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
		func_73(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_68(iParam0, &Var0);
		if (func_67(vParam1, 0f, 0f, 0f, 0))
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
		func_60(iParam5, &Var0, vParam1, fParam4, func_66(iParam0));
		func_26(iParam5, iParam0, 0);
	}
}

void func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_57(&(Global_75441.f_555[0]), iParam0))
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
				Global_111638.f_32744.f_4801 = func_46();
			}
			if (iParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_45(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0)) && iParam1 != iVar0)
					{
						func_27(iVar0, 145);
					}
				}
				Global_76347 = iParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_27(int iParam0, int iParam1)
{
	if (!func_28(iParam0))
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
	func_68(iParam0, &(Global_111638.f_32744.f_5510));
}

int func_28(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || func_43(iParam0, 0, 0)) || func_43(iParam0, 1, 0)) || func_43(iParam0, 2, 0)) || func_66(iParam0) != 145) || func_42(iParam0)) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || !func_29(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_41(iParam0))
		{
		}
		if (func_41(iParam0))
		{
		}
		if (func_43(iParam0, 0, 0))
		{
		}
		if (func_43(iParam0, 1, 0))
		{
		}
		if (func_43(iParam0, 2, 0))
		{
		}
		if (func_66(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_30(iParam0, 0))
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

int func_30(int iParam0, bool bParam1)
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
		if (!func_38())
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
		if ((((!func_37() && !func_36()) && !func_35()) && !func_34()) && !func_38())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_35())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_33(iParam0))
		{
			return 0;
		}
	}
	if (!func_31(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	if (!func_32())
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

int func_32()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_33(int iParam0)
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

int func_34()
{
	return 0;
}

int func_35()
{
	return 1;
}

int func_36()
{
	return 1;
}

int func_37()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_38()
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

int func_39(int iParam0)
{
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == -810318068 && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_30(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
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

int func_41(int iParam0)
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

int func_42(int iParam0)
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

int func_43(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(iParam1, iVar0, &sVar1, &iVar9))
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

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_45(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

var func_46()
{
	func_56(&uVar0, unk_0x4460E481B9E33ADA());
	func_55(&uVar0, unk_0x8D199E381D262EEF());
	func_54(&uVar0, unk_0xD8A54335F18763BA());
	func_49(&uVar0, unk_0x972A296334C9D57B());
	func_48(&uVar0, unk_0x118229AD063C3C1D());
	func_47(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_47(var uParam0, int iParam1)
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

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_49(var uParam0, int iParam1)
{
	iVar0 = func_53(*uParam0);
	iVar1 = func_51(*uParam0);
	if (iParam1 < 1 || iParam1 > func_50(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_50(int iParam0, int iParam1)
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

var func_51(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_52(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_52(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_53(var uParam0)
{
	return uParam0 & 15;
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_57(var uParam0, int iParam1)
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
			uParam0->f_4 = func_58(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_58(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_58(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_58(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_58(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_58(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_58(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_58(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_58(2, 1);
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
			if (func_38())
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
			if (func_38())
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
		if (!func_67(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
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
		if (!func_67(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_67(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)
{
	if (func_16(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_59(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_59(int iParam0, var uParam1, int iParam2)
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

void func_60(int iParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6)
{
	if (func_57(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 10))
		{
			func_65(iParam0);
			func_64(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]));
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
			func_61(iParam0, 1);
		}
	}
}

void func_61(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_63(iParam0, 0))
		{
			func_62(iParam0, 1, 0);
			func_62(iParam0, 2, 0);
			func_62(iParam0, 3, 0);
			func_62(iParam0, 4, 0);
			func_62(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_62(iParam0, 0, 0);
	}
}

void func_62(int iParam0, int iParam1, bool bParam2)
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

bool func_63(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

void func_64(var uParam0, var uParam1)
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

void func_65(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_57(&(Global_75441.f_555[0]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			unk_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0].f_9, 13))
		{
			func_61(iParam0, 0);
		}
	}
}

int func_66(int iParam0)
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

bool func_67(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_68(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_72(uParam1);
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
		if (uParam1->f_65 == -1 && !func_71(uParam1->f_66))
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
		func_70(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_69(iVar0 + 1));
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

int func_69(int iParam0)
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

int func_70(int iParam0, var uParam1, var uParam2)
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

int func_71(int iParam0)
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

void func_72(var uParam0)
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

void func_73(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_65(iParam0);
	func_61(iParam0, 0);
}

bool func_74(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_75(sParam2, iParam4, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
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
					func_3();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_86();
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
				func_85();
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
				if (func_84())
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
			if (func_83())
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
			func_82();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_81();
		func_76();
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
		func_3();
	}
	return 0;
}

void func_76()
{
	if (!func_77())
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

int func_77()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_80())
	{
		return 0;
	}
	if (func_78(unk_0xD803B885F5E47A62()))
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

bool func_78(int iParam0)
{
	return func_79(iParam0, 20);
}

bool func_79(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_80()
{
	return -1;
}

void func_81()
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

void func_82()
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

int func_83()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
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

void func_85()
{
	if (func_15(14))
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
		Global_19486 = func_13();
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

void func_86()
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

bool func_87(int iParam0, int iParam1)
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_89()
{
	Global_19671 = 0;
	func_90();
}

void func_90()
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

struct<6> func_91()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_92()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_93()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_94(char* sParam0, bool bParam1)
{
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	if (bParam1)
	{
		if (!func_98(sParam0))
		{
			iVar1 = iLocal_3646;
			if (iLocal_3677 < iVar1)
			{
				iLocal_3646[iLocal_3677] = iVar0;
				iLocal_3677++;
			}
		}
	}
	else
	{
		iVar2 = func_96(iVar0);
		if (iVar2 != -1)
		{
			iLocal_3646[iVar2] = 0;
			func_95();
			iLocal_3677 = (iLocal_3677 - 1);
		}
	}
}

void func_95()
{
	iVar0 = iLocal_3646;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_3646[iVar1] == 0)
		{
			if (iLocal_3646[iVar1 + 1] != 0)
			{
				iLocal_3646[iVar1] = iLocal_3646[iVar1 + 1];
				iLocal_3646[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_96(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3677)
	{
		if (iLocal_3646[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_97(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

int func_98(char* sParam0)
{
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	if (func_96(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

void func_99(bool bParam0)
{
	if (bParam0)
	{
		func_105();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_104(0))
		{
			func_100(0);
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

void func_100(int iParam0)
{
	if (func_103())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_102())
		{
			func_101(1, 1);
		}
		else
		{
			func_101(0, 0);
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
	if (!func_83())
	{
		Global_19486.f_1 = 3;
	}
}

void func_101(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_104(0))
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

bool func_102()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_103()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_104(int iParam0)
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

void func_105()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_106(int iParam0)
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

int func_107(int iParam0, bool bParam1)
{
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x523BCC9DC80CD82F(iParam0->f_7);
		if (unk_0xB87F6CF6E5628C67(iParam0->f_7))
		{
			*iParam0 = unk_0x7707E48765093646(iParam0->f_7, iParam0->f_1, 1, true, false);
			unk_0x08841CDB215AE18F(*iParam0, iParam0->f_1, 0, 0, 1);
			unk_0xC023D1C4BF532815(*iParam0, iParam0->f_4, 2, 1);
			unk_0x1E9649458B15960F(*iParam0, bParam1);
			unk_0xE121AE1BBF90E186(*iParam0, true);
			unk_0x71199B01895C6202(iParam0->f_7);
		}
	}
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	iVar0 = unk_0x1C0640BA9A7327B3();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x1EDC242131C40903(iParam0);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_493[iVar0].f_10[iVar1], iVar2))
				{
					if (func_110(&Var3, func_116(iVar1, iVar2), func_115(iVar0), iParam0, -1))
					{
						unk_0x8A01F93D41A7B4C6(iParam0, Var3.f_4, Var3.f_5);
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

bool func_110(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_114(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
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
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_36() || func_35())
					{
						iVar1 = 400;
						if (func_38() && (func_113() || func_112()))
						{
							iVar1 = 0;
						}
						func_114(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_114(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_111(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_36() || func_35())
					{
						iVar1 = 450;
						if (func_38() && (func_113() || func_112()))
						{
							iVar1 = 0;
						}
						func_114(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_114(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_111(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_36() || func_35())
					{
						iVar1 = 380;
						if (func_38() && (func_113() || func_112()))
						{
							iVar1 = 0;
						}
						func_114(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_114(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_111(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2907)), 0);
					break;
				
				case 1:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2908)), 2);
					break;
				
				case 2:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2909)), 3);
					break;
				
				case 3:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2910)), 0);
					break;
				
				case 4:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2911)), 0);
					break;
				
				case 54:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2912)), 1);
					break;
				
				case 5:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2913)), 0);
					break;
				
				case 6:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2914)), 2);
					break;
				
				case 55:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2915)), 1);
					break;
				
				case 7:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2916)), 0);
					break;
				
				case 8:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2917)), 7);
					break;
				
				case 9:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2918)), 0);
					break;
				
				case 10:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2919)), 0);
					break;
				
				case 11:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2920)), 0);
					break;
				
				case 56:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2921)), 1);
					break;
				
				case 12:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2922)), 2);
					break;
				
				case 57:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2923)), 1);
					break;
				
				case 58:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2924)), 1);
					break;
				
				case 59:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2925)), 1);
					break;
				
				case 60:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2926)), 1);
					break;
				
				case 17:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2931)), 2);
					break;
				
				case 18:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2932)), 2);
					break;
				
				case 19:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2933)), 2);
					break;
				
				case 20:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2934)), 3);
					break;
				
				case 21:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2935)), 3);
					break;
				
				case 22:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 3);
					break;
				
				case 23:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2937)), 3);
					break;
				
				case 24:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2938)), 3);
					break;
				
				case 25:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2939)), 2);
					break;
				
				case 26:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2940)), 3);
					break;
				
				case 27:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2941)), 3);
					break;
				
				case 28:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2942)), 3);
					break;
				
				case 61:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2943)), 1);
					break;
				
				case 62:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2944)), 1);
					break;
				
				case 63:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2945)), 1);
					break;
				
				case 64:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2946)), 1);
					break;
				
				case 65:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2947)), 1);
					break;
				
				case 29:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2948)), 0);
					break;
				
				case 30:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 31:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2950)), 0);
					break;
				
				case 66:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2951)), 1);
					break;
				
				case 32:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2952)), 2);
					break;
				
				case 33:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2953)), 3);
					break;
				
				case 34:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2954)), 2);
					break;
				
				case 35:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2955)), 0);
					break;
				
				case 36:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2956)), 0);
					break;
				
				case 37:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2957)), 0);
					break;
				
				case 38:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2958)), 3);
					break;
				
				case 39:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2959)), 2);
					break;
				
				case 40:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2960)), 0);
					break;
				
				case 67:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2961)), 1);
					break;
				
				case 41:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2962)), 2);
					break;
				
				case 68:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2963)), 1);
					break;
				
				case 42:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2964)), 0);
					break;
				
				case 43:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2965)), 2);
					break;
				
				case 44:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2966)), 0);
					break;
				
				case 45:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2967)), 0);
					break;
				
				case 46:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2968)), 0);
					break;
				
				case 47:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2969)), 3);
					break;
				
				case 48:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2970)), 3);
					break;
				
				case 49:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2971)), 3);
					break;
				
				case 50:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2972)), 2);
					break;
				
				case 51:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2973)), 3);
					break;
				
				case 52:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2974)), 3);
					break;
				
				case 53:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2975)), 0);
					break;
				
				case 69:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2976)), 1);
					break;
				
				case 70:
					func_114(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2977)), 2);
					break;
			}
			if (iVar0 == 1885233650)
			{
				switch (iParam1)
				{
					case 73:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_114(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2930)), 0);
						break;
					
					case 71:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
					
					case 72:
						func_114(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
				}
			}
			else if (iVar0 == -1667301416)
			{
				switch (iParam1)
				{
					case 73:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_114(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_114(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_111(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3)
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

int func_112()
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

int func_113()
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

void func_114(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
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

int func_115(int iParam0)
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
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 3)
	{
	}
	if (iParam1 < 0 || iParam1 > 31)
	{
	}
	return (iParam0 * 32 + iParam1);
}

void func_117(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam5 == 1)
		{
			unk_0xBFB24B9B15F6108F(iParam0, vParam1);
		}
		else if (iParam5 == 0)
		{
			unk_0xA47B46945FF6DE74(iParam0, vParam1, 1, false, 0, 1);
		}
		unk_0xD8F6A53F4799FAFE(iParam0, fParam4);
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			if (iParam6 == 1)
			{
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
			}
			if (iParam7 == 1)
			{
				unk_0x90CECE08EA8E77CC(vParam1);
			}
		}
	}
}

int func_118(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (func_211("family_3_ext", 1))
			{
				switch (func_13())
				{
					case 0:
						if (!unk_0xEB6A8945D1AC98A1(func_210(1)))
						{
							unk_0x29E8331978B73E7F(func_210(1), "Franklin", 0, func_18(1), 0);
						}
						break;
					
					case 1:
						if (!unk_0xEB6A8945D1AC98A1(func_210(0)))
						{
							unk_0x29E8331978B73E7F(func_210(0), "Michael", 0, func_18(0), 0);
						}
						break;
				}
				if (unk_0xC844350D5D58C99A(Local_3267))
				{
					if (!unk_0x437347B10A200C4B(Local_3267, 0))
					{
						unk_0xE121AE1BBF90E186(Local_3267, true);
						unk_0x29E8331978B73E7F(Local_3267, "Madrazos_Car", 1, -808831384, 0);
					}
				}
				func_202(1, 1, 1, 0, 0, 0);
				if (!unk_0xEB6A8945D1AC98A1(func_210(0)))
				{
					unk_0xE731059548189243(func_210(0), 1);
				}
				if (!unk_0xEB6A8945D1AC98A1(func_210(1)))
				{
					unk_0xE731059548189243(func_210(1), 1);
				}
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				if (func_93())
				{
					func_200();
				}
				unk_0xE5305602B634A39A();
				unk_0xC92DB9682A650680("FAM3_END");
				unk_0x4C902758BEA97C68(0);
				unk_0x420FE818E70BB523(4);
				unk_0xFCA2A436FD40C153(0, 0, 1, 0);
				*iParam0++;
			}
			else if (unk_0x75EECC9B0572F772())
			{
				if (!unk_0xEB6A8945D1AC98A1(func_210(0)))
				{
					unk_0xA0A8D79ACBBD1CB8("Michael", func_210(0), 0);
				}
				if (!unk_0xEB6A8945D1AC98A1(func_210(1)))
				{
					unk_0xA0A8D79ACBBD1CB8("Franklin", func_210(1), 0);
				}
				iLocal_3734 = 1;
			}
			break;
		
		case 1:
			if (unk_0x22A8E52414415B76())
			{
				iVar0 = unk_0x728870EB733D12A1();
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						if (unk_0x5A91F08DF773C39D(iVar0, -846,193f, 159,1412f, 66,49907f, 10f, 4f, 4f, false, true, 0) || unk_0x3D1053F9EB43B7AD(iVar0, -835,5897f, 158,5361f, 65,89433f, -827,6454f, 177,585f, 73,08789f, 8f, 0, true, 0))
						{
							if (!unk_0xAF6690C489CC6203(iVar0))
							{
								unk_0x73270B3C9CC833FD(iVar0, true, 0);
							}
							func_199(iVar0);
							if (func_198(24) && unk_0xC844350D5D58C99A(func_45(24)))
							{
								unk_0xA47B46945FF6DE74(iVar0, -821,2841f, 157,5416f, 69,2754f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iVar0, 95,1204f);
							}
							else
							{
								unk_0xA47B46945FF6DE74(iVar0, -867,9103f, 158,2215f, 63,9014f, 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iVar0, 174,2918f);
							}
							unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
							unk_0x05CA0E7946B27A19(iVar0, 1);
							unk_0x56FDC9ADE35F7DB0(iVar0, false, 1, 0);
						}
						if (unk_0x0EB28750412C3A5A(vLocal_3052, unk_0x68F4C0EC296D3901(iVar0, true), true) < 15f)
						{
							if (!unk_0xAF6690C489CC6203(iVar0))
							{
								unk_0x73270B3C9CC833FD(iVar0, true, 0);
							}
							func_199(iVar0);
							unk_0xA47B46945FF6DE74(iVar0, Local_3201.f_2, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(iVar0, func_197(bLocal_3772, 126,8534f, Local_3201.f_5));
							unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
							unk_0x05CA0E7946B27A19(iVar0, 1);
							unk_0x56FDC9ADE35F7DB0(iVar0, false, 1, 0);
							unk_0x25BD67336EA4AECE(iVar0, 50);
							unk_0xF8CF67C6E39C23A9(iVar0, 2f);
							if (func_194(iVar0, -824,8156f, 185,3785f, 69,95421f, -820,6133f, 179,7895f, 73,63923f, 7,5f))
							{
								if (func_198(24) && unk_0xC844350D5D58C99A(func_45(24)))
								{
									unk_0xA47B46945FF6DE74(iVar0, -821,2841f, 157,5416f, 69,2754f, 1, false, 0, 1);
									unk_0xD8F6A53F4799FAFE(iVar0, 95,1204f);
								}
								else
								{
									unk_0xA47B46945FF6DE74(iVar0, -867,9103f, 158,2215f, 63,9014f, 1, false, 0, 1);
									unk_0xD8F6A53F4799FAFE(iVar0, 174,2918f);
								}
								unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
								unk_0x05CA0E7946B27A19(iVar0, 1);
								unk_0x56FDC9ADE35F7DB0(iVar0, false, 1, 0);
							}
						}
					}
					if (iVar0 != Local_3201)
					{
						unk_0x046C362CF15F1935(&Local_3201);
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(func_210(0)))
				{
					unk_0xADCFE13F048E110C(func_210(0));
					unk_0x759A5E1D0F0A31A1(func_210(0));
				}
				if (!unk_0xEB6A8945D1AC98A1(func_210(1)))
				{
					unk_0xADCFE13F048E110C(func_210(1));
					unk_0x759A5E1D0F0A31A1(func_210(1));
				}
				unk_0x745CE398A4B0A3C6(vLocal_3052, 1000f, 0);
				unk_0x0002EE0323037BB6(vLocal_3052, 1000f, 0);
				unk_0x28F5E4DA506AC0CA(vLocal_3052, 1000f, 0, 0, 0, 0, false, 0);
				unk_0x679C321F8CAA2CFA(vLocal_3052, 1000f, 1);
				if (unk_0x76395FF5E8D5E643(-2097039789))
				{
					unk_0x838CC054A9235BEC(-2097039789, 0f, 0, 0);
					unk_0x1BA7FCEAFCE8D46E(-2097039789, 3, 0, 1);
				}
				if (unk_0x76395FF5E8D5E643(-2127416656))
				{
					unk_0x838CC054A9235BEC(-2127416656, 0f, 0, 0);
					unk_0x1BA7FCEAFCE8D46E(-2127416656, 3, 0, 1);
				}
				unk_0x31A33F7BCB08CB80(true);
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			iVar1 = unk_0x728870EB733D12A1();
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0xAF6690C489CC6203(iVar1))
				{
					unk_0x046C362CF15F1935(&iVar1);
				}
			}
			if (unk_0x22A8E52414415B76())
			{
				switch (iLocal_3789)
				{
					case 0:
						if (IntToFloat(unk_0x8F677B1F58B4741C()) > 14500f)
						{
							if (unk_0xDF1306B443CD3D15(Local_3267, 0))
							{
								unk_0x56FDC9ADE35F7DB0(Local_3267, true, 1, 0);
								unk_0x0882E3DC0C991680(Local_3267, 3);
								iLocal_3789++;
							}
						}
						break;
					
					case 1:
						if (IntToFloat(unk_0x8F677B1F58B4741C()) > 19200f)
						{
							if (unk_0xDF1306B443CD3D15(Local_3267, 0))
							{
								unk_0x56FDC9ADE35F7DB0(Local_3267, false, 0, 0);
								unk_0x0882E3DC0C991680(Local_3267, 4);
								iLocal_3789++;
							}
						}
						break;
					
					case 2:
						if (IntToFloat(unk_0x8F677B1F58B4741C()) > 127760f)
						{
							if (unk_0xDF1306B443CD3D15(Local_3267, 0))
							{
								unk_0x56FDC9ADE35F7DB0(Local_3267, true, 1, 0);
								unk_0x0882E3DC0C991680(Local_3267, 3);
								iLocal_3789++;
							}
						}
						break;
					
					case 3:
						if (IntToFloat(unk_0x8F677B1F58B4741C()) > 131850f)
						{
							if (unk_0xDF1306B443CD3D15(Local_3267, 0))
							{
								unk_0x0882E3DC0C991680(Local_3267, 4);
								iLocal_3789++;
							}
						}
						break;
					}
			}
			if (unk_0x3148AE92ED70DC30("Michael", 0))
			{
				if (func_13() != 0)
				{
					if (func_189(&iLocal_3357, 0))
					{
						func_124(&iLocal_3357, 1, 1, 0);
					}
				}
			}
			if (unk_0x3148AE92ED70DC30("Madrazos_Car", 0))
			{
				func_123(&Local_3267, 1, 1);
			}
			if (unk_0x154B5473FBFD0156())
			{
				unk_0xBF40D896CA4BDBE7();
				if (unk_0x76395FF5E8D5E643(-1986583853))
				{
					unk_0x838CC054A9235BEC(-1986583853, 0f, 0, 0);
					unk_0x1BA7FCEAFCE8D46E(-1986583853, 0, 0, 1);
				}
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x2FB9A57162E54BAB(0f);
				func_202(0, 1, 1, 0, 0, 0);
				if (func_122() == 1)
				{
					iVar2 = func_45(24);
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (!unk_0x437347B10A200C4B(iVar2, 0))
						{
							func_120(func_210(1), iVar2, &(Global_98148[1]), &(Global_98451[1]), &(Global_98461[1]), &(Global_98443[1]), &(Global_4270058[1]), 0);
							func_25(iVar2, -25,02f, -1467,714f, 29,7815f, 275,6534f, 24, 0);
							unk_0x536F1BE96C726C4B(-867,91f, 158,22f, 63,9f, 5f, 1, 0, 0, false);
						}
					}
				}
				if (unk_0xC844350D5D58C99A(func_210(1)))
				{
					Local_3107 = func_210(1);
					iLocal_3357[1] = Local_3107;
					unk_0xEBA53F35D0085654(&Local_3107);
				}
				func_123(&Local_3267, 1, 1);
				*iParam0++;
			}
			break;
		
		case 3:
			func_119(1, 1);
			*iParam0++;
			break;
		
		case 4:
			if (Global_76882 == 1)
			{
				*iParam0++;
			}
			break;
		
		case 5:
			if (!func_915(0))
			{
				return 1;
			}
			else if (Global_76882 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_119(int iParam0, int iParam1)
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

void func_120(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	uParam2->f_97 = 0;
	iVar0 = 145;
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		iVar0 = func_17(iParam0);
		if (iVar0 > 3)
		{
			if (unk_0x8CD06866876216F2())
			{
			}
			return;
		}
		if (unk_0x30F813723591D02E(iParam1, "GetawayVehicleValid"))
		{
			if (unk_0xB2C7CF65CF9B897C(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_111638.f_9080.f_99.f_58[45] || Global_111638.f_9080.f_99.f_58[12]) || Global_111638.f_9080.f_99.f_58[34])
				{
					*uParam5 = 0;
					Global_98447[iVar0] = 0;
					return;
				}
			}
		}
		if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_98447[iVar0] = iParam1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			iParam1 = unk_0x6937EA2286828455(iParam0, 0);
			*uParam5 = 2;
			Global_98447[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_75441.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_98447[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!unk_0x437347B10A200C4B(Global_98447[iVar0], 0))
			{
				if (!func_43(Global_98447[iVar0], iVar0, 0) || unk_0xC42A92762C58E1B9(iParam0, Global_98447[iVar0], 0))
				{
					vVar2 = { unk_0x68F4C0EC296D3901(iParam0, true) };
					vVar5 = { unk_0x68F4C0EC296D3901(Global_98447[iVar0], true) };
					if (func_121(iParam0, Global_98447[iVar0], 0))
					{
						if (vdist2(vVar2, vVar5) < 22500f)
						{
							*uParam3 = { vVar5 };
							*uParam4 = unk_0xD9522BA9E27E1349(Global_98447[iVar0]);
							*uParam5 = 1;
							Global_98447[iVar0] = iParam1;
							if (vdist2(vVar2, vVar5) < (1,5f * 1,5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_98447[iVar0] = 0;
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		*uParam2 = unk_0x134B62B726CEC8E6(iParam1);
		if (unk_0x565509D116400807(iParam1, &iVar9))
		{
			uParam2->f_1 = unk_0x134B62B726CEC8E6(iVar9);
		}
		uParam2->f_2 = unk_0xA471721ED5268046(iParam1);
		uParam2->f_3 = unk_0x7F6DC62EA9922664(iParam1);
		uParam2->f_4 = unk_0x418D2B281455AA64(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			unk_0x9412F17E127D9759(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!unk_0xA7082C42B8809BF2(*uParam2))
		{
			uParam2->f_10 = 1;
			unk_0xD00EA977553939A7(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), unk_0x7888A5D2621AAF2D(iParam1), 16);
		uParam2->f_26 = unk_0x4EB64970EC291A00(iParam1);
		uParam2->f_88 = unk_0x616632A7E7824A9A(iParam1);
		unk_0x4D842A28A29F18F6(iParam1, &(uParam2->f_84), &(uParam2->f_85), &(uParam2->f_86));
		uParam2->f_87 = unk_0x214BEAD64D777E8F(iParam1);
		unk_0xE04A80C505823410(iParam1, &(uParam2->f_93), &(uParam2->f_94), &(uParam2->f_95));
		if (unk_0x812A93B166D97C60(iParam1, 2))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 28);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 28);
		}
		if (unk_0x812A93B166D97C60(iParam1, 3))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 29);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 29);
		}
		if (unk_0x812A93B166D97C60(iParam1, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 30);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 30);
		}
		if (unk_0x812A93B166D97C60(iParam1, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam2->f_92), 31);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam2->f_92), 31);
		}
		uParam2->f_89 = unk_0xF22DC2D0CA24A151(iParam1);
		uParam2->f_90 = unk_0x8EF9B42D5496EC5A(iParam1);
		iVar8 = 0;
		while (iVar8 < 12)
		{
			uParam2->f_11[iVar8] = unk_0xDD62D560CFE11A27(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (unk_0x587993B327460A82(iParam1, 0))
		{
			iVar10 = unk_0x74A7D92E3874B5C7(iParam1);
			if (iVar10 == 0 || iVar10 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			uParam2->f_25 = unk_0xFC21F7E0F4D92523();
		}
		func_70(&iParam1, &(uParam2->f_31), &(uParam2->f_81));
		uParam2->f_96 = unk_0x800653D55FA8A604(iParam1);
		uParam2->f_97 = func_41(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_111638.f_32744.f_69[0].f_66 == unk_0x134B62B726CEC8E6(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_111638.f_32744.f_69[1].f_66 == unk_0x134B62B726CEC8E6(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_111638.f_32744.f_69[2].f_66 == unk_0x134B62B726CEC8E6(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar8 = 0;
		while (iVar8 < uParam2->f_11)
		{
			uParam2->f_11[iVar8] = 0;
			iVar8++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_96 = 0f;
	}
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC42A92762C58E1B9(iParam0, iParam1, iParam2))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam1);
		if (unk_0xA7082C42B8809BF2(iVar0) || (iVar0 == 771711535 || iVar0 == -1066334226))
		{
			if (unk_0x70EED0761B82965E(iParam1))
			{
				return 0;
			}
			return 1;
		}
		if ((unk_0xC41A9202669A24C4(iVar0) || unk_0xAFB8495D36825275(iVar0)) || iVar0 == -150975354)
		{
			if (unk_0xE934758D273C899A(iParam1))
			{
				return 0;
			}
			return 1;
		}
		return 1;
	}
	return 0;
}

int func_122()
{
	return Global_102203;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (!unk_0xDF1306B443CD3D15(*iParam0, 0) || unk_0x437347B10A200C4B(*iParam0, 0))
				{
					unk_0x78CCB85A0DC35709(*iParam0);
					unk_0x7AA3AFA47C4179D1(*iParam0);
					unk_0x06FF977AA95DCCE3(*iParam0, 0);
					unk_0x046C362CF15F1935(iParam0);
				}
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
				{
					unk_0x142CC44DB769B57E(&(iParam0->f_1));
				}
			}
			else if (iParam2 == 0)
			{
				if (!unk_0x437347B10A200C4B(*iParam0, 0))
				{
					unk_0x78CCB85A0DC35709(*iParam0);
					unk_0x7AA3AFA47C4179D1(*iParam0);
					unk_0x06FF977AA95DCCE3(*iParam0, 0);
					unk_0x046C362CF15F1935(iParam0);
				}
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
				{
					unk_0x142CC44DB769B57E(&(iParam0->f_1));
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0))
			{
				if (unk_0x437347B10A200C4B(*iParam0, 0) || !unk_0x437347B10A200C4B(*iParam0, 0))
				{
					unk_0x78CCB85A0DC35709(*iParam0);
					unk_0x7AA3AFA47C4179D1(*iParam0);
					unk_0x06FF977AA95DCCE3(*iParam0, 0);
					unk_0xA954465BA6FDEFE2(iParam0);
				}
			}
		}
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_11 = 0;
		iParam0->f_12 = 0;
		iParam0->f_13 = 0;
		iParam0->f_17 = { 0f, 0f, 0f };
		iParam0->f_20 = 0f;
		iParam0->f_21 = 0f;
	}
}

int func_124(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!unk_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && (*iParam0)[iParam0->f_7] != unk_0x16F2683693E537C9())
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
			if ((unk_0x869EFD0BC0868856((*iParam0)[iParam0->f_7]) && !unk_0x4E861BC5B1EDA7BD((*iParam0)[iParam0->f_7])) && !unk_0x81A5359F25512A04((*iParam0)[iParam0->f_7]))
			{
				unk_0x327AAEE25F323797((*iParam0)[iParam0->f_7]);
			}
			else
			{
				unk_0xA3BF0AA5A2608191((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = unk_0x16F2683693E537C9();
		iVar1 = func_13();
		if (!iParam0->f_23)
		{
			func_176(iVar0, 0);
		}
		func_174(iVar1, &iVar0);
		unk_0x4E885A246A9D983A(iVar0, 32, true);
		unk_0x4E885A246A9D983A(iVar0, 250, true);
		iVar2 = func_173(iParam0->f_7);
		func_176((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((to_float(unk_0x7F6DC62EA9922664((*iParam0)[iParam0->f_7])) - 100f) / (to_float(unk_0x65BC0B7172CA52DD((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_17(unk_0x16F2683693E537C9()))
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
		if (func_16(func_13()))
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
			{
				unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
			}
		}
		unk_0xA9B99C3482AC0D20(unk_0xD803B885F5E47A62(), (*iParam0)[iParam0->f_7], bParam2, 0);
		unk_0x3584F71E5CA29322(3);
		unk_0x3584F71E5CA29322(13);
		if (iParam3 & 1 != 0)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 210, false);
		}
		if (func_170(0) || func_170(3))
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
		iParam0->f_5 = func_169(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_169(iVar2);
		iParam0->f_7 = 4;
		iVar22 = unk_0x16F2683693E537C9();
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
		func_168(iVar22);
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
				func_168(iVar0);
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
		func_166(unk_0x16F2683693E537C9());
		func_165();
		func_164(iVar2);
		func_155();
		func_149(iVar2);
		func_132(func_147(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 145, 0));
		unk_0x324CFDE7809E2EC2(unk_0xD803B885F5E47A62());
		unk_0x7980D72D61BEF4D5(unk_0x16F2683693E537C9(), false);
		unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), func_131(67));
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0xE21702DBF1967A40(unk_0xD803B885F5E47A62(), func_131(68));
		}
		func_128(iVar2, &iVar22);
		if (((func_15(0) || func_15(3)) || func_15(2)) || func_15(4))
		{
			unk_0x4E885A246A9D983A(iVar22, 32, false);
			unk_0x4E885A246A9D983A(iVar22, 250, false);
		}
		else
		{
			unk_0x4E885A246A9D983A(iVar22, 32, true);
			unk_0x4E885A246A9D983A(iVar22, 250, true);
		}
		if (!func_127())
		{
			func_125();
		}
		Global_95663 = 0;
		return 1;
	}
	else
	{
		if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
		}
		if (unk_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]))
		{
		}
		if (unk_0x16F2683693E537C9() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_125()
{
	if (Global_96056)
	{
		func_14();
		unk_0x9BF51DDC898CF6FE(func_126(Global_111638.f_2358.f_539.f_4321));
	}
	else
	{
		unk_0x9BF51DDC898CF6FE("");
	}
}

char* func_126(int iParam0)
{
	iParam0 = iParam0;
	return "";
}

bool func_127()
{
	return Global_22209;
}

void func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_129(4, *iParam1);
			func_129(7, *iParam1);
			func_129(8, *iParam1);
			func_129(11, *iParam1);
			break;
		
		case 1:
			if (Global_111638.f_9080.f_330[2])
			{
				func_129(4, *iParam1);
			}
			func_129(7, *iParam1);
			func_129(8, *iParam1);
			func_129(11, *iParam1);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_129(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_330[20])
			{
				func_129(4, *iParam1);
			}
			func_129(7, *iParam1);
			func_129(8, *iParam1);
			func_129(11, *iParam1);
			break;
	}
}

void func_129(int iParam0, int iParam1)
{
	if (!unk_0xC844350D5D58C99A(iParam1))
	{
		return;
	}
	if (func_130(iParam0, iParam1))
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

int func_130(int iParam0, int iParam1)
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

int func_131(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_132(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(Global_37218[(38 / 32)]), (38 % 32));
			func_133(38, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(41 / 32)]), (41 % 32));
			func_133(41, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(43 / 32)]), (43 % 32));
			func_133(43, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(42 / 32)]), (42 % 32));
			func_133(42, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(44 / 32)]), (44 % 32));
			func_133(44, 0);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_133(51, 0);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(Global_37218[(51 / 32)]), (51 % 32));
			func_133(51, 0);
			break;
		
		case 3:
			unk_0x5D96D8530B3D0904(&(Global_37218[(53 / 32)]), (53 % 32));
			func_133(53, 0);
			break;
		
		case 4:
			unk_0x5D96D8530B3D0904(&(Global_37218[(81 / 32)]), (81 % 32));
			func_133(81, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(82 / 32)]), (82 % 32));
			func_133(82, 0);
			break;
		
		case 5:
			unk_0x5D96D8530B3D0904(&(Global_37218[(47 / 32)]), (47 % 32));
			func_133(47, 0);
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_133(50, 0);
			break;
		
		case 6:
			unk_0x5D96D8530B3D0904(&(Global_37218[(50 / 32)]), (50 % 32));
			func_133(50, 0);
			break;
	}
}

void func_133(int iParam0, int iParam1)
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
			func_135(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_134(iParam0);
			}
		}
	}
}

void func_134(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_135(int iParam0)
{
	if (!func_144())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_143(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_140(iParam0, &Var0);
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
			iVar9 = func_137(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_15(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 1) && unk_0x8A22C4C08282BF26(92439941) == 0)
	{
		if (func_136())
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
		func_134(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

int func_136()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		return 0;
	}
	switch (func_13())
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

int func_137(int iParam0)
{
	iVar0 = func_13();
	if (func_138(iParam0))
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
		if (func_16(iVar0))
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
			if (func_16(iVar0))
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
			if (func_16(iVar0))
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
			if (func_16(iVar0))
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
				if (func_16(iVar0))
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
				if (func_16(iVar0))
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
			if (func_16(iVar0))
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

int func_138(int iParam0)
{
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_139(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1)));
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

int func_139(int iParam0)
{
	return iParam0;
}

void func_140(int iParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_46();
	iVar1 = func_142(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_141(iParam0))
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
			if (func_141(iParam0))
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
			if (func_141(iParam0))
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
			if (func_141(iParam0))
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
			if (!func_141(iParam0))
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
			if (!func_141(iParam0))
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
				if (!func_141(iParam0))
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
				if (!func_141(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_141(iParam0) && unk_0x8A22C4C08282BF26(Global_89532[26].f_6) == 0)
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
			if (!func_141(iParam0))
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
			if (!func_141(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_141(iParam0))
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
			if (!func_141(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_141(iParam0))
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
			if (!func_141(iParam0))
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
				if (!func_141(iParam0))
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
				if (!func_141(iParam0))
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
				if (!func_141(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_141(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_141(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_141(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
	}
}

bool func_141(int iParam0)
{
	Var0 = { func_143(iParam0) };
	iVar7 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_142(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

struct<7> func_143(int iParam0)
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

int func_144()
{
	if ((func_146() == -1 || func_146() == 999) && !func_145() == 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	return Global_30769;
}

int func_146()
{
	return Global_30768;
}

int func_147(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_148(iVar0) || iParam4 == 0)
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

bool func_148(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

void func_149(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_150(iParam0, iVar0);
		iVar0++;
	}
}

void func_150(int iParam0, int iParam1)
{
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_154(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_151(iVar3, -1, 0);
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

int func_151(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_152(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_152(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_153();
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

int func_153()
{
	return Global_1312745;
}

void func_154(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_155()
{
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || !func_16(func_13())) || !func_161())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_157(unk_0x16F2683693E537C9(), &Var0, 1, -1);
	func_156(1306, Var0[0], -1, 1);
	func_156(1307, Var0[1], -1, 1);
	func_156(1308, Var0[2], -1, 1);
	func_156(1309, Var0[3], -1, 1);
	func_156(1310, Var0[4], -1, 1);
	func_156(1311, Var0[5], -1, 1);
	func_156(1312, Var0[6], -1, 1);
	func_156(1313, Var0[7], -1, 1);
	func_156(1314, Var0[8], -1, 1);
	func_156(1315, Var0[9], -1, 1);
	func_156(1316, Var0[10], -1, 1);
	func_156(1317, Var0[11], -1, 1);
	func_156(1318, Var0.f_13[0], -1, 1);
	func_156(1319, Var0.f_13[1], -1, 1);
	func_156(1320, Var0.f_13[2], -1, 1);
	func_156(1321, Var0.f_13[3], -1, 1);
	func_156(1322, Var0.f_13[4], -1, 1);
	func_156(1323, Var0.f_13[5], -1, 1);
	func_156(1324, Var0.f_13[6], -1, 1);
	func_156(1325, Var0.f_13[7], -1, 1);
	func_156(1326, Var0.f_13[8], -1, 1);
	func_156(1327, Var0.f_13[9], -1, 1);
	func_156(1328, Var0.f_13[10], -1, 1);
	func_156(1329, Var0.f_13[11], -1, 1);
	func_156(1330, Var0.f_26[0], -1, 1);
	func_156(1331, Var0.f_26[1], -1, 1);
	func_156(1332, Var0.f_26[2], -1, 1);
	func_156(1333, Var0.f_26[3], -1, 1);
	func_156(1334, Var0.f_26[4], -1, 1);
	func_156(1335, Var0.f_26[5], -1, 1);
	func_156(1336, Var0.f_26[6], -1, 1);
	func_156(1337, Var0.f_26[7], -1, 1);
	func_156(1338, Var0.f_26[8], -1, 1);
	func_156(1339, Var0.f_26[9], -1, 1);
	func_156(1340, Var0.f_26[10], -1, 1);
	func_156(1341, Var0.f_26[11], -1, 1);
	func_156(1342, Var0.f_39[0], -1, 1);
	func_156(1343, Var0.f_39[1], -1, 1);
	func_156(1344, Var0.f_39[2], -1, 1);
	func_156(1345, Var0.f_39[3], -1, 1);
	func_156(1346, Var0.f_39[4], -1, 1);
	func_156(1347, Var0.f_39[5], -1, 1);
	func_156(1348, Var0.f_39[6], -1, 1);
	func_156(1349, Var0.f_39[7], -1, 1);
	func_156(1350, Var0.f_39[8], -1, 1);
	func_156(1351, Var0.f_49[0], -1, 1);
	func_156(1352, Var0.f_49[1], -1, 1);
	func_156(1353, Var0.f_49[2], -1, 1);
	func_156(1354, Var0.f_49[3], -1, 1);
	func_156(1355, Var0.f_49[4], -1, 1);
	func_156(1356, Var0.f_49[5], -1, 1);
	func_156(1357, Var0.f_49[6], -1, 1);
	func_156(1358, Var0.f_49[7], -1, 1);
	func_156(1359, Var0.f_49[8], -1, 1);
	func_156(1360, func_13(), -1, 1);
	unk_0xD8B681091EBE4064(-1373240669, 1, 1);
	Global_111638.f_2358.f_539.f_4315 = 1;
}

var func_156(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_153();
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

void func_157(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_17(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_160(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_159(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_16(iVar0))
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
			if (func_158(161, iParam3))
			{
				uParam1->f_59 = func_151(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_151(752, iParam3, 0);
			}
			uParam1->f_60 = func_151(753, iParam3, 0);
			uParam1->f_61 = func_151(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_158(161, iParam3))
			{
				uParam1->f_59 = func_151(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_151(752, iParam3, 0);
			}
		}
	}
}

int func_158(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_152(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_159(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_17(iParam0);
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

void func_160(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_17(iParam0);
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

int func_161()
{
	if (func_163() && func_162(0))
	{
		return 1;
	}
	return 0;
}

var func_162(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_163()
{
	return func_162(func_153() + 1);
}

void func_164(int iParam0)
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

void func_165()
{
	func_14();
	iVar0 = unk_0x023428EEA3027652();
	if (unk_0xE4EDC4B0E92C078B(iVar0))
	{
		iVar1 = Global_111638.f_2358.f_539.f_4321;
		if (func_15(14))
		{
			iVar1 = func_17(unk_0x16F2683693E537C9());
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

void func_166(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_167(iVar0);
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

int func_167(int iParam0)
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

void func_168(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
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

int func_169(int iParam0)
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

int func_170(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_171(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_171(int iParam0)
{
	return func_172(iParam0, Global_41431);
}

int func_172(int iParam0, int iParam1)
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
	return 145;
}

void func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_175(4, *iParam1, 0);
			func_175(7, *iParam1, 0);
			func_175(8, *iParam1, 0);
			func_175(11, *iParam1, 0);
			break;
		
		case 1:
			func_175(4, *iParam1, 0);
			func_175(7, *iParam1, 0);
			func_175(8, *iParam1, 0);
			func_175(11, *iParam1, 0);
			if (Global_111638.f_9080.f_99.f_58[126])
			{
				func_175(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_175(4, *iParam1, 0);
			func_175(7, *iParam1, 0);
			func_175(8, *iParam1, 0);
			func_175(11, *iParam1, 0);
			break;
	}
}

void func_175(int iParam0, int iParam1, bool bParam2)
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

void func_176(int iParam0, bool bParam1)
{
	func_188(iParam0);
	func_182(iParam0, bParam1);
	func_181(iParam0);
	func_180(iParam0);
	func_179(iParam0);
	func_178(iParam0);
	func_177(iParam0);
}

void func_177(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			Global_111638.f_2358.f_539.f_2328[iVar0] = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
		}
	}
}

void func_178(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2318[iVar0] = { unk_0x56E9E0FD5ACCD35D(iParam0) };
	}
}

void func_179(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
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

void func_180(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_181(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_290[iVar0] = (((to_float(unk_0x7F6DC62EA9922664(iParam0)) - 100f) / (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) * 100f);
	}
}

void func_182(int iParam0, bool bParam1)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_183(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
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

void func_183(int iParam0, var uParam1)
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
			iVar3 = func_167(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_167(iVar0));
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
					iVar2 = func_186(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_186(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar9, &Var11) && !func_185(Var11.f_1)) && iVar72 < 51)
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
							if (!func_184(Var50.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var50.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar73);
								}
								iVar73 = (iVar73 + 1);
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

int func_184(int iParam0)
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

int func_185(int iParam0)
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

int func_186(int iParam0, int iParam1)
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
				iVar1 = func_187(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var43))
						{
							if (!func_184(Var43.f_3))
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

int func_187(int iParam0, var uParam1)
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

void func_188(int iParam0)
{
	iVar0 = func_17(iParam0);
	if (func_16(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_2296[iVar0] = func_46();
	}
}

int func_189(int iParam0, int iParam1)
{
	if (!iParam0->f_39)
	{
		iParam0->f_7 = 4;
		iParam0->f_39 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_34[iParam1] == 2;
		if (func_169(func_13()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[iParam1] != 0) || ((func_193(iParam1) && func_190(iParam1)) && !iParam0->f_18[iParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!unk_0xEB6A8945D1AC98A1((*iParam0)[iParam1]) || bVar0)
					{
						if (iParam0->f_34[iParam1] != 1 && iParam0->f_34[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (unk_0x8CD06866876216F2() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)) && !unk_0xEAE0D21A50E6C7F4(Global_96222.f_47, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27], 1) && !Global_3) && !func_915(0)))
			{
				if (iParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	iParam0->f_39 = 0;
	return 0;
}

int func_190(int iParam0)
{
	if (Global_111638.f_9080 || Global_3)
	{
		if (!Global_76622 || (Global_76622 && iParam0 != func_169(func_192())))
		{
			if (!func_191(func_173(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_191(int iParam0)
{
	if (func_16(iParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_915(0))
		{
			return Global_111638.f_2358.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_192()
{
	return Global_111638.f_2358.f_539.f_4323;
}

int func_193(int iParam0)
{
	if ((Global_111638.f_9080 || Global_3) || func_915(0))
	{
		if (!Global_76622 || (Global_76622 && iParam0 != func_169(func_192())))
		{
			if (((iParam0 == 0 && !func_131(115)) || (iParam0 == 1 && !func_131(116))) || (iParam0 == 2 && !func_131(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_194(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = { func_196(vParam1 - vParam4) };
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
		if (((((((((((((((func_195(vVar18[0], vVar18[1], vVar6, vVar9) || func_195(vVar18[0], vVar18[1], vVar9, vVar15)) || func_195(vVar18[0], vVar18[1], vVar12, vVar15)) || func_195(vVar18[0], vVar18[1], vVar6, vVar12)) || func_195(vVar18[1], vVar18[3], vVar6, vVar9)) || func_195(vVar18[1], vVar18[3], vVar9, vVar15)) || func_195(vVar18[1], vVar18[3], vVar12, vVar15)) || func_195(vVar18[1], vVar18[3], vVar6, vVar12)) || func_195(vVar18[3], vVar18[2], vVar6, vVar9)) || func_195(vVar18[3], vVar18[2], vVar9, vVar15)) || func_195(vVar18[3], vVar18[2], vVar12, vVar15)) || func_195(vVar18[3], vVar18[2], vVar6, vVar12)) || func_195(vVar18[2], vVar18[0], vVar6, vVar9)) || func_195(vVar18[2], vVar18[0], vVar9, vVar15)) || func_195(vVar18[2], vVar18[0], vVar12, vVar15)) || func_195(vVar18[2], vVar18[0], vVar6, vVar12))
		{
			return 1;
		}
	}
	return 0;
}

int func_195(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_196(vector3 vParam0)
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

float func_197(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_198(int iParam0)
{
	return func_63(iParam0, 0);
}

void func_199(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				unk_0x98B861C98966897A(iParam0);
				unk_0xD458AC1C1D29C3B4(iParam0, unk_0x7F6DC62EA9922664(iParam0) + 200, 0);
				unk_0x5DAB50E08C3C504A(iParam0, (unk_0x6EE94F60DA2A2273(iParam0) + 200f));
				unk_0xDC544F7DF5E5164D(iParam0, (unk_0xD96C5EC6FCB061BA(iParam0) + 200f));
				unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(iParam0, true), 5f);
				unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(iParam0, true), 2,5f, 1, 0, 0, false);
			}
		}
	}
}

void func_200()
{
	Global_19671 = 0;
	func_201();
}

void func_201()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_202(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_209(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_83())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_208(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_209(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_208(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_206(unk_0xD803B885F5E47A62())) && !func_204(unk_0xD803B885F5E47A62(), 0)) && !func_203()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_206(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_203()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

bool func_204(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_205(-1, 0) == 8;
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

int func_205(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_153();
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

int func_206(int iParam0)
{
	if (func_204(iParam0, 0))
	{
		return 1;
	}
	if (func_207())
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

bool func_207()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_208(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_209(int iParam0)
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

int func_210(int iParam0)
{
	if (func_13() == iParam0)
	{
		return unk_0x16F2683693E537C9();
	}
	return iLocal_3357[func_169(iParam0)];
}

int func_211(char* sParam0, int iParam1)
{
	if (func_213(sParam0))
	{
		return 1;
	}
	else
	{
		if (func_212())
		{
			unk_0x5C8D148FC238F38A();
		}
		if (iParam1 == 1)
		{
			unk_0xAE1670DD12E839C3(sParam0, 8);
		}
		else
		{
			unk_0x8E590B419F1E5182(sParam0, iParam1, 8);
		}
	}
	return 0;
}

bool func_212()
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

bool func_213(char* sParam0)
{
	bVar0 = unk_0xA0F4292EA950943D(sParam0);
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

int func_214(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Local_3435.f_13), 20);
	func_387();
	func_386();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
	}
	func_306(&iLocal_3751);
	if (iLocal_3353 == 1)
	{
		if (iLocal_3755 == 1)
		{
			if (!func_127())
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iLocal_3353 = 0;
				}
				else if (func_305(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
				{
					if (func_304(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), -1))
					{
						iLocal_3353 = 0;
					}
				}
			}
		}
		if (iLocal_3354 == 0)
		{
			func_303(&iLocal_3357, 1, 1);
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0)
		{
			if (!func_98("FAM3_HSWITCH2"))
			{
				if (iLocal_3356 == 0)
				{
					iLocal_3356 = unk_0x1C0640BA9A7327B3();
				}
				else if (func_108(30000, iLocal_3356))
				{
					func_302("FAM3_HSWITCH", 12500);
					func_94("FAM3_HSWITCH2", 1);
				}
			}
		}
	}
	func_294(&iLocal_3700);
	func_293(&Local_3082);
	func_293(&Local_3086);
	func_293(&cLocal_3090);
	func_293(&cLocal_3094);
	func_293(&Local_3098);
	if (!unk_0x83A8177D302E1A7E(iLocal_3699))
	{
		unk_0x9E5E60D8C63FD9D1();
		if (unk_0x25F7A4D42AF2AB93())
		{
			iLocal_3699 = unk_0xB055A4268B938F30("ent_ray_fam3_dust_settle", -1016f, 642f, 141f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
		}
	}
	switch (func_13())
	{
		case 0:
			func_282(func_210(1), &Local_3107, unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), iLocal_3754);
			if (!unk_0xE4EDC4B0E92C078B(Local_3435.f_5) && !unk_0xE4EDC4B0E92C078B(Local_3435.f_1[0]))
			{
				if (Local_3107.f_15 > 50f)
				{
					if (!unk_0xE4EDC4B0E92C078B(Local_3107.f_1))
					{
						Local_3107.f_1 = func_281(func_210(1), 1, 0);
					}
					if (!func_98(&cLocal_3090))
					{
						func_279(&cLocal_3090, 7500, 1);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(Local_3107.f_1))
				{
					if (Local_3107.f_15 <= (50f / 3f))
					{
						if (func_278(&cLocal_3090, 0, 0))
						{
							unk_0x790015DC92C918E2();
						}
						unk_0x142CC44DB769B57E(&(Local_3107.f_1));
					}
				}
			}
			if (iLocal_3754 == 1)
			{
				if (!unk_0x562F77A7F33D2E46("FAMILY_3_ESCAPE_AS_MICHAEL"))
				{
					unk_0x8BC9595FD2792B5D("FAMILY_3_ESCAPE_AS_MICHAEL");
				}
				if (unk_0x562F77A7F33D2E46("FAMILY_3_ESCAPE_AS_FRANKLIN"))
				{
					unk_0x8910D3D58E0132B8("FAMILY_3_ESCAPE_AS_FRANKLIN");
				}
			}
			break;
		
		case 1:
			func_282(func_210(0), &Local_3107, unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), iLocal_3754);
			if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5) && !unk_0xE4EDC4B0E92C078B(Local_3435.f_1[0]))
			{
				if (Local_3107.f_15 > 50f)
				{
					if (!unk_0xE4EDC4B0E92C078B(Local_3125.f_1))
					{
						Local_3125.f_1 = func_281(func_210(0), 1, 0);
					}
					if (!func_98(&cLocal_3094))
					{
						func_279(&cLocal_3094, 7500, 1);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(Local_3125.f_1))
				{
					if (Local_3125.f_15 <= (50f / 3f))
					{
						if (func_278(&cLocal_3094, 0, 0))
						{
							unk_0x790015DC92C918E2();
						}
						unk_0x142CC44DB769B57E(&(Local_3125.f_1));
					}
				}
			}
			if (iLocal_3754 == 1)
			{
				if (!unk_0x562F77A7F33D2E46("FAMILY_3_ESCAPE_AS_FRANKLIN"))
				{
					unk_0x8BC9595FD2792B5D("FAMILY_3_ESCAPE_AS_FRANKLIN");
				}
				if (unk_0x562F77A7F33D2E46("FAMILY_3_ESCAPE_AS_MICHAEL"))
				{
					unk_0x8910D3D58E0132B8("FAMILY_3_ESCAPE_AS_MICHAEL");
				}
			}
			break;
	}
	if (iLocal_3755 == 1)
	{
		if (func_277() || func_276())
		{
			if ((unk_0xA0F4292EA950943D("family_3_ext") || unk_0x62A1F4500E8F07E0()) || unk_0x39B7A3CCD2467CAB())
			{
				unk_0x5C8D148FC238F38A();
			}
		}
		else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_3052, true) < 100f)
		{
			unk_0x523BCC9DC80CD82F(-808831384);
			unk_0xAE1670DD12E839C3("family_3_ext", 8);
			if (unk_0x75EECC9B0572F772())
			{
				if (!unk_0xEB6A8945D1AC98A1(func_210(0)))
				{
					unk_0xA0A8D79ACBBD1CB8("Michael", func_210(0), 0);
				}
				if (!unk_0xEB6A8945D1AC98A1(func_210(1)))
				{
					unk_0xA0A8D79ACBBD1CB8("Franklin", func_210(1), 0);
				}
				iLocal_3734 = 1;
			}
		}
		else if ((unk_0xA0F4292EA950943D("family_3_ext") || unk_0x62A1F4500E8F07E0()) || unk_0x39B7A3CCD2467CAB())
		{
			unk_0x5C8D148FC238F38A();
			unk_0x71199B01895C6202(-808831384);
			iLocal_3734 = 0;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (iLocal_3754 == 0)
			{
				if (iLocal_3708 == 1)
				{
					if (iLocal_3755 == 0)
					{
						if (func_275(&Local_3435, vLocal_3052, -824,81f, 185,38f, 69,95f, -820,61f, 179,79f, 73,64f, 8,5f, 1, func_210(1), &Local_3082, &cLocal_3090, 0, 1, 1, -1))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (unk_0xF79A7BCA9E38BBBC(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
								{
									func_2();
									func_89();
									iLocal_3737 = 1;
									settimera(0);
									iLocal_3755 = 1;
									*iParam0++;
								}
							}
							else
							{
								func_2();
								func_89();
								iLocal_3737 = 1;
								settimera(0);
								iLocal_3755 = 1;
								*iParam0++;
							}
						}
					}
					else
					{
						if (unk_0x562F77A7F33D2E46("FAMILY_3_ESCAPE_AS_MICHAEL"))
						{
							unk_0x8910D3D58E0132B8("FAMILY_3_ESCAPE_AS_MICHAEL");
						}
						if (unk_0x562F77A7F33D2E46("FAMILY_3_ESCAPE_AS_FRANKLIN"))
						{
							unk_0x8910D3D58E0132B8("FAMILY_3_ESCAPE_AS_FRANKLIN");
						}
						if (!unk_0x562F77A7F33D2E46("FAMILY_3_DRIVE_HOME"))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								unk_0x8BC9595FD2792B5D("FAMILY_3_DRIVE_HOME");
							}
						}
						if (unk_0xE4EDC4B0E92C078B(Local_3107.f_1))
						{
							unk_0x142CC44DB769B57E(&(Local_3107.f_1));
						}
						if (unk_0xE4EDC4B0E92C078B(Local_3125.f_1))
						{
							unk_0x142CC44DB769B57E(&(Local_3125.f_1));
						}
						if (func_274("FAM3_HSWITCH"))
						{
							unk_0xA37A90C62806D848(1);
						}
						if (!func_98("FAM3_HSTAT1"))
						{
							if (func_98("FAM3_STATA") || func_98("FAM3_STATB"))
							{
								if (iLocal_3738 == 1)
								{
									if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
									{
										func_302("FAM3_HSTAT1", 12500);
										func_94("FAM3_HSTAT1", 1);
									}
								}
							}
						}
						else if (!func_98("FAM3_HSTAT2"))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (!func_274("FAM3_HSTAT1"))
								{
									func_302("FAM3_HSTAT2", 12500);
									func_94("FAM3_HSTAT2", 1);
								}
							}
						}
						switch (func_13())
						{
							case 0:
								func_232(&Local_3435, vLocal_3052, func_273(), 1, func_210(1), &Local_3082, &cLocal_3090, 0, 1, !iLocal_3759, -1);
								break;
							
							case 1:
								func_232(&Local_3435, vLocal_3052, func_273(), 1, func_210(0), &Local_3082, &cLocal_3094, 0, 1, !iLocal_3759, -1);
								break;
						}
						if (iLocal_3759 == 0)
						{
							if (!unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
								{
									if (func_98(&Local_3098))
									{
										iLocal_3759 = 1;
									}
								}
							}
						}
						else if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
						{
							if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
							{
								StringCopy(&Local_3098, "LOSE_WANTED", 16);
								iLocal_3759 = 0;
							}
						}
						if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
						{
							if (func_231(func_210(0), func_210(1)))
							{
								if (unk_0x3D1053F9EB43B7AD(func_210(0), -824,81f, 185,38f, 69,95f, -820,61f, 179,79f, 73,64f, 8,5f, 0, true, 0) && unk_0x3D1053F9EB43B7AD(func_210(1), -824,81f, 185,38f, 69,95f, -820,61f, 179,79f, 73,64f, 8,5f, 0, true, 0))
								{
									if (unk_0xF79A7BCA9E38BBBC(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
									{
										func_225(&Local_3435, 0);
										func_2();
										func_89();
										iLocal_3737 = 1;
										settimera(0);
										*iParam0++;
									}
								}
							}
							else if (unk_0x5A91F08DF773C39D(func_210(0), -823,28f, 180,69f, 71,63f, 8f, 8f, 3f, false, true, 0) && unk_0x5A91F08DF773C39D(func_210(1), -823,28f, 180,69f, 71,63f, 8f, 8f, 3f, false, true, 0))
							{
								if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
								{
									if (unk_0xF79A7BCA9E38BBBC(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
									{
										func_225(&Local_3435, 0);
										func_2();
										func_89();
										iLocal_3737 = 1;
										settimera(0);
										*iParam0++;
									}
								}
								else
								{
									func_225(&Local_3435, 0);
									func_2();
									func_89();
									iLocal_3737 = 1;
									settimera(0);
									*iParam0++;
								}
							}
						}
					}
				}
			}
			else
			{
				if (iLocal_3708 == 1)
				{
					func_225(&Local_3435, 0);
					unk_0x4E885A246A9D983A(func_210(0), 32, false);
					unk_0x4E885A246A9D983A(func_210(1), 32, false);
					iLocal_3708 = 0;
				}
				if (iLocal_3758 == 0)
				{
					if (func_231(func_210(0), func_210(1)))
					{
						if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
						{
							if (func_224(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) != -1)
							{
								if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
								{
									iLocal_3758 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3757 == 0)
				{
					if (iLocal_3753 == 0)
					{
						if (((func_223(unk_0x16F2683693E537C9(), Local_3926[0], 1, 1089470464) || func_223(unk_0x16F2683693E537C9(), Local_3926[1], 1, 1089470464)) || func_223(unk_0x16F2683693E537C9(), Local_3926[0], 1, 1089470464)) || func_223(unk_0x16F2683693E537C9(), Local_3963[1], 1, 1089470464))
						{
							iLocal_3753 = 1;
						}
					}
					if ((func_98("FAM3_GCSGS") || func_98("FAM3_GCSGT")) || iLocal_3753 == 1)
					{
						iLocal_3757 = 1;
					}
				}
				if (!func_98("FAM3_LGOONS"))
				{
					if (func_98("FAM3_GCSFA") || func_98("FAM3_GCSFB"))
					{
						if (!func_220(&Local_3435, 1))
						{
							func_279("FAM3_LGOONS", 7500, 1);
						}
					}
				}
				else if (iLocal_3757 == 1)
				{
					iLocal_3353 = 1;
					if (unk_0x405E212DDE472467(func_210(0), 0))
					{
						iVar0 = unk_0x6937EA2286828455(func_210(0), 1);
						if (unk_0xC844350D5D58C99A(iVar0))
						{
							if ((!unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar0)) && !unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0))) && !unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar0)))
							{
								iLocal_3353 = 0;
							}
						}
					}
					if (unk_0x405E212DDE472467(func_210(1), 0))
					{
						iVar1 = unk_0x6937EA2286828455(func_210(1), 1);
						if (unk_0xC844350D5D58C99A(iVar1))
						{
							if ((!unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar1)) && !unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar1))) && !unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar1)))
							{
								iLocal_3353 = 0;
							}
						}
					}
					if (!func_98("FAM3_HSWITCH"))
					{
						if (iLocal_3353 == 1)
						{
							func_302("FAM3_HSWITCH", 12500);
							func_94("FAM3_HSWITCH", 1);
						}
					}
					else
					{
						if (func_274("FAM3_HSWITCH"))
						{
							if ((func_127() || unk_0x991B1F0980C62628()) || iLocal_3355 == 1)
							{
								unk_0xA37A90C62806D848(1);
							}
						}
						if (!func_98("FAM3_HPASS1"))
						{
							if (func_231(func_210(0), func_210(1)))
							{
								if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
								{
									if (func_224(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) != -1)
									{
										if (!unk_0xFEBC1E4EC9E001F0())
										{
											func_302("FAM3_HPASS1", 12500);
											func_94("FAM3_HPASS1", 1);
										}
									}
								}
							}
						}
						else if (!func_98("FAM3_HPASS2"))
						{
							if (func_231(func_210(0), func_210(1)))
							{
								if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
								{
									if (func_224(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) != -1)
									{
										if (iLocal_3758 == 1)
										{
											if ((((((((unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 324215364, 0) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 2017895192, 0)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 1593441988, 0)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 584646201, 0)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 911657153, 0)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), -1813897027, 0)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), -37975472, 0)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 741814745, 0)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 615608432, 0))
											{
												if (!unk_0xFEBC1E4EC9E001F0())
												{
													func_302(func_219(unk_0x91E3F625EF57450D(0), "FAM3_HPASS3", "FAM3_HPASS2"), 12500);
													func_94("FAM3_HPASS2", 1);
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
			break;
		
		case 1:
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				if (bLocal_3772 == 0)
				{
					if (func_218(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
					{
						bLocal_3772 = true;
					}
				}
				if (func_216(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 2f, 1, 1056964608, 0, 1, 0))
				{
					if ((!unk_0x25037C66EB32B076() || !func_93()) || timera() > 5000)
					{
						func_215();
						unk_0xF82EA857DA10E0CD(&uVar2);
						unk_0xDD353D0E9C789D0E(&uVar2);
						unk_0x75CDA8644CD3B5F5(0, iLocal_3791, 0);
						unk_0x96167B03C5A77156(0, -819,05f, 177,24f, 70,83f, 1f, 60000, 1048576000, 0, 1193033728);
						unk_0x75ABDC5F81978924(uVar2);
						unk_0x78ADC381772E3D54(func_210(0), uVar2);
						unk_0xF82EA857DA10E0CD(&uVar2);
						unk_0xF82EA857DA10E0CD(&uVar2);
						unk_0xDD353D0E9C789D0E(&uVar2);
						unk_0x75CDA8644CD3B5F5(0, iLocal_3792, 0);
						unk_0x96167B03C5A77156(0, -819,05f, 177,24f, 70,83f, 1f, 60000, 1048576000, 0, 1193033728);
						unk_0x75ABDC5F81978924(uVar2);
						unk_0x78ADC381772E3D54(func_210(1), uVar2);
						unk_0xF82EA857DA10E0CD(&uVar2);
						iLocal_3799 = 1;
						*iParam0++;
					}
				}
			}
			else if ((!unk_0x25037C66EB32B076() || !func_93()) || timera() > 5000)
			{
				*iParam0++;
			}
			break;
		
		case 2:
			if (!unk_0x405E212DDE472467(func_210(0), 0) && !unk_0x405E212DDE472467(func_210(1), 0))
			{
				if ((!unk_0x25037C66EB32B076() || !func_93()) || timera() > 5000)
				{
					if (iLocal_3734 == 1)
					{
						unk_0x06FF977AA95DCCE3(func_210(0), 0);
						unk_0x06FF977AA95DCCE3(func_210(1), 0);
						unk_0x8910D3D58E0132B8("FAMILY_3_DRIVE_HOME");
						if (unk_0x83A8177D302E1A7E(iLocal_3699))
						{
							unk_0xB2C7809F92540947(iLocal_3699, 0);
						}
						unk_0x29D7581AEF4440C2();
						return 1;
					}
				}
			}
			else if (iLocal_3799 == 0)
			{
				func_215();
				if (unk_0x405E212DDE472467(func_210(0), 0))
				{
					if (unk_0xD1960163A3042274(func_210(0), 242628503) != 1)
					{
						unk_0xF82EA857DA10E0CD(&uVar3);
						unk_0xDD353D0E9C789D0E(&uVar3);
						unk_0x75CDA8644CD3B5F5(0, iLocal_3791, 0);
						unk_0x96167B03C5A77156(0, -819,05f, 177,24f, 70,83f, 1f, 60000, 1048576000, 0, 1193033728);
						unk_0x75ABDC5F81978924(uVar3);
						unk_0x78ADC381772E3D54(func_210(0), uVar3);
						unk_0xF82EA857DA10E0CD(&uVar3);
					}
				}
				if (unk_0x405E212DDE472467(func_210(0), 0))
				{
					if (unk_0xD1960163A3042274(func_210(0), 242628503) != 1)
					{
						unk_0xF82EA857DA10E0CD(&uVar3);
						unk_0xDD353D0E9C789D0E(&uVar3);
						unk_0x75CDA8644CD3B5F5(0, iLocal_3792, 0);
						unk_0x96167B03C5A77156(0, -819,05f, 177,24f, 70,83f, 1f, 60000, 1048576000, 0, 1193033728);
						unk_0x75ABDC5F81978924(uVar3);
						unk_0x78ADC381772E3D54(func_210(1), uVar3);
						unk_0xF82EA857DA10E0CD(&uVar3);
					}
				}
				iLocal_3799 = 1;
			}
			break;
	}
	return 0;
}

void func_215()
{
	iLocal_3791 = 0;
	iLocal_3792 = 250;
	if ((!unk_0xEB6A8945D1AC98A1(func_210(0)) && !unk_0xEB6A8945D1AC98A1(func_210(1))) && func_231(func_210(0), func_210(1)))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(func_210(0));
		if (func_305(func_210(0), iVar0) && func_305(func_210(1), iVar0))
		{
			switch (func_224(func_210(0), iVar0))
			{
				case -1:
					switch (func_224(func_210(1), iVar0))
					{
						case 1:
							iLocal_3791 = 1250;
							iLocal_3792 = 0;
							break;
						
						default:
							iLocal_3791 = 0;
							iLocal_3792 = 250;
							break;
					}
					break;
				
				case 1:
					switch (func_224(func_210(1), iVar0))
					{
						case -1:
							iLocal_3791 = 0;
							iLocal_3792 = 1250;
							break;
						
						default:
							iLocal_3791 = 0;
							iLocal_3792 = 250;
							break;
					}
					break;
				
				default:
					iLocal_3791 = 0;
					iLocal_3792 = 250;
					break;
				}
			}
	}
}

int func_216(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_217(iParam0);
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

void func_217(int iParam0)
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

int func_218(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			vVar0 = { unk_0x698705F356FA8F72(iParam0, 1) };
			if (vVar0.y < -1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_219(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_220(int iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 1;
		}
		if (func_222(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x04E6B3EAA8742BFA())
	{
		if (func_93() && !func_221())
		{
			return 1;
		}
	}
	return 0;
}

int func_221()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0)
{
	iVar1 = unk_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (iParam2 == 1)
			{
				if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam1, true), fParam3, iParam2))
				{
					return 1;
				}
			}
			if (unk_0xB87D13D0C064E9D1(iParam1, iParam0, 0))
			{
				if (unk_0x54648B774DB42A3A(iParam1, 0, 2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
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

void func_225(int iParam0, bool bParam1)
{
	func_226(iParam0, bParam1, 0);
}

void func_226(int iParam0, bool bParam1, bool bParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_230(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1[iVar0]));
		}
		func_229(iVar0, iParam0);
		func_228(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x0674E58A79778E99(&(iParam0->f_13), iVar0);
			unk_0x0674E58A79778E99(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar0]))
		{
			unk_0xA245D14CC59CDD36(iParam0->f_17[iVar0], 1);
			unk_0x7D732AB707BE9152(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x4E885A246A9D983A(iParam0->f_17[iVar0], 32, true);
				unk_0x4E885A246A9D983A(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x4E885A246A9D983A(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0xBFDE4EE64C4BF2D6(iParam0->f_17[iVar0], func_227()) && iParam0->f_17[iVar0] != unk_0x16F2683693E537C9())
				{
					unk_0x0A94A109271BE75A(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 29))
			{
				unk_0xD5EF6A937E06E46F(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 1);
		unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 1);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

var func_227()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_228(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 19);
			break;
	}
}

void func_229(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 16);
			break;
	}
}

void func_230(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_5))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_5));
	}
}

int func_231(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0x405E212DDE472467(iParam0, 0) && unk_0x405E212DDE472467(iParam1, 0))
			{
				iVar0 = unk_0x6937EA2286828455(iParam0, 0);
				iVar1 = unk_0x6937EA2286828455(iParam1, 0);
				if (unk_0xC844350D5D58C99A(iVar0) && unk_0xC844350D5D58C99A(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_232(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_233(iParam0, vParam1, vParam4, bParam7, iParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14);
}

int func_233(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)
{
	return func_234(iParam0, vParam1, vParam4, func_272(), func_272(), bParam7, 1, uParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, func_271(), bParam16, bParam17, func_271(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}

int func_234(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10, bool bParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = uParam15;
	iParam0->f_17[1] = iParam16;
	iParam0->f_17[2] = iParam17;
	iParam0->f_16 = uParam15;
	func_270(iParam0);
	func_269(iParam0);
	func_268();
	if (func_252(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, iParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_251(sParam20);
		func_251(sParam21);
		func_251(sParam22);
		func_251(sParam23);
		if (unk_0x0F1CCD77290EE12F())
		{
			bVar1 = false;
			if (unk_0xDF1306B443CD3D15(iParam18, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam18, 0))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 23))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_13), 23);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_249(iParam0, iParam29))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_251(sParam24);
				func_251(sParam27);
				func_251("MORE_SEATS");
				if (bParam26 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						func_251(sParam19);
					}
					if (unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(iParam0);
					}
					if ((!func_220(iParam0, 1) && !func_248(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_246(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_244(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 0);
						unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						func_251("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_13), 0);
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 1);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 1))
					{
						if (!func_220(iParam0, 1))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_244(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						if (unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							unk_0x142CC44DB769B57E(iParam0);
						}
						iParam0->f_5 = func_243(vVar3, 0);
						if (!iParam31 == -1)
						{
							unk_0xBC8E0A7390523199(iParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_242(iParam0->f_5, iParam0);
						}
					}
					else if (!func_241(vVar3, unk_0xAC14F6E4B17D7835(iParam0->f_5), 0,1f, 0))
					{
						unk_0x2F9282246F89FFD1(iParam0->f_5, vVar3);
						if (bParam35)
						{
							func_242(iParam0->f_5, iParam0);
						}
					}
					if (!func_220(iParam0, 2))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 2))
						{
							func_246(iParam0, sParam19, 0);
							unk_0x5D96D8530B3D0904(&(iParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						bVar6 = true;
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
						unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7);
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vParam7, vParam10, fParam36, 0, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									if (!unk_0xC42A92762C58E1B9(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xC42A92762C58E1B9(iParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xBFDE4EE64C4BF2D6(iParam0->f_17[iVar2], func_227()) || !func_239(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_236(iParam0))
							{
								func_251(sParam19);
								func_251(sParam24);
								func_251(sParam20);
								func_251(sParam21);
								func_251(sParam22);
								func_251(sParam23);
								func_251("LOSE_WANTED");
								func_251("MORE_SEATS");
								func_251(sParam27);
								func_226(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xC844350D5D58C99A(iParam18))
			{
				if ((bParam26 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 22)))
				{
					func_251(sParam24);
					func_251(sParam27);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5) || unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						unk_0x142CC44DB769B57E(iParam0);
						func_251(sParam19);
					}
					if ((!func_220(iParam0, 1) && !func_248(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_246(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_244(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 0);
						unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						func_251("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_13), 0);
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 1);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 1))
					{
						if (!func_220(iParam0, 1))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_244(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
						}
					}
					if (unk_0xDF1306B443CD3D15(iParam18, 0))
					{
						if (!unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
							{
								unk_0x142CC44DB769B57E(&(iParam0->f_5));
								func_251(sParam19);
							}
							*iParam0 = func_235(iParam18, 0, 0);
							unk_0x9D7CDDB4B55142AF(*iParam0, 2);
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
							{
								func_242(*iParam0, iParam0);
							}
						}
						if (!func_220(iParam0, 2))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 3))
							{
								func_246(iParam0, sParam24, 0);
								unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
								unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
							}
							else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
							{
								if (!unk_0x2EBF5002C6B6A06C(sParam27))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
									{
										func_246(iParam0, sParam27, 0);
										unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
								{
									func_246(iParam0, sParam24, 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 23))
								{
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
									{
										func_244(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
				{
					unk_0x142CC44DB769B57E(&(iParam0->f_5));
					func_251(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_220(iParam0, 2))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x09AC81E49EA267F7(0, iVar8);
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar9]))
									{
										func_244(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_246(iParam0, "MORE_SEATS", 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 3))
							{
								func_246(iParam0, sParam24, 0);
								unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
								unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
							{
								if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
								{
									func_246(iParam0, sParam27, 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_220(iParam0, 2))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 3))
						{
							func_246(iParam0, sParam24, 0);
							unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
							unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
						}
						else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
						{
							if (!unk_0x2EBF5002C6B6A06C(sParam27))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
								{
									func_246(iParam0, sParam27, 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
							{
								func_246(iParam0, sParam24, 0);
								unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
		{
			unk_0x0674E58A79778E99(&(iParam0->f_13), 0);
		}
		func_251(sParam19);
		func_251(sParam24);
		func_251(sParam27);
		func_251(sParam24);
		func_251("LOSE_WANTED");
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_5));
		}
		if (unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			unk_0x142CC44DB769B57E(iParam0);
		}
	}
	unk_0x0674E58A79778E99(&(iParam0->f_13), 11);
	unk_0x0674E58A79778E99(&(iParam0->f_13), 12);
	return 0;
}

int func_235(int iParam0, bool bParam1, bool bParam2)
{
	return func_281(iParam0, !bParam1, bParam2);
}

int func_236(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 12))
	{
		if (func_238(unk_0x16F2683693E537C9()))
		{
			if (func_237(1, 0, 1) || unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_237(1, 0, 1) || unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_237(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xC8BC75555A67090D())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9())
				{
					return 0;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0,95f || unk_0x30C0A7C378403357(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && iParam1)
		{
			if (func_240(unk_0x16F2683693E537C9(), iParam0))
			{
				unk_0x7C27693C5112825F(func_227(), 50f);
				return 1;
			}
		}
		else if (unk_0xBFDE4EE64C4BF2D6(iParam0, func_227()))
		{
			unk_0x7C27693C5112825F(func_227(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(iParam0))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iParam1))
				{
					if (unk_0x82CCEAB29E9451DD(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_241(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_242(int iParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam1->f_6))
		{
			unk_0x661342B9651D16E2(iParam1->f_6, false);
		}
		unk_0xB8C3D2D6C4AAEF18(0);
		unk_0x053C926E5E341906();
		iParam1->f_6 = iParam0;
		unk_0x661342B9651D16E2(iParam0, true);
	}
}

int func_243(vector3 vParam0, bool bParam3)
{
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_197(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_244(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_245(iParam2), 1);
}

int func_245(int iParam0)
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

void func_246(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_247(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x1C0640BA9A7327B3();
}

void func_247(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_248(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0->f_16))
	{
		if (unk_0x65636D4556D82155(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_249(var uParam0, int iParam1)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_250(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xC844350D5D58C99A(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xD6DF381716822EFE(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x4A43A287EB2A2B60(iParam0, 1))
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
				if (!unk_0x4A43A287EB2A2B60(iParam0, 1))
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

void func_251(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		unk_0x2F23E8033F1ADDD9(sParam0);
	}
}

int func_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
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
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 29) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 28))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					unk_0xD5EF6A937E06E46F(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 29) && unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 28))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
			{
				unk_0xD5EF6A937E06E46F(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x0674E58A79778E99(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xC844350D5D58C99A(uParam0->f_21))
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
			iVar24 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 50f, 0, iVar25);
			if (unk_0xDF1306B443CD3D15(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xDF1306B443CD3D15(uParam0->f_21, 0))
		{
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0) || !bParam17)
					{
						if (func_250(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
								{
									unk_0xCAF7AE54F764D5AA(uParam0->f_17[iVar0], 1f);
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
									{
										unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
									}
									if (unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470) == 7 && !func_267(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x869EFD0BC0868856(uParam0->f_17[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0]))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_17[iVar0], true);
											unk_0x5B1D360B9C6F0A09(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], iVar0);
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
			unk_0x0674E58A79778E99(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					if (!unk_0x81A5359F25512A04(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xA3BF0AA5A2608191(uParam0->f_17[iVar0]);
					}
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
					{
						if (func_265(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_227());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 26))
	{
		if ((!func_264(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())) && !unk_0xC844350D5D58C99A(iParam10))
		{
			iVar13 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar13, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_220(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x09AC81E49EA267F7(0, iVar26);
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar27]))
						{
							func_244(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_246(uParam0, "MORE_SEATS", 0);
						unk_0x5D96D8530B3D0904(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x0674E58A79778E99(&(uParam0->f_13), 13);
			func_251("MORE_SEATS");
		}
		if (!unk_0xC844350D5D58C99A(iParam10))
		{
			if ((!unk_0xEB6A8945D1AC98A1(uParam0->f_17[0]) || !unk_0xEB6A8945D1AC98A1(uParam0->f_17[1])) || !unk_0xEB6A8945D1AC98A1(uParam0->f_17[2]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 31))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && !func_220(uParam0, 2))
					{
						iVar13 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (func_263(iVar13, uParam0))
						{
							func_246(uParam0, "CMN_VEHSUIT", 0);
							unk_0x5D96D8530B3D0904(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					unk_0x0674E58A79778E99(&(uParam0->f_13), 31);
					func_251("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xDF1306B443CD3D15(iParam10, 0))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
			{
				if (unk_0xBFC0798A6E3417F9(0, 75))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 21))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_17[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
					{
						unk_0xFCCF7611216AE801(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xFCCF7611216AE801(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iVar13 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (unk_0xDF1306B443CD3D15(iVar13, 0))
						{
							if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
							{
								if (!func_264(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
								{
									if (!func_262(uParam0->f_17[iVar0]))
									{
										unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x437347B10A200C4B(iVar13, 0))
						{
							if (unk_0x82CCEAB29E9451DD(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x70EED0761B82965E(iVar13) && !unk_0xF79A7BCA9E38BBBC(iVar13))
								{
									vVar28 = { unk_0x68F4C0EC296D3901(iVar13, true) };
									if (vVar28.z < -1f)
									{
										unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
					{
						if (unk_0x0E0E6175453415CB(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x6937EA2286828455(uParam0->f_17[iVar0], 0);
							if (!unk_0x437347B10A200C4B(iVar13, 0))
							{
								if (unk_0xDF1306B443CD3D15(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar13))
										{
											if (unk_0x9C66D99E63E8E24C(iVar13) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iVar31 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									}
									if (unk_0xDF1306B443CD3D15(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x9C66D99E63E8E24C(iVar13) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
					{
						iVar32 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xC844350D5D58C99A(iVar32))
						{
							if (func_250(iVar32, uParam0, 0))
							{
								if (func_261(iVar0, uParam0) || !unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 27))
								{
									unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], iVar0);
									func_228(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_261(iVar0, uParam0))
							{
								if (unk_0x134B62B726CEC8E6(iVar32) == 873639469)
								{
									unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], 2);
								}
								func_260(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()) && !func_259(uParam0->f_17[iVar0], iParam10)) && !func_258(uParam0->f_17[iVar0], iParam10))
					{
						if (func_265(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
							{
								if (((!unk_0x869EFD0BC0868856(uParam0->f_17[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0])) && !unk_0x7F69A7C512ACACFD(uParam0->f_17[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xA3BF0AA5A2608191(uParam0->f_17[iVar0]);
									}
									unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_227());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x1C0640BA9A7327B3();
								uParam0->f_1[iVar0] = func_235(uParam0->f_17[iVar0], 0, 0);
								unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_242(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
					{
						if (((func_239(uParam0->f_17[iVar0], 1) || func_259(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xDF1306B443CD3D15(iParam10, 0) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0)))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
								func_251(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_242(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xDF1306B443CD3D15(iParam10, 0))
					{
						if (!unk_0x82CCEAB29E9451DD(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x12DE711B1C681E9E(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 11)) && !((bParam17 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0)))
							{
								if (unk_0x0E0E6175453415CB(uParam0->f_17[iVar0]))
								{
									if (!unk_0xC42A92762C58E1B9(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_239(uParam0->f_17[iVar0], 1))
										{
											if (func_238(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x75CDA8644CD3B5F5(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
									{
										if ((((!unk_0x7F69A7C512ACACFD(uParam0->f_17[iVar0]) && !unk_0x869EFD0BC0868856(uParam0->f_17[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_17[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_267(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x7F69A7C512ACACFD(uParam0->f_17[iVar0]) && !unk_0x7F69A7C512ACACFD(unk_0x16F2683693E537C9())) && !func_257(uParam0->f_17[iVar0], 2f)) && !unk_0x869EFD0BC0868856(uParam0->f_17[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_17[iVar0], true);
											if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 10))
											{
												unk_0xCAF7AE54F764D5AA(uParam0->f_17[iVar0], 1f);
											}
											unk_0x5B1D360B9C6F0A09(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x579B0182884711E5(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_235(uParam0->f_17[iVar0], 0, 0);
										unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
							{
								if (func_265(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x869EFD0BC0868856(uParam0->f_17[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xA3BF0AA5A2608191(uParam0->f_17[iVar0]);
										}
										unk_0x11AD11297DC58CC7(uParam0->f_17[iVar0], false);
										unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_227());
									}
								}
							}
						}
						else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 21))
								{
									unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_227());
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 21))
							{
								unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
								unk_0x5D96D8530B3D0904(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_227()) && !unk_0x4E861BC5B1EDA7BD(iParam10))
						{
							unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_251(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_220(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
						{
							if (func_262(uParam0->f_17[iVar0]) || unk_0x12DE711B1C681E9E(uParam0->f_17[iVar0], unk_0x16F2683693E537C9(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
					{
						if (!unk_0x12DE711B1C681E9E(uParam0->f_17[iVar0], unk_0x16F2683693E537C9(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_262(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1C0640BA9A7327B3();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 5))
							{
								func_246(uParam0, sParam7, 0);
								unk_0x5D96D8530B3D0904(&(uParam0->f_13), 5);
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
									if (!func_256(iVar0, uParam0))
									{
										if (!unk_0x2EBF5002C6B6A06C(uVar19[iVar0]))
										{
											if (!unk_0x7F8A39872A07D2CE(uVar19[iVar0], ""))
											{
												func_254(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_253(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_256(iVar0, uParam0))
										{
											func_246(uParam0, uVar15[iVar0], 0);
											func_253(iVar0, uParam0);
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
		unk_0x0674E58A79778E99(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_251(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_251("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_253(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 16);
			break;
	}
}

void func_254(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_255(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1C0640BA9A7327B3();
}

void func_255(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 1);
}

int func_256(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 14);
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 15);
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_257(int iParam0, float fParam1)
{
	if (unk_0x405E212DDE472467(iParam0, 0))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0);
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x9C66D99E63E8E24C(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_227()))
		{
			iVar0 = unk_0x8B157DA177FBCF50(iParam0);
			if (unk_0xDF1306B443CD3D15(iParam1, 0))
			{
				if (unk_0x12DE711B1C681E9E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_259(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xDF1306B443CD3D15(iParam1, 0))
			{
				if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_260(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 19);
			break;
	}
}

int func_261(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 17);
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 18);
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_262(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				iVar1 = unk_0x3C66DF04E6EA3587(iParam0);
				if (unk_0xDF1306B443CD3D15(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x12DE711B1C681E9E(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_263(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == -713569950 || unk_0x134B62B726CEC8E6(iParam0) == -2072933068)
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xA30B8362589C124A(iParam0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar3))
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
			iVar4 = unk_0xA30B8362589C124A(iParam0, 1, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar4))
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
			iVar5 = unk_0xA30B8362589C124A(iParam0, 2, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar5))
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

int func_264(var uParam0)
{
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_250(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_265(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (unk_0x0E0E6175453415CB(iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam1, 0);
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar0))
					{
						if (func_264(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (func_250(iVar0, uParam0, 0))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0))
						{
							if (func_266(iVar0))
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

int func_266(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_268()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						if (!unk_0xE0EC712E4BE1FC42(iVar1, unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iVar1, unk_0x16F2683693E537C9(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_269(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 25))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_17[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					unk_0x4E885A246A9D983A(uParam0->f_17[iVar0], 32, false);
					unk_0x4E885A246A9D983A(uParam0->f_17[iVar0], 305, true);
					unk_0x4E885A246A9D983A(uParam0->f_17[iVar0], 268, true);
					unk_0x579B0182884711E5(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_13), 25);
	}
}

void func_270(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_17[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
			{
				if (unk_0x0E0E6175453415CB(uParam0->f_17[iVar0]))
				{
					unk_0xA245D14CC59CDD36(uParam0->f_17[iVar0], 0);
					unk_0x7D732AB707BE9152(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0);
				unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0);
			}
		}
	}
}

var func_271()
{
	return uVar0;
}

Vector3 func_272()
{
	return vVar0;
}

Vector3 func_273()
{
	return 0f, 0f, 2f;
}

bool func_274(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

bool func_275(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, float fParam10, bool bParam11, int iParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	return func_234(iParam0, vParam1, func_273(), vParam4, vParam7, bParam11, 1, iParam12, 0, 0, 0, sParam13, sParam14, func_271(), func_271(), func_271(), func_271(), bParam15, bParam16, func_271(), 1, 0, bParam17, iParam18, func_271(), func_271(), func_271(), 1, fParam10);
}

var func_276()
{
	return Global_96053;
}

bool func_277()
{
	return Global_98796.f_346 > 0;
}

bool func_278(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_279(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_98(sParam0))
	{
		func_280(sParam0, iParam1, 1);
		func_94(sParam0, bParam2);
	}
}

void func_280(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
}

int func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_197(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_197(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_197(unk_0x8CD06866876216F2(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam2) && !unk_0x437347B10A200C4B(iParam2, 0))
		{
			iParam1->f_15 = func_292(iParam0, iParam2, 1);
			fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vLocal_3052, true);
			unk_0x9DD8618CA5BF832D(iParam0, 64, true);
			unk_0xA245D14CC59CDD36(iParam0, 0);
			unk_0x7D732AB707BE9152(iParam0, 0);
			if (iParam4 == 1)
			{
				if (iLocal_3757 == 1)
				{
					if (unk_0xD2AEDBB0268DF71A(iParam0, 453432689) < unk_0x282232D7B7DE504A(iParam0, 453432689, 1))
					{
						unk_0x744B6A2DDB2E7563(iParam0, 453432689, unk_0x282232D7B7DE504A(iParam0, 453432689, 1));
					}
				}
			}
			switch (iParam1->f_16)
			{
				case 0:
					if (iParam1->f_13 == 0)
					{
						unk_0xDAB3108F02A4255A(iParam0, 0, 0);
						unk_0x262EF6C6306BEA6C(iParam0, 453432689, unk_0x282232D7B7DE504A(iParam0, 453432689, 1) * 6, false, true);
						unk_0x5745EA6329A91E29(iParam0, 453432689, false);
						unk_0x5E678B691C852774(iParam0, 1);
						unk_0x5E678B691C852774(iParam0, 16);
						unk_0x00A6D36F507FD6EA(iParam0, 0);
						func_291(iParam0, 400);
						if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_227()))
						{
							unk_0xE25C96A9C36BE5D2(iParam0, func_227());
							unk_0xBF541ED34EA81209(iParam0, 0);
							unk_0x2A82338A0A086F1E(iParam0, func_227(), 1);
							unk_0x4E885A246A9D983A(iParam0, 268, false);
						}
						unk_0x4E885A246A9D983A(iParam0, 188, true);
						unk_0x4E885A246A9D983A(iParam0, 229, true);
						unk_0x4E885A246A9D983A(iParam0, 174, true);
						unk_0x67415F01577A142E(iParam0, 12, 1f);
						unk_0xAFF39FB306F8E232(iParam0, 54, 0);
						unk_0xAFF39FB306F8E232(iParam0, 46, 1);
						unk_0x2E1E5367A885F9B7(iParam0, "FAMILY_3_BUDDY_GROUP", 0);
						iParam1->f_13 = 1;
					}
					func_290(iParam1, 13);
					break;
				
				case 13:
					if (iParam1->f_13 == 0)
					{
						if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_227()))
						{
							unk_0xE25C96A9C36BE5D2(iParam0, func_227());
						}
						unk_0x7C27693C5112825F(func_227(), 50f);
						unk_0xBF541ED34EA81209(iParam0, 0);
						unk_0x2A82338A0A086F1E(iParam0, func_227(), 1);
						unk_0x298903DD96203C2C(iParam0, 20);
						unk_0x29CD9554726C7577(iParam0, 115);
						unk_0xB8AFFA077E15E999(iParam0, 1);
						unk_0xAFF39FB306F8E232(iParam0, 0, 1);
						unk_0xAFF39FB306F8E232(iParam0, 2, 1);
						unk_0xAFF39FB306F8E232(iParam0, 1, 1);
						unk_0xAFF39FB306F8E232(iParam0, 3, 0);
						unk_0x67415F01577A142E(iParam0, 5, 0,9f);
						unk_0x67415F01577A142E(iParam0, 8, 0f);
						unk_0x3CC33E4E9CE523F4(iParam0, 1);
						unk_0x05FE17D2660001CF(iParam0, iParam2, 0f, 0f, 0f, 5f, 0);
						unk_0x46CB381A452EF99D(iParam0, 1);
						unk_0x5E678B691C852774(iParam0, 128);
						unk_0x5E678B691C852774(iParam0, 1);
						unk_0x5E678B691C852774(iParam0, 16);
						unk_0x00A6D36F507FD6EA(iParam0, 0);
						unk_0x7980D72D61BEF4D5(iParam0, false);
						unk_0x4E885A246A9D983A(iParam0, 188, true);
						unk_0x4E885A246A9D983A(iParam0, 268, false);
						unk_0x4E885A246A9D983A(iParam0, 281, true);
						unk_0x4E885A246A9D983A(iParam0, 174, true);
						unk_0x11AD11297DC58CC7(iParam0, false);
						if (iLocal_3776 == 1)
						{
							unk_0x34D79252800B23FF(5);
							unk_0x060F249A9A3E3F4E(1);
							unk_0x51B096AAC60548C1(1f);
							iLocal_3776 = 0;
						}
						iParam1->f_13 = 1;
					}
					if (iParam1->f_13 == 1)
					{
						if (iParam4 == 1)
						{
							if (iLocal_3757 == 0)
							{
								if (func_289(iParam0, iParam3, 0))
								{
									if (func_305(iParam0, iParam3))
									{
										if (Local_3881[0].f_12 == 1 || Local_3881[1].f_12 == 1)
										{
											func_290(iParam1, 6);
										}
									}
								}
							}
						}
						if (iParam1->f_15 > 50f || !unk_0xBFDE4EE64C4BF2D6(*iParam1, func_227()))
						{
							func_290(iParam1, 14);
						}
					}
					if (iLocal_3775 == 0)
					{
						if (iLocal_3755 == 1 && iLocal_3754 == 0)
						{
							if ((unk_0xC379FAA7E9DFE7A4(iParam0, 0) || unk_0xBC695A145F39D2EF(iParam0)) || unk_0x4734A6196B611C3B(iParam0, 0))
							{
								unk_0xA3BF0AA5A2608191(iParam0);
							}
							iLocal_3775 = 1;
						}
					}
					break;
				
				case 14:
					if (iParam1->f_13 == 0)
					{
						unk_0x3CC33E4E9CE523F4(iParam0, 1);
						unk_0x05FE17D2660001CF(iParam0, iParam2, 0f, 0f, 0f, 7,5f, 0);
						unk_0x11AD11297DC58CC7(iParam0, false);
						iParam1->f_13 = 1;
					}
					if (iParam1->f_13 == 1)
					{
						if (iParam1->f_15 <= (50f / 3f))
						{
							func_290(iParam1, 13);
						}
					}
					break;
				
				case 4:
					if (iParam1->f_13 == 0)
					{
						if (func_305(iParam0, iParam3))
						{
							unk_0xA3BF0AA5A2608191(iParam0);
							unk_0x132B85BCE016BCA0(iParam0, iParam3, unk_0x68F4C0EC296D3901(iParam3, true), 5, 2,5f, 786469, 5f, 5f, 1);
						}
						unk_0x11AD11297DC58CC7(iParam0, true);
						iParam1->f_13 = 1;
					}
					if (func_305(iParam2, iParam3))
					{
						if (iParam4 == 1)
						{
							func_290(iParam1, 10);
						}
						else
						{
							func_290(iParam1, 12);
						}
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iParam0);
						func_290(iParam1, 13);
					}
					break;
				
				case 6:
					if (iParam1->f_13 == 0)
					{
						if (!func_288(iParam0))
						{
							if (func_305(iParam0, iParam3))
							{
								unk_0x3F423BF5B8125A50("missfam3");
								if (unk_0xB4AE0788C1587752("missfam3"))
								{
									func_287(iParam0, func_224(iParam0, iParam3), 6000, 0);
									unk_0x11AD11297DC58CC7(iParam0, true);
								}
							}
						}
						else
						{
							iParam1->f_7 = unk_0x1C0640BA9A7327B3();
							iParam1->f_13 = 1;
						}
					}
					if (func_288(iParam0))
					{
						if (func_108(2000, iParam1->f_7))
						{
							if (!unk_0x0E0E6175453415CB(iParam0))
							{
								unk_0x8FB4E06C94958F84(iParam0);
							}
							iVar1 = func_286(iParam0, 100f, -808831384);
							if (unk_0xC844350D5D58C99A(iParam3) && unk_0xC844350D5D58C99A(iVar1))
							{
								vVar5 = { unk_0x08D89CE2E20AE305(iVar1) };
								vVar2 = { unk_0x08D89CE2E20AE305(iParam3) };
								fVar11 = unk_0x07AB02F3C4AE2B04(vVar2.x, vVar2.y, vVar5.x, vVar5.y);
								vVar8 = { unk_0x5293C88BD2F4DE13(iVar1, unk_0x68F4C0EC296D3901(iParam0, false)) };
								if (vVar8.y < 0f || fVar11 > 100f)
								{
									unk_0x8FB4E06C94958F84(iParam0);
								}
							}
						}
					}
					if (iLocal_3757 == 1)
					{
						unk_0xA3BF0AA5A2608191(iParam0);
						unk_0x8FB4E06C94958F84(iParam0);
						unk_0x8D17794CE3273D70("missfam3");
						func_290(iParam1, 13);
					}
					break;
				
				case 10:
					if (iParam1->f_13 == 0)
					{
						func_285(&Local_3926, &iVar12);
						func_285(&Local_3963, &iVar13);
						if (iVar12 != -1 && iVar13 != -1)
						{
							if (Local_3926[iVar12].f_15 <= Local_3963[iVar13].f_15)
							{
								iVar14 = Local_3926[iVar12];
							}
							else
							{
								iVar14 = Local_3963[iVar13];
							}
						}
						else if (iVar12 != -1)
						{
							iVar14 = Local_3926[iVar12];
						}
						else if (iVar13 != -1)
						{
							iVar14 = Local_3963[iVar13];
						}
						if (!unk_0x5A91F08DF773C39D(iParam0, -804,86f, 166,51f, 70,56f, 36f, 24f, 12f, false, true, 0))
						{
							if (unk_0xC844350D5D58C99A(iVar14))
							{
								unk_0xA3BF0AA5A2608191(iParam0);
								unk_0x132B85BCE016BCA0(iParam0, iParam3, unk_0x68F4C0EC296D3901(iVar14, false), 8, 25f, 1074266172, 500f, 10f, 0);
								unk_0x11AD11297DC58CC7(iParam0, true);
								iParam1->f_7 = unk_0x1C0640BA9A7327B3();
							}
							else
							{
								unk_0xA3BF0AA5A2608191(iParam0);
								unk_0x132B85BCE016BCA0(iParam0, iParam3, unk_0x68F4C0EC296D3901(iParam3, true), 8, 26f, 1074266172, 500f, 10f, 0);
								unk_0x11AD11297DC58CC7(iParam0, true);
								iParam1->f_7 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							unk_0xA3BF0AA5A2608191(iParam0);
							func_290(iParam1, 7);
						}
						iParam1->f_13 = 1;
					}
					if (iParam4 == 0)
					{
						if (iLocal_3768 == 0)
						{
							func_290(iParam1, 10);
							iLocal_3768 = 1;
						}
						if (iLocal_3767 == 0)
						{
							iLocal_3767 = unk_0x1C0640BA9A7327B3();
						}
						if (((iLocal_3767 != 0 && func_108(12500, iLocal_3767)) || func_98("FAM3_GCEM")) || func_98("FAM3_GCEF"))
						{
							func_290(iParam1, 12);
						}
					}
					else
					{
						switch (unk_0xD1960163A3042274(iParam0, -1273030092))
						{
							case 1:
								if (func_108(5000, iParam1->f_7))
								{
									func_290(iParam1, 10);
								}
								break;
							
							case 7:
								func_290(iParam1, 10);
								break;
							}
					}
					if (!func_289(iParam2, iParam3, 0))
					{
						func_290(iParam1, 4);
					}
					if (func_289(iParam0, iParam3, 0) && func_289(iParam2, iParam3, 0))
					{
						if (unk_0x5A91F08DF773C39D(iParam0, -804,86f, 166,51f, 70,56f, 36f, 24f, 12f, false, true, 0))
						{
							unk_0xA3BF0AA5A2608191(iParam0);
							func_290(iParam1, 7);
						}
					}
					break;
				
				case 11:
					if (iParam1->f_13 == 0)
					{
						unk_0xA3BF0AA5A2608191(iParam0);
						iVar15 = func_284(iParam0, -1533126372, 0, 0, 28);
						if (unk_0xC844350D5D58C99A(iVar15))
						{
							unk_0x89258193691A7600(iParam0, iParam3, iVar15, 8, 30f, 1074266172, 400f, 100f, 0);
							unk_0x11AD11297DC58CC7(iParam0, true);
							iParam1->f_7 = unk_0x1C0640BA9A7327B3();
						}
						else
						{
							unk_0x132B85BCE016BCA0(iParam0, iParam3, unk_0x68F4C0EC296D3901(iParam3, true), 8, 25f, 1074266172, 400f, 100f, 0);
							unk_0x11AD11297DC58CC7(iParam0, true);
							iParam1->f_7 = unk_0x1C0640BA9A7327B3();
						}
						iParam1->f_13 = 1;
					}
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
						{
							func_290(iParam1, 12);
						}
						else
						{
							switch (unk_0xD1960163A3042274(iParam0, -1273030092))
							{
								case 1:
									if (func_108(5000, iParam1->f_7))
									{
										func_290(iParam1, 11);
									}
									break;
								
								case 7:
									func_290(iParam1, 11);
									break;
								}
							}
					}
					if (!func_289(iParam2, iParam3, 0))
					{
						func_290(iParam1, 4);
					}
					break;
				
				case 12:
					if (iParam1->f_13 == 0)
					{
						if (unk_0xC844350D5D58C99A(iParam3))
						{
							func_283(unk_0x68F4C0EC296D3901(iParam3, true));
							unk_0x10FEEAFF01E32639(fLocal_3779, fLocal_3780, fLocal_3781, fLocal_3782);
							if (unk_0xD1B4D22E0BA9B0C8(fLocal_3779, fLocal_3780, fLocal_3781, fLocal_3782))
							{
								unk_0xA3BF0AA5A2608191(iParam0);
								unk_0x132B85BCE016BCA0(iParam0, iParam3, vLocal_3052, 4, 20f, 1074266251, 1f, 2f, 0);
								unk_0x11AD11297DC58CC7(iParam0, true);
								iParam1->f_13 = 1;
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iParam3))
					{
						func_283(unk_0x68F4C0EC296D3901(iParam3, true));
						unk_0x10FEEAFF01E32639(fLocal_3779, fLocal_3780, fLocal_3781, fLocal_3782);
					}
					if (iParam4 == 1)
					{
						if (fVar0 < 125f)
						{
							func_290(iParam1, 10);
						}
					}
					if (func_305(iParam0, iParam3))
					{
						if (unk_0x5A91F08DF773C39D(iParam3, -847,36f, 159,09f, 66,32f, 8f, 3,5f, 3f, false, true, 0))
						{
							unk_0x06736587AE5BE33B(iParam0, 10f);
							if (iLocal_3776 == 0)
							{
								if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
								{
									if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
									{
										unk_0x34D79252800B23FF(0);
										unk_0x51B096AAC60548C1(0f);
										unk_0x060F249A9A3E3F4E(0);
										iLocal_3776 = 1;
									}
								}
							}
						}
					}
					if (!func_289(iParam2, iParam3, 0))
					{
						func_290(iParam1, 4);
					}
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
						{
							func_290(iParam1, 11);
						}
					}
					break;
				
				case 2:
					if (iParam1->f_13 == 0)
					{
						if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_227()))
						{
							unk_0xE25C96A9C36BE5D2(iParam0, func_227());
							unk_0xBF541ED34EA81209(iParam0, 0);
							unk_0x2A82338A0A086F1E(iParam0, func_227(), 1);
							unk_0x4E885A246A9D983A(iParam0, 268, true);
						}
						unk_0x5B1D360B9C6F0A09(iParam0, iParam3, 20000, -2, 2f, 1, 0);
						unk_0x11AD11297DC58CC7(iParam0, true);
						iParam1->f_13 = 1;
					}
					if (func_305(iParam0, iParam3))
					{
						func_290(iParam1, 13);
					}
					break;
				
				case 7:
					if (iParam1->f_13 == 0)
					{
						unk_0xA3BF0AA5A2608191(iParam0);
						if (unk_0xBFDE4EE64C4BF2D6(iParam0, func_227()))
						{
							unk_0x0A94A109271BE75A(iParam0);
						}
						unk_0xAFF39FB306F8E232(iParam0, 1, 0);
						unk_0xAFF39FB306F8E232(iParam0, 3, 1);
						unk_0x67415F01577A142E(iParam0, 5, 0,9f);
						unk_0x67415F01577A142E(iParam0, 8, 0f);
						unk_0x3CC33E4E9CE523F4(iParam0, 1);
						unk_0x05FE17D2660001CF(iParam0, iParam2, 0f, 0f, 0f, 5f, 0);
						unk_0x7C8478BF70C1E072(iParam0, 250f, 0);
						unk_0x11AD11297DC58CC7(iParam0, false);
						iParam1->f_13 = 1;
					}
					if (iParam4 == 0)
					{
						unk_0xA3BF0AA5A2608191(iParam0);
						func_290(iParam1, 13);
					}
					if (!unk_0x405E212DDE472467(iParam2, 0))
					{
						func_290(iParam1, 13);
					}
					break;
				
				case 15:
					if (iParam1->f_13 == 0)
					{
						if (iLocal_3776 == 1)
						{
							unk_0x34D79252800B23FF(5);
							unk_0x060F249A9A3E3F4E(1);
							unk_0x51B096AAC60548C1(1f);
							iLocal_3776 = 0;
						}
						iParam1->f_13 = 1;
					}
					if (func_289(iParam0, iParam3, 0))
					{
						if (func_305(iParam0, iParam3))
						{
							switch (func_224(iParam0, iParam3))
							{
								case -1:
									if (iParam4 == 1)
									{
										func_290(iParam1, 10);
									}
									else
									{
										func_290(iParam1, 12);
									}
									break;
								
								default:
									func_290(iParam1, 13);
									break;
								}
						}
					}
					else
					{
						func_290(iParam1, 13);
					}
					break;
				}
			}
	}
}

void func_283(struct<2> Param0, float fParam2)
{
	if (Param0 < vLocal_3052.x)
	{
		fLocal_3779 = (Param0 - 25f);
		fLocal_3781 = (vLocal_3052.x + 25f);
	}
	else if (Param0 > vLocal_3052.x)
	{
		fLocal_3779 = (vLocal_3052.x - 25f);
		fLocal_3781 = (Param0 + 25f);
	}
	if (Param0.f_1 < vLocal_3052.y)
	{
		fLocal_3780 = (Param0.f_1 - 25f);
		fLocal_3782 = (vLocal_3052.y + 25f);
	}
	else if (Param0.f_1 > vLocal_3052.y)
	{
		fLocal_3780 = (vLocal_3052.y - 25f);
		fLocal_3782 = (Param0.f_1 + 25f);
	}
}

int func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_285(var uParam0, var uParam1)
{
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	fVar3 = 500f;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xC844350D5D58C99A((*uParam0)[iVar0]))
		{
			if (!unk_0x437347B10A200C4B((*uParam0)[iVar0], 0))
			{
				fVar2 = uParam0[iVar0]->f_15;
				if (fVar2 < fVar3)
				{
					fVar3 = fVar2;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
		*uParam1 = iVar1;
		return 0;
	}
	*uParam1 = iVar1;
	return (*uParam0)[iVar1];
}

int func_286(int iParam0, float fParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam0, false) };
		iVar0 = unk_0x83C1D4B63BBD91F6(vVar1, fParam1, iParam2, 2146);
	}
	return iVar0;
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			switch (iParam1)
			{
				case -1:
				case 1:
					sVar0 = "incar_lookbehind_enter_driver";
					sVar1 = "incar_lookbehind_idle_driver";
					sVar2 = "incar_lookbehind_exit_driver";
					break;
				
				case 0:
				case 2:
					sVar0 = "incar_lookbehind_enter_passenger";
					sVar1 = "incar_lookbehind_idle_passenger";
					sVar2 = "incar_lookbehind_exit_passenger";
					break;
			}
			unk_0xF82EA857DA10E0CD(&uVar3);
			unk_0xDD353D0E9C789D0E(&uVar3);
			unk_0xC6EB89C59F2AF6B8(0, "missfam3", sVar0, 4f, -8f, -1, 16 | iParam3, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "missfam3", sVar1, 8f, -8f, iParam2, 16 | iParam3 | 1, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "missfam3", sVar2, 8f, -4f, -1, 16 | iParam3, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(uVar3);
			unk_0x78ADC381772E3D54(iParam0, uVar3);
			unk_0xF82EA857DA10E0CD(&uVar3);
		}
	}
}

int func_288(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (((((unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "incar_lookbehind_enter_driver", 3) || unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "incar_lookbehind_idle_driver", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "incar_lookbehind_exit_driver", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "incar_lookbehind_enter_passenger", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "incar_lookbehind_exit_passenger", 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_290(int iParam0, int iParam1)
{
	iParam0->f_13 = 0;
	iParam0->f_16 = iParam1;
}

void func_291(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		fVar0 = (((to_float(unk_0x7F6DC62EA9922664(iParam0)) - 100f) / (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) * 100f);
		unk_0x093A734E5AEA758F(iParam0, iParam1);
		unk_0xD458AC1C1D29C3B4(iParam0, round((((fVar0 / 100f) * (to_float(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) + 100f)), 0);
	}
}

float func_292(int iParam0, int iParam1, bool bParam2)
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

void func_293(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (!func_98(sParam0))
		{
			if (func_278(sParam0, 0, 0))
			{
				func_94(sParam0, 1);
			}
		}
		else if (!func_278(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

void func_294(int iParam0)
{
	if (iLocal_3708 == 1)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
		{
			if (func_93())
			{
				if (func_221())
				{
					func_301(0);
				}
			}
		}
		else if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
		{
			if (iLocal_3723 == 0)
			{
				if (func_93())
				{
					Local_3717 = { func_92() };
					Local_3711 = { func_300() };
					func_200();
				}
				if (!func_220(&Local_3435, 1))
				{
					if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_WNTD2", 7, 0, 0, 0))
					{
						iLocal_3723 = 1;
					}
				}
			}
		}
		else if (iLocal_3736 == 0)
		{
			if (func_93())
			{
				if (!func_221())
				{
					func_301(1);
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_93())
			{
				Var7 = { func_91() };
				if (!unk_0xEA6BC48857E0AC4C(&Var7))
				{
					if (unk_0x7F8A39872A07D2CE(&Var7, "FAM3_DOWN_10") || unk_0x7F8A39872A07D2CE(&Var7, "FAM3_DOWNA_17"))
					{
						func_2();
						func_89();
						func_301(0);
					}
				}
			}
			else
			{
				iLocal_3708 = 1;
				settimera(0);
				*iParam0++;
			}
			break;
		
		case 1:
			if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
			{
				if (timera() > 6000)
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(Local_3107))
					{
						if (func_299(&uLocal_3472, 25, "FAM3AUD", "FAM3_TCPC", 7, 0, 0, 1))
						{
							unk_0x8B4C4CA774181102(3f, 10f, 4);
							func_94("FAM3_TCPC", 1);
							iLocal_3705 = 0;
							iLocal_3736 = 1;
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (func_98("FAM3_TCPC"))
			{
				if (!func_298("FAM3_TCPC"))
				{
					*iParam0++;
				}
				if (func_297())
				{
					iLocal_3705 = 1;
				}
			}
			break;
		
		case 3:
			if (!func_98("FAM3_MAD"))
			{
				if (!func_93())
				{
					if (iLocal_3705 == 0)
					{
						if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_MAD", 7, 0, 0, 0))
						{
							unk_0x8B4C4CA774181102(4f, 10f, 4);
							func_94("FAM3_MAD", 1);
						}
					}
					else
					{
						iLocal_3710 = 1;
						iLocal_3708 = 1;
						*iParam0++;
					}
				}
			}
			else if (!func_298("FAM3_MAD"))
			{
				iLocal_3710 = 1;
				iLocal_3708 = 1;
				*iParam0++;
			}
			else
			{
				if (!func_221())
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3435.f_1[0]))
					{
						func_301(1);
					}
				}
				else if (!unk_0xE4EDC4B0E92C078B(Local_3435.f_1[0]))
				{
					func_301(0);
				}
				if (iLocal_3754 == 1)
				{
					*iParam0++;
				}
			}
			break;
		
		case 4:
			if (iLocal_3754 == 0)
			{
				if (iLocal_3755 == 1)
				{
					if (!func_98("FAM3_GCEK") && !func_98("FAM3_GCEL"))
					{
						iVar0 = 0;
						while (iVar0 <= 1)
						{
							if (Local_3926[iVar0].f_14 == 0)
							{
								if (Local_3926[iVar0].f_17 != 0)
								{
									switch (Local_3926[iVar0].f_17)
									{
										case 2:
										case 3:
										case 5:
										case 6:
										case 4:
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCEK", 7, 0, 0, 0))
											{
												Local_3926[iVar0].f_14 = 1;
												func_94("FAM3_GCEK", 1);
											}
											break;
										
										case 1:
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
											{
												Local_3926[iVar0].f_14 = 1;
												func_94("FAM3_GCEL", 1);
											}
											break;
										}
									}
							}
							if (Local_3963[iVar0].f_14 == 0)
							{
								if (Local_3963[iVar0].f_17 != 0)
								{
									switch (Local_3963[iVar0].f_17)
									{
										case 2:
										case 3:
										case 5:
										case 6:
										case 4:
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCEK", 7, 0, 0, 0))
											{
												Local_3963[iVar0].f_14 = 1;
												func_94("FAM3_GCEK", 1);
											}
											break;
										
										case 1:
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
											{
												Local_3963[iVar0].f_14 = 1;
												func_94("FAM3_GCEL", 1);
											}
											break;
										}
									}
							}
							iVar0++;
						}
						if (!func_93())
						{
							if (!func_220(&Local_3435, 0))
							{
								if (((Local_3926[0].f_14 == 1 && Local_3926[1].f_14 == 1) && Local_3963[0].f_14 == 1) && Local_3963[1].f_14 == 1)
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
									{
										func_94("FAM3_GCEL", 1);
									}
								}
							}
						}
					}
					else
					{
						if (!func_98("FAM3_GCEM") && !func_98("FAM3_GCEH"))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 1))
									{
										if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -768,7635f, 167,9453f, 58,47437f, -848,0483f, 171,8887f, 77,93412f, 50f, 0, true, 0))
										{
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCEH", 7, 0, 0, 0))
											{
												func_94("FAM3_GCEH", 1);
											}
										}
										else if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCEM", 7, 0, 0, 0))
										{
											func_94("FAM3_GCEM", 1);
										}
									}
								}
							}
						}
						if (!func_98("FAM3_STATA") && !func_98("FAM3_STATB"))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 1))
									{
										if ((iLocal_3763 + iLocal_3765) > 0)
										{
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_STATA", 7, 0, 0, 0))
											{
												iLocal_3736 = 0;
												func_94("FAM3_STATA", 1);
												iLocal_3736 = 1;
												iLocal_3723 = 0;
											}
										}
										else if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_STATB", 7, 0, 0, 0))
										{
											iLocal_3736 = 0;
											func_94("FAM3_STATB", 1);
											iLocal_3736 = 1;
											iLocal_3723 = 0;
										}
									}
								}
							}
						}
						else if (!func_298("FAM3_STATA") && !func_298("FAM3_STATB"))
						{
							iLocal_3738 = 1;
						}
						if (!func_98("FAM3_DBHA"))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (func_231(func_210(0), func_210(1)))
								{
									if (!func_220(&Local_3435, 1))
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_DBHA", 7, 0, 0, 0))
										{
											iLocal_3736 = 1;
											iLocal_3723 = 0;
											func_94("FAM3_DBHA", 1);
										}
									}
								}
							}
						}
						else if (iLocal_3723 == 1)
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (unk_0x7F8A39872A07D2CE(&Local_3717, "FAM3_DBHA"))
								{
									if (!func_93())
									{
										if (func_74(&uLocal_3472, "FAM3AUD", "FAM3_DBHA", &Local_3711, 7, 0, 0))
										{
											iLocal_3736 = 1;
											iLocal_3723 = 0;
										}
									}
								}
							}
						}
						else if (func_93())
						{
							Var1 = { func_92() };
							if (!unk_0xEA6BC48857E0AC4C(&Var1))
							{
								if (unk_0x7F8A39872A07D2CE(&Var1, "FAM3_DBHA"))
								{
									if (Local_3107.f_15 > (50f / 2f))
									{
										func_89();
									}
								}
							}
						}
						if (!func_98("FAM3_DBHB"))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (func_231(func_210(0), func_210(1)))
								{
									if (!func_220(&Local_3435, 1))
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_DBHB", 7, 0, 0, 0))
										{
											iLocal_3736 = 1;
											iLocal_3723 = 0;
											func_94("FAM3_DBHB", 1);
										}
									}
								}
							}
						}
						else if (iLocal_3723 == 1)
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (unk_0x7F8A39872A07D2CE(&Local_3717, "FAM3_DBHB"))
								{
									if (!func_93())
									{
										if (func_74(&uLocal_3472, "FAM3AUD", "FAM3_DBHB", &Local_3711, 7, 0, 0))
										{
											iLocal_3736 = 1;
											iLocal_3723 = 0;
										}
									}
								}
							}
						}
						else if (func_93())
						{
							Var1 = { func_92() };
							if (!unk_0xEA6BC48857E0AC4C(&Var1))
							{
								if (unk_0x7F8A39872A07D2CE(&Var1, "FAM3_DBHB"))
								{
									if (Local_3107.f_15 > (50f / 2f))
									{
										func_89();
									}
								}
							}
						}
					}
				}
				else if (!func_98("FAM3_DBHC"))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
					{
						if (func_98(&Local_3082) || unk_0xEA6BC48857E0AC4C(&Local_3082))
						{
							if (func_231(func_210(0), func_210(1)))
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 0))
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_DBHC", 7, 0, 0, 0))
										{
											func_94("FAM3_DBHC", 1);
										}
									}
								}
							}
						}
					}
				}
				else if (func_93())
				{
					Var1 = { func_92() };
					if (!unk_0xEA6BC48857E0AC4C(&Var1))
					{
						if (unk_0x7F8A39872A07D2CE(&Var1, "FAM3_DBHC"))
						{
							if (Local_3107.f_15 > (50f / 2f))
							{
								func_89();
							}
						}
					}
				}
			}
			else
			{
				if (!func_98("FAM3_GCFSG"))
				{
					if (((Local_3881[0].f_12 == 1 || Local_3881[1].f_12 == 1) || (unk_0xC844350D5D58C99A(func_285(&Local_3926, &iVar13)) && Local_3926[iVar13].f_15 < 10f)) || (unk_0xC844350D5D58C99A(func_285(&Local_3963, &iVar14)) && Local_3963[iVar14].f_15 < 10f))
					{
						if (!func_93())
						{
							if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFSG", 7, 0, 0, 0))
							{
								if (!unk_0x405E212DDE472467(func_210(1), 0))
								{
									iVar15 = func_286(func_210(1), 100f, -808831384);
									if (unk_0xC844350D5D58C99A(iVar15))
									{
										if (!unk_0x437347B10A200C4B(iVar15, 0))
										{
											unk_0xDD353D0E9C789D0E(&uVar16);
											unk_0xF96A174EE26D7588(0, iVar15, 0);
											unk_0x0C8C0C840C2D1AD2(0, iVar15, 3000, 0, 2);
											unk_0x75ABDC5F81978924(uVar16);
											unk_0x78ADC381772E3D54(func_210(1), uVar16);
											unk_0xF82EA857DA10E0CD(&uVar16);
										}
									}
								}
								unk_0x8B4C4CA774181102(3f, 3f, 3);
								func_94("FAM3_GCFSG", 1);
							}
						}
						else
						{
							func_89();
						}
					}
				}
				else if (!func_98("FAM3_GCSM"))
				{
					if (!func_93())
					{
						if (!func_220(&Local_3435, 1))
						{
							if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCSM", 7, 0, 0, 0))
							{
								func_94("FAM3_GCSM", 1);
							}
						}
					}
				}
				else
				{
					if (!func_98("FAM3_GCSFA") && !func_98("FAM3_GCSFB"))
					{
						if (!func_93())
						{
							if (!func_220(&Local_3435, 1))
							{
								if (unk_0x0E0E6175453415CB(func_210(0)) && unk_0x0E0E6175453415CB(func_210(1)))
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCSFA", 7, 0, 0, 0))
									{
										iLocal_3766 = unk_0x1C0640BA9A7327B3();
										func_94("FAM3_GCSFA", 1);
									}
								}
								else if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCSFB", 7, 0, 0, 0))
								{
									iLocal_3766 = unk_0x1C0640BA9A7327B3();
									func_94("FAM3_GCSFB", 1);
								}
							}
						}
					}
					if (!func_98("FAM3_GCSGS") && !func_98("FAM3_GCSPS"))
					{
						if (!func_93())
						{
							if (!func_220(&Local_3435, 1))
							{
								if (iLocal_3753 == 1)
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCSPS", 7, 0, 0, 0))
									{
										func_94("FAM3_GCSPS", 1);
									}
								}
								if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(func_210(0), false), 7,5f, 0) || unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(func_210(1), false), 7,5f, 0))
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCSGS", 7, 0, 0, 0))
									{
										func_94("FAM3_GCSGS", 1);
									}
								}
								if (func_108(12500, iLocal_3766))
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCSGS", 7, 0, 0, 0))
									{
										func_94("FAM3_GCSGS", 1);
									}
								}
							}
							else if (func_278("FAM3_LGOONS", 0, 0))
							{
								if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(func_210(0), false), 7,5f, 0) || unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(func_210(1), false), 7,5f, 0))
								{
									if (!unk_0x65636D4556D82155(func_210(0)))
									{
										func_296(func_210(0), "FAM3_DDAA", "MICHAEL", 6);
										func_94("FAM3_GCSGS", 1);
									}
								}
							}
						}
					}
					else if (iLocal_3743 == 0)
					{
						Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
						Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
						iLocal_3766 = unk_0x1C0640BA9A7327B3();
						iLocal_3743 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (Local_3926[iVar0].f_14 == 0)
					{
						if (Local_3926[iVar0].f_17 != 0)
						{
							if (!func_93() && !func_220(&Local_3435, 1))
							{
								switch (Local_3926[iVar0].f_17)
								{
									case 1:
										break;
									
									case 2:
									case 5:
										if (!func_98("FAM3_GCMKG_2"))
										{
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMKG", 7, 0, 0, 0))
											{
												iLocal_3802++;
												Local_3926[iVar0].f_14 = 1;
												Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
												Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												if (iLocal_3802 >= 2)
												{
													func_94("FAM3_GCMKG_2", 1);
												}
											}
										}
										else
										{
											Local_3926[iVar0].f_14 = 1;
											Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
										break;
									
									case 3:
									case 6:
										if (!func_98("FAM3_GCFKG_3"))
										{
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFKG", 7, 0, 0, 0))
											{
												iLocal_3803++;
												Local_3926[iVar0].f_14 = 1;
												Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
												Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												if (iLocal_3803 >= 3)
												{
													func_94("FAM3_GCFKG_3", 1);
												}
											}
										}
										else
										{
											Local_3926[iVar0].f_14 = 1;
											Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
										break;
								}
							}
							else if (Local_3926[iVar0].f_9 == 0)
							{
								Local_3926[iVar0].f_9 = unk_0x1C0640BA9A7327B3();
							}
							else if (func_108(3000, Local_3926[iVar0].f_9))
							{
								Local_3926[iVar0].f_14 = 1;
							}
						}
					}
					if (Local_3963[iVar0].f_14 == 0)
					{
						if (Local_3963[iVar0].f_17 != 0)
						{
							if (!func_93() && !func_220(&Local_3435, 1))
							{
								switch (Local_3963[iVar0].f_17)
								{
									case 1:
										break;
									
									case 2:
									case 5:
										if (!func_98("FAM3_GCMKG_2"))
										{
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMKG", 7, 0, 0, 0))
											{
												iLocal_3802++;
												Local_3963[iVar0].f_14 = 1;
												Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
												Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												if (iLocal_3802 >= 2)
												{
													func_94("FAM3_GCMKG_2", 1);
												}
											}
										}
										else
										{
											Local_3963[iVar0].f_14 = 1;
											Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
										break;
									
									case 3:
									case 6:
										if (!func_98("FAM3_GCFKG_3"))
										{
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFKG", 7, 0, 0, 0))
											{
												iLocal_3803++;
												Local_3963[iVar0].f_14 = 1;
												Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
												Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												if (iLocal_3803 >= 3)
												{
													func_94("FAM3_GCFKG_3", 1);
												}
											}
										}
										else
										{
											Local_3963[iVar0].f_14 = 1;
											Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
										break;
								}
							}
							else if (Local_3963[iVar0].f_9 == 0)
							{
								Local_3963[iVar0].f_9 = unk_0x1C0640BA9A7327B3();
							}
							else if (func_108(3000, Local_3963[iVar0].f_9))
							{
								Local_3963[iVar0].f_14 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iLocal_3743 == 1)
				{
					if (func_108(10000, Local_3125.f_9))
					{
						if (func_231(func_210(0), func_210(1)))
						{
							if (!func_93())
							{
								if (!func_220(&Local_3435, 1))
								{
									if (func_305(func_210(0), unk_0x3C66DF04E6EA3587(func_210(0))))
									{
										if (func_224(func_210(0), unk_0x3C66DF04E6EA3587(func_210(0))) == -1)
										{
											if (func_295(&Local_3926, &Local_3963) < 30f)
											{
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMEF", 7, 0, 0, 0))
												{
													Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
												}
											}
											else if (Local_3125.f_10 < 4)
											{
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMAF", 7, 0, 0, 0))
												{
													Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
													Local_3125.f_10++;
												}
											}
											else
											{
												Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
											}
										}
										else
										{
											switch (unk_0x09AC81E49EA267F7(0, 2))
											{
												case 0:
													if (func_295(&Local_3926, &Local_3963) < 20f)
													{
														if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMAG", 7, 0, 0, 0))
														{
															Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
														}
													}
													break;
												
												case 1:
													if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMDF", 7, 0, 0, 0))
													{
														Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
													}
													break;
												}
											}
										}
									}
							}
						}
						else if (!unk_0x405E212DDE472467(func_210(0), 0) && !unk_0x405E212DDE472467(func_210(1), 0))
						{
							if (Local_3107.f_15 < 50f)
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 1))
									{
										switch (unk_0x09AC81E49EA267F7(0, 2))
										{
											case 0:
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMAG", 7, 0, 0, 0))
												{
													Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
												}
												break;
											
											case 1:
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMEF", 7, 0, 0, 0))
												{
													Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
												}
												break;
											}
										}
								}
							}
							else
							{
								Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					if (func_108(8000, Local_3107.f_9))
					{
						if (func_231(func_210(0), func_210(1)))
						{
							if (func_305(func_210(1), unk_0x3C66DF04E6EA3587(func_210(1))))
							{
								if (func_224(func_210(1), unk_0x3C66DF04E6EA3587(func_210(1))) == -1)
								{
									if (func_295(&Local_3926, &Local_3963) < 30f)
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFEM", 7, 0, 0, 0))
										{
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
									}
									else if (Local_3107.f_10 < 4)
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFAM", 7, 0, 0, 0))
										{
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
											Local_3107.f_10++;
										}
									}
									else
									{
										Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
									}
								}
								else
								{
									switch (unk_0x09AC81E49EA267F7(0, 2))
									{
										case 0:
											if (func_295(&Local_3926, &Local_3963) < 20f)
											{
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFAG", 7, 0, 0, 0))
												{
													Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												}
											}
											break;
										
										case 1:
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFDF", 7, 0, 0, 0))
											{
												Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
											}
											break;
										}
									}
							}
						}
						else if (!unk_0x405E212DDE472467(func_210(0), 0) && !unk_0x405E212DDE472467(func_210(1), 0))
						{
							if (Local_3107.f_15 < 50f)
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 1))
									{
										switch (unk_0x09AC81E49EA267F7(0, 2))
										{
											case 0:
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFAG", 7, 0, 0, 0))
												{
													Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												}
												break;
											
											case 1:
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFEM", 7, 0, 0, 0))
												{
													Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												}
												break;
											}
										}
								}
							}
							else
							{
								Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					if (!unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) && !(func_305(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) && func_224(unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) == -1))
					{
						if (func_108(10000, iLocal_3766))
						{
							if (Local_3107.f_15 < 50f)
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 1))
									{
										switch (func_13())
										{
											case 0:
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCMNS", 7, 0, 0, 0))
												{
													Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
													Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
													iLocal_3766 = unk_0x1C0640BA9A7327B3();
												}
												break;
											
											case 1:
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCFNS", 7, 0, 0, 0))
												{
													Local_3125.f_9 = unk_0x1C0640BA9A7327B3();
													Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
													iLocal_3766 = unk_0x1C0640BA9A7327B3();
												}
												break;
											}
										}
								}
							}
							else
							{
								iLocal_3766 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					else
					{
						iLocal_3766 = unk_0x1C0640BA9A7327B3();
					}
				}
			}
			break;
	}
	if (!func_98("FAM3_GCCVTM") && !func_98("FAM3_GCCVTF"))
	{
		if (iLocal_3703 == 0)
		{
			if (unk_0xC844350D5D58C99A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) && unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()) != Local_3201)
			{
				iLocal_3703 = unk_0x1C0640BA9A7327B3();
			}
		}
		else if (func_108(7500, iLocal_3703))
		{
			func_94("FAM3_GCCVTM", 1);
			func_94("FAM3_GCCVTF", 1);
		}
		else if (!func_93())
		{
			if (!func_220(&Local_3435, 1))
			{
				if (Local_3107.f_15 <= (50f / 2f))
				{
					if (iLocal_3737 == 0)
					{
						switch (func_13())
						{
							case 0:
								if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCCVTM", 7, 0, 0, 0))
								{
									func_94("FAM3_GCCVTM", 1);
								}
								break;
							
							case 1:
								if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_GCCVTF", 7, 0, 0, 0))
								{
									func_94("FAM3_GCCVTF", 1);
								}
								break;
							}
						}
					}
				}
			}
	}
}

float func_295(var uParam0, var uParam1)
{
	func_285(uParam0, &iVar0);
	func_285(uParam1, &iVar1);
	if (iVar0 != -1 && iVar1 != -1)
	{
		if (uParam0[iVar0]->f_15 <= uParam1[iVar1]->f_15)
		{
			return uParam0[iVar0]->f_15;
		}
		else
		{
			return uParam1[iVar1]->f_15;
		}
	}
	else if (iVar0 != -1)
	{
		return uParam0[iVar0]->f_15;
	}
	else if (iVar1 != -1)
	{
		return uParam1[iVar1]->f_15;
	}
	return -1f;
}

void func_296(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_245(iParam3), 0);
}

int func_297()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return 1;
	}
	return 0;
}

int func_298(char* sParam0)
{
	if (func_93())
	{
		MemCopy(&uVar0, {func_92()}, 4);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_299(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_88(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_75(sParam3, iParam4, bParam7);
}

struct<6> func_300()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar7])))
			{
				return Global_19673[iVar7];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar8])))
					{
						return Global_19673[iVar8];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_301(int iParam0)
{
	Global_21816 = iParam0;
}

void func_302(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_303(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != 4)
	{
		iParam0->f_8[iParam1] = iParam2;
	}
}

int func_304(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_305(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_306(int iParam0)
{
	if (iLocal_3752 == 0)
	{
		if ((((((!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1184,89f, 709,6f, 132,38f, -1133,41f, 679,84f, 161,1f, 36f, 0, true, 0) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1062,28f, 662,22f, 125,02f, -1138,02f, 681,84f, 161,37f, 36f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1065,68f, 661,26f, 121,1f, -976,84f, 641,13f, 153,91f, 36f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -894,49f, 655,77f, 113,47f, -985,13f, 640,53f, 154,35f, 36f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -898,85f, 657,44f, 113,6f, -823,46f, 645,49f, 144,01f, 36f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -770,93f, 551,06f, 101,91f, -827,24f, 649,55f, 144,36f, 36f, 0, true, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -770,974f, 557,36f, 102,67f, -700,16f, 501,75f, 124,6f, 36f, 0, true, 0))
		{
			if (iLocal_3702 == 0)
			{
				if (iLocal_3710 == 1)
				{
					iLocal_3702 = unk_0x1C0640BA9A7327B3();
				}
			}
			else if (func_108(10000, iLocal_3702))
			{
				iLocal_3752 = 1;
			}
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_3052, true) < 100f)
			{
				iLocal_3752 = 1;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			unk_0x523BCC9DC80CD82F(-808831384);
			unk_0x523BCC9DC80CD82F(1329576454);
			if (unk_0xB87F6CF6E5628C67(-808831384) && unk_0xB87F6CF6E5628C67(1329576454))
			{
				vLocal_3874[0] = { -2,15f, -3f, 0f };
				vLocal_3874[1] = { 2,15f, 3f, 0f };
				*iParam0++;
			}
			break;
		
		case 1:
			if (iLocal_3752 == 1)
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -857,8738f, 220,1788f, 73,88277f, 20f, 28f, 8f, false, true, 0))
				{
					if (unk_0xDE5F9F54005367A1(vVar0, &vVar3, 0, 1077936128, 0))
					{
						if (unk_0x0EB28750412C3A5A(vVar0, vVar3, true) < 7f)
						{
							if (func_385(unk_0x16F2683693E537C9(), &vLocal_3745, &fLocal_3744, 18, func_197(unk_0x06F8112AA79C53D9(0, 26), 10f, 100f), func_197(unk_0x06F8112AA79C53D9(0, 26), 60f, 180f), 0))
							{
								if (!unk_0x8E28E832BEAC3DCE(vLocal_3745, 3f))
								{
									fVar8 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
									fVar7 = unk_0x755FF954DAE327E1((fVar8 - fLocal_3744));
									if (fVar7 > 180f)
									{
										fVar7 = unk_0x755FF954DAE327E1((fVar7 - 360f));
									}
									if (fVar7 < 90f)
									{
										fVar9 = fLocal_3744;
									}
									else
									{
										fVar9 = (fLocal_3744 + 180f);
									}
									iVar6 = 0;
									while (iVar6 < Local_3881)
									{
										Local_3881[iVar6].f_6 = -808831384;
										Local_3881[iVar6].f_2 = { unk_0x8A5E176FF719A014(vLocal_3745, fLocal_3744, vLocal_3874[iVar6]) };
										Local_3881[iVar6].f_5 = fVar9;
										Local_3881[iVar6].f_12 = 0;
										unk_0x28F5E4DA506AC0CA(Local_3881[iVar6].f_2, 3f, 0, 0, 0, 0, false, 0);
										iVar6++;
									}
									*iParam0++;
								}
							}
						}
					}
				}
				else if (unk_0xDE5F9F54005367A1(vVar0, &vVar3, 0, 1077936128, 0))
				{
					if (unk_0x0EB28750412C3A5A(vVar0, vVar3, true) < 5f)
					{
						if (func_385(unk_0x16F2683693E537C9(), &vLocal_3745, &fLocal_3744, 18, func_197(unk_0x06F8112AA79C53D9(0, 26), 15f, 125f), func_197(unk_0x06F8112AA79C53D9(0, 26), 60f, 180f), 0))
						{
							if (!unk_0x8E28E832BEAC3DCE(vLocal_3745, 3f))
							{
								fVar12 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
								fVar11 = unk_0x755FF954DAE327E1((fVar12 - fLocal_3744));
								if (fVar11 > 180f)
								{
									fVar11 = unk_0x755FF954DAE327E1((fVar11 - 360f));
								}
								if (fVar11 < 90f)
								{
									fVar13 = fLocal_3744;
								}
								else
								{
									fVar13 = (fLocal_3744 + 180f);
								}
								iVar10 = 0;
								while (iVar10 < Local_3881)
								{
									Local_3881[iVar10].f_6 = -808831384;
									Local_3881[iVar10].f_2 = { unk_0x8A5E176FF719A014(vLocal_3745, fLocal_3744, vLocal_3874[iVar10]) };
									Local_3881[iVar10].f_5 = fVar13;
									Local_3881[iVar10].f_12 = 0;
									unk_0x28F5E4DA506AC0CA(Local_3881[iVar10].f_2, 3f, 0, 0, 0, 0, false, 0);
									iVar10++;
								}
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			unk_0x9501364A300048C6();
			if (func_337(&(Local_3881[0]), 0, 0, 145, 0, -1, 0, 0, 3, 0) && func_337(&(Local_3881[1]), 0, 0, 145, 0, -1, 0, 0, 3, 0))
			{
				Local_3926[0] = func_336(Local_3881[0], 1329576454, -1, 200, 453432689);
				Local_3926[1] = func_336(Local_3881[0], 1329576454, 0, 200, 453432689);
				Local_3963[0] = func_336(Local_3881[1], 1329576454, -1, 200, 453432689);
				Local_3963[1] = func_336(Local_3881[1], 1329576454, 0, 200, 453432689);
				if (unk_0xDF1306B443CD3D15(Local_3881[0], 0))
				{
					unk_0xD458AC1C1D29C3B4(Local_3881[0], 1000, 0);
					unk_0x5DAB50E08C3C504A(Local_3881[0], 1000f);
					unk_0xDC544F7DF5E5164D(Local_3881[0], 1000f);
					unk_0x2F625BED8BF7F26A(Local_3881[0]);
					unk_0xC869A329D6194F52(Local_3881[0], 10f, 1000, 0, 0, 0, -1);
					unk_0xB9FD7450C0DAB575(Local_3881[0], 1084227584);
					unk_0x1AEF7184B203A58D(Local_3881[0], 5f);
					unk_0x2E1E5367A885F9B7(Local_3881[0], "FAMILY_3_ENEMY_CARS_GROUP", 0);
				}
				if (unk_0xDF1306B443CD3D15(Local_3881[1], 0))
				{
					unk_0xD458AC1C1D29C3B4(Local_3881[1], 1000, 0);
					unk_0x5DAB50E08C3C504A(Local_3881[1], 1000f);
					unk_0xDC544F7DF5E5164D(Local_3881[1], 1000f);
					unk_0x2F625BED8BF7F26A(Local_3881[1]);
					unk_0xC869A329D6194F52(Local_3881[1], 10f, 1000, 0, 0, 0, -1);
					unk_0xB9FD7450C0DAB575(Local_3881[1], 1084227584);
					unk_0x1AEF7184B203A58D(Local_3881[1], 5f);
					unk_0x2E1E5367A885F9B7(Local_3881[1], "FAMILY_3_ENEMY_CARS_GROUP", 0);
				}
				Local_3926[0].f_9 = 0;
				Local_3926[1].f_9 = 0;
				Local_3963[0].f_9 = 0;
				Local_3963[1].f_9 = 0;
				func_290(&(Local_3926[0]), 0);
				func_290(&(Local_3926[1]), 0);
				func_290(&(Local_3963[0]), 0);
				func_290(&(Local_3963[1]), 0);
				unk_0x71199B01895C6202(-808831384);
				unk_0x71199B01895C6202(1329576454);
				func_335(Local_3926[0], 0);
				func_335(Local_3926[1], 0);
				func_335(Local_3963[0], 0);
				func_335(Local_3963[1], 0);
				func_334(221, 0);
				Local_3881[0].f_14 = { -2,15f, -3f, 0f };
				Local_3881[1].f_14 = { 2,15f, 3f, 0f };
				Local_3881[0].f_21 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(Local_3881[0], true), true);
				Local_3881[1].f_21 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(Local_3881[1], true), true);
				func_333(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &(Local_3881[0].f_17), &(Local_3881[0].f_20));
				func_333(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &(Local_3881[1].f_17), &(Local_3881[1].f_20));
				unk_0xC92DB9682A650680("FAM3_MEX_CHASE");
				unk_0x744B6A2DDB2E7563(unk_0x16F2683693E537C9(), 453432689, unk_0x282232D7B7DE504A(unk_0x16F2683693E537C9(), 453432689, 1) * 2);
				iLocal_3754 = 1;
				iLocal_3760 = unk_0x1C0640BA9A7327B3();
				bLocal_3761 = false;
				*iParam0++;
			}
			break;
		
		case 3:
			if (bLocal_3761 == 0)
			{
				if (func_108(10000, iLocal_3760))
				{
					bLocal_3761 = true;
				}
			}
			func_331(&Local_3926, &(Local_3881[0]));
			func_331(&Local_3963, &(Local_3881[1]));
			func_327(&Local_3926, &(Local_3881[0]), 300f, func_197(bLocal_3761, 150f, 200f));
			func_327(&Local_3963, &(Local_3881[1]), 300f, func_197(bLocal_3761, 150f, 200f));
			func_324(&(Local_3926[0]), &(Local_3881[0]), unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &iLocal_3756);
			func_324(&(Local_3926[1]), &(Local_3881[0]), unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &iLocal_3756);
			func_324(&(Local_3963[0]), &(Local_3881[1]), unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &iLocal_3756);
			func_324(&(Local_3963[1]), &(Local_3881[1]), unk_0x16F2683693E537C9(), unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &iLocal_3756);
			if (Local_3881[0].f_12 == 0 && Local_3881[1].f_12 == 0)
			{
				if (unk_0xC844350D5D58C99A(Local_3881[0]))
				{
					Local_3881[0].f_12 = unk_0xF649DD3BF44195C7(Local_3881[0], func_210(1), 17);
					Local_3881[0].f_12 = unk_0xF649DD3BF44195C7(Local_3881[0], func_210(0), 17);
				}
				if (unk_0xC844350D5D58C99A(Local_3881[1]))
				{
					Local_3881[1].f_12 = unk_0xF649DD3BF44195C7(Local_3881[1], func_210(1), 17);
					Local_3881[1].f_12 = unk_0xF649DD3BF44195C7(Local_3881[1], func_210(0), 17);
				}
			}
			iVar14 = 0;
			while (iVar14 <= 1)
			{
				func_323(Local_3881[iVar14], 200);
				func_322(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), Local_3881[iVar14]);
				func_317(Local_3881[iVar14], unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &(Local_3881[iVar14].f_2), &(Local_3881[iVar14].f_5), &(Local_3881[iVar14].f_17), &(Local_3881[iVar14].f_20), &(Local_3881[iVar14].f_13), Local_3881[iVar14].f_14, 3500, 45f, &(Local_3881[iVar14].f_21));
				iVar14++;
			}
			if (((((!unk_0xC844350D5D58C99A(Local_3881[0]) && !unk_0xC844350D5D58C99A(Local_3881[1])) && !unk_0xC844350D5D58C99A(Local_3926[0])) && !unk_0xC844350D5D58C99A(Local_3926[1])) && !unk_0xC844350D5D58C99A(Local_3963[0])) && !unk_0xC844350D5D58C99A(Local_3963[1]))
			{
				func_316(0, -1);
				iLocal_3755 = 1;
				iLocal_3754 = 0;
				iLocal_3708 = 1;
				unk_0x34D79252800B23FF(5);
				unk_0x060F249A9A3E3F4E(1);
				unk_0x51B096AAC60548C1(1f);
				func_315(1);
				func_308(0);
				func_307();
				unk_0x8D17794CE3273D70("missfam3");
				unk_0xC92DB9682A650680("FAM3_MEX_LOST");
				*iParam0++;
			}
			break;
	}
}

void func_307()
{
	if (Global_30992)
	{
		Global_30992 = 0;
		StringCopy(&Global_30993, "NULL", 32);
	}
}

void func_308(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_309(iVar0, bParam0);
		iVar0++;
	}
}

void func_309(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_314(iParam0, 2, 1))
		{
			func_313(iParam0, 2, 1);
		}
	}
	else if (func_314(iParam0, 2, 1))
	{
		func_310(iParam0, 2, 1);
	}
}

void func_310(int iParam0, int iParam1, bool bParam2)
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
		if (func_146() == 0)
		{
			iVar0 = func_151(func_312(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_311(func_312(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_311(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_152(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_312(int iParam0)
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

void func_313(int iParam0, int iParam1, bool bParam2)
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
		if (func_146() == 0)
		{
			iVar0 = func_151(func_312(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_311(func_312(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_314(int iParam0, int iParam1, bool bParam2)
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
		if (func_146() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_151(func_312(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_315(int iParam0)
{
	Global_96050 = iParam0;
}

void func_316(bool bParam0, int iParam1)
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

void func_317(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam10, float fParam11, var uParam12)
{
	func_320(&vLocal_3849, &uLocal_3840);
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (((((((((unk_0xC844350D5D58C99A(iParam1) && iParam0 != iParam1) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam1))) && unk_0xF79A7BCA9E38BBBC(iParam1)) && !unk_0x8B38C0DAEEDB5F9C(iParam1)) && func_319(iParam0)) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, true), unk_0x68F4C0EC296D3901(iParam0, true), true) > *uParam12)
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x8A5E176FF719A014(*uParam2, *uParam3, vParam7) };
				func_333(iParam1, uParam4, uParam5);
			}
			if (!unk_0x03068588A1FCED1A(iParam0))
			{
				*uParam6 = unk_0x1C0640BA9A7327B3();
			}
			else if ((unk_0x1C0640BA9A7327B3() - *uParam6) > iParam10)
			{
				if (func_292(iParam0, iParam1, 1) > fParam11 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, true), *uParam2, true) > 25f)
				{
					if (!func_318(*uParam2))
					{
						if (!unk_0x8E28E832BEAC3DCE(*uParam2, 3f))
						{
							unk_0x745CE398A4B0A3C6(*uParam2, 1,5f, 0);
							unk_0x28F5E4DA506AC0CA(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							unk_0xA47B46945FF6DE74(iParam0, *uParam2, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(iParam0, *uParam3);
							unk_0xB9FD7450C0DAB575(iParam0, 1084227584);
							unk_0x1AEF7184B203A58D(iParam0, 10f);
							unk_0x56FDC9ADE35F7DB0(iParam0, true, 1, 0);
							*uParam6 = unk_0x1C0640BA9A7327B3();
							*uParam12 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, true), unk_0x68F4C0EC296D3901(iParam0, true), true);
							iLocal_3809 = unk_0x1C0640BA9A7327B3() + 1000;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < vLocal_3849.x)
							{
								vVar1 = { unk_0x8A5E176FF719A014(vLocal_3849[iVar0], uLocal_3840[iVar0], vParam7) };
								if (!func_318(vVar1))
								{
									if (!unk_0x8E28E832BEAC3DCE(vVar1, 2f))
									{
										unk_0x745CE398A4B0A3C6(vVar1, 1,5f, 0);
										unk_0x28F5E4DA506AC0CA(vVar1, 3f, 0, 0, 0, 0, false, 0);
										unk_0xA47B46945FF6DE74(iParam0, vVar1, 1, false, 0, 1);
										unk_0xD8F6A53F4799FAFE(iParam0, uLocal_3840[iVar0]);
										unk_0xB9FD7450C0DAB575(iParam0, 1084227584);
										unk_0x1AEF7184B203A58D(iParam0, 10f);
										unk_0x56FDC9ADE35F7DB0(iParam0, true, 1, 0);
										*uParam6 = unk_0x1C0640BA9A7327B3();
										*uParam12 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, true), unk_0x68F4C0EC296D3901(iParam0, true), true);
										return;
										iLocal_3809 = unk_0x1C0640BA9A7327B3() + 1000;
									}
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x1C0640BA9A7327B3();
		}
	}
}

int func_318(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (!unk_0xBBA8A868118C90ED(iParam0, -1, 0))
			{
				iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_320(var uParam0, var uParam1)
{
	if (func_318(*uParam0[0]))
	{
		func_333(unk_0x16F2683693E537C9(), uParam0[0], uParam1[0]);
	}
	else
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), *uParam0[0], true) > 30f)
		{
			func_321(uParam0, uParam1);
		}
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			iVar0++;
		}
	}
}

void func_321(var uParam0, var uParam1)
{
	iVar0 = (*uParam0 - 1);
	while (iVar0 >= 1)
	{
		*uParam0[iVar0] = { *(uParam0[(iVar0 - 1)]) };
		(*uParam1)[iVar0] = (*uParam1)[(iVar0 - 1)];
		iVar0 = (iVar0 + -1);
	}
	func_333(unk_0x16F2683693E537C9(), uParam0[0], uParam1[0]);
}

void func_322(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0xC844350D5D58C99A(iParam1))
				{
					if (!unk_0x437347B10A200C4B(iParam1, 0))
					{
						if ((unk_0x1C0640BA9A7327B3() - iLocal_3704) > 0)
						{
							if (unk_0x1B3D109B39CC2C89(iParam1, iParam0) || unk_0xB87D13D0C064E9D1(iParam0, iParam1, 1))
							{
								if (unk_0x3D1053F9EB43B7AD(iParam1, unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, -1f, -1,5f), unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, -6f, 3f), 4f, 0, true, 0))
								{
									unk_0xCEAA091B490F8407(-1, "FAMILY3_REAR_END_MASTER", iParam0, 0, false, 0);
								}
								unk_0xE910A68AA670B4AA(iParam0);
								iLocal_3704 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3000, 5000));
							}
						}
					}
				}
			}
		}
	}
}

void func_323(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x7F6DC62EA9922664(iParam0) < iParam1)
			{
				unk_0xD458AC1C1D29C3B4(iParam0, 0, 0);
				unk_0x5DAB50E08C3C504A(iParam0, 0f);
			}
		}
	}
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(*iParam0) && !unk_0xEB6A8945D1AC98A1(iParam2))
	{
		iParam0->f_15 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*iParam0, true), unk_0x68F4C0EC296D3901(iParam2, true), true);
		if (*iParam4 == 0)
		{
			if (unk_0xB87D13D0C064E9D1(*iParam0, iParam2, 1))
			{
				if (unk_0x54648B774DB42A3A(*iParam0, 0, 2))
				{
					unk_0xE910A68AA670B4AA(*iParam0);
					*iParam4 = 1;
				}
			}
			if (unk_0xC844350D5D58C99A(*iParam1))
			{
				if (!unk_0x437347B10A200C4B(*iParam1, 0))
				{
					if (unk_0xB87D13D0C064E9D1(*iParam1, iParam2, 1))
					{
						if (unk_0x54648B774DB42A3A(*iParam1, 0, 2))
						{
							unk_0xE910A68AA670B4AA(*iParam1);
							*iParam4 = 1;
						}
					}
				}
			}
			if (iParam0->f_8 != 0)
			{
				if (func_108(10000, iParam0->f_8))
				{
					*iParam4 = 1;
				}
			}
		}
		if (iParam0->f_16 != 7)
		{
			if (unk_0xE9FDA1035CFEA94F(*iParam0) || unk_0x36646919F20EAFFC(*iParam0))
			{
				func_290(iParam0, 7);
			}
		}
		switch (iParam0->f_16)
		{
			case 0:
				func_290(iParam0, 9);
				break;
			
			case 7:
				if (iParam0->f_13 == 0)
				{
					unk_0xB35CCEC0D4946813(*iParam0, 0);
					unk_0x3CC33E4E9CE523F4(*iParam0, 2);
					unk_0x083F03A847B640E9(*iParam0, 2);
					unk_0xAFF39FB306F8E232(*iParam0, 42, 1);
					unk_0xAFF39FB306F8E232(*iParam0, 50, 1);
					unk_0xAFF39FB306F8E232(*iParam0, 13, 1);
					unk_0xAFF39FB306F8E232(*iParam0, 1, 0);
					unk_0xAFF39FB306F8E232(*iParam0, 3, 1);
					unk_0xAFF39FB306F8E232(*iParam0, 21, 1);
					unk_0x67415F01577A142E(*iParam0, 8, 0,1f);
					unk_0x298903DD96203C2C(*iParam0, 6);
					unk_0x29CD9554726C7577(*iParam0, 125);
					unk_0x7C8478BF70C1E072(*iParam0, 200f, 0);
					unk_0x11AD11297DC58CC7(*iParam0, false);
					iParam0->f_13 = 1;
				}
				if (func_326(iParam2, iParam3))
				{
					if (iParam0->f_15 > 20f)
					{
						if (unk_0xC844350D5D58C99A(*iParam1))
						{
							if (((((unk_0xDF1306B443CD3D15(*iParam1, 0) && unk_0x7F6DC62EA9922664(*iParam1) > 0) && unk_0x6EE94F60DA2A2273(*iParam1) > 0f) && !unk_0x5B17F10380E80E5B(*iParam1)) && !func_325(iParam1)) && !unk_0x377BE9A1BF38C7CE(*iParam1))
							{
								if (!unk_0xC42A92762C58E1B9(*iParam0, *iParam1, 0))
								{
									if (unk_0xBBA8A868118C90ED(*iParam1, -1, 0) || unk_0xBBA8A868118C90ED(*iParam1, 0, 0))
									{
										func_290(iParam0, 2);
									}
								}
								else if (unk_0x82CCEAB29E9451DD(*iParam0, *iParam1))
								{
									if (*iParam4 == 1)
									{
										func_290(iParam0, 9);
									}
									else
									{
										func_290(iParam0, 8);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (iParam0->f_13 == 0)
				{
					if (func_304(*iParam0, *iParam1, -1))
					{
						if (!unk_0xBBA8A868118C90ED(*iParam1, 0, 0))
						{
							iVar0 = unk_0xA30B8362589C124A(*iParam1, 0, 0);
							if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0))
							{
								unk_0x4E885A246A9D983A(*iParam0, 115, true);
							}
							else
							{
								unk_0x4E885A246A9D983A(*iParam0, 115, false);
							}
						}
						else
						{
							unk_0x4E885A246A9D983A(*iParam0, 115, false);
						}
					}
					unk_0xAFF39FB306F8E232(*iParam0, 3, 0);
					unk_0xAFF39FB306F8E232(*iParam0, 1, 1);
					unk_0xAFF39FB306F8E232(*iParam0, 2, 0);
					unk_0x7C8478BF70C1E072(*iParam0, 200f, 0);
					unk_0x11AD11297DC58CC7(*iParam0, false);
					iParam0->f_8 = unk_0x1C0640BA9A7327B3();
					iParam0->f_13 = 1;
				}
				unk_0x9DD8618CA5BF832D(*iParam0, 128, true);
				if (*iParam4 == 1)
				{
					func_290(iParam0, 9);
				}
				if (unk_0xDF1306B443CD3D15(*iParam1, 0))
				{
					if (unk_0x82CCEAB29E9451DD(*iParam0, *iParam1))
					{
						if (iParam0->f_15 < 17,5f)
						{
							if (!func_326(iParam2, iParam3))
							{
								func_290(iParam0, 7);
							}
						}
						if (unk_0xBBA8A868118C90ED(*iParam1, -1, 0))
						{
							func_290(iParam0, 5);
						}
					}
				}
				if (!unk_0xDF1306B443CD3D15(*iParam1, 0))
				{
					func_290(iParam0, 7);
				}
				else if (unk_0x8B38C0DAEEDB5F9C(*iParam1))
				{
					if ((unk_0x5B17F10380E80E5B(*iParam1) || unk_0x377BE9A1BF38C7CE(*iParam1)) || !unk_0xF79A7BCA9E38BBBC(*iParam1))
					{
						if (unk_0xC42A92762C58E1B9(*iParam0, *iParam1, 0))
						{
							unk_0x75CDA8644CD3B5F5(*iParam0, 0, 256);
						}
						func_290(iParam0, 7);
					}
				}
				break;
			
			case 9:
				if (iParam0->f_13 == 0)
				{
					if (func_304(*iParam0, *iParam1, -1))
					{
						if (!unk_0xBBA8A868118C90ED(*iParam1, 0, 0))
						{
							iVar1 = unk_0xA30B8362589C124A(*iParam1, 0, 0);
							if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
							{
								unk_0x4E885A246A9D983A(*iParam0, 115, true);
							}
							else
							{
								unk_0x4E885A246A9D983A(*iParam0, 115, false);
							}
						}
						else
						{
							unk_0x4E885A246A9D983A(*iParam0, 115, false);
						}
					}
					unk_0xAFF39FB306F8E232(*iParam0, 3, 0);
					unk_0xAFF39FB306F8E232(*iParam0, 1, 1);
					unk_0xAFF39FB306F8E232(*iParam0, 2, 1);
					unk_0x298903DD96203C2C(*iParam0, 3);
					unk_0x29CD9554726C7577(*iParam0, 80);
					unk_0x7C8478BF70C1E072(*iParam0, 200f, 0);
					unk_0x11AD11297DC58CC7(*iParam0, false);
					iParam0->f_13 = 1;
				}
				if (unk_0xDF1306B443CD3D15(*iParam1, 0))
				{
					if (unk_0x82CCEAB29E9451DD(*iParam0, *iParam1))
					{
						if (unk_0xBBA8A868118C90ED(*iParam1, -1, 0))
						{
							func_290(iParam0, 5);
						}
						if (iParam0->f_15 < 17,5f)
						{
							if (!func_326(iParam2, iParam3))
							{
								func_290(iParam0, 7);
							}
						}
					}
				}
				if (!unk_0xDF1306B443CD3D15(*iParam1, 0))
				{
					func_290(iParam0, 7);
				}
				else if (unk_0x8B38C0DAEEDB5F9C(*iParam1))
				{
					if ((unk_0x5B17F10380E80E5B(*iParam1) || unk_0x377BE9A1BF38C7CE(*iParam1)) || !unk_0xF79A7BCA9E38BBBC(*iParam1))
					{
						if (unk_0xC42A92762C58E1B9(*iParam0, *iParam1, 0))
						{
							unk_0x75CDA8644CD3B5F5(*iParam0, 0, 256);
						}
						func_290(iParam0, 7);
					}
				}
				break;
			
			case 5:
				if (iParam0->f_13 == 0)
				{
					if (unk_0xDF1306B443CD3D15(*iParam1, 0))
					{
						unk_0x16A6C233289238AA(*iParam0, *iParam1, 0);
						unk_0x11AD11297DC58CC7(*iParam0, true);
					}
					iParam0->f_13 = 1;
				}
				if (!unk_0xDF1306B443CD3D15(*iParam1, 0))
				{
					func_290(iParam0, 7);
				}
				else if (unk_0x82CCEAB29E9451DD(*iParam0, *iParam1))
				{
					if (func_304(*iParam0, *iParam1, -1))
					{
						if (!unk_0xBBA8A868118C90ED(*iParam1, 0, 0))
						{
							iVar2 = unk_0xA30B8362589C124A(*iParam1, 0, 0);
							if (unk_0xC844350D5D58C99A(iVar2) && !unk_0x437347B10A200C4B(iVar2, 0))
							{
								unk_0x4E885A246A9D983A(*iParam0, 115, true);
							}
							else
							{
								unk_0x4E885A246A9D983A(*iParam0, 115, false);
							}
						}
						else
						{
							unk_0x4E885A246A9D983A(*iParam0, 115, false);
						}
						if (*iParam4 == 1)
						{
							func_290(iParam0, 9);
						}
						else
						{
							func_290(iParam0, 8);
						}
					}
					else if (iParam0->f_15 < 17,5f)
					{
						if (!func_326(iParam2, iParam3))
						{
							func_290(iParam0, 7);
						}
					}
				}
				if (!unk_0x405E212DDE472467(*iParam0, 0))
				{
					if (!func_326(iParam2, iParam3))
					{
						if (iParam0->f_15 < 17,5f)
						{
							func_290(iParam0, 7);
						}
					}
					else
					{
						func_290(iParam0, 2);
					}
				}
				break;
			
			case 2:
				if (iParam0->f_13 == 0)
				{
					if (unk_0xC844350D5D58C99A(*iParam1))
					{
						if (unk_0xDF1306B443CD3D15(*iParam1, 0))
						{
							unk_0xAFF39FB306F8E232(*iParam0, 3, 0);
							unk_0xAFF39FB306F8E232(*iParam0, 1, 1);
							if (unk_0xBBA8A868118C90ED(*iParam1, -1, 0))
							{
								unk_0x5B1D360B9C6F0A09(*iParam0, *iParam1, 20000, -1, 2f, 9, 0);
							}
							else if (unk_0xBBA8A868118C90ED(*iParam1, 0, 0))
							{
								unk_0x5B1D360B9C6F0A09(*iParam0, *iParam1, 20000, 0, 2f, 9, 0);
							}
							unk_0x11AD11297DC58CC7(*iParam0, true);
							iParam0->f_7 = unk_0x1C0640BA9A7327B3();
						}
					}
					iParam0->f_13 = 1;
				}
				if (((unk_0xC844350D5D58C99A(*iParam1) && unk_0xDF1306B443CD3D15(*iParam1, 0)) && unk_0x7F6DC62EA9922664(*iParam1) > 0) && unk_0x6EE94F60DA2A2273(*iParam1) > 0f)
				{
					if (unk_0xC42A92762C58E1B9(*iParam0, *iParam1, 0))
					{
						if (*iParam4 == 1)
						{
							func_290(iParam0, 9);
						}
						else
						{
							func_290(iParam0, 8);
						}
					}
					else
					{
						if (iParam0->f_13 == 1)
						{
							if (func_108(5000, iParam0->f_7))
							{
								if (iParam0->f_15 > 25f && func_292(*iParam0, *iParam1, 1) < 10f)
								{
									if (!unk_0x0A059E0DB9253280(*iParam0) && !unk_0x0A059E0DB9253280(*iParam1))
									{
										if (unk_0xBBA8A868118C90ED(*iParam1, -1, 0))
										{
											unk_0xF821F915BC24D246(*iParam0, *iParam1, -1);
										}
										else if (unk_0xBBA8A868118C90ED(*iParam1, 0, 0))
										{
											unk_0xF821F915BC24D246(*iParam0, *iParam1, 0);
										}
									}
								}
								else
								{
									func_290(iParam0, 7);
								}
							}
						}
						if (unk_0xD1960163A3042274(*iParam0, -1794415470) == 1)
						{
							if (!unk_0x81A5359F25512A04(*iParam0))
							{
								if (!unk_0xBBA8A868118C90ED(*iParam1, -1, 0) || !unk_0xBBA8A868118C90ED(*iParam1, 0, 0))
								{
									func_290(iParam0, 2);
								}
								if (iParam0->f_15 < 17,5f)
								{
									if (!func_326(iParam2, iParam3))
									{
										func_290(iParam0, 7);
									}
								}
							}
						}
					}
				}
				else
				{
					func_290(iParam0, 7);
				}
				break;
			}
	}
}

int func_325(int iParam0)
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

int func_326(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
			{
				if (!unk_0x8B38C0DAEEDB5F9C(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_327(var uParam0, int iParam1, float fParam2, float fParam3)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xC844350D5D58C99A((*uParam0)[iVar0]))
		{
			if (unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
			{
				if (uParam0[iVar0]->f_17 == 0)
				{
					uParam0[iVar0]->f_17 = func_330(uParam0[iVar0]);
					func_328(uParam0[iVar0]->f_17, &iLocal_3762, &iLocal_3763, &iLocal_3764, &iLocal_3765);
					if (unk_0xE4EDC4B0E92C078B(uParam0[iVar0]->f_1))
					{
						unk_0x142CC44DB769B57E(&(uParam0[iVar0]->f_1));
					}
				}
				else
				{
					unk_0x8B4C4CA774181102(3f, 0f, 3);
					unk_0x6DAD7906B73F064D(uParam0[iVar0]);
				}
			}
			else
			{
				iVar1 = 1;
				if (!unk_0x405E212DDE472467((*uParam0)[iVar0], 0))
				{
					if (func_292(unk_0x16F2683693E537C9(), (*uParam0)[iVar0], 1) > fParam3)
					{
						uParam0[iVar0]->f_17 = 1;
						unk_0x6DAD7906B73F064D(uParam0[iVar0]);
						if (unk_0xE4EDC4B0E92C078B(uParam0[iVar0]->f_1))
						{
							unk_0x142CC44DB769B57E(&(uParam0[iVar0]->f_1));
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(*iParam1))
				{
					if (unk_0xDF1306B443CD3D15(*iParam1, 0))
					{
						if (unk_0xC42A92762C58E1B9((*uParam0)[iVar0], *iParam1, 0))
						{
							iVar2 = 1;
							if (func_292(unk_0x16F2683693E537C9(), (*uParam0)[iVar0], 1) > fParam2)
							{
								uParam0[iVar0]->f_17 = 1;
								unk_0x6DAD7906B73F064D(uParam0[iVar0]);
								if (unk_0xE4EDC4B0E92C078B(uParam0[iVar0]->f_1))
								{
									unk_0x142CC44DB769B57E(&(uParam0[iVar0]->f_1));
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(*iParam1))
	{
		if (unk_0xDF1306B443CD3D15(*iParam1, 0))
		{
			if (iVar1 == 1 || iVar2 == 1)
			{
				if (func_292(unk_0x16F2683693E537C9(), *iParam1, 1) > fParam2)
				{
					unk_0x78CCB85A0DC35709(*iParam1);
					unk_0x7AA3AFA47C4179D1(*iParam1);
					unk_0x06FF977AA95DCCE3(*iParam1, 0);
					unk_0x046C362CF15F1935(iParam1);
					if (unk_0xE4EDC4B0E92C078B(iParam1->f_1))
					{
						unk_0x142CC44DB769B57E(&(iParam1->f_1));
					}
				}
			}
			else
			{
				unk_0x78CCB85A0DC35709(*iParam1);
				unk_0x7AA3AFA47C4179D1(*iParam1);
				unk_0x06FF977AA95DCCE3(*iParam1, 0);
				unk_0x046C362CF15F1935(iParam1);
				if (unk_0xE4EDC4B0E92C078B(iParam1->f_1))
				{
					unk_0x142CC44DB769B57E(&(iParam1->f_1));
				}
			}
		}
		else
		{
			unk_0x78CCB85A0DC35709(*iParam1);
			unk_0x7AA3AFA47C4179D1(*iParam1);
			unk_0x06FF977AA95DCCE3(*iParam1, 0);
			unk_0x046C362CF15F1935(iParam1);
			if (unk_0xE4EDC4B0E92C078B(iParam1->f_1))
			{
				unk_0x142CC44DB769B57E(&(iParam1->f_1));
			}
		}
	}
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 5:
			*iParam1++;
			func_329(224, 1, 0);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_329(227, 1, 0);
			}
			break;
		
		case 6:
			*iParam2++;
			func_329(224, 1, 0);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_329(227, 1, 0);
			}
			break;
		
		case 2:
			*iParam3++;
			break;
		
		case 3:
			*iParam4++;
			break;
	}
}

void func_329(int iParam0, int iParam1, bool bParam2)
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

int func_330(var uParam0)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (unk_0x437347B10A200C4B(*uParam0, 0))
		{
			iVar0 = unk_0xA390E7DD86EDBEA0(*uParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0xEC560E589DF8370E(iVar0))
				{
					iVar1 = unk_0x940C1429253D3B1B(iVar0);
					if (iVar1 == func_210(1))
					{
						switch (func_13())
						{
							case 0:
								return 3;
								break;
							
							case 1:
								return 6;
								break;
						}
					}
					else if (iVar1 == func_210(0))
					{
						switch (func_13())
						{
							case 0:
								return 5;
								break;
							
							case 1:
								return 2;
								break;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xE2F1E99DD161A861(iVar0))
				{
					return 4;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				uParam0->f_12++;
				if (uParam0->f_12 == 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_331(var uParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam1))
	{
		if (unk_0xDF1306B443CD3D15(*uParam1, 0))
		{
			iVar0 = 0;
			while (iVar0 <= (*uParam0 - 1))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
				{
					if (unk_0xC42A92762C58E1B9((*uParam0)[iVar0], *uParam1, 0))
					{
						if (unk_0xE4EDC4B0E92C078B(uParam0[iVar0]->f_1))
						{
							unk_0x142CC44DB769B57E(&(uParam0[iVar0]->f_1));
						}
						iVar1 = 1;
					}
					else if (!unk_0xE4EDC4B0E92C078B(uParam0[iVar0]->f_1))
					{
						uParam0[iVar0]->f_1 = func_332((*uParam0)[iVar0], 1, 145);
					}
				}
				iVar0++;
			}
			if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				if (iVar1 == 1)
				{
					uParam1->f_1 = func_243(unk_0x68F4C0EC296D3901(*uParam1, true), 0);
					unk_0x61755AC17D8F538E(uParam1->f_1, 1);
					unk_0x2A065371C9D96655(uParam1->f_1, 9);
					unk_0xDC5B2F9D0CCE3A10(uParam1->f_1, "BLIP_VEH");
				}
			}
			else
			{
				vVar2 = { unk_0xAC14F6E4B17D7835(uParam1->f_1) };
				vVar5 = { unk_0x68F4C0EC296D3901(*uParam1, true) };
				vVar2.x = (vVar2.x + (((vVar5.x - vVar2.x) / 1,1f) * timestep()));
				vVar2.y = (vVar2.y + (((vVar5.y - vVar2.y) / 1,1f) * timestep()));
				vVar2.z = (vVar2.z + (((vVar5.z - vVar2.z) / 1,1f) * timestep()));
				unk_0x2F9282246F89FFD1(uParam1->f_1, vVar2);
				if (iVar1 == 0)
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_1));
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_1));
			}
			iVar0 = 0;
			while (iVar0 <= (*uParam0 - 1))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0[iVar0]->f_1))
					{
						uParam0[iVar0]->f_1 = func_332((*uParam0)[iVar0], 1, 145);
					}
				}
				iVar0++;
			}
		}
	}
}

int func_332(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_281(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2].f_3));
	}
	return iVar0;
}

void func_333(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			*uParam1 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			*uParam2 = unk_0xD9522BA9E27E1349(iParam0);
		}
	}
}

void func_334(int iParam0, bool bParam1)
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

void func_335(int iParam0, bool bParam1)
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

int func_336(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = unk_0x852A19533F896693(iParam0, 26, iParam1, iParam2, 1, true);
		unk_0x093A734E5AEA758F(iVar0, iParam3);
		unk_0xD458AC1C1D29C3B4(iVar0, iParam3, 0);
		unk_0x1365063FA6365BE8(iVar0, true);
		unk_0x262EF6C6306BEA6C(iVar0, iParam4, -1, false, true);
		unk_0xDAB3108F02A4255A(iVar0, 1, iParam4);
		unk_0x6DF7BF67E86AAE86(iVar0, iLocal_3105);
		unk_0x20EC6650986ACDC7(iVar0, 1);
		unk_0x26A6B1686E33113F(iVar0, 1);
		unk_0xBAFED2F6486F771A(iVar0, 512, true);
		unk_0xAFF39FB306F8E232(iVar0, 17, 0);
		unk_0xAFF39FB306F8E232(iVar0, 5, 1);
		unk_0x4E885A246A9D983A(iVar0, 188, true);
		unk_0x4E885A246A9D983A(iVar0, 118, false);
		unk_0x4E885A246A9D983A(iVar0, 132, true);
		unk_0x4E885A246A9D983A(iVar0, 214, true);
		unk_0xE2F0767314863BD8(iVar0, 1, 0);
		unk_0x11AD11297DC58CC7(iVar0, true);
		return iVar0;
	}
	return 0;
}

int func_337(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (iParam1 == 0)
	{
		if (!unk_0xC844350D5D58C99A(*iParam0))
		{
			unk_0x523BCC9DC80CD82F(iParam0->f_6);
			if (unk_0xB87F6CF6E5628C67(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = func_384(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					unk_0x71199B01895C6202(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = unk_0x122AAB0B1D6F55AD(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1, 0);
					unk_0x71199B01895C6202(iParam0->f_6);
				}
				else if (func_380(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					unk_0x71199B01895C6202(iParam0->f_6);
				}
				if (unk_0xDF1306B443CD3D15(*iParam0, 0))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						unk_0xC002508A277213DE(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						unk_0xC6A6B4DDD6DC073A(*iParam0, iParam5);
					}
					unk_0x58A0C35FA7CA6162(*iParam0, iParam8, iParam9);
					unk_0x44A200C9B6E1CEA6(*iParam0, bParam4);
					unk_0xA072915CE3E5C457(*iParam0, !bParam4);
					unk_0x4D647C1236C18D14(*iParam0, !bParam4);
					unk_0x9A8BCD43DBDDCDCA(*iParam0, !bParam4, 0);
					if (unk_0x8E39AC3C76C8AA58(iParam0->f_6))
					{
						unk_0x2E81FA494A883541(*iParam0, 0, !bParam4);
						unk_0x2E81FA494A883541(*iParam0, 1, !bParam4);
						unk_0xA22F71BBC8173C39(*iParam0, !bParam4);
					}
					unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!unk_0xC844350D5D58C99A(*iParam0))
		{
			if (func_338(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				unk_0x44A200C9B6E1CEA6(*iParam0, bParam4);
				unk_0xA072915CE3E5C457(*iParam0, !bParam4);
				unk_0x4D647C1236C18D14(*iParam0, !bParam4);
				unk_0x9A8BCD43DBDDCDCA(*iParam0, !bParam4, 0);
				if (unk_0x8E39AC3C76C8AA58(iParam0->f_6))
				{
					unk_0x2E81FA494A883541(*iParam0, 0, !bParam4);
					unk_0x2E81FA494A883541(*iParam0, 1, !bParam4);
					unk_0xA22F71BBC8173C39(*iParam0, !bParam4);
				}
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

int func_338(int iParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, int iParam7)
{
	if (func_16(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_59(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (unk_0x134B62B726CEC8E6(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131])
		{
			Global_111638.f_2358.f_539.f_2407[0][iParam1] = 0;
		}
		if (Global_111638.f_2358.f_539.f_2407[0][iParam1] == Var5)
		{
			unk_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[0][iParam1]);
			if (unk_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[0][iParam1]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[0][iParam1], vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*iParam0, 0);
				unk_0x626D5ADA3EFAE431(*iParam0, 0);
				unk_0x44A200C9B6E1CEA6(*iParam0, true);
				unk_0xD458AC1C1D29C3B4(*iParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC002508A277213DE(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_5, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_7, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xD3421E391490133B(*iParam0, iVar103 + 1, !Global_111638.f_2358.f_539.f_2407[0][iParam1].f_11[iVar103]);
					iVar103++;
				}
				if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_24)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_24);
				}
				if (func_379(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_27));
					if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[0][iParam1].f_26 < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_26);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_84, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_85, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_86);
				unk_0xA22F71BBC8173C39(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_88);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_87);
				unk_0x85654A532F20966B(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_93, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_94, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_95);
				unk_0x7726E33AC3B60544(*iParam0, 2, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 28));
				unk_0x7726E33AC3B60544(*iParam0, 3, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 29));
				unk_0x7726E33AC3B60544(*iParam0, 0, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 30));
				unk_0x7726E33AC3B60544(*iParam0, 1, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_92, 31));
				if (unk_0x579935D850368851(*iParam0) > 1 && Global_111638.f_2358.f_539.f_2407[0][iParam1].f_89 >= 0)
				{
					unk_0x446EA2500F021666(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90 == 6)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[0][iParam1].f_90);
						}
					}
				}
				func_375(iParam0, &(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_31), &(Global_111638.f_2358.f_539.f_2407[0][iParam1].f_81));
				unk_0x0947AEED9914905B(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -1435919434)
					{
						func_373(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[0][iParam1]);
				}
				func_372(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_111638.f_2358.f_539.f_2407[1][iParam1] == Var5)
		{
			unk_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_2407[1][iParam1]);
			if (unk_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_2407[1][iParam1]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_2407[1][iParam1], vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*iParam0, 0);
				unk_0x626D5ADA3EFAE431(*iParam0, 0);
				unk_0x44A200C9B6E1CEA6(*iParam0, true);
				unk_0xD458AC1C1D29C3B4(*iParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC002508A277213DE(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_5, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_7, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xD3421E391490133B(*iParam0, iVar104 + 1, !Global_111638.f_2358.f_539.f_2407[1][iParam1].f_11[iVar104]);
					iVar104++;
				}
				if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_24)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_24);
				}
				if (func_379(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_27));
					if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_26 >= 0 && Global_111638.f_2358.f_539.f_2407[1][iParam1].f_26 < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_26);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_84, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_85, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_86);
				unk_0xA22F71BBC8173C39(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_88);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_87);
				unk_0x85654A532F20966B(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_93, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_94, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_95);
				unk_0x7726E33AC3B60544(*iParam0, 2, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 28));
				unk_0x7726E33AC3B60544(*iParam0, 3, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 29));
				unk_0x7726E33AC3B60544(*iParam0, 0, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 30));
				unk_0x7726E33AC3B60544(*iParam0, 1, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_92, 31));
				if (unk_0x579935D850368851(*iParam0) > 1 && Global_111638.f_2358.f_539.f_2407[1][iParam1].f_89 >= 0)
				{
					unk_0x446EA2500F021666(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_89);
				}
				if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90 == 6)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_111638.f_2358.f_539.f_2407[1][iParam1].f_90);
						}
					}
				}
				func_375(iParam0, &(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_31), &(Global_111638.f_2358.f_539.f_2407[1][iParam1].f_81));
				unk_0x0947AEED9914905B(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -1435919434)
					{
						func_373(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Global_111638.f_2358.f_539.f_2407[1][iParam1]);
				}
				func_372(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x523BCC9DC80CD82F(Var5);
			if (unk_0xB87F6CF6E5628C67(Var5))
			{
				bVar105 = true;
				*iParam0 = unk_0x122AAB0B1D6F55AD(Var5, vParam2, iParam5, 1, 1, 0);
				unk_0xB9FD7450C0DAB575(*iParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*iParam0, 0);
				unk_0x626D5ADA3EFAE431(*iParam0, 0);
				unk_0x44A200C9B6E1CEA6(*iParam0, true);
				StringCopy(&cVar106, unk_0x7888A5D2621AAF2D(*iParam0), 16);
				unk_0xD458AC1C1D29C3B4(*iParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC002508A277213DE(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xD3421E391490133B(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Var5.f_24);
				}
				if (func_379(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Var5.f_26);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0xA22F71BBC8173C39(*iParam0, Var5.f_88);
				unk_0x8BF0BEF985EB6D43(*iParam0, Var5.f_87);
				unk_0x85654A532F20966B(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x7726E33AC3B60544(*iParam0, 2, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 28));
				unk_0x7726E33AC3B60544(*iParam0, 3, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 29));
				unk_0x7726E33AC3B60544(*iParam0, 0, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 30));
				unk_0x7726E33AC3B60544(*iParam0, 1, unk_0xEAE0D21A50E6C7F4(Var5.f_92, 31));
				if (unk_0x579935D850368851(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x446EA2500F021666(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0x920DACD685EA4957(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Var5.f_90);
						}
					}
				}
				func_375(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x0947AEED9914905B(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -2140431165 && !Global_111638.f_9080.f_99.f_58[118])
					{
						unk_0x55A3C4ED4728EA42(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == -1435919434)
					{
						func_373(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_111638.f_2358.f_539.f_4316) && Global_111638.f_9080.f_99.f_58[131]) && unk_0x134B62B726CEC8E6(*iParam0) == -1008861746)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, 6, 1, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 14, 7, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 11, 2, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 2, 3, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 7, 5, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 0, 0, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 3, 3, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 13, 1, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 4, 3, false);
					unk_0xEE6A1776A67F70C1(*iParam0, 12, 2, false);
					unk_0x73BEC6F1685574E6(*iParam0, 22, true);
					unk_0x920DACD685EA4957(*iParam0, 2);
					unk_0xEE6A1776A67F70C1(*iParam0, 23, 11, false);
					unk_0x8BF0BEF985EB6D43(*iParam0, 2);
					Global_111638.f_2358.f_539.f_4316 = 1;
					func_339(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Var5);
				}
				if (bVar105)
				{
					func_372(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_339(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if ((func_16(iParam0) && unk_0xC844350D5D58C99A(*iParam1)) && unk_0xDF1306B443CD3D15(*iParam1, 0))
	{
		if (iParam2 > Global_111638.f_2358.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_27(*iParam1, iParam0);
		}
		if (unk_0x40B3F576B41FA183(*iParam1) != 0)
		{
			unk_0xF95FF0A179413A39(*iParam1, 0);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0] = unk_0x134B62B726CEC8E6(*iParam1);
		if (unk_0x565509D116400807(*iParam1, &iVar1))
		{
			Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_1 = unk_0x134B62B726CEC8E6(iVar1);
		}
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_2 = unk_0xA471721ED5268046(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_3 = unk_0x7F6DC62EA9922664(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[0] = unk_0xDD62D560CFE11A27(*iParam1, 1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[1] = unk_0xDD62D560CFE11A27(*iParam1, 2);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[2] = unk_0xDD62D560CFE11A27(*iParam1, 3);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[3] = unk_0xDD62D560CFE11A27(*iParam1, 4);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[4] = unk_0xDD62D560CFE11A27(*iParam1, 5);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[5] = unk_0xDD62D560CFE11A27(*iParam1, 6);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[6] = unk_0xDD62D560CFE11A27(*iParam1, 7);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[7] = unk_0xDD62D560CFE11A27(*iParam1, 8);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[8] = unk_0xDD62D560CFE11A27(*iParam1, 9);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[9] = unk_0xDD62D560CFE11A27(*iParam1, 10);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[10] = unk_0xDD62D560CFE11A27(*iParam1, 11);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_11[11] = unk_0xDD62D560CFE11A27(*iParam1, 12);
		if (unk_0x587993B327460A82(*iParam1, 0))
		{
			iVar2 = unk_0x74A7D92E3874B5C7(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_24 = 1;
			}
			else
			{
				Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_24 = 0;
			}
		}
		else
		{
			Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_24 = 0;
		}
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_25 = unk_0xFC21F7E0F4D92523();
		StringCopy(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_27), unk_0x7888A5D2621AAF2D(*iParam1), 16);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_26 = unk_0x4EB64970EC291A00(*iParam1);
		unk_0x9412F17E127D9759(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_5), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_6));
		unk_0xD00EA977553939A7(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_7), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_8));
		unk_0x4D842A28A29F18F6(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_84), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_85), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_86));
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_88 = unk_0x616632A7E7824A9A(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_87 = unk_0x214BEAD64D777E8F(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_89 = unk_0xF22DC2D0CA24A151(*iParam1);
		Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_90 = unk_0x8EF9B42D5496EC5A(*iParam1);
		unk_0xE04A80C505823410(*iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_93), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_94), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_95));
		if (unk_0x812A93B166D97C60(*iParam1, 2))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 28);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 28);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 3))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 29);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 29);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 30);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 30);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 1))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 31);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_92), 31);
		}
		Global_111638.f_2358.f_539.f_4317[iParam0] = 10;
		if (unk_0x67303E186EA6C9A0(*iParam1) >= 0 && func_343(*iParam1, 0, &uVar0))
		{
			func_70(iParam1, &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31), &(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_81));
			if (bParam3)
			{
				Global_111638.f_20113[iParam0].f_40 = 1;
				Global_111638.f_20113[iParam0] = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0];
				Global_111638.f_20113[iParam0].f_3 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_87;
				Global_111638.f_20113[iParam0].f_4 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_84;
				Global_111638.f_20113[iParam0].f_5 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_85;
				Global_111638.f_20113[iParam0].f_6 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_86;
				Global_111638.f_20113[iParam0].f_10 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_90;
				Global_111638.f_20113[iParam0].f_16 = !Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_88;
				Global_111638.f_20113[iParam0].f_19 = { Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_27 };
				Global_111638.f_20113[iParam0].f_23 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_26;
				Global_111638.f_20113[iParam0].f_7 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[11];
				Global_111638.f_20113[iParam0].f_8 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[12];
				Global_111638.f_20113[iParam0].f_9 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[23];
				Global_111638.f_20113[iParam0].f_11 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[4];
				Global_111638.f_20113[iParam0].f_12 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[15];
				Global_111638.f_20113[iParam0].f_13 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[16];
				Global_111638.f_20113[iParam0].f_14 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[14];
				Global_111638.f_20113[iParam0].f_15 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[22];
				Global_111638.f_20113[iParam0].f_18 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[20];
				Global_111638.f_20113[iParam0].f_17 = Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_31[18];
				Global_111638.f_20113[iParam0].f_24 = unk_0x461CAC843A21E4B6(*iParam1, 11) + 1;
				Global_111638.f_20113[iParam0].f_25 = unk_0x461CAC843A21E4B6(*iParam1, 12) + 1;
				Global_111638.f_20113[iParam0].f_26 = unk_0x461CAC843A21E4B6(*iParam1, 4) + 1;
				Global_111638.f_20113[iParam0].f_27 = unk_0x461CAC843A21E4B6(*iParam1, 23) + 1;
				Global_111638.f_20113[iParam0].f_28 = unk_0x461CAC843A21E4B6(*iParam1, 14) + 1;
				Global_111638.f_20113[iParam0].f_29 = unk_0x461CAC843A21E4B6(*iParam1, 16) + 1;
				Global_111638.f_20113[iParam0].f_30 = unk_0x461CAC843A21E4B6(*iParam1, 15) + 1;
				Global_111638.f_20113[iParam0].f_32 = unk_0xBB3F1A6E0A9B6511(*iParam1);
				Global_111638.f_20113[iParam0].f_33[0] = unk_0xC34A9D742FC099DC(*iParam1);
				Global_111638.f_20113[iParam0].f_33[1] = unk_0xEE936CC771514B50(*iParam1, 14, 0);
				Global_111638.f_20113[iParam0].f_33[2] = unk_0xEE936CC771514B50(*iParam1, 14, 1);
				Global_111638.f_20113[iParam0].f_33[3] = unk_0xEE936CC771514B50(*iParam1, 14, 2);
				Global_111638.f_20113[iParam0].f_33[4] = unk_0xEE936CC771514B50(*iParam1, 14, 3);
				Global_111638.f_20113[iParam0].f_39 = unk_0xFF4012C9B4D4F728(*iParam1);
				Global_111638.f_20113[iParam0].f_31 = func_342(*iParam1);
				Global_111638.f_20113[iParam0].f_33[0] = unk_0x80A2B6C1AD8E56D5(*iParam1);
				unk_0xF3400BB226B5BB56(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_340(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_5, Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_7, iVar3, 1, &(Global_111638.f_20113[iParam0].f_1));
				unk_0xB0010FD150C8A58B(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_340(Global_111638.f_2358.f_539.f_2407[iParam2][iParam0].f_6, -1, iVar3, 0, &(Global_111638.f_20113[iParam0].f_2));
			}
		}
	}
}

int func_340(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	iVar0 = 0;
	while (func_341(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_341(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_342(int iParam0)
{
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0x67303E186EA6C9A0(iParam0) >= 0)
	{
		if (unk_0xFF4012C9B4D4F728(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0)
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_343(int iParam0, bool bParam1, var uParam2)
{
	*uParam2 = 0;
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if ((!func_370(iVar0, bParam1, uParam2) && !func_369(unk_0xD803B885F5E47A62())) && !func_352(iParam0))
	{
		return 0;
	}
	if (func_369(unk_0xD803B885F5E47A62()))
	{
		if (func_351(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_350(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iVar0) || unk_0xC41A9202669A24C4(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x56E1CD81AE700E98(iParam0) && !func_348(iParam0)) && !bVar1) && !(func_347(unk_0x134B62B726CEC8E6(iParam0)) && func_344(unk_0xD803B885F5E47A62())))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x8CD06866876216F2())
	{
		if ((func_40(iParam0) && unk_0x134B62B726CEC8E6(iParam0) != 873639469) && unk_0x134B62B726CEC8E6(iParam0) != -1177863319)
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_344(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_346(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_345(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_345(int iParam0)
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

int func_346(int iParam0, bool bParam1, bool bParam2)
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

int func_347(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_349(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
		
		case -1254331310:
		case -907477130:
			return 1;
	}
	return 0;
}

int func_349(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_346(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_345(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_346(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_345(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (func_368(unk_0xD803B885F5E47A62()) || func_367(unk_0xD803B885F5E47A62()))
	{
		if (func_353(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_353(int iParam0)
{
	if ((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (func_356(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
	{
		if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
		{
			if (func_354(iParam0))
			{
				return 1;
			}
			switch (unk_0x134B62B726CEC8E6(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_354(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	if (func_355(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_356(int iParam0, bool bParam1)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -2096818938:
		case -1860900134:
			if (func_358(unk_0x134B62B726CEC8E6(iParam0), 0))
			{
				if (Global_2537071.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_357(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_357(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_358(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_366(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case -2119578145:
		case -682211828:
		case 349605904:
		case 525509695:
		case -1150599089:
		case 523724515:
			return func_365();
			break;
		
		case -1685021548:
			if (Global_262145.f_14219)
			{
				return func_364();
			}
			break;
		
		case 464687292:
		case 1531094468:
		case 1762279763:
			if (Global_262145.f_14220)
			{
				return func_364();
			}
			break;
		
		case 16646064:
			if (Global_262145.f_14218)
			{
				return func_364();
			}
			break;
		
		case -310465116:
			if (Global_262145.f_14221)
			{
				return func_364();
			}
			break;
		
		case 729783779:
			if (Global_262145.f_14223)
			{
				return func_364();
			}
			break;
		
		case 970598228:
		case -1041692462:
			return func_363();
			break;
		
		case -1045541610:
			if (Global_262145.f_18669)
			{
				return func_362();
			}
			break;
		
		case -239841468:
			if (Global_262145.f_18671)
			{
				return func_362();
			}
			break;
		
		case 627535535:
			if (Global_262145.f_18675)
			{
				return func_362();
			}
			break;
		
		case -566387422:
			if (Global_262145.f_18672)
			{
				return func_362();
			}
			break;
		
		case 1034187331:
			if (Global_262145.f_18679)
			{
				return func_362();
			}
			break;
		
		case -2048333973:
			if (Global_262145.f_18677)
			{
				return func_362();
			}
			break;
		
		case 1886268224:
			if (Global_262145.f_18682)
			{
				return func_362();
			}
			break;
		
		case -2096818938:
			if (Global_262145.f_20625)
			{
				return func_361();
			}
			break;
		
		case -1860900134:
			if (Global_262145.f_20626)
			{
				return func_361();
			}
			break;
		
		case -667151410:
		case -589178377:
			return func_360();
			break;
		
		case 75131841:
			if (func_360() || func_359())
			{
				return 1;
			}
			break;
		
		case -2096690334:
			return func_360();
			break;
		
		case 931280609:
			return func_360();
			break;
		
		case 741090084:
			return func_360();
			break;
		
		case 80636076:
			return func_360();
			break;
		
		case -915704871:
			return func_360();
			break;
		
		case 444994115:
			return func_360();
			break;
		
		case 1637620610:
			return func_360();
			break;
		
		case -755532233:
			return func_360();
			break;
		
		case -27326686:
			return func_360();
			break;
		
		case -1812949672:
			return func_360();
			break;
		
		case -1374500452:
			return func_360();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_360();
			break;
		
		case 1026149675:
			if (Global_262145.f_28524)
			{
				return func_359();
			}
			break;
		
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_359();
			}
			break;
		
		case -2124201592:
			if (Global_262145.f_28523)
			{
				return func_359();
			}
			break;
		
		case 1830407356:
			if (Global_262145.f_28873)
			{
				return func_359();
			}
			break;
		
		case 1871995513:
			if (Global_262145.f_28872)
			{
				return func_359();
			}
			break;
	}
	return 0;
}

bool func_359()
{
	return unk_0xC146D5FBD23C6954(1815791016);
}

bool func_360()
{
	return unk_0xC146D5FBD23C6954(1927191088);
}

bool func_361()
{
	return unk_0xC146D5FBD23C6954(2067165443);
}

bool func_362()
{
	return unk_0xC146D5FBD23C6954(-957277403);
}

bool func_363()
{
	return unk_0xC146D5FBD23C6954(210122941);
}

bool func_364()
{
	return unk_0xC146D5FBD23C6954(-1894522408);
}

bool func_365()
{
	return unk_0xC146D5FBD23C6954(1630677557);
}

int func_366(int iParam0, int iParam1)
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

int func_367(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_346(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_80())
			{
				return func_345(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_346(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_80())
			{
				return func_345(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_346(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_345(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_370(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == 2046537925 || iParam0 == -1536924937) || iParam0 == -1779120616) || iParam0 == -1627000575) || iParam0 == 1912215274) || iParam0 == -1973172295) || iParam0 == 1127131465) || iParam0 == -1647941228) || iParam0 == 353883353) || iParam0 == -34623805) || iParam0 == 456714581) || iParam0 == -1205689942) || iParam0 == -1683328900) || iParam0 == 741586030) || iParam0 == 1922257928)
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == 1171614426 || iParam0 == 1938952078) || iParam0 == -956048545) || iParam0 == 469291905) || iParam0 == -845979911) || iParam0 == 1682114128) || iParam0 == 1283517198) || iParam0 == 1560980623)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == -1346687836 || iParam0 == -1776615689) || iParam0 == -810318068) || iParam0 == 728614474)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == -186537451 || iParam0 == 1131912276) || iParam0 == 448402357) || iParam0 == -836512833)
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == 1147287684 || iParam0 == 1491375716) || iParam0 == -537896628) || iParam0 == 321739290) || iParam0 == 1127861609) || iParam0 == -1233807380) || iParam0 == -400295096) || iParam0 == 1641462412) || iParam0 == -2076478498) || iParam0 == 1783355638) || iParam0 == -2033222435) || iParam0 == -884690486) || iParam0 == -1961627517) || iParam0 == 2072156101) || iParam0 == 1739845664) || iParam0 == 2053223216) || iParam0 == 2112052861) || iParam0 == 771711535) || iParam0 == -1241712818) || iParam0 == 534258863)
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_350(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iParam0) || unk_0xC41A9202669A24C4(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!unk_0x8E39AC3C76C8AA58(iParam0) && !unk_0x7D8B2A8F9EA82DB7(iParam0)) && iParam0 != -2128233223) && iParam0 != -48031959) && iParam0 != -1269889662) && iParam0 != -440768424) && iParam0 != -1590337689) && iParam0 != 6774487) && iParam0 != 1502869817) && iParam0 != -1881846085) && iParam0 != 916547552) && iParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == -845961253)
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == -1860900134 || iParam0 == -2096818938) || iParam0 == -114627507)
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_371(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (iParam0 == -1860900134 || iParam0 == 2071877360)
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case -1323100960:
		case -442313018:
		case 1491375716:
			return 1;
			break;
	}
	return 0;
}

void func_372(int iParam0, int iParam1)
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

void func_373(var uParam0)
{
	if (!func_374(*uParam0))
	{
		unk_0xD3421E391490133B(*uParam0, 5, !Global_111638.f_9080.f_99.f_58[119]);
	}
}

bool func_374(int iParam0)
{
	return unk_0xDD62D560CFE11A27(iParam0, 5);
}

int func_375(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0xDF1306B443CD3D15(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xF95FF0A179413A39(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x73BEC6F1685574E6(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x73BEC6F1685574E6(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0CAC3E53DC3F794F(*uParam0, 255);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7AFDC9F56E7BB635(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_366(unk_0x134B62B726CEC8E6(*uParam0), 1) && unk_0x0ECB5CA5140957AD(*uParam0, 24) != func_378(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*uParam0, 24, func_378(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_377(uParam0);
	if (func_376(*uParam0))
	{
		unk_0xD5A0214B20BCBAD8(*uParam0, 1);
		unk_0x44A200C9B6E1CEA6(*uParam0, true);
	}
	return 1;
}

int func_376(int iParam0)
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

void func_377(var uParam0)
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

int func_378(int iParam0, int iParam1)
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

int func_379(var uParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else if (Global_111638.f_20113.f_261)
	{
		*uParam0 = { Global_111638.f_20113.f_267 };
		*iParam1 = Global_111638.f_20113.f_271;
		return 1;
	}
	return 0;
}

int func_380(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, int iParam7)
{
	if (!func_16(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_383(iParam1, &Var0, iParam7);
		if (unk_0xC844350D5D58C99A(*uParam0))
		{
			if (unk_0x134B62B726CEC8E6(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_111638.f_2358.f_539.f_3618[0][0] == Var0) || (iParam1 == 15 && Global_111638.f_2358.f_539.f_3618[0][1] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar98 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar98 = 1;
			}
			unk_0x523BCC9DC80CD82F(Global_111638.f_2358.f_539.f_3618[0][iVar98]);
			if (unk_0xB87F6CF6E5628C67(Global_111638.f_2358.f_539.f_3618[0][iVar98]))
			{
				*uParam0 = unk_0x122AAB0B1D6F55AD(Global_111638.f_2358.f_539.f_3618[0][iVar98], vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*uParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*uParam0, 0);
				unk_0x626D5ADA3EFAE431(*uParam0, 0);
				unk_0x44A200C9B6E1CEA6(*uParam0, true);
				unk_0xD458AC1C1D29C3B4(*uParam0, 1250, 0);
				unk_0x5DAB50E08C3C504A(*uParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*uParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0xC002508A277213DE(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_5, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_6);
				unk_0x58A0C35FA7CA6162(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_7, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_8);
				unk_0xCCD53AC1B5D5E456(*uParam0, Var0.f_2);
				iVar99 = 0;
				while (iVar99 < 12)
				{
					unk_0xD3421E391490133B(*uParam0, iVar99 + 1, !Global_111638.f_2358.f_539.f_3618[0][iVar98].f_11[iVar99]);
					iVar99++;
				}
				if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_24)
				{
					if (unk_0x587993B327460A82(*uParam0, 0))
					{
						if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_24)
						{
							unk_0x429C172A00A5F89B(*uParam0, 1);
						}
						else
						{
							unk_0x821D9A7077DBCDBC(*uParam0, 1);
						}
					}
				}
				unk_0x55A3C4ED4728EA42(*uParam0, &(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_27));
				if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_26 >= 0 && Global_111638.f_2358.f_539.f_3618[0][iVar98].f_26 < unk_0xBCB9B04D4DA658DF())
				{
					unk_0xA22B35B584F0580A(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_26);
				}
				unk_0x9F0DB8A295EA8513(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_84, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_85, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_86);
				unk_0xA22F71BBC8173C39(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_88);
				unk_0x8BF0BEF985EB6D43(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_87);
				unk_0x85654A532F20966B(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_93, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_94, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_95);
				unk_0x7726E33AC3B60544(*uParam0, 2, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 28));
				unk_0x7726E33AC3B60544(*uParam0, 3, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 29));
				unk_0x7726E33AC3B60544(*uParam0, 0, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 30));
				unk_0x7726E33AC3B60544(*uParam0, 1, unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_92, 31));
				if (unk_0x579935D850368851(*uParam0) > 1 && Global_111638.f_2358.f_539.f_3618[0][iVar98].f_89 >= 0)
				{
					unk_0x446EA2500F021666(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_89);
				}
				if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90 > -1)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*uParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*uParam0)))
						{
							if (Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90 == 6)
							{
								unk_0x920DACD685EA4957(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*uParam0, Global_111638.f_2358.f_539.f_3618[0][iVar98].f_90);
						}
					}
				}
				func_375(uParam0, &(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_31), &(Global_111638.f_2358.f_539.f_3618[0][iVar98].f_81));
				unk_0x0947AEED9914905B(*uParam0, Var0.f_96);
				if (bParam6)
				{
					unk_0x71199B01895C6202(Global_111638.f_2358.f_539.f_3618[0][iVar98]);
				}
				func_382(*uParam0);
				return 1;
			}
		}
		else
		{
			unk_0x523BCC9DC80CD82F(Var0);
			if (unk_0xB87F6CF6E5628C67(Var0))
			{
				*uParam0 = unk_0x122AAB0B1D6F55AD(Var0, vParam2, iParam5, 0, 0, 0);
				unk_0xB9FD7450C0DAB575(*uParam0, 1084227584);
				unk_0x316958DDB94DF3FC(*uParam0, 0);
				unk_0x626D5ADA3EFAE431(*uParam0, 0);
				unk_0x44A200C9B6E1CEA6(*uParam0, true);
				func_381(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_382(*uParam0);
				}
				if (bParam6)
				{
					unk_0x71199B01895C6202(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_381(var uParam0, struct<98> Param1)
{
	if (Param1.f_9)
	{
		unk_0xC6A6B4DDD6DC073A(*uParam0, Param1.f_4);
	}
	else
	{
		unk_0xC002508A277213DE(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0x58A0C35FA7CA6162(*uParam0, Param1.f_7, Param1.f_8);
	}
	unk_0xCCD53AC1B5D5E456(*uParam0, Param1.f_2);
	unk_0xD458AC1C1D29C3B4(*uParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0xD3421E391490133B(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0x587993B327460A82(*uParam0, 0))
		{
			unk_0x429C172A00A5F89B(*uParam0, 1);
		}
	}
	if (func_379(&uVar2, &iVar1) && Param1.f_97)
	{
		unk_0x55A3C4ED4728EA42(*uParam0, &uVar2);
		unk_0xA22B35B584F0580A(*uParam0, iVar1);
	}
	else if (!unk_0xEA6BC48857E0AC4C(&(Param1.f_27)))
	{
		unk_0x55A3C4ED4728EA42(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0xBCB9B04D4DA658DF())
		{
			unk_0xA22B35B584F0580A(*uParam0, Param1.f_26);
		}
	}
	unk_0x9F0DB8A295EA8513(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0xA22F71BBC8173C39(*uParam0, Param1.f_88);
	unk_0x8BF0BEF985EB6D43(*uParam0, Param1.f_87);
	unk_0x85654A532F20966B(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0x7726E33AC3B60544(*uParam0, 2, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 28));
	unk_0x7726E33AC3B60544(*uParam0, 3, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 29));
	unk_0x7726E33AC3B60544(*uParam0, 0, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 30));
	unk_0x7726E33AC3B60544(*uParam0, 1, unk_0xEAE0D21A50E6C7F4(Param1.f_92, 31));
	if (unk_0x579935D850368851(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0x446EA2500F021666(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*uParam0)))
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0x920DACD685EA4957(*uParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0x920DACD685EA4957(*uParam0, Param1.f_90);
			}
		}
	}
	func_375(uParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0x0947AEED9914905B(*uParam0, Param1.f_96);
}

void func_382(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			Global_96105[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

void func_383(int iParam0, var uParam1, int iParam2)
{
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = -1177863319;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 1127861609;
			}
			else
			{
				iVar0 = 1127861609;
			}
			switch (iVar0)
			{
				case -1177863319:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case 1127861609:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = -1177863319;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 788045382;
			}
			else
			{
				iVar0 = -1177863319;
			}
			switch (iVar0)
			{
				case -1177863319:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case 788045382:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = 873639469;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 55628203;
			}
			else
			{
				iVar0 = 873639469;
			}
			switch (iVar0)
			{
				case 873639469:
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case 55628203:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = -810318068;
			}
			else if (iParam2 == 3)
			{
				iVar0 = -685276541;
			}
			else
			{
				iVar0 = -810318068;
			}
			switch (iVar0)
			{
				case -810318068:
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case -685276541:
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = -1216765807;
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = -511601230;
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = -1903012613;
			}
			else if (iParam2 == 2)
			{
				iVar0 = 788045382;
			}
			else
			{
				iVar0 = -1903012613;
			}
			switch (iVar0)
			{
				case -1903012613:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case 788045382:
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_384(int iParam0, vector3 vParam1, int iParam4)
{
	if (iParam0 == -433375717)
	{
		iVar0 = unk_0x122AAB0B1D6F55AD(iParam0, vParam1, iParam4, 1, 1, 0);
		unk_0xC002508A277213DE(iVar0, 89, 89);
		unk_0x58A0C35FA7CA6162(iVar0, 88, 0);
		unk_0x55A3C4ED4728EA42(iVar0, " FA5T66 ");
	}
	else if (iParam0 == -1311154784)
	{
		iVar0 = unk_0x122AAB0B1D6F55AD(iParam0, vParam1, iParam4, 1, 1, 0);
		unk_0xC002508A277213DE(iVar0, 62, 62);
		unk_0x58A0C35FA7CA6162(iVar0, 68, 0);
		unk_0x55A3C4ED4728EA42(iVar0, " SDTM1YP");
	}
	else if (iParam0 == 1545842587)
	{
		iVar0 = unk_0x122AAB0B1D6F55AD(iParam0, vParam1, iParam4, 1, 1, 0);
		unk_0xC002508A277213DE(iVar0, 27, 27);
		unk_0x58A0C35FA7CA6162(iVar0, 36, 0);
		unk_0x55A3C4ED4728EA42(iVar0, "ALPHADOG");
		unk_0xD3421E391490133B(iVar0, 1, true);
	}
	else if (iParam0 == 1051415893)
	{
		iVar0 = unk_0x122AAB0B1D6F55AD(iParam0, vParam1, iParam4, 1, 1, 0);
		unk_0xC002508A277213DE(iVar0, 3, 3);
		unk_0x58A0C35FA7CA6162(iVar0, 3, 3);
		unk_0x55A3C4ED4728EA42(iVar0, "  4G3NT");
	}
	else if (iParam0 == -1291952903)
	{
		iVar0 = unk_0x122AAB0B1D6F55AD(iParam0, vParam1, iParam4, 1, 1, 0);
		unk_0xC002508A277213DE(iVar0, 38, 38);
		unk_0x58A0C35FA7CA6162(iVar0, 37, 0);
		unk_0x55A3C4ED4728EA42(iVar0, " MKB652 ");
	}
	else if (iParam0 == 758895617)
	{
		iVar0 = unk_0x122AAB0B1D6F55AD(iParam0, vParam1, iParam4, 1, 1, 0);
		unk_0xC002508A277213DE(iVar0, 0, 0);
		unk_0x58A0C35FA7CA6162(iVar0, 10, 0);
		unk_0x55A3C4ED4728EA42(iVar0, " V1NTAG3");
	}
	if (!unk_0x437347B10A200C4B(iVar0, 0))
	{
		unk_0xCCD53AC1B5D5E456(iVar0, 0f);
		unk_0x9A8BCD43DBDDCDCA(iVar0, false, 0);
		unk_0x626D5ADA3EFAE431(iVar0, 0);
	}
	return iVar0;
}

int func_385(int iParam0, var uParam1, float fParam2, int iParam3, float fParam4, float fParam5, int iParam6)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			vVar3 = { unk_0x08D89CE2E20AE305(iParam0) };
			if (unk_0x4A13F7D4B1E239A0(vVar0, iParam3, &vVar9, &uVar12, &uVar14, iParam6, 1077936128, 0))
			{
				vVar6 = { vVar9 - vVar0 };
				fVar13 = unk_0x07AB02F3C4AE2B04(vVar6.x, vVar6.y, vVar3.x, vVar3.y);
				if (fVar13 > fParam4 && fVar13 < fParam5)
				{
					if (!func_67(*uParam1, vVar9, 0))
					{
						*uParam1 = { vVar9 };
						*fParam2 = uVar12;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_386()
{
	unk_0x61A3AC394D8DC0BC();
	if (func_305(unk_0x16F2683693E537C9(), Local_3201))
	{
		if (func_288(unk_0x16F2683693E537C9()))
		{
			unk_0x38C3A68D7861DCFD(1, 0, 1);
			if (iLocal_3804 == 1)
			{
				if (unk_0xA4FD7964FEE91ED8(1) == 4)
				{
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(0f);
				}
				iLocal_3804 = 0;
			}
			if (unk_0xA4FD7964FEE91ED8(1) == 4)
			{
				if (iLocal_3806 == 0)
				{
					unk_0xD1B833B834838C01();
					unk_0x61A3AC394D8DC0BC();
					if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "incar_lookbehind_exit_driver", 3))
					{
						if (unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "missfam3", "incar_lookbehind_exit_driver") >= 0,5f)
						{
							if (iLocal_3808 == 0)
							{
								unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
								unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3808 = unk_0x1C0640BA9A7327B3();
							}
							else if (func_108(300, iLocal_3808))
							{
								iLocal_3804 = 1;
								iLocal_3806 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_387()
{
	Global_42350 = 1;
}

int func_388(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Local_3435.f_13), 20);
	unk_0xAE317D00A5A55DF6("FAMILY3_1", 0, -1);
	func_405();
	func_404(Local_3107, Local_3201, &Local_3107, iLocal_3685);
	func_403(&iLocal_3687, &bLocal_3691, &iLocal_3692, &uLocal_3690, &uLocal_3693, &fLocal_3689);
	func_402(iLocal_3743, iLocal_3685, iLocal_3688, &iLocal_3701, &(Local_3107.f_9));
	func_386();
	if (func_305(unk_0x16F2683693E537C9(), Local_3201))
	{
		func_401();
		unk_0x38C3A68D7861DCFD(0, 75, 1);
		unk_0x38C3A68D7861DCFD(0, 72, 1);
		unk_0x38C3A68D7861DCFD(0, 76, 1);
		unk_0x38C3A68D7861DCFD(0, 73, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 37, 1);
		unk_0x38C3A68D7861DCFD(0, 99, 1);
		unk_0x38C3A68D7861DCFD(0, 100, 1);
	}
	if (iLocal_3769 == 0)
	{
		if (unk_0xC844350D5D58C99A(Local_3201))
		{
			if (!unk_0x437347B10A200C4B(Local_3201, 0))
			{
				unk_0xF50D17A63556B8D4(Local_3201, 5, 0, 1f);
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(Local_3107) && unk_0xDF1306B443CD3D15(Local_3201, 0))
			{
				if (!unk_0xC42A92762C58E1B9(Local_3107, Local_3201, 0))
				{
					unk_0x5B1D360B9C6F0A09(Local_3107, Local_3201, 20000, 0, 1f, 1, 0);
				}
			}
			if (iLocal_3684 == 0)
			{
				if (!unk_0x3D8490C463E91AC3(&uLocal_3683))
				{
					unk_0x8C57ADF8EFD2D9A9();
					if (unk_0xEE4B5EDF70ABF498())
					{
						uLocal_3683 = unk_0x554477F017313FFD(-1017,985f, 660,4285f, 147,4662f, 0f, 0f, 0f, 28f, 1, -1f, 0,5f, 0,5f, 0, 1, 1, 1065353216, 0, 0);
						unk_0xDD935F6C79C05FEE(uLocal_3683, sLocal_3042);
					}
				}
				if ((unk_0xC844350D5D58C99A(Local_3321) && unk_0xC844350D5D58C99A(Local_3329)) && unk_0x3D8490C463E91AC3(&uLocal_3683))
				{
					if (unk_0x32B8283A77B4A240(Local_3321))
					{
						if (unk_0xDF1306B443CD3D15(Local_3201, 0))
						{
							unk_0xE8F21A278C1048BF(uLocal_3683, Local_3321, Local_3201, Local_3321.f_1, unk_0x68E4ADDDDCD7BDDE(Local_3201, 0f, -2,1f, 0,6f), 35f, 0, 0, 0, 0);
							iLocal_3684 = 1;
						}
					}
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_3337))
			{
				if (func_107(&Local_3337, 1))
				{
					unk_0x20641932E5104B25(Local_3337, true, 0);
					unk_0xB0703A3FDD659128(Local_3337, Local_3201, false);
				}
			}
			*iParam0++;
			break;
		
		case 1:
			unk_0xD1B833B834838C01();
			if ((!unk_0xEB6A8945D1AC98A1(Local_3107) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0xDF1306B443CD3D15(Local_3201, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_3201, 1))
				{
					unk_0x98EF6C2D1F172740(vLocal_3058, -1, 8000, 2000, -1123838900);
				}
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_3201, 0))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3201.f_1))
					{
						unk_0x142CC44DB769B57E(&(Local_3201.f_1));
						unk_0x790015DC92C918E2();
					}
				}
				else
				{
					if (!unk_0xE4EDC4B0E92C078B(Local_3201.f_1))
					{
						Local_3201.f_1 = func_400(Local_3201, 0, 0);
					}
					if (!func_98(&Local_3074) || !unk_0xEA6BC48857E0AC4C(&Local_3074))
					{
						if (unk_0xE4EDC4B0E92C078B(Local_3201.f_1))
						{
							if (!func_93())
							{
								if (!func_220(&Local_3435, 0))
								{
									func_279(&Local_3074, 7500, 1);
								}
							}
						}
					}
				}
				if (unk_0x82CCEAB29E9451DD(Local_3107, Local_3201) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Local_3201))
				{
					unk_0x8B4C4CA774181102(5f, 5f, 4);
					if (unk_0xC844350D5D58C99A(Local_3313))
					{
						unk_0xF690C84DADBB3551(&Local_3313);
					}
					if (unk_0xC844350D5D58C99A(Local_3337))
					{
						unk_0xF690C84DADBB3551(&Local_3337);
					}
					unk_0x9CA905FC23D32931(Local_3201, 1);
					unk_0x745CE398A4B0A3C6(Local_3125.f_2, 100f, 0);
					unk_0x28F5E4DA506AC0CA(Local_3125.f_2, 100f, 0, 0, 0, 0, false, 0);
					unk_0x8BC9595FD2792B5D("FAMILY_3_PULL_DOWN_HOUSE_SCENE");
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (iLocal_3733 == 0)
			{
				func_399(&iLocal_3679);
				func_398(&(Local_3201.f_7));
			}
			unk_0x9E5E60D8C63FD9D1();
			unk_0x3F423BF5B8125A50("missfam3");
			if (func_389(&iLocal_3688))
			{
				if (unk_0xDF1306B443CD3D15(Local_3201, 0))
				{
					unk_0x3E5CE368CD085FFA(Local_3201, 1);
					unk_0x9CA905FC23D32931(Local_3201, 0);
					unk_0x06FF977AA95DCCE3(Local_3201, 0);
				}
				unk_0x8910D3D58E0132B8("FAMILY_3_RAYFIRE");
				unk_0x8910D3D58E0132B8("FAMILY_3_PULL_DOWN_HOUSE_SCENE");
				unk_0x29D5132FBDCF2B1E(0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iLocal_3686 == 0)
	{
		func_397(Local_3201);
	}
	unk_0x9501364A300048C6();
	switch (*iParam0)
	{
		case 0:
			iLocal_3743 = 1;
			unk_0xE3934829A331AF92("FAMILY3_DECK_PULL_01_MASTER", 0);
			unk_0x9CA905FC23D32931(Local_3201, 1);
			vLocal_3748 = { Local_3201.f_2 };
			if (func_393(&iLocal_3685, 3500f, vLocal_3748, 0,75f) && unk_0xE3934829A331AF92("FAMILY3_DECK_PULL_01_MASTER", 0))
			{
				if (iLocal_3687 == 1)
				{
					unk_0xA37A90C62806D848(1);
					unk_0x8BC9595FD2792B5D("FAMILY_3_RAYFIRE");
					unk_0xDED18C4572CC8FC6(-1020,98f, 657,72f, 154,51f);
					unk_0x0525F87A0751EA62("SMALL_EXPLOSION_SHAKE", 0,25f);
					func_94("FAM3_HPULL", 0);
					unk_0x420FE818E70BB523(4);
					bLocal_3691 = true;
					*iParam0++;
				}
			}
			break;
		
		case 1:
			if (bLocal_3691)
			{
				if (iLocal_3692 == 0)
				{
					iLocal_3743 = 0;
					unk_0x9CA905FC23D32931(Local_3201, 1);
					vLocal_3748 = { unk_0x68F4C0EC296D3901(Local_3201, true) };
				}
				else if (iLocal_3692 == 1)
				{
					iLocal_3743 = 1;
					unk_0xE3934829A331AF92("FAMILY3_DECK_PULL_02_MASTER", 0);
					if (unk_0x562F77A7F33D2E46("FAMILY_3_RAYFIRE"))
					{
						unk_0x8910D3D58E0132B8("FAMILY_3_RAYFIRE");
					}
					unk_0x9CA905FC23D32931(Local_3201, 1);
					if (func_393(&iLocal_3685, 4000f, vLocal_3748, 0,75f) && unk_0xE3934829A331AF92("FAMILY3_DECK_PULL_02_MASTER", 0))
					{
						unk_0xA37A90C62806D848(1);
						unk_0x8BC9595FD2792B5D("FAMILY_3_RAYFIRE");
						unk_0xDED18C4572CC8FC6(-1020,98f, 657,72f, 154,51f);
						unk_0x0525F87A0751EA62("MEDIUM_EXPLOSION_SHAKE", 0,15f);
						func_94("FAM3_HPULL", 0);
						iLocal_3692 = 0;
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (bLocal_3691)
			{
				if (iLocal_3692 == 0)
				{
					iLocal_3743 = 0;
					unk_0x9CA905FC23D32931(Local_3201, 1);
					vLocal_3748 = { unk_0x68F4C0EC296D3901(Local_3201, true) };
				}
				else if (iLocal_3692 == 1)
				{
					unk_0x9CA905FC23D32931(Local_3201, 1);
					iLocal_3743 = 1;
					unk_0xE3934829A331AF92("FAMILY3_DECK_PULL_03_MASTER", 0);
					unk_0x13896FDECC859926("FAM3_HOUSE_COLLAPSE");
					if (unk_0x562F77A7F33D2E46("FAMILY_3_RAYFIRE"))
					{
						unk_0x8910D3D58E0132B8("FAMILY_3_RAYFIRE");
					}
					if ((func_393(&iLocal_3685, 4500f, vLocal_3748, 0,75f) && unk_0xE3934829A331AF92("FAMILY3_DECK_PULL_03_MASTER", 0)) && unk_0x13896FDECC859926("FAM3_HOUSE_COLLAPSE"))
					{
						func_208(1, 0, 1, 0);
						unk_0xA37A90C62806D848(1);
						unk_0x3E5CE368CD085FFA(Local_3201, 0);
						unk_0x8BC9595FD2792B5D("FAMILY_3_RAYFIRE");
						unk_0xC92DB9682A650680("FAM3_HOUSE_COLLAPSE");
						unk_0xDED18C4572CC8FC6(-1020,98f, 657,72f, 154,51f);
						unk_0x0525F87A0751EA62("MEDIUM_EXPLOSION_SHAKE", 0,25f);
						unk_0x8B4C4CA774181102(3f, 0f, 3);
						iLocal_3692 = 0;
						iLocal_3685 = 0;
						iLocal_3686 = 1;
						*iParam0++;
					}
				}
			}
			break;
		
		case 3:
			if (bLocal_3691)
			{
				if (iLocal_3692 == 0)
				{
					iLocal_3743 = 0;
					if (iLocal_3687 == 8)
					{
						iLocal_3743 = 1;
						if (!unk_0x9F4FE516EAACCFC5(iLocal_3680))
						{
							if (unk_0x562F77A7F33D2E46("FAMILY_3_RAYFIRE"))
							{
								unk_0x8910D3D58E0132B8("FAMILY_3_RAYFIRE");
							}
							if (iLocal_3733 == 1)
							{
								func_392(800);
							}
							func_208(0, 0, 1, 0);
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
							unk_0xBF40D896CA4BDBE7();
							return 1;
						}
					}
					else if (iLocal_3733 == 0)
					{
						if (unk_0x9F4FE516EAACCFC5(iLocal_3680))
						{
							if (func_391())
							{
								func_390(800);
								if (iLocal_3687 < 6)
								{
									iLocal_3687 = 6;
								}
								if (unk_0x3D8490C463E91AC3(&uLocal_3683) && unk_0xC844350D5D58C99A(Local_3321))
								{
									unk_0xDEC30C89A69FEB57(uLocal_3683, Local_3321);
									unk_0xDEC30C89A69FEB57(uLocal_3683, Local_3201);
									unk_0xF690C84DADBB3551(&Local_3321);
									unk_0xBCD4D622B825D37C(&uLocal_3683);
									unk_0xFE5EFE178CCBA358();
									iLocal_3684 = 0;
								}
								if (unk_0xC844350D5D58C99A(Local_3329))
								{
									unk_0xF690C84DADBB3551(&Local_3329);
								}
								if (unk_0xDF1306B443CD3D15(Local_3201, 0))
								{
									iLocal_3769 = 1;
									unk_0x05CA0E7946B27A19(Local_3201, 1);
									unk_0xA47B46945FF6DE74(Local_3201, -994,4631f, 643,6545f, 138,8214f, 1, false, 0, 1);
									unk_0xD8F6A53F4799FAFE(Local_3201, 277,058f);
									unk_0xB9FD7450C0DAB575(Local_3201, 1084227584);
								}
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
								}
								if (!unk_0xEB6A8945D1AC98A1(Local_3107))
								{
									unk_0xA3BF0AA5A2608191(Local_3107);
								}
								func_208(0, 0, 1, 0);
								if (unk_0x9F4FE516EAACCFC5(iLocal_3680))
								{
									unk_0x29D5132FBDCF2B1E(1);
									unk_0xEF6276132B396452(0f, 1065353216);
									unk_0x2FB9A57162E54BAB(0f);
									unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
									unk_0x9A8DDC7C522F5BF5(iLocal_3680, 0);
									unk_0x5CAFA5DD13658DFE(0);
									unk_0x8BCB70EB440DED83(true);
									unk_0xBFE31971E49FA500(true);
								}
								unk_0xE96F19797E59AB06();
								iLocal_3733 = 1;
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_390(int iParam0)
{
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(iParam0);
		while (!unk_0x757EF87A33649210())
		{
			wait(0);
		}
	}
}

int func_391()
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

void func_392(int iParam0)
{
	if (!unk_0x0F1CCD77290EE12F())
	{
		unk_0x82E51BCA72537B6C(iParam0);
		while (!unk_0x0F1CCD77290EE12F())
		{
			wait(0);
		}
	}
}

int func_393(int iParam0, float fParam1, struct<2> Param2, var uParam4, float fParam5)
{
	vVar0 = { unk_0x68F4C0EC296D3901(Local_3201, true) };
	iVar3 = round((unk_0x4F3973434662D795(0, 71) * 255f));
	fVar4 = unk_0x0EB28750412C3A5A(Param2, Param2.f_1, vVar0.z, vVar0, true);
	if ((unk_0x7FEE810EE9E768EB(0, 72) || unk_0x7FEE810EE9E768EB(0, 76)) || unk_0x7FEE810EE9E768EB(0, 73))
	{
		unk_0x38C3A68D7861DCFD(0, 71, 1);
		iVar3 = 0;
	}
	if (unk_0xDF1306B443CD3D15(Local_3201, 0))
	{
		if ((unk_0x06F8112AA79C53D9(0, 71) && iVar3 != 0) || iVar3 >= 250)
		{
			if (func_274("FAM3_HPULL"))
			{
				unk_0xA37A90C62806D848(1);
			}
			if (*iParam0 == 0)
			{
				settimera(0);
				unk_0x0525F87A0751EA62("SKY_DIVING_SHAKE", 0f);
				*iParam0 = 1;
			}
		}
		else
		{
			if (!func_98("FAM3_HPULL"))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_396("FAM3_HPULL");
					func_94("FAM3_HPULL", 1);
				}
			}
			if (*iParam0 == 1)
			{
				*iParam0 = 0;
				if (iLocal_3696 == 1)
				{
					if (unk_0x83A8177D302E1A7E(iLocal_3697))
					{
						unk_0x9AB5B84DE011D632(iLocal_3697, "wheelspin", fLocal_3695, 0);
						unk_0xF7E25143642732EA(iLocal_3697, 0);
					}
					if (unk_0x83A8177D302E1A7E(iLocal_3698))
					{
						unk_0x9AB5B84DE011D632(iLocal_3698, "wheelspin", fLocal_3695, 0);
						unk_0xF7E25143642732EA(iLocal_3698, 0);
					}
					iLocal_3696 = 0;
				}
				unk_0x051C254DA616D646(0);
			}
		}
		if (*iParam0 == 1)
		{
			unk_0x5E858A00EAFA5B24(0, 100, func_395(floor((to_float(timera()) / 12,5f)), 255));
			if (iLocal_3696 == 0)
			{
				if (unk_0x25F7A4D42AF2AB93())
				{
					if (!unk_0x83A8177D302E1A7E(iLocal_3697) && !unk_0x83A8177D302E1A7E(iLocal_3698))
					{
						iLocal_3697 = unk_0xC1879030EB463216("scr_fam3_wheelspin_dirt", Local_3201, vLocal_3062, vLocal_3068, 1f, 0, 0, 0);
						iLocal_3698 = unk_0xC1879030EB463216("scr_fam3_wheelspin_dirt", Local_3201, vLocal_3065, vLocal_3068, 1f, 0, 0, 0);
						iLocal_3696 = 1;
						unk_0xCEAA091B490F8407(-1, "FAMILY3_CABLE_STRAIN_MASTER", Local_3201, 0, false, 0);
					}
				}
			}
			else if (iLocal_3696 == 1)
			{
				if (unk_0x83A8177D302E1A7E(iLocal_3697) && unk_0x83A8177D302E1A7E(iLocal_3698))
				{
					unk_0x9AB5B84DE011D632(iLocal_3697, "wheelspin", fLocal_3695, 0);
					unk_0x9AB5B84DE011D632(iLocal_3698, "wheelspin", fLocal_3695, 0);
				}
			}
		}
		if (*iParam0 == 1)
		{
			if (IntToFloat(timera()) > fParam1)
			{
				unk_0x9CA905FC23D32931(Local_3201, 0);
			}
			if (((IntToFloat(timera()) > fParam1 && fVar4 > fParam5) || fVar4 > (fParam5 * 2f)) || IntToFloat(timera()) > (fParam1 + 1500f))
			{
				unk_0x9CA905FC23D32931(Local_3201, 0);
				unk_0x1AEF7184B203A58D(Local_3201, 2f);
				if (unk_0x83A8177D302E1A7E(iLocal_3697) && unk_0x83A8177D302E1A7E(iLocal_3698))
				{
					fLocal_3695 = 0f;
					unk_0x9AB5B84DE011D632(iLocal_3697, "wheelspin", fLocal_3695, 0);
					unk_0x9AB5B84DE011D632(iLocal_3698, "wheelspin", fLocal_3695, 0);
					unk_0xF7E25143642732EA(iLocal_3697, 0);
					unk_0xF7E25143642732EA(iLocal_3698, 0);
					iLocal_3696 = 0;
				}
				*iParam0 = 0;
				return 1;
			}
		}
		if (*iParam0 == 1)
		{
			fLocal_3694 = func_394((fLocal_3694 + (0,2f * timestep())), 0f, 0,3f);
			fLocal_3695 = func_394((fLocal_3695 + (0,25f * timestep())), 0f, 1f);
		}
		else if (*iParam0 == 0)
		{
			fLocal_3694 = func_394((fLocal_3694 - (0,4f * timestep())), 0f, 0,3f);
			fLocal_3695 = 0f;
		}
		unk_0x58350770D73D313A("FAMILY_3_PULL_DOWN_HOUSE_SCENE", "apply", fLocal_3695);
	}
	return 0;
}

float func_394(float fParam0, float fParam1, float fParam2)
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

int func_395(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return iParam0;
	}
	else if (iParam0 > iParam1)
	{
		return iParam1;
	}
	else if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam0;
}

void func_396(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_397(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x10BA239D3B8FDC7F(iParam0, 90f) && unk_0xF79A7BCA9E38BBBC(iParam0))
			{
				fVar3 = (0f + ((0,5f * 30f) * timestep()));
				iVar4 = round((unk_0x4F3973434662D795(0, 59) * 255f));
				iVar5 = round((unk_0x4F3973434662D795(0, 71) * 255f));
				if ((unk_0x7FEE810EE9E768EB(0, 72) || unk_0x7FEE810EE9E768EB(0, 76)) || unk_0x7FEE810EE9E768EB(0, 73))
				{
					unk_0x38C3A68D7861DCFD(0, 71, 1);
					iVar5 = 0;
				}
				if (iVar5 >= 250)
				{
					if (unk_0xD9522BA9E27E1349(iParam0) >= 287f)
					{
						vVar0 = { -unk_0x755FF954DAE327E1((130f * fVar3)), 0f, 0f };
						unk_0xDFC6BA855748EB10(iParam0, 1, vVar0, vLocal_3071, 0, 1, 1, 0, 0, 1);
						iLocal_3778 = 0;
					}
					if (iVar4 >= 225)
					{
						if (unk_0xD9522BA9E27E1349(iParam0) > 265f)
						{
							vVar0 = { -unk_0x755FF954DAE327E1((130f * fVar3)), 0f, 0f };
							unk_0xDFC6BA855748EB10(iParam0, 1, vVar0, vLocal_3071, 0, 1, 1, 0, 0, 1);
							iLocal_3778 = 0;
						}
					}
					else if (iVar4 <= -225)
					{
						if (unk_0xD9522BA9E27E1349(iParam0) < 285f)
						{
							vVar0 = { unk_0x755FF954DAE327E1((130f * fVar3)), 0f, 0f };
							unk_0xDFC6BA855748EB10(iParam0, 1, vVar0, vLocal_3071, 0, 1, 1, 0, 0, 1);
							iLocal_3778 = 0;
						}
					}
					if (iVar4 == 0)
					{
						if (iLocal_3778 == 0)
						{
							iLocal_3778 = unk_0x1C0640BA9A7327B3();
							switch (unk_0x09AC81E49EA267F7(0, 2))
							{
								case 0:
									iLocal_3777 = 1;
									break;
								
								case 1:
									iLocal_3777 = -1;
									break;
							}
						}
						else if ((unk_0x1C0640BA9A7327B3() - iLocal_3778) < 1000)
						{
							vVar0 = { (unk_0x755FF954DAE327E1((130f * fVar3)) * IntToFloat(iLocal_3777)), 0f, 0f };
							unk_0xDFC6BA855748EB10(iParam0, 1, vVar0, vLocal_3071, 0, 1, 1, 0, 0, 1);
							iLocal_3778 = 0;
						}
					}
					vVar0 = { 0f, 0f, -unk_0x755FF954DAE327E1((450f * fVar3)) };
					unk_0xDFC6BA855748EB10(iParam0, 1, vVar0, vLocal_3071, 0, 1, 1, 0, 0, 1);
				}
				else
				{
					iLocal_3778 = 0;
				}
			}
		}
	}
}

void func_398(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (iLocal_3686 == 1)
			{
				func_216(Local_3201, 3f, 3, 1056964608, 0, 1, 0);
				if (iLocal_3687 == 8)
				{
					if (unk_0xDF1306B443CD3D15(Local_3201, 0))
					{
						func_287(unk_0x16F2683693E537C9(), -1, 5000, 0);
						func_287(Local_3107, 0, 6000, 0);
						*uParam0++;
					}
				}
			}
			break;
	}
}

void func_399(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (iLocal_3686 == 1)
			{
				if (fLocal_3689 >= 0,56f)
				{
					if (!unk_0x9F4FE516EAACCFC5(iLocal_3680))
					{
						iLocal_3680 = unk_0x92B061D59B9B540A(26379945, 1);
						unk_0x86F44313DFA8F00C(iLocal_3680, -1009,953f, 633,5962f, 140,4834f, 22,946f, -0,125925f, 21,44852f, 43,51022f, 0, 1, 1, 2);
						unk_0x86F44313DFA8F00C(iLocal_3680, -1010,459f, 633,9232f, 140,5982f, 13,29827f, -0,125925f, 21,36455f, 43,51022f, 5000, 0, 0, 2);
						unk_0x91F5B0244AAE6222(iLocal_3680, "MEDIUM_EXPLOSION_SHAKE", 0,1f);
						unk_0x29D5132FBDCF2B1E(1);
						unk_0xEF6276132B396452(0f, 1065353216);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0x8BCB70EB440DED83(false);
						unk_0xBFE31971E49FA500(false);
						unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						*iParam0++;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x3D8490C463E91AC3(&uLocal_3683) && unk_0xC844350D5D58C99A(Local_3321))
			{
				unk_0xDEC30C89A69FEB57(uLocal_3683, Local_3321);
				unk_0xDEC30C89A69FEB57(uLocal_3683, Local_3201);
				unk_0xF690C84DADBB3551(&Local_3321);
				unk_0xBCD4D622B825D37C(&uLocal_3683);
				unk_0xFE5EFE178CCBA358();
				iLocal_3684 = 0;
			}
			if (unk_0xC844350D5D58C99A(Local_3329))
			{
				unk_0xF690C84DADBB3551(&Local_3329);
			}
			if (fLocal_3689 >= 0,683f)
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_3680))
				{
					unk_0x86F44313DFA8F00C(iLocal_3680, -1009,381f, 658,4453f, 152,8209f, -39,49625f, -0,125924f, 138,3634f, 43,51022f, 0, 1, 1, 2);
					unk_0x86F44313DFA8F00C(iLocal_3680, -1010,492f, 655,0285f, 150,7794f, -30,66858f, -0,125923f, 143,7998f, 43,51022f, 4000, 0, 0, 2);
					unk_0x91F5B0244AAE6222(iLocal_3680, "HAND_SHAKE", 0,25f);
					unk_0x29D5132FBDCF2B1E(1);
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(0f);
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (fLocal_3689 >= 0,73f)
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_3680))
				{
					unk_0x86F44313DFA8F00C(iLocal_3680, -1029,067f, 622,2623f, 125,4774f, 45,37811f, -0,125924f, 1,607233f, 50,25604f, 0, 1, 1, 2);
					unk_0x86F44313DFA8F00C(iLocal_3680, -1029,405f, 621,6323f, 126,4555f, 40,44935f, -0,078049f, 1,812782f, 50,25604f, 5000, 0, 0, 2);
					unk_0x91F5B0244AAE6222(iLocal_3680, "HAND_SHAKE", 0,25f);
					unk_0x29D5132FBDCF2B1E(1);
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(0f);
					*iParam0++;
				}
			}
			break;
		
		case 3:
			if (iLocal_3687 == 8)
			{
				unk_0x86F44313DFA8F00C(iLocal_3680, -1013,91f, 632,1597f, 140,1316f, 22,28829f, -0,125923f, 0,95958f, 50,25604f, 0, 1, 1, 2);
				unk_0x86F44313DFA8F00C(iLocal_3680, -1014,135f, 633,3419f, 140,9774f, 20,5643f, -0,125923f, 1,779718f, 50,25604f, 9000, 0, 0, 2);
				unk_0x91F5B0244AAE6222(iLocal_3680, "HAND_SHAKE", 0,25f);
				unk_0x29D5132FBDCF2B1E(1);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x2FB9A57162E54BAB(0f);
				Local_3125.f_7 = unk_0x1C0640BA9A7327B3();
				if (unk_0xDF1306B443CD3D15(Local_3201, 0))
				{
					iLocal_3769 = 1;
					unk_0x05CA0E7946B27A19(Local_3201, 1);
					unk_0xA47B46945FF6DE74(Local_3201, -994,4631f, 643,6545f, 138,8214f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(Local_3201, 277,058f);
					unk_0xB9FD7450C0DAB575(Local_3201, 1084227584);
				}
				*iParam0++;
			}
			break;
		
		case 4:
			if (func_108(5500, Local_3125.f_7))
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_3680))
				{
					unk_0x86F44313DFA8F00C(iLocal_3680, -991,0989f, 642,2662f, 140,0028f, 15,86285f, 0f, 67,17722f, 50f, 0, 1, 1, 2);
					unk_0x91F5B0244AAE6222(iLocal_3680, "HAND_SHAKE", 0,25f);
					unk_0x29D5132FBDCF2B1E(1);
					Local_3125.f_7 = unk_0x1C0640BA9A7327B3();
					*iParam0++;
				}
			}
			break;
		
		case 5:
			if (func_108(500, Local_3125.f_7))
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_3680))
				{
					unk_0x8BCB70EB440DED83(true);
					unk_0xBFE31971E49FA500(true);
					unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
					unk_0x61A3AC394D8DC0BC();
					unk_0x9A8DDC7C522F5BF5(iLocal_3680, 0);
					unk_0x5CAFA5DD13658DFE(0);
				}
				*iParam0++;
			}
			break;
	}
}

int func_400(int iParam0, bool bParam1, bool bParam2)
{
	return func_281(iParam0, !bParam1, bParam2);
}

void func_401()
{
	Global_22211.f_6 = 1;
}

void func_402(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!func_98("FAM3_PULLS"))
	{
		if (func_305(unk_0x16F2683693E537C9(), Local_3201) && func_305(Local_3107, Local_3201))
		{
			if (!func_93())
			{
				if (!func_220(&Local_3435, 1))
				{
					if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_PULLS", 7, 0, 0, 0))
					{
						func_94("FAM3_PULLS", 1);
					}
				}
			}
		}
	}
	if (iParam0 == 1)
	{
		switch (iParam2)
		{
			case 1:
				if (iLocal_3692 == 1)
				{
					if (!func_98("FAM3_PULLC1"))
					{
						if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_PULLC1", 7, 0, 0, 0))
						{
							func_94("FAM3_PULLC1", 1);
							*iParam3 = unk_0x1C0640BA9A7327B3();
							*uParam4 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_3692 == 1)
				{
					if (!func_98("FAM3_PULLC2"))
					{
						if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_PULLC2", 7, 0, 0, 0))
						{
							func_94("FAM3_PULLC2", 1);
							*iParam3 = unk_0x1C0640BA9A7327B3();
							*uParam4 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
				break;
		}
		if (iParam1 == 0)
		{
			if (func_108(8000, *iParam3))
			{
				if (!func_93())
				{
					if (!func_220(&Local_3435, 1))
					{
						if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_PULLI", 7, 0, 0, 0))
						{
							*iParam3 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
				else if (func_298("FAM3_PULLS"))
				{
					*iParam3 = unk_0x1C0640BA9A7327B3();
				}
			}
			*uParam4 = unk_0x1C0640BA9A7327B3();
		}
		else
		{
			*iParam3 = unk_0x1C0640BA9A7327B3();
			if (func_108(3000, *uParam4))
			{
				if (!func_93())
				{
					if (!func_220(&Local_3435, 1))
					{
						if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_PULLE", 7, 0, 0, 0))
						{
							*uParam4 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
	}
	else
	{
		*iParam3 = unk_0x1C0640BA9A7327B3();
		*uParam4 = unk_0x1C0640BA9A7327B3();
	}
	if (iLocal_3686 == 1)
	{
		if (!func_98("FAM3_PULLC3"))
		{
			if (!func_93())
			{
				if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_PULLC3", 7, 0, 0, 0))
				{
					func_94("FAM3_PULLC3", 1);
				}
			}
		}
		if (iParam0 == 1)
		{
			if (!func_98("FAM3_DOWN") && !func_98("FAM3_DOWNA"))
			{
				if (!func_93())
				{
					if (iLocal_3687 == 8)
					{
						switch (func_122())
						{
							case 0:
								if (func_74(&uLocal_3472, "FAM3AUD", "FAM3_DOWN", "FAM3_DOWN_1", 7, 0, 0))
								{
									func_94("FAM3_DOWN", 1);
								}
								break;
							
							case 1:
								if (func_74(&uLocal_3472, "FAM3AUD", "FAM3_DOWNA", "FAM3_DOWNA_1", 7, 0, 0))
								{
									func_94("FAM3_DOWNA", 1);
								}
								break;
							}
						}
					}
				}
			}
	}
}

void func_403(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5)
{
	if (unk_0xB39672D8C1F6BB48(uLocal_3681))
	{
		if (unk_0xD92EF3526CDA283F(uLocal_3681) == 7)
		{
			*fParam5 = unk_0xC41B351F02B1C7FE(uLocal_3681);
		}
	}
	switch (*iParam0)
	{
		case 0:
			uLocal_3681 = unk_0x57651D42225429CC(-1020,5f, 663,41f, 154,75f, 50f, "DES_StiltHouse");
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (unk_0xD92EF3526CDA283F(uLocal_3681) != 5)
				{
					if (unk_0xD92EF3526CDA283F(uLocal_3681) != 4)
					{
						unk_0xCADC8175C61F28E5(uLocal_3681, 4);
					}
				}
				else if (unk_0xD92EF3526CDA283F(uLocal_3681) == 5)
				{
					*uParam3 = 1;
					*iParam0++;
				}
			}
			break;
		
		case 1:
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (unk_0xD92EF3526CDA283F(uLocal_3681) == 5)
				{
					if (*iParam1 == 1)
					{
						unk_0xCADC8175C61F28E5(uLocal_3681, 6);
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (unk_0xD92EF3526CDA283F(uLocal_3681) == 7)
				{
					if (*iParam2 == 0)
					{
						if (unk_0xC41B351F02B1C7FE(uLocal_3681) > 0,1475f)
						{
							unk_0xCADC8175C61F28E5(uLocal_3681, 12);
							*iParam2 = 1;
							settimerb(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (*iParam2 == 0)
				{
					if (unk_0xD92EF3526CDA283F(uLocal_3681) == 12)
					{
						unk_0xCADC8175C61F28E5(uLocal_3681, 13);
						*iParam0++;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (unk_0xD92EF3526CDA283F(uLocal_3681) == 7)
				{
					if (*iParam2 == 0)
					{
						if (unk_0xC41B351F02B1C7FE(uLocal_3681) >= 0,433f)
						{
							unk_0xCADC8175C61F28E5(uLocal_3681, 12);
							*iParam2 = 1;
							settimerb(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (*iParam2 == 0)
				{
					if (unk_0xD92EF3526CDA283F(uLocal_3681) == 12)
					{
						unk_0xCADC8175C61F28E5(uLocal_3681, 13);
						*iParam0++;
					}
				}
			}
			break;
		
		case 6:
			unk_0x9E5E60D8C63FD9D1();
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (unk_0xD92EF3526CDA283F(uLocal_3681) == 7)
				{
					if (unk_0xC41B351F02B1C7FE(uLocal_3681) > 0,875f || iLocal_3733 == 1)
					{
						if (iLocal_3733 == 1)
						{
							unk_0xCADC8175C61F28E5(uLocal_3681, 9);
						}
						if (!unk_0x83A8177D302E1A7E(iLocal_3699))
						{
							if (unk_0x25F7A4D42AF2AB93())
							{
								iLocal_3699 = unk_0xB055A4268B938F30("ent_ray_fam3_dust_settle", -1016f, 642f, 141f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
							}
						}
						*iParam0++;
					}
				}
			}
			break;
		
		case 7:
			if (unk_0xB39672D8C1F6BB48(uLocal_3681))
			{
				if (unk_0xD92EF3526CDA283F(uLocal_3681) == 10)
				{
					*uParam4 = 1;
					unk_0xEB819BD1E585E9CB(-1, "FAMILY3_POST_DEBRIS_MASTER", -1016f, 642f, 141f, 0, 0, 0, 0);
					*iParam0++;
				}
			}
			break;
		
		case 8:
			break;
	}
}

void func_404(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			switch (iParam2->f_11)
			{
				case 0:
					if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam1, 0))
					{
						unk_0x3F423BF5B8125A50("missfam3");
						if (unk_0xB4AE0788C1587752("missfam3"))
						{
							unk_0xDD353D0E9C789D0E(&uVar0);
							unk_0xC6EB89C59F2AF6B8(0, "missfam3", "react_incar_brace_enter_f", 4f, -1000f, -1, 16, 0, 0, 0, 0);
							unk_0xC6EB89C59F2AF6B8(0, "missfam3", "react_incar_brace_loop_f", 1000f, -4f, -1, 17, 0, 0, 0, 0);
							unk_0x75ABDC5F81978924(uVar0);
							unk_0x78ADC381772E3D54(iParam0, uVar0);
							unk_0xF82EA857DA10E0CD(&uVar0);
							iParam2->f_13 = 0;
							iParam2->f_11 = 1;
						}
					}
					break;
				
				case 1:
					if (iParam2->f_13 == 0)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "react_incar_brace_loop_f", 3) && unk_0xD1960163A3042274(iParam0, 242628503) != 1)
						{
							unk_0xC6EB89C59F2AF6B8(iParam0, "missfam3", "react_incar_brace_loop_f", 4f, -4f, -1, 17, 0, 0, 0, 0);
						}
						iParam2->f_13 = 1;
					}
					if (iParam3 == 1)
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 2;
					}
					else if (iLocal_3688 >= 3)
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 4;
					}
					break;
				
				case 2:
					if (iParam2->f_13 == 0)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "react_incar_bumps_loop_f", 3))
						{
							unk_0xC6EB89C59F2AF6B8(iParam0, "missfam3", "react_incar_bumps_loop_f", 4f, -4f, -1, 17, 0, 0, 0, 0);
						}
						iParam2->f_7 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(2000, 3000));
						iParam2->f_13 = 1;
					}
					if (iParam3 == 1)
					{
						if ((unk_0x1C0640BA9A7327B3() - iParam2->f_7) > 0)
						{
							iParam2->f_13 = 0;
							iParam2->f_11 = 3;
						}
					}
					else
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 1;
					}
					break;
				
				case 3:
					if (iParam2->f_13 == 0)
					{
						unk_0xC6EB89C59F2AF6B8(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 4f, -4f, -1, 17, 0, 0, 0, 0);
						iParam2->f_7 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(1000, 1750));
						iParam2->f_13 = 1;
					}
					if (iParam2->f_13 == 1)
					{
						if ((unk_0x1C0640BA9A7327B3() - iParam2->f_7) > 0)
						{
							if (unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 3))
							{
								if (iParam3 == 1)
								{
									iParam2->f_13 = 0;
									iParam2->f_11 = 2;
								}
								else
								{
									iParam2->f_13 = 0;
									iParam2->f_11 = 1;
								}
							}
						}
					}
					break;
				
				case 4:
					if (iParam2->f_13 == 0)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iParam0, "missfam3", "react_incar_brace_exit_f", 3))
						{
							unk_0xC6EB89C59F2AF6B8(iParam0, "missfam3", "react_incar_brace_exit_f", 4f, -4f, -1, 16, 0, 0, 0, 0);
						}
						iParam2->f_13 = 1;
					}
					if (iLocal_3686 == 1)
					{
						iParam2->f_13 = 0;
						iParam2->f_11++;
					}
					break;
				
				case 5:
					if (iParam2->f_13 == 0)
					{
						func_287(unk_0x16F2683693E537C9(), -1, 10000, 0);
						func_287(Local_3107, 0, 10500, 0);
						iParam2->f_13 = 1;
					}
					break;
				}
			}
	}
}

void func_405()
{
	if (unk_0xC844350D5D58C99A(Local_3143))
	{
		if (!unk_0x437347B10A200C4B(Local_3143, 0))
		{
			switch (Local_3143.f_11)
			{
				case 0:
					if (!unk_0xB4ECF989E2C1DAC8(Local_3143, "missfam3", "coach_idle", 3))
					{
						unk_0xC6EB89C59F2AF6B8(Local_3143, "missfam3", "coach_idle", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
					}
					Local_3143.f_11++;
					break;
				
				case 1:
					if (bLocal_3691 == 1)
					{
						if (!unk_0x69DF961355195C3C(iLocal_3678))
						{
							unk_0xA3BF0AA5A2608191(Local_3143);
							iLocal_3678 = unk_0xE9744DB7B8CA6965(-1014,525f, 654,25f, 156,175f, 0f, 0f, -103,32f, 2);
							unk_0x915804B434753CBD(Local_3143, iLocal_3678, "missfam3", "argument_outro_coach", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iLocal_3678, 0,6125f);
						}
						Local_3143.f_11++;
					}
					break;
				
				case 2:
					if (unk_0x69DF961355195C3C(iLocal_3678))
					{
						if (unk_0xA45992A6CE82FB43(iLocal_3678) > 0,95f)
						{
							unk_0x1BF8B16C32704027(Local_3143, -1000f, 1);
							unk_0xA3BF0AA5A2608191(Local_3143);
							func_117(Local_3143, -1021,589f, 663,7698f, 155,2747f, 178,532f, 0, 0, 0);
							Local_3143.f_11++;
						}
					}
					break;
				
				case 3:
					if (iLocal_3688 >= 2)
					{
						if (!unk_0x69DF961355195C3C(iLocal_3678))
						{
							unk_0xA3BF0AA5A2608191(Local_3143);
							iLocal_3678 = unk_0xE9744DB7B8CA6965(-1034f, 662,1f, 156,1f, 0f, 0f, -165,96f, 2);
							unk_0x915804B434753CBD(Local_3143, iLocal_3678, "missfam3", "argument_outro_coach", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x57E0CF9BF653D99A(iLocal_3678, 0,83f);
							Local_3143.f_11++;
						}
					}
					break;
				
				case 4:
					if (!unk_0xEB6A8945D1AC98A1(Local_3143))
					{
						if (unk_0x69DF961355195C3C(iLocal_3678))
						{
							if (unk_0xA45992A6CE82FB43(iLocal_3678) > 0,98f)
							{
								unk_0x1BF8B16C32704027(Local_3143, -1000f, 1);
								unk_0xA3BF0AA5A2608191(Local_3143);
								unk_0xEBA53F35D0085654(&Local_3143);
								Local_3143.f_11++;
							}
						}
					}
					break;
				}
			}
	}
}

int func_406(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (func_211("fam_3_mcs_1", 1))
			{
				if (unk_0xDF1306B443CD3D15(Local_3201, 0))
				{
					if (unk_0x1150BCE24B1630AC(Local_3201, 0))
					{
						unk_0xF50D17A63556B8D4(Local_3201, 0, 0, 0f);
					}
					if (unk_0x1150BCE24B1630AC(Local_3201, 1))
					{
						unk_0xF50D17A63556B8D4(Local_3201, 1, 0, 0f);
					}
					unk_0x29E8331978B73E7F(Local_3201, "Fam3_tow_truck", 0, 2072156101, 0);
					unk_0x56FDC9ADE35F7DB0(Local_3201, true, 1, 0);
				}
				if (!unk_0xEB6A8945D1AC98A1(Local_3107))
				{
					unk_0x29E8331978B73E7F(Local_3107, "Franklin", 0, func_18(1), 0);
				}
				if (!unk_0xEB6A8945D1AC98A1(Local_3143))
				{
					unk_0x29E8331978B73E7F(Local_3143, "TennisCoach", 0, 1545995274, 0);
				}
				func_202(1, 1, 1, 0, 0, 0);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				unk_0x4C902758BEA97C68(2048);
				unk_0x420FE818E70BB523(4);
				*iParam0++;
			}
			else if (unk_0x75EECC9B0572F772())
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xA0A8D79ACBBD1CB8("Michael", unk_0x16F2683693E537C9(), 0);
				}
				if (!unk_0xEB6A8945D1AC98A1(Local_3107))
				{
					unk_0xA0A8D79ACBBD1CB8("Franklin", Local_3107, 0);
				}
				unk_0x7656EB524FEAB9B3("TennisCoach", 3, 1, 0, 0);
				unk_0x7656EB524FEAB9B3("TennisCoach", 4, 1, 0, 0);
			}
			break;
		
		case 1:
			if (unk_0x22A8E52414415B76())
			{
				unk_0xC92DB9682A650680("FAM3_ARRIVE_HOUSE");
				unk_0x29D5132FBDCF2B1E(1);
				unk_0x536F1BE96C726C4B(Local_3125.f_2, 100f, 1, 0, 0, false);
				unk_0x28F5E4DA506AC0CA(Local_3125.f_2, 100f, 0, 0, 0, 0, false, 0);
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			unk_0x8C57ADF8EFD2D9A9();
			unk_0x3F423BF5B8125A50("missfam3");
			unk_0x523BCC9DC80CD82F(Local_3329.f_7);
			unk_0x523BCC9DC80CD82F(Local_3313.f_7);
			unk_0x523BCC9DC80CD82F(Local_3337.f_7);
			unk_0x4C81063C30E87DDB();
			if (unk_0xEABED1927EFB48CA(0))
			{
				unk_0x29D5132FBDCF2B1E(0);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x2FB9A57162E54BAB(0f);
			}
			if (unk_0x3148AE92ED70DC30("Michael", 0))
			{
				if (iLocal_3733 == 0)
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xB4AE0788C1587752("missfam3"))
						{
							unk_0x3E8E48829F3C7624(unk_0x16F2683693E537C9(), "missfam3", "argument_outro_michael", -993,2f, 646,188f, 139,52f, 0f, 0f, -93,24f, 1000f, -4f, -1, 299010, 0f, 2, 0);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
						}
					}
				}
			}
			if (unk_0x3148AE92ED70DC30("Franklin", 0))
			{
				if (iLocal_3733 == 0)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_3107))
					{
						if (unk_0xDF1306B443CD3D15(Local_3201, 0))
						{
							unk_0xF821F915BC24D246(Local_3107, Local_3201, 0);
						}
					}
				}
			}
			if (unk_0x3148AE92ED70DC30("Fam3_tow_truck", 0))
			{
				if (iLocal_3733 == 0)
				{
					if (unk_0xDF1306B443CD3D15(Local_3201, 0))
					{
						unk_0x611DFA9294B339CA(Local_3201, 5, 0, 1);
					}
				}
			}
			if (unk_0x3148AE92ED70DC30("TennisCoach", 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_3143))
				{
					unk_0xC6EB89C59F2AF6B8(Local_3143, "missfam3", "coach_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_3313))
			{
				if (func_107(&Local_3313, 1))
				{
					unk_0x20641932E5104B25(Local_3313, true, 0);
					unk_0xB0703A3FDD659128(Local_3313, unk_0x16F2683693E537C9(), false);
					unk_0xB0703A3FDD659128(Local_3201, Local_3313, false);
					unk_0xE3430088DE1D3440(Local_3313, 0);
					unk_0x121463FA9534A8E3(Local_3313, 0);
				}
			}
			if (iLocal_3771 == 0)
			{
				if (unk_0x8F677B1F58B4741C() > 39500)
				{
					if (unk_0xC92DB9682A650680("FAM3_HOOKED_UP"))
					{
						iLocal_3771 = 1;
					}
				}
			}
			if (iLocal_3684 == 0)
			{
				if (iLocal_3733 == 0)
				{
					if (IntToFloat(unk_0x8F677B1F58B4741C()) > 58000f)
					{
						if (!unk_0xC844350D5D58C99A(Local_3329))
						{
							if (func_107(&Local_3329, 1))
							{
								unk_0xE3430088DE1D3440(Local_3329, 0);
								unk_0x121463FA9534A8E3(Local_3329, 0);
							}
						}
						if (!unk_0x3D8490C463E91AC3(&uLocal_3683))
						{
							unk_0x8C57ADF8EFD2D9A9();
							if (unk_0xEE4B5EDF70ABF498())
							{
								uLocal_3683 = unk_0x554477F017313FFD(-1017,985f, 660,4285f, 147,4662f, 0f, 0f, 0f, 28f, 1, -1f, 0,5f, 0,5f, 0, 1, 1, 1065353216, 0, 0);
								unk_0xDD935F6C79C05FEE(uLocal_3683, sLocal_3042);
							}
						}
						if (unk_0xC844350D5D58C99A(Local_3321) && unk_0x3D8490C463E91AC3(&uLocal_3683))
						{
							if (unk_0x32B8283A77B4A240(Local_3321))
							{
								if (unk_0xDF1306B443CD3D15(Local_3201, 0))
								{
									unk_0x05CA0E7946B27A19(Local_3201, 1);
									unk_0xE8F21A278C1048BF(uLocal_3683, Local_3321, Local_3201, Local_3321.f_1, unk_0x68E4ADDDDCD7BDDE(Local_3201, 0f, -2,1f, 0,6f), 35f, 0, 0, 0, 0);
									iLocal_3684 = 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x154B5473FBFD0156())
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				func_202(0, 1, 1, 0, 0, 0);
				if (iLocal_3733 == 1)
				{
					if ((unk_0xEE4B5EDF70ABF498() && unk_0xB4AE0788C1587752("missfam3")) && unk_0xB87F6CF6E5628C67(Local_3313.f_7))
					{
						if (unk_0xDF1306B443CD3D15(Local_3201, 0))
						{
							unk_0x05CA0E7946B27A19(Local_3201, 1);
							unk_0x611DFA9294B339CA(Local_3201, 5, 0, 0);
							unk_0xB9FD7450C0DAB575(Local_3201, 1084227584);
						}
						if (iLocal_3684 == 0)
						{
							if (!unk_0xC844350D5D58C99A(Local_3329))
							{
								if (func_107(&Local_3329, 1))
								{
									unk_0xE3430088DE1D3440(Local_3329, 0);
									unk_0x121463FA9534A8E3(Local_3329, 0);
								}
							}
							if (!unk_0x3D8490C463E91AC3(&uLocal_3683))
							{
								if (unk_0xEE4B5EDF70ABF498())
								{
									uLocal_3683 = unk_0x554477F017313FFD(-1017,985f, 660,4285f, 147,4662f, 0f, 0f, 0f, 28f, 1, -1f, 0,5f, 0,5f, 0, 1, 1, 1065353216, 0, 0);
									unk_0xDD935F6C79C05FEE(uLocal_3683, sLocal_3042);
								}
							}
							if (unk_0xC844350D5D58C99A(Local_3321) && unk_0x3D8490C463E91AC3(&uLocal_3683))
							{
								if (unk_0x32B8283A77B4A240(Local_3321))
								{
									if (unk_0xDF1306B443CD3D15(Local_3201, 0))
									{
										unk_0xE8F21A278C1048BF(uLocal_3683, Local_3321, Local_3201, Local_3321.f_1, unk_0x68E4ADDDDCD7BDDE(Local_3201, 0f, -2,1f, 0,6f), 35f, 0, 0, 0, 0);
										iLocal_3684 = 1;
									}
								}
							}
						}
						if (!unk_0xC844350D5D58C99A(Local_3313))
						{
							if (func_107(&Local_3313, 1))
							{
								unk_0x20641932E5104B25(Local_3313, true, 0);
								unk_0xB0703A3FDD659128(Local_3313, unk_0x16F2683693E537C9(), false);
								unk_0xB0703A3FDD659128(Local_3201, Local_3313, false);
								unk_0xE3430088DE1D3440(Local_3313, 0);
								unk_0x121463FA9534A8E3(Local_3313, 0);
							}
						}
						wait(1000);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0xB4AE0788C1587752("missfam3"))
							{
								unk_0x3E8E48829F3C7624(unk_0x16F2683693E537C9(), "missfam3", "argument_outro_michael", -993,2f, 646,188f, 139,52f, 0f, 0f, -93,24f, 1000f, -4f, -1, 299010, 0f, 2, 0);
								unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_3107))
						{
							if (unk_0xDF1306B443CD3D15(Local_3201, 0))
							{
								if (!unk_0xC42A92762C58E1B9(Local_3107, Local_3201, 0))
								{
									unk_0xF821F915BC24D246(Local_3107, Local_3201, 0);
								}
							}
						}
						unk_0x29D5132FBDCF2B1E(1);
						unk_0xEF6276132B396452(0f, 1065353216);
						unk_0x2FB9A57162E54BAB(0f);
						if (unk_0x757EF87A33649210())
						{
							unk_0x82E51BCA72537B6C(800);
						}
						*iParam0++;
					}
				}
				else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "argument_outro_michael", 3))
				{
					*iParam0++;
				}
			}
			else if (iLocal_3733 == 0)
			{
				if (unk_0xEAD40E09B5AA81FC())
				{
					unk_0xFCA2A436FD40C153(0, 0, 0, 0);
					iLocal_3733 = 1;
				}
			}
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "argument_outro_michael", 3))
				{
					unk_0x4C81063C30E87DDB();
					unk_0x38C3A68D7861DCFD(1, 0, 1);
					if (!func_98("FAM3_HKD"))
					{
						if (func_74(&uLocal_3472, "FAM3AUD", "FAM3_HKD", "FAM3_HKD_3", 7, 0, 0))
						{
							func_94("FAM3_HKD", 1);
						}
					}
					if (unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "missfam3", "argument_outro_michael") >= 0,95f)
					{
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
						unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
						unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, 0, 0, 0);
						unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 500, 0, 1, 0);
					}
					else if (unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "missfam3", "argument_outro_michael") >= 0,9f)
					{
						if (unk_0xA4FD7964FEE91ED8(0) == 4)
						{
							if (iLocal_3806 == 0)
							{
								unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
								unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3806 = 1;
							}
						}
					}
				}
				else
				{
					if (unk_0xC844350D5D58C99A(Local_3313))
					{
						if (!unk_0x437347B10A200C4B(Local_3313, 0))
						{
							if (unk_0xDF1306B443CD3D15(Local_3201, 0))
							{
								unk_0x20641932E5104B25(Local_3313, true, 0);
								unk_0xB0703A3FDD659128(Local_3313, unk_0x16F2683693E537C9(), true);
								unk_0xB0703A3FDD659128(Local_3201, Local_3313, false);
							}
						}
					}
					if (!unk_0xC844350D5D58C99A(Local_3337))
					{
						if (func_107(&Local_3337, 1))
						{
							unk_0x20641932E5104B25(Local_3337, true, 0);
							unk_0xB0703A3FDD659128(Local_3337, Local_3201, false);
						}
					}
					if (unk_0xA4FD7964FEE91ED8(0) == 4)
					{
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 247,8959f);
						unk_0xEF6276132B396452(-15f, 1065353216);
						unk_0x2FB9A57162E54BAB(0f);
					}
					unk_0x71199B01895C6202(Local_3313.f_7);
					unk_0xC92DB9682A650680("FAM3_TRUCK_PULL");
					unk_0xBF40D896CA4BDBE7();
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_407(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Local_3435.f_13), 20);
	fLocal_3740 = func_292(unk_0x16F2683693E537C9(), Local_3143, 1);
	func_494(&(Local_3245.f_7));
	func_444(&(Local_3143.f_11));
	func_443(Local_3201, Local_3223, &iLocal_3728, &(Local_3143.f_7), 1000);
	func_442(Local_3223.f_1, Local_3223, 250f, 0,7f, iLocal_3727);
	switch (func_122())
	{
		case 0:
			func_438("FAM3_MST1");
			break;
		
		case 1:
			func_438("FAM3_FST1");
			break;
	}
	func_293(&Local_3078);
	func_293(&Local_3086);
	if (iLocal_3707 == 0)
	{
		if (iLocal_3706 == 0)
		{
			if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
			{
				unk_0x728A83630EB6002C((-742,6803f - 48f), (539,21f - 48f), (115,3406f - 18f), (-742,6803f + 48f), (539,21f + 48f), (115,3406f + 18f));
				iLocal_3706 = 1;
			}
		}
		else
		{
			if (!unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
			{
				unk_0x728A83630EB6002C(0f, 0f, 0f, 0f, 0f, 0f);
				iLocal_3706 = 0;
			}
			if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
			{
				if (((((((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -742,6803f, 539,21f, 115,3406f, 48f, 48f, 18f, false, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1184,89f, 709,6f, 132,38f, -1133,41f, 679,84f, 161,1f, 36f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1062,28f, 662,22f, 125,02f, -1138,02f, 681,84f, 161,37f, 36f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1065,68f, 661,26f, 121,1f, -976,84f, 641,13f, 153,91f, 36f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -894,49f, 655,77f, 113,47f, -985,13f, 640,53f, 154,35f, 36f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -898,85f, 657,44f, 113,6f, -823,46f, 645,49f, 144,01f, 36f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -770,93f, 551,06f, 101,91f, -827,24f, 649,55f, 144,36f, 36f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -770,974f, 557,36f, 102,67f, -700,16f, 501,75f, 124,6f, 36f, 0, true, 0))
				{
					unk_0x728A83630EB6002C(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_3707 = 1;
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (unk_0xDF1306B443CD3D15(Local_3201, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_3107))
				{
					if (!unk_0xC42A92762C58E1B9(Local_3107, Local_3201, 0) && !unk_0x81A5359F25512A04(Local_3107))
					{
						if (unk_0xD1960163A3042274(Local_3107, -1794415470) != 1)
						{
							unk_0x5B1D360B9C6F0A09(Local_3107, Local_3201, 20000, 0, 2f, 262145, 0);
						}
					}
					unk_0x4E885A246A9D983A(Local_3107, 29, false);
					unk_0x11AD11297DC58CC7(Local_3107, true);
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_3201, 0) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
					{
						if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -1794415470) != 1)
						{
							func_117(unk_0x16F2683693E537C9(), Local_3125.f_2, Local_3125.f_5, 0, 0, 0);
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -530524, 0, 0, 0);
							unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), Local_3201, 20000, -1, 2f, 131073, 0);
						}
					}
					unk_0x11AD11297DC58CC7(Local_3107, true);
				}
			}
			if (unk_0x757EF87A33649210())
			{
				wait(150);
				unk_0x82E51BCA72537B6C(800);
			}
			unk_0x8B4C4CA774181102(0f, 7f, 4);
			*iParam0++;
			break;
		
		case 1:
			func_268();
			if (unk_0xDF1306B443CD3D15(Local_3201, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_3201, 0))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3201.f_1))
					{
						if (func_278("FAM3_GIT", 0, 0) || func_278("FAM3_GBIT", 0, 0))
						{
							unk_0x790015DC92C918E2();
						}
						unk_0x142CC44DB769B57E(&(Local_3201.f_1));
					}
					if (iLocal_3774 == 0)
					{
						if (!unk_0x562F77A7F33D2E46("FAMILY_3_FOLLOW_THE_COACH"))
						{
							unk_0x8BC9595FD2792B5D("FAMILY_3_FOLLOW_THE_COACH");
						}
						iLocal_3774 = 1;
					}
					if (iLocal_3727 == 0)
					{
						if (unk_0xDF1306B443CD3D15(Local_3223, 0))
						{
							if (!unk_0xE4EDC4B0E92C078B(Local_3223.f_1))
							{
								Local_3223.f_1 = func_400(Local_3223, 1, 0);
							}
							if (unk_0xE4EDC4B0E92C078B(Local_3223.f_1))
							{
								if (!func_98("FAM3_FTC"))
								{
									unk_0x790015DC92C918E2();
									func_279("FAM3_FTC", 7500, 1);
								}
							}
						}
					}
				}
				else
				{
					if (!unk_0xE4EDC4B0E92C078B(Local_3201.f_1))
					{
						Local_3201.f_1 = func_400(Local_3201, 0, 0);
					}
					if (unk_0xE4EDC4B0E92C078B(Local_3201.f_1))
					{
						if (!func_98(&Local_3074))
						{
							if (iLocal_3774 == 0)
							{
								unk_0x790015DC92C918E2();
								func_279(&Local_3074, 7500, 1);
							}
						}
						else if (!func_98("FAM3_GBIT"))
						{
							if (iLocal_3774 == 1)
							{
								unk_0x790015DC92C918E2();
								func_279("FAM3_GBIT", 7500, 1);
							}
						}
					}
					if (unk_0xE4EDC4B0E92C078B(Local_3223.f_1))
					{
						unk_0x142CC44DB769B57E(&(Local_3223.f_1));
					}
				}
			}
			if (iLocal_3726 == 1)
			{
				if (iLocal_3773 == 0)
				{
					if (fLocal_3742 >= 7500f)
					{
						iLocal_3773 = 1;
					}
				}
				if (unk_0xDF1306B443CD3D15(Local_3201, 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_3201, 0))
					{
						if (iLocal_3773 == 1)
						{
							func_412(&uLocal_3460, Local_3223, func_219(func_437(0), "FAM3_HCAM", ""), 0, 1, 1, 1);
						}
						if (unk_0x8C74DE122769E1BF())
						{
							if (!unk_0x562F77A7F33D2E46("FAMILY_3_FOCUS_ON_COACH"))
							{
								unk_0x8BC9595FD2792B5D("FAMILY_3_FOCUS_ON_COACH");
							}
						}
						else if (unk_0x562F77A7F33D2E46("FAMILY_3_FOCUS_ON_COACH"))
						{
							unk_0x8910D3D58E0132B8("FAMILY_3_FOCUS_ON_COACH");
						}
					}
					else if (func_98("FAM3_HCAM"))
					{
						if (func_274("FAM3_HCAM"))
						{
							unk_0xA37A90C62806D848(1);
						}
					}
				}
				if (iLocal_3727 == 0)
				{
					if (unk_0xC844350D5D58C99A(Local_3245))
					{
						if (!unk_0x437347B10A200C4B(Local_3245, 0))
						{
							if (unk_0x12DE711B1C681E9E(Local_3201, Local_3245, vLocal_3046, 0, 1, 0))
							{
								func_411(&uLocal_3460, 0, 0);
								if (unk_0x562F77A7F33D2E46("FAMILY_3_FOCUS_ON_COACH"))
								{
									unk_0x8910D3D58E0132B8("FAMILY_3_FOCUS_ON_COACH");
								}
								iLocal_3726 = 0;
								iLocal_3727 = 1;
								iLocal_3104 = 1;
								if (func_278("FAM3_FTC", 0, 0))
								{
									unk_0x790015DC92C918E2();
								}
							}
						}
					}
					if (unk_0x3D1053F9EB43B7AD(Local_3201, -1381,268f, 474,7865f, 103,0548f, -1390,82f, 457,3811f, 110,4862f, 8f, 0, true, 0))
					{
						func_411(&uLocal_3460, 0, 0);
						if (unk_0x562F77A7F33D2E46("FAMILY_3_FOCUS_ON_COACH"))
						{
							unk_0x8910D3D58E0132B8("FAMILY_3_FOCUS_ON_COACH");
						}
						iLocal_3726 = 0;
						iLocal_3727 = 1;
						iLocal_3104 = 1;
						if (func_278("FAM3_FTC", 0, 0))
						{
							unk_0x790015DC92C918E2();
						}
						if (func_104(0))
						{
							func_100(1);
						}
					}
					if (fLocal_3740 > 250f)
					{
						if (unk_0xE4EDC4B0E92C078B(Local_3223.f_1))
						{
							unk_0x142CC44DB769B57E(&(Local_3223.f_1));
						}
						func_411(&uLocal_3460, 0, 0);
						if (unk_0x562F77A7F33D2E46("FAMILY_3_FOCUS_ON_COACH"))
						{
							unk_0x8910D3D58E0132B8("FAMILY_3_FOCUS_ON_COACH");
						}
						iLocal_3726 = 0;
						iLocal_3727 = 1;
						iLocal_3104 = 0;
						if (func_278("FAM3_FTC", 0, 0))
						{
							unk_0x790015DC92C918E2();
						}
					}
				}
			}
			else if (iLocal_3727 == 1)
			{
				if (unk_0x562F77A7F33D2E46("FAMILY_3_FOLLOW_THE_COACH"))
				{
					unk_0x8910D3D58E0132B8("FAMILY_3_FOLLOW_THE_COACH");
				}
				if (!unk_0x562F77A7F33D2E46("FAMILY_3_FIND_THE_COACH"))
				{
					unk_0x8BC9595FD2792B5D("FAMILY_3_FIND_THE_COACH");
				}
				switch (iLocal_3104)
				{
					case 1:
						break;
					
					case 0:
						break;
				}
				if (func_98("FAM3_LOST"))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3223.f_1))
					{
						unk_0x142CC44DB769B57E(&(Local_3223.f_1));
					}
					if (func_298("FAM3_LOST"))
					{
						iLocal_3724 = 1;
						if (unk_0x40EFDB96B3112BA7() == 1)
						{
							if (!unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (unk_0xDF1306B443CD3D15(Local_3201, 0))
								{
									if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Local_3201))
									{
										if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
										{
											iLocal_3709 = 1;
										}
									}
								}
							}
						}
					}
					else if (iLocal_3724 == 1)
					{
						*iParam0++;
					}
				}
			}
			if (iLocal_3709 == 1)
			{
				func_409(&Local_3435, vLocal_3049, 4f, 8f, 2f, 1, Local_3107, Local_3201, &Local_3078, "CMN_FLEAVE", "", &Local_3086, 0, 1, 1, -1);
			}
			break;
		
		case 2:
			unk_0x3F423BF5B8125A50("missfam3");
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael", 3) || unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -1273030092) == 1)
				{
					unk_0x38C3A68D7861DCFD(0, 75, 1);
				}
			}
			if (iLocal_3729 == 0)
			{
				if (((unk_0xE4EDC4B0E92C078B(Local_3435.f_5) && func_305(unk_0x16F2683693E537C9(), Local_3201)) && func_305(Local_3107, Local_3201)) && unk_0x3D1053F9EB43B7AD(Local_3201, -1116,003f, 693,0043f, 140,4966f, -1040,929f, 667,3976f, 157,2546f, 36f, 0, true, 0))
				{
					if (!unk_0x5A91F08DF773C39D(Local_3201, -1054,042f, 681,1791f, 152,7736f, 20f, 16f, 12f, false, true, 0))
					{
						func_99(1);
						settimera(0);
						unk_0x98EF6C2D1F172740(vLocal_3055, -1, 9500, 2000, -87780624);
						unk_0x132B85BCE016BCA0(unk_0x16F2683693E537C9(), Local_3201, -991,6547f, 645,3821f, 140,6425f, 4, 6f, 8, 1f, 2f, 0);
					}
					unk_0xC92DB9682A650680("FAM3_BALCONY");
					iLocal_3729 = 1;
				}
				else if ((((!unk_0xE4EDC4B0E92C078B(Local_3435.f_5) && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && func_305(unk_0x16F2683693E537C9(), Local_3201)) && func_305(Local_3107, Local_3201)) && unk_0x3D1053F9EB43B7AD(Local_3201, -1116,003f, 693,0043f, 140,4966f, -1040,929f, 667,3976f, 157,2546f, 36f, 0, true, 0))
				{
					unk_0xC92DB9682A650680("FAM3_BALCONY");
					iLocal_3729 = 1;
				}
			}
			else if (iLocal_3729 == 1)
			{
				if (iLocal_3730 == 0)
				{
					if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
					}
					if ((unk_0xE4EDC4B0E92C078B(Local_3435.f_5) && func_305(unk_0x16F2683693E537C9(), Local_3201)) && func_305(Local_3107, Local_3201))
					{
						if (func_98("FAM3_SPOT"))
						{
							if (iLocal_3731 == 1)
							{
								unk_0x920D29D81E211607(Local_3201, 0);
								unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael", 4f, -4f, -1, 48, 0, 0, 0, 0);
								unk_0xC6EB89C59F2AF6B8(Local_3107, "missfam3", "shout_out_window_franklin", 4f, -1,5f, -1, 48, 0, 0, 0, 0);
								unk_0x3E8E48829F3C7624(Local_3143, "missfam3", "shout_out_window_coach", -1034,63f, 654,114f, 156,08f, 0f, 0f, 85f, 4f, -4f, -1, 5128, 0f, 2, 0);
								unk_0x0C8C0C840C2D1AD2(Local_3143, unk_0x16F2683693E537C9(), -1, 0, 2);
								unk_0x8B4C4CA774181102(7f, 7f, 4);
								iLocal_3730 = 1;
							}
						}
					}
				}
				else if (iLocal_3730 == 1)
				{
					if (func_98("FAM3_BALC"))
					{
						if (iLocal_3732 == 0)
						{
							if (func_298("FAM3_BALC"))
							{
								if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael", 3))
								{
									if (unk_0x40EFDB96B3112BA7() >= 0 || unk_0x3D1053F9EB43B7AD(Local_3201, -1116,163f, 681,8411f, 135,5691f, -1066,323f, 665,0233f, 149,0627f, 24f, 0, true, 0))
									{
										if (unk_0x562F77A7F33D2E46("FAMILY_3_FIND_THE_COACH"))
										{
											unk_0x8910D3D58E0132B8("FAMILY_3_FIND_THE_COACH");
										}
										if (!unk_0x562F77A7F33D2E46("FAMILY_3_ARRIVE_AT_HOUSE"))
										{
											unk_0x8BC9595FD2792B5D("FAMILY_3_ARRIVE_AT_HOUSE");
										}
										iLocal_3732 = 1;
									}
								}
							}
						}
					}
					if (unk_0x8C74DE122769E1BF())
					{
						if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
						}
						if (((timera() > 9500 || (unk_0xB4ECF989E2C1DAC8(Local_3143, "missfam3", "shout_out_window_coach", 3) && unk_0x8CA9406E01C7EE58(Local_3143, "missfam3", "shout_out_window_coach") > 0,8f)) || (func_98("FAM3_BALC") && !func_93())) || unk_0x3D1053F9EB43B7AD(Local_3201, -1056,989f, 652,4657f, 140,0272f, -1047,219f, 668,4141f, 153,1514f, 16f, 0, true, 0))
						{
							func_99(0);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael", 3))
								{
									unk_0x8FB4E06C94958F84(unk_0x16F2683693E537C9());
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_3107))
							{
								if (unk_0xB4ECF989E2C1DAC8(Local_3107, "missfam3", "shout_out_window_franklin", 3))
								{
									unk_0x8FB4E06C94958F84(Local_3107);
								}
							}
							unk_0x29D5132FBDCF2B1E(0);
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
							if (unk_0x562F77A7F33D2E46("FAMILY_3_ARRIVE_AT_HOUSE"))
							{
								unk_0x8910D3D58E0132B8("FAMILY_3_ARRIVE_AT_HOUSE");
							}
							if (unk_0x562F77A7F33D2E46("FAMILY_3_FIND_THE_COACH"))
							{
								unk_0x8910D3D58E0132B8("FAMILY_3_FIND_THE_COACH");
							}
							if (!unk_0x562F77A7F33D2E46("FAMILY_3_DRIVE_IN_TO_POSITION"))
							{
								unk_0x8BC9595FD2792B5D("FAMILY_3_DRIVE_IN_TO_POSITION");
							}
						}
					}
				}
			}
			if (unk_0xE4EDC4B0E92C078B(Local_3201.f_1))
			{
				if (unk_0xC0E5DA578D275A41(Local_3201) == Local_3201.f_1)
				{
					unk_0x142CC44DB769B57E(&(Local_3201.f_1));
				}
			}
			if (func_409(&Local_3435, vLocal_3049, 4f, 8f, 2f, 1, Local_3107, Local_3201, &Local_3078, "CMN_FLEAVE", "", &Local_3086, 0, 1, 1, -1))
			{
				if (unk_0xDF1306B443CD3D15(Local_3201, 0))
				{
					if (unk_0xF79A7BCA9E38BBBC(Local_3201))
					{
						if (unk_0x9F4FE516EAACCFC5(iLocal_3680))
						{
							unk_0xE3BB8E05FCEB3FBE(iLocal_3680, false);
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							unk_0x9A8DDC7C522F5BF5(iLocal_3680, 0);
						}
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael", 3))
							{
								unk_0x8FB4E06C94958F84(unk_0x16F2683693E537C9());
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_3107))
						{
							if (unk_0xB4ECF989E2C1DAC8(Local_3107, "missfam3", "shout_out_window_franklin", 3))
							{
								unk_0x8FB4E06C94958F84(Local_3107);
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_3143))
						{
							if (unk_0xB4ECF989E2C1DAC8(Local_3143, "missfam3", "shout_out_window_coach", 3))
							{
								unk_0xA3BF0AA5A2608191(Local_3143);
							}
							unk_0xBC43ED9FE28DB191(Local_3143);
						}
						if (unk_0xC844350D5D58C99A(Local_3289))
						{
							unk_0xF690C84DADBB3551(&Local_3289);
						}
						if (unk_0xC844350D5D58C99A(Local_3297))
						{
							unk_0xF690C84DADBB3551(&Local_3297);
						}
						if (unk_0xC844350D5D58C99A(Local_3345))
						{
							unk_0xF690C84DADBB3551(&Local_3345);
						}
						func_123(&Local_3223, 1, 1);
						func_2();
						func_89();
						settimera(0);
						*iParam0++;
					}
				}
			}
			if (func_277() || func_276())
			{
				if ((unk_0xA0F4292EA950943D("fam_3_mcs_1") || unk_0x62A1F4500E8F07E0()) || unk_0x39B7A3CCD2467CAB())
				{
					unk_0x5C8D148FC238F38A();
				}
			}
			else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_3049, true) < 100f)
			{
				unk_0xAE1670DD12E839C3("fam_3_mcs_1", 8);
				if (unk_0x75EECC9B0572F772())
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xA0A8D79ACBBD1CB8("Michael", unk_0x16F2683693E537C9(), 0);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_3107))
					{
						unk_0xA0A8D79ACBBD1CB8("Franklin", Local_3107, 0);
					}
					unk_0x7656EB524FEAB9B3("TennisCoach", 3, 1, 0, 0);
					unk_0x7656EB524FEAB9B3("TennisCoach", 4, 1, 0, 0);
				}
			}
			else if ((unk_0xA0F4292EA950943D("fam_3_mcs_1") || unk_0x62A1F4500E8F07E0()) || unk_0x39B7A3CCD2467CAB())
			{
				unk_0x5C8D148FC238F38A();
			}
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1036,48f, 671,6424f, 155,4577f, 4f, 7f, 4,5f, false, true, 0) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1006,947f, 667,2821f, 154,9174f, 5f, 8f, 4,5f, false, true, 0))
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 102, true);
				unk_0x38C3A68D7861DCFD(0, 22, 1);
			}
			break;
		
		case 3:
			if (func_216(Local_3201, 3f, 1, 1056964608, 0, 1, 0))
			{
				if ((!unk_0x25037C66EB32B076() || !func_93()) || timera() > 5000)
				{
					func_408(&Local_3161, 1, 1, 1);
					func_123(&Local_3245, 1, 1);
					unk_0xDB8844D4B7C60440(Local_3245.f_9, sLocal_3061);
					unk_0x8910D3D58E0132B8("FAMILY_3_FIND_THE_COACH");
					unk_0x8910D3D58E0132B8("FAMILY_3_ARRIVE_AT_HOUSE");
					unk_0x8910D3D58E0132B8("FAMILY_3_DRIVE_IN_TO_POSITION");
					unk_0x29D5132FBDCF2B1E(0);
					unk_0x8B4C4CA774181102(7f, 0f, 4);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_408(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (unk_0xEB6A8945D1AC98A1(*iParam0))
				{
					if (unk_0x437347B10A200C4B(*iParam0, 0))
					{
						unk_0xB3F77607A42FF835(*iParam0, 0);
					}
					unk_0x6DAD7906B73F064D(iParam0);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!unk_0xEB6A8945D1AC98A1(*iParam0))
				{
					if (!unk_0xEB6A8945D1AC98A1(*iParam0))
					{
						if (unk_0xBFDE4EE64C4BF2D6(*iParam0, func_227()))
						{
							unk_0x0A94A109271BE75A(*iParam0);
						}
					}
					unk_0xFADC0A217229F6B5(*iParam0, iParam3);
					unk_0x6DAD7906B73F064D(iParam0);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_1));
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(*iParam0))
			{
				if (unk_0xBFDE4EE64C4BF2D6(*iParam0, func_227()))
				{
					unk_0x0A94A109271BE75A(*iParam0);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(*iParam0))
			{
				unk_0xB3F77607A42FF835(*iParam0, 0);
			}
			unk_0xEBA53F35D0085654(iParam0);
		}
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_9 = 0;
		iParam0->f_10 = 0;
		iParam0->f_8 = 0;
		iParam0->f_11 = 0;
		iParam0->f_12 = 0;
		iParam0->f_15 = 0f;
		iParam0->f_13 = 0;
		iParam0->f_14 = 0;
		iParam0->f_17 = 0;
	}
}

bool func_409(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	return func_410(iParam0, vParam1, vParam4, bParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

int func_410(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7, var uParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)
{
	return func_234(iParam0, vParam1, vParam4, func_272(), func_272(), bParam7, 5, uParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

void func_411(var uParam0, int iParam1, int iParam2)
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
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xF3039DE1FDB4F6FD(1);
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
		if (func_274(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_274(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

void func_412(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_413(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_413(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_414(uParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_414(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_411(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_415(uParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_415(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
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
	if (func_274(iVar0))
	{
		func_436();
	}
	if (func_435(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 1);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_422(uParam0, bParam7, bParam9, 0))
			{
				func_419(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_437(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
						{
							if (!func_274(iVar0))
							{
								func_302(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_418(1);
								}
							}
						}
					}
				}
			}
			else if (func_437(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam8)
					{
						if (!func_274(iVar0))
						{
							func_302(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_418(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam5))
			{
				if (func_274(sParam5))
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
						func_411(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_411(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_411(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_411(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_411(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
				{
					func_411(uParam0, iVar0, 1);
				}
			}
			if (!func_422(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_417(uParam0))
				{
					func_416(uParam0);
				}
			}
		}
	}
	else
	{
		func_411(uParam0, iVar0, 0);
	}
}

void func_416(var uParam0)
{
	if (func_435(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(1);
		unk_0x29D5132FBDCF2B1E(0);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_417(var uParam0)
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

int func_418(bool bParam0)
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

void func_419(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
		func_411(uParam0, 0, 0);
	}
	if (func_67(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_420())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, -1, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0, 0);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_420()
{
	return func_421(unk_0xD803B885F5E47A62());
}

int func_421(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_422(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_434(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_433(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_433(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_434(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_417(uParam0))
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
						if (!func_434(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_433(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_433(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_434(bParam1, bParam2, bParam3))
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
					if (!func_434(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_433(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_433(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
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
				else if (!func_434(bParam1, bParam2, bParam3))
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
						if (func_432(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_431(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_431(bParam1, bParam2, bParam3))
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
					else if (func_432(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_417(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_423(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_436();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_423(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_104(0))
	{
		return 0;
	}
	if (func_430())
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
	if ((func_429() || func_428(Global_4456448.f_232883)) || func_427())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_426(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_425(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_424(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_424(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_346(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_346(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_425(int iParam0, int iParam1)
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

int func_426(int iParam0, int iParam1)
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

var func_427()
{
	return Global_2450632.f_17;
}

bool func_428(int iParam0)
{
	return iParam0 == 51;
}

var func_429()
{
	return Global_2450632.f_16;
}

bool func_430()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_431(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_423(bParam0, bParam1, bParam2))
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

int func_432(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_423(bParam0, bParam1, bParam2))
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
				unk_0xF3039DE1FDB4F6FD(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_433(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_423(bParam0, bParam1, bParam2))
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

int func_434(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_423(bParam0, bParam1, bParam2))
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
				unk_0xF3039DE1FDB4F6FD(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_435(int iParam0)
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

void func_436()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

int func_437(char* sParam0)
{
	if (!func_423(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_274(sParam0)) || func_274("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_418(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_418(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_418(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_438(char* sParam0)
{
	if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(Local_3107)) && unk_0xDF1306B443CD3D15(Local_3201, 0))
	{
		if (iLocal_3726 == 1)
		{
			if (iLocal_3743 == 0)
			{
				if (func_441(fLocal_3740, 175f))
				{
					if (iLocal_3723 == 0)
					{
						if (func_93())
						{
							Local_3711 = { func_300() };
							func_200();
						}
						if (!func_220(&Local_3435, 0))
						{
							if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_WARN", 9, 0, 0, 0))
							{
								iLocal_3723 = 1;
							}
						}
					}
				}
				else if (!func_98(sParam0))
				{
					if (unk_0x82CCEAB29E9451DD(Local_3107, Local_3201) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Local_3201))
					{
						if (!func_93())
						{
							if (!func_220(&Local_3435, 1))
							{
								if (func_97(&uLocal_3472, "FAM3AUD", sParam0, 7, 0, 0, 0))
								{
									iLocal_3736 = 0;
									func_94(sParam0, 1);
								}
							}
						}
					}
				}
				else if (iLocal_3723 == 1)
				{
					if (!func_93())
					{
						if (func_74(&uLocal_3472, "FAM3AUD", sParam0, &Local_3711, 7, 0, 0))
						{
							iLocal_3723 = 0;
						}
					}
				}
				else if (iLocal_3723 == 0)
				{
					if (!func_93())
					{
						Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
						iLocal_3743 = 1;
					}
				}
			}
			else
			{
				if (!func_98("FAM3_LEFT") && !func_98("FAM3_RIGHT"))
				{
					if (fLocal_3742 > 30725f && fLocal_3742 < 33500f)
					{
						if (unk_0x82CCEAB29E9451DD(Local_3107, Local_3201) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Local_3201))
						{
							if (!func_93())
							{
								if (!func_220(&Local_3435, 1))
								{
									if (iLocal_3728 == 1)
									{
										if (fLocal_3740 < 75f)
										{
											if (unk_0x3D1053F9EB43B7AD(Local_3201, -1076,606f, 431,1891f, 63,72191f, -1077,557f, 345,4051f, 78,3798f, 24f, 0, true, 0))
											{
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_LEFT", 7, 0, 0, 0))
												{
													func_94("FAM3_LEFT", 1);
													Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												}
											}
											else if (unk_0x3D1053F9EB43B7AD(Local_3201, -1019,407f, 397,1515f, 62,30875f, -1064,46f, 394,3105f, 79,96735f, 24f, 0, true, 0))
											{
												if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_RIGHT", 7, 0, 0, 0))
												{
													func_94("FAM3_RIGHT", 1);
													Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3800 == 0)
				{
					if (func_305(unk_0x16F2683693E537C9(), Local_3201))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1288,666f, 459,2319f, 94,68425f, -1392,72f, 466,8967f, 113,1189f, 32f, 0, true, 0))
						{
							if (unk_0xC844350D5D58C99A(Local_3245) && !unk_0x437347B10A200C4B(Local_3245, 0))
							{
								if (unk_0x20D6474D5F4B9FC6(Local_3245) && !unk_0xE0058AC511E68F8A(Local_3245))
								{
									if (unk_0x9901AABAC4D4C590(Local_3245) < 8350f)
									{
										func_89();
										iLocal_3800 = 1;
									}
								}
							}
						}
					}
				}
				if (iLocal_3800 == 0)
				{
					if (!func_93())
					{
						if (!func_220(&Local_3435, 1))
						{
							if (func_108(10000, Local_3107.f_9))
							{
								if (unk_0x82CCEAB29E9451DD(Local_3107, Local_3201) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Local_3201))
								{
									if (fLocal_3740 > 185f)
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_WARN", 7, 0, 0, 0))
										{
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
									}
									else if (fLocal_3740 > 150f)
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_LOSE", 7, 0, 0, 0))
										{
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
									}
									else if (fLocal_3740 < 75f)
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_SEE", 7, 0, 0, 0))
										{
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
									}
									else if (iLocal_3728 == 1)
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_AHEAD", 7, 0, 0, 0))
										{
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
									}
									else if (iLocal_3728 == 0)
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_LOSE", 7, 0, 0, 0))
										{
											Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3800 == 1)
				{
					if (iLocal_3801 == 0)
					{
						if (!func_93())
						{
							func_440(&uLocal_3472, "FAM3AUD", "FAM3_VAN", 7, 0, 0, 0, 0);
							iLocal_3801 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3727 == 1)
		{
			if (iLocal_3104 == 1)
			{
				if (!func_98("FAM3_VAN") && !func_98("FAM3_LOST"))
				{
					if (unk_0xC844350D5D58C99A(Local_3245))
					{
						if (!unk_0x437347B10A200C4B(Local_3245, 0))
						{
							if (unk_0x12DE711B1C681E9E(Local_3201, Local_3245, vLocal_3046, 0, 1, 0))
							{
								if (unk_0x20D6474D5F4B9FC6(Local_3245) && !unk_0xE0058AC511E68F8A(Local_3245))
								{
									if (unk_0x9901AABAC4D4C590(Local_3245) < 8350f)
									{
										if (unk_0x82CCEAB29E9451DD(Local_3107, Local_3201) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Local_3201))
										{
											if (iLocal_3801 == 0)
											{
												if (!func_93())
												{
													if (!func_220(&Local_3435, 1))
													{
														if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_VAN", 7, 0, 0, 0))
														{
															iLocal_3743 = 0;
															func_94("FAM3_VAN", 1);
														}
													}
												}
												else
												{
													func_200();
												}
											}
											else
											{
												func_439();
												iLocal_3743 = 0;
												func_94("FAM3_VAN", 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_3104 == 1)
			{
				if (!func_98("FAM3_VANM2") && !func_98("FAM3_LOST"))
				{
					if (iLocal_3725 == 0)
					{
						if (unk_0xC844350D5D58C99A(Local_3245) && unk_0xC844350D5D58C99A(Local_3161))
						{
							if (unk_0xDF1306B443CD3D15(Local_3245, 0) && !unk_0xEB6A8945D1AC98A1(Local_3161))
							{
								if (unk_0x1B3D109B39CC2C89(Local_3245, Local_3201))
								{
									if (func_104(0))
									{
										func_100(1);
									}
									if (iLocal_3739 == 0)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_3161))
										{
											func_244(Local_3161, "GENERIC_CURSE_HIGH", 3);
											unk_0x67B9E919FADF78E0(Local_3245, 5000, 0, 0);
											iLocal_3739 = 1;
										}
									}
									if (iLocal_3723 == 0)
									{
										if (func_93())
										{
											func_200();
											iLocal_3736 = 0;
										}
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_VANM2", 8, 0, 0, 0))
										{
											iLocal_3725 = 1;
											func_94("FAM3_VANM2", 1);
										}
									}
								}
							}
						}
					}
				}
			}
			if (!func_98("FAM3_LOST"))
			{
				if (iLocal_3801 == 1)
				{
					if (!func_98("FAM3_VAN"))
					{
						func_89();
					}
				}
				if (!func_93())
				{
					if (!func_220(&Local_3435, 1))
					{
						if (unk_0x82CCEAB29E9451DD(Local_3107, Local_3201) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Local_3201))
						{
							if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_LOST", 9, 0, 0, 0))
							{
								unk_0x8B4C4CA774181102(3f, 3f, 3);
								func_94("FAM3_LOST", 1);
								Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
				}
			}
			else
			{
				if (!func_98("FAM3_TURN"))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
					{
						if (unk_0x5A91F08DF773C39D(Local_3201, -1195,873f, 706,98f, 149,7481f, 34f, 34f, 7f, false, true, 0))
						{
							if (!func_93())
							{
								if (!func_220(&Local_3435, 1))
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_TURN", 7, 0, 0, 0))
									{
										func_94("FAM3_LOOK", 1);
										func_94("FAM3_TURN", 1);
									}
								}
							}
							else
							{
								func_89();
							}
						}
					}
				}
				if (!func_98("FAM3_FIND"))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
					{
						if (unk_0x5A91F08DF773C39D(Local_3201, -1183,073f, 704,4132f, 150,8057f, 16f, 16f, 7f, false, true, 0))
						{
							if (!func_93())
							{
								if (!func_220(&Local_3435, 1))
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_FIND", 7, 0, 0, 0))
									{
										func_94("FAM3_LOOK", 1);
										func_94("FAM3_TURN", 1);
										func_94("FAM3_FIND", 1);
									}
								}
							}
							else
							{
								func_89();
							}
						}
					}
				}
				if (!func_98("FAM3_CAR"))
				{
					if (func_98("FAM3_FIND"))
					{
						if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
						{
							if (iLocal_3728 == 1)
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 1))
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_CAR", 7, 0, 0, 0))
										{
											func_94("FAM3_CAR", 1);
										}
									}
								}
								else
								{
									func_89();
								}
							}
						}
					}
				}
				if (!func_98("FAM3_LOOK"))
				{
					if (iLocal_3104 == 1)
					{
						if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
						{
							if (func_98(&Local_3078) || unk_0xEA6BC48857E0AC4C(&Local_3078))
							{
								if (func_108(8000, Local_3107.f_9))
								{
									if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_3049, true) < 425f)
									{
										if (!unk_0x8B38C0DAEEDB5F9C(Local_3201))
										{
											if (!func_93())
											{
												if (!func_220(&Local_3435, 1))
												{
													if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_LOOK", 7, 0, 0, 0))
													{
														iLocal_3637++;
														Local_3107.f_9 = unk_0x1C0640BA9A7327B3();
													}
													if (iLocal_3637 == 1)
													{
														func_94("FAM3_LOOK", 1);
													}
												}
												else if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
												{
													func_296(unk_0x16F2683693E537C9(), "FAM3_AIAA", "MICHAEL", 6);
													func_94("FAM3_LOOK", 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!func_98("FAM3_SPOT"))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
					{
						if (iLocal_3729 == 1)
						{
							if (!func_93())
							{
								if (!func_220(&Local_3435, 1))
								{
									if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_SPOT", 7, 0, 0, 0))
									{
										func_94("FAM3_SPOT", 1);
									}
								}
							}
							else
							{
								func_89();
							}
						}
						else if (iLocal_3730 == 1)
						{
							func_94("FAM3_SPOT", 1);
						}
					}
				}
				else if (!func_93())
				{
					iLocal_3731 = 1;
				}
				if (!func_98("FAM3_BALC"))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
					{
						if (iLocal_3730 == 1)
						{
							if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael", 3) && unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael") > 0,05f)
							{
								if (!func_93())
								{
									if (!func_220(&Local_3435, 1))
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_BALC", 7, 0, 0, 0))
										{
											func_94("FAM3_BALC", 1);
										}
									}
								}
							}
						}
					}
				}
				if (!func_98("FAM3_BALCR"))
				{
					if (func_98("FAM3_BALC"))
					{
						if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
						{
							if (iLocal_3730 == 1 && iLocal_3732 == 1)
							{
								if (!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missfam3", "shout_out_window_michael", 3))
								{
									if (!func_93())
									{
										if (!func_220(&Local_3435, 1))
										{
											if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_BALCR", 7, 0, 0, 0))
											{
												func_94("FAM3_BALCR", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3104 == 0)
				{
					if (func_98(sParam0))
					{
						if (!func_98("FAM3_MST2") && !func_98("FAM3_FST2"))
						{
							if (unk_0xE4EDC4B0E92C078B(Local_3435.f_5))
							{
								if (!func_220(&Local_3435, 1))
								{
									if (unk_0x7F8A39872A07D2CE(sParam0, "FAM3_MST1"))
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_MST2", 7, 0, 0, 0))
										{
											func_94("FAM3_MST2", 1);
										}
									}
									if (unk_0x7F8A39872A07D2CE(sParam0, "FAM3_FST1"))
									{
										if (func_97(&uLocal_3472, "FAM3AUD", "FAM3_FST2", 7, 0, 0, 0))
										{
											func_94("FAM3_FST2", 1);
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

void func_439()
{
	unk_0x871665896C890C7F();
	Global_21797 = 0;
}

int func_440(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_21798 = 1;
	Global_21802 = 0;
	Global_21800 = iParam7;
	Global_2621441 = 0;
	return func_75(sParam2, iParam3, 0);
}

int func_441(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_442(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

void func_443(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (func_108(iParam4, *uParam3))
			{
				*iParam2 = unk_0xF649DD3BF44195C7(iParam0, iParam1, 17);
				*uParam3 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			*iParam2 = 0;
		}
	}
	else
	{
		*iParam2 = 0;
	}
}

void func_444(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0xDF1306B443CD3D15(Local_3223, 0))
			{
				if (!unk_0x20D6474D5F4B9FC6(Local_3223))
				{
					unk_0x7980D72D61BEF4D5(Local_3223, true);
					if (!unk_0xEB6A8945D1AC98A1(Local_3143))
					{
						unk_0x4A4806F9D471E491(Local_3143, true, 0);
						unk_0x7980D72D61BEF4D5(Local_3143, true);
						unk_0x4E885A246A9D983A(Local_3143, 32, false);
						unk_0x4E885A246A9D983A(Local_3143, 116, false);
						unk_0x4E885A246A9D983A(Local_3143, 29, false);
					}
					func_493(sLocal_3061, Local_3223.f_9, 1, 1);
					func_492();
					func_491();
					fLocal_1213 = 200f;
					iLocal_67 = 1;
					func_489(Local_3223, sLocal_3061, fLocal_3741, 0, 1500f, 0, 0, 1);
					unk_0x9C8F7A2F15781E10(Local_3223, 1);
					func_463(Local_3223, 1f);
				}
				unk_0x2E1E5367A885F9B7(Local_3223, "FAMILY_3_TENNIS_COACH_GROUP", 0);
			}
			unk_0xC92DB9682A650680("FAM3_CHASE_START");
			iLocal_3726 = 1;
			*uParam0++;
			break;
		
		case 1:
			if (iLocal_3726 == 1)
			{
				if (unk_0xDF1306B443CD3D15(Local_3201, 0) && unk_0xDF1306B443CD3D15(Local_3223, 0))
				{
					func_461(Local_3223, Local_3201, &fLocal_3741, &fLocal_3742);
					func_491();
					func_463(Local_3223, fLocal_3741);
					iLocal_77 = 1;
				}
			}
			else
			{
				func_445(0, 1);
				if (unk_0xDF1306B443CD3D15(Local_3223, 0))
				{
					if (unk_0x20D6474D5F4B9FC6(Local_3223))
					{
						unk_0xA9FBE21EB8701B34(Local_3223, 1,4f);
					}
					unk_0xE121AE1BBF90E186(Local_3223, true);
					unk_0x7980D72D61BEF4D5(Local_3223, true);
					unk_0x20641932E5104B25(Local_3223, false, 0);
				}
				if (!unk_0xEB6A8945D1AC98A1(Local_3143))
				{
					unk_0xE121AE1BBF90E186(Local_3143, true);
					unk_0x7980D72D61BEF4D5(Local_3143, true);
				}
				*uParam0++;
			}
			break;
		
		case 2:
			if (iLocal_3727 == 1)
			{
				if (!unk_0xE4EDC4B0E92C078B(Local_3223.f_1))
				{
					if (unk_0xDF1306B443CD3D15(Local_3223, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(Local_3223))
						{
							unk_0xA9FBE21EB8701B34(Local_3223, 2f);
							unk_0xE121AE1BBF90E186(Local_3223, true);
							unk_0x7980D72D61BEF4D5(Local_3223, true);
							unk_0x20641932E5104B25(Local_3223, false, 0);
						}
						unk_0x06FF977AA95DCCE3(Local_3223, 0);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_3143))
					{
						unk_0xE121AE1BBF90E186(Local_3143, true);
						unk_0x7980D72D61BEF4D5(Local_3143, true);
					}
					unk_0x2404539258C5376B("DES_StiltHouse_imapstart");
					*uParam0++;
				}
			}
			break;
		
		case 3:
			if (unk_0xDF1306B443CD3D15(Local_3223, 0))
			{
				unk_0x3F423BF5B8125A50("missfam3");
				if (!unk_0x20D6474D5F4B9FC6(Local_3223))
				{
					if (unk_0xBCFF5481C5F58C19("DES_StiltHouse_imapstart"))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_3143))
						{
							func_117(Local_3143, -1034,608f, 653,9794f, 155,0754f, 90,0561f, 0, 0, 0);
							unk_0x4A4806F9D471E491(Local_3143, true, 0);
							unk_0xE121AE1BBF90E186(Local_3143, false);
							unk_0x20641932E5104B25(Local_3143, true, 0);
							unk_0xA3BF0AA5A2608191(Local_3143);
							unk_0xE8832A9E16A57A1F(Local_3143, 1, 1);
							unk_0x8B66ED74C2DC2E98(Local_3143, 5f);
							unk_0x64F9F278AB9DCA2C(Local_3143, 3, 1, 0, 0);
							unk_0x64F9F278AB9DCA2C(Local_3143, 4, 1, 0, 0);
							if (unk_0xB4AE0788C1587752("missfam3"))
							{
								unk_0x3E8E48829F3C7624(Local_3143, "missfam3", "coach_idle", -1034,63f, 654,114f, 156,08f, 0f, 0f, 85f, 1000f, -4f, -1, 5121, 0f, 2, 0);
							}
						}
						if (unk_0xDF1306B443CD3D15(Local_3223, 0))
						{
							unk_0xE121AE1BBF90E186(Local_3223, false);
							unk_0x20641932E5104B25(Local_3223, true, 0);
							unk_0x56FDC9ADE35F7DB0(Local_3223, false, 1, 0);
							unk_0x0882E3DC0C991680(Local_3223, 2);
							unk_0xA47B46945FF6DE74(Local_3223, -1069,157f, 672,9374f, 141,3214f, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(Local_3223, 275,767f);
							unk_0xB9FD7450C0DAB575(Local_3223, 1084227584);
							unk_0x611DFA9294B339CA(Local_3223, 0, 0, 1);
							unk_0x611DFA9294B339CA(Local_3223, 0, 1, 0);
							unk_0x05EC10F460C3A4AF(Local_3223, 0);
						}
						iLocal_3810[7] = 1;
						iLocal_3810[8] = 1;
						iLocal_3810[9] = 1;
						*uParam0++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3729 == 1)
			{
				if (unk_0xB4AE0788C1587752("missfam3"))
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_3143))
					{
						unk_0x1E9649458B15960F(Local_3143, false);
						unk_0xC6EB89C59F2AF6B8(Local_3143, "missfam3", "coach_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
						*uParam0++;
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3729 == 1)
			{
				if (iLocal_3730 == 1)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_3143))
					{
						if (!unk_0xB4ECF989E2C1DAC8(Local_3143, "missfam3", "shout_out_window_coach", 3))
						{
							unk_0xDD353D0E9C789D0E(&uVar0);
							unk_0x80AA372E04ED318D(0, -1026,916f, 653,8083f, 155,0754f, 1f, -1, 196,607f, 0,5f);
							unk_0xC6EB89C59F2AF6B8(0, "missfam3", "coach_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
							unk_0x75ABDC5F81978924(uVar0);
							unk_0x78ADC381772E3D54(Local_3143, uVar0);
							unk_0xF82EA857DA10E0CD(&uVar0);
							*uParam0++;
						}
					}
				}
			}
			break;
	}
}

void func_445(bool bParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&cLocal_2526))
	{
		iLocal_64 = 0;
		func_460();
		unk_0x51732B934211201A(iLocal_2542);
		unk_0xF5894FEB702E7E76(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x85089606511D395B(unk_0xD803B885F5E47A62(), 1f);
			unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 1);
			unk_0x060F249A9A3E3F4E(1);
		}
		if (bLocal_80)
		{
			unk_0x71199B01895C6202(func_459());
		}
		unk_0x71199B01895C6202(func_458());
		unk_0x71199B01895C6202(func_457());
		unk_0x71199B01895C6202(func_456());
		if (!unk_0x757EF87A33649210() && !bParam0)
		{
			func_455();
			func_454();
			func_451();
		}
		else
		{
			func_447();
			func_446();
		}
		if (bParam1)
		{
			func_308(0);
		}
	}
}

void func_446()
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_2774[iVar0] = 0;
		vLocal_1821[iVar0] = { 0f, 0f, 0f };
		fLocal_82[iVar0] = 0f;
		fLocal_233[iVar0] = 0f;
		fLocal_384[iVar0] = 0f;
		fLocal_535[iVar0] = 0f;
		iLocal_1222[iVar0] = 0;
		fLocal_686[iVar0] = 0f;
		iLocal_1373[iVar0] = 0;
		iLocal_2543[iVar0] = 0;
		iLocal_1524[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iLocal_2925[iVar0] = 0;
		iVar0++;
	}
	iLocal_1804 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_2940[iVar0] = 0;
		vLocal_2272[iVar0] = { 0f, 0f, 0f };
		fLocal_997[iVar0] = 0f;
		fLocal_1048[iVar0] = 0f;
		fLocal_1099[iVar0] = 0f;
		fLocal_1150[iVar0] = 0f;
		iLocal_1753[iVar0] = 0;
		iLocal_2694[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3017[iVar0] = 0;
		iVar0++;
	}
	iLocal_1806 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_2991[iVar0] = 0;
		vLocal_2423[iVar0] = { 0f, 0f, 0f };
		fLocal_841[iVar0] = 0f;
		fLocal_867[iVar0] = 0f;
		fLocal_893[iVar0] = 0f;
		fLocal_919[iVar0] = 0f;
		iLocal_1675[iVar0] = 0;
		fLocal_945[iVar0] = 0f;
		iLocal_1701[iVar0] = 0;
		iLocal_2745[iVar0] = 0;
		iLocal_1727[iVar0] = 0;
		iVar0++;
	}
	iLocal_1805 = 0;
	iLocal_1808 = 0;
	iLocal_1811 = 0;
	iLocal_1812 = 0;
	iLocal_1813 = 0;
}

void func_447()
{
	func_450();
	func_449();
	func_448();
}

void func_448()
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2991[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_2991[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_2991[iVar0]);
				}
				iVar1 = unk_0xA30B8362589C124A(iLocal_2991[iVar0], -1, 0);
				if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						unk_0xEBA53F35D0085654(&iVar1);
					}
				}
			}
			if (unk_0xAF6690C489CC6203(iLocal_2991[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_2991[iVar0]));
			}
		}
		iLocal_1701[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1675[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1675[iVar0], &cLocal_2526);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2745[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2745[iVar0]);
		}
		iVar0++;
	}
}

void func_449()
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2940[iVar0]))
		{
			if (unk_0xAF6690C489CC6203(iLocal_2940[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_2940[iVar0]));
			}
		}
		iLocal_1753[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2694[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2694[iVar0]);
		}
		iVar0++;
	}
	iLocal_1809 = 0;
	iLocal_1806 = 0;
}

void func_450()
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2774[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_2774[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_2774[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_2774[iVar0]);
				}
				iVar1 = unk_0xA30B8362589C124A(iLocal_2774[iVar0], -1, 0);
				if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						unk_0xEBA53F35D0085654(&iVar1);
					}
				}
			}
			if (unk_0xAF6690C489CC6203(iLocal_2774[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_2774[iVar0]));
			}
		}
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1222[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1222[iVar0], &cLocal_2526);
			}
		}
		iLocal_1373[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2543[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2543[iVar0]);
		}
		iVar0++;
	}
	iLocal_1808 = 0;
	iLocal_1804 = 0;
}

void func_451()
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2991[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_2991[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_2991[iVar0]);
				}
			}
			func_453(iLocal_2991[iVar0]);
			func_452(iLocal_2991[iVar0]);
		}
		iLocal_1701[iVar0] = 0;
		iLocal_1727[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1675[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1675[iVar0], &cLocal_2526);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2745[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2745[iVar0]);
		}
		iVar0++;
	}
	iLocal_1810 = 0;
}

void func_452(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x046C362CF15F1935(&iParam0);
	}
}

void func_453(int iParam0)
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
				if (bLocal_81)
				{
					unk_0xBAFED2F6486F771A(iVar1, 65536, true);
					unk_0xBAFED2F6486F771A(iVar1, 2, false);
				}
				unk_0xAFF39FB306F8E232(iVar1, 6, 0);
			}
		}
	}
}

void func_454()
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2940[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_2940[iVar0], 0))
			{
				unk_0x20641932E5104B25(iLocal_2940[iVar0], true, 0);
			}
			func_452(iLocal_2940[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2694[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2694[iVar0]);
		}
		iVar0++;
	}
	iLocal_1809 = 0;
	iLocal_1806 = 0;
}

void func_455()
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (unk_0xC844350D5D58C99A(iLocal_2774[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_2774[iVar0], 0))
			{
				unk_0x20641932E5104B25(iLocal_2774[iVar0], true, 0);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_2774[iVar0], 0))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_2774[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_2774[iVar0]);
				}
			}
			func_453(iLocal_2774[iVar0]);
			func_452(iLocal_2774[iVar0]);
		}
		iLocal_1373[iVar0] = 0;
		iLocal_1524[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1222[iVar0] > 0)
			{
				unk_0xDB8844D4B7C60440(iLocal_1222[iVar0], &cLocal_2526);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2543[iVar0] == 0)
		{
			unk_0x71199B01895C6202(iLocal_2543[iVar0]);
		}
		iVar0++;
	}
	iLocal_1808 = 0;
	iLocal_1804 = 0;
}

int func_456()
{
	return 1581098148;
}

int func_457()
{
	return 2046537925;
}

int func_458()
{
	return 970598228;
}

int func_459()
{
	if (iLocal_2771 == 0)
	{
		return -912318012;
	}
	return iLocal_2771;
}

void func_460()
{
	unk_0xCE7D0828D683D536();
	unk_0xEF7906595D9044B8(-1);
	unk_0xD980FF3526C8CB9E(1);
	unk_0xE9B51BC60A3B47D9(1);
	unk_0xD60411959D5D930B(1f);
	unk_0xC83E7A5E408DF68C(3);
	unk_0xFF42993F8A095C58(3);
}

void func_461(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0) && unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, true) };
		fVar6 = unk_0x0EB28750412C3A5A(vVar0, vVar3, true);
		fVar7 = 15f;
		fVar8 = 30f;
		fVar9 = 45f;
		fVar10 = 75f;
		fVar11 = 1f;
		if (unk_0x20D6474D5F4B9FC6(iParam0))
		{
			fVar12 = unk_0x9901AABAC4D4C590(iParam0);
			*fParam3 = fVar12;
		}
		vVar13 = { unk_0x5293C88BD2F4DE13(iParam0, vVar3) };
		if (vVar13.y > 1f)
		{
			if (fVar6 > fVar10)
			{
				fVar11 = 5f;
			}
			else if (fVar6 > fVar9)
			{
				fVar11 = 4f;
			}
			else if (fVar6 > fVar8)
			{
				fVar11 = 3f;
			}
			else
			{
				fVar11 = 2,5f;
			}
		}
		else if (fVar6 > fVar10)
		{
			fVar11 = 0,6f;
		}
		else if (fVar6 > fVar9)
		{
			fVar11 = 1,05f;
		}
		else if (fVar6 > fVar8)
		{
			fVar11 = 1,225f;
		}
		else if (fVar6 > fVar7)
		{
			fVar11 = 1,385f;
		}
		else
		{
			fVar11 = 1,45f;
		}
		if (fVar12 < 26000f)
		{
			if (unk_0x5A91F08DF773C39D(iParam1, -948,42f, 399,24f, 76,69f, 118f, 112f, 16f, false, true, 0) || unk_0x3D1053F9EB43B7AD(iParam1, -1002,7f, 306,26f, 65,3f, -886,05f, 263,07f, 89,96f, 32f, 0, true, 0))
			{
				fVar16 = (unk_0x9C66D99E63E8E24C(iParam0) - unk_0x9C66D99E63E8E24C(iParam1));
				if (fVar16 < 0f)
				{
					fVar17 = 0,125f;
				}
				fVar11 = (1,275f + fVar17);
			}
			else if (fVar12 > 19000f)
			{
				fVar11 = (fVar11 + 0,3f);
			}
		}
		if (fVar12 > 27000f)
		{
			fVar11 = (fVar11 + 0,35f);
		}
		func_462(fParam2, fVar11, 0,01f, 1);
	}
}

void func_462(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	if (*uParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (0f + ((fParam2 * 30f) * timestep()));
		}
		if ((*uParam0 - fParam1) > fVar0)
		{
			*uParam0 = (*uParam0 - fVar0);
		}
		else if ((*uParam0 - fParam1) < -fVar0)
		{
			*uParam0 = (*uParam0 + fVar0);
		}
		else
		{
			*uParam0 = fParam1;
		}
	}
}

void func_463(int iParam0, float fParam1)
{
	fVar0 = unk_0x6117725E0134737F();
	fVar0 = (fVar0 * 1000f);
	bLocal_79 = false;
	if (!bLocal_61)
	{
		if (bLocal_60)
		{
			func_488();
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				unk_0x536F1BE96C726C4B(vVar1, 1000f, 1, 0, 0, false);
			}
			bLocal_61 = true;
		}
	}
	else if (!bLocal_60)
	{
		func_460();
		bLocal_61 = false;
	}
	if (bLocal_60)
	{
		fParam1 = 1f;
		unk_0xD60411959D5D930B(0f);
	}
	if (!bLocal_54)
	{
		if (iLocal_49)
		{
			fLocal_1206 = 0f;
		}
		else
		{
			fLocal_1206 = 1f;
		}
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(iParam0))
			{
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					if (func_487(unk_0x16F2683693E537C9(), iParam0))
					{
						iLocal_59 = 1;
					}
					else
					{
						iLocal_59 = 0;
					}
				}
				fLocal_1203 = unk_0x9901AABAC4D4C590(iParam0);
				unk_0xA9FBE21EB8701B34(iParam0, ((fParam1 * fLocal_1204) * fLocal_1206));
				if (bLocal_58)
				{
					func_486(iParam0, fLocal_1203);
					func_485(iParam0, fLocal_1213);
					if (fLocal_1208 > 1000f)
					{
						if (iLocal_1820 == 0)
						{
							func_484(iParam0, fLocal_1213);
						}
						fVar0 = ((fLocal_1203 + 4000f) + (to_float(iLocal_1820) * 2000f));
						func_483(iParam0, fVar0, fLocal_1207);
						iLocal_1820++;
						if (iLocal_1820 > 2)
						{
							fLocal_1208 = 0f;
						}
					}
					else
					{
						iLocal_1820 = 0;
						fLocal_1208 = (fLocal_1208 + (unk_0x6117725E0134737F() * 1000f));
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
		if (fLocal_1203 == 0f || unk_0x757EF87A33649210())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_66)
		{
			if (!iLocal_48)
			{
				func_480(iParam0, ((fParam1 * fLocal_1204) * fLocal_1206), 0);
				if (!iLocal_69)
				{
				}
				iLocal_69 = 0;
			}
			if (bLocal_51)
			{
				func_479(iParam0);
			}
			if (!iLocal_48)
			{
				func_466(iParam0, ((fParam1 * fLocal_1204) * fLocal_1206), 0);
			}
		}
		if (iLocal_56)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iLocal_3024 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					vLocal_2499 = { unk_0x68F4C0EC296D3901(iLocal_3024, true) };
					unk_0xAB6708C4A38AE038(iLocal_3024, &fLocal_837, &fLocal_838, &fLocal_839, &fLocal_840);
				}
			}
			iLocal_56 = 0;
		}
		if (iLocal_55)
		{
			if (unk_0xC844350D5D58C99A(iLocal_3024))
			{
				func_452(iLocal_3025);
				iLocal_3025 = iLocal_3024;
			}
			if (unk_0xDF1306B443CD3D15(iLocal_3025, 0))
			{
				unk_0xA47B46945FF6DE74(iLocal_3025, vLocal_2499, 1, false, 0, 1);
				unk_0xC4C7FD0EF3FEAB0B(iLocal_3025, fLocal_837, fLocal_838, fLocal_839, fLocal_840);
			}
			fLocal_1202 = fLocal_1205;
			iLocal_48 = 1;
			iLocal_55 = 0;
		}
		if (iLocal_48)
		{
			while (!func_464(&iParam0, fLocal_1202))
			{
				wait(0);
			}
			iLocal_49 = 1;
		}
		if (iLocal_62)
		{
			iLocal_62 = 0;
		}
	}
}

int func_464(int iParam0, float fParam1)
{
	if (!iLocal_63)
	{
		iLocal_48 = 1;
		func_447();
		if (unk_0xDF1306B443CD3D15(*iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xC55F2A0377488064(*iParam0);
				unk_0x51B954DAB1BCAF73(*iParam0);
			}
			if (!iLocal_1807 == -1)
			{
				while (!func_465(iParam0, iLocal_1807, fParam1, 1, 0, 0, 0, 0))
				{
					wait(0);
				}
				if (!bLocal_53)
				{
					iLocal_49 = 1;
					fLocal_1206 = 0f;
					iLocal_1808 = 0;
					iLocal_1810 = 0;
					iLocal_1809 = 0;
					iLocal_1804 = 0;
					iLocal_1805 = 0;
					iLocal_1806 = 0;
					iLocal_1811 = 0;
					iLocal_1812 = 0;
					iLocal_1813 = 0;
				}
			}
		}
		iLocal_63 = 1;
	}
	else
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xA9FBE21EB8701B34(*iParam0, ((1f * fLocal_1204) * fLocal_1206));
				func_465(iParam0, iLocal_1807, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1203 = fParam1;
		iLocal_1814 = 0;
		iLocal_1817 = 0;
		fLocal_1218 = 0f;
		fLocal_1217 = 0f;
		func_466(*iParam0, ((1f * fLocal_1204) * fLocal_1206), 1);
		func_480(*iParam0, ((1f * fLocal_1204) * fLocal_1206), 1);
		func_479(*iParam0);
		if ((iLocal_1811 == 0 && iLocal_1812 == 0) && iLocal_1813 == 0)
		{
			iLocal_49 = 0;
			iLocal_48 = 0;
			iLocal_63 = 0;
			return 1;
		}
	}
	return 0;
}

int func_465(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (iParam1 > 0)
	{
		unk_0x36187931D29E5BBE(iParam1, &cLocal_2526);
		if (unk_0x3DDA6C6A285628E4(iParam1, &cLocal_2526))
		{
			if (unk_0xDF1306B443CD3D15(*uParam0, 0))
			{
				if (!unk_0x20D6474D5F4B9FC6(*uParam0))
				{
					unk_0x1E9649458B15960F(*uParam0, false);
					if (bParam4)
					{
						unk_0xC3C6B5ABAB3277F5(*uParam0, iParam1, &cLocal_2526, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1815 && iParam1 != iLocal_1816)
						{
							if (bParam7)
							{
								unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2526, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2526, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2526, 1);
							}
						}
						else
						{
							unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2526, 1);
						}
						unk_0xF12C1D85AFEE8FAD(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x9C8F7A2F15781E10(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x60755EFECF81FC68(*uParam0) == unk_0x1A2511CB22B86C17(iParam1, &cLocal_2526))
				{
					fVar0 = unk_0x9901AABAC4D4C590(*uParam0);
					unk_0xF12C1D85AFEE8FAD(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0xC55F2A0377488064(*uParam0);
						unk_0x36187931D29E5BBE(iParam1, &cLocal_2526);
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
						unk_0xC3C6B5ABAB3277F5(*uParam0, iParam1, &cLocal_2526, 10f, 786603);
					}
					else if (iParam1 != iLocal_1815 && iParam1 != iLocal_1816)
					{
						if (bParam7)
						{
							unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2526, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_2526, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2526, 1);
						}
					}
					else
					{
						unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_2526, 1);
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

void func_466(int iParam0, float fParam1, bool bParam2)
{
	bVar15 = unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
	uVar16 = unk_0x5C45F6B29A99E47E();
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
		iVar0 = iLocal_1810;
		while (iVar0 < 25)
		{
			if (iLocal_1701[iVar0] != 99)
			{
				if (iLocal_1701[iVar0] == 0)
				{
					if (iLocal_1675[iVar0] > 0)
					{
						if (!iLocal_48)
						{
							if (fLocal_1203 > (fLocal_945[iVar0] - (7000f * fParam1)))
							{
								if (func_478(iLocal_2745[iVar0]))
								{
									unk_0x5D96D8530B3D0904(&(iLocal_1727[iVar0]), 0);
								}
								else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2745[iVar0]))
								{
									unk_0x5D96D8530B3D0904(&(iLocal_1727[iVar0]), 2);
								}
								unk_0x0674E58A79778E99(&(iLocal_1727[iVar0]), 1);
								iLocal_1701[iVar0]++;
								iLocal_1812++;
							}
						}
						else
						{
							fVar12 = (fLocal_1203 - fLocal_945[iVar0]);
							fVar12 = (fVar12 * fLocal_971[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_477(iLocal_1675[iVar0]))
								{
									if (func_478(iLocal_2745[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1727[iVar0]), 0);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2745[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1727[iVar0]), 2);
									}
									unk_0x0674E58A79778E99(&(iLocal_1727[iVar0]), 1);
									iLocal_1701[iVar0]++;
									iLocal_1812++;
								}
								else
								{
									iLocal_1701[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1701[iVar0] = 99;
					}
				}
				else if (iLocal_1701[iVar0] == 1)
				{
					bVar14 = false;
					unk_0x36187931D29E5BBE(iLocal_1675[iVar0], &cLocal_2526);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 0))
					{
						unk_0x523BCC9DC80CD82F(func_456());
						bVar14 = unk_0xB87F6CF6E5628C67(func_456());
					}
					else if (!bLocal_75 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 2) && uVar16) || (unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0x523BCC9DC80CD82F(func_459());
						bVar14 = unk_0xB87F6CF6E5628C67(func_459());
					}
					if (bVar14)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_2991[iVar0]))
						{
							unk_0x523BCC9DC80CD82F(iLocal_2745[iVar0]);
							if (unk_0xB87F6CF6E5628C67(iLocal_2745[iVar0]) && unk_0x3DDA6C6A285628E4(iLocal_1675[iVar0], &cLocal_2526))
							{
								if (fLocal_1203 >= (fLocal_945[iVar0] - (fLocal_1216 * fParam1)))
								{
									if ((iLocal_62 || bParam2) || (!bLocal_79 && !func_476(vLocal_2423[iVar0], vVar9, 5f, fLocal_1214)))
									{
										if (bLocal_58)
										{
											func_475(vLocal_2423[iVar0], vVar9, fLocal_1207);
										}
										iLocal_2991[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_2745[iVar0], vLocal_2423[iVar0], 0, 0, 0, 0);
										if (iLocal_2745[iVar0] == 353883353)
										{
											unk_0x446EA2500F021666(iLocal_2991[iVar0], 0);
										}
										if (uLocal_71 && !unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 0))
										{
											func_474(iLocal_2991[iVar0]);
										}
										if (unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 3))
										{
											unk_0x120A395B0ECB8EA5(iLocal_2991[iVar0], true);
										}
										unk_0x08841CDB215AE18F(iLocal_2991[iVar0], vLocal_2423[iVar0], 0, 0, 1);
										unk_0xC4C7FD0EF3FEAB0B(iLocal_2991[iVar0], fLocal_841[iVar0], fLocal_867[iVar0], fLocal_893[iVar0], fLocal_919[iVar0]);
										if (unk_0x8E39AC3C76C8AA58(iLocal_2745[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_2745[iVar0]))
										{
											unk_0xB9FD7450C0DAB575(iLocal_2991[iVar0], 1084227584);
										}
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 0))
										{
											unk_0x56FDC9ADE35F7DB0(iLocal_2991[iVar0], true, 1, 0);
											if (unk_0xD8A54335F18763BA() > 19 || unk_0xD8A54335F18763BA() < 7)
											{
												unk_0x0882E3DC0C991680(iLocal_2991[iVar0], 3);
											}
										}
										unk_0x1E9649458B15960F(iLocal_2991[iVar0], true);
										unk_0x71199B01895C6202(iLocal_2745[iVar0]);
										iLocal_1812 = (iLocal_1812 - 1);
										iLocal_1701[iVar0]++;
										bLocal_79 = true;
									}
								}
							}
						}
						else if (!unk_0x437347B10A200C4B(iLocal_2991[iVar0], 0) && unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
						{
							unk_0x08841CDB215AE18F(iLocal_2991[iVar0], vLocal_2423[iVar0], 0, 0, 1);
							unk_0xC4C7FD0EF3FEAB0B(iLocal_2991[iVar0], fLocal_841[iVar0], fLocal_867[iVar0], fLocal_893[iVar0], fLocal_919[iVar0]);
							if (unk_0x8E39AC3C76C8AA58(iLocal_2745[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_2745[iVar0]))
							{
								unk_0xB9FD7450C0DAB575(iLocal_2991[iVar0], 1084227584);
							}
							unk_0x1E9649458B15960F(iLocal_2991[iVar0], true);
							unk_0x71199B01895C6202(iLocal_2745[iVar0]);
							iLocal_1812 = (iLocal_1812 - 1);
							iLocal_1701[iVar0]++;
						}
					}
				}
				else if (iLocal_1701[iVar0] == 2)
				{
					unk_0x36187931D29E5BBE(iLocal_1675[iVar0], &cLocal_2526);
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 0))
						{
							unk_0x523BCC9DC80CD82F(func_456());
							bVar14 = unk_0xB87F6CF6E5628C67(func_456());
							iVar19 = 2;
						}
						else if (!bLocal_75 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 2) && uVar16) || (unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0x523BCC9DC80CD82F(func_459());
							bVar14 = unk_0xB87F6CF6E5628C67(func_459());
							iVar19 = 0;
						}
						if (!unk_0x437347B10A200C4B(iLocal_2991[iVar0], 0))
						{
							if (!bLocal_79 && unk_0xBBA8A868118C90ED(iLocal_2991[iVar0], -1, 0))
							{
								if (bVar14)
								{
									if ((vdist2(unk_0x68F4C0EC296D3901(iLocal_2991[iVar0], true), vVar9) < 10000f || bParam2) || iLocal_62)
									{
										func_472(&(iLocal_2991[iVar0]), iVar19, 1);
										unk_0x5D96D8530B3D0904(&(iLocal_1727[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
					{
						if (fLocal_1203 >= fLocal_945[iVar0])
						{
							if (21 > iLocal_1805)
							{
								fVar12 = (fLocal_1203 - fLocal_945[iVar0]);
								fVar12 = (fVar12 * fLocal_971[iVar0]);
								if (unk_0x3DDA6C6A285628E4(iLocal_1675[iVar0], &cLocal_2526))
								{
									if (fVar12 < unk_0x1C8FE65729F6E371(iLocal_1675[iVar0], &cLocal_2526))
									{
										vVar3 = { unk_0x68F4C0EC296D3901(iLocal_2991[iVar0], true) };
										vVar6 = { unk_0x87A3DA08ACDE0189(iLocal_1675[iVar0], fVar12, &cLocal_2526) };
										if (((!func_476(vVar3, vVar9, 5f, fLocal_1214) && func_476(vVar6, vVar9, 5f, fLocal_1214)) && !iLocal_62) && !bParam2)
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 1))
											{
												func_472(&(iLocal_2991[iVar0]), iVar19, 1);
											}
											iLocal_1805++;
											iLocal_1701[iVar0]++;
										}
										else if (((!bLocal_79 || unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 1)) || iLocal_62) || bParam2)
										{
											if (func_465(&(iLocal_2991[iVar0]), iLocal_1675[iVar0], fVar12, 1, 0, 0, iLocal_77, bLocal_76))
											{
												unk_0xA9FBE21EB8701B34(iLocal_2991[iVar0], (fParam1 * fLocal_971[iVar0]));
												if (unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
												{
													if (unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 0))
													{
														unk_0x56FDC9ADE35F7DB0(iLocal_2991[iVar0], true, 1, 0);
														unk_0xAA280AF45BCCCF21(iLocal_2991[iVar0], 1);
														unk_0x0882E3DC0C991680(iLocal_2991[iVar0], 2);
														if (!unk_0x7D8B2A8F9EA82DB7(iLocal_2745[iVar0]))
														{
															unk_0x21CBAD8B56E628F6(iLocal_2991[iVar0], 1);
														}
													}
												}
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 1))
												{
													func_472(&(iLocal_2991[iVar0]), iVar19, 1);
												}
												iLocal_1805++;
												iLocal_1701[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 1))
										{
											func_472(&(iLocal_2991[iVar0]), iVar19, 1);
										}
										iLocal_1805++;
										iLocal_1701[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 1))
								{
									func_472(&(iLocal_2991[iVar0]), iVar19, 1);
								}
								iLocal_1805++;
								iLocal_1701[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_1727[iVar0], 1))
						{
							func_472(&(iLocal_2991[iVar0]), iVar19, 1);
						}
						iLocal_1805++;
						iLocal_1701[iVar0]++;
					}
				}
				else if (iLocal_1701[iVar0] == 3)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_2991[iVar0]))
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_2991[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_52 && !iLocal_49) && !bLocal_68) && (((!iLocal_77 && !bLocal_76) && unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_2991[iVar0])) || func_471(iLocal_2991[iVar0])))
									{
										if (unk_0xC844350D5D58C99A(iVar2))
										{
											bVar14 = false;
											if (bLocal_70)
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
												else if (unk_0x755FF954DAE327E1((fVar13 - unk_0x9C66D99E63E8E24C(iLocal_2991[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_470(iLocal_2991[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_468(iVar2, iLocal_2991[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_467(iLocal_2991[iVar0]);
												iLocal_1701[iVar0]++;
											}
										}
									}
									else
									{
										unk_0xA9FBE21EB8701B34(iLocal_2991[iVar0], (fParam1 * fLocal_971[iVar0]));
									}
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2991[iVar0]);
							}
						}
						else
						{
							iLocal_1701[iVar0]++;
						}
					}
					else
					{
						iLocal_1701[iVar0]++;
					}
				}
				else if (iLocal_1701[iVar0] == 4)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_2991[iVar0]))
						{
							iLocal_1701[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_2991[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								unk_0xA9FBE21EB8701B34(iLocal_2991[iVar0], (fParam1 * fLocal_971[iVar0]));
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2991[iVar0]);
							}
							if (unk_0x3DDA6C6A285628E4(iLocal_1675[iVar0], &cLocal_2526))
							{
								if (fLocal_1203 > (fLocal_945[iVar0] + unk_0x1C8FE65729F6E371(iLocal_1675[iVar0], &cLocal_2526)))
								{
									unk_0xC55F2A0377488064(iLocal_2991[iVar0]);
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2991[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1701[iVar0]++;
					}
				}
				else if (iLocal_1701[iVar0] == 5)
				{
					if (!iLocal_2991[iVar0] == iLocal_3026)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_2991[iVar0], 0))
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_2991[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								iVar20 = unk_0xD1960163A3042274(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0x9C66D99E63E8E24C(iLocal_2991[iVar0]);
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
						if (!bLocal_60 && !bLocal_73)
						{
							if (iLocal_1675[iVar0] > 0)
							{
								unk_0xDB8844D4B7C60440(iLocal_1675[iVar0], &cLocal_2526);
							}
						}
						if (!bLocal_50)
						{
							if (!bLocal_78)
							{
								func_452(iLocal_2991[iVar0]);
							}
						}
						else if (unk_0xC844350D5D58C99A(iLocal_2991[iVar0]))
						{
							unk_0xA954465BA6FDEFE2(&(iLocal_2991[iVar0]));
						}
					}
					iLocal_1805 = (iLocal_1805 - 1);
					iLocal_1701[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1810 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_451();
	}
}

void func_467(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_453(iParam0);
		unk_0xFCA4899C6BBAD48F(iParam0, 786603);
	}
}

int func_468(int iParam0, int iParam1, bool bParam2)
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
	if (func_469(vVar9, vVar12) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_469(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_470(int iParam0, int iParam1, float fParam2)
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
	fVar6 = func_469(vVar0, vVar3);
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

int func_471(int iParam0)
{
	if (bLocal_74)
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

int func_472(var uParam0, int iParam1, bool bParam2)
{
	if (!unk_0x437347B10A200C4B(*uParam0, 0))
	{
		if (unk_0xBBA8A868118C90ED(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x852A19533F896693(*uParam0, 6, func_456(), -1, 0, false);
				unk_0x6DF7BF67E86AAE86(iVar0, iLocal_2542);
				unk_0x71199B01895C6202(func_456());
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
				iVar0 = unk_0x852A19533F896693(*uParam0, 4, func_459(), -1, 0, false);
				if (bLocal_80)
				{
					unk_0x71199B01895C6202(func_459());
				}
			}
			if (bParam2)
			{
				unk_0x7980D72D61BEF4D5(iVar0, true);
				unk_0x00A6D36F507FD6EA(iVar0, 0);
				unk_0x4E885A246A9D983A(iVar0, 32, false);
			}
			if (bLocal_81)
			{
				unk_0xBAFED2F6486F771A(iVar0, 8192, true);
				unk_0xBAFED2F6486F771A(iVar0, 65536, true);
				unk_0xBAFED2F6486F771A(iVar0, 2, false);
				unk_0xDC2C59BD0989562B(*uParam0, 1);
			}
			unk_0x11AD11297DC58CC7(iVar0, true);
			func_473(iVar0);
			bLocal_79 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_473(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x6DAD7906B73F064D(&iParam0);
	}
}

void func_474(int iParam0)
{
	iVar0 = unk_0x09AC81E49EA267F7(0, 12);
	if (iLocal_2772 >= -1 && iLocal_2773 >= -1)
	{
		while (iVar0 == iLocal_2772 || iVar0 == iLocal_2773)
		{
			iVar0++;
		}
	}
	else if (iLocal_2772 >= -1)
	{
		if (iVar0 == iLocal_2772)
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

void func_475(vector3 vParam0, vector3 vParam3, float fParam6)
{
	bVar0 = true;
	if (!bLocal_61)
	{
		if (!func_476(vParam0, vParam3, fParam6, 200f))
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

int func_476(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7)
{
	if (!unk_0x757EF87A33649210())
	{
		if (!bLocal_61)
		{
			if (!iLocal_48)
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

float func_477(int iParam0)
{
	unk_0x36187931D29E5BBE(iParam0, &cLocal_2526);
	while (!unk_0x3DDA6C6A285628E4(iParam0, &cLocal_2526))
	{
		wait(0);
	}
	fVar0 = unk_0x1C8FE65729F6E371(iParam0, &cLocal_2526);
	unk_0xDB8844D4B7C60440(iParam0, &cLocal_2526);
	return fVar0;
}

int func_478(int iParam0)
{
	if (((((((iParam0 == 2046537925 || iParam0 == -1627000575) || iParam0 == 1912215274) || iParam0 == -34623805) || iParam0 == 456714581) || iParam0 == 353883353) || iParam0 == 741586030) || iParam0 == -1683328900)
	{
		return 1;
	}
	return 0;
}

void func_479(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1809;
		while (iVar0 < 50)
		{
			switch (iLocal_1753[iVar0])
			{
				case 0:
					if (!iLocal_2694[iVar0] == 0)
					{
						if (unk_0x5A91F08DF773C39D(iParam0, vLocal_2272[iVar0], fLocal_1201, fLocal_1201, fLocal_1201, false, true, 0))
						{
							iLocal_1811++;
							iLocal_1753[iVar0]++;
						}
					}
					else
					{
						iLocal_1753[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1806)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_2940[iVar0]))
						{
							unk_0x523BCC9DC80CD82F(iLocal_2694[iVar0]);
							if (unk_0xB87F6CF6E5628C67(iLocal_2694[iVar0]))
							{
								if ((iLocal_48 || iLocal_62) || (!bLocal_79 && !func_476(vLocal_2272[iVar0], vVar1, 5f, fLocal_1214)))
								{
									if (bLocal_58)
									{
										func_475(vLocal_2272[iVar0], vVar1, fLocal_1207);
									}
									iLocal_2940[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_2694[iVar0], vLocal_2272[iVar0], 0, 0, 0, 0);
									if (iLocal_2694[iVar0] == 353883353)
									{
										unk_0x446EA2500F021666(iLocal_2940[iVar0], 0);
									}
									unk_0xC4C7FD0EF3FEAB0B(iLocal_2940[iVar0], fLocal_997[iVar0], fLocal_1048[iVar0], fLocal_1099[iVar0], fLocal_1150[iVar0]);
									unk_0x71199B01895C6202(iLocal_2694[iVar0]);
									if (unk_0x4906F8A34E9F4814(iLocal_2940[iVar0], func_457()))
									{
										unk_0xAA280AF45BCCCF21(iLocal_2940[iVar0], 1);
										if (!unk_0x7D8B2A8F9EA82DB7(iLocal_2694[iVar0]))
										{
											unk_0x21CBAD8B56E628F6(iLocal_2940[iVar0], 1);
										}
									}
									if (unk_0x4906F8A34E9F4814(iLocal_2940[iVar0], func_458()))
									{
										unk_0xC002508A277213DE(iLocal_2940[iVar0], 0, 0);
									}
									unk_0x120A395B0ECB8EA5(iLocal_2940[iVar0], true);
									iLocal_1811 = (iLocal_1811 - 1);
									iLocal_1806++;
									iLocal_1753[iVar0]++;
									bLocal_79 = true;
								}
							}
						}
						else
						{
							iLocal_1811 = (iLocal_1811 - 1);
							iLocal_1806++;
							iLocal_1753[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_2940[iVar0], 0))
						{
							vVar4 = { unk_0x68F4C0EC296D3901(iLocal_2940[iVar0], true) };
						}
						if (fLocal_1215 == 0f || vdist2(vVar1, vVar4) < (fLocal_1215 * fLocal_1215))
						{
							if (!func_468(iLocal_2940[iVar0], iParam0, 0))
							{
								if (!bLocal_50)
								{
									func_452(iLocal_2940[iVar0]);
								}
								else
								{
									unk_0xA954465BA6FDEFE2(&(iLocal_2940[iVar0]));
								}
								iLocal_1806 = (iLocal_1806 - 1);
								iLocal_1753[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1753[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1809 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_454();
	}
}

void func_480(int iParam0, float fParam1, int iParam2)
{
	iVar5 = 0;
	bVar18 = unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
	uVar19 = unk_0x5C45F6B29A99E47E();
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
			fLocal_1203 = unk_0x9901AABAC4D4C590(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1808;
		while (iVar0 < 150 && !bVar23)
		{
			if (iLocal_1373[iVar0] != 99)
			{
				if (iLocal_1373[iVar0] == 0)
				{
					if (iLocal_1222[iVar0] > 0 && iLocal_2543[iVar0] != 0)
					{
						if (!iLocal_48)
						{
							if (fLocal_1203 < (fLocal_686[iVar0] + 20000f))
							{
								if (fLocal_1203 >= (fLocal_686[iVar0] - (7000f * fParam1)))
								{
									if (func_478(iLocal_2543[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1524[iVar0]), 0);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2543[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1524[iVar0]), 2);
									}
									unk_0x0674E58A79778E99(&(iLocal_1524[iVar0]), 1);
									iLocal_1813++;
									iLocal_1373[iVar0]++;
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
								func_482(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1203 - fLocal_686[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_477(iLocal_1222[iVar0]))
								{
									if (func_478(iLocal_2543[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1524[iVar0]), 0);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_2543[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_1524[iVar0]), 2);
									}
									unk_0x0674E58A79778E99(&(iLocal_1524[iVar0]), 1);
									iLocal_1813++;
									iLocal_1373[iVar0]++;
								}
								else
								{
									func_482(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_482(iVar0, 1090519040);
					}
				}
				else if (iLocal_1373[iVar0] == 1)
				{
					unk_0x36187931D29E5BBE(iLocal_1222[iVar0], &cLocal_2526);
					bVar17 = false;
					if (unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 0))
					{
						unk_0x523BCC9DC80CD82F(func_456());
						if (unk_0xB87F6CF6E5628C67(func_456()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_75 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 2) && uVar19) || (unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0x523BCC9DC80CD82F(func_459());
						bVar17 = unk_0xB87F6CF6E5628C67(func_459());
					}
					if (!unk_0xC844350D5D58C99A(iLocal_2774[iVar0]))
					{
						unk_0x523BCC9DC80CD82F(iLocal_2543[iVar0]);
						if ((unk_0xB87F6CF6E5628C67(iLocal_2543[iVar0]) && unk_0x3DDA6C6A285628E4(iLocal_1222[iVar0], &cLocal_2526)) && bVar17)
						{
							if (fLocal_1203 >= (fLocal_686[iVar0] - (fLocal_1216 * fParam1)))
							{
								if ((iLocal_62 || iParam2) || (!bLocal_79 && !func_476(vLocal_1821[iVar0], vVar12, 5f, fLocal_1214)))
								{
									if (bLocal_58)
									{
										func_475(vLocal_1821[iVar0], vVar12, fLocal_1207);
									}
									iLocal_2774[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_2543[iVar0], vLocal_1821[iVar0], 0, 0, 0, 0);
									if (iLocal_2543[iVar0] == 353883353)
									{
										unk_0x446EA2500F021666(iLocal_2774[iVar0], 0);
									}
									if (uLocal_71 && !unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 0))
									{
										func_474(iLocal_2774[iVar0]);
									}
									unk_0x08841CDB215AE18F(iLocal_2774[iVar0], vLocal_1821[iVar0], 0, 0, 1);
									unk_0xC4C7FD0EF3FEAB0B(iLocal_2774[iVar0], fLocal_82[iVar0], fLocal_233[iVar0], fLocal_384[iVar0], fLocal_535[iVar0]);
									if (unk_0x8E39AC3C76C8AA58(iLocal_2543[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_2543[iVar0]))
									{
										unk_0xB9FD7450C0DAB575(iLocal_2774[iVar0], 1084227584);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 3))
									{
										unk_0x120A395B0ECB8EA5(iLocal_2774[iVar0], true);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 0))
									{
										unk_0x56FDC9ADE35F7DB0(iLocal_2774[iVar0], true, 1, 0);
										if (unk_0xD8A54335F18763BA() > 19 || unk_0xD8A54335F18763BA() < 7)
										{
											unk_0x0882E3DC0C991680(iLocal_2774[iVar0], 3);
										}
									}
									unk_0x1E9649458B15960F(iLocal_2774[iVar0], true);
									unk_0x7980D72D61BEF4D5(iLocal_2774[iVar0], true);
									unk_0x71199B01895C6202(iLocal_2543[iVar0]);
									iLocal_1813 = (iLocal_1813 - 1);
									iLocal_1373[iVar0]++;
									bLocal_79 = true;
								}
								else if (fLocal_1203 > fLocal_686[iVar0])
								{
									iLocal_1813 = (iLocal_1813 - 1);
									func_482(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1373[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1819 || iLocal_1819 == 0)) || iLocal_62) || iParam2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 0))
							{
								unk_0x523BCC9DC80CD82F(func_456());
								bVar17 = unk_0xB87F6CF6E5628C67(func_456());
								iVar21 = 2;
							}
							else if (!bLocal_75 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 2) && uVar19) || (unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0x523BCC9DC80CD82F(func_459());
								bVar17 = unk_0xB87F6CF6E5628C67(func_459());
								iVar21 = 0;
							}
							if (!unk_0x437347B10A200C4B(iLocal_2774[iVar0], 0))
							{
								if (!bLocal_79 && unk_0xBBA8A868118C90ED(iLocal_2774[iVar0], -1, 0))
								{
									if (bVar17)
									{
										if ((vdist2(unk_0x68F4C0EC296D3901(iLocal_2774[iVar0], true), vVar12) < 10000f || iParam2) || iLocal_62)
										{
											func_472(&(iLocal_2774[iVar0]), iVar21, 0);
											unk_0x5D96D8530B3D0904(&(iLocal_1524[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0xDF1306B443CD3D15(iLocal_2774[iVar0], 0))
						{
							unk_0x36187931D29E5BBE(iLocal_1222[iVar0], &cLocal_2526);
							if (fLocal_1203 >= fLocal_686[iVar0])
							{
								if (14 > iLocal_1804)
								{
									fVar15 = (fLocal_1203 - fLocal_686[iVar0]);
									if (unk_0x3DDA6C6A285628E4(iLocal_1222[iVar0], &cLocal_2526))
									{
										if (fVar15 < unk_0x1C8FE65729F6E371(iLocal_1222[iVar0], &cLocal_2526))
										{
											vVar6 = { unk_0x68F4C0EC296D3901(iLocal_2774[iVar0], true) };
											vVar9 = { unk_0x87A3DA08ACDE0189(iLocal_1222[iVar0], fVar15, &cLocal_2526) };
											if (!func_476(vVar6, vVar12, 5f, fLocal_1214) && func_476(vVar9, vVar12, 5f, fLocal_1214))
											{
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
												{
													func_472(&(iLocal_2774[iVar0]), iVar21, 0);
												}
												func_482(iVar0, 1090519040);
											}
											else if (((!bLocal_79 || unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1)) || iLocal_62) || iParam2)
											{
												if (func_465(&(iLocal_2774[iVar0]), iLocal_1222[iVar0], fVar15, 1, 0, 0, 1, bLocal_76))
												{
													if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
													{
														func_472(&(iLocal_2774[iVar0]), iVar21, 0);
													}
													unk_0x20641932E5104B25(iLocal_2774[iVar0], true, 0);
													unk_0xA9FBE21EB8701B34(iLocal_2774[iVar0], fParam1);
													iLocal_1804++;
													iLocal_1373[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
											{
												func_472(&(iLocal_2774[iVar0]), iVar21, 0);
											}
											func_482(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0x1C8FE65729F6E371(iLocal_1222[iVar0], &cLocal_2526))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
										{
											func_472(&(iLocal_2774[iVar0]), iVar21, 0);
										}
										func_482(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
									{
										func_472(&(iLocal_2774[iVar0]), iVar21, 0);
									}
									func_482(iVar0, 1090519040);
								}
							}
							else if (iLocal_59 && !iLocal_67)
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
								{
									func_472(&(iLocal_2774[iVar0]), iVar21, 0);
								}
								func_482(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 1))
							{
								func_472(&(iLocal_2774[iVar0]), iVar21, 0);
							}
							func_482(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1819 = iVar0;
					}
				}
				else if (iLocal_1373[iVar0] == 3)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_2774[iVar0], 0))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_2774[iVar0]))
						{
							iVar4 = unk_0xA30B8362589C124A(iLocal_2774[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_57)
									{
										if ((!bLocal_52 && !iLocal_49) && func_471(iLocal_2774[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1818 || iLocal_1818 == 0))
											{
												if (!unk_0x437347B10A200C4B(iVar5, 0))
												{
													bVar17 = false;
													if (!func_481(iLocal_2774[iVar0], iVar5) || func_468(iVar5, iLocal_2774[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1818 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_72 && !unk_0xEAE0D21A50E6C7F4(iLocal_1524[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1818 || iLocal_1818 == 0))
										{
											vVar25 = { unk_0x5293C88BD2F4DE13(iParam0, unk_0x68F4C0EC296D3901(iLocal_2774[iVar0], true)) };
											if (vVar25.y < 0f)
											{
												if (unk_0x755FF954DAE327E1(vVar25.y) > unk_0x755FF954DAE327E1(vVar25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1818 = iVar0;
										}
									}
									if (bVar24)
									{
										func_467(iLocal_2774[iVar0]);
										iLocal_1373[iVar0]++;
									}
									else
									{
										unk_0xA9FBE21EB8701B34(iLocal_2774[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2774[iVar0]);
							}
						}
						else
						{
							iLocal_1373[iVar0]++;
						}
					}
					else
					{
						iLocal_1373[iVar0]++;
					}
				}
				else if (iLocal_1373[iVar0] == 4)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_2774[iVar0], 0))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_2774[iVar0]))
						{
							iLocal_1373[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xA30B8362589C124A(iLocal_2774[iVar0], -1, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar4))
							{
								unk_0xA9FBE21EB8701B34(iLocal_2774[iVar0], fParam1);
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2774[iVar0]);
							}
							if (unk_0x3DDA6C6A285628E4(iLocal_1222[iVar0], &cLocal_2526))
							{
								if (fLocal_1203 > (fLocal_686[iVar0] + unk_0x1C8FE65729F6E371(iLocal_1222[iVar0], &cLocal_2526)))
								{
									unk_0xC55F2A0377488064(iLocal_2774[iVar0]);
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_2774[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1373[iVar0]++;
					}
				}
				else if (iLocal_1373[iVar0] == 5)
				{
					if (!unk_0x437347B10A200C4B(iLocal_2774[iVar0], 0))
					{
						fVar16 = unk_0x9C66D99E63E8E24C(iLocal_2774[iVar0]);
					}
					iLocal_1804 = (iLocal_1804 - 1);
					func_482(iVar0, fVar16);
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
			iLocal_1808 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1818 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1819 = 0;
		}
	}
	else
	{
		func_455();
	}
}

int func_481(int iParam0, int iParam1)
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
	fVar6 = func_469(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_482(int iParam0, float fParam1)
{
	if (!iLocal_2543[iParam0] == 0)
	{
		unk_0x71199B01895C6202(iLocal_2543[iParam0]);
	}
	if (!unk_0x437347B10A200C4B(iLocal_2774[iParam0], 0))
	{
		unk_0x20641932E5104B25(iLocal_2774[iParam0], true, 0);
		unk_0x1E9649458B15960F(iLocal_2774[iParam0], false);
		iVar0 = unk_0xA30B8362589C124A(iLocal_2774[iParam0], -1, 0);
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
			unk_0x60274E99F9B27DEA(iVar0, iLocal_2774[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0xBAFED2F6486F771A(iVar0, 8192, true);
			if (bLocal_81)
			{
				unk_0xBAFED2F6486F771A(iVar0, 65536, true);
				unk_0xBAFED2F6486F771A(iVar0, 2, false);
			}
			unk_0xAFF39FB306F8E232(iVar0, 6, 0);
			unk_0x06736587AE5BE33B(iVar0, fParam1);
		}
	}
	if (!bLocal_50)
	{
		if (!bLocal_78)
		{
			func_473(iVar0);
			func_452(iLocal_2774[iParam0]);
		}
	}
	else
	{
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0xEBA53F35D0085654(&iVar0);
		}
		if (unk_0xC844350D5D58C99A(iLocal_2774[iParam0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_2774[iParam0]));
		}
	}
	if (!bLocal_60 && !bLocal_73)
	{
		if (iLocal_1222[iParam0] > 0)
		{
			unk_0xDB8844D4B7C60440(iLocal_1222[iParam0], &cLocal_2526);
		}
	}
	iLocal_1373[iParam0] = 99;
}

void func_483(int iParam0, float fParam1, float fParam2)
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
			func_475(vVar1, vVar10, fVar13);
		}
	}
}

void func_484(int iParam0, float fParam1)
{
	if (!bLocal_61)
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

void func_485(int iParam0, float fParam1)
{
	if (!bLocal_61)
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

void func_486(int iParam0, float fParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && unk_0x20D6474D5F4B9FC6(iParam0))
	{
		fVar1 = (fLocal_1217 + 2000f);
		fVar2 = (fLocal_1218 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			if (fVar1 <= unk_0x9FC30AC87F925DDF(iVar0))
			{
				if (iLocal_1814 == 0)
				{
					vLocal_2514 = { unk_0xAA8A22FF67DFFDCD(iVar0, fLocal_1217) };
					iLocal_1814++;
				}
				else if (iLocal_1814 == 1)
				{
					vLocal_2517 = { unk_0xAA8A22FF67DFFDCD(iVar0, fVar1) };
					iLocal_1814++;
				}
				else if (!bLocal_79)
				{
					if (vLocal_2514.x > vLocal_2517.x)
					{
						fVar3 = vLocal_2514.x;
						vLocal_2514.x = vLocal_2517.x;
						vLocal_2517.x = fVar3;
					}
					if (vLocal_2514.y > vLocal_2517.y)
					{
						fVar3 = vLocal_2514.y;
						vLocal_2514.y = vLocal_2517.y;
						vLocal_2517.y = fVar3;
					}
					if (vLocal_2514.z > vLocal_2517.z)
					{
						fVar3 = vLocal_2514.z;
						vLocal_2514.z = vLocal_2517.z;
						vLocal_2517.z = fVar3;
					}
					vLocal_2514 = { vLocal_2514 - Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
					vLocal_2517 = { vLocal_2517 + Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
					unk_0xF858EFDE1871B5F2(vLocal_2514, vLocal_2517, 0, 0);
					fLocal_1217 = fVar1;
					iLocal_1814 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			if (iLocal_1817 == 0)
			{
				vLocal_2520 = { unk_0xAA8A22FF67DFFDCD(iVar0, fLocal_1218) };
				iLocal_1817++;
			}
			else if (iLocal_1817 == 1)
			{
				vLocal_2523 = { unk_0xAA8A22FF67DFFDCD(iVar0, fVar2) };
				iLocal_1817++;
			}
			else if (!bLocal_79 && !bVar4)
			{
				if (vLocal_2520.x > vLocal_2523.x)
				{
					fVar3 = vLocal_2520.x;
					vLocal_2520.x = vLocal_2523.x;
					vLocal_2523.x = fVar3;
				}
				if (vLocal_2520.y > vLocal_2523.y)
				{
					fVar3 = vLocal_2520.y;
					vLocal_2520.y = vLocal_2523.y;
					vLocal_2523.y = fVar3;
				}
				if (vLocal_2520.z > vLocal_2523.z)
				{
					fVar3 = vLocal_2520.z;
					vLocal_2520.z = vLocal_2523.z;
					vLocal_2523.z = fVar3;
				}
				vLocal_2520 = { vLocal_2520 - Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
				vLocal_2523 = { vLocal_2523 + Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
				unk_0xF5894FEB702E7E76(vLocal_2520, vLocal_2523, 1);
				fLocal_1218 = fVar2;
				iLocal_1817 = 0;
			}
		}
	}
}

int func_487(int iParam0, int iParam1)
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
	fVar15 = func_469(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_488()
{
	unk_0xE342F209E49C5314(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	unk_0xEF7906595D9044B8(0);
	unk_0xD980FF3526C8CB9E(0);
	unk_0xE9B51BC60A3B47D9(0);
	unk_0xD60411959D5D930B(0f);
	unk_0xC83E7A5E408DF68C(0);
	unk_0xFF42993F8A095C58(3);
}

void func_489(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, char* sParam22, float fParam23, int iParam24, float fParam25, int iParam26, int iParam27, int iParam28)
{
	if (unk_0xDF1306B443CD3D15(Param0, 0))
	{
		if (!unk_0x20D6474D5F4B9FC6(Param0))
		{
			if (unk_0x3DDA6C6A285628E4(Param0.f_9, sParam22))
			{
				if (iParam27 == 0)
				{
					unk_0x4D3C3C0B0DE2663E(Param0, Param0.f_9, sParam22, 1);
				}
				else if (iParam27 == 1)
				{
					unk_0x0CB57CDDC76DA8E0(Param0, Param0.f_9, sParam22, iParam28, 0, 786603);
				}
				if (fParam25 > 0f)
				{
					unk_0xF12C1D85AFEE8FAD(Param0, fParam25);
				}
				else if (iParam26 == 1)
				{
					unk_0xF12C1D85AFEE8FAD(Param0, func_490(unk_0x68F4C0EC296D3901(Param0, true), Param0.f_9, sParam22, 16));
				}
				unk_0xA9FBE21EB8701B34(Param0, fParam23);
				if (iParam24 == 1)
				{
					unk_0x0AD2DA9636D01093(Param0);
				}
			}
		}
	}
}

float func_490(vector3 vParam0, int iParam3, char* sParam4, int iParam5)
{
	iVar0 = unk_0x1A2511CB22B86C17(iParam3, sParam4);
	fVar1 = unk_0x9FC30AC87F925DDF(iVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (vdist2(vParam0, unk_0xAA8A22FF67DFFDCD(iVar0, func_394((fVar2 - fVar3), 0f, fVar1))) < vdist2(vParam0, unk_0xAA8A22FF67DFFDCD(iVar0, func_394((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (vdist2(vParam0, unk_0xAA8A22FF67DFFDCD(iVar0, func_394((fVar2 - fVar3), 0f, fVar1))) > vdist2(vParam0, unk_0xAA8A22FF67DFFDCD(iVar0, func_394((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}

void func_491()
{
	iLocal_62 = 1;
}

void func_492()
{
	vLocal_1821[0] = { -867,2245f, 209,0847f, 73,3253f };
	fLocal_82[0] = 0,0774f;
	fLocal_233[0] = 0,0159f;
	fLocal_384[0] = 0,8993f;
	fLocal_535[0] = -0,4302f;
	iLocal_1222[0] = 4;
	fLocal_686[0] = 2600f;
	iLocal_2543[0] = -1130810103;
	vLocal_1821[1] = { -785,084f, 220,7164f, 75,9672f };
	fLocal_82[1] = 0,0123f;
	fLocal_233[1] = 0,0143f;
	fLocal_384[1] = 0,733f;
	fLocal_535[1] = 0,6799f;
	iLocal_1222[1] = 76;
	fLocal_686[1] = 6170f;
	iLocal_2543[1] = -808831384;
	vLocal_1821[2] = { -992,311f, 217,7745f, 67,0249f };
	fLocal_82[2] = 0,0234f;
	fLocal_233[2] = 0,0272f;
	fLocal_384[2] = -0,1712f;
	fLocal_535[2] = 0,9846f;
	iLocal_1222[2] = 10;
	fLocal_686[2] = 10475f;
	iLocal_2543[2] = -624529134;
	vLocal_1821[3] = { -967,032f, 362,0272f, 71,8551f };
	fLocal_82[3] = -0,0168f;
	fLocal_233[3] = -0,0225f;
	fLocal_384[3] = 0,7457f;
	fLocal_535[3] = -0,6657f;
	iLocal_1222[3] = 1;
	fLocal_686[3] = 11425f;
	iLocal_2543[3] = -1622444098;
	vLocal_1821[4] = { -991,3395f, 258,1681f, 67,7794f };
	fLocal_82[4] = -0,0273f;
	fLocal_233[4] = 0,0303f;
	fLocal_384[4] = 0,7281f;
	fLocal_535[4] = -0,6843f;
	iLocal_1222[4] = 71;
	fLocal_686[4] = 12480f;
	iLocal_2543[4] = -808831384;
	vLocal_1821[5] = { -1069,235f, 209,9156f, 61,2541f };
	fLocal_82[5] = 0,0255f;
	fLocal_233[5] = 0,0146f;
	fLocal_384[5] = 0,178f;
	fLocal_535[5] = 0,9836f;
	iLocal_1222[5] = 7;
	fLocal_686[5] = 13475f;
	iLocal_2543[5] = -1934452204;
	vLocal_1821[6] = { -1007,483f, 269,8612f, 66,4751f };
	fLocal_82[6] = -0,0376f;
	fLocal_233[6] = -0,0134f;
	fLocal_384[6] = 0,717f;
	fLocal_535[6] = 0,6959f;
	iLocal_1222[6] = 15;
	fLocal_686[6] = 15000f;
	iLocal_2543[6] = 2136773105;
	vLocal_1821[7] = { -1078,197f, 278,499f, 63,8791f };
	fLocal_82[7] = 0,0064f;
	fLocal_233[7] = -0,0266f;
	fLocal_384[7] = 0,3714f;
	fLocal_535[7] = 0,9281f;
	iLocal_1222[7] = 16;
	fLocal_686[7] = 16225f;
	iLocal_2543[7] = -808831384;
	vLocal_1821[8] = { -1064,993f, 270,3903f, 63,4535f };
	fLocal_82[8] = -0,0069f;
	fLocal_233[8] = -0,0066f;
	fLocal_384[8] = 0,6859f;
	fLocal_535[8] = 0,7276f;
	iLocal_1222[8] = 18;
	fLocal_686[8] = 17396f;
	iLocal_2543[8] = -344943009;
	vLocal_1821[9] = { -1084,025f, 290,5645f, 63,6725f };
	fLocal_82[9] = -0,0006f;
	fLocal_233[9] = -0,0104f;
	fLocal_384[9] = 0,9994f;
	fLocal_535[9] = 0,034f;
	iLocal_1222[9] = 19;
	fLocal_686[9] = 18189f;
	iLocal_2543[9] = -89291282;
	vLocal_1821[10] = { -1104,453f, 262,3094f, 64,0965f };
	fLocal_82[10] = -0,0328f;
	fLocal_233[10] = 0,0305f;
	fLocal_384[10] = -0,7028f;
	fLocal_535[10] = 0,7099f;
	iLocal_1222[10] = 20;
	fLocal_686[10] = 18960f;
	iLocal_2543[10] = 2136773105;
	vLocal_1821[11] = { -1105,797f, 267,6655f, 63,9132f };
	fLocal_82[11] = -0,0315f;
	fLocal_233[11] = 0,0297f;
	fLocal_384[11] = -0,689f;
	fLocal_535[11] = 0,7234f;
	iLocal_1222[11] = 21;
	fLocal_686[11] = 18990f;
	iLocal_2543[11] = -1450650718;
	vLocal_1821[12] = { -1118,203f, 260,7814f, 64,8678f };
	fLocal_82[12] = -0,0372f;
	fLocal_233[12] = 0,0464f;
	fLocal_384[12] = -0,6148f;
	fLocal_535[12] = 0,7865f;
	iLocal_1222[12] = 22;
	fLocal_686[12] = 19500f;
	iLocal_2543[12] = 1337041428;
	vLocal_1821[13] = { -1074,349f, 351,9871f, 67,1602f };
	fLocal_82[13] = 0,0396f;
	fLocal_233[13] = -0,0133f;
	fLocal_384[13] = 0,0033f;
	fLocal_535[13] = 0,9991f;
	iLocal_1222[13] = 23;
	fLocal_686[13] = 20950f;
	iLocal_2543[13] = -1130810103;
	vLocal_1821[14] = { -1064,639f, 341,6877f, 67,0819f };
	fLocal_82[14] = 0,0006f;
	fLocal_233[14] = -0,0231f;
	fLocal_384[14] = 0,685f;
	fLocal_535[14] = 0,7282f;
	iLocal_1222[14] = 24;
	fLocal_686[14] = 22890f;
	iLocal_2543[14] = 2136773105;
	vLocal_1821[15] = { -1114,752f, 483,8648f, 82,1372f };
	fLocal_82[15] = -0,0001f;
	fLocal_233[15] = -0,0011f;
	fLocal_384[15] = 0,9945f;
	fLocal_535[15] = 0,1048f;
	iLocal_1222[15] = 73;
	fLocal_686[15] = 33000f;
	iLocal_2543[15] = -808831384;
	vLocal_1821[16] = { -1300,973f, 457,5321f, 97,5162f };
	fLocal_82[16] = -0,0343f;
	fLocal_233[16] = 0,0347f;
	fLocal_384[16] = -0,6816f;
	fLocal_535[16] = 0,7301f;
	iLocal_1222[16] = 28;
	fLocal_686[16] = 39850f;
	iLocal_2543[16] = -391594584;
	vLocal_1821[17] = { -1360,645f, 458,8226f, 102,7037f };
	fLocal_82[17] = 0,0295f;
	fLocal_233[17] = -0,0343f;
	fLocal_384[17] = 0,753f;
	fLocal_535[17] = -0,6565f;
	iLocal_1222[17] = 29;
	fLocal_686[17] = 40850f;
	iLocal_2543[17] = 330661258;
	vLocal_2423[0] = { -947,3407f, 422,2456f, 78,9748f };
	fLocal_841[0] = -0,0513f;
	fLocal_867[0] = -0,0036f;
	fLocal_893[0] = 0,8378f;
	fLocal_919[0] = 0,5436f;
	iLocal_1675[0] = 2;
	fLocal_945[0] = 15000f;
	fLocal_971[0] = 0,8f;
	iLocal_2745[0] = 2053223216;
	vLocal_2423[1] = { -1062,919f, 452,6988f, 74,4478f };
	fLocal_841[1] = 0,0294f;
	fLocal_867[1] = -0,041f;
	fLocal_893[1] = 0,8439f;
	fLocal_919[1] = 0,5341f;
	iLocal_1675[1] = 70;
	fLocal_945[1] = 28912f;
	fLocal_971[1] = 1f;
	iLocal_2745[1] = 330661258;
}

void func_493(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	StringCopy(&cLocal_2526, sParam0, 64);
	bLocal_58 = true;
	iLocal_63 = 0;
	iLocal_1804 = 0;
	iLocal_1805 = 0;
	iLocal_1806 = 0;
	iLocal_1807 = iParam1;
	iLocal_1808 = 0;
	iLocal_1809 = 0;
	iLocal_1810 = 0;
	iLocal_1814 = 0;
	iLocal_1817 = 0;
	iLocal_1815 = -1;
	iLocal_1816 = -1;
	iLocal_1818 = 0;
	iLocal_1819 = 0;
	fLocal_1217 = 0f;
	fLocal_1218 = 0f;
	fLocal_1203 = 0f;
	iLocal_64 = 0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		vLocal_2502.x = (vVar0.x - 100f);
		vLocal_2502.y = (vVar0.y - 100f);
		vLocal_2502.z = (vVar0.z - 100f);
		vLocal_2505.x = (vVar0.x + 100f);
		vLocal_2505.y = (vVar0.y + 100f);
		vLocal_2505.z = (vVar0.z + 100f);
		unk_0xF858EFDE1871B5F2(vLocal_2502, vLocal_2505, 0, 0);
		if (bParam2)
		{
			unk_0x28F5E4DA506AC0CA(vVar0, 500f, 0, 0, 0, 0, false, 0);
		}
	}
	unk_0xF63400DBE3303D26("rgh_traffic", &iLocal_2542);
	func_488();
	if (bParam3)
	{
		func_308(1);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0);
		unk_0x060F249A9A3E3F4E(0);
	}
	func_446();
}

void func_494(var uParam0)
{
	if (iLocal_3739 == 0)
	{
		if (unk_0xC844350D5D58C99A(Local_3245) && unk_0xC844350D5D58C99A(Local_3161))
		{
			if (unk_0xDF1306B443CD3D15(Local_3245, 0) && unk_0xDF1306B443CD3D15(Local_3201, 0))
			{
				if (unk_0x20D6474D5F4B9FC6(Local_3245) || unk_0xE0058AC511E68F8A(Local_3245))
				{
					if (unk_0x12DE711B1C681E9E(Local_3201, Local_3245, vLocal_3046, 0, 1, 0))
					{
						if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
						{
							if (unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()))
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_3161))
								{
									if (!unk_0x65636D4556D82155(Local_3161))
									{
										func_244(Local_3161, "GENERIC_INSULT_HIGH", 3);
									}
									unk_0x67B9E919FADF78E0(Local_3245, 3000, 0, 0);
									iLocal_3739 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (iLocal_3726 == 1)
			{
				unk_0x523BCC9DC80CD82F(Local_3245.f_6);
				unk_0x523BCC9DC80CD82F(Local_3161.f_6);
				unk_0x36187931D29E5BBE(Local_3245.f_9, sLocal_3061);
				if ((unk_0xB87F6CF6E5628C67(Local_3245.f_6) && unk_0xB87F6CF6E5628C67(Local_3161.f_6)) && unk_0x3DDA6C6A285628E4(Local_3245.f_9, sLocal_3061))
				{
					if (func_337(&Local_3245, 0, 0, 145, 0, -1, 62, 131, 0, 0))
					{
						if (func_496(&Local_3161, 0, iLocal_3105, 0, 145, 1, 1, 0, Local_3245, -1, 0))
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_3161))
							{
								unk_0xAFF39FB306F8E232(Local_3161, 20, 1);
							}
							unk_0x71199B01895C6202(Local_3245.f_6);
							unk_0x71199B01895C6202(Local_3161.f_6);
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_3726 == 1)
			{
				if (unk_0x5A91F08DF773C39D(Local_3201, -1355,509f, 469,1981f, 102,2932f, 200f, 200f, 200f, false, true, 0))
				{
					if (unk_0xDF1306B443CD3D15(Local_3223, 0))
					{
						if (unk_0x20D6474D5F4B9FC6(Local_3223))
						{
							if (unk_0x9901AABAC4D4C590(Local_3223) >= 45750f)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_3161) && unk_0xDF1306B443CD3D15(Local_3245, 0))
								{
									func_489(Local_3245, sLocal_3061, 1,1f, 0, 800f, 0, 1, 1);
									unk_0x8BC9595FD2792B5D("FAMILY_3_RV_BLOCKS_ROAD");
									unk_0x2E1E5367A885F9B7(Local_3245, "FAMILY_3_RV", 0);
									Local_3161.f_11 = 0;
									*uParam0++;
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC844350D5D58C99A(Local_3161))
				{
					unk_0x6DAD7906B73F064D(&Local_3161);
				}
				if (unk_0xC844350D5D58C99A(Local_3245))
				{
					unk_0x046C362CF15F1935(&Local_3245);
				}
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xDF1306B443CD3D15(Local_3245, 0) && !unk_0xEB6A8945D1AC98A1(Local_3161))
			{
				switch (Local_3161.f_11)
				{
					case 0:
						if (unk_0x20D6474D5F4B9FC6(Local_3245))
						{
							fVar0 = unk_0x9901AABAC4D4C590(Local_3245);
							if (unk_0x1B3D109B39CC2C89(Local_3245, Local_3201))
							{
								unk_0x8B4C4CA774181102(3f, 0f, 3);
								unk_0xC55F2A0377488064(Local_3245);
								unk_0xC3C6B5ABAB3277F5(Local_3245, Local_3245.f_9, sLocal_3061, 5f, 786603);
								Local_3161.f_11 = 1;
							}
							if (fVar0 < 8510f)
							{
								func_495(Local_3201, Local_3245, &uVar1, 50f, 1,05f, 1,55f);
							}
							if (fVar0 > 10085f)
							{
								unk_0xC55F2A0377488064(Local_3245);
								unk_0xC3C6B5ABAB3277F5(Local_3245, Local_3245.f_9, sLocal_3061, 5f, 786469);
								Local_3161.f_11 = 1;
							}
						}
						break;
					
					case 1:
						if (!unk_0xE0058AC511E68F8A(Local_3245))
						{
							unk_0xE072601B4380E9DF(Local_3161, Local_3245, 15f, 786469);
							Local_3161.f_11 = 2;
						}
						break;
					
					case 2:
						if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), Local_3245, vLocal_3046, 0, 1, 0))
						{
							unk_0x8910D3D58E0132B8("FAMILY_3_RV_BLOCKS_ROAD");
							if (unk_0xDF1306B443CD3D15(Local_3245, 0))
							{
								unk_0x046C362CF15F1935(&Local_3245);
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_3161))
							{
								unk_0x6DAD7906B73F064D(&Local_3161);
							}
							unk_0xDB8844D4B7C60440(Local_3245.f_9, sLocal_3061);
						}
						break;
					}
			}
			break;
	}
}

void func_495(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0) && unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam1))
		{
			fVar0 = (fParam3 / func_292(iParam0, iParam1, 1));
			if (fVar0 >= fParam5)
			{
				fVar0 = fParam5;
			}
			if (fVar0 < fParam4)
			{
				fVar0 = fParam4;
			}
			unk_0xA9FBE21EB8701B34(iParam1, fVar0);
			*uParam2 = fVar0;
		}
	}
}

int func_496(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam1 == 0)
	{
		if (!unk_0xC844350D5D58C99A(*iParam0))
		{
			unk_0x523BCC9DC80CD82F(iParam0->f_6);
			if (unk_0xB87F6CF6E5628C67(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = unk_0x36F2404464202779(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, true);
						unk_0x71199B01895C6202(iParam0->f_6);
					}
					else if (func_804(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						unk_0x71199B01895C6202(iParam0->f_6);
					}
					if (!unk_0xEB6A8945D1AC98A1(*iParam0))
					{
						func_803(*iParam0, iParam2, bParam5, bParam10, bParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = func_235(*iParam0, 0, 0);
						}
					}
					return 1;
				}
				else if (iParam8 != 0)
				{
					if (unk_0xDF1306B443CD3D15(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*iParam0 = unk_0x852A19533F896693(iParam8, 26, iParam0->f_6, iParam9, 1, true);
							unk_0x71199B01895C6202(iParam0->f_6);
						}
						else if (func_800(iParam0, iParam4, iParam8, iParam9, 1))
						{
							unk_0x71199B01895C6202(iParam0->f_6);
						}
						if (!unk_0xEB6A8945D1AC98A1(*iParam0))
						{
							func_803(*iParam0, iParam2, bParam5, bParam10, bParam6, iParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = func_235(*iParam0, 0, 0);
							}
						}
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
	else if (iParam1 == 1)
	{
		if (!unk_0xC844350D5D58C99A(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_799(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					func_803(*iParam0, iParam2, bParam5, bParam10, bParam6, iParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = func_235(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (unk_0xDF1306B443CD3D15(iParam8, 0))
				{
					if (func_497(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_803(*iParam0, iParam2, bParam5, bParam10, bParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = func_235(*iParam0, 0, 0);
						}
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
	return 0;
}

int func_497(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_16(iParam1))
	{
		iVar0 = func_18(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			if (unk_0xC844350D5D58C99A(iParam2) && unk_0xDF1306B443CD3D15(iParam2, 0))
			{
				*iParam0 = unk_0x852A19533F896693(iParam2, 26, iVar0, iParam3, 1, true);
				func_798(*iParam0, iParam1, bParam5);
				unk_0x1160BAA065E2C9E5(*iParam0, 0, 0);
				func_791(*iParam0);
				func_780(*iParam0, 1, 0);
				func_779(*iParam0);
				func_109(*iParam0);
				func_499(*iParam0, bParam6);
				func_498(*iParam0);
				if (bParam4)
				{
					unk_0x71199B01895C6202(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_498(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96113[iVar0]) && Global_96113[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xC844350D5D58C99A(Global_96113[iVar0]))
		{
			Global_96113[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_499(int iParam0, bool bParam1)
{
	iVar0 = func_17(iParam0);
	if (func_778(iVar0))
	{
		func_777(iVar0, 0);
		func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_589(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_587(iParam0))
		{
			func_777(iVar0, 0);
			func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_589(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[120] && !Global_111638.f_9080.f_99.f_58[122])
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_111638.f_9080.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_111638.f_9080.f_99.f_58[123])
			{
				Global_111638.f_9080.f_99.f_58[123] = 0;
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					if (func_568(iParam0, 3, 169))
					{
						func_763(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_568(iParam0, 12, 6))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 12, 17))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 17))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 20))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 20))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 21))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 21))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 22))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 22))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 11))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 12, 10))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 12, 50))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 14, 59))
			{
				func_763(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_568(iParam0, 8, 22))
			{
				func_763(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_568(iParam0, 12, 14))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_568(iParam0, 12, 13))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 13))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 14))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 14))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 15))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 15))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 4))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 12, 3))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 14, 82))
			{
				func_763(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_568(iParam0, 8, 76))
			{
				func_763(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_568(iParam0, 12, 1))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_568(iParam0, 12, 12))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 12, 15))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_568(iParam0, 3, 71))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 17))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 17))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 18))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 18))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 19))
			{
				if (!func_500(unk_0x134B62B726CEC8E6(iParam0), 12, 19))
				{
					func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_568(iParam0, 12, 7))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 12, 6))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_568(iParam0, 14, 88))
			{
				func_763(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_568(iParam0, 8, 17))
			{
				func_763(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_568(iParam0, 12, 11))
			{
				func_763(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_500(int iParam0, int iParam1, int iParam2)
{
	Global_76434[1] = { func_501(iParam0, iParam1, iParam2, -1) };
	return unk_0xEAE0D21A50E6C7F4(Global_76434[1].f_6, 1);
}

struct<14> func_501(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_567();
	if (iParam0 == 225514697)
	{
		func_549(iParam1, iParam2);
	}
	else if (iParam0 == -1692214353)
	{
		func_530(iParam1, iParam2);
	}
	else if (iParam0 == -1686040670)
	{
		func_502(iParam1, iParam2);
	}
	return Global_76434[0];
}

void func_502(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_529(iParam1);
			break;
		
		case 2:
			func_528(iParam1);
			break;
		
		case 3:
			func_525(iParam1);
			break;
		
		case 4:
			func_524(iParam1);
			break;
		
		case 6:
			func_523(iParam1);
			break;
		
		case 5:
			func_522(iParam1);
			break;
		
		case 8:
			func_521(iParam1);
			break;
		
		case 9:
			func_520(iParam1);
			break;
		
		case 10:
			func_519(iParam1);
			break;
		
		case 1:
			func_518(iParam1);
			break;
		
		case 7:
			func_517(iParam1);
			break;
		
		case 11:
			func_516(iParam1);
			break;
		
		case 12:
			func_515(iParam1);
			break;
		
		case 13:
			func_514(iParam1);
			break;
		
		case 14:
			func_503(iParam1);
			break;
	}
}

void func_503(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0].f_5 = 2;
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
		
		case 79:
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
			func_512(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_504(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_511(iParam8);
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
		if (func_15(14))
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
			if (!func_509(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_509(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_509(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_509(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_509(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_509(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_508(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		}
		if (func_508(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_508(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_15(14))
			{
				return;
			}
			iVar0 = func_151(func_507(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			}
			iVar0 = func_151(func_506(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_505(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_151(iVar1, Global_76431, 0);
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

bool func_505(int iParam0, int iParam1, var uParam2)
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

int func_506(int iParam0, int iParam1)
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

int func_507(int iParam0, int iParam1)
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

int func_508(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_68[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_72[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_76[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_88[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_92[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_96[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_100[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_104[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_108[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_112[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_116[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_120[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_124[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_128[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_132[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_136[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_140[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_144[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_148[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_152[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_156[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1].f_160[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_509(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_510(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_151(iVar2, iVar0, 0);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0;
}

bool func_510(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

int func_511(int iParam0)
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

void func_512(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_76434[0].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x84997C8C8A5848DD(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_504(&(Global_76434[0]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_504(&(Global_76434[0]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x4F79808059300187(iVar38, &Var20);
			if (!unk_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_504(&(Global_76434[0]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x1A5A491D253EA7BA(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var41);
		if (iParam3 != -1 && Global_76603)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_504(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 0, -1, func_513(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xC578687D5A643830(iVar58, &Var41);
			if (!unk_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_504(&(Global_76434[0]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1A5A491D253EA7BA(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

int func_513(int iParam0)
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

void func_514(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_515(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_516(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_512(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_517(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_512(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_518(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_519(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_520(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_521(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_522(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_523(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0].f_5 = 2;
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
		
		case 79:
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
			func_512(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_524(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0].f_5 = 2;
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
		
		case 79:
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
			func_512(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_525(int iParam0)
{
	if (iParam0 < 136)
	{
		func_527(iParam0);
	}
	else
	{
		func_526(iParam0);
	}
	if (Global_76434[0].f_2 == -1)
	{
		func_512(3, iParam0, 242, -1);
	}
}

void func_526(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 2;
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
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_527(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 2;
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
		
		case 79:
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
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_528(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_529(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0].f_5 = 2;
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
			func_512(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_530(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_548(iParam1);
			break;
		
		case 2:
			func_547(iParam1);
			break;
		
		case 3:
			func_543(iParam1);
			break;
		
		case 4:
			func_542(iParam1);
			break;
		
		case 6:
			func_541(iParam1);
			break;
		
		case 5:
			func_540(iParam1);
			break;
		
		case 8:
			func_539(iParam1);
			break;
		
		case 9:
			func_538(iParam1);
			break;
		
		case 10:
			func_537(iParam1);
			break;
		
		case 1:
			func_536(iParam1);
			break;
		
		case 7:
			func_535(iParam1);
			break;
		
		case 11:
			func_534(iParam1);
			break;
		
		case 12:
			func_533(iParam1);
			break;
		
		case 13:
			func_532(iParam1);
			break;
		
		case 14:
			func_531(iParam1);
			break;
	}
}

void func_531(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0].f_5 = 1;
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
		
		case 79:
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
			func_512(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_532(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_533(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_534(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_535(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_512(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_536(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_537(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_538(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_539(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_540(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0].f_5 = 1;
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
			func_512(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_541(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0].f_5 = 1;
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
		
		case 79:
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
			func_512(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_542(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0].f_5 = 1;
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
		
		case 79:
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
			func_512(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_543(int iParam0)
{
	if (iParam0 < 107)
	{
		func_546(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_545(iParam0);
	}
	else
	{
		func_544(iParam0);
	}
	if (Global_76434[0].f_2 == -1)
	{
		func_512(3, iParam0, 318, -1);
	}
}

void func_544(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 1;
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
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_545(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 1;
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
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_546(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0].f_5 = 1;
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
		
		case 79:
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
	func_504(&(Global_76434[0]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_547(int iParam0)
{
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0].f_5 = 1;
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
		
		
