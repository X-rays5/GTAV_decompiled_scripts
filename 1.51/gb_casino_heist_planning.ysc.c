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
	iLocal_14 = -1;
	fLocal_15 = 0,001f;
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
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0,5f;
	if (!func_1228(&Global_1696433))
	{
		func_1225();
	}
	while (true)
	{
		wait(0);
		func_1(&Global_1696433);
	}
}

void func_1(var uParam0)
{
	func_1221(uParam0);
	switch (func_1220())
	{
		case 0:
			if (func_1209(uParam0))
			{
				func_1208(1);
			}
			break;
		
		case 1:
			func_3(uParam0);
			break;
		
		case 2:
			func_1225();
			break;
	}
	func_2();
}

void func_2()
{
	Global_1696428 = 0;
}

void func_3(var uParam0)
{
	func_1091(uParam0);
	func_914(uParam0);
	func_535(uParam0);
	func_199(uParam0);
	func_188(uParam0);
	func_63(uParam0);
	func_23(uParam0);
	func_20(uParam0);
	func_4(uParam0);
}

void func_4(var uParam0)
{
	if (unk_0xD803B885F5E47A62() != uParam0->f_4356)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_19(uParam0, iVar0) && !func_18(uParam0, iVar0))
		{
			if (func_12(uParam0, iVar0))
			{
				func_10(func_11(iVar0), -1);
				func_5(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_5(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4353.f_1, iParam1))
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_4353.f_1), iParam1);
	}
	iVar0 = func_9(8722, -1, 0);
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam1))
	{
		unk_0x5D96D8530B3D0904(&iVar0, iParam1);
		func_6(8722, iVar0, -1, 1, 0);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312745;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_7(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_10(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

char* func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CH_PLAN_HLP_0";
		
		case 1:
			return "CH_PLAN_HLP_1";
		
		case 2:
			return "CH_PLAN_HLP_2";
		
		case 3:
			return "CH_PLAN_HLP_3";
		
		case 4:
			return "CH_PLAN_HLP_4";
		
		case 5:
			return "CH_PLAN_HLP_5";
		
		case 6:
			return "CH_PLAN_HLP_6";
		
		case 7:
			return "CH_PLAN_HLP_7";
		
		case 8:
			return "CH_PLAN_HLP_8";
		
		case 9:
			return "CH_PLAN_HLP_9";
		
		case 10:
			return "CH_PLAN_HLP_10";
		
		case 11:
			return "CH_PLAN_HLP_11";
		
		case 12:
			return "CH_PLAN_HLP_12";
		
		case 13:
			return "CH_PLAN_HLP_13";
		
		case 14:
			return "CH_PLAN_HLP_14";
		
		case 15:
			return "CH_PLAN_HLP_15";
		
		default:
	}
	return "";
}

bool func_12(var uParam0, int iParam1)
{
	if (((func_17(uParam0, 1) || uParam0->f_2604) || func_16(uParam0)) || (func_15() && func_14() != 33))
	{
		return 0;
	}
	if (func_13(iParam1))
	{
		return 1;
	}
	return !unk_0xFEBC1E4EC9E001F0();
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 6:
			return 0;
		
		default:
	}
	return 1;
}

int func_14()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196;
}

bool func_15()
{
	return Global_1590535[unk_0xD803B885F5E47A62()].f_196 != 0;
}

int func_16(var uParam0)
{
	if (uParam0->f_4173.f_8 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_17(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_4357, iParam1);
}

bool func_18(var uParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(func_9(8722, -1, 0), iParam1))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_4353.f_1, iParam1);
}

bool func_19(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_4353, iParam1);
}

void func_20(var uParam0)
{
	bVar0 = unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2714,045f, -365,8374f, -55,7809f, 2714,005f, -373,1754f, -53,7809f, 5,25f, 0, true, 0);
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4357, 8))
	{
		if (bVar0)
		{
			if (func_22())
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_4357), 8);
			}
		}
	}
	else if (!bVar0)
	{
		func_21();
		unk_0x0674E58A79778E99(&(uParam0->f_4357), 8);
	}
}

void func_21()
{
	unk_0x42740B44BA8D7B43("DLC_MPHEIST/HEIST_PLANNING_BOARD");
}

bool func_22()
{
	return unk_0xAE317D00A5A55DF6("DLC_MPHEIST/HEIST_PLANNING_BOARD", false, -1);
}

void func_23(var uParam0)
{
	if (func_14() == 31)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (func_62(uParam0, iVar0))
		{
			if (func_33(uParam0, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				Jump @123; //curOff = 59
				if (func_31(uParam0, iVar0))
				{
					Var2 = { func_30() };
					Var8 = { func_28(uParam0, iVar0) };
					if (unk_0x7F8A39872A07D2CE(&Var2, &Var8) && !unk_0xEA6BC48857E0AC4C(&Var2))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar0++;
					}
					if (uParam0->f_4173.f_8 != iVar1)
					{
						if (uParam0->f_4173.f_8 == 76 && iVar1 == -1)
						{
							func_25(uParam0, 76);
							func_24(uParam0, 76);
						}
						uParam0->f_4173.f_8 = iVar1;
					}
				}

void func_24(var uParam0, int iParam1)
{
	if (iParam1 == -1 || iParam1 == 77)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_4173[(iParam1 / 32)], (iParam1 % 32)))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_4173[(iParam1 / 32)]), (iParam1 % 32));
	}
}

void func_25(var uParam0, int iParam1)
{
	if (func_31(uParam0, iParam1))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_4173.f_4[(iParam1 / 32)]), (iParam1 % 32));
		func_26(iParam1);
	}
}

void func_26(int iParam0)
{
	if (func_27(iParam0) != 11511)
	{
		iVar0 = func_9(func_27(iParam0), -1, 0);
		unk_0x0674E58A79778E99(&iVar0, (iParam0 % 32));
		func_6(func_27(iParam0), iVar0, -1, 1, 0);
	}
}

int func_27(int iParam0)
{
	switch ((iParam0 / 32))
	{
		case 0:
			return 8828;
		
		case 1:
			return 8829;
		
		case 2:
			return 8830;
		
		default:
	}
	return 11511;
}

struct<6> func_28(var uParam0, int iParam1)
{
	StringCopy(&Var0, func_29(uParam0, iParam1), 24);
	return Var0;
}

char* func_29(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "HS3LE_SB_1";
		
		case 1:
			return "HS3LE_SB_2";
		
		case 2:
			return "HS3LE_SB_3";
		
		case 3:
			return "HS3LE_SB_4";
		
		case 4:
			return "HS3LE_SB_5";
		
		case 5:
			return "HS3LE_SB_7";
		
		case 6:
			return "HS3LE_SB_9";
		
		case 7:
			return "HS3LE_SB_6";
		
		case 8:
			return "HS3LE_SB_8";
		
		case 9:
			return "HS3LE_SB_10";
		
		case 10:
			return "HS3LE_PB_1";
		
		case 11:
			if (uParam0->f_4356 != -1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1700796[uParam0->f_4356].f_42, 6))
				{
					return "HS3LE_PB_2B";
				}
			}
			return "HS3LE_PB_2";
		
		case 12:
			return "HS3LE_PB_3";
		
		case 13:
			return "HS3LE_PB_19";
		
		case 14:
			return "HS3LE_PB_6";
		
		case 15:
			return "HS3LE_PB_5";
		
		case 16:
			return "HS3LE_PB_4";
		
		case 17:
			return "HS3LE_PB_7";
		
		case 18:
			return "HS3LE_PB_8";
		
		case 19:
			return "HS3LE_PB_9";
		
		case 20:
			return "HS3LE_PB_10";
		
		case 21:
			return "HS3LE_PB_10B";
		
		case 22:
			return "HS3LE_PB_10C";
		
		case 23:
			return "HS3LE_PB_11";
		
		case 24:
			return "HS3LE_PB_11B";
		
		case 25:
			return "HS3LE_PB_12";
		
		case 26:
			return "HS3LE_PB_13";
		
		case 27:
			return "HS3LE_PB_14";
		
		case 28:
			return "HS3LE_PB_15";
		
		case 29:
			return "HS3LE_PB_16";
		
		case 30:
			return "HS3LE_PB_17";
		
		case 31:
			return "HS3LE_PB_18";
		
		case 32:
			return "HS3LE_GC_1";
		
		case 33:
			return "HS3LE_GC_2";
		
		case 34:
			return "HS3LE_GC_3";
		
		case 35:
			return "HS3LE_GC_4";
		
		case 36:
			return "HS3LE_GC_5";
		
		case 37:
			return "HS3LE_DC_1";
		
		case 38:
			return "HS3LE_DC_2";
		
		case 39:
			return "HS3LE_DC_3";
		
		case 40:
			return "HS3LE_DC_4";
		
		case 41:
			return "HS3LE_DC_5";
		
		case 42:
			return "HS3LE_HC_1";
		
		case 43:
			return "HS3LE_HC_2";
		
		case 44:
			return "HS3LE_HC_3";
		
		case 45:
			return "HS3LE_HC_4";
		
		case 46:
			return "HS3LE_HC_5";
		
		case 47:
			return "HS3LE_FB_1";
		
		case 48:
			return "HS3LE_FB_2";
		
		case 49:
			return "HS3LE_FB_3";
		
		case 50:
			return "HS3LE_FB_4";
		
		case 51:
			return "HS3LE_FB_5";
		
		case 52:
			return "HS3LE_FB_6";
		
		case 53:
			return "HS3LE_FB_8";
		
		case 54:
			return "HS3LE_FB_7A";
		
		case 55:
			return "HS3LE_FB_9";
		
		case 56:
			return "HS3LE_FB_10";
		
		case 57:
			return "HS3LE_FB_11";
		
		case 58:
			return "HS3LE_FB_12";
		
		case 59:
			return "HS3LE_FB_13";
		
		case 60:
			return "HS3LE_FB_14";
		
		case 61:
			return "HS3LE_SR_1";
		
		case 62:
			return "HS3LE_SR_2";
		
		case 63:
			return "HS3LE_SR_3";
		
		case 64:
			return "HS3LE_SR_4";
		
		case 65:
			return "HS3LE_SR_5";
		
		case 66:
			return "HS3LE_SR_6";
		
		case 67:
			return "HS3LE_SR_7";
		
		case 68:
			return "HS3LE_PR_1";
		
		case 69:
			return "HS3LE_PR_2";
		
		case 70:
			return "HS3LE_FR_1";
		
		case 71:
			return "HS3LE_FR_2";
		
		case 72:
			return "HS3LE_FR_3";
		
		case 73:
			return "HS3LE_FR_4";
		
		case 74:
			return "HS3LE_FR_5";
		
		case 75:
			return "HS3PR_GN_8";
		
		case 76:
			return "HS3PR_GN_9";
		
		default:
	}
	return "";
}

struct<6> func_30()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_31(var uParam0, int iParam1)
{
	if (func_32(iParam1) || unk_0xEAE0D21A50E6C7F4(uParam0->f_4173.f_4[(iParam1 / 32)], (iParam1 % 32)))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
{
	if (func_27(iParam0) != 11511)
	{
		return unk_0xEAE0D21A50E6C7F4(func_9(func_27(iParam0), -1, 0), (iParam0 % 32));
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	if (func_31(uParam0, iParam1))
	{
		return 0;
	}
	if (!func_61())
	{
		MemCopy(&sVar0, {func_28(uParam0, iParam1)}, 4);
		if (!unk_0xEA6BC48857E0AC4C(&sVar0))
		{
			func_60(&(uParam0->f_4173.f_9), 2, 0, "LESTER", 0, 1);
			if (func_36(&(uParam0->f_4173.f_9), func_59(&sVar0), &sVar0, 9, 0, 0, 0))
			{
				func_34(uParam0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_34(var uParam0, int iParam1)
{
	if (!func_31(uParam0, iParam1))
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_4173.f_4[(iParam1 / 32)]), (iParam1 % 32));
		func_35(iParam1);
	}
}

void func_35(int iParam0)
{
	if (func_27(iParam0) != 11511)
	{
		iVar0 = func_9(func_27(iParam0), -1, 0);
		unk_0x5D96D8530B3D0904(&iVar0, (iParam0 % 32));
		func_6(func_27(iParam0), iVar0, -1, 1, 0);
	}
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_55();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_43();
		func_38();
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
		func_57();
	}
	return 0;
}

void func_38()
{
	if (!func_39())
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

int func_39()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_42())
	{
		return 0;
	}
	if (func_40(unk_0xD803B885F5E47A62()))
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

bool func_40(int iParam0)
{
	return func_41(iParam0, 20);
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_42()
{
	return -1;
}

void func_43()
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

void func_44()
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

int func_45()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
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

void func_47()
{
	if (func_54(14))
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
		Global_19486 = func_48();
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

var func_48()
{
	func_49();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_49()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_52(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_51(unk_0x16F2683693E537C9());
			if (func_50(iVar0) && (!func_54(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_50(Global_111638.f_2358.f_539.f_4321))
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

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_54(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

char* func_59(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, "HS3PR_GN_8") || unk_0x7F8A39872A07D2CE(sParam0, "HS3PR_GN_9"))
	{
		return "HS3PRAU";
	}
	return "HS3LEAU";
}

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_61()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)
{
	if (func_31(uParam0, iParam1))
	{
		if (uParam0->f_4173.f_178 && iParam1 == 51)
		{
			uParam0->f_4173.f_178 = 0;
		}
		return 0;
	}
	if (uParam0->f_4173.f_178 && iParam1 == 51)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_4173[(iParam1 / 32)]), (iParam1 % 32));
		uParam0->f_4173.f_178 = 0;
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_4173[(iParam1 / 32)], (iParam1 % 32));
}

void func_63(var uParam0)
{
	if (uParam0->f_4361)
	{
		unk_0x0D3BE1DE0262A012("MPHeist3Planning", false);
		if (func_186(0, -1, 0) && unk_0x27117E2CDD4D67C3("MPHeist3Planning"))
		{
			if (!uParam0->f_4362)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "INFO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_185(0, 0);
				func_183(1, "MPHeist3Planning", "HeistDetailsPannel");
				if (func_182(uParam0))
				{
					func_168(uParam0);
				}
				else if (func_167(uParam0))
				{
					func_135(uParam0);
				}
				else if (func_134(uParam0))
				{
					func_130(uParam0);
				}
				else if (func_129(uParam0))
				{
					func_123(uParam0);
				}
				else if (func_122(uParam0))
				{
					func_118(uParam0);
				}
				else if (func_117(uParam0))
				{
					func_108(uParam0);
				}
				uParam0->f_4362 = 1;
			}
			func_67(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
	}
	else if (uParam0->f_4362)
	{
		func_64(1, -1);
		unk_0xF5A41F3D3B38EFE3("MPHeist3Planning");
		uParam0->f_4362 = 0;
	}
}

void func_64(bool bParam0, int iParam1)
{
	if (!func_66(&iVar0, 0, iParam1))
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
		func_65(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_65(int iParam0)
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

int func_66(var uParam0, bool bParam1, int iParam2)
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

void func_67(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_66(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_106(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0,05f, -0,05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_104(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_103())
		{
			iVar60 = round((to_float(iVar61) * fVar63));
		}
		fVar64 = (to_float(iVar60) / to_float(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_103())
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
			func_99(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar65, func_98(29), 64);
					StringCopy(&cVar81, func_95(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_94(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
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
				func_94(Global_22347, (Global_22348 + fVar57), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0,034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_93();
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
					func_93();
					func_91((((Global_22347 + fParam5) - 0,00390625f) - func_92("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_93();
						func_91((((Global_22347 + fParam5) - 0,00390625f) - func_92("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0,00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
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
				func_94(Global_22347, (fVar51 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_104(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_90(fVar42);
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
				func_94(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_90(fVar42);
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
					func_104(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_89(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_98(Global_22350.f_4768), func_95(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
					func_104(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_90(fVar42);
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
				func_94(Global_22347, (fVar51 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_90(fVar42);
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
					func_104(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_89(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x539E86AE011A8B38(func_98(Global_4268421.f_67), func_95(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar51 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
			func_82(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_80(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
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
												if (func_104(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_89(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_98(26), func_95(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_89(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_98(27), func_95(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										func_80(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_79(bVar32);
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
												if (func_104(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (func_104(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_89(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_98(Global_22350.f_4433[(iVar22 + iVar28)]), func_95(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_98(Global_22350.f_4433[(iVar22 + iVar28)]), func_95(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
											if (func_78() && unk_0x8A22C4C08282BF26(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_80(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
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
												if (func_104(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_104(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_89(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_98(Global_22350.f_4433[(iVar22 + iVar14)]), func_95(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_98(Global_22350.f_4433[(iVar22 + iVar14)]), func_95(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_98(Global_22350.f_4433[(iVar22 + iVar14)]), func_95(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
										func_80(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_79(bVar32);
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
										if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_89(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_98(26), func_95(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_89(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_98(27), func_95(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_80(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_77((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
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
										func_80(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_79(bVar32);
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
										if (func_104(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0,5f);
											if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_89(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_98(26), func_95(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0,5f);
											if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_89(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_98(27), func_95(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_80(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_76((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_104(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0,5f);
												if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_89(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_98(26), func_95(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0,5f);
												if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_89(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_98(27), func_95(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_104(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_89(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x539E86AE011A8B38(func_98(Global_22350.f_4433[iVar22]), func_95(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar56 * 0,5f)), (fVar36 * func_75(Global_22350.f_4433[iVar22])), (fVar37 * func_75(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
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
								if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_69(0);
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
		func_68(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_68(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_69(int iParam0)
{
	if (func_74())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_73(0))
		{
			func_70(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_70(int iParam0)
{
	if (func_74())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_72())
		{
			func_71(1, 1);
		}
		else
		{
			func_71(0, 0);
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
	if (!func_45())
	{
		Global_19486.f_1 = 3;
	}
}

void func_71(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_73(0))
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

bool func_72()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_73(int iParam0)
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

bool func_74()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_75(int iParam0)
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

void func_76(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_77(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_78()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_79(bool bParam0)
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

void func_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_81(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_81(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_66(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_106(bParam4, bParam8))
	{
		return;
	}
	if (func_87())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_85(unk_0xD803B885F5E47A62(), 0))
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
					func_84(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_84(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_83(&(Global_22350.f_4964[iVar1]));
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
				func_84(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_83(&(Global_4268421.f_16));
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

void func_83(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_84(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_85(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_86(-1, 0) == 8;
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

int func_86(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_87()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_88())
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

int func_88()
{
	if (unk_0x8A22C4C08282BF26(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_89(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_90(float fParam0)
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

void func_91(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_92(char* sParam0, int iParam1, int iParam2)
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
	func_93();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_93()
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

void func_94(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_95(int iParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_97(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_96(&uVar3);
			}
		}
		else
		{
			return func_96(&(Global_22350.f_7029[iParam0]));
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

var func_96(var uParam0)
{
	return uParam0;
}

struct<13> func_97(int iParam0)
{
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_98(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_97(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_96(&uVar0);
		}
		else
		{
			return func_96(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_99(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_102(Global_22350.f_5218, 1);
	}
	else
	{
		func_102(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_101(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_104(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_100(&(Global_22350.f_73[Global_22350.f_5220]));
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

float func_100(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0,35f, 0);
}

float func_101(char* sParam0)
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
	func_80(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_102(int iParam0, bool bParam1)
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

int func_103()
{
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_98(iParam0), 64);
	StringCopy(&cVar16, func_95(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = unk_0x33D480CCE15C991A(0);
			if (func_103())
			{
				iVar32 = round((to_float(iVar33) * fVar35));
			}
			fVar36 = (to_float(iVar32) / to_float(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_103())
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
		vVar37.x = (vVar37.x * (func_105(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_105(iParam0) / fVar34));
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

float func_105(int iParam0)
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

int func_106(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_56(8, -1) && func_107() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_107()
{
	return Global_1312812;
}

void func_108(var uParam0)
{
	func_115(func_116(uParam0));
	func_114(-1, 1, 1);
	if (uParam0->f_2593 == 6 || uParam0->f_2593 == 7)
	{
		func_111(func_112(uParam0), 0, 0);
		func_109(func_110(uParam0->f_2593));
	}
	else
	{
		func_111(func_112(uParam0), 0, 0);
	}
}

void func_109(int iParam0)
{
	if (Global_22350.f_4763 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 2;
	Global_22350.f_4762++;
	Global_22350.f_4701[Global_22350.f_4763] = iParam0;
	Global_22350.f_4763++;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return Global_262145.f_28041;
		
		case 7:
			return Global_262145.f_28040;
		
		default:
	}
	return -1;
}

void func_111(char* sParam0, int iParam1, int iParam2)
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

char* func_112(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 2:
			switch (uParam0->f_2593)
			{
				case 2:
					return "CH_DP_FB_D_0";
				
				case 3:
					return "CH_DP_FB_D_1";
				
				case 4:
					return "CH_DP_FB_D_2";
				
				case 13:
					return "CH_DP_FB_D_3";
				
				case 14:
					return "CH_DP_FB_D_4";
				
				case 15:
					if (func_113(uParam0->f_4356) == 2 && uParam0->f_1497.f_1020 != 4)
					{
						return "CH_DP_FB_D_5b";
					}
					return "CH_DP_FB_D_5";
				
				case 5:
					return "CH_DP_FB_D_6";
				
				case 16:
					return "CH_DP_FB_D_7";
				
				case 17:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_FB_D_8a";
						
						case 2:
							return "CH_DP_FB_D_8b";
						
						case 3:
							return "CH_DP_FB_D_8c";
						
						default:
					}
					break;
				
				case 6:
					return "CH_DP_FB_D_9";
				
				case 7:
					return "CH_DP_FB_D_10";
			}
			break;
	}
	return "";
}

int func_113(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_4;
	}
	return 0;
}

void func_114(int iParam0, bool bParam1, int iParam2)
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

void func_115(char* sParam0)
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

char* func_116(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 2:
			switch (uParam0->f_2593)
			{
				case 2:
					return "CH_DP_FB_T_0";
				
				case 3:
					return "CH_DP_FB_T_1";
				
				case 4:
					return "CH_DP_FB_T_2";
				
				case 13:
					return "CH_DP_FB_T_3";
				
				case 14:
					return "CH_DP_FB_T_4";
				
				case 15:
					return "CH_DP_FB_T_5";
				
				case 5:
					return "CH_DP_FB_T_6";
				
				case 16:
					return "CH_DP_FB_T_7";
				
				case 17:
					return "CH_DP_FB_T_8";
				
				case 6:
					return "CH_DP_FB_T_9";
				
				case 7:
					return "CH_DP_FB_T_10";
				
				default:
			}
			break;
	}
	return "";
}

int func_117(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 2:
			switch (uParam0->f_2593)
			{
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_118(var uParam0)
{
	func_115("CH_DP_TARGET");
	func_114(-1, 1, 1);
	func_111("CH_DETAILSh", 0, 0);
	func_119(func_120(func_121(uParam0->f_4356), 0));
}

void func_119(char* sParam0)
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

char* func_120(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!bParam1)
			{
				return "CH_TARGET_0b";
			}
			return "CH_TARGET_0";
		
		case 1:
			if (!bParam1)
			{
				return "CH_TARGET_1b";
			}
			return "CH_TARGET_1";
		
		case 2:
			if (!bParam1)
			{
				return "CH_TARGET_2b";
			}
			return "CH_TARGET_2";
		
		case 3:
			if (!bParam1)
			{
				return "CH_TARGET_3b";
			}
			return "CH_TARGET_3";
		
		default:
	}
	return "";
}

int func_121(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_7;
	}
	return 0;
}

int func_122(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 0:
			switch (uParam0->f_2593)
			{
				case 8:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_123(var uParam0)
{
	func_115(func_128(uParam0, uParam0->f_2593));
	func_114(-1, 1, 1);
	if (uParam0->f_2593 == 2)
	{
		func_111("CH_DETAILSf", 0, 0);
		func_119(func_127(uParam0, uParam0->f_2593));
		func_109(func_125(uParam0, uParam0->f_2593));
	}
	else
	{
		func_111("CH_DETAILSg", 0, 0);
		func_119(func_127(uParam0, uParam0->f_2593));
		func_109(func_125(uParam0, uParam0->f_2593));
		func_119(func_124(uParam0, uParam0->f_2593));
	}
}

char* func_124(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return "";
		
		case 4:
			return "CH_DP_PUR_PN_1";
		
		case 3:
			return "CH_DP_PUR_PN_2";
		
		default:
	}
	return "";
}

int func_125(var uParam0, int iParam1)
{
	return func_126(iParam1);
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_28022;
		
		case 4:
			return Global_262145.f_28024;
		
		case 3:
			return Global_262145.f_28023;
		
		default:
	}
	return -1;
}

char* func_127(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return "CH_DP_PUR_D_0";
		
		case 4:
			return "CH_DP_PUR_D_1";
		
		case 3:
			return "CH_DP_PUR_D_2";
		
		default:
	}
	return "";
}

char* func_128(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return "CH_DP_PUR_T_0";
		
		case 4:
			return "CH_DP_PUR_T_1";
		
		case 3:
			return "CH_DP_PUR_T_2";
		
		default:
	}
	return "";
}

int func_129(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 0:
			switch (uParam0->f_2593)
			{
				case 2:
				case 4:
				case 3:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_130(var uParam0)
{
	func_115(func_132(uParam0, uParam0->f_2593));
	func_114(-1, 1, 1);
	func_111("CH_DETAILSe", 0, 0);
	func_119(func_131(uParam0, uParam0->f_2593));
}

char* func_131(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return "CH_DP_APR_0";
		
		case 6:
			return "CH_DP_APR_1";
		
		case 7:
			return "CH_DP_APR_2";
		
		default:
	}
	return "";
}

char* func_132(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_133(1, 1);
		
		case 6:
			return func_133(2, 1);
		
		case 7:
			return func_133(3, 1);
		
		default:
	}
	return "";
}

char* func_133(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (!bParam1)
			{
				return "CH_APPROACH_0b";
			}
			return "CH_APPROACH_0";
		
		case 2:
			if (!bParam1)
			{
				return "CH_APPROACH_1b";
			}
			return "CH_APPROACH_1";
		
		case 3:
			if (!bParam1)
			{
				return "CH_APPROACH_2b";
			}
			return "CH_APPROACH_2";
		
		default:
	}
	return "";
}

int func_134(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 0:
			switch (uParam0->f_2593)
			{
				case 5:
				case 6:
				case 7:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_135(var uParam0)
{
	func_115(func_166(uParam0, uParam0->f_2593));
	func_114(-1, 1, 1);
	if (func_162(uParam0, uParam0->f_2593))
	{
		if (func_158(uParam0, uParam0->f_2593) != -1)
		{
			func_111("CH_DETAILSb", 0, 0);
			func_119(func_157(uParam0, uParam0->f_2593));
			func_119(func_156(uParam0, uParam0->f_2593));
			func_109(func_158(uParam0, uParam0->f_2593));
		}
		else
		{
			func_111("CH_DETAILSc", 0, 0);
			func_119(func_157(uParam0, uParam0->f_2593));
			func_119(func_156(uParam0, uParam0->f_2593));
			func_119("CH_LIST_BLANK");
		}
	}
	else
	{
		func_111("CH_DETAILSd", 0, 0);
		func_119(func_136(uParam0, uParam0->f_2593));
	}
}

char* func_136(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			if (func_143(uParam0))
			{
				return "CH_LIST_BLANK";
			}
			else
			{
				switch (uParam0->f_744.f_738)
				{
					case 3:
						return "CH_DP_UR_WE_0";
					
					case 4:
						return "CH_DP_UR_WE_1";
					}
				
				default:
			}
			break;
		
		case 11:
			switch (uParam0->f_744.f_740)
			{
				case 4:
					return "CH_DP_UR_DR_0";
				
				case 5:
					return "CH_DP_UR_WE_1";
				
				default:
			}
			break;
		
		case 12:
			if (func_137(uParam0))
			{
				return "CH_LIST_BLANK";
			}
			else
			{
				switch (uParam0->f_744.f_743)
				{
					case 3:
						return "CH_DP_UR_HR_0";
					
					case 5:
						return "CH_DP_UR_HR_1";
					}
				
				default:
			}
			break;
	}
	return "";
}

int func_137(var uParam0)
{
	if (uParam0->f_744.f_743 == 4 && !func_138(uParam0->f_4356, uParam0->f_744.f_743))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			if (func_142(iParam0) && func_140(iParam0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 15))
			{
				return 1;
			}
			break;
		
		case 5:
			if (func_139(iParam0) && unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_42, 4))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_139(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_351, 31);
}

int func_140(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	return ((func_141(iParam0, 0) && func_141(iParam0, 1)) && func_141(iParam0, 4));
}

int func_141(int iParam0, int iParam1)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_7, 0);
			break;
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_7, 1);
			break;
		
		case 4:
			return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_7, 2);
			break;
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_7, 3);
			break;
		
		case 3:
			return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_7, 4);
			break;
		
		case 5:
			return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_281.f_7, 5);
			break;
	}
	return 0;
}

int func_142(int iParam0)
{
	if (iParam0 != func_42())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

int func_143(var uParam0)
{
	if (uParam0->f_744.f_738 == 5 && !func_144(uParam0->f_4356, uParam0->f_744.f_738))
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			if (func_155(iParam0) && func_154(iParam0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_153(iParam0, 0) == 5)
			{
				return 0;
			}
			if (func_152(iParam0) && func_147(iParam0, func_151(iParam0)))
			{
				return 1;
			}
			if (func_146(iParam0) && func_145(iParam0))
			{
				return 1;
			}
			break;
		
		case 5:
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 9))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 != func_42())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_339.f_2, 13);
	}
	return 0;
}

int func_146(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (Global_1590535[iParam0].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0, int iParam1)
{
	if (func_150(iParam0, iParam1))
	{
		iVar0 = func_148(iParam0, iParam1);
		if (Global_1590535[iParam0].f_274.f_183[iVar0].f_4 > 0 && Global_1590535[iParam0].f_274.f_183[iVar0].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, int iParam1)
{
	if (func_149(iParam1) && iParam0 != func_42())
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

int func_149(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0, int iParam1)
{
	if (func_149(iParam1) && iParam0 != func_42())
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

int func_151(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

bool func_152(int iParam0)
{
	return func_151(iParam0) != 0;
}

int func_153(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (Global_1700796[iParam0].f_18.f_12 != 0 || !bParam1)
		{
			return Global_1700796[iParam0].f_18.f_12;
		}
	}
	if (bParam1)
	{
		return Global_1696399.f_15;
	}
	return 0;
}

int func_154(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_264.f_5;
}

int func_155(int iParam0)
{
	if (iParam0 != func_42())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

char* func_156(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			if (func_143(uParam0))
			{
				return "CH_LIST_BLANK";
			}
			else
			{
				switch (uParam0->f_744.f_738)
				{
					case 1:
						return "CH_SKILL_POOR";
					
					case 2:
						return "CH_SKILL_EXPR";
					
					case 3:
						return "CH_SKILL_GOOD";
					
					case 4:
						return "CH_SKILL_EXPR";
					
					case 5:
						return "CH_SKILL_EXPR";
					}
				
				default:
			}
			break;
		
		case 11:
			switch (uParam0->f_744.f_740)
			{
				case 1:
					return "CH_SKILL_POOR";
				
				case 2:
					return "CH_SKILL_GOOD";
				
				case 3:
					return "CH_SKILL_EXPR";
				
				case 4:
					return "CH_SKILL_GOOD";
				
				case 5:
					return "CH_SKILL_EXPR";
				
				default:
			}
			break;
		
		case 12:
			if (func_137(uParam0))
			{
				return "CH_LIST_BLANK";
			}
			else
			{
				switch (uParam0->f_744.f_743)
				{
					case 1:
						return "CH_SKILL_POOR";
					
					case 2:
						return "CH_SKILL_GOOD";
					
					case 3:
						return "CH_SKILL_GOOD";
					
					case 4:
						return "CH_SKILL_EXPR";
					
					case 5:
						return "CH_SKILL_EXPR";
					}
				
				default:
			}
			break;
	}
	return "";
}

char* func_157(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return "CH_WE_EXPR";
		
		case 11:
			return "CH_DR_EXPR";
		
		case 12:
			return "CH_HR_EXPR";
		
		default:
	}
	return "";
}

int func_158(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			if (func_143(uParam0))
			{
				return 0;
			}
			else
			{
				return func_161(uParam0->f_744.f_738);
			}
			break;
		
		case 11:
			return func_160(uParam0->f_744.f_740);
			break;
		
		case 12:
			if (func_137(uParam0))
			{
				return 0;
			}
			else
			{
				return func_159(uParam0->f_744.f_743);
			}
			break;
	}
	return 0;
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_28035;
		
		case 2:
			return Global_262145.f_28036;
		
		case 3:
			return Global_262145.f_28037;
		
		case 4:
			return Global_262145.f_28038;
		
		case 5:
			return Global_262145.f_28039;
		
		default:
	}
	return 0;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_28030;
		
		case 2:
			return Global_262145.f_28031;
		
		case 3:
			return Global_262145.f_28032;
		
		case 4:
			return Global_262145.f_28033;
		
		case 5:
			return Global_262145.f_28034;
		
		default:
	}
	return 0;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_28025;
		
		case 2:
			return Global_262145.f_28026;
		
		case 3:
			return Global_262145.f_28027;
		
		case 4:
			return Global_262145.f_28028;
		
		case 5:
			return Global_262145.f_28029;
		
		default:
	}
	return 0;
}

int func_162(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_144(uParam0->f_4356, uParam0->f_744.f_738);
		
		case 11:
			return func_163(uParam0->f_4356, uParam0->f_744.f_740);
		
		case 12:
			return func_138(uParam0->f_4356, uParam0->f_744.f_743);
		
		default:
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			if (func_165(iParam0) && unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_42, 5))
			{
				return 1;
			}
			break;
		
		case 5:
			if (func_164(iParam0, 0) == 4)
			{
				return 0;
			}
			if (func_152(iParam0) && func_147(iParam0, func_151(iParam0)))
			{
				return 1;
			}
			if (func_146(iParam0) && func_145(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_164(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (Global_1700796[iParam0].f_18.f_10 != 0 || !bParam1)
		{
			return Global_1700796[iParam0].f_18.f_10;
		}
	}
	if (bParam1)
	{
		return Global_1696399.f_13;
	}
	return 0;
}

bool func_165(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_123, 14);
}

char* func_166(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			if (func_143(uParam0))
			{
				return "CH_LIST_BLANK";
			}
			else
			{
				switch (uParam0->f_744.f_738)
				{
					case 1:
						return "CH_WE_NAME_0";
					
					case 2:
						return "CH_WE_NAME_1";
					
					case 3:
						return "CH_WE_NAME_2";
					
					case 4:
						return "CH_WE_NAME_3";
					
					case 5:
						return "CH_WE_NAME_4";
					}
				
				default:
			}
			break;
		
		case 11:
			switch (uParam0->f_744.f_740)
			{
				case 1:
					return "CH_DR_NAME_0";
				
				case 2:
					return "CH_DR_NAME_1";
				
				case 3:
					return "CH_DR_NAME_2";
				
				case 4:
					return "CH_DR_NAME_3";
				
				case 5:
					return "CH_DR_NAME_4";
				
				default:
			}
			break;
		
		case 12:
			if (func_137(uParam0))
			{
				return "CH_LIST_BLANK";
			}
			else
			{
				switch (uParam0->f_744.f_743)
				{
					case 1:
						return "CH_HR_NAME_0";
					
					case 2:
						return "CH_HR_NAME_1";
					
					case 3:
						return "CH_HR_NAME_2";
					
					case 4:
						return "CH_HR_NAME_3";
					
					case 5:
						return "CH_HR_NAME_4";
					}
				
				default:
			}
			break;
	}
	return "";
}

int func_167(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 1:
			switch (uParam0->f_2593)
			{
				case 10:
				case 11:
				case 12:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_168(var uParam0)
{
	func_115(func_181(uParam0, uParam0->f_4355, uParam0->f_2593));
	func_114(-1, 1, 1);
	if (func_176(func_177(uParam0, uParam0->f_4355, uParam0->f_2593)))
	{
		func_111("CH_DETAILSd", 0, 0);
		func_119(func_177(uParam0, uParam0->f_4355, uParam0->f_2593));
	}
	else
	{
		func_111("CH_DETAILS", 0, 0);
		func_119(func_177(uParam0, uParam0->f_4355, uParam0->f_2593));
		func_119(func_175(uParam0, uParam0->f_4355, uParam0->f_2593));
		func_119(func_171(uParam0, uParam0->f_4355, uParam0->f_2593));
		func_109(func_169(uParam0, uParam0->f_4355, uParam0->f_2593));
	}
}

int func_169(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 9:
					return 1;
				
				case 10:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				case 4:
					return 2;
				
				case 5:
					return 2;
				
				case 6:
					if (func_153(uParam0->f_4356, 0) == 4)
					{
						return 4;
					}
					return 2;
				
				case 7:
					return 2;
				
				case 9:
					return 2;
				
				case 13:
					return 1;
				
				case 14:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 1;
						
						case 2:
							switch (uParam0->f_744.f_744)
							{
								case 1:
									return 1;
								
								case 2:
									if (func_170(uParam0->f_4356, 2))
									{
										return 1;
									}
									return 2;
								
								case 3:
									if (func_170(uParam0->f_4356, 3))
									{
										return 2;
									}
									return 1;
								
								default:
							}
							break;
						
						case 3:
							return 2;
					}
					break;
				
				case 15:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 2;
						
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 16:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 1;
						
						case 2:
							if (func_170(uParam0->f_4356, 4))
							{
								return 2;
							}
							return 1;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 17:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 2;
						
						case 2:
							switch (uParam0->f_744.f_745)
							{
								case 6:
									return 2;
								
								case 7:
									return 1;
								
								default:
							}
							break;
						
						case 3:
							return 1;
					}
					break;
				
				case 8:
					return 2;
				
				case 18:
					return 1;
			}
			break;
	}
	return 1;
}

int func_170(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 1:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 8);
			
			case 2:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 10);
			
			case 3:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 12);
			
			case 4:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 14);
			}
		
		default:
	}
	return 0;
}

char* func_171(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 9:
					return "CH_DP_MAND";
				
				case 10:
					return "CH_DP_MAND";
				
				default:
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 2:
					return "CH_DP_OPT";
				
				case 3:
					return "CH_DP_OPT";
				
				case 4:
					return "CH_DP_OPT";
				
				case 5:
					return "CH_DP_MAND";
				
				case 6:
					return "CH_DP_MAND";
				
				case 7:
					return "CH_DP_MAND";
				
				case 9:
					return "CH_DP_MAND";
				
				case 13:
					return "CH_DP_OPT";
				
				case 14:
					switch (func_113(uParam0->f_4356))
					{
						case 2:
							if (func_172(uParam0->f_4356))
							{
								return "CH_DP_OPT";
							}
							break;
					}
					return "CH_DP_MAND";
				
				case 15:
					return "CH_DP_MAND";
				
				case 16:
					return "CH_DP_OPT";
				
				case 17:
					return "CH_DP_OPT";
				
				case 8:
					return "CH_DP_OPT";
				
				case 18:
					return "CH_DP_OPT";
				
				default:
			}
			break;
	}
	return "";
}

int func_172(int iParam0)
{
	if (((func_173(iParam0, 1) || func_173(iParam0, 2)) || func_173(iParam0, 3)) || func_173(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				if (func_170(iParam0, iParam1) && func_174(iParam0, iParam1))
				{
					return 1;
				}
				break;
			
			case 6:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 16);
			
			case 7:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 17);
			
			case 8:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 18);
			}
	}
	return 0;
}

int func_174(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 1:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 9);
			
			case 2:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 11);
			
			case 3:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 13);
			
			case 4:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 15);
			}
		
		default:
	}
	return 0;
}

char* func_175(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 9:
					return "CH_DP_I_S_0";
				
				case 10:
					return "CH_DP_I_S_1";
				
				default:
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 2:
					return "CH_DP_I_P_0";
				
				case 3:
					return "CH_DP_I_P_1";
				
				case 4:
					return "CH_DP_I_P_2";
				
				case 5:
					switch (func_164(uParam0->f_4356, 0))
					{
						case 1:
							switch (func_113(uParam0->f_4356))
							{
								case 1:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_0_aa";
										
										case 1:
											return "CH_D_I_P_3_0_ab";
										
										default:
									}
									break;
								
								case 2:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_0_ba";
										
										case 1:
											return "CH_D_I_P_3_0_bb";
										
										default:
									}
									break;
								
								case 3:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_0_ca";
										
										case 1:
											return "CH_D_I_P_3_0_cb";
										
										default:
									}
									break;
							}
							break;
						
						case 2:
							switch (func_113(uParam0->f_4356))
							{
								case 1:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_1_aa";
										
										case 1:
											return "CH_D_I_P_3_1_ab";
										
										default:
									}
									break;
								
								case 2:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_1_ba";
										
										case 1:
											return "CH_D_I_P_3_1_bb";
										
										default:
									}
									break;
								
								case 3:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_1_ca";
										
										case 1:
											return "CH_D_I_P_3_1_cb";
										
										default:
									}
									break;
							}
							break;
						
						case 3:
							switch (func_113(uParam0->f_4356))
							{
								case 1:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_2_aa";
										
										case 1:
											return "CH_D_I_P_3_2_ab";
										
										default:
									}
									break;
								
								case 2:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_2_ba";
										
										case 1:
											return "CH_D_I_P_3_2_bb";
										
										default:
									}
									break;
								
								case 3:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_2_ca";
										
										case 1:
											return "CH_D_I_P_3_2_cb";
										
										default:
									}
									break;
							}
							break;
						
						case 4:
							switch (func_113(uParam0->f_4356))
							{
								case 1:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_3_aa";
										
										case 1:
											return "CH_D_I_P_3_3_ab";
										
										default:
									}
									break;
								
								case 2:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_3_ba";
										
										case 1:
											return "CH_D_I_P_3_3_bb";
										
										default:
									}
									break;
								
								case 3:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_3_ca";
										
										case 1:
											return "CH_D_I_P_3_3_cb";
										
										default:
									}
									break;
							}
							break;
						
						case 5:
							switch (func_113(uParam0->f_4356))
							{
								case 1:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_4_aa";
										
										case 1:
											return "CH_D_I_P_3_4_ab";
										
										default:
									}
									break;
								
								case 2:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_4_ba";
										
										case 1:
											return "CH_D_I_P_3_4_bb";
										
										default:
									}
									break;
								
								case 3:
									switch (uParam0->f_744.f_739)
									{
										case 0:
											return "CH_D_I_P_3_4_ca";
										
										case 1:
											return "CH_D_I_P_3_4_cb";
										
										default:
									}
									break;
							}
							break;
					}
					break;
				
				case 6:
					return "CH_DP_I_P_4";
				
				case 7:
					return "CH_DP_I_P_5";
				
				case 9:
					return "CH_DP_I_P_6";
				
				case 13:
					switch (uParam0->f_744.f_742)
					{
						case 1:
							return "CH_DP_I_P_7a";
						
						case 2:
							return "CH_DP_I_P_7b";
						
						default:
					}
					break;
				
				case 14:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_I_P_8a";
						
						case 2:
							switch (uParam0->f_744.f_744)
							{
								case 1:
									return "CH_DP_I_P_8b_a";
								
								case 2:
									return "CH_DP_I_P_8b_b";
								
								case 3:
									return "CH_DP_I_P_8b_c";
								
								default:
							}
							break;
						
						case 3:
							return "CH_DP_I_P_8c";
					}
					break;
				
				case 15:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_I_P_9a";
						
						case 2:
							return "CH_DP_I_P_9b";
						
						case 3:
							return "CH_DP_I_P_9c";
						
						default:
					}
					break;
				
				case 16:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_I_P_10a";
						
						case 2:
							return "CH_DP_I_P_10b";
						
						case 3:
							return "CH_DP_I_P_10c";
						
						default:
					}
					break;
				
				case 17:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_I_P_11a";
						
						case 2:
							switch (uParam0->f_744.f_745)
							{
								case 6:
									return "CH_DP_I_P_11ba";
								
								case 7:
									return "CH_DP_I_P_11bb";
								
								default:
							}
							break;
						
						case 3:
							return "CH_DP_I_P_11c";
					}
					break;
				
				case 8:
					return "CH_DP_I_P_12";
				
				case 18:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
						case 2:
							return "CH_DP_I_P_13";
						
						case 3:
							return "CH_DP_I_P_13b";
						
						default:
					}
					break;
			}
			break;
	}
	return "";
}

int func_176(char* sParam0)
{
	if ((unk_0x7F8A39872A07D2CE(sParam0, "CH_DP_D_P_0b") || unk_0x7F8A39872A07D2CE(sParam0, "CH_DP_D_P_8b_ac")) || unk_0x7F8A39872A07D2CE(sParam0, "CH_DP_D_P_8b_bc"))
	{
		return 1;
	}
	return 0;
}

char* func_177(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 9:
					return "CH_DP_D_S_0";
				
				case 10:
					return "CH_DP_D_S_1";
				
				default:
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 2:
					if (!func_180(uParam0->f_4356))
					{
						return "CH_DP_D_P_0b";
					}
					return "CH_DP_D_P_0";
				
				case 3:
					return "CH_DP_D_P_1";
				
				case 4:
					return "CH_DP_D_P_2";
				
				case 5:
					return "CH_DP_D_P_3";
				
				case 6:
					return "CH_DP_D_P_4";
				
				case 7:
					return "CH_DP_D_P_5";
				
				case 9:
					return "CH_DP_D_P_6";
				
				case 13:
					switch (uParam0->f_744.f_742)
					{
						case 1:
							return "CH_DP_D_P_7a";
						
						case 2:
							return "CH_DP_D_P_7b";
						
						default:
					}
					break;
				
				case 14:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_D_P_8a";
						
						case 2:
							switch (uParam0->f_744.f_744)
							{
								case 1:
									if (!func_179(uParam0->f_4356, 1))
									{
										return "CH_DP_D_P_8b_ac";
									}
									if (!func_170(uParam0->f_4356, 1))
									{
										return "CH_DP_D_P_8b_aa";
									}
									return "CH_DP_D_P_8b_ab";
								
								case 2:
									if (!func_179(uParam0->f_4356, 2))
									{
										return "CH_DP_D_P_8b_bc";
									}
									if (!func_170(uParam0->f_4356, 2))
									{
										return "CH_DP_D_P_8b_ba";
									}
									return "CH_DP_D_P_8b_bb";
								
								case 3:
									if (!func_170(uParam0->f_4356, 3))
									{
										return "CH_DP_D_P_8b_ca";
									}
									return "CH_DP_D_P_8b_cb";
								
								default:
							}
							break;
						
						case 3:
							if (func_178(uParam0->f_4356))
							{
								return "CH_DP_D_P_8cb";
							}
							return "CH_DP_D_P_8c";
					}
					break;
				
				case 15:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_D_P_9a";
						
						case 2:
							return "CH_DP_D_P_9b";
						
						case 3:
							return "CH_DP_D_P_9c";
						
						default:
					}
					break;
				
				case 16:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_D_P_10a";
						
						case 2:
							if (!func_170(uParam0->f_4356, 4))
							{
								return "CH_DP_D_P_10ba";
							}
							return "CH_DP_D_P_10bb";
						
						case 3:
							return "CH_DP_D_P_10c";
						
						default:
					}
					break;
				
				case 17:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_D_P_11a";
						
						case 2:
							switch (uParam0->f_744.f_745)
							{
								case 6:
									return "CH_DP_D_P_11b_a";
								
								case 7:
									return "CH_DP_D_P_11b_b";
								
								default:
							}
							break;
						
						case 3:
							return "CH_DP_D_P_11c";
					}
					break;
				
				case 8:
					return "CH_DP_D_P_12";
				
				case 18:
					return "CH_DP_D_P_13";
			}
			break;
	}
	return "";
}

int func_178(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 21);
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_2, iParam1);
	}
	return 0;
}

int func_180(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_61, 6) && unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_61, 7)) && unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_61, 8)) && unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_61, 9)) && unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_61, 10)) && unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_61, 11))
		{
			return 1;
		}
	}
	return 0;
}

char* func_181(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 9:
					return "CH_DP_T_S_0";
				
				case 10:
					return "CH_DP_T_S_1";
				
				default:
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 2:
					return "CH_DP_T_P_0";
				
				case 3:
					return "CH_DP_T_P_1";
				
				case 4:
					return "CH_DP_T_P_2";
				
				case 5:
					return "CH_DP_T_P_3";
				
				case 6:
					return "CH_DP_T_P_4";
				
				case 7:
					return "CH_DP_T_P_5";
				
				case 9:
					return "CH_DP_T_P_6";
				
				case 13:
					switch (uParam0->f_744.f_742)
					{
						case 1:
							return "CH_DP_T_P_7a";
						
						case 2:
							return "CH_DP_T_P_7b";
						
						default:
					}
					break;
				
				case 14:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_T_P_8a";
						
						case 2:
							switch (uParam0->f_744.f_744)
							{
								case 1:
									if (!func_170(uParam0->f_4356, 1))
									{
										return "CH_DP_T_P_8b_aa";
									}
									return "CH_DP_T_P_8b_ab";
								
								case 2:
									if (!func_170(uParam0->f_4356, 2))
									{
										return "CH_DP_T_P_8b_ba";
									}
									return "CH_DP_T_P_8b_bb";
								
								case 3:
									if (!func_170(uParam0->f_4356, 3))
									{
										return "CH_DP_T_P_8b_ca";
									}
									return "CH_DP_T_P_8b_cb";
								
								default:
							}
							break;
						
						case 3:
							if (func_178(uParam0->f_4356))
							{
								return "CH_DP_T_P_8cb";
							}
							return "CH_DP_T_P_8c";
					}
					break;
				
				case 15:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_T_P_9a";
						
						case 2:
							return "CH_DP_T_P_9b";
						
						case 3:
							return "CH_DP_T_P_9c";
						
						default:
					}
					break;
				
				case 16:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_T_P_10a";
						
						case 2:
							if (!func_170(uParam0->f_4356, 4))
							{
								return "CH_DP_T_P_10ba";
							}
							return "CH_DP_T_P_10bb";
						
						case 3:
							return "CH_DP_T_P_10c";
						
						default:
					}
					break;
				
				case 17:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return "CH_DP_T_P_11a";
						
						case 2:
							switch (uParam0->f_744.f_745)
							{
								case 6:
									return "CH_DP_T_P_11b_a";
								
								case 7:
									return "CH_DP_T_P_11b_b";
								
								default:
							}
							break;
						
						case 3:
							return "CH_DP_T_P_11c";
					}
					break;
				
				case 8:
					return "CH_DP_T_P_12";
				
				case 18:
					return "CH_DP_T_P_13";
			}
			break;
	}
	return "";
}

int func_182(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 0:
			switch (uParam0->f_2593)
			{
				case 9:
				case 10:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (uParam0->f_2593)
			{
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 9:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 8:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_183(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_184(29, sParam1, sParam2);
}

void func_184(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0]), sParam2, 64);
}

void func_185(bool bParam0, bool bParam1)
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

bool func_186(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_66(&iVar0, 1, iParam1))
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
	bVar2 = func_187(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_187(var uParam0)
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

void func_188(var uParam0)
{
	if (func_198(uParam0))
	{
		iVar0 = -1;
		switch (uParam0->f_4355)
		{
			case 0:
				func_197(uParam0, &iVar0);
				break;
			
			case 1:
				func_197(&(uParam0->f_744), &iVar0);
				break;
			
			case 2:
				func_197(&(uParam0->f_1497), &iVar0);
				break;
		}
		if (iVar0 != -1)
		{
			uParam0->f_2593.f_6 = uParam0->f_2593;
			uParam0->f_2593 = iVar0;
			func_196(uParam0, 0);
			if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
			{
				func_191(uParam0, func_192(uParam0));
			}
			switch (uParam0->f_4355)
			{
				case 0:
					func_190(uParam0, 1);
					break;
				
				case 1:
					func_190(&(uParam0->f_744), 1);
					if (uParam0->f_4356 == unk_0xD803B885F5E47A62() && (((uParam0->f_2593 == 14 || uParam0->f_2593 == 15) || uParam0->f_2593 == 16) || uParam0->f_2593 == 17))
					{
						func_189(uParam0, 5);
						if (uParam0->f_2593 == 14 || uParam0->f_2593 == 15)
						{
							func_189(uParam0, 6);
						}
					}
					break;
				
				case 2:
					func_190(&(uParam0->f_1497), 1);
					break;
				}
			}
	}
}

void func_189(var uParam0, int iParam1)
{
	if (uParam0->f_4356 != unk_0xD803B885F5E47A62())
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_4353, iParam1))
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_4353), iParam1);
	}
}

void func_190(var uParam0, int iParam1)
{
	uParam0->f_706 = iParam1;
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 == -1 || iParam1 == 77)
	{
		return;
	}
	if (!func_31(uParam0, iParam1) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_4173[(iParam1 / 32)], (iParam1 % 32)))
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_4173[(iParam1 / 32)]), (iParam1 % 32));
	}
}

int func_192(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 0:
			switch (uParam0->f_2593)
			{
				case 5:
					if (func_195(uParam0->f_4356) == 1)
					{
						return 63;
					}
					else if (func_194(uParam0->f_4356) == 1)
					{
						return 64;
					}
					return 4;
				
				case 6:
					if (func_195(uParam0->f_4356) == 2)
					{
						return 63;
					}
					else if (func_194(uParam0->f_4356) == 2)
					{
						return 64;
					}
					return 5;
				
				case 7:
					if (func_195(uParam0->f_4356) == 3)
					{
						return 63;
					}
					else if (func_194(uParam0->f_4356) == 3)
					{
						return 64;
					}
					return 6;
				
				case 10:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (uParam0->f_2593)
			{
				case 2:
					if (func_180(uParam0->f_4356))
					{
						return 26;
					}
					break;
			}
			break;
		
		case 2:
			if (unk_0xA14BB9332558B949())
			{
				if (func_193(uParam0->f_4356, 0))
				{
					switch (uParam0->f_2593)
					{
						case 12:
							return 74;
						
						default:
					}
				}
				else
				{
					switch (uParam0->f_2593)
					{
						case 8:
							return 59;
						
						case 9:
							return 59;
						
						case 10:
							return 59;
						
						case 11:
							return 59;
						
						case 12:
							return 60;
						
						case 15:
							switch (func_113(uParam0->f_4356))
							{
								case 2:
									if (uParam0->f_1497.f_1020 != 4)
									{
										return 54;
									}
									break;
							}
							break;
						}
				}
			}
			else
			{
				switch (uParam0->f_2593)
				{
					case 12:
						if (func_193(uParam0->f_4356, 0))
						{
							return 73;
						}
						return 58;
					}
				
				default:
			}
			break;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 10);
			
			case 1:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 11);
			
			case 2:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 12);
			
			case 3:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 13);
			}
		
		default:
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_6;
	}
	return 0;
}

int func_195(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_5;
	}
	return 0;
}

void func_196(var uParam0, int iParam1)
{
	uParam0->f_2593.f_9 = iParam1;
}

int func_197(var uParam0, int iParam1)
{
	if (uParam0->f_708 == 0)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_709, "GET_CURRENT_SELECTION");
		uParam0->f_711 = unk_0x7A8BB56B212464AC();
		uParam0->f_708 = 1;
	}
	else if (unk_0xC95D7AEEDEF4946B(uParam0->f_711))
	{
		*iParam1 = unk_0xA52833FE33F41C53(uParam0->f_711);
		uParam0->f_708 = 0;
		return 1;
	}
	*iParam1 = -1;
	return 0;
}

bool func_198(var uParam0)
{
	return uParam0->f_2593.f_9;
}

void func_199(var uParam0)
{
	func_221(uParam0);
	func_219(uParam0);
	func_204(uParam0);
	func_200(uParam0);
}

void func_200(var uParam0)
{
	if ((func_17(uParam0, 2) || (uParam0->f_4356 != func_42() && Global_1700796[uParam0->f_4356].f_67)) || func_202(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
		{
			if ((uParam0->f_724.f_5 || uParam0->f_744.f_724.f_5) || uParam0->f_1497.f_724.f_5)
			{
				func_201(uParam0, 0);
			}
		}
	}
}

void func_201(var uParam0, int iParam1)
{
	switch (uParam0->f_4355)
	{
		case 0:
			uParam0->f_724.f_5 = iParam1;
			uParam0->f_744.f_724.f_5 = 0;
			uParam0->f_1497.f_724.f_5 = 0;
			uParam0->f_4361 = 0;
			break;
		
		case 1:
			uParam0->f_724.f_5 = 0;
			uParam0->f_744.f_724.f_5 = iParam1;
			uParam0->f_1497.f_724.f_5 = 0;
			uParam0->f_4361 = 0;
			break;
		
		case 2:
			uParam0->f_724.f_5 = 0;
			uParam0->f_744.f_724.f_5 = 0;
			uParam0->f_1497.f_724.f_5 = iParam1;
			uParam0->f_4361 = 0;
			break;
	}
}

int func_202(int iParam0)
{
	if (iParam0 != func_42() && func_203(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_203(int iParam0, bool bParam1, bool bParam2)
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

void func_204(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 1))
		{
			func_206(&(Global_2450632.f_680), -1, 0, 1, 1);
			func_205(uParam0, 5);
			func_205(uParam0, 6);
			func_205(uParam0, 3);
			func_205(uParam0, 4);
			unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 1);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 1))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 1);
	}
}

void func_205(var uParam0, int iParam1)
{
	unk_0x0674E58A79778E99(&(uParam0->f_4357), iParam1);
}

void func_206(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (unk_0x9F4FE516EAACCFC5(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, false);
			if (bParam4)
			{
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
			}
			unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
			*uParam0 = 0;
			func_218();
			if (func_216())
			{
				unk_0x066C43E677C08D5C();
			}
			unk_0x448D99BAB1554268(0);
			if (Global_1312372 == 0 && iParam3 == 1)
			{
				func_208(1, 0);
				func_208(1, 0);
			}
			if (!func_207())
			{
				if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
				{
					if (!Global_2458936.f_7)
					{
						unk_0xBBCE9616B024A2BF();
					}
				}
				else
				{
					unk_0xBBCE9616B024A2BF();
				}
			}
		}
	}
}

bool func_207()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 0);
}

void func_208(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_213(1, 0, 1);
	}
	else
	{
		func_209(iParam1);
	}
}

void func_209(int iParam0)
{
	func_212();
	if (iParam0 == 0)
	{
		if (unk_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_211() == 0 || unk_0x798A3F1296751F46())
	{
		func_210(1);
		unk_0x68619D16FD876EAA(0);
		unk_0x68619D16FD876EAA(0);
	}
}

void func_210(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_211()
{
	return Global_1312467.f_20;
}

void func_212()
{
	Global_2462226 = 1;
}

void func_213(int iParam0, bool bParam1, bool bParam2)
{
	if (func_214())
	{
		return;
	}
	if ((func_211() == 1 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_210(0);
		unk_0x68619D16FD876EAA(1);
		if (!bParam1)
		{
			unk_0x68619D16FD876EAA(1);
		}
		if (bParam2)
		{
			unk_0x730943CECC025C36();
		}
	}
}

int func_214()
{
	if (func_215())
	{
		return Global_2460590;
	}
	return 0;
}

int func_215()
{
	if (Global_2460583)
	{
		return Global_2460582;
	}
	return 0;
}

int func_216()
{
	if (func_85(unk_0xD803B885F5E47A62(), 0))
	{
		if (Global_1590535[unk_0xD803B885F5E47A62()].f_740 != func_42())
		{
			if (func_203(Global_1590535[unk_0xD803B885F5E47A62()].f_740, 0, 1))
			{
				if (func_217(Global_1590535[unk_0xD803B885F5E47A62()].f_740, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_217(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_218()
{
	unk_0x0674E58A79778E99(&Global_2450632, 15);
}

void func_219(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 1))
	{
		func_220();
	}
	if (func_15() && !unk_0xA14BB9332558B949())
	{
		func_220();
	}
	if ((func_17(uParam0, 3) || func_17(uParam0, 4)) && !func_17(uParam0, 6))
	{
		func_220();
	}
}

void func_220()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (iVar1 != func_42())
			{
				unk_0xA550CB601D5066B5(iVar1, 0);
			}
		}
		iVar0++;
	}
}

void func_221(var uParam0)
{
	func_507(uParam0);
	if (func_506(uParam0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 1))
		{
			unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 1);
		}
	}
	if (!func_480(uParam0))
	{
		func_479();
		return;
	}
	if (func_478())
	{
		if (!func_477())
		{
			func_476();
			return;
		}
		if (!func_475())
		{
			func_461(uParam0);
			return;
		}
		if (!func_460(1))
		{
			func_273(uParam0);
			return;
		}
	}
	else
	{
		if (!func_268(func_269()))
		{
			func_267();
			return;
		}
		if (!func_266(func_269()))
		{
			func_265();
			return;
		}
		if (!func_264(func_269()))
		{
			func_228();
			return;
		}
	}
	if (func_225())
	{
		uParam0->f_2604 = 1;
		func_222(uParam0, func_223());
		func_201(uParam0, 1);
		func_479();
	}
}

void func_222(var uParam0, int iParam1)
{
	uParam0->f_4355 = iParam1;
}

int func_223()
{
	if (func_224(0))
	{
		return 0;
	}
	else if (func_224(1))
	{
		return 1;
	}
	else if (func_224(2))
	{
		return 2;
	}
	return -1;
}

bool func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { 2711,031f, -366,9407f, -55,7809f };
			vVar3 = { 2714,848f, -366,9614f, -53,7809f };
			fVar6 = 1,75f;
			break;
		
		case 1:
			vVar0 = { 2715,558f, -371,5293f, -55,7809f };
			vVar3 = { 2715,516f, -367,4599f, -53,7809f };
			fVar6 = 1,75f;
			break;
		
		case 2:
			vVar0 = { 2715,26f, -371,9485f, -55,7809f };
			vVar3 = { 2710,769f, -371,9542f, -53,7809f };
			fVar6 = 1,75f;
			break;
	}
	return unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar0, vVar3, fVar6, 0, true, 0);
}

bool func_225()
{
	switch (func_223())
	{
		case 0:
			StringCopy(&Var0, "CH_SETUP_USE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "CH_PREP_USE", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CH_FINALE_USE", 16);
			break;
	}
	if (!func_227(&Var0))
	{
		func_226(&Var0);
	}
	return unk_0xBFC0798A6E3417F9(0, 51);
}

void func_226(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_227(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_228()
{
	if (func_269() != -1)
	{
		if (!func_263("CH_OWNER_SCOPE", unk_0x6E524813889AECF8(func_269())))
		{
			func_229("CH_OWNER_SCOPE", unk_0x6E524813889AECF8(func_269()), func_230(func_269(), -2, 0, 0, 0), -1);
		}
	}
}

void func_229(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam3);
}

int func_230(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_261(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_261(unk_0xD803B885F5E47A62()) || (func_260() && func_259())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_258();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_203(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_256(iParam1, iParam0, 0);
							}
							else
							{
								return func_243(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_243(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_256(iParam1, iParam0, 0);
				}
				else
				{
					return func_231(0, -1, 0);
				}
			}
			else
			{
				return func_231(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_256(iParam1, iParam0, 0);
		}
		else
		{
			return func_243(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_243(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_231(bool bParam0, int iParam1, bool bParam2)
{
	return func_232(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_232(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_242() || (func_241() && func_239())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_238(iParam2, iVar0);
		}
		else
		{
			return func_238(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_237(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_236(1);
				}
				else
				{
					return func_236(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_233(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_233(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_236(1);
	}
	return func_236(0);
}

int func_233(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_235(iParam0, iParam1, iParam3);
	if (func_234(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_234(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_235(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_237(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_236(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_237(int iParam0, int iParam1, int iParam2)
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

int func_238(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_235(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_239()
{
	if (func_240())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_240()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_241()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(-1518439287) > 0);
}

int func_242()
{
	if (func_240() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_251())
			{
				iVar3 = func_248(iParam0);
				if (!iVar3 == -1)
				{
					return func_246(iVar3);
				}
			}
			if ((func_245(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_237(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_236(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_244(1);
			}
			else
			{
				return func_232(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_236(1);
			}
			else
			{
				return func_232(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_248(iParam0);
	if (!iVar4 == -1)
	{
		return func_246(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_244(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_245(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && unk_0x08067D4957B73C02(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_246(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_247(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_247(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_248(int iParam0)
{
	if (!iParam0 == func_42())
	{
		if (func_250(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_249(iParam0)];
		}
	}
	return -1;
}

int func_249(int iParam0)
{
	if (iParam0 != func_42())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_42();
}

bool func_250(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_268(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_42();
}

int func_251()
{
	if (((func_255() || func_254()) || func_253()) || func_252())
	{
		return 1;
	}
	return 0;
}

var func_252()
{
	return Global_2450632.f_19;
}

var func_253()
{
	return Global_2450632.f_17;
}

var func_254()
{
	return Global_2450632.f_16;
}

var func_255()
{
	return Global_2450632.f_15;
}

int func_256(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_251())
	{
		iVar2 = func_248(iParam1);
		if (!iVar2 == -1)
		{
			return func_246(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_42())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_232(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_257(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_237(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_244(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_258()
{
	return Global_2359302.f_2;
}

bool func_259()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_260()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_39.f_18, 14);
}

int func_261(int iParam0)
{
	if (func_85(iParam0, 0))
	{
		return 1;
	}
	if (func_262())
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

bool func_262()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_263(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0xD06AC7C87A34A6AD(sParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_264(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 4);
	}
	return 0;
}

void func_265()
{
	if (func_269() != -1)
	{
		if (!func_263("CH_OWNER_SETUP", unk_0x6E524813889AECF8(func_269())))
		{
			func_229("CH_OWNER_SETUP", unk_0x6E524813889AECF8(func_269()), func_230(func_269(), -2, 0, 0, 0), -1);
		}
	}
}

int func_266(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 0);
	}
	return 0;
}

void func_267()
{
	if (func_269() != -1)
	{
		if (!func_263("CH_SETUP_REG2", unk_0x6E524813889AECF8(func_269())))
		{
			func_229("CH_SETUP_REG2", unk_0x6E524813889AECF8(func_269()), func_230(func_269(), -2, 0, 0, 0), -1);
		}
	}
}

int func_268(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (Global_1628237[iParam0].f_11 != func_42())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_269()
{
	return func_270(unk_0xD803B885F5E47A62());
}

int func_270(int iParam0)
{
	if (iParam0 == func_42())
	{
		return iParam0;
	}
	if (func_272(iParam0) != -1)
	{
		iVar0 = func_271(func_272(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_250(iParam0, 0))
			{
				return func_249(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_42();
		}
		return Global_2425662[iParam0].f_310.f_8;
	}
	return func_42();
}

int func_271(int iParam0)
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

int func_272(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == unk_0xD803B885F5E47A62()) && func_203(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
	}
	return -1;
}

void func_273(var uParam0)
{
	if (func_459(0))
	{
		if (func_17(uParam0, 2))
		{
			func_479();
			return;
		}
		if (!func_227("CH_SETUP_SCOPE"))
		{
			func_226("CH_SETUP_SCOPE");
		}
		if (unk_0xBFC0798A6E3417F9(0, 51))
		{
			func_444(1);
			func_442();
			func_441(uParam0, 2);
			func_479();
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
	}
	else
	{
		switch (func_277(unk_0xD803B885F5E47A62(), 158, 0))
		{
			case 15:
				if (func_275(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G1", -1);
				}
				else if (func_274(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G2", -1);
				}
				else
				{
					func_10("GENERAL_MLF_G3", -1);
				}
				break;
			
			case 16:
				if (func_275(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G4", -1);
				}
				else if (func_274(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G5", -1);
				}
				else
				{
					func_10("GENERAL_MLF_G6", -1);
				}
				break;
			}
	}
}

bool func_274(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

bool func_275(int iParam0)
{
	return func_276(iParam0, 1);
}

int func_276(int iParam0, int iParam1)
{
	if (iParam0 != func_42())
	{
		if (Global_1628237[iParam0].f_11 != func_42())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_277(int iParam0, int iParam1, bool bParam2)
{
	if (!func_308(func_413(iParam1, -1, -1, -1), func_370(iParam1, -1, 1, -1, -1, iParam0), func_317(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_275(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_306(iParam1) >= func_305(iVar0))
	{
		return 5;
	}
	if (func_304(iParam0))
	{
		return 6;
	}
	if (func_303(iParam0))
	{
		return 14;
	}
	iVar1 = func_298(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_297(iParam1) == 1)
	{
		if ((func_296() || func_295()) || ((!bParam2 && func_294() != 0) && func_297(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_297(iParam1) == 2)
	{
		if (!func_291(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0].f_11.f_34 != func_42())
			{
				return 9;
			}
		}
		if (func_290(iParam0))
		{
			return 10;
		}
	}
	else if (func_288(iParam1))
	{
		if (func_287(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_286(iParam1))
	{
		if (func_285())
		{
			return 13;
		}
		if (func_283())
		{
			return 12;
		}
	}
	if (func_287(iParam0) + 1 < func_282(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_279(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_278(iParam0, 21) || func_278(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_278(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_279(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (!func_280(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_41(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_280(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_42())
	{
		if (!bParam2)
		{
			if (func_281(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_42())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_281(int iParam0, int iParam1)
{
	if (iParam1 != func_42())
	{
		if (iParam0 != func_42())
		{
			if (Global_1628237[iParam0].f_11 != func_42())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18163;
		
		case 183:
			return Global_262145.f_18171;
		
		case 185:
			return Global_262145.f_18180;
		
		case 182:
			return Global_262145.f_18191;
		
		case 186:
			return Global_262145.f_18200;
		
		case 195:
			return Global_262145.f_18218;
		
		case 198:
			return Global_262145.f_18228;
		
		case 197:
			return Global_262145.f_18240;
		
		case 207:
			return Global_262145.f_18248;
		
		case 209:
			return Global_262145.f_18261;
		
		case 208:
			return Global_262145.f_18269;
		
		case 201:
			return Global_262145.f_18302;
		
		case 211:
			return Global_262145.f_18370;
		
		case 193:
			return Global_262145.f_18393;
		
		case 205:
			return Global_262145.f_18411;
		
		case 189:
			return Global_262145.f_18376;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_283()
{
	if (func_284())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_284()
{
	return Global_1312837 == 10;
}

bool func_285()
{
	return Global_262145.f_15220;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_287(int iParam0)
{
	if (func_249(iParam0) == func_42())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_289(iParam0, 0);
	return 0;
}

int func_289(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_290(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if ((Global_1628237[iParam0].f_11.f_34 != func_42() && Global_1628237[iParam0].f_11.f_34 == iVar1) && Global_1628237[iVar1].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_293() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_292() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_292() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_292()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar2))
		{
			if (func_268(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_293()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar2))
		{
			if (func_275(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_294()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_102;
}

bool func_295()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_296()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_298(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_300())
	{
		iVar1 = Global_1628237[iParam0].f_11.f_11[iVar0];
		if (iVar1 != func_42())
		{
			if (unk_0x40B8C182D63932FC(iVar1))
			{
				if (func_304(iVar1))
				{
					return 7;
				}
				if (func_303(iVar1))
				{
					return 15;
				}
				if (func_299(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_299(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	if (((((unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 2) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 3)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 5)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 6)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 7)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_300()
{
	return (func_301() - 1);
}

int func_301()
{
	return func_302(unk_0xD803B885F5E47A62());
}

int func_302(int iParam0)
{
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_42() && Global_1628237[iVar0].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_303(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == 1885233650 || iVar1 == -1667301416)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_304(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_12566;
		
		case 155:
			return Global_262145.f_12591;
		
		case 153:
			return Global_262145.f_12555;
		
		case 163:
			return Global_262145.f_12531;
		
		case 160:
			return Global_262145.f_12544;
		
		case 154:
			return Global_262145.f_12601;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15047;
		
		case 172:
			return Global_262145.f_15066;
		
		case 148:
			return Global_262145.f_18277;
		
		case 179:
			return Global_262145.f_18285;
		
		case 201:
			return Global_262145.f_18299;
		
		case 200:
			return Global_262145.f_18339;
		
		case 211:
			return Global_262145.f_18368;
		
		case 194:
			return Global_262145.f_18380;
		
		case 193:
			return Global_262145.f_18391;
		
		case 210:
			return Global_262145.f_18403;
		
		case 205:
			return Global_262145.f_18409;
		
		case 199:
			return Global_262145.f_18422;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_306(int iParam0)
{
	return Global_1650640.f_11.f_147[func_307(iParam0)];
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 181:
			return 24;
		
		case 182:
			return 25;
		
		case 183:
			return 26;
		
		case 185:
			return 27;
		
		case 186:
			return 28;
		
		case 189:
			return 31;
		
		case 190:
			return 32;
		
		case 191:
			return 33;
		
		case 192:
			return 34;
		
		case 193:
			return 35;
		
		case 194:
			return 36;
		
		case 195:
			return 37;
		
		case 197:
			return 39;
		
		case 198:
			return 40;
		
		case 199:
			return 41;
		
		case 200:
			return 42;
		
		case 201:
			return 43;
		
		case 205:
			return 44;
		
		case 207:
			return 45;
		
		case 208:
			return 46;
		
		case 209:
			return 47;
		
		case 210:
			return 48;
		
		case 214:
			return 49;
		
		case 215:
			return 50;
		
		case 216:
			return 51;
		
		case 217:
			return 52;
		
		case 218:
			return 53;
		
		case 219:
			return 54;
		
		case 220:
			return 55;
		
		case 221:
			return 56;
		
		case 188:
			return 30;
		
		case 225:
			return 57;
		
		case 226:
			return 58;
		
		case 227:
			return 59;
		
		case 229:
			return 60;
		
		case 230:
			return 61;
		
		case 233:
			return 62;
		
		case 237:
			return 63;
		
		case 238:
			return 64;
		
		case 239:
			return 65;
		
		case 240:
			return 66;
		
		case 241:
			return 67;
		
		case 242:
			return 68;
		
		case 244:
			return 69;
		
		case 248:
			return 70;
		
		case 249:
			return 71;
		
		case 250:
			return 72;
		
		case 243:
			return 73;
		
		case 158:
			return 74;
		
		case 24:
			return 75;
		
		case 26:
			return 76;
		
		default:
	}
	return -1;
}

int func_308(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_316(iParam0, bParam3, bParam4) || func_315(iParam1, bParam3, bParam4)) || func_309(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0, bool bParam1, bool bParam2)
{
	return func_310(2, iParam0, 0, bParam1, bParam2);
}

int func_310(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_314(iParam0) - func_313(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_313(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_314(iParam0) - func_312(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_313(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_314(iParam0) - func_313(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62()] != 3)
		{
			iVar1 = (iVar1 - func_311(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_313(int iParam0, bool bParam1)
{
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_209;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_210;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0].f_211;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_315(int iParam0, bool bParam1, bool bParam2)
{
	return func_310(1, iParam0, 0, bParam1, bParam2);
}

int func_316(int iParam0, bool bParam1, bool bParam2)
{
	return func_310(0, iParam0, 0, bParam1, bParam2);
}

int func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_369(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_367(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_361(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_349(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
		case 233:
			return func_342(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_333(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_330(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_329(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_325(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 158:
			return func_321(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 181:
			return func_318(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_318(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_320(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_319(iParam0, iParam2));
	return iVar0;
}

int func_319(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_320(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_324(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_322(iParam0, iParam2));
	return iVar0;
}

int func_322(int iParam0, int iParam1)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_250(iParam1, 1))
			{
				vVar0 = { func_323(iParam1) };
			}
			if (vVar0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_323(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

int func_324(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_325(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_328(iParam0, iParam1, iParam3);
	if (!func_327(iParam0))
	{
		iVar0 = (iVar0 + func_326(iParam0, iParam2));
	}
	return iVar0;
}

int func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_287(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_327(int iParam0)
{
	return 0;
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_330(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_332(iParam0, iParam1);
	if (func_331(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_331(int iParam0)
{
	return 1;
}

int func_332(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_333(int iParam0, int iParam1)
{
	iVar0 = func_341(iParam0, iParam1);
	if (!func_340(iParam0))
	{
		iVar0 = (iVar0 + func_334(iParam0, func_338() + 1));
	}
	if (iParam0 == 14 || ((((func_340(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_334(iParam0, func_338() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_334(int iParam0, int iParam1)
{
	if (func_337(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_336(iParam0, iParam1);
			iVar2 = func_335(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_340(iParam0))
		{
			if (iVar0 > Global_262145.f_17914)
			{
				iVar0 = Global_262145.f_17914;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17913)
			{
				iVar0 = Global_262145.f_17913;
			}
			if (iVar0 > Global_262145.f_17912)
			{
				iVar0 = Global_262145.f_17912;
			}
		}
	}
	return iVar0;
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17951;
		
		case 10:
			return Global_262145.f_17976;
		
		default:
	}
	return 1;
}

int func_336(int iParam0, int iParam1)
{
	if (func_340(iParam0))
	{
		if (iParam1 >= Global_262145.f_17915)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17952;
		
		case 10:
			return Global_262145.f_17977;
		
		default:
	}
	return 8;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_338()
{
	if (func_339() == func_42())
	{
		return 0;
	}
	return func_287(func_339());
}

int func_339()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_341(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_348(iParam0, iParam1, iParam2, iParam4);
	if (!func_347(iParam0))
	{
		if (iParam3 != func_42())
		{
			iVar0 = (iVar0 + func_344(iParam0, func_287(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_343(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_344(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_347(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_346(iParam0))
	{
		iVar0 = func_346(iParam0);
	}
	else if (iVar0 < func_345(iParam0))
	{
		iVar0 = func_345(iParam0);
	}
	return iVar0;
}

int func_345(int iParam0)
{
	return 1;
}

int func_346(int iParam0)
{
	return 4;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_348(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_349(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_360(iParam0, iParam1, iParam2, iParam4);
	if (!func_359(iParam0))
	{
		if (iParam3 != func_42())
		{
			iVar0 = (iVar0 + func_351(iParam0, func_287(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_350(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_358(iParam0))
	{
		iVar1 = func_357(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_356(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_355(iParam2))
		{
			iVar0 = func_355(iParam2);
		}
	}
	if (iVar0 > func_353(iParam0))
	{
		iVar0 = func_353(iParam0);
	}
	else if (iVar0 < func_352(iParam0))
	{
		iVar0 = func_352(iParam0);
	}
	return iVar0;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_353(int iParam0)
{
	if (!func_358(iParam0))
	{
		if (func_359(iParam0))
		{
			if (func_354(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_355(int iParam0)
{
	if (iParam0 == func_42() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_357(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
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
			return 1;
		
		default:
	}
	return 0;
}

int func_359(int iParam0)
{
	if (func_358(iParam0) || func_356(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_361(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_366(iParam0, iParam1, iParam2, iParam3);
	if (!func_365(iParam0))
	{
		iVar0 = (iVar0 + func_363(iParam0, func_338() + 1, -1, iParam2));
	}
	if (func_362(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_363(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_364(iParam0))
	{
		if (iParam2 <= Global_262145.f_21206)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21207)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_365(iParam0))
	{
		if (iParam1 < Global_262145.f_21166)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_366(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_367(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_368(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_368(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_412(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_408(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_404(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_398(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
		
		case 233:
			return func_392(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_391(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_390(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_389(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_383(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_377(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_371(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_371(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_376(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_375(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_374(func_287(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_373(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_372(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_372(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_373(int iParam0, int iParam1)
{
	return func_372(iParam0, iParam1) > 0;
}

int func_374(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_375(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_376(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_377(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_382(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_381(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_380(func_287(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_379(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_378(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_378(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_379(int iParam0, int iParam1)
{
	return func_378(iParam0, iParam1) > 0;
}

int func_380(int iParam0, int iParam1, int iParam2)
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_42())
			{
				if (func_250(iParam2, 1))
				{
					vVar0 = { func_323(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (vVar0.y == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_381(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_382(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_383(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_327(iParam0))
		{
			iVar0 = (iVar0 + func_326(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_388(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_387(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_386(func_287(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_385(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_384(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_384(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_385(int iParam0, int iParam1)
{
	return func_384(iParam0, iParam1) > 0;
}

int func_386(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_387(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_388(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_331(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_391(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_340(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_334(iParam0, func_338() + 1));
	}
	return iVar0;
}

int func_392(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_347(iParam0))
		{
			if (iParam3 != func_42())
			{
				iVar0 = (iVar0 + func_344(iParam0, func_287(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_42())
		{
			iVar0 = (iVar0 + func_397(iParam0, func_287(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_396(0, iParam1) != -1)
		{
			if (iParam3 != func_42())
			{
				iVar0 = (iVar0 + func_395(func_287(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_394(iParam0))
		{
			iVar0 = (iVar0 + func_393(iParam0));
		}
	}
	return iVar0;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_394(int iParam0)
{
	return func_393(iParam0) > 0;
}

int func_395(var uParam0, int iParam1)
{
	return 2;
}

int func_396(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_397(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_9(5326, -1, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_398(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_359(iParam0))
		{
			if (iParam3 != func_42())
			{
				iVar0 = (iVar0 + func_351(iParam0, func_287(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_42())
		{
			iVar0 = (iVar0 + func_403(iParam0, func_287(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_402(0, iParam1) != -1)
		{
			if (iParam3 != func_42())
			{
				iVar0 = (iVar0 + func_401(func_287(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_400(iParam0))
		{
			iVar0 = (iVar0 + func_399(iParam0));
		}
	}
	return iVar0;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_400(int iParam0)
{
	return func_399(iParam0) > 0;
}

int func_401(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_354(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_354(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_354(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_354(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_354(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_354(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_354(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_354(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_402(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_403(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_404(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_363(iParam0, func_338() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_365(iParam0))
		{
			iVar0 = (iVar0 + func_363(iParam0, func_338() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_407(iParam0, func_338() + 1));
	}
	if (!bParam3)
	{
		if (func_406(iParam0))
		{
			iVar0 = (iVar0 + func_405(iParam0));
		}
	}
	return iVar0;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_406(int iParam0)
{
	return func_405(iParam0) > 0;
}

int func_407(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1,5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_408(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_411(iParam0, func_338() + 1, iParam2));
	iVar0 = (iVar0 + func_409(iParam0));
	return iVar0;
}

int func_409(int iParam0)
{
	if (func_410(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_411(int iParam0, var uParam1, int iParam2)
{
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_413(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_440(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_437(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_434(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_431(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_428(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_427(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_426();
		
		case 218:
			return func_425();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_424(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_423(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_420(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_417(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_414(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_414(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_373(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_415(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_415(int iParam0, var uParam1)
{
	if (func_373(iParam0, uParam1))
	{
		return (func_372(iParam0, uParam1) + func_416(iParam0, uParam1));
	}
	return 0;
}

int func_416(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_417(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_379(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_418(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_418(int iParam0, int iParam1)
{
	if (func_379(iParam0, iParam1))
	{
		return (func_378(iParam0, iParam1) + func_419(iParam0, iParam1));
	}
	return 0;
}

int func_419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_420(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_385(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_421(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_421(int iParam0, int iParam1)
{
	if (func_385(iParam0, iParam1))
	{
		return (func_384(iParam0, iParam1) + func_422(iParam0, iParam1));
	}
	return 0;
}

int func_422(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_423(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_424(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_425()
{
	iVar0 = 32;
	return iVar0;
}

int func_426()
{
	iVar0 = 8;
	return iVar0;
}

int func_427(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_334(iParam0, func_338() + 1));
	}
	return iVar0;
}

int func_428(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_394(iParam0))
		{
			iVar0 = (iVar0 + func_429(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_429(int iParam0, var uParam1)
{
	if (func_394(iParam0))
	{
		return (func_393(iParam0) + func_430(iParam0, uParam1));
	}
	return 0;
}

int func_430(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_431(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_400(iParam0))
		{
			iVar0 = (iVar0 + func_432(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_432(int iParam0, int iParam1)
{
	if (func_400(iParam0))
	{
		return (func_399(iParam0) + func_433(iParam0, iParam1));
	}
	return 0;
}

int func_433(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_434(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_406(iParam0))
		{
			iVar0 = (iVar0 + func_435(iParam0));
		}
	}
	return iVar0;
}

int func_435(int iParam0)
{
	if (func_406(iParam0))
	{
		return (func_405(iParam0) + func_436(iParam0));
	}
	return 0;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_437(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_438(iParam0));
	return iVar0;
}

int func_438(int iParam0)
{
	if (func_410(iParam0))
	{
		if (func_439(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

void func_441(var uParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(uParam0->f_4357), iParam1);
}

void func_442()
{
	if (!func_443())
	{
		Global_1676377.f_3098 = 1;
	}
}

bool func_443()
{
	return Global_1676377.f_474;
}

void func_444(int iParam0)
{
	func_445(iParam0, -1, -1, -1);
}

void func_445(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_458(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_457(iParam0);
	}
	func_456(iParam1, iParam2, iParam3);
	func_446(158, -1);
}

void func_446(int iParam0, int iParam1)
{
	if (func_477() || !func_455(1))
	{
		if (!func_453(unk_0xD803B885F5E47A62(), 0))
		{
			func_452(iParam0);
			func_447(iParam0, func_451(1, 1), func_450(), func_449(), func_448(), iParam1);
		}
	}
}

void func_447(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	Var0 = 848786118;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 7, iParam1);
	}
}

var func_448()
{
	return Global_2537071.f_5124.f_341;
}

var func_449()
{
	return Global_2537071.f_5124.f_340;
}

var func_450()
{
	return Global_2537071.f_5124.f_339;
}

int func_451(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_203(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_85(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_452(var uParam0)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_32 = uParam0;
}

int func_453(int iParam0, int iParam1)
{
	if (func_454(iParam0, 0))
	{
		return func_297(Global_1628237[iParam0].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_454(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_455(bool bParam0)
{
	return func_250(unk_0xD803B885F5E47A62(), bParam0);
}

void func_456(var uParam0, var uParam1, var uParam2)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_301 = uParam0;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_301.f_1 = uParam1;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_301.f_2 = uParam2;
}

void func_457(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

bool func_458(int iParam0)
{
	return Global_1590535[iParam0].f_274.f_393 != 0;
}

int func_459(bool bParam0)
{
	if (func_277(unk_0xD803B885F5E47A62(), 158, 0) != -1)
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0xE57E602827E07C9D())
		{
			return 0;
		}
	}
	return 1;
}

bool func_460(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xEAE0D21A50E6C7F4(func_9(8723, -1, 0), 4);
	}
	return func_264(unk_0xD803B885F5E47A62());
}

void func_461(var uParam0)
{
	switch (uParam0->f_4358)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Global_1696370.f_23, 4))
			{
				if (!func_227("CH_ON_COOLDOWN"))
				{
					func_226("CH_ON_COOLDOWN");
				}
				return;
			}
			if (!func_474(14))
			{
				func_10("CH_SETUP_COST", -1);
				func_473(14);
			}
			if (!func_227("CH_SETUP_COST"))
			{
				if (!func_227("CH_SETUP_HEIST"))
				{
					func_226("CH_SETUP_HEIST");
				}
				if (unk_0xBFC0798A6E3417F9(0, 51))
				{
					func_479();
					func_462(unk_0xD803B885F5E47A62(), 0, 0, 0);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
					uParam0->f_4360 = 1;
					uParam0->f_4358 = 1;
				}
			}
			break;
	}
}

void func_462(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_472())
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
		if (!func_470())
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
				else if (bVar14 || (!func_85(unk_0xD803B885F5E47A62(), 0) && !func_262()))
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
					func_467(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_466(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_465();
					func_464();
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
				if (!func_466(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_463(Global_4456448.f_232883))
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

bool func_463(int iParam0)
{
	return iParam0 == 17;
}

void func_464()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_465()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_466(int iParam0)
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

void func_467(bool bParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (bParam0 == 1)
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
			if (bParam0 == 1)
			{
				func_469();
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
		if (func_85(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_468(-2008016205, bParam0);
	}
}

void func_468(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_469()
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

int func_470()
{
	if (func_471() == 0)
	{
		return 1;
	}
	return 0;
}

int func_471()
{
	return Global_1312467.f_18;
}

int func_472()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_473(int iParam0)
{
	iVar0 = func_9(8723, -1, 0);
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
	{
		unk_0x5D96D8530B3D0904(&iVar0, iParam0);
		Global_1696370.f_24 = iVar0;
		func_6(8723, iVar0, -1, 1, 0);
	}
}

bool func_474(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(func_9(8723, -1, 0), iParam0);
}

bool func_475()
{
	return unk_0xEAE0D21A50E6C7F4(func_9(8723, -1, 0), 0);
}

void func_476()
{
	switch (func_223())
	{
		case 0:
			StringCopy(&Var0, "CH_SETUP_REG", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "CH_PREP_REG", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CH_FINALE_REG", 16);
			break;
	}
	if (!func_227(&Var0))
	{
		func_226(&Var0);
	}
}

bool func_477()
{
	return func_268(unk_0xD803B885F5E47A62());
}

bool func_478()
{
	return func_269() == unk_0xD803B885F5E47A62();
}

void func_479()
{
	if ((((((((func_227("CH_SETUP_USE") || func_227("CH_PREP_USE")) || func_227("CH_FINALE_USE")) || func_227("CH_SETUP_HEIST")) || func_227("CH_SETUP_REG")) || func_227("CH_PREP_REG")) || func_227("CH_FINALE_REG")) || func_227("CH_SETUP_SCOPE")) || func_227("CH_ON_COOLDOWN"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_269() != -1)
	{
		if ((func_263("CH_OWNER_SCOPE", unk_0x6E524813889AECF8(func_269())) || func_263("CH_OWNER_SETUP", unk_0x6E524813889AECF8(func_269()))) || func_263("CH_SETUP_REG2", unk_0x6E524813889AECF8(func_269())))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

int func_480(var uParam0)
{
	if (func_17(uParam0, 2))
	{
		return 0;
	}
	if (func_17(uParam0, 3) || func_17(uParam0, 4))
	{
		return 0;
	}
	if (func_505() || func_504())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (!func_41(unk_0xD803B885F5E47A62(), 2))
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (func_499())
	{
		return 0;
	}
	if (func_454(unk_0xD803B885F5E47A62(), 0) && func_40(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_498(uParam0))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (func_497())
	{
		return 0;
	}
	if (func_496())
	{
		return 0;
	}
	if (!func_495())
	{
		return 0;
	}
	if (!func_494(func_223()))
	{
		return 0;
	}
	if (!func_482(uParam0, func_223()))
	{
		return 0;
	}
	if (func_481() == 2 || func_481() == 16)
	{
		return 0;
	}
	if (func_73(0))
	{
		return 0;
	}
	return 1;
}

int func_481()
{
	return Global_968397;
}

int func_482(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (!func_266(uParam0->f_4356))
			{
				return 0;
			}
			if (func_113(uParam0->f_4356) == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (!func_266(uParam0->f_4356))
			{
				return 0;
			}
			if (func_113(uParam0->f_4356) == 0)
			{
				return 0;
			}
			if (!func_483(uParam0->f_4356))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_483(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	if (!func_493(iParam0))
	{
		return 0;
	}
	if (func_164(iParam0, 0) == 0)
	{
		return 0;
	}
	if (!func_492(iParam0))
	{
		return 0;
	}
	if (func_153(iParam0, 0) == 0)
	{
		return 0;
	}
	if (!func_491(iParam0))
	{
		return 0;
	}
	if (func_490(iParam0, 0) == 0)
	{
		return 0;
	}
	if (!func_489(iParam0))
	{
		return 0;
	}
	switch (func_113(iParam0))
	{
		case 1:
			if (!func_488(iParam0))
			{
				return 0;
			}
			if (!func_487(iParam0))
			{
				return 0;
			}
			break;
		
		case 2:
			if (!func_172(iParam0))
			{
				return 0;
			}
			if (!func_486(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_485(iParam0))
			{
				return 0;
			}
			if (!func_484(iParam0))
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_484(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 9);
	}
	return 0;
}

int func_485(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 8);
	}
	return 0;
}

int func_486(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 7);
	}
	return 0;
}

int func_487(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 6);
	}
	return 0;
}

int func_488(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 5);
	}
	return 0;
}

int func_489(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 4);
	}
	return 0;
}

int func_490(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (Global_1700796[iParam0].f_18.f_14 != 0 || bParam1)
		{
			return Global_1700796[iParam0].f_18.f_14;
		}
	}
	if (bParam1)
	{
		return Global_1696399.f_17;
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 3);
	}
	return 0;
}

int func_492(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 2);
	}
	return 0;
}

int func_493(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 1);
	}
	return 0;
}

int func_494(int iParam0)
{
	if (!func_203(unk_0xD803B885F5E47A62(), 1, 1))
	{
		return 0;
	}
	fVar0 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	switch (iParam0)
	{
		case 0:
			if (fVar0 < 45f || fVar0 > 315f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 < 315f && fVar0 > 225f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 < 225f && fVar0 > 135f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_495()
{
	return ((func_224(0) || func_224(1)) || func_224(2));
}

bool func_496()
{
	return Global_2450632.f_592;
}

bool func_497()
{
	return Global_2450632.f_591;
}

int func_498(var uParam0)
{
	if ((uParam0->f_724 == 3 && uParam0->f_744.f_724 == 3) && uParam0->f_1497.f_724 == 3)
	{
		return 1;
	}
	return 0;
}

bool func_499()
{
	return Global_73825;
}

int func_500()
{
	bVar0 = ((unk_0x06F8112AA79C53D9(2, 199) || unk_0xBFC0798A6E3417F9(2, 199)) || unk_0xB9132A06AE472728(2, 199));
	if (bVar0)
	{
		iLocal_250 = 1;
		return 1;
	}
	else if (iLocal_250)
	{
		if (func_502(&uLocal_251, 1000, 0))
		{
			func_501(&uLocal_251);
			iLocal_250 = 0;
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_501(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_502(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_503(uParam0, bParam2, 0);
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

void func_503(var uParam0, bool bParam1, bool bParam2)
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

var func_504()
{
	return Global_1687721;
}

var func_505()
{
	return Global_1687722;
}

int func_506(var uParam0)
{
	if ((uParam0->f_724.f_5 || uParam0->f_744.f_724.f_5) || uParam0->f_1497.f_724.f_5)
	{
		return 1;
	}
	return 0;
}

void func_507(var uParam0)
{
	switch (uParam0->f_4358)
	{
		case 1:
			if (func_528(uParam0, 6, &bVar0))
			{
				if (bVar0)
				{
					uParam0->f_4358 = 2;
					if (uParam0->f_4360)
					{
						func_462(unk_0xD803B885F5E47A62(), 1, 0, 0);
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
						uParam0->f_4360 = 0;
					}
				}
				else
				{
					uParam0->f_4358 = 0;
					if (uParam0->f_4360)
					{
						func_462(unk_0xD803B885F5E47A62(), 1, 0, 0);
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
						uParam0->f_4360 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xCB466C2A425A9168(&iVar1, &iVar2))
			{
				func_6(8910, iVar1, -1, 1, 0);
				func_6(8911, iVar2, -1, 1, 0);
				iVar3 = func_527(uParam0);
				if (func_526())
				{
					func_514(914079366, iVar3, &uVar4, 0, 1, 0);
				}
				else
				{
					unk_0xFF90259E892D5F8A(iVar3, 0, 1, 1, iVar3, 0, 0, 0, 0, 0, 0);
				}
				uParam0->f_4358 = 3;
			}
			break;
		
		case 3:
			if (func_513(&iVar5))
			{
				func_512(iVar5);
				uParam0->f_4358 = 4;
			}
			break;
		
		case 4:
			func_508();
			func_222(uParam0, func_223());
			func_201(uParam0, 1);
			uParam0->f_4358 = 5;
			break;
		
		case 5:
			break;
	}
}

void func_508()
{
	iVar0 = func_9(8723, -1, 0);
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0);
		Global_1696370.f_24 = iVar0;
		func_6(8723, iVar0, -1, 1, 0);
		func_509(-1713398555, 18, 0);
	}
}

void func_509(int iParam0, int iParam1, int iParam2)
{
	if (func_511(iParam1, iParam2))
	{
		iVar0 = func_510();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_510()
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

int func_511(int iParam0, var uParam1)
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

void func_512(int iParam0)
{
	func_6(8530, iParam0, -1, 1, 0);
	Global_1700796[unk_0xD803B885F5E47A62()].f_18.f_7 = iParam0;
}

int func_513(var uParam0)
{
	if ((Global_262145.f_27619 != -1 && !unk_0xEAE0D21A50E6C7F4(func_9(8723, -1, 0), 17)) && func_193(unk_0xD803B885F5E47A62(), 0))
	{
		*uParam0 = Global_262145.f_27619;
		return 1;
	}
	uVar0[0] = Global_262145.f_28017;
	uVar0[1] = Global_262145.f_28019;
	uVar0[2] = Global_262145.f_28018;
	uVar0[3] = Global_262145.f_28020;
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		fVar5 = (fVar5 + uVar0[iVar8]);
		iVar8++;
	}
	fVar7 = unk_0x79833B02DBD2A244(0f, fVar5);
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		fVar6 = (fVar6 + uVar0[iVar8]);
		if (fVar7 < fVar6)
		{
			*uParam0 = iVar8;
			return 1;
		}
		iVar8++;
	}
	return 0;
}

void func_514(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_526())
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
				func_515(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_515(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_515(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_515(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_515(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_526())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_8()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_522(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_521(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_516(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_516(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_517(iParam0);
	}
}

void func_517(int iParam0)
{
	bVar0 = false;
	if (!func_526())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_520(iParam0))
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
		func_518(&(Global_4263954[iParam0]));
	}
}

void func_518(var uParam0)
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
	func_519(&(uParam0->f_14));
	func_519(&(uParam0->f_14.f_13));
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

void func_519(var uParam0)
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

int func_520(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_521(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_526())
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_523(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_523(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_525(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_524();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_524()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_525(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_526()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_527(var uParam0)
{
	if (!func_193(uParam0->f_4356, 0))
	{
		return 0;
	}
	return Global_262145.f_28021;
}

int func_528(var uParam0, int iParam1, var uParam2)
{
	iVar80 = 0;
	iVar82 = 36;
	StringCopy(&cVar0, "HPWARN_CONF", 64);
	switch (iParam1)
	{
		case 0:
			StringCopy(&cVar16, "CH_WARN_CWE", 64);
			StringCopy(&cVar32, func_534(uParam0->f_744.f_738, 0), 64);
			break;
		
		case 1:
			StringCopy(&cVar16, "CH_WARN_CDR", 64);
			StringCopy(&cVar32, func_533(uParam0->f_744.f_740, 0), 64);
			break;
		
		case 2:
			StringCopy(&cVar16, "CH_WARN_CHR", 64);
			StringCopy(&cVar32, func_532(uParam0->f_744.f_743, 0), 64);
			break;
		
		case 3:
			StringCopy(&cVar16, "CH_WARN_APR", 64);
			StringCopy(&cVar32, func_133(1, 0), 64);
			break;
		
		case 4:
			StringCopy(&cVar16, "CH_WARN_APRb", 64);
			StringCopy(&cVar32, func_133(2, 0), 64);
			break;
		
		case 5:
			StringCopy(&cVar16, "CH_WARN_APR", 64);
			StringCopy(&cVar32, func_133(3, 0), 64);
			break;
		
		case 6:
			StringCopy(&cVar16, "CH_WARN_SETUP", 64);
			StringCopy(&cVar64, "HEIST_WARN_2", 64);
			iVar80 = 1;
			iVar81 = func_527(uParam0);
			break;
		
		case 7:
			StringCopy(&cVar16, "CH_WARN_CWS", 64);
			StringCopy(&cVar32, func_531(uParam0, 0), 64);
			break;
		
		case 8:
			StringCopy(&cVar16, "CH_WARN_CVS", 64);
			StringCopy(&cVar32, func_530(uParam0, 0), 64);
			break;
		
		case 9:
			StringCopy(&cVar16, "CH_WARN_PCM", 64);
			iVar80 = 1;
			iVar81 = func_126(2);
			break;
		
		case 10:
			StringCopy(&cVar16, "CH_WARN_PVD", 64);
			iVar80 = 1;
			iVar81 = func_126(4);
			break;
		
		case 11:
			StringCopy(&cVar16, "CH_WARN_PDS", 64);
			iVar80 = 1;
			iVar81 = func_126(3);
			break;
		
		case 12:
			StringCopy(&cVar16, "CH_WARN_SKIP", 64);
			iVar80 = 1;
			iVar81 = func_529();
			break;
		
		case 13:
			switch (uParam0->f_744.f_742)
			{
				case 1:
					StringCopy(&cVar16, "CH_WARN_CIM1", 64);
					break;
				
				case 2:
					StringCopy(&cVar16, "CH_WARN_CIM2", 64);
					break;
			}
			break;
		
		case 14:
			StringCopy(&cVar0, "FM_CSC_QUIT", 64);
			StringCopy(&cVar16, "FM_CSC_QUIT1", 64);
			break;
		
		case 15:
			StringCopy(&cVar16, "CH_WARN_PDV", 64);
			iVar80 = 1;
			iVar81 = func_110(6);
			break;
		
		case 16:
			StringCopy(&cVar0, "HPWARN_ALRT", 64);
			StringCopy(&cVar16, "CH_WARN_CADV", 64);
			iVar80 = 1;
			iVar81 = func_110(6);
			iVar82 = 10;
			break;
		
		case 17:
			StringCopy(&cVar16, "CH_WARN_PSV", 64);
			iVar80 = 1;
			iVar81 = func_110(7);
			break;
		
		case 18:
			StringCopy(&cVar0, "HPWARN_ALRT", 64);
			StringCopy(&cVar16, "CH_WARN_CASV", 64);
			iVar80 = 1;
			iVar81 = func_110(7);
			iVar82 = 10;
			break;
	}
	_set_warning_message_2(&cVar0, &cVar16, iVar82, &cVar64, iVar80, iVar81, &cVar32, &uVar48, 1, 0);
	if (unk_0x91E3F625EF57450D(2))
	{
		unk_0xC74D8A1D346B9CCB(1);
	}
	if (unk_0x9A01369A10646AFE(2, 202) || unk_0xB9132A06AE472728(2, 202))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Back", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		*uParam2 = 0;
		return 1;
	}
	if (unk_0x9A01369A10646AFE(2, 201) || unk_0xB9132A06AE472728(2, 201))
	{
		if (((((iParam1 == 12 || iParam1 == 9) || iParam1 == 15) || iParam1 == 11) || iParam1 == 17) || iParam1 == 10)
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Stick", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
		else
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

int func_529()
{
	switch (func_9(8801, -1, 0))
	{
		case 0:
			return 70000;
		
		case 1:
			return 100000;
		
		case 2:
			return 150000;
		
		case 3:
			return 200000;
		
		case 4:
			return 250000;
		
		default:
	}
	return 300000;
}

char* func_530(var uParam0, bool bParam1)
{
	switch (uParam0->f_744.f_741)
	{
		case 0:
			switch (uParam0->f_744.f_740)
			{
				case 1:
					if (!bParam1)
					{
						return "CH_VEH_0_01b";
					}
					return "CH_VEH_0_01";
				
				case 2:
					if (!bParam1)
					{
						return "CH_VEH_1_01b";
					}
					return "CH_VEH_1_01";
				
				case 3:
					if (!bParam1)
					{
						return "CH_VEH_2_01b";
					}
					return "CH_VEH_2_01";
				
				case 4:
					if (!bParam1)
					{
						return "CH_VEH_3_01b";
					}
					return "CH_VEH_3_01";
				
				case 5:
					if (!bParam1)
					{
						return "CH_VEH_4_01b";
					}
					return "CH_VEH_4_01";
				
				default:
			}
			break;
		
		case 1:
			switch (uParam0->f_744.f_740)
			{
				case 1:
					if (!bParam1)
					{
						return "CH_VEH_0_02b";
					}
					return "CH_VEH_0_02";
				
				case 2:
					if (!bParam1)
					{
						return "CH_VEH_1_02b";
					}
					return "CH_VEH_1_02";
				
				case 3:
					if (!bParam1)
					{
						return "CH_VEH_2_02b";
					}
					return "CH_VEH_2_02";
				
				case 4:
					if (!bParam1)
					{
						return "CH_VEH_3_02b";
					}
					return "CH_VEH_3_02";
				
				case 5:
					if (!bParam1)
					{
						return "CH_VEH_4_02b";
					}
					return "CH_VEH_4_02";
				
				default:
			}
			break;
		
		case 2:
			switch (uParam0->f_744.f_740)
			{
				case 1:
					if (!bParam1)
					{
						return "CH_VEH_0_03b";
					}
					return "CH_VEH_0_03";
				
				case 2:
					if (!bParam1)
					{
						return "CH_VEH_1_03b";
					}
					return "CH_VEH_1_03";
				
				case 3:
					if (!bParam1)
					{
						return "CH_VEH_2_03b";
					}
					return "CH_VEH_2_03";
				
				case 4:
					if (!bParam1)
					{
						return "CH_VEH_3_03b";
					}
					return "CH_VEH_3_03";
				
				case 5:
					if (!bParam1)
					{
						return "CH_VEH_4_03b";
					}
					return "CH_VEH_4_03";
				
				default:
			}
			break;
		
		case 3:
			switch (uParam0->f_744.f_740)
			{
				case 1:
					if (!bParam1)
					{
						return "CH_VEH_0_04b";
					}
					return "CH_VEH_0_04";
				
				case 2:
					if (!bParam1)
					{
						return "CH_VEH_1_04b";
					}
					return "CH_VEH_1_04";
				
				case 3:
					if (!bParam1)
					{
						return "CH_VEH_2_04b";
					}
					return "CH_VEH_2_04";
				
				case 4:
					if (!bParam1)
					{
						return "CH_VEH_3_04b";
					}
					return "CH_VEH_3_04";
				
				case 5:
					if (!bParam1)
					{
						return "CH_VEH_4_04b";
					}
					return "CH_VEH_4_04";
				
				default:
			}
			break;
	}
	return "";
}

char* func_531(var uParam0, bool bParam1)
{
	switch (uParam0->f_744.f_738)
	{
		case 1:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_0_01b";
							}
							return "CH_WEAP_0_01";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_0_02b";
							}
							return "CH_WEAP_0_02";
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_0_03b";
							}
							return "CH_WEAP_0_03";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_0_04b";
							}
							return "CH_WEAP_0_04";
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_0_05b";
							}
							return "CH_WEAP_0_05";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_0_06b";
							}
							return "CH_WEAP_0_06";
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_1_01b";
							}
							return "CH_WEAP_1_01";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_1_02b";
							}
							return "CH_WEAP_1_02";
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_1_03b";
							}
							return "CH_WEAP_1_03";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_1_04b";
							}
							return "CH_WEAP_1_04";
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_1_05b";
							}
							return "CH_WEAP_1_05";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_1_06b";
							}
							return "CH_WEAP_1_06";
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_2_01b";
							}
							return "CH_WEAP_2_01";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_2_02b";
							}
							return "CH_WEAP_2_02";
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_2_03b";
							}
							return "CH_WEAP_2_03";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_2_04b";
							}
							return "CH_WEAP_2_04";
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_2_05b";
							}
							return "CH_WEAP_2_05";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_2_06b";
							}
							return "CH_WEAP_2_06";
						
						default:
					}
					break;
			}
			break;
		
		case 4:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_3_01b";
							}
							return "CH_WEAP_3_01";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_3_02b";
							}
							return "CH_WEAP_3_02";
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_3_03b";
							}
							return "CH_WEAP_3_03";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_3_04b";
							}
							return "CH_WEAP_3_04";
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_3_05b";
							}
							return "CH_WEAP_3_05";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_3_06b";
							}
							return "CH_WEAP_3_06";
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_4_01b";
							}
							return "CH_WEAP_4_01";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_4_02b";
							}
							return "CH_WEAP_4_02";
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_4_03b";
							}
							return "CH_WEAP_4_03";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_4_04b";
							}
							return "CH_WEAP_4_04";
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							if (!bParam1)
							{
								return "CH_WEAP_4_05b";
							}
							return "CH_WEAP_4_05";
						
						case 1:
							if (!bParam1)
							{
								return "CH_WEAP_4_06b";
							}
							return "CH_WEAP_4_06";
						
						default:
					}
					break;
			}
			break;
	}
	return "";
}

char* func_532(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (!bParam1)
			{
				return "CH_HR_NAME_0b";
			}
			return "CH_HR_NAME_0";
		
		case 2:
			if (!bParam1)
			{
				return "CH_HR_NAME_1b";
			}
			return "CH_HR_NAME_1";
		
		case 3:
			if (!bParam1)
			{
				return "CH_HR_NAME_2b";
			}
			return "CH_HR_NAME_2";
		
		case 4:
			if (!bParam1)
			{
				return "CH_HR_NAME_3b";
			}
			return "CH_HR_NAME_3";
		
		case 5:
			if (!bParam1)
			{
				return "CH_HR_NAME_4b";
			}
			return "CH_HR_NAME_4";
		
		default:
	}
	return "";
}

char* func_533(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (!bParam1)
			{
				return "CH_DR_NAME_0b";
			}
			return "CH_DR_NAME_0";
		
		case 2:
			if (!bParam1)
			{
				return "CH_DR_NAME_1b";
			}
			return "CH_DR_NAME_1";
		
		case 3:
			if (!bParam1)
			{
				return "CH_DR_NAME_2b";
			}
			return "CH_DR_NAME_2";
		
		case 4:
			if (!bParam1)
			{
				return "CH_DR_NAME_3b";
			}
			return "CH_DR_NAME_3";
		
		case 5:
			if (!bParam1)
			{
				return "CH_DR_NAME_4b";
			}
			return "CH_DR_NAME_4";
		
		default:
	}
	return "";
}

char* func_534(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (!bParam1)
			{
				return "CH_WE_NAME_0b";
			}
			return "CH_WE_NAME_0";
		
		case 2:
			if (!bParam1)
			{
				return "CH_WE_NAME_1b";
			}
			return "CH_WE_NAME_1";
		
		case 3:
			if (!bParam1)
			{
				return "CH_WE_NAME_2b";
			}
			return "CH_WE_NAME_2";
		
		case 4:
			if (!bParam1)
			{
				return "CH_WE_NAME_3b";
			}
			return "CH_WE_NAME_3";
		
		case 5:
			if (!bParam1)
			{
				return "CH_WE_NAME_4b";
			}
			return "CH_WE_NAME_4";
		
		default:
	}
	return "";
}

void func_535(var uParam0)
{
	func_672(uParam0);
	func_536(uParam0);
}

void func_536(var uParam0)
{
	if (func_17(uParam0, 3) && !func_17(uParam0, 4))
	{
		if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
		{
			if (func_671() || func_670())
			{
				func_669();
			}
			else if (!func_17(uParam0, 4))
			{
				if (func_537(uParam0))
				{
					func_441(uParam0, 4);
					func_441(uParam0, 5);
				}
			}
		}
	}
	else if (func_17(uParam0, 5))
	{
		if (!func_17(uParam0, 6))
		{
			func_441(uParam0, 6);
			func_208(0, 0);
			func_208(0, 0);
		}
		func_205(uParam0, 5);
	}
}

int func_537(var uParam0)
{
	iVar0 = func_113(uParam0->f_4356);
	iVar1 = func_668(iVar0);
	iVar2 = func_666(iVar1);
	if (iVar2 == -1)
	{
		return 0;
	}
	Var3 = { Global_794709.f_4[iVar2] };
	iVar9 = Global_794709.f_4[iVar2].f_65;
	uVar10 = Global_794709.f_4[iVar2].f_71;
	func_610(func_611(unk_0xD803B885F5E47A62()));
	func_462(unk_0xD803B885F5E47A62(), 0, 376832, 0);
	Global_2451426.f_3822 = 1;
	func_609(unk_0xD803B885F5E47A62(), 0);
	iVar9 = 158;
	func_608();
	func_607();
	func_606(65);
	func_605();
	if (func_671() || func_604())
	{
		func_669();
	}
	else
	{
		Global_1676377.f_454 = 1;
		func_603(iVar9);
		if (func_338() <= 3)
		{
			func_602();
		}
		func_600(func_97(unk_0xD803B885F5E47A62()));
		func_598(&Var3);
		func_597(uVar10);
		func_596();
		func_594();
		func_593();
		func_218();
		func_592();
		vVar15 = { 0f, 0f, 0f };
		func_538(&(Global_2450632.f_680), 0, 0, vVar15, &uVar11, vVar15, 1, 0, &uVar11, &iVar14, iVar14, 0, 0, 0, 0, 0, 1, 0);
		func_208(0, 0);
		Global_1590535[unk_0xD803B885F5E47A62()].f_98 = 8;
		return 1;
	}
	return 0;
}

void func_538(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, vector3 vParam7, bool bParam10, bool bParam11, var uParam12, var uParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21)
{
	func_206(uParam0, iParam1, 1, iParam14, 1);
	if (func_85(unk_0xD803B885F5E47A62(), 0))
	{
		if (bParam11)
		{
			if (!unk_0x991B1F0980C62628())
			{
				if (!func_591() || bParam15)
				{
					func_581(0);
				}
			}
			return;
		}
	}
	if (!unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	}
	vVar3 = { vParam7 };
	fVar6 = -1f;
	if (func_580(iParam1))
	{
		*uParam6 = { func_579(iParam1, iParam2) };
		vVar3 = { func_578(iParam1, iParam2) };
		fVar6 = func_577(iParam1, iParam2);
	}
	if (!func_576(*uParam6))
	{
		vVar0 = { *uParam6 };
	}
	if (func_576(vVar0))
	{
		if (!bParam10)
		{
			vVar0 = { vParam3 };
			if (unk_0xD1BF3090E1F8300E(vVar0.x, vVar0.y, (vVar0.z + 1f)))
			{
			}
			else
			{
				vVar0.z = (vVar0.z + 4f);
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_576(vVar0))
		{
			if (func_85(unk_0xD803B885F5E47A62(), 0))
			{
				if (unk_0xC844350D5D58C99A(func_574()) && !unk_0x437347B10A200C4B(func_574(), 0))
				{
					vVar0 = { unk_0x68F4C0EC296D3901(func_574(), true) };
					vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(func_574()) };
					if (func_217(Global_1590535[unk_0xD803B885F5E47A62()].f_740, 1, 0))
					{
						vVar0 = { unk_0xF1EE614CA05DDE75() };
						vVar3 = { unk_0x9382F04ED9CDA21A(2) };
					}
				}
				else
				{
					vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) };
				}
			}
			else
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) };
			}
			if ((func_573(unk_0xD803B885F5E47A62()) || func_572(unk_0xD803B885F5E47A62())) && func_571())
			{
				vVar0.z = (vVar0.z + 1,5f);
			}
			else if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
			{
				if (func_573(unk_0xD803B885F5E47A62()))
				{
					vVar0.z = (vVar0.z + 0,4f);
				}
				else
				{
					vVar0.z = (vVar0.z + 1,5f);
				}
			}
			else
			{
				vVar0.z = (vVar0.z + 4f);
			}
		}
	}
	if (bParam19)
	{
		vVar0 = { 1124,745f, 263,6554f, -48,8552f };
		vVar3 = { -22,4617f, 0f, -75,8431f };
		fVar6 = 50f;
	}
	else if (func_570(Global_4456448.f_194990) || iParam18)
	{
		if (func_569(unk_0xD803B885F5E47A62()))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			vVar3 = { 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) };
			vVar0.z = (vVar0.z + 0,4f);
			fVar6 = unk_0x1265A70A2DDA35AB();
		}
		else
		{
			vVar0 = { -194,2056f, -1853,75f, 70,3345f };
			vVar3 = { -10,0011f, 0f, 131,0271f };
			fVar6 = 42,6052f;
		}
	}
	else if (func_568(Global_4456448.f_194990) || iParam17)
	{
		vVar0 = { 347,2638f, 4867,324f, -59,2679f };
		vVar3 = { 1,2933f, 0,0747f, -34,6934f };
		fVar6 = 50f;
	}
	else if (iParam20 || func_567(Global_4456448.f_194990))
	{
		vVar0 = { 2709,332f, -366,5988f, -52,2786f };
		vVar3 = { -19,962f, 0f, -121,3927f };
		fVar6 = 56,6574f;
	}
	else if (bParam21)
	{
		iVar7 = func_566(unk_0xD803B885F5E47A62());
		vVar0 = { unk_0x8A5E176FF719A014(func_565(iVar7), func_564(iVar7), 3,5688f, 7,9792f, 4,1641f) };
		vVar3 = { -21,6791f, 0f, (func_564(iVar7) + 40,237f) };
		fVar6 = 70f;
	}
	if (func_591() && !bParam15)
	{
		vVar0 = { -213,5595f, 316,9778f, 96,9244f };
		vVar3 = { -1,0483f, 0f, -127,3989f };
		fVar6 = 25,5102f;
	}
	if (iParam1 == 0 && bParam11)
	{
		func_557();
		func_556(&vVar8, 144, Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28);
		if (!func_576(vVar8))
		{
			vVar0 = { vVar8 };
		}
		func_550(&vVar8, 144, Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28);
		vVar3 = { vVar8 };
	}
	unk_0xE3BB8E05FCEB3FBE(*uParam0, true);
	unk_0x608A456FDD8A83D8(*uParam0, vVar0);
	unk_0x5F3CBA6EB9341C90(*uParam0, vVar3, 2);
	if (fVar6 > 0f)
	{
		unk_0x5818C8D5303DCCF8(*uParam0, fVar6);
	}
	else
	{
		unk_0x5818C8D5303DCCF8(*uParam0, 40f);
	}
	if (func_591() && !bParam15)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_549(unk_0xD803B885F5E47A62()))
			{
				func_462(unk_0xD803B885F5E47A62(), 0, 4, 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -209,434f, 305,016f, 95,9464f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 12,5f);
				unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), -209,867f, 306,969f, 95,9464f, 1f, 20000, 40000f, 0,1f);
				unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, false, 0, 0);
				unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
			}
		}
		unk_0x28F5E4DA506AC0CA(-209,434f, 305,016f, 95,9464f, 30f, 0, 0, 0, 0, false, 0);
		func_548(1);
	}
	if (!unk_0x991B1F0980C62628())
	{
		if (!func_591() || bParam15)
		{
			func_581(0);
		}
	}
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (!func_547() && !func_546())
	{
		func_545(0);
	}
	if (func_216())
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0x991B1F0980C62628())
	{
		*uParam12 = { vVar0 };
		*uParam13 = 1;
	}
	else
	{
		func_544(vVar0);
	}
	unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 1);
	func_539(func_591(), ((iParam16 || iParam17) || iParam18));
}

void func_539(bool bParam0, bool bParam1)
{
	if (func_85(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	if (!bParam1 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
			{
				unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, true);
			}
		}
	}
	if (!bParam0)
	{
		if (unk_0x8CD06866876216F2())
		{
			if (func_541())
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			if (func_540())
			{
				func_462(unk_0xD803B885F5E47A62(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_462(unk_0xD803B885F5E47A62(), 0, 319492, 0);
			}
		}
		else
		{
			func_462(unk_0xD803B885F5E47A62(), 0, 57348, 0);
		}
	}
}

bool func_540()
{
	return Global_2451426.f_6190;
}

int func_541()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_543(iVar0, 1) && !func_542(iVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_542(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_543(int iParam0, bool bParam1)
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

void func_544(vector3 vParam0)
{
	if (!func_216())
	{
		return;
	}
	unk_0xF49D1BC9EF1C3EF4(vParam0, 0f, 0f, 0f);
	unk_0x448D99BAB1554268(1);
}

void func_545(int iParam0)
{
	if (func_214())
	{
		return;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return;
	}
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		unk_0x82E51BCA72537B6C(iParam0);
	}
}

bool func_546()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 9);
}

bool func_547()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 6);
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62()].f_146), 27);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62()].f_146), 27);
	}
}

bool func_549(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_146, 27);
}

int func_550(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
			func_551(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_551(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_551(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_551(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_551(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_551(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_551(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	Var0[0] = { func_555(iParam3, bParam4) };
	Var0[1] = { func_555(iParam0, bParam4) };
	*uParam2 = { func_553(iParam1, iParam3) };
	vVar13 = { *uParam2 - Var0[0] };
	vVar13 = { func_552(vVar13, -Var0[0].f_3.f_2) };
	vVar13 = { func_552(vVar13, Var0[1].f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(Var0[1], 0f, vVar13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
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
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0].f_3.f_2 > 180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 - 360f);
			}
			while (Var0[0].f_3.f_2 < -180f)
			{
				Var0[0].f_3.f_2 = (Var0[0].f_3.f_2 + 360f);
			}
			while (Var0[1].f_3.f_2 > 180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 - 360f);
			}
			while (Var0[1].f_3.f_2 < -180f)
			{
				Var0[1].f_3.f_2 = (Var0[1].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1].f_3.f_2 - Var0[0].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_552(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_553(var uParam0, int iParam1)
{
	iVar23 = 0;
	if (func_554(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && unk_0x7BDFCCD11DDD74D6(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_554(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_555(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_556(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
			func_551(iParam2, iParam1, &vVar0, -1, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_551(iParam2, iParam1, &vVar0, 61, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_551(iParam2, iParam1, &vVar0, 83, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_551(iParam2, iParam1, &vVar0, 77, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_551(iParam2, iParam1, &vVar0, 73, 0);
			*uParam0 = { vVar0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_551(iParam2, iParam1, &vVar0, 88, 0);
			*uParam0 = { vVar0 };
			return 1;
			return 0;
	}
}

void func_557()
{
	if (func_561())
	{
		return;
	}
	func_560(4, -1);
	if (func_559())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			if (unk_0x117658E336116132(iVar0) == unk_0xD803B885F5E47A62())
			{
				if (!func_558(48))
				{
					unk_0xA550CB601D5066B5(unk_0x117658E336116132(iVar0), 0);
				}
			}
			else
			{
				unk_0xA550CB601D5066B5(unk_0x117658E336116132(iVar0), 0);
			}
		}
		iVar0++;
	}
}

bool func_558(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2813[iVar0], iVar1);
}

bool func_559()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_39.f_4, 0);
}

void func_560(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_561()
{
	if (func_563() != 2)
	{
		return 0;
	}
	if (!func_559() && !((Global_1670379 || Global_1312791) && func_562()))
	{
		return 0;
	}
	return 1;
}

var func_562()
{
	return Global_2450632.f_39.f_57;
}

int func_563()
{
	return Global_2450632.f_39.f_40;
}

float func_564(int iParam0)
{
	return Global_4008564[iParam0].f_7;
}

Vector3 func_565(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

var func_566(int iParam0)
{
	return Global_2420771[iParam0];
}

int func_567(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_568(int iParam0)
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

bool func_569(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_196, 24);
}

int func_570(int iParam0)
{
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_571()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_3, 4);
}

int func_572(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_42())
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

var func_574()
{
	if (unk_0xC844350D5D58C99A(func_575()))
	{
		return func_575();
	}
	return func_258();
}

var func_575()
{
	return Global_2359302.f_3;
}

int func_576(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_577(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 40,5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40,4324f;
				
				case 2:
					return 42,2709f;
				
				case 3:
					return 43,6444f;
				
				case 4:
					return 37,3862f;
				
				case 5:
					return 38,6952f;
				
				case 6:
					return 40,9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40,5238f;
				
				case 1:
					return 47,4321f;
				
				case 2:
					return 38,6571f;
				
				case 3:
					return 44,0641f;
				
				case 4:
					return 39,2991f;
				
				case 5:
					return 31,7484f;
				
				case 6:
					return 35,6342f;
				
				case 7:
					return 36,0072f;
				
				case 8:
					return 42,5782f;
				
				case 9:
					return 37,4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_578(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 1,3773f, 0f, -88,827f;
		
		case 122:
			return -18,1605f, 2,6167f, 113,0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2,3039f, 0f, -19,6903f;
				
				case 1:
					return -5,9341f, 0f, -151,6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3,627f, 0f, 34,6935f;
				
				case 1:
					return -57,9221f, 0f, 58,3042f;
				
				case 2:
					return -15,4498f, 0f, 161,1361f;
				
				case 3:
					return -1,8386f, 0f, -135,0223f;
				
				case 4:
					return 0,5233f, 0f, -85,7377f;
				
				case 5:
					return -4,2364f, 0f, 173,6634f;
				
				case 6:
					return -3,74f, 0f, -30,7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4,1441f, 0f, 15,6909f;
				
				case 1:
					return 5,4815f, 0f, -127,6695f;
				
				case 2:
					return -4,1889f, 0f, -15,0654f;
				
				case 3:
					return 16,4433f, 0f, -60,3988f;
				
				case 4:
					return 7,8225f, 0f, 39,2409f;
				
				case 5:
					return 2,0405f, 0f, -122,3459f;
				
				case 6:
					return 7,3382f, 0f, 157,6388f;
				
				case 7:
					return 6,481f, 0f, 172,9874f;
				
				case 8:
					return 14,0573f, 0f, 5,0622f;
				
				case 9:
					return -10,1444f, 0f, -131,4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8,8196f, 0f, 57,5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_579(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return -1297,855f, 84,6478f, 54,6519f;
		
		case 122:
			return -855,7661f, -2645,376f, 100,8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13,4678f, -1097,781f, 30,192f;
				
				case 1:
					return 816,6221f, -2160,659f, 30,3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172,111f, -1641,549f, 5,7494f;
				
				case 1:
					return 498,4758f, -226,4275f, 71,0569f;
				
				case 2:
					return -1217,632f, 364,4556f, 86,527f;
				
				case 3:
					return -2884,754f, 32,9823f, 15,1123f;
				
				case 4:
					return -948,1036f, -1260,249f, 8,228f;
				
				case 5:
					return -1614,216f, 302,0945f, 66,0158f;
				
				case 6:
					return -1380,721f, -107,9713f, 50,6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903,8763f, -192,214f, 74,6401f;
				
				case 1:
					return 1419,517f, -2216,034f, 61,8467f;
				
				case 2:
					return -83,9713f, -1331,635f, 29,8383f;
				
				case 3:
					return 364,6455f, -2441,897f, 6,2607f;
				
				case 4:
					return 1237,207f, 2715,999f, 37,6424f;
				
				case 5:
					return 1019,153f, 2680,427f, 41,2254f;
				
				case 6:
					return 269,5203f, 2617,41f, 44,7054f;
				
				case 7:
					return -194,2518f, 6295,688f, 31,0991f;
				
				case 8:
					return 1682,759f, 4954,088f, 42,6891f;
				
				case 9:
					return 2325,447f, 3145,91f, 58,4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993,697f, 3049,667f, 47,7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_581(int iParam0)
{
	if (!unk_0xED4934AFB6EC6451(func_582(0)))
	{
		unk_0x82A772610883F395(func_582(iParam0), 0, 1);
	}
}

char* func_582(int iParam0)
{
	if (iParam0 || func_558(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_590())
	{
		return "MenuMGTournamentIn";
	}
	if (func_584(Global_4456448.f_232883))
	{
		return "MenuMGRemixIn";
	}
	if (func_583(Global_4456448.f_232883) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_234216.f_2808, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_583(int iParam0)
{
	return iParam0 == 998;
}

int func_584(int iParam0)
{
	if ((((func_589(iParam0) || func_588(iParam0)) || func_587(iParam0)) || func_586(iParam0)) || func_585(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_585(int iParam0)
{
	return iParam0 == 64;
}

bool func_586(int iParam0)
{
	return iParam0 == 65;
}

bool func_587(int iParam0)
{
	return iParam0 == 69;
}

bool func_588(int iParam0)
{
	return iParam0 == 67;
}

bool func_589(int iParam0)
{
	return iParam0 == 68;
}

bool func_590()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 12);
}

bool func_591()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62()].f_142, 2);
}

void func_592()
{
	Global_2450632.f_617 = 1;
}

void func_593()
{
	unk_0x0674E58A79778E99(&Global_2450632, 7);
}

void func_594()
{
	unk_0x5D96D8530B3D0904(&Global_2450632, 5);
	func_595();
}

void func_595()
{
	unk_0x5D96D8530B3D0904(&Global_2450632, 8);
}

void func_596()
{
	unk_0x0674E58A79778E99(&(Global_2450632.f_2), 14);
}

void func_597(var uParam0)
{
	Global_2450632.f_38 = uParam0;
}

void func_598(char* sParam0)
{
	StringCopy(&(Global_2450632.f_759), sParam0, 24);
	if (func_599())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_599()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2809, 5);
}

void func_600(struct<13> Param0)
{
	if (func_601(Param0))
	{
		Global_2451426.f_6437 = { Param0 };
	}
}

bool func_601(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

void func_602()
{
	unk_0x5D96D8530B3D0904(&(Global_1627020[unk_0xD803B885F5E47A62()].f_29), 12);
}

void func_603(int iParam0)
{
	Global_2450632.f_7 = iParam0;
}

var func_604()
{
	return Global_2450632.f_656;
}

void func_605()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 10);
}

void func_606(int iParam0)
{
	Global_968397 = iParam0;
}

void func_607()
{
	unk_0x5D96D8530B3D0904(&(Global_2450632.f_3), 2);
}

void func_608()
{
	Global_2458936.f_1 = 0;
}

void func_609(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x5D96D8530B3D0904(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

void func_610(vector3 vParam0)
{
	Global_2460667 = { vParam0 };
}

Vector3 func_611(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(Global_2416079[iParam0]))
	{
		vVar0 = { func_665(Global_2416079[iParam0]) };
	}
	else if (unk_0xE4EDC4B0E92C078B(Global_2416079.f_33[iParam0]) && !iParam0 == Global_2439138)
	{
		vVar0 = { func_665(Global_2416079.f_33[iParam0]) };
	}
	if (vmag(vVar0) > 0f)
	{
		return vVar0;
	}
	return func_612(iParam0);
}

Vector3 func_612(int iParam0)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		vVar1 = { func_663(func_664(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28)) };
		if (vmag(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	else
	{
		func_660(func_662(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			vVar1 = { func_663(func_664(iVar0)) };
			if (vmag(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_659(iParam0))
	{
		vVar1 = { func_617(iParam0) };
		if (vmag(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (func_616(iParam0))
	{
		iVar4 = func_615(iParam0);
		if (iVar4 > -1)
		{
			vVar1 = { Global_1676377.f_488[iVar4] };
			if (vmag(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_614(iParam0))
	{
		vVar1 = { func_613(iParam0) };
		if (vmag(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (Global_2425662[iParam0].f_68.f_10)
	{
		if (vmag(Global_2425662[iParam0].f_68.f_11) > 0f)
		{
			return Global_2425662[iParam0].f_68.f_11;
		}
	}
	return func_662(iParam0);
}

Vector3 func_613(int iParam0)
{
	return Global_2425662[iParam0].f_68.f_7;
}

int func_614(int iParam0)
{
	if (Global_2425662[iParam0].f_68.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_615(int iParam0)
{
	if (iParam0 != func_42())
	{
		return Global_2425662[iParam0].f_310.f_13;
	}
	return -1;
}

int func_616(int iParam0)
{
	if (iParam0 != func_42() && (func_203(iParam0, 1, 1) || Global_2405072.f_2671))
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 1);
		return bVar0;
	}
	return 0;
}

Vector3 func_617(int iParam0)
{
	if (iParam0 == func_42())
	{
	}
	if (func_573(iParam0))
	{
		iVar0 = func_658(iParam0);
		if (iVar0 != func_42())
		{
			if (!func_657(iVar0))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_661[iVar0][1]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_661[iVar0][1], false);
				}
				else
				{
					return Global_2425662[func_658(iParam0)].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_654(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1];
				}
			}
		}
	}
	else if (func_572(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_305))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_305, false);
		}
	}
	else if (func_653(iParam0) && !func_652(iParam0))
	{
		iVar2 = Global_2425662[iParam0].f_310.f_8;
		if (iVar2 != func_42())
		{
			iVar3 = func_654(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3];
			}
		}
	}
	else if (func_651(iParam0) && !func_650(iParam0))
	{
		if (func_659(iParam0) && func_649())
		{
			return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
		}
		iVar4 = Global_2425662[iParam0].f_310.f_8;
		if (iVar4 != func_42())
		{
			if (func_648(iVar4))
			{
				iVar5 = func_644(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5];
				}
			}
		}
	}
	else if (func_643(iParam0))
	{
		iVar6 = func_642(iParam0);
		if (iVar6 != func_42())
		{
			if (!func_641(iVar6))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_758[iVar6]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_758[iVar6], false);
				}
				else
				{
					return Global_2425662[func_642(iParam0)].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_644(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7];
				}
			}
		}
	}
	else if (func_640(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_307))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_307, false);
		}
	}
	else if (func_639(iParam0) && !func_638(iParam0))
	{
		iVar8 = Global_2425662[iParam0].f_310.f_8;
		if (iVar8 != func_42())
		{
			if (func_142(iVar8))
			{
				iVar9 = func_634(iVar8);
				if (iVar9 != -1)
				{
					return func_633(iVar9);
				}
			}
		}
	}
	else if (func_632(iParam0) && !func_631(iParam0))
	{
		iVar10 = Global_2425662[iParam0].f_310.f_8;
		if (iVar10 != func_42())
		{
			if (func_630(iVar10))
			{
				iVar11 = func_626(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11];
				}
			}
		}
	}
	else if (func_625(iParam0, 0))
	{
		iVar12 = func_624(iParam0);
		if (iVar12 != func_42())
		{
			if (!func_623(iVar12))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_791[iVar12]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_791[iVar12], false);
				}
				else
				{
					return Global_1628237[func_624(iParam0)].f_600;
				}
			}
			else
			{
				iVar13 = func_626(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13];
				}
			}
		}
	}
	else if (func_622(iParam0))
	{
		return -366,7f, -1909,6f, 20f;
	}
	if (func_639(iParam0))
	{
		return func_633(Global_2425662[iParam0].f_310.f_5);
	}
	if (func_618(iParam0))
	{
		return 965,8165f, 42,25042f, 122,1267f;
	}
	return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
}

int func_618(int iParam0)
{
	if ((func_621(iParam0) || func_620(iParam0)) || func_619(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_619(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_620(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_621(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_622(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_623(int iParam0)
{
	if (iParam0 != func_42())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_624(int iParam0)
{
	if (iParam0 == func_42())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_625(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_42())
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_626(int iParam0)
{
	if (iParam0 != func_42())
	{
		iVar0 = func_629(iParam0);
		if (iVar0 != 0)
		{
			return func_627(iVar0);
		}
	}
	return -1;
}

int func_627(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_271(iVar0) == 11)
		{
			if (func_628(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_628(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_629(int iParam0)
{
	if (iParam0 != func_42())
	{
		return Global_1590535[iParam0].f_274.f_281;
	}
	return 0;
}

int func_630(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (Global_1590535[iParam0].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_631(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_632(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_632(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_633(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750,5f, -1322,3f, 26,2802f;
		
		case 103:
			return 331,9f, -974,9f, 30f;
		
		case 104:
			return -146f, -1270f, 28,3088f;
		
		case 105:
			return -17,7f, 225,7f, 106,7566f;
		
		case 106:
			return 894,4f, -2106,4f, 29,4768f;
		
		case 107:
			return -668f, -2431,5f, 12,9444f;
		
		case 108:
			return 213,4f, -3166,6f, 4,7903f;
		
		case 109:
			return 366,6f, 237,6f, 104,9f;
		
		case 110:
			return -1275,3f, -666,8f, 25,6332f;
		
		case 111:
			return -1188,8f, -1156,9f, 4,6582f;
		
		default:
	}
	return Global_1676377.f_488[iParam0];
}

int func_634(int iParam0)
{
	if (iParam0 != func_42())
	{
		iVar0 = func_637(iParam0);
		if (iVar0 != 0)
		{
			return func_635(iVar0);
		}
	}
	return -1;
}

int func_635(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_271(iVar0) == 11)
		{
			if (func_636(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_637(int iParam0)
{
	if (iParam0 != func_42())
	{
		return Global_1590535[iParam0].f_274.f_322;
	}
	return 0;
}

int func_638(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_639(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_639(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_640(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_641(int iParam0)
{
	if (iParam0 != func_42())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_642(int iParam0)
{
	if (iParam0 == func_42())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_643(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_42())
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_644(int iParam0)
{
	if (iParam0 == func_42())
	{
		return -1;
	}
	iVar0 = func_647(iParam0);
	if (!iVar0 == 0)
	{
		return func_645(iVar0);
	}
	return -1;
}

int func_645(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_271(iVar0) == 9)
		{
			if (func_646(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_646(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_647(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_271;
}

int func_648(int iParam0)
{
	if (iParam0 != func_42())
	{
		return Global_1590535[iParam0].f_274.f_271 != 0;
	}
	return 0;
}

int func_649()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return 1;
	}
	return 0;
}

int func_650(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	if (func_651(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_651(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_652(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	if (func_653(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_654(int iParam0)
{
	if (iParam0 == func_42())
	{
		return -1;
	}
	iVar0 = func_151(iParam0);
	if (!iVar0 == 0)
	{
		return func_655(iVar0);
	}
	return -1;
}

int func_655(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_656(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_657(int iParam0)
{
	if (iParam0 != func_42())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

int func_658(int iParam0)
{
	if (iParam0 == func_42())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_659(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_203(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_203(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

void func_660(vector3 vParam0, var uParam3)
{
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_661(vParam0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_661(vParam0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_661(vParam0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_661(vParam0, iVar0, 0))
	{
		if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28 > 0)
		{
			*uParam3 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28;
		}
		else if (Global_2404658.f_1 > 0)
		{
			*uParam3 = Global_2404658.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_661(vParam0, iVar0, 0))
	{
		if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28 > 0)
		{
			*uParam3 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28;
		}
		else if (Global_2404658.f_1 > 0)
		{
			*uParam3 = Global_2404658.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
}

int func_661(vector3 vParam0, int iParam3, float fParam4)
{
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049922[iParam3].f_146.f_57[iVar21].f_2 > Global_1049922[iParam3].f_146.f_57[iVar21].f_3.f_2)
			{
				vVar1[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21] };
				vVar11[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21].f_3 };
			}
			else
			{
				vVar1[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21].f_3 };
				vVar11[iVar21] = { Global_1049922[iParam3].f_146.f_57[iVar21] };
			}
			vVar1[iVar21].f_2 = (vVar1[iVar21].f_2 + fParam4);
			vVar11[iVar21].f_2 = (vVar11[iVar21].f_2 - fParam4);
			iVar21++;
		}
		if (((Global_1049922[iParam3].f_146.f_57[0].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar11[0], vVar1[0], Global_1049922[iParam3].f_146.f_57[0].f_6, 0, true)) || (Global_1049922[iParam3].f_146.f_57[1].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar11[1], vVar1[1], Global_1049922[iParam3].f_146.f_57[1].f_6, 0, true))) || (Global_1049922[iParam3].f_146.f_57[2].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar11[2], vVar1[2], Global_1049922[iParam3].f_146.f_57[2].f_6, 0, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_661(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_661(vParam0, 8, fParam4))
		{
			return 1;
		}
		if (func_661(vParam0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_662(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

Vector3 func_663(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			vVar0 = { -773,4775f, 310,6321f, 84,6981f };
			break;
		
		case 2:
			vVar0 = { -252,5713f, -949,9199f, 30,221f };
			break;
		
		case 3:
			vVar0 = { -1443,094f, -544,7684f, 33,7424f };
			break;
		
		case 4:
			vVar0 = { -913,85f, -455,1392f, 38,5999f };
			break;
		
		case 5:
			vVar0 = { -47,3145f, -585,9766f, 36,9593f };
			break;
		
		case 6:
			vVar0 = { -932,7474f, -383,9246f, 37,9613f };
			break;
		
		case 7:
			vVar0 = { -619,1315f, 37,8841f, 42,5883f };
			break;
		
		case 8:
			vVar0 = { 284,9614f, -159,9891f, 63,6221f };
			break;
		
		case 9:
			vVar0 = { 2,8889f, 35,7762f, 70,5349f };
			break;
		
		case 10:
			vVar0 = { 9,74f, 84,6906f, 77,3975f };
			break;
		
		case 11:
			vVar0 = { -512,1465f, 111,2223f, 62,351f };
			break;
		
		case 12:
			vVar0 = { -197,3405f, 88,1053f, 68,7422f };
			break;
		
		case 13:
			vVar0 = { -628,3212f, 165,8364f, 60,1651f };
			break;
		
		case 14:
			vVar0 = { -973,3757f, -1429,425f, 6,6791f };
			break;
		
		case 15:
			vVar0 = { -829,1362f, -855,0104f, 18,6297f };
			break;
		
		case 16:
			vVar0 = { -757,5739f, -755,5591f, 25,5697f };
			break;
		
		case 17:
			vVar0 = { -45,1289f, -57,0925f, 62,2531f };
			break;
		
		case 18:
			vVar0 = { -206,7293f, 184,142f, 79,3279f };
			break;
		
		case 19:
			vVar0 = { -811,7045f, -984,1961f, 13,1538f };
			break;
		
		case 20:
			vVar0 = { -664,0032f, -853,6744f, 23,4325f };
			break;
		
		case 21:
			vVar0 = { -1534,025f, -324,5247f, 46,5237f };
			break;
		
		case 22:
			vVar0 = { -1561,381f, -412,1974f, 41,389f };
			break;
		
		case 23:
			vVar0 = { -1608,851f, -429,184f, 39,439f };
			break;
		
		case 24:
			vVar0 = { 964,3583f, -1034,199f, 39,8303f };
			break;
		
		case 25:
			vVar0 = { 894,2868f, -885,5679f, 26,1212f };
			break;
		
		case 26:
			vVar0 = { 821,1741f, -924,1658f, 25,1998f };
			break;
		
		case 27:
			vVar0 = { 759,7933f, -759,8209f, 25,759f };
			break;
		
		case 28:
			vVar0 = { 844,7289f, -1164,1f, 24,2681f };
			break;
		
		case 29:
			vVar0 = { 526,2521f, -1604,613f, 28,2625f };
			break;
		
		case 30:
			vVar0 = { 572,0462f, -1570,736f, 27,4904f };
			break;
		
		case 31:
			vVar0 = { 722,2852f, -1190,617f, 23,282f };
			break;
		
		case 32:
			vVar0 = { 497,6212f, -1494,084f, 28,2893f };
			break;
		
		case 33:
			vVar0 = { 480,3127f, -1549,937f, 28,2828f };
			break;
		
		case 34:
			vVar0 = { -68,702f, 6426,148f, 30,439f };
			break;
		
		case 35:
			vVar0 = { -247,4374f, 6240,294f, 30,4892f };
			break;
		
		case 36:
			vVar0 = { 2554,165f, 4668,059f, 33,0233f };
			break;
		
		case 37:
			vVar0 = { 2461,22f, 1589,255f, 32,0443f };
			break;
		
		case 38:
			vVar0 = { -2203,335f, 4244,427f, 47,3305f };
			break;
		
		case 39:
			vVar0 = { 218,0665f, 2601,817f, 44,7668f };
			break;
		
		case 40:
			vVar0 = { 186,1719f, 2786,343f, 45,0144f };
			break;
		
		case 41:
			vVar0 = { 642,0746f, 2791,729f, 40,9795f };
			break;
		
		case 42:
			vVar0 = { -1130,938f, 2701,133f, 17,8004f };
			break;
		
		case 43:
			vVar0 = { -10,944f, -1646,76f, 28,3125f };
			break;
		
		case 44:
			vVar0 = { 1024,263f, -2398,404f, 29,1261f };
			break;
		
		case 45:
			vVar0 = { 870,8577f, -2232,323f, 29,5508f };
			break;
		
		case 46:
			vVar0 = { -663,8541f, -2380,389f, 12,9446f };
			break;
		
		case 47:
			vVar0 = { -1088,616f, -2235,098f, 12,2182f };
			break;
		
		case 48:
			vVar0 = { -342,5126f, -1468,675f, 29,6107f };
			break;
		
		case 49:
			vVar0 = { -1241,54f, -259,8841f, 37,9445f };
			break;
		
		case 50:
			vVar0 = { 899,8448f, -147,528f, 75,5674f };
			break;
		
		case 51:
			vVar0 = { -1405,411f, 526,8572f, 122,8361f };
			break;
		
		case 52:
			vVar0 = { 1341,552f, -1578,037f, 53,4443f };
			break;
		
		case 53:
			vVar0 = { -105,7029f, 6528,539f, 29,1719f };
			break;
		
		case 54:
			vVar0 = { -302,3985f, 6327,434f, 31,8918f };
			break;
		
		case 55:
			vVar0 = { -15,258f, 6557,378f, 32,2454f };
			break;
		
		case 56:
			vVar0 = { 1899,673f, 3773,178f, 31,8829f };
			break;
		
		case 57:
			vVar0 = { 1662,121f, 4776,317f, 41,0075f };
			break;
		
		case 58:
			vVar0 = { -178,2278f, 490,886f, 134,0466f };
			break;
		
		case 59:
			vVar0 = { 339,5743f, 439,7083f, 145,5896f };
			break;
		
		case 60:
			vVar0 = { -764,6163f, 618,3144f, 137,5536f };
			break;
		
		case 61:
			vVar0 = { -679,5461f, 592,5162f, 139,693f };
			break;
		
		case 62:
			vVar0 = { 124,4571f, 551,8877f, 181,658f };
			break;
		
		case 63:
			vVar0 = { -563,7349f, 689,099f, 151,6596f };
			break;
		
		case 64:
			vVar0 = { -743,0927f, 590,0371f, 140,9221f };
			break;
		
		case 65:
			vVar0 = { -861,252f, 684,8923f, 146,2643f };
			break;
		
		case 66:
			vVar0 = { -1292,456f, 440,9454f, 93,7572f };
			break;
		
		case 67:
			vVar0 = { 369,5891f, 417,4813f, 136,8344f };
			break;
		
		case 68:
			vVar0 = { -1581,501f, -558,2578f, 33,9528f };
			break;
		
		case 69:
			vVar0 = { -1379,546f, -499,1783f, 32,1574f };
			break;
		
		case 70:
			vVar0 = { -117,5296f, -605,7157f, 35,2857f };
			break;
		
		case 71:
			vVar0 = { -67,0943f, -802,4415f, 43,2273f };
			break;
		
		case 72:
			vVar0 = { 254,1892f, -1809,183f, 26,1805f };
			break;
		
		case 73:
			vVar0 = { -1472,278f, -920,0677f, 8,9683f };
			break;
		
		case 74:
			vVar0 = { 38,9478f, -1026,629f, 28,6354f };
			break;
		
		case 75:
			vVar0 = { 46,903f, 2789,825f, 57,1124f };
			break;
		
		case 76:
			vVar0 = { -342,3246f, 6065,316f, 30,4895f };
			break;
		
		case 77:
			vVar0 = { 1737,878f, 3709,088f, 33,1348f };
			break;
		
		case 78:
			vVar0 = { 939,7161f, -1459,204f, 30,467f };
			break;
		
		case 79:
			vVar0 = { 189,7624f, 309,7488f, 104,4714f };
			break;
		
		case 80:
			vVar0 = { -21,9593f, -191,3618f, 51,5599f };
			break;
		
		case 81:
			vVar0 = { 2472,22f, 4110,493f, 36,9629f };
			break;
		
		case 82:
			vVar0 = { -39,3286f, 6420,603f, 30,7017f };
			break;
		
		case 83:
			vVar0 = { -1134,762f, -1568,848f, 3,4077f };
			break;
	}
	return vVar0;
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
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
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

Vector3 func_665(int iParam0)
{
	switch (unk_0xDC7D2B8A563DB482(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0x63EC65B0F6B7C26F(iParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				return unk_0x68F4C0EC296D3901(iVar0, false);
			}
			break;
	}
	return unk_0xAC14F6E4B17D7835(iParam0);
}

int func_666(int iParam0)
{
	iVar0 = func_667(iParam0);
	iVar1 = 0;
	while (iVar1 < 1218)
	{
		if (Global_794709.f_107189[iVar1].f_1 == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_667(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 21)
	{
		return 0;
	}
	return Global_262145.f_5798[iParam0];
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 6;
		
		case 3:
			return 13;
		
		default:
	}
	return -1;
}

void func_669()
{
	Global_2450632.f_656 = 1;
}

var func_670()
{
	return Global_2450632.f_635;
}

bool func_671()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_672(var uParam0)
{
	switch (uParam0->f_1497.f_724)
	{
		case 0:
			func_908(uParam0);
			break;
		
		case 1:
			if (!func_907(&(uParam0->f_1497.f_724)))
			{
				func_906(uParam0);
				func_905(&(uParam0->f_1497.f_724));
			}
			func_908(uParam0);
			if (!func_904(&(uParam0->f_1497.f_724)))
			{
				func_903(uParam0);
				func_902(&(uParam0->f_1497.f_724));
			}
			break;
		
		case 2:
			if (!func_907(&(uParam0->f_1497.f_724)))
			{
				func_899(uParam0);
				func_905(&(uParam0->f_1497.f_724));
			}
			func_893(uParam0);
			if (!func_904(&(uParam0->f_1497.f_724)))
			{
				func_892(uParam0);
				func_902(&(uParam0->f_1497.f_724));
			}
			break;
		
		case 3:
			if (!func_907(&(uParam0->f_1497.f_724)))
			{
				func_891(uParam0);
				func_905(&(uParam0->f_1497.f_724));
			}
			func_889(uParam0);
			if (!func_904(&(uParam0->f_1497.f_724)))
			{
				func_888(uParam0);
				func_902(&(uParam0->f_1497.f_724));
			}
			break;
		
		case 4:
			if (!func_907(&(uParam0->f_1497.f_724)))
			{
				func_884(uParam0);
				func_905(&(uParam0->f_1497.f_724));
			}
			func_694(uParam0);
			if (!func_904(&(uParam0->f_1497.f_724)))
			{
				func_692(uParam0);
				func_902(&(uParam0->f_1497.f_724));
			}
			break;
		
		case 5:
			if (!func_907(&(uParam0->f_1497.f_724)))
			{
				func_674(uParam0);
				func_905(&(uParam0->f_1497.f_724));
			}
			func_673(uParam0);
			break;
	}
}

void func_673(var uParam0)
{
}

void func_674(var uParam0)
{
	func_690(uParam0);
	func_677(0);
	func_676();
	func_675(&(uParam0->f_1497));
}

void func_675(var uParam0)
{
	unk_0x5DD950F92F816F03(1);
	unk_0x3039591AD3E735CE(uParam0->f_700);
	unk_0xC1032CAC14DE468A(0,501f, 0,5f, 1f, 1f, 255, 255, 255, 255, 0);
	unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
	unk_0x5DD950F92F816F03(0);
}

void func_676()
{
	Var0 = 4;
	Var0.f_63.f_2 = 5;
	Var0.f_77 = 2;
	Var0.f_82 = 4;
	Var0.f_82.f_5 = 4;
	Var0.f_82.f_10 = 5;
	Var0.f_82.f_16 = 4;
	Var0.f_82.f_21 = -1;
	Var0.f_82.f_22 = -1;
	Var0.f_109 = 4;
	Global_1664445.f_3033 = { Var0 };
}

void func_677(bool bParam0)
{
	func_689();
	func_688();
	func_682(bParam0);
	func_681(&(Global_1696433.f_2529));
	func_680(&(Global_1696433.f_2593));
	func_679(&(Global_1696433.f_2604));
	func_678(&(Global_1696433.f_2607));
	func_676();
	Global_1696433.f_4355 = -1;
	Global_1696433.f_4356 = func_42();
	Global_1696433.f_4357 = 0;
	Global_1696433.f_4358 = 0;
}

void func_678(var uParam0)
{
	Var0 = 7;
	Var0.f_1.f_52 = 8;
	Var0.f_1.f_193 = 4;
	Var0.f_1.f_218.f_52 = 8;
	Var0.f_1.f_218.f_193 = 4;
	Var0.f_1.f_218.f_218.f_52 = 8;
	Var0.f_1.f_218.f_218.f_193 = 4;
	Var0.f_1.f_218.f_218.f_218.f_52 = 8;
	Var0.f_1.f_218.f_218.f_218.f_193 = 4;
	Var0.f_1.f_218.f_218.f_218.f_218.f_52 = 8;
	Var0.f_1.f_218.f_218.f_218.f_218.f_193 = 4;
	Var0.f_1.f_218.f_218.f_218.f_218.f_218.f_52 = 8;
	Var0.f_1.f_218.f_218.f_218.f_218.f_218.f_193 = 4;
	Var0.f_1.f_218.f_218.f_218.f_218.f_218.f_218.f_52 = 8;
	Var0.f_1.f_218.f_218.f_218.f_218.f_218.f_218.f_193 = 4;
	*uParam0 = { Var0 };
}

void func_679(var uParam0)
{
	*uParam0 = { vVar0 };
}

void func_680(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_681(var uParam0)
{
	Var0.f_63 = 500;
	*uParam0 = { Var0 };
}

void func_682(bool bParam0)
{
	func_687(&(Global_1696433.f_1497));
	func_686(&(Global_1696433.f_1497.f_724));
	func_685(&(Global_1696433.f_1497.f_730));
	func_684(&(Global_1696433.f_1497.f_736));
	Global_1696433.f_1497.f_1015 = 0;
	Global_1696433.f_1497.f_1027 = -1;
	Global_1696433.f_1497.f_1028 = 0;
	Global_1696433.f_1497.f_1029 = 0;
	Global_1696433.f_1497.f_1017 = -1;
	Global_1696433.f_1497.f_1018 = -1;
	Global_1696433.f_1497.f_1019 = -1;
	Global_1696433.f_1497.f_1020 = 0;
	Global_1696433.f_1497.f_1021 = 5;
	if (!bParam0)
	{
		func_683();
	}
	func_676();
}

void func_683()
{
	Var0.f_2 = 4;
	Var0.f_7 = 4;
	Var0.f_12 = 5;
	Var0.f_46 = 4;
	Var0.f_46.f_5 = 4;
	Var0.f_46.f_10 = 4;
	Global_1700796[unk_0x6E61BE9E61434AC1()].f_2 = { Var0.f_2 };
	Global_1700796[unk_0x6E61BE9E61434AC1()].f_7 = { Var0.f_7 };
	Global_1700796[unk_0x6E61BE9E61434AC1()].f_12 = { Var0.f_12 };
	Global_1700796[unk_0x6E61BE9E61434AC1()] = Var0;
}

void func_684(var uParam0)
{
	Var0 = 7;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_36 = 4;
	Var0.f_87 = 4;
	Var0.f_92 = 5;
	Var0.f_98 = 4;
	Var0.f_103 = 4;
	Var0.f_108 = 4;
	Var0.f_108.f_1 = 17;
	Var0.f_108.f_1.f_18 = 17;
	Var0.f_108.f_1.f_18.f_18 = 17;
	Var0.f_108.f_1.f_18.f_18.f_18 = 17;
	Var0.f_181 = 4;
	Var0.f_181.f_1 = 17;
	Var0.f_181.f_1.f_18 = 17;
	Var0.f_181.f_1.f_18.f_18 = 17;
	Var0.f_181.f_1.f_18.f_18.f_18 = 17;
	Var0.f_254 = 4;
	Var0.f_259 = 4;
	Var0.f_264 = 5;
	Var0.f_270 = 4;
	Var0.f_278 = -1;
	*uParam0 = { Var0 };
}

void func_685(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_686(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_687(var uParam0)
{
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_701 = 1;
	Var0.f_702 = 1;
	*uParam0 = { Var0 };
}

void func_688()
{
	func_687(&(Global_1696433.f_744));
	func_686(&(Global_1696433.f_744.f_724));
	func_685(&(Global_1696433.f_744.f_730));
	Global_1696433.f_744.f_736 = 0;
	Global_1696433.f_744.f_748 = -1;
	Global_1696433.f_744.f_749 = 0;
	Global_1696433.f_744.f_750 = 0;
	Global_1696433.f_744.f_738 = 0;
	Global_1696433.f_744.f_739 = 0;
	Global_1696433.f_744.f_740 = 0;
	Global_1696433.f_744.f_741 = 0;
	Global_1696433.f_744.f_742 = 0;
	Global_1696433.f_744.f_743 = 0;
	Global_1696433.f_744.f_744 = 0;
	Global_1696433.f_744.f_745 = 0;
	Global_1696433.f_744.f_746 = 0;
	func_676();
}

void func_689()
{
	func_687(&Global_1696433);
	func_686(&(Global_1696433.f_724));
	func_685(&(Global_1696433.f_730));
	Global_1696433.f_736 = 0;
	func_676();
}

void func_690(var uParam0)
{
	unk_0x42740B44BA8D7B43("DLC_MPHEIST/HEIST_PLANNING_BOARD");
	unk_0xE17FDF9E3068281B(&(uParam0->f_1497.f_709));
	func_691(&(uParam0->f_2529.f_1), 1, 1);
	if ((!unk_0xA14BB9332558B949() && uParam0->f_4360) && !func_202(unk_0xD803B885F5E47A62()))
	{
		func_462(unk_0xD803B885F5E47A62(), 1, 0, 0);
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
		uParam0->f_4360 = 0;
	}
	func_682(uParam0->f_4356 == unk_0xD803B885F5E47A62());
}

void func_691(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, iParam1, 0);
		}
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, false);
		}
		unk_0x9A8DDC7C522F5BF5(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0xF737A3AD8873CE16();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_692(var uParam0)
{
	if (!func_17(uParam0, 1))
	{
		func_693(&(uParam0->f_2593), 0, 0);
		uParam0->f_1497.f_703 = 0;
	}
}

void func_693(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = iParam1;
		uParam0->f_1 = iParam1;
	}
	else
	{
		*uParam0 = iParam1;
		uParam0->f_1 = iParam1;
		uParam0->f_2 = iParam1;
		uParam0->f_3 = iParam1;
		uParam0->f_4 = 0;
		uParam0->f_6 = *uParam0;
	}
}

void func_694(var uParam0)
{
	func_883();
	func_879(uParam0);
	func_871(uParam0);
	func_870(uParam0);
	func_854(uParam0);
	func_851(uParam0);
	func_809(uParam0);
	func_718(uParam0);
	func_706(uParam0);
	func_705();
	func_704(uParam0, 2);
	if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
	{
		func_699(uParam0);
	}
	else
	{
		func_697(uParam0);
	}
	if (!uParam0->f_1497.f_724.f_5)
	{
		if (!func_17(uParam0, 1))
		{
			if (uParam0->f_4360)
			{
				func_462(unk_0xD803B885F5E47A62(), 1, 0, 0);
				if (!unk_0xA14BB9332558B949())
				{
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
				}
				uParam0->f_4360 = 0;
			}
			func_696(uParam0);
		}
		func_509(-1713398555, 12, 0);
		func_695(&(uParam0->f_1497.f_724), 2);
	}
}

void func_695(var uParam0, int iParam1)
{
	uParam0->f_1 = *uParam0;
	unk_0x5D96D8530B3D0904(&(uParam0->f_4), uParam0->f_1);
	unk_0x0674E58A79778E99(&(uParam0->f_3), uParam0->f_1);
	iVar0 = *uParam0;
	iVar0 = (iVar0 - 1);
	*uParam0 = iVar0;
	if (*uParam0 == 0)
	{
		*uParam0 = 1;
	}
}

void func_696(var uParam0)
{
	func_691(&(uParam0->f_2529.f_1), 0, 1);
	unk_0x5413873D3F67BF93(false, 0);
}

void func_697(var uParam0)
{
	if (uParam0->f_4356 == unk_0xD803B885F5E47A62() || uParam0->f_4356 == -1)
	{
		return;
	}
	if (Global_1700796[uParam0->f_4356].f_7[0] == 1)
	{
		func_698(&(uParam0->f_1497.f_724), 2);
	}
}

void func_698(var uParam0, int iParam1)
{
	uParam0->f_1 = *uParam0;
	unk_0x5D96D8530B3D0904(&(uParam0->f_4), uParam0->f_1);
	unk_0x0674E58A79778E99(&(uParam0->f_3), uParam0->f_1);
	iVar0 = *uParam0;
	iVar0++;
	*uParam0 = iVar0;
	if (*uParam0 == 7)
	{
		*uParam0 = 5;
	}
}

void func_699(var uParam0)
{
	if (uParam0->f_4356 != unk_0xD803B885F5E47A62())
	{
		return;
	}
	if (!unk_0xA14BB9332558B949())
	{
		return;
	}
	bVar0 = true;
	bVar1 = true;
	if (uParam0->f_1497.f_736.f_103[0] == 1)
	{
		return;
	}
	uParam0->f_1497.f_736.f_278 = -1;
	if (uParam0->f_1497.f_724.f_2 == 1)
	{
		bVar0 = false;
		uParam0->f_1497.f_736.f_278 = 0;
	}
	if (bVar0)
	{
		if (uParam0->f_1497.f_736.f_92[4] > 0)
		{
			bVar0 = false;
			uParam0->f_1497.f_736.f_278 = 1;
		}
	}
	if (bVar0)
	{
		if (uParam0->f_1497.f_1024 == -1)
		{
			bVar0 = false;
			uParam0->f_1497.f_736.f_278 = 3;
		}
	}
	if (bVar0)
	{
		if (uParam0->f_1497.f_1022 == -1)
		{
			bVar0 = false;
			uParam0->f_1497.f_736.f_278 = 4;
		}
	}
	if (bVar0)
	{
		if (uParam0->f_1497.f_1023 == -1)
		{
			bVar0 = false;
			uParam0->f_1497.f_736.f_278 = 5;
		}
	}
	if (bVar0)
	{
		if (func_113(uParam0->f_4356) == 2)
		{
			if (uParam0->f_1497.f_1025 == 0)
			{
				bVar0 = false;
				uParam0->f_1497.f_736.f_278 = 6;
			}
		}
	}
	if (bVar0)
	{
		if (uParam0->f_1497.f_736.f_277 == 0)
		{
			func_703(uParam0->f_1497.f_709, 12, 1);
			func_702(uParam0->f_1497.f_709, 12, 1);
			func_190(&(uParam0->f_1497), 1);
			unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 5);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 5);
			Global_1700796[unk_0x6E61BE9E61434AC1()]++;
			uParam0->f_1497.f_736.f_277 = 1;
		}
	}
	if (bVar0)
	{
		iVar2 = 1;
		while (iVar2 <= 3)
		{
			if (uParam0->f_1497.f_736.f_87[iVar2] == -1)
			{
			}
			else if (!func_701(uParam0, unk_0x117658E336116132(uParam0->f_1497.f_736.f_87[iVar2])))
			{
				bVar0 = false;
				bVar1 = false;
				uParam0->f_1497.f_736.f_278 = 2;
			}
			else
			{
				iVar2++;
			}
		}
	}
	if (bVar0)
	{
		if (!bVar1)
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (uParam0->f_1497.f_736.f_276 == 0)
		{
			func_700(uParam0->f_1497.f_709, 12, 0);
			uParam0->f_1497.f_736.f_276 = 1;
		}
	}
	else if (uParam0->f_1497.f_736.f_276 == 1)
	{
		func_700(uParam0->f_1497.f_709, 12, 1);
		uParam0->f_1497.f_736.f_276 = 0;
	}
}

void func_700(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_BUTTON_GREYED_OUT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

int func_701(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (unk_0x117658E336116132(uParam0->f_1497.f_736.f_87[iVar0]) != iParam1)
		{
		}
		else
		{
			return uParam0->f_1497.f_736.f_103[iVar0] == 1;
		}
		iVar0++;
	}
	return 0;
}

void func_702(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_BUTTON_VISIBLE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

void func_703(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_BUTTON_ENABLED");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

void func_704(var uParam0, int iParam1)
{
	if (uParam0->f_4355 == iParam1 && uParam0->f_2604)
	{
		uParam0->f_2604 = 0;
	}
	if (uParam0->f_4355 == iParam1 && uParam0->f_743)
	{
		uParam0->f_743 = 0;
	}
	if (uParam0->f_4355 == iParam1 && uParam0->f_744.f_750)
	{
		uParam0->f_744.f_750 = 0;
	}
	if (uParam0->f_4355 == iParam1 && uParam0->f_1497.f_1029)
	{
		uParam0->f_1497.f_1029 = 0;
	}
}

void func_705()
{
	unk_0xB8E3919889462ACD();
	unk_0x3584F71E5CA29322(18);
	unk_0x3FC8DBCC154CA56B();
	func_69(0);
	unk_0x38C3A68D7861DCFD(0, 199, 1);
	unk_0x2103752056F874E1();
	unk_0xA550CB601D5066B5(unk_0xD803B885F5E47A62(), 0);
	unk_0x5024DE80A08E9E70(19);
	func_560(11, -1);
}

void func_706(var uParam0)
{
	if (uParam0->f_2529.f_32 != uParam0->f_2529.f_33)
	{
		func_717(uParam0, uParam0->f_2529.f_33);
		uParam0->f_2529.f_62 = 1;
		vVar0 = { 0f, 0f, 0f };
		vVar3 = { 0f, 0f, 0f };
		uParam0->f_2529.f_44 = { func_716(&(uParam0->f_2529)) };
		uParam0->f_2529.f_47 = { func_715(&(uParam0->f_2529)) };
		uParam0->f_2529.f_1.f_17 = func_714(&(uParam0->f_2529));
		uParam0->f_2529.f_38 = { unk_0xD06724447386BC29(uParam0->f_2529.f_1) };
		uParam0->f_2529.f_41 = { unk_0x17D61C69BA58F815(uParam0->f_2529.f_1, 2) };
		uParam0->f_2529.f_1.f_18 = unk_0x86CC98177DFF41EC(uParam0->f_2529.f_1);
		uParam0->f_2529.f_1.f_14 = { 0f, 0f, 0f };
		uParam0->f_2529.f_63 = 750;
		unk_0x91F5B0244AAE6222(uParam0->f_2529.f_1, "HAND_SHAKE", 0f);
		unk_0x86F44313DFA8F00C(uParam0->f_2529.f_1, uParam0->f_2529.f_38, uParam0->f_2529.f_41, uParam0->f_2529.f_1.f_18, 0, 1, 1, 2);
		unk_0x86F44313DFA8F00C(uParam0->f_2529.f_1, uParam0->f_2529.f_44, uParam0->f_2529.f_47, uParam0->f_2529.f_1.f_17, uParam0->f_2529.f_63, 1, 1, 2);
	}
	if (uParam0->f_2529.f_62)
	{
		uParam0->f_2529.f_1.f_18 = func_714(&(uParam0->f_2529));
		if (!unk_0xFA06B985B30FB0FC(uParam0->f_2529.f_1))
		{
			uParam0->f_2529.f_38 = { uParam0->f_2529.f_44 };
			uParam0->f_2529.f_41 = { uParam0->f_2529.f_47 };
			uParam0->f_2529.f_1.f_1 = { uParam0->f_2529.f_44 };
			uParam0->f_2529.f_1.f_4 = { uParam0->f_2529.f_47 };
			unk_0x91F5B0244AAE6222(uParam0->f_2529.f_1, "HAND_SHAKE", 0,1f);
			uParam0->f_2529.f_62 = 0;
			if (func_17(uParam0, 1))
			{
				func_205(uParam0, 1);
			}
			func_713(&(uParam0->f_2529), uParam0->f_2529.f_1.f_18);
			func_709(&(uParam0->f_2529.f_1), 0, 0, 1, 0, 1045220557, 0, 1065353216, 0);
		}
	}
	else
	{
		func_709(&(uParam0->f_2529.f_1), func_708(&(uParam0->f_2529)), 1, 0, 0, 1045220557, 0, 1065353216, 1);
	}
	if (unk_0xA14BB9332558B949() && func_558(232))
	{
		if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(500);
		}
		func_707(232);
	}
}

void func_707(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2451426.f_1.f_2813[iVar0], iVar1))
	{
	}
	unk_0x0674E58A79778E99(&(Global_2451426.f_1.f_2813[iVar0]), iVar1);
}

int func_708(var uParam0)
{
	switch (uParam0->f_33)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_709(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	unk_0xA2E3EDD0E119882F(2);
	func_712(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x89DF0B812BA6383B())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		fVar5 = unk_0x659FAE9DBE6F38F5(2, 239);
		fVar6 = unk_0x659FAE9DBE6F38F5(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -round(((fVar7 * fParam5) * 127f));
			iVar0[3] = -round(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = round(((unk_0x659FAE9DBE6F38F5(2, 290) * fParam5) * 127f));
			iVar0[3] = round(((unk_0x659FAE9DBE6F38F5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_711((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_711((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x1C0640BA9A7327B3())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x91E3F625EF57450D(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x1C0640BA9A7327B3() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * timestep());
	vVar10 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x91E3F625EF57450D(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar10.x;
		uParam0->f_14.f_1 = vVar10.y;
		uParam0->f_14.f_2 = vVar10.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_710(((((vVar10.x - uParam0->f_14) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_710(((((vVar10.y - uParam0->f_14.f_1) * 0,05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_710(((((vVar10.z - uParam0->f_14.f_2) * 0,05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_710(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_710(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_710(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
	}
	if (unk_0x91E3F625EF57450D(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x91E3F625EF57450D(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0xD245978525608929(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xD245978525608929(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_710(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_710(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x0DED1C1B8250FA57(2, 207);
			iVar0[3] = unk_0x0DED1C1B8250FA57(2, 208);
			if (bParam3)
			{
				if (to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0,06f) * fVar9));
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			if (unk_0x9CF8D5C7090408A2(*uParam0))
			{
				unk_0x9501364A300048C6();
			}
		}
	}
}

float func_710(float fParam0, float fParam1, float fParam2)
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

int func_711(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_712(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x659FAE9DBE6F38F5(2, 218) * 127f));
	*uParam1 = floor((unk_0x659FAE9DBE6F38F5(2, 219) * 127f));
	*uParam2 = floor((unk_0x659FAE9DBE6F38F5(2, 220) * 127f));
	*uParam3 = floor((unk_0x659FAE9DBE6F38F5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(2, 218))
		{
			*uParam0 = floor((unk_0x8A6BC5D9CAEACD0F(2, 218) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 219))
		{
			*uParam1 = floor((unk_0x8A6BC5D9CAEACD0F(2, 219) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 220))
		{
			*uParam2 = floor((unk_0x8A6BC5D9CAEACD0F(2, 220) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 221))
		{
			*uParam3 = floor((unk_0x8A6BC5D9CAEACD0F(2, 221) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_713(var uParam0, var uParam1)
{
	uParam0->f_1.f_7 = uParam1;
	uParam0->f_1.f_20 = 15;
	uParam0->f_1.f_21 = 10;
	uParam0->f_1.f_22 = 1;
	uParam0->f_1.f_19 = 10f;
}

float func_714(var uParam0)
{
	switch (uParam0->f_33)
	{
		case 0:
			return 24,9482f;
		
		case 1:
			return 24,9482f;
		
		case 2:
			return 24,9482f;
		
		case 3:
			return 8,6949f;
		
		case 4:
			return 11,6733f;
		
		case 5:
			return 11,6334f;
		
		case 6:
			return 24,9482f;
		
		case 7:
			return 24,9482f;
		
		case 8:
			return 24,9482f;
		
		case 9:
			return 24,9482f;
		
		case 10:
			return 12,1654f;
		
		case 11:
			return 24,9482f;
		
		case 12:
			return 24,9482f;
		
		case 13:
			return 24,9482f;
		
		case 14:
			return 24,9482f;
		
		case 15:
			return 24,9482f;
		
		case 16:
			return 24,9482f;
		
		case 17:
			return 24,9482f;
		
		case 18:
			return 24,9482f;
		
		case 19:
			return 22,8918f;
		
		case 20:
			return 22,8918f;
		
		case 21:
			return 22,8918f;
		
		case 22:
			return 22,8918f;
		
		case 23:
			return 22,8918f;
		
		default:
	}
	return uParam0->f_1.f_7;
}

Vector3 func_715(var uParam0)
{
	switch (uParam0->f_33)
	{
		case 0:
			return 1,0456f, -0,0173f, -0,3992f;
		
		case 1:
			return -0,7083f, -0,0232f, -89,0889f;
		
		case 2:
			return 0,4921f, 0,0269f, -179,4778f;
		
		case 3:
			return 0,8281f, 0,0207f, -0,372f;
		
		case 4:
			return 0,6552f, -0,0496f, -8,747f;
		
		case 5:
			return -0,4704f, -0,0496f, -0,2582f;
		
		case 6:
			return -2,3366f, -0,0013f, -0,2903f;
		
		case 7:
			return -2,3366f, -0,0013f, -0,2903f;
		
		case 8:
			return -2,3366f, -0,0013f, -0,2903f;
		
		case 9:
			return 0,4201f, -0,0249f, -0,3753f;
		
		case 10:
			return 1,9801f, 0,0066f, -89,1273f;
		
		case 11:
			return -8,3531f, 0,021f, -89,0267f;
		
		case 12:
			return -8,3531f, 0,021f, -89,0267f;
		
		case 13:
			return -8,3531f, 0,021f, -89,0267f;
		
		case 14:
			return -0,6781f, 0,021f, -89,166f;
		
		case 15:
			return -0,6781f, 0,021f, -89,166f;
		
		case 16:
			return -0,6781f, 0,021f, -89,166f;
		
		case 17:
			return -1,6772f, 0,021f, -89,166f;
		
		case 18:
			return 0,0156f, 0,021f, -89,166f;
		
		case 19:
			return 0,4623f, -0,0078f, -179,4444f;
		
		case 20:
			return 0,4623f, -0,0078f, -179,4444f;
		
		case 21:
			return 0,4623f, -0,0078f, -179,4444f;
		
		case 22:
			return 0,4623f, -0,0078f, -179,4444f;
		
		case 23:
			return 0,4623f, -0,0078f, -179,4444f;
		
		default:
	}
	return 6,6407f, 0,0116f, -35,027f;
}

Vector3 func_716(var uParam0)
{
	switch (uParam0->f_33)
	{
		case 0:
			return 2712,844f, -371,4153f, -54,3227f;
		
		case 1:
			return 2711,157f, -369,6294f, -54,1598f;
		
		case 2:
			return 2712,865f, -367,5525f, -54,281f;
		
		case 3:
			return 2713,022f, -371,3072f, -53,7836f;
		
		case 4:
			return 2713,036f, -371,4736f, -54,5479f;
		
		case 5:
			return 2712,681f, -372,199f, -55,0138f;
		
		case 6:
			return 2712,043f, -368,0018f, -54,9149f;
		
		case 7:
			return 2712,659f, -368,0018f, -54,9149f;
		
		case 8:
			return 2713,321f, -368,0018f, -54,9149f;
		
		case 9:
			return 2712,411f, -368,7706f, -54,4171f;
		
		case 10:
			return 2710,063f, -369,0359f, -54,366f;
		
		case 11:
			return 2714,658f, -368,6344f, -53,5536f;
		
		case 12:
			return 2714,658f, -369,0623f, -53,5536f;
		
		case 13:
			return 2714,658f, -369,4877f, -53,5536f;
		
		case 14:
			return 2714,667f, -368,6385f, -54,4841f;
		
		case 15:
			return 2714,667f, -369,1197f, -54,4841f;
		
		case 16:
			return 2714,667f, -370,511f, -54,8597f;
		
		case 17:
			return 2714,663f, -370,2132f, -54,1153f;
		
		case 18:
			return 2714,663f, -370,5733f, -54,4841f;
		
		case 19:
			return 2713,151f, -368,5675f, -54,3901f;
		
		case 20:
			return 2713,151f, -368,5675f, -54,3901f;
		
		case 21:
			return 2713,151f, -368,5675f, -54,3901f;
		
		case 22:
			return 2713,151f, -368,5675f, -54,3901f;
		
		case 23:
			return 2713,151f, -368,5675f, -54,3901f;
		
		default:
	}
	return 350,4201f, 4871,844f, -59,2717f;
}

void func_717(var uParam0, var uParam1)
{
	uParam0->f_2529.f_32 = uParam1;
}

void func_718(var uParam0)
{
	if (!func_482(uParam0, 2))
	{
		return;
	}
	bVar10 = func_808(uParam0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_1497.f_736.f_87[iVar0] == -1)
		{
		}
		else
		{
			if (unk_0xA14BB9332558B949())
			{
				iVar2 = unk_0x117658E336116132(uParam0->f_1497.f_736.f_87[iVar0]);
			}
			else
			{
				iVar2 = uParam0->f_4356;
			}
			Var3 = { func_797(uParam0, iVar2) };
			iVar9 = func_796(iVar0);
			iVar1 = uParam0->f_1497.f_736.f_92[iVar0];
			if (func_795(uParam0, iVar2))
			{
				if (bVar10)
				{
					func_793(uParam0->f_1497.f_709, iVar9, unk_0x6E524813889AECF8(iVar2), &Var3);
					func_702(uParam0->f_1497.f_709, func_792(iVar0), 1);
					func_703(uParam0->f_1497.f_709, func_792(iVar0), 1);
				}
				func_790(uParam0->f_1497.f_709, iVar9, func_701(uParam0, iVar2), func_791(iVar2));
				func_789(uParam0->f_1497.f_709, iVar9, iVar1);
			}
			else if (bVar10)
			{
				func_702(uParam0->f_1497.f_709, func_792(iVar0), 0);
				func_703(uParam0->f_1497.f_709, func_792(iVar0), 0);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		func_788(uParam0, 0);
	}
	if (func_787(uParam0) || func_786())
	{
		if (unk_0xA14BB9332558B949())
		{
			func_785(uParam0->f_1497.f_709, "CH_FINALE_LBLH");
			func_700(uParam0->f_1497.f_709, 12, 1);
		}
		else
		{
			func_785(uParam0->f_1497.f_709, "CH_FINALE_LBS");
			func_700(uParam0->f_1497.f_709, 12, 0);
		}
		func_784(uParam0, 0);
	}
	if (func_783(uParam0) || func_786())
	{
		if (unk_0xA14BB9332558B949())
		{
			func_782(uParam0->f_1497.f_709);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!unk_0xEA6BC48857E0AC4C(func_781(uParam0, iVar0)))
				{
					func_779(uParam0->f_1497.f_709, func_781(uParam0, iVar0), func_780(uParam0, iVar0));
				}
				iVar0++;
			}
		}
		func_778(uParam0, 0);
	}
	if (func_777(uParam0) || func_786())
	{
		if (unk_0xA14BB9332558B949())
		{
			func_776(uParam0->f_1497.f_709);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xEA6BC48857E0AC4C(func_775(uParam0, iVar0)))
				{
					func_773(uParam0->f_1497.f_709, func_775(uParam0, iVar0), func_774(uParam0, iVar0));
				}
				iVar0++;
			}
		}
		func_772(uParam0, 0);
	}
	if (func_771(uParam0) || func_786())
	{
		func_762(uParam0->f_1497.f_709, func_133(func_770(uParam0), 1), func_120(func_121(uParam0->f_4356), 1), func_527(uParam0), func_769(uParam0), func_766(uParam0), func_765(uParam0, uParam0->f_1497.f_1017), func_765(uParam0, uParam0->f_1497.f_1018), func_764(uParam0->f_1497.f_1019), func_763(uParam0->f_1497.f_1020), func_763(uParam0->f_1497.f_1021));
		func_761(uParam0, 0);
	}
	if (func_760(uParam0) || func_786())
	{
		iVar11 = 0;
		while (iVar11 < 18)
		{
			func_702(uParam0->f_1497.f_709, iVar11, func_757(uParam0, iVar11));
			iVar11++;
		}
		func_755(uParam0->f_1497.f_709, 6, func_756(uParam0->f_4356));
		func_755(uParam0->f_1497.f_709, 7, func_754(uParam0->f_4356));
		func_753(uParam0->f_1497.f_709, 6, 1);
		func_753(uParam0->f_1497.f_709, 7, 1);
		func_752(uParam0, 0);
	}
	if (func_751(uParam0) || func_786())
	{
		func_753(uParam0->f_1497.f_709, 2, func_750(uParam0));
		if (uParam0->f_1497.f_1017 == -1)
		{
			func_749(uParam0->f_1497.f_709, 2, 1);
		}
		else
		{
			func_749(uParam0->f_1497.f_709, 2, 0);
		}
		if (func_113(uParam0->f_4356) == 2)
		{
			func_748(uParam0->f_1497.f_709, 2, 2);
		}
		func_747(uParam0, 0);
	}
	if (func_746(uParam0) || func_786())
	{
		func_753(uParam0->f_1497.f_709, 3, func_745(uParam0));
		if (uParam0->f_1497.f_1018 == -1)
		{
			func_749(uParam0->f_1497.f_709, 3, 1);
		}
		else
		{
			func_749(uParam0->f_1497.f_709, 3, 0);
		}
		func_744(uParam0, 0);
	}
	if (func_743(uParam0) || func_786())
	{
		func_753(uParam0->f_1497.f_709, 4, func_742(uParam0));
		if (uParam0->f_1497.f_1019 == -1)
		{
			func_749(uParam0->f_1497.f_709, 4, 1);
		}
		else
		{
			func_749(uParam0->f_1497.f_709, 4, 0);
		}
		func_740(uParam0->f_1497.f_709, func_741(uParam0));
		func_739(uParam0, 0);
	}
	if (func_738(uParam0) || func_786())
	{
		if (func_113(uParam0->f_4356) == 2)
		{
			func_753(uParam0->f_1497.f_709, 13, func_737(uParam0));
			if (uParam0->f_1497.f_1020 == 0)
			{
				func_749(uParam0->f_1497.f_709, 13, 1);
			}
			else
			{
				func_749(uParam0->f_1497.f_709, 13, 0);
			}
			if (!unk_0xA14BB9332558B949())
			{
				if (func_736(uParam0))
				{
					func_748(uParam0->f_1497.f_709, 13, 0);
				}
				else
				{
					func_748(uParam0->f_1497.f_709, 13, 2);
				}
			}
		}
		else
		{
			func_702(uParam0->f_1497.f_709, 13, 0);
		}
		func_735(uParam0, 0);
	}
	if (func_734(uParam0) || func_786())
	{
		if (func_113(uParam0->f_4356) == 2)
		{
			func_753(uParam0->f_1497.f_709, 14, func_733(uParam0));
			if (uParam0->f_1497.f_1021 == 5)
			{
				func_749(uParam0->f_1497.f_709, 14, 1);
			}
			else
			{
				func_749(uParam0->f_1497.f_709, 14, 0);
			}
			if (!unk_0xA14BB9332558B949())
			{
				if (func_732(uParam0))
				{
					func_748(uParam0->f_1497.f_709, 14, 0);
				}
				else
				{
					func_748(uParam0->f_1497.f_709, 14, 2);
				}
			}
		}
		else
		{
			func_702(uParam0->f_1497.f_709, 14, 0);
		}
		func_731(uParam0, 0);
	}
	if (func_730(uParam0) || func_786())
	{
		func_753(uParam0->f_1497.f_709, 15, func_728(uParam0));
		func_727(uParam0, 0);
	}
	if (func_726(uParam0) || func_786())
	{
		func_753(uParam0->f_1497.f_709, 5, func_724(uParam0));
		func_723(uParam0, 0);
	}
	if (func_722(uParam0) || func_786())
	{
		func_753(uParam0->f_1497.f_709, 16, func_721(uParam0));
		func_720(uParam0, 0);
	}
	func_719(0);
}

void func_719(int iParam0)
{
	if (Global_1696429 && Global_1696432 != iParam0)
	{
		Global_1696432 = iParam0;
	}
}

void func_720(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 18);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 18);
	}
}

int func_721(var uParam0)
{
	return 1;
}

bool func_722(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 18);
}

void func_723(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 17);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 17);
	}
}

int func_724(var uParam0)
{
	switch (func_153(uParam0->f_4356, 0))
	{
		case 1:
			switch (func_725(uParam0->f_4356))
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 4;
				
				default:
			}
			break;
		
		case 2:
			switch (func_725(uParam0->f_4356))
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				case 2:
					return 7;
				
				case 3:
					return 8;
				
				default:
			}
			break;
		
		case 3:
			switch (func_725(uParam0->f_4356))
			{
				case 0:
					return 9;
				
				case 1:
					return 10;
				
				case 2:
					return 11;
				
				case 3:
					return 12;
				
				default:
			}
			break;
		
		case 4:
			switch (func_725(uParam0->f_4356))
			{
				case 0:
					return 13;
				
				case 1:
					return 14;
				
				case 2:
					return 15;
				
				case 3:
					return 16;
				
				default:
			}
			break;
		
		case 5:
			switch (func_725(uParam0->f_4356))
			{
				case 0:
					return 17;
				
				case 1:
					return 18;
				
				case 2:
					return 19;
				
				case 3:
					return 20;
				
				default:
			}
			break;
	}
	return -1;
}

int func_725(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_13;
	}
	return 0;
}

bool func_726(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 17);
}

void func_727(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 16);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 16);
	}
}

int func_728(var uParam0)
{
	switch (func_164(uParam0->f_4356, 0))
	{
		case 1:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 2:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 3:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 2:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 3:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 2:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 3:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return 5;
						
						case 1:
							return 6;
						
						default:
					}
					break;
			}
			break;
		
		case 4:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 2:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 3:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return 7;
						
						case 1:
							return 8;
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 2:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return -1;
						
						case 1:
							return -1;
						
						default:
					}
					break;
				
				case 3:
					switch (func_729(uParam0->f_4356))
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_729(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_11;
	}
	return 0;
}

bool func_730(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 16);
}

void func_731(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 14);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 14);
	}
}

bool func_732(var uParam0)
{
	if (func_173(uParam0->f_4356, 6))
	{
		iVar0++;
	}
	if (func_173(uParam0->f_4356, 7))
	{
		iVar0++;
	}
	if (func_173(uParam0->f_4356, 8))
	{
		iVar0++;
	}
	return iVar0 > 1;
}

int func_733(var uParam0)
{
	switch (uParam0->f_1497.f_1021)
	{
		case 6:
			return 2;
		
		case 7:
			return 1;
		
		case 8:
			return 3;
		
		default:
	}
	return -1;
}

bool func_734(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 14);
}

void func_735(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 13);
	}
}

bool func_736(var uParam0)
{
	if (func_173(uParam0->f_4356, 1))
	{
		iVar0++;
	}
	if (func_173(uParam0->f_4356, 2))
	{
		iVar0++;
	}
	if (func_173(uParam0->f_4356, 3))
	{
		iVar0++;
	}
	if (func_173(uParam0->f_4356, 4))
	{
		iVar0++;
	}
	return iVar0 > 1;
}

int func_737(var uParam0)
{
	switch (uParam0->f_1497.f_1020)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		default:
	}
	return -1;
}

bool func_738(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 13);
}

void func_739(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 12);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 12);
	}
}

void func_740(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_MAP_MARKERS");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

int func_741(var uParam0)
{
	switch (uParam0->f_1497.f_1019)
	{
		case -1:
			return 0;
		
		case 0:
		case 1:
		case 2:
			return 1;
		
		case 3:
		case 4:
		case 5:
			return 2;
		
		case 6:
		case 7:
		case 8:
			return 3;
		
		default:
	}
	return 0;
}

int func_742(var uParam0)
{
	switch (uParam0->f_1497.f_1019)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		
		case 3:
		case 4:
		case 5:
			return 2;
		
		case 6:
		case 7:
		case 8:
			return 3;
		
		default:
	}
	return 0;
}

bool func_743(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 12);
}

void func_744(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 11);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 11);
	}
}

int func_745(var uParam0)
{
	switch (uParam0->f_1497.f_1018)
	{
		case 0:
			return 2;
		
		case 1:
			return 11;
		
		case 2:
			return 1;
		
		case 3:
			return 10;
		
		case 4:
			return 5;
		
		case 5:
			return 8;
		
		case 6:
			return 3;
		
		case 7:
			return 9;
		
		case 8:
			return 4;
		
		case 9:
			return 6;
		
		case 10:
			return 7;
		
		default:
	}
	return -1;
}

bool func_746(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 11);
}

void func_747(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 10);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 10);
	}
}

void func_748(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SELECTION_ARROWS_VISIBLE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

void func_749(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_NOT_SELECTED_VISIBLE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

int func_750(var uParam0)
{
	switch (uParam0->f_1497.f_1017)
	{
		case 0:
			return 2;
		
		case 1:
			return 11;
		
		case 2:
			return 1;
		
		case 3:
			return 10;
		
		case 4:
			return 5;
		
		case 5:
			return 8;
		
		case 6:
			return 3;
		
		case 7:
			return 9;
		
		case 8:
			return 4;
		
		case 9:
			return 6;
		
		case 10:
			return 7;
		
		default:
	}
	return -1;
}

bool func_751(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 10);
}

void func_752(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 15);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 15);
	}
}

void func_753(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_BUTTON_IMAGE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

int func_754(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 7);
	}
	return 0;
}

void func_755(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_TICK");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

int func_756(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 6);
	}
	return 0;
}

int func_757(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 12:
			if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
			{
				if (uParam0->f_1497.f_736.f_276 == 0)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
				case 3:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
				case 3:
					return 0;
				
				case 2:
					return func_759(uParam0->f_4356);
				
				default:
			}
			break;
		
		case 8:
			return func_758(uParam0, 0);
		
		case 9:
			if (!unk_0xA14BB9332558B949())
			{
				return 0;
			}
			return func_758(uParam0, 1);
		
		case 10:
			if (!unk_0xA14BB9332558B949())
			{
				return 0;
			}
			return func_758(uParam0, 2);
		
		case 11:
			if (!unk_0xA14BB9332558B949())
			{
				return 0;
			}
			return func_758(uParam0, 3);
	}
	return 1;
}

int func_758(var uParam0, int iParam1)
{
	if (iParam1 == 0 && !unk_0xA14BB9332558B949())
	{
		return 1;
	}
	if (uParam0->f_1497.f_736.f_87[iParam1] == -1)
	{
		return 0;
	}
	return 1;
}

int func_759(int iParam0)
{
	if ((func_173(iParam0, 6) || func_173(iParam0, 7)) || func_173(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

bool func_760(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 15);
}

void func_761(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 7);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 7);
	}
}

void func_762(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_HEADINGS");
	func_83(sParam1);
	func_83(sParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	func_83(sParam6);
	func_83(sParam7);
	func_83(sParam8);
	func_83(sParam9);
	func_83(sParam10);
	unk_0x7E60D21B163E9D56();
}

char* func_763(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "";
		
		case 1:
			return "CH_OUTFIT_0";
		
		case 2:
			return "CH_OUTFIT_1";
		
		case 3:
			return "CH_OUTFIT_2";
		
		case 4:
			return "CH_OUTFIT_3";
		
		case 6:
			return "CH_OUTFIT_4";
		
		case 7:
			return "CH_OUTFIT_5";
		
		case 8:
			return "CH_OUTFIT_6";
		
		default:
	}
	return "";
}

char* func_764(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return "CH_DROPOFF_0";
		
		case 3:
		case 4:
		case 5:
			return "CH_DROPOFF_1";
		
		case 6:
		case 7:
		case 8:
			return "CH_DROPOFF_2";
		
		default:
	}
	return "";
}

char* func_765(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "CH_ACCPNT_0";
		
		case 1:
			return "CH_ACCPNT_1";
		
		case 2:
			return "CH_ACCPNT_2";
		
		case 3:
			return "CH_ACCPNT_3";
		
		case 4:
			return "CH_ACCPNT_4";
		
		case 5:
			return "CH_ACCPNT_5";
		
		case 6:
			return "CH_ACCPNT_6";
		
		case 7:
			return "CH_ACCPNT_7";
		
		case 8:
			return "CH_ACCPNT_8";
		
		case 9:
			return "CH_ACCPNT_9";
		
		case 10:
			return "CH_ACCPNT_10";
		
		default:
	}
	return "";
}

int func_766(var uParam0)
{
	iVar0 = func_768(func_121(uParam0->f_4356));
	if (func_113(uParam0->f_4356) == func_194(uParam0->f_4356))
	{
		iVar0 = round((IntToFloat(iVar0) * func_767(2)));
	}
	iVar1 = (iVar1 + func_161(func_164(uParam0->f_4356, 0)));
	iVar1 = (iVar1 + func_160(func_153(uParam0->f_4356, 0)));
	iVar1 = (iVar1 + func_159(func_490(uParam0->f_4356, 0)));
	iVar1 = (iVar1 + Global_262145.f_27999);
	iVar1 = ((iVar0 / 100) * iVar1);
	return iVar1;
}

float func_767(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_27994;
		
		case 2:
			return Global_262145.f_27995;
		
		default:
	}
	return 1f;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_28013;
		
		case 1:
			return Global_262145.f_28015;
		
		case 2:
			return Global_262145.f_28014;
		
		case 3:
			return Global_262145.f_28016;
		
		default:
	}
	return 0;
}

int func_769(var uParam0)
{
	iVar0 = func_768(func_121(uParam0->f_4356));
	if (func_113(uParam0->f_4356) == func_194(uParam0->f_4356))
	{
		iVar0 = round((IntToFloat(iVar0) * func_767(2)));
	}
	if (unk_0xA14BB9332558B949())
	{
		fVar1 = 1f;
		switch (uParam0->f_1497.f_1019)
		{
			case 0:
			case 1:
			case 2:
				fVar1 = Global_262145.f_27996;
				break;
			
			case 3:
			case 4:
			case 5:
				fVar1 = Global_262145.f_27997;
				break;
			
			case 6:
			case 7:
			case 8:
				fVar1 = Global_262145.f_27998;
				break;
		}
		iVar0 = round((IntToFloat(iVar0) * fVar1));
	}
	return iVar0;
}

int func_770(var uParam0)
{
	return func_113(uParam0->f_4356);
}

bool func_771(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 7);
}

void func_772(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 4);
	}
}

void func_773(int iParam0, char* sParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "ADD_OPTIONAL_LIST_ITEM");
	func_83(sParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

int func_774(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_756(uParam0->f_4356);
		
		case 1:
			return func_754(uParam0->f_4356);
		
		case 2:
			if (func_770(uParam0) == 2)
			{
				return uParam0->f_1497.f_1021 != 5;
			}
			break;
	}
	return 0;
}

char* func_775(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "CH_OPT_FIN_0";
		
		case 1:
			return "CH_OPT_FIN_1";
		
		case 2:
			if (func_770(uParam0) == 2)
			{
				return "CH_OPT_FIN_2";
			}
			break;
	}
	return "";
}

void func_776(int iParam0)
{
	unk_0x7526D52FFFAB1652(iParam0, "CLEAR_OPTIONAL_LIST");
}

bool func_777(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 4);
}

void func_778(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 3);
	}
}

void func_779(int iParam0, char* sParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "ADD_TODO_LIST_ITEM");
	func_83(sParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

int func_780(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (func_770(uParam0) == 2)
			{
				return uParam0->f_1497.f_1025 != 0;
			}
			return uParam0->f_1497.f_1022 != -1;
		
		case 1:
			return uParam0->f_1497.f_1023 != -1;
		
		case 2:
			return uParam0->f_1497.f_1024 != -1;
		
		case 3:
			if (unk_0xA14BB9332558B949())
			{
				return uParam0->f_1497.f_736.f_92[4] <= 0;
			}
			break;
	}
	return 0;
}

char* func_781(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (func_770(uParam0) == 2)
			{
				return "CH_TODO_FIN_1";
			}
			return "CH_TODO_FIN_0";
		
		case 1:
			return "CH_TODO_FIN_2";
		
		case 2:
			return "CH_TODO_FIN_3";
		
		case 3:
			if (unk_0xA14BB9332558B949())
			{
				return "CH_TODO_FIN_4";
			}
			break;
	}
	return "";
}

void func_782(int iParam0)
{
	unk_0x7526D52FFFAB1652(iParam0, "CLEAR_TODO_LIST");
}

bool func_783(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 3);
}

void func_784(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 9);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 9);
	}
}

void func_785(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_LAUNCH_BUTTON_LABEL");
	func_83(sParam1);
	unk_0x7E60D21B163E9D56();
}

var func_786()
{
	return Global_1696432;
}

bool func_787(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 9);
}

void func_788(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 5);
	}
}

void func_789(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_CREW_CUT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

void func_790(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_CREW_MEMBER_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
}

int func_791(int iParam0)
{
	if (iParam0 != func_42() && unk_0x40B8C182D63932FC(iParam0))
	{
		Var0 = { func_97(iParam0) };
		if (func_601(Var0))
		{
			if (unk_0xD01DD90A3EAEC725(&Var0))
			{
				if (unk_0x8086012EEEB2D3DF(&Var0))
				{
					return 47;
				}
				else if (unk_0x74684D5E87B13DBD(&Var0))
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else if (unk_0x74684D5E87B13DBD(&Var0))
			{
				return 49;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 9;
		
		case 2:
			return 10;
		
		case 3:
			return 11;
		
		default:
	}
	return -1;
}

void func_793(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_CREW_MEMBER");
	unk_0x3CAEA85DA607305E(iParam1);
	func_794(sParam2);
	unk_0x024BC5F58A72410C(sParam3);
	unk_0x7E60D21B163E9D56();
}

void func_794(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_795(var uParam0, int iParam1)
{
	if (unk_0xA14BB9332558B949())
	{
		return 1;
	}
	else if (iParam1 == uParam0->f_4356)
	{
		return 1;
	}
	return 0;
}

int func_796(int iParam0)
{
	iVar0 = 8;
	iVar0 = (iVar0 + iParam0);
	return iVar0;
}

struct<6> func_797(var uParam0, int iParam1)
{
	iVar6 = func_807(uParam0, iParam1);
	if (iVar6 == -1)
	{
		return Var0;
	}
	if (uParam0->f_1497.f_736.f_36[iVar6].f_9)
	{
		return uParam0->f_1497.f_736.f_36[iVar6].f_3;
	}
	if (func_799(uParam0, &(uParam0->f_1497.f_736.f_36[iVar6])))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_4357, 7))
		{
			if (func_798(uParam0))
			{
				Var0 = { uParam0->f_1497.f_736.f_36[iVar6].f_3 };
				if (!uParam0->f_1497.f_736.f_36[iVar6].f_9)
				{
					uParam0->f_1497.f_736.f_36[iVar6].f_9 = 1;
					func_788(uParam0, 1);
				}
			}
		}
		else
		{
			Var0 = { uParam0->f_1497.f_736.f_36[iVar6].f_3 };
		}
	}
	return Var0;
}

int func_798(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_1497.f_736.f_87[iVar0] == -1)
		{
		}
		else if (!func_203(uParam0->f_1497.f_736.f_36[iVar0], 1, 1))
		{
		}
		else if (uParam0->f_1497.f_736.f_36[iVar0].f_2 != 2)
		{
			iVar1 = 0;
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

int func_799(var uParam0, var uParam1)
{
	bVar2 = false;
	switch (uParam1->f_2)
	{
		case 0:
			if (!func_806(uParam0))
			{
				uParam1->f_2 = 1;
			}
			break;
		
		case 1:
			if (unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(*uParam1)))
			{
				return 0;
			}
			if (uParam1->f_1 == 0)
			{
				uParam1->f_1 = func_800(*uParam1);
			}
			else
			{
				StringCopy(&(uParam1->f_3), unk_0x5283D58F79627134(uParam1->f_1), 24);
				iVar1 = 0;
				while (iVar1 < Global_1389239)
				{
					if (Global_1389078[iVar1].f_1 == *uParam1)
					{
						bVar2 = uParam1->f_1 == Global_1389078[iVar1].f_2;
					}
					else
					{
						iVar1++;
					}
				}
				if (!bVar2)
				{
					uParam1->f_1 = 0;
					return 0;
				}
				if (unk_0xEA6BC48857E0AC4C(&(uParam1->f_3)) || unk_0x7F8A39872A07D2CE(" ", &(uParam1->f_3)))
				{
					uParam1->f_1 = 0;
					return 0;
				}
				uParam1->f_2 = 2;
				func_788(uParam0, 1);
				return 1;
			}
			break;
		
		case 2:
			sVar0 = unk_0x5283D58F79627134(uParam1->f_1);
			StringCopy(&(uParam1->f_3), sVar0, 24);
			return 1;
	}
	return 0;
}

int func_800(int iParam0)
{
	iVar0 = func_803(iParam0);
	if (iVar0 == -1)
	{
		func_801(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_801(int iParam0, bool bParam1)
{
	if (!func_203(iParam0, 0, 1))
	{
		return;
	}
	if (func_803(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_802(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_802(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_803(int iParam0)
{
	if (!func_203(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_1389078[iVar0].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_804(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_804(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5283D58F79627134(Global_1389078[iParam0].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_805(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_805(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_42();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

int func_806(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_1497.f_736.f_36[iVar0].f_2 == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_807(var uParam0, int iParam1)
{
	if (iParam1 == func_42())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1497.f_736.f_36[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1497.f_736.f_36[iVar0] == func_42())
		{
			uParam0->f_1497.f_736.f_36[iVar0] = iParam1;
			uParam0->f_1497.f_736.f_36[iVar0].f_2 = 0;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_808(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 5);
}

void func_809(var uParam0)
{
	if ((((((func_17(uParam0, 1) || uParam0->f_2604) || uParam0->f_1497.f_1027 != -1) || uParam0->f_1497.f_1029) || uParam0->f_1497.f_708) || func_16(uParam0)) || (func_15() && func_14() != 33))
	{
		return;
	}
	iVar0 = func_849(&(uParam0->f_2604));
	iVar1 = uParam0->f_2593;
	switch (uParam0->f_1497.f_724.f_2)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					func_847(uParam0, iVar0);
					func_196(uParam0, 1);
					func_846();
					func_845(uParam0);
					break;
				
				case 9:
					if (!unk_0xA14BB9332558B949())
					{
						func_842(uParam0, 1);
					}
					break;
				
				case 10:
					break;
				
				case 7:
					if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
					{
						if (func_841(iVar1))
						{
							if (unk_0xA14BB9332558B949())
							{
								func_838(uParam0);
								unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
							}
							else
							{
								func_837(uParam0);
								unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
							}
						}
						if (func_836(uParam0, iVar1))
						{
							func_833(uParam0, iVar1);
						}
						if (iVar1 == 2 && func_113(uParam0->f_4356) == 2)
						{
							func_189(uParam0, 15);
						}
					}
					else if (unk_0xA14BB9332558B949())
					{
						func_832(uParam0);
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					}
					break;
				
				case 4:
					if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
					{
						if (func_831(uParam0, iVar1))
						{
							uParam0->f_1497.f_1027 = func_830(iVar1);
							unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
							func_846();
						}
					}
					break;
				
				case 8:
					if (unk_0xA14BB9332558B949())
					{
						uParam0->f_1497.f_1027 = 14;
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_846();
					}
					else
					{
						func_201(uParam0, 0);
					}
					break;
				
				case 5:
					if (func_117(uParam0))
					{
						func_828(uParam0, 0);
					}
					break;
				
				case 11:
					if (func_827(iVar1))
					{
						func_846();
						iVar2 = unk_0x117658E336116132(uParam0->f_1497.f_736.f_87[func_826(iVar1)]);
						Var3 = { func_97(iVar2) };
						unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						unk_0x7DA6B436D3570520(&Var3);
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 2:
				case 3:
					func_812(uParam0, iVar1, iVar0);
					break;
				
				case 7:
					if (unk_0xA14BB9332558B949())
					{
						func_810(uParam0, iVar1, 1);
					}
					break;
				
				case 8:
					func_810(uParam0, iVar1, 0);
					break;
				
				case 5:
					if (func_117(uParam0))
					{
						func_828(uParam0, 0);
					}
					break;
			}
			break;
	}
}

void func_810(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_1497.f_724.f_2 == 0)
	{
		return;
	}
	uParam0->f_1497.f_724.f_2 = 0;
	uParam0->f_1497.f_706 = 1;
	func_748(uParam0->f_1497.f_709, iParam1, 0);
	func_190(&(uParam0->f_1497), 1);
	func_778(uParam0, 1);
	func_772(uParam0, 1);
	if (bParam2)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		if (unk_0xA14BB9332558B949())
		{
			Global_1700796[unk_0x6E61BE9E61434AC1()]++;
			switch (iParam1)
			{
				case 2:
					uParam0->f_1497.f_1022 = uParam0->f_1497.f_1017;
					switch (uParam0->f_1497.f_1017)
					{
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							func_191(uParam0, 49);
							break;
					}
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 0);
					break;
				
				case 3:
					uParam0->f_1497.f_1023 = uParam0->f_1497.f_1018;
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 1);
					break;
				
				case 4:
					uParam0->f_1497.f_1024 = uParam0->f_1497.f_1019;
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 2);
					break;
				
				case 13:
					uParam0->f_1497.f_1025 = uParam0->f_1497.f_1020;
					if (func_113(uParam0->f_4356) == 2)
					{
						if (uParam0->f_1497.f_1017 != func_811(uParam0))
						{
							uParam0->f_1497.f_1017 = func_811(uParam0);
							uParam0->f_1497.f_1022 = uParam0->f_1497.f_1017;
							unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 0);
							func_747(uParam0, 1);
							func_761(uParam0, 1);
						}
					}
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 3);
					break;
				
				case 14:
					uParam0->f_1497.f_1026 = uParam0->f_1497.f_1021;
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 4);
					break;
				}
		}
	}
	else
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		if (func_827(iParam1))
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (iVar0 >= 4)
				{
					uParam0->f_1497.f_736.f_92[4] = uParam0->f_1497.f_736.f_264[4];
				}
				else
				{
					uParam0->f_1497.f_736.f_92[iVar0] = uParam0->f_1497.f_736.f_264[iVar0];
				}
				iVar0++;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 2:
					if (uParam0->f_1497.f_1022 != uParam0->f_1497.f_1017)
					{
						uParam0->f_1497.f_1017 = uParam0->f_1497.f_1022;
						func_747(uParam0, 1);
					}
					break;
				
				case 3:
					if (uParam0->f_1497.f_1023 != uParam0->f_1497.f_1018)
					{
						uParam0->f_1497.f_1018 = uParam0->f_1497.f_1023;
						func_744(uParam0, 1);
					}
					break;
				
				case 4:
					if (uParam0->f_1497.f_1024 != uParam0->f_1497.f_1019)
					{
						uParam0->f_1497.f_1019 = uParam0->f_1497.f_1024;
						func_739(uParam0, 1);
					}
					break;
				
				case 13:
					if (uParam0->f_1497.f_1025 != uParam0->f_1497.f_1020)
					{
						uParam0->f_1497.f_1020 = uParam0->f_1497.f_1025;
						func_735(uParam0, 1);
					}
					break;
				
				case 14:
					if (uParam0->f_1497.f_1026 != uParam0->f_1497.f_1021)
					{
						uParam0->f_1497.f_1021 = uParam0->f_1497.f_1026;
						func_731(uParam0, 1);
					}
					break;
			}
			func_761(uParam0, 1);
		}
	}
	if (uParam0->f_2529.f_33 != 2)
	{
		uParam0->f_2529.f_33 = 2;
	}
}

int func_811(var uParam0)
{
	switch (uParam0->f_1497.f_1020)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 9;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

void func_812(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			switch (iParam2)
			{
				case 2:
					if (func_824(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_747(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_824(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_747(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 2:
					if (func_822(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_744(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_822(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_744(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 2:
					if (func_820(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_739(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_820(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_739(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 2:
					if (func_818(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_735(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_818(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_735(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 2:
					if (func_816(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_731(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_816(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_731(uParam0, 1);
						func_761(uParam0, 1);
					}
					break;
			}
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
			switch (iParam2)
			{
				case 2:
					iVar0 = -5;
					break;
				
				case 3:
					if (uParam0->f_1497.f_736.f_92[4] >= 5)
					{
						iVar0 = 5;
					}
					break;
			}
			iVar1 = func_826(iParam1);
			func_813(uParam0, iVar1, iVar0);
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				iVar2++;
			}
			break;
	}
}

void func_813(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 15;
	iVar1 = 85;
	if (uParam0->f_1497.f_736.f_85 == 1)
	{
		iVar1 = 100;
	}
	if (iParam2 < 0)
	{
		iVar2 = uParam0->f_1497.f_736.f_92[iParam1];
		if (iVar2 < unk_0x51D1D19912234EA0(iParam2))
		{
			iParam2 = iVar2;
		}
		if (uParam0->f_1497.f_736.f_92[iParam1] < iVar0)
		{
			iVar3 = (iVar0 - uParam0->f_1497.f_736.f_92[iParam1]);
			uParam0->f_1497.f_736.f_92[iParam1] = (uParam0->f_1497.f_736.f_92[iParam1] + iVar3);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Error", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
		else if (uParam0->f_1497.f_736.f_92[iParam1] == iVar0)
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Error", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
		else
		{
			if (uParam0->f_1497.f_736.f_92[4] <= (100 - unk_0x51D1D19912234EA0(iParam2)))
			{
				uParam0->f_1497.f_736.f_92[4] = (uParam0->f_1497.f_736.f_92[4] + unk_0x51D1D19912234EA0(iParam2));
				uParam0->f_1497.f_736.f_92[iParam1] = (uParam0->f_1497.f_736.f_92[iParam1] - unk_0x51D1D19912234EA0(iParam2));
			}
			if (iParam2 == 0)
			{
				unk_0xEB819BD1E585E9CB(-1, "Error", func_815(), func_814(), 0, 0, 0);
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			}
		}
		if (uParam0->f_1497.f_736.f_92[iParam1] <= iVar0)
		{
			if (!func_227("HEIST_NOTE_6"))
			{
				unk_0xA37A90C62806D848(1);
				func_10("HEIST_NOTE_6", 5000);
			}
		}
	}
	else
	{
		iVar4 = uParam0->f_1497.f_736.f_92[4];
		if (iVar4 < unk_0x51D1D19912234EA0(iParam2))
		{
			iParam2 = iVar4;
		}
		if (uParam0->f_1497.f_736.f_92[iParam1] > iVar1)
		{
			iVar5 = (uParam0->f_1497.f_736.f_92[iParam1] - iVar1);
			uParam0->f_1497.f_736.f_92[4] = (uParam0->f_1497.f_736.f_92[4] + iVar5);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Error", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
		else if (uParam0->f_1497.f_736.f_92[iParam1] == iVar1)
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Error", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
		else
		{
			if (uParam0->f_1497.f_736.f_92[4] >= unk_0x51D1D19912234EA0(iParam2))
			{
				uParam0->f_1497.f_736.f_92[4] = (uParam0->f_1497.f_736.f_92[4] - unk_0x51D1D19912234EA0(iParam2));
				uParam0->f_1497.f_736.f_92[iParam1] = (uParam0->f_1497.f_736.f_92[iParam1] + unk_0x51D1D19912234EA0(iParam2));
			}
			if (iParam2 == 0)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Error", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			}
		}
		if (uParam0->f_1497.f_736.f_92[iParam1] >= iVar1)
		{
			if (!func_227("HEIST_NOTE_5"))
			{
				unk_0xA37A90C62806D848(1);
				func_10("HEIST_NOTE_5", 5000);
			}
		}
	}
}

char* func_814()
{
	return "DLC_XM17_Planning_Board_Soundset";
}

Vector3 func_815()
{
	return 353,793f, 4877,004f, -58,4718f;
}

int func_816(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_1497.f_1021++;
			if (uParam0->f_1497.f_1021 > 8)
			{
				uParam0->f_1497.f_1021 = 5;
			}
		}
		else
		{
			uParam0->f_1497.f_1021 = (uParam0->f_1497.f_1021 - 1);
			if (uParam0->f_1497.f_1021 < 5)
			{
				uParam0->f_1497.f_1021 = 8;
			}
		}
		if (func_817(uParam0))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

int func_817(var uParam0)
{
	iVar0 = uParam0->f_1497.f_1021;
	switch (iVar0)
	{
		case 6:
		case 7:
		case 8:
			return func_173(uParam0->f_4356, iVar0);
		
		default:
	}
	return 0;
}

int func_818(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_1497.f_1020++;
			if (uParam0->f_1497.f_1020 > 4)
			{
				uParam0->f_1497.f_1020 = 0;
			}
		}
		else
		{
			uParam0->f_1497.f_1020 = (uParam0->f_1497.f_1020 - 1);
			if (uParam0->f_1497.f_1020 < 0)
			{
				uParam0->f_1497.f_1020 = 4;
			}
		}
		if (func_819(uParam0))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

int func_819(var uParam0)
{
	iVar0 = uParam0->f_1497.f_1020;
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return func_173(uParam0->f_4356, iVar0);
		
		default:
	}
	return 0;
}

int func_820(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_1497.f_1019++;
			if (uParam0->f_1497.f_1019 > 8)
			{
				uParam0->f_1497.f_1019 = -1;
			}
		}
		else
		{
			uParam0->f_1497.f_1019 = (uParam0->f_1497.f_1019 - 1);
			if (uParam0->f_1497.f_1019 < -1)
			{
				uParam0->f_1497.f_1019 = 8;
			}
		}
		if (func_821(uParam0))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

int func_821(var uParam0)
{
	iVar0 = uParam0->f_1497.f_1019;
	switch (iVar0)
	{
		case 0:
		case 3:
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

int func_822(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_1497.f_1018++;
			if (uParam0->f_1497.f_1018 > 10)
			{
				uParam0->f_1497.f_1018 = -1;
			}
		}
		else
		{
			uParam0->f_1497.f_1018 = (uParam0->f_1497.f_1018 - 1);
			if (uParam0->f_1497.f_1018 < -1)
			{
				uParam0->f_1497.f_1018 = 10;
			}
		}
		if (func_823(uParam0))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

int func_823(var uParam0)
{
	iVar0 = uParam0->f_1497.f_1018;
	if (iVar0 != -1)
	{
		if (!func_179(uParam0->f_4356, iVar0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	switch (func_113(uParam0->f_4356))
	{
		case 1:
			switch (iVar0)
			{
				case 0:
				case 10:
				case 9:
					return 0;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
				case 10:
				case 9:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 10:
				case 9:
					return 0;
				
				default:
			}
			break;
	}
	return 1;
}

int func_824(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_1497.f_1017++;
			if (uParam0->f_1497.f_1017 > 10)
			{
				uParam0->f_1497.f_1017 = -1;
			}
		}
		else
		{
			uParam0->f_1497.f_1017 = (uParam0->f_1497.f_1017 - 1);
			if (uParam0->f_1497.f_1017 < -1)
			{
				uParam0->f_1497.f_1017 = 10;
			}
		}
		if (func_825(uParam0))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

int func_825(var uParam0)
{
	iVar0 = uParam0->f_1497.f_1017;
	if (iVar0 != -1)
	{
		if (!func_179(uParam0->f_4356, iVar0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	switch (func_113(uParam0->f_4356))
	{
		case 1:
			switch (iVar0)
			{
				case 0:
				case 10:
				case 9:
					return 0;
				
				default:
			}
			break;
		
		case 2:
			switch (uParam0->f_1497.f_1020)
			{
				case 1:
					if (iVar0 != 1)
					{
						return 0;
					}
					break;
				
				case 2:
					if (iVar0 != 2)
					{
						return 0;
					}
					break;
				
				case 3:
					if (iVar0 != 9)
					{
						return 0;
					}
					break;
				
				case 4:
					if (iVar0 != 0)
					{
						return 0;
					}
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 9:
					return 0;
				
				default:
			}
			break;
	}
	return 1;
}

int func_826(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

void func_828(var uParam0, bool bParam1)
{
	uParam0->f_4361 = !uParam0->f_4361;
	switch (uParam0->f_4355)
	{
		case 0:
			func_190(uParam0, 1);
			break;
		
		case 1:
			func_190(&(uParam0->f_744), 1);
			break;
		
		case 2:
			func_190(&(uParam0->f_1497), 1);
			break;
	}
	if ((uParam0->f_4361 && uParam0->f_4356 == unk_0xD803B885F5E47A62()) && !bParam1)
	{
		func_191(uParam0, func_829(uParam0));
	}
}

int func_829(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 1:
			switch (uParam0->f_2593)
			{
				case 3:
					return 27;
				
				case 4:
					return 28;
				
				case 9:
					return 31;
				
				case 14:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 22;
						
						default:
					}
					break;
				
				case 15:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 20;
						
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 16:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 21;
						
						case 2:
							if (unk_0xEAE0D21A50E6C7F4(Global_1700796[uParam0->f_4356].f_42, 6))
							{
								return 18;
							}
							break;
					}
					break;
				
				case 17:
					switch (func_113(uParam0->f_4356))
					{
						case 1:
							return 21;
						
						case 2:
							return 24;
						
						default:
					}
					break;
				
				case 18:
					return 19;
			}
			break;
		
		case 2:
			if (unk_0xA14BB9332558B949())
			{
				if (func_193(uParam0->f_4356, 0))
				{
					switch (uParam0->f_2593)
					{
						case 6:
							return 71;
						
						case 7:
							return 72;
						
						default:
					}
				}
				else
				{
					switch (uParam0->f_2593)
					{
						case 6:
							return 56;
						
						case 7:
							return 57;
						}
					}
				
				default:
			}
			break;
	}
	return -1;
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			if (unk_0x7A7BDE279347E517(func_110(iParam0), false, true, 0, -1, 0))
			{
				return 15;
			}
			else
			{
				return 16;
			}
			break;
		
		case 7:
			if (unk_0x7A7BDE279347E517(func_110(iParam0), false, true, 0, -1, 0))
			{
				return 17;
			}
			else
			{
				return 18;
			}
			break;
	}
	return -1;
}

int func_831(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			return !func_756(uParam0->f_4356);
		
		case 7:
			return !func_754(uParam0->f_4356);
		
		default:
	}
	return 0;
}

void func_832(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (unk_0x117658E336116132(uParam0->f_1497.f_736.f_87[iVar0]) != unk_0xD803B885F5E47A62())
		{
		}
		else if (uParam0->f_1497.f_736.f_103[iVar0] == 1)
		{
			uParam0->f_1497.f_736.f_103[iVar0] = 0;
		}
		else
		{
			uParam0->f_1497.f_736.f_103[iVar0] = 1;
		}
		iVar0++;
	}
	func_190(&(uParam0->f_1497), 1);
}

void func_833(var uParam0, int iParam1)
{
	if (uParam0->f_1497.f_724.f_2 == 1)
	{
		return;
	}
	if (func_827(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				uParam0->f_1497.f_736.f_264[4] = uParam0->f_1497.f_736.f_92[4];
			}
			else
			{
				uParam0->f_1497.f_736.f_264[iVar0] = uParam0->f_1497.f_736.f_92[iVar0];
			}
			iVar0++;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 2:
				uParam0->f_1497.f_1022 = uParam0->f_1497.f_1017;
				break;
			
			case 3:
				uParam0->f_1497.f_1023 = uParam0->f_1497.f_1018;
				break;
			
			case 4:
				uParam0->f_1497.f_1024 = uParam0->f_1497.f_1019;
				break;
			
			case 13:
				uParam0->f_1497.f_1025 = uParam0->f_1497.f_1020;
				break;
			
			case 14:
				uParam0->f_1497.f_1026 = uParam0->f_1497.f_1021;
				break;
			}
	}
	uParam0->f_1497.f_724.f_2 = 1;
	uParam0->f_1497.f_706 = 1;
	func_748(uParam0->f_1497.f_709, iParam1, 1);
	func_190(&(uParam0->f_1497), 1);
	if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
	{
		func_191(uParam0, func_835(uParam0));
	}
	if (!unk_0xA14BB9332558B949())
	{
		func_189(uParam0, 12);
	}
	else if (iParam1 == 4)
	{
		func_189(uParam0, 13);
	}
	else if (iParam1 == 2 || iParam1 == 3)
	{
		func_189(uParam0, 14);
	}
	else if (iParam1 == 13)
	{
		func_189(uParam0, 15);
	}
	if (uParam0->f_2529.f_33 != func_834(uParam0))
	{
		uParam0->f_2529.f_33 = func_834(uParam0);
	}
	unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}

int func_834(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 0:
			switch (uParam0->f_2593)
			{
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
					return 9;
				
				default:
			}
			return 0;
		
		case 1:
			switch (uParam0->f_2593)
			{
				case 10:
					return 10;
				
				case 11:
					return 10;
				
				case 12:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				case 13:
					return 16;
				
				case 14:
					switch (func_113(uParam0->f_4356))
					{
						case 2:
							return 17;
						
						default:
					}
					break;
				
				case 17:
					switch (func_113(uParam0->f_4356))
					{
						case 2:
							return 18;
						
						default:
					}
					break;
			}
			return 1;
		
		case 2:
			switch (uParam0->f_2593)
			{
				case 2:
					return 19;
				
				case 3:
					return 20;
				
				case 4:
					return 21;
				
				case 13:
					return 22;
				
				case 14:
					return 23;
				
				default:
			}
			return 2;
		
		default:
	}
	return -1;
}

int func_835(var uParam0)
{
	switch (uParam0->f_4355)
	{
		case 1:
			switch (uParam0->f_2593)
			{
				case 5:
					return 29;
				
				case 6:
					return 30;
				
				case 13:
					return 17;
				
				default:
			}
			break;
		
		case 2:
			if (unk_0xA14BB9332558B949())
			{
				switch (uParam0->f_2593)
				{
					case 2:
						return 48;
					
					case 3:
						return 50;
					
					case 4:
						return 55;
					
					case 13:
						return 52;
					
					case 14:
						return 53;
					}
				
				default:
			}
			break;
	}
	return -1;
}

int func_836(var uParam0, int iParam1)
{
	if (func_827(iParam1))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 2:
			if (func_113(uParam0->f_4356) == 2)
			{
				return 0;
			}
			return 1;
		
		case 3:
		case 4:
			return 1;
		
		case 13:
			if (!unk_0xA14BB9332558B949())
			{
				return func_736(uParam0);
			}
			return 1;
		
		case 14:
			if (!unk_0xA14BB9332558B949())
			{
				return func_732(uParam0);
			}
			return 1;
		
		default:
	}
	return 0;
}

void func_837(var uParam0)
{
	if (uParam0->f_4356 != unk_0xD803B885F5E47A62())
	{
		return;
	}
	if (func_666(func_668(func_113(uParam0->f_4356))) == -1)
	{
		return;
	}
	func_441(uParam0, 3);
	func_201(uParam0, 0);
	uParam0->f_1497.f_703 = 0;
}

void func_838(var uParam0)
{
	if (uParam0->f_4356 != unk_0xD803B885F5E47A62())
	{
		return;
	}
	if (uParam0->f_1497.f_736.f_276 == 0)
	{
		func_840(uParam0);
		return;
	}
	func_846();
	uParam0->f_1497.f_736.f_103[0] = 1;
	Global_1700796[unk_0x6E61BE9E61434AC1()].f_7[0] = 1;
	func_839(uParam0);
}

void func_839(var uParam0)
{
	uParam0->f_1497.f_1019 = (uParam0->f_1497.f_1019 + unk_0x09AC81E49EA267F7(0, 3));
	Global_1700796[unk_0xD803B885F5E47A62()].f_18.f_17 = uParam0->f_1497.f_1019;
}

void func_840(var uParam0)
{
	switch (uParam0->f_1497.f_736.f_278)
	{
		case 0:
			if (!func_227("CH_HELP_LBDR0"))
			{
				func_10("CH_HELP_LBDR0", -1);
			}
			break;
		
		case 1:
			if (!func_227("CH_HELP_LBDR1"))
			{
				func_10("CH_HELP_LBDR1", -1);
			}
			break;
		
		case 2:
			if (!func_227("CH_HELP_LBDR2"))
			{
				func_10("CH_HELP_LBDR2", -1);
			}
			break;
		
		case 3:
			if (!func_227("CH_HELP_LBDR3"))
			{
				func_10("CH_HELP_LBDR3", -1);
			}
			break;
		
		case 4:
			if (!func_227("CH_HELP_LBDR4"))
			{
				func_10("CH_HELP_LBDR4", -1);
			}
			break;
		
		case 5:
			if (!func_227("CH_HELP_LBDR5"))
			{
				func_10("CH_HELP_LBDR5", -1);
			}
			break;
		
		case 6:
			if (!func_227("CH_HELP_LBDR6"))
			{
				func_10("CH_HELP_LBDR6", -1);
			}
			break;
	}
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

void func_842(var uParam0, int iParam1)
{
	func_441(uParam0, 1);
	func_201(uParam0, 0);
	func_222(uParam0, iParam1);
	func_201(uParam0, 1);
	func_843(uParam0, func_844(iParam1));
	unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
}

void func_843(var uParam0, int iParam1)
{
	uParam0->f_2529.f_33 = iParam1;
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return -1;
}

void func_845(var uParam0)
{
	if (uParam0->f_4361)
	{
		uParam0->f_4361 = 0;
	}
}

void func_846()
{
	if ((((((func_227("CH_HELP_LBDR0") || func_227("CH_HELP_LBDR1")) || func_227("CH_HELP_LBDR2")) || func_227("CH_HELP_LBDR3")) || func_227("CH_HELP_LBDR4")) || func_227("CH_HELP_LBDR5")) || func_227("CH_HELP_LBDR6"))
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_847(var uParam0, int iParam1)
{
	uParam0->f_2593.f_1 = 0;
	switch (iParam1)
	{
		case 1:
			func_848(uParam0->f_1497.f_709, 187);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 0:
			func_848(uParam0->f_1497.f_709, 188);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 2:
			func_848(uParam0->f_1497.f_709, 189);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 3:
			func_848(uParam0->f_1497.f_709, 190);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
	}
}

void func_848(int iParam0, int iParam1)
{
	unk_0x1FF2BF40EEFA5ABC(iParam0, "SET_INPUT_EVENT", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_849(var uParam0)
{
	if (unk_0x4FD68D5821EE3E19())
	{
		return -1;
	}
	if (unk_0x798A3F1296751F46())
	{
		return -1;
	}
	if (unk_0xBFC0798A6E3417F9(2, 188) || func_850(uParam0, 0, 0))
	{
		return 0;
	}
	else if (unk_0xBFC0798A6E3417F9(2, 187) || func_850(uParam0, 0, 1))
	{
		return 1;
	}
	else if (unk_0xBFC0798A6E3417F9(2, 189) || func_850(uParam0, 0, 2))
	{
		return 2;
	}
	else if (unk_0xBFC0798A6E3417F9(2, 190) || func_850(uParam0, 0, 3))
	{
		return 3;
	}
	else if (unk_0xBFC0798A6E3417F9(2, 205))
	{
		return 9;
	}
	else if (unk_0xBFC0798A6E3417F9(2, 206))
	{
		return 10;
	}
	else if (unk_0xB9132A06AE472728(2, 203))
	{
		return 4;
	}
	else if (unk_0xB9132A06AE472728(2, 204))
	{
		return 5;
	}
	else if (unk_0xB9132A06AE472728(2, 204))
	{
		return 6;
	}
	else if (unk_0xB9132A06AE472728(2, 202))
	{
		return 8;
	}
	else if (unk_0xB9132A06AE472728(2, 201))
	{
		return 7;
	}
	else if (unk_0xB9132A06AE472728(2, 217))
	{
		return 11;
	}
	return -1;
}

int func_850(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = floor((unk_0x4F3973434662D795(2, 218) * 127f));
			iVar2 = floor((unk_0x4F3973434662D795(2, 219) * 127f));
			switch (iParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_1), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_1), iParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_1), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_1), iParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_1), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_1), iParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_1), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_1), iParam2);
					}
					break;
			}
			break;
		
		case 1:
			iVar1 = floor((unk_0x4F3973434662D795(2, 220) * 127f));
			iVar2 = floor((unk_0x4F3973434662D795(2, 221) * 127f));
			switch (iParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_2), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_2), iParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_2), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_2), iParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_2), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_2), iParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam2))
						{
							iVar0 = 1;
							unk_0x5D96D8530B3D0904(&(uParam0->f_2), iParam2);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(uParam0->f_2), iParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_851(var uParam0)
{
	if (uParam0->f_1497.f_1027 == -1)
	{
		return;
	}
	if (func_528(uParam0, uParam0->f_1497.f_1027, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_1497.f_1027)
			{
				case 14:
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 3);
					break;
				
				case 15:
					func_853(1);
					func_755(uParam0->f_1497.f_709, 6, 1);
					func_772(uParam0, 1);
					func_190(&(uParam0->f_1497), 1);
					if (func_526())
					{
						func_514(-1295545795, func_110(6), &iVar1, 0, 1, 0);
						Global_4263954[iVar1].f_9 = uParam0->f_2593;
					}
					else
					{
						unk_0x566FF9B925CB8BDA(uParam0->f_2593, func_110(6), 0, 1);
					}
					Global_1700796[unk_0x6E61BE9E61434AC1()]++;
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 6);
					break;
				
				case 16:
					break;
				
				case 17:
					func_852(1);
					func_755(uParam0->f_1497.f_709, 7, 1);
					func_772(uParam0, 1);
					func_190(&(uParam0->f_1497), 1);
					if (func_526())
					{
						func_514(-1295545795, func_110(7), &iVar2, 0, 1, 0);
						Global_4263954[iVar2].f_9 = uParam0->f_2593;
					}
					else
					{
						unk_0x566FF9B925CB8BDA(uParam0->f_2593, func_110(7), 0, 1);
					}
					Global_1700796[unk_0x6E61BE9E61434AC1()]++;
					unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_1), 7);
					break;
				
				case 18:
					break;
			}
			uParam0->f_1497.f_1027 = -1;
			uParam0->f_1497.f_1029 = 1;
		}
		else
		{
			uParam0->f_1497.f_1027 = -1;
			uParam0->f_1497.f_1029 = 1;
			uParam0->f_1497.f_1028 = 0;
		}
	}
}

void func_852(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 7);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 7);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 7);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 7);
	}
	func_6(8528, iVar0, -1, 1, 0);
}

void func_853(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 6);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 6);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 6);
	}
	func_6(8528, iVar0, -1, 1, 0);
}

void func_854(var uParam0)
{
	if (uParam0->f_1497.f_702)
	{
		if (unk_0x83D8570832F172A7(uParam0->f_1497.f_709))
		{
			unk_0x5DD950F92F816F03(1);
			unk_0x3039591AD3E735CE(uParam0->f_1497.f_700);
			switch (2)
			{
				case 0:
					break;
				
				case 1:
					unk_0x89F18617A4C543B3(uParam0->f_1497.f_709, 1);
					break;
				
				case 2:
					unk_0xB32741071615AC2A(uParam0->f_1497.f_709, 1);
					break;
			}
			unk_0xEF45C43067063F18(uParam0->f_1497.f_709, 0,25f, 0,5f, 0,5f, 1f, 255, 255, 255, 255, 0);
			unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
			unk_0x5DD950F92F816F03(0);
			if (uParam0->f_1497.f_705)
			{
			}
		}
	}
	else if (func_483(uParam0->f_4356))
	{
		uParam0->f_1497.f_702 = 1;
	}
	if (uParam0->f_1497.f_703 && func_14() != 31)
	{
		func_855(uParam0);
	}
}

void func_855(var uParam0)
{
	Var0 = { func_869() };
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	bVar9 = uParam0->f_1497.f_706;
	if (func_16(uParam0) || uParam0->f_1497.f_1016 > 0)
	{
		if (!uParam0->f_1497.f_704)
		{
			bVar9 = true;
			uParam0->f_1497.f_704 = 1;
		}
	}
	else if (uParam0->f_1497.f_704)
	{
		bVar9 = true;
		uParam0->f_1497.f_704 = 0;
	}
	if (!bVar9)
	{
		func_864(&(uParam0->f_1497.f_710), &Var0, &(uParam0->f_1497), 0);
		return;
	}
	if (!unk_0x0D71AFA59EF5104F() || unk_0xB3260A60545D3F11() == 10)
	{
		func_863(&(uParam0->f_1497), 0,5f);
	}
	else
	{
		func_863(&(uParam0->f_1497), 0,7f);
	}
	func_861(&(uParam0->f_1497));
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 5))
	{
		func_860("", "HEIST_IB_CONT", uParam0->f_1497.f_1030, &(uParam0->f_1497), 0);
	}
	iVar10 = uParam0->f_2593;
	if (uParam0->f_1497.f_704)
	{
		if (func_708(&(uParam0->f_2529)))
		{
			if (unk_0x91E3F625EF57450D(2))
			{
				func_859(2, 39, "CH_INSTR_ZOOM", &(uParam0->f_1497), 1, 361);
			}
			else
			{
				func_858(2, 15, "CH_INSTR_ZOOM", &(uParam0->f_1497));
			}
		}
		func_858(2, 1, "HEIST_IB_LOOK", &(uParam0->f_1497));
	}
	else
	{
		switch (uParam0->f_1497.f_724.f_2)
		{
			case 0:
				if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
				{
					if (func_841(iVar10))
					{
						func_859(2, 201, "CH_INSTR_SEL", &(uParam0->f_1497), 1, 361);
					}
					else if (func_836(uParam0, iVar10))
					{
						func_859(2, 201, func_857(unk_0xA14BB9332558B949(), "CH_INSTR_MODI", "CH_INSTR_PREV"), &(uParam0->f_1497), 1, 361);
					}
					func_859(2, 202, "CH_INSTR_QUIT", &(uParam0->f_1497), 1, 361);
					if (func_831(uParam0, iVar10))
					{
						func_859(2, 203, "CH_INSTR_PURCH", &(uParam0->f_1497), 1, 361);
					}
				}
				else if (unk_0xA14BB9332558B949())
				{
					if (func_701(uParam0, unk_0xD803B885F5E47A62()))
					{
						func_859(2, 201, "HEIST_IB_UNRDY", &(uParam0->f_1497), 1, 361);
					}
					else
					{
						func_859(2, 201, "HEIST_IB_RDY", &(uParam0->f_1497), 1, 361);
					}
					func_859(2, 202, "CH_INSTR_QUIT", &(uParam0->f_1497), 1, 361);
				}
				if (func_117(uParam0))
				{
					func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_1497), 1, 361);
				}
				if (!unk_0xA14BB9332558B949())
				{
					if (func_482(uParam0, 1))
					{
						func_859(2, 205, "CH_INSTR_PREP", &(uParam0->f_1497), 1, 361);
					}
				}
				if (unk_0x91E3F625EF57450D(2))
				{
					func_859(2, 39, "CH_INSTR_ZOOM", &(uParam0->f_1497), 1, 361);
				}
				else
				{
					func_858(2, 15, "CH_INSTR_ZOOM", &(uParam0->f_1497));
				}
				func_858(2, 1, "HEIST_IB_LOOK", &(uParam0->f_1497));
				func_858(2, 0, "HEIST_IB_NAV", &(uParam0->f_1497));
				if (func_827(iVar10))
				{
					if ((unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975()) || unk_0x0EFF6B4415DAF4A1())
					{
						func_859(2, 217, "HEIST_IB_PSN", &(uParam0->f_1497), 1, 361);
					}
					else if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						func_856(unk_0xF59058FCB716F903(2, 217, true), "HEIST_IB_XBL", &(uParam0->f_1497), 0);
					}
					else
					{
						func_856(unk_0xF59058FCB716F903(2, 217, true), "HEIST_IB_PSNXBL", &(uParam0->f_1497), 0);
					}
				}
				break;
			
			case 1:
				if (uParam0->f_4356 != unk_0xD803B885F5E47A62())
				{
					return;
				}
				if (unk_0xA14BB9332558B949())
				{
					func_859(2, 201, "CH_INSTR_SET", &(uParam0->f_1497), 1, 361);
				}
				func_859(2, 202, func_857(unk_0xA14BB9332558B949(), "CH_INSTR_CANC", "CH_INSTR_BACK"), &(uParam0->f_1497), 1, 361);
				if (func_117(uParam0))
				{
					func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_1497), 1, 361);
				}
				if (func_827(iVar10))
				{
					func_858(2, 8, "CH_INSTR_CUT", &(uParam0->f_1497));
				}
				else if (iVar10 == 2)
				{
					func_858(2, 8, "CH_INSTR_ENT", &(uParam0->f_1497));
				}
				else if (iVar10 == 3)
				{
					func_858(2, 8, "CH_INSTR_EXT", &(uParam0->f_1497));
				}
				else if (iVar10 == 4)
				{
					func_858(2, 8, "CH_INSTR_BUY", &(uParam0->f_1497));
				}
				else if (iVar10 == 13)
				{
					func_858(2, 8, "CH_INSTR_OUTI", &(uParam0->f_1497));
				}
				else if (iVar10 == 14)
				{
					func_858(2, 8, "CH_INSTR_OUTO", &(uParam0->f_1497));
				}
				func_858(2, 1, "HEIST_IB_LOOK", &(uParam0->f_1497));
				break;
			}
	}
	func_864(&(uParam0->f_1497.f_710), &Var0, &(uParam0->f_1497), uParam0->f_1497.f_706);
	func_190(&(uParam0->f_1497), 0);
}

void func_856(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_32), sParam1, 16);
	uParam2->f_693++;
}

char* func_857(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_858(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0].f_32), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0].f_54 = iParam0;
	uParam3->f_1[iVar0].f_55 = iParam1;
	unk_0x5D96D8530B3D0904(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_859(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0].f_32), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0].f_54 = iParam0;
	uParam3->f_1[iVar0].f_55 = iParam1;
	uParam3->f_1[iVar0].f_56 = iParam5;
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&(uParam3->f_691), iVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_693++;
}

void func_860(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4)
{
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0].f_32), sParam1, 16);
	uParam3->f_1[iVar0].f_36 = uParam2;
	unk_0x5D96D8530B3D0904(&(uParam3->f_686), iVar0);
	uParam3->f_694 = iVar0;
	uParam3->f_693++;
}

void func_861(var uParam0)
{
	func_862(uParam0);
	uParam0->f_692 = 1;
}

void func_862(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_32), "", 16);
		uParam0->f_1[iVar0].f_36 = 0;
		uParam0->f_1[iVar0].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0].f_38), "", 64);
		uParam0->f_1[iVar0].f_54 = 2;
		uParam0->f_1[iVar0].f_55 = 361;
		uParam0->f_1[iVar0].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

void func_863(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

void func_864(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1 || unk_0xB8E3620B82AD47D7(2))
	{
		*uParam2 = 0;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_868(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_867(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_689, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0].f_54;
						iVar2 = uParam2->f_1[iVar0].f_55;
						iVar3 = uParam2->f_1[iVar0].f_56;
						func_84(unk_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_84(unk_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0].f_54;
						iVar5 = uParam2->f_1[iVar0].f_55;
						func_84(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_83(&(uParam2->f_1[iVar0].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_691, iVar0))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0].f_55);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_84(&(uParam2->f_1[iVar0]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0].f_16)))
					{
						func_84(&(uParam2->f_1[iVar0].f_16));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_83(&(uParam2->f_1[iVar0].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(false);
						unk_0x3CAEA85DA607305E(361);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_699);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0,05f;
	uParam2->f_696 = 0,045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_866(*uParam0, uParam1);
	}
	func_865();
}

void func_865()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_866(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_867(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_868(var uParam0)
{
	uParam0->f_692 = 0;
}

struct<9> func_869()
{
	Var0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_870(var uParam0)
{
	if (!func_15())
	{
		return;
	}
	if (func_14() == 33)
	{
		if (Global_1696433.f_4356 == func_42() || !unk_0x40B8C182D63932FC(Global_1696433.f_4356))
		{
			return;
		}
	}
	iVar0 = unk_0x6E61BE9E61434AC1();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (iVar1 >= 4)
			{
				if (Global_1700796[iVar0].f_12[4] != uParam0->f_1497.f_736.f_92[4])
				{
					Global_1700796[iVar0].f_12[4] = uParam0->f_1497.f_736.f_92[4];
					bVar6 = true;
				}
			}
			else
			{
				if (Global_1700796[iVar0].f_12[iVar1] != uParam0->f_1497.f_736.f_92[iVar1])
				{
					Global_1700796[iVar0].f_12[iVar1] = uParam0->f_1497.f_736.f_92[iVar1];
					if (uParam0->f_1497.f_736.f_87[iVar1] == unk_0x6E61BE9E61434AC1())
					{
						Global_2451426.f_6435 = Global_1700796[iVar0].f_12[iVar1];
						Global_1674920.f_46 = Global_2451426.f_6435;
					}
					bVar6 = true;
				}
				if (Global_1700796[iVar0].f_2[iVar1] != uParam0->f_1497.f_736.f_87[iVar1])
				{
					Global_1700796[iVar0].f_2[iVar1] = uParam0->f_1497.f_736.f_87[iVar1];
					bVar4 = true;
				}
				iVar3 = 0;
				while (iVar3 <= 31)
				{
					if (uParam0->f_1497.f_736.f_87[iVar1] != iVar3 || uParam0->f_1497.f_736.f_87[iVar1] == uParam0->f_4356)
					{
					}
					else if (uParam0->f_1497.f_736.f_103[iVar1] != Global_1700796[iVar3].f_7[iVar1])
					{
						uParam0->f_1497.f_736.f_103[iVar1] = Global_1700796[iVar3].f_7[iVar1];
						Global_1700796[iVar0].f_7[iVar1] = uParam0->f_1497.f_736.f_103[iVar1];
						bVar5 = true;
					}
					iVar3++;
				}
			}
			iVar1++;
		}
		if (bVar4)
		{
			Global_1700796[iVar0]++;
			func_788(uParam0, 1);
		}
		if (bVar6)
		{
			Global_1700796[iVar0]++;
		}
		if (bVar5)
		{
			Global_1700796[iVar0]++;
		}
		if (Global_1700796[iVar0].f_18.f_17 != uParam0->f_1497.f_1019)
		{
			Global_1700796[iVar0]++;
			Global_1700796[iVar0].f_18.f_17 = uParam0->f_1497.f_1019;
		}
		if (Global_1700796[iVar0].f_18.f_18 != uParam0->f_1497.f_1017)
		{
			Global_1700796[iVar0]++;
			Global_1700796[iVar0].f_18.f_18 = uParam0->f_1497.f_1017;
		}
		if (Global_1700796[iVar0].f_18.f_19 != uParam0->f_1497.f_1018)
		{
			Global_1700796[iVar0]++;
			Global_1700796[iVar0].f_18.f_19 = uParam0->f_1497.f_1018;
		}
		if (func_113(unk_0xD803B885F5E47A62()) == 2)
		{
			if (Global_1700796[iVar0].f_18.f_20 != uParam0->f_1497.f_1020)
			{
				Global_1700796[iVar0]++;
				Global_1700796[iVar0].f_18.f_20 = uParam0->f_1497.f_1020;
			}
			if (Global_1700796[iVar0].f_18.f_21 != uParam0->f_1497.f_1021)
			{
				Global_1700796[iVar0]++;
				Global_1700796[iVar0].f_18.f_21 = uParam0->f_1497.f_1021;
			}
		}
	}
	else
	{
		iVar2 = uParam0->f_4356;
		if (iVar2 <= -1)
		{
			return;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uParam0->f_1497.f_736.f_87[iVar1] != unk_0x6E61BE9E61434AC1())
			{
			}
			else
			{
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_7[iVar1] = uParam0->f_1497.f_736.f_103[iVar1];
				iVar8 = iVar1;
			}
			iVar1++;
		}
		if (Global_1700796[iVar2] > uParam0->f_1497.f_736.f_77)
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (iVar1 >= 4)
				{
					if (uParam0->f_1497.f_736.f_92[4] != Global_1700796[iVar2].f_12[4])
					{
						uParam0->f_1497.f_736.f_92[4] = Global_1700796[iVar2].f_12[4];
						bVar6 = true;
					}
				}
				else
				{
					if (uParam0->f_1497.f_736.f_92[iVar1] != Global_1700796[iVar2].f_12[iVar1])
					{
						uParam0->f_1497.f_736.f_92[iVar1] = Global_1700796[iVar2].f_12[iVar1];
						bVar6 = true;
						if (iVar8 == iVar1)
						{
							Global_2451426.f_6435 = Global_1700796[iVar2].f_12[iVar1];
							Global_1674920.f_46 = Global_2451426.f_6435;
						}
					}
					if (uParam0->f_1497.f_736.f_87[iVar1] != Global_1700796[iVar2].f_2[iVar1])
					{
						uParam0->f_1497.f_736.f_87[iVar1] = Global_1700796[iVar2].f_2[iVar1];
						bVar4 = true;
					}
					if (uParam0->f_1497.f_736.f_103[iVar1] != Global_1700796[iVar2].f_7[iVar1])
					{
						if (iVar8 != iVar1)
						{
							uParam0->f_1497.f_736.f_103[iVar1] = Global_1700796[iVar2].f_7[iVar1];
						}
						bVar5 = true;
					}
				}
				iVar1++;
			}
			if (bVar4)
			{
				func_788(uParam0, 1);
			}
			if (bVar6)
			{
			}
			if (bVar5)
			{
			}
			if (uParam0->f_1497.f_1017 != Global_1700796[iVar2].f_18.f_18)
			{
				uParam0->f_1497.f_1017 = Global_1700796[iVar2].f_18.f_18;
				func_747(uParam0, 1);
				func_761(uParam0, 1);
			}
			if (uParam0->f_1497.f_1018 != Global_1700796[iVar2].f_18.f_19)
			{
				uParam0->f_1497.f_1018 = Global_1700796[iVar2].f_18.f_19;
				func_744(uParam0, 1);
				func_761(uParam0, 1);
			}
			if (uParam0->f_1497.f_1019 != Global_1700796[iVar2].f_18.f_17)
			{
				uParam0->f_1497.f_1019 = Global_1700796[iVar2].f_18.f_17;
				func_739(uParam0, 1);
				func_761(uParam0, 1);
			}
			if (func_113(uParam0->f_4356) == 2)
			{
				if (uParam0->f_1497.f_1020 != Global_1700796[iVar2].f_18.f_20)
				{
					uParam0->f_1497.f_1020 = Global_1700796[iVar2].f_18.f_20;
					func_735(uParam0, 1);
					func_761(uParam0, 1);
				}
				if (uParam0->f_1497.f_1021 != Global_1700796[iVar2].f_18.f_21)
				{
					uParam0->f_1497.f_1021 = Global_1700796[iVar2].f_18.f_21;
					func_731(uParam0, 1);
					func_761(uParam0, 1);
				}
			}
			uParam0->f_1497.f_736.f_77 = Global_1700796[iVar2];
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 0) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 0))
			{
				bVar7 = true;
				uParam0->f_1497.f_1022 = Global_1700796[iVar2].f_18.f_18;
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 0);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 1) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 1))
			{
				bVar7 = true;
				uParam0->f_1497.f_1023 = Global_1700796[iVar2].f_18.f_19;
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 2) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 2))
			{
				bVar7 = true;
				uParam0->f_1497.f_1024 = Global_1700796[iVar2].f_18.f_17;
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 2);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 3) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 3))
			{
				bVar7 = true;
				uParam0->f_1497.f_1025 = Global_1700796[iVar2].f_18.f_20;
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 3);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 4) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 4))
			{
				bVar7 = true;
				uParam0->f_1497.f_1026 = Global_1700796[iVar2].f_18.f_21;
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 4);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 5) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 5))
			{
				func_190(&(uParam0->f_1497), 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 5);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 6) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 6))
			{
				bVar7 = true;
				func_755(uParam0->f_1497.f_709, 6, 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 6);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar2].f_1, 7) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 7))
			{
				bVar7 = true;
				func_755(uParam0->f_1497.f_709, 7, 1);
				unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_736.f_78), 7);
			}
			if (bVar7)
			{
				func_778(uParam0, 1);
				func_772(uParam0, 1);
			}
		}
	}
}

void func_871(var uParam0)
{
	if (unk_0xD803B885F5E47A62() != uParam0->f_4356)
	{
		return;
	}
	if (!func_193(uParam0->f_4356, 0))
	{
		if (!func_875(5))
		{
			switch (uParam0->f_1497.f_1016)
			{
				case 0:
					func_191(uParam0, 47);
					uParam0->f_1497.f_1016++;
					break;
				
				case 1:
					if (func_874(uParam0, 47))
					{
						func_872(5, 1);
						uParam0->f_1497.f_1016 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xA14BB9332558B949())
	{
		if (!func_875(11))
		{
			switch (uParam0->f_1497.f_1016)
			{
				case 0:
					func_191(uParam0, 70);
					uParam0->f_1497.f_1016++;
					break;
				
				case 1:
					if (func_874(uParam0, 70))
					{
						func_872(11, 1);
						uParam0->f_1497.f_1016 = 0;
					}
					break;
			}
		}
		else if (!uParam0->f_4173.f_179)
		{
			switch (func_113(uParam0->f_4356))
			{
				case 1:
				case 3:
					if (!func_193(uParam0->f_4356, 1) && !func_193(uParam0->f_4356, 3))
					{
						func_191(uParam0, 48);
					}
					break;
				
				case 2:
					if (!func_193(uParam0->f_4356, 2))
					{
						func_191(uParam0, 52);
					}
					break;
			}
			uParam0->f_4173.f_179 = 1;
		}
	}
}

void func_872(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_873(27233, bParam1, -1, 1);
			break;
		
		case 1:
			func_873(27234, bParam1, -1, 1);
			break;
		
		case 2:
			func_873(27235, bParam1, -1, 1);
			break;
		
		case 3:
			func_873(27236, bParam1, -1, 1);
			break;
		
		case 4:
			func_873(27237, bParam1, -1, 1);
			break;
		
		case 5:
			func_873(27238, bParam1, -1, 1);
			break;
		
		case 6:
			func_873(27239, bParam1, -1, 1);
			break;
		
		case 7:
			func_873(27240, bParam1, -1, 1);
			break;
		
		case 8:
			func_873(27241, bParam1, -1, 1);
			break;
		
		case 9:
			func_873(27242, bParam1, -1, 1);
			break;
		
		case 10:
			func_873(27243, bParam1, -1, 1);
			break;
		
		case 11:
			func_873(27244, bParam1, -1, 1);
			break;
	}
}

int func_873(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_8();
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

bool func_874(var uParam0, int iParam1)
{
	return (func_31(uParam0, iParam1) && uParam0->f_4173.f_8 != iParam1);
}

int func_875(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_876(27233, -1, -1);
			break;
		
		case 1:
			return func_876(27234, -1, -1);
			break;
		
		case 2:
			return func_876(27235, -1, -1);
			break;
		
		case 3:
			return func_876(27236, -1, -1);
			break;
		
		case 4:
			return func_876(27237, -1, -1);
			break;
		
		case 5:
			return func_876(27238, -1, -1);
			break;
		
		case 6:
			return func_876(27239, -1, -1);
			break;
		
		case 7:
			return func_876(27240, -1, -1);
			break;
		
		case 8:
			return func_876(27241, -1, -1);
			break;
		
		case 9:
			return func_876(27242, -1, -1);
			break;
		
		case 10:
			return func_876(27243, -1, -1);
			break;
		
		case 11:
			return func_876(27244, -1, -1);
			break;
	}
	return 0;
}

int func_876(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_878(iParam0, iParam1);
	uVar2 = func_877(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_877(int iParam0)
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

int func_878(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
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

void func_879(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_4357, 7))
	{
		iVar0 = uParam0->f_4356;
		if (iVar0 != -1)
		{
			if (!func_882(&(Global_1700796[iVar0].f_65)))
			{
				if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_736.f_78, 5))
					{
						func_503(&(Global_1700796[iVar0].f_65), 0, 0);
					}
				}
			}
			else
			{
				uParam0->f_1497.f_1030 = (120000 - func_881(&(Global_1700796[iVar0].f_65), 0, 0));
				if (uParam0->f_1497.f_1030 > 0)
				{
					if (uParam0->f_1497.f_1030 < (uParam0->f_1497.f_1031 - 1000))
					{
						func_190(&(uParam0->f_1497), 1);
						uParam0->f_1497.f_1031 = uParam0->f_1497.f_1030;
					}
				}
				else
				{
					uParam0->f_1497.f_1030 = 0;
					func_880(uParam0);
					if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
					{
						uParam0->f_1497.f_736.f_103[0] = 1;
						Global_1700796[unk_0x6E61BE9E61434AC1()].f_7[0] = 1;
						unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 2);
					}
				}
			}
		}
	}
}

void func_880(var uParam0)
{
	switch (uParam0->f_1497.f_736.f_85)
	{
		case 1:
			if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
			{
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[0] = 100;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[1] = 0;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[2] = 0;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[3] = 0;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[4] = 0;
			}
			uParam0->f_1497.f_736.f_92[0] = 100;
			uParam0->f_1497.f_736.f_92[1] = 0;
			uParam0->f_1497.f_736.f_92[2] = 0;
			uParam0->f_1497.f_736.f_92[3] = 0;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
		
		case 2:
			if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
			{
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[0] = 85;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[1] = 15;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[2] = 0;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[3] = 0;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[4] = 0;
			}
			uParam0->f_1497.f_736.f_92[0] = 85;
			uParam0->f_1497.f_736.f_92[1] = 15;
			uParam0->f_1497.f_736.f_92[2] = 0;
			uParam0->f_1497.f_736.f_92[3] = 0;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
		
		case 3:
			if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
			{
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[0] = 70;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[1] = 15;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[2] = 15;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[3] = 0;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[4] = 0;
			}
			uParam0->f_1497.f_736.f_92[0] = 70;
			uParam0->f_1497.f_736.f_92[1] = 15;
			uParam0->f_1497.f_736.f_92[2] = 15;
			uParam0->f_1497.f_736.f_92[3] = 0;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
		
		case 4:
			if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
			{
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[0] = 55;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[1] = 15;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[2] = 15;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[3] = 15;
				Global_1700796[unk_0x6E61BE9E61434AC1()].f_12[4] = 0;
			}
			uParam0->f_1497.f_736.f_92[0] = 55;
			uParam0->f_1497.f_736.f_92[1] = 15;
			uParam0->f_1497.f_736.f_92[2] = 15;
			uParam0->f_1497.f_736.f_92[3] = 15;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_1497.f_736.f_87[iVar0] != unk_0x6E61BE9E61434AC1())
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_2451426.f_6435 = uParam0->f_1497.f_736.f_92[iVar1];
	Global_1674920.f_46 = Global_2451426.f_6435;
}

int func_881(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

bool func_882(var uParam0)
{
	return uParam0->f_1;
}

void func_883()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		unk_0x558EC149EB2BC0A2(2, 202);
	}
}

void func_884(var uParam0)
{
	if (!func_17(uParam0, 1))
	{
		func_886(uParam0, 2);
	}
	if (unk_0xA14BB9332558B949())
	{
		if (func_113(uParam0->f_4356) == 2)
		{
			func_693(&(uParam0->f_2593), 13, 0);
		}
		else
		{
			func_693(&(uParam0->f_2593), 2, 0);
		}
	}
	else if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
	{
		func_693(&(uParam0->f_2593), 12, 0);
		func_189(uParam0, 11);
	}
	else if (func_113(uParam0->f_4356) == 2)
	{
		func_693(&(uParam0->f_2593), 13, 0);
	}
	else
	{
		func_693(&(uParam0->f_2593), 2, 0);
	}
	func_885(uParam0->f_1497.f_709, uParam0->f_2593);
	uParam0->f_1497.f_703 = 1;
}

void func_885(int iParam0, int iParam1)
{
	unk_0x1FF2BF40EEFA5ABC(iParam0, "SET_CURRENT_SELECTION", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_886(var uParam0, int iParam1)
{
	uParam0->f_2529.f_35 = 0f;
	uParam0->f_2529.f_35.f_1 = 0f;
	uParam0->f_2529.f_35.f_2 = -180f;
	func_843(uParam0, iParam1);
	func_887(&(uParam0->f_2529.f_1), func_716(&(uParam0->f_2529)), func_715(&(uParam0->f_2529)), func_714(&(uParam0->f_2529)), 20, 10, 3, 10f, 1, 0, -1f, 0);
	func_713(&(uParam0->f_2529), func_714(&(uParam0->f_2529)));
	unk_0x5413873D3F67BF93(true, 0);
	uParam0->f_2529.f_38 = { func_716(&(uParam0->f_2529)) };
	uParam0->f_2529.f_41 = { func_715(&(uParam0->f_2529)) };
}

void func_887(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = uParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = uParam7;
	uParam0->f_18 = uParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, true);
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0,19f);
	}
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xDC3CC6D1845B0567(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x3B05E4399DC8490C(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_888(var uParam0)
{
}

void func_889(var uParam0)
{
	func_870(uParam0);
	func_854(uParam0);
	func_718(uParam0);
	func_890(uParam0);
	if (uParam0->f_1497.f_724.f_5)
	{
		func_462(unk_0xD803B885F5E47A62(), 0, 0, 0);
		if (!unk_0xA14BB9332558B949())
		{
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
		}
		uParam0->f_4360 = 1;
		func_698(&(uParam0->f_1497.f_724), 2);
	}
}

void func_890(var uParam0)
{
	if ((uParam0->f_724 == 3 && uParam0->f_744.f_724 == 3) && uParam0->f_1497.f_724 == 3)
	{
		uParam0->f_703 = 0;
		uParam0->f_744.f_703 = 0;
		uParam0->f_1497.f_703 = 0;
	}
}

void func_891(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 1))
	{
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 1);
	}
}

void func_892(var uParam0)
{
	func_870(uParam0);
	func_778(uParam0, 1);
	func_772(uParam0, 1);
	func_788(uParam0, 1);
	func_784(uParam0, 1);
	func_761(uParam0, 1);
	func_752(uParam0, 1);
	func_747(uParam0, 1);
	func_744(uParam0, 1);
	func_739(uParam0, 1);
	if (func_113(uParam0->f_4356) == 2)
	{
		func_735(uParam0, 1);
		func_731(uParam0, 1);
	}
	func_727(uParam0, 1);
	func_723(uParam0, 1);
	func_720(uParam0, 1);
}

void func_893(var uParam0)
{
	bVar0 = true;
	if (!func_898(&(uParam0->f_1497)))
	{
		bVar0 = false;
	}
	if (!func_894(uParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_698(&(uParam0->f_1497.f_724), 2);
	}
}

int func_894(var uParam0)
{
	uParam0->f_1497.f_736.f_85 = func_895(uParam0);
	if (uParam0->f_4356 != unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	switch (uParam0->f_1497.f_736.f_85)
	{
		case 1:
			uParam0->f_1497.f_736.f_92[0] = 100;
			uParam0->f_1497.f_736.f_92[1] = 0;
			uParam0->f_1497.f_736.f_92[2] = 0;
			uParam0->f_1497.f_736.f_92[3] = 0;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
		
		case 2:
			uParam0->f_1497.f_736.f_92[0] = 85;
			uParam0->f_1497.f_736.f_92[1] = 15;
			uParam0->f_1497.f_736.f_92[2] = 0;
			uParam0->f_1497.f_736.f_92[3] = 0;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
		
		case 3:
			uParam0->f_1497.f_736.f_92[0] = 70;
			uParam0->f_1497.f_736.f_92[1] = 15;
			uParam0->f_1497.f_736.f_92[2] = 15;
			uParam0->f_1497.f_736.f_92[3] = 0;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
		
		case 4:
			uParam0->f_1497.f_736.f_92[0] = 55;
			uParam0->f_1497.f_736.f_92[1] = 15;
			uParam0->f_1497.f_736.f_92[2] = 15;
			uParam0->f_1497.f_736.f_92[3] = 15;
			uParam0->f_1497.f_736.f_92[4] = 0;
			break;
	}
	return 1;
}

int func_895(var uParam0)
{
	if (!unk_0xA14BB9332558B949())
	{
		uParam0->f_1497.f_736.f_87[0] = uParam0->f_4356;
		uParam0->f_1497.f_736.f_87[1] = -1;
		uParam0->f_1497.f_736.f_87[2] = -1;
		uParam0->f_1497.f_736.f_87[3] = -1;
		return 1;
	}
	iVar0 = func_42();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_1497.f_736.f_87[iVar1] = -1;
		iVar1++;
	}
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (func_203(iVar0, 1, 1))
		{
			if (iVar0 != func_42())
			{
				if (!func_896(iVar0))
				{
					if (iVar2 > 3)
					{
					}
					else
					{
						uParam0->f_1497.f_736.f_87[iVar2] = iVar0;
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar2;
}

int func_896(int iParam0)
{
	if (func_85(iParam0, 0) || func_897(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_897(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_99.f_32, 5);
}

int func_898(var uParam0)
{
	if (!unk_0x83D8570832F172A7(uParam0->f_709))
	{
		return 0;
	}
	if (!unk_0x83D8570832F172A7(uParam0->f_710))
	{
		return 0;
	}
	return 1;
}

void func_899(var uParam0)
{
	func_901(&(uParam0->f_1497));
	func_900(uParam0);
}

void func_900(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1497.f_736.f_36[iVar0] = func_42();
		iVar0++;
	}
}

void func_901(var uParam0)
{
	uParam0->f_709 = unk_0xB01F55A0FD1CFD49("CASINO_HEIST_BOARD_FINALE");
	uParam0->f_710 = unk_0xB01F55A0FD1CFD49("INSTRUCTIONAL_BUTTONS");
}

void func_902(var uParam0)
{
	unk_0x0674E58A79778E99(&(uParam0->f_4), uParam0->f_1);
}

void func_903(var uParam0)
{
	func_693(&(uParam0->f_2593), 99, 1);
	func_190(&(uParam0->f_1497), 1);
}

bool func_904(var uParam0)
{
	return !unk_0xEAE0D21A50E6C7F4(uParam0->f_4, uParam0->f_1);
}

void func_905(var uParam0)
{
	unk_0x5D96D8530B3D0904(&(uParam0->f_3), *uParam0);
}

void func_906(var uParam0)
{
}

bool func_907(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_3, *uParam0);
}

void func_908(var uParam0)
{
	if (!func_910(uParam0) && !func_909())
	{
		func_698(&(uParam0->f_1497.f_724), 2);
	}
}

int func_909()
{
	if (!unk_0x8CD06866876216F2())
	{
		return 1;
	}
	if (func_497() && func_211() == 1)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 10))
	{
		return 1;
	}
	return 0;
}

int func_910(var uParam0)
{
	if (func_17(uParam0, 0))
	{
		return 1;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && func_203(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if ((!func_15() && !func_497()) && !func_496())
		{
			if (!func_913(554788825))
			{
				return 1;
			}
		}
	}
	if (func_912() == 1 && unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("appArcadeBusinessHub")) > 0)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 2))
	{
		return 1;
	}
	if (func_911())
	{
		return 1;
	}
	return 0;
}

bool func_911()
{
	return Global_2450632.f_596;
}

int func_912()
{
	return Global_2460709;
}

bool func_913(int iParam0)
{
	return Global_98796.f_344 == iParam0;
}

void func_914(var uParam0)
{
	func_915(uParam0);
}

void func_915(var uParam0)
{
	switch (uParam0->f_744.f_724)
	{
		case 0:
			func_1090(uParam0);
			break;
		
		case 1:
			if (!func_907(&(uParam0->f_744.f_724)))
			{
				func_1089(uParam0);
				func_905(&(uParam0->f_744.f_724));
			}
			func_1088(uParam0);
			if (!func_904(&(uParam0->f_744.f_724)))
			{
				func_1087(uParam0);
				func_902(&(uParam0->f_744.f_724));
			}
			break;
		
		case 2:
			if (!func_907(&(uParam0->f_744.f_724)))
			{
				func_1085(uParam0);
				func_905(&(uParam0->f_744.f_724));
			}
			func_1083(uParam0);
			if (!func_904(&(uParam0->f_744.f_724)))
			{
				func_1082(uParam0);
				func_902(&(uParam0->f_744.f_724));
			}
			break;
		
		case 3:
			if (!func_907(&(uParam0->f_744.f_724)))
			{
				func_1081(uParam0);
				func_905(&(uParam0->f_744.f_724));
			}
			func_1080(uParam0);
			if (!func_904(&(uParam0->f_744.f_724)))
			{
				func_1079(uParam0);
				func_902(&(uParam0->f_744.f_724));
			}
			break;
		
		case 4:
			if (!func_907(&(uParam0->f_744.f_724)))
			{
				func_1078(uParam0);
				func_905(&(uParam0->f_744.f_724));
			}
			func_919(uParam0);
			if (!func_904(&(uParam0->f_744.f_724)))
			{
				func_918(uParam0);
				func_902(&(uParam0->f_744.f_724));
			}
			break;
		
		case 5:
			if (!func_907(&(uParam0->f_744.f_724)))
			{
				func_917(uParam0);
				func_905(&(uParam0->f_744.f_724));
			}
			func_916(uParam0);
			break;
	}
}

void func_916(var uParam0)
{
}

void func_917(var uParam0)
{
	func_676();
	func_675(&(uParam0->f_744));
}

void func_918(var uParam0)
{
	if (!func_17(uParam0, 1))
	{
		func_693(&(uParam0->f_2593), 0, 0);
		uParam0->f_744.f_703 = 0;
	}
}

void func_919(var uParam0)
{
	func_883();
	func_1074(uParam0);
	func_1015(uParam0);
	func_1012(uParam0);
	func_976(uParam0);
	func_936(uParam0);
	func_921(uParam0);
	func_706(uParam0);
	func_705();
	func_704(uParam0, 1);
	if (!uParam0->f_744.f_724.f_5)
	{
		if (!func_17(uParam0, 1))
		{
			if (uParam0->f_4360 && !func_202(unk_0xD803B885F5E47A62()))
			{
				func_462(unk_0xD803B885F5E47A62(), 1, 0, 0);
				unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
				uParam0->f_4360 = 0;
			}
			func_920(uParam0);
		}
		func_509(-1713398555, 12, 0);
		func_695(&(uParam0->f_744.f_724), 1);
	}
}

void func_920(var uParam0)
{
	func_691(&(uParam0->f_2529.f_1), 0, 1);
	unk_0x5413873D3F67BF93(false, 0);
}

void func_921(var uParam0)
{
	iVar0 = uParam0->f_2593;
	if (uParam0->f_4355 != 1 || uParam0->f_4356 != unk_0xD803B885F5E47A62())
	{
		func_935();
		return;
	}
	if ((((func_17(uParam0, 1) || uParam0->f_2529.f_62) || uParam0->f_2604) || uParam0->f_744.f_748 != -1) || uParam0->f_744.f_750)
	{
		return;
	}
	if (func_934(uParam0, iVar0) && !func_933(uParam0))
	{
		func_226("CH_HELP_CREW");
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_4357, 9) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_4357, 10))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			func_10("CSH_LAUNCHF_2", -1);
			unk_0x0674E58A79778E99(&(uParam0->f_4357), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_4357), 10);
		}
		return;
	}
	if (!func_19(uParam0, 7) && !func_18(uParam0, 7))
	{
		if (func_923(uParam0->f_4356))
		{
			func_189(uParam0, 7);
		}
	}
	if (!func_19(uParam0, 8) && !func_18(uParam0, 8))
	{
		if (func_483(uParam0->f_4356))
		{
			func_189(uParam0, 8);
		}
	}
	switch (iVar0)
	{
		case 18:
			if (func_922(uParam0->f_4356) == 0)
			{
				func_226("CH_HELP_MASKS");
			}
			break;
		
		case 2:
			if (func_934(uParam0, iVar0) && func_933(uParam0))
			{
				func_226("CH_HELP_SECI");
			}
			break;
		
		default:
			func_935();
			break;
	}
}

int func_922(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_16;
	}
	return 0;
}

int func_923(int iParam0)
{
	if ((((((((func_493(iParam0) || func_492(iParam0)) || func_491(iParam0)) || func_489(iParam0)) || func_932(iParam0)) || func_931(iParam0)) || func_930(iParam0)) || func_929(iParam0)) || func_928(iParam0) != 0)
	{
		return 1;
	}
	switch (func_113(iParam0))
	{
		case 1:
			if (((func_488(iParam0) || func_487(iParam0)) || func_927(iParam0)) || func_926(iParam0))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((func_172(iParam0) || func_486(iParam0)) || func_759(iParam0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (((func_485(iParam0) || func_484(iParam0)) || func_925(iParam0)) || func_924(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_924(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 19);
	}
	return 0;
}

int func_925(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 20);
	}
	return 0;
}

int func_926(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 5);
	}
	return 0;
}

int func_927(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 3);
	}
	return 0;
}

int func_928(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1700796[iParam0].f_18.f_15;
	}
	return 0;
}

int func_929(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 1);
	}
	return 0;
}

int func_930(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 4);
	}
	return 0;
}

int func_931(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 2);
	}
	return 0;
}

int func_932(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18, 0);
	}
	return 0;
}

int func_933(var uParam0)
{
	if ((func_164(uParam0->f_4356, 0) == 0 || func_153(uParam0->f_4356, 0) == 0) || func_490(uParam0->f_4356, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_934(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 13:
		case 15:
		case 16:
		case 17:
		case 9:
		case 8:
		case 4:
		case 3:
			if (!func_933(uParam0))
			{
				return 1;
			}
			break;
		
		case 14:
			if (!func_933(uParam0))
			{
				return 1;
			}
			switch (func_113(uParam0->f_4356))
			{
				case 2:
					switch (uParam0->f_744.f_744)
					{
						case 1:
							if (!func_179(uParam0->f_4356, 1))
							{
								return 1;
							}
							break;
						
						case 2:
							if (!func_179(uParam0->f_4356, 2))
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
		
		case 2:
			if (!func_180(uParam0->f_4356))
			{
				return 1;
			}
			if (!func_933(uParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_935()
{
	if ((func_227("CH_HELP_MASKS") || func_227("CH_HELP_CREW")) || func_227("CH_HELP_SECI"))
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_936(var uParam0)
{
	iVar0 = func_849(&(uParam0->f_2604));
	iVar1 = uParam0->f_2593;
	if (((((func_17(uParam0, 1) || uParam0->f_2604) || uParam0->f_744.f_748 != -1) || uParam0->f_744.f_750) || uParam0->f_744.f_708) || (func_16(uParam0) && iVar0 != 5))
	{
		return;
	}
	if (func_882(&(uParam0->f_744.f_751)))
	{
		if (func_502(&(uParam0->f_744.f_751), 1000, 0))
		{
			func_501(&(uParam0->f_744.f_751));
		}
		if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3)
		{
			return;
		}
	}
	switch (uParam0->f_744.f_724.f_2)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					func_975(uParam0, iVar0);
					func_196(uParam0, 1);
					func_845(uParam0);
					break;
				
				case 9:
					if (func_482(uParam0, 0))
					{
						func_842(uParam0, 0);
					}
					break;
				
				case 10:
					if (func_482(uParam0, 2))
					{
						func_842(uParam0, 2);
					}
					break;
				
				case 7:
					if (func_974(iVar1) && !func_973(uParam0, iVar1))
					{
						func_972(uParam0, iVar1);
					}
					if (func_971(uParam0, iVar1) && (func_970(uParam0, iVar1) || func_969(uParam0, iVar1)))
					{
						func_972(uParam0, iVar1);
					}
					if ((func_968(uParam0, iVar1) && func_970(uParam0, iVar1)) && unk_0xD803B885F5E47A62() == uParam0->f_4356)
					{
						func_962(uParam0, iVar1, 0);
					}
					break;
				
				case 8:
					func_201(uParam0, 0);
					break;
				
				case 5:
					if (func_971(uParam0, iVar1) || func_968(uParam0, iVar1))
					{
						if (!unk_0xEA6BC48857E0AC4C(func_181(uParam0, 1, iVar1)))
						{
							func_828(uParam0, 0);
						}
					}
					else if (func_974(iVar1))
					{
						if (!unk_0xEA6BC48857E0AC4C(func_166(uParam0, iVar1)))
						{
							func_828(uParam0, 0);
						}
					}
					else if (iVar1 == 18)
					{
						func_828(uParam0, 0);
					}
					break;
				
				case 4:
					if ((func_968(uParam0, iVar1) || func_971(uParam0, iVar1)) && unk_0xD803B885F5E47A62() == uParam0->f_4356)
					{
						if (func_957(uParam0, iVar1) && func_956(uParam0, iVar1))
						{
							uParam0->f_744.f_748 = 12;
							unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						}
					}
					bVar2 = true;
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 2:
				case 3:
					if (func_974(iVar1) || func_971(uParam0, iVar1))
					{
						func_941(uParam0, iVar1, iVar0);
					}
					func_845(uParam0);
					break;
				
				case 7:
					if (((func_974(iVar1) && !func_973(uParam0, iVar1)) && func_162(uParam0, iVar1)) && unk_0xD803B885F5E47A62() == uParam0->f_4356)
					{
						uParam0->f_744.f_748 = func_940(iVar1);
						unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					}
					if ((func_971(uParam0, iVar1) && func_970(uParam0, iVar1)) && unk_0xD803B885F5E47A62() == uParam0->f_4356)
					{
						if (func_939(iVar1))
						{
							func_962(uParam0, iVar1, 0);
						}
						else
						{
							uParam0->f_744.f_748 = func_940(iVar1);
							unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						}
					}
					break;
				
				case 8:
					func_938(uParam0, iVar1, 0);
					break;
				
				case 5:
					if (func_971(uParam0, iVar1) || func_974(iVar1))
					{
						func_828(uParam0, 0);
					}
					break;
				
				case 4:
					if ((func_968(uParam0, iVar1) || func_971(uParam0, iVar1)) && unk_0xD803B885F5E47A62() == uParam0->f_4356)
					{
						if (func_957(uParam0, iVar1) && func_956(uParam0, iVar1))
						{
							uParam0->f_744.f_748 = 12;
							unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						}
					}
					bVar2 = true;
					break;
			}
			break;
	}
	if (bVar2)
	{
		func_937(&(uParam0->f_744.f_751), 0, 0);
	}
}

void func_937(var uParam0, bool bParam1, bool bParam2)
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

void func_938(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_744.f_724.f_2 == 0)
	{
		return;
	}
	uParam0->f_744.f_724.f_2 = 0;
	uParam0->f_744.f_706 = 1;
	if (bParam2)
	{
		func_748(uParam0->f_744.f_709, iParam1, 2);
		unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
	}
	else
	{
		func_748(uParam0->f_744.f_709, iParam1, 0);
		unk_0x4D7F4CC43D4D0DE3(-1, "Back", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	func_190(&(uParam0->f_744), 1);
	if (uParam0->f_2529.f_33 != 1)
	{
		uParam0->f_2529.f_33 = 1;
	}
}

int func_939(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

int func_940(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 12:
			return 2;
		
		case 5:
			return 7;
		
		case 6:
			return 8;
		
		case 13:
			return 13;
		
		default:
	}
	return -1;
}

void func_941(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 10:
			switch (iParam2)
			{
				case 2:
					if (func_955(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_954(uParam0, 1);
						func_190(&(uParam0->f_744), 1);
					}
					break;
				
				case 3:
					if (func_955(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_954(uParam0, 1);
						func_190(&(uParam0->f_744), 1);
					}
					break;
			}
			break;
		
		case 11:
			switch (iParam2)
			{
				case 2:
					if (func_953(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_952(uParam0, 1);
						func_190(&(uParam0->f_744), 1);
					}
					break;
				
				case 3:
					if (func_953(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_952(uParam0, 1);
						func_190(&(uParam0->f_744), 1);
					}
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 2:
					if (func_951(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_950(uParam0, 1);
						func_190(&(uParam0->f_744), 1);
					}
					break;
				
				case 3:
					if (func_951(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_950(uParam0, 1);
						func_190(&(uParam0->f_744), 1);
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam2)
			{
				case 2:
					uParam0->f_744.f_739 = (uParam0->f_744.f_739 - 1);
					if (uParam0->f_744.f_739 < 0)
					{
						uParam0->f_744.f_739 = 1;
					}
					unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					func_949(uParam0, 1);
					break;
				
				case 3:
					uParam0->f_744.f_739++;
					if (uParam0->f_744.f_739 > 1)
					{
						uParam0->f_744.f_739 = 0;
					}
					unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					func_949(uParam0, 1);
					break;
			}
			break;
		
		case 6:
			switch (iParam2)
			{
				case 2:
					uParam0->f_744.f_741 = (uParam0->f_744.f_741 - 1);
					if (uParam0->f_744.f_741 < 0)
					{
						uParam0->f_744.f_741 = 3;
					}
					unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					func_948(uParam0, 1);
					break;
				
				case 3:
					uParam0->f_744.f_741++;
					if (uParam0->f_744.f_741 > 3)
					{
						uParam0->f_744.f_741 = 0;
					}
					unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					func_948(uParam0, 1);
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 2:
					uParam0->f_744.f_742 = (uParam0->f_744.f_742 - 1);
					if (uParam0->f_744.f_742 < 1)
					{
						uParam0->f_744.f_742 = 2;
					}
					unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					func_947(uParam0, 1);
					func_946(uParam0, 1);
					break;
				
				case 3:
					uParam0->f_744.f_742++;
					if (uParam0->f_744.f_742 > 2)
					{
						uParam0->f_744.f_742 = 1;
					}
					unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
					func_947(uParam0, 1);
					func_946(uParam0, 1);
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 2:
					if (func_945(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_944(uParam0, 1, 0);
						func_190(&(uParam0->f_744), 1);
						if (func_170(uParam0->f_4356, uParam0->f_744.f_744))
						{
							func_189(uParam0, 10);
						}
					}
					break;
				
				case 3:
					if (func_945(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_944(uParam0, 1, 0);
						func_190(&(uParam0->f_744), 1);
						if (func_170(uParam0->f_4356, uParam0->f_744.f_744))
						{
							func_189(uParam0, 10);
						}
					}
					break;
			}
			break;
		
		case 17:
			switch (iParam2)
			{
				case 2:
					if (func_942(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_944(uParam0, 1, 3);
						func_190(&(uParam0->f_744), 1);
						func_946(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_942(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_944(uParam0, 1, 3);
						func_190(&(uParam0->f_744), 1);
						func_946(uParam0, 1);
					}
					break;
			}
			break;
	}
}

int func_942(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_744.f_745++;
			if (uParam0->f_744.f_745 > 7)
			{
				uParam0->f_744.f_745 = 6;
			}
		}
		else
		{
			uParam0->f_744.f_745 = (uParam0->f_744.f_745 - 1);
			if (uParam0->f_744.f_745 == 5)
			{
				uParam0->f_744.f_745 = 7;
			}
		}
		if (func_943(uParam0))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

int func_943(var uParam0)
{
	switch (uParam0->f_744.f_744)
	{
		case 3:
			if (!func_179(uParam0->f_4356, 9))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_944(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 7);
		uParam0->f_744.f_747 = iParam2;
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 7);
		uParam0->f_744.f_747 = -1;
	}
}

int func_945(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_744.f_744++;
			if (uParam0->f_744.f_744 > 3)
			{
				uParam0->f_744.f_744 = 1;
			}
		}
		else
		{
			uParam0->f_744.f_744 = (uParam0->f_744.f_744 - 1);
			if (uParam0->f_744.f_744 == 0)
			{
				uParam0->f_744.f_744 = 3;
			}
		}
		if (func_943(uParam0))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

void func_946(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 15);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 15);
	}
}

void func_947(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 11);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 11);
	}
}

void func_948(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 10);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 10);
	}
}

void func_949(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 9);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 9);
	}
}

void func_950(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 5);
	}
}

int func_951(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_744.f_743++;
			if (uParam0->f_744.f_743 > 5)
			{
				uParam0->f_744.f_743 = 1;
			}
		}
		else
		{
			uParam0->f_744.f_743 = (uParam0->f_744.f_743 - 1);
			if (uParam0->f_744.f_743 == 0)
			{
				uParam0->f_744.f_743 = 5;
			}
		}
		bVar0 = true;
		return 1;
	}
	return 0;
}

void func_952(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 4);
	}
}

int func_953(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_744.f_740++;
			if (uParam0->f_744.f_740 > 5)
			{
				uParam0->f_744.f_740 = 1;
			}
		}
		else
		{
			uParam0->f_744.f_740 = (uParam0->f_744.f_740 - 1);
			if (uParam0->f_744.f_740 == 0)
			{
				uParam0->f_744.f_740 = 5;
			}
		}
		bVar0 = true;
		return 1;
	}
	return 0;
}

void func_954(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 3);
	}
}

int func_955(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_744.f_738++;
			if (uParam0->f_744.f_738 > 5)
			{
				uParam0->f_744.f_738 = 1;
			}
		}
		else
		{
			uParam0->f_744.f_738 = (uParam0->f_744.f_738 - 1);
			if (uParam0->f_744.f_738 == 0)
			{
				uParam0->f_744.f_738 = 5;
			}
		}
		bVar0 = true;
		return 1;
	}
	return 0;
}

bool func_956(var uParam0, int iParam1)
{
	return unk_0x7A7BDE279347E517(func_529(), false, true, 0, -1, 0);
}

int func_957(var uParam0, int iParam1)
{
	if ((!func_961(uParam0, iParam1) || func_934(uParam0, iParam1)) || func_958(uParam0, iParam1, 0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 3:
		case 8:
		case 13:
			return 1;
		
		case 16:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 1;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

int func_958(var uParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 2:
			if (bParam2)
			{
				return func_932(uParam0->f_4356);
			}
			return func_960(uParam0->f_4356);
		
		case 3:
			return func_929(uParam0->f_4356);
		
		case 4:
			return func_931(uParam0->f_4356);
		
		case 5:
			return func_492(uParam0->f_4356);
		
		case 6:
			return func_491(uParam0->f_4356);
		
		case 7:
			return func_489(uParam0->f_4356);
		
		case 9:
			return func_493(uParam0->f_4356);
		
		case 8:
			return func_930(uParam0->f_4356);
		
		case 13:
			return func_928(uParam0->f_4356) != 0;
		
		case 14:
			return func_959(uParam0, func_113(uParam0->f_4356), 0);
		
		case 15:
			return func_959(uParam0, func_113(uParam0->f_4356), 1);
		
		case 16:
			return func_959(uParam0, func_113(uParam0->f_4356), 2);
		
		case 17:
			return func_959(uParam0, func_113(uParam0->f_4356), 3);
		
		default:
	}
	return 0;
}

int func_959(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					return func_488(uParam0->f_4356);
				
				case 1:
					return func_487(uParam0->f_4356);
				
				case 2:
					return func_926(uParam0->f_4356);
				
				case 3:
					return func_927(uParam0->f_4356);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					return func_173(uParam0->f_4356, uParam0->f_744.f_744);
				
				case 1:
					return func_486(uParam0->f_4356);
				
				case 2:
					return func_173(uParam0->f_4356, 4);
				
				case 3:
					return func_173(uParam0->f_4356, uParam0->f_744.f_745);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					return func_484(uParam0->f_4356);
				
				case 1:
					return func_485(uParam0->f_4356);
				
				case 2:
					return func_925(uParam0->f_4356);
				
				case 3:
					return func_924(uParam0->f_4356);
				
				default:
			}
			break;
	}
	return 0;
}

int func_960(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 22);
	}
	return 0;
}

int func_961(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			if (func_164(uParam0->f_4356, 0) == 0)
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_153(uParam0->f_4356, 0) == 0)
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_490(uParam0->f_4356, 0) == 0)
			{
				return 0;
			}
			break;
		
		case 16:
			switch (func_770(uParam0))
			{
				case 2:
					if (!unk_0xEAE0D21A50E6C7F4(Global_1700796[uParam0->f_4356].f_42, 6))
					{
						return 0;
					}
					break;
			}
			break;
		
		case 17:
			switch (func_770(uParam0))
			{
				case 3:
					if (!func_179(uParam0->f_4356, 10))
					{
						return 0;
					}
					break;
			}
			break;
	}
	return 1;
}

void func_962(var uParam0, int iParam1, bool bParam2)
{
	if (func_459(bParam2))
	{
		iVar0 = func_967(uParam0, iParam1);
		iVar1 = func_966(uParam0, iVar0);
		iVar2 = func_965(uParam0, iVar0);
		func_964(iVar0, iVar1, iVar2);
		func_442();
		func_441(uParam0, 2);
		func_845(uParam0);
		Global_1700796[unk_0x6E61BE9E61434AC1()].f_67 = 1;
		if (iParam1 == 14 && func_113(uParam0->f_4356) == 2)
		{
			Global_1700796[uParam0->f_4356].f_64 = uParam0->f_744.f_744;
		}
		unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
	}
	else
	{
		switch (func_277(unk_0xD803B885F5E47A62(), 158, 0))
		{
			case 15:
				if (func_275(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G1", -1);
				}
				else if (func_274(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G2", -1);
				}
				else
				{
					func_10("GENERAL_MLF_G3", -1);
				}
				break;
			
			case 16:
				if (func_275(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G4", -1);
				}
				else if (func_274(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G5", -1);
				}
				else
				{
					func_10("GENERAL_MLF_G6", -1);
				}
				break;
			
			default:
				if (func_963(func_967(uParam0, iParam1)))
				{
					func_10("CSH_LAUNCHF_0", -1);
				}
				else
				{
					func_10("CSH_LAUNCHF_1", -1);
				}
				if (func_957(uParam0, iParam1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_4357), 9);
				}
				break;
			}
	}
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 13:
		case 7:
		case 3:
		case 30:
		case 5:
		case 24:
		case 4:
		case 22:
		case 6:
		case 27:
		case 28:
			return 1;
		
		default:
	}
	return 0;
}

void func_964(int iParam0, int iParam1, int iParam2)
{
	func_445(-1, iParam0, iParam1, iParam2);
}

int func_965(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return uParam0->f_744.f_739;
		
		case 2:
			return uParam0->f_744.f_741;
		
		default:
	}
	return -1;
}

int func_966(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return uParam0->f_744.f_738;
		
		case 2:
			return uParam0->f_744.f_740;
		
		case 3:
			return uParam0->f_744.f_743;
		
		default:
	}
	return -1;
}

int func_967(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return 17;
		
		case 3:
			return 18;
		
		case 4:
			return 16;
		
		case 5:
			return 1;
		
		case 6:
			return 2;
		
		case 7:
			return 3;
		
		case 8:
			return 5;
		
		case 9:
			return 8;
		
		case 13:
			switch (uParam0->f_744.f_742)
			{
				case 1:
					return 9;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 14:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 11;
					break;
				
				case 2:
					switch (uParam0->f_744.f_744)
					{
						case 1:
							if (!func_170(uParam0->f_4356, 1))
							{
								return 23;
							}
							else
							{
								return 21;
							}
							break;
						
						case 2:
							if (!func_170(uParam0->f_4356, 2))
							{
								return 24;
							}
							else
							{
								return 25;
							}
							break;
						
						case 3:
							if (!func_170(uParam0->f_4356, 3))
							{
								return 26;
							}
							else
							{
								return 27;
							}
							break;
					}
					break;
				
				case 3:
					return 13;
					break;
			}
			break;
		
		case 15:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 4;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 7;
					break;
			}
			break;
		
		case 16:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 14;
					break;
				
				case 2:
					if (!func_170(uParam0->f_4356, 4))
					{
						return 32;
					}
					else
					{
						return 33;
					}
					break;
				
				case 3:
					return 30;
					break;
			}
			break;
		
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 22;
					break;
				
				case 2:
					switch (uParam0->f_744.f_745)
					{
						case 6:
							return 28;
						
						case 7:
							return 29;
						
						default:
					}
					break;
				
				case 3:
					return 15;
					break;
			}
			break;
	}
	return -1;
}

int func_968(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case 3:
		case 4:
		case 9:
		case 7:
		case 8:
		case 15:
		case 16:
			return 1;
		
		case 14:
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
				case 3:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

int func_969(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 14:
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 2:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

int func_970(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			if (func_164(uParam0->f_4356, 0) == 0)
			{
				return 0;
			}
			if (func_492(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_153(uParam0->f_4356, 0) == 0)
			{
				return 0;
			}
			if (func_491(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_490(uParam0->f_4356, 0) == 0)
			{
				return 0;
			}
			if (func_489(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_928(uParam0->f_4356) == 2)
			{
				return 0;
			}
			else if (func_961(uParam0, iParam1) && !func_934(uParam0, iParam1))
			{
				return 1;
			}
			break;
	}
	if ((!func_961(uParam0, iParam1) || func_934(uParam0, iParam1)) || func_958(uParam0, iParam1, 1))
	{
		return 0;
	}
	return 1;
}

int func_971(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
		case 6:
		case 13:
			return 1;
		
		case 14:
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 2:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_972(var uParam0, int iParam1)
{
	if (uParam0->f_744.f_724.f_2 == 1)
	{
		return;
	}
	uParam0->f_744.f_724.f_2 = 1;
	uParam0->f_744.f_706 = 1;
	func_748(uParam0->f_744.f_709, iParam1, 1);
	func_190(&(uParam0->f_744), 1);
	if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
	{
		func_191(uParam0, func_835(uParam0));
		if (func_974(iParam1))
		{
			func_189(uParam0, 4);
		}
		else if (func_113(uParam0->f_4356) == 2 && iParam1 == 14)
		{
			if (func_170(uParam0->f_4356, uParam0->f_744.f_744))
			{
				func_189(uParam0, 10);
			}
			else
			{
				func_189(uParam0, 9);
			}
		}
	}
	if (uParam0->f_2529.f_33 != func_834(uParam0))
	{
		uParam0->f_2529.f_33 = func_834(uParam0);
	}
	unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
}

int func_973(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_164(uParam0->f_4356, 0) != 0;
		
		case 11:
			return func_153(uParam0->f_4356, 0) != 0;
		
		case 12:
			return func_490(uParam0->f_4356, 0) != 0;
		
		default:
	}
	return 0;
}

int func_974(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

void func_975(var uParam0, int iParam1)
{
	uParam0->f_2593.f_1 = 0;
	switch (iParam1)
	{
		case 1:
			func_848(uParam0->f_744.f_709, 187);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 0:
			func_848(uParam0->f_744.f_709, 188);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 2:
			func_848(uParam0->f_744.f_709, 189);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 3:
			func_848(uParam0->f_744.f_709, 190);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
	}
}

void func_976(var uParam0)
{
	if (uParam0->f_744.f_748 == -1)
	{
		return;
	}
	if (uParam0->f_744.f_748 == 12)
	{
		func_191(uParam0, 75);
	}
	if (func_528(uParam0, uParam0->f_744.f_748, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_744.f_748)
			{
				case 0:
					func_1011(uParam0->f_744.f_738);
					func_949(uParam0, 1);
					func_1010(uParam0, 1);
					func_1009(uParam0, 1);
					func_1008(uParam0->f_744.f_709, 10, 1);
					func_938(uParam0, 10, 1);
					func_191(uParam0, func_1007(uParam0->f_744.f_738));
					func_1006(uParam0, 1);
					break;
				
				case 1:
					func_1005(uParam0->f_744.f_740);
					func_948(uParam0, 1);
					func_1010(uParam0, 1);
					func_1009(uParam0, 1);
					func_1008(uParam0->f_744.f_709, 11, 1);
					func_938(uParam0, 11, 1);
					func_191(uParam0, func_1004(uParam0->f_744.f_740));
					func_1006(uParam0, 1);
					break;
				
				case 2:
					func_1003(uParam0->f_744.f_743);
					func_1010(uParam0, 1);
					func_1009(uParam0, 1);
					func_1008(uParam0->f_744.f_709, 12, 1);
					func_938(uParam0, 12, 1);
					func_191(uParam0, func_1002(uParam0->f_744.f_743));
					func_1006(uParam0, 1);
					break;
				
				case 7:
					func_938(uParam0, 5, 1);
					func_962(uParam0, 5, 1);
					func_1006(uParam0, 1);
					break;
				
				case 8:
					func_938(uParam0, 6, 1);
					func_962(uParam0, 6, 1);
					func_1006(uParam0, 1);
					break;
				
				case 12:
					func_1001(uParam0, 1);
					func_1000(uParam0, 1);
					func_999(uParam0, 1);
					func_997();
					func_191(uParam0, 76);
					func_977(uParam0);
					func_1006(uParam0, 1);
					break;
				
				case 13:
					func_938(uParam0, 13, 1);
					func_962(uParam0, 13, 1);
					func_1006(uParam0, 1);
					break;
			}
			uParam0->f_744.f_748 = -1;
			uParam0->f_744.f_750 = 1;
		}
		else
		{
			uParam0->f_744.f_748 = -1;
			uParam0->f_744.f_750 = 1;
			uParam0->f_744.f_749 = 0;
		}
	}
}

void func_977(var uParam0)
{
	if (func_526())
	{
		func_514(-1295545795, func_529(), &iVar0, 0, 1, 0);
		Global_4263954[iVar0].f_9 = uParam0->f_2593;
	}
	else
	{
		unk_0x566FF9B925CB8BDA(uParam0->f_2593, func_529(), 0, 1);
	}
	unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
	func_995(1);
	func_978(uParam0);
	func_190(&(uParam0->f_744), 1);
}

void func_978(var uParam0)
{
	iVar0 = uParam0->f_2593;
	func_992(iVar0, func_113(uParam0->f_4356), func_994(uParam0, iVar0), 1);
	func_991(uParam0->f_744.f_709, iVar0, 1);
	func_990(uParam0->f_744.f_709, iVar0, 0, -1, -1);
	switch (iVar0)
	{
		case 3:
			func_989(1);
			break;
		
		case 8:
			func_988(1);
			break;
		
		case 13:
			func_987(2);
			func_986(uParam0->f_744.f_709, 2);
			break;
		
		case 16:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					func_985(1);
					break;
				
				case 3:
					func_984(1);
					break;
			}
			break;
		
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					func_983(1);
					break;
				
				case 2:
					switch (uParam0->f_744.f_745)
					{
						case 6:
							func_980(6, 1);
							break;
						
						case 7:
							func_980(7, 1);
							break;
					}
					bVar1 = false;
					break;
				
				case 3:
					func_979(1);
					break;
			}
			break;
	}
	if (bVar1)
	{
		func_748(uParam0->f_744.f_709, uParam0->f_2593, 2);
	}
}

void func_979(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 19);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 19);
		if (!unk_0xEAE0D21A50E6C7F4(func_9(8532, -1, 0), 9))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 21);
			unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 21);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 19);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 19);
		unk_0x0674E58A79778E99(&iVar0, 21);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 21);
	}
	func_6(8528, iVar0, -1, 1, 0);
}

void func_980(int iParam0, bool bParam1)
{
	iVar0 = func_9(8528, -1, 0);
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&iVar0, 8);
				unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 8);
			}
			else
			{
				unk_0x0674E58A79778E99(&iVar0, 8);
				unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 8);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&iVar0, 10);
				unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 10);
			}
			else
			{
				unk_0x0674E58A79778E99(&iVar0, 10);
				unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 10);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&iVar0, 12);
				unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 12);
			}
			else
			{
				unk_0x0674E58A79778E99(&iVar0, 12);
				unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 12);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&iVar0, 14);
				unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 14);
			}
			else
			{
				unk_0x0674E58A79778E99(&iVar0, 14);
				unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 14);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&iVar0, 16);
				unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 16);
			}
			else
			{
				unk_0x0674E58A79778E99(&iVar0, 16);
				unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 16);
			}
			func_981(28, 0, -1);
			break;
		
		case 7:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&iVar0, 17);
				unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 17);
			}
			else
			{
				unk_0x0674E58A79778E99(&iVar0, 17);
				unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 17);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&iVar0, 18);
				unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 18);
			}
			else
			{
				unk_0x0674E58A79778E99(&iVar0, 18);
				unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 18);
			}
			break;
	}
	func_6(8528, iVar0, -1, 1, 0);
}

void func_981(int iParam0, bool bParam1, int iParam2)
{
	if (!func_982(iParam0))
	{
		return;
	}
	iVar0 = func_9(8533, -1, 0);
	if (bParam1)
	{
		switch (iParam0)
		{
			case 5:
				unk_0x5D96D8530B3D0904(&iVar0, 0);
				break;
			
			case 8:
				unk_0x5D96D8530B3D0904(&iVar0, 1);
				break;
			
			case 1:
				unk_0x5D96D8530B3D0904(&iVar0, 5);
				break;
			
			case 11:
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				break;
			
			case 22:
				unk_0x5D96D8530B3D0904(&iVar0, 7);
				break;
			
			case 4:
				unk_0x5D96D8530B3D0904(&iVar0, 8);
				break;
			
			case 6:
				unk_0x5D96D8530B3D0904(&iVar0, 9);
				break;
			
			case 24:
				unk_0x5D96D8530B3D0904(&iVar0, 10);
				break;
			
			case 27:
				unk_0x5D96D8530B3D0904(&iVar0, 11);
				break;
			
			case 28:
				unk_0x5D96D8530B3D0904(&iVar0, 12);
				break;
			
			case 13:
				unk_0x5D96D8530B3D0904(&iVar0, 13);
				break;
			
			case 30:
				unk_0x5D96D8530B3D0904(&iVar0, 14);
				break;
			
			case 7:
				unk_0x5D96D8530B3D0904(&iVar0, 15);
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5:
				unk_0x0674E58A79778E99(&iVar0, 0);
				break;
			
			case 8:
				unk_0x0674E58A79778E99(&iVar0, 1);
				break;
			
			case 1:
				unk_0x0674E58A79778E99(&iVar0, 5);
				break;
			
			case 11:
				unk_0x0674E58A79778E99(&iVar0, 6);
				break;
			
			case 22:
				unk_0x0674E58A79778E99(&iVar0, 7);
				break;
			
			case 4:
				unk_0x0674E58A79778E99(&iVar0, 8);
				break;
			
			case 6:
				unk_0x0674E58A79778E99(&iVar0, 9);
				break;
			
			case 24:
				unk_0x0674E58A79778E99(&iVar0, 10);
				break;
			
			case 27:
				unk_0x0674E58A79778E99(&iVar0, 11);
				break;
			
			case 28:
				unk_0x0674E58A79778E99(&iVar0, 12);
				break;
			
			case 13:
				unk_0x0674E58A79778E99(&iVar0, 13);
				break;
			
			case 30:
				unk_0x0674E58A79778E99(&iVar0, 14);
				break;
			
			case 7:
				unk_0x0674E58A79778E99(&iVar0, 15);
				break;
			}
	}
	func_6(8533, iVar0, -1, 1, 0);
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 8:
		case 1:
		case 11:
		case 22:
		case 4:
		case 6:
		case 24:
		case 27:
		case 28:
		case 13:
		case 30:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

void func_983(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 3);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 3);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 3);
	}
	func_6(8528, iVar0, -1, 1, 0);
	func_981(22, 0, -1);
}

void func_984(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 20);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 20);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 20);
	}
	func_6(8528, iVar0, -1, 1, 0);
	func_981(30, 0, -1);
}

void func_985(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 5);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 5);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 5);
	}
	func_6(8528, iVar0, -1, 1, 0);
}

void func_986(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SECURITY_PASS_VISIBLE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_987(int iParam0)
{
	func_6(8522, iParam0, -1, 1, 0);
	Global_1700796[unk_0xD803B885F5E47A62()].f_18.f_15 = iParam0;
}

void func_988(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 4);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 4);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 4);
	}
	func_6(8528, iVar0, -1, 1, 0);
	func_981(5, 0, -1);
}

void func_989(bool bParam0)
{
	iVar0 = func_9(8528, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 1);
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 1);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 1);
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_18), 1);
	}
	func_6(8528, iVar0, -1, 1, 0);
}

void func_990(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_MISSION_COMPLETION");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x7E60D21B163E9D56();
}

void func_991(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_PURCHASED");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

void func_992(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_9(8802, -1, 0);
	iVar1 = func_993(iParam0, iParam1, iParam2);
	if (iVar1 != -1)
	{
		if (bParam3)
		{
			unk_0x5D96D8530B3D0904(&iVar0, iVar1);
			unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_44), iVar1);
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, iVar1);
			unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_44), iVar1);
		}
	}
	func_6(8802, iVar0, -1, 1, 0);
}

int func_993(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 3:
			return 0;
		
		case 8:
			return 1;
		
		case 13:
			return 2;
		
		case 16:
			switch (iParam1)
			{
				case 1:
					return 3;
				
				case 3:
					return 4;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					switch (iParam2)
					{
						case 6:
							return 6;
						
						case 7:
							return 7;
						
						default:
					}
					break;
				
				case 3:
					return 8;
			}
			break;
	}
	return -1;
}

int func_994(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			if (func_113(uParam0->f_4356) == 2)
			{
				return uParam0->f_744.f_745;
			}
			break;
	}
	return -1;
}

void func_995(bool bParam0)
{
	func_996(1, 8801);
	if (bParam0)
	{
		func_509(-1713398555, 8, 0);
	}
}

void func_996(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_9(iParam1, -1, 0);
	func_6(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_997()
{
	Global_19671 = 0;
	func_998();
}

void func_998()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_999(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 2);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 2);
	}
}

void func_1000(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 1);
	}
}

void func_1001(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 12);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 12);
	}
}

int func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 42;
		
		case 2:
			return 43;
		
		case 3:
			return 44;
		
		case 4:
			return 45;
		
		case 5:
			return 46;
		
		default:
	}
	return -1;
}

void func_1003(int iParam0)
{
	func_6(8521, iParam0, -1, 1, 0);
	Global_1700796[unk_0xD803B885F5E47A62()].f_18.f_14 = iParam0;
}

int func_1004(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 37;
		
		case 2:
			return 38;
		
		case 3:
			return 39;
		
		case 4:
			return 40;
		
		case 5:
			return 41;
		
		default:
	}
	return -1;
}

void func_1005(int iParam0)
{
	func_6(8520, iParam0, -1, 1, 0);
	Global_1700796[unk_0xD803B885F5E47A62()].f_18.f_12 = iParam0;
}

void func_1006(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 16);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 16);
	}
}

int func_1007(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 32;
		
		case 2:
			return 33;
		
		case 3:
			return 34;
		
		case 4:
			return 35;
		
		case 5:
			return 36;
		
		default:
	}
	return -1;
}

void func_1008(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_CREW_MEMBER_HIRED");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

void func_1009(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 8);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 8);
	}
}

void func_1010(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 13);
	}
}

void func_1011(int iParam0)
{
	func_6(8519, iParam0, -1, 1, 0);
	Global_1700796[unk_0xD803B885F5E47A62()].f_18.f_10 = iParam0;
}

void func_1012(var uParam0)
{
	if (uParam0->f_744.f_702)
	{
		if (unk_0x83D8570832F172A7(uParam0->f_744.f_709))
		{
			unk_0x5DD950F92F816F03(1);
			unk_0x3039591AD3E735CE(uParam0->f_744.f_700);
			switch (2)
			{
				case 0:
					break;
				
				case 1:
					unk_0x89F18617A4C543B3(uParam0->f_744.f_709, 1);
					break;
				
				case 2:
					unk_0xB32741071615AC2A(uParam0->f_744.f_709, 1);
					break;
			}
			unk_0xEF45C43067063F18(uParam0->f_744.f_709, 0,25f, 0,5f, 0,5f, 1f, 255, 255, 255, 255, 0);
			unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
			unk_0x5DD950F92F816F03(0);
			if (uParam0->f_744.f_705)
			{
			}
		}
	}
	else if (func_482(uParam0, 1))
	{
		uParam0->f_744.f_702 = 1;
	}
	if (uParam0->f_744.f_703)
	{
		func_1013(uParam0);
	}
}

void func_1013(var uParam0)
{
	Var0 = { func_869() };
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	bVar9 = uParam0->f_744.f_706;
	if (func_16(uParam0) || uParam0->f_744.f_737 > 0)
	{
		if (!uParam0->f_744.f_704)
		{
			bVar9 = true;
			uParam0->f_744.f_704 = 1;
		}
	}
	else if (uParam0->f_744.f_704)
	{
		bVar9 = true;
		uParam0->f_744.f_704 = 0;
	}
	if (!bVar9)
	{
		func_864(&(uParam0->f_744.f_710), &Var0, &(uParam0->f_744), 0);
		return;
	}
	if (!unk_0x0D71AFA59EF5104F() || unk_0xB3260A60545D3F11() == 10)
	{
		func_863(&(uParam0->f_744), 0,5f);
	}
	else
	{
		func_863(&(uParam0->f_744), 0,7f);
	}
	func_861(&(uParam0->f_744));
	iVar10 = uParam0->f_2593;
	if (uParam0->f_744.f_704)
	{
		if (func_968(uParam0, iVar10) || func_971(uParam0, iVar10))
		{
			if (!unk_0xEA6BC48857E0AC4C(func_181(uParam0, 1, iVar10)))
			{
				func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_744), 1, 361);
			}
		}
		else if (func_974(iVar10))
		{
			if (!unk_0xEA6BC48857E0AC4C(func_166(uParam0, iVar10)))
			{
				func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_744), 1, 361);
			}
		}
		if (func_708(&(uParam0->f_2529)))
		{
			if (unk_0x91E3F625EF57450D(2))
			{
				func_859(2, 39, "CH_INSTR_ZOOM", &(uParam0->f_744), 1, 361);
			}
			else
			{
				func_858(2, 15, "CH_INSTR_ZOOM", &(uParam0->f_744));
			}
		}
		func_858(2, 1, "HEIST_IB_LOOK", &(uParam0->f_744));
	}
	else
	{
		switch (uParam0->f_744.f_724.f_2)
		{
			case 0:
				if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
				{
					if (func_968(uParam0, iVar10))
					{
						if (iVar10 == 2)
						{
							if (!func_934(uParam0, iVar10))
							{
								if (!func_960(uParam0->f_4356))
								{
									func_859(2, 201, "CH_INSTR_LM", &(uParam0->f_744), 1, 361);
								}
								else if (!func_932(uParam0->f_4356))
								{
									func_859(2, 201, "CH_INSTR_RM", &(uParam0->f_744), 1, 361);
								}
							}
						}
						else if (func_970(uParam0, iVar10))
						{
							func_859(2, 201, "CH_INSTR_LM", &(uParam0->f_744), 1, 361);
						}
					}
					else if (func_971(uParam0, iVar10))
					{
						if (func_970(uParam0, iVar10) || func_969(uParam0, iVar10))
						{
							func_859(2, 201, "CH_INSTR_SEL", &(uParam0->f_744), 1, 361);
						}
					}
					else if (func_974(iVar10))
					{
						if (!func_973(uParam0, iVar10))
						{
							func_859(2, 201, "CH_INSTR_SEL", &(uParam0->f_744), 1, 361);
						}
					}
					else if (func_1014(iVar10))
					{
						func_859(2, 201, "CH_INSTR_SEL", &(uParam0->f_744), 1, 361);
					}
				}
				func_859(2, 202, "CH_INSTR_QUIT", &(uParam0->f_744), 1, 361);
				if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
				{
					if (func_968(uParam0, iVar10) || func_971(uParam0, iVar10))
					{
						if (func_957(uParam0, iVar10) && func_956(uParam0, iVar10))
						{
							func_859(2, 203, "CH_INSTR_SKIP", &(uParam0->f_744), 1, 361);
						}
					}
				}
				if (func_968(uParam0, iVar10) || func_971(uParam0, iVar10))
				{
					if (!unk_0xEA6BC48857E0AC4C(func_181(uParam0, 1, iVar10)))
					{
						func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_744), 1, 361);
					}
				}
				else if (func_974(iVar10))
				{
					if (!unk_0xEA6BC48857E0AC4C(func_166(uParam0, iVar10)))
					{
						func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_744), 1, 361);
					}
				}
				else if (iVar10 == 18)
				{
					func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_744), 1, 361);
				}
				if (func_482(uParam0, 2))
				{
					func_859(2, 206, "CH_INSTR_FIN", &(uParam0->f_744), 1, 361);
				}
				if (func_482(uParam0, 0))
				{
					func_859(2, 205, "CH_INSTR_SETUP", &(uParam0->f_744), 1, 361);
				}
				if (unk_0x91E3F625EF57450D(2))
				{
					func_859(2, 39, "CH_INSTR_ZOOM", &(uParam0->f_744), 1, 361);
				}
				else
				{
					func_858(2, 15, "CH_INSTR_ZOOM", &(uParam0->f_744));
				}
				func_858(2, 1, "HEIST_IB_LOOK", &(uParam0->f_744));
				func_858(2, 0, "HEIST_IB_NAV", &(uParam0->f_744));
				break;
			
			case 1:
				if (func_968(uParam0, iVar10) || func_971(uParam0, iVar10))
				{
					if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
					{
						if (func_970(uParam0, iVar10))
						{
							func_859(2, 201, "CH_INSTR_LM", &(uParam0->f_744), 1, 361);
						}
					}
				}
				else if ((func_974(iVar10) && !func_973(uParam0, iVar10)) && func_162(uParam0, iVar10))
				{
					func_859(2, 201, "CH_INSTR_SEL", &(uParam0->f_744), 1, 361);
				}
				func_859(2, 202, "CH_INSTR_CANC", &(uParam0->f_744), 1, 361);
				if (func_968(uParam0, iVar10) || func_971(uParam0, iVar10))
				{
					if (func_957(uParam0, iVar10) && func_956(uParam0, iVar10))
					{
						func_859(2, 203, "CH_INSTR_SKIP", &(uParam0->f_744), 1, 361);
					}
				}
				if (func_968(uParam0, iVar10) || func_971(uParam0, iVar10))
				{
					if (!unk_0xEA6BC48857E0AC4C(func_181(uParam0, 1, iVar10)))
					{
						func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_744), 1, 361);
					}
				}
				else if (func_974(iVar10))
				{
					if (!unk_0xEA6BC48857E0AC4C(func_166(uParam0, iVar10)))
					{
						func_859(2, 204, "CH_INSTR_INFO", &(uParam0->f_744), 1, 361);
					}
				}
				func_858(2, 1, "HEIST_IB_LOOK", &(uParam0->f_744));
				switch (iVar10)
				{
					case 10:
						func_858(2, 8, "CH_INSTR_CHGUN", &(uParam0->f_744));
						break;
					
					case 11:
						func_858(2, 8, "CH_INSTR_CHDRV", &(uParam0->f_744));
						break;
					
					case 12:
						func_858(2, 8, "CH_INSTR_CHHCK", &(uParam0->f_744));
						break;
					
					case 5:
						func_858(2, 8, "CH_INSTR_CHWEP", &(uParam0->f_744));
						break;
					
					case 6:
						func_858(2, 8, "CH_INSTR_CHVEH", &(uParam0->f_744));
						break;
					
					case 13:
						func_858(2, 8, "CH_INSTR_CHPAS", &(uParam0->f_744));
						break;
					
					case 14:
						if (func_113(uParam0->f_4356) == 2)
						{
							func_858(2, 8, "CH_INSTR_CHENT", &(uParam0->f_744));
						}
						break;
					
					case 17:
						if (func_113(uParam0->f_4356) == 2)
						{
							func_858(2, 8, "CH_INSTR_CHEXT", &(uParam0->f_744));
						}
						break;
				}
				break;
			}
	}
	func_864(&(uParam0->f_744.f_710), &Var0, &(uParam0->f_744), uParam0->f_744.f_706);
	func_190(&(uParam0->f_744), 0);
}

int func_1014(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

void func_1015(var uParam0)
{
	if (!func_482(uParam0, 1))
	{
		return;
	}
	sVar2 = "";
	sVar3 = "";
	bVar4 = true;
	if (func_1073(uParam0) || func_1072())
	{
		func_782(uParam0->f_744.f_709);
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (!unk_0xEA6BC48857E0AC4C(func_1071(uParam0, iVar0)))
			{
				func_779(uParam0->f_744.f_709, func_1071(uParam0, iVar0), func_1070(uParam0, iVar0));
			}
			iVar0++;
		}
		func_1000(uParam0, 0);
	}
	if (func_1069(uParam0) || func_1072())
	{
		func_776(uParam0->f_744.f_709);
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (!unk_0xEA6BC48857E0AC4C(func_1068(uParam0, iVar0)))
			{
				func_773(uParam0->f_744.f_709, func_1068(uParam0, iVar0), func_1067(uParam0, iVar0));
			}
			iVar0++;
		}
		func_999(uParam0, 0);
	}
	if (func_1066(uParam0) || func_1072())
	{
		iVar1 = 2;
		while (iVar1 <= 13)
		{
			if (func_1065(uParam0, iVar1) != -1)
			{
				func_1064(uParam0->f_744.f_709, iVar1, func_1065(uParam0, iVar1));
			}
			iVar1++;
		}
		func_1063(uParam0, 0);
	}
	if (func_1062(uParam0) || func_1072())
	{
		sVar2 = func_534(uParam0->f_744.f_738, 1);
		sVar3 = func_156(uParam0, 10);
		bVar4 = func_144(uParam0->f_4356, uParam0->f_744.f_738);
		if (!bVar4 && func_143(uParam0))
		{
			sVar2 = "CH_LIST_BLANK";
			sVar3 = "CH_LIST_BLANK";
		}
		func_1059(uParam0->f_744.f_709, 10, sVar2, sVar3, func_1061(uParam0), func_158(uParam0, 10), func_1060(uParam0));
		func_1008(uParam0->f_744.f_709, 10, func_164(uParam0->f_4356, 0) == uParam0->f_744.f_738);
		func_1058(uParam0->f_744.f_709, 10, !bVar4);
		func_954(uParam0, 0);
	}
	if (func_1057(uParam0) || func_1072())
	{
		sVar2 = func_533(uParam0->f_744.f_740, 1);
		sVar3 = func_156(uParam0, 11);
		bVar4 = func_163(uParam0->f_4356, uParam0->f_744.f_740);
		func_1059(uParam0->f_744.f_709, 11, sVar2, sVar3, func_1056(uParam0), func_158(uParam0, 11), -1);
		func_1008(uParam0->f_744.f_709, 11, func_153(uParam0->f_4356, 0) == uParam0->f_744.f_740);
		func_1058(uParam0->f_744.f_709, 11, !bVar4);
		func_952(uParam0, 0);
	}
	if (func_1055(uParam0) || func_1072())
	{
		sVar2 = func_532(uParam0->f_744.f_743, 1);
		sVar3 = func_156(uParam0, 12);
		bVar4 = func_138(uParam0->f_4356, uParam0->f_744.f_743);
		if (!bVar4 && func_137(uParam0))
		{
			sVar2 = "CH_LIST_BLANK";
			sVar3 = "CH_LIST_BLANK";
		}
		func_1059(uParam0->f_744.f_709, 12, sVar2, sVar3, func_1054(uParam0), func_158(uParam0, 12), -1);
		func_1008(uParam0->f_744.f_709, 12, func_490(uParam0->f_4356, 0) == uParam0->f_744.f_743);
		func_1058(uParam0->f_744.f_709, 12, !bVar4);
		func_950(uParam0, 0);
	}
	if (func_1053(uParam0) || func_1072())
	{
		iVar6 = 0;
		while (iVar6 < func_1052(func_770(uParam0)))
		{
			if (iVar6 == uParam0->f_744.f_747 || uParam0->f_744.f_747 == -1)
			{
				func_1046(uParam0->f_744.f_709, func_1051(iVar6), func_1050(uParam0, func_770(uParam0), iVar6), func_1049(uParam0, func_770(uParam0), iVar6), func_959(uParam0, func_770(uParam0), iVar6), func_1048(func_1051(iVar6)), func_1047(uParam0, func_1051(iVar6)));
				func_1058(uParam0->f_744.f_709, func_1051(iVar6), func_934(uParam0, func_1051(iVar6)));
			}
			iVar6++;
		}
		func_944(uParam0, 0, -1);
	}
	if (func_1045(uParam0) || func_1072())
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			func_702(uParam0->f_744.f_709, iVar1, func_961(uParam0, iVar1));
			if (func_1044(uParam0, iVar1) != -1)
			{
				func_748(uParam0->f_744.f_709, iVar1, func_1044(uParam0, iVar1));
			}
			func_990(uParam0->f_744.f_709, iVar1, func_1043(uParam0, iVar1), func_1042(uParam0, iVar1), func_1039(uParam0, iVar1));
			iVar1++;
		}
		if (iVar1 == 7 && func_490(uParam0->f_4356, 0) != 0)
		{
			func_703(uParam0->f_744.f_709, 7, 1);
		}
		if (func_113(uParam0->f_4356) == 2 && func_961(uParam0, 16))
		{
			func_1037(uParam0->f_744.f_709, 16, 1, func_1038(uParam0), 2);
		}
		func_1009(uParam0, 0);
	}
	if (func_1036(uParam0) || func_1035())
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			func_1058(uParam0->f_744.f_709, iVar1, func_934(uParam0, iVar1));
			iVar1++;
		}
		func_1010(uParam0, 0);
	}
	if (func_1034(uParam0) || func_1072())
	{
		func_1033(uParam0->f_744.f_709, func_133(func_770(uParam0), 1), func_120(func_121(uParam0->f_4356), 1));
		func_1032(uParam0, 0);
	}
	if (func_1031(uParam0) || func_1072())
	{
		func_1029(uParam0->f_744.f_709, 5, func_1030(uParam0), func_531(uParam0, 1));
		func_703(uParam0->f_744.f_709, 5, 1);
		func_702(uParam0->f_744.f_709, 5, 1);
		func_949(uParam0, 0);
	}
	if (func_1028(uParam0) || func_1072())
	{
		func_1029(uParam0->f_744.f_709, 6, func_1027(uParam0), func_530(uParam0, 1));
		func_703(uParam0->f_744.f_709, 6, 1);
		func_702(uParam0->f_744.f_709, 6, 1);
		func_948(uParam0, 0);
	}
	if (func_1026(uParam0) || func_1072())
	{
		func_1023(uParam0->f_744.f_709, func_1025(uParam0), func_1024(uParam0));
		func_986(uParam0->f_744.f_709, func_928(uParam0->f_4356));
		func_947(uParam0, 0);
	}
	if (func_1022(uParam0) || func_1072())
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (func_961(uParam0, iVar1) && func_1021(uParam0, iVar1))
			{
				func_755(uParam0->f_744.f_709, iVar1, func_958(uParam0, iVar1, 0));
			}
			iVar1++;
		}
		func_1001(uParam0, 0);
	}
	if (func_1020(uParam0) || func_1072())
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			bVar5 = func_1019(uParam0->f_4356, iVar1, func_113(uParam0->f_4356), func_994(uParam0, iVar1));
			func_991(uParam0->f_744.f_709, iVar1, bVar5);
			iVar1++;
		}
		func_946(uParam0, 0);
	}
	if (func_1018(uParam0))
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (func_1017(uParam0, iVar1))
			{
				func_700(uParam0->f_744.f_709, iVar1, 1);
			}
			else
			{
				func_700(uParam0->f_744.f_709, iVar1, 0);
			}
			iVar1++;
		}
		func_1006(uParam0, 0);
	}
	func_1016(0);
}

void func_1016(int iParam0)
{
	if (Global_1696429 && Global_1696431 != iParam0)
	{
		Global_1696431 = iParam0;
	}
}

int func_1017(var uParam0, int iParam1)
{
	if (func_968(uParam0, iParam1))
	{
		if (iParam1 == 2)
		{
			if (!func_960(uParam0->f_4356))
			{
				return 0;
			}
			else if (!func_932(uParam0->f_4356))
			{
				return 0;
			}
		}
		else if (func_970(uParam0, iParam1))
		{
			return 0;
		}
	}
	else if (func_971(uParam0, iParam1))
	{
		if (func_970(uParam0, iParam1) || func_969(uParam0, iParam1))
		{
			return 0;
		}
	}
	else if (func_974(iParam1))
	{
		if (!func_973(uParam0, iParam1))
		{
			return 0;
		}
	}
	else if (func_1014(iParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1018(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 16);
}

int func_1019(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 != -1)
	{
		iVar0 = func_993(iParam1, iParam2, iParam3);
		if (iVar0 != -1)
		{
			return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_44, iVar0);
		}
	}
	return 0;
}

bool func_1020(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 15);
}

int func_1021(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 8:
		case 14:
		case 15:
		case 17:
			return 1;
		
		case 16:
			if (func_113(uParam0->f_4356) == 2)
			{
				return 0;
			}
			return 1;
		
		default:
	}
	return 0;
}

bool func_1022(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 12);
}

void func_1023(int iParam0, char* sParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_INSIDE_MAN");
	func_83(sParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

int func_1024(var uParam0)
{
	switch (uParam0->f_744.f_742)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

char* func_1025(var uParam0)
{
	switch (uParam0->f_744.f_742)
	{
		case 1:
			return "CH_KEYACCESS_0";
		
		case 2:
			return "CH_KEYACCESS_1";
		
		default:
	}
	return "";
}

bool func_1026(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 11);
}

int func_1027(var uParam0)
{
	switch (uParam0->f_744.f_740)
	{
		case 1:
			switch (uParam0->f_744.f_741)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 4;
				
				default:
			}
			break;
		
		case 2:
			switch (uParam0->f_744.f_741)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				case 2:
					return 7;
				
				case 3:
					return 8;
				
				default:
			}
			break;
		
		case 3:
			switch (uParam0->f_744.f_741)
			{
				case 0:
					return 9;
				
				case 1:
					return 10;
				
				case 2:
					return 11;
				
				case 3:
					return 12;
				
				default:
			}
			break;
		
		case 4:
			switch (uParam0->f_744.f_741)
			{
				case 0:
					return 13;
				
				case 1:
					return 14;
				
				case 2:
					return 15;
				
				case 3:
					return 16;
				
				default:
			}
			break;
		
		case 5:
			switch (uParam0->f_744.f_741)
			{
				case 0:
					return 17;
				
				case 1:
					return 18;
				
				case 2:
					return 19;
				
				case 3:
					return 20;
				
				default:
			}
			break;
	}
	return -1;
}

bool func_1028(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 10);
}

void func_1029(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_MISSION");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	func_83(sParam3);
	unk_0x7E60D21B163E9D56();
}

int func_1030(var uParam0)
{
	switch (uParam0->f_744.f_738)
	{
		case 1:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 11;
						
						case 1:
							return 12;
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 21;
						
						case 1:
							return 22;
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 7;
						
						case 1:
							return 8;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 13;
						
						case 1:
							return 14;
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 23;
						
						case 1:
							return 24;
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						default:
					}
					break;
			}
			break;
		
		case 4:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 19;
						
						case 1:
							return 20;
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 29;
						
						case 1:
							return 30;
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 15;
						
						case 1:
							return 16;
						
						default:
					}
					break;
				
				case 2:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 25;
						
						case 1:
							return 26;
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_739)
					{
						case 0:
							return 5;
						
						case 1:
							return 6;
						
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_1031(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 9);
}

void func_1032(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 6);
	}
}

void func_1033(int iParam0, char* sParam1, char* sParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_HEADINGS");
	func_83(sParam1);
	func_83(sParam2);
	unk_0x7E60D21B163E9D56();
}

bool func_1034(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 6);
}

var func_1035()
{
	return Global_1696430;
}

bool func_1036(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 13);
}

void func_1037(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_POSTER_VISIBLE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x7E60D21B163E9D56();
}

int func_1038(var uParam0)
{
	if (func_173(uParam0->f_4356, 4))
	{
		return 2;
	}
	else if (func_170(uParam0->f_4356, 4))
	{
		return 1;
	}
	return 0;
}

int func_1039(var uParam0, int iParam1)
{
	iVar0 = func_967(uParam0, iParam1);
	uVar1 = func_1040(uParam0->f_4356, iVar0, 1);
	return uVar1;
}

int func_1040(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 != -1)
	{
		switch (iParam1)
		{
			case 5:
				iVar1 = 2;
				break;
			
			case 8:
				iVar1 = 2;
				break;
			
			case 2:
				switch (Global_1700796[iParam0].f_18.f_12)
				{
					case 4:
						iVar1 = 4;
						break;
					
					default:
						iVar1 = 2;
						break;
				}
				break;
			
			case 1:
				iVar1 = 2;
				break;
			
			case 11:
				iVar1 = 2;
				break;
			
			case 22:
				iVar1 = 2;
				break;
			
			case 4:
				iVar1 = 2;
				break;
			
			case 6:
				iVar1 = 2;
				break;
			
			case 24:
				iVar1 = 2;
				break;
			
			case 27:
				iVar1 = 2;
				break;
			
			case 28:
				iVar1 = 2;
				break;
			
			case 13:
				iVar1 = 2;
				break;
			
			case 30:
				iVar1 = 2;
				break;
			
			case 7:
				iVar1 = 2;
				break;
		}
		if (!bParam2)
		{
			if (func_1041(iParam0, iParam1))
			{
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

int func_1041(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		switch (iParam1)
		{
			case 5:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 0);
			
			case 8:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 1);
			
			case 1:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 5);
			
			case 11:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 6);
			
			case 22:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 7);
			
			case 4:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 8);
			
			case 6:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 9);
			
			case 24:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 10);
			
			case 27:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 11);
			
			case 28:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 12);
			
			case 13:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 13);
			
			case 30:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 14);
			
			case 7:
				return unk_0xEAE0D21A50E6C7F4(Global_1700796[iVar0].f_45, 15);
			}
		
		default:
	}
	return 0;
}

int func_1042(var uParam0, int iParam1)
{
	iVar0 = func_967(uParam0, iParam1);
	iVar1 = func_1040(uParam0->f_4356, iVar0, 1);
	iVar2 = func_1040(uParam0->f_4356, iVar0, 0);
	iVar3 = (iVar1 - iVar2);
	return iVar3;
}

int func_1043(var uParam0, int iParam1)
{
	iVar0 = func_967(uParam0, iParam1);
	if (!func_982(iVar0))
	{
		return 0;
	}
	if (!func_1041(uParam0->f_4356, iVar0))
	{
		return 0;
	}
	return 1;
}

int func_1044(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			if (func_492(uParam0->f_4356))
			{
				return 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_491(uParam0->f_4356))
			{
				return 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			return 2;
		
		case 10:
			if (func_164(uParam0->f_4356, 0) != 0)
			{
				return 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_153(uParam0->f_4356, 0) != 0)
			{
				return 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_490(uParam0->f_4356, 0) != 0)
			{
				return 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_928(uParam0->f_4356) == 2)
			{
				return 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			switch (func_113(uParam0->f_4356))
			{
				case 2:
					return 0;
				
				default:
			}
			break;
		
		case 15:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 2:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

bool func_1045(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 8);
}

void func_1046(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "ADD_APPROACH");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	func_83(sParam3);
	unk_0x1200CC973A2399C8(bParam4);
	unk_0x1200CC973A2399C8(bParam5);
	func_83(sParam6);
	unk_0x7E60D21B163E9D56();
}

char* func_1047(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 14:
			switch (func_113(uParam0->f_4356))
			{
				case 2:
					return "CH_PREP_OUTFITIN";
				
				default:
			}
			break;
		
		case 17:
			switch (func_113(uParam0->f_4356))
			{
				case 2:
					return "CH_PREP_OUTFITOUT";
				
				default:
			}
			break;
	}
	return "";
}

int func_1048(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
			return 1;
		
		default:
	}
	return 0;
}

char* func_1049(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					return "CH_MISS_ST_0";
				
				case 1:
					return "CH_MISS_ST_1";
				
				case 2:
					return "CH_MISS_ST_2";
				
				case 3:
					return "CH_MISS_ST_3";
				
				default:
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (uParam0->f_744.f_744)
					{
						case 1:
							return "CH_MISS_SU_0a";
						
						case 2:
							return "CH_MISS_SU_0b";
						
						case 3:
							return "CH_MISS_SU_0c";
						
						default:
					}
					break;
				
				case 1:
					return "CH_MISS_SU_1";
				
				case 2:
					return "CH_MISS_SU_2";
				
				case 3:
					switch (uParam0->f_744.f_745)
					{
						case 6:
							return "CH_MISS_SU_3a";
						
						case 7:
							return "CH_MISS_SU_3b";
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					if (func_178(uParam0->f_4356))
					{
						return "CH_MISS_DI_0b";
					}
					return "CH_MISS_DI_0";
				
				case 1:
					return "CH_MISS_DI_1";
				
				case 2:
					return "CH_MISS_DI_2";
				
				case 3:
					return "CH_MISS_DI_3";
				
				default:
			}
			break;
	}
	return "";
}

int func_1050(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					return 5;
				
				case 1:
					return 7;
				
				case 2:
					return 6;
				
				case 3:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (uParam0->f_744.f_744)
					{
						case 1:
							if (func_170(uParam0->f_4356, 1))
							{
								return 20;
							}
							return 19;
						
						case 2:
							if (func_170(uParam0->f_4356, 2))
							{
								return 24;
							}
							return 23;
						
						case 3:
							if (func_170(uParam0->f_4356, 3))
							{
								return 22;
							}
							return 21;
						
						default:
					}
					break;
				
				case 1:
					return 12;
				
				case 2:
					switch (uParam0->f_744.f_746)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (uParam0->f_744.f_745)
					{
						case 6:
							return 17;
						
						case 7:
							return 16;
						
						case 8:
							return 18;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1051(int iParam0)
{
	return (14 + iParam0);
}

int func_1052(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		case 3:
			return 4;
		
		default:
	}
	return 0;
}

bool func_1053(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 7);
}

int func_1054(var uParam0)
{
	if (func_137(uParam0))
	{
		return 6;
	}
	return uParam0->f_744.f_743;
}

bool func_1055(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 5);
}

int func_1056(var uParam0)
{
	return uParam0->f_744.f_740;
}

bool func_1057(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 4);
}

void func_1058(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_PADLOCK");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

void func_1059(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_CREW_MEMBER");
	unk_0x3CAEA85DA607305E(iParam1);
	func_83(sParam2);
	func_83(sParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x3CAEA85DA607305E(iParam5);
	unk_0x3CAEA85DA607305E(iParam6);
	unk_0x7E60D21B163E9D56();
}

int func_1060(var uParam0)
{
	switch (uParam0->f_744.f_738)
	{
		case 1:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 2;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 2:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 5;
				
				case 2:
					return 4;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 3:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 8;
				
				case 2:
					return 7;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 11;
				
				case 2:
					return 10;
				
				case 3:
					return 12;
				
				default:
			}
			break;
		
		case 5:
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					return 14;
				
				case 2:
					return 13;
				
				case 3:
					return 15;
				
				default:
			}
			break;
	}
	return 16;
}

int func_1061(var uParam0)
{
	if (func_143(uParam0))
	{
		return 6;
	}
	return uParam0->f_744.f_738;
}

bool func_1062(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 3);
}

void func_1063(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 14);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_744.f_736), 14);
	}
}

void func_1064(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_BUTTON_IMAGE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

int func_1065(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 7:
			return 1;
		
		case 9:
			return 4;
		
		case 8:
			return 5;
		
		default:
	}
	return -1;
}

bool func_1066(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 14);
}

int func_1067(var uParam0, int iParam1)
{
	switch (func_770(uParam0))
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return func_929(uParam0->f_4356);
				
				case 1:
					return func_931(uParam0->f_4356);
				
				case 2:
					return func_960(uParam0->f_4356);
				
				case 3:
					return func_930(uParam0->f_4356);
				
				case 4:
					return func_928(uParam0->f_4356) != 0;
				
				case 5:
					return func_922(uParam0->f_4356) != 0;
				
				case 6:
					return func_926(uParam0->f_4356);
				
				case 7:
					return func_927(uParam0->f_4356);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return func_929(uParam0->f_4356);
				
				case 1:
					return func_931(uParam0->f_4356);
				
				case 2:
					return func_960(uParam0->f_4356);
				
				case 3:
					return func_930(uParam0->f_4356);
				
				case 4:
					return func_928(uParam0->f_4356) != 0;
				
				case 5:
					return func_922(uParam0->f_4356) != 0;
				
				case 6:
					return func_759(uParam0->f_4356);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_929(uParam0->f_4356);
				
				case 1:
					return func_931(uParam0->f_4356);
				
				case 2:
					return func_960(uParam0->f_4356);
				
				case 3:
					return func_930(uParam0->f_4356);
				
				case 4:
					return func_928(uParam0->f_4356) != 0;
				
				case 5:
					return func_922(uParam0->f_4356) != 0;
				
				case 6:
					return func_925(uParam0->f_4356);
				
				case 7:
					return func_924(uParam0->f_4356);
				
				default:
			}
			break;
	}
	return 0;
}

char* func_1068(var uParam0, int iParam1)
{
	switch (func_770(uParam0))
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "CH_OPT_PREP_0";
				
				case 1:
					return "CH_OPT_PREP_1";
				
				case 2:
					return "CH_OPT_PREP_2";
				
				case 3:
					return "CH_OPT_PREP_3";
				
				case 4:
					return "CH_OPT_PREP_4";
				
				case 5:
					return "CH_OPT_PREP_5";
				
				case 6:
					return "CH_OPT_PREP_6";
				
				case 7:
					return "CH_OPT_PREP_7";
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "CH_OPT_PREP_0";
				
				case 1:
					return "CH_OPT_PREP_1";
				
				case 2:
					return "CH_OPT_PREP_2";
				
				case 3:
					return "CH_OPT_PREP_3";
				
				case 4:
					return "CH_OPT_PREP_4";
				
				case 5:
					return "CH_OPT_PREP_5";
				
				case 6:
					return "CH_OPT_PREP_8";
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "CH_OPT_PREP_0";
				
				case 1:
					return "CH_OPT_PREP_1";
				
				case 2:
					return "CH_OPT_PREP_2";
				
				case 3:
					return "CH_OPT_PREP_3";
				
				case 4:
					return "CH_OPT_PREP_4";
				
				case 5:
					return "CH_OPT_PREP_5";
				
				case 6:
					return "CH_OPT_PREP_9";
				
				case 7:
					if (func_179(uParam0->f_4356, 10))
					{
						return "CH_OPT_PREP_10";
					}
					else
					{
						return "CH_LIST_BLANK";
					}
					break;
			}
			break;
	}
	return "";
}

bool func_1069(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 2);
}

int func_1070(var uParam0, int iParam1)
{
	switch (func_770(uParam0))
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return func_492(uParam0->f_4356);
				
				case 1:
					return func_491(uParam0->f_4356);
				
				case 2:
					return func_489(uParam0->f_4356);
				
				case 3:
					return func_493(uParam0->f_4356);
				
				case 4:
					return func_488(uParam0->f_4356);
				
				case 5:
					return func_487(uParam0->f_4356);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return func_492(uParam0->f_4356);
				
				case 1:
					return func_491(uParam0->f_4356);
				
				case 2:
					return func_489(uParam0->f_4356);
				
				case 3:
					return func_493(uParam0->f_4356);
				
				case 4:
					return func_172(uParam0->f_4356);
				
				case 5:
					return func_486(uParam0->f_4356);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_492(uParam0->f_4356);
				
				case 1:
					return func_491(uParam0->f_4356);
				
				case 2:
					return func_489(uParam0->f_4356);
				
				case 3:
					return func_493(uParam0->f_4356);
				
				case 4:
					return func_484(uParam0->f_4356);
				
				case 5:
					return func_485(uParam0->f_4356);
				
				default:
			}
			break;
	}
	return 0;
}

char* func_1071(var uParam0, int iParam1)
{
	switch (func_770(uParam0))
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "CH_TODO_PREP_0";
				
				case 1:
					return "CH_TODO_PREP_1";
				
				case 2:
					return "CH_TODO_PREP_2";
				
				case 3:
					return "CH_TODO_PREP_3";
				
				case 4:
					return "CH_TODO_PREP_4";
				
				case 5:
					return "CH_TODO_PREP_5";
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "CH_TODO_PREP_0";
				
				case 1:
					return "CH_TODO_PREP_1";
				
				case 2:
					return "CH_TODO_PREP_2";
				
				case 3:
					return "CH_TODO_PREP_3";
				
				case 4:
					return "CH_TODO_PREP_8";
				
				case 5:
					return "CH_TODO_PREP_9";
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "CH_TODO_PREP_0";
				
				case 1:
					return "CH_TODO_PREP_1";
				
				case 2:
					return "CH_TODO_PREP_2";
				
				case 3:
					return "CH_TODO_PREP_3";
				
				case 4:
					if (func_178(uParam0->f_4356))
					{
						return "CH_TODO_PREP_6b";
					}
					return "CH_TODO_PREP_6";
				
				case 5:
					return "CH_TODO_PREP_7";
				
				default:
			}
			break;
	}
	return "";
}

var func_1072()
{
	return Global_1696431;
}

bool func_1073(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 1);
}

void func_1074(var uParam0)
{
	if (unk_0xD803B885F5E47A62() != uParam0->f_4356)
	{
		return;
	}
	if (func_17(uParam0, 1))
	{
		return;
	}
	if (!func_193(uParam0->f_4356, func_113(uParam0->f_4356)))
	{
		if (!func_875(func_1077(uParam0)))
		{
			switch (uParam0->f_744.f_737)
			{
				case 0:
					func_191(uParam0, func_1076(func_1077(uParam0)));
					uParam0->f_744.f_737++;
					break;
				
				case 1:
					if (func_874(uParam0, func_1076(func_1077(uParam0))))
					{
						if (func_193(uParam0->f_4356, 0))
						{
							func_191(uParam0, 69);
							uParam0->f_744.f_737 = 2;
						}
						else
						{
							func_843(uParam0, 10);
							uParam0->f_744.f_737 = 3;
						}
					}
					break;
				
				case 2:
					if (func_874(uParam0, 69))
					{
						func_872(func_1077(uParam0), 1);
						uParam0->f_744.f_737 = 0;
					}
					break;
				
				case 3:
					if (!uParam0->f_2529.f_62)
					{
						func_191(uParam0, 13);
						uParam0->f_744.f_737++;
					}
					break;
				
				case 4:
					if (func_874(uParam0, 13))
					{
						func_501(&(uParam0->f_4173.f_174));
						uParam0->f_744.f_737++;
					}
					break;
				
				case 5:
					if (func_502(&(uParam0->f_4173.f_174), 500, 0))
					{
						func_885(uParam0->f_744.f_709, 10);
						uParam0->f_2593 = 10;
						func_191(uParam0, 14);
						uParam0->f_744.f_737++;
					}
					break;
				
				case 6:
					if (func_874(uParam0, 14))
					{
						func_845(uParam0);
						func_501(&(uParam0->f_4173.f_174));
						uParam0->f_744.f_737++;
					}
					break;
				
				case 7:
					if (func_502(&(uParam0->f_4173.f_174), 500, 0))
					{
						func_885(uParam0->f_744.f_709, 11);
						uParam0->f_2593 = 11;
						func_191(uParam0, 15);
						uParam0->f_744.f_737++;
					}
					break;
				
				case 8:
					if (func_874(uParam0, 15))
					{
						func_845(uParam0);
						func_501(&(uParam0->f_4173.f_174));
						uParam0->f_744.f_737++;
					}
					break;
				
				case 9:
					if (func_502(&(uParam0->f_4173.f_174), 500, 0))
					{
						func_885(uParam0->f_744.f_709, 12);
						uParam0->f_2593 = 12;
						func_191(uParam0, 16);
						uParam0->f_744.f_737++;
					}
					break;
				
				case 10:
					if (func_874(uParam0, 16))
					{
						func_843(uParam0, 1);
						func_845(uParam0);
						func_501(&(uParam0->f_4173.f_174));
						func_872(func_1077(uParam0), 1);
						uParam0->f_744.f_737 = 0;
						func_189(uParam0, 3);
					}
					break;
				}
		}
	}
	else if (!func_875(func_1075(uParam0)))
	{
		switch (uParam0->f_744.f_737)
		{
			case 0:
				func_191(uParam0, 68);
				uParam0->f_744.f_737++;
				break;
			
			case 1:
				if (func_874(uParam0, 68))
				{
					func_191(uParam0, 69);
					uParam0->f_744.f_737++;
				}
				break;
			
			case 2:
				if (func_874(uParam0, 69))
				{
					func_872(func_1075(uParam0), 1);
					uParam0->f_744.f_737 = 0;
				}
				break;
			}
	}
}

int func_1075(var uParam0)
{
	switch (func_113(uParam0->f_4356))
	{
		case 1:
			return 8;
		
		case 2:
			return 9;
		
		case 3:
			return 10;
		
		default:
	}
	return -1;
}

int func_1076(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 10;
		
		case 3:
			return 11;
		
		case 4:
			return 12;
		
		default:
	}
	return -1;
}

int func_1077(var uParam0)
{
	switch (func_113(uParam0->f_4356))
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 3:
			return 4;
		
		default:
	}
	return -1;
}

void func_1078(var uParam0)
{
	if (!func_17(uParam0, 1))
	{
		func_886(uParam0, 1);
	}
	func_693(&(uParam0->f_2593), 10, 0);
	func_885(uParam0->f_744.f_709, uParam0->f_2593);
	uParam0->f_744.f_703 = 1;
	func_190(&(uParam0->f_744), 1);
}

void func_1079(var uParam0)
{
}

void func_1080(var uParam0)
{
	func_1015(uParam0);
	func_1012(uParam0);
	func_890(uParam0);
	if (uParam0->f_744.f_724.f_5)
	{
		func_462(unk_0xD803B885F5E47A62(), 0, 0, 0);
		uParam0->f_4360 = 1;
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
		func_698(&(uParam0->f_744.f_724), 1);
	}
}

void func_1081(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 1))
	{
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 1);
	}
}

void func_1082(var uParam0)
{
	func_1000(uParam0, 1);
	func_999(uParam0, 1);
	func_954(uParam0, 1);
	func_952(uParam0, 1);
	func_950(uParam0, 1);
	func_1032(uParam0, 1);
	func_944(uParam0, 1, -1);
	func_1009(uParam0, 1);
	func_1010(uParam0, 1);
	if (func_164(uParam0->f_4356, 0) != 0)
	{
		func_949(uParam0, 1);
	}
	if (func_153(uParam0->f_4356, 0) != 0)
	{
		func_948(uParam0, 1);
	}
	func_947(uParam0, 1);
	func_1001(uParam0, 1);
	func_1063(uParam0, 1);
	func_946(uParam0, 1);
	func_1006(uParam0, 1);
}

void func_1083(var uParam0)
{
	bVar0 = true;
	if (!func_898(&(uParam0->f_744)))
	{
		bVar0 = false;
	}
	if (!func_1084())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_698(&(uParam0->f_744.f_724), 1);
	}
}

bool func_1084()
{
	return Global_2458936.f_6;
}

void func_1085(var uParam0)
{
	func_1086(&(uParam0->f_744));
}

void func_1086(var uParam0)
{
	uParam0->f_709 = unk_0xB01F55A0FD1CFD49("CASINO_HEIST_BOARD_PREP");
	uParam0->f_710 = unk_0xB01F55A0FD1CFD49("INSTRUCTIONAL_BUTTONS");
}

void func_1087(var uParam0)
{
	func_693(&(uParam0->f_2593), 0, 0);
	func_190(&(uParam0->f_744), 1);
}

void func_1088(var uParam0)
{
	func_698(&(uParam0->f_744.f_724), 1);
}

void func_1089(var uParam0)
{
}

void func_1090(var uParam0)
{
	if (!func_910(uParam0) && !func_909())
	{
		func_698(&(uParam0->f_744.f_724), 1);
	}
}

void func_1091(var uParam0)
{
	func_1092(uParam0);
}

void func_1092(var uParam0)
{
	switch (uParam0->f_724)
	{
		case 0:
			func_1207(uParam0);
			break;
		
		case 1:
			if (!func_907(&(uParam0->f_724)))
			{
				func_1206(uParam0);
				func_905(&(uParam0->f_724));
			}
			func_1205(uParam0);
			if (!func_904(&(uParam0->f_724)))
			{
				func_1204(uParam0);
				func_902(&(uParam0->f_724));
			}
			break;
		
		case 2:
			if (!func_907(&(uParam0->f_724)))
			{
				func_1202(uParam0);
				func_905(&(uParam0->f_724));
			}
			func_1201(uParam0);
			if (!func_904(&(uParam0->f_724)))
			{
				func_1200(uParam0);
				func_902(&(uParam0->f_724));
			}
			break;
		
		case 3:
			if (!func_907(&(uParam0->f_724)))
			{
				func_1199(uParam0);
				func_905(&(uParam0->f_724));
			}
			func_1198(uParam0);
			if (!func_904(&(uParam0->f_724)))
			{
				func_1197(uParam0);
				func_902(&(uParam0->f_724));
			}
			break;
		
		case 4:
			if (!func_907(&(uParam0->f_724)))
			{
				func_1196(uParam0);
				func_905(&(uParam0->f_724));
			}
			func_1096(uParam0);
			if (!func_904(&(uParam0->f_724)))
			{
				func_1095(uParam0);
				func_902(&(uParam0->f_724));
			}
			break;
		
		case 5:
			if (!func_907(&(uParam0->f_724)))
			{
				func_1094(uParam0);
				func_905(&(uParam0->f_724));
			}
			func_1093(uParam0);
			break;
	}
}

void func_1093(var uParam0)
{
}

void func_1094(var uParam0)
{
	func_676();
	func_675(uParam0);
}

void func_1095(var uParam0)
{
	if (!func_17(uParam0, 1))
	{
		func_693(&(uParam0->f_2593), 0, 0);
		uParam0->f_703 = 0;
	}
}

void func_1096(var uParam0)
{
	func_883();
	func_1195(uParam0);
	func_1146(uParam0);
	func_1144(uParam0);
	func_1134(uParam0);
	func_1099(uParam0);
	func_1098(uParam0);
	func_706(uParam0);
	func_705();
	func_704(uParam0, 0);
	if (!uParam0->f_724.f_5)
	{
		if (!func_17(uParam0, 1))
		{
			if (uParam0->f_4360 && !func_202(unk_0xD803B885F5E47A62()))
			{
				func_462(unk_0xD803B885F5E47A62(), 1, 0, 0);
				unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
				uParam0->f_4360 = 0;
			}
			func_1097(uParam0);
		}
		func_509(-1713398555, 12, 0);
		func_695(&(uParam0->f_724), 0);
	}
}

void func_1097(var uParam0)
{
	func_691(&(uParam0->f_2529.f_1), 0, 1);
	unk_0x5413873D3F67BF93(false, 0);
}

void func_1098(var uParam0)
{
	if ((((func_17(uParam0, 1) || uParam0->f_2529.f_62) || uParam0->f_2604) || uParam0->f_741 != -1) || uParam0->f_743)
	{
		return;
	}
	if ((func_875(2) || func_875(3)) || func_875(4))
	{
		if (!unk_0xEAE0D21A50E6C7F4(func_9(8723, -1, 0), 23))
		{
			iVar0 = func_9(8723, -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, 23);
			func_6(8723, iVar0, -1, 1, 0);
			func_10("CH_SETUP_CANUSE", -1);
		}
	}
}

void func_1099(var uParam0)
{
	iVar0 = func_849(&(uParam0->f_2604));
	iVar1 = uParam0->f_2593;
	if (((((func_17(uParam0, 1) || uParam0->f_2604) || uParam0->f_741 != -1) || uParam0->f_743) || uParam0->f_708) || (func_16(uParam0) && iVar0 != 5))
	{
		return;
	}
	switch (uParam0->f_724.f_2)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					func_1133(uParam0, iVar0);
					func_196(uParam0, 1);
					func_845(uParam0);
					break;
				
				case 9:
					break;
				
				case 10:
					if (func_482(uParam0, 1))
					{
						func_842(uParam0, 1);
					}
					break;
				
				case 7:
					if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
					{
						if ((func_1132(iVar1) && !func_1131(uParam0)) && !func_1130(uParam0, iVar1))
						{
							uParam0->f_741 = func_1129(iVar1);
							unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						}
						if (func_1128(iVar1) && func_1125(uParam0, iVar1))
						{
							func_1123(uParam0, iVar1);
						}
					}
					if (func_1122(iVar1) && func_1116(uParam0, iVar1))
					{
						func_1115(uParam0, iVar1);
					}
					break;
				
				case 4:
					if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
					{
						if ((func_1113(uParam0, iVar1) && !func_1109(uParam0, iVar1)) && func_1108(uParam0, iVar1))
						{
							uParam0->f_741 = func_1129(iVar1);
							unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						}
					}
					break;
				
				case 8:
					func_201(uParam0, 0);
					break;
				
				case 5:
					if (func_1128(iVar1))
					{
						if (!unk_0xEA6BC48857E0AC4C(func_181(uParam0, 0, iVar1)))
						{
							func_828(uParam0, 0);
						}
					}
					else if (func_1132(iVar1))
					{
						if (!unk_0xEA6BC48857E0AC4C(func_132(uParam0, iVar1)))
						{
							func_828(uParam0, 0);
						}
					}
					else if (func_1113(uParam0, iVar1))
					{
						if (!unk_0xEA6BC48857E0AC4C(func_128(uParam0, iVar1)))
						{
							func_828(uParam0, 0);
						}
					}
					else if (iVar1 == 8)
					{
						func_828(uParam0, 0);
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 2:
				case 3:
					if (func_1122(iVar1) && func_1116(uParam0, iVar1))
					{
						func_1101(uParam0, iVar1, iVar0);
					}
					break;
				
				case 7:
					break;
				
				case 8:
					func_1100(uParam0, iVar1);
					break;
			}
			break;
	}
}

void func_1100(var uParam0, int iParam1)
{
	if (uParam0->f_724.f_2 == 0)
	{
		return;
	}
	uParam0->f_724.f_2 = 0;
	uParam0->f_706 = 1;
	func_748(uParam0->f_709, iParam1, 0);
	func_190(uParam0, 1);
	if (uParam0->f_2529.f_33 != 0)
	{
		uParam0->f_2529.f_33 = 0;
	}
	unk_0x4D7F4CC43D4D0DE3(-1, "Back", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}

void func_1101(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 12:
			switch (iParam2)
			{
				case 2:
					if (func_1107(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_1106(uParam0, 1);
						func_190(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_1107(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_1106(uParam0, 1);
						func_190(uParam0, 1);
					}
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 2:
					if (func_1105(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_1104(uParam0, 1);
						func_190(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_1105(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_1104(uParam0, 1);
						func_190(uParam0, 1);
					}
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 2:
					if (func_1103(uParam0, 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_1102(uParam0, 1);
						func_190(uParam0, 1);
					}
					break;
				
				case 3:
					if (func_1103(uParam0, 1))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Paper_Shuffle", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
						func_1102(uParam0, 1);
						func_190(uParam0, 1);
					}
					break;
			}
			break;
	}
}

void func_1102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 13);
	}
}

int func_1103(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_739++;
			if (uParam0->f_739 > 8)
			{
				uParam0->f_739 = 7;
			}
		}
		else
		{
			uParam0->f_739 = (uParam0->f_739 - 1);
			if (uParam0->f_739 < 7)
			{
				uParam0->f_739 = 8;
			}
		}
		if (func_179(uParam0->f_4356, uParam0->f_739))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

void func_1104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 12);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 12);
	}
}

int func_1105(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_738++;
			if (uParam0->f_738 > 6)
			{
				uParam0->f_738 = 3;
			}
		}
		else
		{
			uParam0->f_738 = (uParam0->f_738 - 1);
			if (uParam0->f_738 < 3)
			{
				uParam0->f_738 = 6;
			}
		}
		if (func_179(uParam0->f_4356, uParam0->f_738))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

void func_1106(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 11);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 11);
	}
}

int func_1107(var uParam0, bool bParam1)
{
	while (!bVar0)
	{
		if (bParam1)
		{
			uParam0->f_737++;
			if (uParam0->f_737 > 2)
			{
				uParam0->f_737 = 1;
			}
		}
		else
		{
			uParam0->f_737 = (uParam0->f_737 - 1);
			if (uParam0->f_737 < 1)
			{
				uParam0->f_737 = 2;
			}
		}
		if (func_179(uParam0->f_4356, uParam0->f_737))
		{
			bVar0 = true;
			return 1;
		}
	}
	return 0;
}

bool func_1108(var uParam0, int iParam1)
{
	return unk_0x7A7BDE279347E517(func_126(iParam1), false, true, 0, -1, 0);
}

int func_1109(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return func_1112(uParam0->f_4356);
		
		case 4:
			return func_1111(uParam0->f_4356);
		
		case 3:
			return func_1110(uParam0->f_4356);
		
		default:
	}
	return 0;
}

int func_1110(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 7);
	}
	return 0;
}

int func_1111(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 6);
	}
	return 0;
}

int func_1112(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 8);
	}
	return 0;
}

int func_1113(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case 3:
			return 1;
		
		case 4:
			return func_1114(uParam0->f_4356);
		
		default:
	}
	return 0;
}

int func_1114(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_40, 5);
	}
	return 0;
}

void func_1115(var uParam0, int iParam1)
{
	if (uParam0->f_724.f_2 == 1)
	{
		return;
	}
	uParam0->f_724.f_2 = 1;
	uParam0->f_706 = 1;
	func_748(uParam0->f_709, iParam1, 1);
	func_190(uParam0, 1);
	if (uParam0->f_2529.f_33 != func_834(uParam0))
	{
		uParam0->f_2529.f_33 = func_834(uParam0);
	}
	unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
}

int func_1116(var uParam0, int iParam1)
{
	if (func_1120(uParam0, iParam1) || func_1130(uParam0, iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 5:
		case 6:
		case 7:
			return !func_1131(uParam0);
		
		case 11:
			return 0;
		
		case 12:
			return func_1119(uParam0);
		
		case 13:
			return 0;
		
		case 14:
			return func_1118(uParam0);
		
		case 15:
			return 0;
		
		case 16:
			return func_1117(uParam0);
		
		case 8:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return 1;
}

bool func_1117(var uParam0)
{
	iVar0 = 0;
	if (func_179(uParam0->f_4356, 7))
	{
		iVar0++;
	}
	if (func_179(uParam0->f_4356, 8))
	{
		iVar0++;
	}
	return iVar0 > 1;
}

bool func_1118(var uParam0)
{
	iVar0 = 0;
	if (func_179(uParam0->f_4356, 3))
	{
		iVar0++;
	}
	if (func_179(uParam0->f_4356, 4))
	{
		iVar0++;
	}
	if (func_179(uParam0->f_4356, 5))
	{
		iVar0++;
	}
	if (func_179(uParam0->f_4356, 5))
	{
		iVar0++;
	}
	return iVar0 > 1;
}

bool func_1119(var uParam0)
{
	iVar0 = 0;
	if (func_179(uParam0->f_4356, 1))
	{
		iVar0++;
	}
	if (func_179(uParam0->f_4356, 2))
	{
		iVar0++;
	}
	return iVar0 > 1;
}

int func_1120(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_770(uParam0) == 1;
		
		case 6:
			return func_770(uParam0) == 2;
		
		case 7:
			return func_770(uParam0) == 3;
		
		case 2:
			return func_1112(uParam0->f_4356);
		
		case 4:
			return func_1111(uParam0->f_4356);
		
		case 3:
			return func_1110(uParam0->f_4356);
		
		case 10:
			return func_1121(uParam0->f_4356);
		
		default:
	}
	return 0;
}

int func_1121(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_1, 0);
	}
	return 0;
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
			return 1;
		
		default:
	}
	return 0;
}

void func_1123(var uParam0, int iParam1)
{
	if (func_459(0))
	{
		iVar0 = func_1124(iParam1);
		if (iVar0 != -1)
		{
			func_444(iVar0);
			func_442();
			func_441(uParam0, 2);
			func_845(uParam0);
			Global_1700796[unk_0x6E61BE9E61434AC1()].f_67 = 1;
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
		}
	}
	else
	{
		switch (func_277(unk_0xD803B885F5E47A62(), 158, 0))
		{
			case 15:
				if (func_275(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G1", -1);
				}
				else if (func_274(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G2", -1);
				}
				else
				{
					func_10("GENERAL_MLF_G3", -1);
				}
				break;
			
			case 16:
				if (func_275(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G4", -1);
				}
				else if (func_274(unk_0xD803B885F5E47A62()))
				{
					func_10("GENERAL_MLF_G5", -1);
				}
				else
				{
					func_10("GENERAL_MLF_G6", -1);
				}
				break;
			}
	}
}

int func_1124(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		default:
	}
	return -1;
}

int func_1125(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 9:
			if ((func_1127(uParam0->f_4356) && func_1126(uParam0->f_4356)) && func_1114(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 10:
			if (!func_264(uParam0->f_4356))
			{
				return 0;
			}
			break;
	}
	if (func_1120(uParam0, iParam1))
	{
		return 0;
	}
	if (func_1130(uParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_1126(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_3, iVar0))
			{
				return 0;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_1127(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_2, iVar0))
			{
				return 0;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_1128(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1129(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 3;
		
		case 6:
			return 4;
		
		case 7:
			return 5;
		
		case 2:
			return 9;
		
		case 4:
			return 10;
		
		case 3:
			return 11;
		
		default:
	}
	return -1;
}

int func_1130(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			if (!func_264(uParam0->f_4356))
			{
				return 1;
			}
			break;
		
		case 5:
			if (func_195(uParam0->f_4356) == 1)
			{
				return 1;
			}
			break;
		
		case 6:
			if (func_195(uParam0->f_4356) == 2)
			{
				return 1;
			}
			break;
		
		case 7:
			if (func_195(uParam0->f_4356) == 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_1131(var uParam0)
{
	return func_770(uParam0) != 0;
}

int func_1132(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

void func_1133(var uParam0, int iParam1)
{
	uParam0->f_2593.f_1 = 0;
	switch (iParam1)
	{
		case 1:
			func_848(uParam0->f_709, 187);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 0:
			func_848(uParam0->f_709, 188);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 2:
			func_848(uParam0->f_709, 189);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
		
		case 3:
			func_848(uParam0->f_709, 190);
			unk_0x4D7F4CC43D4D0DE3(-1, "Highlight_Move", "DLC_HEIST_PLANNING_BOARD_SOUNDS", 1);
			break;
	}
}

void func_1134(var uParam0)
{
	if (uParam0->f_741 == -1)
	{
		return;
	}
	if (func_528(uParam0, uParam0->f_741, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_741)
			{
				case 3:
					func_1143(1);
					func_755(uParam0->f_709, 5, 1);
					func_1142(uParam0, 1);
					func_1141(uParam0, 1);
					bVar3 = true;
					if (func_193(uParam0->f_4356, 3))
					{
						func_191(uParam0, 65);
						uParam0->f_4173.f_177 = 1;
					}
					else
					{
						func_191(uParam0, 7);
						uParam0->f_4173.f_176 = 1;
					}
					uParam0->f_744.f_702 = 1;
					break;
				
				case 4:
					func_1143(2);
					func_755(uParam0->f_709, 6, 1);
					func_1142(uParam0, 1);
					func_1141(uParam0, 1);
					bVar3 = true;
					if (func_193(uParam0->f_4356, 3))
					{
						func_191(uParam0, 66);
						uParam0->f_4173.f_177 = 1;
					}
					else
					{
						func_191(uParam0, 8);
						uParam0->f_4173.f_176 = 1;
					}
					uParam0->f_744.f_702 = 1;
					break;
				
				case 5:
					func_1143(3);
					func_755(uParam0->f_709, 7, 1);
					func_1142(uParam0, 1);
					func_1141(uParam0, 1);
					bVar3 = true;
					if (func_193(uParam0->f_4356, 3))
					{
						func_191(uParam0, 67);
						uParam0->f_4173.f_177 = 1;
					}
					else
					{
						func_191(uParam0, 9);
						uParam0->f_4173.f_176 = 1;
					}
					uParam0->f_744.f_702 = 1;
					break;
				
				case 9:
					iVar1 = func_126(2);
					if (func_526())
					{
						func_514(395122350, iVar1, &uVar2, 0, 1, 0);
					}
					else
					{
						unk_0xFF90259E892D5F8A(iVar1, 0, 1, 0, 0, 1, iVar1, 0, 0, 0, 0);
					}
					func_1140(1);
					func_755(uParam0->f_709, 2, 1);
					func_1139(uParam0, 1);
					func_1141(uParam0, 1);
					bVar3 = true;
					break;
				
				case 10:
					iVar1 = func_126(4);
					if (func_526())
					{
						func_514(-331981076, iVar1, &uVar2, 0, 1, 0);
					}
					else
					{
						unk_0xFF90259E892D5F8A(iVar1, 0, 1, 0, 0, 0, 0, 1, iVar1, 0, 0);
					}
					func_1138(1);
					func_755(uParam0->f_709, 4, 1);
					func_1139(uParam0, 1);
					func_1141(uParam0, 1);
					bVar3 = true;
					break;
				
				case 11:
					iVar1 = func_126(3);
					if (func_526())
					{
						func_514(1671535231, iVar1, &uVar2, 0, 1, 0);
					}
					else
					{
						unk_0xFF90259E892D5F8A(iVar1, 0, 1, 0, 0, 0, 0, 0, 0, 1, iVar1);
					}
					func_1135(1);
					func_755(uParam0->f_709, 3, 1);
					func_1139(uParam0, 1);
					func_1141(uParam0, 1);
					bVar3 = true;
					break;
			}
			if (bVar3)
			{
				func_190(uParam0, 1);
			}
			uParam0->f_741 = -1;
			uParam0->f_743 = 1;
		}
		else
		{
			uParam0->f_741 = -1;
			uParam0->f_743 = 1;
			uParam0->f_742 = 0;
		}
	}
}

void func_1135(bool bParam0)
{
	iVar0 = func_9(8723, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_40), 7);
		unk_0x5D96D8530B3D0904(&iVar0, 7);
		func_6(8723, iVar0, -1, 1, 0);
		func_1136(35, 18);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_40), 7);
		unk_0x0674E58A79778E99(&iVar0, 7);
		func_6(8723, iVar0, -1, 1, 0);
		func_1136(35, 0);
	}
}

void func_1136(int iParam0, int iParam1)
{
	func_6(func_1137(iParam0), iParam1, -1, 1, 0);
	Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_401[iParam0] = iParam1;
}

int func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8747;
			break;
		
		case 1:
			return 8748;
			break;
		
		case 2:
			return 8749;
			break;
		
		case 3:
			return 8750;
			break;
		
		case 4:
			return 8751;
			break;
		
		case 5:
			return 8752;
			break;
		
		case 6:
			return 8753;
			break;
		
		case 7:
			return 8754;
			break;
		
		case 8:
			return 8755;
			break;
		
		case 9:
			return 8756;
			break;
		
		case 10:
			return 8757;
			break;
		
		case 11:
			return 8758;
			break;
		
		case 12:
			return 8759;
			break;
		
		case 13:
			return 8760;
			break;
		
		case 14:
			return 8761;
			break;
		
		case 15:
			return 8762;
			break;
		
		case 16:
			return 8763;
			break;
		
		case 17:
			return 8764;
			break;
		
		case 18:
			return 8765;
			break;
		
		case 19:
			return 8766;
			break;
		
		case 20:
			return 8767;
			break;
		
		case 21:
			return 8768;
			break;
		
		case 22:
			return 8769;
			break;
		
		case 23:
			return 8770;
			break;
		
		case 24:
			return 8771;
			break;
		
		case 25:
			return 8772;
			break;
		
		case 26:
			return 8773;
			break;
		
		case 27:
			return 8774;
			break;
		
		case 28:
			return 8775;
			break;
		
		case 29:
			return 8776;
			break;
		
		case 30:
			return 8777;
			break;
		
		case 31:
			return 8778;
			break;
		
		case 32:
			return 8779;
			break;
		
		case 33:
			return 8780;
			break;
		
		case 34:
			return 8781;
			break;
		
		case 35:
			return 8782;
			break;
		
		case 36:
			return 8783;
			break;
		
		case 37:
		case 38:
		case 39:
		case 40:
			return 8784;
			break;
	}
	return 8747;
}

void func_1138(bool bParam0)
{
	iVar0 = func_9(8723, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 6);
		func_6(8723, iVar0, -1, 1, 0);
		func_1136(36, 19);
	}
	else
	{
		unk_0x0674E58A79778E99(&iVar0, 6);
		func_6(8723, iVar0, -1, 1, 0);
		func_1136(36, 0);
	}
}

void func_1139(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 2);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 2);
	}
}

void func_1140(bool bParam0)
{
	iVar0 = func_9(8723, -1, 0);
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0xD803B885F5E47A62()].f_40), 8);
		unk_0x5D96D8530B3D0904(&iVar0, 8);
		func_6(8723, iVar0, -1, 1, 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0xD803B885F5E47A62()].f_40), 8);
		unk_0x0674E58A79778E99(&iVar0, 8);
		func_6(8723, iVar0, -1, 1, 0);
	}
}

void func_1141(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 14);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 14);
	}
}

void func_1142(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 1);
	}
}

void func_1143(int iParam0)
{
	func_6(8527, iParam0, -1, 1, 0);
	Global_1700796[unk_0xD803B885F5E47A62()].f_18.f_4 = iParam0;
}

void func_1144(var uParam0)
{
	if (uParam0->f_702)
	{
		if (unk_0x83D8570832F172A7(uParam0->f_709))
		{
			unk_0x5DD950F92F816F03(1);
			unk_0x3039591AD3E735CE(uParam0->f_700);
			switch (2)
			{
				case 0:
					break;
				
				case 1:
					unk_0x89F18617A4C543B3(uParam0->f_709, 1);
					break;
				
				case 2:
					unk_0xB32741071615AC2A(uParam0->f_709, 1);
					break;
			}
			unk_0xEF45C43067063F18(uParam0->f_709, 0,25f, 0,5f, 0,5f, 1f, 255, 255, 255, 255, 0);
			unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
			unk_0x5DD950F92F816F03(0);
			if (uParam0->f_705)
			{
			}
		}
	}
	if (uParam0->f_703)
	{
		func_1145(uParam0);
	}
}

void func_1145(var uParam0)
{
	Var0 = { func_869() };
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	bVar9 = uParam0->f_706;
	if (func_16(uParam0) || uParam0->f_740 > 0)
	{
		if (!uParam0->f_704)
		{
			bVar9 = true;
			uParam0->f_704 = 1;
		}
	}
	else if (uParam0->f_704)
	{
		bVar9 = true;
		uParam0->f_704 = 0;
	}
	if (!bVar9)
	{
		func_864(&(uParam0->f_710), &Var0, uParam0, 0);
		return;
	}
	if (!unk_0x0D71AFA59EF5104F() || unk_0xB3260A60545D3F11() == 10)
	{
		func_863(uParam0, 0,5f);
	}
	else
	{
		func_863(uParam0, 0,7f);
	}
	func_861(uParam0);
	iVar10 = uParam0->f_2593;
	if (uParam0->f_704)
	{
		func_859(2, 204, "CH_INSTR_INFO", uParam0, 1, 361);
		if (func_708(&(uParam0->f_2529)))
		{
			if (unk_0x91E3F625EF57450D(2))
			{
				func_859(2, 39, "CH_INSTR_ZOOM", uParam0, 1, 361);
			}
			else
			{
				func_858(2, 15, "CH_INSTR_ZOOM", uParam0);
			}
		}
		func_858(2, 1, "HEIST_IB_LOOK", uParam0);
	}
	else
	{
		switch (uParam0->f_724.f_2)
		{
			case 0:
				if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
				{
					if (func_1128(iVar10))
					{
						if (func_1125(uParam0, iVar10))
						{
							func_859(2, 201, "CH_INSTR_LM", uParam0, 1, 361);
						}
					}
					else if (func_1116(uParam0, iVar10))
					{
						func_859(2, 201, "CH_INSTR_SEL", uParam0, 1, 361);
					}
				}
				func_859(2, 202, "CH_INSTR_QUIT", uParam0, 1, 361);
				if (uParam0->f_4356 == unk_0xD803B885F5E47A62())
				{
					if (func_1113(uParam0, iVar10) && func_1108(uParam0, iVar10))
					{
						if (!func_1109(uParam0, iVar10))
						{
							func_859(2, 203, "CH_INSTR_PURCH", uParam0, 1, 361);
						}
					}
				}
				if (func_1128(iVar10))
				{
					if (!unk_0xEA6BC48857E0AC4C(func_181(uParam0, 0, iVar10)))
					{
						func_859(2, 204, "CH_INSTR_INFO", uParam0, 1, 361);
					}
				}
				else if (func_1132(iVar10))
				{
					if (!unk_0xEA6BC48857E0AC4C(func_132(uParam0, iVar10)))
					{
						func_859(2, 204, "CH_INSTR_INFO", uParam0, 1, 361);
					}
				}
				else if (func_1113(uParam0, iVar10))
				{
					if (!unk_0xEA6BC48857E0AC4C(func_128(uParam0, iVar10)))
					{
						func_859(2, 204, "CH_INSTR_INFO", uParam0, 1, 361);
					}
				}
				else if (iVar10 == 8)
				{
					func_859(2, 204, "CH_INSTR_INFO", uParam0, 1, 361);
				}
				if (func_482(uParam0, 1))
				{
					func_859(2, 206, "CH_INSTR_PREP", uParam0, 1, 361);
				}
				if (unk_0x91E3F625EF57450D(2))
				{
					func_859(2, 39, "CH_INSTR_ZOOM", uParam0, 1, 361);
				}
				else
				{
					func_858(2, 15, "CH_INSTR_ZOOM", uParam0);
				}
				func_858(2, 1, "HEIST_IB_LOOK", uParam0);
				func_858(2, 0, "HEIST_IB_NAV", uParam0);
				break;
			
			case 1:
				func_859(2, 202, "CH_INSTR_BACK", uParam0, 1, 361);
				func_858(2, 1, "HEIST_IB_LOOK", uParam0);
				func_858(2, 8, "CH_INSTR_CHACP", uParam0);
				break;
			}
	}
	func_864(&(uParam0->f_710), &Var0, uParam0, uParam0->f_706);
	func_190(uParam0, 0);
}

void func_1146(var uParam0)
{
	if (func_1194(uParam0))
	{
		if (func_1193(uParam0))
		{
			func_1191(uParam0);
			func_1190(uParam0, 0);
			func_1189(uParam0, 1);
		}
		return;
	}
	if (func_1188(uParam0))
	{
		func_1187(uParam0->f_709, 1);
		func_1189(uParam0, 0);
	}
	if (func_1186(uParam0) || func_1035())
	{
		func_782(uParam0->f_709);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0xEA6BC48857E0AC4C(func_1185(iVar0)))
			{
				func_779(uParam0->f_709, func_1185(iVar0), func_1184(uParam0, iVar0));
			}
			iVar0++;
		}
		func_1142(uParam0, 0);
	}
	if (func_1183(uParam0) || func_1035())
	{
		func_776(uParam0->f_709);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!unk_0xEA6BC48857E0AC4C(func_1182(uParam0, iVar0)))
			{
				func_773(uParam0->f_709, func_1182(uParam0, iVar0), func_1181(uParam0, iVar0));
			}
			iVar0++;
		}
		func_1139(uParam0, 0);
	}
	if (func_1180(uParam0) || func_1035())
	{
		iVar1 = 2;
		while (iVar1 <= 16)
		{
			if (func_1179(uParam0, iVar1) != -1)
			{
				func_1178(uParam0->f_709, iVar1, func_1179(uParam0, iVar1));
			}
			iVar1++;
		}
		if (func_1121(uParam0->f_4356))
		{
			func_1177(uParam0->f_709, func_120(func_121(uParam0->f_4356), 1));
		}
		func_1176(uParam0, 0);
	}
	if (func_1175(uParam0) || func_1035())
	{
		uVar2 = 10;
		func_1171(uParam0, &uVar2);
		func_1170(uParam0->f_709, &uVar2);
		func_1169(uParam0, 0);
	}
	if (func_1168(uParam0) || func_1035())
	{
		switch (func_113(uParam0->f_4356))
		{
			case 1:
				func_755(uParam0->f_709, 5, 1);
				break;
			
			case 2:
				func_755(uParam0->f_709, 6, 1);
				break;
			
			case 3:
				func_755(uParam0->f_709, 7, 1);
				break;
		}
		switch (func_194(uParam0->f_4356))
		{
			case 1:
				func_1167(uParam0->f_709, 5, 1);
				break;
			
			case 2:
				func_1167(uParam0->f_709, 6, 1);
				break;
			
			case 3:
				func_1167(uParam0->f_709, 7, 1);
				break;
		}
		func_1166(uParam0, 0);
	}
	if (func_1165(uParam0) || func_1035())
	{
		iVar1 = 0;
		while (iVar1 < 17)
		{
			func_1058(uParam0->f_709, iVar1, func_1130(uParam0, iVar1));
			iVar1++;
		}
		func_1164(uParam0, 0);
	}
	if (func_1163(uParam0) || func_1035())
	{
		iVar1 = 0;
		while (iVar1 < 17)
		{
			func_702(uParam0->f_709, iVar1, func_1162(uParam0, iVar1));
			if (func_1161(uParam0, iVar1) != -1)
			{
				func_748(uParam0->f_709, iVar1, func_1161(uParam0, iVar1));
			}
			iVar1++;
		}
		func_1160(uParam0, 0);
	}
	if (func_1159(uParam0) || func_1035())
	{
		iVar1 = 0;
		while (iVar1 < 17)
		{
			if (func_1158(iVar1))
			{
				func_755(uParam0->f_709, iVar1, func_1120(uParam0, iVar1));
			}
			iVar1++;
		}
		func_1157(uParam0, 0);
	}
	if (func_1156(uParam0) || func_1035())
	{
		func_1154(uParam0->f_709, func_1155(uParam0));
		func_1153(uParam0, 0);
	}
	if (func_1152(uParam0))
	{
		iVar1 = 0;
		while (iVar1 < 17)
		{
			if (func_1151(uParam0, iVar1))
			{
				func_700(uParam0->f_709, iVar1, 1);
			}
			else
			{
				func_700(uParam0->f_709, iVar1, 0);
			}
			iVar1++;
		}
		func_1141(uParam0, 0);
	}
	if (func_1150(uParam0) || func_1035())
	{
		func_1178(uParam0->f_709, 12, func_1179(uParam0, 12));
		func_1106(uParam0, 0);
	}
	if (func_1149(uParam0) || func_1035())
	{
		func_1178(uParam0->f_709, 14, func_1179(uParam0, 14));
		func_1104(uParam0, 0);
	}
	if (func_1148(uParam0) || func_1035())
	{
		func_1178(uParam0->f_709, 16, func_1179(uParam0, 16));
		func_1102(uParam0, 0);
	}
	func_1147(0);
}

void func_1147(int iParam0)
{
	if (Global_1696429 && Global_1696430 != iParam0)
	{
		Global_1696430 = iParam0;
	}
}

bool func_1148(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 13);
}

bool func_1149(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 12);
}

bool func_1150(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 11);
}

int func_1151(var uParam0, int iParam1)
{
	if (func_1128(iParam1) && func_1125(uParam0, iParam1))
	{
		return 0;
	}
	if (func_1113(uParam0, iParam1) && !func_1109(uParam0, iParam1))
	{
		return 0;
	}
	if (func_1116(uParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1152(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 14);
}

void func_1153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 9);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 9);
	}
}

void func_1154(int iParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_BLUEPRINT_VISIBLE");
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

bool func_1155(var uParam0)
{
	return func_264(uParam0->f_4356);
}

bool func_1156(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 9);
}

void func_1157(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 7);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 7);
	}
}

int func_1158(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 7:
		case 2:
		case 4:
		case 3:
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1159(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 7);
}

void func_1160(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 8);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 8);
	}
}

int func_1161(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
			if (func_1116(uParam0, iParam1))
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
	}
	return -1;
}

int func_1162(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			if (!func_264(uParam0->f_4356) || !func_1121(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 6:
			if (!func_264(uParam0->f_4356) || !func_1121(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 7:
			if (!func_264(uParam0->f_4356) || !func_1121(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 11:
			if (!func_179(uParam0->f_4356, 0))
			{
				return 0;
			}
			break;
		
		case 12:
			if (!func_179(uParam0->f_4356, 1) && !func_179(uParam0->f_4356, 2))
			{
				return 0;
			}
			break;
		
		case 13:
			if (!func_179(uParam0->f_4356, 10))
			{
				return 0;
			}
			break;
		
		case 14:
			if (((!func_179(uParam0->f_4356, 3) && !func_179(uParam0->f_4356, 4)) && !func_179(uParam0->f_4356, 5)) && !func_179(uParam0->f_4356, 5))
			{
				return 0;
			}
			break;
		
		case 15:
			if (!func_179(uParam0->f_4356, 9))
			{
				return 0;
			}
			break;
		
		case 16:
			if (!func_179(uParam0->f_4356, 7) && !func_179(uParam0->f_4356, 8))
			{
				return 0;
			}
			break;
		
		case 2:
			if (!func_264(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 4:
			if (!func_264(uParam0->f_4356))
			{
				return 0;
			}
			if (!func_1114(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_264(uParam0->f_4356))
			{
				return 0;
			}
			break;
		
		case 8:
			if (!func_1121(uParam0->f_4356))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_1163(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 8);
}

void func_1164(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 6);
	}
}

bool func_1165(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 6);
}

void func_1166(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 5);
	}
}

void func_1167(int iParam0, int iParam1, bool bParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_EXTREME");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(bParam2);
	unk_0x7E60D21B163E9D56();
}

bool func_1168(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 5);
}

void func_1169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 4);
	}
}

void func_1170(int iParam0, var uParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_POI_IMAGES");
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != -1)
		{
			unk_0x3CAEA85DA607305E((*uParam1)[iVar0]);
		}
		iVar0++;
	}
	unk_0x7E60D21B163E9D56();
}

void func_1171(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		(*uParam1)[iVar0] = func_1172(func_1174(uParam0->f_4356, iVar0), func_1173(iVar0), -1);
		iVar0++;
	}
}

int func_1172(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_1173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 1:
			return 4;
		
		case 2:
			return 5;
		
		case 3:
			return 9;
		
		case 4:
			return 1;
		
		case 5:
			return 10;
		
		case 6:
			return 8;
		
		case 7:
			return 3;
		
		case 8:
			return 7;
		
		case 9:
			return 6;
		
		default:
	}
	return -1;
}

int func_1174(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1700796[iParam0].f_18.f_3, iParam1);
	}
	return 0;
}

bool func_1175(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 4);
}

void func_1176(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 3);
	}
}

void func_1177(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_TARGET_TYPE");
	func_83(sParam1);
	unk_0x7E60D21B163E9D56();
}

void func_1178(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_BUTTON_IMAGE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

int func_1179(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return 1;
		
		case 4:
			return 2;
		
		case 3:
			return 3;
		
		case 5:
			return 1;
		
		case 6:
			return 2;
		
		case 7:
			return 3;
		
		case 8:
			switch (func_121(uParam0->f_4356))
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 4;
				
				default:
			}
			break;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 2;
		
		case 12:
			switch (uParam0->f_737)
			{
				case 1:
					return 11;
				
				case 2:
					return 1;
				
				default:
			}
			break;
		
		case 13:
			return 7;
		
		case 14:
			switch (uParam0->f_738)
			{
				case 3:
					return 10;
				
				case 4:
					return 5;
				
				case 5:
					return 8;
				
				case 6:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return 6;
		
		case 16:
			switch (uParam0->f_739)
			{
				case 7:
					return 9;
				
				case 8:
					return 4;
				
				default:
			}
			break;
	}
	return -1;
}

bool func_1180(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 3);
}

int func_1181(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1126(uParam0->f_4356);
		
		case 1:
			return func_1127(uParam0->f_4356);
		
		case 2:
			return func_1112(uParam0->f_4356);
		
		case 3:
			return func_1110(uParam0->f_4356);
		
		case 4:
			return func_1111(uParam0->f_4356);
		
		default:
	}
	return 0;
}

char* func_1182(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "CH_OPT_SETUP_0";
		
		case 1:
			return "CH_OPT_SETUP_1";
		
		case 2:
			return "CH_OPT_SETUP_2";
		
		case 3:
			return "CH_OPT_SETUP_3";
		
		case 4:
			if (func_1114(uParam0->f_4356))
			{
				return "CH_OPT_SETUP_4";
			}
			else
			{
				return "CH_LIST_BLANK";
			}
			break;
	}
	return "";
}

bool func_1183(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 2);
}

int func_1184(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_264(uParam0->f_4356);
		
		case 1:
			return func_1121(uParam0->f_4356);
		
		case 2:
			return func_1131(uParam0);
		
		default:
	}
	return 0;
}

char* func_1185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CH_TODO_SETUP_0";
		
		case 1:
			return "CH_TODO_SETUP_1";
		
		case 2:
			return "CH_TODO_SETUP_2";
		
		default:
	}
	return "";
}

bool func_1186(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 1);
}

void func_1187(int iParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_GRAPHICS_VISIBLE");
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

bool func_1188(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 15);
}

void func_1189(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 15);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 15);
	}
}

void func_1190(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_736), 10);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_736), 10);
	}
}

void func_1191(var uParam0)
{
	func_1187(uParam0->f_709, 0);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		func_702(uParam0->f_709, iVar0, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_779(uParam0->f_709, func_1185(iVar0), func_1192(uParam0, iVar0));
		iVar0++;
	}
}

int func_1192(var uParam0, int iParam1)
{
	if (func_193(uParam0->f_4356, 0) && !func_266(uParam0->f_4356))
	{
		return iParam1 == 0;
	}
	return 0;
}

bool func_1193(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 10);
}

int func_1194(var uParam0)
{
	if (!func_264(uParam0->f_4356) && !func_193(uParam0->f_4356, 0))
	{
		return 1;
	}
	else if (func_193(uParam0->f_4356, 0) && !func_266(uParam0->f_4356))
	{
		return 1;
	}
	return 0;
}

void func_1195(var uParam0)
{
	if (unk_0xD803B885F5E47A62() != uParam0->f_4356)
	{
		return;
	}
	if (!func_193(uParam0->f_4356, 0))
	{
		if (!func_875(0))
		{
			switch (uParam0->f_740)
			{
				case 0:
					func_191(uParam0, 0);
					uParam0->f_740++;
					break;
				
				case 1:
					if (func_502(&(uParam0->f_4173.f_174), 6500, 0))
					{
						func_843(uParam0, 3);
						func_845(uParam0);
						uParam0->f_740++;
					}
					break;
				
				case 2:
					if (!uParam0->f_2529.f_62 && func_502(&(uParam0->f_4173.f_174), 12500, 0))
					{
						func_885(uParam0->f_709, 10);
						uParam0->f_2593 = 10;
						func_191(uParam0, 1);
						uParam0->f_740++;
					}
					break;
				
				case 3:
					if (func_874(uParam0, 1))
					{
						func_501(&(uParam0->f_4173.f_174));
						func_843(uParam0, 4);
						func_845(uParam0);
						uParam0->f_740++;
					}
					break;
				
				case 4:
					if (!uParam0->f_2529.f_62)
					{
						func_885(uParam0->f_709, 3);
						uParam0->f_2593 = 3;
						func_191(uParam0, 2);
						uParam0->f_740++;
					}
					break;
				
				case 5:
					if (func_502(&(uParam0->f_4173.f_174), 11000, 0) && uParam0->f_2593 != 2)
					{
						func_885(uParam0->f_709, 2);
						uParam0->f_2593 = 2;
						func_845(uParam0);
					}
					if (func_502(&(uParam0->f_4173.f_174), 15000, 0))
					{
						func_501(&(uParam0->f_4173.f_174));
						func_885(uParam0->f_709, 10);
						uParam0->f_2593 = 10;
						func_843(uParam0, 0);
						func_845(uParam0);
						uParam0->f_740 = 0;
						func_872(0, 1);
						func_189(uParam0, 0);
						func_189(uParam0, 1);
					}
					break;
			}
		}
		else if (!func_875(1) && func_1121(uParam0->f_4356))
		{
			switch (uParam0->f_740)
			{
				case 0:
					func_191(uParam0, 3);
					uParam0->f_740++;
					break;
				
				case 1:
					if (func_502(&(uParam0->f_4173.f_174), 4500, 0))
					{
						func_501(&(uParam0->f_4173.f_174));
						func_843(uParam0, 5);
						func_845(uParam0);
						uParam0->f_740++;
					}
					break;
				
				case 2:
					if (!uParam0->f_2529.f_62 && func_874(uParam0, 3))
					{
						func_885(uParam0->f_709, 5);
						uParam0->f_2593 = 5;
						func_191(uParam0, 4);
						uParam0->f_740++;
					}
					break;
				
				case 3:
					if (func_874(uParam0, 4))
					{
						func_845(uParam0);
						func_501(&(uParam0->f_4173.f_174));
						uParam0->f_740++;
					}
					break;
				
				case 4:
					if (func_502(&(uParam0->f_4173.f_174), 500, 0))
					{
						func_885(uParam0->f_709, 6);
						uParam0->f_2593 = 6;
						func_191(uParam0, 5);
						uParam0->f_740++;
					}
					break;
				
				case 5:
					if (func_874(uParam0, 5))
					{
						func_845(uParam0);
						func_501(&(uParam0->f_4173.f_174));
						uParam0->f_740++;
					}
					break;
				
				case 6:
					if (func_502(&(uParam0->f_4173.f_174), 500, 0))
					{
						func_885(uParam0->f_709, 7);
						uParam0->f_2593 = 7;
						func_191(uParam0, 6);
						uParam0->f_740++;
					}
					break;
				
				case 7:
					if (func_874(uParam0, 6))
					{
						func_501(&(uParam0->f_4173.f_174));
						func_843(uParam0, 0);
						func_845(uParam0);
						uParam0->f_740 = 0;
						func_872(1, 1);
						func_189(uParam0, 2);
					}
					break;
			}
		}
		else if (uParam0->f_4173.f_176)
		{
			switch (func_113(uParam0->f_4356))
			{
				case 1:
					if (func_874(uParam0, 7))
					{
						func_842(uParam0, 1);
						uParam0->f_4173.f_176 = 0;
					}
					break;
				
				case 2:
					if (func_874(uParam0, 8))
					{
						func_842(uParam0, 1);
						uParam0->f_4173.f_176 = 0;
					}
					break;
				
				case 3:
					if (func_874(uParam0, 9))
					{
						func_842(uParam0, 1);
						uParam0->f_4173.f_176 = 0;
					}
					break;
				}
		}
	}
	else if (uParam0->f_4173.f_177)
	{
		switch (func_113(uParam0->f_4356))
		{
			case 1:
				if (func_874(uParam0, 65))
				{
					func_842(uParam0, 1);
					uParam0->f_4173.f_177 = 0;
				}
				break;
			
			case 2:
				if (func_874(uParam0, 66))
				{
					func_842(uParam0, 1);
					uParam0->f_4173.f_177 = 0;
				}
				break;
			
			case 3:
				if (func_874(uParam0, 67))
				{
					func_842(uParam0, 1);
					uParam0->f_4173.f_177 = 0;
				}
				break;
			}
	}
}

void func_1196(var uParam0)
{
	if (!func_17(uParam0, 1))
	{
		func_886(uParam0, 0);
	}
	func_693(&(uParam0->f_2593), 9, 0);
	func_885(uParam0->f_709, uParam0->f_2593);
	uParam0->f_703 = 1;
	func_190(uParam0, 1);
}

void func_1197(var uParam0)
{
}

void func_1198(var uParam0)
{
	func_1146(uParam0);
	func_1144(uParam0);
	func_890(uParam0);
	if (uParam0->f_724.f_5)
	{
		func_462(unk_0xD803B885F5E47A62(), 0, 0, 0);
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
		uParam0->f_4360 = 1;
		func_698(&(uParam0->f_724), 0);
	}
}

void func_1199(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 1))
	{
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 1);
	}
}

void func_1200(var uParam0)
{
	func_1142(uParam0, 1);
	func_1139(uParam0, 1);
	func_1176(uParam0, 1);
	func_1169(uParam0, 1);
	func_1166(uParam0, 1);
	func_1164(uParam0, 1);
	func_1160(uParam0, 1);
	func_1157(uParam0, 1);
	func_1153(uParam0, 1);
	func_1141(uParam0, 1);
	if (func_1194(uParam0))
	{
		func_1190(uParam0, 1);
	}
}

void func_1201(var uParam0)
{
	bVar0 = true;
	if (!func_898(uParam0))
	{
		bVar0 = false;
	}
	if (!func_1084())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_698(&(uParam0->f_724), 0);
	}
}

void func_1202(var uParam0)
{
	func_1203(uParam0);
}

void func_1203(var uParam0)
{
	uParam0->f_709 = unk_0xB01F55A0FD1CFD49("CASINO_HEIST_BOARD_SETUP");
	uParam0->f_710 = unk_0xB01F55A0FD1CFD49("INSTRUCTIONAL_BUTTONS");
}

void func_1204(var uParam0)
{
	func_693(&(uParam0->f_2593), 0, 0);
	func_190(uParam0, 1);
}

void func_1205(var uParam0)
{
	func_698(&(uParam0->f_724), 0);
}

void func_1206(var uParam0)
{
}

void func_1207(var uParam0)
{
	if (!func_910(uParam0) && !func_909())
	{
		func_698(&(uParam0->f_724), 0);
	}
}

void func_1208(int iParam0)
{
	if (iLocal_249 != iParam0)
	{
		iLocal_249 = iParam0;
	}
}

int func_1209(var uParam0)
{
	if (!unk_0xA14BB9332558B949())
	{
		uParam0->f_4356 = func_269();
		if (uParam0->f_4356 != func_42())
		{
		}
	}
	if ((func_1219(uParam0) && func_1218(uParam0)) && func_1210(uParam0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 0))
		{
			unk_0x5D96D8530B3D0904(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 0);
		}
		return 1;
	}
	return 0;
}

bool func_1210(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 0))
	{
		if (func_1213(func_1217(2), func_1216(2)))
		{
			uParam0->f_1497.f_700 = func_1212(func_1217(2));
			uParam0->f_1497.f_730 = { func_1211(0) };
			func_843(uParam0, 2);
			uParam0->f_2529.f_50 = { 1f, -2,5f, -1,2f };
			uParam0->f_2529.f_56 = { 0f, 0f, 0f };
			uParam0->f_2529.f_35 = 0f;
			uParam0->f_2529.f_35.f_1 = 0f;
			uParam0->f_2529.f_35.f_2 = -180f;
			if (!func_482(uParam0, 2))
			{
				uParam0->f_1497.f_702 = 0;
				uParam0->f_1497.f_703 = 0;
			}
			if (unk_0xA14BB9332558B949())
			{
				uParam0->f_1497.f_1017 = -1;
				uParam0->f_1497.f_1022 = -1;
				uParam0->f_1497.f_1018 = -1;
				uParam0->f_1497.f_1023 = -1;
				uParam0->f_1497.f_1019 = -1;
				uParam0->f_1497.f_1024 = -1;
				uParam0->f_1497.f_1020 = 0;
				uParam0->f_1497.f_1025 = 0;
				uParam0->f_1497.f_1021 = 5;
				uParam0->f_1497.f_1026 = 5;
			}
			else
			{
				uParam0->f_1497.f_1017 = 0;
				uParam0->f_1497.f_1022 = 0;
				uParam0->f_1497.f_1018 = 0;
				uParam0->f_1497.f_1023 = 0;
				uParam0->f_1497.f_1019 = 0;
				uParam0->f_1497.f_1024 = 0;
				if (func_173(uParam0->f_4356, 1))
				{
					uParam0->f_1497.f_1020 = 1;
					uParam0->f_1497.f_1025 = 1;
				}
				else if (func_173(uParam0->f_4356, 2))
				{
					uParam0->f_1497.f_1020 = 2;
					uParam0->f_1497.f_1025 = 2;
				}
				else if (func_173(uParam0->f_4356, 3))
				{
					uParam0->f_1497.f_1020 = 2;
					uParam0->f_1497.f_1025 = 2;
				}
				if (func_173(uParam0->f_4356, 6))
				{
					uParam0->f_1497.f_1021 = 6;
					uParam0->f_1497.f_1026 = 6;
				}
				else if (func_173(uParam0->f_4356, 7))
				{
					uParam0->f_1497.f_1021 = 7;
					uParam0->f_1497.f_1026 = 7;
				}
				uParam0->f_1497.f_736.f_276 = 1;
			}
			unk_0x5D96D8530B3D0904(&(uParam0->f_1497.f_1015), 0);
		}
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 0);
}

Vector3 func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2712,903f, -366,1747f, -54,2342f;
		
		case 1:
			return 2716,304f, -369,5417f, -54,2342f;
		
		case 2:
			return 2712,903f, -372,6874f, -54,2342f;
		
		default:
	}
	return 2712,903f, -367,5012f, -54,2342f;
}

int func_1212(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return unk_0x3FF702268B97B673(sParam0);
	}
	return -1;
}

bool func_1213(char* sParam0, int iParam1)
{
	return (func_1215(sParam0) && func_1214(iParam1));
}

int func_1214(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!unk_0x55CB69E8157C5B54(iParam0))
		{
			unk_0x064E7408AD6E15E5(iParam0);
		}
		return 1;
	}
	return 0;
}

int func_1215(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (!unk_0xE6CD5C6925050049(sParam0))
		{
			unk_0x268029E44B2B3E36(sParam0, 0);
		}
		return 1;
	}
	return 0;
}

int func_1216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1237817995;
		
		case 1:
			return 170998764;
		
		case 2:
			return -1906424756;
		
		default:
	}
	return 0;
}

char* func_1217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "arcadeplan_01";
		
		case 1:
			return "arcadeplan_02";
		
		case 2:
			return "arcadeplan_03";
		
		default:
	}
	return "";
}

bool func_1218(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 0))
	{
		if (func_1213(func_1217(1), func_1216(1)))
		{
			uParam0->f_744.f_700 = func_1212(func_1217(1));
			uParam0->f_744.f_730 = { func_1211(0) };
			func_843(uParam0, 1);
			uParam0->f_2529.f_50 = { 1f, -2,5f, -1,2f };
			uParam0->f_2529.f_56 = { 0f, 0f, 0f };
			uParam0->f_2529.f_35 = 0f;
			uParam0->f_2529.f_35.f_1 = 0f;
			uParam0->f_2529.f_35.f_2 = -180f;
			if (func_164(uParam0->f_4356, 0) == 0)
			{
				uParam0->f_744.f_738 = 1;
				uParam0->f_744.f_739 = 0;
			}
			else
			{
				uParam0->f_744.f_738 = func_164(uParam0->f_4356, 0);
				if (func_492(uParam0->f_4356))
				{
					uParam0->f_744.f_739 = func_729(uParam0->f_4356);
				}
				else
				{
					uParam0->f_744.f_739 = 0;
				}
			}
			if (func_153(uParam0->f_4356, 0) == 0)
			{
				uParam0->f_744.f_740 = 1;
				uParam0->f_744.f_741 = 0;
			}
			else
			{
				uParam0->f_744.f_740 = func_153(uParam0->f_4356, 0);
				if (func_491(uParam0->f_4356))
				{
					uParam0->f_744.f_741 = func_725(uParam0->f_4356);
				}
				else
				{
					uParam0->f_744.f_741 = 0;
				}
			}
			if (func_490(uParam0->f_4356, 0) == 0)
			{
				uParam0->f_744.f_743 = 1;
			}
			else
			{
				uParam0->f_744.f_743 = func_490(uParam0->f_4356, 0);
			}
			if (func_928(uParam0->f_4356) == 0)
			{
				uParam0->f_744.f_742 = 1;
			}
			else
			{
				uParam0->f_744.f_742 = func_928(uParam0->f_4356);
			}
			if (Global_1700796[uParam0->f_4356].f_64 != 0)
			{
				uParam0->f_744.f_744 = Global_1700796[uParam0->f_4356].f_64;
			}
			else
			{
				uParam0->f_744.f_744 = 1;
			}
			uParam0->f_744.f_745 = 6;
			if (!func_482(uParam0, 1))
			{
				uParam0->f_744.f_702 = 0;
				uParam0->f_744.f_703 = 0;
			}
			unk_0x5D96D8530B3D0904(&(uParam0->f_744.f_736), 0);
		}
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_744.f_736, 0);
}

bool func_1219(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 0))
	{
		if (func_1213(func_1217(0), func_1216(0)))
		{
			uParam0->f_700 = func_1212(func_1217(0));
			uParam0->f_730 = { func_1211(0) };
			uParam0->f_2529.f_33 = 0;
			uParam0->f_2529.f_50 = { 1f, -2,5f, -1,2f };
			uParam0->f_2529.f_56 = { 0f, 0f, 0f };
			uParam0->f_2529.f_35 = 0f;
			uParam0->f_2529.f_35.f_1 = 0f;
			uParam0->f_2529.f_35.f_2 = -180f;
			if (func_179(uParam0->f_4356, 3))
			{
				uParam0->f_738 = 3;
			}
			else if (func_179(uParam0->f_4356, 4))
			{
				uParam0->f_738 = 4;
			}
			else if (func_179(uParam0->f_4356, 5))
			{
				uParam0->f_738 = 5;
			}
			else if (func_179(uParam0->f_4356, 6))
			{
				uParam0->f_738 = 6;
			}
			if (func_179(uParam0->f_4356, 7))
			{
				uParam0->f_739 = 7;
			}
			else if (func_179(uParam0->f_4356, 8))
			{
				uParam0->f_739 = 8;
			}
			unk_0x5D96D8530B3D0904(&(uParam0->f_736), 0);
		}
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_736, 0);
}

int func_1220()
{
	return iLocal_249;
}

void func_1221(var uParam0)
{
	if (func_910(uParam0) || func_909())
	{
		if (!uParam0->f_4359 && !func_909())
		{
			func_1223(uParam0);
			uParam0->f_4359 = 1;
		}
		else if (func_1222(uParam0) || func_909())
		{
			func_1208(2);
			uParam0->f_4359 = 0;
		}
	}
}

int func_1222(var uParam0)
{
	if ((uParam0->f_724 == 0 && uParam0->f_744.f_724 == 0) && uParam0->f_1497.f_724 == 0)
	{
		return 1;
	}
	return 0;
}

void func_1223(var uParam0)
{
	if (uParam0->f_724 < 5)
	{
		func_1224(&(uParam0->f_724), 5);
	}
	if (uParam0->f_744.f_724 < 5)
	{
		func_1224(&(uParam0->f_744.f_724), 5);
	}
	if (uParam0->f_1497.f_724 < 5)
	{
		func_1224(&(uParam0->f_1497.f_724), 5);
	}
}

void func_1224(var uParam0, int iParam1)
{
	uParam0->f_1 = *uParam0;
	unk_0x5D96D8530B3D0904(&(uParam0->f_4), uParam0->f_1);
	unk_0x0674E58A79778E99(&(uParam0->f_3), uParam0->f_1);
	*uParam0 = iParam1;
	if (*uParam0 == 7)
	{
		*uParam0 = 5;
	}
}

void func_1225()
{
	func_677(0);
	func_479();
	func_1226();
	if (unk_0x6E61BE9E61434AC1() != -1 && unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 0))
	{
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42, 1))
	{
		unk_0x0674E58A79778E99(&(Global_1700796[unk_0x6E61BE9E61434AC1()].f_42), 1);
	}
	if (Global_1696429)
	{
		Global_1696429 = 0;
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_1226()
{
	func_1227(func_1217(0));
	func_1227(func_1217(1));
	func_1227(func_1217(2));
}

void func_1227(char* sParam0)
{
	if (unk_0xE6CD5C6925050049(sParam0))
	{
		unk_0x683413D9B7010687(sParam0);
	}
}

int func_1228(var uParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 2))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 2);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1497.f_1015, 1))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1497.f_1015), 1);
	}
	unk_0xB57F88F0123F4C38();
	if (!Global_1696429)
	{
		Global_1696429 = 1;
	}
	return 1;
}

