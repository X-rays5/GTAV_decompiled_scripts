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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	if (func_86())
	{
		while (!func_72())
		{
			wait(0);
			func_9(&uLocal_83);
		}
	}
	func_1();
}

void func_1()
{
	func_3(&uLocal_83);
	func_2();
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_3(var uParam0)
{
	func_7(&(uParam0->f_43.f_5));
	func_5(uParam0, 1);
	if (uParam0->f_43.f_4 > 2)
	{
		func_4(-1);
		iVar0 = unk_0xF958843510932FF6(uParam0->f_43.f_1);
		if (unk_0x69DF961355195C3C(iVar0))
		{
			unk_0x45934E8E3471AAA9(uParam0->f_43.f_1);
		}
	}
}

void func_4(int iParam0)
{
	Global_2460709 = iParam0;
	Global_1590535[unk_0xD803B885F5E47A62()].f_870 = iParam0;
}

void func_5(var uParam0, int iParam1)
{
	if (((((((((((((((func_6("MPOF_AC_PC_EXIT") || func_6("MPOF_AC_EXIT")) || func_6("MPOFSEAT_PCEXIT")) || func_6("MPOFSEAT_EXIT")) || func_6("DJ_SEAT_PC")) || func_6("DJ_SEAT")) || func_6("DJ_PSEAT_PC")) || func_6("DJ_PSEAT")) || func_6("DJ_SEAT_PC_BM")) || func_6("DJ_SEAT_BM")) || func_6("DJ_PSEAT_PC_BM")) || func_6("DJ_PSEAT_BM")) || func_6("DJ_SEAT_PC_TOU")) || func_6("DJ_SEAT_TOU")) || func_6("DJ_PSEAT_PC_TOU")) || func_6("DJ_PSEAT_TOU"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (iParam1 && uParam0->f_43.f_5 != -1)
	{
		func_7(&(uParam0->f_43.f_5));
		uParam0->f_43.f_5 = -1;
	}
}

bool func_6(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_7(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_8(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_8(int iParam0)
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

void func_9(var uParam0)
{
	func_69(uParam0);
	func_67(uParam0);
	switch (uParam0->f_43.f_4)
	{
		case 0:
			func_66(&(uParam0->f_43), 11);
			func_65(uParam0, 1);
			break;
		
		case 1:
			Global_1676358 = 0;
			if (func_64(uParam0))
			{
				uParam0->f_43.f_6 = unk_0x1C0640BA9A7327B3();
				func_65(uParam0, 2);
			}
			break;
		
		case 2:
			if (func_63(unk_0x16F2683693E537C9(), uParam0[uParam0->f_43.f_2]) && func_62(unk_0x16F2683693E537C9(), uParam0[uParam0->f_43.f_2]->f_8.f_3, (*uParam0)[uParam0->f_43.f_2]))
			{
				if ((func_60(uParam0) || func_56(uParam0)) || !func_55(uParam0))
				{
					func_5(uParam0, 1);
					func_65(uParam0, 1);
				}
				else
				{
					Global_1676358 = 1;
					if (uParam0->f_43.f_5 == -1)
					{
						if ((unk_0x1C0640BA9A7327B3() - uParam0->f_43.f_6) > 150)
						{
							func_54(&(uParam0->f_43.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
					else if (unk_0xBFC0798A6E3417F9(0, 51))
					{
						func_7(&(uParam0->f_43.f_5));
						func_51(uParam0);
						func_65(uParam0, 3);
					}
				}
			}
			else
			{
				func_5(uParam0, 1);
				func_65(uParam0, 1);
			}
			break;
		
		case 3:
			func_50(uParam0, &sVar0);
			unk_0x3F423BF5B8125A50(&sVar0);
			if (unk_0xB4AE0788C1587752(&sVar0))
			{
				func_65(uParam0, 4);
			}
			break;
		
		case 4:
			func_50(uParam0, &sVar0);
			func_49(uParam0, &sVar16);
			vVar20 = { unk_0x1BB04F10296A1C5E(&sVar0, &sVar16, func_48(uParam0), func_47(uParam0), 0, 2) };
			vVar23 = { unk_0xEEB20D14BD38615E(&sVar0, &sVar16, func_48(uParam0), func_47(uParam0), 0, 2) };
			fVar26 = vVar23.z;
			fVar27 = 0,05f;
			if (uParam0->f_43.f_8 == 1)
			{
				fVar27 = 0,15f;
			}
			unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), vVar20, 1f, 500, fVar26, fVar27);
			func_4(uParam0->f_43.f_2);
			func_65(uParam0, 5);
			break;
		
		case 5:
			func_35(uParam0);
			func_50(uParam0, &sVar0);
			func_49(uParam0, &sVar16);
			iVar28 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073);
			vVar29 = { unk_0xEEB20D14BD38615E(&sVar0, &sVar16, func_48(uParam0), func_47(uParam0), 0, 2) };
			fVar32 = vVar29.z;
			if ((iVar28 != 1 && iVar28 != 0) || func_34(unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), fVar32, 5f))
			{
				uParam0->f_43.f_1 = unk_0xF66E5A439A080021(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1,12f);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_43.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1148846080, 0);
				unk_0x914E6894744915F8(uParam0->f_43.f_1);
				uParam0->f_43.f_8.f_4 = unk_0x1C0640BA9A7327B3();
				func_33(&(uParam0->f_43), 8);
				func_65(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_32(&(uParam0->f_43), 10) || func_31())
			{
				func_66(&(uParam0->f_43), 10);
				func_30(uParam0);
			}
			func_35(uParam0);
			func_16(uParam0);
			iVar33 = unk_0xF958843510932FF6(uParam0->f_43.f_1);
			if (unk_0x69DF961355195C3C(iVar33))
			{
				if (unk_0xA45992A6CE82FB43(iVar33) >= 1f)
				{
					func_10(uParam0, 0);
					func_50(uParam0, &sVar0);
					func_49(uParam0, &sVar16);
					uParam0->f_43.f_1 = unk_0xF66E5A439A080021(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1,12f);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_43.f_1, &sVar0, &sVar16, 4f, -1,5f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(uParam0->f_43.f_1);
					func_33(&(uParam0->f_43), 8);
					func_33(&(uParam0->f_43), 11);
				}
				else
				{
					func_66(&(uParam0->f_43), 8);
				}
			}
			else if (!func_32(&(uParam0->f_43), 8))
			{
				func_65(uParam0, 8);
			}
			break;
		
		case 7:
			unk_0x45934E8E3471AAA9(uParam0->f_43.f_1);
			func_65(uParam0, 8);
			break;
		
		case 8:
			iVar34 = unk_0xF958843510932FF6(uParam0->f_43.f_1);
			iVar35 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 1785177548);
			if (iVar35 == 0 || iVar35 == 1)
			{
				if (unk_0x69DF961355195C3C(iVar34))
				{
					if ((unk_0xA45992A6CE82FB43(iVar34) >= 0,7f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 364629851)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2116425869))
					{
						unk_0x45934E8E3471AAA9(uParam0->f_43.f_1);
						func_4(-1);
						func_5(uParam0, 1);
						func_65(uParam0, 0);
					}
				}
			}
			else
			{
				func_4(-1);
				func_5(uParam0, 1);
				func_65(uParam0, 0);
			}
			break;
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_11(uParam0);
		if (iVar1 != uParam0->f_43.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_43.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_43.f_8.f_2;
		}
		iVar1 = uParam0->f_43.f_8.f_1;
	}
	else if (uParam0->f_43.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_43.f_8.f_1;
		iVar2 = 3;
		iVar0 = unk_0x09AC81E49EA267F7(0, iVar2);
		if (iVar0 == uParam0->f_43.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_43.f_8.f_2 > 6)
		{
			iVar1 = func_11(uParam0);
			uParam0->f_43.f_8.f_4 = unk_0x1C0640BA9A7327B3();
		}
		else
		{
			iVar1 = uParam0->f_43.f_8.f_1;
		}
		if ((unk_0x1C0640BA9A7327B3() - uParam0->f_43.f_8.f_4) >= 90000)
		{
			iVar1 = func_11(uParam0);
			if (iVar1 != uParam0->f_43.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_43.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_43.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_43.f_8.f_3 = uParam0->f_43.f_8.f_2;
	uParam0->f_43.f_8.f_2 = iVar0;
	uParam0->f_43.f_8.f_1 = iVar1;
}

int func_11(var uParam0)
{
	if (uParam0->f_43.f_8 == 2)
	{
		return uParam0->f_43.f_8.f_1;
	}
	iVar0 = (uParam0->f_43.f_8.f_1 + 1 % func_14(uParam0->f_43.f_8));
	if (func_12())
	{
		if (uParam0->f_43.f_8 == 1)
		{
			if (iVar0 == 0 || iVar0 == 4)
			{
				iVar0 = 1;
			}
		}
	}
	else if (uParam0->f_43.f_8 == 1)
	{
		if (iVar0 == 1 || iVar0 == 2)
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

bool func_12()
{
	return func_13(unk_0xD803B885F5E47A62());
}

int func_13(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_15(func_12(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_15(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_16(var uParam0)
{
	if (uParam0->f_43.f_4 == 6)
	{
		vVar0 = { unk_0x4F3973434662D795(0, 218), unk_0x4F3973434662D795(0, 219), 0f };
		fVar3 = vmag(vVar0);
		if ((uParam0->f_43.f_4 == 6 && !unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1322051853)) && !func_32(&(uParam0->f_43), 12))
		{
			if ((fVar3 >= 0,35f && !Global_2514785) && !Global_2514787)
			{
				func_29(uParam0);
			}
		}
		if (unk_0xB8E3620B82AD47D7(2))
		{
			func_5(uParam0, 1);
		}
		if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1322051853))
		{
			func_5(uParam0, 1);
		}
		else if (Global_2514785 || Global_2514787)
		{
			func_5(uParam0, 1);
		}
		else if (func_28(uParam0))
		{
			func_5(uParam0, 1);
		}
		else
		{
			unk_0xA2E3EDD0E119882F(2);
			unk_0x38C3A68D7861DCFD(0, 24, 1);
			unk_0x38C3A68D7861DCFD(0, 257, 1);
			unk_0x38C3A68D7861DCFD(0, 142, 1);
			unk_0x38C3A68D7861DCFD(0, 141, 1);
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 263, 1);
			unk_0x38C3A68D7861DCFD(0, 264, 1);
			unk_0x38C3A68D7861DCFD(0, 143, 1);
			unk_0x38C3A68D7861DCFD(2, 200, 1);
			bVar4 = false;
			if (((func_26(func_27()) && func_25()) && func_24(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8, 4)) && func_23(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8))
			{
				bVar4 = true;
			}
			if (((((!unk_0x798A3F1296751F46() && !func_32(&(uParam0->f_43), 0)) && !func_32(&(uParam0->f_43), 4)) && !func_22()) && !func_20(1)) && uParam0->f_43.f_8.f_2 != 3)
			{
				if (uParam0->f_43.f_5 == -1)
				{
					if (uParam0->f_43.f_8 == 1 || uParam0->f_43.f_8 == 0)
					{
						if (unk_0x91E3F625EF57450D(2))
						{
							if (bVar4)
							{
								if (func_17(unk_0xD803B885F5E47A62()) == 3)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC_BM", 0, 0, 0, 0);
								}
								else if (func_17(unk_0xD803B885F5E47A62()) == 2)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC_TOU", 0, 0, 0, 0);
								}
								else
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_PC", 0, 0, 0, 0);
								}
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "MPOF_AC_PC_EXIT", 0, 0, 0, 0);
							}
						}
						else if (bVar4)
						{
							if (func_17(unk_0xD803B885F5E47A62()) == 3)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_BM", 0, 0, 0, 0);
							}
							else if (func_17(unk_0xD803B885F5E47A62()) == 2)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT_TOU", 0, 0, 0, 0);
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_SEAT", 0, 0, 0, 0);
							}
						}
						else
						{
							func_54(&(uParam0->f_43.f_5), 4, "MPOF_AC_EXIT", 0, 0, 0, 0);
						}
					}
					else if (uParam0->f_43.f_8 == 2)
					{
						if (unk_0x91E3F625EF57450D(2))
						{
							if (bVar4)
							{
								if (func_17(unk_0xD803B885F5E47A62()) == 3)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC_BM", 0, 0, 0, 0);
								}
								else if (func_17(unk_0xD803B885F5E47A62()) == 2)
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC_TOU", 0, 0, 0, 0);
								}
								else
								{
									func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_PC", 0, 0, 0, 0);
								}
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
							}
						}
						else if (bVar4)
						{
							if (func_17(unk_0xD803B885F5E47A62()) == 3)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_BM", 0, 0, 0, 0);
							}
							else if (func_17(unk_0xD803B885F5E47A62()) == 2)
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT_TOU", 0, 0, 0, 0);
							}
							else
							{
								func_54(&(uParam0->f_43.f_5), 4, "DJ_PSEAT", 0, 0, 0, 0);
							}
						}
						else
						{
							func_54(&(uParam0->f_43.f_5), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
						}
					}
				}
				if (uParam0->f_43.f_4 == 6)
				{
					if (unk_0x91E3F625EF57450D(2))
					{
						iVar5 = 225;
					}
					else
					{
						iVar5 = 190;
					}
					if (((unk_0xD245978525608929(2, iVar5) && !unk_0xBFC0798A6E3417F9(2, 203)) && !Global_2514787) && !Global_2514785)
					{
						func_30(uParam0);
					}
					if (((((unk_0xD245978525608929(2, 203) && !unk_0xD245978525608929(2, iVar5)) && func_26(func_27())) && func_25()) && func_24(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8, 4)) && func_23(Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8))
					{
						Global_2514787 = 1;
						Global_2514785 = 1;
					}
				}
			}
		}
	}
	func_66(&(uParam0->f_43), 9);
}

