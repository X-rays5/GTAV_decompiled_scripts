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
	iLocal_608 = 4;
	sLocal_609 = "id1_11_tunnel6_int";
	if (unk_0x2EBF608FFE6CA406(210))
	{
		func_75();
	}
	if (unk_0x8A22C4C08282BF26(899425898) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_74(12);
	if (func_73(106) == 1)
	{
		func_72(12);
		func_69(287, 0, 0);
		func_68(106, 1);
		func_67(168, 0);
		func_75();
	}
	while (true)
	{
		wait(0);
		func_66(unk_0x16F2683693E537C9());
		switch (iLocal_42)
		{
			case 0:
				func_21();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()
{
	switch (iLocal_43)
	{
		case 0:
			if (unk_0x8A22C4C08282BF26(1832807115) > 0)
			{
				iLocal_43 = 2;
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					if (!func_20())
					{
						if (((!unk_0x1EE04CEA36EF313B() && !func_14()) && !func_13()) && !func_12())
						{
							iLocal_619 = 0;
							iLocal_613 = 0;
							sLocal_614[0] = "LETTERS_PAGE_ONE";
							sLocal_614[1] = "LETTERS_PAGE_TWO";
							sLocal_614[2] = "LETTERS_PAGE_THREE";
							sLocal_614[3] = "LETTERS_PAGE_FOUR";
							iLocal_612 = unk_0xB01F55A0FD1CFD49("LETTER_SCRAPS");
							while (!unk_0x83D8570832F172A7(iLocal_612))
							{
								wait(0);
							}
							unk_0x7E60C62A7CE58FC8(iLocal_612, "SET_LETTER_TEXT");
							func_11(sLocal_614[0]);
							unk_0x7E60D21B163E9D56();
							unk_0x5DD950F92F816F03(1);
							func_7(1);
							func_6(1, 1, 1, 0);
							unk_0x5827FCE0CA6A6269("LETTERS_HELP2", 0);
							unk_0x21387C9EECC2B220(1);
							unk_0xBFE31971E49FA500(false);
							iLocal_43 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			func_3(0);
			unk_0x857E3CE01DEA2D26();
			unk_0x5DD950F92F816F03(1);
			unk_0xD9ACBBA59FD5A09E(1);
			if (iLocal_613 < 4)
			{
				if (!iLocal_619)
				{
					if (unk_0x06F8112AA79C53D9(2, 190))
					{
						if (iLocal_613 >= 0 && iLocal_613 < 3)
						{
							iLocal_613++;
							unk_0x7E60C62A7CE58FC8(iLocal_612, "SET_LETTER_TEXT");
							func_11(sLocal_614[iLocal_613]);
							unk_0x7E60D21B163E9D56();
						}
						iLocal_619 = 1;
					}
					else if (unk_0x06F8112AA79C53D9(2, 189))
					{
						if (iLocal_613 > 0 && iLocal_613 < 4)
						{
							iLocal_613 = (iLocal_613 - 1);
							unk_0x7E60C62A7CE58FC8(iLocal_612, "SET_LETTER_TEXT");
							func_11(sLocal_614[iLocal_613]);
							unk_0x7E60D21B163E9D56();
						}
						iLocal_619 = 1;
					}
					else if (unk_0xB9132A06AE472728(2, 202))
					{
						iLocal_43 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_619 = 0;
				}
				unk_0x6567AE843FADBA94(iLocal_612, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_43 = 2;
			}
			break;
		
		case 2:
			unk_0xBFE31971E49FA500(true);
			unk_0xA37A90C62806D848(1);
			func_6(0, 1, 1, 0);
			func_72(12);
			func_75();
			break;
	}
}

int func_2()
{
	if ((unk_0x06F8112AA79C53D9(2, 190) || unk_0x06F8112AA79C53D9(2, 189)) || unk_0x06F8112AA79C53D9(2, 202))
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	if (func_5())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_4(0))
		{
			func_7(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

int func_4(int iParam0)
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

bool func_5()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_7(int iParam0)
{
	if (func_5())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_10())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19486.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_4(0))
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

bool func_10()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

void func_11(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_12()
{
	return Global_1315661;
}

int func_13()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] != 0)
		{
			Global_1315662 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_14()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		if (func_15(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(int iParam0)
{
	iVar0 = iParam0;
	if (!unk_0x7F8A39872A07D2CE(&(Global_110290[iParam0]), "") && !unk_0x2EBF5002C6B6A06C(&(Global_110290[iParam0])))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_110290[iParam0].f_27, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_110290[iParam0].f_27, 2))
			{
				return func_19(iVar0, &(Global_110290[iParam0]), &(Global_110290[iParam0].f_4), Global_110290[iParam0].f_20);
			}
			else
			{
				return func_18(iVar0, &(Global_110290[iParam0]), &(Global_110290[iParam0].f_4));
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_110290[iParam0].f_27, 2))
		{
			return func_17(iVar0, &(Global_110290[iParam0]), Global_110290[iParam0].f_20);
		}
		else
		{
			return func_16(iVar0, &(Global_110290[iParam0]));
		}
	}
	return 0;
}

bool func_16(int iParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam1);
	return unk_0xE3789B9938DCEAE8((1 + iParam0));
}

bool func_17(int iParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8((1 + iParam0));
}

bool func_18(int iParam0, char* sParam1, char* sParam2)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	return unk_0xE3789B9938DCEAE8((1 + iParam0));
}

bool func_19(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8((1 + iParam0));
}

int func_20()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

void func_21()
{
	switch (iLocal_43)
	{
		case 0:
			func_64();
			func_63(&Local_44, 1, -2122188986, "LETTERS_COLLECT");
			func_61(&Local_44, -2044299740, 705, 50);
			iLocal_43 = 1;
			iLocal_621 = 1;
			break;
		
		case 1:
			if (!func_60(14) && !unk_0x757EF87A33649210())
			{
				if (func_23(&Local_44, &Local_57) || uLocal_620)
				{
					iLocal_43 = 2;
				}
				if (Local_44.f_1.f_4 == Local_44.f_1.f_3)
				{
					if (func_73(106) == 0)
					{
						func_68(106, 1);
						func_67(168, 0);
					}
				}
			}
			break;
		
		case 2:
			func_68(106, 1);
			func_67(168, 0);
			func_22(1);
			break;
	}
}

void func_22(int iParam0)
{
	iLocal_42 = iParam0;
	iLocal_43 = 0;
}

int func_23(var uParam0, int iParam1)
{
	bVar5 = (!func_20() && !func_20());
	unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
	vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_59(&(uParam0->f_1), uParam0->f_10);
		if (!iParam1[uParam0->f_10]->f_10)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_10 == 1 || uParam0->f_10 == 5) || uParam0->f_10 == 7) || uParam0->f_10 == 13) || uParam0->f_10 == 18) || uParam0->f_10 == 20) || uParam0->f_10 == 37) || uParam0->f_10 == 42)
				{
					func_57(iParam1[uParam0->f_10], uParam0->f_7, 738282662, 0, 1, 2);
				}
				else if (uParam0->f_10 == iLocal_608)
				{
					func_57(iParam1[uParam0->f_10], uParam0->f_7, 738282662, 0, 1, 2);
					if (unk_0x762119754C50557A(iParam1[uParam0->f_10]->f_1))
					{
						unk_0x201D37E7F281A9D1(iParam1[uParam0->f_10]->f_1, sLocal_609);
					}
				}
				else
				{
					func_57(iParam1[uParam0->f_10], uParam0->f_7, 738282662, 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			if (func_40(uParam0, iParam1, vVar2))
			{
				if (bVar5)
				{
					if (!func_39(33))
					{
						func_36("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_35(33);
					}
				}
			}
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_76882)
		{
			func_24(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 1, &iLocal_610, &iLocal_611, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_24(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)
{
	func_34(0);
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
						unk_0x4D7F4CC43D4D0DE3(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x7E60C62A7CE58FC8(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x7ACC3006A87F8B39(sParam6);
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39(sParam7);
				unk_0x6D99DF8263D35CE5(func_26(iParam3));
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
				else if (!func_25())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_34(1);
						unk_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_25())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_34(1);
						unk_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					unk_0xE17FDF9E3068281B(iParam5);
				}
				func_34(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_25()
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

int func_26(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_33(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_108, func_32(func_33(iParam0), iVar1)))
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
		while (iVar1 < func_33(iParam0))
		{
			iVar2 = (func_31(iParam0) + iVar1);
			if (func_27(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	iVar1 = func_29(iParam0, iParam1);
	uVar2 = func_28(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_28(int iParam0)
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

int func_29(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_30();
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

int func_30()
{
	return Global_1312745;
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_33(int iParam0)
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

void func_34(int iParam0)
{
	if (Global_76889 != iParam0)
	{
		Global_76889 = iParam0;
	}
}

void func_35(int iParam0)
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

void func_36(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_37(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_37(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_38();
	}
}

void func_38()
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

int func_39(int iParam0)
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

int func_40(var uParam0, var uParam1, vector3 vParam2)
{
	iVar0 = uParam0->f_10;
	if (uParam1[iVar0]->f_10)
	{
		if (uParam1[iVar0]->f_1 != 0)
		{
			if (unk_0xEB751B41BC4080D4(uParam1[iVar0]->f_1) || func_55(uParam1[iVar0]->f_1))
			{
				func_42(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0x762119754C50557A(uParam1[iVar0]->f_1))
	{
		if ((vdist2(vParam2, unk_0xE925E52ACABA4CE7(uParam1[iVar0]->f_1)) > (60f * 60f) || func_60(13)) || func_60(14))
		{
			func_41(&(uParam1[iVar0]->f_1));
			uParam1[iVar0]->f_1 = 0;
			uParam1[iVar0]->f_10 = 0;
		}
	}
	return 0;
}

void func_41(var uParam0)
{
	if (unk_0x762119754C50557A(*uParam0))
	{
		unk_0x40B7230FD4C59AA2(*uParam0);
	}
}

void func_42(var uParam0, var uParam1, int iParam2)
{
	iVar0 = (func_31(*uParam0) + iParam2);
	func_41(&(uParam1[iParam2]->f_1));
	func_54(&(uParam1[iParam2]->f_2));
	uParam1[iParam2]->f_1 = 0;
	uParam1[iParam2]->f_10 = 0;
	func_53(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_52(*uParam0, iParam2, 1);
	}
	unk_0x5E858A00EAFA5B24(0, 200, 250);
	unk_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_51(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_49(&(uParam0->f_1));
	}
	func_46();
	unk_0x9EA96DA1925F0CA2(iVar0);
	func_45(1, 0);
	func_43();
	uParam0->f_11 = 1;
}

int func_43()
{
	if (func_44(0))
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

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(-448212099) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_45(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_46()
{
	iVar3 = 0;
	unk_0x6FB46C25CCB7E6D5(func_48(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_47(18, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_48(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_47(19, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_48(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_47(20, iVar0);
	}
	iVar2 = ((func_33(0) + func_33(1)) + func_33(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xCDC520E5E48E63D9(1831962997, iVar3, 1);
}

int func_47(int iParam0, int iParam1)
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

int func_48(int iParam0)
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

void func_49(var uParam0)
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
		if (func_59(uParam0, iVar0))
		{
			iVar1++;
			func_50((uParam0->f_2 + iVar0), 1, -1, 1);
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
		func_67(168, 0);
	}
}

int func_50(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_30();
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

void func_51(var uParam0, int iParam1)
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
	if (func_59(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_50((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_67(168, 0);
	}
}

void func_52(int iParam0, int iParam1, bool bParam2)
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

void func_53(int iParam0, int iParam1, bool bParam2)
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

void func_54(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, false);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_55(int iParam0)
{
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	if (func_56(unk_0x16F2683693E537C9()))
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

int func_56(int iParam0)
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

void func_57(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!uParam0->f_10)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_60(13) && !func_60(14))
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
							func_58(uParam0->f_3);
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

void func_58(vector3 vParam0)
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

bool func_59(var uParam0, int iParam1)
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

bool func_60(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_61(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_62(&(uParam0->f_1), iParam2, iParam3);
}

void func_62(int iParam0, var uParam1, var uParam2)
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
		if (func_27((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_53(iParam0, iVar0, 1);
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

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_64()
{
	Global_111638.f_10044.f_122.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_57[iVar0].f_3 = { func_65(iVar0, 0) };
		Local_57[iVar0].f_10 = 0;
		iVar0++;
	}
	iLocal_610 = 0;
	Local_57[0].f_9 = 179,4746f;
	Local_57[1].f_6 = { 0f, 0f, 198f };
	Local_57[2].f_9 = 104f;
	Local_57[3].f_9 = 321,5f;
	Local_57[4].f_6 = { 0f, 0f, 49f };
	Local_57[5].f_6 = { 0f, 0f, 286,5f };
	Local_57[6].f_9 = 278,0092f;
	Local_57[7].f_6 = { 5,3f, -1801,4f, 15,57f };
	Local_57[8].f_9 = 80,5f;
	Local_57[9].f_9 = 116f;
	Local_57[10].f_9 = 15f;
	Local_57[11].f_9 = 305,5f;
	Local_57[12].f_9 = 0f;
	Local_57[13].f_9 = 95f;
	Local_57[13].f_6 = { -0,91f, -0,03f, -0,81f };
	Local_57[14].f_9 = 40f;
	Local_57[15].f_9 = 40f;
	Local_57[16].f_9 = 40f;
	Local_57[17].f_9 = 90f;
	Local_57[17].f_6 = { -0,55f, 0f, 0,78f };
	Local_57[18].f_6 = { 0f, 0f, 0f };
	Local_57[19].f_9 = 40f;
	Local_57[20].f_6 = { 0f, 2f, 15f };
	Local_57[21].f_9 = 40f;
	Local_57[22].f_9 = 40f;
	Local_57[23].f_9 = 40f;
	Local_57[24].f_9 = 40f;
	Local_57[25].f_9 = 40f;
	Local_57[26].f_9 = 40f;
	Local_57[26].f_6 = { -6f, 10f, 0f };
	Local_57[27].f_9 = 40f;
	Local_57[27].f_6 = { -4,66f, 8,7f, 67,03f };
	Local_57[28].f_9 = 40f;
	Local_57[28].f_6 = { 1,54f, -8,31f, -19,94f };
	Local_57[29].f_9 = 40f;
	Local_57[30].f_9 = 40f;
	Local_57[30].f_6 = { 27,21f, -3,11f, -2,09f };
	Local_57[31].f_9 = 40f;
	Local_57[32].f_9 = 40f;
	Local_57[33].f_9 = 40f;
	Local_57[33].f_6 = { -9,89f, 0,3f, -0,01f };
	Local_57[34].f_9 = 40f;
	Local_57[35].f_9 = 40f;
	Local_57[36].f_9 = 40f;
	Local_57[36].f_6 = { 6,5f, -4,41f, -0,62f };
	Local_57[37].f_6 = { -9f, 5,3f, -2f };
	Local_57[38].f_9 = 40f;
	Local_57[38].f_6 = { -13,32f, -0,57f, -0,15f };
	Local_57[39].f_9 = 40f;
	Local_57[39].f_6 = { 4,71f, -21,26f, -0,06f };
	Local_57[40].f_9 = 40f;
	Local_57[41].f_9 = 80f;
	Local_57[42].f_6 = { -2f, 9f, 1f };
	Local_57[43].f_9 = 198f;
	Local_57[44].f_9 = 198f;
	Local_57[44].f_6 = { 0f, -20f, 0f };
	Local_57[45].f_9 = 198f;
	Local_57[46].f_9 = 198f;
	Local_57[47].f_9 = 198f;
	Local_57[48].f_9 = 198f;
	Local_57[49].f_9 = 198f;
}

Vector3 func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034,274f, -3026,275f, 4,90197f;
			}
			else
			{
				return 1026,705f, -3026,052f, 13,3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040,979f, -2743,509f, 12,94983f;
			}
			else
			{
				return -1048,604f, -2734,218f, 12,8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93,9012f, -2711,314f, 5,01752f;
			}
			else
			{
				return -81,1199f, -2726,511f, 7,74f;
			}
			break;
		
		case 3:
			return -917,6909f, -2527,384f, 22,3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746,45f, -2310,32f, 26,03f;
			}
			else
			{
				return 748,922f, -2298,114f, 19,624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509,742f, -2126,038f, 75,21973f;
			}
			else
			{
				return 1509,099f, -2120,551f, 75,61f;
			}
			break;
		
		case 6:
			return 76,0032f, -1970,475f, 20,1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1,82327f, -1732,614f, 28,29367f;
			}
			else
			{
				return 0,067f, -1734,027f, 30,606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377,766f, -1409,837f, 4,63205f;
			}
			else
			{
				return -1380,491f, -1404,374f, 1,7273f;
			}
			break;
		
		case 9:
			return 2864,808f, -1372,84f, 1,3151f;
			break;
		
		case 10:
			return -1035,812f, -1273,077f, 0,8919f;
			break;
		
		case 11:
			return -1821,136f, -1201,36f, 18,1698f;
			break;
		
		case 12:
			return 643,0116f, -1035,65f, 35,8891f;
			break;
		
		case 13:
			return -119,0616f, -977,2228f, 303,23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243,104f, -507,8057f, 30,10775f;
			}
			else
			{
				return -1238,766f, -506,7138f, 37,6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83,79993f, -431,9302f, 36,55315f;
			}
			else
			{
				return 86,4f, -433,9f, 36f;
			}
			break;
		
		case 16:
			return 1095,953f, -210,4642f, 54,9477f;
			break;
		
		case 17:
			return -1724,522f, -196f, 57,2387f;
			break;
		
		case 18:
			return 265,374f, -199,546f, 60,795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020,475f, 36,55431f, 9,11777f;
			}
			else
			{
				return -3021,4f, 38f, 10,2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347,5277f, 53,37161f, 52,97814f;
			}
			else
			{
				return -347,3f, 54,865f, 53,921f;
			}
			break;
		
		case 21:
			return 1052,248f, 167,611f, 87,7406f;
			break;
		
		case 22:
			return -2303,798f, 217,4301f, 166,6017f;
			break;
		
		case 23:
			return -138,9423f, 868,3885f, 231,6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688,1073f, 1204,671f, 323,3438f;
			}
			else
			{
				return 682,4505f, 1204,928f, 344,3322f;
			}
			break;
		
		case 25:
			return -1548,763f, 1380,173f, 125,3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432,14f, 1598,46f, 355,73f;
			}
			else
			{
				return -432,0034f, 1597,129f, 356,613f;
			}
			break;
		
		case 27:
			return 3081,93f, 1648,29f, 2,42f;
			break;
		
		case 28:
			return -594,38f, 2092f, 130,57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069,213f, 2160,988f, 1,1327f;
			}
			else
			{
				return 3063,583f, 2212,63f, 2,5863f;
			}
			break;
		
		case 30:
			return 180,21f, 2263,83f, 91,87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926,96f, 2445,36f, 49,09f;
			}
			else
			{
				return 929,6946f, 2444,115f, 48,43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380,212f, 2655,176f, 0,832f;
			}
			else
			{
				return -2379,948f, 2656,953f, 1,4906f;
			}
			break;
		
		case 33:
			return -861,38f, 2753,3f, 12,867f;
			break;
		
		case 34:
			return -289,0195f, 2848,853f, 53,331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288,8409f, 2871,912f, 42,6422f;
			}
			else
			{
				return 265,7415f, 2866,416f, 73,19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297,378f, 2988,71f, 40,11787f;
			}
			else
			{
				return 1294,2f, 3001,9f, 57,7f;
			}
			break;
		
		case 37:
			return 1568,65f, 3572,8f, 32,294f;
			break;
		
		case 38:
			return -1608,62f, 4274,25f, 102,95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3,51812f, 4332,451f, 31,21602f;
			}
			else
			{
				return -1,9585f, 4334,787f, 32,3702f;
			}
			break;
		
		case 40:
			return 1336,737f, 4307,2f, 37,1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007,103f, 4836,936f, 268,5488f;
			}
			else
			{
				return -1001,48f, 4851,322f, 273,6112f;
			}
			break;
		
		case 42:
			return 1877,09f, 5078,98f, 50,49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366,099f, 5182,461f, 0,68317f;
			}
			else
			{
				return 3436,453f, 5176,911f, 6,386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576,12f, 5472,24f, 59,28f;
			}
			else
			{
				return -578,8057f, 5470,164f, 59,0295f;
			}
			break;
		
		case 45:
			return 444,6518f, 5571,781f, 780,1888f;
			break;
		
		case 46:
			return -402,9948f, 6319,279f, 31,2256f;
			break;
		
		case 47:
			return 1439,599f, 6335,208f, 22,9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466,109f, 6552,266f, 12,95773f;
			}
			else
			{
				return 1469,632f, 6552,174f, 13,6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66,19278f, 6668,888f, 30,80633f;
			}
			else
			{
				return 66,7136f, 6663,198f, 30,7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_66(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

void func_67(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_68(int iParam0, int iParam1)
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

void func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_50((891 + iParam0), 1, -1, 1);
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
		func_70();
	}
}

void func_70()
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
		func_47(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_71() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_43();
				}
			}
		}
	}
}

int func_71()
{
	return Global_30768;
}

int func_72(int iParam0)
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

int func_73(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_74(int iParam0)
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

void func_75()
{
	unk_0x5DD950F92F816F03(0);
	unk_0xE17FDF9E3068281B(&iLocal_612);
	unk_0x21387C9EECC2B220(0);
	Global_111638.f_10044.f_122.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_57)
	{
		func_54(&(Local_57[iVar0].f_2));
		func_41(&(Local_57[iVar0].f_1));
		Local_57[iVar0].f_1 = 0;
		iVar0++;
	}
	if (func_73(106) == 1)
	{
		func_68(106, 1);
		func_77();
		func_72(12);
	}
	else if (func_76(&(Local_44.f_1)))
	{
		func_68(106, 1);
		func_77();
		func_72(12);
	}
	else
	{
		func_74(12);
	}
	if (iLocal_621)
	{
		unk_0x71199B01895C6202(Local_44.f_7);
	}
	unk_0x10FAF14A60A0DBE1();
}

bool func_76(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

void func_77()
{
	iVar0 = func_78(64);
	Global_2414418[iVar0] = 64;
	StringCopy(&(Global_2414418[iVar0].f_18[0]), "", 64);
}

int func_78(int iParam0)
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

