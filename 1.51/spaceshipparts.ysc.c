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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_606 = 15;
	if (unk_0x2EBF608FFE6CA406(210))
	{
		func_55();
	}
	if (unk_0x8A22C4C08282BF26(-68909366) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_54(14);
	func_52();
	func_51(&Local_42, 0, -2059885722, "SSHIP_COLLECT");
	func_49(&Local_42, 86701099, 755, 50);
	while (true)
	{
		wait(0);
		func_48(unk_0x16F2683693E537C9());
		if (func_16(&Local_42, &Local_55) || func_15(107) == 1)
		{
			if (!bLocal_608)
			{
				bLocal_608 = func_11(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
			if (bLocal_608)
			{
				if (!func_4() == 1)
				{
					func_1("SSHIP_SWITCH", 1, 0, 20000, 10000, 3, 0, 0, 0);
				}
				func_55();
			}
		}
	}
}

void func_1(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_2(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_2(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_3();
	}
}

void func_3()
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

int func_4()
{
	func_5();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_5()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_9(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_8(unk_0x16F2683693E537C9());
			if (func_7(iVar0) && (!func_6(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_7(Global_111638.f_2358.f_539.f_4321))
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

bool func_6(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_9(int iParam0)
{
	if (func_7(iParam0))
	{
		return func_10(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_10(int iParam0)
{
	return Global_1798[iParam0];
}

int func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (func_14(0))
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
		Var0.f_3 = func_13(iParam1);
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
		func_12(0);
		func_12(1);
		func_12(2);
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	iVar1 = 0;
	if (!func_7(iParam0))
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

int func_13(int iParam0)
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

bool func_14(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_15(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_16(var uParam0, int iParam1)
{
	if (!func_6(14) && !unk_0x757EF87A33649210())
	{
		unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		iVar0 = 0;
		while (iVar0 < 1)
		{
			bVar1 = func_47(&(uParam0->f_1), uParam0->f_10);
			if (!iParam1[uParam0->f_10]->f_10)
			{
				if (!bVar1)
				{
					if (uParam0->f_10 == iLocal_606)
					{
						func_45(iParam1[uParam0->f_10], uParam0->f_7, 738282662, 1, 0, 2);
						if (unk_0x762119754C50557A(iParam1[uParam0->f_10]->f_1))
						{
							unk_0x201D37E7F281A9D1(iParam1[uParam0->f_10]->f_1, "GtaMloRoomTun5");
						}
					}
					else if ((((uParam0->f_10 == 6 || uParam0->f_10 == 14) || uParam0->f_10 == 21) || uParam0->f_10 == 34) || uParam0->f_10 == 39)
					{
						func_45(iParam1[uParam0->f_10], uParam0->f_7, 738282662, 0, 1, 2);
					}
					else
					{
						func_45(iParam1[uParam0->f_10], uParam0->f_7, 738282662, 0, 0, 2);
					}
				}
			}
			else if (!bVar1)
			{
				func_28(uParam0, iParam1, vVar2);
			}
			uParam0->f_10++;
			if (uParam0->f_10 >= *iParam1)
			{
				uParam0->f_10 = 0;
			}
			iVar0++;
		}
		if (!Global_76882)
		{
			func_17(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 0, &iLocal_607, &iLocal_609, "SSHIP_TITLE", "SSHIP_COLLECT");
		}
		if (!bLocal_608)
		{
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
			{
				bLocal_608 = func_11(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
		}
		if (!uParam0->f_12 && !uParam0->f_11)
		{
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0;
}

void func_17(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)
{
	func_27(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					iVar0 = unk_0xD68EA767274B7444();
					if (iParam3 == 6)
					{
						unk_0x4D7F4CC43D4D0DE3(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x7E60C62A7CE58FC8(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x7ACC3006A87F8B39(sParam6);
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39(sParam7);
				unk_0x6D99DF8263D35CE5(func_19(iParam3));
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				*uParam2 = unk_0x1C0640BA9A7327B3();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 7000)
				{
					unk_0x7E60C62A7CE58FC8(*iParam5, "SHARD_ANIM_OUT");
					unk_0x3CAEA85DA607305E(1);
					unk_0x7C19E5E4784BD7CF(0,33f);
					unk_0x7E60D21B163E9D56();
					*iParam4++;
				}
				else if (!func_18())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_27(1);
						unk_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_18())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_27(1);
						unk_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					unk_0xE17FDF9E3068281B(iParam5);
				}
				func_27(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_18()
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

int func_19(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_26(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_108, func_25(func_26(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x6FB46C25CCB7E6D5(-1378531999, &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x6FB46C25CCB7E6D5(-1939733893, &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x6FB46C25CCB7E6D5(1469946099, &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_26(iParam0))
		{
			iVar2 = (func_24(iParam0) + iVar1);
			if (func_20(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar1 = func_22(iParam0, iParam1);
	uVar2 = func_21(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_21(int iParam0)
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

int func_22(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_23();
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

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_26(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_27(int iParam0)
{
	if (Global_76889 != iParam0)
	{
		Global_76889 = iParam0;
	}
}

int func_28(var uParam0, var uParam1, vector3 vParam2)
{
	iVar0 = uParam0->f_10;
	if (uParam1[iVar0]->f_10)
	{
		if (uParam1[iVar0]->f_1 != 0)
		{
			if (unk_0xEB751B41BC4080D4(uParam1[iVar0]->f_1) || func_43(uParam1[iVar0]->f_1))
			{
				func_30(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0x762119754C50557A(uParam1[iVar0]->f_1))
	{
		if ((vdist2(vParam2, unk_0xE925E52ACABA4CE7(uParam1[iVar0]->f_1)) > (60f * 60f) || func_6(13)) || func_6(14))
		{
			func_29(&(uParam1[iVar0]->f_1));
			uParam1[iVar0]->f_1 = 0;
			uParam1[iVar0]->f_10 = 0;
		}
	}
	return 0;
}

void func_29(var uParam0)
{
	if (unk_0x762119754C50557A(*uParam0))
	{
		unk_0x40B7230FD4C59AA2(*uParam0);
	}
}

void func_30(var uParam0, var uParam1, int iParam2)
{
	iVar0 = (func_24(*uParam0) + iParam2);
	func_29(&(uParam1[iParam2]->f_1));
	func_42(&(uParam1[iParam2]->f_2));
	uParam1[iParam2]->f_1 = 0;
	uParam1[iParam2]->f_10 = 0;
	func_41(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_40(*uParam0, iParam2, 1);
	}
	unk_0x5E858A00EAFA5B24(0, 200, 250);
	unk_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_39(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_36(&(uParam0->f_1));
	}
	func_33();
	unk_0x9EA96DA1925F0CA2(iVar0);
	func_32(1, 0);
	func_31();
	uParam0->f_11 = 1;
}

int func_31()
{
	if (func_14(0))
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

void func_32(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_33()
{
	iVar3 = 0;
	unk_0x6FB46C25CCB7E6D5(func_35(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_34(18, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_35(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_34(19, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_35(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_34(20, iVar0);
	}
	iVar2 = ((func_26(0) + func_26(1)) + func_26(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xCDC520E5E48E63D9(1831962997, iVar3, 1);
}

int func_34(int iParam0, int iParam1)
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

int func_35(int iParam0)
{
	if (iParam0 == 3)
	{
		return -375571184;
	}
	if (iParam0 == 1)
	{
		return -2044299740;
	}
	if (iParam0 == 0)
	{
		return 86701099;
	}
	if (iParam0 == 5)
	{
		return 997122226;
	}
	return -84877385;
}

void func_36(var uParam0)
{
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_47(uParam0, iVar0))
		{
			iVar1++;
			func_38((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_37(168, 0);
	}
}

void func_37(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_38(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_23();
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

void func_39(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_47(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_38((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_37(168, 0);
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_122), iParam1);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_10044.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_10044.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_125), iParam1);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_10044.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_10044.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(iParam0, iParam1);
		}
		else
		{
			unk_0x0674E58A79778E99(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(iParam0->f_1), (iParam1 - 32));
	}
}

void func_42(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, false);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_43(int iParam0)
{
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	if (func_44(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == 771711535 || iVar1 == -1066334226)
			{
				if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0xE925E52ACABA4CE7(iParam0)) < (5f * 5f) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x41486C7390D3EBBF(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_44(int iParam0)
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

void func_45(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!uParam0->f_10)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_6(13) && !func_6(14))
			{
				if (!unk_0x762119754C50557A(uParam0->f_1))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x523BCC9DC80CD82F(iParam1);
						while (!unk_0xB87F6CF6E5628C67(iParam1))
						{
							unk_0x523BCC9DC80CD82F(iParam1);
							wait(0);
						}
						if (bParam3)
						{
							func_46(uParam0->f_3);
						}
						unk_0x536F1BE96C726C4B(uParam0->f_3, 2,5f, 0, 0, 0, false);
						if (bParam4)
						{
							unk_0x5D96D8530B3D0904(&iVar0, 1);
							uParam0->f_1 = unk_0x2D7B5CDDF12654D2(738282662, uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iVar0, 3);
							unk_0x5D96D8530B3D0904(&iVar0, 4);
							unk_0x5D96D8530B3D0904(&iVar0, 8);
							unk_0x5D96D8530B3D0904(&iVar0, 1);
							uParam0->f_1 = unk_0xA6FF0828D17CF374(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						unk_0x71199B01895C6202(iParam1);
					}
				}
			}
			if (unk_0x762119754C50557A(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_46(vector3 vParam0)
{
	iVar0 = unk_0xFBD08BECC9B87937(vParam0);
	if (unk_0x31609A585163CBAC(iVar0))
	{
		unk_0x0007C2367F4F23F3(iVar0);
		while (!unk_0xBD307E66C0669BFC(iVar0))
		{
			wait(0);
		}
		wait(0);
		unk_0x25BB71BA267FE042(iVar0);
	}
}

bool func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1, (iParam1 - 32));
}

bool func_48(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_50(&(uParam0->f_1), iParam2, iParam3);
}

void func_50(int iParam0, var uParam1, var uParam2)
{
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_3)
	{
		if (func_20((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_41(iParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_52()
{
	iLocal_607 = 0;
	Global_111638.f_10044.f_125.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_55[iVar0].f_3 = { func_53(iVar0, 0) };
		Local_55[iVar0].f_10 = 0;
		iVar0++;
	}
	Local_55[0].f_9 = 179,4746f;
	Local_55[1].f_9 = 198f;
	Local_55[2].f_9 = 104f;
	Local_55[3].f_9 = 321,5f;
	Local_55[4].f_9 = 256,25f;
	Local_55[5].f_9 = 286,5f;
	Local_55[6].f_9 = 0f;
	Local_55[6].f_6 = { 0f, 0f, 1f };
	Local_55[7].f_9 = -165,6051f;
	Local_55[8].f_9 = 91,5f;
	Local_55[9].f_9 = 116f;
	Local_55[10].f_9 = 15f;
	Local_55[11].f_9 = 305,5f;
	Local_55[12].f_9 = 0f;
	Local_55[13].f_9 = 95f;
	Local_55[14].f_9 = 40f;
	Local_55[15].f_9 = 40f;
	Local_55[16].f_9 = 40f;
	Local_55[17].f_9 = 40f;
	Local_55[18].f_9 = 40f;
	Local_55[19].f_9 = 40f;
	Local_55[20].f_9 = 40f;
	Local_55[21].f_6 = { 90f, 0f, 57f };
	Local_55[22].f_9 = 40f;
	Local_55[23].f_9 = 40f;
	Local_55[24].f_9 = 40f;
	Local_55[25].f_9 = 40f;
	Local_55[26].f_9 = 40f;
	Local_55[27].f_9 = 40f;
	Local_55[28].f_9 = 40f;
	Local_55[29].f_9 = 40f;
	Local_55[29].f_6 = { -24,35f, 15,74f, 14,31f };
	Local_55[30].f_9 = 40f;
	Local_55[31].f_9 = 40f;
	Local_55[32].f_9 = 40f;
	Local_55[33].f_9 = 40f;
	Local_55[34].f_6 = { 0f, 0f, -15f };
	Local_55[35].f_9 = 40f;
	Local_55[36].f_9 = 40f;
	Local_55[37].f_9 = 40f;
	Local_55[38].f_9 = 40f;
	Local_55[38].f_6 = { 20,18f, -0,87f, 20,46f };
	Local_55[39].f_6 = { 0f, 0f, -4,39f };
	Local_55[40].f_9 = 40f;
	Local_55[41].f_9 = 80f;
	Local_55[42].f_9 = 198f;
	Local_55[43].f_9 = 198f;
	Local_55[44].f_9 = 198f;
	Local_55[45].f_9 = 198f;
	Local_55[46].f_9 = 198f;
	Local_55[47].f_9 = 198f;
	Local_55[48].f_9 = 198f;
	Local_55[49].f_9 = 198f;
}

Vector3 func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495,9f, 12,9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606,8925f, -3250,188f, 5,06951f;
			}
			else
			{
				return 634,5865f, -3232,79f, -16,5774f;
			}
			break;
		
		case 2:
			return 1590,6f, -2810,174f, 3,4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327,99f, -2757,61f, 4,99f;
			}
			else
			{
				return 338,4039f, -2762,106f, 42,6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134,422f, -2607,024f, 14,77071f;
			}
			else
			{
				return 1133,688f, -2605,073f, 14,9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368,9316f, -2118,533f, 15,40341f;
			}
			else
			{
				return 369,945f, -2116,756f, 16,1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741,82f, -1623,85f, 111,41f;
			}
			else
			{
				return 1742,024f, -1618,777f, 111,8313f;
			}
			break;
		
		case 7:
			return 287,7294f, -1444,4f, 45,5095f;
			break;
		
		case 8:
			return 17,5926f, -1213,207f, 28,3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910,0172f, -1147,44f, 1,06785f;
			}
			else
			{
				return -900,3597f, -1165,551f, 31,8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237,728f, -1099,15f, 37,52579f;
			}
			else
			{
				return 1231,973f, -1102,308f, 34,4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87,69075f, 810,3736f, 210,1258f;
			}
			else
			{
				return 81,2213f, 814,0283f, 213,2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900,951f, 1389,582f, 218,1509f;
			}
			else
			{
				return -1907,515f, 1388,69f, 217,9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467,369f, -730,7552f, 26,36373f;
			}
			else
			{
				return 469,8529f, -730,8f, 26,3985f;
			}
			break;
		
		case 14:
			return 202,1081f, -569,7198f, 128,18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163,0531f, -566,3394f, 21,029f;
			}
			else
			{
				return 159,39f, -563,82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183,152f, -518,5386f, 38,53018f;
			}
			else
			{
				return -1182,538f, -525,5859f, 39,9114f;
			}
			break;
		
		case 17:
			return -228,0476f, -236,4184f, 49,1361f;
			break;
		
		case 18:
			return -407,7026f, -151,7918f, 63,5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169,397f, -56,76701f, 44,45705f;
			}
			else
			{
				return -1175,488f, -65,4649f, 44,6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679,056f, 39,44059f, 160,7736f;
			}
			else
			{
				return 1684,664f, 40,7142f, 153,4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964,25f, 553,68f, 160,72f;
			}
			else
			{
				return 1965,58f, 555,99f, 160,79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24,21706f, 637,1212f, 206,3897f;
			}
			else
			{
				return 22,4492f, 638,8155f, 189,6085f;
			}
			break;
		
		case 23:
			return 2901,204f, 796,1192f, 3,3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531,895f, 870,3203f, 180,6775f;
			}
			else
			{
				return -1529,722f, 871,4257f, 180,6421f;
			}
			break;
		
		case 25:
			return -404,3191f, 1100,889f, 331,535f;
			break;
		
		case 26:
			return -2809,354f, 1449,643f, 99,928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			else
			{
				return 3144,045f, 2184,413f, -5,2961f;
			}
			break;
		
		case 28:
			return 815,7574f, 1850,879f, 120,1796f;
			break;
		
		case 29:
			return -1944,24f, 1941,07f, 162,8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452,23f, 2127,41f, 42,84f;
			}
			else
			{
				return -1436,87f, 2130,22f, 26,78f;
			}
			break;
		
		case 31:
			return 1367,413f, 2180,632f, 96,6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170,1652f, 2217,637f, 89,30811f;
			}
			else
			{
				return 172,1426f, 2220,131f, 89,7842f;
			}
			break;
		
		case 33:
			return 889,3209f, 2870,052f, 55,2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980,2f, 2914,79f, 45,48f;
			}
			else
			{
				return 1963,55f, 2922,81f, 57,76f;
			}
			break;
		
		case 35:
			return -390,384f, 2963,26f, 18,2713f;
			break;
		
		case 36:
			return 71,6642f, 3279,368f, 30,3918f;
			break;
		
		case 37:
			return 1924,186f, 3471,256f, 50,3238f;
			break;
		
		case 38:
			return -583,1569f, 3580,375f, 266,2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514,302f, 3789,519f, 52,077f;
			}
			else
			{
				return 2516,98f, 3789,35f, 53,79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517,613f, 3803,926f, 30,95605f;
			}
			else
			{
				return 1486,047f, 3857,217f, 22,2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530,2739f, 4474,358f, 59,45993f;
			}
			else
			{
				return -528,8246f, 4440,644f, 31,7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815,055f, 4447,343f, 2,06631f;
			}
			else
			{
				return 3820,813f, 4441,683f, 1,8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946,95f, 4584,36f, 56,06f;
			}
			else
			{
				return -1943,055f, 4585,194f, 46,6362f;
			}
			break;
		
		case 44:
			return 2437,545f, 4779,959f, 33,5101f;
			break;
		
		case 45:
			return -1441,495f, 5414,888f, 23,3f;
			break;
		
		case 46:
			return 2196,251f, 5599,034f, 52,7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503,95f, 5673,55f, 51,24f;
			}
			else
			{
				return -503,2193f, 5665,61f, 48,8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378,4192f, 6080,782f, 30,44296f;
			}
			else
			{
				return -381,291f, 6086,949f, 38,6147f;
			}
			break;
		
		case 49:
			return 440,9546f, 6459,642f, 27,7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_54(int iParam0)
{
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_55()
{
	Global_111638.f_10044.f_125.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		func_42(&(Local_55[iVar0].f_2));
		func_29(&(Local_55[iVar0].f_1));
		iVar0++;
	}
	if (func_60(&(Local_42.f_1)) || func_15(107) == 1)
	{
		func_59(107, 1);
		func_57();
		func_56(14);
	}
	unk_0x71199B01895C6202(Local_42.f_7);
	unk_0x10FAF14A60A0DBE1();
}

int func_56(int iParam0)
{
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_57()
{
	iVar0 = func_58(63);
	Global_2414418[iVar0] = 63;
	StringCopy(&(Global_2414418[iVar0].f_18[0]), "", 64);
}

int func_58(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_59(int iParam0, int iParam1)
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

bool func_60(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

