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
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = unk_0xAD1355DD1E5D2D9B();
	iLocal_48 = unk_0x817B3657F78A517A();
	iLocal_96 = -15;
	if (unk_0x2EBF608FFE6CA406(34))
	{
		func_137();
	}
	func_136();
	func_134();
	while (true)
	{
		wait(0);
		if (func_131(4) || Global_95664)
		{
			func_137();
		}
		if (func_130())
		{
			bLocal_95 = false;
			iLocal_49 = (iLocal_49 + 1 % 60);
			iVar0 = 0;
			while (iVar0 < 63)
			{
				if ((iVar0 % 60) == iLocal_49 || Global_110725[iVar0].f_2)
				{
					func_83(iVar0);
				}
				iVar0++;
			}
			func_76();
			func_54();
			func_49();
			func_46();
			func_4();
		}
		else if (!bLocal_95)
		{
			func_1();
		}
	}
}

void func_1()
{
	iVar1 = 0;
	while (iVar1 < 20)
	{
		func_3(iLocal_74[iVar1], 0, 0);
		iLocal_53[iVar1] = 0;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 63)
	{
		iVar0 = iVar2;
		if (Global_110725[iVar0].f_8 != -1)
		{
			func_3(iLocal_74[Global_110725[iVar0].f_8], 0, 0);
			func_2(&(Global_110725[iVar0].f_8));
		}
		Global_110725[iVar0].f_7 = 0;
		iVar2++;
	}
	bLocal_95 = true;
}

void func_2(var uParam0)
{
	if (*uParam0 > -1 && *uParam0 < 20)
	{
		iLocal_53[*uParam0] = 0;
	}
	*uParam0 = -1;
}

void func_3(int iParam0, bool bParam1, bool bParam2)
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

void func_4()
{
	if (!func_45(58))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (func_44(17))
			{
				if (!func_43(74))
				{
					if (iLocal_96 == -15)
					{
						iLocal_96 = func_42();
						func_34(&iLocal_96, 0, 5, 0, 0, 0, 0);
					}
					else if (func_23(iLocal_96))
					{
						bVar0 = false;
						iVar1 = 243;
						while (iVar1 <= 262)
						{
							iVar34 = iVar1;
							func_18(58, &Var2);
							if (func_16(Var2.f_6, func_17(iVar34, 0), 0))
							{
								if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar34].f_19))
								{
									unk_0xF412DD40DE84CE72(Global_31146[iVar34].f_19, 1);
									unk_0x0EC848EFF66DF45A(Global_31146[iVar34].f_19, 10000);
									switch (func_9())
									{
										case 1:
											func_6("AM_H_RCFS", 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
										
										case 0:
											func_6("AM_H_RCFS_M", 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
									}
									iLocal_96 = func_42();
									func_34(&iLocal_96, 0, 0, 8, 0, 0, 0);
									bVar0 = true;
								}
							}
							iVar1++;
						}
						if (!bVar0)
						{
							iLocal_96 = func_42();
							func_34(&iLocal_96, 0, 5, 0, 0, 0, 0);
						}
					}
				}
				else
				{
					func_5(58);
				}
			}
		}
	}
}

void func_5(int iParam0)
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

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_7(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_7(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_8();
	}
}

void func_8()
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

