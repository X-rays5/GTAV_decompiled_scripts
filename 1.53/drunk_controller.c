#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_26 = 0f;
#endregion

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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	unk_0xDB4E5F36ED3505EE();
	if (unk_0xED06FD5709A59F02(32))
	{
		func_32();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_32();
		}
	}
}

int func_1()
{
	if (Global_42767)
	{
		return 1;
	}
	if (unk_0x40397A9A17EEC1C5(Global_42768))
	{
		return 1;
	}
	if (unk_0x7B70881748D166CD(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_42560 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_42767)
	{
		return;
	}
	iVar1 = unk_0x578C4EF320340AF7();
	if (Global_42769 > iVar1 || Global_42769 == -1)
	{
		if (unk_0x9CC4D06F5338CA6B())
		{
			return;
		}
		iVar2 = func_14();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_9();
		if (Global_42772 != Global_42773)
		{
			fVar6 = (Global_42773 - Global_42772);
			Global_42772 = (Global_42772 + (fVar6 * 0.1f));
			if (unk_0x0D77CDCF403AEBD2((Global_42772 - Global_42773)) < 0.01f)
			{
				Global_42772 = Global_42773;
			}
		}
		if (!unk_0x5041EC0E6E850F88() && !func_8(unk_0x460153A63B9477BC()))
		{
			unk_0xA900602AAE69404D("DRUNK_SHAKE", ((Global_42772 * fVar3) * fVar5));
		}
		if ((unk_0x578C4EF320340AF7() % 100) == 0)
		{
			if (Global_42769 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
				{
					fLocal_26 = fVar3;
				}
				unk_0x582443322A476671(((Global_42772 * fVar3) * fVar5));
				unk_0x4BBB9B3A0DA8C277(((Global_42771 * fVar3) * fVar5));
				fLocal_26 = fVar3;
			}
		}
		if (((Global_42771 * fVar3) * fVar5) < 1f)
		{
			unk_0x4DC5556A84F500ED(((Global_42771 * fVar3) * fVar5));
		}
		else
		{
			unk_0x4DC5556A84F500ED(1f);
		}
		if (!unk_0x9BE59D9C27C29FBC())
		{
			unk_0xF313B9A839AE99A8("DRUNK_SHAKE", (((Global_42772 * Global_42766) * fVar3) * fVar5));
		}
		unk_0x79395D98B1E002B5((((Global_42772 * Global_42766) * fVar3) * fVar5));
		if (unk_0x40397A9A17EEC1C5(Global_42768))
		{
			if (unk_0xD78C6D4D8984DD52(Global_42768))
			{
				unk_0xE5BEF932CBA74554(Global_42768, ((Global_42772 * fVar3) * fVar5));
			}
		}
		if (!unk_0x7BCC91F3C1CF24E8(&Global_42795) && !unk_0x7BCC91F3C1CF24E8(&Global_42779))
		{
			unk_0x17E478571720218F(&Global_42779);
			StringCopy(&Global_42795, "", 16);
		}
		unk_0xE94F4428D732FD15();
		if (Global_42774 > 0f)
		{
			if (fLocal_16 != Global_42774)
			{
				if (unk_0x7E1FC5070D7D65B1() != -1)
				{
				}
				else if (!unk_0x874E923C4E267964())
				{
					unk_0xCFB824D5E6FE8614(&Global_42775, 15f);
					fLocal_16 = Global_42774;
				}
			}
			else
			{
				if (unk_0x7E1FC5070D7D65B1() != -1 && unk_0x927B553F2D633AA5() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0x7847DF998CE21D7D(2);
				iVar7 = (Global_42769 - iVar1);
				if (iVar7 <= (Global_42770 / 2) && Global_42769 != -1)
				{
					bVar8 = false;
					if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						if (unk_0xF282AA6FECA1EF23(unk_0x9B0761B4C3EB8BC7()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0x9B0761B4C3EB8BC7()))
					{
						Global_42769 += 1000;
					}
					else if (bVar8)
					{
						Global_42769 += 1000;
					}
					else if (unk_0x7E1FC5070D7D65B1() != -1)
					{
						Global_42769 += 1000;
					}
					else if (func_5())
					{
						Global_42769 += 1000;
					}
					else
					{
						if (unk_0x927B553F2D633AA5() != -1)
						{
							unk_0xC8A513748696CC5A((SYSTEM::TO_FLOAT((Global_42770 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_42774 = 0f;
						StringCopy(&Global_42775, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
{
	unk_0x4BBB9B3A0DA8C277(0f);
	unk_0x4DC5556A84F500ED(0f);
	unk_0x582443322A476671(0f);
	unk_0x99E4391EBF519614(1);
	unk_0x79395D98B1E002B5(0f);
	unk_0xDEF12101C8B41A5E(1);
	unk_0x7847DF998CE21D7D(0);
	if (unk_0x306BF588BD8151E8("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xFA07F8BEBDAAFBA8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x7BCC91F3C1CF24E8(&Global_42779))
	{
		if (unk_0x306BF588BD8151E8(&Global_42779))
		{
			unk_0xFA07F8BEBDAAFBA8(&Global_42779);
		}
	}
	if (unk_0x40397A9A17EEC1C5(Global_42768))
	{
		if (unk_0xD78C6D4D8984DD52(Global_42768))
		{
			unk_0xE5BEF932CBA74554(Global_42768, 0f);
			unk_0x67E7C2B137175486(Global_42768, 1);
		}
	}
	if (unk_0x8520BA0B467C93DA())
	{
		unk_0xAE57C4C2D11A9FFF(0);
	}
	if (bParam0)
	{
		if (unk_0x927B553F2D633AA5() != -1 || unk_0x7E1FC5070D7D65B1() != -1)
		{
			unk_0x8F2EB8BCB5CCE8D8();
		}
		else if (unk_0x9CC4D06F5338CA6B())
		{
			unk_0x8F2EB8BCB5CCE8D8();
		}
	}
	Global_42774 = 0f;
	StringCopy(&Global_42775, "", 16);
	StringCopy(&Global_42779, "", 64);
	StringCopy(&Global_42795, "", 16);
	func_4();
}

void func_4()
{
	Global_42767 = 0;
	Global_42768 = 0;
	Global_42769 = 0;
	Global_42770 = 30000;
	Global_42771 = 0f;
	Global_42773 = 0f;
	Global_42772 = 0f;
	Global_42774 = 0f;
	StringCopy(&Global_42775, "", 16);
}

bool func_5()
{
	return Global_2516796;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_8(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_3, 13);
}

float func_9()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_13(unk_0x9B0761B4C3EB8BC7());
	iVar2 = func_10(unk_0x9B0761B4C3EB8BC7());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42588[iVar1 /*5*/].f_4;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42588[iVar1 /*5*/].f_3;
}

float func_14()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x578C4EF320340AF7();
	fVar1 = 1f;
	iVar2 = (Global_42769 - iVar0);
	if (iVar2 <= Global_42770)
	{
		if (Global_42769 != -1)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_42770));
		}
	}
	return fVar1;
}

void func_15()
{
	if (Global_42562[iLocal_15 /*5*/] == 0)
	{
		func_16(iLocal_15);
	}
}

void func_16(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0xA59F96B50B97E63C(Global_42562[iParam0 /*5*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}
	if (func_6(Global_42562[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}
	if (!unk_0x8DC2EFD1CECAA468("drunk"))
	{
		unk_0xBE9B3870B1B370E3("drunk");
		return;
	}
	iVar0 = func_18();
	if (iVar0 == -1)
	{
		func_19(iParam0);
		return;
	}
	Global_42588[iVar0 /*5*/] = func_17();
	Global_42588[iVar0 /*5*/].f_1 = Global_42562[iParam0 /*5*/].f_1;
	Global_42588[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_42562[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	unk_0x5F82526B41A5EBCE("drunk");
	func_19(iParam0);
}

var func_17()
{
	var uVar0;
	
	uVar0 = Global_42559;
	Global_42559++;
	return uVar0;
}

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42562[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42562[iParam0 /*5*/].f_1 == unk_0x9B0761B4C3EB8BC7())
		{
			Global_42799 = 0;
		}
	}
	Global_42562[iParam0 /*5*/] = 13;
	Global_42562[iParam0 /*5*/].f_1 = 0;
	Global_42562[iParam0 /*5*/].f_2 = 0;
	Global_42562[iParam0 /*5*/].f_3 = 0;
	Global_42562[iParam0 /*5*/].f_4 = 0;
	Global_42560 = (Global_42560 - 1);
	if (Global_42560 < 0)
	{
		Global_42560 = 0;
	}
}

void func_20()
{
	if (!Global_42669[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_42669[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}
}

void func_21(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42669[iParam0 /*6*/] = -1;
	Global_42669[iParam0 /*6*/].f_1 = -1;
	Global_42669[iParam0 /*6*/].f_2 = 6;
	Global_42669[iParam0 /*6*/].f_3 = 0;
	Global_42669[iParam0 /*6*/].f_4 = 0;
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_42669[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_42588[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_29(Global_42588[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_24(Global_42588[iLocal_14 /*5*/]);
		}
		else
		{
			func_21(iVar0);
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	func_27(iParam0);
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_25(iVar0);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42588[iParam0 /*5*/] = -1;
	Global_42588[iParam0 /*5*/].f_1 = 0;
	Global_42588[iParam0 /*5*/].f_2 = -1;
	Global_42588[iParam0 /*5*/].f_3 = 0;
	Global_42588[iParam0 /*5*/].f_4 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0)
{
	func_31(iParam0);
	func_28(iParam0);
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42669[iVar0 /*6*/].f_1)
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_42669[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42669[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30()
{
	if (Global_42669[iLocal_13 /*6*/] == 1)
	{
		Global_42669[iLocal_13 /*6*/] = 0;
	}
}

void func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42669[iVar0 /*6*/])
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_33();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0xD39E529EBE5DB04F();
}

void func_33()
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_42800 = 0;
	Global_42799 = 0;
	Global_42560 = 0;
	unk_0xAE9FF16AC494E897("drunk");
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_21(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_25(iVar0);
		iVar0++;
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_19(iVar0);
		iVar0++;
	}
}

