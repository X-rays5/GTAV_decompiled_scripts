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
	iLocal_35 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_65 = ((0,05f + 0,275f) - 0,01f);
	if (unk_0x8CD06866876216F2())
	{
		func_858();
	}
	else
	{
		func_855();
	}
	while (true)
	{
		wait(0);
		if (func_843())
		{
			func_855();
		}
		func_10();
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	if (func_9())
	{
		func_3();
	}
}

void func_3()
{
	if (Local_99 == func_8())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (func_7(iVar1))
			{
				if (func_6(iVar1, 1, 1))
				{
					if (func_5(iVar1))
					{
						Local_99 = iVar1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_4())
	{
		Local_99 = func_8();
	}
}

int func_4()
{
	if (Local_99 == func_8())
	{
		return 1;
	}
	if (!func_5(Local_99))
	{
		return 1;
	}
	if (!unk_0xFB75B0F82CA525F6(Local_99))
	{
		return 1;
	}
	if (!func_6(Local_99, 1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_5(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 10);
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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

int func_7(int iParam0)
{
	if (iParam0 != func_8())
	{
		return unk_0xFB75B0F82CA525F6(iParam0);
	}
	return 0;
}

int func_8()
{
	return -1;
}

bool func_9()
{
	return (unk_0xF4CCC8CB6DE7F1AE() % 3) == 0;
}

void func_10()
{
	func_841();
	func_94();
	func_92();
	func_87();
	func_85();
	func_83();
	func_78();
	func_76(0);
	func_75();
	func_70();
	func_65();
	func_63();
	func_11();
}

void func_11()
{
	if (func_61())
	{
		return;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return;
	}
	if (unk_0xA14BB9332558B949())
	{
		return;
	}
	if (unk_0xF929B1A0A409FF93())
	{
		return;
	}
	if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (func_25(0, 0))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 5))
	{
		if (func_23())
		{
			iVar6 = func_21(8349, -1, 0);
			iVar7 = unk_0xDD0E7998AE8AD485();
			iVar8 = (iVar6 - iVar7);
			if (iVar8 > 0)
			{
				unk_0x269DB0799B8F599E(iVar8, &Var0);
				iVar9 = (Var0.f_3 * 3600000);
				iVar9 = (iVar9 + (Var0.f_4 * 60000));
				iVar9 = (iVar9 + Var0.f_5 * 1000);
				Var10 = { func_20(iVar9, 0, 0) };
				unk_0x1E64CE678ED5F61E("CAS_WHEEL_TR");
				unk_0xD06AC7C87A34A6AD(&Var10);
				unk_0x47AFB2993A42BD03(1, 1);
			}
		}
		else
		{
			func_12("CAS_WHEEL_RE");
		}
		unk_0x5D96D8530B3D0904(&(Local_262.f_1), 5);
	}
}

int func_12(char* sParam0)
{
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_13(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_13(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_19() || !unk_0xA14BB9332558B949()) || !func_16(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_14(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0].f_7 = iParam7;
		Global_1670846.f_5[iVar0].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[0]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[1]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[2]), sParam11, 24);
	}
}

int func_14(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_15(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_15(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_16(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_17(-1, 0) == 8;
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

int func_17(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1312745;
}

bool func_19()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

struct<4> func_20(int iParam0, bool bParam1, int iParam2)
{
	StringCopy(&Var0, "", 16);
	if (iParam0 > 0 || (iParam2 && iParam0 == 0))
	{
		iVar8 = iParam0;
		iVar4 = floor(to_float((iVar8 / 3600000)));
		iVar8 = (iVar8 - (iVar4 * 3600000));
		iVar5 = floor(to_float((iVar8 / 60000)));
		iVar8 = (iVar8 - (iVar5 * 60000));
		iVar6 = floor(to_float((iVar8 / 1000)));
		iVar8 = (iVar8 - iVar6 * 1000);
		iVar7 = iVar8;
		if (iVar4 > 0)
		{
			StringIntConCat(&Var0, iVar4, 16);
			StringConCat(&Var0, ":", 16);
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
		}
		else
		{
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
			if (bParam1)
			{
				StringConCat(&Var0, ":", 16);
				if (iVar7 > 100)
				{
					StringIntConCat(&Var0, iVar7, 16);
				}
				else if (iVar7 > 10)
				{
					StringConCat(&Var0, "0", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
				else
				{
					StringConCat(&Var0, "00", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
			}
		}
	}
	else
	{
		StringCopy(&Var0, "---", 16);
	}
	return Var0;
}

int func_21(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_22(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

int func_23()
{
	iVar0 = func_21(8349, -1, 0);
	iVar1 = func_24(-1753117686);
	iVar2 = unk_0xDD0E7998AE8AD485();
	if (iVar2 > iVar0 && iVar2 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_24(int iParam0)
{
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	if (unk_0xA14BB9332558B949())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_58(8,7587f))
		{
			return 1;
		}
	}
	if (func_56(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (Global_2405072.f_2672)
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_53())
		{
			return 1;
		}
	}
	if (func_52())
	{
		return 1;
	}
	if (func_51(0))
	{
		return 1;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 1;
	}
	if (func_50())
	{
		return 1;
	}
	if (func_49())
	{
		return 1;
	}
	if (func_48(1))
	{
		return 1;
	}
	bVar2 = func_47(0);
	if (Global_262145.f_26154)
	{
		if (bVar2)
		{
			if ((!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F()) && !func_50())
			{
				func_46("CASINO_LUCK_WD", -1);
			}
		}
		iVar0 = 1;
	}
	if (!func_45(unk_0xD803B885F5E47A62()))
	{
		if ((bVar2 && !unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 4)) && !func_44(4, &uVar1))
		{
			if ((!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F()) && !func_50())
			{
				unk_0x5D96D8530B3D0904(&(Global_1676377.f_6), 4);
				func_42("CAS_MG_MEMB2", func_43(0), -1);
			}
		}
		iVar0 = 1;
	}
	if (bParam0)
	{
		if (func_23())
		{
			if (bVar2 && !func_41(20))
			{
				if ((!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F()) && !func_50())
				{
					func_46("LUCKY_WHEEL_US", -1);
					func_40(20);
				}
			}
			iVar0 = 1;
		}
	}
	if (bParam1)
	{
		if (bVar2)
		{
			if (!func_39())
			{
				if (func_38("LW_PLAY"))
				{
					unk_0xA37A90C62806D848(1);
				}
				if ((!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F()) && !func_50())
				{
					func_46("POD_TOO_MANY", -1);
				}
				iVar0 = 1;
			}
			else if (func_38("POD_TOO_MANY"))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		else if (func_38("POD_TOO_MANY"))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 1))
	{
		iVar0 = 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 2))
	{
		iVar0 = 1;
	}
	if (func_28())
	{
		iVar0 = 1;
	}
	if (func_44(4, &uVar1))
	{
		if (bVar2)
		{
			if (!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F())
			{
				func_46("CAS_LW_REGL", -1);
				func_40(28);
			}
		}
		iVar0 = 1;
	}
	if (Global_1696073 != 0)
	{
		iVar0 = 1;
	}
	if (unk_0xF929B1A0A409FF93())
	{
		iVar0 = 1;
	}
	if (func_26())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return iVar0;
}

int func_26()
{
	if ((func_27() != -1 && func_27() != 28) && func_27() != 17)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	return Global_968397;
}

int func_28()
{
	if (func_36(unk_0xD803B885F5E47A62(), 1))
	{
		iVar0 = func_35();
		if (func_6(iVar0, 1, 1) && unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_34(unk_0xD803B885F5E47A62(), 0) && func_32(unk_0xD803B885F5E47A62())) || func_29(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (func_31(iParam0) != func_8())
	{
		return func_31(iParam0) == func_30(iParam0);
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_8();
}

int func_31(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_32(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

var func_35()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

bool func_36(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_37(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_8();
}

int func_37(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1628237[iParam0].f_11 != func_8())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_38(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_39()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (func_6(iVar1, 1, 1) && !unk_0xBC4ABD9D5FABB2A7(iVar1))
		{
			if (iVar1 != unk_0xD803B885F5E47A62())
			{
				iVar2 = unk_0x9539D44F3E4492F6(iVar1);
				if (unk_0xC844350D5D58C99A(iVar2) && unk_0x3D1053F9EB43B7AD(iVar2, 1109,469f, 228,9432f, -50,64041f, 1111,215f, 228,8777f, -48,39041f, 1,82f, 0, true, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_262, iParam0))
	{
		unk_0x5D96D8530B3D0904(&Local_262, iParam0);
	}
}

bool func_41(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_262, iParam0);
}

void func_42(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

int func_43(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_44(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x829DE4CDEA2FE156(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_45(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_1, 18);
}

void func_46(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_47(bool bParam0)
{
	if (bParam0)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() % 3) == 0)
		{
			return unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1110,995f, 228,9034f, -50,6408f, 1109,727f, 228,9352f, -48,3908f, 1,5f, 0, true, 0);
		}
	}
	else
	{
		return unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1110,995f, 228,9034f, -50,6408f, 1109,727f, 228,9352f, -48,3908f, 1,5f, 0, true, 0);
	}
	return 0;
}

bool func_48(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_49()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_50()
{
	return Global_73825;
}

int func_51(int iParam0)
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

bool func_52()
{
	return Global_2537071.f_6591;
}

bool func_53()
{
	return vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_54()) < 5f;
}

Vector3 func_54()
{
	return 1111,052f, 229,8492f, -50,6409f;
}

int func_55()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_34, 4);
	}
	return 0;
}

int func_56(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_57(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_58(float fParam0)
{
	vVar0 = { func_60(unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), fParam0, 0f, 1f, 0f) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) };
	fVar3 = func_59(unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()), vVar0);
	if (fVar3 >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_59(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_60(vector3 vParam0)
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

int func_61()
{
	if (func_62())
	{
		return Global_1676377.f_475 == 0;
	}
	return 0;
}

bool func_62()
{
	return Global_1676377.f_474;
}

void func_63()
{
	if ((unk_0xF4CCC8CB6DE7F1AE() % 30) == 0)
	{
		if (unk_0x468C1AC3ABF95C57(Global_262145.f_25985))
		{
			if (func_21(8516, -1, 0) != Global_262145.f_25985)
			{
				unk_0x5D96D8530B3D0904(&Global_1590398, 17);
				func_64(8516, Global_262145.f_25985, -1, 1, 0);
			}
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_22(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_65()
{
	if (Local_262.f_45 == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 4))
		{
			iVar0 = func_67(26806, -1, -1);
			if (iVar0 < 4)
			{
				if (!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F())
				{
					func_46("CAS_LW_VOUCH", -1);
					iVar0++;
					func_66(26806, iVar0, -1, 1);
					unk_0x0674E58A79778E99(&(Local_262.f_1), 4);
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Local_262.f_1), 4);
			}
		}
	}
}

var func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_18();
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

int func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	iVar1 = func_69(iParam0, iParam1);
	iVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_68(int iParam0)
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

int func_69(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
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

void func_70()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 2))
	{
		if (!func_74(&(Local_262.f_43)))
		{
			func_73(&(Local_262.f_43), 0, 0);
		}
		else if (func_72(&(Local_262.f_43), 40000, 0) || (!unk_0x8FA469D9C5F1A01F() && !unk_0xFEBC1E4EC9E001F0()))
		{
			unk_0x0674E58A79778E99(&(Local_262.f_1), 2);
			func_71(&(Local_262.f_43));
		}
	}
}

void func_71(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_72(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
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
}

bool func_74(var uParam0)
{
	return uParam0->f_1;
}

void func_75()
{
	if (Global_1377170.f_1149 >= 30000)
	{
		if (Local_99 != unk_0xD803B885F5E47A62())
		{
			func_76(1);
		}
	}
}

void func_76(int iParam0)
{
	if (Local_99 != func_8() || iParam0 == 1)
	{
		if (Local_99 != unk_0xD803B885F5E47A62() || iParam0 == 1)
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1109,16f, 228,4484f, -50,63083f, 1112,186f, 228,9841f, -48,13083f, 2,75f, 0, true, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 1))
				{
					iVar3 = unk_0x09AC81E49EA267F7(0, 6);
					func_77(iVar3, &vVar0);
					unk_0x96167B03C5A77156(unk_0x16F2683693E537C9(), vVar0, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x5D96D8530B3D0904(&(Local_262.f_1), 1);
				}
			}
			else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 1))
				{
					unk_0x0674E58A79778E99(&(Local_262.f_1), 1);
				}
			}
		}
		else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 1))
			{
				unk_0x0674E58A79778E99(&(Local_262.f_1), 1);
			}
		}
	}
	else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 713668775) != 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 1))
		{
			unk_0x0674E58A79778E99(&(Local_262.f_1), 1);
		}
	}
}

void func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1114,812f, 226,8861f, -50,8408f };
			break;
		
		case 1:
			*uParam1 = { 1115,391f, 222,8374f, -50,4301f };
			break;
		
		case 2:
			*uParam1 = { 1111,762f, 223,4791f, -50,8408f };
			break;
		
		case 3:
			*uParam1 = { 1110,287f, 222,9306f, -50,8408f };
			break;
		
		case 4:
			*uParam1 = { 1108,957f, 223,4897f, -50,8408f };
			break;
		
		case 5:
			*uParam1 = { 1106,042f, 226,8098f, -50,8408f };
			break;
	}
}

void func_78()
{
	if (func_41(24))
	{
		Local_262.f_23 = func_81();
		unk_0x3F423BF5B8125A50(Local_262.f_23);
		if (unk_0xB4AE0788C1587752(Local_262.f_23))
		{
			Local_262.f_10 = Local_99.f_1;
			func_80(14);
			func_79(24);
		}
	}
}

void func_79(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_262, iParam0))
	{
		unk_0x0674E58A79778E99(&Local_262, iParam0);
	}
}

void func_80(int iParam0)
{
	Local_262.f_45 = iParam0;
}

char* func_81()
{
	if (func_82(unk_0x16F2683693E537C9()))
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@FEMALE";
	}
	else
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@MALE";
	}
	return sVar0;
}

int func_82(int iParam0)
{
	if (((((((((unk_0x134B62B726CEC8E6(iParam0) == -1667301416 || unk_0x134B62B726CEC8E6(iParam0) == -1301974109) || unk_0x134B62B726CEC8E6(iParam0) == 2014985464) || unk_0x134B62B726CEC8E6(iParam0) == 1264941816) || unk_0x134B62B726CEC8E6(iParam0) == -1215761931) || unk_0x134B62B726CEC8E6(iParam0) == -2063419726) || unk_0x134B62B726CEC8E6(iParam0) == 920595805) || unk_0x134B62B726CEC8E6(iParam0) == 793439294) || unk_0x134B62B726CEC8E6(iParam0) == -614546432) || unk_0x134B62B726CEC8E6(iParam0) == -566941131)
	{
		return 1;
	}
	return 0;
}

void func_83()
{
	if (func_41(0))
	{
		unk_0x857E3CE01DEA2D26();
		unk_0x7BBABEC524CBF883(0);
		func_84();
	}
}

void func_84()
{
	Global_22211.f_6 = 1;
}

void func_85()
{
	if (func_86())
	{
		unk_0xA78CDFD1AE3130A9(5891389);
	}
}

int func_86()
{
	if (Local_262.f_45 >= 5 && Local_262.f_45 <= 12)
	{
		return 1;
	}
	if (Local_262.f_45 == 13)
	{
		return 1;
	}
	if (Local_262.f_45 == 4)
	{
		if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_87()
{
	if (Local_262.f_17 < 6 && Local_262.f_17 != -1)
	{
		if (!func_74(&(Local_262.f_35)))
		{
			func_91();
			func_90();
			func_73(&(Local_262.f_35), 0, 0);
		}
		else if (func_72(&(Local_262.f_35), 250, 0) && !func_74(&(Local_262.f_37)))
		{
			func_89();
			if (Local_262.f_17 != 5)
			{
				func_88();
			}
			func_73(&(Local_262.f_37), 0, 0);
			Local_262.f_17++;
		}
		else if (func_74(&(Local_262.f_37)))
		{
			if (func_72(&(Local_262.f_37), 250, 0))
			{
				func_71(&(Local_262.f_37));
				func_71(&(Local_262.f_35));
			}
		}
	}
	else if (Local_262.f_17 == 6)
	{
		Local_262.f_17 = -1;
	}
}

void func_88()
{
	unk_0x3124890FDA752DE4(1111,052f, 229,849f, -50,641f, 5f, 554774312, 0);
}

void func_89()
{
	unk_0x3124890FDA752DE4(1111,052f, 229,849f, -50,641f, 2f, -750805728, 0);
}

void func_90()
{
	unk_0x77ADAEFF81EAE1E4(1111,052f, 229,849f, -50,641f, 5f, 554774312, false);
}

void func_91()
{
	unk_0x77ADAEFF81EAE1E4(1111,052f, 229,849f, -50,641f, 2f, -750805728, false);
}

void func_92()
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
				if (iVar2 == 2032669874)
				{
					if (Global_1391799.f_770)
					{
						return;
					}
					func_93(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

void func_93(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 4))
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			Local_99.f_1 = Var0.f_2;
		}
		if (unk_0xD803B885F5E47A62() != Var0.f_1 && Var0.f_3)
		{
			func_40(24);
		}
	}
}

void func_94()
{
	switch (Local_262.f_45)
	{
		case 0:
			func_840();
			if (Local_262.f_17 == -1)
			{
				if (!func_41(23))
				{
					func_89();
					func_40(23);
				}
			}
			if (!func_839())
			{
				if (!func_41(0) && !func_25(1, 1))
				{
					func_838();
					if (func_835())
					{
						func_834(unk_0xD803B885F5E47A62(), 1);
						func_833();
						func_820();
						func_40(0);
						func_80(1);
					}
				}
				else
				{
					func_818();
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 0) && unk_0xC844350D5D58C99A(Local_262.f_72))
			{
				if (Local_99.f_1 != Local_262.f_14 && Local_99 == func_8())
				{
					unk_0xC023D1C4BF532815(Local_262.f_72, 0f, -func_817(Local_99.f_1), 0f, 2, 1);
					Local_262.f_14 = Local_99.f_1;
					unk_0x5D96D8530B3D0904(&(Local_262.f_1), 0);
				}
				else if (Local_99 == unk_0xD803B885F5E47A62())
				{
					unk_0x5D96D8530B3D0904(&(Local_262.f_1), 0);
				}
			}
			break;
		
		case 1:
			if (Local_99 == unk_0xD803B885F5E47A62())
			{
				func_816(unk_0xD803B885F5E47A62(), 1);
				func_815(0);
				if (!unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 3))
				{
					func_73(&(Local_262.f_41), 0, 0);
					func_80(2);
				}
				else
				{
					func_80(3);
				}
			}
			else if (func_72(&(Local_262.f_29), 1500, 0))
			{
				func_80(17);
			}
			break;
		
		case 2:
			func_805();
			break;
		
		case 3:
			func_797();
			if (func_41(8))
			{
				func_80(4);
			}
			break;
		
		case 4:
			func_797();
			if (func_41(9))
			{
				func_80(5);
			}
			break;
		
		case 5:
			func_796();
			break;
		
		case 7:
			func_795();
			break;
		
		case 6:
			func_790();
			break;
		
		case 8:
			func_789();
			func_785();
			if (func_41(5))
			{
				Local_262.f_10 = Local_99.f_1;
				if (!func_784(unk_0xD803B885F5E47A62()))
				{
					Local_262.f_428 = unk_0xDD0E7998AE8AD485();
					func_783(Local_262.f_10, 1);
					func_40(21);
					func_782(1);
				}
				func_73(&(Local_262.f_33), 0, 0);
				func_80(13);
				if (func_38("LUCK_WHEEL_SPIN") || func_38("LUCK_W_SPIN_PC"))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
			break;
		
		case 13:
			if (func_74(&(Local_262.f_33)))
			{
				if (func_72(&(Local_262.f_33), 190, 0))
				{
					func_771(func_780(func_781(unk_0xD803B885F5E47A62())), 0, 0, 1, 0);
					func_71(&(Local_262.f_33));
					func_770(173);
					Local_262.f_422 = 1f;
					func_80(9);
					if (unk_0xBFF81ED3B99522C7())
					{
						Local_99.f_1 = func_769(Local_99);
					}
				}
			}
			break;
		
		case 9:
			if (unk_0xC844350D5D58C99A(Local_262.f_72) && unk_0x1A5AE8A9B1D42A10(Local_262.f_72))
			{
				func_767();
			}
			func_766(Local_262.f_422);
			func_765(Local_262.f_422);
			if (func_762(func_780(func_781(unk_0xD803B885F5E47A62())), 0, 0))
			{
				func_771(func_761(func_781(unk_0xD803B885F5E47A62())), 0, 1, 1, 0);
			}
			if (func_760(0))
			{
				func_40(14);
			}
			if ((func_41(14) && unk_0xC844350D5D58C99A(Local_262.f_72)) && unk_0x1A5AE8A9B1D42A10(Local_262.f_72))
			{
				func_742(0);
			}
			break;
		
		case 10:
			if (Local_262.f_425 != -1)
			{
				unk_0x43A06902454A1172(Local_262.f_425);
				Local_262.f_425 = -1;
			}
			func_79(14);
			if (func_762(func_741(), 0, 1))
			{
				if (func_740())
				{
					func_738();
				}
				func_79(17);
				func_71(&(Local_262.f_74.f_329));
				func_80(11);
			}
			break;
		
		case 11:
			if (func_181())
			{
				func_40(21);
				func_170();
				func_160();
				Local_262.f_428 = unk_0xDD0E7998AE8AD485();
				func_80(16);
			}
			break;
		
		case 12:
			if (func_41(10))
			{
				if (func_762(14, 0, 1))
				{
					if (func_740())
					{
						func_738();
					}
					func_79(10);
					func_80(17);
				}
			}
			else
			{
				func_80(17);
			}
			break;
		
		case 14:
			func_154();
			break;
		
		case 15:
			func_153();
			break;
		
		case 16:
			func_138();
			break;
		
		case 17:
			func_95();
			break;
	}
}

void func_95()
{
	unk_0x558EC149EB2BC0A2(2, 202);
	if (func_38("LUCK_WHEEL_SPIN") || func_38("LUCK_W_SPIN_PC"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (unk_0xD803B885F5E47A62() == Local_99)
	{
		func_130();
		func_116(unk_0xD803B885F5E47A62(), 1, 0);
		unk_0x1FA2A2B10F3906F7();
		if (Local_262.f_74.f_320 != 0)
		{
			if (Local_262.f_74.f_320 == 1)
			{
				func_109(func_114());
			}
			Local_262.f_74.f_320 = 0;
		}
		if (unk_0xC844350D5D58C99A(Local_262.f_73) && Local_262.f_73 != Global_1696074)
		{
			unk_0xA954465BA6FDEFE2(&(Local_262.f_73));
		}
		else
		{
			Local_262.f_73 = -1;
		}
		if (func_108())
		{
			func_107();
		}
		unk_0xBFE31971E49FA500(true);
	}
	func_106(1);
	func_103(1, -1);
	func_816(unk_0xD803B885F5E47A62(), 0);
	if (func_41(0))
	{
		func_116(unk_0xD803B885F5E47A62(), 1, 0);
	}
	StringCopy(&(Local_262.f_405), "", 64);
	Local_262.f_421 = 0;
	Local_262.f_422 = 0f;
	Local_262.f_47 = -1;
	Var0.f_1 = 307;
	Local_262.f_74 = { Var0 };
	func_80(0);
	func_99();
	func_98();
	func_782(0);
	func_71(&(Local_262.f_33));
	func_71(&(Local_262.f_29));
	func_71(&(Local_262.f_41));
	func_97(-1);
	func_96(0);
}

void func_96(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_262.f_429, iParam0))
	{
		unk_0x0674E58A79778E99(&(Local_262.f_429), iParam0);
	}
}

void func_97(int iParam0)
{
	if (unk_0xD803B885F5E47A62() != func_8())
	{
		Local_101[unk_0xD803B885F5E47A62()].f_4 = iParam0;
	}
}

void func_98()
{
	func_834(unk_0xD803B885F5E47A62(), 0);
}

void func_99()
{
	Local_262 = 0;
	func_102(5000);
	Local_262.f_2 = 0;
	Local_262.f_3 = 0;
	Local_262.f_4 = 0;
	Local_262.f_5 = 0;
	Local_262.f_6 = 0;
	Local_262.f_8 = 0;
	Local_262.f_9 = 0;
	func_101(-1);
	Local_262.f_11 = -1;
	Local_262.f_12 = 0;
	Local_262.f_13 = 0;
	Local_262.f_15 = 0;
	Local_262.f_18 = 0f;
	Local_262.f_19 = 0f;
	Local_262.f_16 = 0;
	Local_262.f_20 = 0f;
	Local_262.f_21 = 0f;
	func_97(-1);
	Local_262.f_46 = 1;
	func_100(-1);
	func_71(&(Local_262.f_27));
	func_71(&(Local_262.f_29));
	func_71(&(Local_262.f_31));
	func_71(&(Local_262.f_39));
}

void func_100(int iParam0)
{
	if (unk_0xD803B885F5E47A62() != func_8())
	{
		if (Local_101[unk_0xD803B885F5E47A62()] != iParam0)
		{
			Local_101[unk_0xD803B885F5E47A62()] = iParam0;
		}
	}
}

void func_101(int iParam0)
{
	if (unk_0xD803B885F5E47A62() != func_8())
	{
		if (Local_101[unk_0xD803B885F5E47A62()].f_2 != iParam0)
		{
			Local_101[unk_0xD803B885F5E47A62()].f_2 = iParam0;
		}
	}
}

void func_102(int iParam0)
{
	if (unk_0xD803B885F5E47A62() != func_8())
	{
		if (Local_101[unk_0xD803B885F5E47A62()].f_3 != iParam0)
		{
			Local_101[unk_0xD803B885F5E47A62()].f_3 = iParam0;
		}
	}
}

void func_103(bool bParam0, int iParam1)
{
	if (!func_105(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_104(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_104(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_105(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_106(bool bParam0)
{
	if (!unk_0x8AA6DC470ABA63A2(Local_262.f_424))
	{
		unk_0x55D0A2DB35045A35(Local_262.f_424);
		unk_0x43A06902454A1172(Local_262.f_424);
		Local_262.f_424 = -1;
	}
	if (!bParam0)
	{
		if (!unk_0x8AA6DC470ABA63A2(Local_262.f_426))
		{
			unk_0x55D0A2DB35045A35(Local_262.f_426);
			unk_0x43A06902454A1172(Local_262.f_426);
			Local_262.f_426 = -1;
		}
		if (!unk_0x8AA6DC470ABA63A2(Local_262.f_427))
		{
			unk_0x55D0A2DB35045A35(Local_262.f_427);
			unk_0x43A06902454A1172(Local_262.f_427);
			Local_262.f_427 = -1;
		}
	}
}

void func_107()
{
	Global_2439138.f_1156.f_10 = 0;
}

bool func_108()
{
	return Global_2439138.f_1156.f_10;
}

void func_109(int iParam0)
{
	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_112(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_4263954[iParam0].f_66);
		}
		func_110(&(Global_4263954[iParam0]));
	}
}

void func_110(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_111(&(uParam0->f_14));
	func_111(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_111(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_112(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_113()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_114()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_115(iVar0) != 2147483647)
		{
			if (func_112(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

void func_116(int iParam0, bool bParam1, int iParam2)
{
	if (func_129(unk_0x9539D44F3E4492F6(iParam0)))
	{
		func_117(iParam0, bParam1, iParam2, 0);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, !bParam1);
	}
}

void func_117(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_128())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_126())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_16(unk_0xD803B885F5E47A62(), 0) && !func_125()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_122(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_121(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_120();
					func_119();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_121(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, true);
						}
					}
					if (func_118(Global_4456448.f_232883))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_118(int iParam0)
{
	return iParam0 == 17;
}

void func_119()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_120()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_121(int iParam0)
{
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_124();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 1);
			}
		}
		if (func_16(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_123(-2008016205, iParam0);
	}
}

void func_123(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_124()
{
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_125()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_126()
{
	if (func_127() == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	return Global_1312467.f_18;
}

int func_128()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
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

void func_130()
{
	func_131(0);
}

void func_131(bool bParam0)
{
	if (bParam0)
	{
		func_137();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_51(0))
		{
			func_132(0);
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

void func_132(int iParam0)
{
	if (func_136())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_135())
		{
			func_134(1, 1);
		}
		else
		{
			func_134(0, 0);
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
	if (!func_133())
	{
		Global_19486.f_1 = 3;
	}
}

int func_133()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_134(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
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

bool func_135()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_136()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_137()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_138()
{
	if (func_113())
	{
		if (func_141(&(Local_262.f_443), 147735386, (Local_262.f_428 + 86400)))
		{
			if (Local_262.f_443 == 2)
			{
				func_139(0);
				func_80(17);
			}
			Local_262.f_443 = 0;
		}
	}
	else
	{
		func_139(0);
		func_80(17);
	}
}

void func_139(bool bParam0)
{
	func_140(-1753117686, (Local_262.f_428 + 86400));
	if (!bParam0)
	{
		func_64(8349, (Local_262.f_428 + 86400), -1, 1, 0);
	}
	Global_2460612 = 1;
}

void func_140(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

bool func_141(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_114() != -1)
		{
			return 0;
		}
		if (func_149(78225582, 1888666031, iParam1, 1668906031, iParam2, 0, iParam2, 1, 0, 3))
		{
			if (func_144())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else
		{
			*uParam0 = 3;
		}
	}
	else if (*uParam0 == 1)
	{
		if (func_143(func_114()))
		{
			if (func_142(func_114()) == 2)
			{
				*uParam0 = 2;
			}
			else
			{
				*uParam0 = 3;
			}
			func_109(func_114());
		}
	}
	return *uParam0 != 1;
}

int func_142(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_144()
{
	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_114();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_18()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_148(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2].f_66.f_6 == 1067618600 || Global_4263954[iVar2].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_115(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_4263954[iVar2].f_66.f_13 = 1;
			Global_4263954[iVar2].f_66.f_12 = 0;
			Global_4263954[iVar2].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_4263954[iVar2].f_66.f_8 = 1;
				Global_4263954[iVar2].f_66.f_12 = 1;
			}
			Global_4263954[iVar2].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_145(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_145(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	iVar36 = func_147(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_146();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_146()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_147(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_148(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_18()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_114();
	if (iVar1 == -1)
	{
		if (!func_151(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_150(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1].f_66.f_15 = Var2;
		Global_4263954[iVar1].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x54B75246B42BE23E(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_18()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x9D14F555AB486471())
		{
			unk_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || unk_0xA28E08E034174728(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_152(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_113())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = iParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = iParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_145(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_153()
{
	if (func_760(1))
	{
		func_40(14);
	}
	if ((func_41(14) && unk_0xC844350D5D58C99A(Local_262.f_72)) && unk_0x1A5AE8A9B1D42A10(Local_262.f_72))
	{
		func_742(1);
	}
}

void func_154()
{
	if (func_784(Local_99))
	{
		func_100(func_769(Local_99));
		func_102(func_159(Local_99));
		Local_262.f_15 = func_158();
		Local_262.f_8 = func_157();
		func_155();
		func_80(15);
		if (unk_0xBFF81ED3B99522C7())
		{
			Local_99.f_1 = func_769(Local_99);
		}
	}
}

void func_155()
{
	sVar0 = func_156(func_781(Local_99));
	unk_0xC023D1C4BF532815(Local_262.f_72, 0f, 0f, 0f, 2, 1);
	unk_0xD65E6E13E145467B(Local_262.f_72, sVar0, Local_262.f_23, 1000f, 0, 1, 0, 0f, 2);
	unk_0x295ACC5727E47CB7(Local_262.f_72);
}

char* func_156(int iParam0)
{
	sVar0 = "null";
	switch (iParam0)
	{
		case 0:
			if (func_82(unk_0x16F2683693E537C9()))
			{
				switch (Local_262.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_262.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20";
						break;
					}
			}
			break;
		
		case 1:
			if (func_82(unk_0x16F2683693E537C9()))
			{
				switch (Local_262.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_20_wheel";
						break;
					
					case 1:
						return "spinningwheel_med_effort_01_wheel";
						break;
					
					case 2:
						return "spinningwheel_med_effort_02_wheel";
						break;
					
					case 3:
						return "spinningwheel_med_effort_03_wheel";
						break;
					
					case 4:
						return "spinningwheel_med_effort_04_wheel";
						break;
					
					case 5:
						return "spinningwheel_med_effort_05_wheel";
						break;
					
					case 6:
						return "spinningwheel_med_effort_06_wheel";
						break;
					
					case 7:
						return "spinningwheel_med_effort_07_wheel";
						break;
					
					case 8:
						return "spinningwheel_med_effort_08_wheel";
						break;
					
					case 9:
						return "spinningwheel_med_effort_09_wheel";
						break;
					
					case 10:
						return "spinningwheel_med_effort_10_wheel";
						break;
					
					case 11:
						return "spinningwheel_med_effort_11_wheel";
						break;
					
					case 12:
						return "spinningwheel_med_effort_12_wheel";
						break;
					
					case 13:
						return "spinningwheel_med_effort_13_wheel";
						break;
					
					case 14:
						return "spinningwheel_med_effort_14_wheel";
						break;
					
					case 15:
						return "spinningwheel_med_effort_15_wheel";
						break;
					
					case 16:
						return "spinningwheel_med_effort_16_wheel";
						break;
					
					case 17:
						return "spinningwheel_med_effort_17_wheel";
						break;
					
					case 18:
						return "spinningwheel_med_effort_18_wheel";
						break;
					
					case 19:
						return "spinningwheel_med_effort_19_wheel";
						break;
				}
			}
			else
			{
				switch (Local_262.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_01";
						break;
					
					case 1:
						return "spinningwheel_med_effort_02";
						break;
					
					case 2:
						return "spinningwheel_med_effort_03";
						break;
					
					case 3:
						return "spinningwheel_med_effort_04";
						break;
					
					case 4:
						return "spinningwheel_med_effort_05";
						break;
					
					case 5:
						return "spinningwheel_med_effort_06";
						break;
					
					case 6:
						return "spinningwheel_med_effort_07";
						break;
					
					case 7:
						return "spinningwheel_med_effort_08";
						break;
					
					case 8:
						return "spinningwheel_med_effort_09";
						break;
					
					case 9:
						return "spinningwheel_med_effort_10";
						break;
					
					case 10:
						return "spinningwheel_med_effort_11";
						break;
					
					case 11:
						return "spinningwheel_med_effort_12";
						break;
					
					case 12:
						return "spinningwheel_med_effort_13";
						break;
					
					case 13:
						return "spinningwheel_med_effort_14";
						break;
					
					case 14:
						return "spinningwheel_med_effort_15";
						break;
					
					case 15:
						return "spinningwheel_med_effort_16";
						break;
					
					case 16:
						return "spinningwheel_med_effort_17";
						break;
					
					case 17:
						return "spinningwheel_med_effort_18";
						break;
					
					case 18:
						return "spinningwheel_med_effort_19";
						break;
					
					case 19:
						return "spinningwheel_med_effort_20";
						break;
					}
			}
			break;
		
		case 2:
			if (func_82(unk_0x16F2683693E537C9()))
			{
				switch (Local_262.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_262.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20";
						break;
					}
			}
			break;
	}
	return sVar0;
}

int func_157()
{
	iVar0 = 0;
	if (func_159(unk_0xD803B885F5E47A62()) > 3000)
	{
		iVar0 = 4;
	}
	else if (func_159(unk_0xD803B885F5E47A62()) > 1500)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_158()
{
	iVar0 = 535;
	if (func_159(unk_0xD803B885F5E47A62()) > 3000)
	{
		iVar0 = 110;
	}
	else if (func_159(unk_0xD803B885F5E47A62()) > 1500)
	{
		iVar0 = 353;
	}
	return iVar0;
}

int func_159(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_101[iParam0].f_3;
}

void func_160()
{
	if (!Global_262145.f_26039)
	{
		return;
	}
	if (func_169())
	{
		return;
	}
	Local_262.f_48 = unk_0x12AB0310C2281427("LUCKYWHEEL");
	Local_262.f_48.f_1 = unk_0x12AB0310C2281427("STANDARD");
	Local_262.f_48.f_4 = unk_0x12AB0310C2281427("WIN");
	Local_262.f_48.f_11 = func_168(unk_0xD803B885F5E47A62());
	Local_262.f_48.f_18 = unk_0xBFF81ED3B99522C7();
	if (unk_0x0D03A641486A2001() != func_167())
	{
		Local_262.f_48.f_19 = unk_0x3DDF605689C8A861(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()));
	}
	iVar0 = func_166();
	sVar1 = func_165(iVar0);
	Local_262.f_48.f_21 = unk_0x12AB0310C2281427(sVar1);
	if (unk_0xEA6BC48857E0AC4C(func_163()))
	{
		Local_262.f_48.f_22 = 0;
	}
	else
	{
		Local_262.f_48.f_22 = unk_0x12AB0310C2281427(func_163());
	}
	switch (func_769(unk_0xD803B885F5E47A62()))
	{
		case 3:
			Local_262.f_48.f_6 = 10000;
			break;
		
		case 7:
			Local_262.f_48.f_6 = 15000;
			break;
		
		case 10:
			Local_262.f_48.f_6 = 20000;
			break;
		
		case 15:
			Local_262.f_48.f_6 = 25000;
			break;
		
		case 11:
			switch (Local_262.f_47)
			{
				case 2:
					Local_262.f_48.f_6 = Local_262.f_421;
					break;
			}
			break;
	}
	Local_262.f_48.f_7 = func_162();
	Local_262.f_48.f_23 = func_161();
	Local_262.f_48.f_15 = 1;
	if (func_168(unk_0xD803B885F5E47A62()))
	{
		Local_262.f_48.f_20 = unk_0x12AB0310C2281427("VIP membership");
	}
	else
	{
		Local_262.f_48.f_20 = unk_0x12AB0310C2281427("paid membership");
	}
	Local_262.f_48.f_10 = 1;
	unk_0xF632D4DB3816B4C5(&(Local_262.f_48));
}

int func_161()
{
	iVar0 = func_769(unk_0xD803B885F5E47A62());
	switch (iVar0)
	{
		case 1:
			return 2500;
		
		case 2:
			return 20000;
		
		case 3:
			return 10000;
		
		case 5:
			return 5000;
		
		case 7:
			return 15000;
		
		case 9:
			return 7500;
		
		case 6:
			return 30000;
		
		case 10:
			return 20000;
		
		case 13:
			return 10000;
		
		case 14:
			return 40000;
		
		case 17:
			return 15000;
		
		case 19:
			return 50000;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_262.f_47)
			{
				case 2:
				case 4:
				case 3:
					return Local_262.f_421;
					break;
			}
			break;
	}
	return 0;
}

int func_162()
{
	return func_21(8248, -1, 0);
}

char* func_163()
{
	iVar0 = func_769(unk_0xD803B885F5E47A62());
	switch (iVar0)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 18:
			return func_164(&(Local_262.f_405));
			break;
		
		case 11:
			switch (Local_262.f_47)
			{
				case 0:
				case 6:
				case 1:
				case 5:
					return func_164(&(Local_262.f_405));
					break;
			}
			break;
	}
	return "";
}

char* func_164(char* sParam0)
{
	return sParam0;
}

char* func_165(int iParam0)
{
	if (iParam0 == 5)
	{
		switch (Local_262.f_47)
		{
			case 0:
				return "MYSTREYCLOTHING";
			
			case 1:
				return "MYSTREYVEHICLE";
			
			case 2:
				return "MYSTREYCHIPS";
			
			case 3:
				return "MYSTREYCASH";
			
			case 4:
				return "MYSTREYRP";
			
			case 5:
				return "MYSTREYINVENTORY";
			
			case 6:
				return "MYSTREYBUSINESS";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "CLOTHING";
			
			case 1:
				return "RP";
			
			case 2:
				return "CASH";
			
			case 3:
				return "HOUSECHIPS";
			
			case 4:
				return "DISCOUNTVOUCHER";
			
			case 6:
				return "PODIUMVEHICLE";
			}
		
		default:
	}
	return "";
}

int func_166()
{
	iVar0 = func_769(unk_0xD803B885F5E47A62());
	switch (iVar0)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 0:
			return 0;
		
		case 5:
			return 1;
		
		case 7:
			return 3;
		
		case 11:
			return 5;
		
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 6:
			return 2;
		
		case 10:
			return 3;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 18:
			return 6;
		
		case 14:
			return 2;
		
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 19:
			return 2;
		
		case 15:
			return 3;
		
		case 4:
			return 4;
		
		default:
	}
	return -1;
}

int func_167()
{
	return -1;
}

int func_168(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_169()
{
	if (unk_0x7F8A39872A07D2CE(&(Local_262.f_405), "INVALID"))
	{
		if (func_769(unk_0xD803B885F5E47A62()) == 11 && Local_262.f_47 == 1)
		{
			return 1;
		}
		if (func_769(unk_0xD803B885F5E47A62()) == 18)
		{
			return 1;
		}
	}
	return 0;
}

void func_170()
{
	if (func_180() || (!unk_0xEA6BC48857E0AC4C(&(Local_262.f_405)) && unk_0x7F8A39872A07D2CE("GIVE_RP_FOR_VEH", &(Local_262.f_405))))
	{
		if (!unk_0xEA6BC48857E0AC4C(&(Local_262.f_405)) && unk_0x7F8A39872A07D2CE("GIVE_RP_FOR_VEH", &(Local_262.f_405)))
		{
			func_42("CAS_LW_RP", 20000, -1);
			unk_0x5D96D8530B3D0904(&(Local_262.f_1), 2);
		}
		else
		{
			func_42(func_179(), func_178(), -1);
			unk_0x5D96D8530B3D0904(&(Local_262.f_1), 2);
		}
	}
	else if (!unk_0xEA6BC48857E0AC4C(&(Local_262.f_405)))
	{
		if (!unk_0x7F8A39872A07D2CE("INVALID", &(Local_262.f_405)))
		{
			func_46(func_179(), -1);
			unk_0x5D96D8530B3D0904(&(Local_262.f_1), 2);
		}
	}
	else
	{
		func_46(func_179(), -1);
		unk_0x5D96D8530B3D0904(&(Local_262.f_1), 2);
	}
	if (Local_262.f_14 == 4)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 4))
		{
			unk_0x5D96D8530B3D0904(&(Local_262.f_1), 4);
		}
	}
	if (func_177())
	{
		if ((!unk_0xEA6BC48857E0AC4C(&(Local_262.f_405)) && !unk_0x7F8A39872A07D2CE("INVALID", &(Local_262.f_405))) && !unk_0x7F8A39872A07D2CE("GIVE_RP_FOR_VEH", &(Local_262.f_405)))
		{
			unk_0x1FA2A2B10F3906F7();
			if (func_176())
			{
				unk_0x1E64CE678ED5F61E("TWOSTRINGS");
			}
			else
			{
				unk_0x1E64CE678ED5F61E(&(Local_262.f_405));
			}
			if (func_176())
			{
				unk_0x6B012227B3921E18(func_173(Local_262.f_74.f_328, 1));
				unk_0x6B012227B3921E18(&(Local_262.f_405));
			}
			if (Local_262.f_14 == 11 && func_180())
			{
				unk_0x6D99DF8263D35CE5(Local_262.f_421);
			}
			unk_0xF08AEB0CD9C97452(func_172(), func_171(), &(Local_262.f_405), 1);
		}
	}
}

int func_171()
{
	switch (Local_262.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return 7;
			break;
		
		case 4:
			return 18;
			break;
		
		case 11:
			return 19;
			break;
		
		case 18:
			return 5;
			break;
	}
	return -1;
}

char* func_172()
{
	switch (Local_262.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_RCLO";
			break;
		
		case 4:
			return "CAS_LW_RDISC";
			break;
		
		case 11:
			return "CAS_LW_RMYST";
			break;
		
		case 18:
			return "CAS_LW_RVEHI";
			break;
	}
	return "";
}

char* func_173(int iParam0, bool bParam1)
{
	if (unk_0xA7082C42B8809BF2(iParam0))
	{
		return func_175(iParam0, bParam1);
	}
	if (unk_0xC41A9202669A24C4(iParam0) || unk_0xAFB8495D36825275(iParam0))
	{
		return func_174(iParam0, bParam1);
	}
	switch (iParam0)
	{
		case 544021352:
			return "HIJAK";
			break;
		
		case -1177863319:
		case 1854776567:
			return "WEENY";
			break;
		
		case -566387422:
		case -362150785:
			return "ANNIS";
			break;
		
		case 627094268:
			return "CHARIOT";
			break;
		
		case -808831384:
		case 142944341:
		case 1878062887:
		case 634118882:
		case 470404958:
		case 666166960:
			if (bParam1)
			{
				return "GALLIVAN";
			}
			else
			{
				return "GALIVANTER";
			}
			break;
		
		case 699456151:
		case -1311240698:
		case -1661854193:
		case 1126868326:
			return "BF";
			break;
		
		case -1995326987:
		case 1177543287:
		case 384071873:
		case -746882698:
		case -1255452397:
		case 1337041428:
		case -394074634:
		case -1566741232:
			if (bParam1)
			{
				return "BENEFAC";
			}
			else
			{
				return "BENEFACTOR";
			}
			break;
		
		case 1349725314:
		case 873639469:
		case -1122289213:
		case -1193103848:
		case 1862507111:
		case 1348744438:
		case -511601230:
			if (bParam1)
			{
				return "UBERMACH";
			}
			else
			{
				return "UBERMACHT";
			}
			break;
		
		case 758895617:
		case -1216765807:
		case 1044193113:
			return "TRUFFADE";
			break;
		
		case 1051415893:
		case -1934452204:
		case 1737773231:
		case -5153954:
		case -142942670:
		case -631760477:
			if (bParam1)
			{
				return "DEWBAUCH";
			}
			else
			{
				return "DEWBAUCHEE";
			}
			break;
		
		case -1008861746:
		case 1032823388:
		case -1461482751:
		case 2136773105:
		case 686471183:
			return "OBEY";
			break;
		
		case 1507916787:
		case -1894894188:
		case 1909141499:
		case 1233534620:
			return "CHEVAL";
			break;
		
		case 1783355638:
			if (bParam1)
			{
				return "JACKSHP";
			}
			else
			{
				return "JACKSHEEPE";
			}
			break;
		
		case 464687292:
		case 1531094468:
		case 1762279763:
		case -1346687836:
		case -907477130:
		case -1883869285:
		case 523724515:
		case -1685021548:
		case 1645267888:
		case -825837129:
		case -1809822327:
		case -1807623979:
		case -1775728740:
		case 741586030:
		case -1683328900:
		case 1922257928:
		case -1745203402:
		case 296357396:
		case 1923400478:
			return "DECLASSE";
			break;
		
		case -682211828:
		case 2006918058:
		case -789894171:
		case -685276541:
		case -1883002148:
		case -2124201592:
		case -1150599089:
		case 1777363799:
		case -498054846:
			return "ALBANY";
			break;
		
		case -1041692462:
		case -16948145:
		case -1543762099:
		case 65402552:
		case -1800170043:
		case -304802106:
		case 736902334:
		case -667151410:
		case 1770332643:
		case -589178377:
		case 1162065741:
		case 633712403:
		case 722226637:
			return "BRAVADO";
			break;
		
		case 1545842587:
		case -2098947590:
		case -1311154784:
		case 2072687711:
			if (bParam1)
			{
				return "GROTTI";
			}
			else
			{
				return "Grotti_2";
			}
			break;
		
		case 108773431:
		case 784565758:
			if (bParam1)
			{
				return "INVERTO";
			}
			else
			{
				return "Invetero";
			}
			break;
		
		case -1651067813:
		case -599568815:
		case 80636076:
		case -1189015600:
		case 989381445:
		case 2046537925:
		case 1912215274:
		case 456714581:
		case 2053223216:
		case -1696146015:
		case -310465116:
		case -810318068:
		case 728614474:
		case 1830407356:
		case -1323100960:
		case -442313018:
		case 1069929536:
		case -1477580979:
		case 37348240:
		case 729783779:
		case -2107990196:
		case 349605904:
		case -1349095620:
			return "VAPID";
			break;
		
		case 48339065:
		case 1951180813:
		case 516990260:
		case 887537515:
		case 2132890591:
		case 1876516712:
		case -1205689942:
		case 1941029835:
		case 1171614426:
		case 1747439474:
		case -1987130134:
		case -119658072:
			return "BRUTE";
			break;
		
		case -1450650718:
			return "BOLLOKAN";
			break;
		
		case -624529134:
		case -591610296:
		case -941272559:
			return "OCELOT";
			break;
		
		case 914654722:
		case -2064372143:
		case -1435919434:
		case 1221512915:
		case 321739290:
			return "CANIS";
			break;
		
		case -1291952903:
			return "OVERFLOD";
			break;
		
		case -433375717:
		case 418536135:
		case -114291515:
		case -891462355:
		case 338562499:
		case -893578776:
		case 55628203:
		case 1987142870:
		case -682108547:
			return "PEGASSI";
			break;
		
		case -2095439403:
		case -227741703:
		case 723973206:
		case -326143852:
			return "IMPONTE";
			break;
		
		case 850565707:
		case -1207771834:
		case -2045594037:
		case -1903012613:
		case 886934177:
		case 2016857647:
		case 970598228:
		case -1130810103:
		case 1682114128:
		case -1372848492:
		case 410882957:
		case -295689028:
			return "KARIN";
			break;
		
		case -377465520:
		case 788045382:
		case -1453280962:
		case 904750859:
			return "MAIBATSU";
			break;
		
		case -344943009:
		case 1039032026:
		case -591651781:
		case -1670998136:
		case -1297672541:
		case -1106353882:
		case 1753414259:
		case -1353081087:
		case 1672195559:
			return "DINKA";
			break;
		
		case -1137532101:
			return "FATHOM";
			break;
		
		case -1622444098:
		case -1479664699:
			return "COIL";
			break;
	}
	switch (iParam0)
	{
		case -391594584:
		case -89291282:
		case 941800958:
		case -1829436850:
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
		
		case -1045541610:
			return "PFISTER";
			break;
		
		case 499169875:
			return "SCHYSTER";
			break;
		
		case -1961627517:
		case -14495224:
		case 1269098716:
			if (bParam1)
			{
				return "DUNDREAR";
			}
			else
			{
				return "DUNDREARY";
			}
			break;
		
		case 444583674:
		case 1886712733:
		case -884690486:
		case -1006919392:
		case -784816453:
		case 475220373:
		case -823509173:
		case 1074326203:
		case 850991848:
		case 1491375716:
		case -845979911:
		case 1560980623:
		case -2130482718:
		case 2071877360:
		case -1860900134:
			return "HVY";
			break;
		
		case 569305213:
		case 1353720154:
		case -947761570:
		case 2112052861:
		case 1938952078:
			return "MTL";
			break;
		
		case 1641462412:
		case -2076478498:
			return "STANLEY";
			break;
		
		case 1518533038:
		case -2137348917:
		case 1917016601:
			return "JOBUILT";
			break;
		
		case -808457413:
			return "MAMMOTH";
			break;
		
		case -120287622:
		case 1723137093:
			if (bParam1)
			{
				return "ZIRCONIU";
			}
			else
			{
				return "ZIRCONIUM";
			}
			break;
		
		case -140902153:
		case -909201658:
			return "SHITZU";
			break;
		
		case -2140431165:
		case 2006142190:
		case 743478836:
			if (bParam1)
			{
				return "WESTERN";
			}
			else
			{
				return "WESTERNMOTORCYCLE";
			}
			break;
		
		case -2128233223:
		case 1147287684:
		case 11251904:
		case -1269889662:
		case -48031959:
			return "NAGASAKI";
			break;
		
		case -634879114:
		case 640818791:
			if (bParam1)
			{
				return "PRINCIPL";
			}
			else
			{
				return "PRINCIPE";
			}
			break;
		
		case 301427732:
			return "LCC";
			break;
		
		case 1131912276:
		case 448402357:
		case -186537451:
			if (!bParam1)
			{
				return "Ped";
			}
			break;
		
		case 1127861609:
		case -1233807380:
		case -400295096:
			if (!bParam1)
			{
				return "TriCycles";
			}
			break;
		
		case 330661258:
		case 1123216662:
		case 1581459400:
			return "ENUS";
			break;
		
		case 884422927:
			if (bParam1)
			{
				return "EMPEROR";
			}
			else
			{
				return "EMPORER";
			}
			break;
		
		case -1289722222:
		case -882629065:
			return "VULCAR";
			break;
		
		case 1663218586:
			return "PROGEN";
			break;
	}
	if (iParam0 == -349601129)
	{
		return "BF";
	}
	else if (iParam0 == 92612664)
	{
		return "CANIS";
	}
	else if (iParam0 == 1488164764)
	{
		return "BRAVADO";
	}
	if (iParam0 == 117401876)
	{
		return "ALBANY";
	}
	if (iParam0 == -1403128555)
	{
		return "PEGASSI";
	}
	else if (iParam0 == -1297672541)
	{
		return "DINKA";
	}
	else if (iParam0 == -142942670)
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	else if (iParam0 == 408192225)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	else if (iParam0 == 486987393)
	{
		return "ENUS";
	}
	else if (iParam0 == 767087018)
	{
		return "ALBANY";
	}
	else if (iParam0 == 1836027715)
	{
		return "DINKA";
	}
	else if (iParam0 == 743478836)
	{
		return "DINKA";
	}
	if (iParam0 == 1836027715)
	{
		return "DINKA";
	}
	if (iParam0 == -1205801634 || iParam0 == -845961253)
	{
		return "VAPID";
	}
	if (iParam0 == 1373123368)
	{
		return "VULCAR";
	}
	if ((iParam0 == 75131841 || iParam0 == -431692672) || iParam0 == -1237253773)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == 841808271)
	{
		return "DECLASSE";
	}
	if (iParam0 == 1078682497)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == 1011753235)
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	if (iParam0 == -159126838)
	{
		return "LCC";
	}
	if (iParam0 == 1265391242)
	{
		return "SHITZU";
	}
	if (iParam0 == -1089039904)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == -589178377)
	{
		return "BRAVADO";
	}
	else if (iParam0 == 729783779)
	{
		return "VAPID";
	}
	else if (iParam0 == -1106353882)
	{
		return "DINKA";
	}
	else if (iParam0 == -631760477)
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == 1581459400)
	{
		return "ENUS";
	}
	else if (iParam0 == 349605904 || iParam0 == -1361687965)
	{
		return "VAPID";
	}
	else if (iParam0 == -1353081087)
	{
		return "DINKA";
	}
	else if (iParam0 == -498054846)
	{
		return "ALBANY";
	}
	else if (iParam0 == 1075432268 || iParam0 == -1214293858)
	{
		return "BUCKING";
	}
	else if (iParam0 == -1566741232)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	else if (iParam0 == 1663218586)
	{
		return "PROGEN";
	}
	else if (iParam0 == 1987142870)
	{
		return "PEGASSI";
	}
	else if (iParam0 == 784565758)
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	else if (iParam0 == 1070967343)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	else if (iParam0 == -1479664699)
	{
		return "COIL";
	}
	if (iParam0 == -2040426790 || iParam0 == -1013450936)
	{
		return "ALBANY";
	}
	else if (iParam0 == -2119578145 || iParam0 == -1790546981)
	{
		return "WILLARD";
	}
	else if ((iParam0 == 1896491931 || iParam0 == 2006667053) || iParam0 == 525509695)
	{
		return "DECLASSE";
	}
	else if (iParam0 == -1361687965 || iParam0 == -326143852)
	{
		return "VAPID";
	}
	if (iParam0 == -2039755226)
	{
		return "WILLARD";
	}
	if ((iParam0 == 223258115 || iParam0 == -1797613329) || iParam0 == -498054846)
	{
		return "DECLASSE";
	}
	if (iParam0 == -899509638 || iParam0 == 16646064)
	{
		if (bParam1)
		{
			return "DUNDREAR";
		}
		else
		{
			return "DUNDREARY";
		}
	}
	if (iParam0 == 1119641113 || iParam0 == -1126264336)
	{
		return "VAPID";
	}
	if (iParam0 == 2068293287 || iParam0 == -831834716)
	{
		return "ALBANY";
	}
	if (iParam0 == -1660945322 || iParam0 == 972671128)
	{
		return "DECLASSE";
	}
	if (((iParam0 == -2030171296 || iParam0 == 906642318) || iParam0 == 704435172) || iParam0 == -604842630)
	{
		return "ENUS";
	}
	if (iParam0 == 1102544804)
	{
		return "BRAVADO";
	}
	if (((iParam0 == 1489967196 || iParam0 == -1485523546) || iParam0 == -888242983) || iParam0 == 1922255844)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (((iParam0 == 1878062887 || iParam0 == 634118882) || iParam0 == 470404958) || iParam0 == 666166960)
	{
		if (bParam1)
		{
			return "GALLIVAN";
		}
		else
		{
			return "GALIVANTER";
		}
	}
	if (iParam0 == -1943285540)
	{
		return "IMPONTE";
	}
	if (iParam0 == -602287871)
	{
		return "ALBANY";
	}
	if (iParam0 == -1829802492)
	{
		return "PFISTER";
	}
	if (iParam0 == -1757836725)
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == 1475773103)
	{
		return "BRAVADO";
	}
	if (iParam0 == 1274868363)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == 2123327359)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == 1203490606 || iParam0 == -432008408)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == 1426219628)
	{
		return "VAPID";
	}
	if (iParam0 == -1930048799)
	{
		return "ENUS";
	}
	if (iParam0 == 234062309)
	{
		return "PEGASSI";
	}
	if (((iParam0 == 683047626 || iParam0 == 101905590) || iParam0 == -663299102) || iParam0 == -915704871)
	{
		return "VAPID";
	}
	if (iParam0 == 86520421)
	{
		return "NAGASAKI";
	}
	if (iParam0 == 390201602 || iParam0 == 741090084)
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == 237764926 || iParam0 == 349315417)
	{
		return "BRAVADO";
	}
	if (iParam0 == -777172681)
	{
		return "OBEY";
	}
	if (iParam0 == -1232836011)
	{
		return "ANNIS";
	}
	if (iParam0 == 1887331236)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == -1071380347 || iParam0 == -401643538)
	{
		return "DECLASSE";
	}
	if (iParam0 == 1549126457)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == 2067820283)
	{
		return "PROGEN";
	}
	if (iParam0 == 482197771)
	{
		return "OCELOT";
	}
	if (iParam0 == 819197656)
	{
		if (bParam1)
		{
			return "EMPEROR";
		}
		else
		{
			return "EMPORER";
		}
	}
	if (iParam0 == -2103821244)
	{
		return "MTL";
	}
	if (iParam0 == -1558399629)
	{
		return "DECLASSE";
	}
	if (iParam0 == -2115793025 || iParam0 == 1491277511)
	{
		return "LCC";
	}
	if ((iParam0 == 6774487 || iParam0 == -405626514) || iParam0 == -440768424)
	{
		return "NAGASAKI";
	}
	if (iParam0 == 822018448 || iParam0 == -255678177)
	{
		return "SHITZU";
	}
	if (((((iParam0 == -1606187161 || iParam0 == -1009268949) || iParam0 == -570033273) || iParam0 == -1404136503) || iParam0 == 1873600305) || iParam0 == -618617997)
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == 1026149675)
	{
		return "BRAVADO";
	}
	if (((iParam0 == 2035069708 || iParam0 == -609625092) || iParam0 == -1289178744) || iParam0 == -1842748181)
	{
		return "PEGASSI";
	}
	if (iParam0 == -674927303)
	{
		return "BF";
	}
	if (iParam0 == -1523428744)
	{
		return "MAIBATSU";
	}
	if (iParam0 == -1590337689)
	{
		return "NAGASAKI";
	}
	if (iParam0 == -2022483795)
	{
		return "PFISTER";
	}
	if (iParam0 == -239841468 || iParam0 == 1790834270)
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((iParam0 == 627535535 || iParam0 == -757735410) || iParam0 == 272929391)
	{
		return "PEGASSI";
	}
	if (iParam0 == 1034187331 || iParam0 == 1093792632)
	{
		return "TRUFFADE";
	}
	if (iParam0 == -1758137366)
	{
		return "OCELOT";
	}
	if (iParam0 == 941494461)
	{
		return "IMPONTE";
	}
	if (iParam0 == 1180875963)
	{
		return "KARIN";
	}
	if (iParam0 == -1649536104)
	{
		return "JOBUILT";
	}
	if (iParam0 == 989294410)
	{
		return "COIL";
	}
	if (iParam0 == -1912017790)
	{
		return "MTL";
	}
	if (iParam0 == -2048333973 || iParam0 == -482719877)
	{
		return "PROGEN";
	}
	if (iParam0 == -312295511 || iParam0 == -827162039)
	{
		return "BF";
	}
	if (iParam0 == 196747873 || iParam0 == -566387422)
	{
		return "ANNIS";
	}
	if (iParam0 == 1886268224 || iParam0 == 1074745671)
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == 1234311532)
	{
		return "PROGEN";
	}
	if (iParam0 == -1405937764)
	{
		return "PEGASSI";
	}
	if (iParam0 == 719660200)
	{
		return "HIJAK";
	}
	if (iParam0 == -982130927)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == -326143852)
	{
		return "IMPONTE";
	}
	if (iParam0 == 159274291 || iParam0 == 917809321)
	{
		return "OCELOT";
	}
	if (iParam0 == 223240013)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == -1924433270 || iParam0 == 433954513) || iParam0 == 562680400)
	{
		return "HVY";
	}
	if (iParam0 == 1356124575)
	{
		return "KARIN";
	}
	if (iParam0 == -32236122 || iParam0 == 1739845664)
	{
		return "BRAVADO";
	}
	if (iParam0 == 1504306544 || iParam0 == 884483972)
	{
		return "PEGASSI";
	}
	if (iParam0 == 1897744184)
	{
		return "BF";
	}
	if (iParam0 == -1210451983)
	{
		return "DECLASSE";
	}
	if (iParam0 == 1939284556 || iParam0 == 2049897956)
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == 1392481335)
	{
		return "COIL";
	}
	if ((iParam0 == 1841130506 || iParam0 == 600450546) || iParam0 == -1532697517)
	{
		return "VAPID";
	}
	if (iParam0 == -998177792 || iParam0 == -1242608589)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == 838982985)
	{
		return "KARIN";
	}
	if (iParam0 == -2118308144 || iParam0 == 1489874736)
	{
		return "MAMMOTH";
	}
	if (iParam0 == 1483171323)
	{
		return "IMPONTE";
	}
	if (iParam0 == 886810209 || iParam0 == 867799010)
	{
		return "OCELOT";
	}
	if (iParam0 == 15219735)
	{
		return "ALBANY";
	}
	if ((iParam0 == 1104234922 || iParam0 == 1352136073) || iParam0 == -410205223)
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == 903794909)
	{
		return "ANNIS";
	}
	if (iParam0 == 1871995513)
	{
		return "DECLASSE";
	}
	if (iParam0 == -1529242755)
	{
		return "COIL";
	}
	if ((iParam0 == -1848994066 || iParam0 == 1561920505) || iParam0 == 661493923)
	{
		return "PFISTER";
	}
	if (iParam0 == 1741861769)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == -121446169)
	{
		return "CANIS";
	}
	if (iParam0 == -2079788230)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == -391595372)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == -212993243)
	{
		return "HVY";
	}
	if ((iParam0 == -313185164 || iParam0 == -376434238) || iParam0 == -2120700196)
	{
		return "OVERFLOD";
	}
	if (iParam0 == 931280609)
	{
		return "WEENY";
	}
	if ((((iParam0 == 1909189272 || iParam0 == -1267543371) || iParam0 == -1259134696) || iParam0 == 1254014755) || iParam0 == -986944621)
	{
		return "VAPID";
	}
	if (iParam0 == 1617472902)
	{
		return "VULCAR";
	}
	if (iParam0 == 1046206681)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == 1115909093)
	{
		return "DECLASSE";
	}
	if (iParam0 == 1031562256)
	{
		return "PEGASSI";
	}
	if (iParam0 == -214906006)
	{
		return "DINKA";
	}
	if (iParam0 == -1134706562)
	{
		return "CHEVAL";
	}
	if (iParam0 == -988501280)
	{
		return "RUNE";
	}
	if (iParam0 == 500482303)
	{
		return "OCELOT";
	}
	if (iParam0 == -54332285)
	{
		return "CANIS";
	}
	if (iParam0 == 1945374990)
	{
		return "MAIBATSU";
	}
	if (iParam0 == 1653666139)
	{
		return "MTL";
	}
	if (iParam0 == 219613597)
	{
		return "VAPID";
	}
	if (iParam0 == -420911112)
	{
		return "MAMMOTH";
	}
	if (iParam0 == 2069146067)
	{
		return "PEGASSI";
	}
	if (iParam0 == 321186144)
	{
		return "ENUS";
	}
	if (iParam0 == 2044532910)
	{
		return "HVY";
	}
	if (iParam0 == -638562243)
	{
		return "DECLASSE";
	}
	if ((iParam0 == 1721676810 || iParam0 == 840387324) || iParam0 == -715746948)
	{
		return "BRAVADO";
	}
	if ((iParam0 == -1146969353 || iParam0 == 1542143200) || iParam0 == -579747861)
	{
		return "HVY";
	}
	if ((iParam0 == 628003514 || iParam0 == 1537277726) || iParam0 == 1239571361)
	{
		return "WEENY";
	}
	if (iParam0 == -1168952148)
	{
		return "PEGASSI";
	}
	if ((((((((((iParam0 == -1566607184 || iParam0 == 444994115) || iParam0 == 1637620610) || iParam0 == -755532233) || iParam0 == -688189648) || iParam0 == -1375060657) || iParam0 == -1293924613) || iParam0 == -2061049099) || iParam0 == 373261600) || iParam0 == 1742022738) || iParam0 == 833469436)
	{
		return "VAPID";
	}
	if (iParam0 == 1591739866)
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((((((((iParam0 == -2096690334 || iParam0 == 1009171724) || iParam0 == -1924800695) || iParam0 == -1744505657) || iParam0 == -49115651) || iParam0 == 1456744817) || iParam0 == 2139203625) || iParam0 == -1890996696) || iParam0 == 2038858402)
	{
		return "DECLASSE";
	}
	if (iParam0 == 1279262537)
	{
		return "SCHYSTER";
	}
	if (iParam0 == -507495760)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == -331467772)
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == -801550069 || iParam0 == 679453769) || iParam0 == 1909700336)
	{
		return "MTL";
	}
	if ((iParam0 == -27326686 || iParam0 == -1812949672) || iParam0 == -1374500452)
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if ((iParam0 == 668439077 || iParam0 == -1694081890) || iParam0 == -2042350822)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if ((iParam0 == 540101442 || iParam0 == -1106120762) || iParam0 == -1478704292)
	{
		return "ANNIS";
	}
	if (iParam0 == -1349095620 || iParam0 == -1804415708)
	{
		return "VAPID";
	}
	if (iParam0 == 686471183)
	{
		return "OBEY";
	}
	if (iParam0 == 310284501 || iParam0 == 1854776567)
	{
		return "WEENY";
	}
	if (iParam0 == 722226637 || iParam0 == 1934384720)
	{
		return "BRAVADO";
	}
	if (iParam0 == -362150785 || iParam0 == -324618589)
	{
		return "ANNIS";
	}
	if (iParam0 == -664141241)
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == -941272559 || iParam0 == -208911803)
	{
		return "OCELOT";
	}
	if (iParam0 == -882629065)
	{
		return "VULCAR";
	}
	if (iParam0 == -1829436850)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == -447711397 || iParam0 == 1416466158)
	{
		return "ENUS";
	}
	if (iParam0 == 1044193113)
	{
		return "TRUFFADE";
	}
	if (iParam0 == 1862507111)
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == 1323778901)
	{
		return "PROGEN";
	}
	if (iParam0 == -1620126302)
	{
		return "VYSSER";
	}
	if (iParam0 == 916547552)
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == -1346687836 || iParam0 == -907477130)
	{
		return "DECLASSE";
	}
	if (iParam0 == 340154634)
	{
		return "PROGEN";
	}
	if (iParam0 == -1756021720)
	{
		return "KARIN";
	}
	if (iParam0 == -1132721664)
	{
		return "OVERFLOD";
	}
	if (iParam0 == 409049982)
	{
		return "DINKA";
	}
	if (iParam0 == -834353991)
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == 83136452)
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == 987469656)
	{
		return "DINKA";
	}
	if (iParam0 == 872704284)
	{
		return "KARIN";
	}
	if (iParam0 == 1456336509)
	{
		return "ALBANY";
	}
	if (iParam0 == 1284356689)
	{
		return "RUNE";
	}
	if (!bParam1)
	{
		if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "GALLIVAN"))
		{
			return "GALIVANTER";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "BENEFAC"))
		{
			return "BENEFACTOR";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "UBERMACH"))
		{
			return "UBERMACHT";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "DEWBAUCH"))
		{
			return "DEWBAUCHEE";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "JACKSHP"))
		{
			return "JACKSHEEPE";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "GROTTI"))
		{
			return "Grotti_2";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "INVERTO"))
		{
			return "Invetero";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "LAMPADA"))
		{
			return "LAMPADATI";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "DUNDREAR"))
		{
			return "DUNDREARY";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "ZIRCONIU"))
		{
			return "ZIRCONIUM";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "WESTERN"))
		{
			return "WESTERNMOTORCYCLE";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "PRINCIPL"))
		{
			return "PRINCIPE";
		}
		else if (unk_0x7F8A39872A07D2CE(unk_0xF7AF4F159FF99F97(iParam0), "EMPEROR"))
		{
			return "EMPORER";
		}
		else
		{
			return unk_0xF7AF4F159FF99F97(iParam0);
		}
	}
	else
	{
		return unk_0xF7AF4F159FF99F97(iParam0);
	}
	return "";
}

char* func_174(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 744705981:
		case 1949211328:
			return "MAIBATSU";
		
		case -1660661558:
		case 353883353:
		case 621481054:
		case -1214505995:
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case -50547061:
		case 837858166:
		case -644710429:
		case 970356638:
		case -2122757008:
			return "WESTERN";
			break;
		
		case 788747387:
		case 745926877:
			return "NAGASAKI";
			break;
		
		case -1746576111:
		case -1673356438:
		case 1077420264:
		case -1281684762:
			return "JOBUILT";
			break;
	}
	if (iParam0 == 1341619767)
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (((((iParam0 == 165154707 || iParam0 == -339587598) || iParam0 == 1075432268) || iParam0 == -1214293858) || iParam0 == 710198397) || iParam0 == -1671539132)
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (iParam0 == 1824333165)
	{
		return "WESTERN";
	}
	if (iParam0 == 970385471 || iParam0 == 1489874736)
	{
		return "MAMMOTH";
	}
	if (iParam0 == -1845487887 || iParam0 == -1295027632)
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	return "";
}

char* func_175(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 400514754:
		case 290013743:
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case 861409633:
		case -282946103:
			return "OCELOT";
			break;
		
		case 1033245328:
			if (!bParam1)
			{
				return "OCELOT";
			}
			break;
		
		case -616331036:
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case -311022263:
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case -1030275036:
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case 1070967343:
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
	}
	if (iParam0 == 231083307 || iParam0 == 437538602)
	{
		if (bParam1)
		{
			return "PEGASSI";
		}
		else
		{
			return "PEGASSI";
		}
	}
	return "";
}

int func_176()
{
	switch (Local_262.f_14)
	{
		case 11:
			switch (Local_262.f_47)
			{
				case 1:
					return 1;
				
				default:
			}
			break;
		
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_177()
{
	switch (Local_262.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 4:
		case 11:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_178()
{
	switch (Local_262.f_14)
	{
		case 1:
			return 2500;
			break;
		
		case 5:
			return 5000;
			break;
		
		case 9:
			return 7500;
			break;
		
		case 13:
			return 10000;
			break;
		
		case 17:
			return 15000;
			break;
		
		case 2:
			return 20000;
			break;
		
		case 6:
			return 30000;
			break;
		
		case 14:
			return 40000;
			break;
		
		case 19:
			return 50000;
			break;
		
		case 3:
			return 10000;
			break;
		
		case 7:
			return 15000;
			break;
		
		case 10:
			return 20000;
			break;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_262.f_47)
			{
				case 2:
				case 3:
				case 4:
					return Local_262.f_421;
					break;
			}
			break;
	}
	return 0;
}

char* func_179()
{
	switch (Local_262.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_CLO";
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
			return "CAS_LW_RP";
			break;
		
		case 2:
		case 6:
		case 14:
		case 19:
			return "CAS_LW_CASH";
			break;
		
		case 4:
			return "CAS_LW_DISC";
			break;
		
		case 3:
		case 7:
		case 10:
		case 15:
			return "CAS_LW_CHIP";
			break;
		
		case 11:
			return "CAS_LW_MYST";
			break;
		
		case 18:
			return "CAS_LW_VEHI";
			break;
	}
	return "";
}

int func_180()
{
	switch (Local_262.f_14)
	{
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
		case 2:
		case 6:
		case 14:
		case 19:
		case 3:
		case 7:
		case 10:
		case 15:
			return 1;
			break;
		
		case 11:
			switch (Local_262.f_47)
			{
				case 2:
				case 3:
				case 4:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_181()
{
	switch (func_737(Local_262.f_14))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return func_730(&(Local_262.f_405), &Local_262, func_737(Local_262.f_14), 0);
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return func_722(&(Local_262.f_421), &(Local_262.f_405), func_737(Local_262.f_14), 0);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return func_709(&(Local_262.f_421), &(Local_262.f_405), func_737(Local_262.f_14), 0);
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return func_679(&(Local_262.f_421), &(Local_262.f_405), &(Local_262.f_443), func_737(Local_262.f_14), 0);
			break;
		
		case 17:
			if (!unk_0xEAE0D21A50E6C7F4(Local_262, 19))
			{
				Local_262.f_47 = func_677();
				unk_0x5D96D8530B3D0904(&Local_262, 19);
			}
			else
			{
				return func_537(&(Local_262.f_421), &(Local_262.f_405), &(Local_262.f_73), &(Local_262.f_74), Local_262.f_47, &Local_262, Local_706, &(Local_262.f_443));
			}
			break;
		
		case 18:
			return func_191(&(Local_262.f_405), &(Local_262.f_73), &(Local_262.f_74), func_737(Local_262.f_14), 0);
			break;
		
		case 19:
			return func_182(&(Local_262.f_405), func_737(Local_262.f_14));
			break;
	}
	return 0;
}

int func_182(char* sParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		iVar0 = func_189();
		func_184(func_188(iVar0));
		StringCopy(sParam0, func_183(iVar0), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ELT_NAME";
		
		case 1:
			return "BOATS_NAMEb";
		
		case 2:
			return "LGM_NAME";
		
		case 3:
			return "SSS_NAME";
		
		case 4:
			return "CANDC_NAMEb";
		
		case 5:
			return "PAM_NAME";
		
		default:
	}
	return "LRMVOUCHER_INVALID";
}

void func_184(int iParam0)
{
	if (iParam0 == 8)
	{
		func_187(129, 1, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_187(135, 1, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_187(136, 1, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_187(137, 1, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		func_64(8269, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		iVar1 = unk_0xDD0E7998AE8AD485();
		func_64(8270, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		func_64(8271, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		iVar3 = unk_0xDD0E7998AE8AD485();
		func_64(8272, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		func_64(8273, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		iVar5 = unk_0xDD0E7998AE8AD485();
		func_64(8274, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!unk_0x8CD06866876216F2())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0))
		{
			bVar6 = true;
			unk_0x5D96D8530B3D0904(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || !unk_0xEAE0D21A50E6C7F4(Global_2097152[func_186()].f_6174.f_10, iParam0))
	{
		bVar6 = true;
		unk_0x5D96D8530B3D0904(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x5D96D8530B3D0904(&(Global_2097152[func_186()].f_6174.f_10), iParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_STR");
		unk_0x6B012227B3921E18(func_185(iParam0));
		unk_0x1AEA174B291A9906(&cVar7, &cVar7, 1, 0, "", 0);
	}
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_186()
{
	iVar0 = 0;
	return iVar0;
}

int func_187(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_18();
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

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		
		case 1:
			return 13;
		
		case 2:
			return 14;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 17;
		
		default:
	}
	return 14;
}

int func_189()
{
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		iVar0[iVar8] = iVar8;
		iVar7 = (iVar7 + func_190(iVar0[iVar8]));
		iVar8++;
	}
	iVar9 = unk_0xA0A5F9CC633A6814(0, iVar7);
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (iVar9 <= func_190(iVar0[iVar8]))
		{
			return iVar0[iVar8];
		}
		else
		{
			iVar9 = (iVar9 - func_190(iVar0[iVar8]));
		}
		iVar8++;
	}
	return -1;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26073;
		
		case 1:
			return Global_262145.f_26073;
		
		case 2:
			return Global_262145.f_26073;
		
		case 3:
			return Global_262145.f_26073;
		
		case 4:
			return Global_262145.f_26073;
		
		case 5:
			return Global_262145.f_26073;
		
		default:
	}
	return 0;
}

int func_191(char* sParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		if (!func_536() && unk_0xC844350D5D58C99A(Global_1696074))
		{
			*iParam1 = Global_1696074;
			if (func_270(*iParam1, uParam2, &(uParam2->f_320), &(uParam2->f_321), &(uParam2->f_322), &(uParam2->f_323), 1, 0, 1, 1) || func_72(&(uParam2->f_329), 60000, 0))
			{
				if (uParam2->f_323 != 3 && !func_72(&(uParam2->f_329), 60000, 0))
				{
					StringCopy(sParam0, unk_0x1739BA50603D849C(unk_0x134B62B726CEC8E6(*iParam1)), 64);
					Global_1696076 = unk_0xDD0E7998AE8AD485();
					uParam2->f_328 = unk_0x134B62B726CEC8E6(*iParam1);
					if (func_113())
					{
						Global_1696075 = 1;
					}
					else
					{
						func_140(-30941642, unk_0x134B62B726CEC8E6(*iParam1));
						func_269();
					}
					func_245(158, "LUCKY_POD_TXT", 1, 0, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					if (func_72(&(uParam2->f_329), 60000, 0))
					{
					}
					StringCopy(sParam0, "INVALID", 64);
				}
				if (Global_262145.f_28087)
				{
					if (uParam2->f_328 == -1566607184)
					{
						iVar0 = func_24(-364482041);
						unk_0x5D96D8530B3D0904(&iVar0, 6);
						func_140(-364482041, iVar0);
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 0);
				func_243();
				func_71(&(uParam2->f_329));
				return 1;
			}
		}
		else
		{
			if (!unk_0xC844350D5D58C99A(Global_1696074))
			{
			}
			StringCopy(sParam0, "GIVE_RP_FOR_VEH", 64);
			func_192(0, unk_0x16F2683693E537C9(), "200000", -1827353931, 1223799452, 20000, 1, -1, 0, 0, 0);
			return 1;
		}
	}
	else if (iParam3 == -1)
	{
		if (func_270(*iParam1, uParam2, &(uParam2->f_320), &(uParam2->f_321), &(uParam2->f_322), &(uParam2->f_323), 1, 0, 1, 0) || func_72(&(uParam2->f_329), 60000, 0))
		{
			if (uParam2->f_323 != 3 && !func_72(&(uParam2->f_329), 60000, 0))
			{
				StringCopy(sParam0, unk_0x1739BA50603D849C(unk_0x134B62B726CEC8E6(*iParam1)), 64);
			}
			else
			{
				if (func_72(&(uParam2->f_329), 60000, 0))
				{
				}
				StringCopy(sParam0, "INVALID", 64);
			}
			if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(*iParam1)))
			{
				unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 0);
			}
			else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam1)))
			{
				unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_840), 1);
			}
			func_71(&(uParam2->f_329));
			return 1;
		}
	}
	return 0;
}

int func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	iVar0 = func_202(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_198(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_193(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_193(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vVar0 = { func_196(iParam0, 1) };
	if (iParam0 == func_195(unk_0x16F2683693E537C9()))
	{
		func_194(1);
	}
	func_198(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_194(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_195(int iParam0)
{
	return iParam0;
}

Vector3 func_196(int iParam0, bool bParam1)
{
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar3 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_197(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	fVar6 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar6 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0,18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0,18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_197(int iParam0)
{
	return iParam0;
}

void func_198(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0].f_6 == 0 || Global_2439138.f_1290[iVar0].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1] = { vParam0 };
			Global_2439138.f_1290[iVar1].f_6 = 1;
			Global_2439138.f_1290[iVar1].f_4 = func_201(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_200();
			Global_2439138.f_1290[iVar1].f_10 = func_199();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam6);
		}
	}
}

int func_199()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_200()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_201(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0,402f;
		*uParam4 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0,212f;
		*uParam4 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam3 = (fVar2 + 0,212f);
	*uParam4 = (fVar3 + 0,286f);
	return fVar1;
}

var func_202(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_203(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_203(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_242(unk_0xD803B885F5E47A62()) || func_241(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_238() || func_235(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_234(sParam2))
	{
	}
	if (func_233())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_231(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_230(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_227(0, &iVar1);
					break;
				
				case 3:
					func_227(1, &iVar1);
					break;
				
				case 1:
					func_223(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_221(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_212((func_220(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_2 != -1)
				{
					func_221(1165, iVar1, -1);
				}
				func_206(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_204((func_205(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_204((func_205(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_204(int iParam0)
{
	if (func_233())
	{
		Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_5 = iParam0;
		func_140(-1804740956, iParam0);
	}
}

int func_205(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_24(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_24(-1804740956);
		}
	}
	return 0;
}

void func_206(int iParam0)
{
	Var0 = { func_211(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_209(func_210(&Var0));
			if (iVar13 == 0)
			{
				func_208(&Global_1387915, iParam0);
				func_207(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_208(&Global_1387916, iParam0);
				func_207(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_208(&Global_1387917, iParam0);
				func_207(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_208(&Global_1387918, iParam0);
				func_207(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_208(&Global_1387919, iParam0);
				func_207(1894078811, Global_1387919);
			}
		}
	}
}

void func_207(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_209(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_210(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_211(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	if (func_233())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_22(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_22(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_219(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_6 = func_217(iParam0, 1);
		}
		func_216(639, iParam0, -1, 1);
		func_64(640, func_217(iParam0, 1), -1, 1, 0);
		Global_1388060[func_22(-1)] = iParam0;
		func_213(-1109644434, 7, 0);
	}
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	if (func_215(iParam1, iParam2))
	{
		iVar0 = func_214();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_214()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_215(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_22(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_22(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_22(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_22(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_22(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_22(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_22(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_22(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_22(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_22(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_22(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_22(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_22(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_22(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_22(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_22(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_22(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_22(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_22(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_22(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_22(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_22(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_22(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_22(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_22(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_22(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_22(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_22(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_22(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_22(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_22(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_22(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_22(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_22(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_22(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_22(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_22(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_22(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_22(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_22(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_22(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_22(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_22(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_22(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_22(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_22(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_22(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_22(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_22(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_22(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_22(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_22(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_22(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_22(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_22(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_22(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_22(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_22(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_22(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_22(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_22(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_22(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_22(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_22(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_22(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_22(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_22(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_22(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_22(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_22(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_22(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_22(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_22(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_22(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_22(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_22(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_22(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_22(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_22(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_22(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_22(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_22(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_22(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_22(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_22(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_22(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_22(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_22(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_22(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_22(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_22(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_22(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_22(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_22(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_22(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_22(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_22(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_22(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_22(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_22(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_22(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_22(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_22(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_22(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_22(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_22(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_217(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_218(iParam0, 0);
}

int func_218(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_219(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_220(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_22(-1)];
			}
			else if (func_219(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_22(-1)];
	}
	return 0;
}

void func_221(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_21(iParam0, func_22(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_222(iParam0))
	{
		func_64(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_216(iParam0, iVar0, iParam2, 1);
	}
}

int func_222(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

void func_223(int iParam0)
{
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != -1)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_226(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_225(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_224(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_224(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_224(int iParam0, int iParam1)
{
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_225(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_211(iParam0) };
		Global_2513231 = { func_211(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				unk_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 0);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 1);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_227(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_225(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_228(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_225(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_224(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_224(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_228(int iParam0, int iParam1)
{
	return vdist(func_229(iParam0), func_229(iParam1));
	return 0f;
}

Vector3 func_229(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_230(int iParam0)
{
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_224(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_231(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_220(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_220(unk_0xD803B885F5E47A62());
		}
	}
	if (func_232(8000, 0, 0) > 0)
	{
		if (func_232(8000, 0, 0) < (iParam0 + func_220(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_232(8000, 0, 0) - func_220(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_232(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_233()
{
	return 1;
}

int func_234(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	return func_236(func_237(iParam0));
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_237(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_238()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_240();
	}
	return func_239(Global_4456448.f_194990);
}

int func_239(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_240()
{
	return Global_2450632.f_17;
}

bool func_241(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_242(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_243()
{
	vVar0.x = 1717859064;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = 1;
	iVar3 = func_244(1, 1);
	if (iVar3 != -1)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iVar3);
	}
}

var func_244(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_245(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_247(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_246(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_246(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_247(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_262();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-757906387) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(-757906387) > 0)
		{
			return 0;
		}
	}
	if (func_261() == 0)
	{
		func_259();
		return 0;
	}
	func_258(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872]), sParam1, 64);
	Global_111638.f_14136[Global_21872].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872].f_25 = iParam7;
	Global_111638.f_14136[Global_21872].f_26 = uParam8;
	Global_111638.f_14136[Global_21872].f_29 = uParam9;
	Global_111638.f_14136[Global_21872].f_30 = uParam12;
	Global_111638.f_14136[Global_21872].f_31 = uParam11;
	Global_111638.f_14136[Global_21872].f_28 = 0;
	Global_111638.f_14136[Global_21872].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872].f_83), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872].f_99[0] = 1;
		Global_111638.f_14136[Global_21872].f_99[1] = 1;
		Global_111638.f_14136[Global_21872].f_99[2] = 1;
		Global_8062 = 4;
		func_257(0);
		func_257(2);
		func_257(1);
	}
	else
	{
		func_262();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_257(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_257(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_257(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_257(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0].f_17 = 1;
			Global_111638.f_14046[1].f_17 = 1;
			Global_111638.f_14046[2].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_262();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_256())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_255(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_251(1);
			func_255(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_248(uParam0, sParam1);
	return 1;
}

void func_248(var uParam0, char* sParam1)
{
	if (!func_249())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_249()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_8())
	{
		return 0;
	}
	if (func_250(unk_0xD803B885F5E47A62()))
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

bool func_250(int iParam0)
{
	return func_33(iParam0, 20);
}

void func_251(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_254(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_253(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_252(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_252(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_252(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_252(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_252(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_253(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(Global_7362);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_253(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_253(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_253(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && unk_0x7F8A39872A07D2CE(&(Global_7363[iVar1]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_253(&(Global_7363[iVar1]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_252(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_252(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1].f_10), to_float(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_252(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_253(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_253(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_253(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_253(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_253(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_253(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_254(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_255(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_256()
{
	return Global_1312877;
}

void func_257(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_258(int iParam0)
{
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0].f_18 = iVar0;
	Global_111638.f_14136[iParam0].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0].f_18.f_5 = iVar5;
}

void func_259()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_260(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_260(struct<6> Param0, struct<6> Param6)
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

int func_261()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0 || Global_111638.f_14136[iVar2].f_24 == 1)
		{
			if (!func_260(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872].f_99[0] = 0;
	Global_111638.f_14136[Global_21872].f_99[1] = 0;
	Global_111638.f_14136[Global_21872].f_99[2] = 0;
	return 1;
}

void func_262()
{
	if (func_254(14))
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
		Global_19486 = func_263();
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

var func_263()
{
	func_264();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_264()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_267(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_266(unk_0x16F2683693E537C9());
			if (func_265(iVar0) && (!func_254(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_265(Global_111638.f_2358.f_539.f_4321))
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

bool func_265(int iParam0)
{
	return iParam0 < 3;
}

int func_266(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_267(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_267(int iParam0)
{
	if (func_265(iParam0))
	{
		return func_268(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_268(int iParam0)
{
	return Global_1798[iParam0];
}

void func_269()
{
	func_64(8350, (Global_1696076 + 604800), -1, 1, 0);
	Global_2460612 = 1;
}

int func_270(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = -1;
	bVar2 = false;
	iVar4 = unk_0x134B62B726CEC8E6(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_535(unk_0x134B62B726CEC8E6(iParam0), -1))
			{
				func_527(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_526(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_518(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_314, 7))
					{
						if (func_403(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						_set_warning_message_2("BRSCRWTEX", "LW_LOSE_VEH", iVar3, 0, 0, -1, 0, 0, 1, 0);
						if (unk_0xE57E602827E07C9D() && !func_402())
						{
							if (unk_0x06F8112AA79C53D9(2, 201))
							{
								unk_0x0674E58A79778E99(&(uParam1->f_314), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (unk_0x06F8112AA79C53D9(2, 202) || func_401())
							{
								unk_0x0674E58A79778E99(&(uParam1->f_314), 7);
							}
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam1->f_314), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!func_400(unk_0x134B62B726CEC8E6(iParam0)) && !unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (func_399())
				{
					iVar5 = 0;
					while (iVar5 < 307)
					{
						if (func_395(iVar5))
						{
							bVar2 = true;
							iVar5 = 308;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						_set_warning_message_2("BRSCRWTEX", "CASINO_PRIZE_V1", iVar3, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						_set_warning_message_2("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, 0, -1, 0, 0, 1, 0);
					}
					if (unk_0xE57E602827E07C9D())
					{
						if (unk_0x06F8112AA79C53D9(2, 202) || func_401())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (unk_0x06F8112AA79C53D9(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[0].f_102, 2))
				{
					iVar3 = 18;
					_set_warning_message_2("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, 0, -1, 0, 0, 1, 0);
					if (unk_0xE57E602827E07C9D())
					{
						if (unk_0x06F8112AA79C53D9(2, 202) || func_401())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (unk_0x06F8112AA79C53D9(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		
		case 1:
			if (func_129(iParam0))
			{
				if (func_113())
				{
					if (func_349(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								func_345(*uParam4, *iParam3, -1);
							}
							if (!func_535(unk_0x134B62B726CEC8E6(iParam0), -1))
							{
								func_340(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
							}
							func_301(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1);
							func_271(iParam0, *iParam3);
							func_213(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						func_345(*uParam4, *iParam3, -1);
					}
					if (!func_535(unk_0x134B62B726CEC8E6(iParam0), -1))
					{
						func_340(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
					}
					func_301(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1);
					func_271(iParam0, *iParam3);
					func_213(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_271(int iParam0, int iParam1)
{
	func_300(iParam0);
	func_272(iParam1);
}

void func_272(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 307)
	{
		unk_0x5D96D8530B3D0904(&(Global_1323615[iParam0].f_102), 2);
		func_298(101, 1, -1, 1);
		func_279(iParam0, &(Global_1323615[iParam0]), 1, -1, 0, 0);
		if (!Global_1315802)
		{
			func_273(91, 3, 1);
			Global_1315802 = 1;
		}
		else
		{
			func_273(91, 3, 0);
		}
	}
}

void func_273(int iParam0, int iParam1, bool bParam2)
{
	Global_8042 = iParam0;
	if (Global_117[iParam0].f_8 != 150)
	{
		func_262();
		if (iParam1 == 4)
		{
			func_278(iParam0, 0, 1);
			func_278(iParam0, 1, 1);
			func_278(iParam0, 2, 1);
			func_277(iParam0, 0, 1);
			func_277(iParam0, 1, 1);
			func_277(iParam0, 2, 1);
		}
		else
		{
			if (func_276(iParam0, iParam1) == 1 && func_275(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_278(iParam0, iVar0, 1);
			func_277(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1] = { func_246(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1] = { func_246(iParam0) };
						Global_7966[1].f_5 = iParam1;
						func_274();
					}
				}
				else
				{
					Global_7966[1] = { func_246(iParam0) };
					Global_7966[1].f_5 = iParam1;
					func_274();
				}
			}
			else
			{
				Global_7966[1] = { func_246(iParam0) };
				Global_7966[1].f_5 = iParam1;
				func_274();
			}
		}
	}
}

void func_274()
{
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_1798[Global_8042].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar16, unk_0x19C9F30A7697B43C(&(Global_7966[1])), 64);
		sVar32 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_7966[1]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0674E58A79778E99(&Global_7356, 0);
}

int func_275(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

int func_276(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

void func_277(int iParam0, int iParam1, int iParam2)
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

void func_278(int iParam0, int iParam1, int iParam2)
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

int func_279(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_186()].f_6174.f_1274 = unk_0xDD0E7998AE8AD485();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_297(1411, iParam0);
	func_66(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_297(1412, iParam0);
	func_66(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_296(iParam0))
	{
	}
	else
	{
		iVar1 = func_297(1413, iParam0);
		func_66(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_297(1414, iParam0) + iVar0);
				func_66(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_295(iParam0) + (iVar0 - 25));
				func_66(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_297(1439, iParam0) + iVar0);
			func_66(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_297(1441, iParam0);
	func_66(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_297(1442, iParam0);
	func_66(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_297(1443, iParam0);
	func_66(iVar1, uParam1->f_64, iParam3, 1);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(1444, iParam0);
		func_66(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_297(1445, iParam0);
	func_66(iVar1, uParam1->f_67, iParam3, 1);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(1446, iParam0);
		func_66(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_297(1447, iParam0);
	func_66(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_297(1448, iParam0);
	func_66(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_297(1449, iParam0);
	func_66(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_297(1450, iParam0);
	func_66(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_297(1451, iParam0);
	func_66(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_297(1452, iParam0);
	func_66(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_297(1453, iParam0);
	func_66(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_297(1454, iParam0);
	func_66(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_297(1455, iParam0);
	func_66(iVar1, uParam1->f_8, iParam3, 1);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(3880, iParam0);
		func_66(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_297(3881, iParam0);
		func_66(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_297(3882, iParam0);
		func_66(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_294(iParam0);
		func_66(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_293(iParam0);
		func_66(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_282(iParam0);
		func_66(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_186()].f_6174.f_1274;
	if (bParam5)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
	}
	func_64(1628, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_64(func_281(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_281(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_296(iParam0))
	{
		if (!unk_0xEA6BC48857E0AC4C(&(uParam1->f_1)))
		{
			func_280(func_281(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_280(int iParam0, var uParam1, int iParam2)
{
	iVar0 = Global_2548434[iParam0][func_22(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xF345706D5D9F9C04(iVar0, uParam1);
	}
}

int func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_282(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_292(iParam0);
		return func_291(iVar0);
	}
	return (func_284(iParam0, -1) * iParam0 + 1);
}

int func_284(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_287(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_286(iParam1))
			{
				return 0;
			}
			else if (func_285(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_287(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_288(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_288(unk_0xD803B885F5E47A62(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_288(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_8())
	{
		if (!func_290(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_1590373)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373].f_195, 24) || func_289(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 24);
}

int func_289(int iParam0)
{
	if (iParam0 != func_8())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_290(int iParam0)
{
	if (iParam0 != func_8())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_292(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_293(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_294(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_295(int iParam0)
{
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_283(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

int func_297(int iParam0, int iParam1)
{
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_283(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_283(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_283(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_283(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	return iVar0;
}

void func_298(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_299())
	{
		iVar0 = Global_2583656[iParam0][func_22(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_299()
{
	return 1;
	return 0;
}

void func_300(int iParam0)
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
				unk_0x5D96D8530B3D0904(&iVar0, 3);
				unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_301(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_338();
		if (unk_0x40B3F576B41FA183(iParam0) != 0)
		{
			unk_0xF95FF0A179413A39(iParam0, 0);
		}
		if (bParam5)
		{
			unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 12);
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 15);
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 2);
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 8);
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 9);
			func_336();
			func_335(iParam1, 1);
			Global_1681926 = 1;
		}
		func_305(iParam0, &(Global_1323615[iParam1]), bParam5);
		Global_1323615[iParam1].f_70 = 1;
		if (bParam2)
		{
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 1);
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 6);
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 7);
		}
		if (bParam3)
		{
			unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 0);
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 0);
		}
		if (bParam4)
		{
			func_304(iParam1);
		}
		if (bParam6)
		{
			unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 15);
			unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 2);
		}
		if (bParam7)
		{
			unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 27);
		}
		if (bParam8)
		{
			unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 13);
		}
		if (unk_0xF1D385D359D58F72("MPBitset", 3))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				if (unk_0xEAE0D21A50E6C7F4(iVar0, 3))
				{
					unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 2);
				}
			}
		}
		if (unk_0x67303E186EA6C9A0(iParam0) >= 0)
		{
			func_303(&iParam0, &(Global_1323615[iParam1].f_9), &(Global_1323615[iParam1].f_59));
			if (func_302(iParam1, &uVar1))
			{
				if (bParam5 || unk_0x728870EB733D12A1() == iParam0)
				{
					Global_2097152[func_186()].f_6086.f_86 = iParam1 + 1;
				}
				unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1].f_102), 25);
				unk_0x0674E58A79778E99(&(Global_1323615[iParam1].f_102), 26);
			}
		}
		Global_2097152[func_186()].f_6174.f_1274 = unk_0xDD0E7998AE8AD485();
		func_279(iParam1, &(Global_1323615[iParam1]), 0, iParam9, 0, 0);
	}
}

bool func_302(int iParam0, var uParam1)
{
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_303(int iParam0, var uParam1, var uParam2)
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

void func_304(int iParam0)
{
	Global_2097152[func_186()].f_6174.f_2 = iParam0;
}

void func_305(int iParam0, var uParam1, bool bParam2)
{
	func_334(uParam1);
	if (bParam2)
	{
		uParam1->f_102 = 0;
		uParam1->f_104 = 0;
		StringCopy(&(uParam1->f_105), "", 64);
		StringCopy(&(uParam1->f_121), "", 64);
		uParam1->f_139 = 0;
		uParam1->f_137 = -1;
		uParam1->f_138 = -1;
		uParam1->f_140 = unk_0xDD0E7998AE8AD485();
		if (Global_262145.f_10616)
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_102), 22);
		}
	}
	if (func_333(iParam0, 0))
	{
		func_332();
		unk_0x5D96D8530B3D0904(&(uParam1->f_102), 3);
	}
	func_308(iParam0, uParam1);
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 3))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_102), 2);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_102, 8))
	{
		if (!func_306(iParam0))
		{
		}
	}
	else if (func_306(iParam0))
	{
		unk_0x5D96D8530B3D0904(&(uParam1->f_102), 8);
		unk_0x5D96D8530B3D0904(&(uParam1->f_102), 9);
	}
}

int func_306(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x92C2290AA46758D3(iParam0, 0) || func_307(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				return unk_0xEAE0D21A50E6C7F4(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_308(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_328(iParam0, uParam1);
		unk_0x0674E58A79778E99(&(uParam1->f_95), 0);
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 11))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 0);
		}
		if (func_306(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 0);
		}
		if (func_326(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 0);
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = unk_0xC34A9D742FC099DC(iParam0);
		uParam1->f_79 = unk_0x56C99E8E9DFE7674(iParam0);
		uParam1->f_80 = unk_0x800653D55FA8A604(iParam0);
		unk_0xD4CBD8C151BEDEBC(iParam0, &(uParam1->f_97));
		unk_0x03049DEEE9D497F3(iParam0, &(uParam1->f_99));
		uParam1->f_98 = unk_0x85A165AC5F83C73A(iParam0);
		iVar0 = func_316(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		unk_0x0674E58A79778E99(&(uParam1->f_95), 3);
		if (!iVar0 == func_8())
		{
			unk_0x379CDB376207BF68(iVar0, &(uParam1->f_81), 13);
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 1);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_95), 1);
		}
		if (iVar0 == unk_0xD803B885F5E47A62())
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_315(iParam0))
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_95), 2);
		}
		if (unk_0x4906F8A34E9F4814(iParam0, -1812949672))
		{
			uParam1->f_99 = func_309(func_312(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

int func_309(int iParam0)
{
	iVar1 = func_311(iParam0);
	func_310(iVar1, &iVar0);
	return iVar0;
}

bool func_310(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x8CD06866876216F2() && func_313()) && Global_1314033)
	{
		if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
		{
			return 13;
		}
	}
	return 0;
}

int func_313()
{
	if (unk_0x1963B11DE70153E0())
	{
		if ((unk_0x58424C49F8924842() && unk_0x61D9362D70D2DD56()) && unk_0xC2F420D189FDB329())
		{
			Var0 = { func_314() };
			if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_314()
{
	unk_0xB6D2E6F743DD2459(&Var0, 13);
	return Var0;
}

int func_315(int iParam0)
{
	if (Global_2537071.f_296 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (func_325(iParam0, 1))
		{
			*uParam1 = 1;
			if (unk_0xF1D385D359D58F72("PV_Slot", 3))
			{
				if (unk_0x30F813723591D02E(iParam0, "PV_Slot"))
				{
					*uParam2 = unk_0x1E2DFB0EF4BB4566(iParam0, "PV_Slot");
				}
			}
			return func_324(iParam0);
		}
		else if (func_323(iParam0, 1))
		{
			return func_322(iParam0, 1, 0);
		}
		else if (func_321(iParam0, 1))
		{
			return func_320(iParam0, 1, 0);
		}
		else if (func_319(iParam0, 1))
		{
			*uParam1 = 2;
			return func_317(iParam0);
		}
		else if (!unk_0xBBA8A868118C90ED(iParam0, -1, 0))
		{
			iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					*uParam1 = 3;
					return unk_0x83FACCC48B68F9D1(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return unk_0xD803B885F5E47A62();
}

int func_317(int iParam0)
{
	iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Veh_Modded_By_Player");
	return func_318(iVar0, 0, 1, 0);
}

int func_318(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0x117658E336116132(iVar1);
			if (func_6(iVar0, 0, 1) || (iParam1 && unk_0xCA61DCC1F907C299(iVar0)))
			{
				if (iParam0 == unk_0xE86C2816EDC6CAF0(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_6(iParam3, 0, 1) || (iParam1 && unk_0xCA61DCC1F907C299(iParam3)))
	{
		if (iParam0 == unk_0xE86C2816EDC6CAF0(iParam3))
		{
			return iParam3;
		}
	}
	return func_8();
}

int func_319(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_320(int iParam0, bool bParam1, int iParam2)
{
	if (!func_321(iParam0, 1))
	{
		return func_8();
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Hacker_Truck");
		return func_318(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_321(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_322(int iParam0, bool bParam1, int iParam2)
{
	if (!func_323(iParam0, 1))
	{
		return func_8();
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Truck");
		return func_318(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_323(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	if (!func_325(iParam0, 1))
	{
		return func_8();
	}
	iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle");
	return func_318(iVar0, 0, 1, 0);
}

int func_325(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	iVar0 = 0;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = unk_0x990F85C762AD7FB5(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x8CD06866876216F2())
			{
				iVar1 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				iVar1 = unk_0x1C0640BA9A7327B3();
			}
			iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(iVar1, Global_1315731));
			iVar3 = 20000;
			if (Global_1574410)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x7AD884DD1BBC40C0(iParam0);
				func_327(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_327(int iParam0)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, 16))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 16);
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

void func_328(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_331(uParam1);
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
		if (uParam1->f_65 == -1 && !func_330(uParam1->f_66))
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
		func_303(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_329(iVar0 + 1));
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

int func_329(int iParam0)
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

int func_330(int iParam0)
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

void func_331(var uParam0)
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

void func_332()
{
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar0].f_102, 3))
		{
			unk_0x0674E58A79778E99(&(Global_1323615[iVar0].f_102), 3);
		}
		iVar0++;
	}
}

int func_333(int iParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (iParam1 == 0)
			{
				if (unk_0xF1D385D359D58F72("bombdec1", 3))
				{
					if (unk_0x30F813723591D02E(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (unk_0xF1D385D359D58F72("bombdec", 3))
				{
					if (unk_0x30F813723591D02E(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_334(var uParam0)
{
	func_331(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_335(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2537071.f_2244[iVar0].f_40 == iParam0)
			{
				func_335(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2537071.f_2244[iParam0]), "", 24);
		Global_2537071.f_2244[iParam0].f_6 = 138;
		StringCopy(&(Global_2537071.f_2244[iParam0].f_7), "", 64);
		StringCopy(&(Global_2537071.f_2244[iParam0].f_23), "", 64);
		Global_2537071.f_2244[iParam0].f_39 = -1;
		Global_2537071.f_2244[iParam0].f_40 = -1;
		func_71(&(Global_2537071.f_2244[iParam0].f_41));
		Global_2537071.f_2244[iParam0].f_43 = 0;
	}
}

void func_336()
{
	func_337(10);
}

void func_337(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_1574577.f_3[iVar0]), iVar1);
}

void func_338()
{
	Global_2439138.f_502.f_50 = 0;
	func_339(25);
	func_339(24);
}

void func_339(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_1, iParam0))
		{
			unk_0x0674E58A79778E99(&(Global_2439138.f_502.f_1), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x0674E58A79778E99(&(Global_2439138.f_502.f_2), (iParam0 - 32));
	}
}

void func_340(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_344() < 0 && Global_1687528)
	{
		return;
	}
	if (func_343(35))
	{
		bParam0 = true;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_44, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_342(2);
	}
	else
	{
		func_342(1);
	}
	if (bParam1)
	{
		func_342(11);
	}
	if (bParam2)
	{
		func_342(32);
		if (bParam3)
		{
			if (func_344() >= 0 && unk_0xEAE0D21A50E6C7F4(Global_1323615[func_344()].f_102, 0))
			{
				func_342(33);
			}
		}
		else
		{
			func_339(33);
		}
		if (func_344() >= 0)
		{
			if (func_341(Global_1323615[func_344()].f_66))
			{
				func_342(40);
			}
		}
	}
	else if (bParam5)
	{
		func_342(37);
	}
	if (bParam4)
	{
		func_342(36);
	}
	if (func_343(36))
	{
		if (func_343(2))
		{
			func_339(36);
		}
	}
	if (bParam6)
	{
		func_342(38);
	}
	if (unk_0x8CD06866876216F2())
	{
		Global_2537071.f_389 = unk_0x2B6E0A53779D29EA();
	}
}

int func_341(int iParam0)
{
	if (iParam0 == -1881846085)
	{
		return 1;
	}
	return 0;
}

void func_342(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_1, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_2439138.f_502.f_1), iParam0);
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x5D96D8530B3D0904(&(Global_2439138.f_502.f_2), (iParam0 - 32));
	}
}

bool func_343(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_1, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_2, (iParam0 - 32));
}

int func_344()
{
	if (Global_2097152[func_186()].f_6174.f_2 >= 307)
	{
		Global_2097152[func_186()].f_6174.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_186()].f_6174.f_2;
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_346(iParam0, iParam1, iParam2);
	if (iParam0 >= 307)
	{
		return;
	}
	if (iParam2 == func_18() || iParam2 == -1)
	{
		Global_1671199[iParam0] = iParam1;
	}
}

void func_346(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_66(func_348(iParam0), iParam1, iParam2, 1);
		func_66(func_347(iParam0), 0, iParam2, 1);
	}
	else
	{
		func_66(func_348(iParam0), 255, iParam2, 1);
		func_66(func_347(iParam0), (iParam1 - 255), iParam2, 1);
	}
}

int func_347(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	return (24625 + iParam0);
}

int func_348(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	return (4036 + iParam0);
}

bool func_349(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!func_394() && Global_1694820)
			{
				return 0;
			}
			iVar0 = func_393(iParam1);
			iVar1 = func_391(unk_0x134B62B726CEC8E6(iParam0), 0, -1, 0);
			if (func_149(78225582, -1224924353, iVar1, -897111558, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_149(78225582, 1496367840, -207913414, -897111558, 1, 0, 1, 4, 0, 3))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0) && unk_0x40B3F576B41FA183(iParam0) > 0)
					{
						unk_0xF95FF0A179413A39(iParam0, 0);
					}
					if (func_350(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_144())
			{
			}
			else
			{
				*uParam2 = 3;
				func_109(func_114());
			}
			break;
		
		case 1:
			if (func_114() < 0)
			{
				*uParam2 = 3;
			}
			else if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					*uParam2 = 2;
					func_109(func_114());
				}
				else
				{
					*uParam2 = 3;
					func_109(func_114());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_350(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar19 = func_390(unk_0x134B62B726CEC8E6(iParam1));
	if (((!Global_4268015 || !unk_0xC844350D5D58C99A(iParam1)) || !unk_0xDF1306B443CD3D15(iParam1, 0)) || unk_0x40B3F576B41FA183(iParam1) <= 0)
	{
		if (unk_0x40B3F576B41FA183(iParam1) <= 0 && func_389(unk_0x134B62B726CEC8E6(iParam1)))
		{
			func_388(iParam1, &iVar0, &sVar3, &iVar15, &iVar1, &sVar7, &iVar16, &iVar2, &Var11, &iVar17, &iVar18, 0);
			if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar19, iVar0, iVar15))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var11, 3, 24, iVar19, iVar2, iVar17))
			{
				return 0;
			}
			if (!func_385(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_386(iVar0)))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar7, 2, 25, iVar19, iVar1, iVar16))
			{
				return 0;
			}
			if (!func_385(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_386(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar20 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar20 = false;
	}
	if (unk_0xC844350D5D58C99A(iParam1) && unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		iVar21 = func_383(unk_0x134B62B726CEC8E6(iParam1));
		iVar22 = func_382(unk_0x134B62B726CEC8E6(iParam1));
		iVar23 = func_378(unk_0x134B62B726CEC8E6(iParam1));
		iVar24 = func_377(unk_0x134B62B726CEC8E6(iParam1));
		iVar25 = func_376(iParam1);
		if (bVar20)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", unk_0x0ECB5CA5140957AD(iParam1, 0) + 1, 14, iVar21, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", unk_0x0ECB5CA5140957AD(iParam1, 1) + 1, 34, iVar21, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", unk_0x0ECB5CA5140957AD(iParam1, 2) + 11, 35, iVar21, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", unk_0x0ECB5CA5140957AD(iParam1, 3) + 1, 13, iVar21, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", unk_0x0ECB5CA5140957AD(iParam1, 4) + 1, 6, iVar21, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", unk_0x0ECB5CA5140957AD(iParam1, 5) + 1, 4, iVar21, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", unk_0x0ECB5CA5140957AD(iParam1, 6) + 1, 8, iVar21, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", unk_0x0ECB5CA5140957AD(iParam1, 7) + 1, 9, iVar21, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", unk_0x0ECB5CA5140957AD(iParam1, 8) + 1, 36, iVar21, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", unk_0x0ECB5CA5140957AD(iParam1, 9) + 6, 37, iVar21, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", unk_0x0ECB5CA5140957AD(iParam1, 10) + 1, 12, iVar21, iVar25, iParam1, 10))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", unk_0x0ECB5CA5140957AD(iParam1, 11) + 1, 5, iVar21, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", unk_0x0ECB5CA5140957AD(iParam1, 12) + 1, 2, iVar21, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", unk_0x0ECB5CA5140957AD(iParam1, 13) + 1, 16, iVar21, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", unk_0x0ECB5CA5140957AD(iParam1, 15) + 1, 15, iVar21, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", unk_0x0ECB5CA5140957AD(iParam1, 16) + 1, 1, iVar21, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_374(unk_0xB97ED2A4B56844DE(iParam1, 18)), 17, iVar21, -1, 0, 23))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_374(unk_0xB97ED2A4B56844DE(iParam1, 22)), 11, iVar21, -1, 0, 23))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", unk_0x0ECB5CA5140957AD(iParam1, 25) + 1, 41, iVar22, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", unk_0x0ECB5CA5140957AD(iParam1, 26) + 1, 42, iVar22, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", unk_0x0ECB5CA5140957AD(iParam1, 27) + 1, 43, iVar22, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", unk_0x0ECB5CA5140957AD(iParam1, 28) + 1, 44, iVar22, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", unk_0x0ECB5CA5140957AD(iParam1, 29) + 1, 45, iVar22, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", unk_0x0ECB5CA5140957AD(iParam1, 30) + 1, 46, iVar22, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", unk_0x0ECB5CA5140957AD(iParam1, 31) + 1, 47, iVar22, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", unk_0x0ECB5CA5140957AD(iParam1, 32) + 1, 48, iVar22, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", unk_0x0ECB5CA5140957AD(iParam1, 33) + 1, 49, iVar22, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", unk_0x0ECB5CA5140957AD(iParam1, 34) + 1, 50, iVar22, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", unk_0x0ECB5CA5140957AD(iParam1, 35) + 1, 51, iVar22, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", unk_0x0ECB5CA5140957AD(iParam1, 36) + 1, 52, iVar22, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", unk_0x0ECB5CA5140957AD(iParam1, 37) + 1, 53, iVar22, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", unk_0x0ECB5CA5140957AD(iParam1, 38) + 1, 54, iVar22, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", unk_0x0ECB5CA5140957AD(iParam1, 39) + 1, 55, iVar22, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", unk_0x0ECB5CA5140957AD(iParam1, 40) + 1, 56, iVar22, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", unk_0x0ECB5CA5140957AD(iParam1, 41) + 1, 57, iVar22, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", unk_0x0ECB5CA5140957AD(iParam1, 42) + 1, 58, iVar22, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", unk_0x0ECB5CA5140957AD(iParam1, 43) + 1, 59, iVar22, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", unk_0x0ECB5CA5140957AD(iParam1, 44) + 1, 60, iVar22, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", unk_0x0ECB5CA5140957AD(iParam1, 45) + 1, 61, iVar22, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", unk_0x0ECB5CA5140957AD(iParam1, 46) + 1, 62, iVar22, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", unk_0x0ECB5CA5140957AD(iParam1, 47) + 1, 63, iVar22, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", unk_0x0ECB5CA5140957AD(iParam1, 48) + 1, 64, iVar23, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			uVar26 = func_373(unk_0x0F7D576E2C250D0A(iParam1, 14, unk_0x0ECB5CA5140957AD(iParam1, 14)));
			if (!func_371(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_372(uVar26), 10, iVar21))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			if (!func_370(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar24))
			{
				return 0;
			}
			if (!func_370(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar24))
			{
				return 0;
			}
		}
		if (!func_368(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar20)
		{
			iVar27 = 0;
			switch (unk_0x214BEAD64D777E8F(iParam1))
			{
				case 0:
					iVar27 = 0;
					break;
				
				case 3:
					iVar27 = 1;
					break;
				
				case 2:
					iVar27 = 2;
					break;
				
				case 1:
					iVar27 = 3;
					break;
				
				case 4:
					iVar27 = 4;
					break;
				
				case 5:
					iVar27 = 5;
					break;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar27, 33, iVar21, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			iVar28 = 0;
			switch (unk_0x4EB64970EC291A00(iParam1))
			{
				case 3:
					iVar28 = 0;
					break;
				
				case 0:
					iVar28 = 1;
					break;
				
				case 4:
					iVar28 = 2;
					break;
				
				case 2:
					iVar28 = 3;
					break;
				
				case 1:
					iVar28 = 4;
					break;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar28, 23, iVar21, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			if (unk_0x3A5601978F787E51(iParam1, 23) == 0)
			{
				if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar21, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar21, -1, 0, 23))
			{
				return 0;
			}
			if (unk_0x3A5601978F787E51(iParam1, 24) == 0)
			{
				if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar21, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar21, -1, 0, 23))
			{
				return 0;
			}
		}
		func_388(iParam1, &iVar0, &sVar3, &iVar15, &iVar1, &sVar7, &iVar16, &iVar2, &Var11, &iVar17, &iVar18, 1);
		iVar29 = func_367(iVar18);
		if (!func_375(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar29, 29, iVar19, -1, 0, 23))
		{
			return 0;
		}
		unk_0xC002508A277213DE(iParam1, iVar15, iVar16);
		unk_0x58A0C35FA7CA6162(iParam1, iVar17, iVar18);
		if (bParam3)
		{
			while (func_366(iVar30, &Var31, &uVar35, &iVar36, &iVar37))
			{
				if (iVar36 == iVar15 && iVar37 == iVar17)
				{
					Var11 = { Var31 };
				}
				iVar30++;
			}
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar19, iVar0, iVar15))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var11, 3, 24, iVar19, iVar2, iVar17))
		{
			return 0;
		}
		if (!func_385(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_386(iVar0)))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar7, 2, 25, iVar19, iVar1, iVar16))
		{
			return 0;
		}
		if (!func_385(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_386(iVar1)))
		{
			return 0;
		}
		unk_0x4D842A28A29F18F6(iParam1, &iVar38, &iVar39, &iVar40);
		switch (func_363(iVar38, iVar39, iVar40))
		{
			case 1:
				iVar41 = 3;
				break;
			
			case 2:
				iVar41 = 4;
				break;
			
			case 3:
				iVar41 = 5;
				break;
			
			case 4:
				iVar41 = 6;
				break;
			
			case 5:
				iVar41 = 11;
				break;
			
			case 6:
				iVar41 = 7;
				break;
			
			case 7:
				iVar41 = 10;
				break;
			
			case 8:
				iVar41 = 8;
				break;
			
			case 9:
				iVar41 = 12;
				break;
			
			case 10:
				iVar41 = 13;
				break;
			
			case 11:
				iVar41 = -1;
				break;
			
			case 12:
				iVar41 = 9;
				break;
			
			case 0:
				if (func_362(unk_0x134B62B726CEC8E6(iParam1)) || unk_0x4906F8A34E9F4814(iParam1, 2069146067))
				{
					iVar41 = 255;
					break;
				}
				break;
		}
		if (bVar20)
		{
			if (!func_361(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar41, 18, iVar21))
			{
				return 0;
			}
		}
		iVar42 = func_360(unk_0x812A93B166D97C60(iParam1, 2), (unk_0x812A93B166D97C60(iParam1, 0) || unk_0x812A93B166D97C60(iParam1, 1)), unk_0x812A93B166D97C60(iParam1, 3));
		if (bVar20)
		{
			if (!func_359(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar42, 21, iVar21, 1))
			{
				return 0;
			}
		}
		unk_0xE04A80C505823410(iParam1, &iVar38, &iVar39, &iVar40);
		iVar43 = func_312(iVar38, iVar39, iVar40);
		if (bVar20)
		{
			if (!func_359(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar43, 21, iVar21, 0))
			{
				return 0;
			}
		}
		if (unk_0x579935D850368851(iParam1) > 1)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", unk_0xF22DC2D0CA24A151(iParam1), 26, iVar21, func_358(unk_0x134B62B726CEC8E6(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (unk_0x2BCBD8AFBF4C2021(iParam1) > 1)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", unk_0x85A165AC5F83C73A(iParam1), 39, iVar23, func_358(unk_0x134B62B726CEC8E6(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar20)
		{
			if (!unk_0x616632A7E7824A9A(iParam1))
			{
				if (!func_357(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar21))
				{
					return 0;
				}
			}
		}
		if (bVar20)
		{
			unk_0xD4CBD8C151BEDEBC(iParam1, &iVar47);
			bVar44 = false;
			iVar45 = 0;
			while (func_356(iVar45, &iVar46) && !bVar44)
			{
				if (iVar46 == iVar47)
				{
					bVar44 = true;
					sVar48 = func_355(iVar45);
				}
				else
				{
					iVar45++;
				}
			}
			if (bVar44)
			{
				func_354(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar48, 38, 5, 3);
			}
			unk_0x03049DEEE9D497F3(iParam1, &iVar47);
			bVar44 = false;
			iVar45 = 0;
			while (func_310(iVar45, &iVar46) && !bVar44)
			{
				if (iVar46 == iVar47)
				{
					bVar44 = true;
					sVar48 = func_353(iVar45);
				}
				else
				{
					iVar45++;
				}
			}
			if (!bVar44)
			{
				if (iVar47 == 0)
				{
					sVar48 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar44 = true;
				}
				else if (iVar47 == 132)
				{
					sVar48 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar44 = true;
				}
			}
			if (bVar44)
			{
				func_354(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar48, 65, 6, 3);
			}
		}
		if (uParam2 && bVar20)
		{
			if (!func_352(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", unk_0x134B62B726CEC8E6(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar20)
		{
			if (!func_351(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_351(int iParam0, char* sParam1)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_INSURANCE_NONE", 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_352(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, unk_0x1739BA50603D849C(iParam2), 16);
	if (unk_0xEA6BC48857E0AC4C(&cVar16) || unk_0x12AB0310C2281427(&cVar16) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar20, "VEM_INSURANCE_", 64);
	StringConCat(&cVar20, &cVar16, 64);
	switch (iParam2)
	{
		case -394074634:
		case -789894171:
		case -748008636:
		case 1737773231:
		case -1883002148:
		case 1717532765:
			StringConCat(&cVar20, "2", 64);
			break;
		
		case -2064372143:
		case -1241712818:
		case -1743316013:
		case -2052737935:
			StringConCat(&cVar20, "3", 64);
			break;
		
		case -2033222435:
			StringConCat(&cVar20, "4", 64);
			break;
	}
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar20)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar20), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

char* func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_354(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		StringCopy(&cVar16, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar16, iParam4, 64);
		StringConCat(&cVar16, "_", 64);
		StringConCat(&cVar16, sParam2, 64);
		StringConCat(&cVar16, "_t", 64);
		StringIntConCat(&cVar16, iParam3, 64);
		StringConCat(&cVar16, "_v", 64);
		StringIntConCat(&cVar16, iParam5, 64);
	}
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

char* func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_356(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_357(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 1581459400:
			return 1;
			break;
	}
	return -1;
}

int func_359(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar16, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_360(bool bParam0, bool bParam1, bool bParam2)
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_361(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar16, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 788747387:
		case -82626025:
		case -1600252419:
		case 970385471:
		case -50547061:
		case 1621617168:
		case -1984275979:
		case -42959138:
		case -1845487887:
		case 710198397:
		case -1671539132:
		case -339587598:
		case 1075432268:
		case 744705981:
		case -1660661558:
		case 837858166:
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case -1281684762:
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case -1295027632:
		case -1214293858:
		case 1077420264:
		case -901163259:
		case 165154707:
		case 1824333165:
		case 1341619767:
		case 970356638:
		case -1214505995:
		case -644710429:
		case 621481054:
		case -2122757008:
		case -1746576111:
		case 1981688531:
		case -1673356438:
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_365())
	{
		unk_0xA402F6C87C08815C(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		unk_0xA402F6C87C08815C(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_364())
	{
		unk_0xA402F6C87C08815C(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		unk_0xA402F6C87C08815C(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_364()
{
	return unk_0xC146D5FBD23C6954(1785846048);
}

bool func_365()
{
	return unk_0xC146D5FBD23C6954(42019760);
}

bool func_366(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

int func_367(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_368(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar16 = func_369(unk_0x8EF9B42D5496EC5A(iParam2));
	if (!unk_0x9D97214BD6C2CC1E(iVar16))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, iVar16, 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_369(int iParam0)
{
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
		
		case 10:
			StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
			break;
		
		case 11:
			StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_370(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	iVar32 = unk_0x0ECB5CA5140957AD(iParam2, iParam3);
	if (iVar32 == -1 || (iParam3 == 24 && !unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam2))))
	{
		if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam2)))
		{
			StringConCat(&cVar16, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar16, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar16, unk_0xAE6250B518DF3C3B(iParam2, iParam3, iVar32), 64);
	}
	StringConCat(&cVar16, "_t19_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_371(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

char* func_372(var uParam0)
{
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case -722822506:
			return 1;
			break;
		
		case -493570582:
			return 2;
			break;
		
		case -1451310145:
			return 3;
			break;
		
		case -953155807:
			return 4;
			break;
		
		case 444549672:
			return 5;
			break;
		
		case 1603064898:
			return 6;
			break;
		
		case 240366033:
			return 7;
			break;
		
		case 960137118:
			return 8;
			break;
		
		case 771284519:
			return 9;
			break;
		
		case -1708346067:
			return 10;
			break;
		
		case 283386134:
			return 11;
			break;
		
		case -410464896:
			return 12;
			break;
		
		case 265723083:
			return 13;
			break;
		
		case 1746883687:
			return 14;
			break;
		
		case 1919870950:
			return 15;
			break;
		
		case 1085277077:
			return 16;
			break;
		
		case -666433007:
			return 17;
			break;
		
		case -402413174:
			return 18;
			break;
		
		case -182074418:
			return 19;
			break;
		
		case 116877169:
			return 20;
			break;
		
		case -1609983577:
			return 21;
			break;
		
		case -1312277212:
			return 22;
			break;
		
		case -1091676304:
			return 23;
			break;
		
		case -1394589232:
			return 24;
			break;
		
		case -1095309955:
			return 25;
			break;
		
		case -338772048:
			return 26;
			break;
		
		case 2099578296:
			return 27;
			break;
		
		case 676333254:
			return 28;
			break;
		
		case 1373384483:
			return 29;
			break;
		
		case 310529291:
			return 30;
			break;
		
		case 55291550:
			return 31;
			break;
		
		case -1329398309:
			return 32;
			break;
		
		case 965054819:
			return 33;
			break;
		
		case -1378191490:
			return 34;
			break;
		
		case -1683107035:
			return 35;
			break;
		
		case -580260344:
			return 36;
			break;
		
		case -1088196937:
			return 37;
			break;
		
		case 55862314:
			return 38;
			break;
		
		case 400002352:
			return 39;
			break;
		
		case 560832604:
			return 40;
			break;
		
		case -2138224118:
			return 41;
			break;
		
		case 897484282:
			return 42;
			break;
		
		case 314232747:
			return 43;
			break;
		
		case 1307678422:
			return 46;
			break;
		
		case -208525380:
			return 45;
			break;
		
		case 1646559452:
			return 44;
			break;
		
		case 50707886:
			return 47;
			break;
		
		case 273438779:
			return 48;
			break;
		
		case 1592391033:
			return 49;
			break;
		
		case -319516276:
			return 50;
			break;
		
		case 993865248:
			return 51;
			break;
		
		case 632950117:
			return 52;
			break;
		
		case -443787204:
			return 53;
			break;
		
		case -882105348:
			return 54;
			break;
		
		case -920707230:
			return 55;
			break;
		
		case 246182814:
			return 56;
			break;
		
		case 1804608241:
			return 57;
			break;
		
		case -1496922658:
			return 58;
			break;
	}
	return 0;
}

int func_374(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (unk_0x461CAC843A21E4B6(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !unk_0xEAE0D21A50E6C7F4(Global_4268344[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar16, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar16, "_n", 64);
		StringIntConCat(&cVar16, iParam6, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_376(int iParam0)
{
	iVar0 = -1;
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -410205223:
		case 903794909:
		case 1561920505:
		case -391595372:
			iVar0 = 1;
			break;
		
		case -2118308144:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case -2039755226:
			return 12;
			break;
		
		case -239841468:
			return 4;
			break;
		
		case 627535535:
			return 4;
			break;
	}
	return func_390(iParam0);
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case -831834716:
			return 9;
			break;
		
		case 2068293287:
			return 8;
			break;
		
		case -295689028:
			return 6;
			break;
		
		case 633712403:
			return 7;
			break;
		
		case -602287871:
			return 5;
			break;
		
		case -777172681:
			return 13;
			break;
		
		case 86520421:
			return 14;
			break;
		
		case 1887331236:
			return 15;
			break;
		
		case 1549126457:
			return 16;
			break;
		
		case 101905590:
			return 17;
			break;
		
		case -663299102:
			return 18;
			break;
		
		case 390201602:
			return 19;
			break;
		
		case -1071380347:
			return 20;
			break;
		
		case 741090084:
			return 21;
			break;
		
		case -1232836011:
			return 22;
			break;
		
		case 482197771:
			return 24;
			break;
		
		case 819197656:
			return 25;
			break;
		
		case 1790834270:
			return 28;
			break;
		
		case -757735410:
			return 28;
			break;
		
		case -482719877:
			return 27;
			break;
		
		case 1074745671:
			return 27;
			break;
		
		case 1093792632:
			return 27;
			break;
		
		case -2022483795:
			return 26;
			break;
		
		case 196747873:
			return 26;
			break;
		
		case 1502869817:
			return 32;
			break;
		
		case -286046740:
			return 39;
			break;
		
		case 1802742206:
		case -2122646867:
		case 1717532765:
		case 1107404867:
		case 67753863:
		case -913589546:
			return 27;
			break;
	}
	if (func_381(iParam0))
	{
		return 33;
	}
	else if (func_380(iParam0))
	{
		return 34;
	}
	if (func_379(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case -1146969353:
		case 668439077:
		case -801550069:
		case 1721676810:
		case -688189648:
		case 1009171724:
		case 444994115:
		case 628003514:
		case -27326686:
		case 540101442:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case -42959138:
		case -32878452:
		case 447548909:
		case 1181327175:
		case -1435527158:
		case 1692272545:
			return 1;
			break;
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case -1984275979:
		case -1763555241:
		case -749299473:
		case -975345305:
		case -392675425:
		case 1043222410:
		case -1386191424:
		case -1523619738:
		case -1007528109:
		case -1700874274:
		case 1565978651:
		case 1036591958:
		case -644710429:
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case 447548909:
		case -726768679:
			return 1;
			break;
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case -899509638:
			return 10;
			break;
		
		case 1119641113:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case -295689028:
			return 6;
			break;
		
		case 633712403:
			return 7;
			break;
	}
	switch (iParam0)
	{
		case -602287871:
			return 5;
			break;
	}
	switch (iParam0)
	{
		case -2039755226:
			return 3;
			break;
		
		case -1126264336:
			return 3;
			break;
		
		case 223258115:
			return 3;
			break;
		
		case 1119641113:
			return 3;
			break;
		
		case -1797613329:
			return 3;
			break;
		
		case -899509638:
			return 3;
			break;
	}
	switch (iParam0)
	{
		case 1790834270:
			return 28;
			break;
		
		case -757735410:
			return 28;
			break;
		
		case -482719877:
			return 27;
			break;
		
		case 1074745671:
			return 27;
			break;
		
		case 1093792632:
			return 27;
			break;
		
		case -2022483795:
			return 26;
			break;
		
		case 196747873:
			return 26;
			break;
		
		case -286046740:
			return 39;
			break;
		
		case 1802742206:
		case -2122646867:
		case 1717532765:
		case 1107404867:
		case 67753863:
		case -913589546:
			return 27;
			break;
	}
	if (func_379(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case -899509638:
			return 10;
			break;
		
		case 1119641113:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case -295689028:
			return 6;
			break;
		
		case 633712403:
			return 7;
			break;
	}
	switch (iParam0)
	{
		case -602287871:
			return 5;
			break;
	}
	switch (iParam0)
	{
		case -2039755226:
			return 3;
			break;
		
		case -1126264336:
			return 0;
			break;
		
		case 223258115:
			return 0;
			break;
		
		case 1119641113:
			return 0;
			break;
		
		case -1797613329:
			return 0;
			break;
		
		case -899509638:
			return 3;
			break;
		
		case 16646064:
			return 3;
			break;
	}
	switch (iParam0)
	{
		case 627535535:
			return 0;
			break;
		
		case -239841468:
			return 0;
			break;
		
		case 1790834270:
			return 28;
			break;
		
		case -757735410:
			return 28;
			break;
		
		case -2048333973:
			return 3;
			break;
		
		case 1886268224:
			return 3;
			break;
		
		case 1034187331:
			return 3;
			break;
		
		case -482719877:
			return 27;
			break;
		
		case 1074745671:
			return 27;
			break;
		
		case 1093792632:
			return 27;
			break;
		
		case -2022483795:
			return 26;
			break;
		
		case 196747873:
			return 26;
			break;
		
		case 1802742206:
			return 27;
			break;
		
		case -2122646867:
			return 27;
			break;
		
		case 1717532765:
			return 27;
			break;
		
		case 1107404867:
			return 27;
			break;
		
		case 67753863:
			return 27;
			break;
		
		case -913589546:
			return 27;
			break;
	}
	switch (iParam0)
	{
		case 562680400:
			return 29;
			break;
		
		case -32236122:
			return 29;
			break;
		
		case -1881846085:
			return 29;
			break;
		
		case 1483171323:
			return 29;
			break;
		
		case 886810209:
			return 29;
			break;
		
		case 1254014755:
			return 29;
			break;
		
		case 1897744184:
			return 30;
			break;
		
		case -1924433270:
			return 30;
			break;
		
		case -1210451983:
			return 30;
			break;
		
		case 1356124575:
			return 30;
			break;
		
		case 884483972:
			return 31;
			break;
		
		case 2069146067:
			return 31;
			break;
		
		case 177270108:
			return 32;
			break;
		
		case 387748548:
			return 32;
			break;
		
		case 1502869817:
			return 32;
			break;
		
		case -212993243:
			return 35;
			break;
		
		case 1945374990:
			return 37;
			break;
		
		case 219613597:
			return 36;
			break;
		
		case 1653666139:
			return 36;
			break;
		
		case -286046740:
			return 39;
			break;
		
		case -1254331310:
			return 36;
			break;
		
		case 394110044:
			return 36;
			break;
	}
	if (func_381(iParam0))
	{
		return 33;
	}
	else if (func_380(iParam0))
	{
		return 34;
	}
	else if (func_379(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case -1242608589:
			return 31;
			break;
	}
	if (func_384(iParam0))
	{
		return 3;
	}
	if (unk_0x7D8B2A8F9EA82DB7(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case -1216765807:
			return 3;
			break;
		
		case 1283517198:
			return 0;
			break;
		
		case 1672195559:
			return 4;
			break;
		
		case 767087018:
			return 3;
			break;
		
		case 837858166:
			return 0;
			break;
		
		case -1809822327:
			return 0;
			break;
		
		case -1903012613:
			return 0;
			break;
		
		case 142944341:
			return 2;
			break;
		
		case -1041692462:
			return 3;
			break;
		
		case -823509173:
			return 0;
			break;
		
		case -114291515:
			return 4;
			break;
		
		case -891462355:
			return 4;
			break;
		
		case 1824333165:
			return 0;
			break;
		
		case 1126868326:
			return 0;
			break;
		
		case -349601129:
			return 0;
			break;
		
		case -16948145:
			return 2;
			break;
		
		case -1205801634:
			return 3;
			break;
		
		case -2128233223:
			return 0;
			break;
		
		case -1269889662:
			return 0;
			break;
		
		case 1131912276:
			return 0;
			break;
		
		case 1069929536:
			return 2;
			break;
		
		case -1435919434:
			return 0;
			break;
		
		case 117401876:
			return 0;
			break;
		
		case -304802106:
			return 0;
			break;
		
		case 736902334:
			return 1;
			break;
		
		case -1696146015:
			return 3;
			break;
		
		case -713569950:
			return 0;
			break;
		
		case 788747387:
			return 0;
			break;
		
		case 2072687711:
			return 3;
			break;
		
		case 11251904:
			return 3;
			break;
		
		case 2006918058:
			return 2;
			break;
		
		case -789894171:
			return 2;
			break;
		
		case -1311154784:
			return 3;
			break;
		
		case -2072933068:
			return 0;
			break;
		
		case 330661258:
			return 3;
			break;
		
		case -1045541610:
			return 3;
			break;
		
		case 108773431:
			return 3;
			break;
		
		case 1011753235:
			return 1;
			break;
		
		case 448402357:
			return 0;
			break;
		
		case 321739290:
			return 0;
			break;
		
		case -644710429:
			return 0;
			break;
		
		case -1130810103:
			return 0;
			break;
		
		case 1682114128:
			return 0;
			break;
		
		case 80636076:
			return 1;
			break;
		
		case -915704871:
			return 1;
			break;
		
		case -1670998136:
			return 4;
			break;
		
		case -1237253773:
			return 3;
			break;
		
		case -2130482718:
			return 0;
			break;
		
		case -1661854193:
			return 0;
			break;
		
		case 970356638:
			return 0;
			break;
		
		case -566387422:
			return 3;
			break;
		
		case -1291952903:
			return 3;
			break;
		
		case -5153954:
			return 3;
			break;
		
		case -591610296:
			return 1;
			break;
		
		case 55628203:
			return 4;
			break;
		
		case -391594584:
			return 0;
			break;
		
		case -89291282:
			return 0;
			break;
		
		case -1995326987:
			return 3;
			break;
		
		case 744705981:
			return 0;
			break;
		
		case 1949211328:
			return 0;
			break;
		
		case 1909141499:
			return 0;
			break;
		
		case 499169875:
			return 1;
			break;
		
		case -1800170043:
			return 0;
			break;
		
		case 349315417:
			return 0;
			break;
		
		case 75131841:
			return 3;
			break;
		
		case -1775728740:
			return 2;
			break;
		
		case -1543762099:
			return 2;
			break;
		
		case 301427732:
			return 4;
			break;
		
		case 37348240:
			return 3;
			break;
		
		case 486987393:
			return 1;
			break;
		
		case 970385471:
			return 0;
			break;
		
		case 418536135:
			return 3;
			break;
		
		case -1289722222:
			return 0;
			break;
		
		case 886934177:
			return 0;
			break;
		
		case -1177863319:
			return 0;
			break;
		
		case -624529134:
			return 1;
			break;
		
		case 1051415893:
			return 3;
			break;
		
		case -1297672541:
			return 3;
			break;
		
		case -1106353882:
			return 3;
			break;
		
		case 861409633:
			return 0;
			break;
		
		case -120287622:
			return 0;
			break;
		
		case 92612664:
			return 0;
			break;
		
		case 544021352:
			return 3;
			break;
		
		case 1269098716:
			return 2;
			break;
		
		case 621481054:
			return 0;
			break;
		
		case -1746576111:
			return 0;
			break;
		
		case -1043459709:
			return 0;
			break;
		
		case -142942670:
			return 3;
			break;
		
		case -631760477:
			return 3;
			break;
		
		case -1660661558:
			return 0;
			break;
		
		case 914654722:
			return 2;
			break;
		
		case -748008636:
			return 2;
			break;
		
		case -2064372143:
			return 2;
			break;
		
		case 165154707:
			return 0;
			break;
		
		case -310465116:
			return 0;
			break;
		
		case -433375717:
			return 3;
			break;
		
		case -845961253:
			return 0;
			break;
		
		case 904750859:
			return 0;
			break;
		
		case -1050465301:
			return 0;
			break;
		
		case -2052737935:
			return 0;
			break;
	}
	switch (iParam0)
	{
		case -634879114:
			return 4;
			break;
		
		case 1032823388:
			return 3;
			break;
		
		case -1461482751:
			return 3;
			break;
		
		case 1348744438:
			return 1;
			break;
		
		case -511601230:
			return 1;
			break;
		
		case -431692672:
			return 3;
			break;
		
		case 1488164764:
			return 0;
			break;
		
		case -909201658:
			return 4;
			break;
		
		case -377465520:
			return 1;
			break;
		
		case 1507916787:
			return 0;
			break;
		
		case 1078682497:
			return 3;
			break;
		
		case -1883869285:
			return 0;
			break;
		
		case -1150599089:
			return 0;
			break;
		
		case -1651067813:
			return 0;
			break;
		
		case 1645267888:
			return 2;
			break;
		
		case 1933662059:
			return 2;
			break;
		
		case -1934452204:
			return 3;
			break;
		
		case -667151410:
			return 2;
			break;
		
		case -589178377:
			return 2;
			break;
		
		case -1207771834:
			return 2;
			break;
		
		case -2045594037:
			return 2;
			break;
		
		case -14495224:
			return 0;
			break;
		
		case -1098802077:
			return 0;
			break;
		
		case 841808271:
			return 3;
			break;
		
		case 782665360:
			return 0;
			break;
		
		case 2136773105:
			return 2;
			break;
		
		case -893578776:
			return 4;
			break;
		
		case 1162065741:
			return 0;
			break;
		
		case -599568815:
			return 2;
			break;
		
		case 788045382:
			return 4;
			break;
		
		case -1453280962:
			return 4;
			break;
		
		case -1189015600:
			return 2;
			break;
		
		case 989381445:
			return 2;
			break;
		
		case -1255452397:
			return 1;
			break;
		
		case -746882698:
			return 1;
			break;
		
		case -186537451:
			return 0;
			break;
		
		case -1030275036:
			return 0;
			break;
		
		case 1221512915:
			return 2;
			break;
		
		case 1349725314:
			return 1;
			break;
		
		case 873639469:
			return 1;
			break;
		
		case -1214505995:
			return 0;
			break;
		
		case 743478836:
			return 4;
			break;
		
		case 231083307:
			return 0;
			break;
		
		case 400514754:
			return 0;
			break;
		
		case -1477580979:
			return 0;
			break;
		
		case 1545842587:
			return 3;
			break;
		
		case -2098947590:
			return 3;
			break;
		
		case 1723137093:
			return 0;
			break;
		
		case -1961627517:
			return 0;
			break;
		
		case -2122757008:
			return 0;
			break;
		
		case -282946103:
			return 0;
			break;
		
		case 1123216662:
			return 3;
			break;
		
		case 384071873:
			return 3;
			break;
		
		case 699456151:
			return 0;
			break;
		
		case -1894894188:
			return 0;
			break;
		
		case -1008861746:
			return 0;
			break;
		
		case 1836027715:
			return 4;
			break;
		
		case 1981688531:
			return 0;
			break;
		
		case 1127861609:
			return 4;
			break;
		
		case -1233807380:
			return 4;
			break;
		
		case -400295096:
			return 4;
			break;
		
		case 290013743:
			return 0;
			break;
		
		case 408192225:
			return 3;
			break;
		
		case 338562499:
			return 3;
			break;
		
		case -140902153:
			return 4;
			break;
		
		case -1600252419:
			return 0;
			break;
		
		case -1673356438:
			return 0;
			break;
		
		case 1341619767:
			return 0;
			break;
		
		case -825837129:
			return 1;
			break;
		
		case -1622444098:
			return 3;
			break;
		
		case 1373123368:
			return 3;
			break;
		
		case 1777363799:
			return 0;
			break;
		
		case 65402552:
			return 2;
			break;
		
		case -1403128555:
			return 3;
			break;
		
		case -1122289213:
			return 1;
			break;
		
		case -1193103848:
			return 1;
			break;
		
		case 758895617:
			return 3;
			break;
		
		case -339587598:
			return 0;
			break;
		
		case -159126838:
			return 4;
			break;
		
		case 1265391242:
			return 4;
			break;
		
		case -1089039904:
			return 0;
			break;
		
		case -1372848492:
			return 3;
			break;
		
		case 1039032026:
			return 0;
			break;
		
		case -591651781:
			return 0;
			break;
		
		case 237764926:
			return 1;
			break;
		
		case -901163259:
			return 0;
			break;
		
		case 80636076:
			return 1;
			break;
		
		case -915704871:
			return 1;
			break;
		
		case 723973206:
			return 1;
			break;
		
		case -326143852:
			return 0;
			break;
		
		case 1233534620:
			return 0;
			break;
		
		case 1923400478:
			return 0;
			break;
		
		case -401643538:
			return 0;
			break;
		
		case 771711535:
			return 0;
			break;
		
		case -1066334226:
			return 0;
			break;
	}
	switch (iParam0)
	{
		case -2140431165:
			return 4;
			break;
		
		case -808831384:
			return 2;
			break;
		
		case 850565707:
			return 2;
			break;
		
		case -344943009:
			return 0;
			break;
		
		case 1039032026:
			return 0;
			break;
		
		case -682211828:
			return 0;
			break;
		
		case 2006142190:
			return 4;
			break;
		
		case 1770332643:
			return 0;
			break;
		
		case -1137532101:
			return 0;
			break;
		
		case 884422927:
			return 0;
			break;
		
		case -2124201592:
			return 0;
			break;
		
		case -808457413:
			return 2;
			break;
		
		case 1830407356:
			return 0;
			break;
		
		case -2095439403:
			return 0;
			break;
		
		case -1450650718:
			return 0;
			break;
		
		case -1685021548:
			return 0;
			break;
		
		case 1337041428:
			return 2;
			break;
		
		case -810318068:
			return 0;
			break;
		
		case 728614474:
			return 0;
			break;
		
		case 523724515:
			return 0;
			break;
		
		case 627094268:
			return 0;
			break;
		
		case -1311240698:
			return 0;
			break;
		
		case -1883002148:
			return 0;
			break;
		
		case -394074634:
			return 2;
			break;
		
		case -48031959:
			return 0;
			break;
		
		case -511601230:
			return 1;
			break;
		
		case -789894171:
			return 2;
			break;
		
		case 1177543287:
			return 2;
			break;
		
		case 1737773231:
			return 1;
			break;
		
		case 444171386:
			return 0;
			break;
		
		case 914654722:
			return 2;
			break;
	}
	switch (iParam0)
	{
		case 1581459400:
		case 1987142870:
		case -1566741232:
		case -498054846:
			return 3;
			break;
		
		case -2119578145:
		case -1790546981:
		case 1896491931:
		case 525509695:
			return 3;
			break;
		
		case -1013450936:
		case -1361687965:
		case -2040426790:
		case 2006667053:
			return 0;
			break;
		
		case -831834716:
		case 2068293287:
			return 3;
			break;
		
		case -777172681:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case 86520421:
		case -2103821244:
		case -1071380347:
		case 741090084:
		case 2067820283:
		case -1232836011:
		case 482197771:
		case 819197656:
		case 159274291:
		case 223240013:
		case 1504306544:
		case 1939284556:
		case 917809321:
			return 3;
			break;
		
		case 683047626:
			return 2;
			break;
		
		case -1210451983:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 1104234922:
		case -1532697517:
			return 3;
			break;
		
		case 1909189272:
		case 931280609:
		case 500482303:
		case -420911112:
		case 2044532910:
		case -54332285:
		case 321186144:
		case -638562243:
		case -1988428699:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 540101442:
		case 2139203625:
		case 469291905:
		case -48031959:
		case 1938952078:
		case -907477130:
		case -1987130134:
		case 1747439474:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case 408825843:
		case 301304410:
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
		case -2122646867:
		case -2098954619:
		case 2134119907:
		case 1107404867:
		case 67753863:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
			return 3;
			break;
	}
	return 0;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case -1216765807:
		case -1041692462:
		case -1696146015:
		case 2072687711:
		case 11251904:
		case -1311154784:
		case 330661258:
		case -1045541610:
		case 108773431:
		case -566387422:
		case -1291952903:
		case -5153954:
		case -1995326987:
		case 37348240:
		case 418536135:
		case 1051415893:
		case 544021352:
		case -433375717:
		case 1032823388:
		case -1461482751:
		case -1934452204:
		case 1737773231:
		case 1545842587:
		case -2098947590:
		case 1123216662:
		case 384071873:
		case 338562499:
		case -1622444098:
		case 758895617:
		case -1237253773:
		case -1205801634:
		case 75131841:
		case 841808271:
		case 1373123368:
		case -431692672:
		case 1078682497:
		case 941800958:
		case 410882957:
		case 640818791:
		case -1860900134:
		case 2071877360:
		case -2096818938:
			return 1;
			break;
		
		case 1581459400:
		case 1987142870:
		case -1566741232:
		case -498054846:
			return 1;
			break;
		
		case -2119578145:
		case -1790546981:
		case 525509695:
		case 1896491931:
			return 1;
			break;
		
		case -2039755226:
		case -899509638:
			return 1;
			break;
		
		case 1878062887:
		case 634118882:
		case -2030171296:
		case 906642318:
		case -114627507:
		case -1660945322:
		case -1943285540:
		case -1485523546:
		case 1489967196:
		case 1102544804:
			return 1;
			break;
		
		case 972671128:
			return 1;
			break;
		
		case 633712403:
			return 1;
			break;
		
		case 1274868363:
		case -305727417:
		case 1426219628:
		case -1295027632:
		case -1829802492:
		case 2123327359:
		case 1475773103:
		case -1757836725:
		case -2100640717:
		case -1845487887:
		case -1930048799:
		case 1203490606:
		case -432008408:
		case 234062309:
			return 1;
			break;
		
		case -777172681:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case 86520421:
		case -2103821244:
		case -1071380347:
		case 741090084:
		case 2067820283:
		case -1232836011:
		case 482197771:
		case 819197656:
			return 1;
			break;
		
		case -2115793025:
		case 822018448:
		case -1606187161:
		case -1009268949:
		case -570033273:
		case 6774487:
		case 2035069708:
		case 1873600305:
		case -255678177:
		case -1404136503:
		case -405626514:
		case -674927303:
		case -440768424:
		case 1491277511:
		case -609625092:
		case -1523428744:
		case -1558399629:
		case 1026149675:
		case -618617997:
		case -1289178744:
		case -1842748181:
			return 1;
			break;
		
		case -1590337689:
		case 682434785:
		case -2022483795:
		case -239841468:
		case 1790834270:
		case -827162039:
		case -312295511:
		case 627535535:
		case -757735410:
		case -2048333973:
		case 1034187331:
		case -1758137366:
		case -1649536104:
		case 941494461:
		case 1180875963:
		case 272929391:
		case 989294410:
		case -1912017790:
		case 196747873:
		case -482719877:
		case 1093792632:
		case 777714999:
		case 1886268224:
		case 1074745671:
			return 1;
			break;
		
		case 1234311532:
		case 719660200:
		case -1405937764:
		case -982130927:
			return 1;
			break;
		
		case 159274291:
		case 1939284556:
		case 223240013:
		case 433954513:
		case 1504306544:
		case 917809321:
		case -1210451983:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 177270108:
		case 387748548:
			return 1;
			break;
		
		case 1392481335:
		case 2049897956:
		case 1841130506:
		case -998177792:
		case -1242608589:
			return 1;
			break;
		
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1181327175:
		case 1489874736:
		case -2118308144:
		case -212993243:
		case 447548909:
		case 1561920505:
		case -1848994066:
		case 1741861769:
		case 1104234922:
		case 1871995513:
		case 1352136073:
		case -313185164:
		case -2079788230:
		case 600450546:
		case -410205223:
		case 867799010:
		case -1529242755:
		case 903794909:
		case -1532697517:
		case 15219735:
		case 661493923:
		case 838982985:
		case -391595372:
		case -121446169:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1909189272:
		case 931280609:
		case -1267543371:
		case 1617472902:
		case 1046206681:
		case -1259134696:
		case 1115909093:
		case 1031562256:
		case -376434238:
		case -986944621:
		case -1134706562:
		case -2120700196:
		case -214906006:
		case -988501280:
		case 1254014755:
		case -726768679:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
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
		case -286046740:
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case -941272559:
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -208911803:
		case -447711397:
		case 1416466158:
		case 833469436:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case 408825843:
		case 301304410:
		case 740289177:
		case -1960756985:
		case -1254331310:
		case -2122646867:
		case 2134119907:
		case -2098954619:
		case 1107404867:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
			return 1;
			break;
	}
	return 0;
}

int func_385(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!unk_0x9D97214BD6C2CC1E(iParam2))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

int func_386(int iParam0)
{
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_387(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (unk_0xBE89007E8680185F())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar16, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar16, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar16, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar16, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar16, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar16, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar16, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar16, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar16, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar16, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar16, "MCT_NONE_", 64);
	}
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, iParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar16, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar16, iParam7, 64);
	}
	if (!unk_0x9D97214BD6C2CC1E(unk_0x12AB0310C2281427(&cVar16)))
	{
		return 1;
	}
	return func_149(78225582, -1224924353, unk_0x12AB0310C2281427(&cVar16), 478352891, 1, 0, 1, 4, unk_0x12AB0310C2281427(&cVar0), 3);
}

void func_388(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, bool bParam11)
{
	unk_0x9412F17E127D9759(iParam0, iParam3, iParam6);
	unk_0xD00EA977553939A7(iParam0, iParam9, uParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		unk_0xF3400BB226B5BB56(iParam0, iParam1, &uVar0, &iVar2);
		unk_0xB0010FD150C8A58B(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar5 = unk_0x37C19467F47BC514(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				unk_0x355664A553624E09(iParam0, iVar3, iVar4, iVar2);
				unk_0x9412F17E127D9759(iParam0, &iVar6, &uVar9);
				if (iVar6 == *iParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, unk_0xA16D97809D304E6A(iParam0, 0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (unk_0xEA6BC48857E0AC4C(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		*iParam1 = 6;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = unk_0x37C19467F47BC514(0, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			unk_0x355664A553624E09(iParam0, 0, iVar4, iVar4);
			unk_0xD00EA977553939A7(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, unk_0xA16D97809D304E6A(iParam0, 0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (unk_0xEA6BC48857E0AC4C(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 6;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar4 = 0;
			iVar5 = unk_0x37C19467F47BC514(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				unk_0xE3808D56EEF11EEE(iParam0, iVar3, iVar4);
				unk_0x9412F17E127D9759(iParam0, &uVar9, &iVar7);
				if (iVar7 == *iParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, unk_0x7E2A343DE4D080B6(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (unk_0xEA6BC48857E0AC4C(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (unk_0xEA6BC48857E0AC4C(sParam5))
	{
		*iParam4 = 6;
		IntToString(sParam5, *iParam6, 16);
	}
	unk_0xC002508A277213DE(iParam0, *iParam3, *iParam6);
	unk_0x58A0C35FA7CA6162(iParam0, *iParam9, *uParam10);
}

int func_389(int iParam0)
{
	if (iParam0 == 1131912276)
	{
		return 1;
	}
	if (iParam0 == 448402357)
	{
		return 1;
	}
	if (iParam0 == -186537451)
	{
		return 1;
	}
	if ((iParam0 == 1127861609 || iParam0 == -1233807380) || iParam0 == -400295096)
	{
		return 1;
	}
	if (iParam0 == -836512833)
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case -1790546981:
		case 1896491931:
		case -1013450936:
		case -1361687965:
		case -2040426790:
		case 2006667053:
		case -295689028:
		case 633712403:
		case -602287871:
		case -2039755226:
		case -1126264336:
		case 223258115:
		case 1119641113:
		case -1797613329:
		case -899509638:
		case 1790834270:
		case -757735410:
		case -482719877:
		case 1074745671:
		case 1093792632:
		case -2022483795:
		case 196747873:
		case 562680400:
		case -32236122:
		case -1881846085:
		case 1897744184:
		case -1924433270:
		case -1210451983:
		case 1356124575:
		case 884483972:
		case 1502869817:
		case 387748548:
		case 177270108:
		case -32878452:
		case -42959138:
		case -1763555241:
		case -975345305:
		case 1043222410:
		case -1984275979:
		case -749299473:
		case -1700874274:
		case -392675425:
		case 1392481335:
		case -998177792:
		case -1242608589:
		case 2049897956:
		case 1841130506:
		case -1523619738:
		case -1007528109:
		case 1565978651:
		case 1036591958:
		case -1386191424:
		case -644710429:
		case 1181327175:
		case 447548909:
		case -2118308144:
		case -212993243:
		case -692292317:
		case 1483171323:
		case -1435527158:
		case -1693015116:
		case 886810209:
		case 1489874736:
		case 1254014755:
		case -726768679:
		case 1945374990:
		case 1653666139:
		case 219613597:
		case 2069146067:
		case 1692272545:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 540101442:
		case 2139203625:
		case -286046740:
		case 394110044:
		case -1254331310:
		case 340154634:
		case -1960756985:
		case 1802742206:
		case -2122646867:
		case 1717532765:
		case 1107404867:
		case 67753863:
		case -913589546:
			return 3;
			break;
	}
	if (func_379(iParam0))
	{
		return 3;
	}
	return func_383(iParam0);
}

int func_391(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = func_383(iParam0);
	StringCopy(&Var1, unk_0x1739BA50603D849C(iParam0), 16);
	if (bParam1)
	{
		func_392(&sVar5, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, bParam3);
	}
	else
	{
		func_392(&sVar5, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, bParam3);
	}
	return unk_0x12AB0310C2281427(&sVar5);
}

void func_392(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (unk_0x12AB0310C2281427(&cParam1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		
		case 2:
			if (iParam5 == 1885233650)
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == -1667301416)
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 4:
			if (iParam5 == Global_73804)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_73805)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_73806)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_73807)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_73808)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam5), 16);
				if (unk_0xEA6BC48857E0AC4C(&cParam1) || unk_0x12AB0310C2281427(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case -757735410:
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case 1790834270:
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case -2022483795:
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam5), 16);
						if (unk_0xEA6BC48857E0AC4C(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							StringConCat(sParam0, "2", 64);
							break;
						
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							StringConCat(sParam0, "3", 64);
							break;
						
						case -2033222435:
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_393(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		return -1;
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_394()
{
	if (((func_114() == -1 && Global_2513435 == -1) && Global_2513422 == -1) && Global_2513423 != 2)
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0)
{
	if (func_396(iParam0))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 6);
	}
	return 0;
}

int func_396(int iParam0)
{
	func_398(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 307) && !func_397(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

void func_398(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 307)
		{
			if (iParam0 == (Global_1671199[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

bool func_399()
{
	return Global_2439138.f_502.f_41;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 1180875963:
		case 682434785:
		case -1912017790:
		case -1649536104:
		case 989294410:
		case -312295511:
		case 941494461:
		case -1590337689:
			return 1;
			break;
	}
	return 0;
}

int func_401()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (unk_0xBFC0798A6E3417F9(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

bool func_402()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_403(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if ((((!unk_0x8CD06866876216F2() || !func_6(unk_0xD803B885F5E47A62(), 1, 1)) || func_517()) || Global_1312791) || Global_2451426.f_3473.f_32)
	{
		*iParam1 = -1;
		func_516(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	unk_0xE19C2AAC820D8ED5();
	func_515();
	func_84();
	unk_0x558EC149EB2BC0A2(2, 202);
	unk_0x558EC149EB2BC0A2(2, 201);
	unk_0x558EC149EB2BC0A2(2, 189);
	unk_0x558EC149EB2BC0A2(2, 190);
	unk_0x558EC149EB2BC0A2(2, 241);
	unk_0x558EC149EB2BC0A2(2, 242);
	unk_0x558EC149EB2BC0A2(2, 180);
	unk_0x558EC149EB2BC0A2(2, 181);
	if (unk_0x91E3F625EF57450D(2))
	{
		unk_0x558EC149EB2BC0A2(0, 24);
		unk_0x558EC149EB2BC0A2(0, 257);
		unk_0xEAB026E686C0D991(2, 237, 1);
		unk_0xEAB026E686C0D991(2, 238, 1);
		unk_0xEAB026E686C0D991(2, 242, 1);
		unk_0xEAB026E686C0D991(2, 241, 1);
		unk_0x38C3A68D7861DCFD(2, 2, 1);
		unk_0x38C3A68D7861DCFD(2, 1, 1);
		unk_0x38C3A68D7861DCFD(0, 24, 1);
		unk_0x38C3A68D7861DCFD(0, 257, 1);
		if (!unk_0x798A3F1296751F46() && !unk_0xE57E602827E07C9D())
		{
			unk_0x558EC149EB2BC0A2(2, 202);
			unk_0x558EC149EB2BC0A2(2, 201);
		}
		func_512(0, 0, 0, 1);
		unk_0x5D80F91A16C40CDE();
	}
	unk_0x5D96D8530B3D0904(&(uParam0->f_314), 1);
	if (func_510(0, iParam5, 0))
	{
		if (func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_314, 0))
			{
				func_454(uParam0, iParam3, bParam4);
				unk_0x5D96D8530B3D0904(&(uParam0->f_314), 0);
				func_446(uParam0, bParam4, bVar1, iParam3, bParam6);
				func_415(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!unk_0x798A3F1296751F46() && !func_414(8, -1)) && !Global_2450632.f_684.f_5)
			{
				if (unk_0x91E3F625EF57450D(2))
				{
					if (func_413())
					{
						if (uParam0->f_310 == 0)
						{
							if (Global_4268497 != uParam0->f_311)
							{
								uParam0->f_311 = Global_4268497;
								unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
								unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4268497 != uParam0->f_312)
						{
							uParam0->f_312 = Global_4268497;
							unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 0))
				{
					if (((unk_0xBFC0798A6E3417F9(2, 201) || func_412()) || bVar0) || (unk_0xE57E602827E07C9D() && unk_0xBFC0798A6E3417F9(2, 201)))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
						if (uParam0->f_310 == 0)
						{
							uParam0->f_319 = 0;
							if (uParam0->f_311 >= 0 && uParam0->f_1[uParam0->f_311] >= 0)
							{
								*uParam2 = func_518(1, 0, iParam3, func_409(uParam0->f_1[uParam0->f_311], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									func_408(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_526(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
									func_516(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_311 < 0)
							{
							}
							if (uParam0->f_311 < 0)
							{
								uParam0->f_319 = 0;
							}
							else
							{
								uParam0->f_319 = uParam0->f_1[uParam0->f_311];
							}
							uParam0->f_310 = 1;
							unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
							bVar1 = true;
						}
						else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 2) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_309, uParam0->f_312))
						{
							func_407(-1);
							func_406(176, "BB_YES", -1);
							func_406(177, "BB_NO", -1);
							unk_0x5D96D8530B3D0904(&(uParam0->f_317), 2);
						}
						else if (uParam0->f_312 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_312];
							func_408(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_526(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
								func_516(uParam0, iParam5, 0);
							}
							else
							{
								func_516(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						unk_0x5D96D8530B3D0904(&(uParam0->f_317), 0);
					}
				}
				else if (!unk_0x06F8112AA79C53D9(2, 201) && !bVar0)
				{
					unk_0x0674E58A79778E99(&(uParam0->f_317), 0);
				}
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 1))
				{
					if ((((func_405() || unk_0xBFC0798A6E3417F9(2, 238)) || unk_0xBFC0798A6E3417F9(2, 202)) || (func_401() && Global_4268497 > -1)) || (unk_0xE57E602827E07C9D() && unk_0xBFC0798A6E3417F9(2, 202)))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (uParam0->f_310 == 0)
						{
							func_446(uParam0, bParam4, bVar1, iParam3, bParam6);
							func_415(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							func_516(uParam0, iParam5, 1);
							*iParam1 = -1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_314), 7);
							return 1;
						}
						else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 2))
						{
							uParam0->f_310 = 0;
							bVar1 = true;
							unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
						}
						else
						{
							func_407(-1);
							func_406(176, "BB_SELECT", -1);
							func_406(177, "BB_BACK", -1);
							unk_0x0674E58A79778E99(&(uParam0->f_317), 2);
						}
						unk_0x5D96D8530B3D0904(&(uParam0->f_317), 1);
					}
				}
				else if ((!unk_0x06F8112AA79C53D9(2, 202) && !unk_0x06F8112AA79C53D9(2, 238)) && !func_405())
				{
					unk_0x0674E58A79778E99(&(uParam0->f_317), 1);
				}
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 2))
				{
					if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 4))
					{
						if ((unk_0x06F8112AA79C53D9(2, 172) || unk_0xD245978525608929(2, 172)) || unk_0xD245978525608929(2, 241))
						{
							if (uParam0->f_310 == 0)
							{
								uParam0->f_311 = (uParam0->f_311 - 1);
							}
							else
							{
								uParam0->f_312 = (uParam0->f_312 - 1);
							}
							unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							unk_0x5D96D8530B3D0904(&(uParam0->f_317), 4);
							unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
							func_71(&(uParam0->f_315));
						}
					}
					else if (func_404(uParam0, 172))
					{
						unk_0x0674E58A79778E99(&(uParam0->f_317), 4);
					}
					if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 5))
					{
						if ((unk_0x06F8112AA79C53D9(2, 173) || unk_0xD245978525608929(2, 173)) || unk_0xD245978525608929(2, 242))
						{
							if (uParam0->f_310 == 0)
							{
								uParam0->f_311++;
							}
							else
							{
								uParam0->f_312++;
							}
							unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							unk_0x5D96D8530B3D0904(&(uParam0->f_317), 5);
							unk_0x0674E58A79778E99(&(uParam0->f_314), 0);
							func_71(&(uParam0->f_315));
						}
					}
					else if (func_404(uParam0, 173))
					{
						unk_0x0674E58A79778E99(&(uParam0->f_317), 5);
					}
				}
				if (uParam0->f_310 == 0)
				{
					if (uParam0->f_311 >= uParam0->f_313)
					{
						uParam0->f_311 = 0;
					}
					if (uParam0->f_311 < 0)
					{
						uParam0->f_311 = (uParam0->f_313 - 1);
					}
				}
				else
				{
					if (uParam0->f_312 >= uParam0->f_313)
					{
						uParam0->f_312 = 0;
					}
					if (uParam0->f_312 < 0)
					{
						uParam0->f_312 = (uParam0->f_313 - 1);
					}
				}
				func_446(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 2) && !unk_0xE57E602827E07C9D())
				{
					func_415(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

int func_404(var uParam0, int iParam1)
{
	if ((!unk_0x06F8112AA79C53D9(2, iParam1) && !unk_0xD245978525608929(2, iParam1)) || func_72(&(uParam0->f_315), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_405()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (((unk_0xD245978525608929(2, 177) && !unk_0xD245978525608929(2, 237)) && !unk_0xD245978525608929(2, 238)) && !unk_0x4FD68D5821EE3E19())
		{
			return 1;
		}
	}
	else if (unk_0xD245978525608929(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_406(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = unk_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_407(int iParam0)
{
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (!func_105(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar1], "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
}

void func_408(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xF4CCC8CB6DE7F1AE() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_409(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_18();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_292(iParam0);
		if (iVar1 == 0 && func_21(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_411(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_410(unk_0xD803B885F5E47A62()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1)][iVar0];
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

bool func_411(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_21(7207, iParam0, 0) != 0;
}

int func_412()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (((unk_0xD245978525608929(2, 176) && !unk_0xD245978525608929(2, 237)) && !unk_0xD245978525608929(2, 238)) && !unk_0x4FD68D5821EE3E19())
		{
			return 1;
		}
	}
	else if (unk_0xD245978525608929(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_413()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 > -1)
		{
			if (unk_0xBFC0798A6E3417F9(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_414(int iParam0, int iParam1)
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

void func_415(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_105(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_444(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_442(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar60, &iVar61);
		fVar63 = unk_0x33D480CCE15C991A(0);
		if (func_441())
		{
			iVar60 = round((to_float(iVar61) * fVar63));
		}
		fVar64 = (to_float(iVar60) / to_float(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_441())
		{
			fVar62 = 1f;
		}
		iVar60 = round((to_float(iVar60) / fVar62));
		iVar61 = round((to_float(iVar61) / fVar62));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_437(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_436(29), 64);
					StringCopy(&cVar81, func_434(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_433(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0,5f)), (Global_22348 + ((fVar57 - 0f) * 0,5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0,5f)), (Global_22348 + ((fVar57 - 0f) * 0,5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_433(Global_22347, (Global_22348 + fVar57), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_432();
					unk_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							unk_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							unk_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_22347 + 0,00390625f), ((Global_22348 + fVar57) + 0,00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_432();
					func_430((((Global_22347 + fParam5) - 0,00390625f) - func_431("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_432();
						func_430((((Global_22347 + fParam5) - 0,00390625f) - func_431("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0,00277776f);
						}
						fVar56 = 0,034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar97 + ((fVar51 - fVar97) * 0,5f)) - 0,00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_433(Global_22347, (fVar51 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0,5f / fVar62));
				vVar38.y = (vVar38.y * (0,5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA402F6C87C08815C(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + 0f) + (0,034722f * 0,5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0,034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0,00277776f * 2f));
				fVar42 = (Global_22347 + 0,0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_442(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_429(fVar42);
				unk_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar42, (fVar51 + 0,00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_433(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + ((((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_429(fVar42);
				unk_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar42, (fVar51 + 0,00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_442(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_428(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_436(Global_22350.f_4768), func_434(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0,00277776f * 2f));
				fVar42 = (Global_22347 + 0,0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_442(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_429(fVar42);
				unk_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar42, (fVar51 + 0,00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_433(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0,5f)), ((fVar51 + ((((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_429(fVar42);
				unk_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar42, (fVar51 + 0,00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_442(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_428(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_436(Global_4268421.f_67), func_434(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x9153358B38685E6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_424(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xD02CE72B4B66DC29(76, 84);
			unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0,034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0,0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						unk_0xA402F6C87C08815C(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0xA402F6C87C08815C(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0,5f)), (((fVar59 + fVar100) + (0,00277776f * IntToFloat(iVar12))) + (fVar56 * 0,5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0,0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0,0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_422(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											unk_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
												{
													unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = unk_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_442(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0,00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0,00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - ((fVar43 + fVar44) * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_442(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_442(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_428(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_436(26), func_434(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_442(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_442(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_428(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_436(27), func_434(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_422(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_421(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_442(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (func_442(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_428(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_436(Global_22350.f_4433[(iVar22 + iVar28)]), func_434(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_436(Global_22350.f_4433[(iVar22 + iVar28)]), func_434(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0,00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar42) + (0,00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar42), fVar35, 0);
											if (func_19() && unk_0x8A22C4C08282BF26(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_422(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0,0185f;
													fVar114 = 0,004f;
													fVar115 = 0,02f;
													unk_0xD3539A877EC25E86(0f, (0,35f * 0,7f));
													unk_0x7178F32F6742C936(255, 255, 255, 150);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar115 * 0,6f)), (fVar35 + (fVar113 * 0,75f)), 0,0175f, 0,035f, floor(fVar111), floor(fVar111), floor(fVar111), floor(fVar112), 0);
													unk_0x070005E852D4C0E9(&cVar107);
													unk_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0,00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_442(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_442(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_428(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_436(Global_22350.f_4433[(iVar22 + iVar14)]), func_434(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_436(Global_22350.f_4433[(iVar22 + iVar14)]), func_434(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_436(Global_22350.f_4433[(iVar22 + iVar14)]), func_434(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0,00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_422(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_421(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar43 = unk_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar43 * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_442(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_442(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_428(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_436(26), func_434(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_442(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_442(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_428(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_436(27), func_434(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_422(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_420((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_422(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_421(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = unk_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0,00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar43 * 0,5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_442(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_442(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_428(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_436(26), func_434(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_442(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_442(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_428(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_436(27), func_434(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_422(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_419((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_442(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0,00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0,5f) - (fVar44 * 0,5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_442(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0,5f);
												if (func_442(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_428(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_436(26), func_434(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_442(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0,5f);
												if (func_442(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_428(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_436(27), func_434(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_442(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_428(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x539E86AE011A8B38(func_436(Global_22350.f_4433[iVar22]), func_434(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), (fVar36 * func_418(Global_22350.f_4433[iVar22])), (fVar37 * func_418(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0,05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0,05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_442(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0,034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0,00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_417(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(10);
	}
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_416(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_416(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_417(int iParam0)
{
	if (func_136())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_51(0))
		{
			func_132(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

float func_418(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_419(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_420(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

void func_421(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_422(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_423(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0, 0, 0, floor((255f * 0,8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0,425f);
		unk_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0,425f);
		unk_0x7BBAC160090910C3(6);
	}
	else
	{
		unk_0x7BBAC160090910C3(0);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_423(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_424(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_105(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_444(bParam4, bParam8))
	{
		return;
	}
	if (func_426())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_16(unk_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (unk_0xB8E3620B82AD47D7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xF59058FCB716F903(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), unk_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar1])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_425(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_425(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_253(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[iVar1] != 361 && unk_0xEAE0D21A50E6C7F4(Global_22350.f_5052, iVar1))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(Global_22350.f_5026[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_16)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_425(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_253(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(80);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				unk_0x3CAEA85DA607305E(1);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0);
			}
			unk_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 70);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(76, 66);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				unk_0x744B56EE9DE7B57F(15, 0f, -0,0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			unk_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			unk_0xD02CE72B4B66DC29(82, 66);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_425(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_426()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_427())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_427()
{
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_428(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0xA402F6C87C08815C(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_429(float fParam0)
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0x4B9228CE1CF0DACA(2);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0,0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_430(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_431(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_432();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_432()
{
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0,35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_22347 + 0,0046875f), ((Global_22347 + Global_22349) - 0,0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_433(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_434(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_211(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_435(&uVar3);
			}
		}
		else
		{
			return func_435(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_435(var uParam0)
{
	return uParam0;
}

char* func_436(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_211(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_435(&uVar0);
		}
		else
		{
			return func_435(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_437(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_440(Global_22350.f_5218, 1);
	}
	else
	{
		func_440(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_439(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_442(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_438(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_438(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0,35f, 0);
}

float func_439(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_422(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_440(int iParam0, bool bParam1)
{
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_441()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_442(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_436(iParam0), 64);
	StringCopy(&cVar16, func_434(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_441())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_441())
			{
				fVar34 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(-892862129) > 0)
			{
				unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = round((to_float(iVar32) / fVar34));
			iVar33 = round((to_float(iVar33) / fVar34));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_443(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_443(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.y = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
		{
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_443(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0,5f;
			break;
		
		case 61:
			return 0,8f;
			break;
	}
	return 1f;
}

int func_444(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_414(8, -1) && func_445() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_445()
{
	return Global_1312812;
}

void func_446(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam2)
	{
		if (uParam0->f_310 == 0)
		{
			if (uParam0->f_1[uParam0->f_311] == 12)
			{
				if (!bParam4)
				{
					func_453("DEL_VEH_SEL1ac", 100, 0);
				}
				else
				{
					func_453("CAS_VEH_SELLV", 0, 0);
					func_452(unk_0x1739BA50603D849C(iParam3));
				}
			}
			else if (!bParam4)
			{
				func_453("DEL_VEH_SEL1", 100, 0);
			}
			else
			{
				func_453("CAS_VEH_SELLV", 0, 0);
				func_452(unk_0x1739BA50603D849C(iParam3));
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_317, 2))
		{
			if (func_447(uParam0->f_1[uParam0->f_311], 0, -1, 1))
			{
				_set_warning_message_2("PLYVEH_CM_CONT", "PLYVEH_CM_1Bac", 36, 0, 0, -1, 0, 0, 1, 0);
			}
			else
			{
				_set_warning_message_2("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, 0, -1, 0, 0, 1, 0);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_309, uParam0->f_312))
		{
			if (func_447(uParam0->f_1[uParam0->f_311], 0, -1, 1))
			{
				func_453("DEL_VEH_SEL2ac", 100, 0);
			}
			else
			{
				func_453("DEL_VEH_SEL2", 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_447(uParam0->f_1[uParam0->f_311], 0, -1, 0))
			{
				func_453("MP_PROP_SC_3ac", 100, 0);
			}
			else
			{
				func_453("MP_PROP_SC_3", 100, 0);
			}
		}
		else if (func_447(uParam0->f_1[uParam0->f_311], 0, -1, 1))
		{
			func_453("MP_PROP_SC_1ac", 100, 0);
		}
		else
		{
			func_453("MP_PROP_SC_1", 100, 0);
		}
	}
}

int func_447(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam1)
	{
		func_450(iParam0, &iVar0, iParam2);
	}
	else
	{
		func_398(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= func_448(12) && iVar0 < func_283(12))
		{
			return 1;
		}
	}
	return 0;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_292(iParam0);
		return func_449(iVar0);
	}
	return (func_284(iParam0, -1) * iParam0);
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

void func_450(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (iParam0 == (func_451(iVar0, iParam2) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_451(int iParam0, int iParam1)
{
	iVar0 = func_67(func_348(iParam0), iParam1, -1);
	iVar0 = (iVar0 + func_67(func_347(iParam0), iParam1, -1));
	return iVar0;
}

void func_452(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_453(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = unk_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_454(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	func_509(0, 0);
	if (bParam2)
	{
		func_504(func_508(), 0);
	}
	func_503(1, 1, 0, 0, 0);
	func_502(1, 2, 1, 1, 1);
	func_501(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar10 = func_389(iParam1);
	iVar14 = 1;
	switch (uParam0->f_310)
	{
		case 0:
			uParam0->f_319 = 0;
			func_500("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 25)
			{
				iVar3 = func_409(iVar1, -1);
				if ((iVar3 > 0 && func_499(iVar3)) && func_491(iVar1))
				{
					if (!func_489(iParam1, iVar1))
					{
					}
					else
					{
						Var37 = { Global_1049922[iVar3].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var37, func_487(func_488(unk_0xD803B885F5E47A62())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var37, func_485(func_486(unk_0xD803B885F5E47A62())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var37, "MP_BHUB_CLUBG", 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var37, func_484(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var37, func_484(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var37, func_484(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var37, func_483(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var37, func_483(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var37, func_483(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var37, "CASINO_GARNAME", 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var37, "ARCADE_GARNAME", 16);
						}
						if (!func_482())
						{
							if (!func_481() && !func_480(iVar3))
							{
								func_437(iVar0, &Var37, 0, 1, 0, 0);
							}
							else
							{
								Var6 = { Var37 };
								StringConCat(&Var6, "S", 16);
								func_437(iVar0, &Var6, 0, 1, 0, 0);
							}
						}
						else
						{
							func_437(iVar0, "PIM_DNAME", 1, 1, 0, 0);
							func_479(unk_0x19C9F30A7697B43C(&Var37), 0, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((func_21(5393, -1, 0) != 0 && func_67(15270, -1, -1) == 7) && !Global_262145.f_20609) && func_469(iParam1, 156)) && !unk_0xAFB8495D36825275(iParam1)) && !unk_0xC41A9202669A24C4(iParam1))
			{
				func_437(iVar0, func_468(0), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_467(0);
				iVar0++;
			}
			if (func_411(-1) && func_469(iParam1, 223))
			{
				func_437(iVar0, func_468(2), 0, 1, 0, 0);
				uParam0->f_1[iVar0] = func_467(2);
				iVar0++;
			}
			uParam0->f_313 = iVar0;
			func_466(uParam0->f_311, 1, 1);
			break;
		
		case 1:
			if (unk_0xAFB8495D36825275(iParam1) || unk_0xC41A9202669A24C4(iParam1))
			{
				func_500("DEL_VEH_SEL3ac");
			}
			else
			{
				func_500("DEL_VEH_SEL3");
			}
			uParam0->f_309 = 0;
			iVar4 = func_448(uParam0->f_319);
			iVar5 = (10 + func_448(uParam0->f_319));
			if (uParam0->f_319 >= 25)
			{
				iVar13 = func_292(uParam0->f_319);
				iVar1 = 0;
				while (iVar1 < func_465(iVar13))
				{
					iVar11 = (iVar1 + iVar4);
					if (!bVar10)
					{
						if (func_397(iVar11))
						{
							bVar2 = true;
						}
					}
					else if (!func_397(iVar11))
					{
						bVar2 = true;
					}
					if (!func_469(iParam1, iVar11))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_408(iVar11, &iVar12, 1);
						if ((iVar12 >= 0 && Global_1323615[iVar12].f_66 != 0) && unk_0x3FC14104C3FD24D5(Global_1323615[iVar12].f_66))
						{
							iVar14 = 1;
							StringCopy(&vVar15, "", 24);
							if (func_464(&(Global_1323615[iVar12])))
							{
								iVar14++;
							}
							if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
							{
								iVar14++;
							}
							Var21 = { func_460(-1, iVar11, 1) };
							if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 1))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 2) && !bVar10)
								{
									StringCopy(&vVar15, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&vVar15, iVar14, 24);
									func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
									if (unk_0xEA6BC48857E0AC4C(&Var21))
									{
										func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
									}
									else
									{
										func_456(&Var21, 0, 0, 1);
									}
									if (func_464(&(Global_1323615[iVar12])))
									{
										func_459("VEH_LIVERY", 0);
									}
									if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
									{
										func_459("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
								else
								{
									func_437(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar11;
									unk_0x5D96D8530B3D0904(&(uParam0->f_309), iVar0);
									iVar0++;
								}
							}
							else if (bVar10)
							{
								if (func_389(Global_1323615[iVar12].f_66))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 6))
									{
										StringCopy(&vVar15, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&vVar15, iVar14, 24);
										func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
										if (unk_0xEA6BC48857E0AC4C(&Var21))
										{
											func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
										}
										else
										{
											func_456(&Var21, 0, 0, 1);
										}
										if (func_464(&(Global_1323615[iVar12])))
										{
											func_459("VEH_LIVERY", 0);
										}
										if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
										{
											func_459("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&vVar15, "PIL_MP_VEH_0", 24);
										StringIntConCat(&vVar15, iVar14, 24);
										func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
										if (unk_0xEA6BC48857E0AC4C(&Var21))
										{
											func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
										}
										else
										{
											func_456(&Var21, 0, 0, 1);
										}
										if (func_464(&(Global_1323615[iVar12])))
										{
											func_459("VEH_LIVERY", 0);
										}
										if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
										{
											func_459("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
							}
							else if (!func_389(Global_1323615[iVar12].f_66))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 6))
								{
									StringCopy(&vVar15, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&vVar15, iVar14, 24);
									func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
									if (unk_0xEA6BC48857E0AC4C(&Var21))
									{
										func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
									}
									else
									{
										func_456(&Var21, 0, 0, 1);
									}
									if (func_464(&(Global_1323615[iVar12])))
									{
										func_459("VEH_LIVERY", 0);
									}
									if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
									{
										func_459("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&vVar15, "PIL_MP_VEH_0", 24);
									StringIntConCat(&vVar15, iVar14, 24);
									func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
									if (unk_0xEA6BC48857E0AC4C(&Var21))
									{
										func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
									}
									else
									{
										func_456(&Var21, 0, 0, 1);
									}
									if (func_464(&(Global_1323615[iVar12])))
									{
										func_459("VEH_LIVERY", 0);
									}
									if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
									{
										func_459("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar11;
								iVar0++;
							}
						}
						else
						{
							func_437(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar11;
							unk_0x5D96D8530B3D0904(&(uParam0->f_309), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = func_409(uParam0->f_319, -1);
				iVar1 = 0;
				while (iVar1 < func_284(uParam0->f_319, -1))
				{
					iVar11 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1049922[iVar3].f_33 == 2)
					{
						if (iVar11 >= iVar4 + 2 && iVar11 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1049922[iVar3].f_33 == 6)
					{
						if ((iVar11 >= iVar4 + 6 && iVar11 != iVar5) && iVar11 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar10)
					{
						if (iVar11 >= iVar5 && func_397(iVar11))
						{
							bVar2 = true;
						}
					}
					else if (iVar11 < iVar5)
					{
						bVar2 = true;
					}
					if (!func_455(iVar11, iVar3, uParam0->f_319))
					{
						bVar2 = true;
					}
					if (!func_469(iParam1, iVar11))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_408(iVar11, &iVar12, 1);
						if ((iVar12 >= 0 && Global_1323615[iVar12].f_66 != 0) && unk_0x3FC14104C3FD24D5(Global_1323615[iVar12].f_66))
						{
							iVar14 = 1;
							StringCopy(&vVar15, "", 24);
							if (func_464(&(Global_1323615[iVar12])))
							{
								iVar14++;
							}
							if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
							{
								iVar14++;
							}
							Var21 = { func_460(-1, iVar11, 1) };
							if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 1))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 2) && !bVar10)
								{
									StringCopy(&vVar15, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&vVar15, iVar14, 24);
									func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
									if (unk_0xEA6BC48857E0AC4C(&Var21))
									{
										func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
									}
									else
									{
										func_456(&Var21, 0, 0, 1);
									}
									if (func_464(&(Global_1323615[iVar12])))
									{
										func_459("VEH_LIVERY", 0);
									}
									if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
									{
										func_459("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
								else
								{
									func_437(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
									uParam0->f_1[iVar0] = iVar11;
									unk_0x5D96D8530B3D0904(&(uParam0->f_309), iVar0);
									iVar0++;
								}
							}
							else if (bVar10)
							{
								if (func_389(Global_1323615[iVar12].f_66))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 6))
									{
										StringCopy(&vVar15, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&vVar15, iVar14, 24);
										func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
										if (unk_0xEA6BC48857E0AC4C(&Var21))
										{
											func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
										}
										else
										{
											func_456(&Var21, 0, 0, 1);
										}
										if (func_464(&(Global_1323615[iVar12])))
										{
											func_459("VEH_LIVERY", 0);
										}
										if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
										{
											func_459("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&vVar15, "PIL_MP_VEH_0", 24);
										StringIntConCat(&vVar15, iVar14, 24);
										func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
										if (unk_0xEA6BC48857E0AC4C(&Var21))
										{
											func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
										}
										else
										{
											func_456(&Var21, 0, 0, 1);
										}
										if (func_464(&(Global_1323615[iVar12])))
										{
											func_459("VEH_LIVERY", 0);
										}
										if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
										{
											func_459("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar11;
									iVar0++;
								}
							}
							else if (!func_389(Global_1323615[iVar12].f_66))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar12].f_102, 6))
								{
									StringCopy(&vVar15, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&vVar15, iVar14, 24);
									func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
									if (unk_0xEA6BC48857E0AC4C(&Var21))
									{
										func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
									}
									else
									{
										func_456(&Var21, 0, 0, 1);
									}
									if (func_464(&(Global_1323615[iVar12])))
									{
										func_459("VEH_LIVERY", 0);
									}
									if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
									{
										func_459("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&vVar15, "PIL_MP_VEH_0", 24);
									StringIntConCat(&vVar15, iVar14, 24);
									func_437(iVar0, &vVar15, iVar14, 1, 0, 0);
									if (unk_0xEA6BC48857E0AC4C(&Var21))
									{
										func_459(unk_0x1739BA50603D849C(Global_1323615[iVar12].f_66), 0);
									}
									else
									{
										func_456(&Var21, 0, 0, 1);
									}
									if (func_464(&(Global_1323615[iVar12])))
									{
										func_459("VEH_LIVERY", 0);
									}
									if (func_463(Global_1323615[iVar12].f_66, Global_1323615[iVar12].f_77, Global_1323615[iVar12].f_9[10]) && func_462(Global_1323615[iVar12].f_66))
									{
										func_459("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar11;
								iVar0++;
							}
						}
						else
						{
							func_437(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
							uParam0->f_1[iVar0] = iVar11;
							unk_0x5D96D8530B3D0904(&(uParam0->f_309), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_313 = iVar0;
			if (uParam0->f_312 >= uParam0->f_313)
			{
				uParam0->f_312 = 0;
			}
			func_466(uParam0->f_312, 1, 1);
			break;
	}
	func_407(-1);
	func_406(176, "BB_SELECT", -1);
	func_406(177, "BB_BACK", -1);
}

int func_455(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 > 0 && iParam1 <= 126) && func_499(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_448(iParam2)) >= 0 && (iParam0 - func_448(iParam2)) < Global_1049922[iParam1].f_33) && iParam0 < 307)
			{
				return 1;
			}
			if (Global_1049922[iParam1].f_33 == 2 && iParam0 == (10 + func_448(iParam2)))
			{
				return 1;
			}
			if ((Global_1049922[iParam1].f_33 == 6 && iParam0 >= (10 + func_448(iParam2))) && iParam0 <= (11 + func_448(iParam2)))
			{
				return 1;
			}
			if (Global_1049922[iParam1].f_33 == 10)
			{
				if (func_285(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_448(iParam2)) && iParam0 <= (12 + func_448(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_448(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_448(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_448(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_448(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_448(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_448(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_448(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_448(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_448(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_448(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_448(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 22)
			{
				if (iParam0 >= func_448(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_456(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221]), sParam0, 64);
	Global_22350.f_5221++;
	if (bParam3)
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 9;
	}
	else
	{
		Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 7;
	}
	Global_22350.f_5743++;
	fVar0 = func_458();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_458();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_442(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_457();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_457()
{
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_442(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9153358B38685E6E(0,35f, 0))
	{
		return fVar2;
	}
	return unk_0x9153358B38685E6E(0,35f, 0);
}

float func_458()
{
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_422(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		unk_0xBBA442527B4BB1A6(&(Global_22350.f_73[Global_22350.f_5742]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0x6D99DF8263D35CE5(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0x21994591120B91F0(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		fVar0 = unk_0x79E367314AFBB5CA(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_442(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_459(char* sParam0, bool bParam1)
{
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam0, 24);
	Global_22350.f_5220++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 1;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_458();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_442(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_457();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

struct<16> func_460(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_461(iParam1) != -1)
		{
			Var0 = { Global_2097152[func_186()].f_5506.f_99[func_461(iParam1)] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2097152[func_186()].f_5506.f_99[iParam0] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_461(int iParam0)
{
	func_398(Global_4010525, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !unk_0xA14BB9332558B949()) && !func_517())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case -2039755226:
		case 683047626:
			return 0;
			break;
	}
	return 1;
}

int func_463(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -1041692462:
		case 633712403:
			if (!unk_0xEAE0D21A50E6C7F4(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case 1545842587:
		case 1011753235:
		case 784565758:
			if (!unk_0xEAE0D21A50E6C7F4(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case 349605904:
		case -1622444098:
		case 1923400478:
		case -1361687965:
		case -2119578145:
		case -1790546981:
		case -2039755226:
			if (!unk_0xEAE0D21A50E6C7F4(iParam1, 1) && !unk_0xEAE0D21A50E6C7F4(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case -1013450936:
		case -1804415708:
		case 1107404867:
			if ((!unk_0xEAE0D21A50E6C7F4(iParam1, 1) && !unk_0xEAE0D21A50E6C7F4(iParam1, 2)) && !unk_0xEAE0D21A50E6C7F4(iParam1, 3))
			{
				return 1;
			}
			break;
		
		case 108773431:
			if (!unk_0xEAE0D21A50E6C7F4(iParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case -1660945322:
			if (!unk_0xEAE0D21A50E6C7F4(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case -1829802492:
			if (!unk_0xEAE0D21A50E6C7F4(iParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case 683047626:
		case -121446169:
			if (!unk_0xEAE0D21A50E6C7F4(iParam1, 0))
			{
				return 1;
			}
			break;
		
		case 1717532765:
			if (unk_0xEAE0D21A50E6C7F4(iParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_464(var uParam0)
{
	switch (uParam0->f_66)
	{
		case 1581459400:
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_465(int iParam0)
{
	return (func_291(iParam0) - func_449(iParam0));
}

void func_466(int iParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

int func_467(int iParam0)
{
	return (1000 + iParam0);
}

char* func_468(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		default:
	}
	return "";
}

int func_469(int iParam0, int iParam1)
{
	if (!func_478(iParam1) && !func_400(iParam0))
	{
		if (func_477(iParam0, 0))
		{
			if (iParam1 == func_476(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_475(iParam1))
		{
			return 0;
		}
	}
	if (func_389(iParam0))
	{
		if (!func_397(iParam1))
		{
			return 0;
		}
	}
	else if (func_397(iParam1))
	{
		return 0;
	}
	if (func_474(iParam1))
	{
		if (!(unk_0x7D8B2A8F9EA82DB7(iParam0) || unk_0xD1CC995EE5EB1EC1(iParam0)))
		{
			return 0;
		}
	}
	if (func_478(iParam1))
	{
		if (!func_400(iParam0))
		{
			return 0;
		}
		else if ((func_473(iParam0) + func_448(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_472(iParam1))
	{
		if (!func_362(iParam0))
		{
			return 0;
		}
	}
	else if (func_362(iParam0))
	{
		return 0;
	}
	if (!func_471(iParam1, 1))
	{
		if (func_470(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != 2069146067)
	{
		return 0;
	}
	if ((iParam0 == -801550069 || iParam0 == 679453769) || iParam0 == 1909700336)
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 1721676810:
		case 840387324:
		case -715746948:
		case 668439077:
		case -1694081890:
		case -2042350822:
		case -801550069:
		case 679453769:
		case 1909700336:
			return 1;
			break;
	}
	return 0;
}

int func_471(int iParam0, bool bParam1)
{
	if (iParam0 >= func_448(18) && iParam0 < func_283(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_472(int iParam0)
{
	if (iParam0 >= func_448(12) && iParam0 < func_283(12))
	{
		return 1;
	}
	return 0;
}

int func_473(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1180875963:
			return 0;
			break;
		
		case 682434785:
			return 1;
			break;
		
		case -1912017790:
			return 2;
			break;
		
		case -1649536104:
			return 3;
			break;
		
		case 989294410:
			return 4;
			break;
		
		case -827162039:
			return 5;
			break;
		
		case -312295511:
			return 5;
			break;
		
		case 941494461:
			return 6;
			break;
		
		case -1590337689:
			return 7;
			break;
	}
	return -1;
}

int func_474(int iParam0)
{
	if (iParam0 >= func_448(6) && iParam0 < func_283(6))
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return 1;
			break;
	}
	if (iParam0 >= func_448(11) && iParam0 < func_283(11))
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0)
{
	if (func_400(iParam0))
	{
		return (func_473(iParam0) + func_448(11));
	}
	else
	{
		switch (iParam0)
		{
			case -1881846085:
				return 157;
				break;
			
			case 387748548:
			case 177270108:
				return 158;
				break;
			
			case -2118308144:
				return 190;
				break;
			
			case -1435527158:
				return 188;
				break;
			
			case -692292317:
				return 187;
				break;
			
			case -1693015116:
				return 186;
				break;
			
			case 1489874736:
				return 189;
				break;
		}
		if (iParam0 == -1988428699)
		{
			return 222;
		}
		else if (iParam0 == 219613597)
		{
			return 224;
		}
		else if (iParam0 == 1945374990)
		{
			return 225;
		}
		else if (iParam0 == 1653666139)
		{
			return 226;
		}
		if (iParam0 == -286046740)
		{
			return 257;
		}
		if (iParam0 == -1254331310)
		{
			return 279;
		}
	}
	return -1;
}

int func_477(int iParam0, bool bParam1)
{
	if (func_400(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case -1881846085:
		case 387748548:
		case 177270108:
			if (!bParam1)
			{
				return 1;
			}
			break;
		
		case -2118308144:
		case -1435527158:
		case -692292317:
		case -1693015116:
		case 1489874736:
			return 1;
			break;
	}
	if (((iParam0 == 219613597 || iParam0 == 1945374990) || iParam0 == 1653666139) || iParam0 == -1988428699)
	{
		return 1;
	}
	if (iParam0 == -286046740)
	{
		return 1;
	}
	if (iParam0 == -1254331310)
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0)
{
	if (iParam0 >= func_448(11) && iParam0 < func_283(11))
	{
		return 1;
	}
	return 0;
}

void func_479(char* sParam0, bool bParam1, bool bParam2)
{
	if (Global_22350.f_5221 >= 32)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	StringCopy(&(Global_2461220[Global_22350.f_5221]), sParam0, 64);
	Global_22350.f_5221++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 5;
	Global_22350.f_5743++;
	fVar0 = func_458();
	if (bParam2)
	{
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_458();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_442(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_457();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

int func_480(int iParam0)
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_481()
{
	switch (unk_0xB3260A60545D3F11())
	{
		case 9:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_482()
{
	switch (unk_0xB3260A60545D3F11())
	{
		case 7:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_483(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_484(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_485(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_486(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_271;
	}
	return 0;
}

char* func_487(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

int func_488(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1590535[iParam0].f_274.f_264;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
{
	if (iParam0 == -1254331310)
	{
		return 0;
	}
	if ((((iParam0 == 1489874736 || iParam0 == -1435527158) || iParam0 == -1693015116) || iParam0 == -692292317) || iParam0 == -2118308144)
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_400(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == -801550069 || iParam0 == 679453769) || iParam0 == 1909700336)
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == 668439077 || iParam0 == -1694081890) || iParam0 == -2042350822) || iParam0 == 1721676810) || iParam0 == 840387324) || iParam0 == -715746948)
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == 219613597 || iParam0 == 1945374990) || iParam0 == 1653666139)
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_362(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_490())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (unk_0xAD09C9A4B56FA133(iParam0))
		{
			return 0;
		}
		else if (unk_0x7D8B2A8F9EA82DB7(iParam0) || unk_0xD1CC995EE5EB1EC1(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if ((((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22)
	{
		if (unk_0xAD09C9A4B56FA133(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_473(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_490()
{
	return -1988428699;
}

int func_491(int iParam0)
{
	if (iParam0 == 22)
	{
		if (!func_492())
		{
			return 0;
		}
	}
	return 1;
}

bool func_492()
{
	return (func_495(0) && func_493(0));
}

bool func_493(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xEAE0D21A50E6C7F4(func_21(8723, -1, 0), 4);
	}
	return func_494(unk_0xD803B885F5E47A62());
}

int func_494(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 4);
	}
	return 0;
}

int func_495(bool bParam0)
{
	if (bParam0)
	{
		return func_496(27227, -1, -1);
	}
	if (unk_0xD803B885F5E47A62() != func_8())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_393.f_1, 2);
	}
	return 0;
}

int func_496(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_498(iParam0, iParam1);
	uVar2 = func_497(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_497(int iParam0)
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

int func_498(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
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

int func_499(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

void func_500(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_501(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_502(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_504(int iParam0, int iParam1)
{
	sVar0 = func_507(iParam0, iParam1);
	if (!unk_0xEA6BC48857E0AC4C(sVar0))
	{
		func_505(1, sVar0, sVar0);
	}
}

void func_505(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_506(29, sParam1, sParam2);
}

void func_506(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0]), sParam2, 64);
}

char* func_507(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
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
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
				
				case 15:
					return "ShopUI_Title_GR_GunMod";
				
				case 16:
					return "ShopUI_Title_GR_GunMod";
				
				case 17:
					return "ShopUI_Title_ArenaWar";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
			return "ShopUI_Title_GR_GunMod";
			break;
		
		case 47:
			return "ShopUI_Title_GR_GunMod";
		
		case 48:
			return "ShopUI_Title_GR_GunMod";
		
		case 49:
			return "ShopUI_Title_GR_GunMod";
		
		case 50:
			return "ShopUI_Title_Casino";
		
		case 51:
			return "ShopUI_Title_Casino";
		
		case 52:
			return "ShopUI_Title_GR_GunMod";
	}
	return "";
}

int func_508()
{
	return Global_98796.f_437;
}

void func_509(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0,05f;
	Global_22348 = 0,05f;
	Global_22349 = 0,225f;
	fVar2 = unk_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0,225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_22349 = (0,225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0,225f;
	}
}

bool func_510(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_105(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!unk_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_511(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_511(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_512(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	fVar6 = (0,034722f / 2f);
	iVar13 = -1;
	if (!unk_0x91E3F625EF57450D(2))
	{
		Global_4268497 = -1;
		return;
	}
	unk_0xFE29D579C98536B2(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0,034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0,034722f);
		fVar1 = (fVar1 + 0,034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0,034722f);
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	func_514();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_513(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0,034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_513(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0,034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xD02CE72B4B66DC29(76, 84);
				unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
				func_433(fVar4, (fVar5 + (IntToFloat(iVar13) * 0,034722f)), Global_22349, (0,034722f - 0,0015f), 255, 255, 255, iVar10);
				unk_0xD59EF13BB60323B9();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0,9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0,25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_513(bool bParam0)
{
	fVar2 = (0,034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_433(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_433(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_514()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = unk_0x4B7163B4D6E4A3C2(2, 239);
	Global_4268492 = unk_0x4B7163B4D6E4A3C2(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_515()
{
	Global_2537071.f_4532 = 0;
}

void func_516(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_314, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_311 = 0;
	uParam0->f_313 = 0;
	uParam0->f_314 = 0;
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_314), 7);
	}
	uParam0->f_317 = 0;
	func_103(1, iParam1);
}

bool func_517()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

int func_518(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (Global_262145.f_10163)
	{
		if (bParam5)
		{
			return func_523(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_526(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_522(iParam3);
	}
	if (!func_400(iParam2) && func_477(iParam2, 0))
	{
		iVar6 = func_476(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				func_521(iVar6, &iVar7, iParam4);
			}
			else
			{
				func_408(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (unk_0xEAE0D21A50E6C7F4(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1323615[iVar7].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_520(iVar1))
		{
		}
		else if (func_409(iVar1, iParam4) >= Global_1049922)
		{
			return -1;
		}
		else if (func_409(iVar1, iParam4) > 0 && func_409(iVar1, iParam4) <= 126)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_409(iVar1, iParam4))
			{
				iVar4 = Global_1049922[func_409(iVar1, iParam4)].f_33;
				if (func_409(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (func_409(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (func_409(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((func_409(iVar1, iParam4) == 119 || func_409(iVar1, iParam4) == 120) || func_409(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((func_409(iVar1, iParam4) == 122 || func_409(iVar1, iParam4) == 123) || func_409(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (func_409(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (func_409(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				if (func_389(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_448(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_455(iVar6, func_409(iVar1, iParam4), iVar1) && func_469(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_521(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_408(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (unk_0xEAE0D21A50E6C7F4(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1323615[iVar7].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_455(iVar6, func_409(iVar1, iParam4), iVar1) && func_469(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_521(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_408(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1323615[iVar7].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (func_455(iVar6, func_409(iVar1, iParam4), iVar1) && func_469(iParam2, iVar6))
								{
									if (bParam5)
									{
										func_521(iVar6, &iVar7, iParam4);
									}
									else
									{
										func_408(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (unk_0xEAE0D21A50E6C7F4(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_455(iVar6, func_409(iVar1, iParam4), iVar1) && func_469(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_521(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_408(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
										if (unk_0xEAE0D21A50E6C7F4(iVar5, 1) && !unk_0xEAE0D21A50E6C7F4(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 1) && !unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_455(iVar6, func_409(iVar1, iParam4), iVar1) && func_469(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_521(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_408(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (unk_0xEAE0D21A50E6C7F4(iVar5, 0))
												{
													return iVar6;
												}
												else if (unk_0xEAE0D21A50E6C7F4(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (unk_0xEAE0D21A50E6C7F4(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1323615[iVar7].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 0))
										{
											return iVar6;
										}
										else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 1))
										{
											return iVar6;
										}
									}
									else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar7].f_102, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if (((func_21(5393, iParam4, 0) != 0 && func_67(15270, iParam4, -1) == 7) && !Global_262145.f_20609) && func_469(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_519(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_411(iParam4) && func_469(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_519(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

int func_519(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (func_469(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_521(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_408(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1323615[iVar1].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar1].f_102, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 1:
			iVar1 = -1;
			if (func_469(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_521(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_408(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1323615[iVar1].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (func_469(iParam3, iParam0))
				{
					if (bParam5)
					{
						func_521(iParam0, &iVar1, iParam4);
					}
					else
					{
						func_408(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar1].f_102, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (func_469(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_521(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_408(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar1].f_102, 1) && !unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar1].f_102, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 2:
			iVar1 = -1;
			if (func_469(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_521(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_408(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
								{
									return iParam0;
								}
								else if (unk_0xEAE0D21A50E6C7F4(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1323615[iVar1].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar1].f_102, 0))
						{
							return iParam0;
						}
						else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar1].f_102, 1))
						{
							return iParam0;
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar1].f_102, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		
		case 22:
			if (!func_492())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_521(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (func_451(iParam0, iParam2) - 1);
}

int func_522(int iParam0)
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_523(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	bVar6 = func_113();
	bVar6 = true;
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_522(iParam3);
	}
	if (!func_400(iParam2) && func_477(iParam2, 0))
	{
		iVar7 = func_476(iParam2);
		return func_525(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if ((bVar6 || func_409(iVar1, iParam4) > 0) && !func_520(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == func_409(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = func_284(iVar1, -1);
				}
				else
				{
					iVar4 = Global_1049922[func_409(iVar1, iParam4)].f_33;
				}
				if (func_389(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_448(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_524(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (unk_0xEAE0D21A50E6C7F4(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_524(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (func_524(iParam2, iVar7))
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (unk_0xEAE0D21A50E6C7F4(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_524(iParam2, iVar7))
							{
								iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
								if (unk_0xEAE0D21A50E6C7F4(iVar5, 1) && !unk_0xEAE0D21A50E6C7F4(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_524(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (unk_0xEAE0D21A50E6C7F4(iVar5, 0))
										{
											return iVar7;
										}
										else if (unk_0xEAE0D21A50E6C7F4(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (unk_0xEAE0D21A50E6C7F4(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_21(5393, iParam4, 0) != 0 && !Global_262145.f_20609) && func_469(iParam2, 156))
	{
		iVar7 = func_525(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_411(iParam4) && func_469(iParam2, 223))
	{
		iVar7 = func_525(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_524(int iParam0, int iParam1)
{
	if (!func_400(iParam0))
	{
		if (func_477(iParam0, 0))
		{
			if (iParam1 == func_476(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!func_478(iParam1) && func_475(iParam1))
		{
			return 0;
		}
	}
	if (func_389(iParam0))
	{
		if (!func_296(iParam1))
		{
			return 0;
		}
	}
	else if (func_296(iParam1))
	{
		return 0;
	}
	if (func_472(iParam1))
	{
		if (!func_362(iParam0))
		{
			return 0;
		}
	}
	else if (func_362(iParam0))
	{
		return 0;
	}
	if ((iParam0 == -801550069 || iParam0 == 679453769) || iParam0 == 1909700336)
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_525(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 158 && iParam6)
	{
		if (func_524(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (func_21(func_281(4, iParam0), iParam5, 0) == 387748548 || func_21(func_281(4, iParam0), iParam5, 0) == 177270108)
				{
					return iParam0;
				}
				else if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1323615[iParam0].f_66 == 387748548 || Global_1323615[iParam0].f_66 == 177270108)
			{
				return iParam0;
			}
			else if (Global_1323615[iParam0].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (func_524(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_524(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (func_524(iParam3, iParam0))
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (func_524(iParam3, iParam0))
				{
					iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
					if (unk_0xEAE0D21A50E6C7F4(iVar0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			
			case 2:
				if (func_524(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
							{
								return iParam0;
							}
							else if (unk_0xEAE0D21A50E6C7F4(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!func_524(iParam3, iParam0))
				{
				}
				else if (Global_1323615[iParam0].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 0))
					{
						return iParam0;
					}
				}
				break;
			
			case 1:
				if (!func_524(iParam3, iParam0))
				{
				}
				else if (Global_1323615[iParam0].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!func_524(iParam3, iParam0))
					{
					}
					else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 0))
					{
						return iParam0;
					}
				}
				if (!func_524(iParam3, iParam0))
				{
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 1) && !unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 2))
				{
					return iParam0;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 1))
				{
				}
				break;
			
			case 2:
				if (!func_524(iParam3, iParam0))
				{
				}
				else if (Global_1323615[iParam0].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 0))
					{
						return iParam0;
					}
					else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 1))
					{
						return iParam0;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0].f_102, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

int func_526(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	bVar5 = func_113();
	bVar5 = true;
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_522(iParam3);
	}
	if (iParam3 == 126)
	{
		if (func_409(22, -1) > 0)
		{
			if (!func_492())
			{
				return -1;
			}
		}
	}
	if (!func_400(iParam2) && func_477(iParam2, 0))
	{
		iVar6 = func_476(iParam2);
		return func_525(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_520(iVar1))
		{
		}
		else if (!bVar5 && func_409(iVar1, iParam4) >= Global_1049922)
		{
			return -1;
		}
		else if (bVar5 || (func_409(iVar1, iParam4) > 0 && func_409(iVar1, iParam4) <= 126))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == func_409(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = func_284(iVar1, -1);
				}
				else
				{
					iVar4 = Global_1049922[func_409(iVar1, iParam4)].f_33;
				}
				if (func_389(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_448(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_524(iParam2, iVar6))
							{
							}
							else if (Global_1323615[iVar6].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_524(iParam2, iVar6))
							{
							}
							else if (Global_1323615[iVar6].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!func_524(iParam2, iVar6))
								{
								}
								else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_524(iParam2, iVar6))
							{
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 1) && !unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 2))
							{
								return iVar6;
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 1))
							{
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_524(iParam2, iVar6))
							{
							}
							else if (Global_1323615[iVar6].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 0))
								{
									return iVar6;
								}
								else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 1))
								{
									return iVar6;
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar6].f_102, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_21(5393, iParam4, 0) != 0 && !Global_262145.f_20609) && func_469(iParam2, 156))
	{
		iVar6 = func_525(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (func_411(iParam4))
	{
		if (func_524(iParam2, 223))
		{
			iVar6 = func_525(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_527(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (func_409(0, -1) >= 1 && func_489(iParam0, 0))
	{
		if ((((((((((func_409(1, -1) >= 1 || (func_409(6, -1) >= 1 && func_489(iParam0, 6))) || func_409(8, -1) >= 1) || func_534()) || (func_532() && func_469(iParam0, 159))) || (func_530() && func_489(iParam0, 13))) || (func_528() && func_489(iParam0, 14))) || (func_411(-1) && iParam0 == 2069146067)) || (func_409(18, -1) >= 1 && func_489(iParam0, 18))) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		*iParam1 = func_409(0, -1);
		return;
	}
	else if (func_409(6, -1) >= 1 && func_489(iParam0, 6))
	{
		if ((((((((func_409(8, -1) >= 1 || func_534()) || (func_532() && func_469(iParam0, 159))) || (func_530() && func_489(iParam0, 13))) || (func_528() && func_489(iParam0, 14))) || (func_411(-1) && iParam0 == 2069146067)) || (func_409(18, -1) >= 1 && func_489(iParam0, 18))) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		*iParam1 = func_409(6, -1);
		return;
	}
	else if (func_409(8, -1) >= 1 && func_489(iParam0, 8))
	{
		if (((((((func_534() || (func_532() && func_469(iParam0, 159))) || (func_530() && func_489(iParam0, 13))) || (func_528() && func_489(iParam0, 14))) || (func_411(-1) && iParam0 == 2069146067)) || (func_409(18, -1) >= 1 && func_489(iParam0, 18))) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		*iParam1 = func_409(8, -1);
		return;
	}
	else if (func_534() && func_469(iParam0, 156))
	{
		if (((((((func_532() && func_469(iParam0, 159)) || (func_530() && func_489(iParam0, 13))) || (func_528() && func_489(iParam0, 14))) || (func_411(-1) && iParam0 == 2069146067)) || (func_409(18, -1) >= 1 && func_489(iParam0, 18))) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_532() && func_469(iParam0, 159))
	{
		if ((((((func_530() && func_489(iParam0, 13)) || (func_528() && func_489(iParam0, 14))) || (func_411(-1) && iParam0 == 2069146067)) || (func_409(18, -1) >= 1 && func_489(iParam0, 18))) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		*iParam1 = func_409(12, -1);
		return;
	}
	else if (func_530() && func_489(iParam0, 13))
	{
		if ((((func_528() && func_489(iParam0, 14)) || (func_409(18, -1) >= 1 && func_489(iParam0, 18))) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		if (func_411(-1) && iParam0 == 2069146067)
		{
			return;
		}
		*iParam1 = func_409(13, -1);
		return;
	}
	else if (func_528() && func_489(iParam0, 14))
	{
		if (((((func_528() && func_409(15, -1) >= 1) && func_489(iParam0, 15)) || (func_409(18, -1) >= 1 && func_489(iParam0, 18))) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		if (func_411(-1) && iParam0 == 2069146067)
		{
			return;
		}
		*iParam1 = func_409(14, -1);
		return;
	}
	else if (func_411(-1) && iParam0 == 2069146067)
	{
		if (((func_409(18, -1) >= 1 && func_489(iParam0, 18)) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (func_409(18, -1) >= 1 && func_489(iParam0, 18))
	{
		if (((func_409(19, -1) >= 1 && func_489(iParam0, 18)) || (func_409(21, -1) >= 1 && func_489(iParam0, 21))) || ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492()))
		{
			return;
		}
		*iParam1 = func_409(18, -1);
		return;
	}
	else if (func_409(21, -1) >= 1 && func_489(iParam0, 21))
	{
		if ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492())
		{
			return;
		}
		*iParam1 = func_409(21, -1);
		return;
	}
	else if ((func_409(22, -1) >= 1 && func_489(iParam0, 22)) && func_492())
	{
		*iParam1 = func_409(22, -1);
		return;
	}
}

bool func_528()
{
	return func_529() != 0;
}

int func_529()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_322;
}

bool func_530()
{
	return func_531() != 0;
}

int func_531()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_271;
}

bool func_532()
{
	return func_533() != 0;
}

int func_533()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_264;
}

bool func_534()
{
	return func_21(5393, -1, 0) != 0;
}

int func_535(int iParam0, int iParam1)
{
	if (func_409(0, iParam1) != 0 && func_489(iParam0, 0))
	{
		return 1;
	}
	else if (func_409(6, iParam1) != 0 && func_489(iParam0, 6))
	{
		return 1;
	}
	else if (func_409(8, iParam1) != 0 && func_489(iParam0, 8))
	{
		return 1;
	}
	else if (func_409(11, iParam1) != 0 && func_489(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == -1881846085)
	{
		return 1;
	}
	else if (iParam0 == -1254331310)
	{
		return 1;
	}
	else if (((func_21(5393, iParam1, 0) != 0 && func_67(15270, iParam1, -1) == 7) && !Global_262145.f_20609) && func_469(iParam0, 156))
	{
		return 1;
	}
	else if (func_409(12, iParam1) != 0 && func_489(iParam0, 12))
	{
		return 1;
	}
	else if (func_409(13, -1) != 0 && func_489(iParam0, 13))
	{
		return 1;
	}
	else if (func_409(15, iParam1) != 0 && func_489(iParam0, 15))
	{
		return 1;
	}
	else if (func_411(iParam1) && func_469(iParam0, 223))
	{
		return 1;
	}
	else if (func_409(14, -1) != 0 && func_489(iParam0, 14))
	{
		return 1;
	}
	else if (func_409(18, iParam1) != 0 && func_489(iParam0, 18))
	{
		return 1;
	}
	else if (func_409(21, iParam1) != 0 && func_489(iParam0, 21))
	{
		return 1;
	}
	else if ((func_409(22, iParam1) != 0 && func_489(iParam0, 22)) && func_492())
	{
		return 1;
	}
	return 0;
}

int func_536()
{
	if (func_24(-30941642) != Global_262145.f_25985)
	{
		return 0;
	}
	iVar0 = func_21(8350, -1, 0);
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iVar1 > iVar0)
	{
		return 0;
	}
	return 1;
}

int func_537(var uParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, struct<92> Param6, var uParam98)
{
	switch (iParam4)
	{
		case 0:
			return func_730(sParam1, iParam5, -1, 1);
			break;
		
		case 1:
			return func_625(sParam1, iParam2, uParam3);
			break;
		
		case 2:
			return func_679(uParam0, sParam1, uParam98, -1, 1);
			break;
		
		case 3:
			return func_709(uParam0, sParam1, -1, 1);
			break;
		
		case 4:
			return func_722(uParam0, sParam1, -1, 1);
			break;
		
		case 5:
			return func_580(sParam1, uParam3, Param6);
			break;
		
		case 6:
			if (func_578())
			{
				return func_538(sParam1, func_549(0));
			}
			else
			{
				unk_0x0674E58A79778E99(iParam5, 19);
			}
			break;
	}
	return 0;
}

int func_538(char* sParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 5;
				func_544(iVar0);
				break;
			
			case 1:
				iVar0 = func_542(unk_0xD803B885F5E47A62(), 1);
				func_544(iVar0);
				break;
			
			case 2:
				iVar0 = func_542(unk_0xD803B885F5E47A62(), 3);
				func_544(iVar0);
				break;
			
			case 3:
				iVar0 = func_542(unk_0xD803B885F5E47A62(), 4);
				func_544(iVar0);
				break;
			
			case 4:
				iVar0 = func_542(unk_0xD803B885F5E47A62(), 2);
				func_544(iVar0);
				break;
			
			case 5:
				iVar0 = func_542(unk_0xD803B885F5E47A62(), 0);
				func_544(iVar0);
				break;
			
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				func_540(func_541(iParam1));
				break;
		}
		StringCopy(sParam0, func_539(iParam1), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMDO_OBJ_140";
			break;
		
		case 1:
			return "AMDO_OBJ_136";
			break;
		
		case 2:
			return "AMDO_OBJ_138";
			break;
		
		case 3:
			return "AMDO_OBJ_135";
			break;
		
		case 4:
			return "AMDO_OBJ_137";
			break;
		
		case 5:
			return "AMDO_OBJ_139";
			break;
		
		case 6:
			return "BYCB_FREEL";
			break;
		
		case 7:
			return "BYCB_SASHDE";
			break;
		
		case 8:
			return "BYCB_MGUN";
			break;
		
		case 9:
			return "BYCB_EGG";
			break;
		
		case 10:
			return "BYCB_DMND";
			break;
		
		case 11:
			return "BYCB_WATCH";
			break;
	}
	return "INVALID";
}

void func_540(int iParam0)
{
	if (0 == iParam0)
	{
		return;
	}
	if (!unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "CASINO_LUCKY_WHEEL"))
	{
		return;
	}
	Global_1696086 = iParam0;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5;
		
		case 7:
			return 4;
		
		case 8:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 3;
		
		case 11:
			return 6;
		
		default:
	}
	return 0;
}

int func_542(int iParam0, int iParam1)
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			if (func_543(Global_1590535[iParam0].f_274.f_183[iVar0]) == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

void func_544(int iParam0)
{
	if (!func_548(iParam0))
	{
		return;
	}
	iVar0 = func_547(unk_0xD803B885F5E47A62(), iParam0);
	unk_0x5D96D8530B3D0904(&Global_2513439, iParam0);
	Global_1370140[iParam0] = 0;
	Global_2513440[iParam0] = func_545(unk_0xD803B885F5E47A62(), iVar0);
}

int func_545(int iParam0, int iParam1)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_546(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_546(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_547(int iParam0, int iParam1)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_546(Global_1590535[iParam0].f_274.f_183[iParam1]))
	{
		uVar0 = Global_1590535[iParam0].f_274.f_183[iParam1];
	}
	return uVar0;
}

bool func_548(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_549(int iParam0)
{
	iVar13 = 0;
	iVar14 = 0;
	while (iVar14 < 12)
	{
		iVar0[iVar14] = iVar14;
		iVar13 = (iVar13 + func_550(iVar0[iVar14], iParam0));
		iVar14++;
	}
	iVar15 = unk_0xA0A5F9CC633A6814(0, iVar13);
	iVar14 = 0;
	while (iVar14 < 12)
	{
		if (iVar15 <= func_550(iVar0[iVar14], iParam0))
		{
			return iVar0[iVar14];
		}
		else
		{
			iVar15 = (iVar15 - func_550(iVar0[iVar14], iParam0));
		}
		iVar14++;
	}
	return -1;
}

int func_550(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			if (func_576(unk_0xD803B885F5E47A62()))
			{
				iVar0 = func_547(unk_0xD803B885F5E47A62(), 5);
				if (((func_574(unk_0xD803B885F5E47A62(), iVar0) && func_572(unk_0xD803B885F5E47A62(), 5)) && func_545(unk_0xD803B885F5E47A62(), iVar0) < 80) || uParam1)
				{
					return Global_262145.f_26073;
				}
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (func_570(unk_0xD803B885F5E47A62(), func_571(iParam0)))
			{
				if (func_567(func_571(iParam0)) || uParam1)
				{
					return Global_262145.f_26073;
				}
			}
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (func_553() || uParam1)
			{
				if (!func_551(iParam0) || uParam1)
				{
					return Global_262145.f_26073;
				}
			}
			break;
	}
	return 0;
}

bool func_551(int iParam0)
{
	iVar0 = func_541(iParam0);
	return func_552(iVar0);
}

int func_552(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1676087[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_553()
{
	if ((func_566(unk_0xD803B885F5E47A62()) && func_561() < 6) && func_554())
	{
		return 1;
	}
	return 0;
}

int func_554()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0] != 0)
		{
			if (!func_555(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_555(int iParam0)
{
	return 0 == func_556(iParam0);
}

int func_556(int iParam0)
{
	if (func_560(iParam0))
	{
		iVar0 = func_559(iParam0);
		iVar1 = func_557(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_557(int iParam0)
{
	if (func_558(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_558(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_559(int iParam0)
{
	if (func_558(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0])
			{
				return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_560(int iParam0)
{
	if (func_558(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_561()
{
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		iVar2 = func_565(iVar1);
		if (iVar2 != 0)
		{
			iVar0 = (iVar0 + func_562(iVar2));
		}
		iVar1++;
	}
	return iVar0;
}

int func_562(int iParam0)
{
	if (func_558(iParam0))
	{
		iVar0 = func_563(func_564(iParam0));
		return func_21(iVar0, -1, 0);
	}
	return 0;
}

int func_563(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_564(int iParam0)
{
	if (func_558(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_565(int iParam0)
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iParam0] != 0)
	{
		return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iParam0];
	}
	return 0;
}

int func_566(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590535[iParam0].f_274.f_106[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_567(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_547(unk_0xD803B885F5E47A62(), iVar0);
		if (iVar1 != 0)
		{
			if (func_543(iVar1) == iParam0)
			{
				if (((func_574(unk_0xD803B885F5E47A62(), iVar1) && func_568(unk_0xD803B885F5E47A62(), iVar0)) && func_572(unk_0xD803B885F5E47A62(), iVar0)) && func_545(unk_0xD803B885F5E47A62(), iVar1) < 80)
				{
					return 1;
				}
				else
				{
					if (!func_574(unk_0xD803B885F5E47A62(), iVar1))
					{
					}
					if (!func_568(unk_0xD803B885F5E47A62(), iVar0))
					{
					}
					if (!func_572(unk_0xD803B885F5E47A62(), iVar0))
					{
					}
					if (func_545(unk_0xD803B885F5E47A62(), iVar1) >= 80)
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_568(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = func_547(iParam0, iParam1);
	iVar2 = func_543(iVar1);
	switch (iVar2)
	{
		case 1:
			if (func_569(iParam0, iVar1) > 8)
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (func_569(iParam0, iVar1) > 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (func_569(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 0:
			if (func_569(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (func_569(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 5:
			if (func_569(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_569(int iParam0, int iParam1)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_546(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_4;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_570(int iParam0, int iParam1)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			iVar1 = Global_1590535[iParam0].f_274.f_183[iVar0];
			if (func_543(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 3;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		default:
	}
	return -1;
}

int func_572(int iParam0, int iParam1)
{
	if (iParam0 != func_8() && func_573(iParam0, func_547(iParam0, iParam1)))
	{
		return Global_1590535[iParam0].f_274.f_183[iParam1].f_6;
	}
	return 0;
}

int func_573(int iParam0, int iParam1)
{
	if (func_546(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_574(int iParam0, int iParam1)
{
	if (func_573(iParam0, iParam1))
	{
		iVar0 = func_575(iParam0, iParam1);
		if (Global_1590535[iParam0].f_274.f_183[iVar0].f_4 > 0 && Global_1590535[iParam0].f_274.f_183[iVar0].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_575(int iParam0, int iParam1)
{
	if (func_546(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_576(int iParam0)
{
	return func_577(iParam0) != 0;
}

int func_577(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

int func_578()
{
	if (func_576(unk_0xD803B885F5E47A62()))
	{
		iVar8 = func_547(unk_0xD803B885F5E47A62(), 5);
		if ((func_574(unk_0xD803B885F5E47A62(), iVar8) && func_572(unk_0xD803B885F5E47A62(), 5)) && func_545(unk_0xD803B885F5E47A62(), iVar8) < 80)
		{
			bVar0 = true;
		}
		if (!func_574(unk_0xD803B885F5E47A62(), iVar8))
		{
		}
		if (!func_572(unk_0xD803B885F5E47A62(), 5))
		{
		}
		if (func_545(unk_0xD803B885F5E47A62(), iVar8) >= 80)
		{
		}
	}
	if (func_579(unk_0xD803B885F5E47A62()))
	{
		iVar9 = 0;
		while (iVar9 < 5)
		{
			iVar10 = func_547(unk_0xD803B885F5E47A62(), iVar9);
			if ((((iVar10 != 0 && func_574(unk_0xD803B885F5E47A62(), iVar10)) && func_568(unk_0xD803B885F5E47A62(), iVar9)) && func_572(unk_0xD803B885F5E47A62(), iVar9)) && func_545(unk_0xD803B885F5E47A62(), iVar10) < 80)
			{
				iVar1[iVar9] = 1;
			}
			if (iVar10 == 0)
			{
			}
			else
			{
				if (!func_574(unk_0xD803B885F5E47A62(), iVar10))
				{
				}
				if (!func_568(unk_0xD803B885F5E47A62(), iVar9))
				{
				}
				if (!func_572(unk_0xD803B885F5E47A62(), iVar9))
				{
				}
				if (func_545(unk_0xD803B885F5E47A62(), iVar10) >= 80)
				{
				}
			}
			iVar9++;
		}
	}
	if (func_553())
	{
		iVar11 = 6;
		while (iVar11 <= 11)
		{
			if (!func_551(iVar11))
			{
				bVar7 = true;
			}
			iVar11++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	iVar12 = 0;
	while (iVar12 < 5)
	{
		if (iVar1[iVar12])
		{
			return 1;
		}
		iVar12++;
	}
	if (bVar7)
	{
		return 1;
	}
	return 0;
}

int func_579(int iParam0)
{
	if (iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_580(char* sParam0, var uParam1, struct<92> Param2)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_324, 0))
	{
		uParam1->f_325 = func_623();
		unk_0x5D96D8530B3D0904(&(uParam1->f_324), 0);
	}
	else if (uParam1->f_325 == -1)
	{
	}
	else
	{
		switch (uParam1->f_325)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				return func_616(sParam0, uParam1->f_325, uParam1, Param2);
			
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				return func_608(sParam0, uParam1, uParam1->f_325, 0);
			
			case 14:
				return func_608(sParam0, uParam1, uParam1->f_325, 1);
			
			case 15:
				if (func_607(unk_0xD803B885F5E47A62()) >= 5)
				{
					func_582(func_18(), func_217(func_606(unk_0xD803B885F5E47A62(), 1), 0));
					func_581();
					StringCopy(sParam0, "CAS_LW_ARMU", 64);
					return 1;
					break;
				}
				unk_0x0674E58A79778E99(&(uParam1->f_324), 0);
			}
		
		default:
	}
	return 0;
}

void func_581()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = round((50f * Global_262145.f_111));
		func_64(816, iVar0, -1, 1, 0);
		iVar1 = unk_0x31AE1423DA1D599B(unk_0xD803B885F5E47A62());
		iVar2 = unk_0x34460709B9A5160B(unk_0x16F2683693E537C9());
		iVar3 = (iVar1 - iVar2);
		unk_0x0B42C743EF171FF5(unk_0x16F2683693E537C9(), (iVar2 + iVar3));
	}
}

void func_582(int iParam0, int iParam1)
{
	if (iParam1 >= func_605(238))
	{
		func_591(238, 1, 0);
	}
	if (iParam1 >= func_605(239))
	{
		func_591(239, 1, 0);
	}
	if (iParam1 >= func_605(240))
	{
		func_591(240, 1, 0);
	}
	if (iParam1 >= func_605(241))
	{
		func_591(241, 1, 0);
	}
	if (iParam1 >= func_605(242))
	{
		func_591(242, 1, 0);
	}
	if (iParam1 >= func_605(243))
	{
		func_591(243, 1, 0);
	}
	if (iParam1 >= func_605(244))
	{
		func_591(244, 1, 0);
	}
	if (iParam1 >= func_605(245))
	{
		func_591(245, 1, 0);
	}
	if (iParam1 >= func_605(246))
	{
		func_591(246, 1, 0);
	}
	if (iParam1 >= func_605(247))
	{
		func_591(247, 1, 0);
	}
	if (iParam1 >= func_605(156))
	{
		func_591(156, 1, 0);
	}
	if (iParam1 >= func_605(157))
	{
		func_591(157, 1, 0);
	}
	if (iParam1 >= func_605(158))
	{
		func_591(158, 1, 0);
	}
	if (iParam1 >= func_605(159))
	{
		func_591(159, 1, 0);
	}
	if (iParam1 >= func_605(160))
	{
		func_591(160, 1, 0);
	}
	iVar0 = 0;
	if (func_583(238))
	{
		iVar0++;
	}
	if (func_583(239))
	{
		iVar0++;
	}
	if (func_583(240))
	{
		iVar0++;
	}
	if (func_583(241))
	{
		iVar0++;
	}
	if (func_583(242))
	{
		iVar0++;
	}
	if (func_583(243))
	{
		iVar0++;
	}
	if (func_583(244))
	{
		iVar0++;
	}
	if (func_583(245))
	{
		iVar0++;
	}
	if (func_583(246))
	{
		iVar0++;
	}
	if (func_583(247))
	{
		iVar0++;
	}
	if (func_583(156))
	{
		func_64(1879, iVar0, iParam0, 1, 0);
	}
	if (func_583(157))
	{
		func_64(1880, iVar0, iParam0, 1, 0);
	}
	if (func_583(158))
	{
		func_64(1881, iVar0, iParam0, 1, 0);
	}
	if (func_583(159))
	{
		func_64(1882, iVar0, iParam0, 1, 0);
	}
	if (func_583(160))
	{
		func_64(1883, iVar0, iParam0, 1, 0);
	}
}

bool func_583(int iParam0)
{
	if (func_590())
	{
		return 0;
	}
	iVar0 = func_585(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_584(iVar1));
}

int func_584(int iParam0)
{
	return (iParam0 % 32);
}

int func_585(var uParam0)
{
	iVar0 = func_21(func_586(uParam0, 999), -1, 0);
	return iVar0;
}

int func_586(var uParam0, int iParam1)
{
	iVar0 = uParam0;
	iVar1 = func_589(iVar0);
	if (((func_588() == 0 || func_587() == 0) || iParam1 == 0) || (func_588() == 999 && func_587() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 696;
				break;
			
			case 1:
				return 697;
				break;
			
			case 2:
				return 698;
				break;
			
			case 3:
				return 699;
				break;
			
			case 4:
				return 700;
				break;
			
			case 5:
				return 701;
				break;
			
			case 6:
				return 702;
				break;
			
			case 7:
				return 703;
				break;
			
			case 8:
				return 704;
				break;
			
			case 9:
				return 2053;
				break;
			
			case 10:
				return 2065;
				break;
			
			case 11:
				return 2092;
				break;
			
			case 12:
				return 2428;
				break;
			
			case 13:
				return 2947;
				break;
			
			case 14:
				return 5510;
				break;
			
			case 15:
				return 5514;
				break;
			
			case 16:
				return 5518;
				break;
			
			case 17:
				return 5522;
				break;
			
			case 18:
				return 5526;
				break;
			
			case 19:
				return 5530;
				break;
			
			case 20:
				return 5590;
				break;
			
			case 21:
				return 5594;
				break;
			
			case 22:
				return 5598;
				break;
			
			case 23:
				return 5602;
				break;
			
			case 24:
				return 5606;
				break;
			
			case 25:
				return 5610;
				break;
			
			case 26:
				return 5614;
				break;
			
			case 27:
				return 5635;
				break;
			
			case 28:
				return 5639;
				break;
			
			case 29:
				return 5643;
				break;
			
			case 30:
				return 5647;
				break;
			
			case 31:
				return 5651;
				break;
			
			case 32:
				return 5655;
				break;
			
			case 33:
				return 6465;
				break;
			
			case 34:
				return 6469;
				break;
			
			case 35:
				return 6473;
				break;
			
			case 36:
				return 6477;
				break;
			
			case 37:
				return 6481;
				break;
			
			case 38:
				return 6485;
				break;
			
			case 39:
				return 6489;
				break;
		}
	}
	return 11511;
}

int func_587()
{
	return Global_30769;
}

int func_588()
{
	return Global_30768;
}

int func_589(int iParam0)
{
	return (iParam0 / 32);
}

bool func_590()
{
	return Global_1312856;
}

void func_591(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_583(iParam0))
		{
			func_604(iParam0, 1);
		}
		if (bParam2)
		{
			if (func_602(iParam0) == 0)
			{
				unk_0x1E64CE678ED5F61E(func_601(iParam0));
				unk_0x2A93F633F0D0A321(func_600(iParam0), 2, func_601(iParam0));
				if (unk_0x8AA6DC470ABA63A2(-1))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", 1);
				}
				func_593(29, func_601(iParam0), func_599(iParam0), func_597(iParam0), func_595(iParam0), -1, 0, 0, 0, -1, 0);
				func_592(iParam0, 1);
			}
		}
	}
	else if (func_583(iParam0))
	{
		func_604(iParam0, 0);
	}
}

void func_592(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&(Global_2547060.f_1011[func_589(iVar0)]), func_584(iVar0));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_2547060.f_1011[func_589(iVar0)]), func_584(iVar0));
		}
	}
}

void func_593(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	iVar0 = func_594(&Global_1385029);
	Global_1385029[iVar0] = iParam0;
	StringCopy(&(Global_1385029[iVar0].f_17), sParam3, 64);
	StringCopy(&(Global_1385029[iVar0].f_1), sParam4, 64);
	StringCopy(&(Global_1385029[iVar0].f_33), sParam1, 64);
	StringCopy(&(Global_1385029[iVar0].f_49), sParam2, 64);
	Global_1385029[iVar0].f_97 = iParam5;
	Global_1385029[iVar0].f_104 = iParam9;
	Global_1385029[iVar0].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		StringCopy(&(Global_1385029[iVar0].f_98), sParam8, 24);
	}
}

int func_594(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_595(int iParam0)
{
	sVar0 = "MpAwards1";
	switch (iParam0)
	{
		case 155:
			return func_596(-37975472, 0);
			break;
	}
	return sVar0;
}

char* func_596(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1716189206:
			return "MPWeaponsUnusedForNow";
			break;
		
		case 911657153:
			return "MPWeaponsGang0";
			break;
		
		case 453432689:
			return "MPWeaponsGang1";
			break;
		
		case 584646201:
			return "MPWeaponsGang1";
			break;
		
		case -72657034:
			return "MPWeaponsGang1";
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case 643254679:
				case 889808635:
				case -1023114086:
				case 2076495324:
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case -1681506167:
				case -767279652:
				case -1489156508:
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case -1614924820:
				case -1861183855:
				case 1967214384:
				case 202788691:
				case 2076495324:
				case -1596416958:
				case -2089531990:
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case -1063057011:
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case -435637410:
				case 899381934:
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case -1813897027:
			return "MPWeaponsGang0";
			break;
		
		case 741814745:
			return "MPWeaponsCommon";
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case 202788691:
				case 2076495324:
				case -1439939148:
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case -1596416958:
				case 202788691:
				case -691692330:
				case -503336118:
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case -1796727865:
				case -2034401422:
				case 202788691:
				case 2076495324:
				case -1489156508:
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case -1312131151:
			return "MPWeaponsCommon";
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case 1198478068:
				case -1135289737:
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case -91250417:
				case -1899902599:
				case 202788691:
				case 2076495324:
				case -1596416958:
				case -2089531990:
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case -884429072:
				case 283556395:
				case 899381934:
				case -1657815255:
				case -1489156508:
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case -1101075946:
				case -1323216997:
				case 202788691:
				case 2076495324:
				case -1657815255:
				case -1489156508:
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case -197857404:
				case -2112517305:
				case -1439939148:
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case 2017895192:
			return "MPWeaponsGang1";
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case -924946682:
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case -1023114086:
				case 899381934:
				case -696561875:
				case 119648377:
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case -37975472:
			return "MPWeaponsCommon";
			break;
	}
	return "";
}

char* func_597(int iParam0)
{
	sVar0 = "GenericKit";
	switch (iParam0)
	{
		case 155:
			return func_598(-37975472, 0, 0);
			break;
	}
	return sVar0;
}

char* func_598(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		switch (iParam0)
		{
			case -1716189206:
				return "W_ME_KNIFE_01";
				break;
			
			case 911657153:
				return "W_PI_Stungun";
				break;
			
			case 453432689:
				switch (iParam1)
				{
					case 0:
						return "W_PI_Pistol";
						break;
					
					case -19858063:
						return "W_PI_Pistol_Mag1";
						break;
					
					case -316253668:
						return "W_PI_Pistol_Mag2";
						break;
					
					case 899381934:
						return "W_PI_Pistol_Flash";
						break;
					
					case 1709866683:
						return "W_PI_Pistol_Supp";
						break;
				}
				break;
			
			case -72657034:
				return "Parachute_Main";
				break;
			
			case 736523883:
				switch (iParam1)
				{
					case 0:
						return "W_SB_SMG";
						break;
					
					case 643254679:
						return "W_SB_SMG_Mag1";
						break;
					
					case 889808635:
						return "W_SB_SMG_Mag2";
						break;
					
					case -1023114086:
						return "W_SB_SMG_Supp";
						break;
					
					case 2076495324:
						return "W_SB_SMG_Flash";
						break;
				}
				break;
			
			case 100416529:
				switch (iParam1)
				{
					case 0:
						return "W_SR_SniperRifle";
						break;
					
					case -1681506167:
						return "W_SR_SniperRifle_Mag1";
						break;
					
					case -767279652:
						return "W_SR_SniperRifle_Scope";
						break;
					
					case -1489156508:
						return "W_SR_SniperRifle_Supp";
						break;
				}
				break;
			
			case -2084633992:
				switch (iParam1)
				{
					case 0:
						return "W_AR_CarbineRifle";
						break;
					
					case -1614924820:
						return "W_AR_CarbineRifle_Mag1";
						break;
					
					case -1861183855:
						return "W_AR_CarbineRifle_Mag2";
						break;
					
					case 1967214384:
						return "CarbineRifle_RAILCOVER_1";
						break;
					
					case 202788691:
						return "W_AR_CarbineRifle_Grip";
						break;
					
					case 2076495324:
						return "W_AR_CarbineRifle_Flash";
						break;
					
					case -1596416958:
						return "W_AR_CarbineRifle_Scope";
						break;
					
					case -2089531990:
						return "W_AR_CarbineRifle_Supp";
						break;
				}
				break;
			
			case -1063057011:
				break;
			
			case -1076751822:
				break;
			
			case 487013001:
				switch (iParam1)
				{
					case 0:
						return "W_SG_PumpShotgun";
						break;
					
					case -435637410:
						return "W_SG_PumpShotgun_Supp";
						break;
					
					case 899381934:
						return "W_SG_PumpShotgun_Flash";
						break;
				}
				break;
			
			case -1813897027:
				return "W_Ex_GrenadeFrag";
				break;
			
			case 741814745:
				return "W_Ex_PE";
				break;
			
			case -1568386805:
				switch (iParam1)
				{
					case 0:
						return "W_R_GrenadeLauncher";
						break;
					
					case 202788691:
						return "W_R_GrenadeLauncher_Grip";
						break;
					
					case 2076495324:
						return "W_R_GrenadeLauncher_Flash";
						break;
					
					case -1439939148:
						return "W_R_GrenadeLauncher_Scope";
						break;
				}
				break;
			
			case 2144741730:
				switch (iParam1)
				{
					case 0:
						return "W_MG_CombatMG";
						break;
					
					case -1596416958:
						return "W_MG_CombatMG_Scope";
						break;
					
					case 202788691:
						return "W_MG_CombatMG_Grip";
						break;
					
					case -691692330:
						return "W_MG_CombatMG_Mag2";
						break;
					
					case -503336118:
						return "W_MG_CombatMG_Mag1";
						break;
				}
				break;
			
			case -494615257:
				switch (iParam1)
				{
					case 0:
						return "W_SG_AssaultShotgun";
						break;
					
					case -1796727865:
						return "W_SG_AssaultShotgun_Mag1";
						break;
					
					case -2034401422:
						return "W_SG_AssaultShotgun_Mag2";
						break;
					
					case 202788691:
						return "W_SG_AssaultShotgun_Grip";
						break;
					
					case 2076495324:
						return "W_SG_AssaultShotgun_Flsh";
						break;
					
					case -1489156508:
						return "W_SG_AssaultShotgun_Supp";
						break;
				}
				break;
			
			case 584646201:
				switch (iParam1)
				{
					case 0:
						return "W_PI_AppPistol";
						break;
					
					case 834974250:
						return "W_PI_AppPistol_Mag1";
						break;
					
					case 614078421:
						return "W_PI_AppPistol_Mag2";
						break;
					
					case 899381934:
						return "W_PI_AppPistol_Flash";
						break;
					
					case -1023114086:
						return "W_PI_AppPistol_Supp";
						break;
				}
				break;
			
			case -1312131151:
				return "W_LR_RPG";
				break;
			
			case 205991906:
				switch (iParam1)
				{
					case 0:
						return "W_SR_HeavySniper";
						break;
					
					case 1198478068:
						return "W_SR_HeavySniper_Mag1";
						break;
					
					case -1135289737:
						return "W_SR_HeavySniper_Scope";
						break;
				}
				break;
			
			case -1357824103:
				switch (iParam1)
				{
					case 0:
						return "W_AR_AdvancedRifle";
						break;
					
					case -91250417:
						return "W_AR_AdvancedRifle_mag1";
						break;
					
					case -1899902599:
						return "W_AR_AdvancedRifle_Mag2";
						break;
					
					case 202788691:
						return "AdvancedRifle_AFGRIP";
						break;
					
					case 2076495324:
						return "AssaultRifle_FLASHLIGHT";
						break;
					
					case -1596416958:
						return "AssaultRifle_SCOPE_SMALL";
						break;
					
					case -2089531990:
						return "AdvancedRifle_SUPPRESSOR";
						break;
				}
				break;
			
			case 324215364:
				switch (iParam1)
				{
					case 0:
						return "W_SB_MicroSMG";
						break;
					
					case -884429072:
						return "W_SB_MicroSMG_Mag1";
						break;
					
					case 283556395:
						return "W_SB_MicroSMG_Mag2";
						break;
					
					case 899381934:
						return "W_SB_MicroSMG_Flash";
						break;
					
					case -1657815255:
						return "W_SB_MicroSMG_Scope";
						break;
					
					case -1489156508:
						return "W_SB_MicroSMG_Supp";
						break;
				}
				break;
			
			case -1074790547:
				switch (iParam1)
				{
					case 0:
						return "W_AR_AssaultRifle";
						break;
					
					case -1101075946:
						return "W_AR_AssaultRifle_Mag1";
						break;
					
					case -1323216997:
						return "W_AR_AssaultRifle_Mag2";
						break;
					
					case 202788691:
						return "W_AR_AssaultRifle_Grip";
						break;
					
					case 2076495324:
						return "W_AR_AssaultRifle_Flash";
						break;
					
					case -1657815255:
						return "W_AR_AssaultRifle_Scope";
						break;
					
					case -1489156508:
						return "W_AR_AssaultRifle_Supp";
						break;
				}
				break;
			
			case -1660422300:
				switch (iParam1)
				{
					case 0:
						return "W_MG_MG";
						break;
					
					case -197857404:
						return "W_MG_MG_Mag1";
						break;
					
					case -2112517305:
						return "W_MG_MG_Mag2";
						break;
					
					case 1006677997:
						return "W_MG_MG_Scope";
						break;
				}
				break;
			
			case 2017895192:
				return "W_SG_SAWNOFF";
				break;
			
			case 1119849093:
				switch (iParam1)
				{
					case 0:
						return "W_MG_Minigun";
						break;
					
					case -924946682:
						return "W_MG_Minigun_Laser";
						break;
				}
				break;
			
			case 1593441988:
				switch (iParam1)
				{
					case 0:
						return "W_PI_CombatPistol";
						break;
					
					case -1023114086:
						return "W_PI_CombatPistol_Supp";
						break;
					
					case 899381934:
						return "W_PI_CombatPistol_Flash";
						break;
					
					case -696561875:
						return "W_PI_CombatPistol_Mag1";
						break;
					
					case 119648377:
						return "W_PI_CombatPistol_Mag2";
						break;
				}
				break;
			
			case -37975472:
				return "W_Ex_GrenadeSmoke";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -1716189206:
				return "W_ME_Knife_SILHOUETTE";
				break;
			
			case 911657153:
				return "W_PI_Stungun_SILHOUETTE";
				break;
			
			case 453432689:
				return "W_PI_Pistol_SILHOUETTE";
				break;
			
			case -72657034:
				return "Parachute_Main";
				break;
			
			case 736523883:
				return "W_SB_SMG_SILHOUETTE";
				break;
			
			case 100416529:
				return "W_SR_SniperRifle_SILHOUETTE";
				break;
			
			case -2084633992:
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case -1063057011:
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case -1076751822:
				break;
			
			case 487013001:
				return "W_SG_PumpShotgun_SILHOUETTE";
				break;
			
			case -1813897027:
				return "W_Ex_GrenadeFrag_SILHOUETTE";
				break;
			
			case 741814745:
				return "W_Ex_PE_SILHOUETTE";
				break;
			
			case -1568386805:
				return "W_R_GrenadeLauncher_SILHOUETTE";
				break;
			
			case 2144741730:
				return "W_MG_CombatMG_SILHOUETTE";
				break;
			
			case -494615257:
				return "W_SG_AssaultShotgun_SILHOUETTE";
				break;
			
			case 584646201:
				return "W_PI_AppPistol_SILHOUETTE";
				break;
			
			case -1312131151:
				return "W_LR_RPG_SILHOUETTE";
				break;
			
			case 205991906:
				return "W_SR_HeavySniper_SILHOUETTE";
				break;
			
			case -1357824103:
				return "W_AR_AdvancedRifle_SILHOUETTE";
				break;
			
			case 324215364:
				return "W_SB_MicroSMG_SILHOUETTE";
				break;
			
			case -1074790547:
				return "W_AR_AssaultRifle_SILHOUETTE";
				break;
			
			case -1660422300:
				return "W_MG_MG_SILHOUETTE";
				break;
			
			case 2017895192:
				return "W_SG_SAWNOFF_SILHOUETTE";
				break;
			
			case 1119849093:
				return "W_MG_Minigun_SILHOUETTE";
				break;
			
			case 1593441988:
				return "W_PI_CombatPistol_SILHOUETTE";
				break;
			
			case -37975472:
				return "W_Ex_GrenadeSmoke_SILHOUETTE";
				break;
			}
	}
	return "";
}

char* func_599(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "WT_PARA";
			break;
		
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
		case 42:
		case 43:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
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
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
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
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return "WM_TINTD";
			break;
	}
	return sVar0;
}

char* func_600(int iParam0)
{
	switch (iParam0)
	{
		case 56:
		case 76:
		case 96:
		case 116:
			return "TINT_PISTOL";
			break;
		
		case 57:
		case 77:
		case 97:
		case 117:
			return "TINT_CMBTPISTOL";
			break;
		
		case 58:
		case 78:
		case 98:
		case 118:
			return "TINT_APPISTOL";
			break;
		
		case 59:
		case 79:
		case 99:
		case 119:
			return "TINT_MICROSMG";
			break;
		
		case 60:
		case 80:
		case 100:
		case 120:
			return "TINT_SMG";
			break;
		
		case 61:
		case 81:
		case 101:
		case 121:
			return "TINT_ASLTRIFLE";
			break;
		
		case 62:
		case 82:
		case 102:
		case 122:
			return "TINT_CRBNRIFLE";
			break;
		
		case 63:
		case 83:
		case 103:
		case 123:
			return "TINT_ADVRRIFLE";
			break;
		
		case 64:
		case 84:
		case 104:
		case 124:
			return "TINT_MG";
			break;
		
		case 65:
		case 85:
		case 105:
		case 125:
			return "TINT_CMBTMG";
			break;
		
		case 66:
		case 86:
		case 106:
		case 126:
			return "TINT_PUMP";
			break;
		
		case 67:
		case 87:
		case 107:
		case 127:
			return "TINT_SAWOFF";
			break;
		
		case 68:
		case 88:
		case 108:
		case 128:
			return "TINT_ASLTSHTGN";
			break;
		
		case 71:
		case 91:
		case 111:
		case 131:
			return "TINT_SNIPERRFL";
			break;
		
		case 72:
		case 92:
		case 112:
		case 132:
			return "TINT_HVYSNIPER";
			break;
		
		case 73:
		case 93:
		case 113:
		case 133:
			return "TINT_GRNLAUNCH";
			break;
		
		case 74:
		case 94:
		case 114:
		case 134:
			return "TINT_RPG";
			break;
		
		case 75:
		case 95:
		case 115:
		case 135:
			return "TINT_MINIGUN";
			break;
		
		case 192:
		case 163:
		case 164:
		case 165:
			return "TINT_ASSAULTSMG";
			break;
		
		case 169:
		case 170:
		case 171:
			return "TINT_ASSAULTSNIPER";
			break;
		
		case 175:
		case 176:
		case 177:
		case 194:
			return "TINT_Pistol50";
			break;
		
		case 181:
		case 182:
		case 183:
		case 193:
			return "TINT_ASSAULTMG";
			break;
		
		case 187:
		case 188:
		case 189:
		case 191:
			return "TINT_HEAVYRIFLE";
			break;
	}
	return "WEAPON_UNLOCK";
}

char* func_601(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
		case 16:
			return "AWT_651";
		
		case 17:
			return "AWT_651";
		
		case 18:
			return "AWT_651";
		
		case 19:
			return "AWT_651";
		
		case 20:
			return "AWT_651";
		
		case 21:
			return "AWT_651";
		
		case 22:
			return "AWT_651";
		
		case 23:
			return "AWT_651";
		
		case 24:
			return "AWT_651";
		
		case 25:
			return "AWT_651";
		
		case 26:
			return "AWT_651";
		
		case 27:
			return "AWT_651";
		
		case 28:
			return "AWT_651";
		
		case 29:
			return "AWT_651";
		
		case 30:
			return "AWT_651";
		
		case 31:
			return "AWT_651";
		
		case 32:
			return "AWT_651";
		
		case 33:
			return "AWT_651";
		
		case 34:
			return "AWT_651";
		
		case 35:
			return "AWT_651";
		
		case 36:
			return "AWT_650";
		
		case 37:
			return "AWT_650";
		
		case 38:
			return "AWT_650";
		
		case 39:
			return "AWT_650";
		
		case 40:
			return "AWT_650";
		
		case 41:
			return "AWT_650";
		
		case 42:
			return "AWT_650";
		
		case 43:
			return "AWT_650";
		
		case 44:
			return "AWT_650";
		
		case 45:
			return "AWT_650";
		
		case 46:
			return "AWT_650";
		
		case 47:
			return "AWT_650";
		
		case 48:
			return "AWT_650";
		
		case 49:
			return "AWT_650";
		
		case 50:
			return "AWT_650";
		
		case 51:
			return "AWT_650";
		
		case 52:
			return "AWT_650";
		
		case 53:
			return "AWT_650";
		
		case 54:
			return "AWT_650";
		
		case 55:
			return "AWT_650";
		
		case 136:
			return "AWT_657";
		
		case 137:
			return "AWT_657";
		
		case 138:
			return "AWT_657";
		
		case 139:
			return "AWT_657";
		
		case 140:
			return "AWT_657";
		
		case 141:
			return "AWT_657";
		
		case 142:
			return "AWT_657";
		
		case 143:
			return "AWT_657";
		
		case 144:
			return "AWT_657";
		
		case 145:
			return "AWT_657";
		
		case 146:
			return "AWT_657";
		
		case 147:
			return "AWT_657";
		
		case 148:
			return "AWT_657";
		
		case 149:
			return "AWT_657";
		
		case 150:
			return "AWT_657";
		
		case 151:
			return "AWT_657";
		
		case 152:
			return "AWT_657";
		
		case 153:
			return "AWT_657";
		
		case 154:
			return "AWT_657";
		
		case 155:
			return "AWT_657";
		
		case 56:
			return "TAN_TINT_HEAD";
			break;
		
		case 57:
			return "TAN_TINT_HEAD";
			break;
		
		case 58:
			return "TAN_TINT_HEAD";
			break;
		
		case 59:
			return "TAN_TINT_HEAD";
			break;
		
		case 60:
			return "TAN_TINT_HEAD";
			break;
		
		case 61:
			return "TAN_TINT_HEAD";
			break;
		
		case 62:
			return "TAN_TINT_HEAD";
			break;
		
		case 63:
			return "TAN_TINT_HEAD";
			break;
		
		case 64:
			return "TAN_TINT_HEAD";
			break;
		
		case 65:
			return "TAN_TINT_HEAD";
			break;
		
		case 66:
			return "TAN_TINT_HEAD";
			break;
		
		case 67:
			return "TAN_TINT_HEAD";
			break;
		
		case 68:
			return "TAN_TINT_HEAD";
			break;
		
		case 71:
			return "TAN_TINT_HEAD";
			break;
		
		case 72:
			return "TAN_TINT_HEAD";
			break;
		
		case 73:
			return "TAN_TINT_HEAD";
			break;
		
		case 74:
			return "TAN_TINT_HEAD";
			break;
		
		case 75:
			return "TAN_TINT_HEAD";
			break;
		
		case 76:
			return "GREEN_TINT_HEAD";
			break;
		
		case 77:
			return "GREEN_TINT_HEAD";
			break;
		
		case 78:
			return "GREEN_TINT_HEAD";
			break;
		
		case 79:
			return "GREEN_TINT_HEAD";
			break;
		
		case 80:
			return "GREEN_TINT_HEAD";
			break;
		
		case 81:
			return "GREEN_TINT_HEAD";
			break;
		
		case 82:
			return "GREEN_TINT_HEAD";
			break;
		
		case 83:
			return "GREEN_TINT_HEAD";
			break;
		
		case 84:
			return "GREEN_TINT_HEAD";
			break;
		
		case 85:
			return "GREEN_TINT_HEAD";
			break;
		
		case 86:
			return "GREEN_TINT_HEAD";
			break;
		
		case 87:
			return "GREEN_TINT_HEAD";
			break;
		
		case 88:
			return "GREEN_TINT_HEAD";
			break;
		
		case 91:
			return "GREEN_TINT_HEAD";
			break;
		
		case 92:
			return "GREEN_TINT_HEAD";
			break;
		
		case 93:
			return "GREEN_TINT_HEAD";
			break;
		
		case 94:
			return "GREEN_TINT_HEAD";
			break;
		
		case 95:
			return "GREEN_TINT_HEAD";
			break;
		
		case 96:
			return "RED_TINT_HEAD";
			break;
		
		case 97:
			return "RED_TINT_HEAD";
			break;
		
		case 98:
			return "RED_TINT_HEAD";
			break;
		
		case 99:
			return "RED_TINT_HEAD";
			break;
		
		case 100:
			return "RED_TINT_HEAD";
			break;
		
		case 101:
			return "RED_TINT_HEAD";
			break;
		
		case 102:
			return "RED_TINT_HEAD";
			break;
		
		case 103:
			return "RED_TINT_HEAD";
			break;
		
		case 104:
			return "RED_TINT_HEAD";
			break;
		
		case 105:
			return "RED_TINT_HEAD";
			break;
		
		case 106:
			return "RED_TINT_HEAD";
			break;
		
		case 107:
			return "RED_TINT_HEAD";
			break;
		
		case 108:
			return "RED_TINT_HEAD";
			break;
		
		case 111:
			return "RED_TINT_HEAD";
			break;
		
		case 112:
			return "RED_TINT_HEAD";
			break;
		
		case 113:
			return "RED_TINT_HEAD";
			break;
		
		case 114:
			return "RED_TINT_HEAD";
			break;
		
		case 115:
			return "RED_TINT_HEAD";
			break;
		
		case 116:
			return "BLUE_TINT_HEAD";
			break;
		
		case 117:
			return "BLUE_TINT_HEAD";
			break;
		
		case 118:
			return "BLUE_TINT_HEAD";
			break;
		
		case 119:
			return "BLUE_TINT_HEAD";
			break;
		
		case 120:
			return "BLUE_TINT_HEAD";
			break;
		
		case 121:
			return "BLUE_TINT_HEAD";
			break;
		
		case 122:
			return "BLUE_TINT_HEAD";
			break;
		
		case 123:
			return "BLUE_TINT_HEAD";
			break;
		
		case 124:
			return "BLUE_TINT_HEAD";
			break;
		
		case 125:
			return "BLUE_TINT_HEAD";
			break;
		
		case 126:
			return "BLUE_TINT_HEAD";
			break;
		
		case 127:
			return "BLUE_TINT_HEAD";
			break;
		
		case 128:
			return "BLUE_TINT_HEAD";
			break;
		
		case 131:
			return "BLUE_TINT_HEAD";
			break;
		
		case 132:
			return "BLUE_TINT_HEAD";
			break;
		
		case 133:
			return "BLUE_TINT_HEAD";
			break;
		
		case 134:
			return "BLUE_TINT_HEAD";
			break;
		
		case 135:
			return "BLUE_TINT_HEAD";
			break;
		
		case 163:
			return "TAN_TINT_HEAD";
			break;
		
		case 164:
			return "BLUE_TINT_HEAD";
			break;
		
		case 165:
			return "RED_TINT_HEAD";
			break;
		
		case 169:
			return "TAN_TINT_HEAD";
			break;
		
		case 170:
			return "BLUE_TINT_HEAD";
			break;
		
		case 171:
			return "RED_TINT_HEAD";
			break;
		
		case 175:
			return "TAN_TINT_HEAD";
			break;
		
		case 176:
			return "BLUE_TINT_HEAD";
			break;
		
		case 177:
			return "RED_TINT_HEAD";
			break;
		
		case 181:
			return "TAN_TINT_HEAD";
			break;
		
		case 182:
			return "BLUE_TINT_HEAD";
			break;
		
		case 183:
			return "RED_TINT_HEAD";
			break;
		
		case 187:
			return "TAN_TINT_HEAD";
			break;
		
		case 188:
			return "BLUE_TINT_HEAD";
			break;
		
		case 189:
			return "RED_TINT_HEAD";
			break;
		
		case 191:
			return "GREEN_TINT_HEAD";
			break;
		
		case 192:
			return "GREEN_TINT_HEAD";
			break;
		
		case 193:
			return "GREEN_TINT_HEAD";
			break;
		
		case 194:
			return "GREEN_TINT_HEAD";
			break;
	}
	return sVar0;
}

bool func_602(int iParam0)
{
	iVar0 = func_603(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_584(iVar1));
}

var func_603(int iParam0)
{
	uVar0 = Global_2547060.f_1011[func_589(iParam0)];
	return uVar0;
}

void func_604(int iParam0, bool bParam1)
{
	iVar0 = func_585(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&iVar0, func_584(iVar1));
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, func_584(iVar1));
		}
		func_64(func_586(iParam0, 999), iVar0, -1, 1, 0);
	}
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2863 > -1)
			{
				return Global_262145.f_2863;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2864 > -1)
			{
				return Global_262145.f_2864;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2865 > -1)
			{
				return Global_262145.f_2865;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2866 > -1)
			{
				return Global_262145.f_2866;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2867 > -1)
			{
				return Global_262145.f_2867;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case 79:
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case 1184:
			return 11;
			break;
		
		case 1185:
			return 11;
			break;
	}
	return 0;
}

int func_606(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_220(iParam0);
}

int func_607(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

int func_608(char* sParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_113())
	{
		if (func_613(uParam1, iParam2, bParam3))
		{
		}
		else if (uParam1->f_320 == 2)
		{
			unk_0x7A87D9FAFCB10ADC(func_115(func_114()));
			if (!bParam3)
			{
				func_612(iParam2);
				StringCopy(sParam0, func_610(func_611(iParam2)), 64);
			}
			else
			{
				func_609();
				StringCopy(sParam0, "CAS_LW_ALS", 64);
			}
			func_109(func_114());
			return 1;
		}
	}
	else
	{
		if (!bParam3)
		{
			func_612(iParam2);
			StringCopy(sParam0, func_610(func_611(iParam2)), 64);
		}
		else
		{
			func_609();
			StringCopy(sParam0, "CAS_LW_ALS", 64);
		}
		return 1;
	}
	return 0;
}

void func_609()
{
	if (func_21(1275, -1, 0) < 30)
	{
		iVar0 = (20 - func_21(1275, -1, 0));
	}
	func_221(1275, iVar0, -1);
	func_187(16, 1, -1, 1);
	if (func_21(1276, -1, 0) < 15)
	{
		iVar0 = (15 - func_21(1276, -1, 0));
	}
	func_221(1276, iVar0, -1);
	func_187(15, 1, -1, 1);
	if (func_21(1277, -1, 0) < 5)
	{
		iVar0 = (5 - func_21(1277, -1, 0));
	}
	func_187(14, 1, -1, 1);
	func_221(1277, iVar0, -1);
	if (func_21(1097, -1, 0) < 20)
	{
		iVar0 = (20 - func_21(1097, -1, 0));
	}
	func_221(1097, iVar0, -1);
	if (func_21(62, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(62, -1, 0));
	}
	func_221(62, iVar0, -1);
	if (func_21(63, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(63, -1, 0));
	}
	func_221(63, iVar0, -1);
}

char* func_610(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "CAS_LW_S1";
		
		case 1:
			return "CAS_LW_S2";
		
		case 2:
			return "CAS_LW_S3";
		
		case 4:
			return "CAS_LW_S4";
		
		case 0:
			return "CAS_LW_S5";
		
		case 5:
			return "CAS_LW_S6";
		
		default:
	}
	return "INVALID";
}

int func_611(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		default:
	}
	return -1;
}

void func_612(int iParam0)
{
	switch (func_611(iParam0))
	{
		case 3:
			if (func_21(1275, -1, 0) < 30)
			{
				iVar0 = (20 - func_21(1275, -1, 0));
			}
			func_221(1275, iVar0, -1);
			func_187(16, 1, -1, 1);
			break;
		
		case 1:
			if (func_21(1276, -1, 0) < 15)
			{
				iVar0 = (15 - func_21(1276, -1, 0));
			}
			func_221(1276, iVar0, -1);
			func_187(15, 1, -1, 1);
			break;
		
		case 2:
			if (func_21(1277, -1, 0) < 5)
			{
				iVar0 = (5 - func_21(1277, -1, 0));
			}
			func_187(14, 1, -1, 1);
			func_221(1277, iVar0, -1);
			break;
		
		case 4:
			if (func_21(1097, -1, 0) < 20)
			{
				iVar0 = (20 - func_21(1097, -1, 0));
			}
			func_221(1097, iVar0, -1);
			break;
		
		case 0:
			if (func_21(62, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(62, -1, 0));
			}
			func_221(62, iVar0, -1);
			break;
		
		case 5:
			if (func_21(63, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(63, -1, 0));
			}
			func_221(63, iVar0, -1);
			break;
	}
}

int func_613(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = false;
	switch (uParam0->f_326)
	{
		case 0:
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			if (unk_0x3A6D64D2A1228113() > 0)
			{
				if (unk_0x3A6D64D2A1228113() >= iVar3)
				{
					iVar2 = iVar3;
				}
				else
				{
					iVar2 = (iVar3 - (iVar3 - unk_0x3A6D64D2A1228113()));
				}
				iVar3 = (iVar3 - iVar2);
			}
			if (iVar3 > 0)
			{
				if (unk_0x62F8C2EDB26F57B3(-1) > 0)
				{
					if (unk_0x62F8C2EDB26F57B3(-1) >= iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = (iVar3 - (iVar3 - unk_0x62F8C2EDB26F57B3(-1)));
					}
					iVar3 = (iVar3 - iVar1);
				}
			}
			cVar4 = func_615(func_611(iParam1));
			func_614(&sVar5, cVar4, 3);
			if (bParam2)
			{
				cVar4 = func_615(3);
				func_614(&sVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, unk_0x12AB0310C2281427(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_615(1);
				func_614(&sVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, unk_0x12AB0310C2281427(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_615(2);
				func_614(&sVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, unk_0x12AB0310C2281427(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_615(4);
				func_614(&sVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, unk_0x12AB0310C2281427(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_615(0);
				func_614(&sVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, unk_0x12AB0310C2281427(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_615(5);
				func_614(&sVar5, cVar4, 3);
				if (func_149(78225582, -1303831698, unk_0x12AB0310C2281427(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (func_144())
					{
						unk_0x26D598B045655D3C(1);
						unk_0x897805B8E15447A7(-iVar1, -iVar2);
						uParam0->f_326 = 1;
					}
					else
					{
						uParam0->f_326 = 3;
					}
				}
			}
			else if (func_149(78225582, -1303831698, unk_0x12AB0310C2281427(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
			{
				if (func_144())
				{
					unk_0x26D598B045655D3C(1);
					unk_0x897805B8E15447A7(-iVar1, -iVar2);
					uParam0->f_326 = 1;
				}
				else
				{
					uParam0->f_326 = 3;
				}
			}
			else
			{
				uParam0->f_326 = 3;
			}
			break;
		
		case 1:
			if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					uParam0->f_326 = 2;
				}
				else
				{
					uParam0->f_326 = 3;
				}
			}
			break;
		
		case 2:
			uParam0->f_326 = 0;
			unk_0x26D598B045655D3C(0);
			unk_0x3584F71E5CA29322(13);
			uParam0->f_320 = 2;
			return 0;
			break;
		
		case 3:
			func_109(func_114());
			uParam0->f_326 = 0;
			unk_0x26D598B045655D3C(0);
			unk_0x3584F71E5CA29322(13);
			uParam0->f_320 = 0;
			return 0;
			break;
	}
	return 1;
	uParam0->f_326 = 0;
	uParam0->f_320 = -1;
	return 0;
}

void func_614(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

char* func_615(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

int func_616(char* sParam0, int iParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94)
{
	switch (iParam1)
	{
		case 4:
			if (unk_0xEAE0D21A50E6C7F4(Param3.f_4, 1))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), 1950175060);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), 453432689, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), 1950175060, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
		
		case 7:
			if (unk_0xEAE0D21A50E6C7F4(Param3.f_4, 2))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), 1820140472);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), 324215364, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), 1820140472, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
		
		case 5:
			if (unk_0xEAE0D21A50E6C7F4(Param3.f_4, 3))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), 218444191);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), -1074790547, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), 218444191, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123, 4))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), 1788949567);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), -1660422300, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), 1788949567, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
		
		case 6:
			if (unk_0xEAE0D21A50E6C7F4(Param3.f_4, 4))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), -1878508229);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), 487013001, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), -1878508229, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Param3.f_4, 5))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), 1285032059);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), 100416529, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), 1285032059, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
		
		case 0:
			if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 1119849093, 0))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), -1614428030);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), 1119849093, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), -1614428030, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
		
		case 1:
			if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), -1568386805, 0) || func_617(-1813897027, -1, 0))
			{
				iVar0 = unk_0xE4B99D229AA1A241(unk_0x16F2683693E537C9(), 1003267566);
				unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), -1568386805, &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0x60E94085DB9392CA(unk_0x16F2683693E537C9(), 1003267566, (iVar0 + iVar2));
				StringCopy(sParam0, func_622(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam2->f_324), 0);
			}
			break;
	}
	return 0;
}

bool func_617(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (func_590())
	{
		return 0;
	}
	iVar0 = func_620(iParam0, iParam1);
	iVar1 = func_618(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_584(iVar1));
}

int func_618(int iParam0)
{
	return func_619(iParam0);
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 0;
			break;
		
		case 453432689:
			return 1;
			break;
		
		case 1593441988:
			return 2;
			break;
		
		case 584646201:
			return 3;
			break;
		
		case -1716589765:
			return 4;
			break;
		
		case 736523883:
			return 5;
			break;
		
		case -270015777:
			return 6;
			break;
		
		case 324215364:
			return 7;
			break;
		
		case -1074790547:
			return 8;
			break;
		
		case -2084633992:
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case -1357824103:
			return 11;
			break;
		
		case -1660422300:
			return 12;
			break;
		
		case 2144741730:
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case 741814745:
			return 15;
			break;
		
		case -1813897027:
			return 16;
			break;
		
		case -37975472:
			return 17;
			break;
		
		case 856002082:
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case 100416529:
			return 20;
			break;
		
		case 205991906:
			return 21;
			break;
		
		case 487013001:
			return 22;
			break;
		
		case -1654528753:
			return 23;
			break;
		
		case -494615257:
			return 24;
			break;
		
		case 2017895192:
			return 25;
			break;
		
		case -1568386805:
			return 26;
			break;
		
		case -1312131151:
			return 27;
			break;
		
		case 1119849093:
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case 911657153:
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case -72657034:
			return 33;
			break;
		
		case -1716189206:
			return 34;
			break;
		
		case 1737195953:
			return 35;
			break;
		
		case 1317494643:
			return 36;
			break;
		
		case -1786099057:
			return 37;
			break;
		
		case -2067956739:
			return 38;
			break;
		
		case 1141786504:
			return 39;
			break;
		
		case 1305664598:
			return 40;
			break;
		
		case 615608432:
			return 41;
			break;
		
		case 101631238:
			return 42;
			break;
		
		case 883325847:
			return 43;
			break;
		
		case -38085395:
			return 44;
			break;
		
		case -102323637:
			return 45;
			break;
		
		case -1063057011:
			return 46;
			break;
		
		case -1076751822:
			return 47;
			break;
		
		case -771403250:
			return 49;
			break;
		
		case 2132975508:
			return 48;
			break;
		
		case 1627465347:
			return 50;
			break;
		
		case -1834847097:
			return 51;
			break;
		
		case 137902532:
			return 52;
			break;
		
		case 1198879012:
			return 57;
			break;
		
		case -1466123874:
			return 53;
			break;
		
		case 2138347493:
			return 54;
			break;
		
		case -952879014:
			return 56;
			break;
		
		case 984333226:
			return 55;
			break;
		
		case -1420407917:
			return 60;
			break;
		
		case 1672152130:
			return 61;
			break;
		
		case -102973651:
			return 58;
			break;
		
		case 1834241177:
			return 59;
			break;
		
		case 171789620:
			return 64;
			break;
		
		case -656458692:
			return 62;
			break;
		
		case -598887786:
			return 63;
			break;
		
		case -581044007:
			return 65;
			break;
		
		case -619010992:
			return 68;
			break;
		
		case -275439685:
			return 66;
			break;
		
		case 1649403952:
			return 67;
			break;
		
		case -1951375401:
			return 69;
			break;
		
		case -1045183535:
			return 70;
			break;
		
		case -538741184:
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case -1355376991:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case -1238556825:
			return 83;
			break;
		
		case -1853920116:
			return 84;
			break;
		
		case 727643628:
			return 85;
			break;
	}
	return 0;
}

int func_620(int iParam0, int iParam1)
{
	iVar0 = func_21(func_621(iParam0), iParam1, 0);
	return iVar0;
}

int func_621(int iParam0)
{
	iVar0 = func_618(iParam0);
	iVar1 = func_589(iVar0);
	if ((func_588() == 0 || func_587() == 0) || (func_588() == 999 && func_587() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
				break;
			
			case 1:
				return 680;
				break;
			
			case 2:
				return 2427;
				break;
		}
	}
	return 11511;
}

char* func_622(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAS_LW_AM1";
		
		case 1:
			return "CAS_LW_AM2";
		
		case 2:
			return "CAS_LW_AM3";
		
		case 3:
			return "CAS_LW_AM4";
		
		case 4:
			return "CAS_LW_AM5";
		
		case 5:
			return "CAS_LW_AM6";
		
		case 6:
			return "CAS_LW_AM7";
		
		case 7:
			return "CAS_LW_AM8";
		
		default:
	}
	return "INVALID";
}

int func_623()
{
	iVar17 = 0;
	iVar18 = 0;
	while (iVar18 < 16)
	{
		iVar0[iVar18] = iVar18;
		iVar17 = (iVar17 + func_624(iVar0[iVar18]));
		iVar18++;
	}
	iVar19 = unk_0xA0A5F9CC633A6814(0, iVar17);
	iVar18 = 0;
	while (iVar18 < 16)
	{
		if (iVar19 <= func_624(iVar0[iVar18]))
		{
			return iVar0[iVar18];
		}
		else
		{
			iVar19 = (iVar19 - func_624(iVar0[iVar18]));
		}
		iVar18++;
	}
	return -1;
}

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26073;
		
		case 1:
			return Global_262145.f_26073;
		
		case 2:
			return Global_262145.f_26073;
		
		case 3:
			return Global_262145.f_26073;
		
		case 4:
			return Global_262145.f_26073;
		
		case 5:
			return Global_262145.f_26073;
		
		case 6:
			return Global_262145.f_26073;
		
		case 7:
			return Global_262145.f_26073;
		
		case 8:
			return Global_262145.f_26073;
		
		case 9:
			return Global_262145.f_26073;
		
		case 10:
			return Global_262145.f_26073;
		
		case 11:
			return Global_262145.f_26073;
		
		case 12:
			return Global_262145.f_26073;
		
		case 13:
			return Global_262145.f_26073;
		
		case 14:
			return Global_262145.f_26073;
		
		case 15:
			return Global_262145.f_26073;
		
		default:
	}
	return 0;
}

int func_625(char* sParam0, int iParam1, var uParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_324, 0))
	{
		uParam2->f_328 = func_673(func_674());
		unk_0x5D96D8530B3D0904(&(uParam2->f_324), 0);
	}
	else if (!func_672(uParam2->f_328) || (func_362(uParam2->f_328) && !func_535(uParam2->f_328, -1)))
	{
		if (func_362(uParam2->f_328) && !func_535(uParam2->f_328, -1))
		{
		}
		iVar0 = func_671(uParam2->f_328);
		func_629(iVar0, &(uParam2->f_320), &(uParam2->f_327));
		if (uParam2->f_327 == 0)
		{
			StringCopy(sParam0, unk_0x1739BA50603D849C(uParam2->f_328), 64);
			return 1;
		}
	}
	else if (func_626(iParam1, uParam2->f_328))
	{
		return func_191(sParam0, iParam1, uParam2, -1, 1);
	}
	return 0;
}

int func_626(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (func_628(iParam1))
		{
			if (!unk_0xC844350D5D58C99A(*iParam0))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(iParam1, 947,0432f, 116,779f, 79,4955f, 318,573f, 0, 0, 0);
				if (unk_0x40B3F576B41FA183(*iParam0) > 0)
				{
					unk_0xF95FF0A179413A39(*iParam0, 0);
				}
				unk_0xC002508A277213DE(*iParam0, 0, 0);
				unk_0xE121AE1BBF90E186(*iParam0, true);
				unk_0x316958DDB94DF3FC(*iParam0, 0);
				unk_0x82355306E5818F18(*iParam0, 0);
				unk_0x0882E3DC0C991680(*iParam0, 1);
				unk_0x71EDC33E5A423750(*iParam0, 2);
				unk_0x51B954DAB1BCAF73(*iParam0);
				unk_0xD458AC1C1D29C3B4(*iParam0, 1000, 0);
				unk_0x5DAB50E08C3C504A(*iParam0, 1000f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1000f);
				unk_0xCCD53AC1B5D5E456(*iParam0, 0f);
				unk_0xA6B2C9FCA24AAC6F(*iParam0, 1);
				unk_0x443C9A6DC182DDD5(*iParam0, 1);
				unk_0x98868AF51859FC75(*iParam0, 0);
				unk_0x3E5CE368CD085FFA(*iParam0, 0);
				unk_0x120A395B0ECB8EA5(*iParam0, true);
				unk_0x71199B01895C6202(iParam1);
			}
			else if (func_129(*iParam0))
			{
				if (unk_0x4906F8A34E9F4814(*iParam0, iParam1))
				{
					return 1;
				}
				else if (func_627(*iParam0, &uLocal_64))
				{
					unk_0xA954465BA6FDEFE2(iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_627(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_628(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_629(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = -1;
	iVar0 = func_649(iParam0, 0);
	if (iVar0 == -1)
	{
		*uParam2 = 1;
		*uParam1 = 3;
		return 1;
	}
	if (func_646(iVar0))
	{
		*uParam2 = 2;
		*uParam1 = 3;
		return 1;
	}
	if (!func_113())
	{
		func_643(iVar0);
		func_642();
		*uParam2 = 0;
		*uParam1 = 2;
		return 1;
	}
	func_630(&sVar1, iParam0, 0, -1, 0);
	switch (*uParam1)
	{
		case 0:
			if (!func_149(78225582, -1843039992, unk_0x12AB0310C2281427(&sVar1), 537254313, 1, 0, 1, 4, 0, 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_109(func_114());
				return 1;
			}
			sVar17 = "PO_COUPON_CAR_XMAS2017";
			if (!func_149(78225582, -1843039992, unk_0x12AB0310C2281427(sVar17), 537254313, 1, 0, 1, 4, unk_0x12AB0310C2281427(&sVar1), 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_109(func_114());
				return 1;
			}
			if (func_144())
			{
				*uParam1 = 1;
			}
			else
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_109(func_114());
				return 1;
			}
			break;
		
		case 1:
			if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					*uParam2 = 0;
					*uParam1 = 2;
					func_109(func_114());
					func_643(iVar0);
					func_642();
					return 1;
				}
				else
				{
					*uParam2 = 3;
					*uParam1 = 3;
					func_109(func_114());
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_630(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_649(iParam1, iParam2);
	if (iVar0 == -1)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	if (iParam1 == 245)
	{
		StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		return;
	}
	if (iParam1 == 323)
	{
		StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 324)
	{
		StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
		return;
	}
	if (iParam1 == 357)
	{
		StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
		return;
	}
	if (iParam1 == 402)
	{
		StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 449)
	{
		StringCopy(sParam0, "VE_RC_BANDITO_t0_v0", 64);
		return;
	}
	StringCopy(&Var1, func_641(iParam1), 16);
	if (unk_0xEA6BC48857E0AC4C(&Var1) || unk_0x12AB0310C2281427(&Var1) == -515263000)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar5 = func_640(iParam1, -1);
	if (iVar5 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	func_392(sParam0, Var1, iVar5, 4, 1, iParam2, -1, -1, 1, bParam4);
	if (((func_639(iParam1) || func_638(iParam1)) || func_637(func_640(iParam1, -1)) != -1) || func_636(func_640(iParam1, -1)) != -1)
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_19750)
			{
				if ((func_639(iParam1) && func_635()) || (func_638(iParam1) && !func_631(iParam1)))
				{
					func_392(sParam0, Var1, iVar5, 4, 1, iParam2, 1, -1, 1, bParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			func_392(sParam0, Var1, iVar5, 4, 1, (iParam2 - 1), 1, -1, 1, bParam4);
		}
	}
	else if (iParam1 == 413)
	{
		func_392(sParam0, Var1, iVar5, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
	else if (iParam1 == 414)
	{
		func_392(sParam0, Var1, iVar5, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
}

int func_631(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_632(iVar0);
}

bool func_632(int iParam0)
{
	if (func_590())
	{
		return 0;
	}
	iVar0 = func_633(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_584(iVar1));
}

int func_633(var uParam0)
{
	iVar0 = func_21(func_634(uParam0), -1, 0);
	return iVar0;
}

int func_634(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = func_589(iVar0);
	if ((func_588() == 0 || func_587() == 0) || (func_588() == 999 && func_587() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
		}
	}
	return 11511;
}

int func_635()
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

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case -631322662:
			return 0;
			break;
		
		case -1810806490:
			return 1;
			break;
		
		case -838099166:
			return 2;
			break;
		
		case -618617997:
			return 3;
			break;
		
		case -2098954619:
			return 4;
			break;
		
		case 2134119907:
			return 5;
			break;
	}
	return -1;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 1938952078:
			return 0;
			break;
		
		case -907477130:
			return 1;
			break;
		
		case -1987130134:
			return 2;
			break;
		
		case 1747439474:
			return 3;
			break;
		
		case 1118611807:
			return 4;
			break;
		
		case 409049982:
			return 5;
			break;
		
		case -1756021720:
			return 6;
			break;
		
		case 2031587082:
			return 7;
			break;
		
		case 1693751655:
			return 8;
			break;
		
		case 987469656:
			return 9;
			break;
		
		case 872704284:
			return 10;
			break;
		
		case 408825843:
			return 11;
			break;
		
		case 740289177:
			return 12;
			break;
		
		case -834353991:
			return 13;
			break;
		
		case 301304410:
			return 14;
			break;
		
		case 960812448:
			return 15;
			break;
		
		case 1284356689:
			return 16;
			break;
		
		case -208911803:
			return 17;
			break;
		
		case 1104234922:
			return 18;
			break;
		
		case 722226637:
			return 19;
			break;
		
		case -1267543371:
			return 20;
			break;
		
		case 822018448:
			return 21;
			break;
		
		case -1523428744:
			return 22;
			break;
	}
	return -1;
}

int func_638(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_639(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_640(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 758895617;
		
		case 1:
			return 1545842587;
		
		case 2:
			return 1051415893;
		
		case 3:
			return -1311154784;
		
		case 4:
			return -1291952903;
		
		case 5:
			return -1216765807;
		
		case 6:
			return -433375717;
		
		case 7:
			return 330661258;
		
		case 10:
			return -1214505995;
		
		case 11:
			return -2122757008;
		
		case 12:
			return -644710429;
		
		case 13:
			return 970356638;
		
		case 14:
			return 621481054;
		
		case 15:
			return 744705981;
		
		case 16:
			return -1660661558;
		
		case 17:
			return 782665360;
		
		case 18:
			return 1981688531;
		
		case 19:
			return -50547061;
		
		case 20:
			return 788747387;
		
		case 21:
			return 321739290;
		
		case 22:
			return -823509173;
		
		case 24:
			return -1043459709;
		
		case 25:
			return 861409633;
		
		case 27:
			return 400514754;
		
		case 29:
			return 290013743;
		
		case 30:
			return -1030275036;
		
		case 31:
			return 771711535;
		
		case 32:
			return -282946103;
		
		case 258:
			return -2100640717;
		
		case 33:
			return 1131912276;
		
		case 34:
			return -186537451;
		
		case 35:
			return 1127861609;
		
		case 36:
			return -1233807380;
		
		case 37:
			return -400295096;
		
		case 38:
			return 448402357;
		
		case 39:
			return -746882698;
		
		case 40:
			return -1122289213;
		
		case 41:
			return -1800170043;
		
		case 42:
			return -825837129;
		
		case 43:
			return -1177863319;
		
		case 44:
			return 418536135;
		
		case 45:
			return 384071873;
		
		case 46:
			return 338562499;
		
		case 47:
			return 1032823388;
		
		case 48:
			return -1045541610;
		
		case 49:
			return -1041692462;
		
		case 50:
			return -1995326987;
		
		case 51:
			return 1126868326;
		
		case 52:
			return -1189015600;
		
		case 53:
			return 1909141499;
		
		case 54:
			return -1130810103;
		
		case 55:
			return 1123216662;
		
		case 56:
			return -5153954;
		
		case 57:
			return 142944341;
		
		case 58:
			return 2006918058;
		
		case 59:
			return 2136773105;
		
		case 60:
			return -391594584;
		
		case 61:
			return -511601230;
		
		case 62:
			return -114291515;
		
		case 63:
			return 1672195559;
		
		case 64:
			return -893578776;
		
		case 65:
			return -140902153;
		
		case 66:
			return -2128233223;
		
		case 67:
			return -909201658;
		
		case 68:
			return 788045382;
		
		case 69:
			return 55628203;
		
		case 70:
			return -1696146015;
		
		case 71:
			return 2072687711;
		
		case 72:
			return 108773431;
		
		case 73:
			return -1461482751;
		
		case 74:
			return -1934452204;
		
		case 75:
			return 1737773231;
		
		case 76:
			return -2098947590;
		
		case 77:
			return -1622444098;
		
		case 78:
			return 837858166;
		
		case 79:
			return -1746576111;
		
		case 80:
			return -1673356438;
		
		case 81:
			return -2130482718;
		
		case 82:
			return 1283517198;
		
		case 83:
			return -713569950;
		
		case 84:
			return -2072933068;
		
		case 85:
			return -120287622;
		
		case 86:
			return 904750859;
		
		case 87:
			return -1098802077;
		
		case 88:
			return -1961627517;
		
		case 89:
			return -16948145;
		
		case 90:
			return -1670998136;
		
		case 91:
			return -89291282;
		
		case 92:
			return 301427732;
		
		case 93:
			return -1193103848;
		
		case 94:
			return -891462355;
		
		case 95:
			return -566387422;
		
		case 96:
			return 544021352;
		
		case 97:
			return 37348240;
		
		case 98:
			return 11251904;
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return -349601129;
		
		case 100:
			return 92612664;
		
		case 101:
			return 1488164764;
		
		case 102:
			return 231083307;
		
		case 103:
			return -1435919434;
		
		case 104:
			return -1661854193;
		
		case 105:
			return -1207771834;
		
		case 106:
			return -599568815;
		
		case 107:
			return -1453280962;
		
		case 108:
			return 989381445;
		
		case 109:
			return 117401876;
		
		case 111:
			return -1297672541;
		
		case 114:
			return -142942670;
		
		case 112:
			return 408192225;
		
		case 115:
			return -1403128555;
		
		case 116:
			return 486987393;
		
		case 110:
			return 767087018;
		
		case 113:
			return 1341619767;
		
		case 117:
			return 108773431;
		
		case 118:
			return -1041692462;
		
		case 119:
			return 1545842587;
		
		case 120:
			return -1622444098;
		
		case 121:
			return 1836027715;
		
		case 128:
			return -1809822327;
		
		case 129:
			return -1903012613;
		
		case 130:
			return 1069929536;
		
		case 131:
			return -789894171;
		
		case 132:
			return -1775728740;
		
		case 133:
			return -1289722222;
		
		case 134:
			return 886934177;
		
		case 135:
			return -310465116;
		
		case 136:
			return -1883869285;
		
		case 137:
			return -1651067813;
		
		case 138:
			return 1645267888;
		
		case 139:
			return -667151410;
		
		case 140:
			return -1477580979;
		
		case 141:
			return 1723137093;
		
		case 142:
			return 1777363799;
		
		case 122:
			return 80636076;
		
		case 123:
			return -591610296;
		
		case 124:
			return 499169875;
		
		case 125:
			return -377465520;
		
		case 126:
			return 1349725314;
		
		case 127:
			return 873639469;
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return -1205801634;
		
		case 144:
			return 1373123368;
		
		case 145:
			return 75131841;
		
		case 146:
			return 841808271;
		
		case 147:
			return -431692672;
		
		case 148:
			return -1237253773;
		
		case 149:
			return 1078682497;
		
		case 150:
			return 1507916787;
		
		case 151:
			return -14495224;
		
		case 152:
			return 699456151;
		
		case 153:
			return 65402552;
		
		case 154:
			return -1269889662;
		
		case 155:
			return -2045594037;
		
		case 156:
			return -1150599089;
		
		case 157:
			return -304802106;
		
		case 158:
			return 736902334;
		
		case 159:
			return -1008861746;
		
		case 160:
			return -845961253;
		
		case 161:
			return 743478836;
		
		case 162:
			return 165154707;
		
		case 163:
			return 1824333165;
		
		case 164:
			return -339587598;
		
		case 165:
			return 1011753235;
		
		case 166:
			return 1011753235;
		
		case 167:
			return -159126838;
		
		case 168:
			return 1265391242;
		
		case 169:
			return -1089039904;
		
		case 170:
			return 92612664;
		
		case 187:
			return -1600252419;
		
		case 177:
			return 970385471;
		
		case 185:
			return -82626025;
		
		case 174:
			return 1753414259;
		
		case 171:
			return 444171386;
		
		case 172:
			return 941800958;
		
		case 173:
			return 509498602;
		
		case 175:
			return 296357396;
		
		case 176:
			return -2107990196;
		
		case 178:
			return -1860900134;
		
		case 179:
			return 2071877360;
		
		case 183:
			return -2052737935;
		
		case 180:
			return -1372848492;
		
		case 181:
			return 410882957;
		
		case 182:
			return 640818791;
		
		case 184:
			return -2007026063;
		
		case 186:
			return -2096818938;
		
		case 188:
			return 1077420264;
		
		case 189:
			return -1543762099;
		
		case 190:
			return -624529134;
		
		case 191:
			return 1269098716;
		
		case 192:
			return -2064372143;
		
		case 193:
			return -634879114;
		
		case 194:
			return 1348744438;
		
		case 195:
			return 1162065741;
		
		case 196:
			return -1255452397;
		
		case 197:
			return 1221512915;
		
		case 198:
			return -1894894188;
		
		case 199:
			return -901163259;
		
		case 200:
			return 1233534620;
		
		case 201:
			return -1066334226;
		
		case 202:
			return 1039032026;
		
		case 203:
			return 1923400478;
		
		case 204:
			return 723973206;
		
		case 205:
			return -326143852;
		
		case 206:
			return -401643538;
		
		case 207:
			return -915704871;
		
		case 208:
			return 349315417;
		
		case 209:
			return 237764926;
		
		case 210:
			return 729783779;
		
		case 211:
			return -589178377;
		
		case 212:
			return -1106353882;
		
		case 213:
			return -631760477;
		
		case 214:
			return -1566741232;
		
		case 215:
			return -1214293858;
		
		case 216:
			return 1987142870;
		
		case 217:
			return 1075432268;
		
		case 218:
			return -498054846;
		
		case 219:
			return 1581459400;
		
		case 220:
			return -1479664699;
		
		case 221:
			return 349605904;
		
		case 222:
			return 784565758;
		
		case 223:
			return 1663218586;
		
		case 224:
			return 1070967343;
		
		case 225:
			return -1353081087;
		
		case 229:
			return -1150599089;
		
		case 228:
			return 525509695;
		
		case 227:
			return -2119578145;
		
		case 226:
			return -682211828;
		
		case 230:
			return 523724515;
		
		case 263:
			if (iParam1 == 0)
			{
				return 1203490606;
			}
			else if (iParam1 == 1)
			{
				return -432008408;
			}
			else
			{
				return 1203490606;
			}
			break;
		
		case 264:
			return -1757836725;
		
		case 259:
			return -1930048799;
		
		case 260:
			return 2123327359;
		
		case 261:
			return 1426219628;
		
		case 262:
			return 1274868363;
		
		case 265:
			return -1829802492;
		
		case 266:
			return 234062309;
		
		case 231:
			return -831834716;
		
		case 232:
			return 2068293287;
		
		case 233:
			if (iParam1 == 0)
			{
				return 1878062887;
			}
			else if (iParam1 == 1)
			{
				return 470404958;
			}
			else
			{
				return 1878062887;
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return 634118882;
			}
			else if (iParam1 == 1)
			{
				return 666166960;
			}
			else
			{
				return 634118882;
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return 906642318;
			}
			else if (iParam1 == 1)
			{
				return 704435172;
			}
			else
			{
				return 906642318;
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return -2030171296;
			}
			else if (iParam1 == 1)
			{
				return -604842630;
			}
			else
			{
				return -2030171296;
			}
			break;
		
		case 237:
			return -114627507;
		
		case 238:
			return -1660945322;
		
		case 239:
			return -1943285540;
		
		case 240:
			if (iParam1 == 0)
			{
				return -1485523546;
			}
			else if (iParam1 == 1)
			{
				return -888242983;
			}
			else
			{
				return -1485523546;
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return 1489967196;
			}
			else if (iParam1 == 1)
			{
				return 1922255844;
			}
			else
			{
				return 1489967196;
			}
			break;
		
		case 242:
			return 1102544804;
		
		case 243:
			return 710198397;
		
		case 244:
			return -1671539132;
		
		case 245:
			return Global_73804;
		
		case 251:
			return 16646064;
		
		case 250:
			return 464687292;
		
		case 249:
			return -1685021548;
		
		case 252:
			return -2119578145;
		
		case 246:
			return 972671128;
		
		case 247:
			return 970598228;
		
		case 49:
			return -1041692462;
		
		case 248:
			return -602287871;
		
		case 253:
			return -1845487887;
		
		case 254:
			return 1621617168;
		
		case 255:
			return 1475773103;
		
		case 256:
			return -305727417;
		
		case 257:
			return -1295027632;
		
		case 267:
			return -1232836011;
		
		case 268:
			return -777172681;
		
		case 269:
			return 1887331236;
		
		case 270:
			return 1549126457;
		
		case 271:
			return 101905590;
		
		case 272:
			return -663299102;
		
		case 273:
			return 683047626;
		
		case 274:
			return 390201602;
		
		case 275:
			return 86520421;
		
		case 279:
			return 2067820283;
		
		case 280:
			return 482197771;
		
		case 281:
			return 819197656;
		
		case 276:
			return -2103821244;
		
		case 277:
			return -1071380347;
		
		case 278:
			return 741090084;
		
		case 282:
			return -2140431165;
		
		case 283:
			return 2035069708;
		
		case 284:
			return -1606187161;
		
		case 285:
			return 822018448;
		
		case 286:
			return -2115793025;
		
		case 287:
			return -1009268949;
		
		case 288:
			return -570033273;
		
		case 289:
			return 6774487;
		
		case 290:
			return -1404136503;
		
		case 291:
			return 1873600305;
		
		case 292:
			return -405626514;
		
		case 293:
			return -674927303;
		
		case 294:
			return -255678177;
		
		case 296:
			return -440768424;
		
		case 297:
			return 1491277511;
		
		case 295:
			return -609625092;
		
		case 298:
			return -1523428744;
		
		case 299:
			return -1558399629;
		
		case 300:
			return 1026149675;
		
		case 301:
			return -618617997;
		
		case 302:
			return -1289178744;
		
		case 303:
			return -1842748181;
		
		case 304:
			return -312295511;
		
		case 305:
			return -1649536104;
		
		case 306:
			return 1180875963;
		
		case 307:
			return -1590337689;
		
		case 308:
			return 682434785;
		
		case 309:
			return -1912017790;
		
		case 310:
			return 941494461;
		
		case 311:
			return 989294410;
		
		case 312:
			return -1758137366;
		
		case 313:
			return 272929391;
		
		case 314:
			return -2048333973;
		
		case 315:
			return 1034187331;
		
		case 316:
			return -239841468;
		
		case 317:
			return 627535535;
		
		case 318:
			return 1886268224;
		
		case 319:
			return 1234311532;
		
		case 320:
			return -1405937764;
		
		case 321:
			return 719660200;
		
		case 322:
			return -982130927;
	}
	switch (iParam0)
	{
		case 323:
			return Global_73805;
		
		case 324:
			return Global_73806;
		
		case 325:
			return 223240013;
		
		case 326:
			return 1504306544;
		
		case 327:
			return 1939284556;
		
		case 328:
			return 917809321;
		
		case 329:
			return 562680400;
		
		case 330:
			return 1897744184;
		
		case 331:
			return -32236122;
		
		case 332:
			return 884483972;
		
		case 333:
			return -1210451983;
		
		case 334:
			return -1881846085;
		
		case 335:
			return 159274291;
		
		case 336:
			return 433954513;
		
		case 337:
			return -1281684762;
		
		case 338:
			return -1763555241;
		
		case 339:
			return -749299473;
		
		case 340:
			return -975345305;
		
		case 341:
			return -1700874274;
		
		case 342:
			return -392675425;
		
		case 343:
			return 1043222410;
		
		case 344:
			return -1386191424;
		
		case 345:
			return 1565978651;
		
		case 346:
			return 1036591958;
		
		case 347:
			return -32878452;
		
		case 348:
			return -42959138;
		
		case 349:
			return -1984275979;
		
		case 350:
			return -1007528109;
		
		case 351:
			return -1523619738;
		
		case 352:
			return 1392481335;
		
		case 353:
			return -998177792;
		
		case 354:
			return 1841130506;
		
		case 355:
			return 2049897956;
		
		case 356:
			return -1242608589;
		
		case 357:
			return Global_73807;
		
		case 358:
			return 1483171323;
		
		case 359:
			return 886810209;
		
		case 360:
			return -1693015116;
		
		case 361:
			return -692292317;
		
		case 362:
			return -1435527158;
		
		case 363:
			return 1181327175;
		
		case 364:
			return 1489874736;
		
		case 365:
			return -212993243;
		
		case 366:
			return 447548909;
		
		case 367:
			return 1561920505;
		
		case 368:
			return -1848994066;
		
		case 369:
			return 1741861769;
		
		case 370:
			return 1104234922;
		
		case 371:
			return 1871995513;
		
		case 372:
			return 1352136073;
		
		case 373:
			return -313185164;
		
		case 374:
			return -2079788230;
		
		case 375:
			return 600450546;
		
		case 376:
			return -410205223;
		
		case 377:
			return 867799010;
		
		case 378:
			return -1529242755;
		
		case 379:
			return 903794909;
		
		case 380:
			return -1532697517;
		
		case 381:
			return 15219735;
		
		case 382:
			return 661493923;
		
		case 383:
			return 838982985;
		
		case 384:
			return -391595372;
		
		case 385:
			return -121446169;
		
		case 386:
			return 1909189272;
		
		case 387:
			return 1617472902;
		
		case 388:
			return -1267543371;
		
		case 389:
			return 931280609;
		
		case 390:
			return 1046206681;
		
		case 391:
			return -1259134696;
		
		case 392:
			return 1115909093;
		
		case 393:
			return 1031562256;
		
		case 394:
			return -376434238;
		
		case 395:
			return -986944621;
		
		case 396:
			return -1134706562;
		
		case 397:
			return -2120700196;
		
		case 398:
			return -214906006;
		
		case 399:
			return -988501280;
		
		case 400:
			return 1254014755;
		
		case 401:
			return -726768679;
		
		case 402:
			return Global_73808;
		
		case 403:
			return 1945374990;
		
		case 404:
			return 1653666139;
		
		case 405:
			return 500482303;
		
		case 406:
			return 2044532910;
		
		case 407:
			return -638562243;
		
		case 408:
			return 1692272545;
		
		case 409:
			return 2069146067;
		
		case 410:
			return -420911112;
		
		case 411:
			return 321186144;
		
		case 412:
			return -54332285;
		
		case 415:
			return 2016857647;
		
		case 416:
			return -227741703;
		
		case 417:
			return 627094268;
		
		case 418:
			return -1450650718;
		
		case 419:
			return -808831384;
		
		case 420:
			return 1337041428;
		
		case 421:
			return 850565707;
		
		case 422:
			return 884422927;
		
		case 423:
			return -1137532101;
		
		case 424:
			return -808457413;
		
		case 413:
			return -307958377;
		
		case 414:
			return 345756458;
		
		case 425:
			return -801550069;
		
		case 426:
			return 679453769;
		
		case 427:
			return 1909700336;
		
		case 428:
			return 2139203625;
		
		case 429:
			return -1890996696;
		
		case 430:
			return 2038858402;
		
		case 431:
			return -1146969353;
		
		case 432:
			return 1542143200;
		
		case 433:
			return -579747861;
		
		case 434:
			return 444994115;
		
		case 435:
			return 1637620610;
		
		case 436:
			return -755532233;
		
		case 437:
			return 540101442;
		
		case 438:
			return -1106120762;
		
		case 439:
			return -1478704292;
		
		case 440:
			return -2096690334;
		
		case 450:
			return -956048545;
		
		case 451:
			return 1886712733;
		
		case 452:
			return 728614474;
		
		case 453:
			return -1255698084;
		
		case 454:
			return 1074326203;
		
		case 455:
			return -784816453;
		
		case 456:
			return 534258863;
		
		case 457:
			return 1641462412;
		
		case 458:
			return -591651781;
		
		case 441:
			return -49115651;
		
		case 442:
			return 1456744817;
		
		case 443:
			return 1591739866;
		
		case 444:
			return -507495760;
		
		case 445:
			return -1168952148;
		
		case 446:
			return 1279262537;
		
		case 447:
			return -1566607184;
		
		case 448:
			return -331467772;
		
		case 449:
			return -286046740;
		
		case 459:
			return 1044193113;
		
		case 460:
			return 686471183;
		
		case 461:
			return -941272559;
		
		case 462:
			return -1829436850;
		
		case 463:
			return -682108547;
		
		case 464:
			return 722226637;
		
		case 465:
			return 1854776567;
		
		case 466:
			return 1862507111;
		
		case 467:
			return -882629065;
		
		case 468:
			return -362150785;
		
		case 469:
			return 310284501;
		
		case 470:
			return 916547552;
		
		case 471:
			return -1804415708;
		
		case 472:
			return 1934384720;
		
		case 473:
			return -1349095620;
		
		case 474:
			return -208911803;
		
		case 475:
			return -324618589;
		
		case 476:
			return -664141241;
		
		case 477:
			return 1323778901;
		
		case 478:
			return -1620126302;
		
		case 479:
			return -447711397;
		
		case 480:
			return 1938952078;
		
		case 481:
			return -907477130;
		
		case 482:
			return -1987130134;
		
		case 483:
			return 1747439474;
		
		case 484:
			return 469291905;
		
		case 485:
			return -48031959;
		
		case 486:
			return 1284356689;
		
		case 487:
			return -1254331310;
		
		case 488:
			return 394110044;
		
		case 489:
			return 301304410;
		
		case 490:
			return 1456336509;
		
		case 491:
			return 340154634;
		
		case 492:
			return -1132721664;
		
		case 493:
			return -1960756985;
		
		case 494:
			return 960812448;
		
		case 495:
			return 83136452;
		
		case 496:
			return 740289177;
		
		case 497:
			return 2031587082;
		
		case 498:
			return 1693751655;
		
		case 499:
			return -834353991;
		
		case 500:
			return 872704284;
		
		case 501:
			return 987469656;
		
		case 502:
			return -1756021720;
		
		case 503:
			return 1118611807;
		
		case 504:
			return 409049982;
		
		case 505:
			return 408825843;
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return -2098954619;
		
		case 507:
			return 2134119907;
		
		case 508:
			return 67753863;
		
		case 509:
			return -631322662;
		
		case 510:
			return -838099166;
		
		case 511:
			return -1810806490;
		
		case 512:
			return -1358197432;
		
		case 513:
			return 1492612435;
		
		case 514:
			return 1181339704;
		
		case 515:
			return -1728685474;
		
		case 516:
			return -2124201592;
		
		case 517:
			return 1830407356;
		
		default:
	}
	return 0;
}

char* func_641(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_640(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		default:
	}
	return unk_0x1739BA50603D849C(iVar0);
}

void func_642()
{
	if (!Global_2537071.f_5124.f_334)
	{
		Global_2537071.f_5124.f_334 = 1;
	}
}

void func_643(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&(Global_2097152[func_186()].f_5500.f_1[(iParam0 / 32)]), (iParam0 % 32));
		Global_2097152[func_186()].f_5500 = unk_0xDD0E7998AE8AD485();
		func_645();
		func_644();
	}
}

void func_644()
{
}

void func_645()
{
	func_64(1724, Global_2097152[func_186()].f_5500, -1, 1, 0);
	func_64(1725, Global_2097152[func_186()].f_5500.f_1[0], -1, 1, 0);
	func_64(1726, Global_2097152[func_186()].f_5500.f_1[1], -1, 1, 0);
	func_64(1727, Global_2097152[func_186()].f_5500.f_1[2], -1, 1, 0);
	func_64(1728, Global_2097152[func_186()].f_5500.f_1[3], -1, 1, 0);
}

int func_646(int iParam0)
{
	if (func_113())
	{
		if (iParam0 == func_649(245, 0) && func_21(3168, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_649(323, 0) && func_21(5393, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_649(324, 0) && func_496(9461, -1, -1))
		{
			return 1;
		}
		if (iParam0 == func_649(357, 0) && func_21(6156, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_649(402, 0) && func_21(7207, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				
				case 1:
					iVar1 = 451;
					break;
				
				case 2:
					iVar1 = 452;
					break;
				
				case 3:
					iVar1 = 453;
					break;
				
				case 4:
					iVar1 = 454;
					break;
				
				case 5:
					iVar1 = 455;
					break;
				
				case 6:
					iVar1 = 456;
					break;
				
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_649(iVar1, 0) && func_647(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2097152[func_186()].f_5500.f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_647(int iParam0)
{
	return func_496(func_648(iParam0), -1, -1);
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_649(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_650(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_650(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		default:
	}
	return -1;
}

int func_650(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_640(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xC2F420D189FDB329())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_635() && func_670())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x8CD06866876216F2()) || (iParam0 == 207 && unk_0x8CD06866876216F2())) || (iParam0 == 208 && unk_0x8CD06866876216F2())) || (iParam0 == 209 && unk_0x8CD06866876216F2()))
	{
		if (func_635())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_669(iParam0))
	{
		if (Global_75375)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_473(iVar0);
	if (iVar1 != -1)
	{
		if (func_667(func_668(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_639(iParam0))
	{
		if (func_635())
		{
			if ((iParam0 == 205 && Global_262145.f_19751) || (iParam0 != 205 && Global_262145.f_19750))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_638(iParam0))
	{
		if (func_631(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_666(iVar0);
	if (iVar2 != -1)
	{
		if (func_664(func_665(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_663(iVar0);
	if (iVar3 > 0)
	{
		if (func_661(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_660(iVar0);
	if (iVar4 != -1)
	{
		if (func_658(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_657(iVar0);
	if (iVar5 != -1)
	{
		if (func_655(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_654(iVar0);
	if (iVar6 != -1)
	{
		if (func_652(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == 1938952078 || iVar0 == -1987130134) || iVar0 == 1747439474)
	{
		if (func_651(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_637(iVar0);
	if (iVar7 != -1)
	{
		if (func_651(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_651(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_21(8833, -1, 0);
	switch (iParam0)
	{
		case 1938952078:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0) || Global_262145.f_27796)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -907477130:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 1) || Global_262145.f_27797)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1987130134:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 2) || Global_262145.f_27798)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1747439474:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 3) || Global_262145.f_27799)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1118611807:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 4) || Global_262145.f_27800)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 409049982:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 5) || Global_262145.f_27801)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1756021720:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 6) || Global_262145.f_27802)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2031587082:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 7) || Global_262145.f_27803)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1693751655:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 8) || Global_262145.f_27804)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 987469656:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 9) || Global_262145.f_27805)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 872704284:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 10) || Global_262145.f_27806)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 408825843:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 11) || Global_262145.f_27807)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 740289177:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 12) || Global_262145.f_27808)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -834353991:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 13) || Global_262145.f_27809)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 301304410:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 14) || Global_262145.f_27810)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 960812448:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 15) || Global_262145.f_27811)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1284356689:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 16) || Global_262145.f_27812)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -208911803:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 17) || Global_262145.f_27813)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1104234922:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 18) || Global_262145.f_27814)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 722226637:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 19) || Global_262145.f_27815)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1267543371:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 20) || Global_262145.f_27816)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 822018448:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 21) || Global_262145.f_27817)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1523428744:
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 22) || Global_262145.f_27818)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_652(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	if (iParam0 == -2030171296 || iParam0 == -604842630)
	{
		return 0;
	}
	if (func_654(iParam0) != -1)
	{
		if (func_647(func_653(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 8;
			break;
		
		case 679453769:
			return 9;
			break;
		
		case 1909700336:
			return 10;
			break;
		
		case 2139203625:
			return 11;
			break;
		
		case -1890996696:
			return 12;
			break;
		
		case 2038858402:
			return 13;
			break;
		
		case 540101442:
			return 14;
			break;
		
		case -1106120762:
			return 15;
			break;
		
		case -1478704292:
			return 16;
			break;
		
		case -1146969353:
			return 20;
			break;
		
		case 1542143200:
			return 21;
			break;
		
		case -579747861:
			return 22;
			break;
		
		case 444994115:
			return 17;
			break;
		
		case 1637620610:
			return 18;
			break;
		
		case -755532233:
			return 19;
			break;
		
		case -2096690334:
			return 102;
			break;
		
		case -589178377:
			return 103;
			break;
		
		case 75131841:
			return 104;
			break;
		
		case 729783779:
			return 105;
			break;
		
		case 80636076:
			return 106;
			break;
		
		case 931280609:
			return 107;
			break;
		
		case 741090084:
			return 108;
			break;
	}
	return -1;
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case -801550069:
			return 0;
		
		case 679453769:
			return 1;
		
		case 1909700336:
			return 2;
		
		case 2139203625:
			return 3;
		
		case -1890996696:
			return 4;
		
		case 2038858402:
			return 5;
		
		case -1146969353:
			return 6;
		
		case 1542143200:
			return 7;
		
		case -579747861:
			return 8;
		
		case 444994115:
			return 9;
		
		case 1637620610:
			return 10;
		
		case -755532233:
			return 11;
		
		case 540101442:
			return 12;
		
		case -1106120762:
			return 13;
		
		case -1478704292:
			return 14;
		
		case -589178377:
			return 15;
		
		case 75131841:
			return 16;
		
		case 729783779:
			return 17;
		
		case 80636076:
			return 18;
		
		case -2096690334:
			return 19;
		
		case 931280609:
			return 20;
		
		case 741090084:
			return 21;
		
		default:
	}
	return -1;
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			if (func_21(7230, -1, 0) >= func_656(iParam0) || Global_262145.f_24161)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1653666139:
			if (func_21(7230, -1, 0) >= func_656(iParam0) || Global_262145.f_24162)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2069146067:
			if (func_67(22050, -1, -1) >= func_656(iParam0) || Global_262145.f_24163)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 345756458:
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_281.f_7, 1) || Global_262145.f_24165)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -420911112:
			if (func_21(7228, -1, 0) >= func_656(iParam0) || Global_262145.f_24166)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -307958377:
			if (func_21(7228, -1, 0) >= func_656(iParam0) || Global_262145.f_24167)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -638562243:
			if (func_496(22123, -1, -1) || Global_262145.f_24164)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return Global_262145.f_24168;
			break;
		
		case 1653666139:
			return Global_262145.f_24169;
			break;
		
		case 2069146067:
			return Global_262145.f_24170;
			break;
		
		case -420911112:
			return Global_262145.f_24171;
			break;
		
		case -307958377:
			return Global_262145.f_24172;
			break;
	}
	return 0;
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 1945374990:
			return 0;
			break;
		
		case 1653666139:
			return 1;
			break;
		
		case 2069146067:
			return 2;
			break;
		
		case -638562243:
			return 3;
			break;
		
		case 345756458:
			return 4;
			break;
		
		case -420911112:
			return 5;
			break;
		
		case -307958377:
			return 6;
			break;
	}
	return -1;
}

int func_658(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_21(5661, -1, 0);
	switch (iParam0)
	{
		case 1483171323:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(1));
		
		case 1181327175:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(2));
		
		case -1693015116:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(6));
		
		case 886810209:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(7));
		
		case -692292317:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(10));
		
		case -212993243:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(11));
		
		case -1435527158:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(12));
		
		case 447548909:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(13));
		
		case 1489874736:
			return unk_0xEAE0D21A50E6C7F4(iVar0, func_659(15));
		
		default:
	}
	return 0;
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 1483171323:
			return 0;
			break;
		
		case 1181327175:
			return 1;
			break;
		
		case -1693015116:
			return 2;
			break;
		
		case 886810209:
			return 3;
			break;
		
		case -692292317:
			return 4;
			break;
		
		case -212993243:
			return 5;
			break;
		
		case -1435527158:
			return 6;
			break;
		
		case 447548909:
			return 7;
			break;
		
		case 1489874736:
			return 8;
			break;
	}
	return -1;
}

int func_661(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	iVar0 = func_663(iParam0);
	iVar1 = func_662();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_662()
{
	return func_21(6113, -1, 0);
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
			return Global_262145.f_22210;
		
		case -975345305:
			return Global_262145.f_22211;
		
		case -1523619738:
			return Global_262145.f_22212;
		
		case -1984275979:
			return Global_262145.f_22213;
		
		case -1700874274:
			return Global_262145.f_22214;
		
		case 1565978651:
			return Global_262145.f_22215;
		
		case 1043222410:
			return Global_262145.f_22216;
		
		case -32878452:
			return Global_262145.f_22217;
		
		case -1007528109:
			return Global_262145.f_22218;
		
		case -749299473:
			return Global_262145.f_22219;
		
		case -1386191424:
			return Global_262145.f_22220;
		
		case -392675425:
			return Global_262145.f_22221;
		
		case 1036591958:
			return Global_262145.f_22222;
		
		case -42959138:
			return Global_262145.f_22223;
		
		default:
	}
	return 0;
}

bool func_664(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(func_21(5463, -1, 0), iParam0);
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
		
		case -32236122:
			return 1;
		
		case -1881846085:
			return 2;
		
		case 562680400:
			return 3;
		
		case -1210451983:
			return 5;
		
		case 884483972:
			return 7;
		
		default:
	}
	return 3;
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
			break;
		
		case -32236122:
			return 1;
			break;
		
		case -1881846085:
			return 2;
			break;
		
		case 562680400:
			return 3;
			break;
		
		case -1210451983:
			return 4;
			break;
		
		case 884483972:
			return 5;
			break;
	}
	return -1;
}

bool func_667(int iParam0)
{
	if (!Global_76622)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(func_21(5326, -1, 0), iParam0);
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case -827162039:
			return 0;
		
		case -312295511:
			return 0;
		
		case -1912017790:
			return 1;
		
		case -1590337689:
			return 2;
		
		case -1649536104:
			return 3;
		
		case 989294410:
			return 4;
		
		case 1180875963:
			return 5;
		
		case 682434785:
			return 6;
		
		case 941494461:
			return 7;
		
		default:
	}
	return 0;
}

int func_669(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_670()
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

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 758895617:
			return 0;
		
		case 1545842587:
			return 1;
		
		case 1051415893:
			return 2;
		
		case -1311154784:
			return 3;
		
		case -1291952903:
			return 4;
		
		case -1216765807:
			return 5;
		
		case -433375717:
			return 6;
		
		case 330661258:
			return 7;
		
		case -1214505995:
			return 10;
		
		case -2122757008:
			return 11;
		
		case -644710429:
			return 12;
		
		case 970356638:
			return 13;
		
		case 621481054:
			return 14;
		
		case 744705981:
			return 15;
		
		case -1660661558:
			return 16;
		
		case 782665360:
			return 17;
		
		case 1981688531:
			return 18;
		
		case -50547061:
			return 19;
		
		case 788747387:
			return 20;
		
		case 321739290:
			return 21;
		
		case -823509173:
			return 22;
		
		case -1043459709:
			return 24;
		
		case 861409633:
			return 25;
		
		case 400514754:
			return 27;
		
		case 290013743:
			return 29;
		
		case -1030275036:
			return 30;
		
		case 771711535:
			return 31;
		
		case -282946103:
			return 32;
		
		case -2100640717:
			return 258;
		
		case 1131912276:
			return 33;
		
		case -186537451:
			return 34;
		
		case 1127861609:
			return 35;
		
		case -1233807380:
			return 36;
		
		case -400295096:
			return 37;
		
		case 448402357:
			return 38;
		
		case -746882698:
			return 39;
		
		case -1122289213:
			return 40;
		
		case -1800170043:
			return 41;
		
		case -825837129:
			return 42;
		
		case -1177863319:
			return 43;
		
		case 418536135:
			return 44;
		
		case 384071873:
			return 45;
		
		case 338562499:
			return 46;
		
		case 1032823388:
			return 47;
		
		case -1045541610:
			return 48;
		
		case -1041692462:
			return 49;
		
		case -1995326987:
			return 50;
		
		case 1126868326:
			return 51;
		
		case -1189015600:
			return 52;
		
		case 1909141499:
			return 53;
		
		case -1130810103:
			return 54;
		
		case 1123216662:
			return 55;
		
		case -5153954:
			return 56;
		
		case 142944341:
			return 57;
		
		case 2006918058:
			return 58;
		
		case 2136773105:
			return 59;
		
		case -391594584:
			return 60;
		
		case -511601230:
			return 61;
		
		case -114291515:
			return 62;
		
		case 1672195559:
			return 63;
		
		case -893578776:
			return 64;
		
		case -140902153:
			return 65;
		
		case -2128233223:
			return 66;
		
		case -909201658:
			return 67;
		
		case 788045382:
			return 68;
		
		case 55628203:
			return 69;
		
		case 1283517198:
			return 82;
		
		case 837858166:
			return 78;
		
		case -891462355:
			return 94;
		
		case -16948145:
			return 89;
		
		case -1696146015:
			return 70;
		
		case -713569950:
			return 83;
		
		case 2072687711:
			return 71;
		
		case -2072933068:
			return 84;
		
		case 108773431:
			return 72;
		
		case -1670998136:
			return 90;
		
		case -2130482718:
			return 81;
		
		case -89291282:
			return 91;
		
		case 301427732:
			return 92;
		
		case -120287622:
			return 85;
		
		case -1746576111:
			return 79;
		
		case 904750859:
			return 86;
		
		case -1461482751:
			return 73;
		
		case -1934452204:
			return 74;
		
		case 1737773231:
			return 75;
		
		case -1098802077:
			return 87;
		
		case -2098947590:
			return 76;
		
		case -1961627517:
			return 88;
		
		case -1673356438:
			return 80;
		
		case -1622444098:
			return 77;
		
		case -1193103848:
			return 93;
		
		case -566387422:
			return 95;
		
		case 544021352:
			return 96;
		
		case 37348240:
			return 97;
		
		case 11251904:
			return 98;
		
		case -1435919434:
			return 103;
		
		case -1661854193:
			return 104;
		
		case -1207771834:
			return 105;
		
		case -599568815:
			return 106;
		
		case -1453280962:
			return 107;
		
		case 989381445:
			return 108;
		
		case -1809822327:
			return 128;
		
		case -1903012613:
			return 129;
		
		case 1069929536:
			return 130;
		
		case -789894171:
			return 131;
		
		case -1775728740:
			return 132;
		
		case -1289722222:
			return 133;
		
		case 886934177:
			return 134;
		
		case -310465116:
			return 135;
		
		case -1883869285:
			return 136;
		
		case -1651067813:
			return 137;
		
		case 1645267888:
			return 138;
		
		case -667151410:
			return 139;
		
		case -1477580979:
			return 140;
		
		case 1723137093:
			return 141;
		
		case 1777363799:
			return 142;
		
		case 80636076:
			return 122;
		
		case -591610296:
			return 123;
		
		case 499169875:
			return 124;
		
		case -377465520:
			return 125;
		
		case 1349725314:
			return 126;
		
		case 873639469:
			return 127;
		
		case 1507916787:
			return 150;
		
		case -14495224:
			return 151;
		
		case 699456151:
			return 152;
		
		case 65402552:
			return 153;
		
		case -1269889662:
			return 154;
		
		case -2045594037:
			return 155;
		
		case -1150599089:
			return 156;
		
		case -304802106:
			return 157;
		
		case 736902334:
			return 158;
		
		case -1008861746:
			return 159;
		
		default:
	}
	if (iParam0 == -349601129)
	{
		return 99;
	}
	else if (iParam0 == 92612664)
	{
		return 100;
	}
	else if (iParam0 == 1488164764)
	{
		return 101;
	}
	else if (iParam0 == 231083307)
	{
		return 102;
	}
	else if (iParam0 == 371301181 || iParam0 == 117401876)
	{
		return 109;
	}
	else if (iParam0 == -1297672541)
	{
		return 111;
	}
	else if (iParam0 == -142942670)
	{
		return 114;
	}
	else if (iParam0 == 408192225)
	{
		return 112;
	}
	else if (iParam0 == -1403128555)
	{
		return 115;
	}
	else if (iParam0 == 486987393)
	{
		return 116;
	}
	else if (iParam0 == 767087018)
	{
		return 110;
	}
	else if (iParam0 == 1341619767)
	{
		return 113;
	}
	else if (iParam0 == 108773431)
	{
		return 117;
	}
	else if (iParam0 == -1041692462)
	{
		return 118;
	}
	else if (iParam0 == 1545842587)
	{
		return 119;
	}
	else if (iParam0 == -1622444098)
	{
		return 120;
	}
	else if (iParam0 == 1836027715)
	{
		return 121;
	}
	else if (iParam0 == -1205801634)
	{
		return 143;
	}
	else if (iParam0 == 1373123368)
	{
		return 144;
	}
	else if (iParam0 == 75131841)
	{
		return 145;
	}
	else if (iParam0 == 841808271)
	{
		return 146;
	}
	else if (iParam0 == -431692672)
	{
		return 147;
	}
	else if (iParam0 == -1237253773)
	{
		return 148;
	}
	else if (iParam0 == 1078682497)
	{
		return 149;
	}
	else if (iParam0 == -845961253)
	{
		return 160;
	}
	else if (iParam0 == 743478836)
	{
		return 161;
	}
	else if (iParam0 == 165154707)
	{
		return 162;
	}
	else if (iParam0 == 1824333165)
	{
		return 163;
	}
	else if (iParam0 == -339587598)
	{
		return 164;
	}
	else if (iParam0 == 1011753235)
	{
		return 165;
	}
	else if (iParam0 == 1011753235)
	{
		return 166;
	}
	else if (iParam0 == -159126838)
	{
		return 167;
	}
	else if (iParam0 == 1265391242)
	{
		return 168;
	}
	else if (iParam0 == -1089039904)
	{
		return 169;
	}
	else if (iParam0 == 92612664)
	{
		return 170;
	}
	else if (iParam0 == -1600252419)
	{
		return 187;
	}
	else if (iParam0 == 970385471)
	{
		return 177;
	}
	else if (iParam0 == -82626025)
	{
		return 185;
	}
	else if (iParam0 == 1753414259)
	{
		return 174;
	}
	else if (iParam0 == 444171386)
	{
		return 171;
	}
	else if (iParam0 == 941800958)
	{
		return 172;
	}
	else if (iParam0 == 509498602)
	{
		return 173;
	}
	else if (iParam0 == 296357396)
	{
		return 175;
	}
	else if (iParam0 == -2107990196)
	{
		return 176;
	}
	else if (iParam0 == -1860900134)
	{
		return 178;
	}
	else if (iParam0 == -2052737935)
	{
		return 183;
	}
	else if (iParam0 == 2071877360)
	{
		return 179;
	}
	else if (iParam0 == 640818791)
	{
		return 182;
	}
	else if (iParam0 == -2007026063)
	{
		return 184;
	}
	else if (iParam0 == -2096818938)
	{
		return 186;
	}
	else if (iParam0 == 1077420264)
	{
		return 188;
	}
	else if (iParam0 == -1543762099)
	{
		return 189;
	}
	else if (iParam0 == -624529134)
	{
		return 190;
	}
	else if (iParam0 == -1372848492)
	{
		return 180;
	}
	else if (iParam0 == 410882957)
	{
		return 181;
	}
	else if (iParam0 == 1269098716)
	{
		return 191;
	}
	else if (iParam0 == -2064372143)
	{
		return 192;
	}
	else if (iParam0 == -634879114)
	{
		return 193;
	}
	else if (iParam0 == 1348744438)
	{
		return 194;
	}
	else if (iParam0 == 1162065741)
	{
		return 195;
	}
	else if (iParam0 == -1255452397)
	{
		return 196;
	}
	else if (iParam0 == 1221512915)
	{
		return 197;
	}
	else if (iParam0 == -1894894188)
	{
		return 198;
	}
	else if (iParam0 == -901163259)
	{
		return 199;
	}
	else if (iParam0 == 1233534620)
	{
		return 200;
	}
	else if (iParam0 == -1066334226)
	{
		return 201;
	}
	else if (iParam0 == 1039032026)
	{
		return 202;
	}
	else if (iParam0 == 1923400478)
	{
		return 203;
	}
	else if (iParam0 == 723973206)
	{
		return 204;
	}
	else if (iParam0 == -326143852)
	{
		return 205;
	}
	else if (iParam0 == -401643538)
	{
		return 206;
	}
	else if (iParam0 == -915704871)
	{
		return 207;
	}
	else if (iParam0 == 349315417)
	{
		return 208;
	}
	else if (iParam0 == 237764926)
	{
		return 209;
	}
	else if (iParam0 == 729783779)
	{
		return 210;
	}
	else if (iParam0 == -589178377)
	{
		return 211;
	}
	else if (iParam0 == -1106353882)
	{
		return 212;
	}
	else if (iParam0 == -631760477)
	{
		return 213;
	}
	else if (iParam0 == -1566741232)
	{
		return 214;
	}
	else if (iParam0 == -1214293858)
	{
		return 215;
	}
	else if (iParam0 == 1987142870)
	{
		return 216;
	}
	else if (iParam0 == 1075432268)
	{
		return 217;
	}
	else if (iParam0 == -498054846)
	{
		return 218;
	}
	else if (iParam0 == 1581459400)
	{
		return 219;
	}
	else if (iParam0 == -1479664699)
	{
		return 220;
	}
	else if (iParam0 == 349605904)
	{
		return 221;
	}
	else if (iParam0 == 784565758)
	{
		return 222;
	}
	else if (iParam0 == 1663218586)
	{
		return 223;
	}
	else if (iParam0 == 1070967343)
	{
		return 224;
	}
	else if (iParam0 == -1353081087)
	{
		return 225;
	}
	else if (iParam0 == -1150599089)
	{
		return 229;
	}
	else if (iParam0 == 525509695)
	{
		return 228;
	}
	else if (iParam0 == -2119578145)
	{
		return 227;
	}
	else if (iParam0 == -682211828)
	{
		return 226;
	}
	else if (iParam0 == 523724515)
	{
		return 230;
	}
	else if (iParam0 == -831834716)
	{
		return 231;
	}
	else if (iParam0 == 2068293287)
	{
		return 232;
	}
	else if (iParam0 == -310465116)
	{
		return 135;
	}
	else if (iParam0 == 16646064)
	{
		return 251;
	}
	else if (iParam0 == 464687292)
	{
		return 250;
	}
	else if (iParam0 == -1685021548)
	{
		return 249;
	}
	else if (iParam0 == 729783779)
	{
		return 210;
	}
	else if (iParam0 == -2119578145)
	{
		return 252;
	}
	else if (iParam0 == 1878062887 || iParam0 == 470404958)
	{
		return 233;
	}
	else if (iParam0 == 634118882 || iParam0 == 666166960)
	{
		return 234;
	}
	else if (iParam0 == 906642318)
	{
		return 235;
	}
	else if (iParam0 == -2030171296)
	{
		return 236;
	}
	else if (iParam0 == -114627507)
	{
		return 237;
	}
	else if (iParam0 == -1660945322)
	{
		return 238;
	}
	else if (iParam0 == -1943285540)
	{
		return 239;
	}
	else if (iParam0 == -1485523546 || iParam0 == -888242983)
	{
		return 240;
	}
	else if (iParam0 == 1489967196 || iParam0 == 1922255844)
	{
		return 241;
	}
	else if (iParam0 == 1102544804)
	{
		return 242;
	}
	else if (iParam0 == 710198397)
	{
		return 243;
	}
	else if (iParam0 == -1671539132)
	{
		return 244;
	}
	else if (iParam0 == Global_73804)
	{
		return 245;
	}
	else if (iParam0 == 972671128)
	{
		return 246;
	}
	else if (iParam0 == 970598228)
	{
		return 247;
	}
	else if (iParam0 == -1041692462)
	{
		return 49;
	}
	else if (iParam0 == 289313964 || iParam0 == -602287871)
	{
		return 248;
	}
	else if (iParam0 == -1845487887)
	{
		return 253;
	}
	else if (iParam0 == 1621617168)
	{
		return 254;
	}
	else if (iParam0 == 1475773103)
	{
		return 255;
	}
	else if (iParam0 == -305727417)
	{
		return 256;
	}
	else if (iParam0 == -1295027632)
	{
		return 257;
	}
	else if (iParam0 == -1930048799)
	{
		return 259;
	}
	else if (iParam0 == 2123327359)
	{
		return 260;
	}
	else if (iParam0 == 1426219628)
	{
		return 261;
	}
	else if (iParam0 == 1274868363)
	{
		return 262;
	}
	else if (iParam0 == 1203490606 || iParam0 == -432008408)
	{
		return 263;
	}
	else if (iParam0 == -1757836725)
	{
		return 264;
	}
	else if (iParam0 == -1829802492)
	{
		return 265;
	}
	else if (iParam0 == 234062309)
	{
		return 266;
	}
	else if (iParam0 == -1232836011)
	{
		return 267;
	}
	else if (iParam0 == -777172681)
	{
		return 268;
	}
	else if (iParam0 == 1887331236)
	{
		return 269;
	}
	else if (iParam0 == 1549126457)
	{
		return 270;
	}
	else if (iParam0 == 101905590)
	{
		return 271;
	}
	else if (iParam0 == -663299102)
	{
		return 272;
	}
	else if (iParam0 == 683047626)
	{
		return 273;
	}
	else if (iParam0 == 390201602)
	{
		return 274;
	}
	else if (iParam0 == 86520421)
	{
		return 275;
	}
	else if (iParam0 == 2067820283)
	{
		return 279;
	}
	else if (iParam0 == 482197771)
	{
		return 280;
	}
	else if (iParam0 == 819197656)
	{
		return 281;
	}
	else if (iParam0 == -2103821244)
	{
		return 276;
	}
	else if (iParam0 == -1071380347)
	{
		return 277;
	}
	else if (iParam0 == 741090084)
	{
		return 278;
	}
	else if (iParam0 == -2140431165)
	{
		return 282;
	}
	else if (iParam0 == 2035069708)
	{
		return 283;
	}
	else if (iParam0 == -1606187161)
	{
		return 284;
	}
	else if (iParam0 == 822018448)
	{
		return 285;
	}
	else if (iParam0 == -2115793025)
	{
		return 286;
	}
	else if (iParam0 == -1009268949)
	{
		return 287;
	}
	else if (iParam0 == -570033273)
	{
		return 288;
	}
	else if (iParam0 == 6774487)
	{
		return 289;
	}
	else if (iParam0 == -1404136503)
	{
		return 290;
	}
	else if (iParam0 == 1873600305)
	{
		return 291;
	}
	else if (iParam0 == -405626514)
	{
		return 292;
	}
	else if (iParam0 == -674927303)
	{
		return 293;
	}
	else if (iParam0 == -255678177)
	{
		return 294;
	}
	else if (iParam0 == -440768424)
	{
		return 296;
	}
	else if (iParam0 == 1491277511)
	{
		return 297;
	}
	else if (iParam0 == -609625092)
	{
		return 295;
	}
	else if (iParam0 == -1523428744)
	{
		return 298;
	}
	else if (iParam0 == -1558399629)
	{
		return 299;
	}
	else if (iParam0 == 1026149675)
	{
		return 300;
	}
	else if (iParam0 == -618617997)
	{
		return 301;
	}
	else if (iParam0 == -1289178744)
	{
		return 302;
	}
	else if (iParam0 == -1842748181)
	{
		return 303;
	}
	else if (iParam0 == -312295511)
	{
		return 304;
	}
	else if (iParam0 == -1649536104)
	{
		return 305;
	}
	else if (iParam0 == 1180875963)
	{
		return 306;
	}
	else if (iParam0 == -1590337689)
	{
		return 307;
	}
	else if (iParam0 == 682434785)
	{
		return 308;
	}
	else if (iParam0 == -1912017790)
	{
		return 309;
	}
	else if (iParam0 == 941494461)
	{
		return 310;
	}
	else if (iParam0 == 989294410)
	{
		return 311;
	}
	else if (iParam0 == -1758137366)
	{
		return 312;
	}
	else if (iParam0 == 272929391)
	{
		return 313;
	}
	else if (iParam0 == -2048333973)
	{
		return 314;
	}
	else if (iParam0 == 1034187331)
	{
		return 315;
	}
	else if (iParam0 == -239841468)
	{
		return 316;
	}
	else if (iParam0 == 627535535)
	{
		return 317;
	}
	else if (iParam0 == 1886268224)
	{
		return 318;
	}
	else if (iParam0 == 1234311532)
	{
		return 319;
	}
	else if (iParam0 == -1405937764)
	{
		return 320;
	}
	else if (iParam0 == 719660200)
	{
		return 321;
	}
	else if (iParam0 == -982130927)
	{
		return 322;
	}
	else if (iParam0 == Global_73804)
	{
		return 245;
	}
	else if (iParam0 == Global_73806)
	{
		return 324;
	}
	else if (iParam0 == 223240013)
	{
		return 325;
	}
	else if (iParam0 == 1504306544)
	{
		return 326;
	}
	else if (iParam0 == 1939284556)
	{
		return 327;
	}
	else if (iParam0 == 917809321)
	{
		return 328;
	}
	else if (iParam0 == 562680400)
	{
		return 329;
	}
	else if (iParam0 == 1897744184)
	{
		return 330;
	}
	else if (iParam0 == -32236122)
	{
		return 331;
	}
	else if (iParam0 == 884483972)
	{
		return 332;
	}
	else if (iParam0 == -1210451983)
	{
		return 333;
	}
	else if (iParam0 == -1881846085)
	{
		return 334;
	}
	else if (iParam0 == 159274291)
	{
		return 335;
	}
	else if (iParam0 == 433954513)
	{
		return 336;
	}
	else if (iParam0 == -1281684762)
	{
		return 337;
	}
	else if (iParam0 == -1763555241)
	{
		return 338;
	}
	else if (iParam0 == -749299473)
	{
		return 339;
	}
	else if (iParam0 == -975345305)
	{
		return 340;
	}
	else if (iParam0 == -1700874274)
	{
		return 341;
	}
	else if (iParam0 == -392675425)
	{
		return 342;
	}
	else if (iParam0 == 1043222410)
	{
		return 343;
	}
	else if (iParam0 == -1386191424)
	{
		return 344;
	}
	else if (iParam0 == 1565978651)
	{
		return 345;
	}
	else if (iParam0 == 1036591958)
	{
		return 346;
	}
	else if (iParam0 == -32878452)
	{
		return 347;
	}
	else if (iParam0 == -42959138)
	{
		return 348;
	}
	else if (iParam0 == -1984275979)
	{
		return 349;
	}
	else if (iParam0 == -1007528109)
	{
		return 350;
	}
	else if (iParam0 == -1523619738)
	{
		return 351;
	}
	else if (iParam0 == 1392481335)
	{
		return 352;
	}
	else if (iParam0 == -998177792)
	{
		return 353;
	}
	else if (iParam0 == 1841130506)
	{
		return 354;
	}
	else if (iParam0 == 2049897956)
	{
		return 355;
	}
	else if (iParam0 == -1242608589)
	{
		return 356;
	}
	else if (iParam0 == 1483171323)
	{
		return 358;
	}
	else if (iParam0 == 886810209)
	{
		return 359;
	}
	else if (iParam0 == -1693015116)
	{
		return 360;
	}
	else if (iParam0 == -692292317)
	{
		return 361;
	}
	else if (iParam0 == -1435527158)
	{
		return 362;
	}
	else if (iParam0 == 1181327175)
	{
		return 363;
	}
	else if (iParam0 == 1489874736)
	{
		return 364;
	}
	else if (iParam0 == -212993243)
	{
		return 365;
	}
	else if (iParam0 == 447548909)
	{
		return 366;
	}
	else if (iParam0 == 1561920505)
	{
		return 367;
	}
	else if (iParam0 == -1848994066)
	{
		return 368;
	}
	else if (iParam0 == 1741861769)
	{
		return 369;
	}
	else if (iParam0 == 1104234922)
	{
		return 370;
	}
	else if (iParam0 == 1871995513)
	{
		return 371;
	}
	else if (iParam0 == 1352136073)
	{
		return 372;
	}
	else if (iParam0 == -313185164)
	{
		return 373;
	}
	else if (iParam0 == -2079788230)
	{
		return 374;
	}
	else if (iParam0 == 600450546)
	{
		return 375;
	}
	else if (iParam0 == -410205223)
	{
		return 376;
	}
	else if (iParam0 == 867799010)
	{
		return 377;
	}
	else if (iParam0 == -1529242755)
	{
		return 378;
	}
	else if (iParam0 == 903794909)
	{
		return 379;
	}
	else if (iParam0 == -1532697517)
	{
		return 380;
	}
	else if (iParam0 == 15219735)
	{
		return 381;
	}
	else if (iParam0 == 661493923)
	{
		return 382;
	}
	else if (iParam0 == 838982985)
	{
		return 383;
	}
	else if (iParam0 == -391595372)
	{
		return 384;
	}
	else if (iParam0 == -121446169)
	{
		return 385;
	}
	else if (iParam0 == 1909189272)
	{
		return 386;
	}
	else if (iParam0 == 1617472902)
	{
		return 387;
	}
	else if (iParam0 == -1267543371)
	{
		return 388;
	}
	else if (iParam0 == 931280609)
	{
		return 389;
	}
	else if (iParam0 == 1046206681)
	{
		return 390;
	}
	else if (iParam0 == -1259134696)
	{
		return 391;
	}
	else if (iParam0 == 1115909093)
	{
		return 392;
	}
	else if (iParam0 == 1031562256)
	{
		return 393;
	}
	else if (iParam0 == -376434238)
	{
		return 394;
	}
	else if (iParam0 == -986944621)
	{
		return 395;
	}
	else if (iParam0 == -1134706562)
	{
		return 396;
	}
	else if (iParam0 == -2120700196)
	{
		return 397;
	}
	else if (iParam0 == -214906006)
	{
		return 398;
	}
	else if (iParam0 == -988501280)
	{
		return 399;
	}
	else if (iParam0 == 1254014755)
	{
		return 400;
	}
	else if (iParam0 == -726768679)
	{
		return 401;
	}
	else if (iParam0 == 1945374990)
	{
		return 403;
	}
	else if (iParam0 == 1653666139)
	{
		return 404;
	}
	else if (iParam0 == 500482303)
	{
		return 405;
	}
	else if (iParam0 == 2044532910)
	{
		return 406;
	}
	else if (iParam0 == -638562243)
	{
		return 407;
	}
	else if (iParam0 == 1692272545)
	{
		return 408;
	}
	else if (iParam0 == 2069146067)
	{
		return 409;
	}
	else if (iParam0 == -420911112)
	{
		return 410;
	}
	else if (iParam0 == 321186144)
	{
		return 411;
	}
	else if (iParam0 == -54332285)
	{
		return 412;
	}
	else if (iParam0 == 2016857647)
	{
		return 415;
	}
	else if (iParam0 == -227741703)
	{
		return 416;
	}
	else if (iParam0 == 627094268)
	{
		return 417;
	}
	else if (iParam0 == -1450650718)
	{
		return 418;
	}
	else if (iParam0 == -808831384)
	{
		return 419;
	}
	else if (iParam0 == 1337041428)
	{
		return 420;
	}
	else if (iParam0 == 850565707)
	{
		return 421;
	}
	else if (iParam0 == 884422927)
	{
		return 422;
	}
	else if (iParam0 == -1137532101)
	{
		return 423;
	}
	else if (iParam0 == -808457413)
	{
		return 424;
	}
	else if (iParam0 == -307958377)
	{
		return 413;
	}
	else if (iParam0 == 345756458)
	{
		return 414;
	}
	else if (iParam0 == -801550069)
	{
		return 425;
	}
	else if (iParam0 == 679453769)
	{
		return 426;
	}
	else if (iParam0 == 1909700336)
	{
		return 427;
	}
	else if (iParam0 == 2139203625)
	{
		return 428;
	}
	else if (iParam0 == -1890996696)
	{
		return 429;
	}
	else if (iParam0 == 2038858402)
	{
		return 430;
	}
	else if (iParam0 == -1146969353)
	{
		return 431;
	}
	else if (iParam0 == 1542143200)
	{
		return 432;
	}
	else if (iParam0 == -579747861)
	{
		return 433;
	}
	else if (iParam0 == 444994115)
	{
		return 434;
	}
	else if (iParam0 == 1637620610)
	{
		return 435;
	}
	else if (iParam0 == -755532233)
	{
		return 436;
	}
	else if (iParam0 == 540101442)
	{
		return 437;
	}
	else if (iParam0 == -1106120762)
	{
		return 438;
	}
	else if (iParam0 == -1478704292)
	{
		return 439;
	}
	else if (iParam0 == -2096690334)
	{
		return 440;
	}
	else if (iParam0 == -956048545)
	{
		return 450;
	}
	else if (iParam0 == 1886712733)
	{
		return 451;
	}
	else if (iParam0 == 728614474)
	{
		return 452;
	}
	else if (iParam0 == -1255698084)
	{
		return 453;
	}
	else if (iParam0 == 1074326203)
	{
		return 454;
	}
	else if (iParam0 == -784816453)
	{
		return 455;
	}
	else if (iParam0 == 534258863)
	{
		return 456;
	}
	else if (iParam0 == 1641462412)
	{
		return 457;
	}
	else if (iParam0 == -591651781)
	{
		return 458;
	}
	else if (iParam0 == -49115651)
	{
		return 441;
	}
	else if (iParam0 == 1456744817)
	{
		return 442;
	}
	else if (iParam0 == 1591739866)
	{
		return 443;
	}
	else if (iParam0 == -507495760)
	{
		return 444;
	}
	else if (iParam0 == -1168952148)
	{
		return 445;
	}
	else if (iParam0 == 1279262537)
	{
		return 446;
	}
	else if (iParam0 == -1566607184)
	{
		return 447;
	}
	else if (iParam0 == -331467772)
	{
		return 448;
	}
	else if (iParam0 == -286046740)
	{
		return 449;
	}
	else if (iParam0 == 1044193113)
	{
		return 459;
	}
	else if (iParam0 == 686471183)
	{
		return 460;
	}
	else if (iParam0 == -941272559)
	{
		return 461;
	}
	else if (iParam0 == -1829436850)
	{
		return 462;
	}
	else if (iParam0 == -682108547)
	{
		return 463;
	}
	else if (iParam0 == 722226637)
	{
		return 464;
	}
	else if (iParam0 == 1854776567)
	{
		return 465;
	}
	else if (iParam0 == 1862507111)
	{
		return 466;
	}
	else if (iParam0 == -882629065)
	{
		return 467;
	}
	else if (iParam0 == -362150785)
	{
		return 468;
	}
	else if (iParam0 == 310284501)
	{
		return 469;
	}
	else if (iParam0 == 916547552)
	{
		return 470;
	}
	else if (iParam0 == -1804415708)
	{
		return 471;
	}
	else if (iParam0 == 1934384720)
	{
		return 472;
	}
	else if (iParam0 == -1349095620)
	{
		return 473;
	}
	else if (iParam0 == -208911803)
	{
		return 474;
	}
	else if (iParam0 == -324618589)
	{
		return 475;
	}
	else if (iParam0 == -664141241)
	{
		return 476;
	}
	else if (iParam0 == 1323778901)
	{
		return 477;
	}
	else if (iParam0 == -1620126302)
	{
		return 478;
	}
	else if (iParam0 == -447711397)
	{
		return 479;
	}
	else if (iParam0 == 1938952078)
	{
		return 480;
	}
	else if (iParam0 == -907477130)
	{
		return 481;
	}
	else if (iParam0 == -1987130134)
	{
		return 482;
	}
	else if (iParam0 == 1747439474)
	{
		return 483;
	}
	else if (iParam0 == 469291905)
	{
		return 484;
	}
	else if (iParam0 == -48031959)
	{
		return 485;
	}
	else if (iParam0 == 394110044)
	{
		return 488;
	}
	else if (iParam0 == 1284356689)
	{
		return 486;
	}
	else if (iParam0 == -1254331310)
	{
		return 487;
	}
	else if (iParam0 == 301304410)
	{
		return 489;
	}
	else if (iParam0 == 1456336509)
	{
		return 490;
	}
	else if (iParam0 == 340154634)
	{
		return 491;
	}
	else if (iParam0 == -1132721664)
	{
		return 492;
	}
	else if (iParam0 == -1960756985)
	{
		return 493;
	}
	else if (iParam0 == 960812448)
	{
		return 494;
	}
	else if (iParam0 == 83136452)
	{
		return 495;
	}
	else if (iParam0 == 740289177)
	{
		return 496;
	}
	else if (iParam0 == 2031587082)
	{
		return 497;
	}
	else if (iParam0 == 1693751655)
	{
		return 498;
	}
	else if (iParam0 == -834353991)
	{
		return 499;
	}
	else if (iParam0 == 872704284)
	{
		return 500;
	}
	else if (iParam0 == 987469656)
	{
		return 501;
	}
	else if (iParam0 == -1756021720)
	{
		return 502;
	}
	else if (iParam0 == 1118611807)
	{
		return 503;
	}
	else if (iParam0 == 409049982)
	{
		return 504;
	}
	else if (iParam0 == 408825843)
	{
		return 505;
	}
	else if (iParam0 == -2098954619)
	{
		return 506;
	}
	else if (iParam0 == 2134119907)
	{
		return 507;
	}
	else if (iParam0 == 67753863)
	{
		return 508;
	}
	else if (iParam0 == -631322662)
	{
		return 509;
	}
	else if (iParam0 == -838099166)
	{
		return 510;
	}
	else if (iParam0 == -1810806490)
	{
		return 511;
	}
	else if (iParam0 == -1358197432)
	{
		return 512;
	}
	else if (iParam0 == 1492612435)
	{
		return 513;
	}
	else if (iParam0 == 1181339704)
	{
		return 514;
	}
	else if (iParam0 == -1728685474)
	{
		return 515;
	}
	else if (iParam0 == 1830407356)
	{
		return 517;
	}
	else if (iParam0 == -2124201592)
	{
		return 516;
	}
	return -1;
}

int func_672(int iParam0)
{
	if (func_362(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == -1590337689 || iParam0 == 682434785) || iParam0 == -312295511) || iParam0 == -1649536104) || iParam0 == 941494461) || iParam0 == 1180875963) || iParam0 == 989294410) || iParam0 == -1912017790) || iParam0 == -1881846085) || iParam0 == 1356124575) || iParam0 == -1924433270) || iParam0 == -1435527158) || iParam0 == -692292317) || iParam0 == -1693015116) || iParam0 == 1489874736) || iParam0 == 886810209) || iParam0 == 1483171323) || iParam0 == 219613597) || iParam0 == 1945374990) || iParam0 == 1653666139) || iParam0 == 2069146067)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1283517198:
		case 1560980623:
		case 1171614426:
		case 837858166:
		case -1207431159:
		case -1476447243:
		case -1807623979:
		case -399841706:
		case -823509173:
		case 1074326203:
		case 630371791:
		case 2053223216:
		case 1824333165:
		case 850991848:
		case -150975354:
		case -613725916:
		case 524108981:
		case -1987130134:
		case -233098306:
		case 121658888:
		case 444171386:
		case 1886712733:
		case -1346687836:
		case -1743316013:
		case 893081117:
		case 1132262048:
		case -713569950:
		case 788747387:
		case 745926877:
		case 1147287684:
		case -537896628:
		case 1876516712:
		case -50547061:
		case 1621617168:
		case 1394036463:
		case 368211810:
		case -2072933068:
		case 321739290:
		case -644710429:
		case -1006919392:
		case 1682114128:
		case 1033245328:
		case 276773164:
		case 509498602:
		case -2140210194:
		case -884690486:
		case -901163259:
		case -2130482718:
		case 534258863:
		case 970356638:
		case -1241712818:
		case 1127131465:
		case -1647941228:
		case 1938952078:
		case -836512833:
		case 1353720154:
		case 1491375716:
		case 1030400667:
		case 184361638:
		case 920453016:
		case 240201337:
		case 642617954:
		case 744705981:
		case 1949211328:
		case -1745203402:
		case 1019737494:
		case 444583674:
		case 1518533038:
		case 970385471:
		case -1860900134:
		case 1058115860:
		case 861409633:
		case -120287622:
		case -1281684762:
		case -114627507:
		case 621481054:
		case -1214293858:
		case -1746576111:
		case 1233534620:
		case -1043459709:
		case -1660661558:
		case -748008636:
		case 868868440:
		case -845961253:
		case 165154707:
		case -784816453:
		case 475220373:
		case 1783355638:
		case 904750859:
		case -1050465301:
		case -2052737935:
		case 569305213:
		case -2007026063:
		case -2137348917:
		case 2046537925:
		case -34623805:
		case 456714581:
		case -1536924937:
		case -1779120616:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 353883353:
		case -119658072:
		case 943752001:
		case 2112052861:
		case 741586030:
		case -488123221:
		case 356391690:
		case 390902130:
		case 1933662059:
		case -1098802077:
		case 782665360:
		case -1205689942:
		case -845979911:
		case -1705304628:
		case -1776615689:
		case 734217681:
		case -82626025:
		case -1700801569:
		case -1030275036:
		case -616331036:
		case -1214505995:
		case -1683328900:
		case 1922257928:
		case 1044954915:
		case 231083307:
		case 728614474:
		case 400514754:
		case 1747439474:
		case -214455498:
		case -1961627517:
		case -2122757008:
		case 771711535:
		case -1066334226:
		case -282946103:
		case -339587598:
		case 1075432268:
		case 1951180813:
		case -730904777:
		case 1956216962:
		case 586013744:
		case -956048545:
		case -2096818938:
		case -1323100960:
		case -442313018:
		case 48339065:
		case -947761570:
		case 1981688531:
		case 1070967343:
		case 1941029835:
		case 2078290630:
		case 1784254509:
		case 2091594960:
		case 1641462412:
		case -2076478498:
		case 1445631933:
		case 2016027501:
		case -877478386:
		case -1579533167:
		case -2058878099:
		case 712162987:
		case 1917016601:
		case -1255698084:
		case -1352468814:
		case 290013743:
		case -1770643266:
		case 516990260:
		case 887537515:
		case 2132890591:
		case -1600252419:
		case -1673356438:
		case 1077420264:
		case 1341619767:
		case 2025593404:
		case 867467158:
		case -311022263:
		case 437538602:
		case 908897389:
		case 1448677353:
		case 710198397:
		case -1671539132:
		case 1543134283:
		case -827162039:
		case 777714999:
		case -305727417:
		case 387748548:
		case 177270108:
			return 0;
			break;
	}
	if (((!unk_0x8E39AC3C76C8AA58(iParam0) && !unk_0x7D8B2A8F9EA82DB7(iParam0)) && !unk_0xD1CC995EE5EB1EC1(iParam0)) && !unk_0xAD09C9A4B56FA133(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -901163259;
		
		case 1:
			return 408192225;
		
		case 2:
			return -1168952148;
		
		case 3:
			return -433375717;
		
		case 4:
			return -1673356438;
		
		case 5:
			return -1089039904;
		
		case 6:
			return 418536135;
		
		case 7:
			return -1405937764;
		
		case 8:
			return 719660200;
		
		case 9:
			return -1043459709;
		
		case 10:
			return 822018448;
		
		case 11:
			return 1078682497;
		
		case 12:
			return -631760477;
		
		case 13:
			return -1558399629;
		
		case 14:
			return 972671128;
		
		case 15:
			return 931280609;
		
		case 16:
			return 1051415893;
		
		case 17:
			return -1106353882;
		
		case 18:
			return -121446169;
		
		case 19:
			return 1617472902;
		
		case 20:
			return -2096690334;
		
		case 21:
			return -915704871;
		
		case 22:
			return -1746576111;
		
		case 23:
			return 861409633;
		
		case 24:
			return -401643538;
		
		case 25:
			return -142942670;
		
		case 26:
			return 2035069708;
		
		case 27:
			return -2030171296;
		
		case 28:
			return 1203490606;
		
		case 29:
			return 1123216662;
		
		case 30:
			return -2122757008;
		
		case 31:
			return -644710429;
		
		case 32:
			return 338562499;
		
		case 33:
			return -1297672541;
		
		case 34:
			return 349315417;
		
		case 35:
			return -5153954;
		
		case 36:
			return 833469436;
		
		case 37:
			return 75131841;
		
		case 38:
			return 400514754;
		
		case 39:
			return 2072687711;
		
		case 40:
			return -498054846;
		
		case 41:
			return 330661258;
		
		case 42:
			return 509498602;
		
		case 43:
			return -1205801634;
		
		case 44:
			return -1696146015;
		
		case 45:
			return 1549126457;
		
		case 46:
			return -1622444098;
		
		case 47:
			return 989294410;
		
		case 48:
			return 767087018;
		
		case 49:
			return -1995326987;
		
		case 50:
			return -988501280;
		
		case 51:
			return 1737773231;
		
		case 52:
			return 841808271;
		
		case 53:
			return 108773431;
		
		case 54:
			return 1011753235;
		
		case 55:
			return -1934452204;
		
		case 56:
			return -1461482751;
		
		case 57:
			return -1372848492;
		
		case 58:
			return 1032823388;
		
		case 59:
			return -1485523546;
		
		case 60:
			return 384071873;
		
		case 61:
			return -1041692462;
		
		case 62:
			return 544021352;
		
		case 63:
			return -1606187161;
		
		case 64:
			return 349605904;
		
		case 65:
			return -239841468;
		
		case 66:
			return 16646064;
		
		case 67:
			return 627535535;
		
		case 68:
			return -1045541610;
		
		case 69:
			return -1009268949;
		
		case 70:
			return -89291282;
		
		case 71:
			return 86520421;
		
		case 72:
			return -391594584;
		
		case 73:
			return 142944341;
		
		case 74:
			return 37348240;
		
		case 75:
			return -2064372143;
		
		case 76:
			return -431692672;
		
		case 77:
			return 1265391242;
		
		case 78:
			return -440768424;
		
		case 79:
			return -591610296;
		
		case 80:
			return -511601230;
		
		case 81:
			return -349601129;
		
		case 82:
			return 1923400478;
		
		case 83:
			return -1269889662;
		
		case 84:
			return -1523428744;
		
		case 85:
			return -1255452397;
		
		case 86:
			return -1193103848;
		
		case 87:
			return 723973206;
		
		case 88:
			return -624529134;
		
		case 89:
			return 1337041428;
		
		case 90:
			return -808457413;
		
		case 91:
			return -1137532101;
		
		case 92:
			return 729783779;
		
		case 93:
			return 1753414259;
		
		case 94:
			return -1842748181;
		
		case 95:
			return 1039032026;
		
		case 96:
			return 11251904;
		
		case 97:
			return 92612664;
		
		case 98:
			return -589178377;
		
		case 99:
			return -2119578145;
		
		case 100:
			return -304802106;
		
		case 101:
			return 80636076;
		
		case 102:
			return 525509695;
		
		case 103:
			return -1800170043;
		
		case 104:
			return 464687292;
		
		case 105:
			return -682211828;
		
		case 106:
			return -1450650718;
		
		case 107:
			return -377465520;
		
		case 108:
			return 1909141499;
		
		case 109:
			return -1177863319;
		
		case 110:
			return -1030275036;
		
		case 111:
			return 886934177;
		
		case 112:
			return -2140431165;
		
		case 113:
			return 1126868326;
		
		case 114:
			return 301427732;
		
		case 115:
			return 1777363799;
		
		case 116:
			return -114291515;
		
		case 117:
			return -891462355;
		
		case 118:
			return -1685021548;
		
		case 119:
			return 970598228;
		
		case 120:
			return -634879114;
		
		case 121:
			return -1670998136;
		
		case 122:
			return 1127861609;
		
		case 123:
			return -1233807380;
		
		case 124:
			return -400295096;
		
		case 125:
			return -893578776;
		
		case 126:
			return -227741703;
		
		case 127:
			return 1507916787;
		
		case 128:
			return 1672195559;
		
		case 129:
			return -909201658;
		
		case 130:
			return -1150599089;
		
		case 131:
			return 2016857647;
		
		case 132:
			return -2128233223;
		
		case 133:
			return -1453280962;
		
		case 134:
			return 788045382;
		
		case 135:
			return 523724515;
		
		case 136:
			return 55628203;
		
		case 137:
			return -186537451;
		
		case 138:
			return 448402357;
		
		case 139:
			return 1131912276;
		
		case 140:
			return -310465116;
		
		default:
	}
	return 0;
}

int func_674()
{
	iVar142 = 0;
	iVar143 = 0;
	while (iVar143 < 141)
	{
		iVar0[iVar143] = iVar143;
		iVar142 = (iVar142 + func_675(iVar0[iVar143]));
		iVar143++;
	}
	iVar144 = unk_0xA0A5F9CC633A6814(0, iVar142);
	iVar143 = 0;
	while (iVar143 < 141)
	{
		if (iVar144 <= func_675(iVar0[iVar143]))
		{
			return iVar0[iVar143];
		}
		else
		{
			iVar144 = (iVar144 - func_675(iVar0[iVar143]));
		}
		iVar143++;
	}
	return -1;
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_676(-901163259, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 1:
		case 2:
		case 3:
			return Global_262145.f_26072;
			break;
		
		case 4:
			if (func_676(-1673356438, 0))
			{
				return 0;
			}
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return Global_262145.f_26072;
			break;
		
		case 9:
			if (func_676(-1043459709, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
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
			return Global_262145.f_26072;
			break;
		
		case 22:
			if (func_676(-1746576111, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 23:
			if (func_676(861409633, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return Global_262145.f_26072;
			break;
		
		case 30:
			if (func_676(-2122757008, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 31:
			if (func_676(-644710429, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
			return Global_262145.f_26072;
			break;
		
		case 37:
			return Global_262145.f_26073;
			break;
		
		case 38:
			if (func_676(400514754, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26073;
			}
			break;
		
		case 39:
		case 40:
		case 41:
			return Global_262145.f_26073;
			break;
		
		case 42:
			if (func_676(400514754, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26073;
			}
			break;
		
		case 43:
		case 44:
		case 45:
			return Global_262145.f_26073;
			break;
		
		case 46:
			return Global_262145.f_26074;
			break;
		
		case 47:
			if (func_535(989294410, -1))
			{
				return Global_262145.f_26074;
			}
			else
			{
				return 0;
			}
			break;
		
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
		case 60:
		case 61:
		case 62:
		case 63:
			return Global_262145.f_26073;
			break;
		
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
			return Global_262145.f_26074;
			break;
		
		case 110:
			if (func_676(-1030275036, 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
			return Global_262145.f_26074;
			break;
		
		case 122:
			if (func_535(1127861609, -1))
			{
				return Global_262145.f_26074;
			}
			else
			{
				return 0;
			}
			break;
		
		case 123:
			if (func_535(-1233807380, -1))
			{
				return Global_262145.f_26074;
			}
			else
			{
				return 0;
			}
			break;
		
		case 124:
			if (func_535(-400295096, -1))
			{
				return Global_262145.f_26074;
			}
			else
			{
				return 0;
			}
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return Global_262145.f_26074;
			break;
		
		case 137:
			if (func_535(-186537451, -1))
			{
				return Global_262145.f_26074;
			}
			else
			{
				return 0;
			}
			break;
		
		case 138:
			if (func_535(448402357, -1))
			{
				return Global_262145.f_26074;
			}
			else
			{
				return 0;
			}
			break;
		
		case 139:
			if (func_535(1131912276, -1))
			{
				return Global_262145.f_26074;
			}
			else
			{
				return 0;
			}
			break;
		
		case 140:
			return Global_262145.f_26074;
			break;
	}
	return 0;
}

int func_676(int iParam0, int iParam1)
{
	iVar0 = func_671(iParam0);
	iVar1 = func_649(iVar0, iParam1);
	if (iVar1 != -1)
	{
		return func_646(iVar1);
	}
	return 0;
}

int func_677()
{
	iVar8 = 0;
	iVar9 = 0;
	while (iVar9 < 7)
	{
		iVar0[iVar9] = iVar9;
		iVar8 = (iVar8 + func_678(iVar0[iVar9]));
		iVar9++;
	}
	iVar10 = unk_0xA0A5F9CC633A6814(0, iVar8);
	iVar9 = 0;
	while (iVar9 < 7)
	{
		if (iVar10 <= func_678(iVar0[iVar9]))
		{
			return iVar0[iVar9];
		}
		else
		{
			iVar10 = (iVar10 - func_678(iVar0[iVar9]));
		}
		iVar9++;
	}
	return -1;
}

int func_678(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26065;
		
		case 1:
			return Global_262145.f_26066;
		
		case 2:
			return Global_262145.f_26067;
		
		case 3:
			return Global_262145.f_26068;
		
		case 4:
			return Global_262145.f_26069;
		
		case 5:
			return Global_262145.f_26070;
		
		case 6:
			return Global_262145.f_26071;
		
		default:
	}
	return 0;
}

int func_679(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		iVar0 = func_708(iParam3);
	}
	else if (iParam3 == -1)
	{
		iVar1 = func_706();
		iVar0 = func_705(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam4)
		{
			StringCopy(sParam1, func_704(), 64);
		}
		if (func_680(iVar0, 3, uParam2, 4, -1))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

int func_680(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
	}
	else if (!func_703(iParam1))
	{
	}
	else
	{
		iVar0 = func_162();
		iVar1 = (Global_262145.f_26395 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_701();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_700(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_162() - Global_1696044);
			func_699(iVar4, 1);
			func_697();
			func_695();
			Global_1696044 = (Global_1696044 + iVar4);
			if (iParam1 == 0)
			{
				func_689(iVar4);
				Global_2460613 = 1;
			}
			else if (iParam1 == 3)
			{
				func_684(iVar4);
				if (iVar4 >= Global_262145.f_26403)
				{
					Global_2460612 = 1;
				}
				else if (iVar4 >= Global_262145.f_26402)
				{
					Global_2460613 = 1;
				}
			}
			Var5 = func_683(iParam1);
			Var5.f_1 = func_682(iParam1, iParam3, iParam4);
			if (func_681(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x62F8C2EDB26F57B3(-1) + unk_0x3A6D64D2A1228113());
			Var5.f_6 = Global_1696044;
			unk_0xB1C8602C4408B407(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_682(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_683(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_684(int iParam0)
{
	iVar0 = func_688();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_687();
	if (iVar0 == 0)
	{
		func_686();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_685();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26399)
	{
		func_140(-1274895349, Global_262145.f_26399);
		func_685();
		Global_2460613 = 1;
	}
	else
	{
		func_140(-1274895349, (iVar2 + iParam0));
	}
}

void func_685()
{
	func_686();
}

void func_686()
{
	func_140(2026157635, unk_0xDD0E7998AE8AD485());
}

int func_687()
{
	return func_24(-1274895349);
}

int func_688()
{
	return func_24(2026157635);
}

void func_689(int iParam0)
{
	iVar0 = func_694();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_693();
	if (iVar0 == 0)
	{
		func_692();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26396)
	{
		func_691();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_690()
	{
		func_140(-1127742296, func_690());
		func_691();
	}
	else
	{
		func_140(-1127742296, (iVar2 + iParam0));
	}
}

int func_690()
{
	if (func_168(unk_0xD803B885F5E47A62()))
	{
		return Global_262145.f_26191;
	}
	return Global_262145.f_26190;
}

void func_691()
{
	func_692();
}

void func_692()
{
	func_140(67083818, unk_0xDD0E7998AE8AD485());
}

int func_693()
{
	return func_24(-1127742296);
}

int func_694()
{
	return func_24(67083818);
}

void func_695()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6))
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 9);
		func_696(&Global_1696082, 0, 0);
	}
}

void func_696(var uParam0, bool bParam1, bool bParam2)
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

void func_697()
{
	if (func_698())
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 1);
	}
}

bool func_698()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6) || unk_0xEAE0D21A50E6C7F4(Global_1696079, 5));
}

void func_699(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&Global_1696079, 6);
	Global_1696080 = iParam0;
	Global_1696081 = iParam1;
}

bool func_700(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_681(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_113())
	{
		if (*uParam0 == 0)
		{
			if (func_114() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_683(iParam1);
			iVar5 = -22148635;
			if (func_703(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_149(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_149(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_144())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_143(func_114()))
			{
				if (func_142(func_114()) == 2)
				{
					unk_0x7A87D9FAFCB10ADC(func_115(func_114()));
					if (func_703(iParam1))
					{
						unk_0xBAAADC9CD356B660(iVar0, iParam2);
					}
					else
					{
						unk_0xDB46ED1F703FD834(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_109(func_114());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 0))
	{
		if (func_703(iParam1))
		{
			unk_0xBAAADC9CD356B660(iVar0, iParam2);
		}
		else
		{
			unk_0xDB46ED1F703FD834(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

int func_701()
{
	iVar0 = (func_690() - func_693());
	iVar1 = (Global_262145.f_26395 - func_162());
	iVar2 = func_702();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_702()
{
	iVar0 = func_690();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0xECB8E23DD6EEDD19())
	{
		if (unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x3A6D64D2A1228113() + unk_0x62F8C2EDB26F57B3(-1));
		}
	}
	else if (unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x98DF7171A5F240EC();
	}
	return iVar1;
}

int func_703(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_704()
{
	return "CAS_LW_MCI1";
}

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26417;
		
		case 1:
			return Global_262145.f_26418;
		
		case 2:
			return Global_262145.f_26415;
		
		case 3:
			return Global_262145.f_26416;
		
		case 4:
			return Global_262145.f_26413;
		
		case 5:
			return Global_262145.f_26414;
		
		default:
	}
	return 0;
}

int func_706()
{
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		iVar0[iVar8] = iVar8;
		iVar7 = (iVar7 + func_707(iVar0[iVar8]));
		iVar8++;
	}
	iVar9 = unk_0xA0A5F9CC633A6814(0, iVar7);
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (iVar9 <= func_707(iVar0[iVar8]))
		{
			return iVar0[iVar8];
		}
		else
		{
			iVar9 = (iVar9 - func_707(iVar0[iVar8]));
		}
		iVar8++;
	}
	return -1;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26074;
		
		case 1:
			return Global_262145.f_26074;
		
		case 2:
			return Global_262145.f_26073;
		
		case 3:
			return Global_262145.f_26073;
		
		case 4:
			return Global_262145.f_26072;
		
		case 5:
			return Global_262145.f_26072;
		
		default:
	}
	return 0;
}

int func_708(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 10000;
		
		case 14:
			return 15000;
		
		case 15:
			return 20000;
		
		case 16:
			return 25000;
		
		default:
	}
	return 0;
}

int func_709(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_721(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_719();
		iVar0 = func_718(iVar1);
	}
	if (iVar0 > 0)
	{
		if (func_113())
		{
			func_714(1261538664, iVar0, &uVar2, 0, 0, 0);
			if (bParam3)
			{
				StringCopy(sParam1, func_713(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
		else
		{
			func_710(iVar0, 0);
			unk_0x2DF294D394338472(iVar0, 707098906);
			if (bParam3)
			{
				StringCopy(sParam1, func_713(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

void func_710(int iParam0, int iParam1)
{
	func_712(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_711(iParam0, 0);
	}
}

void func_711(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_712(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_4 = iVar1;
	Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_3 = (Global_1590535[unk_0xD803B885F5E47A62()].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_711(iVar1, 0);
	}
}

char* func_713()
{
	return "CAS_LW_MC1";
}

void func_714(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_113())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_715(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_715(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_715(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_715(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_715(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_113())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_18()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_152(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_717(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_716(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_716(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_109(iParam0);
	}
}

void func_717(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26424;
		
		case 1:
			return Global_262145.f_26425;
		
		case 2:
			return Global_262145.f_26426;
		
		case 3:
			return Global_262145.f_26421;
		
		case 4:
			return Global_262145.f_26422;
		
		case 5:
			return Global_262145.f_26423;
		
		case 6:
			return Global_262145.f_26419;
		
		case 7:
			return Global_262145.f_26420;
		
		default:
	}
	return 0;
}

int func_719()
{
	iVar9 = 0;
	iVar10 = 0;
	while (iVar10 < 8)
	{
		iVar0[iVar10] = iVar10;
		iVar9 = (iVar9 + func_720(iVar0[iVar10]));
		iVar10++;
	}
	iVar11 = unk_0xA0A5F9CC633A6814(0, iVar9);
	iVar10 = 0;
	while (iVar10 < 8)
	{
		if (iVar11 <= func_720(iVar0[iVar10]))
		{
			return iVar0[iVar10];
		}
		else
		{
			iVar11 = (iVar11 - func_720(iVar0[iVar10]));
		}
		iVar10++;
	}
	return -1;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26074;
		
		case 1:
			return Global_262145.f_26074;
		
		case 2:
			return Global_262145.f_26074;
		
		case 3:
			return Global_262145.f_26073;
		
		case 4:
			return Global_262145.f_26073;
		
		case 5:
			return Global_262145.f_26073;
		
		case 6:
			return Global_262145.f_26072;
		
		case 7:
			return Global_262145.f_26072;
		
		default:
	}
	return 0;
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 20000;
		
		case 10:
			return 30000;
		
		case 11:
			return 40000;
		
		case 12:
			return 50000;
		
		default:
	}
	return 0;
}

int func_722(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_729(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_727();
		iVar0 = func_726(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam3)
		{
			StringCopy(sParam1, func_725(), 64);
		}
		*uParam0 = iVar0;
		func_724();
		func_192(0, unk_0x16F2683693E537C9(), func_723(iParam2), -1827353931, 1223799452, iVar0, 1, -1, 0, 0, 0);
		return 1;
	}
	return 0;
}

char* func_723(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "LUCKY WHEEL RP2500";
		
		case 5:
			return "LUCKY WHEEL RP5000";
		
		case 6:
			return "LUCKY WHEEL RP7500";
		
		case 7:
			return "LUCKY WHEEL RP10K";
		
		case 8:
			return "LUCKY WHEEL RP15K";
		
		default:
	}
	return "UNKNOWN";
}

void func_724()
{
	Global_2462221 = 1;
}

char* func_725()
{
	return "CAS_LW_MRP1";
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26411;
		
		case 1:
			return Global_262145.f_26412;
		
		case 2:
			return Global_262145.f_26409;
		
		case 3:
			return Global_262145.f_26410;
		
		case 4:
			return Global_262145.f_26407;
		
		case 5:
			return Global_262145.f_26408;
		
		default:
	}
	return 0;
}

int func_727()
{
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		iVar0[iVar8] = iVar8;
		iVar7 = (iVar7 + func_728(iVar0[iVar8]));
		iVar8++;
	}
	iVar9 = unk_0xA0A5F9CC633A6814(0, iVar7);
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (iVar9 <= func_728(iVar0[iVar8]))
		{
			return iVar0[iVar8];
		}
		else
		{
			iVar9 = (iVar9 - func_728(iVar0[iVar8]));
		}
		iVar8++;
	}
	return -1;
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26074;
		
		case 1:
			return Global_262145.f_26074;
		
		case 2:
			return Global_262145.f_26073;
		
		case 3:
			return Global_262145.f_26073;
		
		case 4:
			return Global_262145.f_26072;
		
		case 5:
			return Global_262145.f_26072;
		
		default:
	}
	return 0;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 2500;
		
		case 5:
			return 5000;
		
		case 6:
			return 7500;
		
		case 7:
			return 10000;
		
		case 8:
			return 15000;
		
		default:
	}
	return 0;
}

int func_730(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_735(bParam3);
		if (iVar0 != -1)
		{
			if (func_734())
			{
				func_187(func_732(unk_0x12AB0310C2281427(func_733(iVar0))), 1, -1, 1);
				StringCopy(sParam0, func_733(iVar0), 64);
				return 1;
			}
			else if (!func_731(iVar0))
			{
				func_187(func_732(unk_0x12AB0310C2281427(func_733(iVar0))), 1, -1, 1);
				StringCopy(sParam0, func_733(iVar0), 64);
				return 1;
			}
		}
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_735(bParam3);
		if (iVar1 != -1)
		{
			if (func_734())
			{
				unk_0x0674E58A79778E99(iParam1, 19);
				StringCopy(sParam0, func_733(iVar1), 64);
				return 0;
			}
			else if (!func_731(iVar1))
			{
				func_187(func_732(unk_0x12AB0310C2281427(func_733(iVar1))), 1, -1, 1);
				StringCopy(sParam0, func_733(iVar1), 64);
				return 1;
			}
		}
	}
	return 0;
}

bool func_731(int iParam0)
{
	return func_496(func_732(unk_0x12AB0310C2281427(func_733(iParam0))), -1, -1);
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 1436451705:
			return 26970;
		
		case 439355441:
			return 26971;
		
		case 1512967718:
			return 26972;
		
		case -2066046545:
			return 26973;
		
		case 1871148749:
			return 26974;
		
		case 1423285332:
			return 26975;
		
		case 1199033197:
			return 26976;
		
		case 1210095949:
			return 26977;
		
		case 470657733:
			return 26978;
		
		case 45463184:
			return 26979;
		
		case -1811256960:
			return 26979;
		
		case 1396642220:
			return 26980;
		
		case 217769821:
			return 26981;
		
		case 1946801656:
			return 26982;
		
		case 1348283400:
			return 26983;
		
		case -211022504:
			return 26984;
		
		case 549611408:
			return 26985;
		
		case -1048043546:
			return 26986;
		
		case 767240057:
			return 26987;
		
		case -434274826:
			return 26988;
		
		case -2056056404:
			return 26989;
		
		case 1646781070:
			return 26990;
		
		case -1153506760:
			return 26991;
		
		case 1699990915:
			return 26992;
		
		case -1482149095:
			return 26993;
		
		case -1396600463:
			return 26994;
		
		case -1333541680:
			return 26995;
		
		case -567566297:
			return 26996;
		
		case -1136219783:
			return 26997;
		
		case -827410317:
			return 26998;
		
		case 1182011705:
			return 26999;
		
		case -938004743:
			return 27000;
		
		case 440842954:
			return 27001;
		
		case 838506760:
			return 27001;
		
		case -1708271834:
			return 27002;
		
		case 573367806:
			return 27003;
		
		case -1146312016:
			return 27004;
		
		case -750728616:
			return 27005;
		
		case -247904379:
			return 27006;
		
		case 1384042054:
			return 27007;
		
		case 1999475243:
			return 27008;
		
		case 926596245:
			return 27009;
		
		case -1848367481:
			return 27010;
		
		case -1803247262:
			return 27010;
		
		case -159903554:
			return 27011;
		
		case -1563440499:
			return 27012;
		
		case 1117115207:
			return 27013;
		
		case -488977534:
			return 27014;
		
		case 1111421610:
			return 27015;
		
		case -1958122293:
			return 27016;
		
		case 901989747:
			return 27017;
		
		case -1100079469:
			return 27018;
		
		case -1270431120:
			return 27019;
		
		case 605265254:
			return 27020;
		
		case -132515042:
			return 27021;
		
		case 1354194829:
			return 27022;
		
		case 1586867035:
			return 27023;
		
		case -1731526762:
			return 27024;
		
		case -545128932:
			return 27025;
		
		case -1246019150:
			return 27026;
		
		case -698872931:
			return 27027;
		
		case 203813433:
			return 27028;
		
		case -1577422375:
			return 27029;
		
		case 1889450785:
			return 27030;
		
		case -111410208:
			return 27031;
		
		case -1198246502:
			return 27032;
		
		case 287209133:
			return 27033;
		
		case -124937599:
			return 27034;
		
		case -885880895:
			return 27035;
		
		case -2106125641:
			return 27035;
		
		case 683814967:
			return 27036;
		
		case -1953726030:
			return 27037;
		
		case -1545864427:
			return 27038;
		
		case -292818450:
			return 27039;
		
		case 536908682:
			return 27040;
		
		case 428622415:
			return 27041;
		
		case 554527616:
			return 27042;
		
		case -1564790417:
			return 27043;
		
		case 1028863887:
			return 27044;
		
		case -1908459422:
			return 27045;
		
		case 1178742036:
			return 27046;
		
		case -1054291505:
			return 27047;
		
		case -802061066:
			return 27048;
		
		case -141251565:
			return 27049;
		
		case 432795777:
			return 27050;
		
		case -236197211:
			return 27051;
		
		case -1155090824:
			return 27052;
		
		case -389516474:
			return 27053;
		
		case 1934704239:
			return 27054;
		
		case 1100642551:
			return 27055;
		
		case 742439928:
			return 27056;
		
		case 1525574773:
			return 27057;
		
		case 1594722077:
			return 27058;
		
		case -211527520:
			return 27059;
		
		case 1814451271:
			return 27060;
		
		case -2129160580:
			return 27061;
		
		case -371315730:
			return 27062;
		
		case 1071454913:
			return 27063;
		
		case -2140383069:
			return 27064;
		
		case -451949883:
			return 27065;
		
		case -1671277622:
			return 27066;
		
		case 263633168:
			return 27067;
		
		case 1819862242:
			return 27068;
		
		case 1717069394:
			return 27069;
		
		case 1575453644:
			return 27070;
		
		case -1743547133:
			return 27071;
		
		case 938189639:
			return 27072;
		
		case 515429915:
			return 27073;
		
		case 295146302:
			return 27074;
		
		case 1249081792:
			return 27075;
		
		case 1314232490:
			return 27076;
		
		case 2091337530:
			return 27077;
		
		case 572834473:
			return 27078;
		
		case 202917910:
			return 27079;
		
		case -646852824:
			return 27080;
		
		case -905176471:
			return 27081;
		
		case -2111578974:
			return 27082;
		
		case -1767373458:
			return 27083;
		
		case -777211037:
			return 27084;
		
		case -1077066219:
			return 27085;
		
		case -1649792514:
			return 27086;
		
		case 999687:
			return 27087;
		
		case -706446153:
			return 27088;
		
		case 1446655494:
			return 27120;
		
		case -29489557:
			return 27121;
		
		case 1907813631:
			return 27122;
		
		case -1104607682:
			return 27123;
		
		case 802679194:
			return 27124;
		
		case -108266237:
			return 27125;
		
		case -883777391:
			return 27126;
		
		case -1609398199:
			return 27127;
		
		case -1140765579:
			return 27128;
		
		case -1372049181:
			return 27129;
		
		case -1603496628:
			return 27130;
		
		case 308640072:
			return 27131;
		
		case 74374491:
			return 27132;
		
		case 1026674400:
			return 27133;
		
		case -410770554:
			return 27134;
		
		case 559814457:
			return 27135;
		
		case 1242982569:
			return 27136;
		
		case -2080678794:
			return 27137;
		
		case -1998915058:
			return 27138;
		
		case 1758900608:
			return 27139;
		
		case 1465552520:
			return 27140;
		
		case 871876547:
			return 27141;
		
		case 1233646299:
			return 27142;
		
		case 637217730:
			return 27143;
		
		case 323028558:
			return 27144;
		
		case -19210870:
			return 27145;
		
		default:
	}
	switch (iParam0)
	{
		case 356158649:
			return 26970;
		
		case -1531197816:
			return 26971;
		
		case -1034765426:
			return 26972;
		
		case 606339585:
			return 26973;
		
		case 1640388520:
			return 26974;
		
		case -1782451678:
			return 26975;
		
		case 367900409:
			return 26976;
		
		case -775662644:
			return 26977;
		
		case -2012260675:
			return 26978;
		
		case -1302177064:
			return 26980;
		
		case -1136047157:
			return 26981;
		
		case -1372799004:
			return 26982;
		
		case 104927579:
			return 26983;
		
		case -171114594:
			return 26984;
		
		case -838590238:
			return 26985;
		
		case 2027106086:
			return 26986;
		
		case -1336477820:
			return 26987;
		
		case 705382167:
			return 26988;
		
		case 812088197:
			return 26989;
		
		case 812418446:
			return 26990;
		
		case -1264556776:
			return 26991;
		
		case 1453608509:
			return 26992;
		
		case 1569094027:
			return 26993;
		
		case 980555213:
			return 26994;
		
		case 734984327:
			return 26995;
		
		case -1280109902:
			return 26997;
		
		case 157775689:
			return 26998;
		
		case -806866102:
			return 26999;
		
		case 878989084:
			return 27000;
		
		case 2083622977:
			return 27014;
		
		case -1591628927:
			return 27002;
		
		case 59522077:
			return 27003;
		
		case -618721866:
			return 27004;
		
		case -753950190:
			return 27005;
		
		case 952510537:
			return 27006;
		
		case 1675485666:
			return 27007;
		
		case 1636056825:
			return 27008;
		
		case 1008378545:
			return 27009;
		
		case 1279202415:
			return 26996;
		
		case 541533437:
			return 27011;
		
		case -445352626:
			return 27012;
		
		case 396333646:
			return 27013;
		
		case 1019849569:
			return 27015;
		
		case -1045574863:
			return 27017;
		
		case 2099692609:
			return 27018;
		
		case -1711208698:
			return 27019;
		
		case 1907567974:
			return 27020;
		
		case -1708304112:
			return 27021;
		
		case 1195459540:
			return 27022;
		
		case -289956978:
			return 27023;
		
		case 1139128717:
			return 27024;
		
		case -1728576554:
			return 27025;
		
		case 931720181:
			return 27026;
		
		case -411167027:
			return 27027;
		
		case -1560788630:
			return 27028;
		
		case 1410429459:
			return 27029;
		
		case -305731999:
			return 27030;
		
		case 1850648209:
			return 27031;
		
		case -1816187924:
			return 27032;
		
		case 1783002076:
			return 27033;
		
		case 1828567552:
			return 27034;
		
		case 330659273:
			return 27016;
		
		case -1361580068:
			return 27036;
		
		case -2009519706:
			return 27037;
		
		case 1432405432:
			return 27038;
		
		case 1822394461:
			return 27039;
		
		case -1234554049:
			return 27040;
		
		case -1856607714:
			return 27041;
		
		case -716314589:
			return 27042;
		
		case 1511736932:
			return 27043;
		
		case -413109371:
			return 27044;
		
		case 199661462:
			return 27045;
		
		case 2029318935:
			return 27046;
		
		case 1767898797:
			return 27047;
		
		case -1926488251:
			return 27048;
		
		case -708236452:
			return 27049;
		
		case -410464549:
			return 27050;
		
		case 710288251:
			return 27051;
		
		case -852450789:
			return 27052;
		
		case 1530127197:
			return 27053;
		
		case 1970975125:
			return 27054;
		
		case 578571729:
			return 27055;
		
		case 528977640:
			return 27056;
		
		case -182260974:
			return 27057;
		
		case -650509440:
			return 27058;
		
		case 789331251:
			return 27059;
		
		case -346883788:
			return 27060;
		
		case 997661638:
			return 27061;
		
		case -1732981414:
			return 27062;
		
		case 1831034499:
			return 27063;
		
		case -1457557962:
			return 27064;
		
		case 1666283142:
			return 27065;
		
		case -591080416:
			return 27066;
		
		case -1848613075:
			return 27067;
		
		case -1793616796:
			return 27068;
		
		case 698226378:
			return 27069;
		
		case 85350297:
			return 27070;
		
		case 1727712047:
			return 27071;
		
		case -1229400975:
			return 27072;
		
		case 2089452078:
			return 27073;
		
		case -1711900307:
			return 27074;
		
		case 355772324:
			return 27075;
		
		case -2071810596:
			return 27076;
		
		case -119844455:
			return 27077;
		
		case 683400644:
			return 27078;
		
		case 601407264:
			return 27079;
		
		case 1827333048:
			return 27080;
		
		case 795762148:
			return 27081;
		
		case 649692093:
			return 27082;
		
		case 366454706:
			return 27083;
		
		case 160909733:
			return 27084;
		
		case -1521092209:
			return 27085;
		
		case 1970016848:
			return 27086;
		
		case 807882589:
			return 27087;
		
		case 885717964:
			return 27088;
		
		case 780852563:
			return 27120;
		
		case -133599151:
			return 27121;
		
		case 173741300:
			return 27122;
		
		case -714822904:
			return 27123;
		
		case -406892611:
			return 27124;
		
		case -1362076192:
			return 27125;
		
		case -1022261662:
			return 27126;
		
		case 1673296252:
			return 27127;
		
		case -994642134:
			return 27128;
		
		case -1283304255:
			return 27129;
		
		case -1021447204:
			return 27130;
		
		case -1198989646:
			return 27131;
		
		case -441861897:
			return 27132;
		
		case -54270165:
			return 27133;
		
		case -349092858:
			return 27134;
		
		case 427761825:
			return 27135;
		
		case 263523597:
			return 27136;
		
		case 1037953374:
			return 27137;
		
		case 103365845:
			return 27138;
		
		case 1692546288:
			return 27139;
		
		case 1135702663:
			return 27140;
		
		case 1885162466:
			return 27141;
		
		case 156401098:
			return 27142;
		
		case -456805199:
			return 27143;
		
		case 848285764:
			return 27144;
		
		case -1722442286:
			return 27145;
		
		default:
	}
	return 0;
}

char* func_733(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLO_H2F_O_S_16";
		
		case 1:
			return "CLO_ARF_O_12";
		
		case 2:
			return "CLO_IEF_O_2";
		
		case 3:
			return "CLO_H2F_S_6_0";
		
		case 4:
			return "CLO_BIF_O_11";
		
		case 5:
			return "CLO_STF_O_5";
		
		case 6:
			return "CLO_SMF_O_1";
		
		case 7:
			return "CLO_STF_O_E_1";
		
		case 8:
			return "CLO_STF_O_8";
		
		case 9:
			return "CLO_HSTF_O_20";
		
		case 10:
			return "CLO_H2F_S_4_0";
		
		case 11:
			return "CLO_H2F_O_G_21";
		
		case 12:
			return "CLO_GRF_O_1";
		
		case 13:
			return "CLO_LXF_U_3_8";
		
		case 14:
			return "CLO_H2F_S_9_0";
		
		case 15:
			return "CLO_H2F_S_9_5";
		
		case 16:
			return "CLO_HSTF_S_1_1";
		
		case 17:
			return "CLO_IEF_O_11";
		
		case 18:
			return "CLO_BIF_U_23_1";
		
		case 19:
			return "CLO_BHF_U_11_17";
		
		case 20:
			return "CLO_EXF_OB_14";
		
		case 21:
			return "CLO_H2F_U_3_25";
		
		case 22:
			return "CLO_BHF_U_6_1";
		
		case 23:
			return "CLO_L2F_U_7_15";
		
		case 24:
			return "CLO_BHF_U_14_1";
		
		case 25:
			return "CLO_L2F_U_7_12";
		
		case 26:
			return "CLO_L2F_U_7_11";
		
		case 27:
			return "CLO_STF_U_7_4";
		
		case 28:
			return "CLO_IEF_U_3_7";
		
		case 29:
			return "CLO_L2F_U_7_1";
		
		case 30:
			return "CLO_EXF_OA_0";
		
		case 31:
			return "CLO_HSTF_O_G_3";
		
		case 32:
			return "CLO_BHF_U_5_18";
		
		case 33:
			return "CLO_BHF_U_5_20";
		
		case 34:
			return "CLO_BHF_U_2_14";
		
		case 35:
			return "CLO_STF_U_5_9";
		
		case 36:
			return "CLO_BHF_U_5_3";
		
		case 37:
			return "CLO_BHF_U_13_0";
		
		case 38:
			return "CLO_STF_U_5_1";
		
		case 39:
			return "CLO_BHF_U_4_2";
		
		case 40:
			return "CLO_HSTF_O_J_2";
		
		case 41:
			return "CLO_STF_U_5_6";
		
		case 42:
			return "CLO_GRF_U_21_12";
		
		case 43:
			return "CLO_BHF_U_4_5";
		
		case 44:
			return "CLO_GRF_U_21_20";
		
		case 45:
			return "CLO_BHF_U_7_1";
		
		case 46:
			return "CLO_SMF_U_2_15";
		
		case 47:
			return "CLO_IEF_U_14_4";
		
		case 48:
			return "CLO_IEF_U_14_21";
		
		case 49:
			return "CLO_IEF_U_14_9";
		
		case 50:
			return "CLO_BHF_U_7_14";
		
		case 51:
			return "CLO_BIF_U_31_1";
		
		case 52:
			return "CLO_SMF_U_2_7";
		
		case 53:
			return "CLO_BHF_U_7_7";
		
		case 54:
			return "CLO_SMF_U_2_23";
		
		case 55:
			return "CLO_STF_U_5_12";
		
		case 56:
			return "CLO_SMF_U_2_19";
		
		case 57:
			return "CLO_STF_U_6_18";
		
		case 58:
			return "CLO_IEF_U_14_0";
		
		case 59:
			return "CLO_EXF_EU_5_0";
		
		case 60:
			return "CLO_IEF_U_14_7";
		
		case 61:
			return "CLO_BHF_U_4_18";
		
		case 62:
			return "CLO_BHF_U_0_17";
		
		case 63:
			return "CLO_LXF_U_5_0";
		
		case 64:
			return "CLO_IEF_U_4_8";
		
		case 65:
			return "CLO_HSTM_O_L_0";
		
		case 66:
			return "CLO_HSTF_S_0_0";
		
		case 67:
			return "CLO_GRF_U_20_15";
		
		case 68:
			return "CLO_BHF_U_0_2";
		
		case 69:
			return "CLO_IEF_U_1_9";
		
		case 70:
			return "CLO_LTSFU_0_0";
		
		case 71:
			return "CLO_S2F_U_3_12";
		
		case 72:
			return "CLO_IEF_U_4_5";
		
		case 73:
			return "CLO_GRF_U_20_24";
		
		case 74:
			return "CLO_SMF_U_3_8";
		
		case 75:
			return "CLO_IEF_U_4_22";
		
		case 76:
			return "CLO_GRF_U_19_16";
		
		case 77:
			return "CLO_HSTF_U_0_3";
		
		case 78:
			return "CLO_HSTF_U_16_5";
		
		case 79:
			return "CLO_SMF_U_3_5";
		
		case 80:
			return "CLO_SMF_U_3_6";
		
		case 81:
			return "CLO_LXF_U_6_3";
		
		case 82:
			return "CLO_S2F_D_7";
		
		case 83:
			return "CLO_GRF_U_19_23";
		
		case 84:
			return "CLO_GRF_U_0_13";
		
		case 85:
			return "CLO_S2F_D_18";
		
		case 86:
			return "CLO_EXF_EU_4_2";
		
		case 87:
			return "CLO_HP_F_D_10";
		
		case 88:
			return "CLO_LXF_U_6_18";
		
		case 89:
			return "CLO_IEF_U_7_5";
		
		case 90:
			return "CLO_BIF_DECL_67";
		
		case 91:
			return "CLO_BHF_U_16_1";
		
		case 92:
			return "CLO_S1F_U_3_1";
		
		case 93:
			return "CLO_IEF_U_7_14";
		
		case 94:
			return "CLO_GRF_U_15_10";
		
		case 95:
			return "CLO_GRF_U_2_6";
		
		case 96:
			return "CLO_IEF_U_7_12";
		
		case 97:
			return "CLO_SMF_DECL_16";
		
		case 98:
			return "CLO_S1F_DEC_23";
		
		case 99:
			return "CLO_SMF_DECL_15";
		
		case 100:
			return "CLO_BIF_DECL_2";
		
		case 101:
			return "CLO_SMF_DECL_7";
		
		case 102:
			return "CLO_HP_F_D_9";
		
		case 103:
			return "CLO_EXF_EU_9_5";
		
		case 104:
			return "CLO_S2F_D_23";
		
		case 105:
			return "CLO_SMF_DECL_5";
		
		case 106:
			return "CLO_BIF_DECL_63";
		
		case 107:
			return "CLO_AWF_DECL_23";
		
		case 108:
			return "CLO_BIF_DECL_49";
		
		case 109:
			return "CLO_HALF_D_10";
		
		case 110:
			return "CLO_GRF_DECL_27";
		
		case 111:
			return "CLO_LXF_DEC_35";
		
		case 112:
			return "CLO_HST_F_A_0";
		
		case 113:
			return "CLO_HST_F_A_9";
		
		case 114:
			return "CLO_BHF_DECL_19";
		
		case 115:
			return "CLO_INDF_HT_6_2";
		
		case 116:
			return "CLO_EXF_DECL_3";
		
		case 117:
			return "CLO_X4F_B_7_0";
		
		case 118:
			return "CLO_X2F_B_2_0";
		
		case 119:
			return "CLO_VWF_U_13_0";
		
		case 120:
			return "CLO_VWF_U_13_1";
		
		case 121:
			return "CLO_VWF_U_13_2";
		
		case 122:
			return "CLO_VWF_U_13_3";
		
		case 123:
			return "CLO_VWF_U_13_4";
		
		case 124:
			return "CLO_VWF_U_13_5";
		
		case 125:
			return "CLO_VWF_U_13_6";
		
		case 126:
			return "CLO_VWF_U_18_5";
		
		case 127:
			return "CLO_VWF_PH_0_0";
		
		case 128:
			return "CLO_VWF_PH_0_1";
		
		case 129:
			return "CLO_VWF_PH_0_2";
		
		case 130:
			return "CLO_VWF_PH_0_3";
		
		case 131:
			return "CLO_VWF_PH_0_4";
		
		case 132:
			return "CLO_VWF_PH_0_5";
		
		case 133:
			return "CLO_VWF_PH_0_6";
		
		case 134:
			return "CLO_VWF_PH_0_7";
		
		case 135:
			return "CLO_VWF_PH_0_8";
		
		case 136:
			return "CLO_VWF_PH_0_9";
		
		case 137:
			return "CLO_VWF_PH_0_10";
		
		case 138:
			return "CLO_VWF_DECL_0";
		
		case 139:
			return "CLO_VWF_DECL_1";
		
		case 140:
			return "CLO_VWF_DECL_3";
		
		case 141:
			return "CLO_VWF_DECL_5";
		
		case 142:
			return "CLO_VWF_DECL_7";
		
		case 143:
			return "CLO_VWF_DECL_8";
		
		case 144:
			return "CLO_VWF_DECL_9";
		
		default:
	}
	switch (iParam0)
	{
		case 145:
			return "CLO_H2M_O_S_16";
		
		case 146:
			return "CLO_ARM_O_12";
		
		case 147:
			return "CLO_IEM_O_1";
		
		case 148:
			return "CLO_H2M_S_6_0";
		
		case 149:
			return "CLO_BIM_O_11";
		
		case 150:
			return "CLO_STM_O_5";
		
		case 151:
			return "CLO_SMM_O_1";
		
		case 152:
			return "CLO_STM_O_E_1";
		
		case 153:
			return "CLO_STM_O_8";
		
		case 154:
			return "CLO_HSTM_O_20";
		
		case 155:
			return "CLO_H2M_S_4_0";
		
		case 156:
			return "CLO_H2M_O_G_21";
		
		case 157:
			return "CLO_GRM_O_1";
		
		case 158:
			return "CLO_H2M_S_9_0";
		
		case 159:
			return "CLO_LXM_U_0_7";
		
		case 160:
			return "CLO_H2M_S_9_5";
		
		case 161:
			return "CLO_HSTM_S_1_1";
		
		case 162:
			return "CLO_IEM_O_11";
		
		case 163:
			return "CLO_BIM_U_18_1";
		
		case 164:
			return "CLO_BHM_U_11_17";
		
		case 165:
			return "CLO_H2M_U_3_25";
		
		case 166:
			return "CLO_BHM_U_6_1";
		
		case 167:
			return "CLO_L2M_U_6_15";
		
		case 168:
			return "CLO_BHM_U_14_1";
		
		case 169:
			return "CLO_L2M_U_6_12";
		
		case 170:
			return "CLO_L2M_U_6_11";
		
		case 171:
			return "CLO_HSTM_O_J_2";
		
		case 172:
			return "CLO_EXM_OB_14";
		
		case 173:
			return "CLO_STM_U_7_4";
		
		case 174:
			return "CLO_IEM_U_3_7";
		
		case 175:
			return "CLO_L2M_U_6_1";
		
		case 176:
			return "CLO_EXM_OA_0";
		
		case 177:
			return "CLO_BHM_U_5_18";
		
		case 178:
			return "CLO_BHM_U_5_20";
		
		case 179:
			return "CLO_BHM_U_2_14";
		
		case 180:
			return "CLO_STM_U_5_9";
		
		case 181:
			return "CLO_BHM_U_5_3";
		
		case 182:
			return "CLO_BHM_U_13_0";
		
		case 183:
			return "CLO_STM_U_5_1";
		
		case 184:
			return "CLO_BHM_U_4_2";
		
		case 185:
			return "CLO_STM_U_5_6";
		
		case 186:
			return "CLO_GRM_U_15_12";
		
		case 187:
			return "CLO_BHM_U_4_5";
		
		case 188:
			return "CLO_GRM_U_15_20";
		
		case 189:
			return "CLO_HSTM_O_G_3";
		
		case 190:
			return "CLO_BHM_U_7_1";
		
		case 191:
			return "CLO_HSTM_O_L_0";
		
		case 192:
			return "CLO_SMM_U_2_15";
		
		case 193:
			return "CLO_IEM_U_17_4";
		
		case 194:
			return "CLO_IEM_U_17_21";
		
		case 195:
			return "CLO_IEM_U_17_9";
		
		case 196:
			return "CLO_BHM_U_7_14";
		
		case 197:
			return "CLO_BIM_U_26_1";
		
		case 198:
			return "CLO_SMM_U_2_7";
		
		case 199:
			return "CLO_BHM_U_7_7";
		
		case 200:
			return "CLO_SMM_U_2_23";
		
		case 201:
			return "CLO_STM_U_5_12";
		
		case 202:
			return "CLO_SMM_U_2_19";
		
		case 203:
			return "CLO_STM_U_6_18";
		
		case 204:
			return "CLO_IEM_U_17_0";
		
		case 205:
			return "CLO_EXM_EU_6_0";
		
		case 206:
			return "CLO_IEM_U_17_7";
		
		case 207:
			return "CLO_HSTM_S_0_0";
		
		case 208:
			return "CLO_BHM_U_4_18";
		
		case 209:
			return "CLO_BHM_U_0_17";
		
		case 210:
			return "CLO_LXM_U_1_0";
		
		case 211:
			return "CLO_IEM_U_4_8";
		
		case 212:
			return "CLO_HSTM_U_15_5";
		
		case 213:
			return "CLO_GRM_U_14_15";
		
		case 214:
			return "CLO_BHM_U_0_2";
		
		case 215:
			return "CLO_LTSMU_0_0";
		
		case 216:
			return "CLO_IEM_U_18_9";
		
		case 217:
			return "CLO_S2M_U_5_10";
		
		case 218:
			return "CLO_IEM_U_4_5";
		
		case 219:
			return "CLO_GRM_U_14_24";
		
		case 220:
			return "CLO_SMM_U_3_8";
		
		case 221:
			return "CLO_IEM_U_4_22";
		
		case 222:
			return "CLO_GRM_U_13_16";
		
		case 223:
			return "CLO_HSTM_U_0_3";
		
		case 224:
			return "CLO_SMM_U_3_5";
		
		case 225:
			return "CLO_SMM_U_3_6";
		
		case 226:
			return "CLO_LXM_U_5_3";
		
		case 227:
			return "CLO_S2M_D_16";
		
		case 228:
			return "CLO_GRM_U_13_23";
		
		case 229:
			return "CLO_GRM_U_0_13";
		
		case 230:
			return "CLO_S2M_D_27";
		
		case 231:
			return "CLO_EXM_EU_5_2";
		
		case 232:
			return "CLO_HP_D_10";
		
		case 233:
			return "CLO_LXM_U_5_17";
		
		case 234:
			return "CLO_IEM_U_7_5";
		
		case 235:
			return "CLO_IEM_U_7_23";
		
		case 236:
			return "CLO_BIM_DECL_67";
		
		case 237:
			return "CLO_BHM_U_16_1";
		
		case 238:
			return "CLO_S1M_U_3_1";
		
		case 239:
			return "CLO_SMM_U_7_10";
		
		case 240:
			return "CLO_GRM_U_2_6";
		
		case 241:
			return "CLO_IEM_U_7_19";
		
		case 242:
			return "CLO_SMM_DECL_16";
		
		case 243:
			return "CLO_S1M_DEC_25";
		
		case 244:
			return "CLO_SMM_DECL_15";
		
		case 245:
			return "CLO_BIM_DECL_2";
		
		case 246:
			return "CLO_SMM_DECL_7";
		
		case 247:
			return "CLO_HP_D_9";
		
		case 248:
			return "CLO_EXM_EU_10_5";
		
		case 249:
			return "CLO_S2M_D_4";
		
		case 250:
			return "CLO_SMM_DECL_5";
		
		case 251:
			return "CLO_BIM_DECL_63";
		
		case 252:
			return "CLO_AWM_DECL_23";
		
		case 253:
			return "CLO_BIM_DECL_49";
		
		case 254:
			return "CLO_HALM_D_10";
		
		case 255:
			return "CLO_GRM_DECL_27";
		
		case 256:
			return "CLO_LXM_DEC_35";
		
		case 257:
			return "CLO_HST_A_0";
		
		case 258:
			return "CLO_EXM_DECL_3";
		
		case 259:
			return "CLO_HST_A_9";
		
		case 260:
			return "CLO_BHM_DECL_19";
		
		case 261:
			return "CLO_INDM_HT_6_2";
		
		case 262:
			return "CLO_X4M_B_7_0";
		
		case 263:
			return "CLO_X2M_B_2_0";
		
		case 264:
			return "CLO_VWM_U_15_0";
		
		case 265:
			return "CLO_VWM_U_15_1";
		
		case 266:
			return "CLO_VWM_U_15_2";
		
		case 267:
			return "CLO_VWM_U_15_3";
		
		case 268:
			return "CLO_VWM_U_15_4";
		
		case 269:
			return "CLO_VWM_U_15_5";
		
		case 270:
			return "CLO_VWM_U_15_6";
		
		case 271:
			return "CLO_VWM_U_20_5";
		
		case 272:
			return "CLO_VWM_PH_0_0";
		
		case 273:
			return "CLO_VWM_PH_0_1";
		
		case 274:
			return "CLO_VWM_PH_0_2";
		
		case 275:
			return "CLO_VWM_PH_0_3";
		
		case 276:
			return "CLO_VWM_PH_0_4";
		
		case 277:
			return "CLO_VWM_PH_0_5";
		
		case 278:
			return "CLO_VWM_PH_0_6";
		
		case 279:
			return "CLO_VWM_PH_0_7";
		
		case 280:
			return "CLO_VWM_PH_0_8";
		
		case 281:
			return "CLO_VWM_PH_0_9";
		
		case 282:
			return "CLO_VWM_PH_0_10";
		
		case 283:
			return "CLO_VWM_DECL_0";
		
		case 284:
			return "CLO_VWM_DECL_1";
		
		case 285:
			return "CLO_VWM_DECL_3";
		
		case 286:
			return "CLO_VWM_DECL_5";
		
		case 287:
			return "CLO_VWM_DECL_7";
		
		case 288:
			return "CLO_VWM_DECL_8";
		
		case 289:
			return "CLO_VWM_DECL_9";
		
		default:
	}
	return "LRCLOTHES_INVALID";
}

int func_734()
{
	iVar0 = 26970;
	while (iVar0 <= 27088)
	{
		if (!func_496(iVar0, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 27120;
	while (iVar0 <= 27145)
	{
		if (!func_496(iVar0, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_735(bool bParam0)
{
	iVar146 = 0;
	iVar147 = 0;
	while (iVar147 < 145)
	{
		if (func_82(unk_0x16F2683693E537C9()))
		{
			iVar148 = iVar147;
		}
		else
		{
			iVar148 = iVar147 + 145;
		}
		iVar0[iVar147] = iVar148;
		iVar146 = (iVar146 + func_736(iVar0[iVar147], bParam0));
		iVar147++;
	}
	iVar149 = unk_0xA0A5F9CC633A6814(0, iVar146);
	iVar147 = 0;
	while (iVar147 < 145)
	{
		if (iVar149 <= func_736(iVar0[iVar147], bParam0))
		{
			return iVar0[iVar147];
		}
		else
		{
			iVar149 = (iVar149 - func_736(iVar0[iVar147], bParam0));
		}
		iVar147++;
	}
	return -1;
}

int func_736(int iParam0, bool bParam1)
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
		case 14:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
		case 42:
		case 43:
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
		case 60:
		case 61:
			if (func_731(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26073;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
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
			return Global_262145.f_26072;
			break;
	}
	switch (iParam0)
	{
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			if (func_731(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26073;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 191:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
			if (func_731(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26073;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 207:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 208:
			if (func_731(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26073;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26074;
			}
			break;
		
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
			if (func_731(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26072;
			}
			break;
		
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
		case 286:
		case 287:
		case 288:
		case 289:
			return Global_262145.f_26072;
			break;
	}
	return 0;
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			return 1;
		
		case 12:
			return 2;
		
		case 16:
			return 3;
		
		case 1:
			return 4;
		
		case 5:
			return 5;
		
		case 9:
			return 6;
		
		case 13:
			return 7;
		
		case 17:
			return 8;
		
		case 2:
			return 9;
		
		case 6:
			return 10;
		
		case 14:
			return 11;
		
		case 19:
			return 12;
		
		case 3:
			return 13;
		
		case 7:
			return 14;
		
		case 10:
			return 15;
		
		case 15:
			return 16;
		
		case 11:
			return 17;
		
		case 18:
			return 18;
		
		case 4:
			return 19;
		
		default:
	}
	return -1;
}

void func_738()
{
	if (unk_0x69DF961355195C3C(func_739(unk_0xD803B885F5E47A62())))
	{
		unk_0xB46854F2D1C7DFA9(func_739(unk_0xD803B885F5E47A62()));
		unk_0x45934E8E3471AAA9(func_739(unk_0xD803B885F5E47A62()));
		func_101(-1);
	}
}

int func_739(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_101[iParam0].f_2;
}

int func_740()
{
	if (((floor((unk_0x4B7163B4D6E4A3C2(2, 218) * 128f)) != 0 || floor((unk_0x4B7163B4D6E4A3C2(2, 219) * 128f)) != 0) || floor((unk_0x4B7163B4D6E4A3C2(2, 220) * 128f)) != 0) || floor((unk_0x4B7163B4D6E4A3C2(2, 221) * 128f)) != 0)
	{
		return 1;
	}
	if (unk_0x91E3F625EF57450D(0))
	{
		if (unk_0xD245978525608929(2, 33) || unk_0xD245978525608929(2, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_741()
{
	iVar0 = 12;
	iVar1 = func_769(unk_0xD803B885F5E47A62());
	switch (iVar1)
	{
		case 10:
		case 15:
		case 14:
		case 19:
			iVar0 = 12;
			break;
		
		case 18:
			iVar0 = 13;
			break;
		
		default:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_742(bool bParam0)
{
	func_753(bParam0);
	func_744(bParam0);
	func_743();
}

void func_743()
{
	if (Local_262.f_45 != 10)
	{
		if (unk_0xC844350D5D58C99A(Local_262.f_72))
		{
			unk_0xC023D1C4BF532815(Local_262.f_72, 0f, Local_262.f_18, 0f, 2, 1);
		}
	}
}

void func_744(bool bParam0)
{
	if (!func_41(3))
	{
		Local_262.f_25 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), Local_262.f_16);
		Local_262.f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), func_752(&(Local_262.f_16), bParam0));
		func_40(3);
	}
	iVar0 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_262.f_25));
	fVar1 = (1f - ((to_float(iVar0) / IntToFloat(Local_262.f_16)) * 1f));
	if (fVar1 < 0f)
	{
		fVar1 = 0f;
	}
	else if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	fVar2 = pow((1f - fVar1), 3f);
	fVar3 = (1f - fVar2);
	Local_262.f_18 = func_751(Local_262.f_19, Local_262.f_20, fVar3);
	Local_262.f_21 = func_751(Local_262.f_19, Local_262.f_20, fVar3);
	if (Local_262.f_18 > IntToFloat((360 * Local_262.f_9)))
	{
		Local_262.f_9++;
	}
	if (Local_262.f_21 > (IntToFloat(Local_262.f_13 + 1) * to_float(18)))
	{
		Local_262.f_13++;
	}
	Local_262.f_14 = (Local_262.f_13 % 20);
	if (!func_41(17) && unk_0xD803B885F5E47A62() == Local_99)
	{
		if (!unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Local_262.f_26))
		{
			func_771(func_741(), 0, 0, 1, 0);
			func_40(17);
		}
	}
	if (!unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Local_262.f_25))
	{
		func_750();
		Local_262.f_17 = 0;
		func_88();
		if (unk_0xD803B885F5E47A62() == Local_99)
		{
			func_745();
			func_80(10);
		}
		else
		{
			func_80(17);
		}
	}
}

void func_745()
{
	func_749(&sVar0, &fVar4);
	func_748(fVar4);
	func_746(func_164(&sVar0));
}

void func_746(char* sParam0)
{
	if (unk_0x8AA6DC470ABA63A2(Local_262.f_427))
	{
		Local_262.f_427 = unk_0xD68EA767274B7444();
		unk_0xEB819BD1E585E9CB(Local_262.f_427, sParam0, func_747(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
	}
}

Vector3 func_747()
{
	return 1111,052f, 229,8579f, -49,133f;
}

void func_748(float fParam0)
{
	if (unk_0x8AA6DC470ABA63A2(Local_262.f_426))
	{
		Local_262.f_426 = unk_0xD68EA767274B7444();
		unk_0xEB819BD1E585E9CB(Local_262.f_426, "Win", func_747(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
		unk_0x6F6BA3FE885E6C91(Local_262.f_426, "winSize", fParam0);
	}
	else
	{
		unk_0x6F6BA3FE885E6C91(Local_262.f_426, "winSize", fParam0);
	}
}

void func_749(char* sParam0, var uParam1)
{
	iVar0 = func_769(unk_0xD803B885F5E47A62());
	switch (iVar0)
	{
		case 1:
		case 17:
		case 5:
		case 9:
		case 13:
			StringCopy(sParam0, "Win_RP", 16);
			*uParam1 = 0f;
			break;
		
		case 2:
		case 6:
		case 14:
		case 4:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 0f;
			break;
		
		case 19:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 1f;
			break;
		
		case 3:
		case 7:
		case 10:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 0f;
			break;
		
		case 15:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 1f;
			break;
		
		case 11:
			StringCopy(sParam0, "Win_Mystery", 16);
			*uParam1 = 0f;
			break;
		
		case 18:
			StringCopy(sParam0, "Win_Car", 16);
			*uParam1 = 1f;
			break;
		
		default:
			StringCopy(sParam0, "Win_Clothes", 16);
			*uParam1 = 0f;
			break;
	}
}

void func_750()
{
	Local_262.f_18 = Local_262.f_20;
	Local_262.f_19 = Local_262.f_18;
	Local_262.f_10 = func_769(unk_0xD803B885F5E47A62());
	func_783(Local_262.f_10, 0);
	Local_262.f_14 = func_769(unk_0xD803B885F5E47A62());
	Local_262.f_7 = Local_262.f_14;
	func_79(3);
	Local_262.f_13 = Local_262.f_12;
}

float func_751(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_752(var uParam0, bool bParam1)
{
	iVar1 = unk_0xD803B885F5E47A62();
	if (bParam1)
	{
		iVar1 = Local_99;
	}
	switch (func_781(iVar1))
	{
		case 0:
			iVar0 = (*uParam0 - 2400);
			break;
		
		case 1:
			iVar0 = (*uParam0 - 2300);
			break;
		
		case 2:
			iVar0 = (*uParam0 - 2000);
			break;
	}
	if (iVar0 < 0)
	{
		iVar0 = *uParam0;
	}
	return iVar0;
}

void func_753(bool bParam0)
{
	if (func_41(2))
	{
		return;
	}
	iVar0 = func_759();
	Local_262.f_12 = (iVar0 + Local_262.f_8 * 20);
	Local_262.f_12 = (Local_262.f_12 + func_758(bParam0));
	Local_262.f_13 = Local_262.f_14;
	Local_262.f_20 = func_754(bParam0);
	Local_262.f_16 = (Local_262.f_15 * Local_262.f_12);
	func_40(2);
}

float func_754(bool bParam0)
{
	fVar0 = (IntToFloat(Local_262.f_12) * to_float(18));
	if (fVar0 < 180f)
	{
		fVar0 = (fVar0 + 360f);
		Local_262.f_12 += 20;
	}
	iVar1 = unk_0xF653B9B22DA806A9(Local_262.f_72, "Base_pivot");
	vVar2 = { unk_0x9FEC21D2458D651A(Local_262.f_72, iVar1) };
	fVar5 = func_756(vVar2.y);
	iVar6 = floor((fVar5 / 18f));
	fVar7 = to_float(iVar6 * 18);
	fVar8 = (360f - fVar7);
	fVar9 = unk_0x755FF954DAE327E1((fVar5 - fVar7));
	fVar0 = ((fVar0 - fVar8) - fVar9);
	iVar10 = func_781(unk_0xD803B885F5E47A62());
	if (bParam0)
	{
		iVar10 = func_781(Local_99);
	}
	iVar11 = round((fVar0 / 18f));
	fVar0 = ((to_float(iVar11 * 18) + func_755(iVar10)) + IntToFloat(Local_262.f_10 * 18));
	fVar12 = (fVar0 * -1f);
	return fVar12;
}

float func_755(int iParam0)
{
	if (func_82(unk_0x16F2683693E537C9()))
	{
		switch (iParam0)
		{
			case 0:
				return 0,4746f;
			
			case 1:
				return ((to_float(18) * 2f) - 3,4757f);
			
			case 2:
				return (to_float(4) + 1,9002f);
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (to_float(4) + 1,3709f);
			
			case 1:
				return (to_float(4) + 3,5184f);
			
			case 2:
				return (to_float(18) + 14,2192f);
			}
		
		default:
	}
	return 0f;
}

float func_756(float fParam0)
{
	fParam0 = func_757(fParam0);
	if (fParam0 < 0f)
	{
		return (360f + fParam0);
	}
	return fParam0;
}

float func_757(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

int func_758(bool bParam0)
{
	iVar0 = unk_0xD803B885F5E47A62();
	if (bParam0)
	{
		iVar0 = Local_99;
	}
	switch (func_781(iVar0))
	{
		case 1:
			if (Local_262.f_12 <= 30)
			{
				return 20;
			}
			break;
	}
	return 0;
}

int func_759()
{
	if (Local_262.f_14 > func_769(unk_0xD803B885F5E47A62()))
	{
		iVar1 = (20 - Local_262.f_14);
		iVar0 = (iVar1 + func_769(unk_0xD803B885F5E47A62()));
	}
	else
	{
		iVar0 = (func_769(unk_0xD803B885F5E47A62()) - Local_262.f_14);
	}
	return iVar0;
}

int func_760(bool bParam0)
{
	if (unk_0xC844350D5D58C99A(Local_262.f_72))
	{
		if (!bParam0)
		{
			sVar0 = func_156(func_781(unk_0xD803B885F5E47A62()));
		}
		else
		{
			sVar0 = func_156(func_781(Local_99));
		}
		sVar1 = func_81();
		if (!unk_0xEA6BC48857E0AC4C(sVar0) && !unk_0xEA6BC48857E0AC4C(sVar1))
		{
			if (unk_0xB4ECF989E2C1DAC8(Local_262.f_72, sVar1, sVar0, 3))
			{
				fVar2 = 1f;
				fVar3 = unk_0x8CA9406E01C7EE58(Local_262.f_72, sVar1, sVar0);
				if (fVar3 == fVar2)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 9;
		
		case 2:
			return 10;
		
		default:
	}
	return -1;
}

int func_762(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = unk_0x16F2683693E537C9();
	iVar1 = unk_0xD803B885F5E47A62();
	if (bParam1)
	{
		iVar0 = unk_0x9539D44F3E4492F6(Local_99);
		iVar1 = Local_99;
	}
	if (func_129(iVar0))
	{
		sVar2 = func_764(iParam0);
		sVar3 = func_81();
		if (!unk_0xEA6BC48857E0AC4C(sVar2) && !unk_0xEA6BC48857E0AC4C(sVar3))
		{
			if (unk_0xB4ECF989E2C1DAC8(iVar0, sVar3, sVar2, 3))
			{
				fVar4 = func_763(iParam0);
				iVar5 = unk_0xF958843510932FF6(func_739(iVar1));
				if (((!unk_0x69DF961355195C3C(iVar5) || unk_0xA45992A6CE82FB43(iVar5) >= fVar4) || unk_0xDDCA9A4E51DADA2B(iVar0, unk_0x12AB0310C2281427("BLEND_OUT"))) || unk_0xDDCA9A4E51DADA2B(iVar0, unk_0x12AB0310C2281427("EARLY_OUT")))
				{
					if (bParam2)
					{
						func_738();
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_763(int iParam0)
{
	fVar0 = 0,96f;
	switch (iParam0)
	{
		case 2:
			if (func_82(unk_0x16F2683693E537C9()))
			{
				fVar0 = 0,7f;
			}
			break;
	}
	return fVar0;
}

char* func_764(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "Enter_to_ArmRaisedIDLE";
			break;
		
		case 1:
			sVar0 = "ArmRaisedIDLE";
			break;
		
		case 2:
			sVar0 = "ArmRaisedIDLE_to_SpinReadyIDLE";
			break;
		
		case 3:
			sVar0 = "SpinReadyIDLE";
			break;
		
		case 4:
			sVar0 = "SpinStart_ArmRaisedIDLE_to_BaseIDLE";
			break;
		
		case 5:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_low";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Low";
			}
			break;
		
		case 6:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_med";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Med";
			}
			break;
		
		case 7:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_high";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_High";
			}
			break;
		
		case 8:
			sVar0 = "SpinningIDLE_Low";
			break;
		
		case 9:
			sVar0 = "SpinningIDLE_Medium";
			break;
		
		case 10:
			sVar0 = "SpinningIDLE_High";
			break;
		
		case 11:
			sVar0 = "Win";
			break;
		
		case 12:
			sVar0 = "Win_Big";
			break;
		
		case 13:
			sVar0 = "Win_Huge";
			break;
		
		case 14:
			sVar0 = "Exit_to_Standing";
			break;
		
		case 15:
			sVar0 = "SpinReadyIDLE_to_ArmRaisedIDLE";
			break;
	}
	return sVar0;
}

void func_765(float fParam0)
{
	if (func_41(27))
	{
		if (Local_262.f_425 == -1 && unk_0x8AA6DC470ABA63A2(Local_262.f_425))
		{
			Local_262.f_425 = unk_0xD68EA767274B7444();
			iVar0 = 1;
			if (fParam0 > 0,5f)
			{
				iVar0 = 0;
			}
			unk_0xEB819BD1E585E9CB(Local_262.f_425, "Spin_Single_Ticks", func_747(), "dlc_vw_casino_lucky_wheel_sounds", iVar0, 0, 0);
			unk_0x6F6BA3FE885E6C91(Local_262.f_425, "spinSpeed", fParam0);
		}
		else
		{
			unk_0x55D0A2DB35045A35(Local_262.f_425);
			unk_0x43A06902454A1172(Local_262.f_425);
			Local_262.f_425 = -1;
			func_765(fParam0);
		}
	}
}

void func_766(float fParam0)
{
	if (unk_0x8AA6DC470ABA63A2(Local_262.f_424) && Local_262.f_424 == -1)
	{
		Local_262.f_424 = unk_0xD68EA767274B7444();
		unk_0xEB819BD1E585E9CB(Local_262.f_424, "Spin_Start", func_747(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
		unk_0x6F6BA3FE885E6C91(Local_262.f_424, "spinSpeed", fParam0);
	}
	else
	{
		unk_0x6F6BA3FE885E6C91(Local_262.f_424, "spinSpeed", fParam0);
	}
}

void func_767()
{
	iVar0 = unk_0xF653B9B22DA806A9(Local_262.f_72, "Base_pivot");
	vVar1 = { unk_0x9FEC21D2458D651A(Local_262.f_72, iVar0) };
	fVar4 = func_756(vVar1.y);
	vVar5 = { unk_0x835730A2D89F6093(Local_262.f_72, 2) };
	fVar8 = func_756(vVar5.y);
	if (!func_760(0))
	{
		fVar9 = fVar4;
	}
	else if (fVar8 == 0f && fVar4 != 0f)
	{
		fVar9 = fVar4;
	}
	else
	{
		fVar9 = fVar8;
	}
	if (!func_41(26))
	{
		Local_262.f_423 = fVar9;
		func_40(26);
	}
	fVar10 = unk_0x755FF954DAE327E1((fVar9 - Local_262.f_423));
	if (fVar10 > 100f)
	{
		fVar10 = unk_0x755FF954DAE327E1((fVar9 - (360f + Local_262.f_423)));
	}
	iVar11 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_262.f_25));
	fVar12 = (to_float(iVar11) / IntToFloat(Local_262.f_16));
	if (fVar12 < 0f)
	{
		fVar12 = 0f;
	}
	else if (fVar12 > 1f)
	{
		fVar12 = 1f;
	}
	if (func_768() == 0)
	{
		fVar12 = (fVar12 / 2f);
	}
	Local_262.f_422 = fVar12;
	if (fVar10 >= 18f)
	{
		func_40(27);
		Local_262.f_423 = fVar9;
	}
	else
	{
		func_79(27);
	}
	Local_262.f_422 = fVar12;
}

int func_768()
{
	if (func_159(unk_0xD803B885F5E47A62()) > 3000)
	{
		return 2;
	}
	else if (func_159(unk_0xD803B885F5E47A62()) > 1500)
	{
		return 1;
	}
	return 0;
}

int func_769(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_101[iParam0];
}

void func_770(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_186()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

void func_771(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (bParam3)
	{
	}
	Local_262.f_22 = func_764(iParam0);
	vVar0 = { func_778(bParam1) };
	vVar3 = { 0f, 0f, func_773(bParam1) };
	fVar6 = 2f;
	fVar7 = -2f;
	if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
	{
		fVar6 = 8f;
		fVar7 = -1,5f;
	}
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		fVar6 = 1,5f;
	}
	if (func_82(unk_0x16F2683693E537C9()))
	{
		if (iParam0 == 3)
		{
			fVar6 = 4f;
			fVar7 = -4f;
		}
	}
	if (iParam0 == 2 || iParam0 == 1)
	{
		fVar6 = 4f;
		fVar7 = -4f;
	}
	if (iParam0 == 14)
	{
		fVar6 = 4f;
		fVar7 = -4f;
	}
	iVar8 = 5;
	if (bParam2)
	{
		iVar8 = 69;
	}
	func_101(unk_0xF66E5A439A080021(vVar0, vVar3, 2, iParam4, bParam2, 1065353216, 0, 1065353216));
	unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), func_739(unk_0xD803B885F5E47A62()), Local_262.f_23, Local_262.f_22, fVar6, fVar7, iVar8, 0, 1148846080, 0);
	unk_0x914E6894744915F8(func_739(unk_0xD803B885F5E47A62()));
	StringCopy(&cVar9, Local_262.f_22, 64);
	StringConCat(&cVar9, "_Facial", 64);
	unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), &cVar9, Local_262.f_23);
	if (func_772(Local_262.f_22))
	{
		sVar25 = func_156(func_781(unk_0xD803B885F5E47A62()));
		unk_0xC023D1C4BF532815(Local_262.f_72, 0f, 0f, 0f, 2, 1);
		unk_0xD65E6E13E145467B(Local_262.f_72, sVar25, Local_262.f_23, 1000f, 0, 1, 0, 0f, 2);
		unk_0x295ACC5727E47CB7(Local_262.f_72);
	}
}

int func_772(char* sParam0)
{
	if ((unk_0x7F8A39872A07D2CE(sParam0, func_764(7)) || unk_0x7F8A39872A07D2CE(sParam0, func_764(6))) || unk_0x7F8A39872A07D2CE(sParam0, func_764(5)))
	{
		return 1;
	}
	return 0;
}

float func_773(bool bParam0)
{
	if (bParam0)
	{
		return func_775();
	}
	else
	{
		return func_774();
	}
	return 0f;
}

float func_774()
{
	return 0f;
}

var func_775()
{
	vVar0 = { unk_0xEEB20D14BD38615E(Local_262.f_23, Local_262.f_22, func_776(Local_262.f_22), 0f, 0f, 0f, 0, 2) };
	return vVar0.z;
}

Vector3 func_776(char* sParam0)
{
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	iVar3 = func_777(sParam0);
	if (iVar3 == 0)
	{
		vVar0 = { func_747() };
	}
	return vVar0;
}

int func_777(char* sParam0)
{
	iVar0 = -1;
	if (unk_0x7F8A39872A07D2CE(sParam0, "Enter_to_ArmRaisedIDLE"))
	{
		iVar0 = 0;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "ArmRaisedIDLE"))
	{
		iVar0 = 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "ArmRaisedIDLE_to_SpinReadyIDLE"))
	{
		iVar0 = 2;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "SpinReadyIDLE"))
	{
		iVar0 = 3;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "SpinStart_ArmRaisedIDLE_to_BaseIDLE"))
	{
		iVar0 = 4;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "spinreadyidle_to_spinningidle_low") || unk_0x7F8A39872A07D2CE(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Low"))
	{
		iVar0 = 5;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "spinreadyidle_to_spinningidle_med") || unk_0x7F8A39872A07D2CE(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Med"))
	{
		iVar0 = 6;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "spinreadyidle_to_spinningidle_high") || unk_0x7F8A39872A07D2CE(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_High"))
	{
		iVar0 = 7;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "SpinningIDLE_Low"))
	{
		iVar0 = 8;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "SpinningIDLE_Med"))
	{
		iVar0 = 9;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "SpinningIDLE_High"))
	{
		iVar0 = 10;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "Win"))
	{
		iVar0 = 11;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "Win_Big"))
	{
		iVar0 = 12;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "Win_Huge"))
	{
		iVar0 = 13;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "Exit_to_Standing"))
	{
		iVar0 = 14;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "SpinReadyIDLE_to_ArmRaisedIDLE"))
	{
		iVar0 = 15;
	}
	return iVar0;
}

Vector3 func_778(bool bParam0)
{
	if (bParam0)
	{
		return func_779();
	}
	else
	{
		return func_54();
	}
	return 0f, 0f, 0f;
}

Vector3 func_779()
{
	return unk_0x1BB04F10296A1C5E(Local_262.f_23, Local_262.f_22, func_54(), 0f, 0f, 0f, 0, 2);
}

int func_780(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		default:
	}
	return -1;
}

int func_781(int iParam0)
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	return Local_101[iParam0].f_4;
}

void func_782(bool bParam0)
{
	if (unk_0xD803B885F5E47A62() != func_8())
	{
		if (bParam0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_101[unk_0xD803B885F5E47A62()].f_1, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_101[unk_0xD803B885F5E47A62()].f_1), 0);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_101[unk_0xD803B885F5E47A62()].f_1, 0))
		{
			unk_0x0674E58A79778E99(&(Local_101[unk_0xD803B885F5E47A62()].f_1), 0);
		}
	}
}

void func_783(var uParam0, int iParam1)
{
	Var0 = 2032669874;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar4 = func_244(1, 1);
	if (iVar4 != -1)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 4, iVar4);
	}
}

bool func_784(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_101[iParam0].f_1, 0);
}

void func_785()
{
	if (!func_41(5))
	{
		Local_262.f_2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_262.f_24));
		if (func_41(15))
		{
			func_79(15);
			func_788();
			func_40(5);
		}
		if (!unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Local_262.f_24) || func_787())
		{
			Local_262.f_2 = 0;
			if (func_786(3))
			{
				func_771(14, 0, 0, 1, 0);
				func_79(4);
				func_40(10);
				func_80(12);
			}
		}
	}
}

int func_786(int iParam0)
{
	if (func_129(unk_0x16F2683693E537C9()))
	{
		sVar0 = func_764(iParam0);
		sVar1 = func_81();
		if (!unk_0xEA6BC48857E0AC4C(sVar0) && !unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), sVar1, sVar0, 3);
		}
	}
	return 0;
}

int func_787()
{
	if (func_28())
	{
		return 1;
	}
	return 0;
}

void func_788()
{
	func_102(Local_262.f_2);
	Local_262.f_15 = func_158();
	Local_262.f_8 = func_157();
	func_97(func_768());
}

void func_789()
{
	Local_262.f_3 = floor((unk_0x4F3973434662D795(2, 218) * 128f));
	Local_262.f_4 = floor((unk_0x4F3973434662D795(2, 219) * 128f));
}

void func_790()
{
	func_793();
	func_789();
	if (func_41(18))
	{
		if (func_762(2, 0, 0))
		{
			func_771(3, 0, 1, 0, 0);
			func_71(&(Local_262.f_27));
			func_79(18);
		}
		else if (func_41(12))
		{
			func_40(16);
			func_80(8);
		}
	}
	else if (!func_762(3, 0, 0))
	{
		if (unk_0x91E3F625EF57450D(0))
		{
			func_46("LUCK_W_SPIN_PC", -1);
		}
		else
		{
			func_46("LUCK_WHEEL_SPIN", -1);
		}
		if (func_41(12))
		{
			func_71(&(Local_262.f_27));
			func_40(16);
			func_80(8);
		}
	}
	else if (func_792() != 7)
	{
		if (!func_791() || func_41(22))
		{
			func_771(15, 0, 0, 0, 1);
			func_80(7);
		}
	}
}

bool func_791()
{
	return ((Local_262.f_3 <= 20 && Local_262.f_3 >= -20) && Local_262.f_4 <= -120);
}

int func_792()
{
	return Local_262.f_45;
}

void func_793()
{
	if (func_792() == 6)
	{
		if (func_74(&(Local_262.f_39)))
		{
			if (func_72(&(Local_262.f_39), 10000, 0))
			{
				func_40(22);
			}
		}
	}
	if (func_41(12) || func_41(13))
	{
		return;
	}
	if (!func_74(&(Local_262.f_27)))
	{
		func_73(&(Local_262.f_27), 0, 0);
	}
	else if (!func_72(&(Local_262.f_27), 5000, 0))
	{
		if (Local_262.f_45 != 5)
		{
			if (func_794())
			{
				Local_262.f_24 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 5000);
				func_40(12);
				func_40(15);
				func_71(&(Local_262.f_27));
			}
		}
		else if (func_794())
		{
			func_40(15);
			func_80(8);
		}
		else if (func_791() && !func_41(22))
		{
			func_73(&(Local_262.f_39), 0, 0);
			func_40(12);
			func_71(&(Local_262.f_27));
		}
	}
	else if (func_792() == 6)
	{
		if (!func_791() || func_41(22))
		{
			func_771(15, 0, 0, 0, 1);
			func_80(7);
		}
	}
	else
	{
		func_40(13);
		func_71(&(Local_262.f_27));
	}
}

bool func_794()
{
	if (unk_0x91E3F625EF57450D(0))
	{
		return unk_0xBFC0798A6E3417F9(2, 33);
	}
	return ((Local_262.f_3 <= 20 && Local_262.f_3 >= -20) && Local_262.f_4 >= 120);
}

void func_795()
{
	if (func_762(15, 0, 0))
	{
		func_79(12);
		func_79(4);
		func_71(&(Local_262.f_27));
		func_771(1, 0, 1, 0, 0);
		func_80(5);
	}
}

void func_796()
{
	if (!func_41(4))
	{
		Local_262.f_24 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 5000);
		func_40(4);
	}
	func_793();
	func_789();
	if (unk_0x91E3F625EF57450D(0))
	{
		func_46("LUCK_W_SPIN_PC", -1);
	}
	else
	{
		func_46("LUCK_WHEEL_SPIN", -1);
	}
	if (func_41(12) && !func_787())
	{
		func_771(2, 0, 0, 0, 0);
		func_40(18);
		func_71(&(Local_262.f_27));
		func_80(6);
		func_79(12);
	}
	else if (func_41(13) || func_787())
	{
		func_771(14, 0, 0, 1, 0);
		func_79(4);
		func_40(10);
		func_80(12);
	}
}

void func_797()
{
	func_801();
	if (!func_41(7))
	{
		if (!func_41(8))
		{
			unk_0x3F423BF5B8125A50(Local_262.f_23);
			if (unk_0xB4AE0788C1587752(Local_262.f_23))
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 0)
				{
					unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), func_778(1), 1f, 5000, func_773(1), 0,001f);
					func_73(&(Local_262.f_31), 0, 0);
					func_40(8);
				}
			}
		}
		else if (unk_0xB4AE0788C1587752(Local_262.f_23))
		{
			if (func_798())
			{
				func_771(0, 0, 0, 1, 0);
				func_71(&(Local_262.f_31));
				func_40(7);
			}
		}
	}
	else if (func_762(0, 0, 0))
	{
		func_771(1, 0, 1, 0, 0);
		func_79(7);
		func_40(9);
	}
}

int func_798()
{
	if ((func_800(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_778(1), 0,01f, 0) && func_799(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), func_773(1), 5f)) || func_72(&(Local_262.f_31), 5000, 0))
	{
		return 1;
	}
	return 0;
}

int func_799(float fParam0, float fParam1, float fParam2)
{
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_800(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_801()
{
	if (!func_41(6))
	{
		if (!func_804())
		{
			func_803();
		}
		if (!func_108())
		{
			func_802();
		}
		unk_0xBBC60FE7D2EB37A6();
		unk_0xBFE31971E49FA500(false);
		func_40(6);
	}
}

void func_802()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_803()
{
	Global_2439138.f_1156.f_9 = 1;
}

bool func_804()
{
	return Global_2439138.f_1156.f_9;
}

void func_805()
{
	func_809(&(Local_262.f_429));
	unk_0x558EC149EB2BC0A2(2, 202);
	if (func_510(0, -1, 0))
	{
		if (func_808(0))
		{
			func_807();
			func_96(0);
		}
		else
		{
			func_466(-1, 1, 1);
		}
		if (!func_536())
		{
			func_453("CAS_DIS_MAIN", 0, 0);
		}
		else
		{
			func_453("CAS_DIS_MAIN2", 0, 0);
		}
		func_806();
		func_415(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	}
}

void func_806()
{
	unk_0x558EC149EB2BC0A2(2, 202);
	if (!unk_0xE57E602827E07C9D())
	{
		unk_0x558EC149EB2BC0A2(0, 200);
		unk_0x558EC149EB2BC0A2(2, 200);
	}
	if ((Local_262.f_429.f_10 || func_72(&(Local_262.f_41), 20000, 0)) || func_25(1, 1))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
		unk_0x0674E58A79778E99(&(Local_262.f_1), 3);
		func_80(17);
		func_76(1);
	}
	else if (Local_262.f_429.f_9)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
		func_80(3);
		unk_0x5D96D8530B3D0904(&(Local_262.f_1), 3);
	}
}

void func_807()
{
	func_509(0, 0);
	func_500("CAS_BLP_DT");
	func_502(1, 2, 1, 1, 1);
	func_503(1, 1, 0, 0, 0);
	unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
	func_505(1, "CasinoUI_Lucky_Wheel", "CasinoUI_Lucky_Wheel");
	func_406(202, "TCP_EXIT", -1);
	func_406(201, "TCP_CONT", -1);
}

bool func_808(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_262.f_429, iParam0);
}

void func_809(var uParam0)
{
	if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1)
	{
		if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			func_117(unk_0xD803B885F5E47A62(), 0, 33024, 0);
		}
	}
	func_810(uParam0);
}

void func_810(var uParam0)
{
	func_814(&(uParam0->f_4), &(uParam0->f_6), &(uParam0->f_5), &(uParam0->f_7), 0);
	uParam0->f_9 = (unk_0xBFC0798A6E3417F9(2, 201) || unk_0xD245978525608929(2, 201));
	uParam0->f_10 = (unk_0xBFC0798A6E3417F9(2, 202) || unk_0xD245978525608929(2, 202));
	uParam0->f_11 = (uParam0->f_6 < -64 || unk_0xBFC0798A6E3417F9(2, 188));
	uParam0->f_12 = (uParam0->f_6 > 64 || unk_0xBFC0798A6E3417F9(2, 187));
	unk_0x3FC8DBCC154CA56B();
	if ((((func_510(0, -1, 0) && unk_0x8BB17FEBE0394018() == 0) && !unk_0x1A72D8C9F025E5E3()) && !unk_0xE57E602827E07C9D()) && !Global_98796.f_1417)
	{
		if (unk_0x0EFF6B4415DAF4A1() && !unk_0x4FD68D5821EE3E19())
		{
			if (unk_0x9E6C8D8976DA0ECD(2))
			{
				unk_0x38C3A68D7861DCFD(0, 1, 1);
				unk_0x38C3A68D7861DCFD(0, 2, 1);
				unk_0x38C3A68D7861DCFD(2, 200, 1);
				unk_0xEAB026E686C0D991(0, 237, 1);
				unk_0xEAB026E686C0D991(0, 238, 1);
				unk_0xEAB026E686C0D991(0, 241, 1);
				unk_0xEAB026E686C0D991(0, 242, 1);
				if ((Global_4268497 == -1 || Global_4268497 == -4) || Global_4268497 == -6)
				{
					unk_0xEAB026E686C0D991(1, 1, 1);
					unk_0xEAB026E686C0D991(1, 2, 1);
				}
				else
				{
					unk_0x38C3A68D7861DCFD(1, 1, 1);
					unk_0x38C3A68D7861DCFD(1, 2, 1);
				}
				func_512(0, 0, 0, 1);
				func_813(0, -1, 1);
			}
			if (func_413())
			{
				if (Global_4268497 == uParam0->f_1)
				{
					uParam0->f_9 = 1;
				}
				else
				{
					uParam0->f_1 = Global_4268497;
					func_466(uParam0->f_1, 1, 1);
				}
			}
			if (func_401())
			{
				uParam0->f_10 = 1;
			}
			if (func_812(0, 0, 0))
			{
				uParam0->f_11 = 1;
			}
			if (func_811(0, 0, 0))
			{
				uParam0->f_12 = 1;
			}
		}
	}
}

int func_811(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 == -3)
		{
			if ((unk_0x06F8112AA79C53D9(2, 237) && iParam0) || unk_0xBFC0798A6E3417F9(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x06F8112AA79C53D9(2, 242) || (unk_0x7FEE810EE9E768EB(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_812(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 == -2)
		{
			if ((unk_0x06F8112AA79C53D9(2, 237) && iParam0) || unk_0xBFC0798A6E3417F9(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x06F8112AA79C53D9(2, 241) || (unk_0x7FEE810EE9E768EB(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_813(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4268497 == -6)
	{
		unk_0xC74D8A1D346B9CCB(4);
		if (iParam0 && unk_0x06F8112AA79C53D9(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268497 = -1;
			return 0;
		}
	}
	if (((Global_4268497 > -1 || Global_4268497 == -3) || Global_4268497 == -2) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(1);
		return 0;
	}
	if (Global_4268497 == -1 && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(2, 237))
		{
			unk_0xC74D8A1D346B9CCB(4);
			Global_4268497 = -6;
			return 1;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(3);
			return 0;
		}
	}
	unk_0xC74D8A1D346B9CCB(1);
	return 0;
}

void func_814(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0x4F3973434662D795(2, 218) * 127f));
	*uParam1 = floor((unk_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = floor((unk_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = floor((unk_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*uParam1 = floor((unk_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = floor((unk_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_815(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_262.f_429, iParam0))
	{
		unk_0x5D96D8530B3D0904(&(Local_262.f_429), iParam0);
	}
}

void func_816(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 6))
		{
			unk_0x5D96D8530B3D0904(&(Global_2425662[iParam0].f_310.f_4), 6);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 6))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[iParam0].f_310.f_4), 6);
	}
}

float func_817(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
			break;
		
		case 1:
			return 18f;
			break;
		
		case 2:
			return 36f;
			break;
		
		case 3:
			return 54f;
			break;
		
		case 4:
			return 72f;
			break;
		
		case 5:
			return 90f;
			break;
		
		case 6:
			return 108f;
			break;
		
		case 7:
			return 126f;
			break;
		
		case 8:
			return 144f;
			break;
		
		case 9:
			return 162f;
			break;
		
		case 10:
			return 180f;
			break;
		
		case 11:
			return 198f;
			break;
		
		case 12:
			return 216f;
			break;
		
		case 13:
			return 234f;
			break;
		
		case 14:
			return 252f;
			break;
		
		case 15:
			return 270f;
			break;
		
		case 16:
			return 288f;
			break;
		
		case 17:
			return 306f;
			break;
		
		case 18:
			return 324f;
			break;
		
		case 19:
			return 342f;
			break;
	}
	return 0f;
}

void func_818()
{
	if (func_38("LW_PLAY"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (!func_47(0))
	{
		func_79(11);
		if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 4))
		{
			if (func_819("CAS_MG_MEMB2", func_43(0)))
			{
				unk_0xA37A90C62806D848(1);
			}
			unk_0x0674E58A79778E99(&(Global_1676377.f_6), 4);
		}
		if (func_41(20))
		{
			if (func_38("LUCKY_WHEEL_US"))
			{
				unk_0xA37A90C62806D848(1);
			}
			func_79(20);
		}
		if (func_38("CASINO_LUCK_WD"))
		{
			unk_0xA37A90C62806D848(1);
		}
		if (func_41(25))
		{
			if (func_38("CAS_MG_CBAN"))
			{
				unk_0xA37A90C62806D848(1);
				func_79(25);
			}
		}
		if (func_41(28))
		{
			if (func_38("CAS_LW_REGL"))
			{
				unk_0xA37A90C62806D848(1);
				func_79(28);
			}
		}
	}
}

bool func_819(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_820()
{
	func_99();
	func_829();
	func_828();
	func_822();
	func_116(unk_0xD803B885F5E47A62(), 0, 256);
	Local_262.f_23 = func_81();
	Local_262.f_22 = func_764(0);
	Local_262.f_46 = func_821();
}

int func_821()
{
	return 1;
}

void func_822()
{
	if (func_827() || func_826())
	{
		func_825();
		func_823();
	}
}

void func_823()
{
	if ((!func_517() && !func_824()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_824()
{
	return Global_2450632.f_591;
}

void func_825()
{
	Global_2450632.f_656 = 1;
}

var func_826()
{
	return Global_2450632.f_635;
}

bool func_827()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_828()
{
	func_131(1);
}

void func_829()
{
	if (!func_41(1))
	{
		func_100(func_830(func_831()));
		func_40(1);
	}
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 8;
		
		case 2:
			return 12;
		
		case 3:
			return 16;
		
		case 4:
			return 1;
		
		case 5:
			return 5;
		
		case 6:
			return 9;
		
		case 7:
			return 13;
		
		case 8:
			return 17;
		
		case 9:
			return 2;
		
		case 10:
			return 6;
		
		case 11:
			return 14;
		
		case 12:
			return 19;
		
		case 13:
			return 3;
		
		case 14:
			return 7;
		
		case 15:
			return 10;
		
		case 16:
			return 15;
		
		case 17:
			return 11;
		
		case 18:
			return 18;
		
		case 19:
			return 4;
		
		default:
	}
	return 0;
}

int func_831()
{
	iVar21 = 0;
	iVar22 = 0;
	while (iVar22 < 20)
	{
		iVar0[iVar22] = iVar22;
		iVar21 = (iVar21 + func_832(iVar0[iVar22]));
		iVar22++;
	}
	iVar23 = unk_0xA0A5F9CC633A6814(0, iVar21);
	iVar22 = 0;
	while (iVar22 < 20)
	{
		if (iVar23 <= func_832(iVar0[iVar22]))
		{
			return iVar0[iVar22];
		}
		else
		{
			iVar23 = (iVar23 - func_832(iVar0[iVar22]));
		}
		iVar22++;
	}
	return -1;
}

int func_832(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_26155)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26045;
			}
			break;
		
		case 1:
			if (Global_262145.f_26155)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26046;
			}
			break;
		
		case 2:
			if (Global_262145.f_26155)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26047;
			}
			break;
		
		case 3:
			if (Global_262145.f_26155)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26048;
			}
			break;
		
		case 4:
			if (Global_262145.f_26156)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26049;
			}
			break;
		
		case 5:
			if (Global_262145.f_26156)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26050;
			}
			break;
		
		case 6:
			if (Global_262145.f_26156)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26051;
			}
			break;
		
		case 7:
			if (Global_262145.f_26156)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26052;
			}
			break;
		
		case 8:
			if (Global_262145.f_26156)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26053;
			}
			break;
		
		case 9:
			if (Global_262145.f_26157)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26054;
			}
			break;
		
		case 10:
			if (Global_262145.f_26157)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26055;
			}
			break;
		
		case 11:
			if (Global_262145.f_26157)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26056;
			}
			break;
		
		case 12:
			if (Global_262145.f_26157)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26057;
			}
			break;
		
		case 13:
			if (Global_262145.f_26158)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26058;
			}
			break;
		
		case 14:
			if (Global_262145.f_26158)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26059;
			}
			break;
		
		case 15:
			if (Global_262145.f_26158)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26060;
			}
			break;
		
		case 16:
			if (Global_262145.f_26158)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26061;
			}
			break;
		
		case 17:
			if (Global_262145.f_26159)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26062;
			}
			break;
		
		case 18:
			if (Global_262145.f_26160)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26063;
			}
			break;
		
		case 19:
			if (Global_262145.f_26161)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26064;
			}
			break;
	}
	return 0;
}

void func_833()
{
	if (func_38("LW_PLAY"))
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_834(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 10))
		{
			unk_0x5D96D8530B3D0904(&(Global_1590535[iParam0].f_274.f_369.f_2), 10);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_2, 10))
	{
		unk_0x0674E58A79778E99(&(Global_1590535[iParam0].f_274.f_369.f_2), 10);
	}
}

int func_835()
{
	if (func_41(11))
	{
		if (func_129(unk_0x16F2683693E537C9()))
		{
			return func_836();
		}
	}
	return 0;
}

int func_836()
{
	if (((((unk_0xBFC0798A6E3417F9(2, 51) && !unk_0xBFC0798A6E3417F9(2, 199)) && !unk_0xBFC0798A6E3417F9(2, 200)) && !unk_0xD245978525608929(2, 199)) && !unk_0xD245978525608929(2, 200)) && !func_837(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

bool func_837(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_241.f_136[func_589(9)][iParam0], func_584(9));
}

void func_838()
{
	if (func_47(0))
	{
		func_40(11);
	}
	if (func_41(11))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_262.f_1, 2))
		{
			func_46("LW_PLAY", -1);
		}
		if (!func_47(0))
		{
			func_79(11);
		}
	}
}

bool func_839()
{
	return Local_99 != func_8();
}

void func_840()
{
	if (unk_0x8AA6DC470ABA63A2(Local_262.f_424))
	{
		unk_0x55D0A2DB35045A35(Local_262.f_424);
		unk_0x43A06902454A1172(Local_262.f_424);
		Local_262.f_424 = -1;
	}
	if (unk_0x8AA6DC470ABA63A2(Local_262.f_426))
	{
		unk_0x55D0A2DB35045A35(Local_262.f_426);
		unk_0x43A06902454A1172(Local_262.f_426);
		Local_262.f_426 = -1;
	}
	if (unk_0x8AA6DC470ABA63A2(Local_262.f_427))
	{
		unk_0x55D0A2DB35045A35(Local_262.f_427);
		unk_0x43A06902454A1172(Local_262.f_427);
		Local_262.f_427 = -1;
	}
}

void func_841()
{
	if (!unk_0xC844350D5D58C99A(Local_262.f_72))
	{
		unk_0x523BCC9DC80CD82F(func_842());
		if (!unk_0xB87F6CF6E5628C67(func_842()))
		{
			return;
		}
		Local_262.f_72 = unk_0xB0BE3DFBBB59A620(func_842(), func_747(), 0, false, true);
		unk_0x120A395B0ECB8EA5(Local_262.f_72, true);
		unk_0x98868AF51859FC75(Local_262.f_72, 0);
	}
}

int func_842()
{
	return -945995088;
}

int func_843()
{
	iVar0 = 0;
	if (func_846())
	{
		iVar0 = 1;
	}
	if (!func_844(unk_0xD803B885F5E47A62()) && unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("AM_MP_CASINO")) < 1)
	{
		iVar0 = 1;
	}
	if (Global_1696041)
	{
		Global_1696041 = 0;
		iVar0 = 1;
	}
	return iVar0;
}

int func_844(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_845(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_845(int iParam0)
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

int func_846()
{
	func_853(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_852())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_851())
	{
		return 1;
	}
	if (func_850(159))
	{
		if (!func_849())
		{
			return 1;
		}
	}
	if (func_850(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_847() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_847()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_847()
{
	switch (func_588())
	{
		case 0:
			return func_848();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_848()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_849()
{
	return Global_2450632.f_598;
}

int func_850(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_851()
{
	return Global_2460680;
}

bool func_852()
{
	return Global_2450632.f_593;
}

void func_853(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_854(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_854(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_627(iVar4, &bVar5))
						{
							unk_0x920D29D81E211607(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							unk_0x046C362CF15F1935(&iVar4);
						}
					}
				}
			}
		}
	}
}

void func_855()
{
	if (func_41(21))
	{
		func_139(1);
	}
	unk_0x71199B01895C6202(func_842());
	func_782(0);
	func_857();
	func_738();
	func_816(unk_0xD803B885F5E47A62(), 0);
	if (!unk_0xEA6BC48857E0AC4C(Local_262.f_23))
	{
		unk_0x8D17794CE3273D70(Local_262.f_23);
	}
	if (unk_0xC844350D5D58C99A(Local_262.f_72))
	{
		unk_0xF690C84DADBB3551(&(Local_262.f_72));
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 4))
	{
		unk_0x0674E58A79778E99(&(Global_1676377.f_6), 4);
	}
	func_106(0);
	unk_0xF5A41F3D3B38EFE3("CasinoUI_Lucky_Wheel");
	func_856();
}

void func_856()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_857()
{
	sVar0 = func_156(func_781(unk_0xD803B885F5E47A62()));
	sVar1 = func_81();
	if (unk_0xB4ECF989E2C1DAC8(Local_262.f_72, sVar1, sVar0, 3))
	{
		unk_0x7720CBBC7DD82563(Local_262.f_72, sVar0, sVar1, -8f);
	}
}

void func_858()
{
	unk_0x37AD2AB54480FA6A(32, 0, -1);
	func_883(0, -1, 0);
	unk_0x35B62793EAE9ADDF(&Local_101, 161);
	unk_0x9752E7BAEABA939E(&Local_99, 2);
	if (!func_882())
	{
		func_855();
	}
	unk_0x256D93AFAE851A7A(0);
	func_859();
}

void func_859()
{
	func_860(&Local_706);
	unk_0x0D3BE1DE0262A012("CasinoUI_Lucky_Wheel", false);
}

void func_860(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_7, 9))
	{
		iVar0 = 0;
		while (iVar0 <= 86)
		{
			iVar1 = func_881(iVar0, 0);
			if (func_880(iVar1))
			{
				if (!func_879(iVar1))
				{
					if (func_878(iVar1) && func_873(1623028892, iVar1, -1))
					{
						iVar1 = func_872(iVar1);
					}
					if (func_864(iVar1, -1, 0) || func_861(iVar1))
					{
						if (unk_0x654E7ACE881E41FE(iVar1) != 0)
						{
							if (unk_0x654E7ACE881E41FE(iVar1) == -728555052 || iVar1 == -656458692)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 0))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 0);
									uParam0->f_5++;
								}
							}
							else if (unk_0x654E7ACE881E41FE(iVar1) == 416676503)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 1))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 1);
									uParam0->f_5++;
									if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 30))
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26), 30);
									}
								}
							}
							else if (unk_0x654E7ACE881E41FE(iVar1) == 970310034)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 3))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 3);
									uParam0->f_5++;
									if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26, 31))
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_26), 31);
									}
								}
							}
							else if (unk_0x654E7ACE881E41FE(iVar1) == 860033945 || iVar1 == -1466123874)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 4))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 4);
									uParam0->f_5++;
									if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123, 0))
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123), 0);
									}
								}
							}
							else if (unk_0x654E7ACE881E41FE(iVar1) == -1212426201 && iVar1 != -1466123874)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 5))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 5);
									uParam0->f_5++;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123, 5))
								{
									unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123), 5);
								}
							}
							else if (unk_0x654E7ACE881E41FE(iVar1) == -1569042529)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 6))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 6);
									uParam0->f_5++;
								}
							}
							else if (unk_0x654E7ACE881E41FE(iVar1) == 1548507267 || iVar1 == 883325847)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 7))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 7);
									uParam0->f_5++;
								}
								if (iVar1 == 741814745 || iVar1 == -1420407917)
								{
									if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123, 2))
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123), 2);
									}
								}
								else if (iVar1 == -1813897027 || iVar1 == -37975472)
								{
									if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123, 3))
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123), 3);
									}
								}
							}
							else if (unk_0x654E7ACE881E41FE(iVar1) == -957766203 || unk_0x654E7ACE881E41FE(iVar1) == 1159398588)
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4, 2))
								{
									unk_0x5D96D8530B3D0904(&(uParam0->f_4), 2);
									uParam0->f_5++;
								}
								if (iVar1 == 324215364)
								{
									if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123, 1))
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123), 1);
									}
								}
								if (unk_0x654E7ACE881E41FE(iVar1) == 1159398588)
								{
									if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123, 4))
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_123), 4);
									}
								}
							}
						}
						else if ((unk_0xF4CCC8CB6DE7F1AE() % 60) == 0)
						{
						}
					}
					else if ((unk_0xF4CCC8CB6DE7F1AE() % 60) == 0)
					{
					}
				}
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_7), 9);
	}
}

int func_861(int iParam0)
{
	if (iParam0 == 615608432)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iParam0) > 0)
			{
				return 1;
			}
		}
	}
	if ((((((iParam0 == 1141786504 || iParam0 == -2067956739) || iParam0 == -1786099057) || iParam0 == -37975472) || iParam0 == -1813897027) || iParam0 == 741814745) && func_21(func_863(iParam0), -1, 0) > 0)
	{
		return 1;
	}
	if (iParam0 == 940833800 && func_862())
	{
		return 1;
	}
	return 0;
}

int func_862()
{
	if (func_67(7315, -1, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_863(int iParam0)
{
	if (func_588() == 0 || func_587() == 0)
	{
		switch (iParam0)
		{
			case -1716189206:
				return 199;
				break;
			
			case 1737195953:
				return 206;
				break;
			
			case 453432689:
				return 257;
				break;
			
			case 1593441988:
				return 267;
				break;
			
			case 584646201:
				return 287;
				break;
			
			case -1076751822:
				return 1746;
				break;
			
			case 324215364:
				return 297;
				break;
			
			case 736523883:
				return 307;
				break;
			
			case -1074790547:
				return 326;
				break;
			
			case -2084633992:
				return 335;
				break;
			
			case -1063057011:
				return 9494;
				break;
			
			case -1357824103:
				return 344;
				break;
			
			case -1660422300:
				return 353;
				break;
			
			case 2144741730:
				return 362;
				break;
			
			case 487013001:
				return 380;
				break;
			
			case 2017895192:
				return 390;
				break;
			
			case -494615257:
				return 408;
				break;
			
			case 911657153:
				return 418;
				break;
			
			case 100416529:
				return 427;
				break;
			
			case 205991906:
				return 436;
				break;
			
			case -1568386805:
				return 445;
				break;
			
			case -1312131151:
				return 452;
				break;
			
			case 1119849093:
				return 461;
				break;
			
			case -1813897027:
				return 469;
				break;
			
			case -37975472:
				return 478;
				break;
			
			case 741814745:
				return 486;
				break;
			
			case 615608432:
				return 495;
				break;
			
			case 883325847:
				return 586;
				break;
			
			case -1716589765:
				return 277;
				break;
			
			case -572349828:
				return 371;
				break;
			
			case -270015777:
				return 317;
				break;
			
			case 392730790:
				return 439;
				break;
			
			case 1317494643:
				return 234;
				break;
			
			case -1654528753:
				return 399;
				break;
			
			case -102323637:
				return 1736;
				break;
			
			case -771403250:
				return 9484;
				break;
			
			case 2132975508:
				return 9504;
				break;
			
			case 1627465347:
				return 9514;
				break;
			
			case -72657034:
				return 583;
				break;
			
			case 137902532:
				return 9797;
				break;
			
			case -1834847097:
				return 9787;
				break;
			
			case -1466123874:
				return 9817;
				break;
			
			case 2138347493:
				return 9807;
				break;
			
			case 984333226:
				return 9895;
				break;
			
			case -952879014:
				return 9905;
				break;
			
			case -1420407917:
				return 9921;
				break;
			
			case 1672152130:
				return 9929;
				break;
			
			case 171789620:
				return 9939;
				break;
			
			case -656458692:
				return 9946;
				break;
			
			case -598887786:
				return 9956;
				break;
			
			case -102973651:
				return 9913;
				break;
			
			case -581044007:
				return 9964;
				break;
			
			case -619010992:
				return 9974;
				break;
			
			case -275439685:
				return 10002;
				break;
			
			case 1649403952:
				return 9992;
				break;
			
			case -1951375401:
				return 10010;
				break;
			
			case 1141786504:
				return 248;
				break;
			
			case -1786099057:
				return 241;
				break;
			
			case -2067956739:
				return 213;
				break;
			
			case 317205821:
				return 10081;
				break;
			
			case -1121678507:
				return 10107;
				break;
			
			case 125959754:
				return 10097;
				break;
			
			case -853065399:
				return 10124;
				break;
			
			case -1169823560:
				return 10115;
				break;
			
			case -1810795771:
				return 10125;
				break;
			
			case 419712736:
				return 227;
				break;
			
			case 961495388:
				return 326;
				break;
			
			case -86904375:
				return 335;
				break;
			
			case -608341376:
				return 362;
				break;
			
			case 177293209:
				return 436;
				break;
			
			case -1075685676:
				return 257;
				break;
			
			case 2024373456:
				return 307;
				break;
			
			case -2066285827:
				return 10589;
				break;
			
			case 1785463520:
				return 10609;
				break;
			
			case 1432025498:
				return 10599;
				break;
			
			case -879347409:
				return 10619;
				break;
			
			case -2009644972:
				return 10639;
				break;
			
			case -1768145561:
				return 10649;
				break;
			
			case -1355376991:
				return 11009;
				break;
			
			case 1198256469:
				return 11019;
				break;
			
			case -1238556825:
				return 11029;
				break;
			
			case -1853920116:
				return 11460;
				break;
			
			case 727643628:
				return 11450;
				break;
			}
	}
	return 486;
}

bool func_864(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (func_590())
	{
		return 0;
	}
	if (func_869() == 0)
	{
		return 0;
	}
	if (iParam0 != -72657034 && iParam0 != 1834241177)
	{
		if (func_867(func_868(iParam0), -1))
		{
			return 0;
		}
	}
	iVar0 = func_865(iParam0, iParam1);
	iVar1 = func_618(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_584(iVar1));
}

var func_865(int iParam0, var uParam1)
{
	uVar0 = func_21(func_866(iParam0), uParam1, 0);
	return uVar0;
}

int func_866(int iParam0)
{
	iVar0 = func_618(iParam0);
	iVar1 = func_589(iVar0);
	if ((func_588() == 0 || func_587() == 0) || (func_588() == 999 && func_587() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
				break;
			
			case 1:
				return 800;
				break;
			
			case 2:
				return 2418;
				break;
			}
	}
	return 11511;
}

int func_867(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_22(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_868(int iParam0)
{
	switch (iParam0)
	{
		case -1569615261:
			return 18;
			break;
		
		case -1813897027:
			return 66;
			break;
		
		case -37975472:
			return 68;
			break;
		
		case 741814745:
			return 70;
			break;
		
		case 615608432:
			return 72;
			break;
		
		case 453432689:
			return 18;
			break;
		
		case 1593441988:
			return 40;
			break;
		
		case -1716589765:
			return 22;
			break;
		
		case 584646201:
			return 24;
			break;
		
		case 324215364:
			return 26;
			break;
		
		case 736523883:
			return 28;
			break;
		
		case -270015777:
			return 30;
			break;
		
		case -1074790547:
			return 32;
			break;
		
		case -2084633992:
			return 34;
			break;
		
		case -1357824103:
			return 36;
			break;
		
		case -1660422300:
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case 487013001:
			return 44;
			break;
		
		case 2017895192:
			return 46;
			break;
		
		case -1654528753:
			return 48;
			break;
		
		case -494615257:
			return 50;
			break;
		
		case 100416529:
			return 54;
			break;
		
		case 205991906:
			return 56;
			break;
		
		case -1568386805:
			return 60;
			break;
		
		case -1312131151:
			return 62;
			break;
		
		case 1119849093:
			return 64;
			break;
		
		case 911657153:
			return 52;
			break;
		
		case 883325847:
			return 75;
			break;
		
		case -1716189206:
			return 2;
			break;
		
		case 1737195953:
			return 4;
			break;
		
		case 1317494643:
			return 12;
			break;
		
		case -1786099057:
			return 14;
			break;
		
		case -2067956739:
			return 6;
			break;
		
		case 1141786504:
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case 2144741730:
			return 40;
			break;
		
		case -102323637:
			return 143;
			break;
		
		case -1063057011:
			return 283;
			break;
		
		case -1076751822:
			return 145;
			break;
		
		case -771403250:
			return 281;
			break;
		
		case 2132975508:
			return 285;
			break;
		
		case 1627465347:
			return 287;
			break;
		
		case -1834847097:
			return 308;
			break;
		
		case 137902532:
			return 310;
			break;
		
		case 2138347493:
			return 312;
			break;
		
		case -1466123874:
			return 314;
			break;
		
		case 984333226:
			return 326;
			break;
		
		case -952879014:
			return 328;
			break;
		
		case -1420407917:
			return 332;
			break;
		
		case 1672152130:
			return 334;
			break;
		
		case 171789620:
			return 336;
			break;
		
		case -656458692:
			return 338;
			break;
		
		case -598887786:
			return 340;
			break;
		
		case -102973651:
			return 330;
			break;
		
		case -581044007:
			return 342;
			break;
		
		case -619010992:
			return 344;
			break;
		
		case 1649403952:
			return 347;
			break;
		
		case -275439685:
			return 349;
			break;
		
		case -1951375401:
			return 351;
			break;
		
		case -1045183535:
			return 354;
			break;
		
		case -538741184:
			return 356;
			break;
		
		case 317205821:
			return 361;
			break;
		
		case -1121678507:
			return 367;
			break;
		
		case 125959754:
			return 365;
			break;
		
		case -853065399:
			return 363;
			break;
		
		case -1169823560:
			return 369;
			break;
		
		case -1810795771:
			return 371;
			break;
		
		case 419712736:
			return 10;
			break;
		
		case 961495388:
			return 32;
			break;
		
		case -86904375:
			return 34;
			break;
		
		case -608341376:
			return 40;
			break;
		
		case 177293209:
			return 56;
			break;
		
		case -1075685676:
			return 18;
			break;
		
		case 2024373456:
			return 28;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case 1785463520:
			return 328;
			break;
		
		case 1432025498:
			return 44;
			break;
		
		case -879347409:
			return 354;
			break;
		
		case -2009644972:
			return 145;
			break;
		
		case -1768145561:
			return 283;
			break;
		
		case -1746263880:
			return 395;
			break;
		
		case 940833800:
			return 401;
			break;
		
		case -1355376991:
			return 403;
			break;
		
		case 1198256469:
			return 403;
			break;
		
		case -1238556825:
			return 403;
			break;
		
		case -1853920116:
			return 411;
			break;
		
		case 727643628:
			return 409;
			break;
		
		case -1168940174:
			return 413;
			break;
	}
	return 2;
}

int func_869()
{
	if (func_871() && func_870(0))
	{
		return 1;
	}
	return 0;
}

var func_870(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_871()
{
	return func_870(func_18() + 1);
}

int func_872(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return -1075685676;
		
		case 736523883:
			return 2024373456;
		
		case -1074790547:
			return 961495388;
		
		case -2084633992:
			return -86904375;
		
		case 2144741730:
			return -608341376;
		
		case 205991906:
			return 177293209;
		
		case 2132975508:
			return -2066285827;
			break;
		
		case -952879014:
			return 1785463520;
			break;
		
		case 487013001:
			return 1432025498;
			break;
		
		case -1045183535:
			return -879347409;
			break;
		
		case -1076751822:
			return -2009644972;
			break;
		
		case -1063057011:
			return -1768145561;
			break;
	}
	return 0;
}

bool func_873(int iParam0, int iParam1, int iParam2)
{
	if (func_590())
	{
		return 0;
	}
	iVar0 = func_876(iParam0, iParam1, iParam2);
	iVar1 = func_874(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_584(iVar1));
}

int func_874(int iParam0, int iParam1)
{
	return func_875(iParam0, iParam1);
}

int func_875(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 453432689:
			switch (iParam0)
			{
				case -19858063:
					return 1;
					break;
				
				case -316253668:
					return 2;
					break;
				
				case 899381934:
					return 3;
					break;
				
				case 1709866683:
					return 4;
					break;
				
				case -684126074:
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam0)
			{
				case 119648377:
					return 5;
					break;
				
				case -696561875:
					return 6;
					break;
				
				case 899381934:
					return 7;
					break;
				
				case -1023114086:
					return 8;
					break;
				
				case -966439566:
					return 186;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam0)
			{
				case 834974250:
					return 11;
					break;
				
				case 614078421:
					return 12;
					break;
				
				case 899381934:
					return 13;
					break;
				
				case -1023114086:
					return 14;
					break;
				
				case -1686714580:
					return 164;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam0)
			{
				case -884429072:
					return 15;
					break;
				
				case 283556395:
					return 16;
					break;
				
				case 899381934:
					return 17;
					break;
				
				case -1657815255:
					return 18;
					break;
				
				case -1489156508:
					return 19;
					break;
				
				case 1215999497:
					return 174;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam0)
			{
				case 643254679:
					return 22;
					break;
				
				case 889808635:
					return 23;
					break;
				
				case 2043113590:
					return 207;
					break;
				
				case 2076495324:
					return 24;
					break;
				
				case 1019656791:
					return 25;
					break;
				
				case -1023114086:
					return 26;
					break;
				
				case 663170192:
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam0)
			{
				case -1101075946:
					return 27;
					break;
				
				case -1323216997:
					return 28;
					break;
				
				case -604986051:
					return 201;
					break;
				
				case 202788691:
					return 29;
					break;
				
				case 2076495324:
					return 30;
					break;
				
				case -1657815255:
					return 31;
					break;
				
				case -1489156508:
					return 32;
					break;
				
				case 1319990579:
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam0)
			{
				case -1614924820:
					return 33;
					break;
				
				case -1861183855:
					return 34;
					break;
				
				case -1167922891:
					return 202;
					break;
				
				case 1967214384:
					return 35;
					break;
				
				case 202788691:
					return 36;
					break;
				
				case 2076495324:
					return 37;
					break;
				
				case -1596416958:
					return 38;
					break;
				
				case -2089531990:
					return 39;
					break;
				
				case -660892072:
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam0)
			{
				case -91250417:
					return 44;
					break;
				
				case -1899902599:
					return 45;
					break;
				
				case 2076495324:
					return 47;
					break;
				
				case -1439939148:
					return 48;
					break;
				
				case -2089531990:
					return 49;
					break;
				
				case 930927479:
					return 163;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam0)
			{
				case -197857404:
					return 50;
					break;
				
				case -2112517305:
					return 51;
					break;
				
				case 1006677997:
					return 52;
					break;
				
				case -690308418:
					return 187;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam0)
			{
				case -503336118:
					return 53;
					break;
				
				case -691692330:
					return 54;
					break;
				
				case 202788691:
					return 55;
					break;
				
				case -1596416958:
					return 56;
					break;
				
				case -1828795171:
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam0)
			{
				case -435637410:
					return 59;
					break;
				
				case 2076495324:
					return 60;
					break;
				
				case -1562927653:
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam0)
			{
				case -1796727865:
					return 64;
					break;
				
				case -2034401422:
					return 65;
					break;
				
				case 202788691:
					return 66;
					break;
				
				case 2076495324:
					return 67;
					break;
				
				case -2089531990:
					return 68;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam0)
			{
				case -1681506167:
					return 69;
					break;
				
				case -767279652:
					return 70;
					break;
				
				case -1135289737:
					return 71;
					break;
				
				case -1489156508:
					return 72;
					break;
				
				case 1077065191:
					return 180;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam0)
			{
				case 1198478068:
					return 76;
					break;
				
				case -1135289737:
					return 77;
					break;
				
				case -767279652:
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam0)
			{
				case 202788691:
					return 78;
					break;
				
				case 2076495324:
					return 79;
					break;
				
				case -1439939148:
					return 80;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam0)
			{
				case -924946682:
					return 81;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam0)
			{
				case -1928132688:
					return 83;
					break;
				
				case -1152981993:
					return 84;
					break;
				
				case 2076495324:
					return 85;
					break;
				
				case -1657815255:
					return 86;
					break;
				
				case -1489156508:
					return 87;
					break;
				
				case 663517359:
					return 189;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam0)
			{
				case 202788691:
					return 88;
					break;
				
				case 2076495324:
					return 89;
					break;
				
				case -1489156508:
					return 90;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam0)
			{
				case 580369945:
					return 91;
					break;
				
				case -640439150:
					return 92;
					break;
				
				case 899381934:
					return 93;
					break;
				
				case -1489156508:
					return 94;
					break;
				
				case 2008591151:
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case -767279652:
					return 96;
					break;
				
				case -1135289737:
					return 97;
					break;
				
				case -2089531990:
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case 202788691:
					return 101;
					break;
				
				case 2076495324:
					return 102;
					break;
				
				case -1596416958:
					return 103;
					break;
				
				case -2089531990:
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case 202788691:
					return 107;
					break;
				
				case -1596416958:
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam0)
			{
				case -959978111:
					return 111;
					break;
				
				case 2089537806:
					return 112;
					break;
				
				case 1801039530:
					return 208;
					break;
				
				case 202788691:
					return 113;
					break;
				
				case 2076495324:
					return 114;
					break;
				
				case -1596416958:
					return 115;
					break;
				
				case -1489156508:
					return 116;
					break;
				
				case 1929467122:
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam0)
			{
				case -125817127:
					return 117;
					break;
				
				case 2063610803:
					return 118;
					break;
				
				case 899381934:
					return 119;
					break;
				
				case -1023114086:
					return 120;
					break;
				
				case -2144080721:
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case -771403250:
			switch (iParam0)
			{
				case 222992026:
					return 121;
					break;
				
				case 1694090795:
					return 122;
					break;
				
				case 899381934:
					return 123;
					break;
				
				case -1023114086:
					return 124;
					break;
				
				case 2053798779:
					return 171;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam0)
			{
				case -979292288:
					return 131;
					break;
				
				case -1284994289:
					return 132;
					break;
				
				case 2076495324:
					return 127;
					break;
				
				case -2089531990:
					return 128;
					break;
				
				case -1439939148:
					return 129;
					break;
				
				case 202788691:
					return 130;
					break;
				
				case -1470645128:
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case 1627465347:
			switch (iParam0)
			{
				case 484812453:
					return 125;
					break;
				
				case -355941776:
					return 126;
					break;
			}
			break;
		
		case 137902532:
			switch (iParam0)
			{
				case 1168357051:
					return 133;
					break;
				
				case 867832552:
					return 134;
					break;
				
				case -1023114086:
					return 136;
					break;
			}
			break;
		
		case 984333226:
			switch (iParam0)
			{
				case 844049759:
					return 137;
					break;
				
				case -1759709443:
					return 140;
					break;
				
				case -2000168365:
					return 205;
					break;
				
				case 2076495324:
					return 145;
					break;
				
				case -1489156508:
					return 146;
					break;
				
				case 202788691:
					return 147;
					break;
			}
			break;
		
		case -952879014:
			switch (iParam0)
			{
				case -667205311:
					return 138;
					break;
				
				case -855823675:
					return 139;
					break;
				
				case 471997210:
					return 141;
					break;
				
				case 2076495324:
					return 142;
					break;
				
				case -2089531990:
					return 143;
					break;
				
				case 202788691:
					return 144;
					break;
				
				case 371102273:
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam0)
			{
				case 1125642654:
					return 149;
					break;
				
				case 860508675:
					return 150;
					break;
				
				case 1857603803:
					return 203;
					break;
				
				case 2076495324:
					return 151;
					break;
				
				case -1439939148:
					return 152;
					break;
				
				case 202788691:
					return 153;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam0)
			{
				case -2052698631:
					return 178;
					break;
			}
			break;
		
		case -598887786:
			switch (iParam0)
			{
				case -878820883:
					return 148;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam0)
			{
				case -971770235:
					return 154;
					break;
				
				case -287703709:
					return 155;
					break;
				
				case 1351683121:
					return 156;
					break;
				
				case -1755194916:
					return 157;
					break;
				
				case 2112683568:
					return 158;
					break;
				
				case 1062111910:
					return 159;
					break;
				
				case 146278587:
					return 160;
					break;
				
				case -494162961:
					return 161;
					break;
				
				case 2062808965:
					return 162;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam0)
			{
				case 1198425599:
					return 184;
					break;
				
				case -1188271751:
					return 185;
					break;
				
				case -1444295948:
					return 206;
					break;
				
				case -1023114086:
					return 183;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam0)
			{
				case 1530822070:
					return 194;
					break;
				
				case -409758110:
					return 195;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam0)
			{
				case -377062173:
					return 196;
					break;
				
				case 384708672:
					return 197;
					break;
				
				case -1802258419:
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case 1649403952:
			switch (iParam0)
			{
				case 1363085923:
					return 199;
					break;
				
				case 1509923832:
					return 200;
					break;
				
				case -972590066:
					return 204;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
					break;
				
				case -1820405577:
					return 210;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
					break;
				
				case 1591132456:
					return 218;
					break;
				
				case 1329061674:
					return 219;
					break;
				
				case -2046910199:
					return 220;
					break;
				
				case 733837882:
					return 221;
					break;
				
				case 634039983:
					return 222;
					break;
				
				case 1140676955:
					return 223;
					break;
				
				case -1898661008:
					return 224;
					break;
				
				case 1709866683:
					return 225;
					break;
				
				case 568543123:
					return 226;
					break;
				
				case 1550611612:
					return 367;
					break;
				
				case 368550800:
					return 368;
					break;
				
				case -1769069349:
					return 369;
					break;
				
				case 24902297:
					return 370;
					break;
				
				case -228041614:
					return 371;
					break;
				
				case -584961562:
					return 372;
					break;
				
				case -1153175946:
					return 373;
					break;
				
				case 1301287696:
					return 374;
					break;
				
				case 1597093459:
					return 375;
					break;
				
				case 1769871776:
					return 376;
					break;
				
				case -1827882671:
					return 377;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
					break;
				
				case -1182573778:
					return 228;
					break;
				
				case 190476639:
					return 229;
					break;
				
				case 974903034:
					return 230;
					break;
				
				case -644734235:
					return 231;
					break;
				
				case 2146055916:
					return 232;
					break;
				
				case 2076495324:
					return 233;
					break;
				
				case -1613015470:
					return 234;
					break;
				
				case -452809877:
					return 235;
					break;
				
				case 1038927834:
					return 236;
					break;
				
				case -1023114086:
					return 237;
					break;
				
				case -1181482284:
					return 238;
					break;
				
				case -932732805:
					return 239;
					break;
				
				case -569259057:
					return 240;
					break;
				
				case -326080308:
					return 241;
					break;
				
				case 48731514:
					return 242;
					break;
				
				case 880736428:
					return 243;
					break;
				
				case 1303784126:
					return 244;
					break;
				
				case -653246751:
					return 245;
					break;
				
				case -1520117877:
					return 246;
					break;
				
				case -996700057:
					return 378;
					break;
				
				case 940943685:
					return 379;
					break;
				
				case 1263226800:
					return 380;
					break;
				
				case -328035840:
					return 381;
					break;
				
				case 1224100642:
					return 382;
					break;
				
				case 899228776:
					return 383;
					break;
				
				case 616006309:
					return 384;
					break;
				
				case -1561952511:
					return 385;
					break;
				
				case 572063080:
					return 386;
					break;
				
				case 1170588613:
					return 387;
					break;
				
				case 966612367:
					return 388;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
					break;
				
				case 752418717:
					return 248;
					break;
				
				case -130689324:
					return 249;
					break;
				
				case -1981031769:
					return 250;
					break;
				
				case 1005144310:
					return 251;
					break;
				
				case 247526935:
					return 252;
					break;
				
				case -2101279869:
					return 253;
					break;
				
				case -1135289737:
					return 254;
					break;
				
				case -1233121104:
					return 255;
					break;
				
				case 776198721:
					return 256;
					break;
				
				case -1404903567:
					return 257;
					break;
				
				case 1602080333:
					return 258;
					break;
				
				case 1764221345:
					return 259;
					break;
				
				case -1869205321:
					return 260;
					break;
				
				case 277524638:
					return 261;
					break;
				
				case -130843390:
					return 356;
					break;
				
				case -977347227:
					return 357;
					break;
				
				case -378461067:
					return 358;
					break;
				
				case 329939175:
					return 359;
					break;
				
				case 643374672:
					return 360;
					break;
				
				case 807875052:
					return 361;
					break;
				
				case -1401804168:
					return 362;
					break;
				
				case -1096495395:
					return 363;
					break;
				
				case -847811454:
					return 364;
					break;
				
				case -1413108537:
					return 365;
					break;
				
				case 1815270123:
					return 366;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
					break;
				
				case 400507625:
					return 263;
					break;
				
				case 696788003:
					return 264;
					break;
				
				case 1475288264:
					return 265;
					break;
				
				case -1020871238:
					return 266;
					break;
				
				case -161179835:
					return 267;
					break;
				
				case -1654288262:
					return 268;
					break;
				
				case 1108334355:
					return 269;
					break;
				
				case 1060929921:
					return 270;
					break;
				
				case -966040254:
					return 271;
					break;
				
				case -1181482284:
					return 272;
					break;
				
				case -932732805:
					return 273;
					break;
				
				case -569259057:
					return 274;
					break;
				
				case -326080308:
					return 275;
					break;
				
				case 48731514:
					return 276;
					break;
				
				case 880736428:
					return 277;
					break;
				
				case 1303784126:
					return 278;
					break;
				
				case -1018236364:
					return 279;
					break;
				
				case -1243457701:
					return 280;
					break;
				
				case 1249283253:
					return 345;
					break;
				
				case -857707587:
					return 346;
					break;
				
				case -1097543898:
					return 347;
					break;
				
				case 1980349969:
					return 348;
					break;
				
				case 1219453777:
					return 349;
					break;
				
				case -1853459190:
					return 350;
					break;
				
				case -2074781016:
					return 351;
					break;
				
				case 457967755:
					return 352;
					break;
				
				case 235171324:
					return 353;
					break;
				
				case 42685294:
					return 354;
					break;
				
				case -687617715:
					return 355;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
					break;
				
				case -785724817:
					return 282;
					break;
				
				case -1478681000:
					return 283;
					break;
				
				case 1675665560:
					return 284;
					break;
				
				case -76490669:
					return 285;
					break;
				
				case -282298175:
					return 286;
					break;
				
				case -1654288262:
					return 287;
					break;
				
				case 2076495324:
					return 288;
					break;
				
				case 1108334355:
					return 289;
					break;
				
				case 77277509:
					return 290;
					break;
				
				case -966040254:
					return 291;
					break;
				
				case -1489156508:
					return 292;
					break;
				
				case -1181482284:
					return 293;
					break;
				
				case -932732805:
					return 294;
					break;
				
				case -569259057:
					return 295;
					break;
				
				case -326080308:
					return 296;
					break;
				
				case 48731514:
					return 297;
					break;
				
				case 880736428:
					return 298;
					break;
				
				case 1303784126:
					return 299;
					break;
				
				case 1134861606:
					return 300;
					break;
				
				case 1447477866:
					return 301;
					break;
				
				case -1860492113:
					return 323;
					break;
				
				case 937772107:
					return 324;
					break;
				
				case 1401650071:
					return 325;
					break;
				
				case 628662130:
					return 326;
					break;
				
				case -985047251:
					return 327;
					break;
				
				case -812944463:
					return 328;
					break;
				
				case -1447352303:
					return 329;
					break;
				
				case -60338860:
					return 330;
					break;
				
				case 2088750491:
					return 331;
					break;
				
				case -1513913454:
					return 332;
					break;
				
				case -1179558480:
					return 333;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
					break;
				
				case 1574296533:
					return 303;
					break;
				
				case 626875735:
					return 304;
					break;
				
				case 1141059345:
					return 305;
					break;
				
				case 1025884839:
					return 306;
					break;
				
				case 391640422:
					return 307;
					break;
				
				case -1654288262:
					return 308;
					break;
				
				case 2076495324:
					return 309;
					break;
				
				case 1108334355:
					return 310;
					break;
				
				case 77277509:
					return 311;
					break;
				
				case -966040254:
					return 312;
					break;
				
				case -2089531990:
					return 313;
					break;
				
				case -1181482284:
					return 314;
					break;
				
				case -932732805:
					return 315;
					break;
				
				case -569259057:
					return 316;
					break;
				
				case -326080308:
					return 317;
					break;
				
				case 48731514:
					return 318;
					break;
				
				case 880736428:
					return 319;
					break;
				
				case 1303784126:
					return 320;
					break;
				
				case -2093598721:
					return 321;
					break;
				
				case -1958983669:
					return 322;
					break;
				
				case 1272803094:
					return 334;
					break;
				
				case 1080719624:
					return 335;
					break;
				
				case 792221348:
					return 336;
					break;
				
				case -452181427:
					return 337;
					break;
				
				case -746774737:
					return 338;
					break;
				
				case -2044296061:
					return 339;
					break;
				
				case -199171978:
					return 340;
					break;
				
				case -1428075016:
					return 341;
					break;
				
				case -1735153315:
					return 342;
					break;
				
				case 1796459838:
					return 343;
					break;
				
				case -631911105:
					return 344;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
					break;
				
				case 1315288101:
					return 396;
					break;
				
				case 1004815965:
					return 397;
					break;
				
				case -380098265:
					return 398;
					break;
				
				case -1618338827:
					return 399;
					break;
				
				case 2076495324:
					return 400;
					break;
				
				case 1108334355:
					return 401;
					break;
				
				case 77277509:
					return 402;
					break;
				
				case 1060929921:
					return 403;
					break;
				
				case -1404903567:
					return 404;
					break;
				
				case 1602080333:
					return 405;
					break;
				
				case -474112444:
					return 488;
					break;
				
				case 387223451:
					return 489;
					break;
				
				case 617753366:
					return 490;
					break;
				
				case -222378256:
					return 491;
					break;
				
				case 8741501:
					return 492;
					break;
				
				case -601286203:
					return 493;
					break;
				
				case -511433605:
					return 494;
					break;
				
				case -655387818:
					return 495;
					break;
				
				case -282476598:
					return 496;
					break;
				
				case 1739501925:
					return 497;
					break;
				
				case 1178671645:
					return 498;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
					break;
				
				case -568352468:
					return 407;
					break;
				
				case 1362433589:
					return 408;
					break;
				
				case 1346235024:
					return 409;
					break;
				
				case -570355066:
					return 410;
					break;
				
				case -2023373174:
					return 411;
					break;
				
				case 2076495324:
					return 412;
					break;
				
				case 1108334355:
					return 413;
					break;
				
				case 77277509:
					return 414;
					break;
				
				case -966040254:
					return 415;
					break;
				
				case -1489156508:
					return 416;
					break;
				
				case -1181482284:
					return 417;
					break;
				
				case -932732805:
					return 418;
					break;
				
				case -569259057:
					return 419;
					break;
				
				case -326080308:
					return 420;
					break;
				
				case 48731514:
					return 421;
					break;
				
				case 880736428:
					return 422;
					break;
				
				case 1303784126:
					return 423;
					break;
				
				case -1654288262:
					return 424;
					break;
				
				case -415870039:
					return 425;
					break;
				
				case -109086661:
					return 426;
					break;
				
				case -737430213:
					return 532;
					break;
				
				case 1125852043:
					return 533;
					break;
				
				case 886015732:
					return 534;
					break;
				
				case -1262287139:
					return 535;
					break;
				
				case -295208411:
					return 536;
					break;
				
				case -544154504:
					return 537;
					break;
				
				case 172765678:
					return 538;
					break;
				
				case -1982877449:
					return 539;
					break;
				
				case 2072122460:
					return 540;
					break;
				
				case -1986220171:
					return 541;
					break;
				
				case 1377355801:
					return 542;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
					break;
				
				case -829683854:
					return 428;
					break;
				
				case -1055790298:
					return 429;
					break;
				
				case -1928301566:
					return 430;
					break;
				
				case -424845447:
					return 431;
					break;
				
				case -1876057490:
					return 432;
					break;
				
				case 1246324211:
					return 433;
					break;
				
				case 1205768792:
					return 434;
					break;
				
				case 1709866683:
					return 435;
					break;
				
				case -1434287169:
					return 436;
					break;
				
				case 259780317:
					return 510;
					break;
				
				case -1973342474:
					return 511;
					break;
				
				case 1996130345:
					return 512;
					break;
				
				case -1455657812:
					return 513;
					break;
				
				case -1668263084:
					return 514;
					break;
				
				case 1308243489:
					return 515;
					break;
				
				case 1122574335:
					return 516;
					break;
				
				case 1420313469:
					return 517;
					break;
				
				case 109848390:
					return 518;
					break;
				
				case 593945703:
					return 519;
					break;
				
				case 1142457062:
					return 520;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
					break;
				
				case -422587990:
					return 438;
					break;
				
				case -193998727:
					return 439;
					break;
				
				case -515203373:
					return 440;
					break;
				
				case 1842849902:
					return 441;
					break;
				
				case -679861550:
					return 442;
					break;
				
				case 2076495324:
					return 443;
					break;
				
				case 1108334355:
					return 444;
					break;
				
				case -966040254:
					return 445;
					break;
				
				case 1528590652:
					return 446;
					break;
				
				case -2089531990:
					return 447;
					break;
				
				case -1181482284:
					return 448;
					break;
				
				case -932732805:
					return 449;
					break;
				
				case -569259057:
					return 450;
					break;
				
				case -326080308:
					return 451;
					break;
				
				case 48731514:
					return 452;
					break;
				
				case 880736428:
					return 453;
					break;
				
				case 1303784126:
					return 454;
					break;
				
				case -1654288262:
					return 455;
					break;
				
				case 941317513:
					return 456;
					break;
				
				case 1748450780:
					return 457;
					break;
				
				case -1869284448:
					return 521;
					break;
				
				case 1931539634:
					return 522;
					break;
				
				case 1624199183:
					return 523;
					break;
				
				case -26834113:
					return 524;
					break;
				
				case -210406055:
					return 525;
					break;
				
				case 423313640:
					return 526;
					break;
				
				case 276639596:
					return 527;
					break;
				
				case -991356863:
					return 528;
					break;
				
				case -1682848301:
					return 529;
					break;
				
				case 996213771:
					return 530;
					break;
				
				case -1214048550:
					return 531;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
					break;
				
				case 231258687:
					return 459;
					break;
				
				case 284438159:
					return 460;
					break;
				
				case 15712037:
					return 461;
					break;
				
				case -958864266:
					return 462;
					break;
				
				case 1108334355:
					return 463;
					break;
				
				case 77277509:
					return 464;
					break;
				
				case 899381934:
					return 465;
					break;
				
				case 654802123:
					return 466;
					break;
				
				case -1069552225:
					return 499;
					break;
				
				case 11918884:
					return 500;
					break;
				
				case 176157112:
					return 501;
					break;
				
				case -220052855:
					return 502;
					break;
				
				case 288456487:
					return 503;
					break;
				
				case 398658626:
					return 504;
					break;
				
				case 628697006:
					return 505;
					break;
				
				case 925911836:
					return 506;
					break;
				
				case 1222307441:
					return 507;
					break;
				
				case 552442715:
					return 508;
					break;
				
				case -648943513:
					return 509;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
					break;
				
				case -273676760:
					return 468;
					break;
				
				case -89655827:
					return 469;
					break;
				
				case 1130501904:
					return 470;
					break;
				
				case -1449330342:
					return 471;
					break;
				
				case -2111807319:
					return 472;
					break;
				
				case 2076495324:
					return 473;
					break;
				
				case 1108334355:
					return 474;
					break;
				
				case -944910075:
					return 475;
					break;
				
				case 1060929921:
					return 476;
					break;
				
				case 1704640795:
					return 477;
					break;
				
				case 1005743559:
					return 478;
					break;
				
				case -2089531990:
					return 479;
					break;
				
				case -1181482284:
					return 480;
					break;
				
				case -932732805:
					return 481;
					break;
				
				case -569259057:
					return 482;
					break;
				
				case -326080308:
					return 483;
					break;
				
				case 48731514:
					return 484;
					break;
				
				case 880736428:
					return 485;
					break;
				
				case 1303784126:
					return 486;
					break;
				
				case -1654288262:
					return 487;
					break;
				
				case -1371515465:
					return 543;
					break;
				
				case -1190793877:
					return 544;
					break;
				
				case -1497085720:
					return 545;
					break;
				
				case -1803148180:
					return 546;
					break;
				
				case -1975971886:
					return 547;
					break;
				
				case 36929477:
					return 548;
					break;
				
				case -268444834:
					return 549;
					break;
				
				case -574769446:
					return 550;
					break;
				
				case -882699739:
					return 551;
					break;
				
				case -1468181474:
					return 552;
					break;
				
				case -974541230:
					return 553;
					break;
			}
			break;
		
		case -1355376991:
			switch (iParam0)
			{
				case -673450233:
					return 554;
					break;
			}
			break;
		
		case 727643628:
			switch (iParam0)
			{
				case 1423184737:
					return 555;
					break;
				
				case -2122814295:
					return 556;
					break;
				
				case -1828202758:
					return 557;
					break;
			}
			break;
	}
	return 0;
}

var func_876(int iParam0, int iParam1, var uParam2)
{
	uVar0 = func_21(func_877(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_877(int iParam0, int iParam1)
{
	iVar0 = func_874(iParam0, iParam1);
	iVar1 = func_589(iVar0);
	if ((func_588() == 0 || func_587() == 0) || (func_588() == 999 && func_587() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
		}
	}
	return 1753;
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
			return 1;
			break;
		
		case -1074790547:
			return 1;
			break;
		
		case 2144741730:
			return 1;
			break;
		
		case 205991906:
			return 1;
			break;
		
		case -2084633992:
			return 1;
			break;
		
		case 736523883:
			return 1;
			break;
		
		case 2132975508:
		case -952879014:
		case 487013001:
		case -1045183535:
		case -1076751822:
		case -1063057011:
			return 1;
			break;
	}
	return 0;
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 1;
			break;
	}
	return 0;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 453432689:
		case 1593441988:
		case 584646201:
		case 324215364:
		case 736523883:
		case -1074790547:
		case -2084633992:
		case -1357824103:
		case -1660422300:
		case 2144741730:
		case 487013001:
		case 2017895192:
		case -494615257:
		case 100416529:
		case 205991906:
		case -1568386805:
		case -1312131151:
		case 1119849093:
		case -1813897027:
		case -37975472:
		case 741814745:
		case 615608432:
		case 1233104067:
		case -1716189206:
		case 1737195953:
		case 1317494643:
		case -1716589765:
		case -270015777:
		case -947031628:
		case -1654528753:
		case -572349828:
		case 392730790:
		case -1063057011:
		case -102323637:
		case 2132975508:
		case -771403250:
		case -1076751822:
		case -1834847097:
		case 137902532:
		case 1627465347:
		case 1198879012:
		case 2138347493:
		case -1466123874:
		case -1523701417:
		case 984333226:
		case -952879014:
		case 1672152130:
		case -1420407917:
		case 126349499:
		case 171789620:
		case -656458692:
		case -598887786:
		case -102973651:
		case 1649403952:
		case -275439685:
		case -581044007:
		case -619010992:
		case -1951375401:
		case -1045183535:
		case -538741184:
		case 883325847:
		case -1786099057:
		case -2067956739:
		case 1141786504:
		case 317205821:
		case -1121678507:
		case 125959754:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case -1075685676:
		case 2024373456:
		case -2066285827:
		case 1785463520:
		case 1432025498:
		case -879347409:
		case -2009644972:
		case -1768145561:
		case -1746263880:
		case 940833800:
		case -1355376991:
		case 1198256469:
		case -1238556825:
		case -1853920116:
		case 727643628:
			return 1;
			break;
	}
	return 0;
}

int func_881(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return -1075685676;
			
			case 5:
				return 2024373456;
			
			case 8:
				return 961495388;
			
			case 9:
				return -86904375;
			
			case 13:
				return -608341376;
			
			case 21:
				return 177293209;
			
			default:
		}
		switch (iParam0)
		{
			case 22:
				return 1432025498;
			
			case 46:
				return -1768145561;
			
			case 47:
				return -2009644972;
			
			case 56:
				return 1785463520;
			
			case 70:
				return -879347409;
			
			case 48:
				return -2066285827;
			}
		
		default:
	}
	switch (iParam0)
	{
		case 34:
			return -1716189206;
			break;
		
		case 1:
			return 453432689;
			break;
		
		case 2:
			return 1593441988;
			break;
		
		case 3:
			return 584646201;
			break;
		
		case 5:
			return 736523883;
			break;
		
		case 7:
			return 324215364;
			break;
		
		case 8:
			return -1074790547;
			break;
		
		case 9:
			return -2084633992;
			break;
		
		case 11:
			return -1357824103;
			break;
		
		case 12:
			return -1660422300;
			break;
		
		case 13:
			return 2144741730;
			break;
		
		case 15:
			return 741814745;
			break;
		
		case 16:
			return -1813897027;
			break;
		
		case 17:
			return -37975472;
			break;
		
		case 60:
			return -1420407917;
			break;
		
		case 18:
			return 856002082;
			break;
		
		case 20:
			return 100416529;
			break;
		
		case 21:
			return 205991906;
			break;
		
		case 56:
			return -952879014;
			break;
		
		case 22:
			return 487013001;
			break;
		
		case 24:
			return -494615257;
			break;
		
		case 25:
			return 2017895192;
			break;
		
		case 55:
			return 984333226;
			break;
		
		case 26:
			return -1568386805;
			break;
		
		case 27:
			return -1312131151;
			break;
		
		case 28:
			return 1119849093;
			break;
		
		case 61:
			return 1672152130;
			break;
		
		case 31:
			return 911657153;
			break;
		
		case 33:
			return -72657034;
			break;
		
		case 35:
			return 1737195953;
			break;
		
		case 43:
			return 883325847;
			break;
		
		case 45:
			return -102323637;
			break;
		
		case 46:
			return -1063057011;
			break;
		
		case 47:
			return -1076751822;
			break;
		
		case 48:
			return 2132975508;
			break;
		
		case 49:
			return -771403250;
			break;
		
		case 23:
			return -1654528753;
			break;
		
		case 50:
			return 1627465347;
			break;
		
		case 51:
			return -1834847097;
			break;
		
		case 52:
			return 137902532;
			break;
		
		case 57:
			return 1198879012;
			break;
		
		case 53:
			return -1466123874;
			break;
		
		case 54:
			return 2138347493;
			break;
		
		case 58:
			return -102973651;
			break;
		
		case 59:
			return 1834241177;
			break;
		
		case 64:
			return 171789620;
			break;
		
		case 62:
			return -656458692;
			break;
		
		case 63:
			return -598887786;
			break;
		
		case 65:
			return -581044007;
			break;
		
		case 68:
			return -619010992;
			break;
		
		case 66:
			return -275439685;
			break;
		
		case 67:
			return 1649403952;
			break;
		
		case 69:
			return -1951375401;
			break;
		
		case 70:
			return -1045183535;
			break;
		
		case 71:
			return -538741184;
			break;
		
		case 36:
			return 1317494643;
			break;
		
		case 4:
			return -1716589765;
			break;
		
		case 6:
			return -270015777;
			break;
		
		case 41:
			return 615608432;
			break;
		
		case 39:
			return 1141786504;
			break;
		
		case 38:
			return -2067956739;
			break;
		
		case 37:
			return -1786099057;
			break;
		
		case 72:
			return 317205821;
			break;
		
		case 73:
			return -1121678507;
			break;
		
		case 74:
			return 125959754;
			break;
		
		case 75:
			return -853065399;
			break;
		
		case 76:
			return -1169823560;
			break;
		
		case 77:
			return -1810795771;
			break;
		
		case 78:
			return 419712736;
			break;
		
		case 79:
			return -1746263880;
			break;
		
		case 80:
			return 940833800;
			break;
		
		case 81:
			return -1355376991;
			break;
		
		case 82:
			return 1198256469;
			break;
		
		case 83:
			return -1238556825;
			break;
		
		case 84:
			return -1853920116;
			break;
		
		case 85:
			return 727643628;
			break;
	}
	return -1569615261;
}

int func_882()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_852())
		{
			return 0;
		}
		if (func_850(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_883(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_856();
			}
			else
			{
				return 0;
			}
		}
		if (!func_884())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_856();
					}
					else
					{
						return 0;
					}
				}
				if (func_852())
				{
					if (!bParam2)
					{
						func_856();
					}
					else
					{
						return 0;
					}
				}
				if (func_850(157))
				{
					if (!bParam2)
					{
						func_856();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_856();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_856();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_856();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_884()
{
	return Global_1312854;
}

