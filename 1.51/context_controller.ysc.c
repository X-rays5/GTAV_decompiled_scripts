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
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	iLocal_106 = -1;
	if (unk_0x8A22C4C08282BF26(1974937116) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	unk_0xB57F88F0123F4C38();
	iVar0 = 0;
	iVar1 = iVar0;
	settimera(0);
	Global_42345 = 0;
	func_39();
	StringCopy(&Global_42346, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_76622;
	while (true)
	{
		if (Global_76622)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_76622 != iVar8)
		{
			func_25();
			func_39();
			iVar2 = -1;
			iVar8 = Global_76622;
			while (unk_0x991B1F0980C62628())
			{
				wait(2000);
			}
		}
		if (Global_42351)
		{
			if (Global_42353 > -1)
			{
				if (!Global_42151[Global_42353].f_6)
				{
					if (!func_23(Global_42353, 1))
					{
						Global_42353 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_42351)
			{
				if (Global_42353 != iVar2)
				{
					if (func_18(Global_42353))
					{
						func_25();
						if (!Global_42151[iVar2].f_5 && Global_42151[iVar2])
						{
							if (!func_19())
							{
								if (!Global_42151[iVar2].f_7)
								{
									if (!Global_42151[iVar2].f_6)
									{
										if (!Global_42151[iVar2].f_12)
										{
											func_17(Global_42151[iVar2].f_8, Global_42151[iVar2].f_3);
										}
										else
										{
											func_16(Global_42151[iVar2].f_8, Global_42151[iVar2].f_13, Global_42151[iVar2].f_3, Global_42151[iVar2].f_30);
										}
										Global_42353 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0x6957460DC85EB2CC(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0xBFC0798A6E3417F9(2, 51))
						{
							Global_42151[iVar2].f_4 = 1;
							Global_42151[iVar2].f_29 = 0;
							iVar7 = Global_42151[iVar2].f_1;
							iVar0 = 1;
							Global_42344 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0x28072FDD60CE3A6E(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 1))
						{
							if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0))
							{
								if (unk_0x718E6F84AA2510BB(0, 101))
								{
									bVar5 = true;
									unk_0x38C3A68D7861DCFD(0, 101, 1);
								}
								if (unk_0x718E6F84AA2510BB(0, 74))
								{
									bVar4 = true;
									unk_0x38C3A68D7861DCFD(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0xEAB026E686C0D991(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0xEAB026E686C0D991(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (timera() > 5000)
					{
						Global_42151[iVar2].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_42151[iVar2].f_1)
					{
						iVar0 = 0;
					}
					if (Global_42151[iVar2].f_7 || Global_42151[iVar2] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_42344)
				{
					func_25();
				}
				if (unk_0xBFC0798A6E3417F9(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_42151[iVar2].f_29 = 0;
					}
				}
				if (Global_42345)
				{
					Global_42345 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_42151[iVar2].f_4 || Global_42151[iVar2].f_7))
					{
						Global_42345 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_42151[iVar2].f_7 || Global_42151[iVar2] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0x38C3A68D7861DCFD(0, 46, 1);
			unk_0x38C3A68D7861DCFD(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_42350 = 0;
		Global_42351 = 0;
		func_1();
		wait(0);
	}
}

void func_1()
{
	if (!bLocal_80)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_103 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_81)
	{
		if (bLocal_82)
		{
			unk_0x1E3A202C24F57DA6(0);
		}
		unk_0xB6A2CAEFEE28197D(&Local_83);
		if (bLocal_82)
		{
			unk_0xD06AC7C87A34A6AD(&Local_87);
		}
		else
		{
			unk_0x6B012227B3921E18(&Global_42346);
			unk_0x6B012227B3921E18(&Local_87);
		}
		unk_0xBAB71DDCAEBC7FDD(0, 0, bVar0, 50);
	}
	else
	{
		unk_0xB6A2CAEFEE28197D(&Local_83);
		unk_0x6B012227B3921E18(&Global_42346);
		unk_0xBAB71DDCAEBC7FDD(0, 0, bVar0, 50);
	}
	switch (iLocal_103)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0xD803B885F5E47A62(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_8() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1628237[iParam0].f_11 != func_8())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0] && Global_42151[iVar0].f_4)
		{
			if (Global_42151[iVar0].f_31 != 0)
			{
				if (!unk_0x1727A44C562FBED2(Global_42151[iVar0].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_42151[iVar0] = 0;
					Global_42151[iVar0].f_31 = 0;
					Global_42151[iVar0] = 0;
					Global_42151[iVar0].f_4 = 0;
					Global_42151[iVar0].f_5 = 0;
					Global_42151[iVar0].f_2 = 0;
					Global_42151[iVar0].f_7 = 0;
					Global_42151[iVar0].f_6 = 0;
					Global_42151[iVar0].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_42353 != -1 || bLocal_80)
	{
		bLocal_80 = false;
		Global_42353 = -1;
	}
}

void func_12()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_7)
		{
			if (iVar0 == Global_42353)
			{
				func_25();
			}
			Global_42151[iVar0].f_31 = 0;
			Global_42151[iVar0] = 0;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = 0;
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_6 = 0;
			Global_42151[iVar0].f_1 = -1;
			Global_42151[iVar0].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_42151[iParam0].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1)
		{
			if (Global_42151[iVar0].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			if (Global_42151[iVar0].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_42151[iVar0].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param4, var uParam20, var uParam21)
{
	Local_83 = { Param0 };
	Local_87 = { Param4 };
	bLocal_80 = true;
	bLocal_81 = true;
	iLocal_103 = uParam20;
	bLocal_82 = uParam21;
}

void func_17(struct<4> Param0, var uParam4)
{
	Local_83 = { Param0 };
	bLocal_80 = true;
	bLocal_81 = false;
	iLocal_103 = uParam4;
}

int func_18(int iParam0)
{
	if (Global_95673 && Global_95672)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_80)
		{
			return 1;
		}
	}
	if (unk_0xFEBC1E4EC9E001F0() && !unk_0x22EA6735D72412D2())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_73825)
	{
		return 1;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 1;
	}
	if (Global_42350)
	{
		return 1;
	}
	if (unk_0x2F1FB0453B36C270(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
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

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_22(int iParam0)
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

int func_23(int iParam0, int iParam1)
{
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_42151[iVar0].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_42151[iVar0].f_12)
	{
		unk_0xCECE25C7ECD44603(&(Global_42151[iVar0].f_8));
		unk_0x6B012227B3921E18(&Global_42346);
		iVar1 = unk_0xE3789B9938DCEAE8(0);
	}
	else
	{
		unk_0xCECE25C7ECD44603(&(Global_42151[iVar0].f_8));
		unk_0x6B012227B3921E18(&Global_42346);
		if (Global_42151[iVar0].f_30)
		{
			unk_0xD06AC7C87A34A6AD(&(Global_42151[iVar0].f_13));
		}
		else
		{
			unk_0x6B012227B3921E18(&(Global_42151[iVar0].f_13));
		}
		iVar1 = unk_0xE3789B9938DCEAE8(0);
	}
	return iVar1;
}

int func_24(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_42353 = -1;
}

void func_26()
{
	if (!unk_0x991B1F0980C62628() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_2450632.f_684.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	Global_73938 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_73938)
	{
		case 3:
			Global_73936 = 0;
			break;
		
		case 4:
			Global_73936 = 3;
			break;
	}
	if (unk_0x8A22C4C08282BF26(632911429) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(1779901043) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_76622 && func_29())
	{
		return 0;
	}
	if (!Global_76622 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0x1FBF08B001C4788A("appSecuroServ"))
		{
			unk_0x92DCE5C81176D2B4("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x1FBF08B001C4788A("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4592);
		unk_0x5E8C29AE121DF1C7("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0x1FBF08B001C4788A("appBikerBusiness"))
		{
			unk_0x92DCE5C81176D2B4("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x1FBF08B001C4788A("appBikerBusiness"))
		{
			wait(0);
		}
		start_new_script("appBikerBusiness", 4592);
		unk_0x5E8C29AE121DF1C7("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0x1FBF08B001C4788A("appImportExport"))
		{
			unk_0x92DCE5C81176D2B4("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x1FBF08B001C4788A("appImportExport"))
		{
			wait(0);
		}
		start_new_script("appImportExport", 4592);
		unk_0x5E8C29AE121DF1C7("appImportExport");
		return 1;
	}
	if (!unk_0x1FBF08B001C4788A("appInternet"))
	{
		unk_0x92DCE5C81176D2B4("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0x1FBF08B001C4788A("appInternet"))
	{
		wait(0);
	}
	start_new_script("appInternet", 4592);
	unk_0x5E8C29AE121DF1C7("appInternet");
	return 1;
}

var func_28()
{
	return Global_73826;
}

var func_29()
{
	return Global_1662476;
}

void func_30()
{
	Global_2450632.f_684.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2450632.f_684.f_28 && unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_2450632.f_684.f_31);
	}
	return Global_2450632.f_684.f_28;
}

bool func_32()
{
	return Global_73825;
}

void func_33()
{
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_58686[iVar1] < 0)
		{
			Global_58686[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xCDC520E5E48E63D9(52740893, iVar0, 1);
			break;
		
		case 1:
			unk_0xCDC520E5E48E63D9(1153264002, iVar0, 1);
			break;
		
		case 2:
			unk_0xCDC520E5E48E63D9(-1921710979, iVar0, 1);
			break;
	}
}

void func_35()
{
	if (Global_1573306 != -1)
	{
		Var0[0] = Global_1573307[0];
		Var0[0].f_1 = Global_1573307[1];
		Var0[0].f_2 = Global_1573307[2];
		Var0[0].f_3 = Global_1573307[3];
		Var0[0].f_4 = Global_1573307[4];
		Var0[0].f_5 = Global_1573307[5];
		Var0[0].f_6 = Global_1573307[6];
		Var0[0].f_7 = Global_1573307[7];
		Var0[0].f_8 = Global_1573307[8];
		Var0[0].f_9 = Global_1573307[9];
		Var0[0].f_10 = Global_1573307[10];
		Var0[0].f_11 = Global_1573307[11];
		Var0[0].f_12 = Global_1573307[12];
		if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
		{
			if (!iLocal_104)
			{
				if (unk_0x341C9B6377CAD883(&(Var0[0])))
				{
					iLocal_104 = 1;
				}
			}
			if (iLocal_104)
			{
				if (unk_0xE13B4B9D87E527E9())
				{
				}
				else
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(&(Global_2097152[func_38()].f_10753.f_18[Global_1573306]), unk_0xD7926DA4168DF7E1(&(Var0[0])), 24);
					}
					func_37();
				}
			}
		}
		else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
		{
			if (func_36(Var0[0]))
			{
				switch (iLocal_105)
				{
					case 0:
						iLocal_106 = unk_0x3F4BBF0887AB451C(&Var0, 1);
						if (iLocal_106 >= 0)
						{
							iLocal_105++;
						}
						break;
					
					case 1:
						iVar31 = unk_0x1C71EF085035D439(iLocal_106, &Var14, 1);
						switch (iVar31)
						{
							case -1:
								func_37();
								break;
							
							case 0:
								MemCopy(&(Global_2097152[func_38()].f_10753.f_18[Global_1573306]), {Var14[0]}, 6);
								func_37();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_37();
			}
		}
		else
		{
			if (func_36(Var0[0]))
			{
				StringCopy(&(Global_2097152[func_38()].f_10753.f_18[Global_1573306]), unk_0x8F1B0D2ECDA568E2(&(Var0[0])), 24);
			}
			func_37();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

void func_37()
{
	Global_1573306 = -1;
	iLocal_104 = 0;
	iLocal_106 = -1;
	iLocal_105 = 0;
}

int func_38()
{
	iVar0 = 0;
	return iVar0;
}

void func_39()
{
	Global_42344 = 0;
	Global_42350 = 0;
	Global_42351 = 0;
	Global_42352 = 1;
	Global_42353 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_42151[iVar0] = 0;
		iVar0++;
	}
}

