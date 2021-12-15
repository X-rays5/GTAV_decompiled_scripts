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
	if (func_73())
	{
		while (!func_59())
		{
			func_11(&uLocal_83);
			wait(0);
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
	func_9(&(uParam0->f_29.f_5));
	func_4(uParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_29.f_5));
	}
}

bool func_5(var uParam0)
{
	func_7(uParam0, uParam0->f_29.f_2, &sVar0);
	func_7(uParam0, uParam0->f_29.f_2, &sVar4);
	return (func_6(&sVar0) || func_6(&sVar4));
}

int func_6(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_29), 7))
	{
		Stack.Push(uParam0[iParam1]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_29.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
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

int func_10(int iParam0)
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

void func_11(var uParam0)
{
	func_56(uParam0);
	func_54(uParam0);
	Var20.f_1.f_6 = 1061158912;
	Var20 = { *uParam0[uParam0->f_29.f_2] };
	switch (uParam0->f_29.f_4)
	{
		case 0:
			func_53(&(uParam0->f_29), 11);
			func_52(uParam0, 1);
			break;
		
		case 1:
			if (func_51(uParam0))
			{
				uParam0->f_29.f_6 = unk_0x1C0640BA9A7327B3();
				func_52(uParam0, 2);
			}
			break;
		
		case 2:
			if (func_50(unk_0x16F2683693E537C9(), uParam0[uParam0->f_29.f_2]))
			{
				if ((func_49(uParam0) || func_47(uParam0)) || !func_46(uParam0))
				{
					func_4(uParam0, 1);
					func_52(uParam0, 1);
				}
				else if (uParam0->f_29.f_5 == -1)
				{
					if ((unk_0x1C0640BA9A7327B3() - uParam0->f_29.f_6) > 150)
					{
						func_45(&(uParam0->f_29.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (unk_0xBFC0798A6E3417F9(0, 51))
				{
					func_9(&(uParam0->f_29.f_5));
					func_42(uParam0);
					func_52(uParam0, 3);
				}
			}
			else
			{
				func_4(uParam0, 1);
				func_52(uParam0, 1);
			}
			break;
		
		case 3:
			func_41(uParam0, &sVar0);
			unk_0x3F423BF5B8125A50(&sVar0);
			if (unk_0xB4AE0788C1587752(&sVar0))
			{
				func_52(uParam0, 4);
			}
			break;
		
		case 4:
			func_41(uParam0, &sVar0);
			func_40(uParam0, &sVar16);
			if (Var20 != 3)
			{
				vVar34 = { unk_0x1BB04F10296A1C5E(&sVar0, &sVar16, func_39(uParam0), func_38(uParam0), 0, 2) };
				vVar37 = { unk_0xEEB20D14BD38615E(&sVar0, &sVar16, func_39(uParam0), func_38(uParam0), 0, 2) };
				fVar40 = vVar37.z;
				unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), vVar34, 1f, 500, fVar40, 0,15f);
			}
			func_52(uParam0, 5);
			break;
		
		case 5:
			func_26(uParam0);
			func_41(uParam0, &sVar0);
			func_40(uParam0, &sVar16);
			if (Var20 == 3)
			{
				iVar41 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 1920390111);
			}
			else
			{
				iVar41 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073);
			}
			if (iVar41 != 1 && iVar41 != 0)
			{
				uParam0->f_29.f_1 = unk_0xF66E5A439A080021(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_29.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1,5f, 0);
				unk_0x914E6894744915F8(uParam0->f_29.f_1);
				uParam0->f_29.f_8.f_4 = unk_0x1C0640BA9A7327B3();
				func_25(&(uParam0->f_29), 8);
				func_52(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(uParam0->f_29), 10))
			{
				func_53(&(uParam0->f_29), 10);
				func_24(uParam0);
			}
			func_26(uParam0);
			func_18(uParam0);
			iVar42 = unk_0xF958843510932FF6(uParam0->f_29.f_1);
			if (unk_0x69DF961355195C3C(iVar42))
			{
				if (unk_0xA45992A6CE82FB43(iVar42) >= 1f)
				{
					func_12(uParam0, 0);
					func_41(uParam0, &sVar0);
					func_40(uParam0, &sVar16);
					uParam0->f_29.f_1 = unk_0xF66E5A439A080021(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_29.f_1, &sVar0, &sVar16, 4f, -1,5f, 13, 16, 1000f, 0);
					unk_0x914E6894744915F8(uParam0->f_29.f_1);
					func_25(&(uParam0->f_29), 8);
					func_25(&(uParam0->f_29), 11);
				}
				else
				{
					func_53(&(uParam0->f_29), 8);
				}
			}
			else if (!func_8(&(uParam0->f_29), 8))
			{
				func_52(uParam0, 8);
			}
			break;
		
		case 7:
			unk_0x45934E8E3471AAA9(uParam0->f_29.f_1);
			func_52(uParam0, 8);
			break;
		
		case 8:
			iVar43 = unk_0xF958843510932FF6(uParam0->f_29.f_1);
			if (unk_0x69DF961355195C3C(iVar43))
			{
				if ((unk_0xA45992A6CE82FB43(iVar43) >= 1f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 364629851)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2116425869))
				{
					unk_0x45934E8E3471AAA9(uParam0->f_29.f_1);
					func_4(uParam0, 1);
					func_52(uParam0, 0);
				}
			}
			else
			{
				func_4(uParam0, 1);
				func_52(uParam0, 0);
			}
			break;
	}
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_13(uParam0);
		if (iVar1 != uParam0->f_29.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_29.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_29.f_8.f_2;
		}
		iVar1 = uParam0->f_29.f_8.f_1;
	}
	else if (uParam0->f_29.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_29.f_8.f_1;
		iVar2 = 3;
		iVar0 = unk_0x09AC81E49EA267F7(0, iVar2);
		if (iVar0 == uParam0->f_29.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_29.f_8.f_2 > 6)
		{
			iVar1 = func_13(uParam0);
			uParam0->f_29.f_8.f_4 = unk_0x1C0640BA9A7327B3();
		}
		else
		{
			iVar1 = uParam0->f_29.f_8.f_1;
		}
		if ((unk_0x1C0640BA9A7327B3() - uParam0->f_29.f_8.f_4) >= 90000)
		{
			iVar1 = func_13(uParam0);
			if (iVar1 != uParam0->f_29.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_29.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_29.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_29.f_8.f_3 = uParam0->f_29.f_8.f_2;
	uParam0->f_29.f_8.f_2 = iVar0;
	uParam0->f_29.f_8.f_1 = iVar1;
}

int func_13(var uParam0)
{
	if (uParam0->f_29.f_8 == 2)
	{
		return uParam0->f_29.f_8.f_1;
	}
	return (uParam0->f_29.f_8.f_1 + 1 % func_14(uParam0->f_29.f_8));
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_15(func_16(), 4, 5);
		
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

bool func_16()
{
	return func_17(unk_0xD803B885F5E47A62());
}

int func_17(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0)
{
	if (uParam0->f_29.f_4 == 6)
	{
		vVar0 = { unk_0x4F3973434662D795(0, 218), unk_0x4F3973434662D795(0, 219), 0f };
		fVar3 = vmag(vVar0);
		if ((uParam0->f_29.f_4 == 6 && !unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1322051853)) && !func_8(&(uParam0->f_29), 12))
		{
			if (fVar3 >= 0,35f)
			{
				func_23(uParam0);
			}
		}
		if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_22(uParam0))
		{
			func_4(uParam0, 1);
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
			if (((((!unk_0x798A3F1296751F46() && !func_8(&(uParam0->f_29), 0)) && !func_8(&(uParam0->f_29), 4)) && !func_21()) && !func_19(1)) && uParam0->f_29.f_8.f_2 != 3)
			{
				if (uParam0->f_29.f_5 == -1)
				{
					func_45(&(uParam0->f_29.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_29.f_4 == 6)
				{
					if (unk_0xBFC0798A6E3417F9(0, 51))
					{
						func_24(uParam0);
					}
				}
			}
		}
	}
	func_53(&(uParam0->f_29), 9);
}

int func_19(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_20(unk_0x16F2683693E537C9()))
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

int func_20(int iParam0)
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

int func_21()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return func_8(&(uParam0->f_29), 9);
}

void func_23(var uParam0)
{
	if (((func_13(uParam0) != uParam0->f_29.f_8.f_1 && uParam0->f_29.f_8.f_2 < 6) && uParam0->f_29.f_8.f_2 != 3) && uParam0->f_29.f_8.f_2 != 4)
	{
		func_12(uParam0, 1);
		func_41(uParam0, &sVar0);
		func_40(uParam0, &sVar16);
		uParam0->f_29.f_1 = unk_0xF66E5A439A080021(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_29.f_1, &sVar0, &sVar16, 4f, -1,5f, 13, 16, 1000f, 0);
		unk_0x914E6894744915F8(uParam0->f_29.f_1);
		func_25(&(uParam0->f_29), 8);
		unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
	}
}

void func_24(var uParam0)
{
	uParam0->f_29.f_1 = unk_0xF66E5A439A080021(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_41(uParam0, &sVar0);
	unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_29.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	unk_0x914E6894744915F8(uParam0->f_29.f_1);
	func_9(&(uParam0->f_29.f_5));
	func_52(uParam0, 8);
}

void func_25(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(iParam0, iParam1);
}

void func_26(var uParam0)
{
	switch (uParam0->f_29.f_4)
	{
		case 4:
		case 8:
			func_31(1);
		
		case 6:
			unk_0x2103752056F874E1();
			unk_0x770C703CAD045196(0);
			unk_0x69FCF499804D6AE7(0);
			unk_0x3584F71E5CA29322(19);
			unk_0x3584F71E5CA29322(2);
			unk_0x5A89B88F77C0FC3B();
			func_30();
			if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1) && iVar0 != -1569615261)
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), -1569615261, 1);
			}
			unk_0x38C3A68D7861DCFD(0, 37, 1);
			func_28(1);
			func_27();
			break;
	}
}