int func_17(int iParam0)
{
	iVar0 = -1;
	if (func_18(iParam0, 0))
	{
		iVar0 = 0;
	}
	else if (func_18(iParam0, 1))
	{
		iVar0 = 1;
	}
	else if (func_18(iParam0, 2))
	{
		iVar0 = 2;
	}
	else if (func_18(iParam0, 3))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_18(int iParam0, int iParam1)
{
	if (iParam0 == func_19() || iParam1 == -1)
	{
		return 0;
	}
	iVar0 = iParam1 + 20;
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, iVar0);
}

int func_19()
{
	return -1;
}

int func_20(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_21(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0, 25) || unk_0x06F8112AA79C53D9(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 19) || (!bParam0 && unk_0x7FEE810EE9E768EB(0, 19)))
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0, 166) || unk_0x06F8112AA79C53D9(0, 167)) || unk_0x06F8112AA79C53D9(0, 168)) || unk_0x06F8112AA79C53D9(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0, 166) || unk_0x7FEE810EE9E768EB(0, 167)) || unk_0x7FEE810EE9E768EB(0, 168)) || unk_0x7FEE810EE9E768EB(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_23(int iParam0)
{
	if (iParam0 == func_19())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_322.f_1, 1);
}

int func_24(int iParam0, int iParam1)
{
	if (iParam0 == func_19())
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

int func_25()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1612,283f, -3021,792f, -76,18069f, -1612,22f, -3005,203f, -74,20517f, 12,75f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (Global_262145.f_23846)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		
		default:
	}
	return 0;
}

