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
	iLocal_117 = -1;
	iLocal_118 = -1;
	iLocal_121 = -1;
	sLocal_122 = "";
	iLocal_302 = 1;
	iLocal_303 = -1;
	if (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("appBusinessHub")) > 1)
	{
		func_543(0, 1);
	}
	unk_0xB57F88F0123F4C38();
	func_532();
	while (func_531())
	{
		func_530();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 9))
		{
			func_521();
			func_498();
		}
		func_481(iLocal_125);
		func_464();
		func_457();
		func_4();
		unk_0x4C81063C30E87DDB();
		if (func_3(&uLocal_316) && func_1(&uLocal_316, 1800, 0))
		{
			unk_0x5D96D8530B3D0904(&(Global_1676377.f_3), 28);
			iLocal_123 = 1;
		}
		wait(0);
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)
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

bool func_3(var uParam0)
{
	return uParam0->f_1;
}

void func_4()
{
	func_455();
	if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 3))
	{
		if (unk_0xC95D7AEEDEF4946B(uLocal_307))
		{
			iVar0 = unk_0xA52833FE33F41C53(uLocal_307);
			switch (iVar0)
			{
				case 0:
					func_454();
					unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
					break;
				
				case 1:
					func_360();
					break;
				
				case 2:
					func_359(1);
					unk_0x4D7F4CC43D4D0DE3(-1, "Log_In", "DLC_GR_MOC_Computer_Sounds", 1);
					break;
				
				case 3:
					if (func_358(0))
					{
						func_356("HT_BW_LT", "HT_BW_DIS", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_355())
					{
						func_354(0);
						func_347();
						func_346();
					}
					else
					{
						func_356("HT_BW_LT", "HT_BW_L5", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					break;
				
				case 4:
					if (func_358(1))
					{
						func_356("HT_BW_LT", "HT_BW_DIS", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_344())
					{
						func_356("HT_AF_P1", "NC_PRIV_SES_0", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_355())
					{
						if (func_343(unk_0xD803B885F5E47A62()))
						{
							if (func_342(unk_0xD803B885F5E47A62()))
							{
								func_354(1);
								func_339();
								func_346();
							}
							else
							{
								func_356("HT_AF_P1", "HT_AF_P1_D4", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
							}
						}
						else
						{
							func_356("HT_AF_P1", "HT_AF_P1_D1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
						}
					}
					else
					{
						func_356("HT_AF_P1", "HT_BW_L5", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					break;
				
				case 5:
					if (func_358(2))
					{
						func_356("HT_BW_LT", "HT_BW_DIS", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_344())
					{
						func_356("HT_SC_P1", "NC_PRIV_SES_1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_337(0))
					{
						if (func_336(unk_0xD803B885F5E47A62()))
						{
							func_354(2);
							func_328();
							func_346();
						}
						else
						{
							func_356("HT_SC_P1", "HT_SC_P1_D1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
						}
					}
					else
					{
						func_356("HT_BW_LT", "HT_BW_L11", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					break;
				
				case 6:
					if (func_358(3))
					{
						func_356("HT_BW_LT", "HT_BW_DIS", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_344())
					{
						func_356("HT_VC_P1", "NC_PRIV_SES_2", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_337(0))
					{
						if (func_327(unk_0xD803B885F5E47A62()))
						{
							func_354(3);
							func_36(3, -1);
						}
						else
						{
							func_356("HT_VC_P1", "HT_VC_P1_D1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
						}
					}
					else
					{
						func_356("HT_VC_P1", "HT_BW_L10", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					break;
				
				case 7:
					if (func_358(4))
					{
						func_356("HT_BW_LT", "HT_BW_DIS", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_344())
					{
						func_356("HT_GR_P1", "NC_PRIV_SES_3", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_355())
					{
						if (func_34(unk_0xD803B885F5E47A62()))
						{
							func_354(4);
							func_36(4, -1);
						}
						else
						{
							func_356("HT_GR_P1", "HT_GR_P1_D1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
						}
					}
					else
					{
						func_356("HT_GR_P1", "HT_BW_L5", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					break;
				
				case 8:
					if (func_358(5))
					{
						func_356("HT_BW_LT", "HT_BW_DIS", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_344())
					{
						func_356("HT_DW_P1", "NC_PRIV_SES_4", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
					}
					else if (func_31())
					{
						if (func_30(unk_0xD803B885F5E47A62()))
						{
							func_354(5);
							func_6();
							func_346();
						}
						else if (func_5(unk_0xD803B885F5E47A62()))
						{
							func_356("HT_DW_P1", "HT_DW_P1_D2", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
						}
						else
						{
							func_356("HT_DW_P1", "HT_DW_P1_D1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
						}
					}
					else
					{
						func_356("HT_DW_P1", "HT_BW_L7", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
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
					iVar1 = (iVar0 - 9);
					func_36(iLocal_125, iVar1);
					break;
			}
			unk_0x0674E58A79778E99(&iLocal_116, 3);
		}
	}
}

bool func_5(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_123, 14);
}

void func_6()
{
	func_29();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar1 = false;
		iVar2 = iVar0;
		iVar3 = 0;
		if (func_28(unk_0xD803B885F5E47A62(), iVar2))
		{
			iVar4 = func_26(unk_0xD803B885F5E47A62(), iVar2);
			iVar3 = func_25(unk_0xD803B885F5E47A62(), iVar4);
			if (!func_14(iVar3, iVar4, iVar0))
			{
				bVar1 = true;
			}
		}
		StringCopy(&Var5, "HT_DW_T", 16);
		StringIntConCat(&Var5, iVar0, 16);
		StringCopy(&Var13, "HT_DW_D", 16);
		StringIntConCat(&Var13, iVar0, 16);
		iVar17 = func_13(iVar0);
		if (!func_28(unk_0xD803B885F5E47A62(), iVar2))
		{
			StringCopy(&Var13, "HT_DW_P1_D3", 16);
			Var9 = { func_12(iVar2, 0) };
		}
		else if (iVar17 != 0)
		{
			Var13 = { func_10(iVar17, -1) };
			Var9 = { func_9(iVar17, iVar2) };
		}
		unk_0x7E60C62A7CE58FC8(iLocal_306, "ADD_JOB");
		unk_0x3CAEA85DA607305E(iVar0);
		func_8(&Var5);
		unk_0x3CAEA85DA607305E(-1);
		unk_0x3CAEA85DA607305E(0);
		if (unk_0xEA6BC48857E0AC4C(&Var9))
		{
			func_8(&Var13);
		}
		else
		{
			unk_0x7ACC3006A87F8B39(&Var13);
			unk_0x6B012227B3921E18(&Var9);
			unk_0x779B34565F4D71B1();
		}
		unk_0x1200CC973A2399C8(bVar1);
		unk_0x7E60D21B163E9D56();
		iVar0++;
	}
	func_7(5, "HT_DW_MT");
	unk_0x5D96D8530B3D0904(&iLocal_116, 4);
}

void func_7(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(iLocal_306, "SHOW_JOB_OVERLAY");
	unk_0x3CAEA85DA607305E(iParam0);
	func_8(sParam1);
	unk_0x7E60D21B163E9D56();
}

void func_8(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

struct<4> func_9(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
		case 12:
		case 9:
		case 11:
			Var0 = { func_12(iParam1, 1) };
			break;
	}
	return Var0;
}

struct<4> func_10(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "INVALID", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HT_JOB_CD_0", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HT_JOB_R3", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HT_JOB_R2", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HT_JOB_R6", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HT_BW_L1", 16);
			break;
		
		case 3:
			if (func_11(iParam1))
			{
				StringCopy(&Var0, "HT_JOB_CD_1", 16);
			}
			else
			{
				StringCopy(&Var0, "HT_JOB_CD_2", 16);
			}
			break;
		
		case 7:
			if (func_31())
			{
				StringCopy(&Var0, "HT_JOB_R4", 16);
			}
			else
			{
				StringCopy(&Var0, "HT_JOB_R5", 16);
			}
			break;
		
		case 5:
			if (func_31())
			{
				StringCopy(&Var0, "HT_JOB_R1", 16);
			}
			else
			{
				StringCopy(&Var0, "HT_JOB_R1a", 16);
			}
			break;
		
		case 9:
			StringCopy(&Var0, "HT_DW_P1_D5", 16);
			break;
		
		case 10:
			StringCopy(&Var0, "HT_DW_P1_D7", 16);
			break;
		
		case 11:
			StringCopy(&Var0, "HT_DW_P1_D6", 16);
			break;
		
		case 12:
			StringCopy(&Var0, "HT_DW_P1_D8", 16);
			break;
		
		case 15:
			if (iLocal_302 == 1)
			{
				StringCopy(&Var0, "HT_DW_P1_D9", 16);
			}
			else if (iLocal_302 == 2)
			{
				StringCopy(&Var0, "HT_DW_P1_D10", 16);
			}
			else
			{
				StringCopy(&Var0, "HT_DW_P1_D11", 16);
			}
			break;
		
		case 16:
			StringCopy(&Var0, "HT_SC_P1_D3", 16);
			break;
	}
	return Var0;
}

int func_11(int iParam0)
{
	if (((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241)
	{
		return 1;
	}
	return 0;
}

struct<4> func_12(int iParam0, int iParam1)
{
	StringCopy(&Var0, "*INVAILID*", 16);
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 4:
				StringCopy(&Var0, "HAPP_BTYPE_P2", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "HAPP_BTYPE_P3", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "HAPP_BTYPE_P4", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "HAPP_BTYPE_P5", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "HAPP_BTYPE_P6", 16);
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				StringCopy(&Var0, "HAPP_BTYPE_HP2", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "HAPP_BTYPE_HP3", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "HAPP_BTYPE_HP4", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "HAPP_BTYPE_HP5", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "HAPP_BTYPE_HP6", 16);
				break;
			}
	}
	return Var0;
}

int func_13(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	return uLocal_291[iParam0];
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	if (!func_24(unk_0xD803B885F5E47A62(), iParam0) && !func_23(iParam1))
	{
		func_22(9, iParam2);
		return 1;
	}
	if (Global_1370164[iParam1] >= Global_262145.f_17916)
	{
		func_22(10, iParam2);
		return 1;
	}
	if (func_16(unk_0xD803B885F5E47A62(), iParam0))
	{
		func_22(11, iParam2);
		return 1;
	}
	if (func_15(iParam1))
	{
		func_22(12, iParam2);
		return 1;
	}
	func_22(0, iParam2);
	return 0;
}

bool func_15(int iParam0)
{
	return Global_1370140[iParam0] != 0;
}

int func_16(int iParam0, int iParam1)
{
	if (!func_21(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = func_19(iParam0, iParam1);
	if ((Global_1590535[iParam0].f_274.f_183[iVar0].f_4 > 0 && !func_17(iParam0, iVar0)) && !func_23(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam0 != func_18() && func_21(iParam0, func_25(iParam0, iParam1)))
	{
		return Global_1590535[iParam0].f_274.f_183[iParam1].f_6;
	}
	return 0;
}

int func_18()
{
	return -1;
}

int func_19(int iParam0, int iParam1)
{
	if (func_20(iParam1) && iParam0 != func_18())
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

int func_20(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (func_20(iParam1) && iParam0 != func_18())
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

void func_22(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 9)
	{
		return;
	}
	uLocal_291[iParam1] = iParam0;
}

bool func_23(int iParam0)
{
	return Global_1370147[iParam0] != 0;
}

int func_24(int iParam0, int iParam1)
{
	if (func_21(iParam0, iParam1))
	{
		iVar0 = func_19(iParam0, iParam1);
		if (Global_1590535[iParam0].f_274.f_183[iVar0].f_4 > 0 && Global_1590535[iParam0].f_274.f_183[iVar0].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_20(Global_1590535[iParam0].f_274.f_183[iParam1]))
	{
		uVar0 = Global_1590535[iParam0].f_274.f_183[iParam1];
	}
	return uVar0;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			if (func_27(Global_1590535[iParam0].f_274.f_183[iVar0]) == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_27(int iParam0)
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

int func_28(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			iVar1 = Global_1590535[iParam0].f_274.f_183[iVar0];
			if (func_27(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_29()
{
	unk_0x7E60C62A7CE58FC8(iLocal_306, "CLEAR_JOBS");
	unk_0x7E60D21B163E9D56();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_22(0, iVar0);
		iVar0++;
	}
}

int func_30(int iParam0)
{
	if (iParam0 != func_18())
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

bool func_31()
{
	return func_32(unk_0xD803B885F5E47A62());
}

bool func_32(int iParam0)
{
	return func_33(iParam0, 1);
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 != func_18())
	{
		if (Global_1628237[iParam0].f_11 != func_18())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_34(int iParam0)
{
	return func_35(iParam0) != 0;
}

int func_35(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

void func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_253(iParam1);
			break;
		
		case 1:
			func_247(iParam1);
			break;
		
		case 2:
			func_224(iParam1);
			break;
		
		case 3:
			func_218();
			break;
		
		case 4:
			func_216();
			break;
		
		case 5:
			func_37(iParam1);
			break;
	}
}

void func_37(int iParam0)
{
	iVar0 = iParam0;
	if (func_28(unk_0xD803B885F5E47A62(), iVar0))
	{
		iLocal_305 = func_215(unk_0xD803B885F5E47A62(), iVar0);
		iVar1 = func_19(unk_0xD803B885F5E47A62(), iLocal_305);
		if (!func_24(unk_0xD803B885F5E47A62(), iLocal_305) && !func_23(iVar1))
		{
			func_214();
		}
		else if (func_16(unk_0xD803B885F5E47A62(), iLocal_305))
		{
			func_214();
		}
		else if (Global_1370164[func_213(iLocal_305)] >= Global_262145.f_17916)
		{
			func_214();
		}
		else if (func_15(func_213(iLocal_305)))
		{
			func_214();
		}
		else if (!func_39(192))
		{
			func_356("HT_DW_P1", func_38(), "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
		}
		else
		{
			Var2 = { func_12(iVar0, 1) };
			func_356("HT_DW_P1", "HT_DW_P1_D4", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, 6, -1, -1, &Var2, 0);
		}
	}
	else
	{
		func_214();
	}
}

char* func_38()
{
	return sLocal_122;
}

int func_39(int iParam0)
{
	if (!func_212(unk_0xD803B885F5E47A62(), iParam0, 0))
	{
		iVar0 = func_45(unk_0xD803B885F5E47A62(), iParam0, 0);
		if (iVar0 == 7)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_44("UA_ML_F_GOON1");
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_44("UA_ML_F_GOON2");
			}
			else
			{
				func_44("UA_ML_F_GOON3");
			}
		}
		else if (iVar0 == 14)
		{
			func_44("BKR_TF_R6");
		}
		else if (iVar0 == 15)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G1");
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G2");
			}
			else
			{
				func_44("GENERAL_MLF_G3");
			}
		}
		else if (iVar0 == 16)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G4");
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G5");
			}
			else
			{
				func_44("GENERAL_MLF_G6");
			}
		}
		else
		{
			func_44("BKR_TF_R6");
		}
		return 0;
	}
	if (!func_42(unk_0xD803B885F5E47A62()))
	{
		func_44("DBG_BUN_NB");
		return 0;
	}
	if (func_40(unk_0xD803B885F5E47A62()))
	{
		func_44("BKR_TF_R3");
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		func_44("BKR_TF_R3");
		return 0;
	}
	return 1;
}

int func_40(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_41(iParam0, 9);
	}
	return 0;
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_42(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1628237[iParam0].f_11 != func_18())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_43(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_26, 26);
}

void func_44(char* sParam0)
{
	sLocal_122 = sParam0;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (!func_75(func_184(iParam1, -1, -1, -1), func_138(iParam1, -1, 1, -1, -1, iParam0), func_84(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_32(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_73(iParam1) >= func_72(iVar0))
	{
		return 5;
	}
	if (func_71(iParam0))
	{
		return 6;
	}
	if (func_70(iParam0))
	{
		return 14;
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_64(iParam1) == 1)
	{
		if ((func_63() || func_62()) || ((!bParam2 && func_61() != 0) && func_64(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_64(iParam1) == 2)
	{
		if (!func_58(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1628237[iParam0].f_11.f_34 != func_18())
			{
				return 9;
			}
		}
		if (func_57(iParam0))
		{
			return 10;
		}
	}
	else if (func_55(iParam1))
	{
		if (func_53(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_52(iParam1))
	{
		if (func_51())
		{
			return 13;
		}
		if (func_344())
		{
			return 12;
		}
	}
	if (func_53(iParam0) + 1 < func_50(iVar0))
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
			if (!func_47(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_46(iParam0, 21) || func_46(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_208, iParam1);
}

int func_47(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (!func_48(iVar1, iParam0, 1))
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

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_49(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_18())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_1628237[iParam0].f_11 != func_18())
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

int func_50(int iParam0)
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

bool func_51()
{
	return Global_262145.f_15220;
}

int func_52(int iParam0)
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

int func_53(int iParam0)
{
	if (func_54(iParam0) == func_18())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_54(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_18();
}

int func_55(int iParam0)
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
	return func_56(iParam0, 0);
	return 0;
}

int func_56(int iParam0, int iParam1)
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

int func_57(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if ((Global_1628237[iParam0].f_11.f_34 != func_18() && Global_1628237[iParam0].f_11.f_34 == iVar1) && Global_1628237[iVar1].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_60() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_59() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_59() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_59()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar2))
		{
			if (func_42(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_60()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar2))
		{
			if (func_32(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_61()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_102;
}

bool func_62()
{
	return Global_1650640.f_11.f_144 != -1;
}

bool func_63()
{
	return Global_1650640.f_11.f_143 != -1;
}

int func_64(int iParam0)
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

int func_65(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_67())
	{
		iVar1 = Global_1628237[iParam0].f_11.f_11[iVar0];
		if (iVar1 != func_18())
		{
			if (unk_0x40B8C182D63932FC(iVar1))
			{
				if (func_71(iVar1))
				{
					return 7;
				}
				if (func_70(iVar1))
				{
					return 15;
				}
				if (func_66(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (((((unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 2) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 3)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 5)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 6)) || unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_4, 7)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_369.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_67()
{
	return (func_68() - 1);
}

int func_68()
{
	return func_69(unk_0xD803B885F5E47A62());
}

int func_69(int iParam0)
{
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_18() && Global_1628237[iVar0].f_11.f_450 == 1)
	{
		return 8;
	}
	return 4;
}

int func_70(int iParam0)
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

int func_71(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_72(int iParam0)
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

int func_73(int iParam0)
{
	return Global_1650640.f_11.f_147[func_74(iParam0)];
}

int func_74(int iParam0)
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

int func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_83(iParam0, bParam3, bParam4) || func_82(iParam1, bParam3, bParam4)) || func_76(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, bool bParam1, bool bParam2)
{
	return func_77(2, iParam0, 0, bParam1, bParam2);
}

int func_77(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_81(iParam0) - func_80(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_80(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_81(iParam0) - func_79(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_80(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_81(iParam0) - func_80(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62()] != 3)
		{
			iVar1 = (iVar1 - func_78(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
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

int func_79(int iParam0)
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

int func_80(int iParam0, bool bParam1)
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

int func_81(int iParam0)
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

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	return func_77(1, iParam0, 0, bParam1, bParam2);
}

int func_83(int iParam0, bool bParam1, bool bParam2)
{
	return func_77(0, iParam0, 0, bParam1, bParam2);
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_137(iParam1);
		
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
			return func_135(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_129(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_117(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
		case 233:
			return func_110(iParam1, iParam2, iParam3, unk_0x117658E336116132(iParam5), iParam4);
		
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
			return func_101(iParam1, iParam2);
		
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
			return func_98(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_97(iParam1);
		
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
			return func_93(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 158:
			return func_88(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		case 181:
			return func_85(iParam1, iParam2, unk_0x117658E336116132(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_87(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_86(iParam0, iParam2));
	return iVar0;
}

int func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_87(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_92(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_89(iParam0, iParam2));
	return iVar0;
}

int func_89(int iParam0, int iParam1)
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
			if (func_91(iParam1, 1))
			{
				vVar0 = { func_90(iParam1) };
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

Vector3 func_90(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_301;
}

bool func_91(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_42(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_18();
}

int func_92(int iParam0, int iParam1, var uParam2)
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

int func_93(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_96(iParam0, iParam1, iParam3);
	if (!func_95(iParam0))
	{
		iVar0 = (iVar0 + func_94(iParam0, iParam2));
	}
	return iVar0;
}

int func_94(int iParam0, int iParam1)
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
			if (func_53(iParam1) + 1 == 1)
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

int func_95(int iParam0)
{
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
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

int func_97(int iParam0)
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

int func_98(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_100(iParam0, iParam1);
	if (func_99(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_99(int iParam0)
{
	return 1;
}

int func_100(int iParam0, int iParam1)
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

int func_101(int iParam0, int iParam1)
{
	iVar0 = func_109(iParam0, iParam1);
	if (!func_108(iParam0))
	{
		iVar0 = (iVar0 + func_102(iParam0, func_106() + 1));
	}
	if (iParam0 == 14 || ((((func_108(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_102(iParam0, func_106() + 1));
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

int func_102(int iParam0, int iParam1)
{
	if (func_105(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_104(iParam0, iParam1);
			iVar2 = func_103(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_108(iParam0))
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

int func_103(int iParam0)
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

int func_104(int iParam0, int iParam1)
{
	if (func_108(iParam0))
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

int func_105(int iParam0)
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

int func_106()
{
	if (func_107() == func_18())
	{
		return 0;
	}
	return func_53(func_107());
}

int func_107()
{
	return Global_1628237[unk_0xD803B885F5E47A62()].f_11;
}

int func_108(int iParam0)
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

int func_109(int iParam0, int iParam1)
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

int func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_116(iParam0, iParam1, iParam2, iParam4);
	if (!func_115(iParam0))
	{
		if (iParam3 != func_18())
		{
			iVar0 = (iVar0 + func_112(iParam0, func_53(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_111(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_111(int iParam0)
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

int func_112(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
			if (func_115(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_114(iParam0))
	{
		iVar0 = func_114(iParam0);
	}
	else if (iVar0 < func_113(iParam0))
	{
		iVar0 = func_113(iParam0);
	}
	return iVar0;
}

int func_113(int iParam0)
{
	return 1;
}

int func_114(int iParam0)
{
	return 4;
}

int func_115(int iParam0)
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

int func_116(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_128(iParam0, iParam1, iParam2, iParam4);
	if (!func_127(iParam0))
	{
		if (iParam3 != func_18())
		{
			iVar0 = (iVar0 + func_119(iParam0, func_53(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_118(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_126(iParam0))
	{
		iVar1 = func_125(iParam3);
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
	else if (func_124(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_123(iParam2))
		{
			iVar0 = func_123(iParam2);
		}
	}
	if (iVar0 > func_121(iParam0))
	{
		iVar0 = func_121(iParam0);
	}
	else if (iVar0 < func_120(iParam0))
	{
		iVar0 = func_120(iParam0);
	}
	return iVar0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_121(int iParam0)
{
	if (!func_126(iParam0))
	{
		if (func_127(iParam0))
		{
			if (func_122(iParam0))
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

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 == func_18() || Global_1590535[iParam0].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590535[iParam0].f_274.f_264.f_3);
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_125(int iParam0)
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

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	if (func_126(iParam0) || func_124(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2, var uParam3)
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

int func_129(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_134(iParam0, iParam1, iParam2, iParam3);
	if (!func_133(iParam0))
	{
		iVar0 = (iVar0 + func_131(iParam0, func_106() + 1, -1, iParam2));
	}
	if (func_130(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_130(int iParam0)
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

int func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_132(iParam0))
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
	else if (func_133(iParam0))
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

int func_132(int iParam0)
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

int func_133(int iParam0)
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

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_135(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_136(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_136(int iParam0, int iParam1)
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

int func_137(int iParam0)
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

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_183(iParam1);
		
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
			return func_179(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_175(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_169(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
		
		case 233:
			return func_160(iParam1, iParam3, iParam4, unk_0x117658E336116132(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_159(iParam1, iParam3);
		
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
			return func_158(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_157(iParam1);
		
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
			return func_151(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_145(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_139(iParam1, iParam3, unk_0x117658E336116132(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_139(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_144(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_143(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_142(func_53(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_141(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_140(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_141(int iParam0, int iParam1)
{
	return func_140(iParam0, iParam1) > 0;
}

int func_142(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_143(int iParam0, int iParam1)
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

int func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_145(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		iVar0 = (iVar0 + func_150(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_149(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_148(func_53(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_147(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_146(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_146(int iParam0, int iParam1)
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

bool func_147(int iParam0, int iParam1)
{
	return func_146(iParam0, iParam1) > 0;
}

int func_148(int iParam0, int iParam1, int iParam2)
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
			if (iParam2 != func_18())
			{
				if (func_91(iParam2, 1))
				{
					vVar0 = { func_90(iParam2) };
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

int func_149(int iParam0, int iParam1)
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

int func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_151(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
		if (func_95(iParam0))
		{
			iVar0 = (iVar0 + func_94(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_156(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_155(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_154(func_53(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_153(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_152(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_152(int iParam0, int iParam1)
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

bool func_153(int iParam0, int iParam1)
{
	return func_152(iParam0, iParam1) > 0;
}

int func_154(int iParam0, int iParam1)
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

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_157(int iParam0)
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

int func_158(int iParam0, int iParam1, int iParam2)
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
	if (func_99(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_159(int iParam0, int iParam1)
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
	if ((func_108(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_102(iParam0, func_106() + 1));
	}
	return iVar0;
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_115(iParam0))
		{
			if (iParam3 != func_18())
			{
				iVar0 = (iVar0 + func_112(iParam0, func_53(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_18())
		{
			iVar0 = (iVar0 + func_165(iParam0, func_53(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_164(0, iParam1) != -1)
		{
			if (iParam3 != func_18())
			{
				iVar0 = (iVar0 + func_163(func_53(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_162(iParam0))
		{
			iVar0 = (iVar0 + func_161(iParam0));
		}
	}
	return iVar0;
}

int func_161(int iParam0)
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

bool func_162(int iParam0)
{
	return func_161(iParam0) > 0;
}

int func_163(var uParam0, int iParam1)
{
	return 2;
}

int func_164(int iParam0, int iParam1)
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

int func_165(int iParam0, int iParam1)
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
			iVar0 = func_166(5326, -1, 0);
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

int func_166(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_167(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_167(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_168();
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

int func_168()
{
	return Global_1312745;
}

int func_169(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		if (func_127(iParam0))
		{
			if (iParam3 != func_18())
			{
				iVar0 = (iVar0 + func_119(iParam0, func_53(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_18())
		{
			iVar0 = (iVar0 + func_174(iParam0, func_53(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_173(0, iParam1) != -1)
		{
			if (iParam3 != func_18())
			{
				iVar0 = (iVar0 + func_172(func_53(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_171(iParam0))
		{
			iVar0 = (iVar0 + func_170(iParam0));
		}
	}
	return iVar0;
}

int func_170(int iParam0)
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

bool func_171(int iParam0)
{
	return func_170(iParam0) > 0;
}

int func_172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_122(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_122(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_122(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_122(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_122(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_122(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_122(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_122(iParam1))
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

int func_173(int iParam0, int iParam1)
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

int func_174(int iParam0, int iParam1)
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

int func_175(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_131(iParam0, func_106() + 1, -1, iParam2) == 1)
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
		if (func_133(iParam0))
		{
			iVar0 = (iVar0 + func_131(iParam0, func_106() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_178(iParam0, func_106() + 1));
	}
	if (!bParam3)
	{
		if (func_177(iParam0))
		{
			iVar0 = (iVar0 + func_176(iParam0));
		}
	}
	return iVar0;
}

int func_176(int iParam0)
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

bool func_177(int iParam0)
{
	return func_176(iParam0) > 0;
}

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0, int iParam1, int iParam2)
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
	iVar0 = (iVar0 + func_182(iParam0, func_106() + 1, iParam2));
	iVar0 = (iVar0 + func_180(iParam0));
	return iVar0;
}

int func_180(int iParam0)
{
	if (func_181(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_181(int iParam0)
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

int func_182(int iParam0, var uParam1, int iParam2)
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

int func_183(int iParam0)
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

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return func_211(iParam1);
		
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
			return func_208(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_205(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_202(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_199(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_198(iParam1, iParam2);
		
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
			return func_197();
		
		case 218:
			return func_196();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_195(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_194(iParam1, iParam2);
		
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
			return func_191(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_188(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_185(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_185(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_141(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_186(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_186(int iParam0, var uParam1)
{
	if (func_141(iParam0, uParam1))
	{
		return (func_140(iParam0, uParam1) + func_187(iParam0, uParam1));
	}
	return 0;
}

int func_187(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_188(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_147(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_189(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_189(int iParam0, int iParam1)
{
	if (func_147(iParam0, iParam1))
	{
		return (func_146(iParam0, iParam1) + func_190(iParam0, iParam1));
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
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

int func_191(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		if (func_153(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_192(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_192(int iParam0, int iParam1)
{
	if (func_153(iParam0, iParam1))
	{
		return (func_152(iParam0, iParam1) + func_193(iParam0, iParam1));
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0, int iParam1)
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

int func_195(int iParam0, int iParam1, int iParam2)
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

int func_196()
{
	iVar0 = 32;
	return iVar0;
}

int func_197()
{
	iVar0 = 8;
	return iVar0;
}

int func_198(int iParam0, int iParam1)
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
		iVar0 = (iVar0 + func_102(iParam0, func_106() + 1));
	}
	return iVar0;
}

int func_199(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_162(iParam0))
		{
			iVar0 = (iVar0 + func_200(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_200(int iParam0, var uParam1)
{
	if (func_162(iParam0))
	{
		return (func_161(iParam0) + func_201(iParam0, uParam1));
	}
	return 0;
}

int func_201(int iParam0, var uParam1)
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

int func_202(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_171(iParam0))
		{
			iVar0 = (iVar0 + func_203(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_203(int iParam0, int iParam1)
{
	if (func_171(iParam0))
	{
		return (func_170(iParam0) + func_204(iParam0, iParam1));
	}
	return 0;
}

int func_204(int iParam0, int iParam1)
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

int func_205(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_177(iParam0))
		{
			iVar0 = (iVar0 + func_206(iParam0));
		}
	}
	return iVar0;
}

int func_206(int iParam0)
{
	if (func_177(iParam0))
	{
		return (func_176(iParam0) + func_207(iParam0));
	}
	return 0;
}

int func_207(int iParam0)
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

int func_208(int iParam0, int iParam1, var uParam2)
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
	iVar0 = (iVar0 + func_209(iParam0));
	return iVar0;
}

int func_209(int iParam0)
{
	if (func_181(iParam0))
	{
		if (func_210(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_210(int iParam0)
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

int func_211(int iParam0)
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

bool func_212(int iParam0, int iParam1, bool bParam2)
{
	return func_45(iParam0, iParam1, bParam2) == -1;
}

int func_213(int iParam0)
{
	if (func_20(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_214()
{
	unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable", "DLC_GR_MOC_Computer_Sounds", 1);
}

int func_215(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			iVar1 = Global_1590535[iParam0].f_274.f_183[iVar0];
			if (func_27(iVar1) == iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_216()
{
	if (!func_24(unk_0xD803B885F5E47A62(), func_35(unk_0xD803B885F5E47A62())))
	{
		func_356("HT_GR_P1", "HT_GR_P1_D2", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else if (func_217())
	{
		func_356("HT_GR_P1", "OR_RESUP_RES", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else if (Global_1370164[5] >= Global_262145.f_17916)
	{
		func_356("HT_GR_P1", "OR_MIS_NA_B", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else if (func_15(5))
	{
		func_356("HT_GR_P1", "OR_MIS_NA_C", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else if (!func_39(225))
	{
		func_356("HT_GR_P1", func_38(), "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else
	{
		func_356("HT_GR_P1", "BU_STEAL_SUP", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, 5, -1, -1, 0, 0);
	}
}

int func_217()
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[5].f_4 == 1 && !func_23(5))
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	if (!func_212(unk_0xD803B885F5E47A62(), 178, 0))
	{
		iVar0 = func_45(unk_0xD803B885F5E47A62(), 178, 0);
		if (iVar0 == 14)
		{
			func_356("HT_VC_P1", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			return;
		}
		else if (iVar0 == 15)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_356("HT_VC_P1", "GENERAL_MLF_G1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_356("HT_VC_P1", "GENERAL_MLF_G2", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			else
			{
				func_356("HT_VC_P1", "GENERAL_MLF_G3", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			return;
		}
		else if (iVar0 == 16)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_356("HT_VC_P1", "GENERAL_MLF_G4", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_356("HT_VC_P1", "GENERAL_MLF_G5", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			else
			{
				func_356("HT_VC_P1", "GENERAL_MLF_G6", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			return;
		}
	}
	if (!func_223(12))
	{
		func_356("HT_VC_P1", "SEC_V_STEAL_F", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else if (func_219(unk_0xD803B885F5E47A62(), func_222(unk_0xD803B885F5E47A62())))
	{
		func_356("HT_VC_P1", "HT_VC_P1_D2", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else
	{
		func_356("SEC_VEH_STEAL", "SEC_VEH_STEALQ", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, 4, -1, -1, 0, 0);
	}
}

bool func_219(int iParam0, int iParam1)
{
	return func_220(iParam0, iParam1) >= 40;
}

int func_220(int iParam0, int iParam1)
{
	if (func_221(iParam1) && iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_134.f_1;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (iParam0 > 0 && iParam0 < 11)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_134;
}

int func_223(int iParam0)
{
	if (iParam0 == 8)
	{
		if (func_3(&(Global_2514606.f_144)) && !func_1(&(Global_2514606.f_144), Global_2514804, 0))
		{
			return 0;
		}
	}
	else if (func_3(&(Global_2514606.f_146)) && !func_1(&(Global_2514606.f_146), Global_262145.f_18842, 1))
	{
		return 0;
	}
	return 1;
}

void func_224(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 5))
	{
		iLocal_301 = func_246(iParam0);
		if (!func_245(iLocal_302))
		{
			func_214();
		}
		else if (func_244(iLocal_301))
		{
			func_214();
		}
		else if (!func_39(167))
		{
			func_356("HT_SC_P1", func_38(), "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
		}
		else
		{
			Var0 = { func_241(iLocal_303, iLocal_302, func_243()) };
			func_356("HT_SC_P2", &Var0, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, 3, -1, -1, 0, 0);
		}
	}
	else
	{
		iLocal_302 = iParam0 + 1;
		if (!func_336(unk_0xD803B885F5E47A62()))
		{
			func_356("HT_SC_P1", "HT_SC_P1_D1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
		}
		else if (!func_245(iLocal_302))
		{
			func_356("HT_SC_P1", "HT_SC_P1_D2", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iLocal_116, 5);
			func_225();
			func_346();
		}
	}
}

void func_225()
{
	func_29();
	iVar1 = func_240();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar2 = 0;
		StringCopy(&Var3, "", 16);
		StringCopy(&Var7, "", 16);
		bVar11 = iVar1 > iVar0;
		if (bVar11)
		{
			iVar2 = func_246(iVar0);
			StringCopy(&Var3, func_239(iVar2), 16);
			StringCopy(&Var7, func_238(iVar2), 16);
			if (func_236(iVar2) < iLocal_302)
			{
				bVar11 = false;
				func_22(15, iVar0);
			}
		}
	else
	{
		}
		else
		{
			StringCopy(&Var12, "HT_SCW_D", 16);
			StringIntConCat(&Var12, (iLocal_302 - 1), 16);
			cVar16 = { func_235(iLocal_303) };
			if (iLocal_302 == 1 && func_243())
			{
				StringCopy(&Var12, "HT_SCW_D3", 16);
				cVar16 = { func_233(func_234(iVar2)) };
			}
			else
			{
				Var22 = { func_233(func_234(iVar2)) };
			}
			iVar28 = func_227(iVar2);
			iVar29 = 0;
			if (iVar28 <= 0)
			{
				if (!func_226())
				{
					iVar28 = (Global_262145.f_15096 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), Global_2514606.f_142)));
				}
			}
			if (iVar28 > 0)
			{
				iVar29 = 2;
				func_22(16, iVar0);
			}
			if (func_13(iVar0) != 0)
			{
				Var12 = { func_10(func_13(iVar0), -1) };
				StringCopy(&cVar16, "", 24);
				if (func_13(iVar0) == 15)
				{
					MemCopy(&cVar16, {Var7}, 6);
				}
			}
			unk_0x7E60C62A7CE58FC8(iLocal_306, "ADD_JOB");
			unk_0x3CAEA85DA607305E(iVar0);
			func_8(&Var3);
			unk_0x3CAEA85DA607305E(iVar28);
			unk_0x3CAEA85DA607305E(iVar29);
			if (unk_0xEA6BC48857E0AC4C(&cVar16))
			{
				func_8(&Var12);
			}
			else
			{
				unk_0x7ACC3006A87F8B39(&Var12);
				unk_0x6B012227B3921E18(&cVar16);
				if (!unk_0xEA6BC48857E0AC4C(&Var22))
				{
					unk_0x6B012227B3921E18(&Var22);
				}
				unk_0x779B34565F4D71B1();
			}
			unk_0x1200CC973A2399C8(bVar11);
			unk_0x3CAEA85DA607305E(-1);
			unk_0x7E60D21B163E9D56();
			iVar0++;
		}
	}
	func_7(2, "HT_SC_MTW");
	unk_0x5D96D8530B3D0904(&iLocal_116, 4);
}

int func_226()
{
	if (func_3(&(Global_2514606.f_142)) && !func_1(&(Global_2514606.f_142), Global_262145.f_15096, 1))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0)
{
	if (func_232(iParam0))
	{
		if (func_231(iParam0))
		{
			iVar0 = func_230(iParam0);
			if (Global_2537071.f_5124.f_370[iVar0] != -1)
			{
				iVar1 = Global_2537071.f_5124.f_370[iVar0];
			}
			else
			{
				iVar1 = func_166(func_229(iVar0), -1, 0);
			}
			iVar2 = ((iVar1 + func_228()) - unk_0xDD0E7998AE8AD485());
			return iVar2;
		}
	}
	return -1;
}

int func_228()
{
	return (Global_262145.f_15094 / 1000);
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3658;
		
		case 1:
			return 3659;
		
		case 2:
			return 3660;
		
		case 3:
			return 3661;
		
		case 4:
			return 3662;
		
		default:
	}
	return 3658;
}

int func_230(int iParam0)
{
	if (func_232(iParam0))
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

int func_231(int iParam0)
{
	if (func_232(iParam0))
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

int func_232(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

struct<6> func_233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HT_SCW_DS0", 24);
			break;
		
		case 1:
			StringCopy(&Var0, "HT_SCW_DS1", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "HT_SCW_DS2", 24);
			break;
	}
	return Var0;
}

int func_234(int iParam0)
{
	if (func_232(iParam0))
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

struct<6> func_235(int iParam0)
{
	StringCopy(&Var0, "NC_CONTRATP_", 24);
	StringIntConCat(&Var0, iParam0, 24);
	return Var0;
}

int func_236(int iParam0)
{
	if (func_231(iParam0))
	{
		iVar0 = func_237(iParam0);
		iVar1 = func_234(iParam0);
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

int func_237(int iParam0)
{
	if (func_232(iParam0))
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

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_HT0";
			break;
		
		case 2:
			return "MP_WHOUSE_HT1";
			break;
		
		case 3:
			return "MP_WHOUSE_HT2";
			break;
		
		case 4:
			return "MP_WHOUSE_HT3";
			break;
		
		case 5:
			return "MP_WHOUSE_HT4";
			break;
		
		case 6:
			return "MP_WHOUSE_HT5";
			break;
		
		case 7:
			return "MP_WHOUSE_HT6";
			break;
		
		case 8:
			return "MP_WHOUSE_HT7";
			break;
		
		case 9:
			return "MP_WHOUSE_HT8";
			break;
		
		case 10:
			return "MP_WHOUSE_HT9";
			break;
		
		case 11:
			return "MP_WHOUSE_HT10";
			break;
		
		case 12:
			return "MP_WHOUSE_HT11";
			break;
		
		case 13:
			return "MP_WHOUSE_HT12";
			break;
		
		case 14:
			return "MP_WHOUSE_HT13";
			break;
		
		case 15:
			return "MP_WHOUSE_HT14";
			break;
		
		case 16:
			return "MP_WHOUSE_HT15";
			break;
		
		case 17:
			return "MP_WHOUSE_HT16";
			break;
		
		case 18:
			return "MP_WHOUSE_HT17";
			break;
		
		case 19:
			return "MP_WHOUSE_HT18";
			break;
		
		case 20:
			return "MP_WHOUSE_HT19";
			break;
		
		case 21:
			return "MP_WHOUSE_HT20";
			break;
		
		case 22:
			return "MP_WHOUSE_HT21";
			break;
	}
	return "";
}

char* func_239(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
			break;
		
		case 2:
			return "MP_WHOUSE_1";
			break;
		
		case 3:
			return "MP_WHOUSE_2";
			break;
		
		case 4:
			return "MP_WHOUSE_3";
			break;
		
		case 5:
			return "MP_WHOUSE_4";
			break;
		
		case 6:
			return "MP_WHOUSE_5";
			break;
		
		case 7:
			return "MP_WHOUSE_6";
			break;
		
		case 8:
			return "MP_WHOUSE_7";
			break;
		
		case 9:
			return "MP_WHOUSE_8";
			break;
		
		case 10:
			return "MP_WHOUSE_9";
			break;
		
		case 11:
			return "MP_WHOUSE_10";
			break;
		
		case 12:
			return "MP_WHOUSE_11";
			break;
		
		case 13:
			return "MP_WHOUSE_12";
			break;
		
		case 14:
			return "MP_WHOUSE_13";
			break;
		
		case 15:
			return "MP_WHOUSE_14";
			break;
		
		case 16:
			return "MP_WHOUSE_15";
			break;
		
		case 17:
			return "MP_WHOUSE_16";
			break;
		
		case 18:
			return "MP_WHOUSE_17";
			break;
		
		case 19:
			return "MP_WHOUSE_18";
			break;
		
		case 20:
			return "MP_WHOUSE_19";
			break;
		
		case 21:
			return "MP_WHOUSE_20";
			break;
		
		case 22:
			return "MP_WHOUSE_21";
			break;
	}
	return "";
}

int func_240()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iVar0] != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<4> func_241(int iParam0, int iParam1, var uParam2)
{
	StringCopy(&Var0, "", 16);
	iVar4 = iParam0;
	iVar5 = func_242(iParam0);
	iVar6 = iParam1;
	if (uParam2 && iVar6 == 1)
	{
		StringCopy(&Var0, "WHOUSE_SHISI", 16);
		StringIntConCat(&Var0, iVar5, 16);
	}
	else
	{
		StringCopy(&Var0, "WHOUSE_SHI", 16);
		StringIntConCat(&Var0, iVar6, 16);
		StringConCat(&Var0, "D", 16);
		StringIntConCat(&Var0, iVar4, 16);
	}
	return Var0;
}

int func_242(int iParam0)
{
	if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 6)
	{
		return 3;
	}
	else if (iParam0 == 7)
	{
		return 4;
	}
	else if (iParam0 == 8)
	{
		return 5;
	}
	else if (iParam0 == 9)
	{
		return 6;
	}
	return 0;
}

bool func_243()
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_116, 6);
}

bool func_244(int iParam0)
{
	return func_227(iParam0) > 0;
}

int func_245(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar1 < func_240())
	{
		iVar2 = func_246(iVar1);
		if (func_236(iVar2) >= iVar0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iParam0] != 0)
	{
		return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_106[iParam0];
	}
	return 0;
}

void func_247(int iParam0)
{
	iLocal_304 = func_252(iParam0);
	if (func_251(unk_0xD803B885F5E47A62()))
	{
		func_214();
	}
	else if (iLocal_304 != 8 && func_249(iLocal_304))
	{
		func_214();
	}
	else if (!func_39(229))
	{
		func_356("HT_AF_P1", func_38(), "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else
	{
		StringCopy(&Var0, "HAPP_STEAL_C1", 16);
		StringCopy(&Var4, "", 16);
		if (iLocal_304 != 8)
		{
			StringCopy(&Var0, "HAPP_STEAL_C0", 16);
			Var4 = { func_248(iLocal_304) };
		}
		func_356("HT_AF_P1", &Var0, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, 2, -1, -1, &Var4, 0);
	}
}

struct<4> func_248(int iParam0)
{
	StringCopy(&Var0, "INVALID", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPPT_ANIMAL", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPPT_ART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPPT_CHEMS", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPPT_GOODS", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPPT_JEWEL", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPPT_MEDS", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPPT_NARC", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPPT_TOBAC", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPPT_MIXED", 16);
			break;
	}
	return Var0;
}

int func_249(int iParam0)
{
	if (func_3(&(Global_2514754[iParam0])) && func_1(&(Global_2514754[iParam0]), Global_2514754.f_17[iParam0], 0))
	{
		func_250(&(Global_2514754[iParam0]));
		return 0;
	}
	return func_3(&(Global_2514754[iParam0]));
}

void func_250(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_251(int iParam0)
{
	return 0 == func_123(iParam0);
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 1:
			return 2;
		
		case 2:
			return 5;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 4;
		
		case 6:
			return 7;
		
		case 7:
			return 3;
		
		case 8:
			return 8;
		
		default:
	}
	return -1;
}

void func_253(int iParam0)
{
	iVar0 = func_326(iParam0);
	if (!func_256(iParam0, 1))
	{
		func_214();
	}
	else if (!func_255(iVar0))
	{
		func_356("HT_BW_LT", func_38(), "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
	}
	else
	{
		StringCopy(&Var1, "HT_BW_T", 16);
		StringIntConCat(&Var1, iParam0, 16);
		func_356("HT_BW_LT", "HT_BW_L0", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, 1, -1, -1, &Var1, 0);
		func_254(iVar0);
	}
}

void func_254(int iParam0)
{
	iLocal_117 = iParam0;
}

int func_255(int iParam0)
{
	if (!func_212(unk_0xD803B885F5E47A62(), iParam0, 0))
	{
		iVar0 = func_45(unk_0xD803B885F5E47A62(), iParam0, 0);
		if (iVar0 == 7)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_44("HT_BW_L2");
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_44("HT_BW_L3");
			}
			else
			{
				func_44("HT_BW_L4");
			}
		}
		else if (iVar0 == 14)
		{
			func_44("BKR_TF_R6");
		}
		else if (iVar0 == 15)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G1");
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G2");
			}
			else
			{
				func_44("GENERAL_MLF_G3");
			}
		}
		else if (iVar0 == 16)
		{
			if (func_32(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G4");
			}
			else if (func_43(unk_0xD803B885F5E47A62()))
			{
				func_44("GENERAL_MLF_G5");
			}
			else
			{
				func_44("GENERAL_MLF_G6");
			}
		}
		else
		{
			func_44("HT_BW_L1");
		}
		return 0;
	}
	if (!func_42(unk_0xD803B885F5E47A62()))
	{
		func_44("HT_BW_L5");
		return 0;
	}
	if (func_40(unk_0xD803B885F5E47A62()))
	{
		func_44("HT_BW_L6");
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		func_44("HT_BW_L6");
		return 0;
	}
	return 1;
}

int func_256(int iParam0, bool bParam1)
{
	iVar0 = func_326(iParam0);
	if (func_325(iVar0))
	{
		func_22(1, iParam0);
		return 0;
	}
	if (bParam1)
	{
		if (func_324(iVar0, &iVar1))
		{
			func_22(iVar1, iParam0);
			return 0;
		}
	}
	if (func_323(unk_0xD803B885F5E47A62()))
	{
		func_22(8, iParam0);
		return 0;
	}
	if (iVar0 == 248 || iVar0 == 241)
	{
		if (!func_322(unk_0xD803B885F5E47A62()))
		{
			func_22(4, iParam0);
			return 0;
		}
	}
	if (iVar0 == 239 || iVar0 == 240)
	{
		if (func_45(unk_0xD803B885F5E47A62(), iVar0, 0) == 4)
		{
			func_22(7, iParam0);
			return 0;
		}
	}
	if (!func_257(func_326(iParam0)))
	{
		if (iLocal_118 == -1)
		{
			func_22(5, iParam0);
		}
		else
		{
			iLocal_118 = -1;
			func_22(6, iParam0);
		}
		return 0;
	}
	func_22(0, iParam0);
	return 1;
}

int func_257(int iParam0)
{
	if (iParam0 == 239)
	{
		iLocal_118 = -1;
		return 1;
	}
	if (func_258(iParam0, &iLocal_118))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	iVar25 = func_107();
	iVar22 = 0;
	while (iVar22 < 32)
	{
		iVar26 = iVar22;
		if (func_321(iVar26, 1, 1))
		{
			bVar33 = ((func_54(iVar26) != iVar25 || iVar25 == func_18()) && iVar26 != unk_0xD803B885F5E47A62());
			iVar24 = 0;
			while (iVar24 < 10)
			{
				if (iVar0[iVar24] != -1)
				{
					vVar27 = { func_320(iParam0, iVar24) };
					if (!func_319(vVar27))
					{
						if (unk_0xE4EDC4B0E92C078B(Global_2416079[iVar26]))
						{
							vVar30 = { unk_0xAC14F6E4B17D7835(Global_2416079[iVar26]) };
							vVar30.z = unk_0x1B5F75EF87755C4E(vVar30.x, vVar30.y);
						}
						else
						{
							vVar30 = { func_263(iVar26) };
						}
						if (!func_319(vVar30))
						{
							if (vdist2(vVar30, vVar27) < (func_262(iParam0, bVar33) * func_262(iParam0, bVar33)))
							{
								iVar0[iVar24] = -1;
								if (!bVar33)
								{
									bVar34 = true;
								}
							}
						}
					}
					else
					{
						iVar0[iVar24] = -1;
					}
				}
				iVar24++;
			}
		}
		iVar22++;
	}
	iVar24 = 0;
	while (iVar24 < 10)
	{
		if (iVar0[iVar24] != -1 && !func_319(func_320(iParam0, iVar24)))
		{
			if (!func_261(iParam0, iVar24))
			{
				if (!func_259(iParam0, iVar24))
				{
					iVar11[iVar23] = iVar24;
					iVar23++;
				}
			}
		}
		iVar24++;
	}
	if (iVar23 > 0)
	{
		*iParam1 = iVar11[unk_0x09AC81E49EA267F7(0, iVar23)];
		return 1;
	}
	else if (bVar34)
	{
		*iParam1 = -1;
	}
	else
	{
		*iParam1 = -2;
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 240:
			if (unk_0xE4EDC4B0E92C078B(Global_2416079[unk_0xD803B885F5E47A62()]))
			{
				vVar0 = { unk_0xAC14F6E4B17D7835(Global_2416079[unk_0xD803B885F5E47A62()]) };
				vVar0.z = unk_0x1B5F75EF87755C4E(vVar0.x, vVar0.y);
			}
			else
			{
				vVar0 = { func_263(unk_0xD803B885F5E47A62()) };
			}
			if (vdist2(func_320(iParam0, iParam1), vVar0) > (func_260(iParam0) * func_260(iParam0)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_260(int iParam0)
{
	switch (iParam0)
	{
		case 240:
			return 4500f;
		
		default:
	}
	return 99999f;
}

int func_261(int iParam0, int iParam1)
{
	return 0;
}

float func_262(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 239:
			if (bParam1)
			{
				return 50f;
			}
			return 100f;
		
		case 240:
			if (bParam1)
			{
				return 100f;
			}
			return 500f;
		
		case 241:
			if (bParam1)
			{
				return 50f;
			}
			return 300f;
		
		case 242:
			if (bParam1)
			{
				return 100f;
			}
			return 300f;
		
		case 244:
			if (bParam1)
			{
				return 50f;
			}
			return 250f;
		
		case 248:
			if (bParam1)
			{
				return 100f;
			}
			return 300f;
		
		default:
	}
	return 0f;
}

Vector3 func_263(int iParam0)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		vVar1 = { func_317(func_318(Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_28)) };
		if (vmag(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	else
	{
		func_314(func_316(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			vVar1 = { func_317(func_318(iVar0)) };
			if (vmag(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_313(iParam0))
	{
		vVar1 = { func_268(iParam0) };
		if (vmag(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (func_267(iParam0))
	{
		iVar4 = func_266(iParam0);
		if (iVar4 > -1)
		{
			vVar1 = { Global_1676377.f_488[iVar4] };
			if (vmag(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_265(iParam0))
	{
		vVar1 = { func_264(iParam0) };
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
	return func_316(iParam0);
}

Vector3 func_264(int iParam0)
{
	return Global_2425662[iParam0].f_68.f_7;
}

int func_265(int iParam0)
{
	if (Global_2425662[iParam0].f_68.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_2425662[iParam0].f_310.f_13;
	}
	return -1;
}

int func_267(int iParam0)
{
	if (iParam0 != func_18() && (func_321(iParam0, 1, 1) || Global_2405072.f_2671))
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 1);
		return bVar0;
	}
	return 0;
}

Vector3 func_268(int iParam0)
{
	if (iParam0 == func_18())
	{
	}
	if (func_312(iParam0))
	{
		iVar0 = func_311(iParam0);
		if (iVar0 != func_18())
		{
			if (!func_310(iVar0))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_661[iVar0][1]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_661[iVar0][1], false);
				}
				else
				{
					return Global_2425662[func_311(iParam0)].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_307(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1];
				}
			}
		}
	}
	else if (func_306(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_305))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_305, false);
		}
	}
	else if (func_305(iParam0) && !func_304(iParam0))
	{
		iVar2 = Global_2425662[iParam0].f_310.f_8;
		if (iVar2 != func_18())
		{
			iVar3 = func_307(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3];
			}
		}
	}
	else if (func_303(iParam0) && !func_302(iParam0))
	{
		if (func_313(iParam0) && func_301())
		{
			return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
		}
		iVar4 = Global_2425662[iParam0].f_310.f_8;
		if (iVar4 != func_18())
		{
			if (func_300(iVar4))
			{
				iVar5 = func_296(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5];
				}
			}
		}
	}
	else if (func_295(iParam0))
	{
		iVar6 = func_294(iParam0);
		if (iVar6 != func_18())
		{
			if (!func_293(iVar6))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_758[iVar6]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_758[iVar6], false);
				}
				else
				{
					return Global_2425662[func_294(iParam0)].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_296(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7];
				}
			}
		}
	}
	else if (func_292(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_2537071.f_307))
		{
			return unk_0x68F4C0EC296D3901(Global_2537071.f_307, false);
		}
	}
	else if (func_291(iParam0) && !func_290(iParam0))
	{
		iVar8 = Global_2425662[iParam0].f_310.f_8;
		if (iVar8 != func_18())
		{
			if (func_289(iVar8))
			{
				iVar9 = func_285(iVar8);
				if (iVar9 != -1)
				{
					return func_284(iVar9);
				}
			}
		}
	}
	else if (func_283(iParam0) && !func_282(iParam0))
	{
		iVar10 = Global_2425662[iParam0].f_310.f_8;
		if (iVar10 != func_18())
		{
			if (func_281(iVar10))
			{
				iVar11 = func_277(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11];
				}
			}
		}
	}
	else if (func_276(iParam0, 0))
	{
		iVar12 = func_275(iParam0);
		if (iVar12 != func_18())
		{
			if (!func_323(iVar12))
			{
				if (unk_0xC844350D5D58C99A(Global_2439138.f_791[iVar12]))
				{
					return unk_0x68F4C0EC296D3901(Global_2439138.f_791[iVar12], false);
				}
				else
				{
					return Global_1628237[func_275(iParam0)].f_600;
				}
			}
			else
			{
				iVar13 = func_277(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13];
				}
			}
		}
	}
	else if (func_274(iParam0))
	{
		return -366,7f, -1909,6f, 20f;
	}
	if (func_291(iParam0))
	{
		return func_284(Global_2425662[iParam0].f_310.f_5);
	}
	if (func_269(iParam0))
	{
		return 965,8165f, 42,25042f, 122,1267f;
	}
	return Global_1676377.f_488[Global_2425662[iParam0].f_310.f_5];
}

int func_269(int iParam0)
{
	if ((func_273(iParam0) || func_272(iParam0)) || func_270(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
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
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_273(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_275(int iParam0)
{
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_276(int iParam0, bool bParam1)
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
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_277(int iParam0)
{
	if (iParam0 != func_18())
	{
		iVar0 = func_280(iParam0);
		if (iVar0 != 0)
		{
			return func_278(iVar0);
		}
	}
	return -1;
}

int func_278(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_271(iVar0) == 11)
		{
			if (func_279(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_279(int iParam0)
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

int func_280(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_281;
	}
	return 0;
}

int func_281(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1590535[iParam0].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_283(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_284(int iParam0)
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

int func_285(int iParam0)
{
	if (iParam0 != func_18())
	{
		iVar0 = func_288(iParam0);
		if (iVar0 != 0)
		{
			return func_286(iVar0);
		}
	}
	return -1;
}

int func_286(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_271(iVar0) == 11)
		{
			if (func_287(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_287(int iParam0)
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

int func_288(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_322;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

int func_290(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_291(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_291(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_293(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_294(int iParam0)
{
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_295(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_296(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	iVar0 = func_299(iParam0);
	if (!iVar0 == 0)
	{
		return func_297(iVar0);
	}
	return -1;
}

int func_297(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_271(iVar0) == 9)
		{
			if (func_298(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_298(int iParam0)
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

int func_299(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_271;
}

int func_300(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_271 != 0;
	}
	return 0;
}

int func_301()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_303(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_304(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_305(iParam0) && Global_2425662[iParam0].f_310.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_306(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_307(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	iVar0 = func_35(iParam0);
	if (!iVar0 == 0)
	{
		return func_308(iVar0);
	}
	return -1;
}

int func_308(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_309(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_309(int iParam0)
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

int func_310(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

int func_311(int iParam0)
{
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_312(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_271(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_313(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_321(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_321(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

void func_314(vector3 vParam0, var uParam3)
{
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_315(vParam0, iVar0, 0))
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
		if (func_315(vParam0, iVar0, 0))
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
		if (func_315(vParam0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_315(vParam0, iVar0, 0))
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
	if (func_315(vParam0, iVar0, 0))
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

int func_315(vector3 vParam0, int iParam3, float fParam4)
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
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_315(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_315(vParam0, 8, fParam4))
		{
			return 1;
		}
		if (func_315(vParam0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_316(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

Vector3 func_317(int iParam0)
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

int func_318(int iParam0)
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

int func_319(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_320(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 239:
			break;
		
		case 241:
			switch (iParam1)
			{
				case 0:
					return -631,8972f, -237,8486f, 37,0734f;
				
				default:
			}
			break;
		
		case 242:
			switch (iParam1)
			{
				case 0:
					return 229,197f, 213,7629f, 104,5252f;
				
				case 1:
					return -1215,355f, -325,6002f, 36,6804f;
				
				case 2:
					return 1175,598f, 2698,398f, 36,9947f;
				
				default:
			}
			break;
		
		case 244:
			switch (iParam1)
			{
				case 0:
					return -1100,531f, -1498,779f, 3,81f;
				
				case 1:
					return 1405,5f, 3668,518f, 33,021f;
				
				case 2:
					return -16,296f, 6646,3f, 30,125f;
				
				default:
			}
			break;
		
		case 248:
			switch (iParam1)
			{
				case 0:
					return -1065,486f, -242,9739f, 53,01f;
				
				default:
			}
			break;
		
		case 240:
			switch (iParam1)
			{
				case 0:
					return 1067,501f, -3261,654f, 4,898f;
				
				case 1:
					return 68,5188f, -2482,417f, 5,0055f;
				
				case 2:
					return -184,2188f, 6296,327f, 30,4886f;
				
				case 3:
					return 2421,013f, 4780,2f, 33,5041f;
				
				case 4:
					return 1566,581f, 3525,019f, 34,7375f;
				
				case 5:
					return 1033,721f, 2510,754f, 46,1121f;
				
				case 6:
					return 2823,504f, 1502,591f, 23,5715f;
				
				case 7:
					return 1285,322f, 289,7219f, 80,9909f;
				
				case 8:
					return -1024,404f, -538,3408f, 34,7084f;
				
				case 9:
					return -769,6266f, -2630,041f, 12,8285f;
				
				default:
			}
			break;
			break;
	}
	return 0f, 0f, 0f;
}

int func_321(int iParam0, bool bParam1, bool bParam2)
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

int func_322(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_334, 10);
	}
	return 0;
}

int func_323(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_324(int iParam0, int iParam1)
{
	*iParam1 = 2;
	if (iParam0 == 239)
	{
		if (func_3(&(Global_1687654.f_18)))
		{
			return 1;
		}
	}
	else if (iParam0 == 240)
	{
		if (func_3(&(Global_1687654.f_22)))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0 != -1 && Global_1687654[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	*iParam1 = 3;
	if (func_11(iParam0))
	{
		return func_3(&(Global_1687654.f_24));
	}
	return func_3(&(Global_1687654.f_26));
}

int func_325(int iParam0)
{
	if (Global_262145.f_24129)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 239:
			return Global_262145.f_24139;
		
		case 240:
			return Global_262145.f_24140;
		
		case 242:
			return Global_262145.f_24135;
		
		case 244:
			return Global_262145.f_24136;
		
		case 248:
			return Global_262145.f_24137;
		
		case 241:
			return Global_262145.f_24138;
		
		default:
	}
	return 0;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 242;
		
		case 1:
			return 244;
		
		case 2:
			return 248;
		
		case 3:
			return 241;
		
		case 4:
			return 239;
		
		case 5:
			return 240;
		
		default:
	}
	return -1;
}

bool func_327(int iParam0)
{
	return func_222(iParam0) != 0;
}

void func_328()
{
	func_29();
	iLocal_303 = Global_1676086;
	if (func_335())
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_116, 6);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		cVar1 = { func_235(iLocal_303) };
		iVar7 = iVar0 + 1;
		iVar8 = func_334(iVar7);
		iVar9 = -1;
		if (iVar7 == 1 && func_243())
		{
			iVar10 = func_242(iLocal_303);
			if (func_333(iVar10))
			{
				iVar9 = func_332(iVar10);
				iVar8 = func_331(iVar10);
			}
			else
			{
				iVar8 = func_332(iVar10);
			}
		}
		else if (func_330(iVar7))
		{
			iVar9 = iVar8;
			iVar8 = func_329(iVar7);
		}
		StringCopy(&Var11, "HT_SC_T", 16);
		StringIntConCat(&Var11, iVar0, 16);
		StringCopy(&Var15, "HT_SC_D", 16);
		StringIntConCat(&Var15, iVar0, 16);
		if (iVar7 == 1 && func_243())
		{
			StringCopy(&Var11, "HT_SC_T3", 16);
			StringCopy(&Var15, "HT_SC_D3", 16);
			StringCopy(&cVar1, "", 24);
		}
		bVar19 = func_336(unk_0xD803B885F5E47A62());
		unk_0x7E60C62A7CE58FC8(iLocal_306, "ADD_JOB");
		unk_0x3CAEA85DA607305E(iVar0);
		if (unk_0xEA6BC48857E0AC4C(&cVar1))
		{
			func_8(&Var11);
		}
		else
		{
			unk_0x7ACC3006A87F8B39(&Var11);
			unk_0x6B012227B3921E18(&cVar1);
			unk_0x779B34565F4D71B1();
		}
		unk_0x3CAEA85DA607305E(iVar8);
		unk_0x3CAEA85DA607305E(1);
		if (iVar7 == 1 && func_243())
		{
			func_8(&Var15);
		}
		else
		{
			unk_0x7ACC3006A87F8B39(&Var15);
			unk_0x6B012227B3921E18(&cVar1);
			unk_0x779B34565F4D71B1();
		}
		unk_0x1200CC973A2399C8(bVar19);
		unk_0x3CAEA85DA607305E(iVar9);
		unk_0x7E60D21B163E9D56();
		iVar0++;
	}
	func_7(2, "HT_SC_MT");
	unk_0x5D96D8530B3D0904(&iLocal_116, 4);
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15305;
		
		case 2:
			return Global_262145.f_15306;
		
		case 3:
			return Global_262145.f_15307;
		
		default:
	}
	return 0;
}

bool func_330(int iParam0)
{
	return func_334(iParam0) < func_329(iParam0);
}

int func_331(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15536;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15535;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15537;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15534;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15533;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15538;
	}
	return 0;
}

int func_332(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15527;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15525;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15529;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15523;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15521;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15531;
	}
	return 0;
}

bool func_333(int iParam0)
{
	return func_332(iParam0) < func_331(iParam0);
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15302;
		
		case 2:
			return Global_262145.f_15303;
		
		case 3:
			return Global_262145.f_15304;
		
		default:
	}
	return 0;
}

bool func_335()
{
	return Global_1676240;
}

int func_336(int iParam0)
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

int func_337(int iParam0)
{
	if (func_42(unk_0xD803B885F5E47A62()))
	{
		return func_338(unk_0xD803B885F5E47A62(), iParam0);
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	if (func_42(iParam0))
	{
		return Global_1628237[iParam0].f_11.f_450 == iParam1;
	}
	return 0;
}

void func_339()
{
	func_29();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		StringCopy(&Var1, "HT_AF_T", 16);
		StringIntConCat(&Var1, iVar0, 16);
		StringCopy(&cVar5, "HT_AF_TD", 16);
		StringIntConCat(&cVar5, iVar0, 16);
		StringCopy(&Var9, "HT_AF_D", 16);
		StringIntConCat(&Var9, iVar0, 16);
		bVar13 = ((func_343(unk_0xD803B885F5E47A62()) && func_341(unk_0xD803B885F5E47A62())) && !func_251(unk_0xD803B885F5E47A62()));
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = func_252(iVar0);
		iVar17 = iVar16;
		if (iVar16 != 8 && func_249(iVar16))
		{
			iVar15 = func_340(Global_2514754[iVar17], Global_2514754.f_17[iVar17], 0);
		}
		if (iVar15 > 0)
		{
			iVar14 = 2;
			func_22(13, iVar0);
			StringCopy(&Var9, "HT_JOB_CD_3", 16);
		}
		else if (func_251(unk_0xD803B885F5E47A62()))
		{
			StringCopy(&Var9, "HT_AF_P1_D2", 16);
			func_22(14, iVar0);
		}
		unk_0x7E60C62A7CE58FC8(iLocal_306, "ADD_JOB");
		unk_0x3CAEA85DA607305E(iVar0);
		func_8(&Var1);
		unk_0x3CAEA85DA607305E(iVar15);
		unk_0x3CAEA85DA607305E(iVar14);
		if (iVar15 <= 0)
		{
			func_8(&Var9);
		}
		else
		{
			unk_0x7ACC3006A87F8B39(&Var9);
			unk_0x6B012227B3921E18(&cVar5);
			unk_0x779B34565F4D71B1();
		}
		unk_0x1200CC973A2399C8(bVar13);
		unk_0x7E60D21B163E9D56();
		iVar0++;
	}
	func_7(1, "HT_AF_MT");
	unk_0x5D96D8530B3D0904(&iLocal_116, 4);
}

int func_340(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = unk_0x2B6E0A53779D29EA();
	if (bParam3)
	{
		iVar1 = unk_0x1C0640BA9A7327B3();
	}
	iVar0 = unk_0x51D1D19912234EA0((iParam2 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(iVar1, iParam0))));
	iVar0 = (iVar0 / 1000);
	return iVar0;
}

int func_341(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_264.f_5;
}

bool func_342(int iParam0)
{
	return Global_1590535[iParam0].f_274.f_264.f_5;
}

int func_343(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

int func_344()
{
	if (func_345())
	{
		return 1;
	}
	return Global_2450632.f_644;
}

bool func_345()
{
	return Global_1312837 == 10;
}

void func_346()
{
	unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Are_You_Sure", "DLC_GR_MOC_Computer_Sounds", 1);
}

void func_347()
{
	func_29();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		unk_0x7E60C62A7CE58FC8(iLocal_306, "ADD_JOB");
		iVar2 = func_326(iVar0);
		bVar3 = func_256(iVar0, 0);
		iVar1 = 0;
		StringCopy(&Var4, "HT_BW_T", 16);
		StringIntConCat(&Var4, iVar0, 16);
		StringCopy(&Var8, "HT_BW_D", 16);
		StringIntConCat(&Var8, iVar0, 16);
		if (iVar0 >= 4 && func_31())
		{
			StringConCat(&Var8, "a", 16);
		}
		iVar12 = 0;
		iVar13 = 0;
		if (func_324(iVar2, &iVar1))
		{
			iVar12 = 2;
			iVar13 = func_348(iVar2);
			Var8 = { func_10(iVar1, iVar2) };
			func_22(iVar1, iVar0);
		}
		else if (func_13(iVar0) != 0)
		{
			Var8 = { func_10(func_13(iVar0), iVar2) };
		}
		unk_0x3CAEA85DA607305E(iVar0);
		func_8(&Var4);
		unk_0x3CAEA85DA607305E(iVar13);
		unk_0x3CAEA85DA607305E(iVar12);
		func_8(&Var8);
		unk_0x1200CC973A2399C8(bVar3);
		unk_0x7E60D21B163E9D56();
		iVar0++;
	}
	func_7(0, "HT_BW_MT");
	unk_0x5D96D8530B3D0904(&iLocal_116, 4);
}

int func_348(int iParam0)
{
	if (func_11(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1687654[iVar0] == iParam0)
			{
				if (func_3(&(Global_1687654[iVar0].f_3)))
				{
					return func_340(Global_1687654[iVar0].f_3, func_353(iVar0), 0);
				}
			}
			iVar0++;
		}
		if (func_3(&(Global_1687654.f_24)))
		{
			return func_340(Global_1687654.f_24, func_352(), 0);
		}
	}
	else if (func_351(iParam0))
	{
		if (iParam0 == 239)
		{
			if (func_3(&(Global_1687654.f_18)))
			{
				return func_340(Global_1687654.f_18, func_350(iParam0), 0);
			}
			else if (func_3(&(Global_1687654.f_26)))
			{
				return func_340(Global_1687654.f_26, func_349(), 0);
			}
		}
		else if (func_3(&(Global_1687654.f_22)))
		{
			return func_340(Global_1687654.f_22, func_350(iParam0), 0);
		}
		else if (func_3(&(Global_1687654.f_26)))
		{
			return func_340(Global_1687654.f_26, func_349(), 0);
		}
	}
	return -1;
}

int func_349()
{
	return Global_262145.f_24119;
}

int func_350(int iParam0)
{
	if (iParam0 == 239)
	{
		return Global_1687654.f_17;
	}
	return Global_1687654.f_21;
}

int func_351(int iParam0)
{
	if (iParam0 == 239 || iParam0 == 240)
	{
		return 1;
	}
	return 0;
}

int func_352()
{
	return Global_262145.f_24114;
}

int func_353(int iParam0)
{
	return Global_1687654[iParam0].f_2;
}

void func_354(int iParam0)
{
	if (iLocal_125 != iParam0)
	{
		iLocal_125 = iParam0;
	}
}

bool func_355()
{
	return func_42(unk_0xD803B885F5E47A62());
}

void func_356(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10)
{
	unk_0x7E60C62A7CE58FC8(iLocal_306, "SHOW_OVERLAY");
	func_8(sParam0);
	unk_0x7ACC3006A87F8B39(sParam1);
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		if (iParam7 != -1)
		{
			unk_0x6D99DF8263D35CE5(iParam7);
		}
		unk_0x6B012227B3921E18(sParam9);
		if (iParam8 != -1)
		{
			unk_0x6D99DF8263D35CE5(iParam8);
		}
		if (!unk_0xEA6BC48857E0AC4C(sParam10))
		{
			unk_0x6B012227B3921E18(sParam10);
		}
	}
	else if (iParam7 != -1)
	{
		unk_0x6D99DF8263D35CE5(iParam7);
	}
	unk_0x779B34565F4D71B1();
	func_8(sParam2);
	func_8(sParam3);
	unk_0x7E60D21B163E9D56();
	if (bParam5)
	{
		func_346();
	}
	else if (bParam4)
	{
		func_214();
	}
	unk_0x5D96D8530B3D0904(&iLocal_116, 0);
	func_357(iParam6);
}

void func_357(int iParam0)
{
	if (iLocal_124 != iParam0)
	{
		iLocal_124 = iParam0;
	}
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_24129)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_262145.f_24130)
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_262145.f_24131)
			{
				return 1;
			}
			break;
		
		case 3:
			if (Global_262145.f_24132)
			{
				return 1;
			}
			break;
		
		case 4:
			if (Global_262145.f_24133)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Global_262145.f_24134)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_359(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&(Global_1676377.f_3), 28);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1676377.f_3), 28);
	}
	iLocal_123 = iParam0;
	unk_0x7E60C62A7CE58FC8(iLocal_306, "SHOW_SCREEN");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_360()
{
	if (func_453() != 0)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Launch", "DLC_GR_MOC_Computer_Sounds", 1);
	}
	switch (func_453())
	{
		case 1:
			if (func_256(func_452(iLocal_117), 1) && func_255(iLocal_117))
			{
				func_451(iLocal_118);
				func_440(iLocal_117);
			}
			else
			{
				func_454();
				func_356("HT_BW_LT", "HT_BW_L1", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
				return;
			}
			break;
		
		case 2:
			if (func_437())
			{
				Global_1674535.f_53 = 1;
				func_440(229);
			}
			break;
		
		case 3:
			if (func_426(iLocal_301, iLocal_302, func_243(), iLocal_303, 167))
			{
				unk_0x5D96D8530B3D0904(&(Global_1676377.f_4), 4);
				func_440(167);
			}
			break;
		
		case 4:
			if (func_219(unk_0xD803B885F5E47A62(), func_222(unk_0xD803B885F5E47A62())))
			{
				func_356("HT_VC_P1", "SEC_V_STEAL_F", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			else if (func_395())
			{
				unk_0x5D96D8530B3D0904(&(Global_1676377.f_4), 5);
				func_393();
				func_392(1);
				func_543(0, 1);
			}
			else
			{
				func_356("SEC_VEH_STEAL", "SEC_MISS_L_F", "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			break;
		
		case 5:
			if (func_368(func_35(unk_0xD803B885F5E47A62()), 225))
			{
				Global_1674491.f_43 = 1;
				func_440(225);
				func_365(5);
			}
			else
			{
				func_356("HT_GR_P1", func_38(), "OR_OVRLY_OK", "", 1, 0, 0, -1, -1, 0, 0);
			}
			break;
		
		case 6:
			if (func_368(iLocal_305, 192))
			{
				Global_1676233 = iLocal_305;
				Global_1674374.f_53 = 1;
				func_440(192);
				func_361(func_213(iLocal_305), !Global_262145.f_16981);
				func_365(func_213(iLocal_305));
			}
			break;
		
		case 0:
			unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable_OK", "DLC_GR_MOC_Computer_Sounds", 1);
			break;
	}
	func_454();
}

void func_361(int iParam0, bool bParam1)
{
	if (!func_364(iParam0))
	{
		return;
	}
	func_362(func_363(iParam0), bParam1, -1, 1);
	Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iParam0].f_6 = bParam1;
}

int func_362(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_168();
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

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_364(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_365(int iParam0)
{
	iVar0 = func_367(iParam0);
	iVar1 = func_166(iVar0, -1, 0) + 1;
	func_366(iVar0, iVar1, -1, 1, 0);
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_167(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3899;
		
		case 1:
			return 3928;
		
		case 2:
			return 3932;
		
		case 3:
			return 3936;
		
		case 4:
			return 3940;
		
		case 5:
			return 5451;
		
		default:
	}
	return 3899;
}

int func_368(int iParam0, int iParam1)
{
	if (!func_39(iParam1))
	{
		return 0;
	}
	iVar1 = func_213(iParam0);
	if (func_391())
	{
		iVar2 = func_389(0);
		while (!func_370(iVar1, iVar2, &iVar0))
		{
			wait(0);
			func_464();
		}
		func_464();
		if (iVar0 == 3)
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable", "DLC_GR_MOC_Computer_Sounds", 1);
			func_44("BKR_TF_R6");
			return 0;
		}
		else if (iVar0 == 2)
		{
			func_369(iVar2);
		}
	}
	return 1;
}

void func_369(int iParam0)
{
	Global_4264525 = iParam0;
}

bool func_370(int iParam0, int iParam1, var uParam2)
{
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_388() != -1)
			{
				return 0;
			}
			iVar0 = func_387(iParam0);
			if (func_383(78225582, -1799524201, iParam1, -1018905335, 1, 0, 1, 4, iVar0, 3))
			{
				*uParam2 = 1;
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_377())
			{
			}
			else
			{
				*uParam2 = 3;
				func_373(func_388());
			}
			break;
		
		case 1:
			if (func_372(func_388()))
			{
				if (func_371(func_388()) == 2)
				{
					*uParam2 = 2;
					func_373(func_388());
					func_369(iParam1);
				}
				else
				{
					*uParam2 = 3;
					func_373(func_388());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_371(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

void func_373(int iParam0)
{
	bVar0 = false;
	if (!func_391())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_376(iParam0))
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
		func_374(&(Global_4263954[iParam0]));
	}
}

void func_374(var uParam0)
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
	func_375(&(uParam0->f_14));
	func_375(&(uParam0->f_14.f_13));
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

void func_375(var uParam0)
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

int func_376(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_377()
{
	bVar0 = false;
	if (!func_391())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_388();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_168()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_382(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
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
	iVar3 = func_381(iVar2);
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
				func_378(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_378(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_380(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_379();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar36);
	}
}

void func_379()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_380(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_381(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_382(int iParam0, int iParam1, int iParam2)
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

int func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_391())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_168()) || unk_0xDD2EE1F5DA6A6AB0())
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
	iVar1 = func_388();
	if (iVar1 == -1)
	{
		if (!func_385(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_384(iParam1))
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

int func_384(int iParam0)
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

int func_385(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bVar0 = false;
	if (!func_391())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_168()) || unk_0xDD2EE1F5DA6A6AB0())
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
	if (bVar0 || unk_0xA28E08E034174728(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_386(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_391())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = iParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = uParam0;
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
				func_378(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		return -1;
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_388()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_381(iVar0) != 2147483647)
		{
			if (func_376(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_389(bool bParam0)
{
	func_390(&sVar0, bParam0);
	return unk_0x12AB0310C2281427(&sVar0);
}

void func_390(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		StringCopy(sParam0, "IG_SELL_0_t0_v0", 64);
	}
	else
	{
		StringCopy(sParam0, "IG_BUY_0_t0_v0", 64);
	}
}

int func_391()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_392(int iParam0)
{
	if (iParam0 != Global_1686716)
	{
		Global_1686716 = iParam0;
	}
}

void func_393()
{
	iVar0 = func_394();
	iVar0++;
	func_366(5327, iVar0, -1, 1, 0);
}

int func_394()
{
	return func_166(5327, -1, 0);
}

int func_395()
{
	func_425(0);
	if (func_424() == 0)
	{
		func_419();
		func_425(1);
	}
	if ((func_424() != 0 && func_418()) && func_411(4, 1, 0))
	{
		iVar0 = func_424();
		func_397(178, iVar0, 0, 0, 0, 0);
		func_396();
		return 1;
	}
	return 0;
}

void func_396()
{
	Global_1676313++;
	if (Global_1676313 == 32)
	{
		func_419();
	}
	if (Global_1676314[Global_1676313] == 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Global_1676313++;
			if (Global_1676313 == 32)
			{
				Global_1676313 = 0;
			}
			if (Global_1676314[Global_1676313] != 0)
			{
				Jump @119; //curOff = 90
			}
			else if (iVar0 == 31)
			{
				func_419();
				return;
			}
			iVar0++;
		}
	}
}

void func_397(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 != 178 && iParam0 != 188)
	{
	}
	if (iParam0 == 188)
	{
		func_451(8);
	}
	func_410(iParam1, iParam2, iParam3, iParam4, iParam5);
	func_398(iParam0, -1);
}

void func_398(int iParam0, int iParam1)
{
	if (func_355() || !func_409(1))
	{
		if (!func_407(unk_0xD803B885F5E47A62(), 0))
		{
			func_406(iParam0);
			func_399(iParam0, func_403(1, 1), func_402(), func_401(), func_400(), iParam1);
		}
	}
}

void func_399(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

var func_400()
{
	return Global_2537071.f_5124.f_341;
}

var func_401()
{
	return Global_2537071.f_5124.f_340;
}

var func_402()
{
	return Global_2537071.f_5124.f_339;
}

int func_403(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_321(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_404(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_404(int iParam0, int iParam1)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_405(-1, 0) == 8;
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

int func_405(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_168();
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

void func_406(var uParam0)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_32 = uParam0;
}

int func_407(int iParam0, int iParam1)
{
	if (func_408(iParam0, 0))
	{
		return func_64(Global_1628237[iParam0].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_409(bool bParam0)
{
	return func_91(unk_0xD803B885F5E47A62(), bParam0);
}

void func_410(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_186[0] = uParam0;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_186[1] = uParam1;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_186[2] = uParam2;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_186[3] = uParam3;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_186.f_5 = uParam4;
}

int func_411(int iParam0, int iParam1, bool bParam2)
{
	if (!func_409(1))
	{
		return 0;
	}
	if (!func_355())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_354[iVar0] = -1;
		iVar0++;
	}
	if (bParam2)
	{
		iVar1[0] = 0;
		iVar1[1] = 1;
		iVar1[2] = 2;
		iVar1[3] = 3;
		iVar1[4] = 4;
		iVar1[5] = 5;
		iVar1[6] = 6;
		iVar1[7] = 11;
		iVar1[8] = 14;
		iVar1[9] = 17;
		iVar1[10] = 21;
		iVar1[11] = 23;
		iVar1[12] = 25;
		iVar17 = 13;
		bVar15 = true;
	}
	else if (iParam0 == 2)
	{
		iVar1[0] = 19;
		iVar1[1] = 20;
		iVar1[2] = 21;
		iVar1[3] = 22;
		iVar1[4] = 23;
		iVar1[5] = 24;
		iVar1[6] = 25;
		iVar1[7] = 26;
		iVar17 = 8;
		bVar15 = true;
	}
	else if (iParam0 == 0)
	{
		iVar1[0] = 0;
		iVar1[1] = 1;
		iVar1[2] = 2;
		iVar1[3] = 3;
		iVar1[4] = 4;
		iVar1[5] = 5;
		iVar1[6] = 6;
		iVar1[7] = 7;
		iVar1[8] = 8;
		iVar1[9] = 9;
		iVar1[10] = 10;
		iVar17 = 11;
	}
	else if (iParam0 == 1)
	{
		iVar1[0] = 11;
		iVar1[1] = 12;
		iVar1[2] = 13;
		iVar1[3] = 14;
		iVar1[4] = 15;
		iVar1[5] = 16;
		iVar1[6] = 17;
		iVar1[7] = 18;
		iVar17 = 8;
		bVar15 = true;
	}
	else if (iParam0 == 4)
	{
		iVar18 = func_222(func_107());
		if (iVar18 != 0)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_354[iVar0] = func_417(iVar18);
				iVar0++;
			}
			bVar16 = true;
		}
	}
	if (iParam0 != 4)
	{
		if (bVar15)
		{
			if (iVar17 >= 1)
			{
				uVar19 = 2;
				uVar22 = func_412(&iVar1, iVar17, &uVar19);
				iVar0 = 0;
				while (iVar0 < iParam1)
				{
					Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_354[iVar0] = uVar22;
					iVar0++;
				}
				bVar16 = true;
			}
		}
		else if (iVar17 >= iParam1)
		{
			uVar23 = 2;
			iVar0 = 0;
			while (iVar0 < iParam1)
			{
				Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_354[iVar0] = func_412(&iVar1, iVar17, &uVar23);
				iVar0++;
			}
			bVar16 = true;
		}
	}
	if (bVar16)
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, int iParam1, var uParam2)
{
	if (!func_409(1))
	{
		return -1;
	}
	fVar0 = Global_262145.f_17634;
	fVar1 = Global_262145.f_17635;
	iVar17 = func_54(unk_0xD803B885F5E47A62());
	if (Global_1590535[iVar17].f_274[5] > -1)
	{
		vVar18 = { Global_1049922[Global_1590535[iVar17].f_274[5]].f_38[0].f_23 };
		vVar18.z = 0f;
	}
	else
	{
		return -1;
	}
	if (func_327(iVar17))
	{
		vVar21 = { Global_1676377.f_488[func_415(func_222(iVar17))] };
		vVar21.z = 0f;
	}
	else
	{
		return -1;
	}
	if (iParam1 > 0)
	{
		iVar24 = 0;
		while (iVar24 < iParam1)
		{
			vVar27 = { func_414((*iParam0)[iVar24]) };
			vVar27.z = 0f;
			fVar30 = vdist(vVar27, vVar18);
			fVar31 = vdist(vVar27, vVar21);
			if (fVar30 >= fVar0 && fVar31 >= fVar1)
			{
				func_413((*iParam0)[iVar24], &iVar25, &iVar26);
				if (!unk_0xEAE0D21A50E6C7F4((*uParam2)[iVar25], iVar26))
				{
					uVar2[iVar16] = (*iParam0)[iVar24];
					iVar16++;
				}
			}
			iVar24++;
		}
		if (iVar16 > 0)
		{
			iVar32 = unk_0x09AC81E49EA267F7(0, iVar16);
			func_413(uVar2[iVar32], &iVar25, &iVar26);
			unk_0x5D96D8530B3D0904(uParam2[iVar25], iVar26);
			return uVar2[iVar32];
		}
		else
		{
			iVar24 = 0;
			while (iVar24 < iParam1)
			{
				func_413((*iParam0)[iVar24], &iVar25, &iVar26);
				if (!unk_0xEAE0D21A50E6C7F4((*uParam2)[iVar25], iVar26))
				{
					uVar2[iVar16] = (*iParam0)[iVar24];
					iVar16++;
				}
				iVar24++;
			}
			if (iVar16 > 0)
			{
				iVar33 = unk_0x09AC81E49EA267F7(0, iVar16);
				func_413(uVar2[iVar33], &iVar25, &iVar26);
				unk_0x5D96D8530B3D0904(uParam2[iVar25], iVar26);
				return uVar2[iVar33];
			}
			else
			{
				iVar34 = unk_0x09AC81E49EA267F7(0, iParam1);
				func_413(uVar2[iVar34], &iVar25, &iVar26);
				unk_0x5D96D8530B3D0904(uParam2[iVar25], iVar26);
				return uVar2[iVar34];
			}
		}
	}
	else
	{
		return -1;
	}
	return -1;
}

void func_413(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = floor((to_float(iParam0) / 32f));
	*iParam2 = (iParam0 - *iParam1 * 32);
}

Vector3 func_414(int iParam0)
{
	switch (iParam0)
	{
		case 19:
			return -2597,411f, 1930,107f, 166,3086f;
		
		case 20:
			return -1920,153f, 2048,602f, 139,7356f;
		
		case 21:
			return -68,3441f, 894,488f, 234,5414f;
		
		case 22:
			return 1407,563f, 1118,505f, 113,8377f;
		
		case 23:
			return -1788,983f, 455,5039f, 127,3081f;
		
		case 24:
			return 217,052f, 757,9442f, 203,6637f;
		
		case 25:
			return -1615,404f, 17,2934f, 61,1779f;
		
		case 26:
			return -3102,533f, 716,4913f, 19,297f;
		
		case 0:
			return 880,8726f, -2919,058f, 4,9006f;
		
		case 1:
			return 928,5625f, -2920,391f, 4,9021f;
		
		case 2:
			return 972,3794f, -2920,422f, 4,9021f;
		
		case 3:
			return 1091,055f, -2920,289f, 4,9021f;
		
		case 4:
			return 1148,923f, -2920,104f, 4,9021f;
		
		case 5:
			return 1180,085f, -2970,068f, 4,9021f;
		
		case 6:
			return -1082,496f, -500,419f, 35,432f;
		
		case 7:
			return 165,3373f, 2284,929f, 92,178f;
		
		case 8:
			return -2221,172f, 3484,129f, 29,1695f;
		
		case 9:
			return 2906,938f, 4345,68f, 49,3003f;
		
		case 10:
			return 1579,18f, 6438,313f, 23,7935f;
		
		case 11:
			return 477,29f, -1889,14f, 25,0946f;
		
		case 12:
			return 2534,13f, 2584,07f, 36,9449f;
		
		case 13:
			return 452,3711f, 3573,672f, 32,2386f;
		
		case 14:
			return -222,6743f, 6249,478f, 30,4912f;
		
		case 15:
			return -65,6218f, 81,307f, 70,5533f;
		
		case 16:
			return -28,1873f, -1083,637f, 25,5732f;
		
		case 17:
			return 2510,956f, 4109,705f, 37,5692f;
		
		case 18:
			return -763,496f, -243,3722f, 36,2426f;
		
		case 27:
			return 859,9324f, -1350,51f, 25,0668f;
		
		case 28:
			return 417,7273f, -1618,991f, 28,2898f;
		
		case 29:
			return 452,691f, -1007,568f, 26,12f;
		
		case 30:
			return -1120,411f, -842,7603f, 12,3767f;
		
		case 31:
			return -1326,011f, -1502,188f, 3,3245f;
		
		case 32:
			return -576,611f, -130,9079f, 33,659f;
		
		case 33:
			return 537,8883f, -32,6088f, 69,6464f;
		
		case 34:
			return 1858,998f, 3676,471f, 32,546f;
		
		case 35:
			return -433,4332f, 6042,402f, 30,3373f;
		
		case 36:
			return -633,966f, -1780,525f, 23,0708f;
		
		case 37:
			return 995,0766f, -1858,65f, 29,8898f;
		
		case 38:
			return -70,5644f, -1822,705f, 25,942f;
		
		case 39:
			return 38,8324f, -1284,2f, 28,278f;
		
		case 40:
			return 1211,217f, -1262,491f, 34,2267f;
		
		case 41:
			return 804,3043f, -2225,151f, 28,5425f;
		
		case 42:
			return 1764,46f, -1648,041f, 111,649f;
		
		case 43:
			return 144,143f, -3003,358f, 6,031f;
		
		case 44:
			return -513,2193f, -2200,612f, 5,394f;
		
		case 45:
			return -1153,689f, -2172,111f, 12,2625f;
		
		case 46:
			return -511,2002f, -1736,564f, 18,1967f;
		
		case 47:
			return 2352,237f, 3036,937f, 47,1521f;
		
		case 48:
			return -194,5653f, 6268,56f, 30,4893f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_415(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_271(iVar0) == 1)
		{
			if (func_416(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 60:
			return 1;
			break;
		
		case 61:
			return 2;
			break;
		
		case 62:
			return 3;
			break;
		
		case 63:
			return 4;
			break;
		
		case 64:
			return 5;
			break;
		
		case 65:
			return 6;
			break;
		
		case 66:
			return 7;
			break;
		
		case 67:
			return 8;
			break;
		
		case 68:
			return 9;
			break;
		
		case 69:
			return 10;
			break;
	}
	return 0;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 36;
		
		case 2:
			return 37;
		
		case 3:
			return 38;
		
		case 4:
			return 39;
		
		case 5:
			return 40;
		
		case 6:
			return 41;
		
		case 7:
			return 42;
		
		case 8:
			return 43;
		
		case 9:
			return 44;
		
		case 10:
			return 45;
		
		default:
	}
	return -1;
}

int func_418()
{
	if (!func_212(unk_0xD803B885F5E47A62(), 178, 0))
	{
		return 0;
	}
	if (func_40(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

void func_419()
{
	iVar3 = Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_134.f_1;
	Global_1676313 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar4[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x09AC81E49EA267F7(0, 32);
		iVar2 = iVar4[iVar0];
		iVar4[iVar0] = iVar4[iVar1];
		iVar4[iVar1] = iVar2;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar37 = unk_0x09AC81E49EA267F7(1, 4);
		uVar38 = func_423(iVar4[iVar0], iVar37);
		Global_1676314[iVar0] = uVar38;
		if (iVar3 < 32)
		{
			if (func_422(Global_1676314[iVar0]))
			{
				Global_1676314[iVar0] = 0;
			}
		}
		else if (func_421(unk_0xD803B885F5E47A62(), Global_1676314[iVar0]))
		{
			iVar39 = func_420(iVar37, &(Global_1676314[iVar0]));
			if (func_421(unk_0xD803B885F5E47A62(), Global_1676314[iVar0]))
			{
				func_420(iVar39, &(Global_1676314[iVar0]));
				if (func_421(unk_0xD803B885F5E47A62(), Global_1676314[iVar0]))
				{
					Global_1676314[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_420(int iParam0, var uParam1)
{
	if (iParam0 == 3)
	{
		*uParam1 = (*uParam1 - 2);
		return 0;
	}
	*uParam1++;
	return iParam0 + 1;
}

int func_421(int iParam0, int iParam1)
{
	if (func_327(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 40)
		{
			if (Global_1590535[iParam0].f_274.f_134.f_2[iVar0] == iParam1 || Global_1590535[iParam0].f_274.f_134.f_2[iVar0] == (1000 + iParam1))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_422(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = ceil((to_float(iVar0) / 3f));
	iVar1 *= 3;
	iVar1 = (iVar1 - 2);
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_421(unk_0xD803B885F5E47A62(), (iVar1 + iVar2)))
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

int func_423(int iParam0, int iParam1)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 3)
	{
		return 0;
	}
	iVar0 = iParam0 + 1;
	iVar0 *= 3;
	iVar0 = (iVar0 - 2);
	return (iVar0 + (iParam1 - 1));
}

int func_424()
{
	if (Global_1676313 < 0 || Global_1676313 >= 32)
	{
		return 0;
	}
	return Global_1676314[Global_1676313];
}

void func_425(bool bParam0)
{
	iVar1 = 0;
	if (!bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_1676314[iVar0] != 0)
			{
				if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_134.f_1 < 32)
				{
					if (func_422(Global_1676314[iVar0]))
					{
						Global_1676314[iVar0] = 0;
					}
				}
				else if (func_421(unk_0xD803B885F5E47A62(), Global_1676314[iVar0]))
				{
					Global_1676314[iVar0] = 0;
				}
			}
			else
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (iVar1 == 32)
	{
		func_419();
	}
	else if (Global_1676314[Global_1676313] == 0)
	{
		func_396();
	}
}

int func_426(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = func_230(iParam0);
	StringCopy(&cVar1, func_239(iParam0), 16);
	bVar5 = false;
	iVar6 = func_334(iParam1);
	if (uParam2 && iParam1 == 1)
	{
		iVar6 = func_332(func_242(iParam3));
		bVar5 = true;
	}
	if (iVar6 > 0)
	{
		if (!unk_0x7A7BDE279347E517(iVar6, false, true, 0, -1, 0))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable", "DLC_GR_MOC_Computer_Sounds", 1);
			return 0;
		}
	}
	if (!func_39(iParam4))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable", "DLC_GR_MOC_Computer_Sounds", 1);
		return 0;
	}
	if (func_391())
	{
		iVar7 = func_435(1, iParam1, bVar5, func_242(iParam3));
		iVar8 = func_434(iVar0);
		iVar9 = -1;
		iVar10 = 0;
		iVar11 = 1;
		while (func_433(&iVar9, iVar6, iVar0, -1799524201, -1018905335, iVar7, iVar8, &iVar11, &iVar10))
		{
			func_464();
			wait(0);
		}
		switch (iVar9)
		{
			case 0:
				unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Unavailable", "DLC_GR_MOC_Computer_Sounds", 1);
				return 0;
				break;
			
			case 2:
				func_432(iVar7);
				break;
			
			default:
				break;
		}
	}
	if (iVar6 >= 0 && (iVar6 == 0 || (iVar6 > 0 && (func_391() || unk_0x7A7BDE279347E517(iVar6, false, true, 0, -1, 0)))))
	{
		if (iVar6 > 0)
		{
			func_427(-1980650810, iVar6);
		}
		if (func_391())
		{
			unk_0x7A87D9FAFCB10ADC(func_381(func_388()));
		}
		unk_0x6199AAE4456DA28F(iVar6, iParam0, unk_0x12AB0310C2281427(&cVar1), 0, 1);
		if (func_391())
		{
			func_373(func_388());
		}
	}
	return 1;
}

void func_427(int iParam0, int iParam1)
{
	iVar0 = func_431(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_430(iParam0))
	{
		func_429(iParam0, iVar0);
	}
	else
	{
		func_428(iParam0, iVar0);
	}
}

void func_428(int iParam0, int iParam1)
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

void func_429(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_430(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 406381289:
			case 1669900865:
			case 54164875:
			case -842450336:
			case -1576871964:
			case -1446982891:
			case -1676857426:
			case 1280806976:
			case -1096682281:
			case 1894078811:
			case -1566025259:
			case -621080327:
			case 1021002722:
			case -1670771646:
			case -1992420464:
			case -386175531:
			case -203536263:
				return 1;
				break;
			}
	}
	return 0;
}

int func_431(var uParam0)
{
	iVar0 = uParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_432(int iParam0)
{
	Global_4264524 = iParam0;
}

int func_433(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (*iParam7)
	{
		switch (*iParam8)
		{
			case 0:
				if (!unk_0x7A7BDE279347E517(iParam1, false, true, 0, -1, 0))
				{
					*iParam8 = 3;
					return 1;
				}
				if (func_383(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (*iParam8 != 3)
					{
						if (func_377())
						{
							*iParam8 = 1;
						}
						else
						{
							*iParam8 = 3;
						}
					}
				}
				else
				{
					*iParam8 = 3;
				}
				break;
			
			case 1:
				if (func_372(func_388()))
				{
					if (func_371(func_388()) == 2)
					{
						*iParam8 = 2;
					}
					else
					{
						*iParam8 = 3;
					}
				}
				break;
			
			case 2:
				*iParam7 = 0;
				*iParam8 = 0;
				unk_0x26D598B045655D3C(0);
				unk_0x3584F71E5CA29322(13);
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_373(func_388());
				*iParam7 = 0;
				*iParam8 = 0;
				unk_0x26D598B045655D3C(0);
				unk_0x3584F71E5CA29322(13);
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (*iParam8 == 3)
	{
		*iParam8 = 0;
		*iParam0 = 0;
		return 0;
	}
	*iParam8 = 0;
	*iParam0 = -1;
	return 0;
}

int func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE4_v0", 64);
			break;
	}
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		return -1;
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_435(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	func_436(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return unk_0x12AB0310C2281427(&sVar0);
}

void func_436(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam1)
	{
		if (iParam2 == -1)
		{
			StringCopy(sParam0, "CB_NONE_0_t0_v0", 64);
		}
		else if (bParam3)
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t1_v", 64);
			StringIntConCat(sParam0, iParam4, 64);
		}
		else
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t0_v0", 64);
		}
	}
	else
	{
		StringCopy(sParam0, "CB_SELL_0_t0_v0", 64);
	}
}

bool func_437()
{
	if (!func_391())
	{
		return 1;
	}
	while (!func_438(&iVar0, 0))
	{
		func_464();
		wait(0);
	}
	func_464();
	return iVar0 == 2;
}

bool func_438(var uParam0, bool bParam1)
{
	if (*uParam0 != 0 && *uParam0 != 1)
	{
		*uParam0 = 0;
	}
	if (bParam1)
	{
		iVar0 = 244232650;
	}
	else
	{
		iVar0 = 357925343;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_388() != -1)
			{
				return 0;
			}
			iVar1 = unk_0x12AB0310C2281427("MP_STAT_HANGAR_CONTRABAND_MISSION_v0");
			if (func_383(78225582, -1799524201, iVar0, -1018905335, 1, 0, 1, 4, iVar1, 3))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
			if (*uParam0 == 1 && func_377())
			{
			}
			else
			{
				*uParam0 = 3;
				func_373(func_388());
			}
			break;
		
		case 1:
			if (func_372(func_388()))
			{
				if (func_371(func_388()) == 2)
				{
					*uParam0 = 2;
					func_373(func_388());
					func_439(iVar0);
				}
				else
				{
					*uParam0 = 3;
					func_373(func_388());
				}
			}
			break;
	}
	return *uParam0 != 1;
}

void func_439(int iParam0)
{
	Global_4264526 = iParam0;
}

void func_440(int iParam0)
{
	if (iParam0 == 167)
	{
		iVar0 = 0;
		if (func_243() && iLocal_302 == 1)
		{
			iVar0 = 1;
		}
		func_449(iParam0, iLocal_301, iLocal_302, iLocal_303, iVar0);
	}
	else if (iParam0 == 229)
	{
		if (iLocal_304 == 8)
		{
			iLocal_304 = unk_0x09AC81E49EA267F7(0, 8);
			func_448(18);
		}
		else
		{
			func_447(18);
		}
		func_445(iParam0, 0, iLocal_304);
	}
	else if (iParam0 == 225)
	{
		func_443(iParam0, 0);
	}
	else if (iParam0 == 192)
	{
		func_441(iParam0, iLocal_305, -1);
	}
	else
	{
		func_398(iParam0, -1);
	}
	Global_1676238 = 1;
	func_543(0, 0);
}

void func_441(int iParam0, int iParam1, int iParam2)
{
	func_442(iParam1, iParam2);
	func_398(iParam0, iParam1);
}

void func_442(var uParam0, var uParam1)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_193 = uParam0;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_193.f_1 = uParam1;
}

void func_443(int iParam0, int iParam1)
{
	if (iParam0 != 225 && iParam0 != 226)
	{
	}
	func_444(iParam1);
	func_398(iParam0, -1);
}

void func_444(var uParam0)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_208 = uParam0;
}

void func_445(int iParam0, int iParam1, int iParam2)
{
	uVar0 = iParam2;
	if (iParam0 != 229 && iParam0 != 230)
	{
	}
	func_446(iParam1, uVar0);
	func_398(iParam0, -1);
}

void func_446(var uParam0, var uParam1)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_230 = uParam0;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_230.f_22 = uParam1;
}

void func_447(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_448(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_449(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_450(uParam1, iParam2, iParam3, iParam4);
	func_398(iParam0, uParam1);
}

void func_450(var uParam0, var uParam1, var uParam2, var uParam3)
{
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_182 = uParam0;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_182.f_1 = uParam1;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_182.f_2 = uParam2;
	Global_1628237[unk_0xD803B885F5E47A62()].f_11.f_182.f_3 = uParam3;
}

void func_451(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case 242:
			return 0;
		
		case 244:
			return 1;
		
		case 248:
			return 2;
		
		case 241:
			return 3;
		
		case 239:
			return 4;
		
		case 240:
			return 5;
		
		default:
	}
	return -1;
}

int func_453()
{
	return iLocal_124;
}

void func_454()
{
	unk_0x7E60C62A7CE58FC8(iLocal_306, "HIDE_OVERLAY");
	unk_0x7E60D21B163E9D56();
	func_357(0);
	unk_0x0674E58A79778E99(&iLocal_116, 0);
}

void func_455()
{
	if (func_456())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 3))
		{
			unk_0x7E60C62A7CE58FC8(iLocal_306, "GET_CURRENT_SELECTION");
			uLocal_307 = unk_0x7A8BB56B212464AC();
			unk_0x5D96D8530B3D0904(&iLocal_116, 3);
		}
	}
}

int func_456()
{
	if (unk_0xBFC0798A6E3417F9(2, 201) || unk_0xBFC0798A6E3417F9(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_457()
{
	func_462(2, 205, 1);
	if (unk_0xBFC0798A6E3417F9(2, 205))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(205), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_462(2, 206, 1);
	if (unk_0xBFC0798A6E3417F9(2, 206))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(206), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x9E6C8D8976DA0ECD(2))
	{
		func_462(2, 188, 1);
		if (unk_0xBFC0798A6E3417F9(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_462(2, 187, 1);
		if (unk_0xBFC0798A6E3417F9(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xB9132A06AE472728(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_RELEASE_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xB9132A06AE472728(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_RELEASE_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		func_462(2, 188, 1);
		if (unk_0xBFC0798A6E3417F9(2, 188))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(188), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_462(2, 187, 1);
		if (unk_0xBFC0798A6E3417F9(2, 187))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(187), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	func_462(2, 189, 1);
	if (unk_0xBFC0798A6E3417F9(2, 189))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_462(2, 190, 1);
	if (unk_0xBFC0798A6E3417F9(2, 190))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_462(2, 201, 1);
	if (unk_0xBFC0798A6E3417F9(2, 201))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_462(2, 202, 1);
	if (unk_0xBFC0798A6E3417F9(2, 202))
	{
		func_458();
	}
	func_462(2, 203, 1);
	if (unk_0xBFC0798A6E3417F9(2, 203))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_462(2, 204, 1);
	if (unk_0xBFC0798A6E3417F9(2, 204))
	{
		unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(204), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x9E6C8D8976DA0ECD(2))
	{
		unk_0x7E60C62A7CE58FC8(iLocal_306, "SET_MOUSE_INPUT");
		unk_0x7C19E5E4784BD7CF(unk_0x4B7163B4D6E4A3C2(2, 239));
		unk_0x7C19E5E4784BD7CF(unk_0x4B7163B4D6E4A3C2(2, 240));
		unk_0x7E60D21B163E9D56();
		func_462(2, 237, 1);
		if (unk_0xBFC0798A6E3417F9(2, 237))
		{
			unk_0x1FF2BF40EEFA5ABC(iLocal_306, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_462(2, 238, 1);
		if (unk_0xBFC0798A6E3417F9(2, 238))
		{
			func_458();
		}
	}
	else
	{
		func_462(2, 195, 1);
		func_462(2, 196, 1);
		iVar0 = unk_0x0DED1C1B8250FA57(2, 195);
		iVar1 = unk_0x0DED1C1B8250FA57(2, 196);
		if (((iVar0 != 127 || iLocal_308 != 127) || iVar1 != 127) || iLocal_309 != 127)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_306, "SET_ANALOG_STICK_INPUT");
			iLocal_308 = iVar0;
			iLocal_309 = iVar1;
			unk_0x1200CC973A2399C8(true);
			unk_0x3CAEA85DA607305E(iLocal_308);
			unk_0x3CAEA85DA607305E(iLocal_309);
			unk_0x7E60D21B163E9D56();
		}
	}
	func_462(2, 197, 1);
	func_462(2, 198, 1);
	iVar2 = unk_0x0DED1C1B8250FA57(2, 197);
	iVar3 = unk_0x0DED1C1B8250FA57(2, 198);
	if (((iVar2 != 127 || iLocal_310 != 127) || iVar3 != 127) || iLocal_311 != 127)
	{
		bVar4 = (unk_0x06F8112AA79C53D9(2, 242) || unk_0x7FEE810EE9E768EB(2, 242));
		if (!bVar4)
		{
			bVar4 = (unk_0x06F8112AA79C53D9(2, 241) || unk_0x7FEE810EE9E768EB(2, 241));
		}
		unk_0x7E60C62A7CE58FC8(iLocal_306, "SET_ANALOG_STICK_INPUT");
		iLocal_310 = iVar2;
		iLocal_311 = iVar3;
		unk_0x1200CC973A2399C8(false);
		unk_0x3CAEA85DA607305E(iLocal_310);
		unk_0x3CAEA85DA607305E(iLocal_311);
		unk_0x1200CC973A2399C8(bVar4);
		unk_0x7E60D21B163E9D56();
	}
	if ((unk_0xBFC0798A6E3417F9(2, 204) || unk_0xD245978525608929(2, 204)) && !unk_0x91E3F625EF57450D(2))
	{
		func_543(0, 1);
	}
}

void func_458()
{
	if (func_461())
	{
		func_454();
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 5))
	{
		unk_0x0674E58A79778E99(&iLocal_116, 5);
		func_328();
	}
	else if (func_460())
	{
		func_459();
	}
	else if (iLocal_123 == 1)
	{
		func_543(0, 1);
		return;
	}
	else
	{
		func_543(0, 1);
	}
	unk_0x4D7F4CC43D4D0DE3(-1, "Select_Mission_Cancel", "DLC_GR_MOC_Computer_Sounds", 1);
}

void func_459()
{
	unk_0x7E60C62A7CE58FC8(iLocal_306, "HIDE_JOB_OVERLAY");
	unk_0x7E60D21B163E9D56();
	unk_0x0674E58A79778E99(&iLocal_116, 4);
	unk_0x0674E58A79778E99(&iLocal_116, 5);
}

bool func_460()
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_116, 4);
}

bool func_461()
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_116, 0);
}

void func_462(int iParam0, int iParam1, int iParam2)
{
	if (!func_463())
	{
		unk_0x558EC149EB2BC0A2(iParam0, iParam1);
		unk_0xEAB026E686C0D991(iParam0, iParam1, iParam2);
	}
}

bool func_463()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

void func_464()
{
	unk_0x3FC8DBCC154CA56B();
	unk_0x5024DE80A08E9E70(19);
	unk_0xEF6276132B396452(0f, 1065353216);
	unk_0x2FB9A57162E54BAB(0f);
	func_478();
	if (Global_76622)
	{
		unk_0x73591FF5CCBBB2EA(4);
		unk_0x73591FF5CCBBB2EA(5);
		unk_0x73591FF5CCBBB2EA(13);
		unk_0x73591FF5CCBBB2EA(3);
	}
	unk_0xB8E3919889462ACD();
	func_462(2, 199, 1);
	unk_0xD9ACBBA59FD5A09E(1);
	func_477(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x6567AE843FADBA94(iLocal_306, 255, 255, 255, 255, 0);
	func_475();
	func_468(0);
	func_465(1);
}

void func_465(bool bParam0)
{
	if (bParam0)
	{
		func_467();
	}
	func_466(4, -1);
	func_466(6, -1);
	func_466(7, -1);
	func_466(3, -1);
	func_466(1, -1);
	func_466(2, -1);
	func_466(11, -1);
	func_466(13, -1);
	func_466(14, -1);
	func_466(16, -1);
}

void func_466(int iParam0, int iParam1)
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

void func_467()
{
	Global_2537071.f_4532 = 0;
}

void func_468(int iParam0)
{
	if (func_474())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_473(0))
		{
			func_469(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_469(int iParam0)
{
	if (func_474())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_472())
		{
			func_471(1, 1);
		}
		else
		{
			func_471(0, 0);
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
	if (!func_470())
	{
		Global_19486.f_1 = 3;
	}
}

int func_470()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_471(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_473(0))
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

bool func_472()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_473(int iParam0)
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

bool func_474()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_475()
{
	unk_0xC2127C0F64D6A3B9();
	func_476();
}

void func_476()
{
	Global_22211.f_134 = 1;
}

void func_477(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_478()
{
	func_479(1);
	if (!unk_0x1A72D8C9F025E5E3() && !unk_0x798A3F1296751F46())
	{
		unk_0x5EEBDFEE72949D59(0);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
	}
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		if (func_480())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_480()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_481(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 4))
	{
		if (!func_461())
		{
			if (func_1(&uLocal_314, 1000, 0))
			{
				func_496(iParam0);
			}
			if (func_1(&uLocal_312, 500, 0))
			{
				func_494(iParam0);
			}
		}
	}
	else
	{
		func_250(&uLocal_314);
		iLocal_119 = 0;
		if (!func_223(12) || unk_0xEAE0D21A50E6C7F4(iLocal_116, 7))
		{
			if (func_1(&uLocal_312, 500, 0))
			{
				func_250(&uLocal_312);
				func_482(3);
				if (func_223(12))
				{
					unk_0x0674E58A79778E99(&iLocal_116, 7);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_116, 7);
				}
			}
		}
		else
		{
			func_250(&uLocal_312);
		}
	}
}

void func_482(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(iLocal_306, "UPDATE_MISSION");
	iVar0 = iParam0;
	iVar1 = 0;
	bVar2 = func_484(iVar0);
	if (iVar0 == 3 && !func_223(12))
	{
		iVar1 = func_483(12) + 1;
		unk_0x5D96D8530B3D0904(&iLocal_116, 7);
		bVar2 = false;
	}
	if (func_358(iVar0))
	{
		bVar2 = false;
	}
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x1200CC973A2399C8(bVar2);
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x7E60D21B163E9D56();
}

int func_483(int iParam0)
{
	if (iParam0 == 8)
	{
		iVar0 = (Global_2514804 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2514606.f_144)));
		iVar0 = (iVar0 / 1000);
	}
	else
	{
		iVar0 = (Global_262145.f_18842 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), Global_2514606.f_146)));
		iVar0 = (iVar0 / 1000);
	}
	return iVar0;
}

int func_484(int iParam0)
{
	if (!func_355())
	{
		return 0;
	}
	if (func_344() && iParam0 != 0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_343(unk_0xD803B885F5E47A62()))
			{
				return func_490();
			}
			break;
		
		case 2:
			return (func_336(unk_0xD803B885F5E47A62()) && func_337(0));
			break;
		
		case 3:
			return (func_327(unk_0xD803B885F5E47A62()) && func_337(0));
			break;
		
		case 4:
			return ((func_34(unk_0xD803B885F5E47A62()) && func_487(1)) && !func_486(5));
			break;
		
		case 5:
			if (func_485(unk_0xD803B885F5E47A62()) && func_32(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_485(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_486(int iParam0)
{
	iVar0 = func_166(3973, -1, 0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

int func_487(int iParam0)
{
	if (!func_489(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = func_25(unk_0xD803B885F5E47A62(), iVar0);
				if (func_20(iVar1))
				{
					if (func_27(iVar1) == func_488(iParam0) && func_21(unk_0xD803B885F5E47A62(), iVar1))
					{
						iVar2 = func_19(unk_0xD803B885F5E47A62(), iVar1);
						if (Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iVar2].f_7 || Global_1370147[iVar2] != 0)
						{
							return Global_1590535[unk_0xD803B885F5E47A62()].f_274.f_183[iVar2].f_4 > 0;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 0:
			if (func_336(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			else
			{
				return func_342(unk_0xD803B885F5E47A62());
			}
			break;
	}
	return 0;
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5;
		
		case 2:
			return 4;
		
		case 3:
			return 3;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 6:
			return 2;
		
		default:
	}
	return -1;
}

int func_489(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_34(iParam0);
		
		case 2:
			return func_28(iParam0, 4);
		
		case 3:
			return func_28(iParam0, 3);
		
		case 4:
			return func_28(iParam0, 1);
		
		case 5:
			return func_28(iParam0, 0);
		
		case 6:
			return func_28(iParam0, 2);
		
		case 0:
			if (func_343(iParam0) || func_336(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_490()
{
	return func_491(15966, -1, -1);
}

int func_491(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_168();
	}
	iVar1 = func_493(iParam0, iParam1);
	uVar2 = func_492(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_492(int iParam0)
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

int func_493(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_168();
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

void func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = func_348(func_326(iVar0));
				if (func_324(func_326(iVar0), &iVar2))
				{
					func_495(iVar0, iVar1);
				}
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < func_240())
			{
				iVar1 = func_227(func_246(iVar0));
				if (iVar1 <= 0)
				{
					if (!func_226())
					{
						iVar1 = (Global_262145.f_15096 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), Global_2514606.f_142)));
					}
				}
				if (iVar1 >= 0)
				{
					func_495(iVar0, iVar1);
				}
				iVar0++;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (func_249(func_252(iVar0)))
				{
					iVar3 = func_252(iVar0);
					iVar1 = func_340(Global_2514754[iVar3], Global_2514754.f_17[iVar3], 0);
				}
				else
				{
					iVar1 = 0;
				}
				if (iVar1 >= 0)
				{
					func_495(iVar0, iVar1);
				}
				iVar0++;
			}
			break;
	}
}

void func_495(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iLocal_306, "UPDATE_COOLDOWN");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_119 == 6)
			{
				iLocal_119 = 0;
				func_497(&uLocal_314, 0, 0);
			}
			else
			{
				iVar0 = func_326(iLocal_119);
				iVar5 = func_13(iLocal_119);
				func_256(iLocal_119, 1);
				if (func_324(iVar0, &iVar6))
				{
					if (iVar6 != iVar5)
					{
						bVar4 = true;
					}
				}
				else if (func_13(iLocal_119) != iVar5)
				{
					bVar4 = true;
				}
				if (bVar4)
				{
					func_347();
					func_497(&uLocal_314, 0, 0);
					iLocal_119 = 0;
				}
				else
				{
					iLocal_119++;
				}
			}
			break;
		
		case 5:
			if (iLocal_119 == 5)
			{
				iLocal_119 = 0;
				func_497(&uLocal_314, 0, 0);
			}
			else
			{
				iVar5 = func_13(iLocal_119);
				iVar7 = iLocal_119;
				if (func_28(unk_0xD803B885F5E47A62(), iVar7))
				{
					iVar1 = func_26(unk_0xD803B885F5E47A62(), iVar7);
					iVar8 = func_25(unk_0xD803B885F5E47A62(), iVar1);
					func_14(iVar8, iVar1, iLocal_119);
					if (func_13(iLocal_119) != iVar5)
					{
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					func_6();
					func_497(&uLocal_314, 0, 0);
					iLocal_119 = 0;
				}
				else
				{
					iLocal_119++;
				}
			}
			break;
		
		case 1:
			if (iLocal_119 == 9)
			{
				iLocal_119 = 0;
				func_497(&uLocal_314, 0, 0);
			}
			else
			{
				iVar9 = func_252(iLocal_119);
				if (iVar9 != 8)
				{
					if (func_249(iVar9))
					{
						bVar4 = func_13(iLocal_119) != 13;
					}
					else if (func_251(unk_0xD803B885F5E47A62()))
					{
						bVar4 = func_13(iLocal_119) != 14;
					}
					else
					{
						bVar4 = func_13(iLocal_119) != false;
					}
				}
				else
				{
					bVar4 = func_13(iLocal_119) != 14;
				}
				if (bVar4)
				{
					func_339();
					func_497(&uLocal_314, 0, 0);
					iLocal_119 = 0;
				}
				else
				{
					iLocal_119++;
				}
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 5))
			{
				if (iLocal_119 == func_240())
				{
					iLocal_119 = 0;
					func_497(&uLocal_314, 0, 0);
				}
				else
				{
					iVar2 = func_246(iLocal_119);
					if (func_236(iVar2) < iLocal_302)
					{
						bVar4 = func_13(iLocal_119) != 15;
					}
					else
					{
						bVar4 = func_13(iLocal_119) == 15;
					}
					if (!bVar4)
					{
						iVar3 = func_227(iVar2);
						if (iVar3 <= 0)
						{
							if (!func_226())
							{
								iVar3 = (Global_262145.f_15096 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), Global_2514606.f_142)));
							}
						}
						if (func_13(iLocal_119) == 16)
						{
							bVar4 = iVar3 <= false;
						}
						else
						{
							bVar4 = iVar3 > 0;
						}
					}
					if (bVar4)
					{
						func_225();
						func_497(&uLocal_314, 0, 0);
						iLocal_119 = 0;
					}
					else
					{
						iLocal_119++;
					}
				}
			}
			break;
		
		default:
			iLocal_119 = 0;
			func_497(&uLocal_314, 0, 0);
			break;
	}
}

void func_497(var uParam0, bool bParam1, bool bParam2)
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

void func_498()
{
	if (iLocal_121 != -1)
	{
		func_499(iLocal_121);
	}
}

void func_499(int iParam0)
{
	if (func_500(&uLocal_126, "PAIFMAU", func_520(iParam0), 8, 0, 0, 0))
	{
		iLocal_121 = -1;
	}
}

bool func_500(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_519(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_501(sParam2, iParam3, 0);
}

int func_501(char* sParam0, int iParam1, bool bParam2)
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
					func_518();
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
		if (func_517(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_516();
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
				func_508();
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
				if (func_507())
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
			if (func_470())
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
			func_506();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_505();
		func_502();
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
		func_518();
	}
	return 0;
}

void func_502()
{
	if (!func_503())
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

int func_503()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_18())
	{
		return 0;
	}
	if (func_504(unk_0xD803B885F5E47A62()))
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

bool func_504(int iParam0)
{
	return func_41(iParam0, 20);
}

void func_505()
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

void func_506()
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

int func_507()
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

void func_508()
{
	if (func_515(14))
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
		Global_19486 = func_509();
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

var func_509()
{
	func_510();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_510()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_513(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_512(unk_0x16F2683693E537C9());
			if (func_511(iVar0) && (!func_515(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_511(Global_111638.f_2358.f_539.f_4321))
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

bool func_511(int iParam0)
{
	return iParam0 < 3;
}

int func_512(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_513(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_513(int iParam0)
{
	if (func_511(iParam0))
	{
		return func_514(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_514(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_515(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_516()
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

bool func_517(int iParam0, int iParam1)
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

void func_518()
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

void func_519(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PAIFM_APPINT";
		
		case 1:
			return "PAIFM_APPBL";
		
		case 2:
			return "PAIFM_APPCJ";
		
		case 3:
			return "PAIFM_REMBL1";
		
		case 4:
			return "PAIFM_REMBL2";
		
		case 5:
			return "PAIFM_REMBL3";
		
		case 6:
			return "PAIFM_REMBB1";
		
		case 7:
			return "PAIFM_REMBB2";
		
		case 8:
			return "PAIFM_REMBB3";
		
		default:
	}
	return "PAIFM_APPINT";
}

void func_521()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 8) && !func_529())
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 10))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1676231, 16) || unk_0xEAE0D21A50E6C7F4(iLocal_116, 12))
			{
				unk_0x5D96D8530B3D0904(&iLocal_116, 9);
				return;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 28))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_116, 11))
				{
					if (func_527())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_1676231, 17))
						{
							bVar0 = true;
							iLocal_120 = 9000;
							iLocal_121 = func_526(1);
							unk_0x5D96D8530B3D0904(&Global_1676231, 17);
							unk_0x5D96D8530B3D0904(&iLocal_116, 12);
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iLocal_116, 12);
						}
					}
					else if (func_525())
					{
						bVar0 = true;
						iLocal_120 = 9000;
						iLocal_121 = func_526(0);
						func_524();
						unk_0x5D96D8530B3D0904(&Global_1676231, 16);
					}
				}
			}
		}
		else
		{
			if (!func_491(22141, -1, -1))
			{
				bVar0 = true;
				iLocal_120 = 9000;
				iLocal_121 = 0;
				func_362(22141, 1, -1, 1);
			}
			if (!func_491(22142, -1, -1) && !bVar0)
			{
				bVar0 = true;
				iLocal_120 = 9000;
				iLocal_121 = 1;
				func_362(22142, 1, -1, 1);
			}
			if (((unk_0xEAE0D21A50E6C7F4(iLocal_116, 4) && iLocal_125 == 0) && !func_491(22143, -1, -1)) && !bVar0)
			{
				bVar0 = true;
				iLocal_120 = 9000;
				iLocal_121 = 2;
				func_362(22143, 1, -1, 1);
			}
		}
	}
	if (bVar0)
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 8);
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_116, 8))
	{
		if (!func_3(&uLocal_318))
		{
			func_2(&uLocal_318, 0, 0);
		}
		else if (func_1(&uLocal_318, iLocal_120, 0))
		{
			unk_0x0674E58A79778E99(&iLocal_116, 8);
			iLocal_120 = 0;
			func_250(&uLocal_318);
			if (func_523())
			{
				unk_0x5D96D8530B3D0904(&iLocal_116, 9);
			}
			if (func_522())
			{
				unk_0x5D96D8530B3D0904(&iLocal_116, 10);
				unk_0x5D96D8530B3D0904(&iLocal_116, 11);
			}
		}
	}
}

int func_522()
{
	if ((func_491(22141, -1, -1) && func_491(22142, -1, -1)) && func_491(22143, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_523()
{
	if (((((((func_491(22141, -1, -1) && func_491(22142, -1, -1)) && func_491(22143, -1, -1)) && func_491(22179, -1, -1)) && func_491(22180, -1, -1)) && func_491(22181, -1, -1)) && func_491(22182, -1, -1)) && func_491(22183, -1, -1))
	{
		return 1;
	}
	return 0;
}

void func_524()
{
	if (!func_491(22179, -1, -1))
	{
		func_362(22179, 1, -1, 1);
		return;
	}
	if (!func_491(22180, -1, -1))
	{
		func_362(22180, 1, -1, 1);
		return;
	}
	if (!func_491(22181, -1, -1))
	{
		func_362(22181, 1, -1, 1);
		return;
	}
	if (!func_491(22182, -1, -1))
	{
		func_362(22182, 1, -1, 1);
		return;
	}
	if (!func_491(22183, -1, -1))
	{
		func_362(22183, 1, -1, 1);
		return;
	}
}

int func_525()
{
	if ((((func_491(22179, -1, -1) && func_491(22180, -1, -1)) && func_491(22181, -1, -1)) && func_491(22182, -1, -1)) && func_491(22183, -1, -1))
	{
		return 0;
	}
	return 1;
}

int func_526(bool bParam0)
{
	iVar0 = 3;
	iVar1 = 6;
	if (bParam0)
	{
		iVar0 = 6;
		iVar1 = 9;
	}
	return unk_0x09AC81E49EA267F7(iVar0, iVar1);
}

int func_527()
{
	if (func_528(unk_0xD803B885F5E47A62()) == 0)
	{
		return !func_327(unk_0xD803B885F5E47A62());
	}
	return 0;
}

int func_528(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	if (func_34(iParam0))
	{
		iVar0++;
	}
	if (func_28(iParam0, 4))
	{
		iVar0++;
	}
	if (func_28(iParam0, 3))
	{
		iVar0++;
	}
	if (func_28(iParam0, 1))
	{
		iVar0++;
	}
	if (func_28(iParam0, 0))
	{
		iVar0++;
	}
	if (func_28(iParam0, 2))
	{
		iVar0++;
	}
	if (func_343(iParam0) || func_336(iParam0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_529()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_530()
{
	if (!unk_0x8CD06866876216F2())
	{
		func_543(0, 1);
	}
	else if (func_463() || unk_0xB9132A06AE472728(2, 199))
	{
		func_543(0, 1);
	}
	else if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		func_543(0, 1);
	}
	else if (unk_0xD0BB2359EC70FC37())
	{
		func_543(0, 1);
	}
	else if (func_480())
	{
		func_543(0, 1);
	}
}

bool func_531()
{
	return Global_73825;
}

void func_532()
{
	func_530();
	iLocal_306 = unk_0xB01F55A0FD1CFD49("hacker_truck_desktop");
	while (!unk_0x83D8570832F172A7(iLocal_306))
	{
		wait(0);
	}
	func_469(1);
	func_541(1);
	func_540();
	unk_0x56FCE5C6DA4AA600();
	func_539(1);
	if (unk_0x2EBF608FFE6CA406(3) || Global_2537071.f_1852)
	{
		if (Global_2537071.f_1852)
		{
		}
		func_543(0, 1);
	}
	iLocal_303 = Global_1676086;
	func_537();
	func_2(&uLocal_316, 0, 0);
	if (unk_0x0EFF6B4415DAF4A1())
	{
		func_536(1, 1, 1, 1);
	}
	if (!unk_0x562F77A7F33D2E46("GTAO_Computer_Screen_Active_Scene"))
	{
		unk_0x8BC9595FD2792B5D("GTAO_Computer_Screen_Active_Scene");
	}
	func_533();
	wait(0);
}

void func_533()
{
	if (func_523())
	{
		unk_0x5D96D8530B3D0904(&iLocal_116, 9);
	}
	else
	{
		if (func_522())
		{
			unk_0x5D96D8530B3D0904(&iLocal_116, 10);
		}
		func_535(1);
		func_534(&uLocal_126, 2, 0, "PAIGE", 0, 1);
	}
}

void func_534(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_535(bool bParam0)
{
	if (bParam0)
	{
		Global_1573348 = 1;
	}
	else
	{
		Global_1573348 = 0;
	}
}

int func_536(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_537()
{
	func_359(0);
	func_538();
}

void func_538()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_482(iVar0);
		iVar0++;
	}
}

void func_539(int iParam0)
{
	if (Global_73825 != iParam0)
	{
		Global_73825 = iParam0;
	}
}

void func_540()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = unk_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_541(bool bParam0)
{
	if (bParam0)
	{
		func_542();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_473(0))
		{
			func_469(0);
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

void func_542()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_543(int iParam0, bool bParam1)
{
	unk_0xE17FDF9E3068281B(&iLocal_306);
	func_539(iParam0);
	func_541(0);
	func_544();
	unk_0x5FEA2B013EBED3F6(1000);
	if (bParam1)
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Logout", "DLC_GR_MOC_Computer_Sounds", 1);
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		func_536(0, 1, 1, 1);
	}
	unk_0x17D339215F817B98();
	if (unk_0x562F77A7F33D2E46("GTAO_Computer_Screen_Active_Scene"))
	{
		unk_0x8910D3D58E0132B8("GTAO_Computer_Screen_Active_Scene");
	}
	unk_0x0674E58A79778E99(&(Global_1676377.f_3), 28);
	unk_0x10FAF14A60A0DBE1();
}

void func_544()
{
	if (!Global_1312575)
	{
		return;
	}
	func_545();
}

void func_545()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

