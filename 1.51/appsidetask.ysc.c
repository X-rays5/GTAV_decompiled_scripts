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
	fLocal_27 = 0,72f;
	fLocal_28 = 0,42f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	unk_0xB57F88F0123F4C38();
	Global_21871 = 0;
	Global_19663 = 0;
	func_18();
	Global_19486.f_1 = 7;
	func_17(Global_19467, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_19467, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		wait(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_21871 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					unk_0x10FAF14A60A0DBE1();
					break;
				
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_19454, 0))
			{
				Global_19464 = 1;
				Global_21871 = 0;
				Global_19486.f_1 = 7;
				func_18();
				func_17(Global_19467, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_19467, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(2)))
			{
				return 0;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_4()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	unk_0xC1032CAC14DE468A(0,824f, 0,5f, 0,253f, 0,313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()
{
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_29, fLocal_30, &(Global_1798[Global_22093[iLocal_25]].f_3), 0);
	fLocal_29 = (fLocal_29 + 0,07f);
	func_10(255, 255, 255, 205);
	if (Global_22093[iLocal_25].f_2.f_1 < 10)
	{
		func_7(fLocal_29, fLocal_30, "CELL_506", Global_22093[iLocal_25].f_2.f_2, Global_22093[iLocal_25].f_2.f_1);
	}
	else
	{
		func_7(fLocal_29, fLocal_30, "CELL_503", Global_22093[iLocal_25].f_2.f_2, Global_22093[iLocal_25].f_2.f_1);
	}
	fLocal_29 = (fLocal_29 + 0,07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_29, fLocal_30, "CELL_505", Global_22093[iLocal_25].f_2.f_3, Global_22093[iLocal_25].f_2.f_4);
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	fLocal_30 = (fLocal_30 + 0,02f);
	if (Global_21924[Global_22093[iLocal_25].f_1].f_8 == 0)
	{
		func_9();
	}
	unk_0xF1F881BAAAFB43B1(0f, 0,93f);
	func_8(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_25].f_1].f_4), 0);
	fLocal_30 = (fLocal_30 + 0,07f);
	iVar0 = 1;
	while (iVar0 <= Global_21924[Global_22093[iLocal_25].f_1].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_30 = (fLocal_30 + 0,04f);
		if (Global_21924[Global_22093[iLocal_25].f_1].f_32[iVar0] == -1)
		{
			func_8(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_25].f_1].f_10[iVar0]), 0);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_25].f_1].f_10[iVar0]), Global_21924[Global_22093[iLocal_25].f_1].f_27[iVar0], Global_21924[Global_22093[iLocal_25].f_1].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_9()
{
	unk_0xD3539A877EC25E86(0,4f, 0,4f);
	unk_0x7178F32F6742C936(255, 128, 0, 255);
	unk_0x7635737DA2E9BC79(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xD3539A877EC25E86(0,3f, 0,3f);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(1, 0, 0, 0, 205);
	unk_0x57614350887C2EAD(1);
	unk_0x7BBAC160090910C3(0);
	unk_0x7178F32F6742C936(iParam0, iParam1, iParam2, iParam3);
}

void func_11()
{
	if (func_2(2, Global_19455, 0))
	{
		iLocal_25 = iLocal_18[iLocal_24];
		Global_21871 = 1;
		func_12(Global_19467, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_19467, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_19467, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_19486.f_1 = 8;
		Global_21871 = 1;
	}
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_13(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_13(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_13(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_13(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_13(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_13(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_14()
{
	if (iLocal_31)
	{
		if (timera() > 50)
		{
			iLocal_31 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24 = (iLocal_24 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
		}
	}
	if (iLocal_31 == 0)
	{
		if (func_2(2, Global_19462, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24 = (iLocal_24 - 1);
			}
			iLocal_31 = 1;
			settimera(0);
		}
		if (func_2(2, Global_19463, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
			iLocal_31 = 1;
			settimera(0);
		}
	}
}

void func_15()
{
	iVar0 = 0;
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	iLocal_26 = iLocal_23;
	while (iVar0 < iLocal_26)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		func_8(fLocal_29, fLocal_30, &(Global_1798[Global_22093[iLocal_18[iVar0]]].f_3), 0);
		fLocal_29 = (fLocal_29 + 0,07f);
		func_10(255, 255, 255, 205);
		if (Global_22093[iLocal_18[iVar0]].f_2.f_1 < 10)
		{
			func_7(fLocal_29, fLocal_30, "CELL_506", Global_22093[iLocal_18[iVar0]].f_2.f_2, Global_22093[iLocal_18[iVar0]].f_2.f_1);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, "CELL_503", Global_22093[iLocal_18[iVar0]].f_2.f_2, Global_22093[iLocal_18[iVar0]].f_2.f_1);
		}
		fLocal_29 = (fLocal_29 + 0,07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_29, fLocal_30, "CELL_505", Global_22093[iLocal_18[iVar0]].f_2.f_3, Global_22093[iLocal_18[iVar0]].f_2.f_4);
		fLocal_29 = fLocal_27;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		fLocal_30 = (fLocal_30 + 0,02f);
		unk_0xF1F881BAAAFB43B1(0f, 0,93f);
		func_8(fLocal_29, fLocal_30, &(Global_21924[Global_22093[iLocal_18[iVar0]].f_1]), 0);
		fLocal_30 = (fLocal_30 + 0,05f);
		iVar0++;
	}
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_13(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_13(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_13(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_13(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_13(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_17(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

void func_18()
{
	iLocal_23 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_22093[iVar7].f_2 = -1;
		Global_22093[iVar7].f_2.f_1 = 0;
		Global_22093[iVar7].f_2.f_2 = 0;
		Global_22093[iVar7].f_2.f_3 = 0;
		Global_22093[iVar7].f_2.f_5 = 0;
		while (iVar6 < 4)
		{
			if (iVar0[iVar6] == 0)
			{
				if (Global_22093[iVar6].f_8 != 0)
				{
					if (func_19(Global_22093[iVar6].f_2, Global_22093[iVar7].f_2))
					{
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_18[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_22093[iVar5].f_8 != 0)
		{
			iLocal_23++;
		}
		iVar5++;
	}
	func_12(Global_19467, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

int func_19(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