int func_27()
{
	return Global_2460709;
}

bool func_28(var uParam0)
{
	return func_32(&(uParam0->f_43), 9);
}

void func_29(var uParam0)
{
	if (((func_11(uParam0) != uParam0->f_43.f_8.f_1 && uParam0->f_43.f_8.f_2 < 6) && uParam0->f_43.f_8.f_2 != 3) && uParam0->f_43.f_8.f_2 != 4)
	{
		func_10(uParam0, 1);
		func_50(uParam0, &sVar0);
		func_49(uParam0, &sVar16);
		uParam0->f_43.f_1 = unk_0xF66E5A439A080021(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1,12f);
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_43.f_1, &sVar0, &sVar16, 4f, -1,5f, 13, 16, 1148846080, 0);
		unk_0x914E6894744915F8(uParam0->f_43.f_1);
		func_33(&(uParam0->f_43), 8);
		unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
	}
}

void func_30(var uParam0)
{
	uParam0->f_43.f_1 = unk_0xF66E5A439A080021(func_48(uParam0), func_47(uParam0), 2, 1, 0, 1065353216, 0, 1,12f);
	func_50(uParam0, &sVar0);
	unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_43.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1148846080, 0);
	unk_0x914E6894744915F8(uParam0->f_43.f_1);
	func_7(&(uParam0->f_43.f_5));
	func_65(uParam0, 8);
}

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 25);
}