void func_27()
{
	Global_22211.f_6 = 1;
}

void func_28(bool bParam0)
{
	if (bParam0)
	{
		if (func_29())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_29()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_30()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_31(int iParam0)
{
	if (func_37())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_36(0))
		{
			func_32(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_32(int iParam0)
{
	if (func_37())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_35())
		{
			func_34(1, 1);
		}
		else
		{
			func_34(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0);
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
	if (!func_33())
	{
		Global_19486.f_1 = 3;
	}
}

int func_33()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_36(0))
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

bool func_35()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_36(int iParam0)
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

bool func_37()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

Vector3 func_38(var uParam0)
{
	vVar0 = { uParam0[uParam0->f_29.f_2]->f_8.f_3 };
	if (func_16() && uParam0->f_29.f_8 == 0)
	{
		vVar0.z = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_39(var uParam0)
{
	return uParam0[uParam0->f_29.f_2]->f_8;
}

void func_40(var uParam0, char* sParam1)
{
	switch (uParam0->f_29.f_8.f_2)
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
	}
}

void func_41(var uParam0, char* sParam1)
{
	switch (uParam0->f_29.f_8)
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
	if (func_16())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_29.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_29.f_8.f_1)
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
			switch (uParam0->f_29.f_8.f_1)
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

void func_42(var uParam0)
{
	uParam0->f_29.f_8 = func_44((*uParam0)[uParam0->f_29.f_2]);
	uParam0->f_29.f_8.f_1 = func_43(uParam0);
	uParam0->f_29.f_8.f_2 = 3;
	uParam0->f_29.f_8.f_3 = 3;
}

int func_43(var uParam0)
{
	switch (uParam0->f_29.f_8)
	{
		case 2:
			iVar0 = unk_0x09AC81E49EA267F7(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = unk_0x09AC81E49EA267F7(0, func_14(uParam0->f_29.f_8));
	}
	return iVar0;
}

int func_44(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x8A22C4C08282BF26(1974937116) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
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

bool func_46(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_29), 5));
	Stack.Push(uParam0[uParam0->f_29.f_2]);
	Stack.Push(uParam0->f_29.f_2);
	Call_Loc(uParam0->f_29.f_13);
	return (StackVal || StackVal);
}

int func_47(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if ((iVar1 != unk_0xD803B885F5E47A62() && func_48(iVar1, 1, 1)) && func_50(unk_0x9539D44F3E4492F6(iVar1), uParam0[uParam0->f_29.f_2]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, bool bParam1, bool bParam2)
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

bool func_49(var uParam0)
{
	return uParam0->f_29 & 31 > 0;
}

bool func_50(int iParam0, var uParam1)
{
	return unk_0x3D1053F9EB43B7AD(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_51(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_50(unk_0x16F2683693E537C9(), uParam0[uParam0->f_29.f_2]))
		{
			return 1;
		}
		else
		{
			uParam0->f_29.f_2 = (uParam0->f_29.f_2 + 1 % 2);
		}
		iVar0++;
	}
	return 0;
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_29.f_4 = iParam1;
}

void func_53(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(iParam0, iParam1);
}

void func_54(var uParam0)
{
	if (uParam0->f_29.f_4 == 6)
	{
	}
	else if (uParam0->f_29.f_4 > 4)
	{
		unk_0x797A01B0F40196A9(unk_0x16F2683693E537C9());
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_55(uParam0));
		uParam0->f_29.f_7 = unk_0xF4CCC8CB6DE7F1AE();
	}
	else if (uParam0->f_29.f_4 > 1)
	{
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_55(uParam0));
		uParam0->f_29.f_7 = unk_0xF4CCC8CB6DE7F1AE();
	}
	else if ((unk_0xF4CCC8CB6DE7F1AE() - uParam0->f_29.f_7) < 5)
	{
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_55(uParam0));
	}
}

float func_55(var uParam0)
{
	switch ((*uParam0)[uParam0->f_29.f_2])
	{
		case 12:
		case 10:
		case 6:
			return 0,24f;
		
		case 2:
			return 0,16f;
		
		case 3:
			return 0,18f;
		
		default:
	}
	return 0,13f;
}

void func_56(var uParam0)
{
	func_57(&(uParam0->f_29), 4, func_58());
	func_57(&(uParam0->f_29), 1, unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0));
	func_57(&(uParam0->f_29), 3, unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1));
	func_57(&(uParam0->f_29), 0, func_36(0));
	func_57(&(uParam0->f_29), 2, unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()));
}