int func_9()
{
	func_10();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_10()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_14(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_13(unk_0x16F2683693E537C9());
			if (func_12(iVar0) && (!func_11(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_12(Global_111638.f_2358.f_539.f_4321))
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

bool func_11(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return func_15(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_15(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_16(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_17(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31146[iVar0][iParam1];
}

void func_18(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_19(uParam1, "Abigail1", func_21(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 1:
			func_19(uParam1, "Abigail2", func_21(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 2:
			func_19(uParam1, "Barry1", func_21(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 3:
			func_19(uParam1, "Barry2", func_21(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
		
		case 4:
			func_19(uParam1, "Barry3", func_21(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 5:
			func_19(uParam1, "Barry3A", func_21(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 6:
			func_19(uParam1, "Barry3C", func_21(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 7:
			func_19(uParam1, "Barry4", func_21(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_20(iParam0), 0, 0);
			break;
		
		case 8:
			func_19(uParam1, "Dreyfuss1", func_21(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 9:
			func_19(uParam1, "Epsilon1", func_21(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 10:
			func_19(uParam1, "Epsilon2", func_21(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 11:
			func_19(uParam1, "Epsilon3", func_21(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 12:
			func_19(uParam1, "Epsilon4", func_21(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 13:
			func_19(uParam1, "Epsilon5", func_21(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 14:
			func_19(uParam1, "Epsilon6", func_21(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 15:
			func_19(uParam1, "Epsilon7", func_21(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 16:
			func_19(uParam1, "Epsilon8", func_21(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 17:
			func_19(uParam1, "Extreme1", func_21(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 18:
			func_19(uParam1, "Extreme2", func_21(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 19:
			func_19(uParam1, "Extreme3", func_21(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 20:
			func_19(uParam1, "Extreme4", func_21(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 21:
			func_19(uParam1, "Fanatic1", func_21(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_20(iParam0), 1, 0);
			break;
		
		case 22:
			func_19(uParam1, "Fanatic2", func_21(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_20(iParam0), 1, 0);
			break;
		
		case 23:
			func_19(uParam1, "Fanatic3", func_21(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_20(iParam0), 0, 1);
			break;
		
		case 24:
			func_19(uParam1, "Hao1", func_21(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_20(iParam0), 0, 1);
			break;
		
		case 25:
			func_19(uParam1, "Hunting1", func_21(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 26:
			func_19(uParam1, "Hunting2", func_21(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 27:
			func_19(uParam1, "Josh1", func_21(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 28:
			func_19(uParam1, "Josh2", func_21(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
		
		case 29:
			func_19(uParam1, "Josh3", func_21(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
		
		case 30:
			func_19(uParam1, "Josh4", func_21(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 31:
			func_19(uParam1, "Maude1", func_21(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 32:
			func_19(uParam1, "Minute1", func_21(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 33:
			func_19(uParam1, "Minute2", func_21(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 34:
			func_19(uParam1, "Minute3", func_21(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 35:
			func_19(uParam1, "MrsPhilips1", func_21(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 36:
			func_19(uParam1, "MrsPhilips2", func_21(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 37:
			func_19(uParam1, "Nigel1", func_21(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 38:
			func_19(uParam1, "Nigel1A", func_21(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
		
		case 39:
			func_19(uParam1, "Nigel1B", func_21(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
		
		case 40:
			func_19(uParam1, "Nigel1C", func_21(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
		
		case 41:
			func_19(uParam1, "Nigel1D", func_21(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
		
		case 42:
			func_19(uParam1, "Nigel2", func_21(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
		
		case 43:
			func_19(uParam1, "Nigel3", func_21(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
		
		case 44:
			func_19(uParam1, "Omega1", func_21(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 45:
			func_19(uParam1, "Omega2", func_21(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 46:
			func_19(uParam1, "Paparazzo1", func_21(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 47:
			func_19(uParam1, "Paparazzo2", func_21(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 48:
			func_19(uParam1, "Paparazzo3", func_21(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 49:
			func_19(uParam1, "Paparazzo3A", func_21(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 50:
			func_19(uParam1, "Paparazzo3B", func_21(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 51:
			func_19(uParam1, "Paparazzo4", func_21(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 52:
			func_19(uParam1, "Rampage1", func_21(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 54:
			func_19(uParam1, "Rampage3", func_21(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 55:
			func_19(uParam1, "Rampage4", func_21(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 56:
			func_19(uParam1, "Rampage5", func_21(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
		
		case 53:
			func_19(uParam1, "Rampage2", func_21(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
		
		case 57:
			func_19(uParam1, "TheLastOne", func_21(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 58:
			func_19(uParam1, "Tonya1", func_21(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 59:
			func_19(uParam1, "Tonya2", func_21(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 60:
			func_19(uParam1, "Tonya3", func_21(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 61:
			func_19(uParam1, "Tonya4", func_21(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		case 62:
			func_19(uParam1, "Tonya5", func_21(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_19(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_20(int iParam0)
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

struct<2> func_21(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_22(iParam0) };
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

struct<2> func_22(int iParam0)
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

bool func_23(int iParam0)
{
	return func_24(func_42(), iParam0);
}

int func_24(int iParam0, int iParam1)
{
	if (!func_32(iParam1) || !func_32(iParam0))
	{
		return 1;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_25(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_26(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_27(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_28(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_29(int iParam0)
{
	return iParam0 & 15;
}

int func_30(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_31(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_31(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_32(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_25(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_26(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_27(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_30(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_29(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_28(iParam0);
	if (iVar5 < 1 || iVar5 > func_33(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_33(int iParam0, int iParam1)
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

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_30(*iParam0);
	iVar1 = func_29(*iParam0);
	iVar2 = func_28(*iParam0);
	iVar3 = func_27(*iParam0);
	iVar4 = func_26(*iParam0);
	iVar5 = func_25(*iParam0);
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
	iVar6 = func_33(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_33(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_35(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(uParam0, iParam1);
	func_40(uParam0, iParam2);
	func_39(uParam0, iParam3);
	func_38(uParam0, iParam5);
	func_37(uParam0, iParam4);
	func_36(uParam0, iParam6);
}

void func_36(var uParam0, int iParam1)
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

void func_37(var uParam0, int iParam1)
{
	iVar0 = func_29(*uParam0);
	iVar1 = func_30(*uParam0);
	if (iParam1 < 1 || iParam1 > func_33(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_38(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_39(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_40(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_41(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_42()
{
	func_41(&uVar0, unk_0x4460E481B9E33ADA());
	func_40(&uVar0, unk_0x8D199E381D262EEF());
	func_39(&uVar0, unk_0xD8A54335F18763BA());
	func_37(&uVar0, unk_0x972A296334C9D57B());
	func_38(&uVar0, unk_0x118229AD063C3C1D());
	func_36(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_43(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_44(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_45(int iParam0)
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

void func_46()
{
	if (!func_45(39))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[27], 3))
		{
			if (func_47("FS_HELP1") == 2)
			{
				func_6("FS_HELP1", 1, 0, 2000, 10000, 7, 0, 0, 0);
			}
			else if (func_47("FS_HELP1") == 1)
			{
				func_5(39);
			}
		}
	}
}

int func_47(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_110281))
	{
		return 1;
	}
	if (func_48(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_48(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_111638.f_20405[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_49()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!func_45(55))
		{
			if ((func_53(5) && func_51(unk_0x16F2683693E537C9(), func_52(5), 1) < func_50(5)) || (func_53(6) && func_51(unk_0x16F2683693E537C9(), func_52(6), 1) < func_50(6)))
			{
				if (func_47("BARSTASH2") == 2)
				{
					func_6("BARSTASH2", 1, 0, 2000, 10000, 2, 0, 0, 0);
				}
				else if (func_47("BARSTASH2") == 1)
				{
					func_5(55);
				}
			}
		}
	}
}

float func_50(int iParam0)
{
	if (iParam0 == 5 || iParam0 == 6)
	{
		return 250f;
	}
	else if (iParam0 == 38)
	{
		return 35f;
	}
	else if (iParam0 == 39)
	{
		return 37,5f;
	}
	else if (iParam0 == 40)
	{
		return 45f;
	}
	else if (iParam0 == 41)
	{
		return 150f;
	}
	else if (iParam0 == 49 || iParam0 == 50)
	{
		return 90f;
	}
	return 250f;
}

float func_51(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam4);
}

Vector3 func_52(int iParam0)
{
	if (iParam0 == 5)
	{
		return 1161,31f, -1326,52f, 34,23f;
	}
	else if (iParam0 == 6)
	{
		return -533,15f, -1691,25f, 18,21f;
	}
	else if (iParam0 == 38)
	{
		return -565,8f, 293,14f, 90,8f;
	}
	else if (iParam0 == 39)
	{
		return -1036,65f, 363,59f, 79,82f;
	}
	else if (iParam0 == 40)
	{
		return -620,37f, -264,39f, 37,81f;
	}
	else if (iParam0 == 41)
	{
		return -1115,96f, 31,42f, 53,8f;
	}
	else if (iParam0 == 49)
	{
		return 305,52f, 157,19f, 102,94f;
	}
	else if (iParam0 == 50)
	{
		return 1040,96f, -534,42f, 60,17f;
	}
	return 0f, 0f, 0f;
}

var func_53(int iParam0)
{
	return Global_110725[iParam0].f_1;
}

void func_54()
{
	if (func_75())
	{
		if (!func_43(114))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[46], 3))
			{
				func_72(552744224, 6, 2, 50, 60000, 10000, -1, 181, -1, 0, 1);
				func_71(114, 1);
			}
		}
		else if (!func_43(83))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[51], 3))
			{
				if (func_70(552744224))
				{
					func_56(552744224);
					func_55(181, 0);
				}
			}
		}
	}
}

void func_55(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_56(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			if (Global_41978 != iVar0)
			{
				func_69(iVar0);
				func_61(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0] == iParam0)
		{
			func_61(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0] == iParam0)
		{
			func_60(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			func_58(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			func_57(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_57(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_866)
	{
		return;
	}
	if (Global_111638.f_7683.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_866 - 2))
		{
			Global_111638.f_7683.f_765[iVar0] = { Global_111638.f_7683.f_765[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_866 > 0)
	{
		Global_111638.f_7683.f_765[(Global_111638.f_7683.f_866 - 1)] = { Var1 };
		Global_111638.f_7683.f_866 = (Global_111638.f_7683.f_866 - 1);
	}
}

void func_58(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_764)
	{
		return;
	}
	if (Global_111638.f_7683.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_764 - 2))
		{
			Global_111638.f_7683.f_651[iVar0] = { Global_111638.f_7683.f_651[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_764 > 0)
	{
		Global_111638.f_7683.f_651[(Global_111638.f_7683.f_764 - 1)] = { Var1 };
		Global_111638.f_7683.f_764 = (Global_111638.f_7683.f_764 - 1);
	}
	func_59(0);
	func_59(1);
	func_59(2);
}

void func_59(int iParam0)
{
	iVar1 = 0;
	if (!func_12(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0].f_2, iParam0))
		{
			if (Global_111638.f_7683[iVar0].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2].f_2, iParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[iParam0] = iVar1;
}

void func_60(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar15] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_650 - 2))
			{
				Global_111638.f_7683.f_199[iVar16] = { Global_111638.f_7683.f_199[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_199[(Global_111638.f_7683.f_650 - 1)] = { Var0 };
			Global_111638.f_7683.f_650 = (Global_111638.f_7683.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_61(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar15] == iParam0)
		{
			func_62(Global_111638.f_7683.f_137[iVar15].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_198 - 2))
			{
				Global_111638.f_7683.f_137[iVar16] = { Global_111638.f_7683.f_137[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_137[(Global_111638.f_7683.f_198 - 1)] = { Var0 };
			Global_111638.f_7683.f_198 = (Global_111638.f_7683.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_62(int iParam0)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (func_68(iParam0, Global_19486) == 1)
		{
			func_67(iParam0, Global_19486, 0);
			if (func_66(iParam0, Global_19486) == 0)
			{
				iVar0 = Global_19486;
				func_63(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_63(int iParam0, int iParam1)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_65(iParam0, iVar0, 0);
			func_64(iParam0, iVar0, 0);
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_24[iParam1] = iParam2;
	}
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_12[iParam1] = iParam2;
	}
}

int func_66(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	Global_1798[iParam0].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_19[iParam1] = iParam2;
	}
}

int func_68(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_19[iParam1];
}

void func_69(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_136)
	{
		return;
	}
	iVar1 = Global_111638.f_7683[iParam0].f_2;
	if (Global_111638.f_7683.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_136 - 2))
		{
			Global_111638.f_7683[iVar0] = { Global_111638.f_7683[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_136 > 0)
	{
		Global_111638.f_7683[(Global_111638.f_7683.f_136 - 1)] = { Var2 };
		Global_111638.f_7683.f_136 = (Global_111638.f_7683.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
		{
			func_59(iVar0);
		}
		iVar0++;
	}
}

int func_70(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)
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

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (func_74(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_73(iParam1);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_59(0);
		func_59(1);
		func_59(2);
		return 1;
	}
	return 0;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_74(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_75()
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

void func_76()
{
	iLocal_50++;
	iLocal_51++;
	if (iLocal_50 >= 63)
	{
		iLocal_50 = 0;
		iLocal_51 = 0;
		iLocal_52 = 0;
	}
	else if (iLocal_51 > 31)
	{
		iLocal_51 = 0;
		iLocal_52++;
	}
	iVar0 = iLocal_50;
	if (!func_82(iVar0) || iVar0 == 52)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569.f_390[iLocal_52], iLocal_51))
		{
			func_18(iVar0, &Var1);
			if (iVar0 == 58)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_18569.f_390[iLocal_52]), iLocal_51);
			}
			else if (unk_0x24EDB6A19624D7FB(Var1.f_6))
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_18569.f_390[iLocal_52]), iLocal_51);
			}
			else if (Global_110725[iVar0].f_8 != -1)
			{
				if (iLocal_53[Global_110725[iVar0].f_8])
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_31146[iLocal_74[Global_110725[iVar0].f_8]].f_11, 6))
					{
						func_81(iLocal_74[Global_110725[iVar0].f_8]);
					}
				}
			}
		}
		else if (Global_110725[iVar0].f_8 != -1)
		{
			if (iLocal_53[Global_110725[iVar0].f_8])
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iLocal_74[Global_110725[iVar0].f_8]].f_11, 6))
				{
					func_77(iLocal_74[Global_110725[iVar0].f_8]);
				}
			}
		}
	}
}

void func_77(int iParam0)
{
	func_80(iParam0, 1, 0);
	func_79(iParam0, 1);
	func_78(iParam0, 1);
}

void func_78(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 4);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_79(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 5);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_80(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 11);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 11);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_81(int iParam0)
{
	func_80(iParam0, 0, 0);
	func_79(iParam0, 1);
	func_78(iParam0, 1);
}

int func_82(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

void func_83(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_18(iParam0, &Var0);
	Global_110725[iParam0].f_2 = 0;
	if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 1))
	{
		if (!Var0.f_23)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0]), 1);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 0) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 3))
	{
		if (!Global_111638.f_18569[iParam0].f_1)
		{
			uVar32 = func_42();
			func_34(&uVar32, 0, 0, Var0.f_15, 0, 0, 0);
			if (iParam0 == 57)
			{
				iVar33 = unk_0x09AC81E49EA267F7(3, 11);
				iVar33 *= 30;
				func_34(&uVar32, 0, 0, iVar33, 0, 0, 0);
			}
			Global_111638.f_18569[iParam0].f_2 = uVar32;
			Global_111638.f_18569[iParam0].f_1 = 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 1))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 2))
			{
				bVar34 = true;
				if (Var0.f_14 != -1)
				{
					if (!func_43(Var0.f_14))
					{
						bVar34 = false;
					}
				}
				if (func_128(iParam0))
				{
					bVar34 = false;
				}
				if (func_126(iParam0))
				{
					bVar34 = false;
				}
				if (func_125(Var0.f_30))
				{
					bVar34 = false;
				}
				if (Var0.f_15 > 0 && bVar34)
				{
					if (!func_23(Global_111638.f_18569[iParam0].f_2))
					{
						func_122(Global_111638.f_18569[iParam0].f_2, &uVar35, &uVar36, &uVar37, &iVar38, &iVar39, &iVar40);
						if ((iVar40 > 0 || iVar39 > 0) || iVar38 > 10)
						{
							Var57 = { func_21(iParam0) };
							Global_111638.f_18569[iParam0].f_2 = func_42();
							func_34(&(Global_111638.f_18569[iParam0].f_2), 0, 0, Var0.f_15, 0, 0, 0);
						}
						bVar34 = false;
					}
				}
				if (!func_121(Var0.f_27, Var0.f_28))
				{
					bVar34 = false;
				}
				if (bVar34)
				{
					unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0]), 2);
					Global_110725[iParam0].f_4 = 0;
					Global_110725[iParam0].f_6 = 0;
					Global_110725[iParam0].f_5 = 0;
					if (iParam0 == 35)
					{
						Global_110725[iParam0].f_3 = 0;
						unk_0xB38702A5025BB490("launcher_MrsPhilips");
					}
					else if (iParam0 == 58)
					{
						Global_110725[iParam0].f_3 = 0;
						unk_0xB38702A5025BB490("launcher_Tonya");
					}
					else
					{
						Global_110725[iParam0].f_3 = 1;
					}
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 3))
	{
		bVar59 = true;
		if (func_128(iParam0))
		{
			bVar59 = false;
		}
		if (func_126(iParam0))
		{
			bVar59 = false;
		}
		if (func_125(Var0.f_30))
		{
			bVar59 = false;
		}
		if (bVar59)
		{
			if (!func_121(Var0.f_27, Var0.f_28))
			{
				bVar59 = false;
			}
		}
		if (!bVar59)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_18569[iParam0]), 2);
		}
	}
	iVar60 = 1;
	if (Global_110725[iParam0].f_1)
	{
		Global_110725[iParam0].f_2 = 1;
		Global_110725[iParam0].f_1 = 0;
		Global_110725[iParam0].f_3 = 1;
	}
	else if (Global_110725[iParam0].f_3)
	{
		if (((((Var0.f_4 == 0 || Var0.f_4 == 2) || Var0.f_4 == 3) || Var0.f_4 == 11) || Var0.f_4 == 16) || Var0.f_4 == 17)
		{
			fVar61 = 100f;
		}
		else
		{
			fVar61 = 209f;
		}
		if (!func_120() && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Var0.f_6, false) > fVar61)
		{
			Global_110725[iParam0].f_3 = 0;
		}
		else
		{
			if (iParam0 == 10 && Global_111638.f_7256[109] != 1)
			{
				func_107(109, 1);
			}
			iVar60 = 0;
		}
	}
	iVar62 = 0;
	if ((((iVar60 && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 3)) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 0)) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 1)) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 2))
	{
		if (iParam0 == 58 && func_106())
		{
		}
		else
		{
			iVar62 = 2;
		}
	}
	if (Global_110725[iParam0].f_7 != iVar62)
	{
		if (func_105(&(Global_110725[iParam0].f_8)))
		{
			if (func_16(Var0.f_6, 0f, 0f, 0f, 0))
			{
			}
			else
			{
				iVar63 = iLocal_74[Global_110725[iParam0].f_8];
				if (iVar62 == 0)
				{
					func_3(iVar63, 0, 0);
					func_104(iVar63, 0);
					func_2(&(Global_110725[iParam0].f_8));
				}
				else if (iVar62 == 2)
				{
					if (func_103(iParam0))
					{
						func_102(iVar63, 1);
						func_101(iVar63, func_52(iParam0));
						func_100(iVar63, func_50(iParam0));
					}
					else
					{
						func_102(iVar63, 0);
						func_99(iVar63, Var0.f_9);
						func_101(iVar63, Var0.f_6);
					}
					func_96(iVar63, iParam0);
					func_95(iVar63);
					if (func_94(Var0.f_26, 1))
					{
						func_93(iVar63, 1, 1, 0);
					}
					if (func_94(Var0.f_26, 0))
					{
						func_93(iVar63, 1, 0, 0);
					}
					if (func_94(Var0.f_26, 2))
					{
						func_93(iVar63, 1, 2, 0);
					}
					if (func_82(iParam0) && iParam0 != 52)
					{
						func_81(iVar63);
					}
					if (func_82(iParam0))
					{
						if (func_91(iParam0))
						{
							func_104(iVar63, 1);
						}
					}
					if (iParam0 == 58)
					{
						func_90(iVar63, 4);
					}
					else
					{
						func_90(iVar63, 8);
					}
					func_3(iVar63, 1, 0);
				}
			}
			Global_110725[iParam0].f_7 = iVar62;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 4))
	{
		if (unk_0x12AB0310C2281427(&(Var0.f_10)) == unk_0x12AB0310C2281427(""))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0]), 4);
		}
		else if (iVar62 == 2)
		{
			if (func_94(Var0.f_26, func_9()))
			{
				if (!func_89() && !unk_0x991B1F0980C62628())
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (iParam0 == 58)
						{
							if (func_88(243))
							{
								if (func_87(243))
								{
									func_6(&(Var0.f_10), 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
									func_55(63, 1000);
									unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0]), 4);
								}
							}
						}
						else if ((iParam0 == 5 || iParam0 == 38) || iParam0 == 49)
						{
							func_6(&(Var0.f_10), 1, 5000, -1, 10000, Var0.f_26, 0, 0, 0);
							unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0]), 4);
						}
						else
						{
							func_6(&(Var0.f_10), 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
							unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0]), 4);
						}
					}
				}
			}
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!func_45(35))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 3))
			{
				if (((((!func_94(Var0.f_26, func_9()) && !func_103(iParam0)) && !func_82(iParam0)) && !func_86(iParam0)) && !func_85(iParam0)) && !Global_110725[iParam0].f_3)
				{
					if (vdist2(Var0.f_6, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 81f)
					{
						sVar64 = "";
						if (unk_0xEAE0D21A50E6C7F4(Var0.f_26, 1))
						{
							sVar64 = "TRIG_RC_F";
						}
						else if (unk_0xEAE0D21A50E6C7F4(Var0.f_26, 0))
						{
							sVar64 = "TRIG_RC_M";
						}
						else
						{
							sVar64 = "TRIG_RC_T";
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar64))
						{
							switch (func_47(sVar64))
							{
								case 2:
									func_6(sVar64, 1, 0, 1000, 10000, func_84(), 0, 0, 0);
									break;
								
								case 1:
									func_5(35);
									StringCopy(&Global_110281, "", 16);
									break;
								}
							}
						}
					}
				}
			}
	}
}

int func_84()
{
	func_10();
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

int func_85(int iParam0)
{
	if (iParam0 == 2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[3], 3) && Global_110725[3].f_3 == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[2], 3) && Global_110725[2].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 == 2 || iParam0 == 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[2], 0) && unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[3], 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[2], 3) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[3], 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_87(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19);
}

int func_88(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	bVar1 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 0);
	bVar2 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 15);
	if (bVar1 && bVar2)
	{
		return 1;
	}
	return 0;
}

int func_89()
{
	if (unk_0x8A22C4C08282BF26(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_31146[iVar0].f_16 == iParam1)
	{
		return;
	}
	Global_31146[iVar0].f_16 = iParam1;
	switch (iParam1)
	{
		case 1:
			Global_31146[iVar0].f_12[0] = 40;
			break;
		
		case 3:
			Global_31146[iVar0].f_12[0] = 60;
			break;
	}
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
}

int func_91(int iParam0)
{
	if (!func_82(iParam0))
	{
		return 0;
	}
	iVar0 = 194;
	iVar1 = (iParam0 - 52);
	if (func_43(108) == 1)
	{
		return 1;
	}
	if (Global_111638.f_2347[iVar1] >= 1)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0], 3))
	{
		return 1;
	}
	return func_92((iVar0 + iVar1), 0);
}

int func_92(int iParam0, int iParam1)
{
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_93(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1)
	{
		if (!bParam3)
		{
			Global_31146[iVar0].f_17 = iParam2;
			if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 8))
			{
				unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
			}
			unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 8);
		}
		else
		{
			Global_31146[iVar0].f_18 = iParam2;
			if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 10))
			{
				unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
			}
			unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 10);
		}
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
	}
	else
	{
		func_95(iParam0);
	}
}

int func_94(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return unk_0xEAE0D21A50E6C7F4(iParam0, iParam1);
		
		default:
	}
	return 0;
}

void func_95(int iParam0)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 8) || unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 10))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
	}
	unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 8);
	unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 10);
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_96(int iParam0, int iParam1)
{
	func_98(iParam0, 0);
	if (iParam1 == 1)
	{
		func_97(iParam0, "B_ABI");
	}
	else if (((iParam1 == 2 || iParam1 == 3) || iParam1 == 4) || iParam1 == 7)
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[2], 3) || unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[3], 3)) || unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[4], 3))
		{
			func_97(iParam0, "B_BAR");
		}
		else
		{
			func_97(iParam0, "BLIP_66");
			func_99(iParam0, 66);
		}
	}
	else if (iParam1 == 5 || iParam1 == 6)
	{
		func_97(iParam0, "B_STA");
	}
	else if (iParam1 == 8)
	{
		func_97(iParam0, "B_DRE");
	}
	else if ((((((iParam1 == 10 || iParam1 == 11) || iParam1 == 12) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16)
	{
		func_97(iParam0, "B_EPS");
	}
	else if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
	{
		func_97(iParam0, "B_EXT");
	}
	else if ((iParam1 == 21 || iParam1 == 22) || iParam1 == 23)
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[21], 3) || unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[22], 3)) || unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[23], 3))
		{
			func_97(iParam0, "B_FAN");
		}
		else
		{
			func_97(iParam0, "BLIP_66");
			func_99(iParam0, 66);
		}
	}
	else if (iParam1 == 26)
	{
		func_97(iParam0, "B_HUN");
	}
	else if ((iParam1 == 28 || iParam1 == 29) || iParam1 == 30)
	{
		func_97(iParam0, "B_JOS");
	}
	else if (iParam1 == 33 || iParam1 == 34)
	{
		func_97(iParam0, "B_MIN");
	}
	else if (((iParam1 == 38 || iParam1 == 39) || iParam1 == 40) || iParam1 == 41)
	{
		func_97(iParam0, "B_CEL");
	}
	else if (iParam1 == 42 || iParam1 == 43)
	{
		func_97(iParam0, "B_NIG");
	}
	else if (iParam1 == 45)
	{
		func_97(iParam0, "B_OME");
	}
	else if ((iParam1 == 47 || iParam1 == 48) || iParam1 == 51)
	{
		func_97(iParam0, "B_PAP");
	}
	else if (iParam1 == 49 || iParam1 == 50)
	{
		func_97(iParam0, "B_PHO");
	}
	else if (iParam1 == 52)
	{
		func_97(iParam0, "BLIP_66");
	}
	else if (((iParam1 == 53 || iParam1 == 54) || iParam1 == 55) || iParam1 == 56)
	{
		func_97(iParam0, "BLIP_84");
	}
	else if (((iParam1 == 59 || iParam1 == 60) || iParam1 == 61) || iParam1 == 62)
	{
		func_97(iParam0, "B_TON");
	}
	else
	{
		func_97(iParam0, "BLIP_66");
	}
}

void func_97(int iParam0, char* sParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_31146[iVar0].f_20), sParam1, 8);
	if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar0].f_19))
	{
		unk_0xDC5B2F9D0CCE3A10(Global_31146[iVar0].f_19, sParam1);
	}
}

void func_98(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	unk_0xCA42B3469E060D13(&(Global_31146[iVar0].f_11), 21, 26, iParam1);
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_99(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_31146[iVar0].f_12[0] == iParam1)
	{
		return;
	}
	Global_31146[iVar0].f_12[0] = iParam1;
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_100(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	Global_31143 = 1;
	Global_31146[iVar0].f_10 = uParam1;
	Global_37196 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_101(int iParam0, vector3 vParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((vParam1.x == Global_31146[iVar0][0] && vParam1.y == Global_31146[iVar0][0].f_1) && vParam1.z == Global_31146[iVar0][0].f_2)
	{
		return;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
	Global_31146[iVar0][0] = { vParam1 };
	Global_37196 = 1;
}

void func_102(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 28);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 28);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

int func_103(int iParam0)
{
	if (((((((iParam0 == 5 || iParam0 == 6) || iParam0 == 38) || iParam0 == 39) || iParam0 == 40) || iParam0 == 41) || iParam0 == 49) || iParam0 == 50)
	{
		return 1;
	}
	return 0;
}

void func_104(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0].f_11), 20);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 20);
}

int func_105(var uParam0)
{
	if (*uParam0 != -1)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!iLocal_53[iVar0])
		{
			*uParam0 = iVar0;
			iLocal_53[iVar0] = 1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106()
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

void func_107(int iParam0, int iParam1)
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
			func_109(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_108(iParam0);
			}
		}
	}
}

void func_108(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_109(int iParam0)
{
	if (!func_117())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_116(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_114(iParam0, &Var0);
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
			iVar9 = func_111(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_11(14))
		{
			iVar9 = 0;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 1) && unk_0x8A22C4C08282BF26(92439941) == 0)
	{
		if (func_110())
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
		func_108(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

int func_110()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		return 0;
	}
	switch (func_9())
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

int func_111(int iParam0)
{
	iVar0 = func_9();
	if (func_112(iParam0))
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
		if (func_12(iVar0))
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
			if (func_12(iVar0))
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
			if (func_12(iVar0))
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
			if (func_12(iVar0))
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
				if (func_12(iVar0))
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
				if (func_12(iVar0))
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
			if (func_12(iVar0))
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

int func_112(int iParam0)
{
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_113(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1)));
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

int func_113(int iParam0)
{
	return iParam0;
}

void func_114(int iParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_42();
	iVar1 = func_27(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_115(iParam0))
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
			if (func_115(iParam0))
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
			if (func_115(iParam0))
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
			if (func_115(iParam0))
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
			if (!func_115(iParam0))
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
			if (!func_115(iParam0))
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
				if (!func_115(iParam0))
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
				if (!func_115(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_115(iParam0) && unk_0x8A22C4C08282BF26(Global_89532[26].f_6) == 0)
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
			if (!func_115(iParam0))
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
			if (!func_115(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_115(iParam0))
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
			if (!func_115(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_115(iParam0))
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
			if (!func_115(iParam0))
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
				if (!func_115(iParam0))
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
				if (!func_115(iParam0))
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
				if (!func_115(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_115(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_115(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_115(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
	}
}

bool func_115(int iParam0)
{
	Var0 = { func_116(iParam0) };
	iVar7 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

struct<7> func_116(int iParam0)
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

int func_117()
{
	if ((func_119() == -1 || func_119() == 999) && !func_118() == 0)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	return Global_30769;
}

int func_119()
{
	return Global_30768;
}

int func_120()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

int func_121(int iParam0, int iParam1)
{
	iVar0 = (func_27(func_42()) * 100 + func_26(func_42()));
	if (iParam1 > iParam0)
	{
		if (iVar0 < iParam0 || iVar0 > iParam1)
		{
			return 0;
		}
	}
	else if (iVar0 < iParam0 && iVar0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_122(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_123(func_42(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_123(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_24(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_30(iParam0);
		iVar2 = (func_30(iParam0) - func_30(iParam1));
		iVar3 = (func_29(iParam0) - func_29(iParam1));
		iVar4 = (func_28(iParam0) - func_28(iParam1));
		iVar5 = (func_27(iParam0) - func_27(iParam1));
		iVar6 = (func_26(iParam0) - func_26(iParam1));
		iVar7 = (func_25(iParam0) - func_25(iParam1));
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_30(iParam1);
		iVar2 = (func_30(iParam1) - func_30(iParam0));
		iVar3 = (func_29(iParam1) - func_29(iParam0));
		iVar4 = (func_28(iParam1) - func_28(iParam0));
		iVar5 = (func_27(iParam1) - func_27(iParam0));
		iVar6 = (func_26(iParam1) - func_26(iParam0));
		iVar7 = (func_25(iParam1) - func_25(iParam0));
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
		iVar4 = (iVar4 + func_33(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_124(to_float(iVar0 + 1), 0f, 12f));
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

float func_124(float fParam0, float fParam1, float fParam2)
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

int func_125(bool bParam0)
{
	if (bParam0)
	{
		if (func_43(130) && !func_43(131))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	if (func_127(iParam0))
	{
		return 0;
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
	{
		if (((func_129(40) || func_129(41)) || func_129(43)) || func_129(47))
		{
			return 1;
		}
	}
	if (iParam0 == 24)
	{
		if (func_129(41))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92729[iParam0])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89496)
	{
		if (Global_89496[iVar0] != -1)
		{
			if (Global_76891.f_109[Global_89496[iVar0]] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130()
{
	return 1;
}

int func_131(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_132(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_132(int iParam0)
{
	return func_133(iParam0, Global_41431);
}

int func_133(int iParam0, int iParam1)
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

void func_134()
{
	iLocal_74[0] = 243;
	iLocal_74[1] = 244;
	iLocal_74[2] = 245;
	iLocal_74[3] = 246;
	iLocal_74[4] = 247;
	iLocal_74[5] = 248;
	iLocal_74[6] = 249;
	iLocal_74[7] = 250;
	iLocal_74[8] = 251;
	iLocal_74[9] = 252;
	iLocal_74[10] = 253;
	iLocal_74[11] = 254;
	iLocal_74[12] = 255;
	iLocal_74[13] = 256;
	iLocal_74[14] = 257;
	iLocal_74[15] = 258;
	iLocal_74[16] = 259;
	iLocal_74[17] = 260;
	iLocal_74[18] = 261;
	iLocal_74[19] = 262;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_53[iVar0] = 0;
		func_3(iLocal_74[iVar0], 0, 0);
		func_135(iLocal_74[iVar0], 4);
		func_90(iLocal_74[iVar0], 8);
		func_77(iLocal_74[iVar0]);
		func_98(iLocal_74[iVar0], 0);
		func_99(iLocal_74[iVar0], 66);
		func_95(iLocal_74[iVar0]);
		iVar0++;
	}
}

void func_135(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 16);
	Global_31146[iVar0].f_22 = iParam1;
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0].f_11), 18);
}

void func_136()
{
	iVar0 = 0;
	while (iVar0 < 63)
	{
		Global_110725[iVar0].f_5 = 0;
		Global_110725[iVar0].f_6 = 0;
		Global_110725[iVar0].f_4 = 0;
		Global_110725[iVar0].f_7 = 0;
		Global_110725[iVar0].f_8 = -1;
		Global_110725[iVar0].f_9 = -1;
		iVar0++;
	}
}

void func_137()
{
	func_1();
	unk_0x10FAF14A60A0DBE1();
}