bool func_32(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
}

void func_33(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(iParam0, iParam1);
}

int func_34(float fParam0, float fParam1, float fParam2)
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

void func_35(var uParam0)
{
	switch (uParam0->f_43.f_4)
	{
		case 4:
		case 8:
			func_40(1);
		
		case 6:
			unk_0x2103752056F874E1();
			unk_0x770C703CAD045196(0);
			unk_0x69FCF499804D6AE7(0);
			unk_0x3584F71E5CA29322(19);
			unk_0x3584F71E5CA29322(2);
			unk_0x5A89B88F77C0FC3B();
			func_39();
			if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1) && iVar0 != -1569615261)
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, true);
			}
			unk_0x38C3A68D7861DCFD(0, 37, 1);
			func_37(1);
			func_36();
			break;
	}
}

void func_36()
{
	Global_22211.f_6 = 1;
}

void func_37(bool bParam0)
{
	if (bParam0)
	{
		if (func_38())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_38()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_39()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_40(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_45(0))
		{
			func_41(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_41(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_44())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_42())
	{
		Global_19486.f_1 = 3;
	}
}

int func_42()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
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

bool func_44()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_45(int iParam0)
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

bool func_46()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

Vector3 func_47(var uParam0)
{
	vVar0 = { uParam0[uParam0->f_43.f_2]->f_8.f_3 };
	if (func_12() && uParam0->f_43.f_8 == 0)
	{
		vVar0.z = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_48(var uParam0)
{
	return uParam0[uParam0->f_43.f_2]->f_8;
}

void func_49(var uParam0, char* sParam1)
{
	if (uParam0->f_43.f_8 == 1)
	{
		if (func_12())
		{
			switch (uParam0->f_43.f_8.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_A", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
		}
		else
		{
			switch (uParam0->f_43.f_8.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "A_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
				}
		}
	}
	else
	{
		switch (uParam0->f_43.f_8.f_2)
		{
			case 0:
				StringCopy(sParam1, "IDLE_A", 16);
				break;
			
			case 1:
				StringCopy(sParam1, "IDLE_B", 16);
				break;
			
			case 2:
				StringCopy(sParam1, "IDLE_C", 16);
				break;
			
			case 3:
				StringCopy(sParam1, "ENTER", 16);
				break;
			
			case 5:
				StringCopy(sParam1, "BASE", 16);
				break;
			
			case 4:
				StringCopy(sParam1, "EXIT", 16);
				break;
			
			case 7:
				StringCopy(sParam1, "A_TO_B", 16);
				break;
			
			case 8:
				StringCopy(sParam1, "B_TO_C", 16);
				break;
			
			case 9:
				StringCopy(sParam1, "C_TO_D", 16);
				break;
			
			case 10:
				StringCopy(sParam1, "D_TO_E", 16);
				break;
			
			case 12:
				StringCopy(sParam1, "B_TO_E", 16);
				break;
			
			case 13:
				StringCopy(sParam1, "C_TO_A", 16);
				break;
			
			case 14:
				StringCopy(sParam1, "D_TO_A", 16);
				break;
			
			case 15:
				StringCopy(sParam1, "E_TO_A", 16);
				break;
			
			default:
				StringCopy(sParam1, "invalid_clip", 16);
				break;
			}
	}
}

void func_50(var uParam0, char* sParam1)
{
	switch (uParam0->f_43.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_12())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_43.f_8)
	{
		case 1:
			if (func_12())
			{
				switch (uParam0->f_43.f_8.f_1)
				{
					case 0:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					
					case 1:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					
					case 2:
						StringConCat(sParam1, "@VAR_C@BASE@", 64);
						break;
					
					case 3:
						StringConCat(sParam1, "@VAR_D@BASE@", 64);
						break;
					
					case 4:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
				}
			}
			else
			{
				switch (uParam0->f_43.f_8.f_1)
				{
					case 0:
						StringConCat(sParam1, "@VAR_A@BASE@", 64);
						break;
					
					case 1:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					
					case 2:
						StringConCat(sParam1, "@VAR_C@BASE@", 64);
						break;
					
					case 3:
						StringConCat(sParam1, "@VAR_D@BASE@", 64);
						break;
					
					case 4:
						StringConCat(sParam1, "@VAR_E@BASE@", 64);
						break;
					}
			}
			break;
		
		case 0:
			switch (uParam0->f_43.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_43.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_51(var uParam0)
{
	uParam0->f_43.f_8 = func_53((*uParam0)[uParam0->f_43.f_2]);
	uParam0->f_43.f_8.f_1 = func_52(uParam0);
	uParam0->f_43.f_8.f_2 = 3;
	uParam0->f_43.f_8.f_3 = 3;
}

int func_52(var uParam0)
{
	switch (uParam0->f_43.f_8)
	{
		case 2:
			iVar0 = unk_0x09AC81E49EA267F7(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = unk_0x09AC81E49EA267F7(0, func_14(uParam0->f_43.f_8));
	}
	if (uParam0->f_43.f_8 == 1)
	{
		if (func_12())
		{
			if (iVar0 == 0 || iVar0 == 4)
			{
				iVar0 = 1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 2)
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 2;
		
		default:
	}
	return 0;
}

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_7(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_55(var uParam0)
{
	Stack.Push(!func_32(&(uParam0->f_43), 5));
	Stack.Push(uParam0[uParam0->f_43.f_2]);
	Stack.Push(uParam0->f_43.f_2);
	Call_Loc(uParam0->f_43.f_13);
	return (StackVal || StackVal);
}

int func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (iVar1 != unk_0xD803B885F5E47A62() && func_59(iVar1, 1, 1))
			{
				if (func_63(unk_0x9539D44F3E4492F6(iVar1), uParam0[uParam0->f_43.f_2]) || func_58(iVar1) == uParam0->f_43.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	if (func_57(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_57(var uParam0)
{
	unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, -1);
	iVar11 = 0;
	while (iVar11 < 10)
	{
		if (((unk_0xC844350D5D58C99A(uVar0[iVar11]) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar11])) && unk_0x4FC40AB0ECCE6E18(uVar0[iVar11])) && (func_63(uVar0[iVar11], uParam0[uParam0->f_43.f_2]) || vdist2(unk_0x68F4C0EC296D3901(uVar0[iVar11], 0), uParam0[uParam0->f_43.f_2]->f_1 + uParam0[uParam0->f_43.f_2]->f_1.f_3 / Vector(2f, 2f, 2f)) < 1f))
		{
			return 1;
		}
		iVar11++;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 != func_19())
	{
		return Global_1590535[iParam0].f_870;
	}
	return -1;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
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

bool func_60(var uParam0)
{
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return uParam0->f_43 & 31 > 0;
}

bool func_61(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0].f_310.f_3, 13);
}

int func_62(int iParam0, vector3 vParam1, int iParam4)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam4 == 3)
		{
			if (func_34(unk_0xD9522BA9E27E1349(iParam0), (vParam1.z - 180f), 45f))
			{
				return 1;
			}
		}
		else if (func_34(unk_0xD9522BA9E27E1349(iParam0), vParam1.z, 45f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63(int iParam0, var uParam1)
{
	return unk_0x3D1053F9EB43B7AD(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, true, 0);
}

int func_64(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_63(unk_0x16F2683693E537C9(), uParam0[uParam0->f_43.f_2]) && func_62(unk_0x16F2683693E537C9(), uParam0[uParam0->f_43.f_2]->f_8.f_3, (*uParam0)[uParam0->f_43.f_2]))
		{
			return 1;
		}
		else
		{
			uParam0->f_43.f_2 = (uParam0->f_43.f_2 + 1 % 3);
		}
		iVar0++;
	}
	return 0;
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_43.f_4 = iParam1;
}

void func_66(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(iParam0, iParam1);
}

void func_67(var uParam0)
{
	if (uParam0->f_43.f_4 == 6)
	{
	}
	else if (uParam0->f_43.f_4 > 4)
	{
		unk_0x797A01B0F40196A9(unk_0x16F2683693E537C9());
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_68());
		uParam0->f_43.f_7 = unk_0xF4CCC8CB6DE7F1AE();
	}
	else if ((unk_0xF4CCC8CB6DE7F1AE() - uParam0->f_43.f_7) < 5)
	{
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_68());
	}
}

float func_68()
{
	return 0,13f;
}

void func_69(var uParam0)
{
	func_70(&(uParam0->f_43), 4, func_71());
	func_70(&(uParam0->f_43), 1, unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0));
	func_70(&(uParam0->f_43), 3, unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1));
	func_70(&(uParam0->f_43), 0, func_45(0));
	func_70(&(uParam0->f_43), 2, unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()));
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam1;
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(iParam0, iVar0);
	}
	else
	{
		unk_0x0674E58A79778E99(iParam0, iVar0);
	}
}

bool func_71()
{
	return Global_73825;
}

int func_72()
{
	if ((unk_0x757EF87A33649210() && !func_85()) && !Global_2514785)
	{
		return 1;
	}
	if (!func_84())
	{
		return 1;
	}
	if (func_73())
	{
		return 1;
	}
	if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8 == func_19())
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	func_81(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_80())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_79())
	{
		return 1;
	}
	if (func_78(159))
	{
		if (!func_77())
		{
			return 1;
		}
	}
	if (func_78(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_74() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_74()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74()
{
	switch (func_76())
	{
		case 0:
			return func_75();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_75()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_76()
{
	return Global_30768;
}

bool func_77()
{
	return Global_2450632.f_598;
}

int func_78(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_79()
{
	return Global_2460680;
}

bool func_80()
{
	return Global_2450632.f_593;
}

void func_81(var uParam0)
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
					func_82(iVar0);
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

void func_82(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_59(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_83(iVar4, &bVar5))
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

int func_83(int iParam0, var uParam1)
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

int func_84()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207,5193f, 5163,855f, -86,59737f, 211,7083f, 5163,879f, -83,6007f, 6,25f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_85()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 10);
}

int func_86()
{
	if (Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8 != func_19())
	{
		if (unk_0xADC2AA9A68E522A1("arena_workshop_seats", Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8, 1, 0))
		{
			return 0;
		}
		unk_0x37AD2AB54480FA6A(32, 0, Global_2425662[unk_0xD803B885F5E47A62()].f_310.f_8);
		func_95(0, -1, 0);
		unk_0x256D93AFAE851A7A(0);
		func_94();
		func_87();
		return 1;
	}
	return 0;
}

void func_87()
{
	func_88(0, &uLocal_83, 0, 2);
	func_88(1, &uLocal_83, 1, 1);
	func_88(2, &uLocal_83, 2, 2);
}

void func_88(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_93(iParam0, &vVar0, &fVar3);
	(*uParam1)[iParam2] = iParam3;
	uParam1[iParam2]->f_8 = { vVar0 };
	uParam1[iParam2]->f_8.f_3 = { 0f, 0f, fVar3 };
	uParam1[iParam2]->f_1 = { func_90(func_92(), func_91(iParam3, fVar3)) + vVar0 };
	uParam1[iParam2]->f_1.f_3 = { func_90(func_89(), func_91(iParam3, fVar3)) + vVar0 };
	uParam1[iParam2]->f_1.f_6 = 1,25f;
}

Vector3 func_89()
{
	return 0,5f, -0,5f, 2f;
}

Vector3 func_90(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

float func_91(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return fParam1;
		
		case 3:
			return (fParam1 - 180f);
		
		default:
	}
	return fParam1;
}

Vector3 func_92()
{
	return -0,5f, -0,5f, 0f;
}

void func_93(int iParam0, var uParam1, var uParam2)
{
	if (func_12())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 209,185f, 5166,375f, -86,6007f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 210,085f, 5166,375f, -86,6007f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 210,897f, 5166,375f, -86,6007f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 209,185f, 5166,375f, -86,6007f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 210,085f, 5166,375f, -86,6007f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 210,897f, 5166,375f, -86,6007f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_94()
{
}

int func_95(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_96())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_80())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_78(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_96()
{
	return Global_1312854;
}