void func_57(int iParam0, int iParam1, bool bParam2)
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

bool func_58()
{
	return Global_73825;
}

int func_59()
{
	if (!func_72(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (func_61())
	{
		return 1;
	}
	if (Global_1590380 == func_60())
	{
		return 1;
	}
	return 0;
}

int func_60()
{
	return -1;
}

int func_61()
{
	func_69(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_68())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_67())
	{
		return 1;
	}
	if (func_66(159))
	{
		if (!func_65())
		{
			return 1;
		}
	}
	if (func_66(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_62() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_62()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	switch (func_64())
	{
		case 0:
			return func_63();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_63()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_64()
{
	return Global_30768;
}

bool func_65()
{
	return Global_2450632.f_598;
}

int func_66(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_2460680;
}

bool func_68()
{
	return Global_2450632.f_593;
}

void func_69(var uParam0)
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
					func_70(iVar0);
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

void func_70(int iParam0)
{
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_48(vVar0.y, 1, 1))
		{
			iVar3 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar3))
			{
				if (unk_0x405E212DDE472467(iVar3, 0))
				{
					iVar4 = unk_0x6937EA2286828455(iVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar4, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_71(iVar4, &bVar5))
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

int func_71(int iParam0, var uParam1)
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

bool func_72(int iParam0)
{
	return unk_0x3D1053F9EB43B7AD(iParam0, 362,0188f, 4823,182f, -59,98693f, 374,756f, 4823,096f, -56,23059f, 9f, 0, 1, 0);
}

int func_73()
{
	if (Global_1590380 != func_60())
	{
		if (unk_0xADC2AA9A68E522A1("base_quaters_seats", Global_1590380, 1, 0))
		{
			return 0;
		}
		unk_0x37AD2AB54480FA6A(32, 0, Global_1590380);
		func_93(0, -1, 0);
		unk_0x256D93AFAE851A7A(0);
		func_92();
		if (func_91(Global_1590380))
		{
			func_84();
		}
		else
		{
			func_74();
		}
		return 1;
	}
	return 0;
}

void func_74()
{
	func_77(2, &uLocal_83, 0);
	func_77(3, &uLocal_83, 1);
	func_75(&uLocal_83, 6632);
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_29.f_13 = iParam1;
	func_25(&(uParam0->f_29), 5);
}

bool func_76(var uParam0, var uParam1)
{
	return !Global_31037;
}

void func_77(int iParam0, var uParam1, int iParam2)
{
	func_83(iParam0, &vVar0, &fVar3);
	(*uParam1)[iParam2] = 8;
	uParam1[iParam2]->f_8 = { func_80(func_81(), fVar3) + vVar0 };
	uParam1[iParam2]->f_8.f_3 = { 0f, 0f, (fVar3 + 0f) };
	uParam1[iParam2]->f_1 = { func_80(func_79(), fVar3) + vVar0 };
	uParam1[iParam2]->f_1.f_3 = { func_80(func_78(), fVar3) + vVar0 };
	uParam1[iParam2]->f_1.f_6 = 0,73f;
}

Vector3 func_78()
{
	return -0,67f, -1,66f, 0,7f;
}

Vector3 func_79()
{
	return -0,67f, 0f, -1,3f;
}

Vector3 func_80(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_81()
{
	return func_80(Vector(-60f, 4841,945f, 362,58f) - func_82(), (180f - -66,83f));
}

Vector3 func_82()
{
	return 361,89f, 4842,36f, -59,25f;
}

void func_83(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 361,89f, 4842,36f, -59,25f };
			*uParam2 = (180f + -66,83f);
			break;
		
		case 1:
			*uParam1 = { 366,28f, 4839,91f, -59,25f };
			*uParam2 = (180f + 28,31f);
			break;
		
		case 2:
			*uParam1 = { 367,33f, 4827,37f, -59,25f };
			*uParam2 = (180f - 163,69f);
			break;
		
		case 3:
			*uParam1 = { 370,58f, 4827,01f, -59,25f };
			*uParam2 = (180f + 163,74f);
			break;
	}
}

void func_84()
{
	func_85(2, &uLocal_83, 0);
	func_85(3, &uLocal_83, 1);
}

void func_85(int iParam0, var uParam1, int iParam2)
{
	func_90(iParam0, &vVar0, &fVar3);
	(*uParam1)[iParam2] = 5;
	uParam1[iParam2]->f_8 = { func_80(func_88(), fVar3) + vVar0 };
	uParam1[iParam2]->f_8.f_3 = { 0f, 0f, (fVar3 + 3f) };
	uParam1[iParam2]->f_1 = { func_80(func_87(), fVar3) + vVar0 };
	uParam1[iParam2]->f_1.f_3 = { func_80(func_86(), fVar3) + vVar0 };
	uParam1[iParam2]->f_1.f_6 = 0,73f;
}

Vector3 func_86()
{
	return 0f, -1,74f, 2f;
}

Vector3 func_87()
{
	return 0f, 0f, 0f;
}

Vector3 func_88()
{
	return func_80(Vector(-60f, 4845,8f, 364,74f) - func_89(), -4f);
}

Vector3 func_89()
{
	return 364,74f, 4846,2f, -60f;
}

void func_90(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 364,74f, 4846,2f, -60f };
			*uParam2 = 4f;
			break;
		
		case 1:
			*uParam1 = { 367,39f, 4845,325f, -60f };
			*uParam2 = -46f;
			break;
		
		case 2:
			*uParam1 = { 369,965f, 4827,239f, -60f };
			*uParam2 = -16f;
			break;
		
		case 3:
			*uParam1 = { 366,7f, 4827,23f, -60f };
			*uParam2 = 15f;
			break;
	}
}

bool func_91(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0].f_274.f_271.f_1, 0);
}

void func_92()
{
}

int func_93(int iParam0, int iParam1, bool bParam2)
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
		if (!func_94())
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
				if (func_68())
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
				if (func_66(157))
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

bool func_94()
{
	return Global_1312854;
}

